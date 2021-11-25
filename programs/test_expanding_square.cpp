#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

using namespace DUNE::IMC;
using namespace DUNE::Parsers;

static
void
usage(void)
{
    std::cerr << "== Usage == "
            << std::endl
            << std::endl
            << " test_expanding_square host port imcid"
            << std::endl
            << std::endl;
}

static void
sendMsg(IMC::Message& msg, UDPSocket& sock, Address& dest, int port)
{
    DUNE::Utils::ByteBuffer bb;
    msg.setTimeStamp();
    IMC::Packet::serialize(&msg, bb);
    sock.write((const uint8_t*)bb.getBuffer(), msg.getSerializationSize(), dest, port);
    msg.toText(std::cout);
}

int
main(int argc, char** argv)
{
    --argc; ++argv;
    bool calibrate = true, just_load = false, do_parse = true;

    if (argc < 3)
    {
        usage();
        return 1;
    }

    UDPSocket sock;
    Address dest(argv[0]);
    uint16_t port = atoi(argv[1]);
    uint16_t dimcid = atoi(argv[2]);

    IMC::PlanControl cmd;
    cmd.setDestination (dimcid);
    cmd.type = IMC::PlanControl::PC_REQUEST;
    cmd.op = IMC::PlanControl::PC_START;
    if (calibrate)
        cmd.flags = IMC::PlanControl::FLG_CALIBRATE;
    else
        cmd.flags = 0;
    cmd.request_id = 111;

    IMC::PlanSpecification mission_spec;

    IMC::ExpandingSquare man; // Replace Goto maneuver with the new one ExpandingSquare
    man.lat = Angles::radians(41.1843982);
    man.lon = Angles::radians(-8.70599224);
    man.z = 0;
    man.z_units = IMC::Z_DEPTH;
    man.speed = 2;
    man.speed_units = IMC::SUNITS_METERS_PS;
    // Fill the rest of the fields
    //Width?
    man.width = 100.0;
    //hstep?
    man.hstep = 20.0;
    //Bearing?
    man.bearing = 0.0;
    //First curve right?
    man.flags = IMC::ExpandingSquare::FLG_CURVE_RIGHT;

    IMC::PlanManeuver pman;
    pman.maneuver_id = "3001";
    pman.data.set(man);

    mission_spec.maneuvers.push_back(pman);
    mission_spec.plan_id = "plan-test";
    mission_spec.start_man_id = pman.maneuver_id;
    cmd.arg.set(mission_spec);
    cmd.plan_id = mission_spec.plan_id;
    sendMsg(cmd, sock, dest, port);
    return 0;
}