//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 3d77e08c98acf3cacade2e1645b8e078                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.897202194456);
    msg.setSource(42124U);
    msg.setSourceEntity(2U);
    msg.setDestination(38018U);
    msg.setDestinationEntity(45U);
    msg.state = 189U;
    msg.flags = 164U;
    msg.description.assign("SKAPUANYKRSQPCOMADBELFLEGWHLEDLEXTYYAWHIOHYZOTXTZZVZWCSAKPFGLQTQDQVLHVUATGTNFWWMJZIKQPUNYRITLFDVSHXMSEGTSLQRQLBBIJVCQVCPWSUGFJBHRVNDNOIHGBVDIIDXXJGCUUOMKJSCEPNJBFWKLFDBCPRBRYTAMZNNFEPYWNQTWURFXZZYMOCURGHDZPEJIJAANJHOKKKZMXGMPBABFUMXXRCXGCRO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.25387227965);
    msg.setSource(17903U);
    msg.setSourceEntity(152U);
    msg.setDestination(63571U);
    msg.setDestinationEntity(86U);
    msg.state = 95U;
    msg.flags = 224U;
    msg.description.assign("OFEGSUYRDFDBPCKVANDMDOGJZLMBWAXVILAMGTSRRQYPKGSRXFBHUJCFPWLWYCNLSQRIYBIKJPQGMRZNSLFKTDUAYNXNHMQKIYMFBTWTYWUAPTSNFFGCFBVAPUAUPHCZJLTKIYIWONVXIGMMXUBBESKVSWHTVGRTSONJIQHZVQMVTHAOLUEOVDFZEP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.0492215463567);
    msg.setSource(27499U);
    msg.setSourceEntity(34U);
    msg.setDestination(50376U);
    msg.setDestinationEntity(9U);
    msg.state = 34U;
    msg.flags = 112U;
    msg.description.assign("REBPJIXKJIWGVNPJVXCNXODEDDYDIEYPHUXJIVKGRTLKVHBOAYGZRFYPZWMBDRQEHXYUNQAKJOKBZVMNHZYSULGOXZVIOMBODNCWHQUCYPQKCIPZNBWLTHZHSSTRWLABSXIFRSMWOTEEUHLAEKAKDIAQOAVOVUMKICDNWUMXAICUXYFGCJFWQBJWXREJHMSHC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.96873146905);
    msg.setSource(16119U);
    msg.setSourceEntity(248U);
    msg.setDestination(48449U);
    msg.setDestinationEntity(58U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.778730760085);
    msg.setSource(6800U);
    msg.setSourceEntity(218U);
    msg.setDestination(2140U);
    msg.setDestinationEntity(73U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.51651735155);
    msg.setSource(21896U);
    msg.setSourceEntity(199U);
    msg.setDestination(34868U);
    msg.setDestinationEntity(148U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.471194677527);
    msg.setSource(37485U);
    msg.setSourceEntity(239U);
    msg.setDestination(55526U);
    msg.setDestinationEntity(142U);
    msg.id = 113U;
    msg.label.assign("LVGFRQBLCQWLPUIVDXITNKZRSMVYERSOCANZYULTWOOMKRVDECNLEMOVSHPOOILDFXELTXGAYOVASZKRFZNBTWYPCWPDQJJIPVKQN");
    msg.component.assign("ROSYMSAIWDTZJFVJYPOZOSFHZNJJBDYYLAVMUOQIBBGAMUTDCLZHKHLXAMIOLVNTOYBJZQRKRQYILT");
    msg.act_time = 39091U;
    msg.deact_time = 41012U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.3465430982);
    msg.setSource(26380U);
    msg.setSourceEntity(144U);
    msg.setDestination(35146U);
    msg.setDestinationEntity(87U);
    msg.id = 166U;
    msg.label.assign("PNAEZRSDOFAHNFYGNLIXPIMGJEIOBRLGDNVEXBKHRIEEJLIDPMXUHMTQCRIOBBKZBDPUAMJRUIJPHASUUJHVGUTRJSPGKJGVQHYUQFAXMRCFLOTGDZNXOZPCIQUQQHVVBWYTIDHDRWFJYTVWDWXXNZYTWQSREHOVLFUSWOYFCMUNOEEMTDZYLSEBSCXXNPWCLXWPQEFGKAHMZZSVRGMSVBBLPKZKOAYYZ");
    msg.component.assign("ZPVURNHGKUDAVOTKISGSCEGXJOIYZOXVDAWFSXKAYUNBIEMLAVINFCDXEJOBERMNQVSLIKFRLAX");
    msg.act_time = 39536U;
    msg.deact_time = 11021U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.142831379188);
    msg.setSource(9839U);
    msg.setSourceEntity(84U);
    msg.setDestination(31881U);
    msg.setDestinationEntity(97U);
    msg.id = 97U;
    msg.label.assign("WOHKJGCKWJTZUZZMOLECPAHCNTWOZIZUPQJQBBTHGBEJLTQNJWSYDCSCDGAVMFPHPFQEADREZAXFYOYXFQYIBVXDEVSLJMQFKBEWOMHIKGGNUNKXDIJKSKEFYNELBIUSBPDAFMNONURRHQKAFAYTRDEIOHVRNDRVSMUQXMZNKLBPJJZTROOCGXHIPJAV");
    msg.component.assign("LPJOORYSCGGNUPDWXWBFBUIWWXSHSGCNGGPLOHAOMTXLGFYQEUHSXHSLZMOHDALZMWIWRYIBNJSPKIFATENKFGKBLRQQZDFMLVFTAAQQCVQYHIKGEBHICKXZYOEYRDNCIVMVJYTDQEUUBVCGAZRRFRFUIHHKQCMVDIVYJOTBKQNAWVBPEFJNUZEMXNLRQPKMSZO");
    msg.act_time = 428U;
    msg.deact_time = 50616U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.199056018232);
    msg.setSource(2158U);
    msg.setSourceEntity(72U);
    msg.setDestination(1667U);
    msg.setDestinationEntity(136U);
    msg.id = 102U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.655438344693);
    msg.setSource(37671U);
    msg.setSourceEntity(242U);
    msg.setDestination(29508U);
    msg.setDestinationEntity(27U);
    msg.id = 237U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.521064788504);
    msg.setSource(10117U);
    msg.setSourceEntity(196U);
    msg.setDestination(51439U);
    msg.setDestinationEntity(13U);
    msg.id = 70U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.301285304668);
    msg.setSource(63085U);
    msg.setSourceEntity(244U);
    msg.setDestination(44765U);
    msg.setDestinationEntity(221U);
    msg.op = 150U;
    msg.list.assign("GJAMTJAGHLSEPWAESCYRTKGQQFFAYQKKJZOXYMTVJDGCBXPTNBWKRTSOXNZTHPMNADLPXICVLVVDVNZUWJTEBYVOQFAZMMSSERGEIEYSIPBWOUDYZOCWKXBYUCLPFIUAQJGDVUOILVSMQMXHQSHEDQFPHLDPHQFRXRUWSHPYBINGKNUDMLXHGJBMFCVRUFZFEBAYWDLEYZLXETRNIZOZSNWCTWKZGCXRFIJBIKNRHTKRDPOU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.693650102586);
    msg.setSource(3868U);
    msg.setSourceEntity(146U);
    msg.setDestination(49860U);
    msg.setDestinationEntity(164U);
    msg.op = 154U;
    msg.list.assign("VUZBMCFLXJTGNNOAKBRCGNKU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.627408559338);
    msg.setSource(34310U);
    msg.setSourceEntity(211U);
    msg.setDestination(2227U);
    msg.setDestinationEntity(109U);
    msg.op = 62U;
    msg.list.assign("VQBRDGFBQPAHMFGLIHGMDRRCFEJWJSAPJHRIUTNFIYPKEIIZCNAPZEVWYUEYLZRRIVXNOURLEKXDPNMYTJOUNMJVXKTZUIDOZKIWGYBUWDDA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.297127016719);
    msg.setSource(9335U);
    msg.setSourceEntity(24U);
    msg.setDestination(64064U);
    msg.setDestinationEntity(48U);
    msg.value = 28U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.0396876012314);
    msg.setSource(38241U);
    msg.setSourceEntity(23U);
    msg.setDestination(5903U);
    msg.setDestinationEntity(222U);
    msg.value = 190U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.19846516232);
    msg.setSource(513U);
    msg.setSourceEntity(156U);
    msg.setDestination(22139U);
    msg.setDestinationEntity(129U);
    msg.value = 149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.973804430912);
    msg.setSource(31301U);
    msg.setSourceEntity(141U);
    msg.setDestination(796U);
    msg.setDestinationEntity(4U);
    msg.consumer.assign("DWVTPAOSFPZREUACLKOJFCYCGFXVUFCKBHNEYTMIHBZSBECQCQICPOYYURVLJIZEPCYGNQQPGNKRNCMJGGNWJQPIXHIOFWXPIGXDWLRSFAHNODEAUWJSQAQTBUBUKSZLKWHZGSXBMVLQJVYRVJAZREBZSNHYR");
    msg.message_id = 29939U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.594952819673);
    msg.setSource(28242U);
    msg.setSourceEntity(69U);
    msg.setDestination(35546U);
    msg.setDestinationEntity(108U);
    msg.consumer.assign("EPAGTKOVICEEZVZNRFJLRONHCXOLEETKAVCNURNDJQNMADWGZWAVBXJDRKEVILUICMWNDUCHBCSXJFDPTQTHQHOZXUCUXYIYINJAVMVABJQRYYGWYYQXKJJWSHBGBEIUKIGBMSRGAYBBQDMPVMHSSKZFIWTBTWMYRHEBLFMLKDQWSZXRLQOGLOUAEKVFYSFLTSZGJZQQKTMRPTDOFC");
    msg.message_id = 23630U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.379272086689);
    msg.setSource(21431U);
    msg.setSourceEntity(57U);
    msg.setDestination(9553U);
    msg.setDestinationEntity(166U);
    msg.consumer.assign("RCFMAZQQRUTARVYEWUEQKRVAJIWPLXLGNDJARKRBKZ");
    msg.message_id = 48583U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.0341986228137);
    msg.setSource(38116U);
    msg.setSourceEntity(135U);
    msg.setDestination(23651U);
    msg.setDestinationEntity(135U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.482739300014);
    msg.setSource(42755U);
    msg.setSourceEntity(173U);
    msg.setDestination(28803U);
    msg.setDestinationEntity(154U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.23955531484);
    msg.setSource(7460U);
    msg.setSourceEntity(167U);
    msg.setDestination(51066U);
    msg.setDestinationEntity(199U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.232561823448);
    msg.setSource(22914U);
    msg.setSourceEntity(77U);
    msg.setDestination(49024U);
    msg.setDestinationEntity(172U);
    msg.op = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.15885330665);
    msg.setSource(47078U);
    msg.setSourceEntity(110U);
    msg.setDestination(59145U);
    msg.setDestinationEntity(213U);
    msg.op = 74U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.347978432953);
    msg.setSource(53026U);
    msg.setSourceEntity(6U);
    msg.setDestination(18273U);
    msg.setDestinationEntity(179U);
    msg.op = 32U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.493304456828);
    msg.setSource(13292U);
    msg.setSourceEntity(87U);
    msg.setDestination(45944U);
    msg.setDestinationEntity(71U);
    msg.total_steps = 141U;
    msg.step_number = 125U;
    msg.step.assign("IHTUZNMVAHITCYMJJFHJRMGQ");
    msg.flags = 236U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.947280175607);
    msg.setSource(20241U);
    msg.setSourceEntity(14U);
    msg.setDestination(58025U);
    msg.setDestinationEntity(245U);
    msg.total_steps = 120U;
    msg.step_number = 175U;
    msg.step.assign("KRBWOQBQVIGANCGNKZRUZPGWYCGZXOMKOLCIMUWFZVTHINNQEPSKJXMQPDYFBUPKSCUJAVRLFJTHFPWXPQWMANBSOODSLHUTWEAAXLIRLYFXSNS");
    msg.flags = 92U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.205962400382);
    msg.setSource(10936U);
    msg.setSourceEntity(166U);
    msg.setDestination(3327U);
    msg.setDestinationEntity(99U);
    msg.total_steps = 233U;
    msg.step_number = 137U;
    msg.step.assign("AGLWBJDBXKPKZZSIFLHLZPONTRANMAJHSOXITTIHLBZXNYPVFOQHYPSPRIGLNXPJMQBIMTUYSPQCHQDDHLPSJXAEIRTNUXYECECRUBHWOXMTLSDQVJRGFNJEEXMV");
    msg.flags = 21U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.542928758861);
    msg.setSource(50463U);
    msg.setSourceEntity(105U);
    msg.setDestination(53367U);
    msg.setDestinationEntity(183U);
    msg.state = 105U;
    msg.error.assign("TUCIJVCQDEVZWTFUENBCVBLLGDMYAHXJCYYGJTATZIRSPRUNEWIUDCUBNRIDMGHSUTTMPRZMEAKNRDMRSVHHOVEOIUUZPDNTPOQSTWWQYBQWIKZBBAOMPFGLAXNMFJSHNQFEKXFUJHNYRVDKYGMVZWXMLFLYPQKMGBEXROPFSGIQTUZDBWPVHRGDCZZNAVOJHALCBWJOJIV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.474550817498);
    msg.setSource(11981U);
    msg.setSourceEntity(177U);
    msg.setDestination(16650U);
    msg.setDestinationEntity(189U);
    msg.state = 228U;
    msg.error.assign("AYYXNHFRNVGUIWBNSZQJZAW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.121163612494);
    msg.setSource(54423U);
    msg.setSourceEntity(94U);
    msg.setDestination(9535U);
    msg.setDestinationEntity(67U);
    msg.state = 32U;
    msg.error.assign("IJDHYAGMSKQJCQFDPKCJNRGFPJDVIBOAFWLKCKYOYTYWMLTPJRGJFTJTUMQYOHVDIQNOZTWJKPALETXIMSUSYCGEUDVFQJZFURUXHSNYALOLNNFOCRABTNELKTFZUKTMGEOMOSWVHPE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.305171866551);
    msg.setSource(63446U);
    msg.setSourceEntity(179U);
    msg.setDestination(2038U);
    msg.setDestinationEntity(139U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.540673794651);
    msg.setSource(437U);
    msg.setSourceEntity(174U);
    msg.setDestination(4179U);
    msg.setDestinationEntity(165U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.253779904134);
    msg.setSource(21800U);
    msg.setSourceEntity(86U);
    msg.setDestination(32002U);
    msg.setDestinationEntity(143U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.480566006665);
    msg.setSource(48714U);
    msg.setSourceEntity(152U);
    msg.setDestination(41304U);
    msg.setDestinationEntity(6U);
    msg.op = 91U;
    msg.speed_min = 0.210118837899;
    msg.speed_max = 0.494426453919;
    msg.long_accel = 0.878536387638;
    msg.alt_max_msl = 0.624431490232;
    msg.dive_fraction_max = 0.745132662204;
    msg.climb_fraction_max = 0.237622631659;
    msg.bank_max = 0.4906535479;
    msg.p_max = 0.0815775947829;
    msg.pitch_min = 0.252147923473;
    msg.pitch_max = 0.72475857587;
    msg.q_max = 0.0523261002797;
    msg.g_min = 0.211329850798;
    msg.g_max = 0.198574257833;
    msg.g_lat_max = 0.68625655002;
    msg.rpm_min = 0.787029913472;
    msg.rpm_max = 0.265922526683;
    msg.rpm_rate_max = 0.967396443484;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.813821619158);
    msg.setSource(40711U);
    msg.setSourceEntity(203U);
    msg.setDestination(61727U);
    msg.setDestinationEntity(101U);
    msg.op = 3U;
    msg.speed_min = 0.518596347391;
    msg.speed_max = 0.87313673967;
    msg.long_accel = 0.857850003517;
    msg.alt_max_msl = 0.148482702606;
    msg.dive_fraction_max = 0.183116539028;
    msg.climb_fraction_max = 0.551752154927;
    msg.bank_max = 0.880893480921;
    msg.p_max = 0.413272078938;
    msg.pitch_min = 0.551295083671;
    msg.pitch_max = 0.281544002071;
    msg.q_max = 0.655947980192;
    msg.g_min = 0.148679835373;
    msg.g_max = 0.819656248341;
    msg.g_lat_max = 0.0924123413085;
    msg.rpm_min = 0.0772092739869;
    msg.rpm_max = 0.332466757171;
    msg.rpm_rate_max = 0.0883362723644;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.105162330239);
    msg.setSource(14584U);
    msg.setSourceEntity(67U);
    msg.setDestination(63319U);
    msg.setDestinationEntity(16U);
    msg.op = 178U;
    msg.speed_min = 0.865930456355;
    msg.speed_max = 0.745489620902;
    msg.long_accel = 0.423369544034;
    msg.alt_max_msl = 0.26792168269;
    msg.dive_fraction_max = 0.417960410024;
    msg.climb_fraction_max = 0.861395412455;
    msg.bank_max = 0.314950278714;
    msg.p_max = 0.728777966018;
    msg.pitch_min = 0.864891312779;
    msg.pitch_max = 0.0533786220179;
    msg.q_max = 0.182703957492;
    msg.g_min = 0.572776124863;
    msg.g_max = 0.0413340845423;
    msg.g_lat_max = 0.482492499316;
    msg.rpm_min = 0.924469888747;
    msg.rpm_max = 0.165020863263;
    msg.rpm_rate_max = 0.460636996713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.160989590033);
    msg.setSource(40444U);
    msg.setSourceEntity(211U);
    msg.setDestination(65331U);
    msg.setDestinationEntity(78U);
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 41838U;
    tmp_msg_0.ttl = 33594U;
    tmp_msg_0.destination.assign("EFDKHCWDBHBDJDVPODMWTIMXQSGAYVLLOQKBXPIQMANQGCTVZMANUUWRVVWEYWCFRLKJKUUAEXNPXRKUZPIZVTRSWZSYFJLHBIRGQHTWHRZOICGQABPNKYLLIWYLXJQJNOQTTKLACIXMWSSHLJOTRMIFKDSMFIVCGZEDCRNTASZFKGBGHNCYQSSDEBNFYSGYPAENAXEOXJPYJTEZAPHMUMYRGEGOFUUBXVDMPKZFHIFOOCVVNEQTRJ");
    const char tmp_tmp_msg_0_0[] = {59, -94, 93, -10, 123, 83, 4, -64, 124, 1, 67, -91, -14, 88, 105, -93, 116, -68, 17, 55, -95, 46, -44, 25, -98, -40, -54, 15, 16, 58, -50, -75, 104, 5, 25, -99, 2, 71, -104, 116, -110, 36, -112};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.401239670226);
    msg.setSource(1718U);
    msg.setSourceEntity(75U);
    msg.setDestination(54635U);
    msg.setDestinationEntity(42U);
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.884603813917;
    tmp_msg_0.lon = 0.452017452517;
    tmp_msg_0.z = 0.511658101396;
    tmp_msg_0.z_units = 246U;
    tmp_msg_0.speed = 0.372339135812;
    tmp_msg_0.speed_units = 77U;
    tmp_msg_0.bearing = 0.145774331244;
    tmp_msg_0.cross_angle = 0.89591425758;
    tmp_msg_0.width = 0.918277346922;
    tmp_msg_0.length = 0.71207116492;
    tmp_msg_0.coff = 209U;
    tmp_msg_0.angaperture = 0.359142361842;
    tmp_msg_0.range = 4842U;
    tmp_msg_0.overlap = 193U;
    tmp_msg_0.flags = 42U;
    tmp_msg_0.custom.assign("SUHQRWBVPCTBGYOMYAMWLFWRXFSSDXEVHUMYWTXWDZALRQIGWQLUDZFMZVNVAINRNOOOEIIKKQCZONIBBMGCRPVHTDQKKGHEREJMDETNFFZVJJDQCXXQRATCTNYNLUGYTLELDGWSNBYHEICVXAPYBKMJYQOSWFPFEDQUJG");
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.902112478778);
    msg.setSource(52628U);
    msg.setSourceEntity(45U);
    msg.setDestination(7983U);
    msg.setDestinationEntity(218U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.501322311274);
    msg.setSource(20021U);
    msg.setSourceEntity(36U);
    msg.setDestination(62924U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.502328308916;
    msg.lon = 0.204363238515;
    msg.height = 0.850708030805;
    msg.x = 0.489801717376;
    msg.y = 0.779703799235;
    msg.z = 0.639979519114;
    msg.phi = 0.762049539007;
    msg.theta = 0.0471799351666;
    msg.psi = 0.975485167819;
    msg.u = 0.630344613652;
    msg.v = 0.357807285608;
    msg.w = 0.936421025566;
    msg.p = 0.790368379578;
    msg.q = 0.951083524818;
    msg.r = 0.110419724317;
    msg.svx = 0.770552435999;
    msg.svy = 0.911480252162;
    msg.svz = 0.0465106993862;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.992478798424);
    msg.setSource(18589U);
    msg.setSourceEntity(10U);
    msg.setDestination(14590U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.51163120944;
    msg.lon = 0.514008784063;
    msg.height = 0.158651043991;
    msg.x = 0.0532767222159;
    msg.y = 0.414243930175;
    msg.z = 0.499033720443;
    msg.phi = 0.684474491827;
    msg.theta = 0.513697670277;
    msg.psi = 0.225538982928;
    msg.u = 0.674610841214;
    msg.v = 0.117068865362;
    msg.w = 0.621046096406;
    msg.p = 0.0170475266529;
    msg.q = 0.021503531573;
    msg.r = 0.622058211046;
    msg.svx = 0.962343179157;
    msg.svy = 0.460503954613;
    msg.svz = 0.377499914237;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.224023937305);
    msg.setSource(25284U);
    msg.setSourceEntity(197U);
    msg.setDestination(13259U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.0789209483734;
    msg.lon = 0.397864535044;
    msg.height = 0.233615141409;
    msg.x = 0.34401746722;
    msg.y = 0.860241746229;
    msg.z = 0.814819870137;
    msg.phi = 0.0585537658585;
    msg.theta = 0.353690251425;
    msg.psi = 0.880965678226;
    msg.u = 0.80051475317;
    msg.v = 0.26635368007;
    msg.w = 0.825131265785;
    msg.p = 0.548989904264;
    msg.q = 0.0662178920428;
    msg.r = 0.939801832935;
    msg.svx = 0.964901296722;
    msg.svy = 0.397179102662;
    msg.svz = 0.508499016546;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.159987901007);
    msg.setSource(53515U);
    msg.setSourceEntity(203U);
    msg.setDestination(37836U);
    msg.setDestinationEntity(23U);
    msg.op = 98U;
    msg.entities.assign("TKUHNBJGURYJDIPIYDGRFCWLVIUGPYZPPOUWAYDTOHGHABPQTCGPJSYXRMMVTBXKBZIAKAFRWXLDEPINBQEXRHOGZZKWHHLFBRIJVZQSCDTBEPQHTMXQAKBWLVFVONMONQREGWPGMDSYOTQPKLXAFHMUVMCKIVDMUEKSFUIBHYIWTSYKZHCAFLRZROEBZLEFXWFUAVTCEMGCTNVLLNQENNGWVDCAXOOZJOINJZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.986882463395);
    msg.setSource(11965U);
    msg.setSourceEntity(6U);
    msg.setDestination(6254U);
    msg.setDestinationEntity(164U);
    msg.op = 48U;
    msg.entities.assign("UMXTVCHJINENZALLMDYLBRSQUNUWMSFFUJRBBNDEVZKGRHIQJPWLYGDBTCACCRTRJYEPJZPVUWMFHYMINZOBYFTKKIULGKCTAOVSWQIZTDGMENKYZSVJUONDJFMJHLFTXBLBRAPGPJRDNFTSGSHEGYWAWCSPMUQTAGCKUWIMRXDAGLL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.921867622833);
    msg.setSource(21623U);
    msg.setSourceEntity(84U);
    msg.setDestination(48819U);
    msg.setDestinationEntity(47U);
    msg.op = 83U;
    msg.entities.assign("ERPIUTOKSWSZHEHBXSHAYKAJMNRAFILPEUDSUKXVSBQFWKMGJGGPTPJXMYSEIXIOJYTWFDKLPPZDQQVNJWIOSEHTMWPCNQBBKJUOYHYRRXDBAFCEBOVAG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.64891163763);
    msg.setSource(23559U);
    msg.setSourceEntity(148U);
    msg.setDestination(44775U);
    msg.setDestinationEntity(231U);
    msg.type = 115U;
    msg.speed = 37582U;
    const char tmp_msg_0[] = {58, -111, -105, 17, -6, 102, -43, 123, -76, 99, 2, -91, -85, 73, -93, -104, -20, 57, 13, -81, 33, -104, 56, 124, -32, -68, 17, -37, -5, 19, -114, 50, 22, 92, -7, 20, -66, -26, 62, -35, 11, -5, 95, -110, 24, 75, 111, -18, 64, 122, -62, 79, 14, -58, -35, -44, 119, 27, -14, -91, -10, 93, -117, 77, -83, -112, 119, 104, -99, 44, -2, 55, -66, 42, 78, -18, -109, 12, -12, -28, 40, 59, -12, -50, 90, -116, 106, -109, -31, 70, -72, 123, -76, -44, 20, 14, 119, -23, 95, 38, 103, 103, 39, 32, -35, -2, 58, 80, 14, 94, -24, 62, -82, -58, -117, -6, -20, -42, 30, 46, -54, 1, -80, -73, -24, 4, 112, 100, -101, 123, 112, 21, 100, 119, -52, -95, -127, 110, -17, -29, 126, -81, -117, -52, -17, -110, 5, 69, 18, 19};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.429638795389);
    msg.setSource(48804U);
    msg.setSourceEntity(113U);
    msg.setDestination(32079U);
    msg.setDestinationEntity(181U);
    msg.type = 104U;
    msg.speed = 14502U;
    const char tmp_msg_0[] = {65, -16, -45, -34, 17, 104, 14, 35, 25, -125, 126, -60, 116, -105, -57, -120, 115, -112, 100, 32, 13, -76, 14, -93, -7, 70, 28, -106, 19, 0, -73, 72, 96};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.666252612783);
    msg.setSource(32259U);
    msg.setSourceEntity(83U);
    msg.setDestination(56542U);
    msg.setDestinationEntity(178U);
    msg.type = 86U;
    msg.speed = 20771U;
    const char tmp_msg_0[] = {-35, 97, -84, 67, -45, -113, -23, -45, -62, 108, -74, -116, -62, -17, 35, 6, 4, -12, 69, 62, -102, -94, 71, 55, -34, -47, -76, -96, -37, 55, -23, 15, 33, 34, -22, -100, 68, 87, 75, 106, 81, -42, 83, -105, 30, 118, 108, 85, -124, -108, 103, 31, 78, -67, -108, -23, -85, 60, 11, -39, 92, -74, 122, 1, 24, 23, 46, -81, 122, -80, 68, -47, -29, 36, 94, 71, 10, 72, -120, 49, 71};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.770892016908);
    msg.setSource(12231U);
    msg.setSourceEntity(15U);
    msg.setDestination(48380U);
    msg.setDestinationEntity(127U);
    msg.op = 18U;
    msg.tas2acc_pgain = 0.47849468087;
    msg.bank2p_pgain = 0.659682842588;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.395109056145);
    msg.setSource(23189U);
    msg.setSourceEntity(97U);
    msg.setDestination(52889U);
    msg.setDestinationEntity(45U);
    msg.op = 201U;
    msg.tas2acc_pgain = 0.628457029497;
    msg.bank2p_pgain = 0.640656973852;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.12235709252);
    msg.setSource(24941U);
    msg.setSourceEntity(121U);
    msg.setDestination(11387U);
    msg.setDestinationEntity(155U);
    msg.op = 59U;
    msg.tas2acc_pgain = 0.760555889216;
    msg.bank2p_pgain = 0.359636926269;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.709197695902);
    msg.setSource(58441U);
    msg.setSourceEntity(74U);
    msg.setDestination(26299U);
    msg.setDestinationEntity(30U);
    msg.available = 3501317102U;
    msg.value = 159U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.789751396378);
    msg.setSource(16638U);
    msg.setSourceEntity(172U);
    msg.setDestination(45910U);
    msg.setDestinationEntity(189U);
    msg.available = 3600236503U;
    msg.value = 187U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.750510856472);
    msg.setSource(52843U);
    msg.setSourceEntity(158U);
    msg.setDestination(41624U);
    msg.setDestinationEntity(194U);
    msg.available = 2685821546U;
    msg.value = 114U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.566652026017);
    msg.setSource(52490U);
    msg.setSourceEntity(10U);
    msg.setDestination(9245U);
    msg.setDestinationEntity(21U);
    msg.op = 131U;
    msg.snapshot.assign("QICSVSVRJFIDHAXDAVGJCFNRPISYWHEUGALZUBJEZJAOMNVFEYPOKTKIMTBLBFJSBUDIIHOYOLXQYHDTWEMSNTAZ");
    IMC::TemporalPlan tmp_msg_0;
    tmp_msg_0.plan_id.assign("WFKIZEAMGBRVEXMLKYEQDLWIRJRNQDTXTQDNLLERUWHKJQXMPTMUHWUIGDBJQRRZXNYSHOBXMMFRNADXBUENLCMOPTWVCCDOEWYYBMBUWHUXDGTLWLHFDVUHQKJOXQEYEVPVFGZYTHWEHPJDBCJJSJZGGAMASNCLAYKYUAI");
    IMC::TemporalAction tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action_id.assign("MEXUNXNSCLMBUORBKUHJUNINHJGEJKLJZOPLWUXCNTWQEYLXEHRKWQRLWRJINRTWHZHQYZWFLCQPSKNOUFMKYKDPVPMSMJAQZSGCFFLQMKIVBNDYOBCLICTADFPNRUQAIXTFOHBTVGZFQCOZWJSTFVEDPCMTVAIIABQAXGOHKSDOCERDWBEDTBDGKM");
    tmp_tmp_msg_0_0.system_id = 38133U;
    tmp_tmp_msg_0_0.status = 122U;
    tmp_tmp_msg_0_0.start_time = 0.466286027945;
    tmp_tmp_msg_0_0.duration = 0.389000482699;
    IMC::PlanSpecification tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.plan_id.assign("NYQTKECICXDVLNFXCZRFWTZNFEXSQTIUWLCMGUQKSOGBIMVXUGCGNAOBJSEPVRJUQVZBPPPHUBETFIXEZOIMGHQZOHHUKDGSLOWMMUHUQSTNXSYGNNFRRWVKBFAWSKMSJTDTIEXPAQNBLTNGQHJTOKORCRXJWRCDYLAZJ");
    tmp_tmp_tmp_msg_0_0_0.description.assign("ZIGDGQFGCXFNGFVQJNMTHVVOIRVNZFTMDYOKZMINTLWEPAKTQOKMVPXOKRYLTPCIUHCYMJNEAHTPWOBLUQPHWSNNFTAWZFYEBBHPUJCYGOSBICVXFZMDSISRQYYGDPAXVDLVCRXQZUQDTNSHQMU");
    tmp_tmp_tmp_msg_0_0_0.vnamespace.assign("AVMHLDKLCEBKJYDOCUZNAZEOWLDWNFPNRSRPKYIDNMVZGKEJHGVOJPJQTGLSRFTUDMRY");
    tmp_tmp_tmp_msg_0_0_0.start_man_id.assign("BPQOEOKETRCKGTMAMGJNWKUCJZZRJTIMGEUZYYPZHVUNXVAQTGXERZAHMOUBWPWYXAHHZBQTEOFDYQICCTDIXVGFYWXQHUHZBSHAERLFFRWTEGAFPRSXMUUAVPODDLONYWOLQJNWHGJZLRQUEACELMIIC");
    IMC::Fluorescein tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.value = 0.495577818659;
    tmp_tmp_tmp_msg_0_0_0.start_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    IMC::FormState tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.possimerr = 0.261022843189;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.converg = 0.703198603274;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.turbulence = 0.733844039787;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.possimmon = 51U;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.commmon = 50U;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.convergmon = 116U;
    tmp_tmp_tmp_msg_0_0_0.end_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    tmp_tmp_msg_0_0.action.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.type = 83U;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.822793253139);
    msg.setSource(17787U);
    msg.setSourceEntity(135U);
    msg.setDestination(60260U);
    msg.setDestinationEntity(109U);
    msg.op = 99U;
    msg.snapshot.assign("DQKNQCMRTNALQFODRXAYAGRDJZGEDLIPA");
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.399544768801;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.427466737613);
    msg.setSource(13904U);
    msg.setSourceEntity(82U);
    msg.setDestination(53112U);
    msg.setDestinationEntity(28U);
    msg.op = 124U;
    msg.snapshot.assign("ICKTLVJLJDBPBXFNODBMGADZAPHXQDSUGLELONIHDN");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 61185U;
    tmp_msg_0.lat = 0.241883506136;
    tmp_msg_0.lon = 0.315076456816;
    tmp_msg_0.z = 0.243913547496;
    tmp_msg_0.z_units = 32U;
    tmp_msg_0.duration = 19969U;
    tmp_msg_0.speed = 0.396374877165;
    tmp_msg_0.speed_units = 174U;
    tmp_msg_0.type = 53U;
    tmp_msg_0.radius = 0.190025488749;
    tmp_msg_0.length = 0.60496813878;
    tmp_msg_0.bearing = 0.268167541154;
    tmp_msg_0.direction = 159U;
    tmp_msg_0.custom.assign("HKWCKXTYSFODSGZZAJVGGKBINJRCJNTYLJMVFHQEBIKBEPJGLMTACZBGRWGEGOQHQZUKOKXPUBOLCLNHWHADSOJQFFOMKIBNQCLFTDPKEUSVEVQANWMWVPRSZIENJHUTCBYZLQQTHRHWAVDQCHZVJRAIWRBASUFJRTNUEZDRUDNNEWZOSYIAOMXXYWQKDMI");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.860638432012);
    msg.setSource(56725U);
    msg.setSourceEntity(159U);
    msg.setDestination(22769U);
    msg.setDestinationEntity(112U);
    msg.op = 117U;
    msg.name.assign("WXKOTUHJOVMNWLAEZVMWRQGJQPDOWVAHFVXJEHLKHJGFKIXIYGPDDADVISPEUWOSWQAPNRRLKYQDLHZCYIYPJZTBXAICRCRQVULIQNULXNTYOMPZNOKQMQIYWGBOMTBBDDPMKTWUJXTZYJPCIFAGFUFMBCFOCMHCSDRLEEEBAUISOXKQTSVHSQPSVXUSBFTYXSTHAGKHUNCZHZIJLNSTRFBKBEZYWGZLNFZDMU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.69081807638);
    msg.setSource(5064U);
    msg.setSourceEntity(25U);
    msg.setDestination(53729U);
    msg.setDestinationEntity(79U);
    msg.op = 18U;
    msg.name.assign("WSXGLWGYDCFUIWRRGPKUKYJLVKKJWCXWXWTAPMLYKIOYNQPUTJTLALTKGPZOQPFVGNPQATEDRUMAVCMFCGFMEVXPXAHNMCXFUEAAIVRSANLDFSSCISSJOGAIVRVPUTZGQPDCDJNDIBBVLTFJLMO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.3506591554);
    msg.setSource(40930U);
    msg.setSourceEntity(135U);
    msg.setDestination(47569U);
    msg.setDestinationEntity(118U);
    msg.op = 252U;
    msg.name.assign("JXTWHFIUFMZTXRORUSRWEGP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.973581627264);
    msg.setSource(26966U);
    msg.setSourceEntity(19U);
    msg.setDestination(10703U);
    msg.setDestinationEntity(109U);
    msg.type = 25U;
    msg.htime = 0.848875920491;
    msg.context.assign("SGGDASLUTNKJEBJREGWVYUBNUTFPBCUZWANRRTYONUZOIKUTDWVOZRAOPOFXSZTCOMSPOXASKEMDDFIDNDBHNHZFWYUPGIXBHNABCJHLBXRFQEWEIQHVGYSXJMYVRUSXLEIHFAQRT");
    msg.text.assign("YXMIGLFWZTSGPENQUCYNCIKYDBVDVEJCPAAPNVEQEHYJWEISTHZIHLVNCMFSDVXIXHIZTRZGUFOUWIOMLDXKEAWZXGLRQSHINUPTDXAJKLVXSBTPWIHOZMAJGMHBWEQBECHUFOGSVY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.983128315158);
    msg.setSource(1021U);
    msg.setSourceEntity(190U);
    msg.setDestination(29615U);
    msg.setDestinationEntity(99U);
    msg.type = 111U;
    msg.htime = 0.791986028848;
    msg.context.assign("OZWTMPWMIOWDFBZATNJVYUIIKRZVROFV");
    msg.text.assign("NCHZUZDJLJYOKZXOEJZNRLMWGIRTEBEVVYTCUQUJDEIGXFGTKCIJSMMFIPDHRSARMHGMAHKQLTMZFBOXWJWIKWJFGPTCLWEDRHPTYONIHWCVVMIFDVFLQVBORXAABEANDNSTZZDUEVOVCEZBRUEKJYZSTK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.0708021512112);
    msg.setSource(23841U);
    msg.setSourceEntity(32U);
    msg.setDestination(11389U);
    msg.setDestinationEntity(105U);
    msg.type = 34U;
    msg.htime = 0.127054404985;
    msg.context.assign("DXJQBQIYJXTBWFVOZQRPJRPDDZTWIMYYPBYGQFRGAXHUXUKKALNGOHWJVQUCFHYXLOKIGGFFGWFENXEZNDYEASBTJEGLOWBQZZSIPRCNTTIXTIZNJUZCZSQHDXSLTMFWHHCAZOFKINCNIOFGVMYTJMUPMOAVCDOWHVVKPRMXNLQDFEUUHHYJ");
    msg.text.assign("BLWLBNCPDYZWTGDHXFOFHTUSQQJKRYKVVFLVBZNVOOBEFAYMVQUZIUWEGTKCFQEXQQMLOZJRNTBWDPMMRPCJUTYSHENPCALKBJKIBACFBUSFMOCHMSAEAPPWPFYKORGSHKIUZIDSJCPLZJKMUBOWHAHNJAGVLIXLYFQWDKDDGIXQJSYUBSMRATERTIHPRXONLHMJTEWIXXECGXYSIMNCDKGFGZZAXGVU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.383447372766);
    msg.setSource(5174U);
    msg.setSourceEntity(97U);
    msg.setDestination(35887U);
    msg.setDestinationEntity(102U);
    msg.command = 9U;
    msg.htime = 0.56165712977;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 223U;
    tmp_msg_0.htime = 0.0932087930993;
    tmp_msg_0.context.assign("HGTOKYHZFERNDJMTOKXTTEBIMXUPSKKATQDRGYECZYTLZKHLFMLXILXZZFRFXCNYDPROBURXRVAJSSNRINEBSVPGWBBQQPHJSBLTIOFQVIEZIUGYLPFCZUZWOGDSYNAZJROXMUKUJKTIAYXORQDVUXJWPHAJVSWSEWHYCCJDEZAJLAQQQMITMVDFSDITCPFBCCOONHBYPWECUMHDLYELIVPEBMKKWRNWAVWPOFKQUGVCGAMMGSNAJHFWXLGUHV");
    tmp_msg_0.text.assign("FCAOVNRQFOPDGRCBQLNZQZSMLWXYSBPJTVGPWBFBDZHDBDKKADSJGQDDOWJAZRSILLYCHTHVUOMSIZBNNQOXUHNEIRPLDWJQUXMNNATYYMHUHOSMNXYETKFAJJVHWUOXRIK");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.118169134936);
    msg.setSource(53005U);
    msg.setSourceEntity(110U);
    msg.setDestination(57819U);
    msg.setDestinationEntity(201U);
    msg.command = 237U;
    msg.htime = 0.209692827284;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 31U;
    tmp_msg_0.htime = 0.65148521264;
    tmp_msg_0.context.assign("EBRADFYNKOWJYGHOJUMTXHOERAJFHPEDOSAKJCKOIWSKXTTGLGSUIBQAJNVUFPISVCFAGMMCLOUDIATRPNRDAFDHLQXEBPBIQPAVSKOTZLGYPHQWYUIEWQKPXSVFGWNBIETYLRAXWUZIHXGJJQMFKZCBZS");
    tmp_msg_0.text.assign("ODOVZVOGRXHEPRKBRVYICHDIFQPNUGECCTWYIDMKHBJFXXEXGVKAMAUDZUECTNXULFABTCXSEVAZQQMTEWRNIUGDOMUSWJKHGFNMVLYSMGBBGJCMWIFHWULJASEZONJSSODMRXQOONXAHCIZJYWVDBYQERRLTZDFOPAXPRIIKZCDWFGYYPVSTZWKABQBUTPTQSATPSV");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.0507620382276);
    msg.setSource(6896U);
    msg.setSourceEntity(165U);
    msg.setDestination(33344U);
    msg.setDestinationEntity(151U);
    msg.command = 121U;
    msg.htime = 0.919649375457;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 0U;
    tmp_msg_0.htime = 0.438963898454;
    tmp_msg_0.context.assign("EDYFJSIBQCFTTECQHJNSMINMXOATFWYOTKDVIFZRYSYIXMXPNJJARVRWDRIABYHQEUGIWHHPYMQCKQMLZIKVCXXZOSPSUGDUHZZFSZMMSGSNJEZBVGQBLPPBPOFPUOSHRTHDWXLFAKLEWSMJVFERDKBPQZFRLEGBIHBADCCZWAMKVUWKXXJNYPMCONAEQPGKLTVBVOJAEDUNVLLDKATXWOUYVLUBIERGQJXCNGZGTUWCTYRWKT");
    tmp_msg_0.text.assign("LNRDCNAIJXDRDXRBXXLLOAVVTDIOTIQLMBIGZKUBRIKYGPWGYOCLITVJFWNSBAORBEIRZVGFAZMHGMCPWFUVRFAVEYGAHGHMK");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.555303249669);
    msg.setSource(19572U);
    msg.setSourceEntity(202U);
    msg.setDestination(41976U);
    msg.setDestinationEntity(166U);
    msg.op = 210U;
    msg.file.assign("IKCRTNOKRMJSNBSPEZJGHYPPAKAUVQGAGXFWKUWWSBDPYSLYVVROHPJUJAXYIYXPAHOAOILBBCWXEPCDXRLTWQJGLQLHTBGBMENCLHM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.128448918719);
    msg.setSource(27675U);
    msg.setSourceEntity(100U);
    msg.setDestination(41860U);
    msg.setDestinationEntity(146U);
    msg.op = 89U;
    msg.file.assign("AIXHTBVODAMCGFIUZSMDPJFKVQJI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.177757116602);
    msg.setSource(60602U);
    msg.setSourceEntity(216U);
    msg.setDestination(31205U);
    msg.setDestinationEntity(111U);
    msg.op = 225U;
    msg.file.assign("RTTFOCFADOGZWHQLXCWRBGYCSOORESZTKGZKJZPQCUORGSXIKAKNIDDOFXCMAZVBUWMDIJLSYVGDIKQVSOBUOFNFNZYXKYTTDGYXWQEMSIFWJJHMJMAEPPBPMJAQPZVVEXAUJWNPDCLTKYZYZADVFETFBNRHISXRHLRVDLEGWCXOBNYWMKLUXXQCPHTNWIQRECKIUAJLTMQENIUFNVEGZHLPETGMQSRBRSALPKFCHUOMBYASDG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.771216704951);
    msg.setSource(60047U);
    msg.setSourceEntity(45U);
    msg.setDestination(24036U);
    msg.setDestinationEntity(95U);
    msg.op = 194U;
    msg.clock = 0.814413993098;
    msg.tz = 40;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.00938893416788);
    msg.setSource(8346U);
    msg.setSourceEntity(75U);
    msg.setDestination(4982U);
    msg.setDestinationEntity(143U);
    msg.op = 9U;
    msg.clock = 0.5084517309;
    msg.tz = 14;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.715624755959);
    msg.setSource(53557U);
    msg.setSourceEntity(100U);
    msg.setDestination(60343U);
    msg.setDestinationEntity(216U);
    msg.op = 180U;
    msg.clock = 0.717444046341;
    msg.tz = -65;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.450727865718);
    msg.setSource(25994U);
    msg.setSourceEntity(17U);
    msg.setDestination(40809U);
    msg.setDestinationEntity(231U);
    msg.conductivity = 0.186137153916;
    msg.temperature = 0.636161037579;
    msg.depth = 0.690340019475;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.461885803347);
    msg.setSource(45374U);
    msg.setSourceEntity(156U);
    msg.setDestination(16745U);
    msg.setDestinationEntity(138U);
    msg.conductivity = 0.00070691970196;
    msg.temperature = 0.882924143787;
    msg.depth = 0.445906963563;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.532833470614);
    msg.setSource(58620U);
    msg.setSourceEntity(51U);
    msg.setDestination(50348U);
    msg.setDestinationEntity(186U);
    msg.conductivity = 0.125500361504;
    msg.temperature = 0.613333751955;
    msg.depth = 0.877465105393;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.60337443296);
    msg.setSource(57279U);
    msg.setSourceEntity(40U);
    msg.setDestination(20460U);
    msg.setDestinationEntity(156U);
    msg.altitude = 0.936129761574;
    msg.roll = 30527U;
    msg.pitch = 15756U;
    msg.yaw = 49574U;
    msg.speed = 7686;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.413032875252);
    msg.setSource(56852U);
    msg.setSourceEntity(203U);
    msg.setDestination(21405U);
    msg.setDestinationEntity(145U);
    msg.altitude = 0.833353121456;
    msg.roll = 10106U;
    msg.pitch = 5908U;
    msg.yaw = 29848U;
    msg.speed = 17739;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.878169647752);
    msg.setSource(41387U);
    msg.setSourceEntity(195U);
    msg.setDestination(40529U);
    msg.setDestinationEntity(189U);
    msg.altitude = 0.795910803332;
    msg.roll = 62282U;
    msg.pitch = 30091U;
    msg.yaw = 61415U;
    msg.speed = -21993;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.743273525811);
    msg.setSource(59428U);
    msg.setSourceEntity(48U);
    msg.setDestination(24275U);
    msg.setDestinationEntity(107U);
    msg.altitude = 0.836939556205;
    msg.width = 0.55349641262;
    msg.length = 0.596082930723;
    msg.bearing = 0.410979509523;
    msg.pxl = -1415;
    msg.encoding = 242U;
    const char tmp_msg_0[] = {78, -4, -93, -70, -24, 93, 115, 86, 63, 98, 6, -17, 81, 87, -23, -48, -120, -123, 36, -103, 86, 34, 8, 36, -118, -81, -22, 48, -35, -99, 33, -103, -108, -27, -122, -46, -92, 117, -67, -17, 9, 93, -57, -26, 69, -31, -115, -75, 55, -45, -80, -75, 73, -51, -128, 7, 86, 28, 81, 66, -46, 48, -87, -39, -101, -51, 14, 93, 46, -48, 5, 89, 59, 9, -98, -124, 34, 44, 29, -78, 86, 78, -16, 22, -120, -37, 70, 81, -8, -64, 32, -54, 66, -112, 125, 68, 64, -93, -31, 43, 105, 4, 75, -9, -14, -109, -103, -57, 50, -38, -128, -50, 25, 92, 5, 68, 94, -58, -54, 91, -13, 72, -117, 11, 99, -85, -34, 123, -85, 84, -90, 121, 49, -125, 22, 108, -11, 80, -97, 100, -39, -26, 31, -97, 48, 111, -94, 8, -30, -64, -31, 14, 120, 80, 117, -75, 110, -37, 51, -79, 107, 115, 85, -31, -118, 30, 9, -87, -54, 117, 104, -29, 4, 50, 117, -115, -46, -36, -114, -48, 23, 91, -6, -11, 121, -110, 89, -98, 73, 125, -25, -61, 67, 65, -22, 24, -87, 107, 108, -33, -58, -48, 66, 31, -11, -117, 70, 112, -102, -33, 26, -92, 62, 30, -97, -102, 115, -5, 39, -58, -53, -92, 81, -18};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.62760922803);
    msg.setSource(4904U);
    msg.setSourceEntity(244U);
    msg.setDestination(17441U);
    msg.setDestinationEntity(100U);
    msg.altitude = 0.788540704618;
    msg.width = 0.319919004383;
    msg.length = 0.109108158207;
    msg.bearing = 0.105683833154;
    msg.pxl = -17315;
    msg.encoding = 52U;
    const char tmp_msg_0[] = {-21, -80, 12, 43, 43, -12, 6, -53, -103, 98, -52, 65, -28, -51, -28, 42, -52, -111, -110, 36};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.837099849803);
    msg.setSource(54703U);
    msg.setSourceEntity(132U);
    msg.setDestination(42045U);
    msg.setDestinationEntity(115U);
    msg.altitude = 0.590096838264;
    msg.width = 0.581961910575;
    msg.length = 0.379330758273;
    msg.bearing = 0.359431246125;
    msg.pxl = -25368;
    msg.encoding = 222U;
    const char tmp_msg_0[] = {78, -31, -34, 78, -7, 6, -22, 70, 66, -114, 67, 59, -8, -14, -56, -119, 45, -50, -106, -74, -122, -37, -6, -61, -42, -106, -66, -63, 119, -128, 80, -29, 86, -18, -123, -121, -59, 3, 75, -92, 38, -63, -98, -15, -33, -105, 91, -98, 55, -112, 80, 3, -46, -47, -94, 117, 98, 120, -80, -105, 56, -59, 62, 105, 76, 115, -102, -28, -64, 55, 117, 90, 94, 8, 69, -100, 0, -18, -34, 120, -89, 76, -40, -73, 32, 108, -7, 61, 74, -109, -86, -74, -104, 15, 46, 48, 100, -96, -111, 88, -65, 12, 20, 32, -27, 107, 41, -124, 76, -35, 108, -40, -18, 18, 55, 13, 109, -13, -58, 45, 47, 47, 87, -82, -63, -42, 2, 3, 66, 121, 61, -29, 90, -62, 23, 106, -105, -23};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.247960687786);
    msg.setSource(28123U);
    msg.setSourceEntity(194U);
    msg.setDestination(33353U);
    msg.setDestinationEntity(156U);
    msg.text.assign("FEPETQDJLSHAQEPPXTHJASWFYWNXCMSYNDJLHDAQYRMBBOGOAZXHTNSRCMBQZVFORNULWJFXHPBMQZMTTEVLKFLKKIYUBRNCPRFWQWIRMVMWRBINWPEKVHLPKAJMAQTVHEZVKPRLEPSZZUUXJWBBIMQFAGCQHVFUGNNSOATUOYDVIZSGGGIDBDLICUITECKKGYOKODGGTGCVNZXTXNMEIQJCRKYWHAOX");
    msg.type = 138U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.140681517927);
    msg.setSource(33470U);
    msg.setSourceEntity(94U);
    msg.setDestination(21564U);
    msg.setDestinationEntity(85U);
    msg.text.assign("NDPCMDLFWUCYTUTEVEKMLMUAQZHQFXHYASFGLWVUIASOHVOTWBIZHXXZNKRWBTEOGRUSGPEYMYLSQVZXTMDDCTSSIAVJUHXBFDPIMQPGCHOWPLOWHJLAYPZXZRNDCHAIGRKFIIXPVYCSOBRKRMEKPUIJNTAZ");
    msg.type = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.981348537776);
    msg.setSource(9930U);
    msg.setSourceEntity(230U);
    msg.setDestination(32557U);
    msg.setDestinationEntity(115U);
    msg.text.assign("AITKMOHESVOVIKGQKDKRFACTHUWLIXVEBXCBFDUYXMQYVCOMDQNJZCEDIOEVBJDGHFEIBWZYKQGGSDWINPHJHZVLDKJDHXEZGIYWXJGLRASOTRCCZMAABXTCFNFETKABJQOVLWIQOVPGLBAUPEUONCWJQVTXVRSKNYJNRUMBTWNPPNEWELZKRFZZGYGMDRUBUMPTBZPAFOYZCFHLYASRHISLUPOKLMCSJQNRHLPSSMTIRUHW");
    msg.type = 41U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.988995625054);
    msg.setSource(62805U);
    msg.setSourceEntity(159U);
    msg.setDestination(63908U);
    msg.setDestinationEntity(193U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.0356556578335);
    msg.setSource(43418U);
    msg.setSourceEntity(106U);
    msg.setDestination(49632U);
    msg.setDestinationEntity(231U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.984382637295);
    msg.setSource(56430U);
    msg.setSourceEntity(83U);
    msg.setDestination(59708U);
    msg.setDestinationEntity(216U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.417192195425);
    msg.setSource(49587U);
    msg.setSourceEntity(12U);
    msg.setDestination(19349U);
    msg.setDestinationEntity(93U);
    msg.sys_name.assign("ZTQABHPLDAUKBZGRLMXSHBVKOWTDEJIKSVVHMNIOOHRSIEDQWCJPZIWMQRNIUNDXAHWSQOMYSXBTQEEHDGVKIZMIRQ");
    msg.sys_type = 145U;
    msg.owner = 47436U;
    msg.lat = 0.713342790559;
    msg.lon = 0.869185349375;
    msg.height = 0.18258967614;
    msg.services.assign("RNTMTKHXMJYDJXIHOCWQPWPNGIQRFFYVORUGDGVVJXJZFMEABUXKXIMUVCCOLRYRCTUYLWZSFSYMFVJGUAOIPNGBTBXEQLXVKWYOEMXULQPRAIZQRLQQIIQAAZHWEYAQSEDGUNNMCMFSEALIWTHTVFHUCMKJJTEJKKQZPWADLFBDHNCOBJSHGSNBSOHLTKLDXPPUZDWYSFOYHPCXKAOWOZARC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.0918693494974);
    msg.setSource(57419U);
    msg.setSourceEntity(44U);
    msg.setDestination(55428U);
    msg.setDestinationEntity(6U);
    msg.sys_name.assign("BFAAGGKVQEWRLDDUIMONJYEPZHGKNBHLLLATWIQTSOGMKGVETRRWTVOMGXORZXVRHUEDFAJYYRMGOSYKJWNCFUUCRRBYQQKKEQJFDNBJWHPYBDAAUCYGVQCSZOHLIKIONZBZZAMBDHWHIUYZWQJTEVKMSCBDSYAPNKJJIEGDMLJCUIUNBXSPHAIFKQNQUZLSCXIRXPFFPXPVGQETVXOLPDCHMAVVOUTSZNPNCLSWP");
    msg.sys_type = 75U;
    msg.owner = 33056U;
    msg.lat = 0.550203909816;
    msg.lon = 0.342820599136;
    msg.height = 0.883172846717;
    msg.services.assign("ASLZVFOCQJSLHGSHNOGUNRUQFJHCJKFEGQRLHQIHETVVDPDKTLZPAAUBDONRZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.246793948124);
    msg.setSource(30854U);
    msg.setSourceEntity(241U);
    msg.setDestination(25430U);
    msg.setDestinationEntity(104U);
    msg.sys_name.assign("IXCUFWONWRGHIKAKGASNMFKZCLYJCSDKKFTEDPMUABNHYXEHRRCHIDQQOTBJQZPHNQRVETVWNJPQTVTRELCTVABNNGAVPXWJABOHKHOFIWGDDEMQXEML");
    msg.sys_type = 59U;
    msg.owner = 64373U;
    msg.lat = 0.689638448277;
    msg.lon = 0.515483552806;
    msg.height = 0.586861118921;
    msg.services.assign("YNGFSHLANWIGXVANNPFNPEKTDHILIZQJKTWIAXDMSKPSCXVZQUUSNRTHXHBWCXUYBEHOBCKZEQJYJWXXCDPAOFNUHQGKFDPDVJMAFSRLGKCYGIRVDVTBAQIRKMFRPRTULLFNWMVJRQJMIPYLWB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.721424973223);
    msg.setSource(21717U);
    msg.setSourceEntity(10U);
    msg.setDestination(34077U);
    msg.setDestinationEntity(47U);
    msg.service.assign("TECBNZFGCISKPSJHVJJPAFUVFAKYBVNCPATRDDHGNLQCXWHBZPGJUYOOQENSJYQDUDMXAXFGEDPRSVWZHYSATRYMZOHNQACUCMMQSUTKUQDEISFLCZLXSTKRESKWRQDVLCVRKJBASOLWHIOWNCOWPYRAITQEWDUZFIKRJONIHDNTPVYQLGWLOHOBFRILYGNXEMUKVLAZVNUEYJBKHIFMF");
    msg.service_type = 185U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.10844149357);
    msg.setSource(52282U);
    msg.setSourceEntity(196U);
    msg.setDestination(40523U);
    msg.setDestinationEntity(36U);
    msg.service.assign("UNFFEMQYNYDPWGULKEYJQPZT");
    msg.service_type = 39U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.219926153822);
    msg.setSource(55514U);
    msg.setSourceEntity(111U);
    msg.setDestination(50847U);
    msg.setDestinationEntity(125U);
    msg.service.assign("CBBRRFZJZHZYWJKSDSDBJELJTQRQIETIEMUBF");
    msg.service_type = 29U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.584533012712);
    msg.setSource(12651U);
    msg.setSourceEntity(108U);
    msg.setDestination(31519U);
    msg.setDestinationEntity(221U);
    msg.value = 0.0838131511819;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.603088426887);
    msg.setSource(59305U);
    msg.setSourceEntity(193U);
    msg.setDestination(23664U);
    msg.setDestinationEntity(219U);
    msg.value = 0.542252327273;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.549459239459);
    msg.setSource(61209U);
    msg.setSourceEntity(48U);
    msg.setDestination(59562U);
    msg.setDestinationEntity(72U);
    msg.value = 0.602046069732;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.239785623029);
    msg.setSource(22322U);
    msg.setSourceEntity(252U);
    msg.setDestination(4196U);
    msg.setDestinationEntity(65U);
    msg.value = 0.283214885557;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.648826332511);
    msg.setSource(19239U);
    msg.setSourceEntity(84U);
    msg.setDestination(58409U);
    msg.setDestinationEntity(33U);
    msg.value = 0.655413443306;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.0331343981424);
    msg.setSource(25523U);
    msg.setSourceEntity(171U);
    msg.setDestination(57441U);
    msg.setDestinationEntity(229U);
    msg.value = 0.455403975919;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.628505930258);
    msg.setSource(3218U);
    msg.setSourceEntity(99U);
    msg.setDestination(2955U);
    msg.setDestinationEntity(65U);
    msg.value = 0.785721905215;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.465696654025);
    msg.setSource(65422U);
    msg.setSourceEntity(75U);
    msg.setDestination(30360U);
    msg.setDestinationEntity(184U);
    msg.value = 0.99733684445;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.0198763676231);
    msg.setSource(54281U);
    msg.setSourceEntity(108U);
    msg.setDestination(34446U);
    msg.setDestinationEntity(2U);
    msg.value = 0.574514342311;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.649853231095);
    msg.setSource(63838U);
    msg.setSourceEntity(214U);
    msg.setDestination(27902U);
    msg.setDestinationEntity(70U);
    msg.number.assign("LYBFLKGWUOROWGYJLXZBCZSTEAAOSJOJPIPDUGZTXPHUQSVHFYEZDENXQWJHEWRHCYEKNFSIVTZQTUMFNQWLDXIDIPYWUYNBFHTNBGTIDCZLSNISVHUTMCMQHBPITXSDGZXBJFVDAJIJKKXEMXWNDVFYCGRXRCVVGWQDANYOHJRPPRLDBKLOUCPUQJGAMNGKRMKAROJAHXUOAENMTKASQVZESVO");
    msg.timeout = 47681U;
    msg.contents.assign("JESFKRVVFKJRQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.820635951819);
    msg.setSource(47582U);
    msg.setSourceEntity(61U);
    msg.setDestination(49879U);
    msg.setDestinationEntity(132U);
    msg.number.assign("TCJIAHNOGIFPOYBWMOGSSUCECXSZHNZKNULTFEJFIIQZRUHAFZAHZXOIUVKKIWHRHTZSNRBFDAHMCLVOXXUNNQMVB");
    msg.timeout = 18564U;
    msg.contents.assign("CPMYFDSZIJKWUGRXLVCEJBEWSDKKBIPNAELRUXPHIRMVOFCMFHUKCLTXNTWGUYKQGCKZRMFXGDUTSOJECPMGVHZRAGAAOTJJQGEFYEQNBANQUCXPTHVHSLUGXONKVJZAZCADWPVIIRYQLBPXEUCSTGJVZOFOHBXIAIZBIHWJBEFPQRQOSSWR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.28008137996);
    msg.setSource(65479U);
    msg.setSourceEntity(124U);
    msg.setDestination(11824U);
    msg.setDestinationEntity(254U);
    msg.number.assign("MIOIVNLFLJUTTHTUPBEZKLYWZDMCHTUWSDEWOSFKXSOQHFFJHVXNTMMYGMDYHTRQZPMRDTUITVZVJGMZHYLFWREPQJARGBCQCABBWDYBJYQCYTKQVXCXGOKUAELXBOLSXIHIXAPDQEIXVOSKJPJUWIFZLMRQWNKKFYUNCUQJKWGRIONMVPVFLAXGAVDCELVWFAJPZK");
    msg.timeout = 40321U;
    msg.contents.assign("TOFZLTHLXDVK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.308122301295);
    msg.setSource(2877U);
    msg.setSourceEntity(137U);
    msg.setDestination(9873U);
    msg.setDestinationEntity(247U);
    msg.seq = 4225404789U;
    msg.destination.assign("GBLYITQFIKTONCOPMIWVEUWJJCZJHNJGMCNXIACCLEEEFSCBDKKCSWEOIZAAZHRBJKNZRZRTYNPXTWHBMVNPXS");
    msg.timeout = 46609U;
    const char tmp_msg_0[] = {67, 66, 76, -108, -99, -35, 24, -54, 107, 101, -19, -116, 53, 61, -82, -6, 6, 41, 92, 17, 85, 76, -17, -112, 24, -126, 48, -31, 57, -32, 87, -67, -70, 14, 43, -42, -73, 22, -128, -102, 84, 35, -90, 105, -15, 18, -63, 101, 100, 82, 21, 0, 78, 88, 68, 84, 1, -81, 59, -55, 96, 84, 64, -18, -53, 87, 99, 86, -32, 99, -28, -97, 80, -120, -34, 44, -31, 11, -122, -76, 77, 78, -23, -61, 40, -34, -111, -27, -80, -56, 73, 86, 88, -111, 8, 53, 74, -121, 36, 67, 123, 20, -13, -17, 15, -16, -70, -51, 65, 70, 38, -4, -71, 76, -32, 92, -102, 85, 13, -90, 68, 107, 118, 100, 40, -125, -71, -10, -12, 110, -101, -89, -113, 8, -83, 112, 42, -2, 27, -9, 66};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.797756852174);
    msg.setSource(14112U);
    msg.setSourceEntity(44U);
    msg.setDestination(28274U);
    msg.setDestinationEntity(50U);
    msg.seq = 1442279226U;
    msg.destination.assign("DRVSKLZZEWDKAJGVOFGTCOKSFXBVSMMXWJSUCQUFXDQRAOCETAABJPQAYPKILJWCKVPZIQDQYEYBNKICJJFEIWTMAGLCDXCQUYQZARCIRTXLYEKEYXLEVYN");
    msg.timeout = 59772U;
    const char tmp_msg_0[] = {71, -123, -58, 25, 6, 58, -56, -73, 126, -46, 110, 9, -83, -40, 28, 99, -90, -14, 20, -80, 53, -117, -47, -54, 88, -15, 19, 47, 44, -15, 50, -72, 0, 82, 29, -119, -107, 29, -111, 112, 19, -1, -76, 19, -21, 121, 63, -74, -41, -17, 90, 17, -107, 37, 119, 106, 66, 62, 27, 111, 107, 20, -104, -16, 84, -56, 7, 106, -107, -120, 45, -108, -14, -77, -55, -123, -122, 120, -49, 106, -110, 94, 45, -79, 18, -7, 22, 98, -77, -90, 81, -21, 23, 61, -80, 113, 25, -112, 80, 27, 6, -30, -89, 48, 11, 69, 41, 91, 67, -78, 102, -18, 23, -33, 99, -43, -125, -15, -92, 90, -45, 87, -117, -76, -113, -41, 25, -51, 78, -67, 94, -31, -124, 103, 2, -98, -34, -89, -87, -89, 120, -25, 103, 1, 119, 37, 70, -51, 115, -51, 18, -68, -27, -17, 63, 120, -84, -9, -35, -9, -113, 37, 43, 55, -21, 37, -92, 37, 58, 93, -102, -11, -25, -105, -94, 2, -42, 109, 104, -47, -25, 101, 121, 117, -110, -18, -30, -81, 61, -113, -51, 70, 54, 64, -65, -30, -15, -63, 48, 3, -127, -124, 25, 64, -82, 50, -39, -33, 65, -21, -8, -37, -88, 69, -21, 61, 105, 41, -102, 41, -128, 124, 62, -33, -51, 106, -100, 24, -39, -55, 79, 58, -119, -83, -65};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.583801795248);
    msg.setSource(28717U);
    msg.setSourceEntity(246U);
    msg.setDestination(31334U);
    msg.setDestinationEntity(28U);
    msg.seq = 1702208511U;
    msg.destination.assign("IOYFOEPSEZIRKRASTWNBZNLOWAJWNUMPMGKXPXURJCXHGPXDCIXSKIWCIDDBTOOYJUYVNMJDYXECSAVZTFSFFRHQQCENBFWIJKPKBHVUBPRGKPGMGDILTOEYHNNCCQFGQSGPFBLAHTDQVLAPDVUXVUBLCYZLIYEARBSMIMTWMATOFKQZHBSRRJFXOQMUAUZWUCLLQTFADOSZJ");
    msg.timeout = 64562U;
    const char tmp_msg_0[] = {86, -56, 47, -25, 121, 78, 78, -66, -67, 74, -107, 125, 72, 38, -24, -90, -56, -31, 29, -80, 114, -17, -99, -82, -29, -97, 29, 39, 107, -87, -24, -112, 117, -35, 6, -62, -108, -39, 94, 89, -23, -88, 45, 8, 77, 37};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.359498170099);
    msg.setSource(48291U);
    msg.setSourceEntity(232U);
    msg.setDestination(46789U);
    msg.setDestinationEntity(230U);
    msg.source.assign("SQUVAZSFTMFKXKHZWFRQCAWCYFZUFHSSJOLIEXPTIEVRJTFZONBBDBCLNYOLHMXPJUXXMLI");
    const char tmp_msg_0[] = {-126, -63, 109, -51, -12, -122, 107, -19, 21, -124, 113, -95, 23, 7, -8, 40, 111, -121, 88, 27, 32, -92, 103, -109, 57, -117, 31, 31, -73, 19, -113, 104, 8, -29, -96, -19, -117, -46, -60, 13, -18, 123, -54, 88, -17, -2, -42, 85, -71, 25, 111, -125, 88, 98, 117, 21, -1, -106, -119, 84, 19, -20, -99, 17, -13, -15, 96, 59, -98, -71, -108, 12, -86, 108, -103, -19, -56, 78, 57, 103, -119, 84, -45, -55, 111, 57, 15, -35, 40, -61, 36, -66, 83, -120, -87, -99, 87, 40, 52, 82, 15, 70, 105, -46, 99, 74, -77, -27, 81, -85, 18, 21};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.710826818691);
    msg.setSource(55959U);
    msg.setSourceEntity(97U);
    msg.setDestination(37059U);
    msg.setDestinationEntity(243U);
    msg.source.assign("JHKPHHSOYTEZMBEVPJAMEVSGJESMUFNDQTQW");
    const char tmp_msg_0[] = {53, -9, -125, -49, 108, 51, -66, 90, -55, 46, 115, -69, 14, 17, 109, -96, -23, -87, -118, -30, 72, -115, 55, 49, -87, -46, 23, -101, -81, -116, -76, 101, 61, 116, -106, 76, 33, 15, 26, 18, -77, 64, -24, -63, -116, -77, -38, 44, 11, -6, 89, 117, 95, -35, -48, -30, -105, 16, 105, -110, -54, -117, -75, -85, -63, 5, 19, -110, -5, -113, -14, 45, 109, -25, -64, 73, -38, -26, 16, -76, -96, -10, -114, -110, -37, -50, 102, -77, 30};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.292762690842);
    msg.setSource(16826U);
    msg.setSourceEntity(80U);
    msg.setDestination(64759U);
    msg.setDestinationEntity(127U);
    msg.source.assign("QOGURUOWLTSEKVOVSUFXATWZFTAVLTHFXKTAMJGRTTCLFOHMNFMTQHLGXDIBQ");
    const char tmp_msg_0[] = {35, -53, 28, 58, -24, 71, 49, -46, 117, 113, -82, -61, 41, 86, -7, 89, 64, -32, -116, 27, -53, -116, -103, -30, -84, 30, -17, 11, -14, -13, -91, -56, 7, 63, -86, -55, -47, 75, -54, -56, -69, 47, -31, 95, -80, 26, 50, 123, -116, 9, -90, -25, 114, -69, 102, -110, 108, -123, 49, 125, -74, 74, 46, 123, 47, -53, -82, 55, 106, 91, 35, 73, 16, 67, 10, -14, -46, -90, -76, 47, 96, -87, -72, 70, 82, 84, 2, -40, 76, 8, -54, 99, -76, -48, 12, -80, -74, 68, 72, 77, 29, 60, -97, 65, 107, -76, 49, 55, 15, -50};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.0357642573853);
    msg.setSource(5397U);
    msg.setSourceEntity(47U);
    msg.setDestination(24405U);
    msg.setDestinationEntity(113U);
    msg.seq = 643336691U;
    msg.state = 48U;
    msg.error.assign("SBLQJRYQUICRUOMJVFEFSNRCVXZUTWIYSYDRXBEEXMQNPHCGPHOZUFVGJSQDWDMSMXECVABQQKXJWVXYRUTIUSHDHEMZPAJDHDDKPAXWFSAFNBBOLIWBMIGEDHOJBKCQBGNCPGYVZKTLGVLHPZGJNMKIANPOLWIXNNVHUKELHSTDFPIOYYOLJATAKCDLJNIRFEAQFWTBWTXMZGAUZKOKCNSW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.183904937235);
    msg.setSource(28772U);
    msg.setSourceEntity(174U);
    msg.setDestination(38437U);
    msg.setDestinationEntity(125U);
    msg.seq = 2669910815U;
    msg.state = 110U;
    msg.error.assign("IIKJTEOJHMLUQDPSXNANYVRGYGFXDSTILZTACKKJCYYYTXVZLBXBZFWKCWNDUMFPQUARQQMDWHHXXAURLUJLDUZXLCCPQMBJQTRSBQFJTYJSWGSZHHDGFZRCNNRZIAKMTNFJTFBOOGCSLAMPSEKCMAPOAGSLAXFBIMEZJDBVITDMPHOVOZHWKTGYLNCBYWWVGKUOQDMJOSHNOENHGRSKIFKUNDUEEZGLIUQWB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.88945040633);
    msg.setSource(59014U);
    msg.setSourceEntity(237U);
    msg.setDestination(12512U);
    msg.setDestinationEntity(85U);
    msg.seq = 4157571940U;
    msg.state = 168U;
    msg.error.assign("VEGPWRYHAEMXMEQZMACBOWQIAJLKSQRUXTULJHTQHBOKJFTSTQJURVFHAZAUKGNFDAZUEYMWLHHKJWYDRVIGPXWUZMGBXDRDDCSBVWBPQLOKLZQYVASSTZUYXCKGCPEVZVPDTMTYNNDFCXINPERQCPXNGFYOOEDLOPHPMONSKC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.523269810271);
    msg.setSource(32007U);
    msg.setSourceEntity(205U);
    msg.setDestination(20958U);
    msg.setDestinationEntity(36U);
    msg.origin.assign("XJOXRROFMJSJWXQCQLNGDDTDJZOTZKBCMVVMSTMYVCHAMTLUPKHKFSLTLGSZPF");
    msg.text.assign("JLGIMQOXGBEBRQTMJYWMPZLVCDPRONSDHYNQYSURQINFPJVPQBZHELYORTLBFGTMOCCWAWMWJDLDWDRHSYRFHLCZJUOSCFKPNKIKKEFPMGVPZUAXKIZKLGLJVJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.636733540059);
    msg.setSource(2383U);
    msg.setSourceEntity(123U);
    msg.setDestination(26864U);
    msg.setDestinationEntity(14U);
    msg.origin.assign("ADFSTIHZIZUPQBVUTELWWYXTJCCJRWDTBMEUCDMOODWQTKHUCWRQCHNGEORBXDVENIDIRNHVULQHZHSXLTUMJOKICNEXCHPIWOYUJGZJOVSLSKXBNSHMNNQPMSUZZOGCBOKGTQLYHBMXFYELIXYREDWMECFAFADVTQWNPPAAGGFACZYVYRFABTUKLJFVIMLGZZDXRKYFBGMNYWSEJPHAKVBKFJDIAFSUR");
    msg.text.assign("FXMNPCWIMMFSQQRVNEVMEBYBVOLZCDWRHSGTBVKRRAIVOYWGNWCDZIFCSFJNEJTSPZAKQLKDBMOCUYMKYABMVQXYPNUWLPTKSAKSILXWXHKRPDBCEXCQQBNEPPEGLUUHJHEFJINBXMSNEKRPTHUDOEGLBYJSMOKTFLADPIJTDQWQUUVZGJU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.781019180501);
    msg.setSource(16050U);
    msg.setSourceEntity(166U);
    msg.setDestination(3072U);
    msg.setDestinationEntity(247U);
    msg.origin.assign("PVXOECJAWJRPWESQOOXHWDAQVPEZSBMCYGDXYOTYFFVMEDNKNZUCUQPYZGCBNMWCRYDOFTWZUTFFNZXYIRESUTKULHMCVFVGIHJWJXLUYBLPRVUIBGFKGMUIRLJJVZTHPASQIOMWSZZITDOBLHRGTNEVMYGPLFSUVHKQKDFSNETYGQLONAHQGMRDNZCSCIWWMQIJQXCRPHDMKWNERDSVPXXBIBEULJXJTAHPLIKADOFNTKABOEJ");
    msg.text.assign("OWHFJHPEUEXTWVQOBJASZURDKTRWJSVUYNIEDGGZDFPD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.641562282291);
    msg.setSource(11689U);
    msg.setSourceEntity(112U);
    msg.setDestination(22968U);
    msg.setDestinationEntity(36U);
    msg.origin.assign("FNQQKASDISFPUAWZGKJTJHKYTSPUYQZTFPUPLSXTQVBQRGHEHYLHBOAEOBDUAZGTSILFIMYBROWGCICDMNTJDBBMAMKUEFFPWLLMXQEIVCNTKVZAGFSDVUZBMJBHOAXMRIPWLRVBOOLUKRTJPCGXP");
    msg.htime = 0.0599786444719;
    msg.lat = 0.193000439241;
    msg.lon = 0.908449615799;
    const char tmp_msg_0[] = {28, 47, -28, 102, 40, 117, -70, -45, 74, 22, 112, -26, -50, 95, -87, 41, 42, -14, 97, -35, 103};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.997166421932);
    msg.setSource(56568U);
    msg.setSourceEntity(179U);
    msg.setDestination(42266U);
    msg.setDestinationEntity(29U);
    msg.origin.assign("NMZKNZJEOSIVWPVSCQARKRHSQRXXMDDWMKZQKREMMLJMWEKVWTTWWYRIDGITPQVBLFSTOKYSE");
    msg.htime = 0.579303390886;
    msg.lat = 0.794057425231;
    msg.lon = 0.749851869172;
    const char tmp_msg_0[] = {-11, -96, 74, 23, -7, 53, -42, 115, -51, 97, 40, 56, -52, -122, 64, 101, 70, 98, 64, -107, -23, 49, 11, -117, 34, -105, -57, -42, 66, 32, -109, -27, -103, 0, -81, -91, -110, 103, 64, 20, -44, 34, -104, 22, -36, -125, 51, -114, -113, 99, 70, -56, 41, 26, 76, -46, 0, 68, -22, 17, 121, -53, 93, -117, -127, -115, 16, 42, -47, 62, -33, 54, -77, 102, 123, -3, 73, -111, -67, -103, 32, -73, 116, -122, -128, 42, -20, 48, 5, -46, -6, -64, -8, 55, -114, -109, 40, 82, 45, 70, 71, -38, -76, 20, 82, 26, -92, 45, -56, 23, 9, -38, 77, -117, -56, -106, -74, 37, -48, 40, -14, -1, -73, -78, -87, -3, -117, 109, -109, 93, -102, -51, -54, -17, 37, 33, -91, 26, 63, 53, 112, -55, -19, -12, 62, 17, -74, 4, -61, 118, 57, -91, -128, 46, 64, -42, -93, -52, 94, 62, -123, 93, 40, -11, 17, 81, -86, 77, 79, 77, 11, 20, 120, 97, -9, 72, -21, -34, 98, -123, 124, -33, -60, -24, -2, 12, -88, 0, 49, 26, 125, 41, 13, 102, -100, -33, -103, -87, 68, 14, 121, 93, 54, -113, -51};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.985427606037);
    msg.setSource(55761U);
    msg.setSourceEntity(109U);
    msg.setDestination(6739U);
    msg.setDestinationEntity(79U);
    msg.origin.assign("NMLTVVCPMASDFZAOFRFIRL");
    msg.htime = 0.380023022584;
    msg.lat = 0.688742330089;
    msg.lon = 0.353704246881;
    const char tmp_msg_0[] = {98, -123, -93, -55, -98, -89, 32, -67, 55, 94, 20, -61, 73, -74, 95, 125, -22, 97, -126, 70, -123, 73, 80, 85, -117, -92, 50, -81, -20, 44, -125, 94, 45, -21, 99, 26, 30, -92, -19, 25, -39, 93, 114, 109, -70, -127, 94, 43, -6, 37, -8, 111, 80, 85, 36, -69, 53, -8, -91, 13, 36, -43, -38, 113, -4, -80, -59, -69, 69, -60, -81, -91, 30, 114, 87, 45, -36, 0, -6, -112, 62, -16, -85, 55, 44, -127, -45, 53, 34, -58, -60, -9, -62, -31, 97, 52, -110, 82, -4, -121, -53, 82, -27, 38, 55, -95, 34, 25, 55};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.473250193726);
    msg.setSource(47747U);
    msg.setSourceEntity(249U);
    msg.setDestination(57240U);
    msg.setDestinationEntity(7U);
    msg.req_id = 40569U;
    msg.ttl = 63340U;
    msg.destination.assign("MJDAQCDALJMJAOUVTCFXJUTMWEBOKWDQLFNSPGIKBCDHVULRFPMFGISBLBOXABVZDUKYZNOCKZHEYWIKNZGTTKJRAQYIOKYTOFCEIHWYCE");
    const char tmp_msg_0[] = {-44, -79, -115, -28, -72, 68, -7, -84, -64, 20, 85, 91, -37, 113, -33, 125, -59, -22, -103, -40, 74, 45, 89, 50, 21, -106, -63, 29, 18, 18, 29, -18, -35, -73, 9, -109, -119, 21, -100, 49, -80, 114, -24, -17, 80, 104, -65, 82, 52, -37, -27, -88, -113, 40, 91, -18, -81, 120, -19, -108, 2, -67, 22, 59, -125, -19, 52, 125, -67, 43, -62, 0, 70, 66, 43, -114, 84, -128, -56, 43, -77, -70, 125, -56, -60, 86, 63, 20, -14, -95, 74, 30, 46, 124, -6, -8, 71, 17, -56, 41, 99, -40, 92, 109, -36, 51, -107, 14, 91, -61, -60, 126, -22, 89, -76, 27};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.913091674243);
    msg.setSource(22388U);
    msg.setSourceEntity(210U);
    msg.setDestination(36969U);
    msg.setDestinationEntity(243U);
    msg.req_id = 61909U;
    msg.ttl = 61747U;
    msg.destination.assign("PPEHIVACICTKSNHRPDZQGFAYWEMNRWKHBJLGXXYSGPDPYEXBLLTCVKYUMQFTKGFZKUOGGWROJVIMXAJYPQAGVOPEQUKTIHYFXBHBXDYERUALWZJJCPQAXSAQXSODNMECC");
    const char tmp_msg_0[] = {-75, -121, 49, 126, -20, 78, 13, -98, -56, -70, 83, -84, 31, -90, -5, -71, 0, -92, 122, 71, 95, -53, 126, 68, 44, -105, 57, 65, 73, -39, -20, 42, 6, 90, -30, 17, 87, -103, -52, -41, -87, 105, 81, -89, 97, -78, 10, 6, -108, -90, 82, -19, -109, 77, 60, -72, -63, -33, 39, -66, 76, -86, 94, 14, 111, -90, -93, 72, -78, -111, 38, 99, 72, -113, 20, 87, 104, 76, -68, 22, -12, -6, 65, 38, 58, -78, 51, -67, -102, 113, 15, 28, 103, -67, -59};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.972720466637);
    msg.setSource(13931U);
    msg.setSourceEntity(48U);
    msg.setDestination(32131U);
    msg.setDestinationEntity(190U);
    msg.req_id = 2607U;
    msg.ttl = 42103U;
    msg.destination.assign("VUSMVHRPRNFNQDGJDIUINAEBDUNXUMHTABYMZBULIZESNHJQVOWBLRXTYWCFDOTCZSCDNOROOLAUHDAFNPNWOGTREQJVXSZRLNKBJISJAKWJCPQTJRIDUKILWSPOPEKMYLFMKSEEXUWHJIAAYZZZDLKMYPGYMXSFREBBHWFIFBQQCCDPIXKGTSXAYLCGTLUVWATGPOGWFMRPOSZQQFZKCHVBVHYDNUGIXTYYBFJMMXVTPKCJZGH");
    const char tmp_msg_0[] = {-90, -7, -94, 23, 76, -126, 91, -95, -45, 45, -17, 84, 110, 91, 9, -101, 9, 110, 4, 85, -89, -37, -23, 101, 105, -122, -15, 3, -34, 36, -14, -2, 122, 102, -11, -77, 25, -119, -5, -93, 122, -49, 49, 49, 89, 29, -108, -55, 111, -121, 38, 23, 47, -127, 9, -114, 30, -112, 28, 72, 46, -115, 87, 125, 14, 73, 49, 103, 81, 41, -66, 81, 95, 63, 44, -94, -95, 41, -48, 29, 35, -84, -47, -54, 28, -79, 27, 98, -3, -68, 84, 46, 108, -70, 45, -120, 38, -37, -121, -104, 53, -12, -14, -50, -118, -107, 81, -118, 50, 116, 56, 124, 18, 19, 103, 82, -2, -75, -59, -125, 5, 80, -90, 105, 39, -36, 3, -92, -116, 75, 94, -60, 112};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.869380232949);
    msg.setSource(36152U);
    msg.setSourceEntity(160U);
    msg.setDestination(14492U);
    msg.setDestinationEntity(243U);
    msg.req_id = 25325U;
    msg.status = 57U;
    msg.text.assign("WAULHPSSINNLWZPIDWXXSPRCQHTOXTDPWKORNHGMTJXFXCFISOHRE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.569680520367);
    msg.setSource(8836U);
    msg.setSourceEntity(92U);
    msg.setDestination(20297U);
    msg.setDestinationEntity(113U);
    msg.req_id = 53009U;
    msg.status = 41U;
    msg.text.assign("NTLZLWIPRZSSKBZREZJKHMDZYPAPHAUWTTXJEQSGFGVFINLDDOAEENLZRMPITOPGNHMFUJLBSBAUVQJPUFHGFKGYBLSBUDWXQNCJDWIKLCGTZKOIPMYTHWHOOMXJLCXWHUVVEXSOUROAGUEXKVNRHTQRFVQGEJOXSFDQLYCCWFGEXWFAYKEQMDYC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.234359734334);
    msg.setSource(35712U);
    msg.setSourceEntity(104U);
    msg.setDestination(13673U);
    msg.setDestinationEntity(130U);
    msg.req_id = 64046U;
    msg.status = 198U;
    msg.text.assign("EDUJUWAWRAFUKPBO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.2479761716);
    msg.setSource(47042U);
    msg.setSourceEntity(145U);
    msg.setDestination(15802U);
    msg.setDestinationEntity(11U);
    msg.group_name.assign("EBWMGLQNQXWSOPPBTRKHHRCUKJZHTXKTYEACDBOUIPGILNSEOJOKMIRUQSVLZKALASLFWQQRPNMUMMJTDYJNATVYHRXVXYSPMTNHXIAUAAKTFRNVJSLHZWVBGGYFOGXETSXOMFZLWUSPC");
    msg.links = 1104112042U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.487528136335);
    msg.setSource(12101U);
    msg.setSourceEntity(70U);
    msg.setDestination(22992U);
    msg.setDestinationEntity(55U);
    msg.group_name.assign("EFNCQVHOUXLHDSEOWMBROAUGTJPLVGNRGGXIKFPMGELHJWBPCADHAOSHTXZPJNKJVHIKRACNLSVSRVLJPFFG");
    msg.links = 1759650064U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.231832161565);
    msg.setSource(29746U);
    msg.setSourceEntity(81U);
    msg.setDestination(11340U);
    msg.setDestinationEntity(138U);
    msg.group_name.assign("EREKDBSGSUGXHISDSICPPFFLDBHXRDFQWXXDHTGEUIZPMYIRGYPHQVUIHAGSZBUKQOJKJBYMRJZMCFBEOVQHGPSOUATFAEFEDXABKWKCCYLISNVTFCZJKLUJCDYRZLKOMLWELNFOANRAPKMUGAQYOJBXQMFVXZGWXZUTLKSBWEAITPYSMRTXQNCVJMITWUTW");
    msg.links = 3229869384U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.975352954338);
    msg.setSource(19066U);
    msg.setSourceEntity(184U);
    msg.setDestination(4748U);
    msg.setDestinationEntity(144U);
    msg.groupname.assign("HTMRLNDCTRWMFWIYAHVJKTGNVALFZXIZQKYLFZVBNQKLFGGMRKRDAPHBXOECERCQZGATTKSNBFYUUHLCZRGLBJHYAUVPHYMIBBVUWSTPDWXMWAJUBOINXJMKEOAPVVQPOQEZMEYHXMYSIEXOCNSCV");
    msg.action = 129U;
    msg.grouplist.assign("UONMKBICZDGISCGBZP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.549106127566);
    msg.setSource(2734U);
    msg.setSourceEntity(137U);
    msg.setDestination(47330U);
    msg.setDestinationEntity(222U);
    msg.groupname.assign("JYJWRJKZEBTLMRWBXXCFGQTLUJXTNRGIMGHWVJEBUHEYFOWQLCBLAUHNEHOVXLSMGIPSMROYZARDZRTDGVDUDAPRSYMTLLGFTWCPPIOZVOPCGXIIAZPXNRTMIVFEBTXBPZMUKTFEWVFYVKYHHCKHHSJITUYLXWCBOAKUQPNUOFPKWBNACZPOSADEEMICDKWNWQDQZHQVKNNFGOBRKGSQANCFQJSDSVGEMLBIDUSD");
    msg.action = 218U;
    msg.grouplist.assign("QBXEOCDAUDCCYPVVEQRCNVLOXVQJOITBWEYPSVTWEGLMUJFHZXWCSEIWZLHUVGFZYDUWBFEGDDYCRTSZFGPAPXYITARPEDFJVFEILZUTCBNMQSQXJPAFVKMGZNYMNXHBHSXRBYYVMUKZKHPOIIRFWBXLCZKZMOKYARJLTISDQRKLTONKWBXNMGS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.0851599372668);
    msg.setSource(44271U);
    msg.setSourceEntity(189U);
    msg.setDestination(65303U);
    msg.setDestinationEntity(249U);
    msg.groupname.assign("BLTENUOSGQZPXYOTQZZKLPCDRIVAJUNHLUUFZCPFTIMSSKBQJFQQDGKQVVENFMUGOXYPOHYNILYEBJCWLJMZWNHPRJZKHMYVCQVK");
    msg.action = 151U;
    msg.grouplist.assign("YNBKHALUOCXIMHYDASPCNEEBQOQCHYOUHJCBOUYIPSGOFTLBTPPXLWQFQRZAHMZBUJRVAAFJDTXKAFASYDZSOWUFXEXRAFUPOXVFJXNQRGDTEVEWLLZGRKMEMCBPLLJOJERMKRGVRFGRKCWVOLKWQJCYJYXHZAUZZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.888841784243);
    msg.setSource(17044U);
    msg.setSourceEntity(241U);
    msg.setDestination(3934U);
    msg.setDestinationEntity(63U);
    msg.value = 0.765871875234;
    msg.sys_src = 24467U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.496286597675);
    msg.setSource(20187U);
    msg.setSourceEntity(38U);
    msg.setDestination(43937U);
    msg.setDestinationEntity(173U);
    msg.value = 0.504831612246;
    msg.sys_src = 5723U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.193662509192);
    msg.setSource(8070U);
    msg.setSourceEntity(237U);
    msg.setDestination(12386U);
    msg.setDestinationEntity(191U);
    msg.value = 0.435426955778;
    msg.sys_src = 60519U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.319907880966);
    msg.setSource(6459U);
    msg.setSourceEntity(240U);
    msg.setDestination(17393U);
    msg.setDestinationEntity(149U);
    msg.value = 0.108641588216;
    msg.units = 169U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.533981306366);
    msg.setSource(56710U);
    msg.setSourceEntity(78U);
    msg.setDestination(47594U);
    msg.setDestinationEntity(192U);
    msg.value = 0.107693945912;
    msg.units = 42U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.946690991494);
    msg.setSource(9443U);
    msg.setSourceEntity(237U);
    msg.setDestination(10484U);
    msg.setDestinationEntity(204U);
    msg.value = 0.413286788401;
    msg.units = 178U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.21907491286);
    msg.setSource(28981U);
    msg.setSourceEntity(0U);
    msg.setDestination(65519U);
    msg.setDestinationEntity(196U);
    msg.base_lat = 0.774200324125;
    msg.base_lon = 0.889812813904;
    msg.base_time = 0.462254592825;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.399675139172);
    msg.setSource(31872U);
    msg.setSourceEntity(100U);
    msg.setDestination(20913U);
    msg.setDestinationEntity(65U);
    msg.base_lat = 0.337783095505;
    msg.base_lon = 0.533124536667;
    msg.base_time = 0.315730175107;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.531297886323);
    msg.setSource(52369U);
    msg.setSourceEntity(96U);
    msg.setDestination(40655U);
    msg.setDestinationEntity(211U);
    msg.base_lat = 0.400359530386;
    msg.base_lon = 0.238999604672;
    msg.base_time = 0.601738849905;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 25257U;
    tmp_msg_0.destination = 59204U;
    tmp_msg_0.timeout = 0.659259820423;
    IMC::EntityState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 228U;
    tmp_tmp_msg_0_0.flags = 120U;
    tmp_tmp_msg_0_0.description.assign("ADTSFNZEGCYQVOLHFMGIOFJAONKSKBVZLIKJXCOMPRUFEIDWDXVKYSWBOPGIYXARTUDUQYXNKEKVVMKBFHSEBXTPZVMGHLTHMUIXRNQYCJACRQBXGBZRUCZBAFZPGFSTTKLWLW");
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.339795906274);
    msg.setSource(27297U);
    msg.setSourceEntity(82U);
    msg.setDestination(44666U);
    msg.setDestinationEntity(244U);
    msg.base_lat = 0.242501236801;
    msg.base_lon = 0.510591272248;
    msg.base_time = 0.536939000609;
    const char tmp_msg_0[] = {85, 36, -95, -23, 106, 16, 124, 67, -54, 117, -14, 52, -31, -92, 35, 3, 45, 68, -122, -116, 86, 37, 8, 17, -109, -118, -55, -11, -28, 112, 66, 116, 11, 21, -10, 71, 123, -10, 90, 76, 81, -104, -67, -117, -58, 10, -8, 72, -121, -10, 84, 45, -109, 28, 25, -29, -7, -72, -125, -64, 35, -38, -67, 1, 23, -127, -82, 54, -17, -26, -88, -100, -23, 40, 3, -55, 32, -4, -30, 111, 93, 114, 29, -88, -58, 66, 33, -106, -126, 119, 92, -115, -121, 79, 85, -47, 121, 50, -57, 104, 50, 54, -67, 98, 89, 78, 66, 29, 45, 125, 38, 97, -15, 119, -52, -34, -89, 126, 82, 117, -19, -59, 121, 36, -89, 109, 38, 86, -61, 61, 16, -28, 71, 60, -93, 120, 60, -43, -59, -67, -128, 67, -12, 29, 0, 5, -49, -116, -85, -86, 64, -97, -88, -84, -128, -49, 19, -26, -119, 5, -64, -75, 121, -66, -122, -92, -23, 4, -114, -30, 22, -96, -33, -122, 25, 91, -124, 57, -20, -39, 52, 29, -80, -44, 92, -126, -20, -126, -101, 94, 57, -20, 101, -68, -107, 24, 108, -89, -115, -6, -98};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.337447380354);
    msg.setSource(12644U);
    msg.setSourceEntity(222U);
    msg.setDestination(22985U);
    msg.setDestinationEntity(146U);
    msg.base_lat = 0.541861505682;
    msg.base_lon = 0.387316523432;
    msg.base_time = 0.874323524727;
    const char tmp_msg_0[] = {-21, -62, -91, 34, -106, -85, -52, 100, 51, 92, -128, 114, 64, -65, 28, -15, 37, 88, 70, 96, 98, 96, -94, -32, -108, -35, 48, 94, 109, -125, 39, -58, -48, 115, -34, 55, 21, -114, 50, 41, 87, -64, -103, -61, -45, -108, 84, -95, 75, -96, 15, 43, 106, 1, -53, 9, 126, -61, 100, -79, 25, 61, -61, 84, -20, -53, 72, -119, -110, 55, -32, -6, 32, 0, -92, -61, 6, -37, 6, 24, -88, -37, 108, 61, 37, 81, 56, 95, 95, 41, -60, -48, 18, 10, 31, -18, 67, -60, 51, 99, -2, -79, -83, -8, -45, 106, -20, -105, -84, -30, 86, 65, 122, -128, -60, 60, -14, 12, -52, -125, -112, -9, 10, 72, 124, -65, 45, -50, -107, 17, -116, 92, -109, -54, -115, -111, 101, -63, -98, -10, 89, -106, -14, 34, 24, -77, -91, 125, -104, 106, -66, 112, -76, 73, 116, 95, 113, -87, -110, 30, 39, 66, -121, -116, -23, -126, 38, -115, -126, -52, 14, -60, 102, 76, 84, 79, 124, -34, 29, -107, 18, 79, 98, -6, 52, -72, -48, -16, 4, 85, 20, 117, 123, 54, -113, -44, -65, 34, 0, -31, -55, 35, 79, 37, -118, 5, 51, -78, 70, 40, 34, -103, 11, -28, -42, 81, 89, -27, 72, 124, -58, -101, 123, 7, 2, 97, -15, -6, -45, 44, -24, 50, -68, -77, -110, 109, -90, -91, 70};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.63058230538);
    msg.setSource(49201U);
    msg.setSourceEntity(193U);
    msg.setDestination(51402U);
    msg.setDestinationEntity(45U);
    msg.base_lat = 0.448728632927;
    msg.base_lon = 0.6906210864;
    msg.base_time = 0.318506890715;
    const char tmp_msg_0[] = {-38, 82, 36, 68, -122, -89, 65, 56, 118, 29, -100, -46, 55, -100, 57, 100, -128, 65, 108, -127, -109, 83, -112, 88, 65, 4, -106, -95, -89, 55, -73, -105, 99, -100, -15, 52, -23, -85, -5, 74, -28, 54, -8, 28, 26, -27, 51, -120, -108, -52, 74, -33, 45, -60, 60, 34, 6, 43, -55, -108, -52, 80, 118, 20, -30, 101, 29, 37, 25, 95, -103, 61, -67, -52, -81, -17, -6, -57, -125, -75, 95, 114, -59, 60, -71, -47, 17, -31, 61, 102, -68, -89, -33, 36, -122, -13, 111, -17, 119, -54, -67, 123, 34, 66, -62, -17, -24, 21, -24, 21, 122, -81, -52, 84, -79, 124, -21, -31, 45, 34, -71, -18, 1, 118, -14, -112, -11, -114, -123, 10, 108, -81, 40, 37, -83, -1, 38, 120, -69, 28, 52, 0, -65, -1, -37, 91, 126, -49, 40, -68, 3, 39, -98, -73, -125, -65, -88, -97, 54, 27, 113, -59, 0, 20, 45, -107, 23, -105, 69, 39, -32, 3, 61, -24, 109, -86, -9, 58, 13, -74, -57, -73, -75, -36, 5, 15, -59, 99, 35, -117, 91, -33, -73, 7, 45, -128, 111, -85, 15, -92, -48, 18, -56, 66, 87, 38, 105, -127, 41, 90, -72, 0, -125, 95, -43, 83, -38, -116, -81, 10, -66, -22, -14, -74, 51, -73, -115, -16, -4, 45, 117, 28, -44, 20, 40, 101, 78, 104, 83, 21, -114, 112, -50, -52, -128, 49, -18, 66, -128, -52, -124, 105};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.00306201243796);
    msg.setSource(63157U);
    msg.setSourceEntity(72U);
    msg.setDestination(57324U);
    msg.setDestinationEntity(125U);
    msg.sys_id = 53673U;
    msg.priority = 60;
    msg.x = 16922;
    msg.y = -637;
    msg.z = 28669;
    msg.t = -17493;
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 91U;
    tmp_msg_0.frag_number = 201U;
    tmp_msg_0.num_frags = 249U;
    const char tmp_tmp_msg_0_0[] = {9, -1, 46, 124, 37, -27, 58, 25, 20, -70, 74, -38, -87, 119, -81, -81, 48, 86, -101, 77, -38, 103, -3, -29, -97, 37, -20, -19, -91, -40, -73, 17, 84, -97, 6, -110, 126, 0, -34, -123, 89, -13, 19, 41, -28, 78, 49, 102, -109, -91, 42, 2, 95, -108, -77, 30, 73, 93, 49, -110, -2, 66};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.820794543104);
    msg.setSource(11246U);
    msg.setSourceEntity(175U);
    msg.setDestination(11104U);
    msg.setDestinationEntity(247U);
    msg.sys_id = 13248U;
    msg.priority = 124;
    msg.x = -3459;
    msg.y = -10178;
    msg.z = -14409;
    msg.t = -10180;
    IMC::ImageTracking tmp_msg_0;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.148375826817);
    msg.setSource(23703U);
    msg.setSourceEntity(55U);
    msg.setDestination(15077U);
    msg.setDestinationEntity(107U);
    msg.sys_id = 29350U;
    msg.priority = -112;
    msg.x = 25146;
    msg.y = -4721;
    msg.z = 11634;
    msg.t = -17820;
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.597396390204;
    tmp_tmp_msg_0_0.lon = 0.984829396709;
    tmp_tmp_msg_0_0.height = 0.818767634996;
    tmp_tmp_msg_0_0.x = 0.20012512407;
    tmp_tmp_msg_0_0.y = 0.76117329645;
    tmp_tmp_msg_0_0.z = 0.534138434592;
    tmp_tmp_msg_0_0.phi = 0.537922670527;
    tmp_tmp_msg_0_0.theta = 0.425200298379;
    tmp_tmp_msg_0_0.psi = 0.478985588258;
    tmp_tmp_msg_0_0.u = 0.662569235171;
    tmp_tmp_msg_0_0.v = 0.378798870392;
    tmp_tmp_msg_0_0.w = 0.930204028273;
    tmp_tmp_msg_0_0.vx = 0.828900019582;
    tmp_tmp_msg_0_0.vy = 0.929935629978;
    tmp_tmp_msg_0_0.vz = 0.426038802321;
    tmp_tmp_msg_0_0.p = 0.844169447986;
    tmp_tmp_msg_0_0.q = 0.777964051638;
    tmp_tmp_msg_0_0.r = 0.108825989857;
    tmp_tmp_msg_0_0.depth = 0.281633013938;
    tmp_tmp_msg_0_0.alt = 0.42049037491;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 250U;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.722210024133);
    msg.setSource(53945U);
    msg.setSourceEntity(186U);
    msg.setDestination(53133U);
    msg.setDestinationEntity(227U);
    msg.req_id = 37950U;
    msg.type = 89U;
    msg.max_size = 8396U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.219949907128;
    tmp_msg_0.base_lon = 0.0577579753491;
    tmp_msg_0.base_time = 0.200450673629;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.948135423542);
    msg.setSource(46191U);
    msg.setSourceEntity(69U);
    msg.setDestination(28464U);
    msg.setDestinationEntity(194U);
    msg.req_id = 42718U;
    msg.type = 118U;
    msg.max_size = 32073U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.81904948362;
    tmp_msg_0.base_lon = 0.933743088731;
    tmp_msg_0.base_time = 0.883879530028;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 4109U;
    tmp_tmp_msg_0_0.destination = 41307U;
    tmp_tmp_msg_0_0.timeout = 0.632073149009;
    IMC::UamRxRange tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.seq = 24563U;
    tmp_tmp_tmp_msg_0_0_0.sys.assign("YIOACAHDLCMROHLOBFGTMLZVKSIFSHBCSSAAPSFYYUHHKLDADUCXNWNEGXRMJSVHDULZIBEJQRQDCAGKCNMIKSLDXFHQYVAVYNYDWZAPKRUFSEOLKOIHUGTIPVFEJUHZEGWXDFGOPXWPIJTXRWHNITMLQJNSKYABMQWVONUG");
    tmp_tmp_tmp_msg_0_0_0.value = 0.108927272581;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.0790183132075);
    msg.setSource(62392U);
    msg.setSourceEntity(215U);
    msg.setDestination(36603U);
    msg.setDestinationEntity(221U);
    msg.req_id = 59727U;
    msg.type = 26U;
    msg.max_size = 51741U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.327753038887;
    tmp_msg_0.base_lon = 0.205906424398;
    tmp_msg_0.base_time = 0.924157530958;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.860325142383);
    msg.setSource(37129U);
    msg.setSourceEntity(114U);
    msg.setDestination(60316U);
    msg.setDestinationEntity(56U);
    msg.original_source = 61890U;
    msg.destination = 55971U;
    msg.timeout = 0.766200127017;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 13362U;
    tmp_msg_0.name.assign("XCBXXLXZWNRDGKFZYELYOSVFAPFRHOIDEQFFVHTYIBJABBTUJLSWZCXCMZMBTPHOENPUOYCODWLAWQBGZHJVKOJRUDKRVETMNBMILZYNCRFKBGGIJXHSECPHCMVVTWMFWJQYSUIYXHKJEPNDMJSDWRSLQMSKQPVERPAHGCAFWYNUWUWPLLLGAMKSPJSREETJNQIBOZYUAIAGQDDFVZFMDRSIAQU");
    tmp_msg_0.custom.assign("PIMTCLXHCWBUQSMVBBSHSFKDGJZXFLAWRWKRUPAFNJEIVTYIYSDEHHPZNFEVEXGCYN");
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.0234818740221);
    msg.setSource(59698U);
    msg.setSourceEntity(44U);
    msg.setDestination(30477U);
    msg.setDestinationEntity(212U);
    msg.original_source = 23791U;
    msg.destination = 1927U;
    msg.timeout = 0.634482310234;
    IMC::SetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 17U;
    tmp_msg_0.x = 22776U;
    tmp_msg_0.y = 24078U;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.0150261577652);
    msg.setSource(43874U);
    msg.setSourceEntity(178U);
    msg.setDestination(61111U);
    msg.setDestinationEntity(137U);
    msg.original_source = 491U;
    msg.destination = 40213U;
    msg.timeout = 0.904800337029;
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.394783905546;
    tmp_msg_0.lat = 0.85812533357;
    tmp_msg_0.lon = 0.0195696388646;
    tmp_msg_0.z = 0.823267182263;
    tmp_msg_0.z_units = 100U;
    tmp_msg_0.travel_z = 0.28302301519;
    tmp_msg_0.travel_z_units = 96U;
    tmp_msg_0.delayed = 104U;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.945849227326);
    msg.setSource(40192U);
    msg.setSourceEntity(32U);
    msg.setDestination(5411U);
    msg.setDestinationEntity(119U);
    msg.id = 103U;
    msg.range = 0.396425507496;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.530394459862);
    msg.setSource(22161U);
    msg.setSourceEntity(35U);
    msg.setDestination(27687U);
    msg.setDestinationEntity(186U);
    msg.id = 229U;
    msg.range = 0.335367455805;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.578809399186);
    msg.setSource(33093U);
    msg.setSourceEntity(53U);
    msg.setDestination(61047U);
    msg.setDestinationEntity(62U);
    msg.id = 165U;
    msg.range = 0.712580773237;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.637553999585);
    msg.setSource(30207U);
    msg.setSourceEntity(212U);
    msg.setDestination(8900U);
    msg.setDestinationEntity(225U);
    msg.beacon.assign("ANWEGYODJLVYIWAPFIHRHFUXDNIBUQDOAEBJXXVZFRYXOZPLOMZHMAXUTEAJPNVKNXUZMQIDKQZETKUBUAFAINBTDEHVLGTZRMVODFYURJLQFCGEMEJOGMLXUQQKJXRIHSCWSULSTVVWKLCAOMKGFEPBGPDROZLLIIHBCQLEHAAXRQDBPVZCWTQSJFWGP");
    msg.lat = 0.0651627336517;
    msg.lon = 0.371701429361;
    msg.depth = 0.763048133688;
    msg.query_channel = 1U;
    msg.reply_channel = 7U;
    msg.transponder_delay = 62U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.600224521484);
    msg.setSource(25994U);
    msg.setSourceEntity(58U);
    msg.setDestination(23030U);
    msg.setDestinationEntity(101U);
    msg.beacon.assign("FCCGXVALLMMOHFPAVNLEKOTBYD");
    msg.lat = 0.986506720803;
    msg.lon = 0.706637031497;
    msg.depth = 0.527879811263;
    msg.query_channel = 164U;
    msg.reply_channel = 22U;
    msg.transponder_delay = 95U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.260602553724);
    msg.setSource(22440U);
    msg.setSourceEntity(0U);
    msg.setDestination(63733U);
    msg.setDestinationEntity(229U);
    msg.beacon.assign("WDFLFKGIUUCZIWSXIBTZEQKRUXNDUHFHAPMHIMAWSFNDBFWXHZXVHCVJLGGEZPOYCRKMXJHMQQYLRFTFKRPEKOELOTHKBAHOMXGSQXSSYQWVDGTNPAVUCJISLLODIIUQLSNEOAEMWR");
    msg.lat = 0.443708137672;
    msg.lon = 0.893236922458;
    msg.depth = 0.614809991125;
    msg.query_channel = 33U;
    msg.reply_channel = 64U;
    msg.transponder_delay = 252U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.124738714585);
    msg.setSource(55574U);
    msg.setSourceEntity(210U);
    msg.setDestination(62858U);
    msg.setDestinationEntity(44U);
    msg.op = 179U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.0881548252765);
    msg.setSource(29370U);
    msg.setSourceEntity(157U);
    msg.setDestination(50274U);
    msg.setDestinationEntity(77U);
    msg.op = 42U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.683908256899);
    msg.setSource(35393U);
    msg.setSourceEntity(55U);
    msg.setDestination(30680U);
    msg.setDestinationEntity(64U);
    msg.op = 162U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JHYWIHJWCKTVLSSQRDONKRBQPDJLZQUNFSCPMYDFJIMJXQZNGVOEHKYLTNHOKGDTZXTXWSALYXKEBXJBIULQZVWACJNWUCQIQDE");
    tmp_msg_0.lat = 0.404203640795;
    tmp_msg_0.lon = 0.0288092954481;
    tmp_msg_0.depth = 0.722964817093;
    tmp_msg_0.query_channel = 21U;
    tmp_msg_0.reply_channel = 76U;
    tmp_msg_0.transponder_delay = 90U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.0790052830485);
    msg.setSource(20674U);
    msg.setSourceEntity(239U);
    msg.setDestination(1446U);
    msg.setDestinationEntity(52U);
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 32U;
    tmp_msg_0.label.assign("MXOEJSRYQMICGUYISULASULOHTJPLSXYSBZNRLTIEVDNEJULHHVQEOGEVQGPVMRGTCEYGDICYLBDQZZDDSFINNSEFANAIXJEOWLZPJBHBYUPGKOGOAMDLFCYTZVPKUUKXBZTWZJEYRTEKQKAKVWJJNKOFUSDXNOW");
    tmp_msg_0.component.assign("IBYWNJFHKCPKEAQEWRRZDFPXNOHUAURIXMXMKVTIHAPRSSVUVWCGPQTKOJWZRWVEWOTOCCSYQSCRNQROCJQBUYGZFSGIFPQJFQPKBCDAHDTYSNXZHLZMOHPESAYGVTXBSCJLTFLDNDHTNIULMMWLEDMQBMPVMRIMHSKHNKTLZWDPULYUTKLLGOCOFYSYEFGKILQNGGYPFAZEI");
    tmp_msg_0.act_time = 58651U;
    tmp_msg_0.deact_time = 65418U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.814793023931);
    msg.setSource(15658U);
    msg.setSourceEntity(81U);
    msg.setDestination(22543U);
    msg.setDestinationEntity(98U);
    IMC::Aborted tmp_msg_0;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.283188684176);
    msg.setSource(55202U);
    msg.setSourceEntity(223U);
    msg.setDestination(48002U);
    msg.setDestinationEntity(121U);
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 89U;
    tmp_msg_0.request_id = 45888U;
    tmp_msg_0.command = 68U;
    IMC::AutonomousSection tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.689174374158;
    tmp_tmp_msg_0_0.lon = 0.941114823358;
    tmp_tmp_msg_0_0.speed = 0.409032278929;
    tmp_tmp_msg_0_0.speed_units = 227U;
    tmp_tmp_msg_0_0.limits = 200U;
    tmp_tmp_msg_0_0.max_depth = 0.503949162164;
    tmp_tmp_msg_0_0.min_alt = 0.907613666554;
    tmp_tmp_msg_0_0.time_limit = 0.919823865434;
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.793005876005;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.902026286461;
    tmp_tmp_msg_0_0.area_limits.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.controller.assign("CSHKUPXKQRRGWLXUVOUCDLJVKPFZEVMJMETFRDHIXVITBKPWLOXEMWNMUOOSAFZZINXVUAEHVBSNFZDYBEWJGOGXSTXFYPDYLYBZSKHCNRMEUYXIZWWETUDAMGBLYCPBQCBV");
    tmp_tmp_msg_0_0.custom.assign("MPYESABGYYUNJUFSQSKISDPQTKVZCQZPCYAEGQYHJVXDIWNUFLEVBUUQGHNFTPHLHFAIIQNFPHUWTDZITSEZWAWUWIECSAPHKMKRBRO");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 45757U;
    tmp_msg_0.info.assign("LODIYBMCZDRDFJDBZNAEHZGHVIMUUQLCBMHBVIWDCX");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.563788081253);
    msg.setSource(43416U);
    msg.setSourceEntity(48U);
    msg.setDestination(50201U);
    msg.setDestinationEntity(65U);
    msg.op = 185U;
    msg.system.assign("DQTHCOPPRLAAXCLZVXBMXHQEWTNHWWBRYICYZRRAUFKVMLRASRFQQSYTQXLQBJEDUFXGTWSDMCJXBHCACVSLDJWJMLXRGGHZQP");
    msg.range = 0.962052945632;
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("GJHZNRHKFGAMKSEILXKEWYEQCGSPAIKTWKXFGNDYHNIAHIAZJTOJWELNWORCSFOSLHAMQCJFGBDDGVKRBIRSUUHYVUHVQPVEQBBZPPVGPBYWOXLCNJMTPKWTXSYQCLIHYVZABSMYZTXLCMCXTNNMFDKEWPAOEEKWOKFVIQGCSNYZYRFLCQZDLVMGRLF");
    tmp_msg_0.op = 183U;
    tmp_msg_0.sched_time = 0.791609205549;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.816271061008);
    msg.setSource(27241U);
    msg.setSourceEntity(86U);
    msg.setDestination(39370U);
    msg.setDestinationEntity(157U);
    msg.op = 245U;
    msg.system.assign("YUSEMOZZRXSLNQILRPEVHFKCHSOQHUTPVKIPGFIBSLQZMFXIUUEJFNQCTZPHBXTMWTFMHYNUXDXDSUIYEZGJBMZVSRUYEORKBWSHZVMOYSJRFQBTWKOXJQJRYZWDAQPAKANXDZFJGDRAFEWIRNWKVUIMNGRLOYTITLFMGPOAXGMJTJPGCTBUBNDBDVLWNVWVCKEMAQHNHVVLSKGSADCYOCQCHALUJXCGCBGEEEQDLRK");
    msg.range = 0.915527148208;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 214U;
    tmp_msg_0.lon_gain = 0.965074410174;
    tmp_msg_0.lat_gain = 0.78023610886;
    tmp_msg_0.bond_thick = 0.897340645854;
    tmp_msg_0.lead_gain = 0.528670876393;
    tmp_msg_0.deconfl_gain = 0.293300085503;
    tmp_msg_0.accel_switch_gain = 0.136064715872;
    tmp_msg_0.safe_dist = 0.144380938812;
    tmp_msg_0.deconflict_offset = 0.404046609414;
    tmp_msg_0.accel_safe_margin = 0.0609448545794;
    tmp_msg_0.accel_lim_x = 0.20271804872;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.834776921153);
    msg.setSource(4343U);
    msg.setSourceEntity(98U);
    msg.setDestination(52231U);
    msg.setDestinationEntity(150U);
    msg.op = 201U;
    msg.system.assign("XUXVUAOJPGBVRSRJXZDIYVRBPOAZPNLGWCTMHTKNQBOYBERHQDLICHLEMDFFQKTZIHVYMXNFMZCZSAGNDFINBPLZFSWOJNSQFYHLYVMWAFJBYXMJEIKIMAKJURBZQOAJQNUEKDCCIQWGDMDFVOLGKTRWGTEESFCHLNYUQZIWNHMVVQIEPPARMYOOXPLYSATBRWOCCRZGXJHUVHGIRPHKXKWWBCUFTQEWSTSJJLAKXEBXU");
    msg.range = 0.596281278004;
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 8U;
    tmp_msg_0.value = 0.0445222075475;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.380755833106);
    msg.setSource(7885U);
    msg.setSourceEntity(35U);
    msg.setDestination(46135U);
    msg.setDestinationEntity(33U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.541866641525);
    msg.setSource(52062U);
    msg.setSourceEntity(221U);
    msg.setDestination(2002U);
    msg.setDestinationEntity(172U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.525728256395);
    msg.setSource(28316U);
    msg.setSourceEntity(32U);
    msg.setDestination(6901U);
    msg.setDestinationEntity(102U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.0525758546827);
    msg.setSource(50241U);
    msg.setSourceEntity(42U);
    msg.setDestination(59072U);
    msg.setDestinationEntity(148U);
    msg.list.assign("GRDYLEMBVTKNQMLGVGTMXYIEPYOWZAJQBXIIYRJHJXHMRUUGEUIKPPCJQCFTRJLQPCDZYAMDLRKCRDHPAZSHUOCBJWIHNVFOMYXQYOVQNVVATPMSOOOJAECNCUEQRFRWLCEGSXNTIBAYZARFUNQTIQTWBYXGAYKSWHPUDZEQKBKGPSWDDBSUZHVWOLPGFHBFDEPSZX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.445287985026);
    msg.setSource(532U);
    msg.setSourceEntity(42U);
    msg.setDestination(40369U);
    msg.setDestinationEntity(198U);
    msg.list.assign("NOXJKUVVADRHPYRSDOAPNTCSEHAFMEGXFGZLDKRPEOMFGTHYJDEKYWSIUIYFRCOGEKIBKVQJCKTKLZCYULNKBPZFSGOHJEVIFSVQLGWJXJUANTZUSHNVNADIJQEDYWXOIFLIRPZYJNAGBCMJXTDLTIHKHTYMMHXIZPWOHZNMXSYZMBEPUPQCOAVRWMUZBBWDXZLWBCFTVNMFDLBRRBWUVQQUANJXUKVSPQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.463969786403);
    msg.setSource(11437U);
    msg.setSourceEntity(73U);
    msg.setDestination(19398U);
    msg.setDestinationEntity(245U);
    msg.list.assign("LTIYCGBHULXSMFJJCCHXCJBYXLQZRTPXNEMKUDDDJKBPGHMECQDWLGYQGSBGDIJBEJHCWIEFVUAOSVPZXUOXPPBLJOEMGGIQLTKFAAQYTEQDZANSRWKNOUQNWVTVLLPXZWSHFSVZYPKYOUYWDGSHBXMFDOMOYTNZXTHIJMEVUVGREYIVFRHKKTWEZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.280466456485);
    msg.setSource(10090U);
    msg.setSourceEntity(75U);
    msg.setDestination(18613U);
    msg.setDestinationEntity(186U);
    msg.peer.assign("CNVHWJJXSVRTVPFEWVUFSCRDODHVYYKGUQHXQ");
    msg.rssi = 0.230210818003;
    msg.integrity = 20710U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.85701606883);
    msg.setSource(49411U);
    msg.setSourceEntity(233U);
    msg.setDestination(5689U);
    msg.setDestinationEntity(29U);
    msg.peer.assign("TREMTRDHBKKKHBLGOTXNRCAHEPADUWJMGFFNAXKJYQRRVWUPZFYKZQDZXCJLDQYPGCIEIZZAFUCCFGWWLCKVMVGMJLWODVRIQLZSJMOUEUFSGIBNJPUDNCOBWXOTTBYYEASWNBTEURDAOTLTHFPCGZULVPHVYRHPRHNKUAASLVEJQVMNJHPBSQDBGISVMIWZFHMZFSXKYNESIYXYQJPSCKOLAIEWGZJTTMOXQXRFO");
    msg.rssi = 0.379856788002;
    msg.integrity = 36771U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.16101102566);
    msg.setSource(1498U);
    msg.setSourceEntity(25U);
    msg.setDestination(44503U);
    msg.setDestinationEntity(228U);
    msg.peer.assign("QGCRJITAKMZSEYEWTTBVOYOFAQUDYUREFKQQYBKTZUSUFVPXLZOLWXDLSSDGJHMADOKOWAAWTWILBDPYGHKAFZNEEGMKUTXUMFCJKGPPYENBPSFCSIMIIOUMEZLJKVSQPNLWBAYNZJQKBXFHVKHJDRWGHXUCNARFHVNOQPZJSGSGJCIHBVOXTDZLULCXCRAZSNLIGC");
    msg.rssi = 0.358245569832;
    msg.integrity = 21696U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.943821597022);
    msg.setSource(12909U);
    msg.setSourceEntity(21U);
    msg.setDestination(24540U);
    msg.setDestinationEntity(226U);
    msg.value = 17813;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.670118412904);
    msg.setSource(16832U);
    msg.setSourceEntity(69U);
    msg.setDestination(6074U);
    msg.setDestinationEntity(28U);
    msg.value = 27566;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.518782966128);
    msg.setSource(7387U);
    msg.setSourceEntity(165U);
    msg.setDestination(802U);
    msg.setDestinationEntity(50U);
    msg.value = -29639;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.211069227533);
    msg.setSource(29127U);
    msg.setSourceEntity(24U);
    msg.setDestination(54259U);
    msg.setDestinationEntity(183U);
    msg.value = 0.33719381499;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.885361376251);
    msg.setSource(27260U);
    msg.setSourceEntity(71U);
    msg.setDestination(55012U);
    msg.setDestinationEntity(146U);
    msg.value = 0.632741001304;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.276367760975);
    msg.setSource(44249U);
    msg.setSourceEntity(190U);
    msg.setDestination(22715U);
    msg.setDestinationEntity(17U);
    msg.value = 0.342816748663;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.0193238603477);
    msg.setSource(49218U);
    msg.setSourceEntity(172U);
    msg.setDestination(56355U);
    msg.setDestinationEntity(155U);
    msg.value = 0.174881103536;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.391536312096);
    msg.setSource(63307U);
    msg.setSourceEntity(37U);
    msg.setDestination(14374U);
    msg.setDestinationEntity(25U);
    msg.value = 0.849944258164;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.196328100551);
    msg.setSource(45175U);
    msg.setSourceEntity(254U);
    msg.setDestination(2450U);
    msg.setDestinationEntity(105U);
    msg.value = 0.68450027877;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.855366782468);
    msg.setSource(30515U);
    msg.setSourceEntity(125U);
    msg.setDestination(59044U);
    msg.setDestinationEntity(127U);
    msg.validity = 20248U;
    msg.type = 166U;
    msg.utc_year = 62241U;
    msg.utc_month = 214U;
    msg.utc_day = 76U;
    msg.utc_time = 0.263297557034;
    msg.lat = 0.571228284917;
    msg.lon = 0.365154686721;
    msg.height = 0.272072534116;
    msg.satellites = 211U;
    msg.cog = 0.687862651114;
    msg.sog = 0.553254797627;
    msg.hdop = 0.084401738968;
    msg.vdop = 0.774913596756;
    msg.hacc = 0.406296387732;
    msg.vacc = 0.210941619859;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.459434473565);
    msg.setSource(8802U);
    msg.setSourceEntity(106U);
    msg.setDestination(10586U);
    msg.setDestinationEntity(5U);
    msg.validity = 38912U;
    msg.type = 48U;
    msg.utc_year = 22642U;
    msg.utc_month = 59U;
    msg.utc_day = 216U;
    msg.utc_time = 0.529787789271;
    msg.lat = 0.602105449786;
    msg.lon = 0.291849152952;
    msg.height = 0.601718310575;
    msg.satellites = 139U;
    msg.cog = 0.598848615391;
    msg.sog = 0.91997804571;
    msg.hdop = 0.284501008487;
    msg.vdop = 0.351653555114;
    msg.hacc = 0.187993769493;
    msg.vacc = 0.428943792009;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.880363692955);
    msg.setSource(53500U);
    msg.setSourceEntity(175U);
    msg.setDestination(46093U);
    msg.setDestinationEntity(149U);
    msg.validity = 10204U;
    msg.type = 9U;
    msg.utc_year = 49177U;
    msg.utc_month = 178U;
    msg.utc_day = 233U;
    msg.utc_time = 0.636781928119;
    msg.lat = 0.799196892224;
    msg.lon = 0.141094220251;
    msg.height = 0.950363536887;
    msg.satellites = 203U;
    msg.cog = 0.494227448351;
    msg.sog = 0.446901351591;
    msg.hdop = 0.762342559008;
    msg.vdop = 0.201136098643;
    msg.hacc = 0.15575626153;
    msg.vacc = 0.241682169008;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.047934835139);
    msg.setSource(20423U);
    msg.setSourceEntity(27U);
    msg.setDestination(36564U);
    msg.setDestinationEntity(46U);
    msg.time = 0.705739783183;
    msg.phi = 0.116868039112;
    msg.theta = 0.0431393530396;
    msg.psi = 0.9903182214;
    msg.psi_magnetic = 0.122268447558;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.48798283974);
    msg.setSource(14999U);
    msg.setSourceEntity(28U);
    msg.setDestination(6381U);
    msg.setDestinationEntity(151U);
    msg.time = 0.900203576478;
    msg.phi = 0.638613237538;
    msg.theta = 0.00684465197985;
    msg.psi = 0.340728328761;
    msg.psi_magnetic = 0.199568919779;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.941691968911);
    msg.setSource(1798U);
    msg.setSourceEntity(38U);
    msg.setDestination(20294U);
    msg.setDestinationEntity(76U);
    msg.time = 0.426833582776;
    msg.phi = 0.678012676159;
    msg.theta = 0.841039513769;
    msg.psi = 0.11362384531;
    msg.psi_magnetic = 0.750644811857;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.655367160171);
    msg.setSource(38095U);
    msg.setSourceEntity(200U);
    msg.setDestination(14672U);
    msg.setDestinationEntity(111U);
    msg.time = 0.705662871713;
    msg.x = 0.3666747509;
    msg.y = 0.52037699935;
    msg.z = 0.993382191193;
    msg.timestep = 0.208256881319;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.938116429252);
    msg.setSource(43700U);
    msg.setSourceEntity(67U);
    msg.setDestination(60875U);
    msg.setDestinationEntity(103U);
    msg.time = 0.312452940217;
    msg.x = 0.776691155755;
    msg.y = 0.970279884999;
    msg.z = 0.141988817822;
    msg.timestep = 0.410940122332;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.0105419232753);
    msg.setSource(42783U);
    msg.setSourceEntity(19U);
    msg.setDestination(16936U);
    msg.setDestinationEntity(234U);
    msg.time = 0.591545083858;
    msg.x = 0.940242640572;
    msg.y = 0.969823220135;
    msg.z = 0.241186908629;
    msg.timestep = 0.094901074985;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.290880157902);
    msg.setSource(38263U);
    msg.setSourceEntity(253U);
    msg.setDestination(21431U);
    msg.setDestinationEntity(234U);
    msg.time = 0.837689388694;
    msg.x = 0.129278401922;
    msg.y = 0.935753203804;
    msg.z = 0.869110430774;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.968825181362);
    msg.setSource(14341U);
    msg.setSourceEntity(114U);
    msg.setDestination(57779U);
    msg.setDestinationEntity(36U);
    msg.time = 0.811406191443;
    msg.x = 0.385776962493;
    msg.y = 0.571569344175;
    msg.z = 0.0757971307937;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.776517827871);
    msg.setSource(14825U);
    msg.setSourceEntity(57U);
    msg.setDestination(14451U);
    msg.setDestinationEntity(112U);
    msg.time = 0.61344528257;
    msg.x = 0.908567859055;
    msg.y = 0.855295148138;
    msg.z = 0.189984692321;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.732381288989);
    msg.setSource(44395U);
    msg.setSourceEntity(109U);
    msg.setDestination(13378U);
    msg.setDestinationEntity(203U);
    msg.time = 0.0152807933852;
    msg.x = 0.75807148147;
    msg.y = 0.000980328052598;
    msg.z = 0.192475875505;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.310315694434);
    msg.setSource(13556U);
    msg.setSourceEntity(198U);
    msg.setDestination(20394U);
    msg.setDestinationEntity(164U);
    msg.time = 0.546956611531;
    msg.x = 0.103610653332;
    msg.y = 0.819209921289;
    msg.z = 0.26993185135;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.488550104955);
    msg.setSource(28070U);
    msg.setSourceEntity(236U);
    msg.setDestination(14006U);
    msg.setDestinationEntity(17U);
    msg.time = 0.38644218514;
    msg.x = 0.123450079225;
    msg.y = 0.665062475969;
    msg.z = 0.648357722609;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.411205878699);
    msg.setSource(61175U);
    msg.setSourceEntity(10U);
    msg.setDestination(39267U);
    msg.setDestinationEntity(141U);
    msg.time = 0.828605807025;
    msg.x = 0.389752882731;
    msg.y = 0.796610353726;
    msg.z = 0.0137466457724;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.285216408823);
    msg.setSource(36285U);
    msg.setSourceEntity(10U);
    msg.setDestination(55643U);
    msg.setDestinationEntity(201U);
    msg.time = 0.766821379938;
    msg.x = 0.903697886675;
    msg.y = 0.881774706833;
    msg.z = 0.893731319111;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.976391726919);
    msg.setSource(22022U);
    msg.setSourceEntity(120U);
    msg.setDestination(1088U);
    msg.setDestinationEntity(17U);
    msg.time = 0.486073755908;
    msg.x = 0.542228134382;
    msg.y = 0.950603361629;
    msg.z = 0.625726986975;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.304409030186);
    msg.setSource(55264U);
    msg.setSourceEntity(14U);
    msg.setDestination(32853U);
    msg.setDestinationEntity(16U);
    msg.validity = 242U;
    msg.x = 0.540107372798;
    msg.y = 0.419904140467;
    msg.z = 0.0559165322929;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.153249496022);
    msg.setSource(56443U);
    msg.setSourceEntity(211U);
    msg.setDestination(44004U);
    msg.setDestinationEntity(61U);
    msg.validity = 89U;
    msg.x = 0.861756337876;
    msg.y = 0.459924259586;
    msg.z = 0.797829006119;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.586693594766);
    msg.setSource(54506U);
    msg.setSourceEntity(138U);
    msg.setDestination(47068U);
    msg.setDestinationEntity(237U);
    msg.validity = 113U;
    msg.x = 0.61162146599;
    msg.y = 0.671854976395;
    msg.z = 0.499063362983;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.281882376653);
    msg.setSource(62509U);
    msg.setSourceEntity(140U);
    msg.setDestination(32355U);
    msg.setDestinationEntity(50U);
    msg.validity = 117U;
    msg.x = 0.734894530901;
    msg.y = 0.672169617637;
    msg.z = 0.219532525015;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.449240853998);
    msg.setSource(8065U);
    msg.setSourceEntity(67U);
    msg.setDestination(17252U);
    msg.setDestinationEntity(129U);
    msg.validity = 205U;
    msg.x = 0.442728373995;
    msg.y = 0.115724932262;
    msg.z = 0.318618553426;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.717438425147);
    msg.setSource(61627U);
    msg.setSourceEntity(160U);
    msg.setDestination(42974U);
    msg.setDestinationEntity(121U);
    msg.validity = 11U;
    msg.x = 0.0552350002169;
    msg.y = 0.132912465569;
    msg.z = 0.744112483735;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.150707941073);
    msg.setSource(62075U);
    msg.setSourceEntity(156U);
    msg.setDestination(55343U);
    msg.setDestinationEntity(48U);
    msg.time = 0.300018370616;
    msg.x = 0.860778578809;
    msg.y = 0.635355934512;
    msg.z = 0.835165493343;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.174707827372);
    msg.setSource(34415U);
    msg.setSourceEntity(188U);
    msg.setDestination(37817U);
    msg.setDestinationEntity(158U);
    msg.time = 0.179554635139;
    msg.x = 0.186620776765;
    msg.y = 0.70987993928;
    msg.z = 0.164318020149;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.689793256068);
    msg.setSource(46732U);
    msg.setSourceEntity(92U);
    msg.setDestination(36411U);
    msg.setDestinationEntity(112U);
    msg.time = 0.791363479211;
    msg.x = 0.0229673584889;
    msg.y = 0.326544859335;
    msg.z = 0.60944661713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.843026036661);
    msg.setSource(56552U);
    msg.setSourceEntity(19U);
    msg.setDestination(20275U);
    msg.setDestinationEntity(60U);
    msg.validity = 137U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.274421227365;
    tmp_msg_0.y = 0.658639614268;
    tmp_msg_0.z = 0.556154923629;
    tmp_msg_0.phi = 0.701852970574;
    tmp_msg_0.theta = 0.0252239684584;
    tmp_msg_0.psi = 0.556882576061;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.908900920236;
    tmp_msg_1.beam_height = 0.954746712155;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.738509578295;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.0714421793234);
    msg.setSource(64569U);
    msg.setSourceEntity(155U);
    msg.setDestination(10807U);
    msg.setDestinationEntity(37U);
    msg.validity = 219U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.988530996794;
    tmp_msg_0.y = 0.344682828157;
    tmp_msg_0.z = 0.75114593985;
    tmp_msg_0.phi = 0.582854764817;
    tmp_msg_0.theta = 0.781776342543;
    tmp_msg_0.psi = 0.37708084133;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.556084955865;
    tmp_msg_1.beam_height = 0.0468311245544;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.958978350719;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.137158512497);
    msg.setSource(53969U);
    msg.setSourceEntity(145U);
    msg.setDestination(22452U);
    msg.setDestinationEntity(220U);
    msg.validity = 102U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.668543040674;
    tmp_msg_0.beam_height = 0.2456484602;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.555064769437;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.958307187849);
    msg.setSource(59463U);
    msg.setSourceEntity(31U);
    msg.setDestination(31467U);
    msg.setDestinationEntity(41U);
    msg.value = 0.834347589414;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.538577551155);
    msg.setSource(14310U);
    msg.setSourceEntity(234U);
    msg.setDestination(31650U);
    msg.setDestinationEntity(147U);
    msg.value = 0.547846616089;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.768102094341);
    msg.setSource(28810U);
    msg.setSourceEntity(115U);
    msg.setDestination(32040U);
    msg.setDestinationEntity(205U);
    msg.value = 0.898537591563;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.479163215172);
    msg.setSource(11711U);
    msg.setSourceEntity(5U);
    msg.setDestination(55593U);
    msg.setDestinationEntity(195U);
    msg.value = 0.0100394104529;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.129482636333);
    msg.setSource(36057U);
    msg.setSourceEntity(92U);
    msg.setDestination(46749U);
    msg.setDestinationEntity(0U);
    msg.value = 0.0142219549326;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.848453287107);
    msg.setSource(43647U);
    msg.setSourceEntity(0U);
    msg.setDestination(10587U);
    msg.setDestinationEntity(4U);
    msg.value = 0.60578717731;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.788472658119);
    msg.setSource(29877U);
    msg.setSourceEntity(157U);
    msg.setDestination(4149U);
    msg.setDestinationEntity(192U);
    msg.value = 0.538000156204;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.970674275451);
    msg.setSource(28287U);
    msg.setSourceEntity(130U);
    msg.setDestination(8605U);
    msg.setDestinationEntity(184U);
    msg.value = 0.598963986481;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.927110989987);
    msg.setSource(17050U);
    msg.setSourceEntity(108U);
    msg.setDestination(6560U);
    msg.setDestinationEntity(12U);
    msg.value = 0.377501184358;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.733910122147);
    msg.setSource(3717U);
    msg.setSourceEntity(235U);
    msg.setDestination(24206U);
    msg.setDestinationEntity(252U);
    msg.value = 0.26562713682;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.508101940995);
    msg.setSource(9206U);
    msg.setSourceEntity(208U);
    msg.setDestination(56893U);
    msg.setDestinationEntity(168U);
    msg.value = 0.0781711810106;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.229834877698);
    msg.setSource(6450U);
    msg.setSourceEntity(45U);
    msg.setDestination(62455U);
    msg.setDestinationEntity(223U);
    msg.value = 0.890850982324;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.267573731486);
    msg.setSource(56985U);
    msg.setSourceEntity(146U);
    msg.setDestination(13841U);
    msg.setDestinationEntity(172U);
    msg.value = 0.204683601605;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.636088263869);
    msg.setSource(15668U);
    msg.setSourceEntity(108U);
    msg.setDestination(28110U);
    msg.setDestinationEntity(165U);
    msg.value = 0.673938845552;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.655524417565);
    msg.setSource(1919U);
    msg.setSourceEntity(106U);
    msg.setDestination(62633U);
    msg.setDestinationEntity(69U);
    msg.value = 0.919828693945;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.630729194619);
    msg.setSource(2847U);
    msg.setSourceEntity(75U);
    msg.setDestination(18531U);
    msg.setDestinationEntity(192U);
    msg.value = 0.0743187022342;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.178936506984);
    msg.setSource(52840U);
    msg.setSourceEntity(168U);
    msg.setDestination(54716U);
    msg.setDestinationEntity(194U);
    msg.value = 0.975899801876;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.267506625988);
    msg.setSource(18398U);
    msg.setSourceEntity(193U);
    msg.setDestination(53166U);
    msg.setDestinationEntity(226U);
    msg.value = 0.342335652589;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.158141894264);
    msg.setSource(13438U);
    msg.setSourceEntity(20U);
    msg.setDestination(36340U);
    msg.setDestinationEntity(159U);
    msg.value = 0.748518559525;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.0316632214192);
    msg.setSource(16358U);
    msg.setSourceEntity(194U);
    msg.setDestination(29886U);
    msg.setDestinationEntity(120U);
    msg.value = 0.295027513165;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.0423471400683);
    msg.setSource(11075U);
    msg.setSourceEntity(220U);
    msg.setDestination(25788U);
    msg.setDestinationEntity(125U);
    msg.value = 0.420965199936;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.792555458023);
    msg.setSource(22136U);
    msg.setSourceEntity(39U);
    msg.setDestination(29301U);
    msg.setDestinationEntity(217U);
    msg.value = 0.527500999857;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.286136263431);
    msg.setSource(29495U);
    msg.setSourceEntity(202U);
    msg.setDestination(59694U);
    msg.setDestinationEntity(5U);
    msg.value = 0.771970939856;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.155127381965);
    msg.setSource(23527U);
    msg.setSourceEntity(41U);
    msg.setDestination(11477U);
    msg.setDestinationEntity(18U);
    msg.value = 0.0865093665719;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.392688308391);
    msg.setSource(26453U);
    msg.setSourceEntity(8U);
    msg.setDestination(61385U);
    msg.setDestinationEntity(232U);
    msg.direction = 0.520802116843;
    msg.speed = 0.341552296376;
    msg.turbulence = 0.0192029040631;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.727285350988);
    msg.setSource(28030U);
    msg.setSourceEntity(101U);
    msg.setDestination(60016U);
    msg.setDestinationEntity(119U);
    msg.direction = 0.825345213068;
    msg.speed = 0.212124289634;
    msg.turbulence = 0.632069880981;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.407362283866);
    msg.setSource(40655U);
    msg.setSourceEntity(20U);
    msg.setDestination(51091U);
    msg.setDestinationEntity(246U);
    msg.direction = 0.341577431044;
    msg.speed = 0.0251381712323;
    msg.turbulence = 0.791463190702;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.766031027054);
    msg.setSource(28774U);
    msg.setSourceEntity(40U);
    msg.setDestination(15804U);
    msg.setDestinationEntity(191U);
    msg.value = 0.234155174474;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.200087093069);
    msg.setSource(34348U);
    msg.setSourceEntity(76U);
    msg.setDestination(4476U);
    msg.setDestinationEntity(78U);
    msg.value = 0.809184877604;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.235291187387);
    msg.setSource(10147U);
    msg.setSourceEntity(41U);
    msg.setDestination(57857U);
    msg.setDestinationEntity(228U);
    msg.value = 0.889334104203;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.926620112391);
    msg.setSource(23327U);
    msg.setSourceEntity(156U);
    msg.setDestination(32571U);
    msg.setDestinationEntity(250U);
    msg.value.assign("UTFWSUDOAOKQYZEDMIYEKVVBRWFNGEMNJBIZURPRKGVHAFRWDARZMFHLJJPYIIGSQMTHRNEIFMQTVMZYBMOLWQTSUBUCZXOYEGLPXCXATDDBYRATJSLPHVNCJEZPLEROBKSLJHLZJCXSOFPFIBSOAMJCNWZUQEPGQPTNOTMFSLUJCPDINTBUXRGHHXWXUICHWWGNQHSDJKLLVAYWQCVQCMGOAKRKXUBEON");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.37117688647);
    msg.setSource(34865U);
    msg.setSourceEntity(204U);
    msg.setDestination(11750U);
    msg.setDestinationEntity(221U);
    msg.value.assign("OTCIPETXKDCREZQRNKKJSRNXKONAVFFBSROLZNFIDVVEPMIHEAWCHTTA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.13891788023);
    msg.setSource(48017U);
    msg.setSourceEntity(23U);
    msg.setDestination(28905U);
    msg.setDestinationEntity(141U);
    msg.value.assign("LAOIOPJZONYGUKCNYITCVXYSBOGNYSXD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.942091142082);
    msg.setSource(15109U);
    msg.setSourceEntity(193U);
    msg.setDestination(52035U);
    msg.setDestinationEntity(59U);
    const char tmp_msg_0[] = {-64, 7, 57, -119, 108, -28, 52, 16, -17, -55, -25, 116, 95, -8, -114, 56, -101, -39, -27, 57, 69, -96, 108, -8, 15, -40, -96, -5, 89, -42, -21, -38, 59, -96, 93, -124, 12, 122, -30, 113, -59, -33, 1, -97, -93, -13, -115, 73, -41, 121, 110, 20, -72, -108, -68, -108, -52, -21, 114, 83, 33, 124, 105, 109, 84, 43, 61, -87, -78, 77, 79, -11, 99, 121, 80, 14, 20, -78, -120, 126, 79, -4, -57, -69, 91, -21, -92, -93, 14, -117, 73, 81, 126, -99, 84, 86, 11, 34, -20, -117, 95, -125, -4, 55, 60, -86, 30, -35, 96, -21, -112, -12, 70, -86, -95, 36, 104, 83, 49, -60, 21, 39, -116, -107, -128, 118, -29, 119, -44, 85, 28, 4, -48, 12, 103, 60, 35, -60, 28, -29, 118, 10, -82, 104, 18, 35, 69, 67};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.984529742423);
    msg.setSource(41627U);
    msg.setSourceEntity(135U);
    msg.setDestination(13987U);
    msg.setDestinationEntity(208U);
    const char tmp_msg_0[] = {112, 87, -8, -63, 9, -60, 37, 81, -16, 24, 73, -79, -121, 111, -36, -38, 10, -49, 99, 61, 123, -42, -57, 43, 79, -26, -74, 41, 13, 58, -94, 63, -97, -38, 12, 99, 26, 55, 8, 9, 24, -39, 95, -46, 23, -37, 59, -12, -108, 83, 31, -22, -20, 63, 28, -83, 98, 87, 29, -60, -9, 13, -90, -74, 54, 64, 13, -112, 55, -125, 99, -54, -122, -17, -116, -79, -86, -15, 116, 67, 95, -28, -91, -117, -73, 95, 49, 98, 61, -117, 95, 21, -117, 48, 66, 51, 30, 65, -57, 123, -23, 24, 126, 82, 120, -107, 106, -74, -35, -17, 114, 4, 113, 79, -107, -56, 39, -32, -39, 95, -97, -77};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.0990697360106);
    msg.setSource(2174U);
    msg.setSourceEntity(26U);
    msg.setDestination(46081U);
    msg.setDestinationEntity(44U);
    const char tmp_msg_0[] = {81, 10, -109, -88, -7, 52, -63, 114, 30, -93, 36, 115, 46, 56, -113, 105, 115, -116, 6, 18, 81, 3, -94, 22, -2, -57, 106, -87, -84, 74, 38, -25, -76, 106, -27, 110, 7, -10, 47, 24, 23, -83, 71, 5, -13, 31, 83, -34, -54, -55, 10, -119, 105, -128, 16, -128, 64, -88, 100, -10, 101, -78, -57, -62, -49, -59, 94, 120, 117, -98, 88, -117, 81, 27, 83, -39, 103, -126, -81, 24, -7, 121, -7, -33, 124, -49, -64, 72, -68, 30, 3, 106, -125, -35};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.437177671894);
    msg.setSource(9709U);
    msg.setSourceEntity(86U);
    msg.setDestination(60683U);
    msg.setDestinationEntity(211U);
    msg.type = 210U;
    msg.frequency = 3913064762U;
    msg.min_range = 55527U;
    msg.max_range = 43601U;
    msg.bits_per_point = 60U;
    msg.scale_factor = 0.974709351534;
    const char tmp_msg_0[] = {84, -99, -122, -28, 98, 8, -37, -16, -57, 32, -21, -12, 108, -93, -18, 53, -28, -51, -10, -120, 19, 107, -59, -23, 63, 101, -54, -119, -79, -75, 61, 60, 82, -70, -91, -32, 114, 46, -114, -118, -80, 8, 87, 14, -2, 23, -68, 111, -70, 59, 76, 10, -101, 37, 115, -114, 11, -35, 82, 118, 47, -41, 54, -34, -76, 36, -98, 84, -120, 83, -50, 81, -45, -28, 107, -95, -118, -11, -49, -103, -10, 73, -59, -22, -34, 43, -11, -58, 42, 86, 9, -122, -38, -67, 47, 10, 125, -2, -123, 97, -75, -39, -56, 119, 96, -11, 108, 92, -92, 41, -89, 119, -67, 103, -126, -47, -99, -61, 97, 103, 36, 53, -91, -124, -70, -114, 122, 62, -68, -120, 12, -128, -12, -64, -32, -22, 103, 97, -69, -46, -29, 95, 84, -17, -26, 92, 19, -3, 50, -15, 22, 50, -103, -9, 116, -40, 123, -82, -104, 57, 110, 36, -75, -100, -108, -35, 124, 113, 87, -99, 78, 100, 35, -23, -119, -110, -97, -80, 45, -26, 90, 4, 69, 38, 79, 36, -101};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.768832711866);
    msg.setSource(1535U);
    msg.setSourceEntity(79U);
    msg.setDestination(23272U);
    msg.setDestinationEntity(24U);
    msg.type = 69U;
    msg.frequency = 1687626090U;
    msg.min_range = 49154U;
    msg.max_range = 24802U;
    msg.bits_per_point = 121U;
    msg.scale_factor = 0.717655856713;
    const char tmp_msg_0[] = {59, -116, -104, -75, 73, -20, -17, -25, 99, -120, 104, -68, -107, 111, 94, 80, 36, 19, 5, -12, -5, -12, -23, -75, 64, 3, -74, -47, -40, 48, 62, -21, 89, 16, 120, 49, 28, -52, -67, -55, -30, 74, -91, -33, 71, 73, 73, 35, -12, -86, 126, 18, -38, 116, -39, 90, -44, -9, -126, 79, 74, 99, -87, 1, -3, 7, 15, 100, 17, 7, -108, -120, -125, -74, 41, -11, 59, 20, -56, 82, -79, -78, -77, 111, -105, 122, 88, 50, -121, -72, -52, -89, -114, 60, 38, 110, -105, 102, 122, 91, -38, -103, 32, -84, 85, -48, 94, -54, -41, 46, -88, 13, 50, 1, 36, 74, 56, 113, 42, -124, -66, -53, -121, -117, -95, -12, -112, 101, 95, 117, 64, -10, -49, 29, -19, 5, -43, 103, 121, 54, 68, -92, -116, 119, 116, 119, -43, 0, -73, 41, -57, -82, -103, -77, -62, -103, -92, 98, -83, 78, -42, 6, -110, -19, 79};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.958822278789);
    msg.setSource(58543U);
    msg.setSourceEntity(63U);
    msg.setDestination(20537U);
    msg.setDestinationEntity(44U);
    msg.type = 189U;
    msg.frequency = 833219689U;
    msg.min_range = 5539U;
    msg.max_range = 45506U;
    msg.bits_per_point = 240U;
    msg.scale_factor = 0.317935144631;
    const char tmp_msg_0[] = {-51, -27, 16, -7, -23, -74, -8, -82, -71, -3, 59, 10, -33, 45, 12, 56, 2, 47, -35, 85, -33, 41, 108, -128, 122, -3, -94, 65, -4, 126, 123, -47, 0, 4, -59, 87, -3, 103, -123, 31, -12, 22, -28, -49, 81, -112, 18, 48, -24, -51, -74, -102, 73, -63, -33, -34, -15, -62, -58, 42, -125, -94, 92, -117, -45, 4, -28, 38, 74, 106, -75, 6, 3, 91, -75, -21, -54, -22, 69, 85, 55, -89, -57, -105, -110, 95, -81, -105, 82, -68, 63, -109, -81, 13, 89, 113, -29, 48, -3, -9, 98, -6, -108};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.410607141247);
    msg.setSource(57811U);
    msg.setSourceEntity(17U);
    msg.setDestination(32553U);
    msg.setDestinationEntity(97U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.304229466099);
    msg.setSource(26129U);
    msg.setSourceEntity(66U);
    msg.setDestination(13542U);
    msg.setDestinationEntity(62U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.12374622694);
    msg.setSource(18886U);
    msg.setSourceEntity(40U);
    msg.setDestination(61536U);
    msg.setDestinationEntity(223U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.388028901166);
    msg.setSource(27688U);
    msg.setSourceEntity(247U);
    msg.setDestination(1858U);
    msg.setDestinationEntity(15U);
    msg.op = 141U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.303666479979);
    msg.setSource(3381U);
    msg.setSourceEntity(54U);
    msg.setDestination(1765U);
    msg.setDestinationEntity(37U);
    msg.op = 26U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.222290949675);
    msg.setSource(5575U);
    msg.setSourceEntity(81U);
    msg.setDestination(47224U);
    msg.setDestinationEntity(170U);
    msg.op = 157U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.30591500394);
    msg.setSource(63491U);
    msg.setSourceEntity(30U);
    msg.setDestination(11943U);
    msg.setDestinationEntity(197U);
    msg.value = 0.229788375983;
    msg.confidence = 0.631911685557;
    msg.opmodes.assign("UTRBHDUXPTMCZJXNQDYYEBAKFTTGNTOYHUDLRMFOKYITZHYBYGZFGZVGLKASKHJFRMVRLCPGWDITJAIPQVINFDJJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.972053860165);
    msg.setSource(30350U);
    msg.setSourceEntity(46U);
    msg.setDestination(6949U);
    msg.setDestinationEntity(115U);
    msg.value = 0.982995637765;
    msg.confidence = 0.03171804086;
    msg.opmodes.assign("YRGCSNKZFIZFWFVFETQPUWKSQTCGMRJJBJPCOABMSSXGJVGBCJZDCAQHISHCALUSUFXC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.795083914314);
    msg.setSource(57576U);
    msg.setSourceEntity(36U);
    msg.setDestination(32478U);
    msg.setDestinationEntity(2U);
    msg.value = 0.798840424437;
    msg.confidence = 0.0465406472284;
    msg.opmodes.assign("UJMKPPJAYHTIXPRTRGHXPEXWTEUTWRXQZHHOOAYUBMTMJRDPGWFLBIVGWAVIDIJSSBAIUEURWCKZSUVOIQFSRHQNQOWMXYPJVUNGWMKNOJLCKULARVWJNANKBBWIKFASEFGLTBZXYFCZDVULYNVIPAQAYQJGBUHENIVLQROROKJXCREEQOLMFOYHGZGEKFZDHQQLWHLACSLFXSFDZSBVZIDCCDKYSSDCTYXEDCBEZBGFCPKM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.460266627029);
    msg.setSource(29568U);
    msg.setSourceEntity(237U);
    msg.setDestination(10043U);
    msg.setDestinationEntity(93U);
    msg.itow = 1596693545U;
    msg.lat = 0.409647532135;
    msg.lon = 0.441414844569;
    msg.height_ell = 0.0721146860358;
    msg.height_sea = 0.393295477502;
    msg.hacc = 0.986592863344;
    msg.vacc = 0.445276388172;
    msg.vel_n = 0.961917523884;
    msg.vel_e = 0.545745718813;
    msg.vel_d = 0.30345797289;
    msg.speed = 0.149086100265;
    msg.gspeed = 0.289148471003;
    msg.heading = 0.434782282035;
    msg.sacc = 0.02688556493;
    msg.cacc = 0.284867479561;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.554020912475);
    msg.setSource(5732U);
    msg.setSourceEntity(10U);
    msg.setDestination(49090U);
    msg.setDestinationEntity(27U);
    msg.itow = 2145611184U;
    msg.lat = 0.279506319323;
    msg.lon = 0.365192710339;
    msg.height_ell = 0.584391795332;
    msg.height_sea = 0.547402469277;
    msg.hacc = 0.00429358760402;
    msg.vacc = 0.200237622548;
    msg.vel_n = 0.310253030854;
    msg.vel_e = 0.941737968084;
    msg.vel_d = 0.689521980392;
    msg.speed = 0.165989479574;
    msg.gspeed = 0.647201341281;
    msg.heading = 0.811208986032;
    msg.sacc = 0.243481725838;
    msg.cacc = 0.96788160828;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.38676960297);
    msg.setSource(38519U);
    msg.setSourceEntity(68U);
    msg.setDestination(64307U);
    msg.setDestinationEntity(12U);
    msg.itow = 923179461U;
    msg.lat = 0.707005392628;
    msg.lon = 0.574956232005;
    msg.height_ell = 0.956306391338;
    msg.height_sea = 0.297229502074;
    msg.hacc = 0.12957196707;
    msg.vacc = 0.706912465002;
    msg.vel_n = 0.678693393053;
    msg.vel_e = 0.339056289141;
    msg.vel_d = 0.11214115802;
    msg.speed = 0.767534141954;
    msg.gspeed = 0.534476935358;
    msg.heading = 0.215464325966;
    msg.sacc = 0.592220435988;
    msg.cacc = 0.124709682965;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.584324037975);
    msg.setSource(54899U);
    msg.setSourceEntity(115U);
    msg.setDestination(15039U);
    msg.setDestinationEntity(77U);
    msg.id = 181U;
    msg.value = 0.58261421533;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.134530900052);
    msg.setSource(17408U);
    msg.setSourceEntity(98U);
    msg.setDestination(69U);
    msg.setDestinationEntity(90U);
    msg.id = 214U;
    msg.value = 0.301947317875;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.255292172171);
    msg.setSource(4276U);
    msg.setSourceEntity(108U);
    msg.setDestination(25148U);
    msg.setDestinationEntity(253U);
    msg.id = 79U;
    msg.value = 0.694843773951;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.408072463);
    msg.setSource(54686U);
    msg.setSourceEntity(174U);
    msg.setDestination(29093U);
    msg.setDestinationEntity(70U);
    msg.x = 0.217567000909;
    msg.y = 0.625210706709;
    msg.z = 0.295298153981;
    msg.phi = 0.347406027305;
    msg.theta = 0.155618702487;
    msg.psi = 0.792846690361;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.0638696957118);
    msg.setSource(49652U);
    msg.setSourceEntity(89U);
    msg.setDestination(4722U);
    msg.setDestinationEntity(25U);
    msg.x = 0.806916693638;
    msg.y = 0.652505237067;
    msg.z = 0.581416980513;
    msg.phi = 0.510979358407;
    msg.theta = 0.531221270656;
    msg.psi = 0.456449334297;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.97044879745);
    msg.setSource(22438U);
    msg.setSourceEntity(240U);
    msg.setDestination(47121U);
    msg.setDestinationEntity(53U);
    msg.x = 0.38083014521;
    msg.y = 0.114461673378;
    msg.z = 0.375509212613;
    msg.phi = 0.995559301735;
    msg.theta = 0.650866241848;
    msg.psi = 0.474425708484;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.271856485082);
    msg.setSource(57093U);
    msg.setSourceEntity(98U);
    msg.setDestination(41206U);
    msg.setDestinationEntity(154U);
    msg.beam_width = 0.815059072033;
    msg.beam_height = 0.0823112413138;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.579054541916);
    msg.setSource(32486U);
    msg.setSourceEntity(73U);
    msg.setDestination(63341U);
    msg.setDestinationEntity(126U);
    msg.beam_width = 0.701581105674;
    msg.beam_height = 0.72640062693;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.196575987044);
    msg.setSource(30264U);
    msg.setSourceEntity(246U);
    msg.setDestination(13128U);
    msg.setDestinationEntity(193U);
    msg.beam_width = 0.552117913201;
    msg.beam_height = 0.249077622705;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.107264900837);
    msg.setSource(4106U);
    msg.setSourceEntity(30U);
    msg.setDestination(53980U);
    msg.setDestinationEntity(23U);
    msg.sane = 100U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.719758204855);
    msg.setSource(18318U);
    msg.setSourceEntity(179U);
    msg.setDestination(20510U);
    msg.setDestinationEntity(190U);
    msg.sane = 156U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.704101237503);
    msg.setSource(57681U);
    msg.setSourceEntity(48U);
    msg.setDestination(36132U);
    msg.setDestinationEntity(145U);
    msg.sane = 48U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.327909165293);
    msg.setSource(1973U);
    msg.setSourceEntity(162U);
    msg.setDestination(47392U);
    msg.setDestinationEntity(24U);
    msg.value = 0.0682099195091;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.705054893599);
    msg.setSource(2287U);
    msg.setSourceEntity(149U);
    msg.setDestination(29392U);
    msg.setDestinationEntity(14U);
    msg.value = 0.530656631427;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.0466934309976);
    msg.setSource(44473U);
    msg.setSourceEntity(101U);
    msg.setDestination(63334U);
    msg.setDestinationEntity(139U);
    msg.value = 0.212991203602;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.441170874008);
    msg.setSource(30272U);
    msg.setSourceEntity(161U);
    msg.setDestination(41733U);
    msg.setDestinationEntity(41U);
    msg.value = 0.820254130935;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.827010684299);
    msg.setSource(46946U);
    msg.setSourceEntity(144U);
    msg.setDestination(6542U);
    msg.setDestinationEntity(251U);
    msg.value = 0.761877488148;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.602143269538);
    msg.setSource(29113U);
    msg.setSourceEntity(223U);
    msg.setDestination(63428U);
    msg.setDestinationEntity(19U);
    msg.value = 0.702358668194;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.701202746948);
    msg.setSource(27274U);
    msg.setSourceEntity(90U);
    msg.setDestination(5967U);
    msg.setDestinationEntity(14U);
    msg.value = 0.582892013441;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.924915241298);
    msg.setSource(7593U);
    msg.setSourceEntity(99U);
    msg.setDestination(58243U);
    msg.setDestinationEntity(31U);
    msg.value = 0.379103736828;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.941735603929);
    msg.setSource(61297U);
    msg.setSourceEntity(235U);
    msg.setDestination(29215U);
    msg.setDestinationEntity(21U);
    msg.value = 0.324270038214;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.558251358361);
    msg.setSource(19309U);
    msg.setSourceEntity(85U);
    msg.setDestination(46430U);
    msg.setDestinationEntity(230U);
    msg.value = 0.319874206907;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.149227962506);
    msg.setSource(34792U);
    msg.setSourceEntity(8U);
    msg.setDestination(12198U);
    msg.setDestinationEntity(152U);
    msg.value = 0.0164914693958;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.903168888247);
    msg.setSource(1615U);
    msg.setSourceEntity(144U);
    msg.setDestination(36079U);
    msg.setDestinationEntity(236U);
    msg.value = 0.302485558136;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.980077000639);
    msg.setSource(11217U);
    msg.setSourceEntity(150U);
    msg.setDestination(53987U);
    msg.setDestinationEntity(127U);
    msg.value = 0.0789308853893;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.958251341332);
    msg.setSource(675U);
    msg.setSourceEntity(92U);
    msg.setDestination(52591U);
    msg.setDestinationEntity(10U);
    msg.value = 0.249651670908;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.468495856873);
    msg.setSource(45319U);
    msg.setSourceEntity(178U);
    msg.setDestination(61546U);
    msg.setDestinationEntity(132U);
    msg.value = 0.375611521982;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.382119640088);
    msg.setSource(59655U);
    msg.setSourceEntity(147U);
    msg.setDestination(35278U);
    msg.setDestinationEntity(81U);
    msg.value = 0.260809884011;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.89136929778);
    msg.setSource(60242U);
    msg.setSourceEntity(72U);
    msg.setDestination(8648U);
    msg.setDestinationEntity(95U);
    msg.value = 0.873284598815;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.17145633121);
    msg.setSource(52497U);
    msg.setSourceEntity(56U);
    msg.setDestination(6083U);
    msg.setDestinationEntity(91U);
    msg.value = 0.80150892292;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.139132225796);
    msg.setSource(24245U);
    msg.setSourceEntity(131U);
    msg.setDestination(17173U);
    msg.setDestinationEntity(141U);
    msg.value = 0.757562082414;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.569235427263);
    msg.setSource(47480U);
    msg.setSourceEntity(203U);
    msg.setDestination(23829U);
    msg.setDestinationEntity(52U);
    msg.value = 0.0585439504669;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.871703235895);
    msg.setSource(24808U);
    msg.setSourceEntity(42U);
    msg.setDestination(23803U);
    msg.setDestinationEntity(138U);
    msg.value = 0.727042686975;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.0727186663507);
    msg.setSource(8165U);
    msg.setSourceEntity(146U);
    msg.setDestination(7635U);
    msg.setDestinationEntity(95U);
    msg.value = 0.194983350745;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.133488289691);
    msg.setSource(22949U);
    msg.setSourceEntity(124U);
    msg.setDestination(22463U);
    msg.setDestinationEntity(74U);
    msg.value = 0.749764364487;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.347321130157);
    msg.setSource(11163U);
    msg.setSourceEntity(247U);
    msg.setDestination(39300U);
    msg.setDestinationEntity(147U);
    msg.value = 0.439486767239;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.797748890993);
    msg.setSource(11887U);
    msg.setSourceEntity(125U);
    msg.setDestination(1507U);
    msg.setDestinationEntity(15U);
    msg.validity = 19296U;
    msg.type = 14U;
    msg.tow = 896197031U;
    msg.base_lat = 0.295452145845;
    msg.base_lon = 0.492401683676;
    msg.base_height = 0.634471518538;
    msg.n = 0.981628920249;
    msg.e = 0.395909693044;
    msg.d = 0.00868323374903;
    msg.v_n = 0.666587890748;
    msg.v_e = 0.537696221863;
    msg.v_d = 0.593802348415;
    msg.satellites = 18U;
    msg.iar_hyp = 8851U;
    msg.iar_ratio = 0.0761284010659;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.482807230422);
    msg.setSource(38000U);
    msg.setSourceEntity(123U);
    msg.setDestination(49022U);
    msg.setDestinationEntity(32U);
    msg.validity = 40298U;
    msg.type = 141U;
    msg.tow = 3886969049U;
    msg.base_lat = 0.954475272297;
    msg.base_lon = 0.454971467714;
    msg.base_height = 0.62677477703;
    msg.n = 0.855931790371;
    msg.e = 0.188156060558;
    msg.d = 0.89367162279;
    msg.v_n = 0.451726369922;
    msg.v_e = 0.718945083402;
    msg.v_d = 0.33196761389;
    msg.satellites = 138U;
    msg.iar_hyp = 51749U;
    msg.iar_ratio = 0.933612198318;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.115913548459);
    msg.setSource(39912U);
    msg.setSourceEntity(161U);
    msg.setDestination(28625U);
    msg.setDestinationEntity(125U);
    msg.validity = 33396U;
    msg.type = 197U;
    msg.tow = 3816804801U;
    msg.base_lat = 0.413591461609;
    msg.base_lon = 0.0113553240394;
    msg.base_height = 0.609130352343;
    msg.n = 0.0593585760265;
    msg.e = 0.171462914681;
    msg.d = 0.525567561113;
    msg.v_n = 0.351952682523;
    msg.v_e = 0.381411200084;
    msg.v_d = 0.372725906864;
    msg.satellites = 72U;
    msg.iar_hyp = 27800U;
    msg.iar_ratio = 0.897983284549;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.746068517647);
    msg.setSource(2406U);
    msg.setSourceEntity(94U);
    msg.setDestination(3224U);
    msg.setDestinationEntity(153U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.738591902179;
    tmp_msg_0.lon = 0.69610145468;
    tmp_msg_0.height = 0.884692342263;
    tmp_msg_0.x = 0.258734563417;
    tmp_msg_0.y = 0.491101628289;
    tmp_msg_0.z = 0.327984463673;
    tmp_msg_0.phi = 0.404007584724;
    tmp_msg_0.theta = 0.703620080404;
    tmp_msg_0.psi = 0.736744770824;
    tmp_msg_0.u = 0.37681408065;
    tmp_msg_0.v = 0.595076582474;
    tmp_msg_0.w = 0.817175365587;
    tmp_msg_0.vx = 0.589138937945;
    tmp_msg_0.vy = 0.839234039108;
    tmp_msg_0.vz = 0.897554615975;
    tmp_msg_0.p = 0.80669394596;
    tmp_msg_0.q = 0.990984110322;
    tmp_msg_0.r = 0.192804807925;
    tmp_msg_0.depth = 0.706455985248;
    tmp_msg_0.alt = 0.337916888705;
    msg.state.set(tmp_msg_0);
    msg.type = 242U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.619344723215);
    msg.setSource(32959U);
    msg.setSourceEntity(155U);
    msg.setDestination(16156U);
    msg.setDestinationEntity(63U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.678966726879;
    tmp_msg_0.lon = 0.612249515155;
    tmp_msg_0.height = 0.562094247471;
    tmp_msg_0.x = 0.722243515578;
    tmp_msg_0.y = 0.923825616353;
    tmp_msg_0.z = 0.982220000319;
    tmp_msg_0.phi = 0.90197403873;
    tmp_msg_0.theta = 0.462196565419;
    tmp_msg_0.psi = 0.93022933206;
    tmp_msg_0.u = 0.923502240733;
    tmp_msg_0.v = 0.512736411738;
    tmp_msg_0.w = 0.0106534079153;
    tmp_msg_0.vx = 0.44331850967;
    tmp_msg_0.vy = 0.469290213743;
    tmp_msg_0.vz = 0.205734080248;
    tmp_msg_0.p = 0.0202046714582;
    tmp_msg_0.q = 0.113859851779;
    tmp_msg_0.r = 0.483093159024;
    tmp_msg_0.depth = 0.322718950079;
    tmp_msg_0.alt = 0.809052517422;
    msg.state.set(tmp_msg_0);
    msg.type = 47U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.752033656445);
    msg.setSource(29464U);
    msg.setSourceEntity(22U);
    msg.setDestination(50474U);
    msg.setDestinationEntity(135U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.210609693417;
    tmp_msg_0.lon = 0.0419398121434;
    tmp_msg_0.height = 0.514404348094;
    tmp_msg_0.x = 0.656889647015;
    tmp_msg_0.y = 0.918041370883;
    tmp_msg_0.z = 0.854599608319;
    tmp_msg_0.phi = 0.380149937598;
    tmp_msg_0.theta = 0.0114544836546;
    tmp_msg_0.psi = 0.652822405285;
    tmp_msg_0.u = 0.598626858136;
    tmp_msg_0.v = 0.684282714202;
    tmp_msg_0.w = 0.288696584419;
    tmp_msg_0.vx = 0.656107714196;
    tmp_msg_0.vy = 0.842558686277;
    tmp_msg_0.vz = 0.0120683886632;
    tmp_msg_0.p = 0.994933622677;
    tmp_msg_0.q = 0.1156758219;
    tmp_msg_0.r = 0.462797049158;
    tmp_msg_0.depth = 0.407379643535;
    tmp_msg_0.alt = 0.246743899246;
    msg.state.set(tmp_msg_0);
    msg.type = 199U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.774559371886);
    msg.setSource(7943U);
    msg.setSourceEntity(252U);
    msg.setDestination(17789U);
    msg.setDestinationEntity(160U);
    msg.value = 0.190408397396;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.655963164388);
    msg.setSource(42689U);
    msg.setSourceEntity(80U);
    msg.setDestination(20595U);
    msg.setDestinationEntity(224U);
    msg.value = 0.66978741543;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.399073847223);
    msg.setSource(8696U);
    msg.setSourceEntity(153U);
    msg.setDestination(36591U);
    msg.setDestinationEntity(154U);
    msg.value = 0.00983562544302;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.721925594894);
    msg.setSource(25626U);
    msg.setSourceEntity(16U);
    msg.setDestination(31342U);
    msg.setDestinationEntity(29U);
    msg.value = 0.0313266209679;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.704201155501);
    msg.setSource(26573U);
    msg.setSourceEntity(13U);
    msg.setDestination(15445U);
    msg.setDestinationEntity(152U);
    msg.value = 0.409374489721;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.253203187001);
    msg.setSource(1428U);
    msg.setSourceEntity(153U);
    msg.setDestination(32498U);
    msg.setDestinationEntity(136U);
    msg.value = 0.627563186827;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.756225680617);
    msg.setSource(12563U);
    msg.setSourceEntity(46U);
    msg.setDestination(36082U);
    msg.setDestinationEntity(53U);
    msg.value = 0.854126580669;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.843164048391);
    msg.setSource(7670U);
    msg.setSourceEntity(164U);
    msg.setDestination(20670U);
    msg.setDestinationEntity(209U);
    msg.value = 0.481198146293;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.372495272965);
    msg.setSource(29265U);
    msg.setSourceEntity(155U);
    msg.setDestination(53244U);
    msg.setDestinationEntity(30U);
    msg.value = 0.851153485808;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.851372003592);
    msg.setSource(55291U);
    msg.setSourceEntity(160U);
    msg.setDestination(62538U);
    msg.setDestinationEntity(109U);
    msg.value = 0.21387189888;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.0878823869576);
    msg.setSource(27021U);
    msg.setSourceEntity(104U);
    msg.setDestination(31719U);
    msg.setDestinationEntity(142U);
    msg.value = 0.406490852699;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.994187949094);
    msg.setSource(64998U);
    msg.setSourceEntity(177U);
    msg.setDestination(43708U);
    msg.setDestinationEntity(187U);
    msg.value = 0.821484131226;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.538567542654);
    msg.setSource(59307U);
    msg.setSourceEntity(103U);
    msg.setDestination(21077U);
    msg.setDestinationEntity(85U);
    msg.value = 0.997672944142;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.411878678874);
    msg.setSource(19382U);
    msg.setSourceEntity(112U);
    msg.setDestination(12098U);
    msg.setDestinationEntity(234U);
    msg.value = 0.323496905961;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.562293272805);
    msg.setSource(47804U);
    msg.setSourceEntity(77U);
    msg.setDestination(6890U);
    msg.setDestinationEntity(109U);
    msg.value = 0.659845754495;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.958198131419);
    msg.setSource(12U);
    msg.setSourceEntity(112U);
    msg.setDestination(39415U);
    msg.setDestinationEntity(217U);
    msg.id = 120U;
    msg.zoom = 193U;
    msg.action = 169U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.711962567227);
    msg.setSource(18045U);
    msg.setSourceEntity(106U);
    msg.setDestination(34582U);
    msg.setDestinationEntity(93U);
    msg.id = 174U;
    msg.zoom = 199U;
    msg.action = 24U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.956290112447);
    msg.setSource(16339U);
    msg.setSourceEntity(177U);
    msg.setDestination(27753U);
    msg.setDestinationEntity(29U);
    msg.id = 18U;
    msg.zoom = 73U;
    msg.action = 26U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.0585355862533);
    msg.setSource(12963U);
    msg.setSourceEntity(96U);
    msg.setDestination(32578U);
    msg.setDestinationEntity(16U);
    msg.id = 71U;
    msg.value = 0.115634788322;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.4224438083);
    msg.setSource(35693U);
    msg.setSourceEntity(217U);
    msg.setDestination(6622U);
    msg.setDestinationEntity(176U);
    msg.id = 156U;
    msg.value = 0.157702662438;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.014309290258);
    msg.setSource(52362U);
    msg.setSourceEntity(101U);
    msg.setDestination(2267U);
    msg.setDestinationEntity(64U);
    msg.id = 126U;
    msg.value = 0.814914243973;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.193055862625);
    msg.setSource(52338U);
    msg.setSourceEntity(1U);
    msg.setDestination(36892U);
    msg.setDestinationEntity(5U);
    msg.id = 206U;
    msg.value = 0.765605538422;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.37666151153);
    msg.setSource(25300U);
    msg.setSourceEntity(107U);
    msg.setDestination(33004U);
    msg.setDestinationEntity(214U);
    msg.id = 5U;
    msg.value = 0.79856857414;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.928497301249);
    msg.setSource(27985U);
    msg.setSourceEntity(40U);
    msg.setDestination(49167U);
    msg.setDestinationEntity(43U);
    msg.id = 158U;
    msg.value = 0.796558477559;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.130829612483);
    msg.setSource(11988U);
    msg.setSourceEntity(167U);
    msg.setDestination(29056U);
    msg.setDestinationEntity(13U);
    msg.id = 231U;
    msg.angle = 0.145348715617;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.60222112546);
    msg.setSource(56166U);
    msg.setSourceEntity(209U);
    msg.setDestination(7409U);
    msg.setDestinationEntity(7U);
    msg.id = 13U;
    msg.angle = 0.0359198328153;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.661344844631);
    msg.setSource(49463U);
    msg.setSourceEntity(229U);
    msg.setDestination(7836U);
    msg.setDestinationEntity(200U);
    msg.id = 84U;
    msg.angle = 0.326838707324;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.199162298856);
    msg.setSource(47114U);
    msg.setSourceEntity(52U);
    msg.setDestination(49138U);
    msg.setDestinationEntity(57U);
    msg.op = 209U;
    msg.actions.assign("EMHSMKJIWVRVMBXRFBDCJJGTZLOVKKOWXDPXWXBHGILLYFGDMGAFCWFEPKQWXFGVNHGPQKZQHHYIWILKDDOTNLFJTNWSPKWFLXSDTRZULEYYZNRAONYTALOGISNDYBRBIROIIDZENZAXOZLPIUVDQKUCNWPMUTBSZCOUMCJXXPJVROAWSHOQHZCYMABMEVAZPGBA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.810277742702);
    msg.setSource(33337U);
    msg.setSourceEntity(68U);
    msg.setDestination(59363U);
    msg.setDestinationEntity(221U);
    msg.op = 106U;
    msg.actions.assign("MDSYFNHKRPSEDCPSIUXPUYDGIAYHRYOFTQITLAFANNHQTHECOFZMIJINCJPJMOMGNRYPLWCARQHGCLIYBOTJKUBZGYMNHZLPUKXWEKLTQFMNVDORFNEPPNEOLTOZBGDXXBJUPWIKKJIFATKXGLHYBLJRWSMPMDJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.742902751565);
    msg.setSource(58232U);
    msg.setSourceEntity(33U);
    msg.setDestination(7807U);
    msg.setDestinationEntity(228U);
    msg.op = 235U;
    msg.actions.assign("RKTVVHDCAKAHNCJESVBDMZUCPXCAGYWLYAQCWXLIRPUTMMJTEKPPVYGSAQJEXQFVPGUCDJZJFYDFWSIBHPOUKQCVXCLKQPOWXSOQIOHANWGMDMJKXITT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.545566876806);
    msg.setSource(46320U);
    msg.setSourceEntity(60U);
    msg.setDestination(54351U);
    msg.setDestinationEntity(182U);
    msg.actions.assign("BEIGFRGELIYYKQSTURZWSMWAVMLVMPJXEHASKPCRWZCDG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.720835377087);
    msg.setSource(26171U);
    msg.setSourceEntity(122U);
    msg.setDestination(18591U);
    msg.setDestinationEntity(150U);
    msg.actions.assign("VLTAAEEDWAVZXYIZILMNLDCBRKTWIXSBTWMFCGEJQHJUZWNXMIUFPAKZOLSWSYFKYGQDU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.926763716579);
    msg.setSource(44432U);
    msg.setSourceEntity(176U);
    msg.setDestination(15708U);
    msg.setDestinationEntity(0U);
    msg.actions.assign("XBTMUDWPWQKBLSGAKHXEOILQFHLCFEGUMQYJQXGZVNGOXIUNPEDUVKXHONKYRITXWOR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.818049388795);
    msg.setSource(11307U);
    msg.setSourceEntity(217U);
    msg.setDestination(60121U);
    msg.setDestinationEntity(135U);
    msg.button = 27U;
    msg.value = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.789041184457);
    msg.setSource(34055U);
    msg.setSourceEntity(67U);
    msg.setDestination(6933U);
    msg.setDestinationEntity(212U);
    msg.button = 32U;
    msg.value = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.575244429085);
    msg.setSource(53260U);
    msg.setSourceEntity(213U);
    msg.setDestination(58817U);
    msg.setDestinationEntity(216U);
    msg.button = 41U;
    msg.value = 113U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.248369649403);
    msg.setSource(33519U);
    msg.setSourceEntity(169U);
    msg.setDestination(9814U);
    msg.setDestinationEntity(4U);
    msg.op = 5U;
    msg.text.assign("PRXTCMYNYZSNASQLCAGKJAEIKUTVIZXQRQWTBESIHJIUBGIHGNNJMCJFJPVKMIDCDOCNLCOFEZYKOPKSVXVSUOBWIKTRFRAMGIFWLXTNHBXUHPTEGPQBMZHXNVZYQOPZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.25973227491);
    msg.setSource(33979U);
    msg.setSourceEntity(67U);
    msg.setDestination(16645U);
    msg.setDestinationEntity(149U);
    msg.op = 37U;
    msg.text.assign("HWRGFEZDPWPTXVUFANLZAJZGVZSNWKXEQUKZYMZMEKLMATCCEZIPUMJTXICLDBQDDUTIKNDUSPWDJMXQVYBECOSSYFNQEIEPQVUBSXLXHWYMGVVQOYIPCWCXYNXKDNRMRGSGHCGBTFOQKKHEPLU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.381692348332);
    msg.setSource(22624U);
    msg.setSourceEntity(214U);
    msg.setDestination(12026U);
    msg.setDestinationEntity(212U);
    msg.op = 178U;
    msg.text.assign("VHRFGVRMAIEKOLIKSOMJKBBLFRJHGLKRSVBTTWLJSDUNMRSIWXTEQYTXOQYRQTOMDTGNJACANQUEBABQQBCKQGJOHMLGXFUEWBXYKNRDSXZRKAPZIUDXSHYAYSNUBCESLJJEPZYZTTHIPDRLYUCMXVLE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.908110529802);
    msg.setSource(45296U);
    msg.setSourceEntity(140U);
    msg.setDestination(42113U);
    msg.setDestinationEntity(196U);
    msg.op = 57U;
    msg.time_remain = 0.243228572376;
    msg.sched_time = 0.848125036552;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.692087434245);
    msg.setSource(56211U);
    msg.setSourceEntity(27U);
    msg.setDestination(44730U);
    msg.setDestinationEntity(75U);
    msg.op = 92U;
    msg.time_remain = 0.987506335255;
    msg.sched_time = 0.394057610192;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.579088585629);
    msg.setSource(42550U);
    msg.setSourceEntity(121U);
    msg.setDestination(15316U);
    msg.setDestinationEntity(147U);
    msg.op = 229U;
    msg.time_remain = 0.631798961345;
    msg.sched_time = 0.0870820178436;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.0784998202183);
    msg.setSource(56216U);
    msg.setSourceEntity(251U);
    msg.setDestination(23051U);
    msg.setDestinationEntity(187U);
    msg.name.assign("KXGGPEHEODQRLQYZQFPIZIAWHXTSUBTGJXQYYFMKRNMBEAFEAUSICKRRTHSMCSRSZEULBIQVPAOHZCAPCFBWLOXLKMVIVPTOWOAXMYNYGJTBZCBGWEII");
    msg.op = 31U;
    msg.sched_time = 0.117395998056;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.254336880416);
    msg.setSource(43655U);
    msg.setSourceEntity(61U);
    msg.setDestination(49237U);
    msg.setDestinationEntity(83U);
    msg.name.assign("FNQFSQPBZYANSDDZZGBKLRRWOGMHRMLHQZYEHHFOTADVOVFXNWMNCOUIHSGELJJHMLIYPOAVLFKYPQH");
    msg.op = 196U;
    msg.sched_time = 0.585568408602;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.805566038347);
    msg.setSource(41898U);
    msg.setSourceEntity(62U);
    msg.setDestination(25631U);
    msg.setDestinationEntity(167U);
    msg.name.assign("IKVWIKDSMUPHIWOBBXJBRDZLNWNMHYFFJNDMSHBKWCIHRYIOZGCMPUPUGGPZUUPBAQYWPUKUCQSGXRAFDFVEGQOFBNKXMHNWFZQANRYIMHWSVAKNGYDJMQCRHLXSUOBETBTOAGBZNGLIFXZXT");
    msg.op = 36U;
    msg.sched_time = 0.780593404098;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.171416595367);
    msg.setSource(31962U);
    msg.setSourceEntity(97U);
    msg.setDestination(10638U);
    msg.setDestinationEntity(127U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.796899686936);
    msg.setSource(41289U);
    msg.setSourceEntity(188U);
    msg.setDestination(15410U);
    msg.setDestinationEntity(197U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.952265031326);
    msg.setSource(758U);
    msg.setSourceEntity(223U);
    msg.setDestination(55396U);
    msg.setDestinationEntity(158U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.0443765107569);
    msg.setSource(12188U);
    msg.setSourceEntity(149U);
    msg.setDestination(58000U);
    msg.setDestinationEntity(40U);
    msg.name.assign("UKFDQZASLNPTEDWCLAVNVTYMAHIBWVDLZXPPEPGEYJYXWNABIKCFROOFHIUSQPAQMPHNMZNRFYNGYCCFYL");
    msg.state = 175U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.848744813039);
    msg.setSource(36308U);
    msg.setSourceEntity(137U);
    msg.setDestination(63022U);
    msg.setDestinationEntity(13U);
    msg.name.assign("SXOMCWDCTJPSBWZAEKIIJSELBAZRANOZMJFQVRIYTEJRPRKHZCVQSBLKOAQV");
    msg.state = 243U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.265403557487);
    msg.setSource(25942U);
    msg.setSourceEntity(219U);
    msg.setDestination(9055U);
    msg.setDestinationEntity(101U);
    msg.name.assign("LUMRAWOYTFJUGOQVHYAMZPBQYKADFOKWZDJSYTDPTJHDGYSKBOGACEHP");
    msg.state = 5U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.593498881284);
    msg.setSource(62682U);
    msg.setSourceEntity(15U);
    msg.setDestination(50245U);
    msg.setDestinationEntity(201U);
    msg.name.assign("XNLIATTWTGCXCADWVKVELZPXQZIKBQUCBDVUVXPCZBUFLTXVPEDJDKTWH");
    msg.value = 13U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.49293662064);
    msg.setSource(10950U);
    msg.setSourceEntity(172U);
    msg.setDestination(37400U);
    msg.setDestinationEntity(139U);
    msg.name.assign("UZXMCBHWADFURGUJNKEKVAXQAFHLXXZIOBFBJBIDRRMCWHDQNWWSLUARJSDCJDYKODPJIQEBWPFCYKRLSSTITKCBRAEGGATJZVSWOCUMXRNQFJOEOD");
    msg.value = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.588729738389);
    msg.setSource(19198U);
    msg.setSourceEntity(244U);
    msg.setDestination(27687U);
    msg.setDestinationEntity(243U);
    msg.name.assign("YCQJKOTAUAGUECTDLRDXAFCNFPLFJRUIIYL");
    msg.value = 28U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.112143972094);
    msg.setSource(51351U);
    msg.setSourceEntity(220U);
    msg.setDestination(64792U);
    msg.setDestinationEntity(239U);
    msg.name.assign("EFJDQETJBKUNLIUMLVIJTDAKSGKZLUVPLZNGRLFCTDMHRPOEPHODTBYIGAKOWAQPHIRAFSYCBSUKCTPXWUIOUJDDQBQGVLWYXOUPSMNMYTCOYAJKHVZGFBKBKIASFMZLREQRWKERHWQCBGFOHN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.327087347981);
    msg.setSource(10394U);
    msg.setSourceEntity(155U);
    msg.setDestination(26049U);
    msg.setDestinationEntity(163U);
    msg.name.assign("KWQMPCTEUEPPUMCBUIFRNEHCKYWTDXCPEYFRHOMKFWXMHPPFANYSLOCLOWYESXZCP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.335554203375);
    msg.setSource(63734U);
    msg.setSourceEntity(141U);
    msg.setDestination(29666U);
    msg.setDestinationEntity(189U);
    msg.name.assign("IWYZMZRSRIAGOPXBOUPQKMLNGFASMXDAUZCRPEBJYSTYJBATHBFTNHIUAVUXTGVDOIWONZONWRVLGSKFUCBDCHFQPJSEBLDTXXAGRQRGHTQXUQXASLXKYEEYKDOPXBTJLZCUAHUOVCBOCDQLXDWSUZWHENERPYSBMSRLMWLIMPJCFQQEYIMOVCPSEBVEJZTVLQHKVTDWRKNGNTFGHWFVIZIDMWGMAILCRFYZKKHMJFZHNEJONQNVGKPAWFUYKY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.692610280488);
    msg.setSource(21617U);
    msg.setSourceEntity(111U);
    msg.setDestination(55504U);
    msg.setDestinationEntity(190U);
    msg.name.assign("GRFTQLOPKLACXHIHMCKLVDJZCGRMTMSJGSJGPVOIGCZXCVCHSBYYXVYRUAEYUTZZSHWOUBNRNZTAKEKNFZQUJETLE");
    msg.value = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.0950445534329);
    msg.setSource(41054U);
    msg.setSourceEntity(220U);
    msg.setDestination(15476U);
    msg.setDestinationEntity(244U);
    msg.name.assign("LCFVKQLHHBPENENXWLRMPSJWRQNICSDAAXCXVVBKFAWBYEXCDTMTERZXFOICJZCFRGMXBIJLTOSYOJJXBPEUCFBWZIZKRFHFLAKGMUTNVGQZDZOLLQOTNNWUTKOGDNKFLGYFUAREVOPVGSGUAIYDBPFWAVSPOTEUDJXWSUQBWMIGDEAPYIOA");
    msg.value = 163U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.457896735785);
    msg.setSource(28014U);
    msg.setSourceEntity(41U);
    msg.setDestination(27780U);
    msg.setDestinationEntity(121U);
    msg.name.assign("GAIBSKBVZHJDKEGCNXHZRYHCDVLGWWWDOYDRIUUSQZGOJQLBLPNENFQHPYUKTMINWWKTXEVLXVXEFPWKFPEOAIUJAHVTMHKXJBERRYCRIYSVICJUJUQIMEOBFAVBQCGHXLCKMKZTMDM");
    msg.value = 111U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.644533110369);
    msg.setSource(13751U);
    msg.setSourceEntity(232U);
    msg.setDestination(8945U);
    msg.setDestinationEntity(142U);
    msg.id = 66U;
    msg.period = 1337143401U;
    msg.duty_cycle = 845745768U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.857645223389);
    msg.setSource(61740U);
    msg.setSourceEntity(107U);
    msg.setDestination(38056U);
    msg.setDestinationEntity(22U);
    msg.id = 246U;
    msg.period = 1506736426U;
    msg.duty_cycle = 865020485U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.285799764504);
    msg.setSource(1989U);
    msg.setSourceEntity(6U);
    msg.setDestination(55268U);
    msg.setDestinationEntity(243U);
    msg.id = 11U;
    msg.period = 1113087119U;
    msg.duty_cycle = 33412126U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.0436645626084);
    msg.setSource(27170U);
    msg.setSourceEntity(95U);
    msg.setDestination(42880U);
    msg.setDestinationEntity(176U);
    msg.id = 142U;
    msg.period = 1678402839U;
    msg.duty_cycle = 3962219542U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.257615390436);
    msg.setSource(19144U);
    msg.setSourceEntity(137U);
    msg.setDestination(46153U);
    msg.setDestinationEntity(203U);
    msg.id = 140U;
    msg.period = 3700161600U;
    msg.duty_cycle = 3892458988U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.887761443755);
    msg.setSource(46754U);
    msg.setSourceEntity(217U);
    msg.setDestination(39504U);
    msg.setDestinationEntity(2U);
    msg.id = 146U;
    msg.period = 866401488U;
    msg.duty_cycle = 3349104904U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.159238981931);
    msg.setSource(26316U);
    msg.setSourceEntity(16U);
    msg.setDestination(60006U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.391548576986;
    msg.lon = 0.627078245091;
    msg.height = 0.0389842012942;
    msg.x = 0.322082322053;
    msg.y = 0.388305971306;
    msg.z = 0.530627026601;
    msg.phi = 0.485310339587;
    msg.theta = 0.914132478564;
    msg.psi = 0.709499204261;
    msg.u = 0.451218117145;
    msg.v = 0.853246706345;
    msg.w = 0.675824890278;
    msg.vx = 0.655254986932;
    msg.vy = 0.777251177457;
    msg.vz = 0.311003246903;
    msg.p = 0.680435916665;
    msg.q = 0.317587810212;
    msg.r = 0.909165271006;
    msg.depth = 0.113849103465;
    msg.alt = 0.0602503792613;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.0542525781562);
    msg.setSource(20089U);
    msg.setSourceEntity(28U);
    msg.setDestination(20666U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.775740266864;
    msg.lon = 0.481174189824;
    msg.height = 0.0313185675748;
    msg.x = 0.893070226258;
    msg.y = 0.858990907603;
    msg.z = 0.48828252698;
    msg.phi = 0.684497405027;
    msg.theta = 0.623936929099;
    msg.psi = 0.608974164332;
    msg.u = 0.381577971386;
    msg.v = 0.316232114001;
    msg.w = 0.542185605092;
    msg.vx = 0.16820529761;
    msg.vy = 0.126918818135;
    msg.vz = 0.266196700805;
    msg.p = 0.737337873524;
    msg.q = 0.532284716732;
    msg.r = 0.334022640525;
    msg.depth = 0.338594627522;
    msg.alt = 0.0787842322721;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.210450896799);
    msg.setSource(57065U);
    msg.setSourceEntity(29U);
    msg.setDestination(42333U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.0495727690212;
    msg.lon = 0.150721135925;
    msg.height = 0.464109385553;
    msg.x = 0.237114707804;
    msg.y = 0.33878186003;
    msg.z = 0.482116063649;
    msg.phi = 0.472509473929;
    msg.theta = 0.272927107356;
    msg.psi = 0.0454333469128;
    msg.u = 0.91379860283;
    msg.v = 0.235036257538;
    msg.w = 0.990518930458;
    msg.vx = 0.91580278273;
    msg.vy = 0.0292638500162;
    msg.vz = 0.868211144178;
    msg.p = 0.645492555873;
    msg.q = 0.0852901197647;
    msg.r = 0.574275520115;
    msg.depth = 0.242742284794;
    msg.alt = 0.404489626669;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.267401147005);
    msg.setSource(36432U);
    msg.setSourceEntity(84U);
    msg.setDestination(42675U);
    msg.setDestinationEntity(27U);
    msg.x = 0.00781579790737;
    msg.y = 0.893692425442;
    msg.z = 0.116417517656;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.371816628469);
    msg.setSource(49940U);
    msg.setSourceEntity(26U);
    msg.setDestination(12562U);
    msg.setDestinationEntity(112U);
    msg.x = 0.452673081549;
    msg.y = 0.470682025272;
    msg.z = 0.466810247619;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.328419672834);
    msg.setSource(47758U);
    msg.setSourceEntity(234U);
    msg.setDestination(8197U);
    msg.setDestinationEntity(109U);
    msg.x = 0.3396987175;
    msg.y = 0.042046612514;
    msg.z = 0.518673976168;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.897371294196);
    msg.setSource(9901U);
    msg.setSourceEntity(86U);
    msg.setDestination(20992U);
    msg.setDestinationEntity(137U);
    msg.value = 0.0506913967512;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.797782620344);
    msg.setSource(12155U);
    msg.setSourceEntity(207U);
    msg.setDestination(62274U);
    msg.setDestinationEntity(225U);
    msg.value = 0.454255696452;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.136999918946);
    msg.setSource(11459U);
    msg.setSourceEntity(34U);
    msg.setDestination(60280U);
    msg.setDestinationEntity(155U);
    msg.value = 0.24399459445;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.28906955081);
    msg.setSource(21195U);
    msg.setSourceEntity(31U);
    msg.setDestination(44234U);
    msg.setDestinationEntity(213U);
    msg.value = 0.357279384705;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.582639089641);
    msg.setSource(12766U);
    msg.setSourceEntity(113U);
    msg.setDestination(58891U);
    msg.setDestinationEntity(20U);
    msg.value = 0.668212786993;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.821460134914);
    msg.setSource(49918U);
    msg.setSourceEntity(0U);
    msg.setDestination(26558U);
    msg.setDestinationEntity(160U);
    msg.value = 0.548970307361;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.0142708268481);
    msg.setSource(47087U);
    msg.setSourceEntity(74U);
    msg.setDestination(33030U);
    msg.setDestinationEntity(152U);
    msg.x = 0.70558198317;
    msg.y = 0.295389710272;
    msg.z = 0.98920126886;
    msg.phi = 0.183183167264;
    msg.theta = 0.885830659406;
    msg.psi = 0.13475026931;
    msg.p = 0.968388272982;
    msg.q = 0.191383795292;
    msg.r = 0.703178126249;
    msg.u = 0.761873144503;
    msg.v = 0.70326804737;
    msg.w = 0.0646459754591;
    msg.bias_psi = 0.577208537616;
    msg.bias_r = 0.74126216933;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.170984692636);
    msg.setSource(64630U);
    msg.setSourceEntity(168U);
    msg.setDestination(30589U);
    msg.setDestinationEntity(13U);
    msg.x = 0.350630096489;
    msg.y = 0.489291924333;
    msg.z = 0.686767588082;
    msg.phi = 0.0408875511084;
    msg.theta = 0.975733787634;
    msg.psi = 0.563558418793;
    msg.p = 0.13189826063;
    msg.q = 0.343851360592;
    msg.r = 0.709782942983;
    msg.u = 0.0570223350737;
    msg.v = 0.621223031372;
    msg.w = 0.136982877621;
    msg.bias_psi = 0.622319850322;
    msg.bias_r = 0.0712558987432;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.344063021391);
    msg.setSource(43495U);
    msg.setSourceEntity(209U);
    msg.setDestination(755U);
    msg.setDestinationEntity(82U);
    msg.x = 0.211528370225;
    msg.y = 0.28479047394;
    msg.z = 0.109800747949;
    msg.phi = 0.559906485973;
    msg.theta = 0.0805250172097;
    msg.psi = 0.438712669531;
    msg.p = 0.896449873085;
    msg.q = 0.116436152789;
    msg.r = 0.0685549454914;
    msg.u = 0.151458887341;
    msg.v = 0.0460256828396;
    msg.w = 0.968941285737;
    msg.bias_psi = 0.837794025379;
    msg.bias_r = 0.276460994744;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.691664762241);
    msg.setSource(56561U);
    msg.setSourceEntity(214U);
    msg.setDestination(58869U);
    msg.setDestinationEntity(98U);
    msg.bias_psi = 0.133711109625;
    msg.bias_r = 0.908701651303;
    msg.cog = 0.819401396731;
    msg.cyaw = 0.286561193209;
    msg.lbl_rej_level = 0.686730726858;
    msg.gps_rej_level = 0.352984022112;
    msg.custom_x = 0.345019458688;
    msg.custom_y = 0.635684988137;
    msg.custom_z = 0.353264116383;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.545000078272);
    msg.setSource(57844U);
    msg.setSourceEntity(69U);
    msg.setDestination(36328U);
    msg.setDestinationEntity(8U);
    msg.bias_psi = 0.166062362052;
    msg.bias_r = 0.941653525158;
    msg.cog = 0.293150219935;
    msg.cyaw = 0.385061241341;
    msg.lbl_rej_level = 0.88192322722;
    msg.gps_rej_level = 0.730066795906;
    msg.custom_x = 0.725773041313;
    msg.custom_y = 0.454144444472;
    msg.custom_z = 0.0452032948247;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.873549231095);
    msg.setSource(18864U);
    msg.setSourceEntity(196U);
    msg.setDestination(35594U);
    msg.setDestinationEntity(231U);
    msg.bias_psi = 0.0493958863158;
    msg.bias_r = 0.460112035479;
    msg.cog = 0.614597242733;
    msg.cyaw = 0.433204540016;
    msg.lbl_rej_level = 0.732033040964;
    msg.gps_rej_level = 0.789599682591;
    msg.custom_x = 0.36068055618;
    msg.custom_y = 0.0910597439589;
    msg.custom_z = 0.0419795669087;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.50473531828);
    msg.setSource(33939U);
    msg.setSourceEntity(225U);
    msg.setDestination(54091U);
    msg.setDestinationEntity(242U);
    msg.utc_time = 0.951066428767;
    msg.reason = 29U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.222880415602);
    msg.setSource(45910U);
    msg.setSourceEntity(161U);
    msg.setDestination(24757U);
    msg.setDestinationEntity(51U);
    msg.utc_time = 0.0958375794324;
    msg.reason = 4U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.773140687637);
    msg.setSource(40388U);
    msg.setSourceEntity(63U);
    msg.setDestination(32395U);
    msg.setDestinationEntity(254U);
    msg.utc_time = 0.982359288659;
    msg.reason = 96U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.296692424664);
    msg.setSource(43412U);
    msg.setSourceEntity(201U);
    msg.setDestination(2386U);
    msg.setDestinationEntity(53U);
    msg.id = 29U;
    msg.range = 0.286067064986;
    msg.acceptance = 43U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.707228475106);
    msg.setSource(64313U);
    msg.setSourceEntity(52U);
    msg.setDestination(53228U);
    msg.setDestinationEntity(236U);
    msg.id = 222U;
    msg.range = 0.573006661348;
    msg.acceptance = 41U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.319838351726);
    msg.setSource(44968U);
    msg.setSourceEntity(106U);
    msg.setDestination(5887U);
    msg.setDestinationEntity(112U);
    msg.id = 114U;
    msg.range = 0.671832910815;
    msg.acceptance = 152U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.667372554076);
    msg.setSource(39112U);
    msg.setSourceEntity(47U);
    msg.setDestination(40150U);
    msg.setDestinationEntity(206U);
    msg.type = 21U;
    msg.reason = 135U;
    msg.value = 0.437355508367;
    msg.timestep = 0.454717565657;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.820390256732);
    msg.setSource(8235U);
    msg.setSourceEntity(226U);
    msg.setDestination(40372U);
    msg.setDestinationEntity(217U);
    msg.type = 114U;
    msg.reason = 207U;
    msg.value = 0.937013509122;
    msg.timestep = 0.456845663304;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.662848751951);
    msg.setSource(42142U);
    msg.setSourceEntity(7U);
    msg.setDestination(36062U);
    msg.setDestinationEntity(142U);
    msg.type = 32U;
    msg.reason = 110U;
    msg.value = 0.877500999464;
    msg.timestep = 0.263733702462;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.00106278447918);
    msg.setSource(38200U);
    msg.setSourceEntity(101U);
    msg.setDestination(64587U);
    msg.setDestinationEntity(77U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UIEZEVVGZLFOYVFBIPLVYBJOAEBHQJYDUOKZZUZNJRKCTRPRUQICRLLUYMZPXWCHMFKEHKMILEGTRQGUNMAMWIMHHVEQRQONTKWDSPPOYTHGWOCNTDVMYOUXCMXNPYLDMDBSJGEVEJ");
    tmp_msg_0.lat = 0.813076113961;
    tmp_msg_0.lon = 0.630949405706;
    tmp_msg_0.depth = 0.995075648133;
    tmp_msg_0.query_channel = 70U;
    tmp_msg_0.reply_channel = 116U;
    tmp_msg_0.transponder_delay = 209U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.807697721461;
    msg.y = 0.255102264121;
    msg.var_x = 0.998613640045;
    msg.var_y = 0.659094194707;
    msg.distance = 0.850328945925;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.3160702496);
    msg.setSource(64169U);
    msg.setSourceEntity(215U);
    msg.setDestination(17186U);
    msg.setDestinationEntity(232U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SHGIJXWXCGDVKHEMKOQPTKHHYQUNXVSNIGLYCICNXUORKSSMARTZEVDJJFLWTNUJGFBYQKCDXVLANISGZRWZPERHNZFEWQQVLMYACCFANFHPQCIEJLOHPVYXMLCKZMEXJAOGZDETBIIUCUIJYDQLAWTOYIULPRPFBWOBXVXBSTSZHCLVRHLKUMMB");
    tmp_msg_0.lat = 0.776554626981;
    tmp_msg_0.lon = 0.172102403698;
    tmp_msg_0.depth = 0.907183393015;
    tmp_msg_0.query_channel = 35U;
    tmp_msg_0.reply_channel = 234U;
    tmp_msg_0.transponder_delay = 104U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.83043935541;
    msg.y = 0.958606885436;
    msg.var_x = 0.909894041128;
    msg.var_y = 0.211142202404;
    msg.distance = 0.513208036117;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.599814672837);
    msg.setSource(64109U);
    msg.setSourceEntity(77U);
    msg.setDestination(46033U);
    msg.setDestinationEntity(30U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PFTJZXGGZICUBOGEDHCHYQWGHDIBKYRSIABJLKBBCIVNUQSVYRMXXHCEAOHOVZAZIJLTMHTFOBMDXAOULSWTDYTEKEQEMVVJQJXQNPTIWRLSHOTMQLFKFSMEOBQZRCZRIWPXCXHESSGWYSZPAZYVZNAUAWIGMOUEOMPZPJRQRLCHWAEPYKDNVKJQCIXVTUGCNKMGTPFYVUFRGDJMTPILWXVULBFHJSYNSXWNPRCQRDK");
    tmp_msg_0.lat = 0.961749696559;
    tmp_msg_0.lon = 0.223778389109;
    tmp_msg_0.depth = 0.522725219253;
    tmp_msg_0.query_channel = 132U;
    tmp_msg_0.reply_channel = 36U;
    tmp_msg_0.transponder_delay = 219U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.682349192785;
    msg.y = 0.206247250878;
    msg.var_x = 0.881268209732;
    msg.var_y = 0.520040396856;
    msg.distance = 0.753923409489;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.828216247922);
    msg.setSource(10092U);
    msg.setSourceEntity(159U);
    msg.setDestination(42586U);
    msg.setDestinationEntity(139U);
    msg.state = 241U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.311385270912);
    msg.setSource(37918U);
    msg.setSourceEntity(250U);
    msg.setDestination(34943U);
    msg.setDestinationEntity(38U);
    msg.state = 188U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.374450837974);
    msg.setSource(62012U);
    msg.setSourceEntity(82U);
    msg.setDestination(16858U);
    msg.setDestinationEntity(93U);
    msg.state = 102U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.108646312619);
    msg.setSource(13921U);
    msg.setSourceEntity(233U);
    msg.setDestination(20472U);
    msg.setDestinationEntity(104U);
    msg.x = 0.180525960039;
    msg.y = 0.557341685692;
    msg.z = 0.797670172684;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.35956455003);
    msg.setSource(53344U);
    msg.setSourceEntity(204U);
    msg.setDestination(59895U);
    msg.setDestinationEntity(171U);
    msg.x = 0.489840307928;
    msg.y = 0.515378155173;
    msg.z = 0.820325031468;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.94031275058);
    msg.setSource(63482U);
    msg.setSourceEntity(155U);
    msg.setDestination(27877U);
    msg.setDestinationEntity(151U);
    msg.x = 0.663568988142;
    msg.y = 0.684984001186;
    msg.z = 0.139101990062;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.7175648364);
    msg.setSource(306U);
    msg.setSourceEntity(3U);
    msg.setDestination(25842U);
    msg.setDestinationEntity(47U);
    msg.va = 0.502942121857;
    msg.aoa = 0.219974913899;
    msg.ssa = 0.0592660404404;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.82784644827);
    msg.setSource(44619U);
    msg.setSourceEntity(120U);
    msg.setDestination(25780U);
    msg.setDestinationEntity(41U);
    msg.va = 0.415770178912;
    msg.aoa = 0.63663015438;
    msg.ssa = 0.633449587262;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.544275574726);
    msg.setSource(41253U);
    msg.setSourceEntity(175U);
    msg.setDestination(63000U);
    msg.setDestinationEntity(119U);
    msg.va = 0.173326763964;
    msg.aoa = 0.359204149449;
    msg.ssa = 0.215698229501;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.788473392412);
    msg.setSource(36032U);
    msg.setSourceEntity(100U);
    msg.setDestination(41994U);
    msg.setDestinationEntity(71U);
    msg.value = 0.629355755578;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.968292595999);
    msg.setSource(15503U);
    msg.setSourceEntity(52U);
    msg.setDestination(46865U);
    msg.setDestinationEntity(66U);
    msg.value = 0.756993017862;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.748175950214);
    msg.setSource(29606U);
    msg.setSourceEntity(57U);
    msg.setDestination(65148U);
    msg.setDestinationEntity(171U);
    msg.value = 0.208121704705;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.09828313291);
    msg.setSource(57912U);
    msg.setSourceEntity(152U);
    msg.setDestination(50220U);
    msg.setDestinationEntity(139U);
    msg.value = 0.971553293995;
    msg.z_units = 247U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.770022791142);
    msg.setSource(21078U);
    msg.setSourceEntity(185U);
    msg.setDestination(17775U);
    msg.setDestinationEntity(23U);
    msg.value = 0.947703945821;
    msg.z_units = 112U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.317008930416);
    msg.setSource(30619U);
    msg.setSourceEntity(128U);
    msg.setDestination(16787U);
    msg.setDestinationEntity(85U);
    msg.value = 0.552225911202;
    msg.z_units = 54U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.286066325352);
    msg.setSource(47872U);
    msg.setSourceEntity(37U);
    msg.setDestination(27305U);
    msg.setDestinationEntity(165U);
    msg.value = 0.948350656554;
    msg.speed_units = 85U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.317957913896);
    msg.setSource(12008U);
    msg.setSourceEntity(161U);
    msg.setDestination(43130U);
    msg.setDestinationEntity(197U);
    msg.value = 0.443544268874;
    msg.speed_units = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.655505608363);
    msg.setSource(4588U);
    msg.setSourceEntity(89U);
    msg.setDestination(23483U);
    msg.setDestinationEntity(96U);
    msg.value = 0.80230780583;
    msg.speed_units = 250U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.807252692792);
    msg.setSource(50929U);
    msg.setSourceEntity(242U);
    msg.setDestination(24674U);
    msg.setDestinationEntity(160U);
    msg.value = 0.101920556617;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.622936283617);
    msg.setSource(16624U);
    msg.setSourceEntity(62U);
    msg.setDestination(52973U);
    msg.setDestinationEntity(61U);
    msg.value = 0.840281401042;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.134593362962);
    msg.setSource(50451U);
    msg.setSourceEntity(6U);
    msg.setDestination(51292U);
    msg.setDestinationEntity(134U);
    msg.value = 0.362291029927;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.507719038411);
    msg.setSource(20849U);
    msg.setSourceEntity(153U);
    msg.setDestination(15949U);
    msg.setDestinationEntity(214U);
    msg.value = 0.472661339263;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.647283525544);
    msg.setSource(17326U);
    msg.setSourceEntity(150U);
    msg.setDestination(5624U);
    msg.setDestinationEntity(113U);
    msg.value = 0.571083744953;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.811224800805);
    msg.setSource(4811U);
    msg.setSourceEntity(238U);
    msg.setDestination(6798U);
    msg.setDestinationEntity(101U);
    msg.value = 0.58720332624;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.348021765823);
    msg.setSource(12345U);
    msg.setSourceEntity(242U);
    msg.setDestination(29437U);
    msg.setDestinationEntity(7U);
    msg.value = 0.212534590506;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.233226719956);
    msg.setSource(17593U);
    msg.setSourceEntity(118U);
    msg.setDestination(41374U);
    msg.setDestinationEntity(203U);
    msg.value = 0.961570627246;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.0129741400498);
    msg.setSource(2874U);
    msg.setSourceEntity(8U);
    msg.setDestination(50570U);
    msg.setDestinationEntity(197U);
    msg.value = 0.505112123408;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.726529090344);
    msg.setSource(9593U);
    msg.setSourceEntity(160U);
    msg.setDestination(21462U);
    msg.setDestinationEntity(77U);
    msg.path_ref = 1629652416U;
    msg.start_lat = 0.29796862788;
    msg.start_lon = 0.313175142178;
    msg.start_z = 0.341353547503;
    msg.start_z_units = 39U;
    msg.end_lat = 0.207933340732;
    msg.end_lon = 0.316858350324;
    msg.end_z = 0.884238276664;
    msg.end_z_units = 144U;
    msg.speed = 0.71687783248;
    msg.speed_units = 9U;
    msg.lradius = 0.932163401923;
    msg.flags = 128U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.473303330177);
    msg.setSource(38806U);
    msg.setSourceEntity(171U);
    msg.setDestination(3166U);
    msg.setDestinationEntity(120U);
    msg.path_ref = 694078401U;
    msg.start_lat = 0.699671522054;
    msg.start_lon = 0.164810559883;
    msg.start_z = 0.0613649527454;
    msg.start_z_units = 73U;
    msg.end_lat = 0.683172443642;
    msg.end_lon = 0.757145827266;
    msg.end_z = 0.00657240570226;
    msg.end_z_units = 75U;
    msg.speed = 0.613414700101;
    msg.speed_units = 122U;
    msg.lradius = 0.387626983439;
    msg.flags = 212U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.685909993328);
    msg.setSource(2606U);
    msg.setSourceEntity(131U);
    msg.setDestination(27657U);
    msg.setDestinationEntity(133U);
    msg.path_ref = 1015242680U;
    msg.start_lat = 0.405602854042;
    msg.start_lon = 0.0114690300431;
    msg.start_z = 0.318105967706;
    msg.start_z_units = 156U;
    msg.end_lat = 0.429630444697;
    msg.end_lon = 0.672991100766;
    msg.end_z = 0.0786349798591;
    msg.end_z_units = 73U;
    msg.speed = 0.575324897506;
    msg.speed_units = 126U;
    msg.lradius = 0.230631892628;
    msg.flags = 166U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.553544921405);
    msg.setSource(53899U);
    msg.setSourceEntity(194U);
    msg.setDestination(3406U);
    msg.setDestinationEntity(39U);
    msg.x = 0.152506618033;
    msg.y = 0.239490935484;
    msg.z = 0.192704563683;
    msg.k = 0.0456200650665;
    msg.m = 0.481474409679;
    msg.n = 0.29152972106;
    msg.flags = 108U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.568678742455);
    msg.setSource(6535U);
    msg.setSourceEntity(40U);
    msg.setDestination(43175U);
    msg.setDestinationEntity(129U);
    msg.x = 0.364816005939;
    msg.y = 0.263139759502;
    msg.z = 0.313227068421;
    msg.k = 0.551427364348;
    msg.m = 0.105441369637;
    msg.n = 0.50884521532;
    msg.flags = 173U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.265220630002);
    msg.setSource(9561U);
    msg.setSourceEntity(36U);
    msg.setDestination(33024U);
    msg.setDestinationEntity(121U);
    msg.x = 0.790417441808;
    msg.y = 0.635244116452;
    msg.z = 0.41506255236;
    msg.k = 0.639103034665;
    msg.m = 0.613461389513;
    msg.n = 0.908116008188;
    msg.flags = 219U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.616530095715);
    msg.setSource(48038U);
    msg.setSourceEntity(254U);
    msg.setDestination(83U);
    msg.setDestinationEntity(31U);
    msg.value = 0.542667655719;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.70196785535);
    msg.setSource(2325U);
    msg.setSourceEntity(188U);
    msg.setDestination(13028U);
    msg.setDestinationEntity(180U);
    msg.value = 0.83605887115;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.368097135849);
    msg.setSource(10478U);
    msg.setSourceEntity(224U);
    msg.setDestination(37881U);
    msg.setDestinationEntity(76U);
    msg.value = 0.755560560627;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.552782080885);
    msg.setSource(32374U);
    msg.setSourceEntity(26U);
    msg.setDestination(14362U);
    msg.setDestinationEntity(144U);
    msg.u = 0.914123911399;
    msg.v = 0.344734494526;
    msg.w = 0.257109725408;
    msg.p = 0.291138609055;
    msg.q = 0.579685418406;
    msg.r = 0.742007207283;
    msg.flags = 173U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.204357462589);
    msg.setSource(50209U);
    msg.setSourceEntity(161U);
    msg.setDestination(47844U);
    msg.setDestinationEntity(177U);
    msg.u = 0.223513222016;
    msg.v = 0.201502532859;
    msg.w = 0.228613018625;
    msg.p = 0.463805494439;
    msg.q = 0.239010023723;
    msg.r = 0.0498911653395;
    msg.flags = 162U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.0703864304778);
    msg.setSource(53200U);
    msg.setSourceEntity(17U);
    msg.setDestination(11989U);
    msg.setDestinationEntity(105U);
    msg.u = 0.586660825138;
    msg.v = 0.0437462262418;
    msg.w = 0.932955413615;
    msg.p = 0.31517733538;
    msg.q = 0.455847743371;
    msg.r = 0.77728446428;
    msg.flags = 5U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.94055054842);
    msg.setSource(56797U);
    msg.setSourceEntity(17U);
    msg.setDestination(43432U);
    msg.setDestinationEntity(189U);
    msg.path_ref = 719670518U;
    msg.start_lat = 0.0123351818575;
    msg.start_lon = 0.84693183982;
    msg.start_z = 0.280828189066;
    msg.start_z_units = 118U;
    msg.end_lat = 0.496363838242;
    msg.end_lon = 0.974508084428;
    msg.end_z = 0.884037962701;
    msg.end_z_units = 226U;
    msg.lradius = 0.718350603452;
    msg.flags = 138U;
    msg.x = 0.456713474064;
    msg.y = 0.344092043956;
    msg.z = 0.626782252174;
    msg.vx = 0.917042271492;
    msg.vy = 0.290666739615;
    msg.vz = 0.380698259151;
    msg.course_error = 0.335690966065;
    msg.eta = 40444U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.350125724758);
    msg.setSource(58850U);
    msg.setSourceEntity(131U);
    msg.setDestination(46082U);
    msg.setDestinationEntity(61U);
    msg.path_ref = 256824382U;
    msg.start_lat = 0.736301560576;
    msg.start_lon = 0.518381081798;
    msg.start_z = 0.710559426877;
    msg.start_z_units = 105U;
    msg.end_lat = 0.311463479268;
    msg.end_lon = 0.736795169448;
    msg.end_z = 0.878958165766;
    msg.end_z_units = 122U;
    msg.lradius = 0.749348622268;
    msg.flags = 56U;
    msg.x = 0.486727812513;
    msg.y = 0.629793793904;
    msg.z = 0.176645915747;
    msg.vx = 0.114807081695;
    msg.vy = 0.472375097387;
    msg.vz = 0.713587394555;
    msg.course_error = 0.210153314344;
    msg.eta = 24539U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.0553214478071);
    msg.setSource(15239U);
    msg.setSourceEntity(6U);
    msg.setDestination(35871U);
    msg.setDestinationEntity(96U);
    msg.path_ref = 3252029631U;
    msg.start_lat = 0.0496535918461;
    msg.start_lon = 0.114447697309;
    msg.start_z = 0.698174214743;
    msg.start_z_units = 8U;
    msg.end_lat = 0.206768833136;
    msg.end_lon = 0.602120680866;
    msg.end_z = 0.787489528499;
    msg.end_z_units = 86U;
    msg.lradius = 0.24478331057;
    msg.flags = 135U;
    msg.x = 0.84630283547;
    msg.y = 0.409738452821;
    msg.z = 0.100169130116;
    msg.vx = 0.559761636004;
    msg.vy = 0.559215144765;
    msg.vz = 0.923891194485;
    msg.course_error = 0.590771982907;
    msg.eta = 7901U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.218257291019);
    msg.setSource(7552U);
    msg.setSourceEntity(232U);
    msg.setDestination(14123U);
    msg.setDestinationEntity(49U);
    msg.k = 0.927016248519;
    msg.m = 0.401551875396;
    msg.n = 0.79303181426;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.0664466672343);
    msg.setSource(850U);
    msg.setSourceEntity(196U);
    msg.setDestination(55606U);
    msg.setDestinationEntity(57U);
    msg.k = 0.800339395903;
    msg.m = 0.260612193558;
    msg.n = 0.111871709103;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.986881211084);
    msg.setSource(57348U);
    msg.setSourceEntity(21U);
    msg.setDestination(44315U);
    msg.setDestinationEntity(141U);
    msg.k = 0.743135348054;
    msg.m = 0.902243379181;
    msg.n = 0.996697809195;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.500507357754);
    msg.setSource(13653U);
    msg.setSourceEntity(98U);
    msg.setDestination(28513U);
    msg.setDestinationEntity(178U);
    msg.p = 0.499221002863;
    msg.i = 0.307207797468;
    msg.d = 0.801380341873;
    msg.a = 0.661430825453;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.482185211715);
    msg.setSource(38297U);
    msg.setSourceEntity(167U);
    msg.setDestination(64684U);
    msg.setDestinationEntity(224U);
    msg.p = 0.298059546966;
    msg.i = 0.40762888809;
    msg.d = 0.554625131431;
    msg.a = 0.437238421051;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.20847451483);
    msg.setSource(43901U);
    msg.setSourceEntity(154U);
    msg.setDestination(59902U);
    msg.setDestinationEntity(86U);
    msg.p = 0.168374073299;
    msg.i = 0.970766888461;
    msg.d = 0.981064235958;
    msg.a = 0.825558639363;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.0933496057261);
    msg.setSource(11059U);
    msg.setSourceEntity(34U);
    msg.setDestination(47730U);
    msg.setDestinationEntity(44U);
    msg.op = 227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.56024887246);
    msg.setSource(15449U);
    msg.setSourceEntity(70U);
    msg.setDestination(51955U);
    msg.setDestinationEntity(94U);
    msg.op = 38U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.306802579457);
    msg.setSource(6692U);
    msg.setSourceEntity(101U);
    msg.setDestination(56290U);
    msg.setDestinationEntity(240U);
    msg.op = 182U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.26212599101);
    msg.setSource(60801U);
    msg.setSourceEntity(7U);
    msg.setDestination(35600U);
    msg.setDestinationEntity(142U);
    msg.x = 0.172122381071;
    msg.y = 0.10245980051;
    msg.z = 0.514622769231;
    msg.vx = 0.240657535789;
    msg.vy = 0.776238470614;
    msg.vz = 0.222193606231;
    msg.ax = 0.171474704475;
    msg.ay = 0.246711323195;
    msg.az = 0.0834579858996;
    msg.flags = 13963U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.664319042927);
    msg.setSource(13957U);
    msg.setSourceEntity(100U);
    msg.setDestination(41037U);
    msg.setDestinationEntity(39U);
    msg.x = 0.533382097885;
    msg.y = 0.45605729362;
    msg.z = 0.261588188996;
    msg.vx = 0.504563979435;
    msg.vy = 0.0851470920026;
    msg.vz = 0.870047991655;
    msg.ax = 0.341014666379;
    msg.ay = 0.702504602438;
    msg.az = 0.340041249198;
    msg.flags = 4782U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.606120331402);
    msg.setSource(43595U);
    msg.setSourceEntity(93U);
    msg.setDestination(1398U);
    msg.setDestinationEntity(60U);
    msg.x = 0.495015897818;
    msg.y = 0.837608763762;
    msg.z = 0.0650886698247;
    msg.vx = 0.360620404967;
    msg.vy = 0.770578212237;
    msg.vz = 0.198179368201;
    msg.ax = 0.714702798231;
    msg.ay = 0.28675316725;
    msg.az = 0.429974834969;
    msg.flags = 987U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.268815128496);
    msg.setSource(14142U);
    msg.setSourceEntity(150U);
    msg.setDestination(25923U);
    msg.setDestinationEntity(43U);
    msg.value = 0.817107535412;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.964601125667);
    msg.setSource(34473U);
    msg.setSourceEntity(169U);
    msg.setDestination(40441U);
    msg.setDestinationEntity(126U);
    msg.value = 0.471121683023;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.293346455684);
    msg.setSource(47713U);
    msg.setSourceEntity(9U);
    msg.setDestination(64663U);
    msg.setDestinationEntity(111U);
    msg.value = 0.648040815201;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.448595727867);
    msg.setSource(7004U);
    msg.setSourceEntity(155U);
    msg.setDestination(19711U);
    msg.setDestinationEntity(238U);
    msg.timeout = 45634U;
    msg.lat = 0.0644734262385;
    msg.lon = 0.921261846301;
    msg.z = 0.914821043251;
    msg.z_units = 247U;
    msg.speed = 0.243481666036;
    msg.speed_units = 155U;
    msg.roll = 0.0581762549227;
    msg.pitch = 0.907437456831;
    msg.yaw = 0.114818694988;
    msg.custom.assign("BQQMOKMWSREDQNIILHOAJZWLHLMLSGLUGFHOTCDBKMVUPAWFEVVDASEVJCFYYOIDACPZTJJAGMZMCDSLHTCYIXXXATTKZUNZYNNVNSUOBHVOPBXEWXVQUEPLFGOHGKFJMHSOTSKRRBYJTUWWSPIZZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.290681841842);
    msg.setSource(30957U);
    msg.setSourceEntity(210U);
    msg.setDestination(61440U);
    msg.setDestinationEntity(173U);
    msg.timeout = 22070U;
    msg.lat = 0.363859888417;
    msg.lon = 0.729802258468;
    msg.z = 0.475920202922;
    msg.z_units = 160U;
    msg.speed = 0.16046857286;
    msg.speed_units = 32U;
    msg.roll = 0.0507496020368;
    msg.pitch = 0.811174351429;
    msg.yaw = 0.719056148459;
    msg.custom.assign("NUSOPYHEWQMANFPBIWZMQJXYPVROGWVVTPJHBDQUOEJEWKFIXHYWPUPUQDYEHOLRSFDLAWCXRRPFIVHXIMLFOLMZMNXKZFPENXZNICYVI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.379824900522);
    msg.setSource(26150U);
    msg.setSourceEntity(244U);
    msg.setDestination(60616U);
    msg.setDestinationEntity(161U);
    msg.timeout = 41552U;
    msg.lat = 0.779365390713;
    msg.lon = 0.740440751351;
    msg.z = 0.590607758279;
    msg.z_units = 124U;
    msg.speed = 0.723442761972;
    msg.speed_units = 132U;
    msg.roll = 0.380596067733;
    msg.pitch = 0.491064328388;
    msg.yaw = 0.213898215378;
    msg.custom.assign("VAZQHCEZSSUVXRJWEMJIMMXIOLGKEVXKIMQDRNODJNSRSFDEVTJEMNZTUFRQYLBFGPVAOPOWEASQHIJZFPUCPGLGAYVGBGMXXIPQDYFLPDBBUTYJKQPHQWRQGOFDW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.254914373031);
    msg.setSource(41027U);
    msg.setSourceEntity(202U);
    msg.setDestination(37547U);
    msg.setDestinationEntity(254U);
    msg.timeout = 34392U;
    msg.lat = 0.346044179257;
    msg.lon = 0.495083551183;
    msg.z = 0.472821411834;
    msg.z_units = 199U;
    msg.speed = 0.0661898123405;
    msg.speed_units = 74U;
    msg.duration = 11714U;
    msg.radius = 0.834950862944;
    msg.flags = 161U;
    msg.custom.assign("CMYRMLKVSDPJKERZBUIZQBZACWEXGFKAZCGURXEESC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.861119102904);
    msg.setSource(22035U);
    msg.setSourceEntity(33U);
    msg.setDestination(44925U);
    msg.setDestinationEntity(74U);
    msg.timeout = 54308U;
    msg.lat = 0.566718916599;
    msg.lon = 0.89205872249;
    msg.z = 0.750648526908;
    msg.z_units = 75U;
    msg.speed = 0.306969605456;
    msg.speed_units = 33U;
    msg.duration = 26304U;
    msg.radius = 0.388411238956;
    msg.flags = 161U;
    msg.custom.assign("AEFUIOTNFWVBTTIXQHTERGFTNWRAILQBPQRY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.290490864238);
    msg.setSource(29097U);
    msg.setSourceEntity(254U);
    msg.setDestination(45077U);
    msg.setDestinationEntity(55U);
    msg.timeout = 33956U;
    msg.lat = 0.238915646508;
    msg.lon = 0.658995658597;
    msg.z = 0.78817318837;
    msg.z_units = 107U;
    msg.speed = 0.309447842472;
    msg.speed_units = 39U;
    msg.duration = 63534U;
    msg.radius = 0.535946806818;
    msg.flags = 51U;
    msg.custom.assign("ZNRTQCXUCHVF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.200154405886);
    msg.setSource(15281U);
    msg.setSourceEntity(131U);
    msg.setDestination(47048U);
    msg.setDestinationEntity(1U);
    msg.custom.assign("TLQOQTFFIBWCHYRAYJNHAVDTKGBMQYXJDKKUMTZQPLTRPYTDAMNTSYBDSUJZKXDGLYPXFCVSFCQQTHLEUTPSVXJBICIYRSAQUHZKQCOZAVWDSIIIAIDWAIJFWPZMEVOGMVDNWLGCHNJYVQYZXPZWRNOBPRHBUVVRWBFPNMONUBRMWNAGJEGXPUIDEFYNKKVKZSEOHSKOGTGJACQMXBBWOXPURJNCLRFIXCZFGEMHKSSHHEE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.905683542337);
    msg.setSource(50468U);
    msg.setSourceEntity(223U);
    msg.setDestination(50096U);
    msg.setDestinationEntity(160U);
    msg.custom.assign("UEGTQCDNRJGNXVRCIVRLHZBREVTQMIINMATBIPRQPGHSTFEDFWZPNAJQMKYOWQNLZFUWDRSLBOJHEDPFZFXKKCYAZONKSNZVYJYAAMXTOOPXOOPFCFEXOHRLBIVEZVQKHOGMDPYIT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.842109912868);
    msg.setSource(29364U);
    msg.setSourceEntity(42U);
    msg.setDestination(38363U);
    msg.setDestinationEntity(18U);
    msg.custom.assign("RYCDNZSZHSIMBNWYZDBORQUIRVTWWNTJDZBAMFZLFVWKKEYQSETMFAPLGRXFFGBWTSQEAYMABOSIHYXHQAMBUFMVCOUAOVELHRADJIBRD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.890416336412);
    msg.setSource(50738U);
    msg.setSourceEntity(134U);
    msg.setDestination(35967U);
    msg.setDestinationEntity(173U);
    msg.timeout = 54495U;
    msg.lat = 0.99580638523;
    msg.lon = 0.555305440608;
    msg.z = 0.336511753139;
    msg.z_units = 10U;
    msg.duration = 18309U;
    msg.speed = 0.286823716961;
    msg.speed_units = 84U;
    msg.type = 8U;
    msg.radius = 0.855870564922;
    msg.length = 0.650827248172;
    msg.bearing = 0.900880987694;
    msg.direction = 227U;
    msg.custom.assign("QAFOQDJNYSXJAOFCEWOYSTQUQNDEFVVPXKIPZLQUGCYNSGDYNVRXBACWOASEUJVZLTRDPHIPCHGCKDVTCPVZHPFMBBGGKDHOIUUMBPIJTQFUEIZBTQILARLUXNHSYTMMMLJWOYXPDTJZFSWIAEKXUZWRELMYKJKSAUOBSYCCRBNBWVOAWIHIKAOVFNWTTDGRHWQZXJMZDXOPDNKJBFHSKECKGRHECLVGISFERGMYREQJWGFXAZQZTRLYLPV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.904715163935);
    msg.setSource(35025U);
    msg.setSourceEntity(8U);
    msg.setDestination(24558U);
    msg.setDestinationEntity(220U);
    msg.timeout = 15757U;
    msg.lat = 0.274919008477;
    msg.lon = 0.777709701573;
    msg.z = 0.347163080878;
    msg.z_units = 67U;
    msg.duration = 6819U;
    msg.speed = 0.747491222529;
    msg.speed_units = 135U;
    msg.type = 62U;
    msg.radius = 0.498455033769;
    msg.length = 0.375439928978;
    msg.bearing = 0.611766260842;
    msg.direction = 112U;
    msg.custom.assign("CHMTEPCNGDZBMZLRKFJRYVMUUWCOUXGFXWXCUTPGXDPAOJCQVKQYGYHIVLUHRZHZROMTFGJEXBOHZLNAMDFGKWVFOPMIBATOATBFWRBPVMAZDYKOWWOFLFZPQHBUSCYQSRBWLIKHEDTTNZCDFAIOKUXYUQARENPYAZJNRYVYGNTKVQEEMXLIUGCXISJKJJGIVHTADEDESDKLBMNWQJULNSHIVOTRDAKPQW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.0413253979369);
    msg.setSource(62373U);
    msg.setSourceEntity(188U);
    msg.setDestination(31425U);
    msg.setDestinationEntity(2U);
    msg.timeout = 36790U;
    msg.lat = 0.505411912608;
    msg.lon = 0.12238420189;
    msg.z = 0.61074344735;
    msg.z_units = 245U;
    msg.duration = 57647U;
    msg.speed = 0.515108696647;
    msg.speed_units = 246U;
    msg.type = 145U;
    msg.radius = 0.234126059007;
    msg.length = 0.266573233748;
    msg.bearing = 0.19732380862;
    msg.direction = 137U;
    msg.custom.assign("GWLYYITFUAHOGATNRUMPZFSRQMTUEXYIGEIOHWXJVDSPMXVZDDBUBWKJKHSREFQRTKFTNDJMXXOGSSLDTADBLBRUUVFXMRBTHWGLFIWDJZBYHFEOPCQXSWOCSDLRRYUEWPZGJMOCRCKKYIPZQLFHOLLLYGKVCQGMREWFNNBWHSZIANLJPUTQMNMXPOIIFQBEGHQAZXUHZJTKCWVIVEIQSXQGTKNVMOV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.955297435783);
    msg.setSource(23093U);
    msg.setSourceEntity(21U);
    msg.setDestination(8082U);
    msg.setDestinationEntity(1U);
    msg.duration = 29452U;
    msg.custom.assign("UJWRZGKSYNGAOAVJIUERCKSEGXIVAZSDESHJBBWLSHHUOMBMARGXRDPMTQSBJBMNCNIDGQVYIKWTIDSNTNBLGPWWJDZSHOUTKHPILOWDTWKCTVOMFENABPFACYQLVUQZLOALGNREUCGPJKNCWNXEHHYBVVIPOXXKLJQOZFHQMYMSFYHWAXVLVOKXHMDEPAZDERZQDDUMYLAQRJRRVICFBSQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.79228355214);
    msg.setSource(22123U);
    msg.setSourceEntity(5U);
    msg.setDestination(26741U);
    msg.setDestinationEntity(168U);
    msg.duration = 2187U;
    msg.custom.assign("ZOZGXGXMJNTLDFZDXYEHVAOVVJCETOJAENLWVDYPMSJCQKNSCTGKVRYJVOJKWZUTUY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.527679260948);
    msg.setSource(4607U);
    msg.setSourceEntity(90U);
    msg.setDestination(17549U);
    msg.setDestinationEntity(107U);
    msg.duration = 5064U;
    msg.custom.assign("SRYHPZJWKDNPASASPILFKKVEUFXEXCTURVCGQZVZBZHDTYLJTHROIFIEDYFAFUAMPTRRENZKJWYSWKYBXMGXVELPUCHKLYTYTDTQHFQILGWGOFXBQQNCBUCXBZPRXRIHCCKJWDXMVGYIPUMAOGDHSTVEJBAVVBXOPACVNBOFWMUGNESHSBNBQSGZSLO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.924842053874);
    msg.setSource(42610U);
    msg.setSourceEntity(152U);
    msg.setDestination(24686U);
    msg.setDestinationEntity(251U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.310922235064;
    tmp_msg_0.speed_units = 146U;
    msg.control.set(tmp_msg_0);
    msg.duration = 9959U;
    msg.custom.assign("LQCOTAVEKPCHSOOIVTYXUWZLNEMTTXJQMIVDAARUBAHPSYFIYOLBSEPXEGQFOSYQBBXNCYGTSYWHPLYQVZFMDURYDWWADISBAIIFNTPTEHUCYIMZEMKGBLZALLUNEVWCUTRSSCJZJRXQNJPMHZGLKCYDZKJBLPAQFUGJXBAELMAKXFQDXCZWTFDEDGVHRCJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.45542601214);
    msg.setSource(8648U);
    msg.setSourceEntity(17U);
    msg.setDestination(64465U);
    msg.setDestinationEntity(222U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.0147027048586;
    msg.control.set(tmp_msg_0);
    msg.duration = 2995U;
    msg.custom.assign("OSICZSAHUOUJNIVMGTUSWSLMWVINAOZQKJCF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.978679348278);
    msg.setSource(5063U);
    msg.setSourceEntity(69U);
    msg.setDestination(17773U);
    msg.setDestinationEntity(160U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.691942333232;
    tmp_msg_0.speed_units = 173U;
    msg.control.set(tmp_msg_0);
    msg.duration = 62117U;
    msg.custom.assign("POXNMKAUUBVXFQAMFVWZBVJVQYWHYIJXVUWGENAFZDJXCDLAXDTIYZKIGQGVMPL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.224381639623);
    msg.setSource(1428U);
    msg.setSourceEntity(215U);
    msg.setDestination(52010U);
    msg.setDestinationEntity(103U);
    msg.timeout = 65002U;
    msg.lat = 0.131009779104;
    msg.lon = 0.109171292145;
    msg.z = 0.604220205476;
    msg.z_units = 253U;
    msg.speed = 0.905109041912;
    msg.speed_units = 68U;
    msg.bearing = 0.241661680359;
    msg.cross_angle = 0.927946487716;
    msg.width = 0.421437752583;
    msg.length = 0.636902209379;
    msg.hstep = 0.201249876484;
    msg.coff = 156U;
    msg.alternation = 118U;
    msg.flags = 1U;
    msg.custom.assign("RIQWODQDLCXPNJRTLWKBNENKUVNYRSFHWWXIZUYJKEAKLSGCFGSLTUQCGXENZIORSVJCXSWRHGJZFMYCHMFOZWWODHDLQAIJBMZOV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.760205891482);
    msg.setSource(38603U);
    msg.setSourceEntity(213U);
    msg.setDestination(18360U);
    msg.setDestinationEntity(229U);
    msg.timeout = 6884U;
    msg.lat = 0.162061630791;
    msg.lon = 0.678274849683;
    msg.z = 0.547053829223;
    msg.z_units = 202U;
    msg.speed = 0.147817567405;
    msg.speed_units = 65U;
    msg.bearing = 0.672410357851;
    msg.cross_angle = 0.804705442377;
    msg.width = 0.914681284011;
    msg.length = 0.831949676764;
    msg.hstep = 0.397800810845;
    msg.coff = 90U;
    msg.alternation = 61U;
    msg.flags = 40U;
    msg.custom.assign("NVCXGZYKFDVXXDIBPYWNIWQUUJBETLLGKGHUFEYNTWDSRIQKPYEOLMAVGCBANQLALEZUUCHJVKXBGZUHXWFWOTYXJNOBEUGTWRKNYPEMNNCDFTQLZKCMIZHKOMRVSCDRLGYLOHVBSYLPSPFAVTYERMIOFQAJKWVAMMBARAI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.619041408327);
    msg.setSource(42598U);
    msg.setSourceEntity(200U);
    msg.setDestination(36969U);
    msg.setDestinationEntity(228U);
    msg.timeout = 56023U;
    msg.lat = 0.310795848847;
    msg.lon = 0.108222559901;
    msg.z = 0.0900987520056;
    msg.z_units = 151U;
    msg.speed = 0.498226180383;
    msg.speed_units = 60U;
    msg.bearing = 0.139636426466;
    msg.cross_angle = 0.962048727307;
    msg.width = 0.0508439820365;
    msg.length = 0.391396283734;
    msg.hstep = 0.656336329928;
    msg.coff = 67U;
    msg.alternation = 141U;
    msg.flags = 22U;
    msg.custom.assign("ESZVIDLVHWNSIHLQGROIEDTZNBBWTLNTPCKBLHUUJWSCAUOJRYOOAQPLQGVHOMDVJBPQPXBLZWSWBSXHWTVYFMTOMXIS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.849385205524);
    msg.setSource(46090U);
    msg.setSourceEntity(138U);
    msg.setDestination(37733U);
    msg.setDestinationEntity(222U);
    msg.timeout = 23827U;
    msg.lat = 0.0234507768625;
    msg.lon = 0.742000998115;
    msg.z = 0.181386522798;
    msg.z_units = 179U;
    msg.speed = 0.268480446904;
    msg.speed_units = 193U;
    msg.custom.assign("POYUCFUWSNSPGDGKQLGUGGCTMZEYOFFHDIHBQSCSZWOWVQFJLPJWFZEKZLKQHONCEUMQVZYSRPEJJQGN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.286790745051);
    msg.setSource(37203U);
    msg.setSourceEntity(145U);
    msg.setDestination(38362U);
    msg.setDestinationEntity(225U);
    msg.timeout = 17548U;
    msg.lat = 0.470008967711;
    msg.lon = 0.257278695343;
    msg.z = 0.369157509165;
    msg.z_units = 236U;
    msg.speed = 0.450138646937;
    msg.speed_units = 83U;
    msg.custom.assign("OUEVLDQGVYCMJEGPUNJJQQYJKOVDVOGFQDKFUXCKXIJHZJFMBYKRLGPFWUDRPBAGAEREISNENZICXWPQRZMTAXKTXTFIHAPKCSLKZBUQVGWITPLFRMITYHYAZASEJMAUOQP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.158276591208);
    msg.setSource(47761U);
    msg.setSourceEntity(117U);
    msg.setDestination(32223U);
    msg.setDestinationEntity(157U);
    msg.timeout = 24392U;
    msg.lat = 0.618885759418;
    msg.lon = 0.653419528165;
    msg.z = 0.812137584431;
    msg.z_units = 196U;
    msg.speed = 0.791013602327;
    msg.speed_units = 158U;
    msg.custom.assign("JECDXZBQLUIMYVYNBRAWGIRRBAEVHIDKYARRSFOKPKMVUZXWFGNTKUBNXLQSEFBLFZRAQWBCDXZLNUOGSNAODCWOECDGDPWLRPSYHJSXLJSOJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.561712815258);
    msg.setSource(48692U);
    msg.setSourceEntity(115U);
    msg.setDestination(27398U);
    msg.setDestinationEntity(17U);
    msg.x = 0.730407781095;
    msg.y = 0.777516406563;
    msg.z = 0.0683258339354;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.457943491188);
    msg.setSource(41356U);
    msg.setSourceEntity(219U);
    msg.setDestination(36352U);
    msg.setDestinationEntity(121U);
    msg.x = 0.541882690655;
    msg.y = 0.876191499428;
    msg.z = 0.278055148322;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.950152667944);
    msg.setSource(39095U);
    msg.setSourceEntity(35U);
    msg.setDestination(20815U);
    msg.setDestinationEntity(41U);
    msg.x = 0.876629908588;
    msg.y = 0.971906552568;
    msg.z = 0.200456467646;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.994652440821);
    msg.setSource(57953U);
    msg.setSourceEntity(89U);
    msg.setDestination(40317U);
    msg.setDestinationEntity(27U);
    msg.timeout = 46286U;
    msg.lat = 0.532365681363;
    msg.lon = 0.669043403273;
    msg.z = 0.366821700634;
    msg.z_units = 170U;
    msg.amplitude = 0.0261306828012;
    msg.pitch = 0.111939586032;
    msg.speed = 0.559109071932;
    msg.speed_units = 184U;
    msg.custom.assign("ORSODBKXXIOZJJWGBXENHKREAMUJCHHZKHPTOIKXMSDXSOOJKRFKPLZMBOJAZBMAZNNCBWNDVHQIFFEWGZYKELNGQCRGPBWGO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.941746103771);
    msg.setSource(23197U);
    msg.setSourceEntity(168U);
    msg.setDestination(22094U);
    msg.setDestinationEntity(244U);
    msg.timeout = 50224U;
    msg.lat = 0.820070825777;
    msg.lon = 0.373080302394;
    msg.z = 0.0971187697939;
    msg.z_units = 243U;
    msg.amplitude = 0.199346639937;
    msg.pitch = 0.786608235359;
    msg.speed = 0.333006539339;
    msg.speed_units = 211U;
    msg.custom.assign("DCTZKJERLJRMTDWYDLIJQXAUQJPEKVVMYTPWUYFISXHPHVUVSFECMYJGPAQCSWGYKXNFHGGHQWQORIPXUZOQYACGKSPCRBWEAUEBTINZYWUBVUKNNKRCJMKWMCVNBZQPRMOZKWHORBHAABMEJFLLMTSXCXPWBAQSFBGIIUQDOZLRVHUOPBFDLSDVNGEKTPAWDEQYNNVZTHHOGIROLODOAXIH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.12085052727);
    msg.setSource(50018U);
    msg.setSourceEntity(149U);
    msg.setDestination(11936U);
    msg.setDestinationEntity(143U);
    msg.timeout = 13432U;
    msg.lat = 0.562953895686;
    msg.lon = 0.798038603166;
    msg.z = 0.353101175323;
    msg.z_units = 201U;
    msg.amplitude = 0.914777157721;
    msg.pitch = 0.729585419087;
    msg.speed = 0.98429753197;
    msg.speed_units = 0U;
    msg.custom.assign("SQCIYTRSLSHKZEJNWABIVDYOCLYFTKQKDJUNZJUEWPAYWEXCKHIGBFHXQFMDTNCNRYEIWUVAEPOVZFPOGNMHEDQFLCUGIJGBMMSPXDLMHVPZKUPJXAJZBJVICBOHSHABCROWOHWXOKRLLERMDGTTIXSYEAJGQWRGQXSZDJUYFAXPQOASMBGZAUPODFLPF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.0798546003098);
    msg.setSource(16317U);
    msg.setSourceEntity(97U);
    msg.setDestination(53481U);
    msg.setDestinationEntity(38U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.301177197682);
    msg.setSource(3385U);
    msg.setSourceEntity(62U);
    msg.setDestination(53696U);
    msg.setDestinationEntity(1U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.873236382092);
    msg.setSource(31723U);
    msg.setSourceEntity(200U);
    msg.setDestination(21204U);
    msg.setDestinationEntity(174U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.189304673919);
    msg.setSource(923U);
    msg.setSourceEntity(161U);
    msg.setDestination(8044U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.650471828132;
    msg.lon = 0.401191824645;
    msg.z = 0.304549781282;
    msg.z_units = 126U;
    msg.radius = 0.983309921154;
    msg.duration = 1392U;
    msg.speed = 0.618744719933;
    msg.speed_units = 196U;
    msg.custom.assign("FECTNTBKREIIMVDLSSHNCBANWHBTHCIB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.0937972773921);
    msg.setSource(50580U);
    msg.setSourceEntity(191U);
    msg.setDestination(3376U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.917980391252;
    msg.lon = 0.587029325061;
    msg.z = 0.473325391167;
    msg.z_units = 52U;
    msg.radius = 0.82161790374;
    msg.duration = 39724U;
    msg.speed = 0.821756799018;
    msg.speed_units = 97U;
    msg.custom.assign("PELFAAGCCEOPUUSALPPUMUTDLVRQXHZGIWIMQWXOGVDHBDWLSVIVTHYQNBNWKWNHFNJCNOWSJZKYTXQBTMITYSOSDJZHRAYSXFEEVKOGOVNDYPICMRTLXPFMFNWIVFOINYKCRPUKZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.989083248113);
    msg.setSource(30965U);
    msg.setSourceEntity(253U);
    msg.setDestination(2690U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.164478661559;
    msg.lon = 0.654490384764;
    msg.z = 0.934744695595;
    msg.z_units = 47U;
    msg.radius = 0.252366353351;
    msg.duration = 23635U;
    msg.speed = 0.410712488615;
    msg.speed_units = 16U;
    msg.custom.assign("XBISUFPXPZSMFROLJOZUQLHGVRGNXCVWV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.96466281758);
    msg.setSource(56470U);
    msg.setSourceEntity(110U);
    msg.setDestination(42470U);
    msg.setDestinationEntity(153U);
    msg.timeout = 29713U;
    msg.flags = 167U;
    msg.lat = 0.406067333476;
    msg.lon = 0.835481696741;
    msg.start_z = 0.393210263673;
    msg.start_z_units = 133U;
    msg.end_z = 0.931094580952;
    msg.end_z_units = 115U;
    msg.radius = 0.863229392892;
    msg.speed = 0.206250459037;
    msg.speed_units = 188U;
    msg.custom.assign("IYMTWULRUGBCDVJZWYESAYZAWZVIGAFAOXYDDZABSPMNQMKHCRLCJBJFJDWBXKMSVKOPDEVMPFTJDVWHOXCAPNZXZKIHTIXUYGDGHXORGDXFTNFQYBLRMAQQIYLHTFJEUBVWKHS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.126242139869);
    msg.setSource(57459U);
    msg.setSourceEntity(108U);
    msg.setDestination(54583U);
    msg.setDestinationEntity(22U);
    msg.timeout = 624U;
    msg.flags = 5U;
    msg.lat = 0.426262144917;
    msg.lon = 0.647116108517;
    msg.start_z = 0.786816986821;
    msg.start_z_units = 133U;
    msg.end_z = 0.107863328867;
    msg.end_z_units = 6U;
    msg.radius = 0.631399503984;
    msg.speed = 0.035143913602;
    msg.speed_units = 236U;
    msg.custom.assign("IVWKAZLCOZBJJYPUXKJWWHCGJJYMNFBQVCURLIPRLKCPLSZVDQUDAWAALCVHPSNRHSGLSDIASWEBEIXGPRDTWGTOVNNMV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.746805872726);
    msg.setSource(10219U);
    msg.setSourceEntity(188U);
    msg.setDestination(39678U);
    msg.setDestinationEntity(95U);
    msg.timeout = 17949U;
    msg.flags = 37U;
    msg.lat = 0.959133846723;
    msg.lon = 0.759984755768;
    msg.start_z = 0.298410644926;
    msg.start_z_units = 9U;
    msg.end_z = 0.484928226834;
    msg.end_z_units = 185U;
    msg.radius = 0.706346155344;
    msg.speed = 0.101802949396;
    msg.speed_units = 182U;
    msg.custom.assign("MHNIOTJMXFBCEMVWBIAZPDNAREOYQTJHINYWHNBDKLJKMM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.881021076964);
    msg.setSource(25322U);
    msg.setSourceEntity(244U);
    msg.setDestination(35374U);
    msg.setDestinationEntity(62U);
    msg.timeout = 59987U;
    msg.lat = 0.516732708948;
    msg.lon = 0.434909306233;
    msg.z = 0.660638772477;
    msg.z_units = 100U;
    msg.speed = 0.414034348772;
    msg.speed_units = 97U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.229807634535;
    tmp_msg_0.y = 0.42550766635;
    tmp_msg_0.z = 0.519039068513;
    tmp_msg_0.t = 0.299724105442;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TRJCWUELOTURQVAYSNXFPUHBTEWMKBJLWIZXRDESKHRSAKYVAGMTOWLFECMLRIJLZUEWIVZNIMIQBTGANTJHFNHXZCBUCZMQBQFIYSQQADUVCOZXMIWYMQBZMGPLWUCBPJRTSYOCWJXOUOHLEEBLNGTIDGDKJGXOHEPPYUJVYKCLTCSGXDWIBKWYPAODPAFHKPAVZPHMNKXLDKUCPNGSAGZXVQDFN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.891618162394);
    msg.setSource(28105U);
    msg.setSourceEntity(173U);
    msg.setDestination(59527U);
    msg.setDestinationEntity(211U);
    msg.timeout = 65353U;
    msg.lat = 0.723786260722;
    msg.lon = 0.0552511960634;
    msg.z = 0.433820791454;
    msg.z_units = 139U;
    msg.speed = 0.399653034216;
    msg.speed_units = 36U;
    msg.custom.assign("ACHDQHQBYDCMBLOUGPNVDIREVEKGVZAXIACFKJCBTSNEVTVZSIRXJKQOUUOCYDTPSPLQWBHSQWZBTOZQIWUEUPFACXYKRODDRXBADCWFAPUBYMVXGHXUIOJIJLYZNHUKNSMVHTJMYKHWYP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.324982552827);
    msg.setSource(19265U);
    msg.setSourceEntity(85U);
    msg.setDestination(49738U);
    msg.setDestinationEntity(88U);
    msg.timeout = 50670U;
    msg.lat = 0.410249912229;
    msg.lon = 0.83602057816;
    msg.z = 0.160863377662;
    msg.z_units = 242U;
    msg.speed = 0.998564035183;
    msg.speed_units = 123U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.901295836167;
    tmp_msg_0.y = 0.0408688698668;
    tmp_msg_0.z = 0.174581368458;
    tmp_msg_0.t = 0.211834914187;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VYEPLAUJINZOODVRRPQBURDDUJAJORBWKRPKYDTLFSXIBNJXYCAMBGXTJUZGJBILFBSKBLFVUAKMNMVHEQGANAEETTWLRVWRYSOWBKQRPQYGHWDMSSUMDBDAWJKEJKO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.0516221964082);
    msg.setSource(58985U);
    msg.setSourceEntity(84U);
    msg.setDestination(33878U);
    msg.setDestinationEntity(81U);
    msg.x = 0.045125616287;
    msg.y = 0.916589319264;
    msg.z = 0.131881706955;
    msg.t = 0.357499280084;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.294932519469);
    msg.setSource(12018U);
    msg.setSourceEntity(56U);
    msg.setDestination(22372U);
    msg.setDestinationEntity(50U);
    msg.x = 0.44307959424;
    msg.y = 0.651883568437;
    msg.z = 0.655001000695;
    msg.t = 0.286368396387;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.743032048798);
    msg.setSource(38251U);
    msg.setSourceEntity(41U);
    msg.setDestination(7283U);
    msg.setDestinationEntity(9U);
    msg.x = 0.141007362077;
    msg.y = 0.095861577181;
    msg.z = 0.688777823947;
    msg.t = 0.180589496855;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.736587638942);
    msg.setSource(21215U);
    msg.setSourceEntity(1U);
    msg.setDestination(57224U);
    msg.setDestinationEntity(196U);
    msg.timeout = 33264U;
    msg.name.assign("RDWOPIULZANJQWPCRTMIULFIXYPOPHSACKNYHMDQEBZWUVSZCAOBEZNVVVRTVGYVFKYIGEWXKMCCSDKRYRHSBH");
    msg.custom.assign("OJSZXEUHZIL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.913335924359);
    msg.setSource(63318U);
    msg.setSourceEntity(171U);
    msg.setDestination(29744U);
    msg.setDestinationEntity(77U);
    msg.timeout = 19119U;
    msg.name.assign("QCPCAJKNVXEHNMONZMSFNLMBTFWOXOBTPNZZRIISAGBZNDLPKZNIWTAUBCVMDFRUSSYOZWRQOUMYUARTHAVJAXPOCBPWFXSRZFGLPWVEQTSPTQAXIODICJHBODREHGCPWYMCIUUYDMWUMUEEHMFQETLKTYOXLJEEFGZEQLRRSBFXPKACFZVQ");
    msg.custom.assign("VGIOVRKEVSHDRWDXWLYLOINPHIWCIUOETIXAAFKUFFMJUKJWLPGNYUMKXGSCHBJAJZWHIPMBEFJXFZCYBXQYUDHTLVYAQUIWSNLVHLUVERTBGQCPFMGRMBSWDJSNZLTPRVAOBTQDEAOICRFAAJSZV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.152956247681);
    msg.setSource(23149U);
    msg.setSourceEntity(208U);
    msg.setDestination(33181U);
    msg.setDestinationEntity(168U);
    msg.timeout = 54550U;
    msg.name.assign("OLXNTTARRPWDXALQDPRPNMGZGOJCBNOFSNZVCVMJEPKREMIITPUNBUNKWRTTSMYFJQYZCEXQOPBGDBCWURWCWITFAHMLHIWKCSKZMGHXYCJQQEKYUQBROVVGQKBVZDJOHMGICYQFLXIZTOSDVXEHEPBUSEDLBCKHIIXMLSDJYDKRYEVOESLQXSYLTWPQIUZWEHIXMUJYLUDJWBXDZGHNGAAPVAZCKNAYVFJWFTLNJFSZHH");
    msg.custom.assign("JQCEYCONYCWWNVMLAXODTPFXOAHMIHNRMBSIPWGHYFAAPNSFVAOVXQEPJJSJTMEVSSRZNMFUMMVOHWAHLUKKUUKDEKKGOLFZQPKIYJPAFPIDCQAHMLZMUIEWOBCRWGVVBCLIQUBQVBDXCQIUWXUMWDFDGCRSBQVOPLJOG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.970296187374);
    msg.setSource(25565U);
    msg.setSourceEntity(166U);
    msg.setDestination(57385U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.702799140572;
    msg.lon = 0.834625396974;
    msg.z = 0.130796812279;
    msg.z_units = 30U;
    msg.speed = 0.207176561707;
    msg.speed_units = 197U;
    msg.start_time = 0.00620851844925;
    msg.custom.assign("JZVEABMXTDDNUUKCVPDFLHDIRZGWMAZFFGQRYRMSLFVHTJVPFIJMOKQOYBWCFZYVVNKZBAHELAXTCJPSQEYCDEAIZUOEPDGSSJBMRKXDNQTYPTQBMOIHOHGGSGXIWRLDLUVIOGRUUBYOKEZMJSOSPWPDBWNYDJAWHVPYUITXOCNTFLXTMJWQGSHFCYEGZXWLCWAFKIUENKQHTYKNWJROAALQPNNHBELFTCQXUEMHS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.0484337743785);
    msg.setSource(22302U);
    msg.setSourceEntity(185U);
    msg.setDestination(50860U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.612052015613;
    msg.lon = 0.00389810068697;
    msg.z = 0.81802075385;
    msg.z_units = 27U;
    msg.speed = 0.764556026485;
    msg.speed_units = 114U;
    msg.start_time = 0.224311017562;
    msg.custom.assign("WECQYOFOYAHKOCHIDFAWHQSTURQWMGMRUQQHJROMCXHCRIEKLSINZOEETPFPUSJCAXXHAFAXIPYYSUHGGWKJZIDPPEHFZYJDRVLBZBIJVXTHRUKNEBTWLUHLFXQXLAUZLTIVDFNMWGCEKWDNBBYNOPBNQJGBCXVNPODVXZQDFKDSNJVQTGXNVKYPWDJWIOSSIPJMEAKAYODKVYUCMCTUILBFEUQTVWMZPMTSZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.842825702466);
    msg.setSource(18752U);
    msg.setSourceEntity(44U);
    msg.setDestination(45315U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.212632140983;
    msg.lon = 0.553730968725;
    msg.z = 0.0745835210814;
    msg.z_units = 25U;
    msg.speed = 0.486197850671;
    msg.speed_units = 27U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.584269926269;
    tmp_msg_0.y = 0.90714048578;
    tmp_msg_0.z = 0.0508820195946;
    tmp_msg_0.t = 0.781511376639;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.103939556913;
    msg.custom.assign("ZAERRBKMWFIRIMPSJXSQAQFHXFDYJPHVVIHHXVRFRLDJERNCJMRQEQYWPXGETTONLQPYSHBERIGVMNLAFCTXTMSVBCKBYDDILGKQFYWYWZOAJXHUTNOBWWQFIMUCLKKPGEWSBYKOQMZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.378338934822);
    msg.setSource(21257U);
    msg.setSourceEntity(71U);
    msg.setDestination(31263U);
    msg.setDestinationEntity(138U);
    msg.vid = 55070U;
    msg.off_x = 0.406427569626;
    msg.off_y = 0.142610885673;
    msg.off_z = 0.848246149579;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.392247946083);
    msg.setSource(541U);
    msg.setSourceEntity(82U);
    msg.setDestination(20096U);
    msg.setDestinationEntity(135U);
    msg.vid = 59479U;
    msg.off_x = 0.978411430845;
    msg.off_y = 0.896503784217;
    msg.off_z = 0.290442085773;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.911037406861);
    msg.setSource(57992U);
    msg.setSourceEntity(237U);
    msg.setDestination(47041U);
    msg.setDestinationEntity(11U);
    msg.vid = 28174U;
    msg.off_x = 0.355065205954;
    msg.off_y = 0.205726636326;
    msg.off_z = 0.7545581278;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.354196641064);
    msg.setSource(1337U);
    msg.setSourceEntity(133U);
    msg.setDestination(7155U);
    msg.setDestinationEntity(216U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.983873347081);
    msg.setSource(18687U);
    msg.setSourceEntity(219U);
    msg.setDestination(16745U);
    msg.setDestinationEntity(70U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.734543847314);
    msg.setSource(15389U);
    msg.setSourceEntity(195U);
    msg.setDestination(58925U);
    msg.setDestinationEntity(248U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.116952379506);
    msg.setSource(58754U);
    msg.setSourceEntity(214U);
    msg.setDestination(16694U);
    msg.setDestinationEntity(155U);
    msg.mid = 41957U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.230712475145);
    msg.setSource(43033U);
    msg.setSourceEntity(61U);
    msg.setDestination(64846U);
    msg.setDestinationEntity(164U);
    msg.mid = 35973U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.222616364238);
    msg.setSource(36045U);
    msg.setSourceEntity(100U);
    msg.setDestination(25807U);
    msg.setDestinationEntity(82U);
    msg.mid = 46835U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.868742270905);
    msg.setSource(26596U);
    msg.setSourceEntity(149U);
    msg.setDestination(19949U);
    msg.setDestinationEntity(48U);
    msg.state = 91U;
    msg.eta = 4294U;
    msg.info.assign("URRALOJGFWIKXELXQPMXYYTIVRPAATLMJXPZNXIALBUDEGCMFQURCYAUTJTGCZVHMRDIUINLHFMPQBPHGCVVHCFNWBSCFYWNXZFVIIGJNSNNUVYTCKOGNZAIUZATYHJWGSRGHOJPQHLITZEUZDEQV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.0215231946447);
    msg.setSource(45423U);
    msg.setSourceEntity(233U);
    msg.setDestination(19919U);
    msg.setDestinationEntity(110U);
    msg.state = 101U;
    msg.eta = 42127U;
    msg.info.assign("OPMBLRDHHPMDZZDLVOYUJISCKQMUFAHKHCRKVTNHMFWXZEBCZRWMRWWGDSPTHPIHYCUXROUQEATRXUDBJKIYCJPTGLKYLGAIBAOEKOVMLBMKNDVTGWNCTYYZCZFFUUSWYAYGWASXZCVLEMKOKYQWVGTXBEAVOOVTMNIGVUOHJDPXBZENIJAIIUENXYZQEPNEXFHBGSXCBQCFK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.149444237179);
    msg.setSource(45796U);
    msg.setSourceEntity(5U);
    msg.setDestination(10037U);
    msg.setDestinationEntity(250U);
    msg.state = 245U;
    msg.eta = 43181U;
    msg.info.assign("WJTNSZIAWRHBZADMVLZLQBNWQTCBGDCODQNJUKMCXNVKFXGSUQIHYEDLALYAEMWWLNHDPKORVSXFQGQKYYLFBVVJIFVLRCGFH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.424753400457);
    msg.setSource(19289U);
    msg.setSourceEntity(111U);
    msg.setDestination(55016U);
    msg.setDestinationEntity(120U);
    msg.system = 7042U;
    msg.duration = 500U;
    msg.speed = 0.0206860574074;
    msg.speed_units = 103U;
    msg.x = 0.167577663443;
    msg.y = 0.264712400885;
    msg.z = 0.507801516061;
    msg.z_units = 68U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.140645011004);
    msg.setSource(41322U);
    msg.setSourceEntity(108U);
    msg.setDestination(12167U);
    msg.setDestinationEntity(64U);
    msg.system = 58718U;
    msg.duration = 57443U;
    msg.speed = 0.536480247767;
    msg.speed_units = 104U;
    msg.x = 0.19394102105;
    msg.y = 0.529732658928;
    msg.z = 0.612816918569;
    msg.z_units = 91U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.923475869431);
    msg.setSource(19561U);
    msg.setSourceEntity(155U);
    msg.setDestination(29941U);
    msg.setDestinationEntity(26U);
    msg.system = 64132U;
    msg.duration = 12793U;
    msg.speed = 0.499058575711;
    msg.speed_units = 102U;
    msg.x = 0.790766605807;
    msg.y = 0.209640153459;
    msg.z = 0.108329887475;
    msg.z_units = 122U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.725557052088);
    msg.setSource(36923U);
    msg.setSourceEntity(116U);
    msg.setDestination(61041U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.101990095045;
    msg.lon = 0.179387519399;
    msg.speed = 0.0386951066311;
    msg.speed_units = 25U;
    msg.duration = 29229U;
    msg.sys_a = 65091U;
    msg.sys_b = 40707U;
    msg.move_threshold = 0.753089336114;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.724659407526);
    msg.setSource(5539U);
    msg.setSourceEntity(106U);
    msg.setDestination(12254U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.825786021978;
    msg.lon = 0.0327025172009;
    msg.speed = 0.966291214717;
    msg.speed_units = 248U;
    msg.duration = 41213U;
    msg.sys_a = 18515U;
    msg.sys_b = 27457U;
    msg.move_threshold = 0.304456907115;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.149541417634);
    msg.setSource(25871U);
    msg.setSourceEntity(188U);
    msg.setDestination(6858U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.770279019914;
    msg.lon = 0.427292550085;
    msg.speed = 0.0774981947066;
    msg.speed_units = 22U;
    msg.duration = 51582U;
    msg.sys_a = 26231U;
    msg.sys_b = 35044U;
    msg.move_threshold = 0.63308188147;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.687228340431);
    msg.setSource(9074U);
    msg.setSourceEntity(157U);
    msg.setDestination(2823U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.123127163736;
    msg.lon = 0.239723982461;
    msg.z = 0.626292636019;
    msg.z_units = 63U;
    msg.speed = 0.309468842212;
    msg.speed_units = 167U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.275863105881;
    tmp_msg_0.lon = 0.231220314679;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("SOELMJKAOJWLNTOQRFPXQLQCOXZFQLRZXPSVVHYZJYIIHZAIVFOAQAQHNBYBELAJCBXSPMDHPYLYSTEWQMGCZXKPOCRIWKNJUANQQQRPNMXTPDIOTFCDMEUSBYNCWYGZISHPFVTWNXRSAGMAKEMJJWRNPRYUHHIGBVSOJDZBNVLKVYGEPDFTMINUGMUWZUHCIEBFUDLWZTZEELTUFBUXFDDKTTROMWXUCGHORJYBKVGCGCRVKSBG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.608920101814);
    msg.setSource(23987U);
    msg.setSourceEntity(95U);
    msg.setDestination(41685U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.961833156747;
    msg.lon = 0.0907458839684;
    msg.z = 0.204927292631;
    msg.z_units = 138U;
    msg.speed = 0.891021215837;
    msg.speed_units = 100U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.871322679335;
    tmp_msg_0.lon = 0.431572771944;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("FJPDDSZPJSIBQSPHKTMYQZLAGATKEJEEFKDJTUFJDMDSSRNXNGSEIWOSGCDGZMFGGLCFUAPULKUVIISOOALLWRRNBVVEYNVMESVWCRZYXQFHCQTHBZFQUQZBJAHWARMJCNDBTXWHXRFVR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.671478697364);
    msg.setSource(32236U);
    msg.setSourceEntity(125U);
    msg.setDestination(41442U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.248786798083;
    msg.lon = 0.91780447091;
    msg.z = 0.81191816698;
    msg.z_units = 119U;
    msg.speed = 0.773111183648;
    msg.speed_units = 189U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.775231794736;
    tmp_msg_0.lon = 0.0675638183106;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("BZTSANJURUBNLWSMBICPIRRUKKJMDWYLOPNNJSDSWQOGFZVSMGGAOEPJTUSOEGVNDAQKXGREALVQPLTQVAQNRLZGZAMWVACBMPRKFUEMIEQHEZQFYLJZROLUCURXKVYYMIAYTJDHSHHXWGFBJOZTDHUECYPWEBCBETLDLYBXTCOPFXDQFYDYXKHHSQNFPOWJIRZOXZMIQL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.489834747287);
    msg.setSource(22501U);
    msg.setSourceEntity(99U);
    msg.setDestination(9360U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.47176832595;
    msg.lon = 0.273564564967;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.761551508731);
    msg.setSource(53566U);
    msg.setSourceEntity(205U);
    msg.setDestination(17513U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.279401083086;
    msg.lon = 0.0669104545177;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.786447005782);
    msg.setSource(17939U);
    msg.setSourceEntity(161U);
    msg.setDestination(11032U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.946611241392;
    msg.lon = 0.0286363505824;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.77928892875);
    msg.setSource(11166U);
    msg.setSourceEntity(11U);
    msg.setDestination(7063U);
    msg.setDestinationEntity(122U);
    msg.timeout = 34479U;
    msg.lat = 0.267857310063;
    msg.lon = 0.445082470615;
    msg.z = 0.022022958465;
    msg.z_units = 165U;
    msg.pitch = 0.397446550379;
    msg.amplitude = 0.201233035331;
    msg.duration = 58519U;
    msg.speed = 0.512055890235;
    msg.speed_units = 17U;
    msg.radius = 0.958887166478;
    msg.direction = 177U;
    msg.custom.assign("ZNWHTRKZCUMTTYWFYPQHJZJUMTWBOPXNNAYHMSFVHKRIDQJZUE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.572084016967);
    msg.setSource(39926U);
    msg.setSourceEntity(149U);
    msg.setDestination(57785U);
    msg.setDestinationEntity(83U);
    msg.timeout = 50728U;
    msg.lat = 0.741184196807;
    msg.lon = 0.933806513392;
    msg.z = 0.259632508384;
    msg.z_units = 115U;
    msg.pitch = 0.47580406918;
    msg.amplitude = 0.234430799346;
    msg.duration = 27478U;
    msg.speed = 0.759350746798;
    msg.speed_units = 206U;
    msg.radius = 0.796125736626;
    msg.direction = 166U;
    msg.custom.assign("ONDWZGXMRGJJOEIJABOWXPIHTGXQFLETIBFGSJJVOKWCCVTGHMFBEQPIBCCBHNDUBXRVKQBPNUVOKVTYTPVLQFLRQBNXCPHGMPNDONRROJCDLKULC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.482654622452);
    msg.setSource(31238U);
    msg.setSourceEntity(56U);
    msg.setDestination(32732U);
    msg.setDestinationEntity(31U);
    msg.timeout = 21115U;
    msg.lat = 0.254378813846;
    msg.lon = 0.975862936666;
    msg.z = 0.624815221629;
    msg.z_units = 183U;
    msg.pitch = 0.767356746396;
    msg.amplitude = 0.0641513712413;
    msg.duration = 52070U;
    msg.speed = 0.718142433698;
    msg.speed_units = 206U;
    msg.radius = 0.74341094741;
    msg.direction = 168U;
    msg.custom.assign("UYXOJIFLOJZMPWHYSJRKDHEXIVRIDRKLQMZWFKYHZEOJQOBMYIKEEPBOGKSFBLLFDCWOYHMHCVOTBNLQZWZFJLTCTAISJDAKHGGBMMUASDFGVZEHSGFNCQCYXNANIVDZDXPSSKXXQTAEUGBGPVSCAIHVOCRRYAUCFJHUKOVVXZPGFYRNQBTRBMSXABRKIUHUVITGUCIWNMLZAWWQNNARQGUJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.113304306629);
    msg.setSource(2332U);
    msg.setSourceEntity(251U);
    msg.setDestination(38763U);
    msg.setDestinationEntity(113U);
    msg.formation_name.assign("OVWEIZKCBQFYQKUODOGXRVHJBDSQFICNQNBUUJGUSSYQHYPXOEQLFSFNKJTMTGVBZWXPZJCLRIPNJRPUDMCHMGWKPOGGJAKSMVVSHQTDDVWMHZCXIXTJCHDWKYLJTTZXMRELXKTCMIMZYKZ");
    msg.reference_frame = 95U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 45359U;
    tmp_msg_0.off_x = 0.0685070928618;
    tmp_msg_0.off_y = 0.0637378442536;
    tmp_msg_0.off_z = 0.000935908050433;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("EBSEGEMCVNPURMOTNIJAWFGHRAFOUAQTJKAXZQNLWKKOGBKUMXDMDYRLHYTICMMYPANYYGVEHZDSGVOOEDFZGFGCCSYHCKDORBDPIHFQYULPUIKTEJRGRITFCZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.158136437734);
    msg.setSource(3074U);
    msg.setSourceEntity(21U);
    msg.setDestination(52576U);
    msg.setDestinationEntity(182U);
    msg.formation_name.assign("SEKLCLQGNHJQGJ");
    msg.reference_frame = 113U;
    msg.custom.assign("XEPCWMKNZFXGZTYQYRPLVQDEULMIMXYYDCEBEKSLSWRKIJYWNRUQEJHLQGMMJRDSUGXUOILLLOFXQBUQZNPGZAKVZJXHWSYPJAUCORTNINWFYDRANFEHFFODAGFRWYPINDLTDQBXWSNPVNJIPROGZBOVKBPKGTJSBDYJDTQJEZWICVOBAJPXLMKCUFX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.457049158367);
    msg.setSource(44547U);
    msg.setSourceEntity(80U);
    msg.setDestination(56657U);
    msg.setDestinationEntity(73U);
    msg.formation_name.assign("SPINTGCMCLAFHXQJYTFORDIBOJCNSHPNPSLKZBLWSWZYHXXZEESMRKZMRCMQISNZIJLNVJZDVSRNIUPOFNAHEPUBFKEYJQCWDNFBYAWLGMDPDQBWJBMKUQXDPCTVYYOHFGBETVSECREUCIBSHEVWVORQVXHLDOZBCSRMZQAWUQHXTXKWAVGKN");
    msg.reference_frame = 124U;
    msg.custom.assign("SDUXADQPORNWICQVYBDJIRKRHHUSABEVFWWCQWGSEGRZGADRSIGVFWIJTSBZJJTCZLQJBXKXAYDHFOEGZCEKXALKLQNSIHMPIPRBOHOMUZEYMEZLNCYUDIZUV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.455805800191);
    msg.setSource(58006U);
    msg.setSourceEntity(219U);
    msg.setDestination(64237U);
    msg.setDestinationEntity(94U);
    msg.group_name.assign("NKIBOSXWYGLNBXMASQQJLFRSMGMDHCBNVWSOQLWLZUYHDPSUFTAHMEFWJEPFMRINAKUJEGQJAGFUIRMWVSPQJTVFQRWSUOAMCIQXOXSEKRWCGZZKVMNKLYUZYPVHKHRNZCZOLWNTMJOTCUDXDZOYYZYNGEKCXAOHPRAETRVGJXPMBTQVESVVBBUHKDOFIZAJIGBLXCQBWAGI");
    msg.formation_name.assign("TXFQZUMEIZGWZWICJVJKLYEZBDBIGJRVFUUMOQHHLBSXSWLPTCXADZPLMSDNTDONGMMYUYKXWKQYMRBOHOFVOPDOARDFQECNHZRDRIWJRIRKZBOSFUXPANVKNPAJSGLXGLKNIUFIWKXQPLJGBHUEAOGJYUJVPQSVHEMIQWZGNTLMNHQQZPIWRHTFQYCZEBAA");
    msg.plan_id.assign("QRAGBVZRSYUEZPECLZCJKQFDICTGJXUSGPWIXPOSAINTTVDQXKQQMZDEVNDIWARLYLKFTYQJOJPJBCJRQYPUIOMWAEGBGXVECMTRGHCNKABIFYPEABQYNNGKVLHMCOMCXBZRVSALHOCMYXSVEISAOIHKBYNOEFAPURDWFUKSULLHRBSUTOGKEZNYTNBJZFTKEDMR");
    msg.description.assign("OUZOFWKBBROYLGMTLOGLYZQWKTKHTLPUSNAWUIBXASDMVFAMTCZNPTWPNZYTXYTYVXQAWRVCUTJOVTOYHFEBLGGFEKYZBYFZZRIRPKQQPWMWHPDZLIDOFBSVEYAIVNEAKGDAKHIFCFSPLKWDJTUNEREIQCFQSMCHHYICDQVCBVCOHGLOVIJHPMGSHNGU");
    msg.leader_speed = 0.0900377784226;
    msg.leader_bank_lim = 0.448817674088;
    msg.pos_sim_err_lim = 0.514908993893;
    msg.pos_sim_err_wrn = 0.789693147441;
    msg.pos_sim_err_timeout = 43847U;
    msg.converg_max = 0.0219190742008;
    msg.converg_timeout = 17186U;
    msg.comms_timeout = 15114U;
    msg.turb_lim = 0.671151203831;
    msg.custom.assign("FKDPPOKYCXQGSOPHCSMFRJZTMQMFSABFYBWPCRJZZDUYAXWBKEZVZXWQABEVFUXWWCDOSQJPYNGJLRGRWSCEHVQLSYGFPQATTBAXLQQPOQMECUIEGZDJCIVHEXIHNCRWVFLZILPYVGJR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.937411776347);
    msg.setSource(18915U);
    msg.setSourceEntity(9U);
    msg.setDestination(35258U);
    msg.setDestinationEntity(93U);
    msg.group_name.assign("MFIKDQEWCQHAJKAYJYRHRCZFNMEQOXQTHMSNIKBEPJPCFAZQZHLUDONDGCWULWI");
    msg.formation_name.assign("IICLYLCFXGFDUOUQIDRJGRWXLXKZWVQHXDEHPYRAYQSKJDWHZKUJTQKGBRHBYZOQFRUZUGGCXWIIRJGYCKFABTNVKRTCZIPABWTNWEHXAWZSULLMTCGOYFBBSVWSXOTVOLXSJCBVTKHJYJOYBFDRNTMLDRSPLVFIZSYDTIEJQDPQGFLNNGMJAMAPAGMINPMKPMFTMOBUXAHZUMJZVEQUCEAR");
    msg.plan_id.assign("BXHKQHNEZEPZAWBXSRVGEAJTUQYJSXRFJDVMXHYUDOAYCUWXJXBXOZ");
    msg.description.assign("DHWGGLTILRGSZQIRZBJEXRNETXMAPSWXFVBCVSCYUGIYBPCSNENZIHQHF");
    msg.leader_speed = 0.307858806452;
    msg.leader_bank_lim = 0.64576927194;
    msg.pos_sim_err_lim = 0.99962540039;
    msg.pos_sim_err_wrn = 0.854706070478;
    msg.pos_sim_err_timeout = 63363U;
    msg.converg_max = 0.340647698214;
    msg.converg_timeout = 36216U;
    msg.comms_timeout = 24320U;
    msg.turb_lim = 0.927460028015;
    msg.custom.assign("ZNHPJXKQCMKMMTSZWOUWGIXRUPAROUOQOXVGILJTYTRDEYXOTLVGHFWZCKIZFXSXFVBLPHMHJKJIREONDSYDJNEBGOKPDVLNGNASTSIAFDLWYPOCGRBJFFSAWDQNPZIZYTMWQVEYHGCVDHPESCKYBZGEXADLPFEUHRABRKJIAFNMHDWQCEYXQTTZCBODJKEUUBNRVFSQBVGEKFWIMLCZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.904455630723);
    msg.setSource(46555U);
    msg.setSourceEntity(110U);
    msg.setDestination(43619U);
    msg.setDestinationEntity(0U);
    msg.group_name.assign("DQJSRAUEZHIORAIRZIAGNXRFZBVZYQLUKCVRFWCZCOHAYQGAEMJROOID");
    msg.formation_name.assign("RALQVHFOZYKWRHJVMMYVSGPCXBDTCANBWNGXVQPIRLITASTDIJZCGUJPWMJDBUZHGCARQHTXUOAXHNH");
    msg.plan_id.assign("ZUXSBOAOUSPKZIMYOASYHQYK");
    msg.description.assign("BGRGMZWAFFFUIFYSLVEAEAIPJHZKXAQVBEKZLKUBQHOGWMIPEFHS");
    msg.leader_speed = 0.430455552266;
    msg.leader_bank_lim = 0.622923052077;
    msg.pos_sim_err_lim = 0.783337833922;
    msg.pos_sim_err_wrn = 0.595450720882;
    msg.pos_sim_err_timeout = 56538U;
    msg.converg_max = 0.85469562263;
    msg.converg_timeout = 56918U;
    msg.comms_timeout = 10773U;
    msg.turb_lim = 0.61024648234;
    msg.custom.assign("TGLMJPNYBUGYSAKHXVWCHLXUMPCEVDOXOIEBTUEBNMYZNMYELXWLHWPMZBPIGLISFJUCSDVJSZSDXJHJQKRSCKOBDTPZPYYQHPEWLVRCOHBWJJFQQRZFUXPQPJSBTMGRATRUSFHGZTHCPEXIULOYGNJWAZVARDOUKXHAIYEEV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.0704872486901);
    msg.setSource(51689U);
    msg.setSourceEntity(11U);
    msg.setDestination(1930U);
    msg.setDestinationEntity(233U);
    msg.control_src = 31095U;
    msg.control_ent = 119U;
    msg.timeout = 0.124357579983;
    msg.loiter_radius = 0.511769405639;
    msg.altitude_interval = 0.782519981368;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.860142932106);
    msg.setSource(29073U);
    msg.setSourceEntity(211U);
    msg.setDestination(35566U);
    msg.setDestinationEntity(73U);
    msg.control_src = 40518U;
    msg.control_ent = 21U;
    msg.timeout = 0.0393229889979;
    msg.loiter_radius = 0.50367729578;
    msg.altitude_interval = 0.247184361168;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.222902179934);
    msg.setSource(1402U);
    msg.setSourceEntity(122U);
    msg.setDestination(17031U);
    msg.setDestinationEntity(83U);
    msg.control_src = 38545U;
    msg.control_ent = 71U;
    msg.timeout = 0.445605003215;
    msg.loiter_radius = 0.952832361603;
    msg.altitude_interval = 0.297586929966;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.17920114004);
    msg.setSource(36424U);
    msg.setSourceEntity(232U);
    msg.setDestination(51014U);
    msg.setDestinationEntity(243U);
    msg.flags = 118U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.220663784823;
    tmp_msg_0.speed_units = 93U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.474339898755;
    tmp_msg_1.z_units = 79U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8328103131;
    msg.lon = 0.117310377834;
    msg.radius = 0.794594426133;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.735183411891);
    msg.setSource(29473U);
    msg.setSourceEntity(65U);
    msg.setDestination(5911U);
    msg.setDestinationEntity(103U);
    msg.flags = 153U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.554564508554;
    tmp_msg_0.speed_units = 105U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0412031045438;
    tmp_msg_1.z_units = 142U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.490483469849;
    msg.lon = 0.899111446789;
    msg.radius = 0.523938046934;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.514697185361);
    msg.setSource(45315U);
    msg.setSourceEntity(238U);
    msg.setDestination(16610U);
    msg.setDestinationEntity(77U);
    msg.flags = 57U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.904240845578;
    tmp_msg_0.speed_units = 133U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.639024010359;
    tmp_msg_1.z_units = 196U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.171629989945;
    msg.lon = 0.34083237761;
    msg.radius = 0.0752767527173;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.866520124828);
    msg.setSource(10600U);
    msg.setSourceEntity(209U);
    msg.setDestination(5998U);
    msg.setDestinationEntity(249U);
    msg.control_src = 9298U;
    msg.control_ent = 213U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 148U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.915636483334;
    tmp_tmp_msg_0_0.speed_units = 226U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.588593481125;
    tmp_tmp_msg_0_1.z_units = 6U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0568176964268;
    tmp_msg_0.lon = 0.0639589863104;
    tmp_msg_0.radius = 0.986428483267;
    msg.reference.set(tmp_msg_0);
    msg.state = 120U;
    msg.proximity = 231U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.102823909303);
    msg.setSource(20073U);
    msg.setSourceEntity(71U);
    msg.setDestination(60339U);
    msg.setDestinationEntity(220U);
    msg.control_src = 24613U;
    msg.control_ent = 186U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 181U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.188526855458;
    tmp_tmp_msg_0_0.speed_units = 160U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.591828449697;
    tmp_tmp_msg_0_1.z_units = 198U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.786290550011;
    tmp_msg_0.lon = 0.18943852582;
    tmp_msg_0.radius = 0.812817282081;
    msg.reference.set(tmp_msg_0);
    msg.state = 199U;
    msg.proximity = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.865393672629);
    msg.setSource(56898U);
    msg.setSourceEntity(224U);
    msg.setDestination(44558U);
    msg.setDestinationEntity(139U);
    msg.control_src = 29605U;
    msg.control_ent = 226U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 86U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.352096319118;
    tmp_tmp_msg_0_0.speed_units = 203U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.816582372872;
    tmp_tmp_msg_0_1.z_units = 21U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.713221141522;
    tmp_msg_0.lon = 0.274567480642;
    tmp_msg_0.radius = 0.473974550626;
    msg.reference.set(tmp_msg_0);
    msg.state = 203U;
    msg.proximity = 219U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.832384056637);
    msg.setSource(14919U);
    msg.setSourceEntity(106U);
    msg.setDestination(57700U);
    msg.setDestinationEntity(39U);
    msg.ax_cmd = 0.894763551219;
    msg.ay_cmd = 0.168157103802;
    msg.az_cmd = 0.98373165844;
    msg.ax_des = 0.755680959525;
    msg.ay_des = 0.0586665263878;
    msg.az_des = 0.0750997946858;
    msg.virt_err_x = 0.880434962217;
    msg.virt_err_y = 0.642169149964;
    msg.virt_err_z = 0.224730909124;
    msg.surf_fdbk_x = 0.377303766736;
    msg.surf_fdbk_y = 0.578992928666;
    msg.surf_fdbk_z = 0.863410751981;
    msg.surf_unkn_x = 0.377670279635;
    msg.surf_unkn_y = 0.860821398249;
    msg.surf_unkn_z = 0.759464876743;
    msg.ss_x = 0.0371194645083;
    msg.ss_y = 0.438950273691;
    msg.ss_z = 0.271170499154;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("XRRBXTEPBGJDAFFUGMCXOOAPNOBHFNDYNEATCIYDBOMZRPGZTHDHWSOJVXIXRHPESTEGVWKMIKZISPBBJOJHZIFEYOWHRFJZKIURGVULMWCLNJYSFTCBCMRQTQNZUU");
    tmp_msg_0.dist = 0.779325160047;
    tmp_msg_0.err = 0.454137164874;
    tmp_msg_0.ctrl_imp = 0.283116676865;
    tmp_msg_0.rel_dir_x = 0.269415100644;
    tmp_msg_0.rel_dir_y = 0.16730856426;
    tmp_msg_0.rel_dir_z = 0.601990501559;
    tmp_msg_0.err_x = 0.559999068959;
    tmp_msg_0.err_y = 0.223703297482;
    tmp_msg_0.err_z = 0.269268641131;
    tmp_msg_0.rf_err_x = 0.521501767316;
    tmp_msg_0.rf_err_y = 0.402204555349;
    tmp_msg_0.rf_err_z = 0.958456964275;
    tmp_msg_0.rf_err_vx = 0.427426132121;
    tmp_msg_0.rf_err_vy = 0.77357536818;
    tmp_msg_0.rf_err_vz = 0.278945916571;
    tmp_msg_0.ss_x = 0.762381171702;
    tmp_msg_0.ss_y = 0.587406931184;
    tmp_msg_0.ss_z = 0.683390088731;
    tmp_msg_0.virt_err_x = 0.350056456314;
    tmp_msg_0.virt_err_y = 0.129853830057;
    tmp_msg_0.virt_err_z = 0.110931074209;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.179676081853);
    msg.setSource(25828U);
    msg.setSourceEntity(132U);
    msg.setDestination(12918U);
    msg.setDestinationEntity(63U);
    msg.ax_cmd = 0.161801604286;
    msg.ay_cmd = 0.481693193718;
    msg.az_cmd = 0.368508010546;
    msg.ax_des = 0.899542359827;
    msg.ay_des = 0.656009618874;
    msg.az_des = 0.270968106364;
    msg.virt_err_x = 0.207934697576;
    msg.virt_err_y = 0.279182884892;
    msg.virt_err_z = 0.105986735521;
    msg.surf_fdbk_x = 0.393042749298;
    msg.surf_fdbk_y = 0.633936859401;
    msg.surf_fdbk_z = 0.070494657913;
    msg.surf_unkn_x = 0.153672199747;
    msg.surf_unkn_y = 0.317000387736;
    msg.surf_unkn_z = 0.442763833122;
    msg.ss_x = 0.0967941287885;
    msg.ss_y = 0.86601930444;
    msg.ss_z = 0.565427044513;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.459530956454);
    msg.setSource(18592U);
    msg.setSourceEntity(160U);
    msg.setDestination(6678U);
    msg.setDestinationEntity(86U);
    msg.ax_cmd = 0.316514725803;
    msg.ay_cmd = 0.427366092392;
    msg.az_cmd = 0.653814072625;
    msg.ax_des = 0.255635652517;
    msg.ay_des = 0.772324142286;
    msg.az_des = 0.167516176049;
    msg.virt_err_x = 0.775921105449;
    msg.virt_err_y = 0.098057445417;
    msg.virt_err_z = 0.957337085852;
    msg.surf_fdbk_x = 0.243250294016;
    msg.surf_fdbk_y = 0.71505935433;
    msg.surf_fdbk_z = 0.949100737515;
    msg.surf_unkn_x = 0.262119963658;
    msg.surf_unkn_y = 0.406512902845;
    msg.surf_unkn_z = 0.221465342924;
    msg.ss_x = 0.895730817886;
    msg.ss_y = 0.628024554291;
    msg.ss_z = 0.696938979226;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("MOWWZCHGDSNDUSZSXGFYPESWRLFBRYKMMPGPESHHAG");
    tmp_msg_0.dist = 0.751683493379;
    tmp_msg_0.err = 0.345815892549;
    tmp_msg_0.ctrl_imp = 0.523739758169;
    tmp_msg_0.rel_dir_x = 0.333542847232;
    tmp_msg_0.rel_dir_y = 0.479533310344;
    tmp_msg_0.rel_dir_z = 0.951351176963;
    tmp_msg_0.err_x = 0.229962492998;
    tmp_msg_0.err_y = 0.478628883518;
    tmp_msg_0.err_z = 0.834704723592;
    tmp_msg_0.rf_err_x = 0.635233442441;
    tmp_msg_0.rf_err_y = 0.41613794078;
    tmp_msg_0.rf_err_z = 0.39864676565;
    tmp_msg_0.rf_err_vx = 0.693330641283;
    tmp_msg_0.rf_err_vy = 0.841222162298;
    tmp_msg_0.rf_err_vz = 0.846028443235;
    tmp_msg_0.ss_x = 0.732487051498;
    tmp_msg_0.ss_y = 0.926742175148;
    tmp_msg_0.ss_z = 0.0209947993272;
    tmp_msg_0.virt_err_x = 0.479722930276;
    tmp_msg_0.virt_err_y = 0.20002577517;
    tmp_msg_0.virt_err_z = 0.888081023924;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.010815029733);
    msg.setSource(18644U);
    msg.setSourceEntity(125U);
    msg.setDestination(11333U);
    msg.setDestinationEntity(68U);
    msg.s_id.assign("MHLZKXSPNNVSSTPBATJDWMZXAKRSHSCMYXDLXNHUTXQJVEKCACQBLDXGTHMEOMFALKUONQWDHNHQWZJHJPBRMJOLMPGJUVYLJXOPNAANOZRIRBVKWVVYZSEDBMHSFTRLGGNYI");
    msg.dist = 0.934613210739;
    msg.err = 0.905272999887;
    msg.ctrl_imp = 0.232147937058;
    msg.rel_dir_x = 0.129708733352;
    msg.rel_dir_y = 0.270494226506;
    msg.rel_dir_z = 0.214744430772;
    msg.err_x = 0.413186281699;
    msg.err_y = 0.81957234498;
    msg.err_z = 0.373546024186;
    msg.rf_err_x = 0.671434287172;
    msg.rf_err_y = 0.91353867547;
    msg.rf_err_z = 0.685303244791;
    msg.rf_err_vx = 0.540741113443;
    msg.rf_err_vy = 0.330049236047;
    msg.rf_err_vz = 0.703733181562;
    msg.ss_x = 0.611430648691;
    msg.ss_y = 0.409384984337;
    msg.ss_z = 0.945359000137;
    msg.virt_err_x = 0.0635855939539;
    msg.virt_err_y = 0.558907565374;
    msg.virt_err_z = 0.219324138029;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.198387500198);
    msg.setSource(8894U);
    msg.setSourceEntity(29U);
    msg.setDestination(10465U);
    msg.setDestinationEntity(101U);
    msg.s_id.assign("VYRMSYKTNDKGDWXMYFDEJFOBPHPULRZGQKTUXYEWZXNIYHABHCCCTCDAVVJZZOERFIQWQUBLEMWWFPFSQNBHMOUHJBJIDAFEKIRMGCSJJQUHNPNJWXPLUUOOQWIVZESIGXXUSHABEKHNZOTNYGORZDPXRBLOWOXTTY");
    msg.dist = 0.667102343176;
    msg.err = 0.509108210408;
    msg.ctrl_imp = 0.160215159391;
    msg.rel_dir_x = 0.127346997862;
    msg.rel_dir_y = 0.651859255016;
    msg.rel_dir_z = 0.539268109373;
    msg.err_x = 0.968121996695;
    msg.err_y = 0.276915716012;
    msg.err_z = 0.375173245723;
    msg.rf_err_x = 0.277061957517;
    msg.rf_err_y = 0.514933022193;
    msg.rf_err_z = 0.40518148967;
    msg.rf_err_vx = 0.982709449038;
    msg.rf_err_vy = 0.161412816739;
    msg.rf_err_vz = 0.506646871192;
    msg.ss_x = 0.968527246118;
    msg.ss_y = 0.439329238275;
    msg.ss_z = 0.816761332969;
    msg.virt_err_x = 0.83761945208;
    msg.virt_err_y = 0.194122909287;
    msg.virt_err_z = 0.856677520901;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.97774608874);
    msg.setSource(40670U);
    msg.setSourceEntity(110U);
    msg.setDestination(34417U);
    msg.setDestinationEntity(94U);
    msg.s_id.assign("VMLTWAKHLVNQSFLPFVIZBQQBEINAXYEMAKKUUGFIDVDAYANGXVSIELAKDHCFBUUDBQEHMNBSXO");
    msg.dist = 0.296707436034;
    msg.err = 0.590268660458;
    msg.ctrl_imp = 0.957029929468;
    msg.rel_dir_x = 0.481958847003;
    msg.rel_dir_y = 0.621233033699;
    msg.rel_dir_z = 0.815247366107;
    msg.err_x = 0.667232351104;
    msg.err_y = 0.215735109275;
    msg.err_z = 0.235720615428;
    msg.rf_err_x = 0.526240635287;
    msg.rf_err_y = 0.146941943822;
    msg.rf_err_z = 0.810275438189;
    msg.rf_err_vx = 0.159570302035;
    msg.rf_err_vy = 0.746156069596;
    msg.rf_err_vz = 0.905597991227;
    msg.ss_x = 0.749469504054;
    msg.ss_y = 0.693398550355;
    msg.ss_z = 0.988886439229;
    msg.virt_err_x = 0.67393291941;
    msg.virt_err_y = 0.133744626717;
    msg.virt_err_z = 0.976877143533;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.62620662859);
    msg.setSource(13544U);
    msg.setSourceEntity(9U);
    msg.setDestination(23098U);
    msg.setDestinationEntity(137U);
    msg.timeout = 53284U;
    msg.rpm = 0.103774065507;
    msg.direction = 69U;
    msg.custom.assign("HREJOXBKPICDGPXQSPCIEZUCHRFDJOAVYCHDNVUTIGUCJYPHRQFKPQBVQDFYIZMNGCCMPLDANTVYMQNTROUQWKSZCUJYPZAZLUUMSFMYJLXAYRRHSTKYKGDRSXSMTSFSOESZEIBCLDAXVFFROFMN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.778843099984);
    msg.setSource(24656U);
    msg.setSourceEntity(120U);
    msg.setDestination(60804U);
    msg.setDestinationEntity(150U);
    msg.timeout = 5278U;
    msg.rpm = 0.266213378039;
    msg.direction = 201U;
    msg.custom.assign("EUDXSJTETWMFIKCSROUCXAMOOVZQLQHKIECRYXBKJFVQHSMCLIXHLHGMWNNXDGBUM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.950113938308);
    msg.setSource(44982U);
    msg.setSourceEntity(111U);
    msg.setDestination(18854U);
    msg.setDestinationEntity(31U);
    msg.timeout = 7113U;
    msg.rpm = 0.527751016931;
    msg.direction = 153U;
    msg.custom.assign("OUNGGGFIJEMTSDALXHRVZSOMAKGHOFXJEMZJOIGPPSBDHBWMLYHOKEQQIZVDSQKUZYLPRCQPRAIARJHJASLAMECUOSNDVMVZXHWZBITNKQEYNYLTBPGOQETECQWTJLKVRIIWVDDWXZCQTXISSMXNYUBKNITLUDFJDLNNYCT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.710281525264);
    msg.setSource(32222U);
    msg.setSourceEntity(171U);
    msg.setDestination(34121U);
    msg.setDestinationEntity(25U);
    msg.formation_name.assign("SQWEGSBKNRIRCFENRPDKOWR");
    msg.type = 149U;
    msg.op = 96U;
    msg.group_name.assign("QGTPCFAIXINLUVXYPYOBXRQTFCVNCFLNUUWEXEHUDTNIGBLFRSPYHUOZGJUITSIMPLZHIMQUKHGMAKZKMQDBGIFEEVRXNNVSBFEBLGWCKPLJMHJVRCCWPZYYMGDWRPJNKDCOMIYSAXOFQOHLHHYVFAPMJITTJXZEKTXGKEZB");
    msg.plan_id.assign("WMTZYJYBKNGNNNRGEVMRTEGVWAKVVMOXPJETFSKCUPRPAYYDHLNHVVSBSZLNXQFRWEXMBGWIWKMAQBFOICSZLCVEZLJRUWZAOSUPMHGMZVVLKAMDCCWOJBQ");
    msg.description.assign("KPCGCLXLWHIAMSAOJSMJXZKVUIINLUMUZWADQYPQZUAVYRBJHWXRESRYGDKKQSBDFNSOZBACFEPINXTBVHYXQSSZOWMFDVJIYOZCQFUEYABWABEREWJAMJVFNPPCUPXUGXDIIOHNZPERQNOGWHRTIVZLEQFDLNOVHGEDBXHNNLEEZGIYKURCUGM");
    msg.reference_frame = 68U;
    msg.leader_bank_lim = 0.862212379499;
    msg.leader_speed_min = 0.143244801013;
    msg.leader_speed_max = 0.448401617587;
    msg.leader_alt_min = 0.0331485829888;
    msg.leader_alt_max = 0.327851168537;
    msg.pos_sim_err_lim = 0.387931287731;
    msg.pos_sim_err_wrn = 0.957448489428;
    msg.pos_sim_err_timeout = 24655U;
    msg.converg_max = 0.329786114473;
    msg.converg_timeout = 16357U;
    msg.comms_timeout = 8028U;
    msg.turb_lim = 0.907802263777;
    msg.custom.assign("TQPHBGOHAXEKMWNLUCHRNNJQZGZNITQXWEGDOZSFUEWXNDYNGBRJXEXSNYVLFZOYTSHYKMVONLHLIBPICJULFUXAP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.748792437494);
    msg.setSource(57572U);
    msg.setSourceEntity(146U);
    msg.setDestination(12244U);
    msg.setDestinationEntity(177U);
    msg.formation_name.assign("CBKKJQJQTZTKECEWJLXOSHMOQYHSNB");
    msg.type = 85U;
    msg.op = 56U;
    msg.group_name.assign("KHTTJPKYDMRQPLNXZPYFRMGSWADZZZGLVBJQNCPNVBICVCXBSNAUKFYEXJUVRXOGHLDWMDLIMLEQXSCGDERKAHZUHISYSCONTTQGMVRLUZBGRGODENJATSOJDEQDRAEOKZSPVZVJHZPTBMKWNXFCEVDCOAGBWTJ");
    msg.plan_id.assign("TLJDYUEDJTYSCXIHCABUQXSGQKXNNHNEXPNQLENHBAOVEVZIHFOSJVZCCLUPBGAJYOPHXZDTMCFZVKMYNWSGTKBRJUISPPGEUOSDWITATDKRTSWFPHWEININGNFOIDIWFLVWGFYDMAQCRFBGKLMOEYUVUXRBAQSJTQLRMRBMZZQCMBYBCCZWRLZZGKRJGCTWRIYOBTMJYFNKXOPLUVEQXMSKOPLVDHHRFKEDPVVZOA");
    msg.description.assign("HYMZYHGPNXBGZDCDPYERGJLUZNAELXXLSALFOHOHAQVIULNFBRVQJKOKZMMFZMWZRSOMZZXOOGSIIIQUMEPFIQHKXBGGAILERDBJSVUIVPCYWWKTIUDEDUGZVCYPJEBWPESNARWAKRXJXSLP");
    msg.reference_frame = 230U;
    msg.leader_bank_lim = 0.71358312666;
    msg.leader_speed_min = 0.951143045876;
    msg.leader_speed_max = 0.912738315199;
    msg.leader_alt_min = 0.557759930189;
    msg.leader_alt_max = 0.679988360854;
    msg.pos_sim_err_lim = 0.686107252589;
    msg.pos_sim_err_wrn = 0.211882057931;
    msg.pos_sim_err_timeout = 25815U;
    msg.converg_max = 0.630194882921;
    msg.converg_timeout = 62342U;
    msg.comms_timeout = 22226U;
    msg.turb_lim = 0.17748702698;
    msg.custom.assign("PZVWARBIGAZSQQVVGSCKXUPFZLJULMRJAQBHEDOMQWXGUZLBYSQBICEYRBAIXNMIJGUVRCUCSXYVOKUSESISJEVYKVMBCLNLWZDEHWUPOPTBHXDLJPKKQNPYKDJABMFAWDNQRMHGOHRTORNVCGNFISXQOPNEFVWQIWYLMTYFJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.283164354226);
    msg.setSource(7341U);
    msg.setSourceEntity(100U);
    msg.setDestination(13997U);
    msg.setDestinationEntity(25U);
    msg.formation_name.assign("QQAWXIJGWFBLTKXCRXKEHCVVVQZRAOQPBAFLGLNBRMYE");
    msg.type = 97U;
    msg.op = 219U;
    msg.group_name.assign("LNPCMRNWLLCAIRNWIAKYWFYRAFFXYZKMCZFUXOUWPIMRAVUGOHHDBSNIFBWKGAXDQOEECMVFSTQTMBARDXWCVOVVDMGTWPVKGNHLVPFZDNQLLPZNHYRWQXUOBDSRUZLQEYIKPPITTXSQJEAIKOUHYCGCKBPSAZBJQVSVZDYOZLBHRCUGMYMKKZLDBDTYSMSOTGEYKJLQJSNJPAOUJEAHCGNOHRTTXIMBXJEGIPEZECWRJS");
    msg.plan_id.assign("ECLTMXTHACECRKNJGIURRBYEQAVDMPMXTKGBOPACPLJSSYDIJDUHQWRYWABNKMP");
    msg.description.assign("OFNZOQMITEDHKUNUCSFPXIZVWYBMIOEADZBBNPRGNHSZKVRRDWMAWSUHZFGTKNOHQZLPYAWCVBMCPHRPHBFLJFHLPJOMNIMJJGYRMDBOVPGPCTQEDRXSIXTGQMERUXCYTHKVYZ");
    msg.reference_frame = 241U;
    msg.leader_bank_lim = 0.431310583611;
    msg.leader_speed_min = 0.350563367253;
    msg.leader_speed_max = 0.319824062603;
    msg.leader_alt_min = 0.832073034089;
    msg.leader_alt_max = 0.432060023049;
    msg.pos_sim_err_lim = 0.770689067109;
    msg.pos_sim_err_wrn = 0.079232645757;
    msg.pos_sim_err_timeout = 21871U;
    msg.converg_max = 0.855399798128;
    msg.converg_timeout = 52141U;
    msg.comms_timeout = 3940U;
    msg.turb_lim = 0.440509327292;
    msg.custom.assign("PQRLVFPDMTPRPEVLEGBEHGWKZCTKYZRBDIBOFABLMRYHPTTHJAOIULQXONWFSWFQJNCAX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.2146410887);
    msg.setSource(25204U);
    msg.setSourceEntity(150U);
    msg.setDestination(31019U);
    msg.setDestinationEntity(13U);
    msg.timeout = 23753U;
    msg.lat = 0.209115317726;
    msg.lon = 0.643773893814;
    msg.z = 0.925390396344;
    msg.z_units = 143U;
    msg.speed = 0.25178323141;
    msg.speed_units = 140U;
    msg.custom.assign("ECOUAVXDDFNXWNZEHYBERPHTDPNTFIIIUVETXBQRVPZXACCWDTGKLWKGBNWJBLRKEMRVGCIYMAXMEBICQSOSXHNXOOWDYYLECHDYUPFFOCQGTSWVYLNUMSPRSGOMUKIOMZYJMZYTBEABKNWGPKJWSUIWLVZASCFIDRHTUXPFUFJAVXXZSJHUDAZQQNOQFRLGCKOMBNJCJQLQKGNHSVQPBLEAHBQJEMVTPAYDYHRHISAMOLZDFGZZTIFRV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.758973012308);
    msg.setSource(14559U);
    msg.setSourceEntity(101U);
    msg.setDestination(16967U);
    msg.setDestinationEntity(116U);
    msg.timeout = 1363U;
    msg.lat = 0.0111887730636;
    msg.lon = 0.654183986774;
    msg.z = 0.257264907827;
    msg.z_units = 112U;
    msg.speed = 0.775662468284;
    msg.speed_units = 173U;
    msg.custom.assign("UDLWJKAJAEQNGPARARXVJTQWPIXTOUFHLJTQDWPSOCDCDLPFASAEYHUKNESRMNZLOBZOOBYVQJXTGAYUZLEFPSJQQDVTIMJXYIUDPEFPARCJQIINOFAXBSWTB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.062274868538);
    msg.setSource(32001U);
    msg.setSourceEntity(152U);
    msg.setDestination(39600U);
    msg.setDestinationEntity(236U);
    msg.timeout = 28340U;
    msg.lat = 0.852454068927;
    msg.lon = 0.471324093731;
    msg.z = 0.00812978874756;
    msg.z_units = 183U;
    msg.speed = 0.516081119182;
    msg.speed_units = 0U;
    msg.custom.assign("ZNDRTVODVTLOIJFTTSUTXWWCUJCWEAJHQTCAMQWPHLZHSGPRNKBXWIPPQCKENRKMILQYZVPRTEGZERJYZPDTNPOZNXOYBIQHVYUZXXPMMSRRLOYCMGFUFOYMWPAIFAZDQBEMXYDQXNDJFGVGZOEVSYGLGASBJGZCWSKOUHBNDNAKGPKFJBUUQSCXIHCHHBOAMYFLH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.671194104709);
    msg.setSource(32045U);
    msg.setSourceEntity(32U);
    msg.setDestination(39644U);
    msg.setDestinationEntity(240U);
    msg.timeout = 35432U;
    msg.lat = 0.933124373371;
    msg.lon = 0.125684941812;
    msg.z = 0.797171308965;
    msg.z_units = 3U;
    msg.speed = 0.388938168856;
    msg.speed_units = 109U;
    msg.custom.assign("SAHAAOSVQSEUCFAZCXQRTFILNBDCEOUTQMJKMSDNMEGADTXDOLWOGKFTABZFGCFUXCYHIRPJPKJGMZHQCRLRXVHXNNRNKGSIKNSPIWEYABUWRXXTHVNIFUVXNILPGHWIYVMUGMLWZJGBANOVZHBDODYQRQTQZZTMLSYFJPXUZLCVUJTKLXSJYWWMIDRHRRPJCDSCFFIEVVEWHTQOHKOSJJBMYN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.70822383974);
    msg.setSource(26783U);
    msg.setSourceEntity(156U);
    msg.setDestination(7726U);
    msg.setDestinationEntity(140U);
    msg.timeout = 18871U;
    msg.lat = 0.340526043265;
    msg.lon = 0.0743316997014;
    msg.z = 0.611412499776;
    msg.z_units = 62U;
    msg.speed = 0.517553432105;
    msg.speed_units = 134U;
    msg.custom.assign("RODWOZAQMQCVHFSCMCINIFMHYQPSZBIGVEWDSHPZCFUAXALWVBGYPQGQDNYWVNQDTFJXPBKHYHZCRASBIKMOOYEKAJVFJRUGKRXZEZGKWJPZWEWCIXZSFXRITVYEUVLPQTKLREDGMVNUSZDABKTLEWSPKDGCTWUOHXBUXGNLXQRHMKZLCUGPULPBTVQYJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.328459873572);
    msg.setSource(32020U);
    msg.setSourceEntity(241U);
    msg.setDestination(9108U);
    msg.setDestinationEntity(146U);
    msg.timeout = 5346U;
    msg.lat = 0.456973010624;
    msg.lon = 0.0572704128658;
    msg.z = 0.136477402775;
    msg.z_units = 187U;
    msg.speed = 0.732787524922;
    msg.speed_units = 166U;
    msg.custom.assign("ETMDFSONHDKWRYGEFJHOZYPXBZVACVURJFUNGUKRLWCPLHYJQYSPBIGAXQUYKCSWZHIVXGFOVCQXKPEBDYUFJTLMQDTVZDZPOTIAMBMJPSUZCFIRKGRHAXZGQXDENBRTIQFOACYYKNATPIJLTAMTSPACQDSNPOUAXNFILKJFUMLXGTMBYREBNSGMEXVOIWWLO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.223669191207);
    msg.setSource(61039U);
    msg.setSourceEntity(85U);
    msg.setDestination(26883U);
    msg.setDestinationEntity(220U);
    msg.arrival_time = 0.457407622657;
    msg.lat = 0.638255977194;
    msg.lon = 0.5095623647;
    msg.z = 0.698480592127;
    msg.z_units = 86U;
    msg.travel_z = 0.130345576886;
    msg.travel_z_units = 174U;
    msg.delayed = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.948204616697);
    msg.setSource(8542U);
    msg.setSourceEntity(99U);
    msg.setDestination(36929U);
    msg.setDestinationEntity(221U);
    msg.arrival_time = 0.936994464787;
    msg.lat = 0.605199900841;
    msg.lon = 0.703504878001;
    msg.z = 0.375833339759;
    msg.z_units = 167U;
    msg.travel_z = 0.0410200071455;
    msg.travel_z_units = 219U;
    msg.delayed = 107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.901877558031);
    msg.setSource(39612U);
    msg.setSourceEntity(155U);
    msg.setDestination(18850U);
    msg.setDestinationEntity(45U);
    msg.arrival_time = 0.981982363918;
    msg.lat = 0.883837935879;
    msg.lon = 0.478304183323;
    msg.z = 0.060776628494;
    msg.z_units = 84U;
    msg.travel_z = 0.788164422855;
    msg.travel_z_units = 211U;
    msg.delayed = 211U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.0506944039803);
    msg.setSource(18178U);
    msg.setSourceEntity(35U);
    msg.setDestination(2450U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.745236817881;
    msg.lon = 0.0821966239415;
    msg.z = 0.320505663367;
    msg.z_units = 223U;
    msg.speed = 0.94637537213;
    msg.speed_units = 200U;
    msg.bearing = 0.887997210753;
    msg.cross_angle = 0.588420369301;
    msg.width = 0.68756030989;
    msg.length = 0.623958097649;
    msg.coff = 76U;
    msg.angaperture = 0.561816472938;
    msg.range = 39876U;
    msg.overlap = 214U;
    msg.flags = 132U;
    msg.custom.assign("DWJMSSYRRAWQGHAOVNMAPWBMPSOXJMTBHKTPKAHQCQSOEXGUPLBRHMQCFELGTGGUJAZLPUHWONFSODBTKCCGZKDWPZXVSJNVWSVRKNNTKHTGCDWYHAFIFAIYFBPIUCWJCIZWLILZBQRMAYMSUOTVDEPYTJNJSIOVJCKKEMDIDPTDUOCFAWLEEDBGOFUVYEYXHBEILLVZBVNRNNQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.422013580648);
    msg.setSource(3099U);
    msg.setSourceEntity(41U);
    msg.setDestination(4900U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.411450351401;
    msg.lon = 0.0178592470926;
    msg.z = 0.716930507948;
    msg.z_units = 79U;
    msg.speed = 0.621804856111;
    msg.speed_units = 52U;
    msg.bearing = 0.992979495343;
    msg.cross_angle = 0.99392653084;
    msg.width = 0.71439826189;
    msg.length = 0.630376056576;
    msg.coff = 74U;
    msg.angaperture = 0.945876343614;
    msg.range = 33272U;
    msg.overlap = 203U;
    msg.flags = 216U;
    msg.custom.assign("WTJCQBPYIHWTXZDBSJIXGOSXQEXLEUAYEFJVBCN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.836342665977);
    msg.setSource(1208U);
    msg.setSourceEntity(164U);
    msg.setDestination(5928U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.26321802545;
    msg.lon = 0.119824489189;
    msg.z = 0.837563199234;
    msg.z_units = 85U;
    msg.speed = 0.850194291696;
    msg.speed_units = 150U;
    msg.bearing = 0.835622412154;
    msg.cross_angle = 0.996720915598;
    msg.width = 0.417741242626;
    msg.length = 0.84245922073;
    msg.coff = 43U;
    msg.angaperture = 0.948543534598;
    msg.range = 61321U;
    msg.overlap = 64U;
    msg.flags = 115U;
    msg.custom.assign("TJTFOPIYAOFGWEZVEIOBXWUHNBTIRAXMZEXLJPSLLYIEFTAWJGTHKVXXGDOTZAIWAYFVUUHODKQRZQSOAUWQCWBKNQSIKMGCBJZMVGOSBGDUE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.0660459737068);
    msg.setSource(65513U);
    msg.setSourceEntity(239U);
    msg.setDestination(40695U);
    msg.setDestinationEntity(12U);
    msg.timeout = 30384U;
    msg.lat = 0.0287243315586;
    msg.lon = 0.980399419232;
    msg.z = 0.033989772447;
    msg.z_units = 219U;
    msg.speed = 0.405922958101;
    msg.speed_units = 19U;
    msg.syringe0 = 240U;
    msg.syringe1 = 49U;
    msg.syringe2 = 138U;
    msg.custom.assign("ZWSVNEZBZBAAYMOXCALBBJGBPXGRSAVFAPULPRKNRNMUMKXPUDOTGUKKCTKHJYQGWRFBDTEOIRMVOYDLUNDFNSQWRWDNLXGJSHEHQXJURYTSIHJOKGOXNMAJGJCHWQCIEKJSLWLOWMYZIFDFBVMAFYGLZYFPXSUTFFQKECSCVZOOXJERLTCYIWQUIHENRHPCINSHIHNQDVVYTXLPZZUYOMFQZECAERKTQGTXCPBVQBWDWUBMJMDVVALPI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.497136956819);
    msg.setSource(61207U);
    msg.setSourceEntity(123U);
    msg.setDestination(51717U);
    msg.setDestinationEntity(54U);
    msg.timeout = 29979U;
    msg.lat = 0.200343876964;
    msg.lon = 0.0887239636487;
    msg.z = 0.908839034597;
    msg.z_units = 202U;
    msg.speed = 0.361341333619;
    msg.speed_units = 152U;
    msg.syringe0 = 196U;
    msg.syringe1 = 20U;
    msg.syringe2 = 175U;
    msg.custom.assign("DUTSQBUVPXMEIPPHGKRRYSJVGOVNZFPRPSGJPDMIWYOZTIOCRLGRRAAHCSZQIBJFVDOKWOCKJJTHOOERMNBAPQBCWLNLIGSFFA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.293467560182);
    msg.setSource(52689U);
    msg.setSourceEntity(99U);
    msg.setDestination(55691U);
    msg.setDestinationEntity(166U);
    msg.timeout = 36420U;
    msg.lat = 0.232752011796;
    msg.lon = 0.159417309028;
    msg.z = 0.555356721165;
    msg.z_units = 116U;
    msg.speed = 0.512755433997;
    msg.speed_units = 225U;
    msg.syringe0 = 94U;
    msg.syringe1 = 117U;
    msg.syringe2 = 0U;
    msg.custom.assign("DLAJXURJBLOKHVBQKIFDNZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.316228084526);
    msg.setSource(10343U);
    msg.setSourceEntity(72U);
    msg.setDestination(44700U);
    msg.setDestinationEntity(212U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.869884448433);
    msg.setSource(49566U);
    msg.setSourceEntity(205U);
    msg.setDestination(64536U);
    msg.setDestinationEntity(91U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.356789801186);
    msg.setSource(29919U);
    msg.setSourceEntity(97U);
    msg.setDestination(42159U);
    msg.setDestinationEntity(154U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.490878901675);
    msg.setSource(62718U);
    msg.setSourceEntity(54U);
    msg.setDestination(33197U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.787381773857;
    msg.lon = 0.829407788191;
    msg.z = 0.904090541232;
    msg.z_units = 149U;
    msg.speed = 0.213328867779;
    msg.speed_units = 85U;
    msg.takeoff_pitch = 0.2443875388;
    msg.custom.assign("NEQUCABSAVFNRZUNJYGFHDTJJGLZFSGKWHBNIVHAFVCXBQLRPGOYRXWNTMIWELUYWCUOXVDPHSYGLOBGNDBOPMRPKZMNZJEM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.366613466838);
    msg.setSource(51297U);
    msg.setSourceEntity(152U);
    msg.setDestination(21981U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.694605331635;
    msg.lon = 0.679671193693;
    msg.z = 0.398232398854;
    msg.z_units = 231U;
    msg.speed = 0.0352739015916;
    msg.speed_units = 173U;
    msg.takeoff_pitch = 0.669534907356;
    msg.custom.assign("ZJJOYQQNIHJLFWALTZYONJOCXQTCYWEGBYPSUKRLFCHDEKUCSPOOOTBARPTFAXIUOQATMSSQNUVLRISRNVGPOGCNTJKFBRGBJPSDPXQWSFNDDVQGBZCLUVZHCRBFLPAVBKMBDTEQWMZLTELIMNYFIXYMUEGNWMWIDVHWVGFVZSADLEUPZFHXFOCYEKAXCRNWRUZKMXASMUZZDGKRYOJMDYKREXXUBMTWQBXEIVGIWKJQHIKJALGJPHTCS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.726478340045);
    msg.setSource(20417U);
    msg.setSourceEntity(93U);
    msg.setDestination(14412U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.63119572083;
    msg.lon = 0.672579027674;
    msg.z = 0.595827055069;
    msg.z_units = 20U;
    msg.speed = 0.322730741123;
    msg.speed_units = 10U;
    msg.takeoff_pitch = 0.459261706719;
    msg.custom.assign("KMPITXITRLJVXYAGYJQDKQSMBPGZCLILYPLHUWCPJUMNEAHWZKSDGSVFVPBQCJSNEIEJTCDMWMDLBHVXXOSPWZLRBZHRBCFIEYYRXJYDOQGKHWDMNOHYAIDKYUQXUBUUNWAFBPEGKFZEEOLEMMASJJRNFGQOENQHCHCDWSCXGAOFRZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.726769695996);
    msg.setSource(7992U);
    msg.setSourceEntity(194U);
    msg.setDestination(29169U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.689203336985;
    msg.lon = 0.601733054938;
    msg.z = 0.369842241871;
    msg.z_units = 180U;
    msg.speed = 0.487032140681;
    msg.speed_units = 155U;
    msg.abort_z = 0.666665108943;
    msg.bearing = 0.990268555955;
    msg.glide_slope = 238U;
    msg.glide_slope_alt = 0.89640682479;
    msg.custom.assign("WADVYQAFPJYMQBTWAODBRITPXMATKWBURJZGFUSMWBLOVOUEMPQDLBCGULEYCLPBVUEDQRZRGSJGJANBVOMQITRYEDARJIXARSHFQOOBZUTNPOWNLKHUAWEPIXYXLHXVHCSFFNGEFSQZMCNKUKZZIGIBGKHDVH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.405525637562);
    msg.setSource(22341U);
    msg.setSourceEntity(252U);
    msg.setDestination(34774U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.187421536534;
    msg.lon = 0.895362564824;
    msg.z = 0.974101783893;
    msg.z_units = 131U;
    msg.speed = 0.750257409863;
    msg.speed_units = 173U;
    msg.abort_z = 0.54073071437;
    msg.bearing = 0.403422241457;
    msg.glide_slope = 226U;
    msg.glide_slope_alt = 0.273847847694;
    msg.custom.assign("PWJDIJHVLBJXWQVWNDKUEKPUSRCHWNXORYPOUGJUXHRWOKSFGWAYUOOJHBVZYHOZKPTKQVRYFORNUCTURJZKGPQWQGAIXCPUPSBFREFAKXOONCJSKGNSIEEDIDIFQFWXSTVMABESYTXZQLFQNDMLONELQMAGUPVBBDCZPEDACIRSGBMVTEKMXTNSAGMCDSIYIHPHTLYFKXHEYIZLXTFJVJMLBMCGNDMABZIBZGJLQYELA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.728354484148);
    msg.setSource(55976U);
    msg.setSourceEntity(183U);
    msg.setDestination(44242U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.81006000875;
    msg.lon = 0.803359577548;
    msg.z = 0.664623066697;
    msg.z_units = 1U;
    msg.speed = 0.524159208529;
    msg.speed_units = 176U;
    msg.abort_z = 0.902823366567;
    msg.bearing = 0.727609919758;
    msg.glide_slope = 60U;
    msg.glide_slope_alt = 0.968469782811;
    msg.custom.assign("LBWSPQNJGVBXSNVEDFKZGSUKSQOELQVDUTNCJWPIAZNXJIHJOKYTNFEJQPFCEMYAPBZLDMMEIBZRNJRSOAAPRFCJUJHKWUQBQZQLTGZWYXEFDX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.241396559062);
    msg.setSource(18385U);
    msg.setSourceEntity(37U);
    msg.setDestination(6003U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.959462434908;
    msg.lon = 0.745567795648;
    msg.speed = 0.86718019881;
    msg.speed_units = 254U;
    msg.limits = 41U;
    msg.max_depth = 0.880404270851;
    msg.min_alt = 0.592760757541;
    msg.time_limit = 0.0418079252763;
    msg.controller.assign("FGNJCZENREHAVPOSYUJQEPYSWCOAVPK");
    msg.custom.assign("OQZADJZHRGTVXGKIQSFEUSJHHPGFOWZSTDYARITCDPLYPJRXOMEDNEFGRDCELPIZFUYWLKBRIXQZKCSMAIFDULIKONXGZPSPVCCYCUUTJTKWIYJBMBAHVDBTPYEWSKXTXVUBBFGVJLYQZJSBEZHQBILDVWZDWVJYJEEOOSHNFYGGAXHMVWMINRFNCJQTCAOMXNTIUKVAKPALAOFQZYLOLNHQMQA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.242498532589);
    msg.setSource(60838U);
    msg.setSourceEntity(131U);
    msg.setDestination(53181U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.374865521562;
    msg.lon = 0.456202010343;
    msg.speed = 0.85667727671;
    msg.speed_units = 250U;
    msg.limits = 207U;
    msg.max_depth = 0.00620537503136;
    msg.min_alt = 0.834929163106;
    msg.time_limit = 0.672111019018;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.285901182738;
    tmp_msg_0.lon = 0.8780053527;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("UHNFEZVIYXTSSWYLOHUEAEUBLILTRNLTZEPXWAIHVFSJDJIRUVRHIKVMCKMGBDLKYZOMASTAHKOFREZCBSENOQSUDGHLDKACJCPXTMOZJNHOBZRNDUVSPDLGTAXMSOPBCCUCTRLXBHWBJBNVXKVYKPBEPOQANYDTRAPVEGESGKFXDMWQIZFOLYAWYGBMIGFKTJJNZK");
    msg.custom.assign("UOQSFGOUONOOMBFRIEPRZWGGJYJLXFWSOHWDTUQMBPVFMTXCGQJAVREBHPGTKITOVJMOYLNKXAEVTPFAZCDYMN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.116297061365);
    msg.setSource(4171U);
    msg.setSourceEntity(54U);
    msg.setDestination(32917U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.828959457569;
    msg.lon = 0.724413216559;
    msg.speed = 0.468122413681;
    msg.speed_units = 154U;
    msg.limits = 201U;
    msg.max_depth = 0.0145219046452;
    msg.min_alt = 0.360018587265;
    msg.time_limit = 0.296480361635;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.637852513242;
    tmp_msg_0.lon = 0.743991298792;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("ZFOYMRZOJNDHSUEEDWFFGUUGJIZXAAGZNSAOLTRPIQUDLSKVUCZWZGGIIIKBAFNLQTXRUOMMMDRCZXUIYCPFKJHSSDJWVJALIXMVNPWTFVQQQATCGYTFRLLGYQJCJWRSXHPIHEMADAFVTYYBWVTAXTNQCWDOSIGSPNOTMNRDPJNQTGRXYLMXBFOQEALFHHKBJOCQMZVUSHCBYKDBBPYLEWPEHEICXNNCBDLKMPVXEBJUEKOUHGKVWRSZ");
    msg.custom.assign("WSTFYQRACICMXSTQOYEEKFPFITGHAKSMXOQYNHEMICMYBJBFOZQRMLVMZNJGUJWIPJQYCVQRBPXDHURSILKECXPYSNBOARHSFKAITSUHZWFWHQHQKLBZXPWLEZVLTMNDFUDSOVVANLOWXZAGDLREYPCIROFFRUVEGDLWKGCMLVKYQXVGDONZTKIEGDBPUEJWSUXYXNWTDHVBLXMUIWPNAGJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.62651981344);
    msg.setSource(15059U);
    msg.setSourceEntity(85U);
    msg.setDestination(50634U);
    msg.setDestinationEntity(59U);
    msg.target.assign("IRHPKZKAZLNRCROBPMSZZYZQSPUEJATPNFHWPFAGBARIJWKCXUICDQEGLTFQCLJDSBAFFDJOHSHKTJQWWFAKZOEIGRPOPARSVWTJPGCLVBBLUJSMTMSXXEYYCDHYSFNVZCIKVPDOVEKHKDZTCBLNOGXUBYXEIDYLMTGQENNDTGTOWZCWCHAFYUURLEYAQGVROWWUWSXBHKANBRJXNULHY");
    msg.max_speed = 0.391586719168;
    msg.speed_units = 203U;
    msg.lat = 0.874244659947;
    msg.lon = 0.633443121078;
    msg.z = 0.669092544088;
    msg.z_units = 195U;
    msg.custom.assign("QMJPDEUZLSLXJHYIEJRWDLZYEDURUMEFKGFSJLCDWWAAGYOJVUFGHLQMEQUPLPHQTIMBLRDKNVYDKGBWPZOL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.370418296278);
    msg.setSource(65067U);
    msg.setSourceEntity(100U);
    msg.setDestination(44942U);
    msg.setDestinationEntity(21U);
    msg.target.assign("NXHDUBLRSJOSTXOALJCQHFYDSXAODGJNGTJVXQSGIGYFVWEJZDQPWCBMEROWABHFPRKVXVPFWBTSFGLAHDKYKBUBFKDGSIAYNLGVEIREATYUBFJZUTFPCRMJQCFKQNWOXWVNZXTLNFUHCQILJRDUOVUBEAIYMSKKLMHEZRNTEIKOLIJGRVWUMAGEMAHNYMPXTKRAIPSPVYBP");
    msg.max_speed = 0.355667162669;
    msg.speed_units = 60U;
    msg.lat = 0.10904477718;
    msg.lon = 0.137448248508;
    msg.z = 0.137689750208;
    msg.z_units = 234U;
    msg.custom.assign("ZKWCXAMZEHJKACBRJCGPLQZOTTYOUVVGPJKZELWCFXEDRIDQYXLQOBKTHIQLQHKGWNSFFYAM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.963417508535);
    msg.setSource(40366U);
    msg.setSourceEntity(29U);
    msg.setDestination(7695U);
    msg.setDestinationEntity(129U);
    msg.target.assign("IGEMUXQRWPCLFDEMJEZHFTFNLQEUHYMUGWCWIJZTQHJLINXEXNMKVQHUZWBMNXPVRLYSBNAOMLPJLSFSWOILCRAXIORRODNQFRDJGICKXQHPVDENTJHVKYSOAOBRGEVABTXZWKIFNYZDKPFBORWZWSYVTMHTMYIKCHLPKEKMAZAUNRO");
    msg.max_speed = 0.517168608005;
    msg.speed_units = 83U;
    msg.lat = 0.74915789722;
    msg.lon = 0.246586201566;
    msg.z = 0.800714286331;
    msg.z_units = 77U;
    msg.custom.assign("QCHIMYRQXNXXGJGUGTSVBMLMBNSESQDJQVKAZLPBHVTSJHIEOOKXYJR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.562006024661);
    msg.setSource(26101U);
    msg.setSourceEntity(145U);
    msg.setDestination(18145U);
    msg.setDestinationEntity(243U);
    msg.op_mode = 222U;
    msg.error_count = 89U;
    msg.error_ents.assign("OBSNSOVAXPFQYENCABMBZDKLDEHQUBGJXEXWNGQVKPAJMVOFROSTILAZLGHEWFBEHSNTFARAZHPMCTXDYZGKAPXLSWIGKWAUKGDKXNNQQHLGSFLSQKVZWDHDTUPMYMSJQIWCHCZJURILDIOCFRAQHDVIOVQMCMXEYYVSKVYWSMCZJIWFOOLNIHFPJPODPUNDGBUUEBRIEGHQTBTFUNPARRYNKFPWLRRXUI");
    msg.maneuver_type = 60955U;
    msg.maneuver_stime = 0.125355421058;
    msg.maneuver_eta = 13257U;
    msg.control_loops = 192926179U;
    msg.flags = 198U;
    msg.last_error.assign("MGSKPLJUFMEQYXNOHCTWRIFXVJMTCMBSDSHXCNRDTAALYVSZJQYUEIOPPINXSTGJHZCFRGXWKUTFIYULAKUMFCYVLAAG");
    msg.last_error_time = 0.358470561635;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.721756651306);
    msg.setSource(38767U);
    msg.setSourceEntity(147U);
    msg.setDestination(30161U);
    msg.setDestinationEntity(71U);
    msg.op_mode = 90U;
    msg.error_count = 135U;
    msg.error_ents.assign("FTIGCKBCPIDCCQMTWBKNTOFHVBGIXYCBXUPGJAQFIUBWMAJSESGOEXSNSJXVFLSZBCIHLHWAMUFHREDKNBPMRXFYBUVOKZDUJJTRYYYLNDZARTNWZLNCSDXMJRZQQSOCAQVDZAFHWONTYLJSPNGPTLUULIYZKMWCRBEIRAOWWFKJWAOF");
    msg.maneuver_type = 11223U;
    msg.maneuver_stime = 0.94391614648;
    msg.maneuver_eta = 5231U;
    msg.control_loops = 1018276210U;
    msg.flags = 219U;
    msg.last_error.assign("XZTLWCBMSSCFIWJFSWEWLCDXBHOQPAGRDQCDRLNANZOJDLIVZAFUTDBAWEVBPZVTUJRHQIYILTMPMJFXFEJHIKMOKXRBGTOVZAORSUBYAMQKUYPKJYQKIGZBAOKETHLEVESCMWIEHGZPRQARFKWWMUZPYDCXYNHRQGUSPCCXZBJOUXVFKDPSNLEQMFWNBJMVSAKNCYYNUDOPHFDYLEGNGETDNIXPZXYJOQHRFSLTIWRXJNMGVHHO");
    msg.last_error_time = 0.251896480513;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.325220260722);
    msg.setSource(52012U);
    msg.setSourceEntity(94U);
    msg.setDestination(3731U);
    msg.setDestinationEntity(78U);
    msg.op_mode = 102U;
    msg.error_count = 85U;
    msg.error_ents.assign("QBMBSSPUKRTGLNXQJWXCXTOENJVUUBMFQZGCYZWIKZNLHGSJNR");
    msg.maneuver_type = 20914U;
    msg.maneuver_stime = 0.994135073551;
    msg.maneuver_eta = 58823U;
    msg.control_loops = 804976874U;
    msg.flags = 29U;
    msg.last_error.assign("JTHWMLHXSCSHJONZWWGXAQCTUEFFQEAQFSIMYTRPFDKONCXAIBVAMDCECDCMMQJGVWPUJPDJAVUVIZIRQOAGLKGGVIWHZPWAVUSBRZLSSGXDBPDIJEBJHGWELITLPCMHJZXXOFVTIYAUDNTYMRYARUXERWKHKZJOLFGRRLXDHNSYITYNBSXUYKWBZO");
    msg.last_error_time = 0.916766458629;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.55191304655);
    msg.setSource(46993U);
    msg.setSourceEntity(9U);
    msg.setDestination(17027U);
    msg.setDestinationEntity(192U);
    msg.type = 238U;
    msg.request_id = 10495U;
    msg.command = 221U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 1573U;
    tmp_msg_0.lat = 0.993886137112;
    tmp_msg_0.lon = 0.578437304171;
    tmp_msg_0.z = 0.997980107766;
    tmp_msg_0.z_units = 67U;
    tmp_msg_0.duration = 31810U;
    tmp_msg_0.speed = 0.946214196298;
    tmp_msg_0.speed_units = 100U;
    tmp_msg_0.type = 196U;
    tmp_msg_0.radius = 0.78697402185;
    tmp_msg_0.length = 0.0524403336659;
    tmp_msg_0.bearing = 0.920440666698;
    tmp_msg_0.direction = 199U;
    tmp_msg_0.custom.assign("RMOPKDFTJEXMCSPSKRADRMESVUFACNUXPQSMWJFUUPJNJOHWZOIIYLHZKBENORTSQJNZLLYIFTIZPKQOFGMGFFTBIHWLTVLBBGVESTINJKZXYNLEKJNUXVYPCKQEKRWBD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 62265U;
    msg.info.assign("PWQOWZMVMGCWPRHMPPTQHLAZMOHVKMNGXCQWNOPDHDZNCEQIHPVOZBLCNHVPSGZOLGYCXJOXLLPNKGYYEIHQJULBKBEFNRGKGZWASDGXMSEHCKIEIYKNRVFFDKXYHAMDNKTJUSWENTBRCDJJVBWIRJJFZKLUIFLAOBPRQWSAJTUHASFJQEXARORUNEEIFCVDQWBUXAFSVMYQPSDXGLZUWAEVTIZFYVOCODBSA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.712592279163);
    msg.setSource(12393U);
    msg.setSourceEntity(29U);
    msg.setDestination(4304U);
    msg.setDestinationEntity(107U);
    msg.type = 190U;
    msg.request_id = 33297U;
    msg.command = 133U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("LZZETERHADCQZUBEQESAXLQWKGUDGHNZISIOFYVBMRIIWMBIFPNWAKPFKJRXCVHOFPAYFWSMCBFWNUPHYEMEMNGSJBGGLOXLDVYU");
    tmp_msg_0.formation_name.assign("KUOYUEMMVMWANJPSOQBIFWEZAVUZUKKFHUUQVHIQVTGNVUIPSHTQMIODCWJTNAOBXJEHAXRHRBYFZFAAFLKVCDLOEJGMLFNVKPSNJ");
    tmp_msg_0.plan_id.assign("MTZHGEIVMGLNWCLXTRPTOPQBFSONXMIIQMLFVJUOYILRSKBBSILWQBPOBKRJOZNXJQNDSGDGXWMEHAEZHFQFDZVPHAAIUJJDBKWQSWZGXTARFCHUKWVWGKEQQJCXBVXQTMERDHAOLLEEPWXYORJANMAEITZZRBVKHYJXODMNTNXEAGYSYGRVCFLBZRWVBPKJMDCVTP");
    tmp_msg_0.description.assign("AQQJURNRKTXQYTGYCTWJGKCXUOFHOPDTHVULMBBGYEMXRRMKXWFNFSKBSLSWAAKUZREGIDPMZFFQOTPYVUGLJWLNYNIDPT");
    tmp_msg_0.leader_speed = 0.304036452148;
    tmp_msg_0.leader_bank_lim = 0.298682200447;
    tmp_msg_0.pos_sim_err_lim = 0.211872157213;
    tmp_msg_0.pos_sim_err_wrn = 0.339181592876;
    tmp_msg_0.pos_sim_err_timeout = 44830U;
    tmp_msg_0.converg_max = 0.915748597631;
    tmp_msg_0.converg_timeout = 46532U;
    tmp_msg_0.comms_timeout = 11614U;
    tmp_msg_0.turb_lim = 0.807976743313;
    tmp_msg_0.custom.assign("SJURSBYLMSZNYXESRWLXDDZHLUUOMOQNCQEOMBDVPVXDATNX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 33129U;
    msg.info.assign("BXMQZPYIUNHJNTHGUFKWAAJJBABRDUGROBJOAGTNINGEXBDMMICRWJSQIFEMLRFXMLVHSHCQNWIXKPGVDLVLRSEVTCEJECPFGVRRNBIUMONXDDCUUGOZLWBNCTXOCEYUGBMZWHIZTZDMWKQLWNBFITUXWPJAQECDLWPTKOCPYXQVLLXFJVHTSMAKCOOKGZPDTKSIUZV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.358845649173);
    msg.setSource(18027U);
    msg.setSourceEntity(202U);
    msg.setDestination(47787U);
    msg.setDestinationEntity(87U);
    msg.type = 72U;
    msg.request_id = 59810U;
    msg.command = 189U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 12976U;
    tmp_msg_0.lat = 0.0692798043829;
    tmp_msg_0.lon = 0.0501519271991;
    tmp_msg_0.z = 0.180289341342;
    tmp_msg_0.z_units = 245U;
    tmp_msg_0.amplitude = 0.270845262363;
    tmp_msg_0.pitch = 0.51438261656;
    tmp_msg_0.speed = 0.232511840331;
    tmp_msg_0.speed_units = 224U;
    tmp_msg_0.custom.assign("ZXNLDLCYIPFRS");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 18746U;
    msg.info.assign("DPBANTGDQVMQUFMYYMUAQNPOKOCAZHFIEHMGUCOBVGUCCBHQZBQTWQEKLULXBWHRBVSLLECMXVGIFHTPKCJWKXAIBWNVINXXDAASIEONUZCEWYUFSGMDWSSDUXHJPLKGVFHNZOASRYRPQMJSSWNNEDKIYYFOZCPZMRZVTEXGJRPN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.331054542027);
    msg.setSource(48392U);
    msg.setSourceEntity(245U);
    msg.setDestination(55552U);
    msg.setDestinationEntity(88U);
    msg.command = 49U;
    msg.entities.assign("KDLQHWMTNLCFCJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.0971977168826);
    msg.setSource(47422U);
    msg.setSourceEntity(24U);
    msg.setDestination(11802U);
    msg.setDestinationEntity(250U);
    msg.command = 112U;
    msg.entities.assign("ZEAXBHEHOLHJSHAVSUFYUEUVKCOCWKZFEEWMYXOOYQCFEEAEAHXRRRTIJSUDOCTDMCXGRCIQNBJKGMTSNLJAJVIVBYGQJO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.676598617252);
    msg.setSource(5861U);
    msg.setSourceEntity(18U);
    msg.setDestination(10820U);
    msg.setDestinationEntity(198U);
    msg.command = 148U;
    msg.entities.assign("RESLPPLGWNKCOHGYAQNEOAZMUIBNAON");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.681002593325);
    msg.setSource(4446U);
    msg.setSourceEntity(50U);
    msg.setDestination(23273U);
    msg.setDestinationEntity(35U);
    msg.mcount = 98U;
    msg.mnames.assign("ZJCDXZVMUYSFPSXNAETEQLQLGNUNEHBNVSUWEXEWWPEWAZVVDOGZSGMKQJXUKLLTCDGCYMRRDMMIWLPKTVZHIHKALJDKWMHYSJMCOPSGZDRWRANBOVNPGBQADTFIFQKQUMUTPYHTVCFGZBJUOFHWAFZINOSRYLSITIBVPLRWZTNYAYOZEGMOLUFXKHDYKRFAOBSHESB");
    msg.ecount = 45U;
    msg.enames.assign("XQRBPLHYNUOJEXSSAVCZRGEGYVUOLRMHTGTNZPYSNCTNQGEQUKBEWDERPIFSZYILTHNBUXWMOLFYQXAPTPFOTCVNNASDGAHXFINVKUVDHXMJMZKMCGWJDHBEZUCDRYOLHKZVESOZIMYIIPHAJCQFQTCBUWJOLAALLGIJPFQKTLSGGFKQXAMYKPBWDJUCXBIADRWIOPCUSJK");
    msg.ccount = 250U;
    msg.cnames.assign("XYBFPISKDPSBILQBZYNBBGHUERUCXQIGTTROERGLXTDXVIVZYNASGNJZWWVVMSWZFERAYBUMELZBNAHXRIIEFHLCVASHBDJMJZFJULQKCODFTUZNKQHORGEZADTDRVYMCNGXOOEKUFILQPAJGCXEYWNKHAUNMQKGWUTKHLSKASFMNPCDZWVAPBJLTQKWRLJHVPSTYNGFYCWIPAYJIXCDOOQBQUFSOWHPORKSEXQIWM");
    msg.last_error.assign("XELWNGQEMBHKJFAXNLWTUQNYIIRLFW");
    msg.last_error_time = 0.424789196148;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.985230366759);
    msg.setSource(18315U);
    msg.setSourceEntity(102U);
    msg.setDestination(39931U);
    msg.setDestinationEntity(18U);
    msg.mcount = 11U;
    msg.mnames.assign("XBOJIFAVZODAYFQGELAWLYJAYOBCXCKLGGMUZVGCOULTYQRFTNVHIMNWXDSWNMSTRYMHWQCNHSCKWZAVUBPAOCPFDQZHXMUOTCPBDTAPBPQRDVDLQCKJGHEAHYFOCEWHHPVIEDSXIGXEPVXLNSNBRZYWVMTBJUKLPDIDEISPICEVMQYB");
    msg.ecount = 175U;
    msg.enames.assign("KFHTLJKSJQLJKUVCHNAFUTCBWOAIILIXMYTNMUYRWXLEQDRCGIYQBEQPSINXHVPSOGLGIADJECNURFUGEDHFDDIOQXQUJPNCWCWTGLDNKCUJJSNVKBEDZOZWAJBKHKJVYAKUBQRBPVAUOFGDZZNFDQVOHTGRBVOJQERNPPVMXAYTZKPHZDHEHELRVTAVSISOCMTKGWTBXZFHZZRGWEQYYYLXWMEOINXRXMUWAYFYTWSMPMSAILM");
    msg.ccount = 203U;
    msg.cnames.assign("JOXPMTSJHCIIDHEXGZQMNQTTTBHPZVMNUDCIWXPSKWSOZLVSUFCDKUNTWURADTCUDKZPLXXBAVBKCUCJJBPAMYDSEFAKYYVIRCGGFEONZAHPKQZQOAFYOFAWABXYLLQGOZBENYKTQPLFHKJDIJJFYVGPVYFQITADLCNGPWUOWRQGCRMRAIRMXMZQJFLTURLVHDXVUBBMOJWKGSCYEWWKSNEFRHTEIUON");
    msg.last_error.assign("UEBNXWFUCREYIPJZYHYBSWLUDHUACGNPVTNDKGZGTEWEZVQMJFLIUXDLAESGNQAVVXRJPHCYJHAOFFJPXQZXASHVQCCZXBQMDCYKMX");
    msg.last_error_time = 0.434837701917;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.280978007894);
    msg.setSource(59809U);
    msg.setSourceEntity(223U);
    msg.setDestination(64209U);
    msg.setDestinationEntity(59U);
    msg.mcount = 125U;
    msg.mnames.assign("OTGRRFKLYYFRUGVPLXQHXLYBZTABTSDVAZSRCTQFLQWKWNUJI");
    msg.ecount = 228U;
    msg.enames.assign("FFXCUEJQPOAPRWYJVZTEIFVVAZPKCWRLDCOQEQWNQFEASERTBHT");
    msg.ccount = 141U;
    msg.cnames.assign("PFIIMKESMKZEZXDHCWAEUYSICQAPQFRTGJOSRUZCYLTFXFSUZBYIIKSFHTUFVRLNENJWLVCCNXNMX");
    msg.last_error.assign("DNNFFSSHAUVGBCJLYIUHGPUI");
    msg.last_error_time = 0.730246185244;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.549146637699);
    msg.setSource(64887U);
    msg.setSourceEntity(97U);
    msg.setDestination(26546U);
    msg.setDestinationEntity(242U);
    msg.mask = 227U;
    msg.max_depth = 0.00112003580878;
    msg.min_altitude = 0.806167987996;
    msg.max_altitude = 0.324030736895;
    msg.min_speed = 0.127027783814;
    msg.max_speed = 0.850662951165;
    msg.max_vrate = 0.389522135526;
    msg.lat = 0.0655952814309;
    msg.lon = 0.470499863953;
    msg.orientation = 0.714058915781;
    msg.width = 0.282721842891;
    msg.length = 0.279541736263;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.929404334272);
    msg.setSource(24457U);
    msg.setSourceEntity(1U);
    msg.setDestination(11083U);
    msg.setDestinationEntity(138U);
    msg.mask = 64U;
    msg.max_depth = 0.413528063619;
    msg.min_altitude = 0.94495118125;
    msg.max_altitude = 0.651437511877;
    msg.min_speed = 0.00647229409481;
    msg.max_speed = 0.0288924115638;
    msg.max_vrate = 0.465697879775;
    msg.lat = 0.301194260349;
    msg.lon = 0.448084750123;
    msg.orientation = 0.355246192277;
    msg.width = 0.536994327293;
    msg.length = 0.941240128311;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.439864831587);
    msg.setSource(22844U);
    msg.setSourceEntity(108U);
    msg.setDestination(8358U);
    msg.setDestinationEntity(247U);
    msg.mask = 231U;
    msg.max_depth = 0.579568347406;
    msg.min_altitude = 0.970763397376;
    msg.max_altitude = 0.12454287925;
    msg.min_speed = 0.281605561446;
    msg.max_speed = 0.0951552975315;
    msg.max_vrate = 0.358413428307;
    msg.lat = 0.324386566011;
    msg.lon = 0.68398448351;
    msg.orientation = 0.402446367906;
    msg.width = 0.210644896526;
    msg.length = 0.595207048528;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.0417119993322);
    msg.setSource(5177U);
    msg.setSourceEntity(164U);
    msg.setDestination(4537U);
    msg.setDestinationEntity(227U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.25787396534);
    msg.setSource(48595U);
    msg.setSourceEntity(199U);
    msg.setDestination(8458U);
    msg.setDestinationEntity(9U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.0533581537788);
    msg.setSource(1084U);
    msg.setSourceEntity(64U);
    msg.setDestination(21987U);
    msg.setDestinationEntity(107U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.0801103053688);
    msg.setSource(37480U);
    msg.setSourceEntity(3U);
    msg.setDestination(56088U);
    msg.setDestinationEntity(52U);
    msg.duration = 37110U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.00503144964168);
    msg.setSource(2161U);
    msg.setSourceEntity(220U);
    msg.setDestination(25955U);
    msg.setDestinationEntity(40U);
    msg.duration = 65468U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.600987545421);
    msg.setSource(36075U);
    msg.setSourceEntity(138U);
    msg.setDestination(2001U);
    msg.setDestinationEntity(21U);
    msg.duration = 41617U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.25159564086);
    msg.setSource(58351U);
    msg.setSourceEntity(207U);
    msg.setDestination(26948U);
    msg.setDestinationEntity(141U);
    msg.enable = 149U;
    msg.mask = 3429126167U;
    msg.scope_ref = 1226707434U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.603989687163);
    msg.setSource(53998U);
    msg.setSourceEntity(117U);
    msg.setDestination(6185U);
    msg.setDestinationEntity(185U);
    msg.enable = 129U;
    msg.mask = 860661828U;
    msg.scope_ref = 2915504293U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.779823604892);
    msg.setSource(56066U);
    msg.setSourceEntity(64U);
    msg.setDestination(51743U);
    msg.setDestinationEntity(56U);
    msg.enable = 19U;
    msg.mask = 2564736145U;
    msg.scope_ref = 1005196169U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.959754843547);
    msg.setSource(4427U);
    msg.setSourceEntity(106U);
    msg.setDestination(39835U);
    msg.setDestinationEntity(196U);
    msg.medium = 165U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.736361050066);
    msg.setSource(1474U);
    msg.setSourceEntity(96U);
    msg.setDestination(23665U);
    msg.setDestinationEntity(57U);
    msg.medium = 207U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.34125002473);
    msg.setSource(47410U);
    msg.setSourceEntity(107U);
    msg.setDestination(60528U);
    msg.setDestinationEntity(66U);
    msg.medium = 191U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.560493073554);
    msg.setSource(17344U);
    msg.setSourceEntity(7U);
    msg.setDestination(342U);
    msg.setDestinationEntity(68U);
    msg.value = 0.620356136613;
    msg.type = 96U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.899818804111);
    msg.setSource(39538U);
    msg.setSourceEntity(89U);
    msg.setDestination(60117U);
    msg.setDestinationEntity(30U);
    msg.value = 0.629508968918;
    msg.type = 180U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.597166642854);
    msg.setSource(65034U);
    msg.setSourceEntity(198U);
    msg.setDestination(59173U);
    msg.setDestinationEntity(100U);
    msg.value = 0.97693293472;
    msg.type = 122U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.745774588322);
    msg.setSource(37637U);
    msg.setSourceEntity(71U);
    msg.setDestination(44547U);
    msg.setDestinationEntity(63U);
    msg.possimerr = 0.923338096057;
    msg.converg = 0.225387077098;
    msg.turbulence = 0.825620471477;
    msg.possimmon = 54U;
    msg.commmon = 72U;
    msg.convergmon = 241U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.325459092909);
    msg.setSource(17850U);
    msg.setSourceEntity(128U);
    msg.setDestination(36436U);
    msg.setDestinationEntity(52U);
    msg.possimerr = 0.269260450296;
    msg.converg = 0.878376997766;
    msg.turbulence = 0.88140247107;
    msg.possimmon = 142U;
    msg.commmon = 65U;
    msg.convergmon = 131U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.598824926219);
    msg.setSource(2166U);
    msg.setSourceEntity(88U);
    msg.setDestination(18839U);
    msg.setDestinationEntity(241U);
    msg.possimerr = 0.389549267909;
    msg.converg = 0.00225962813462;
    msg.turbulence = 0.0184615474347;
    msg.possimmon = 186U;
    msg.commmon = 129U;
    msg.convergmon = 90U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.319008790643);
    msg.setSource(8761U);
    msg.setSourceEntity(117U);
    msg.setDestination(54800U);
    msg.setDestinationEntity(138U);
    msg.autonomy = 138U;
    msg.mode.assign("QVHBNVFMQCJGIIHYDYNQURNKACXOFKKKJHPENALPZEXHKANCRMWXSRDQQBTEONRCDDOFSYAEZLTJULSDPXGSXLVJHVAGITCYEFWMIBCLNIKDIRSEVSZDBBOTTBNIZGGFYUOMQMDGVZWVRQZROJBXWRCXSFSTLPKPTMCIMFZMPFOWREWPTEECWHQZGYNTPYDDBWVLZUQSZNKITOHAPXHGYSFUMJQWAOCVRUOKJUFJLPUVLIBUJG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.0898847466121);
    msg.setSource(21562U);
    msg.setSourceEntity(237U);
    msg.setDestination(24438U);
    msg.setDestinationEntity(7U);
    msg.autonomy = 158U;
    msg.mode.assign("RWSLWMXNSRLGMJGKSQDVEBPPZHAAURGJOJDTPRVTGQPVRCVWRDMGFJXBPVNBLVM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.178625619939);
    msg.setSource(36989U);
    msg.setSourceEntity(178U);
    msg.setDestination(47203U);
    msg.setDestinationEntity(101U);
    msg.autonomy = 175U;
    msg.mode.assign("MJFDDCYGGHGEPRLEKNNKRATXMOIQRNLCQTYQRNNREVUHDVEAJHYLSXDKXMBRZWCMAFBQZLUFGMZSDYKUUCQXWNBWFQWRWWGUOILBTBVKJNYJZLGEGCZPCVVTJIEJWHUMAMVDZIZPDRLOWKLURIHWTLDACMJCPTYBZEHIFOAKTOTGFESYBBTPXCFMFD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.434280436732);
    msg.setSource(62080U);
    msg.setSourceEntity(80U);
    msg.setDestination(19809U);
    msg.setDestinationEntity(187U);
    msg.type = 111U;
    msg.op = 96U;
    msg.possimerr = 0.488544807541;
    msg.converg = 0.300859408978;
    msg.turbulence = 0.552312507064;
    msg.possimmon = 205U;
    msg.commmon = 75U;
    msg.convergmon = 208U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.313626908917);
    msg.setSource(31430U);
    msg.setSourceEntity(163U);
    msg.setDestination(62389U);
    msg.setDestinationEntity(115U);
    msg.type = 174U;
    msg.op = 94U;
    msg.possimerr = 0.222119634216;
    msg.converg = 0.738550562282;
    msg.turbulence = 0.228650719663;
    msg.possimmon = 10U;
    msg.commmon = 198U;
    msg.convergmon = 205U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.595054199912);
    msg.setSource(22543U);
    msg.setSourceEntity(41U);
    msg.setDestination(53316U);
    msg.setDestinationEntity(89U);
    msg.type = 54U;
    msg.op = 31U;
    msg.possimerr = 0.515125844181;
    msg.converg = 0.33897392145;
    msg.turbulence = 0.731327928437;
    msg.possimmon = 230U;
    msg.commmon = 70U;
    msg.convergmon = 161U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.417160396566);
    msg.setSource(53956U);
    msg.setSourceEntity(113U);
    msg.setDestination(7080U);
    msg.setDestinationEntity(166U);
    msg.op = 253U;
    msg.comm_interface = 119U;
    msg.period = 21378U;
    msg.sys_dst.assign("KEJSRJFFJFUOJYIAKYOXBBPMGJDLISVBDMINTXHQSWCUTZVIOXQZNCJQZYOITNMANGYOPSIWTOZXTHGRWDQMHSXQILXIUKHPMSJULPFCHTEUFBGEWYRCNCVKZMYGOERDEVKLYERFXVCASBSFAKZNZHEMNLQRPKDTWAUDATHBGTPUKFSCLMFZGURQVIYHEKNMWMPXDWJAQBYCHVWAPLZAXBJLRQD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.305785396417);
    msg.setSource(5145U);
    msg.setSourceEntity(170U);
    msg.setDestination(58514U);
    msg.setDestinationEntity(82U);
    msg.op = 185U;
    msg.comm_interface = 73U;
    msg.period = 39538U;
    msg.sys_dst.assign("DQEKXZGVCEKDECLHZXYRBRZWCFKGMAGFDSTISNYB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.755057640276);
    msg.setSource(55842U);
    msg.setSourceEntity(151U);
    msg.setDestination(16549U);
    msg.setDestinationEntity(80U);
    msg.op = 217U;
    msg.comm_interface = 18U;
    msg.period = 26295U;
    msg.sys_dst.assign("YXHPYXGZBFCNWBQVCJBKWSOPHWRSZWRVYVTZNLGZVRSKFXKMFCESKEYQTLLWXEGVGGHANRUYUOTNNAWOINXAJDLBYQHOFVFTKLMJEREPJDCJRDUIUYJFQFMLKKSYMPMBDFSPAHMKVQEOLEQTY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.067685068376);
    msg.setSource(32112U);
    msg.setSourceEntity(61U);
    msg.setDestination(45080U);
    msg.setDestinationEntity(226U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.861834676675);
    msg.setSource(41404U);
    msg.setSourceEntity(243U);
    msg.setDestination(13376U);
    msg.setDestinationEntity(206U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.722265948299);
    msg.setSource(62291U);
    msg.setSourceEntity(26U);
    msg.setDestination(13919U);
    msg.setDestinationEntity(194U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.155775413808);
    msg.setSource(40729U);
    msg.setSourceEntity(240U);
    msg.setDestination(64905U);
    msg.setDestinationEntity(23U);
    msg.plan_id.assign("DEOACEMEIOQYXYKGDLIXYZKPPFOIQCQDBDSURFKZHPBEGNJLNASJDTQKTUXUZQWACAPZIIKXQFRPVGLWRJLKRUEEVBGRIFHYTFDYLWJCAHOBIYHVSBXKTHXAFGHSCUQRIFODUGPWJRUMEOBLSNUNNSMBMYTCWGJXCWUDVXZHCYDWAMZLHKQFYKPVARETVBNPOAFAKISVSTMPXGJOWJVNFJ");
    msg.description.assign("AYZVKCGEGWEWNVZFGHASMDYMFBJOJOYKUDPQPUWAVFKXZLMSQXTYAMCWJLNKTPHTROSZUDBHDIWLOIEVPMXRLIQDQTCXEHLGUJSFZRSCQMBXBRBGFDWSQIBYYVEFFYJKNCZEDZNSVPSHDTKTAACXRPHLMJXQGMBTXIPEUURAEWRMWZLIBOKRKFNGVRVGNKQXNMNIPCNYHJTCZTHBJUSARIWDOLFVHBOZGLHELVUIIGYTWFCOAOUPCUJSXP");
    msg.vnamespace.assign("WCDNQRCOZOCNXFHOPDPSLNSE");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("KFPUWQIVPNQBWZMXRUSTQFGGAMSHGSCDRXHFPHEPMCCJAESIZLXKRISTYKGEXMAFDMDCDKLNEIVEJKNOYJKAOYXBVLLURAGDBFQBRVUUEPTPFLQZWIOJLADDINQSOYWLVMJZCZRNOGBYERGOVCOOAFDQTTTHHBJXMBNFSXJZCUWANJMHJSDYLHZBBMOSYZAQTGNPG");
    tmp_msg_0.value.assign("YXKTIAWMPGHINPXFATVEIDWQDABLSNFQIGWONZRHYMRGBGFXJMKFNMAYLPRGNABCEJIOSYMGWVVRYQZLTSOGBCYFGSVENDMJAYRTRHCEDULTRLSVLMWFNMKZAWXFNUPTPPDKSHFPRQKUUXKABEHJCQSULXSVTDDYBPBVGCCXOUSLRBDZQVROPXIOZIJEJXITGPZHILUVUCOHLZZCJJNVECWCKHWDOW");
    tmp_msg_0.type = 42U;
    tmp_msg_0.access = 80U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("OIWKWAXUOGYFEBBNGRRHNGLXDQPZJKCOQLMHSNOZHGOFZWJKLQPLCEKQHBVAOAASTIULUXSMMKEZJPIJUNHSYOSTJTFCEDHOLIXYVVCDMKNMNSTAZZBIYVIXFYBQAAQKTSOIUUTMGUIWJDTXZYMHRJIGYXWAUBGPDABFQQWZWWCPRKEXPXMDIUJOJEWYLDVVPCFEFDFVRAZLVRLEURRPKDYXSSNLHBHEDHGCTYNFFJRMGSPCMCP");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("WLUJVTRONUYFAIHDSFFCQWUQYWXJVXVNBYYIKPCJFRHHKOKRRECESYRZEMUSAWXXZGBXLQBQGECMEZH");
    IMC::Takeoff tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.286117304449;
    tmp_tmp_msg_1_0.lon = 0.0778578820127;
    tmp_tmp_msg_1_0.z = 0.528772773327;
    tmp_tmp_msg_1_0.z_units = 125U;
    tmp_tmp_msg_1_0.speed = 0.707378194311;
    tmp_tmp_msg_1_0.speed_units = 32U;
    tmp_tmp_msg_1_0.takeoff_pitch = 0.729994375171;
    tmp_tmp_msg_1_0.custom.assign("CFYIAZHXBVXTAVHHECBELVLOPQWIAXIVFVCJASZZPLOCNLWWYTEOBSMDSTOYJUQOSJVRFUFGYIUMUXRYNJFMYDULMWBPZPWDCKNKYRLSOCTUQNUNTCQKHRLEQHFWDKKHXMEQMGEDJQOGRARFZEDBLQICFVWFHMVBHMBHZSGTRUYNBINPSEMWEB");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Airflow tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.va = 0.617251838455;
    tmp_tmp_msg_1_1.aoa = 0.0432067485634;
    tmp_tmp_msg_1_1.ssa = 0.955687697875;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("QCSWAGHPOUYVG");
    tmp_msg_2.dest_man.assign("ENLYYSZTMLFXWIKTEUOZVAPHBLPSNSONAIRGLSQMAYBQBXSZXSAAEKWZHWWOSLRSUGNKHDVCAJVYCQIXIXMPBRTVJZKHFOBRJWZYHGHECIDPYIDKCVFUJMEOMMXPZNRLFDNJVXLKVWNDFZJDGLYIXCEPTUHTAITIECFYVXUAJPYQUWUGXJAGRMPGRLAKQVOWGHJQOUDPDVGKUMTIDBUWCBQBGRCDKZSEMOFSTJQFQBBC");
    tmp_msg_2.conditions.assign("CWOEVRCLUDQXCOCLDDWQMGTKBYSNJHNLKUKYJZOJPXFOVNFMWKZIUTYVGIQEAMKQZFHGERJSYSBUHMFVZZKPXNRGILYRJNULGABTRCVDZFPKBIGPFOQPOBHASBAUIJROAGCSLDIUFOWDRCHRCYHNYTMHNVURTPFCPOTMZABEIDBUXLBVQXODWIGLSSUXMFNWYSJK");
    msg.transitions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.6564705949);
    msg.setSource(19215U);
    msg.setSourceEntity(41U);
    msg.setDestination(19328U);
    msg.setDestinationEntity(215U);
    msg.plan_id.assign("PHDZFLBDPEQOHL");
    msg.description.assign("DTUQAWSNYBFMBFLNWUNNMKHUBSZOYECHFFVGXOZIMEMIUJGEOGAYEVPDPTQLEMJNRBPBIJOYRGMWYSWV");
    msg.vnamespace.assign("AADZLZCKJEENVZUZQELIOKIUAFMJVFUDFJOLNXCOFYIRRKZINTYGPYHSCLPERGDKZCLBVEJSGAXZAPLHZDTNULIZARXSPATFSDKNOIDPTHJMEHOTCVBAPQMCWDMOXWHQAGNBFWLVTQGXSQMMYNPHJNJWHUFRKVUGIORDEK");
    msg.start_man_id.assign("OMUMJXDBWKMPTYOETJOXVNKSRVHTOHIIDYDWGXATRLOLNHSMZYWJFYJXFEEHTPFBBZXMDEEAHFHPXPJRYIOYHDNICNZANCJRMFLVODBUSRGQBUOFKCXKHZBBFDCUISYJFGVNOUDTQWLRT");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("YPRKVWZUJBEFUWOGVVD");
    IMC::ImageTracking tmp_tmp_msg_0_0;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::AutonomousSection tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.lat = 0.306965306124;
    tmp_tmp_msg_0_1.lon = 0.61165252959;
    tmp_tmp_msg_0_1.speed = 0.324488760625;
    tmp_tmp_msg_0_1.speed_units = 145U;
    tmp_tmp_msg_0_1.limits = 157U;
    tmp_tmp_msg_0_1.max_depth = 0.737276462258;
    tmp_tmp_msg_0_1.min_alt = 0.272046193545;
    tmp_tmp_msg_0_1.time_limit = 0.361364347515;
    tmp_tmp_msg_0_1.controller.assign("FFRNOJMGDEMINLMNAZI");
    tmp_tmp_msg_0_1.custom.assign("IANZWWVCSSJWDETAUBRBFHMIQKPNQUTVZAAHIKGDGRSAWOCTYXXNWLMGIKCRMLKHPPYEVYMSPTKVDJXHOWVAWLFXAGDNYYQKQMINDDMWEIHGGDBOWXVSSAJNPOVUMFDCTFBBWRUHZTDGRRYJ");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::SetPWM tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.id = 23U;
    tmp_tmp_msg_0_2.period = 1907761972U;
    tmp_tmp_msg_0_2.duty_cycle = 3333392958U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("CSGPGDWBFSIYDIFRGMGMDCSDBBUTUXIFOHYBJLFEVUQYEAGGXFTRULKLGOCGQZVEMQHQCPBZHYRTVCTJOKMDKHPAOQNMNBROIFWCJAANJJVJDKVGWNNXIIXEMKPRNLNMFCLEIYOBTDHZPZDAXUQHJVVQGKZKLJHWTNMXBRAEBPNPM");
    tmp_msg_1.dest_man.assign("YRQASNMFBAFBDEDKZNRWSQDWRZELTBOGBLQRPULNOIL");
    tmp_msg_1.conditions.assign("CFVLHAEMGWNMYBASODHXPIBKGS");
    IMC::LogBookEntry tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.type = 52U;
    tmp_tmp_msg_1_0.htime = 0.851739259474;
    tmp_tmp_msg_1_0.context.assign("GIIPGHVKQDWJMZLSJPQNVEHUWHZWYVVXUKOLIIZFMMCYXZTTPXFGUTRRAAAEDPMTGUYMIUBTVOFZHCEKKRBONAZSXNCDWNKKQJTSKGOSQPXUYHFJFZNQRTUHEICRWLMNEGBLYMQZJPPDAYNPEXLHAOFLEASOYZACOJFRMM");
    tmp_tmp_msg_1_0.text.assign("OZGQNILQKBDJYVSCJZOJVNUILSGRFYWNPHIRDFDHVVSHCCSCNOMGAFFKTOCVHPDBGMXGVMPJOVOYAASEFBQQXURDKJLEHJFSGRCEQZQAZQH");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::EntityInfo tmp_msg_2;
    tmp_msg_2.id = 120U;
    tmp_msg_2.label.assign("OGPQFRUMKDYCELNSFAFAKFBMMIKFSAVKDILERMQOZINHXJSBQEUEUKEUVMTLFPNTXTGYBSUWXKWSIIEVNORSITWHBZMZIRYOZXDZNCRPXMWWNHYGKAVCWTIMABDSNVWXTQDMQHRWTWQGBMKPJCFFZGZZYLSYLNCYHCYAGIBDORCCPAPLXJTJGTLEOQHGUOJLNVJHPRVHODBCDWRDOUQ");
    tmp_msg_2.component.assign("BHDAQOOTHAQLYEFOPUFIGIDNYACATIVFVZLVFMNXMPSPJAKNTLIEETEKMIJLHDMRXGZECDUWROJBBYYPXHIUJPCYTXCRDAXNVDDVFBOWBSPVKXUISAKJWZQPJWYUWQEJCSFZKOLLUODUHSXPZYWQMKLBWSVVCALGPVJKRQZGP");
    tmp_msg_2.act_time = 27741U;
    tmp_msg_2.deact_time = 17696U;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::FormationEvaluation tmp_msg_3;
    tmp_msg_3.type = 213U;
    tmp_msg_3.op = 121U;
    tmp_msg_3.err_mean = 0.338501484692;
    tmp_msg_3.dist_min_abs = 0.709429671388;
    tmp_msg_3.dist_min_mean = 0.724289059021;
    tmp_msg_3.roll_rate_mean = 0.460038593637;
    tmp_msg_3.time = 0.88667381292;
    IMC::FormationControlParams tmp_tmp_msg_3_0;
    tmp_tmp_msg_3_0.action = 245U;
    tmp_tmp_msg_3_0.lon_gain = 0.138687186002;
    tmp_tmp_msg_3_0.lat_gain = 0.625375110896;
    tmp_tmp_msg_3_0.bond_thick = 0.62571563064;
    tmp_tmp_msg_3_0.lead_gain = 0.146738625022;
    tmp_tmp_msg_3_0.deconfl_gain = 0.254161933002;
    tmp_tmp_msg_3_0.accel_switch_gain = 0.417804762576;
    tmp_tmp_msg_3_0.safe_dist = 0.712880777664;
    tmp_tmp_msg_3_0.deconflict_offset = 0.0818585293627;
    tmp_tmp_msg_3_0.accel_safe_margin = 0.185086074921;
    tmp_tmp_msg_3_0.accel_lim_x = 0.813941698414;
    tmp_msg_3.controlparams.set(tmp_tmp_msg_3_0);
    msg.end_actions.push_back(tmp_msg_3);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.576977714726);
    msg.setSource(38642U);
    msg.setSourceEntity(190U);
    msg.setDestination(62788U);
    msg.setDestinationEntity(72U);
    msg.plan_id.assign("CNQRIIWQGHMFSXTJPPIVLEOYMSWYYJRESLPSIGYROZHRSZJNODHTXQFQGUTCCCNUBKNYNQHBJKEAVTBEWAFNXKGZADKOPUONXIOEYDLRZGFASZUZFA");
    msg.description.assign("QVWVRGYAYLVPRULAZJSIEWKYTDFKQJCFCNQFAEZCAFZHTPDEILTDNOKZQMZGWFWKSGSUXNWQAUERBYBPOSKEFXOHB");
    msg.vnamespace.assign("FZZOTQNCDWXJQUGUWCIQRCTHTIQOMNWWQRWYYVKMXEAHWOMKAVRMVPIFXQNGM");
    msg.start_man_id.assign("BMEKUQTPZSOWISEPYVGWMFGKQFTSMYGOXAMOEXXUNJBQRSCGKHCOCIVZWNOFRJEPGZSACSORSLJEFTQFUXZLDWZBEUXLVNUOCWYDXDVZRIMAVGBYYJKDEYSMFLJHHLMQYBGLMNKQQHYIMBTRWVKKKUYXWAOJDNRBHZQERPHAATCLJTXPPTTASXWVERAAWZBDNFVKYDNCHQV");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("XCVEOSWZWWWBMQJTBKJAKEPTHWHLVKEVE");
    IMC::Land tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0737425258802;
    tmp_tmp_msg_0_0.lon = 0.198358251294;
    tmp_tmp_msg_0_0.z = 0.699801832358;
    tmp_tmp_msg_0_0.z_units = 132U;
    tmp_tmp_msg_0_0.speed = 0.0168174926014;
    tmp_tmp_msg_0_0.speed_units = 172U;
    tmp_tmp_msg_0_0.abort_z = 0.199038155013;
    tmp_tmp_msg_0_0.bearing = 0.858998678937;
    tmp_tmp_msg_0_0.glide_slope = 223U;
    tmp_tmp_msg_0_0.glide_slope_alt = 0.186303830887;
    tmp_tmp_msg_0_0.custom.assign("VKAKFTJXVKCZOEOUDDPDYTNWGKQKBKLHJRVRBUNHQWEYVUCSUVNBZIYEZSXLBDJDPPSQGXGGFHEKDLANIXIDTBTMZGRRIGTOUJZHSELCDVAMRTKHCCIFJEAWFQSPXWSYWWSIOKMBEOQVBAYCMHNDRTOVJBLJHZNHQYOFQRSFXZRXSSFUCMATCVFORLGBXONIWZDLJEHJOCTWMUAMZYYLNRFPGQIPVI");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::SetServoPosition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.id = 134U;
    tmp_tmp_msg_0_1.value = 0.43462953219;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::LblConfig tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 140U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("VFCPKKZNNOTJVATLYMXJJHMSEADWMZKRIVLZCLLQXDDOBAFIQYZOBNYVSEBGRFXLUZEXHYPRXWBYRWENOQOOYSIALQPKXDXNIPERWUUPTITPFEBKMBMVNVSUWJJZTQFVOISDCUGKWZGGQJTMFVQSLJICHYPZWJWMLJAPTZKHFGHPEUWBPYMLKUNGGUUHCSJOHZQRNIGOMKFCAXKDHBSXHGEQAFDRXAIMACYRRCRCODGBNEVUITL");
    tmp_msg_1.plan_size = 32322U;
    tmp_msg_1.change_time = 0.505919496202;
    tmp_msg_1.change_sid = 26848U;
    tmp_msg_1.change_sname.assign("QJDLJXPKYVXMLBJXEMMFZIBWYMHVYKSFSXWFYWBZEOOYRLYKINZHDFIMQZPDPUAHOVKBIXRNTRANXKOXOTAIYLYDEDVZSVQXLCAZKNGBHWGEWBJWPCFARQSUSGSYVJQIDUTWSATQFOFOCTGSFDHWKPKGXBWINQVDRRMBDHOUCACTGUFEECCUCGIXMTPEJRHOFLICVNGSNECVTPAZKUREUKGL");
    const char tmp_tmp_msg_1_0[] = {19, -118, -16, -113, -28, -82, -2, 102, 45, -7, -91, 12, -104, 31, 118, -59, -101, -116, -39, -97, -63, -119, -111, -124, -9, -68, -9, -42, 16, -19, -71, 27, -9, 97, -92, 90, 8, 56, -31, -45, -59, 20, 107, 45, -114, 43, -99, -1, -67, -30, -125, 11, -27, 46, 18, -76, 13, -68, 72, -80, 72, 35, -55, 43, 50, 20, -10, -2, -104, -109, -73, -99, 5, 66, -118, 122, 84, -32, 96, 89, 107, 95, -18, 71, -55, -86, 55, -101, 118, 65, -25, -18, -96, -47, 98, -93, 106, 122, 82, 48, -110, 82, 72, -89};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.718454721385);
    msg.setSource(1637U);
    msg.setSourceEntity(32U);
    msg.setDestination(60925U);
    msg.setDestinationEntity(166U);
    msg.maneuver_id.assign("QIIWEMBHAXNCSSFBQBGGXZPQBJNHFTHMTQTUVEAMENUWMGNRCHEZFNZKWEKRFEPVKOLYYUBNVRJUNMMSZELILDGLUITKYGZWJPVEKIRIECZUWLKSHKLMOCWTXHCMCHOULAVDAJYCWYAAUKXLTJH");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 26530U;
    tmp_msg_0.lat = 0.287966540398;
    tmp_msg_0.lon = 0.314454096605;
    tmp_msg_0.z = 0.480916981837;
    tmp_msg_0.z_units = 121U;
    tmp_msg_0.speed = 0.145231267499;
    tmp_msg_0.speed_units = 195U;
    tmp_msg_0.custom.assign("GKYTFTKRBPFTJUKXMMZGRYXKHLBIBFHEYXZMWODLWBJMJOVCHCNXBUJMFHPTCNWEYQCRXLZXZBXUDGTYKJVVLPOHWSRTSJDAXNKDOGIQIVBIOCHQORWGGFRJSFDOPQRENGPDCUVMYASUCHAFAWQAVBTSCLDBFETNCPAVBLMDEQZLLZZWOVIUFMEVZGTIQPVAJQEYLZYYINLPDSAXE");
    msg.data.set(tmp_msg_0);
    IMC::PlanControl tmp_msg_1;
    tmp_msg_1.type = 166U;
    tmp_msg_1.op = 20U;
    tmp_msg_1.request_id = 64133U;
    tmp_msg_1.plan_id.assign("OGGOWHRDVUJSAWDULJYXEMQQJTSGBLUASKBLUKWNDRICNGACYKIFEPHEXCUKFNUMTYPIHPTMRXXJRXGCRZWSNMAVPQCVCIZFBPDFNFGBYUPSERDWSVBJYMICFOKXOANBDOBHTZRJALCZATDNTPTTZAEHEMIWNKOSTKHZXEEIIVWQHVJLUYWCFQDYIYKRDIVLMMQPVEBSZGFTWJYKLKCZQGLQO");
    tmp_msg_1.flags = 51746U;
    IMC::EmergencyControlState tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.state = 160U;
    tmp_tmp_msg_1_0.plan_id.assign("HCCUBKVACCUMQCSURRUVNXTGAFWFPVLGPUDVHZHGKTWHIYXPBRIVEZISQCNSELZEQJZNHLKJILAXOEBZCM");
    tmp_tmp_msg_1_0.comm_level = 212U;
    tmp_msg_1.arg.set(tmp_tmp_msg_1_0);
    tmp_msg_1.info.assign("YTQDNWALLIVZDLRUFLMQRKNRBSJFSPHFVZPDKMCRVAMAMMBQJZLUHSQXSWQWVMVAVCIXXKXZYADSCFYOYWKPKOHAWIPCZWEFBZDTCWMQXQPOXNOKBICUAHBUPZMWLGJCROMNGHUOYIPRFVNUOOEEXXFUKRFYJGJYLXEHEGUDTJANNXDILJVNQAQIRHWCESEJOBUZJH");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SystemGroup tmp_msg_2;
    tmp_msg_2.groupname.assign("TZKHKHVROWEVCJYVHIQKMJLGGIRTSIJTSKOZAOWAMEACXLWPYBRPEUOPMUWWRJODQZY");
    tmp_msg_2.action = 36U;
    tmp_msg_2.grouplist.assign("PGGZZPJCMAWWWNAVBLETEBBPUOZWVXQHWMANBLVSOTCENHMUUL");
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.918201958646);
    msg.setSource(19533U);
    msg.setSourceEntity(114U);
    msg.setDestination(60097U);
    msg.setDestinationEntity(129U);
    msg.maneuver_id.assign("XPCBVYFIQJDFJBUVXGHEONWABFXULDQZXIZBDCGKJHWGZVKAISDEWUASMODIUNFAJCYJCVNISYWNZRIGARUTQXYGTLQICMRHGEAEMVTYGYJMRQXHLFVNKMCNHTPKQIDPZNRQMYGNILSTOUITVEY");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.29150102711;
    tmp_msg_0.lon = 0.41912150237;
    tmp_msg_0.z = 0.600120928678;
    tmp_msg_0.z_units = 99U;
    tmp_msg_0.speed = 0.0437196504134;
    tmp_msg_0.speed_units = 105U;
    tmp_msg_0.custom.assign("ZFVIKFBABPNPOKHUSZACMUCGWZTTKOBVCHXPYEPEDTQORLLLBURAUNUVWBWOALJXVOEQFMVAPTYDJKGEIMJBBNFYIIHRJRDUHHSYDESUDHHDIDCTGSMQXSJOYDVQGO");
    msg.data.set(tmp_msg_0);
    IMC::LeaderState tmp_msg_1;
    tmp_msg_1.group_name.assign("TQDHTKUJTWQPZVHMUHJIBOQQNFARZHRGAK");
    tmp_msg_1.op = 183U;
    tmp_msg_1.lat = 0.576655119305;
    tmp_msg_1.lon = 0.242163972394;
    tmp_msg_1.height = 0.679950769369;
    tmp_msg_1.x = 0.740153461837;
    tmp_msg_1.y = 0.866100302587;
    tmp_msg_1.z = 0.2999378209;
    tmp_msg_1.phi = 0.562714891274;
    tmp_msg_1.theta = 0.542123346653;
    tmp_msg_1.psi = 0.739361018208;
    tmp_msg_1.vx = 0.928988172342;
    tmp_msg_1.vy = 0.98991347445;
    tmp_msg_1.vz = 0.52080583355;
    tmp_msg_1.p = 0.535969157092;
    tmp_msg_1.q = 0.56424678304;
    tmp_msg_1.r = 0.81891043829;
    tmp_msg_1.svx = 0.355404262513;
    tmp_msg_1.svy = 0.174357469888;
    tmp_msg_1.svz = 0.130008960766;
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.124979265944);
    msg.setSource(6789U);
    msg.setSourceEntity(172U);
    msg.setDestination(58065U);
    msg.setDestinationEntity(231U);
    msg.maneuver_id.assign("MGHCEAINJSXZDDTMJKOHDQLGCOMXGQGPNOMDZIRVYDRJMHNVAHLYEBUBCBTSJIWOPONWZZYEBUKHJCUHSHTEYTRVONYCEMJPLSLBWUYDZAXYERTFEUPAJQFYWGTFWRKKUXFOAWSWJPQUGIVCOSRPNIKODXCZUNGZIFXMGRMKVBCSRYMJFSNVQDBEVCGHZQBLJVXKTICVYFHWAQKNERPAFNPOQZTPSFXLILBLTFRQBAWDLDALKSZMUVXITI");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.880433420004;
    tmp_msg_0.lon = 0.666019546738;
    tmp_msg_0.z = 0.476731328632;
    tmp_msg_0.z_units = 247U;
    tmp_msg_0.speed = 0.917254841127;
    tmp_msg_0.speed_units = 181U;
    tmp_msg_0.takeoff_pitch = 0.798047118761;
    tmp_msg_0.custom.assign("JWVWPXUQCSDXVIALAPOISBLGNJBKGRIXVTDHDOIFPAQIZSNZJPTUSZORFFEQWHXJYXVRPWSCSCUNMJLYCMKNMRMSSPOCDHMDEHZMQVKALEQCQZWBDBTEODUPWVYNENGDHMECZELZUIWELCDOOBNTXHPXUUSYNRTZJJNYEVBDPYRVQGQCKLSKFXLTMFCWIHWTKKQIBJBWY");
    msg.data.set(tmp_msg_0);
    IMC::CustomManeuver tmp_msg_1;
    tmp_msg_1.timeout = 52945U;
    tmp_msg_1.name.assign("COFIHTLKTSEABLKPOCYQDKAWZPQZUSMBDBAUBCSOMQCREFPXMRWFFTDRPYGVRLXLYLBNAFAFMNNNMMWQLHLKLHVYLVUVBJIXMTDETYFPBMVEUYE");
    tmp_msg_1.custom.assign("AEREYYWUYSQDBQBPBROBFWCUCARIPWFIJUHCAGUMLJXMOGLSXQOKTFFYPYHHRVWQCBSVQVVDZVQAUDMXNTXLDJKQMIVGONNKXWWNQPGGZYPZZCDBKUVMLHGIYEPQIZPTOSRCSRXGJNEOVAQKUFSBYCUTTDAEEXRUXEKALVHIGFMNLLKSWJFECXSVFKTYZ");
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.679323969446);
    msg.setSource(43872U);
    msg.setSourceEntity(212U);
    msg.setDestination(23344U);
    msg.setDestinationEntity(217U);
    msg.source_man.assign("GHDJFNUVZRAAUZDJESMNDWKHLVQIYZSRNEOENFFKOJIMHXKTHBPRPCKTUAOAWRMYKCNGKNJQPOTXLZGUFDSVJJOZWLCVWBYQEMWBIUQDWNLUYCNSBNZEFAIZFADITYXAJYLYWTZGEMCIIFFOHPNPQPYKPQXECVYGQQSMRAVTIMJKDPASVIZLFYISVBTTMGRAPQXHBDTTRUBOCDHJXMXGGXOU");
    msg.dest_man.assign("HXXPRVHFPWTKDJYXNGLLFIEALVPMNTTDCLYMZXSKJAUGGOONITXSOOKBHRAQEXSBNLLB");
    msg.conditions.assign("XVJPOGCJSJBBKBOBTVEHRIQOAPMPTXNSAIAVSUCFRPHPDICUXSHGOEPYFLBXVIZSYDVQFQYIUENMDFUEMYKXZRNHGSTSSUNJUSLXMEFLQNCOMZIDYRBTWHDYMTY");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 9728U;
    tmp_msg_0.lat = 0.856305730659;
    tmp_msg_0.lon = 0.0162470985132;
    tmp_msg_0.z = 0.108593546334;
    tmp_msg_0.z_units = 221U;
    tmp_msg_0.amplitude = 0.669560386677;
    tmp_msg_0.pitch = 0.219905050292;
    tmp_msg_0.speed = 0.260204975969;
    tmp_msg_0.speed_units = 244U;
    tmp_msg_0.custom.assign("JWYXOTRMUBPKAZOCTIKRFZPQLQTWLOTPEDFJKQPDMYSVRCLAQBPCDAAHYLBXEZLNAPSWYMZUDVKXLVIBBSHJHHKSVPVGMSTDNTHJWIZHNNPONCLQLFGNQJKARXSKTUYUQANEDIRLEHEFABSNDVXFBFNOQGFWYCNCAYRVESJLYBWETZIWEDEOGMVWGUSQSGKYZTGPKIRMCJMCEURPOWFRBMVZRXGWXUOHJ");
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.721915878178);
    msg.setSource(26502U);
    msg.setSourceEntity(152U);
    msg.setDestination(8724U);
    msg.setDestinationEntity(50U);
    msg.source_man.assign("NEKVJOBDWOXEOAXNSYLGFNRUEQQHFULWPJTPAEDPXUIVNOLGRPABQUTCOALCISQRMFU");
    msg.dest_man.assign("JRKKJAQHOSZTQNXTJFPBOGFIYHWBNHARZBXWXYIKYLBHPLZGFJSDWZQBBPFHMWQLUSCXYLGIYSIRHIOJTXVWUDPQAINWCNRLDQLFOPXYMQODHDJROMKCCAJMBTR");
    msg.conditions.assign("CFVQOSVTESVFRSMXCSCEYPDQGBWTIUGWDEXUHMFQAOYRAIWIKAPCUIRNJKGMQZTRXKA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.866206257211);
    msg.setSource(36016U);
    msg.setSourceEntity(150U);
    msg.setDestination(49360U);
    msg.setDestinationEntity(24U);
    msg.source_man.assign("KREZJXMNZZFNDKCPHKDEJSFTDETPENCPZWRFNAMDURLNSIDWAFVBWAJHEERSRGQFIOCWUFBJGHJKKWWLBPUYXKNAIMCSUILVTBQIJLHPRYNQHSLCMIMTVXDIQZICYHZMMGVXGEHWMLUTTJGVCUCUENWQSORLYZPOBYFDFAKSNOWXYBXKMVJUUXGBBYTESOIDZVAXTZGAYSLHVOMCGLRKNVJDAQFBXPYFGU");
    msg.dest_man.assign("WHGIXFPZTKALMAIBMUVXSMORFBLGHCVHNZYZATMOLEXXN");
    msg.conditions.assign("JBDALTTUYLXRYWCOYGVUUCIGKSJBXWVQVIGCITWUVGCEZAMQOLSQGKEZPHPSOKNAMHVPSMYESEXDTJLHIOIRTHFDLZHFFPATVBZDGPMMDJXBNWMZXVEKWQAGOBYDPSZFNQGGIVYTWRRZLFUQDBBPCKXIQLUHRNWOHNODCWRHQSRRCKMTDNEEMFLIIZSUFRANHOJKLYTJFHZBMDYLYPJUSJKXPKCYEAZNPXUATWFCUEAJONJQGEQVXBMSACB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.262490617023);
    msg.setSource(25442U);
    msg.setSourceEntity(42U);
    msg.setDestination(38129U);
    msg.setDestinationEntity(151U);
    msg.command = 7U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XQANXUVCKKCRKIPVLWVZTBVRBBUBAMLAOWTZSPMCCYJEJLSGWIAVTJSJNBJPCKGSOYGDNLFUETIAXEDORSFIRVPFERFNZBDQXPAWXNCMUEZWVTVHZXTSFGUZKFFOY");
    tmp_msg_0.description.assign("WBZJFCHFDDLBOUUNLMMZHGVESTGCKGOUYHSJBHICTLRNMLOISQEZFJWLYBIKYFOZXXAPTWIQRGYOUXEZINSHYLHUUEHETUXNARWDTKEPOWWPQRJKTJGWZCOAUOSF");
    tmp_msg_0.vnamespace.assign("LWTQZTYJMUCIQOARONNESXPPJTYDXJQNOYXNGNDVFURGHZFUIMZQKFWPXGYTOIJECPWHRASNGVIOPXCQYWHTJCLNRWYKRIHIERUKOBUBAOVUGBTAKLUXSCCTICCRODDKAWYJVURRJJLSNGRAETQHMPZFQBZYSUAOOAMXFVLBKFSMZMWQ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UYGQOMMUMSVZFOWTIQ");
    tmp_tmp_msg_0_0.value.assign("RJNVGNAHDUCLTRSQF");
    tmp_tmp_msg_0_0.type = 106U;
    tmp_tmp_msg_0_0.access = 1U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("RFFJVWIFUCAMQVXKLCPBHWZHUFMPOPEPIVKEHYCEVOLGAJQGMTTYLEOJVUWAKCKJXLDFMTOGQLQMQAQPYBGTIPHDZ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("KABKPZFBIAXSCPYOUJZIVJGMDBBQHCAGQMWEIRLRDJZHBXFYPQSNPODHEENZYUQDIWJKZFVNHSZYMXSGLLDDEVWURURIFQQKMPASVMMOOWYLEERXWGJFGWPGXYPJMDATTIDQDHQGWTRPK");
    IMC::AutonomousSection tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.0349190201253;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.849009846097;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.872128811021;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 14U;
    tmp_tmp_tmp_msg_0_1_0.limits = 123U;
    tmp_tmp_tmp_msg_0_1_0.max_depth = 0.317401002805;
    tmp_tmp_tmp_msg_0_1_0.min_alt = 0.86403064011;
    tmp_tmp_tmp_msg_0_1_0.time_limit = 0.693994920674;
    tmp_tmp_tmp_msg_0_1_0.controller.assign("UBAVUIMHWPAGLLTGIBOMQNHZEYDHZYIZQOSWRZNKWSXJPQXYYGCQRFVFPTTCOUGPJBLTEPNLGEKPAMTZNJZZXRVLJBFCBCSVOFDWDYJQRUTRASUWPVJZHCJOBLSULGHNSXSKEXIMEKFKDXGHCRXAKIOOQOWFYRVLQMWPUCNGMWIJTPHIIXUSFXIKBJD");
    tmp_tmp_tmp_msg_0_1_0.custom.assign("FKMMBFUOTEZKOGIIVDTLXEOSYCVPSAZDRIZYYXICMRYUQXRZJ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::MapFeature tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.id.assign("LIHJOCERWRCSKTCRWMMGFGJITPZ");
    tmp_tmp_tmp_msg_0_1_1.feature_type = 65U;
    tmp_tmp_tmp_msg_0_1_1.rgb_red = 145U;
    tmp_tmp_tmp_msg_0_1_1.rgb_green = 188U;
    tmp_tmp_tmp_msg_0_1_1.rgb_blue = 111U;
    IMC::MapPoint tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.lat = 0.751755304393;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.lon = 0.73348213464;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.alt = 0.557831726689;
    tmp_tmp_tmp_msg_0_1_1.feature.push_back(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::Current tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.861152663948;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.486663056486);
    msg.setSource(45260U);
    msg.setSourceEntity(102U);
    msg.setDestination(21073U);
    msg.setDestinationEntity(14U);
    msg.command = 221U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TVNFLODXITJUPEQKIZMSQDKGBFTQILEJSVUHCNZDOZEAATPNWZLAXKITMMIKOQBJDHEURRYXDCWYJVJBAOBNOYKLVMOWXRMKHOFMRUZNBHYCHCRNOWXTYLS");
    tmp_msg_0.description.assign("MISRQOCLURBBRVYLKUWGOPJDIMNULANRTXYEZHVQBNYVHFECOZXYHRGACFCVTHQAXUFKTSGACPKFCNIKSNHXXVAMDKFPPNGUZOQFCCSGEUPCUSMOBJWSJLLOXYTZZTQQMMATRZGJJLWJHELGRMHYATDHBNSBUGQHXFKIJZZY");
    tmp_msg_0.vnamespace.assign("YKIBMHQGOK");
    tmp_msg_0.start_man_id.assign("TYIELUTCACPKPLKSPUUIWVIGVCFJUAYLRJFTHVTLZNHSJROAXBZNQUPOAFSUSPKQZFWWIUHCTIJNHDLDQXCARRBYYVEVJPVXRADLCWBFMBUGSGECNJWMHNMSQQLGUDPYNZZRKHWFMOWGNVMMMDYEMEAVKIGDKFMBQCBCPQRZNEXHWJIOPXZIBTAOLDOKXSOQZYTGOJYEKFKKZJOGLXATBQITFWEXSTUGMZX");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("WDYEGMEGGFFIBAWJDMYPAKUCOJEDVHESUQXXOHIZIKZAHOGNYADUSGR");
    tmp_tmp_msg_0_0.dest_man.assign("YNSOKCUKRNCRYGQVCECERYMYHJTVQZJOXFQAUJVICLTVBGAG");
    tmp_tmp_msg_0_0.conditions.assign("TPPRILNLXFTTVYCQDUCGNSHXNYJCKOYCJYVPVRLDJANXJWQMKEFEAOMFVOXRHCQUKIKBLINTRLWEXPAKTHUODNUZLSUHKCBBGBEVEKLGGSWWHATFFUBYJMICDBBXHGDWIIVCVIATIVXZRUOYHMSKOQML");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.13917415628);
    msg.setSource(46246U);
    msg.setSourceEntity(145U);
    msg.setDestination(59872U);
    msg.setDestinationEntity(196U);
    msg.command = 50U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZRIIBFFPUPBYKQWTFNLKAQZXVARNVXRECOHWEMBFQDKTYSPDBGFHZMBYAXANBSWACTWMWLWSSORIXNJWMFFTIWYIEDCJASGBKIRPCFUVJZMQANYAYZUJBOKHTGCDMQGXZVJZNIQCPBXEVKRVGQJKFPOLGHXSHVRUKPMSEZVDPEIYLGRMHHJOTY");
    tmp_msg_0.description.assign("TXLHDRXYMBWQEGKJIZTMLPGVIFTROXLATLPSUFBLCOIYLHVOHXCWFEAKGHOTSXHYSRBVGMVKYAEEUXRRNQLZASWZPOAJMCLKFLKFWEXBVQUYHXWEPNUVMANUHKVMSOJYYQTUJPNNSSGCCJPOHIBBNDQBGDPVIYEODKWOIQUTEZRZXFCTKQQNMCFZBUBJZDKJDXMVPUPNTJQSZENRABFEHWO");
    tmp_msg_0.vnamespace.assign("VSOEMUCIWYAHUSVTURFEPITWSQHABXOENHTYFPYASJCTUHBYQGLSEGWAPPJPTXDJ");
    tmp_msg_0.start_man_id.assign("EGNXTWGNDSONAWETOQRXPWNTCEPGBGKIUEFHDCLAFLABMMCJREAAMIYFXQEPWJEHRXFIYFRPFHJJIIYKECYL");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("DUHQRVLVFZSFFYIONPTIRXWGWZTRWPGGVVEGXXNNGQXLJOEMQLYSGVAVFJHTELBXIKGJEDCADCFMHWSPQWYJUCRTPZELDCZBXHGSQMBTIUHNJSZKRKZEUBKHOTLDISCFIKLPUOANXKPBHXTQUITNJNLEIZBEP");
    IMC::Dislodge tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 39103U;
    tmp_tmp_tmp_msg_0_0_0.rpm = 0.767086792645;
    tmp_tmp_tmp_msg_0_0_0.direction = 75U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("AYJDJYBZJPRLDDLJQOQNPAISXPBZGUHXUXUEBVUYMCLELOBVFBWYXVWTPLSSLNSSLQCMJRUZFCSANWDRAWFQ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::ExtendedRSSI tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.487989459898;
    tmp_tmp_tmp_msg_0_0_1.units = 20U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.434096425967);
    msg.setSource(12401U);
    msg.setSourceEntity(149U);
    msg.setDestination(43708U);
    msg.setDestinationEntity(196U);
    msg.state = 206U;
    msg.plan_id.assign("NNQHXBYFMTIWPVVFDIJSAXLPNVSBKPRERAKDXJKPXOOIAYDWREBZEBQCVCJMSVGDCIPLUODFQFHSJCNKTPAIQOSNBLQNRMRXEVOZJDGQHZDRYWFZGVOCFILEIGXDPBYIWGRBEFEJNZDVUQPOSSFSJJYWHACCSXUXHQGHWEUNJOGLFXYKWIGDPBYTKYLAUBWRLTUMHOTGVLXTUMQKNAJMAYHHCMGHUUWSAMOZNKCZZCTZYKKUVFRAE");
    msg.comm_level = 23U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.559883418236);
    msg.setSource(48075U);
    msg.setSourceEntity(218U);
    msg.setDestination(33050U);
    msg.setDestinationEntity(221U);
    msg.state = 155U;
    msg.plan_id.assign("GRFNZYWPQTUDMIWLSMCFZOCLBWXJQPZMAKBKNTGINDVCBMKNGPNTEHAGHLUUBUFYUNGFAGITXRYIBWNNUVKEBEMZUPVHCEVDIEAJFGXLQDGWLFRHOFDAJWEOIXCITZESAGNSDMJHYIVQRJIYZMJQDKHCM");
    msg.comm_level = 138U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.708166272137);
    msg.setSource(26034U);
    msg.setSourceEntity(27U);
    msg.setDestination(38609U);
    msg.setDestinationEntity(127U);
    msg.state = 3U;
    msg.plan_id.assign("ZUSPOXSJVBZKJOAJHWCRLZYIXPWFDHCABVWGOHDLCJLZJJYLBYZQRONGYMEAMXKLDLEPIMAFZLGXVGUXQQWASBUHCKNRRREKLSP");
    msg.comm_level = 204U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.507403244096);
    msg.setSource(24088U);
    msg.setSourceEntity(232U);
    msg.setDestination(7110U);
    msg.setDestinationEntity(19U);
    msg.type = 145U;
    msg.op = 142U;
    msg.request_id = 63356U;
    msg.plan_id.assign("VUYUAYKPOIUMFGAJZBHDYTDRTPQZFMAVTFLQGHEOWMWGCOOPRWZDWAOZLVKODUIGGBLEMFXHTCZWWCOCZNXDHQRDKYAEIFQDSUECYSCVSFRBHXTKJILXYQNDYEEJBUFKPIJCTGMNMMHPOQYBRTRPNGIWOPVPSMLXBSHSJLEFQVVWKXC");
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 58U;
    tmp_msg_0.period = 3744984639U;
    tmp_msg_0.duty_cycle = 4148269844U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZZEQIHCWYBKUJRHZAVUQGSEUNDJYLJCWABDIWFTEGROOLNXOAMOKRCADMONOJMEZJUGBXTZQMILPVADLVEFUWBJGRTQCPFRAGBFUGPJSWLMIDMBGKNZVEMVBUHNMOZJKEFKSYKJQRXUIXIPSY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.143359976484);
    msg.setSource(26036U);
    msg.setSourceEntity(204U);
    msg.setDestination(42756U);
    msg.setDestinationEntity(142U);
    msg.type = 28U;
    msg.op = 223U;
    msg.request_id = 17186U;
    msg.plan_id.assign("JOEMBHADRXUSEIXWFLVUFZIILTCQNOPIDPJZQEJCHIUFAZGNWTHYOMXGACLZOLFANMMVNDFCWUM");
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 200U;
    tmp_msg_0.quality = 220U;
    tmp_msg_0.reps = 100U;
    tmp_msg_0.tsize = 66U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LCXQBRCRGFCHFRUQCYPSVTOAUGFGEXJCRJMXHLRYE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.384701614161);
    msg.setSource(38275U);
    msg.setSourceEntity(150U);
    msg.setDestination(58162U);
    msg.setDestinationEntity(72U);
    msg.type = 106U;
    msg.op = 177U;
    msg.request_id = 58918U;
    msg.plan_id.assign("ZBZNROIYSAEHVVJVARINKTMCBJYDAXKTAHMDIALTFOGSLURTUIJZXHYKCBMEUECLYEQFRWDPBRUKRYUNIKQUXCKJHELBMQA");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("GYYDREWTWUBFFIWVPMVTDHZVKPNPLOVBKULNHPBCQWOXGKVSYJOLVSOLNIXCZTRBUOBOXQHMMDYYWAIXZBCGSRKIRHCVOWHUFCPFFSFAIQMUAIGSEFQUHRJXQBTJESAAWKELUUVYKQZECGRJTCRNDBCIHBJJTNULMEYMWIFRQQHDHFRYZGOWJNOXMEEFSAE");
    tmp_msg_0.formation_name.assign("JXBRTKMHCSZFITWRYFKXIUMPDFNSRVOUFDTJGYSZLCXJXTVDTUCFWDXHGEKQHOCAJSRRUCYPQYONVDLXOVUEQVUBZZW");
    tmp_msg_0.plan_id.assign("WGGACAXCOXFROCGUDBFMLXYKHWULTTHNWGUJJSMISGMYRDESPWOYZSQZTNWDEQVFAIXGFSXUSYZHPHRNPVPDKWUOZGBAXREGSVNFQEPEYHZIUFQXFYRNVJSMFNMOAALLACJVPVUHUJVSZODXWOALZOELFKYXPODETUCYTNIAMJNAGBHUICRIYQQJZKKRORYMVDLKSDCXHWJKRRBMLTQQEPHLDMTIWEKVIICBBVKWQHTD");
    tmp_msg_0.description.assign("EGRINSBLGCSFHDRMRQDBLOVWMYFYVIWKTPROKKQRRJATFKFOJSUTMWHBTGVEIUGLSMAQSEYPFYXQBHDFNKHCCWIVLGEFJBHKSONSJZWGTHNLXZMUZQUMBDSOZMTPJGSKVANOKREWEMPWJPUQQEBFIQXQLZBIJZVFCNZCDRTXDHLAPDPBIYUZXDTUNJEAACIJDYEQXBNNMATVFX");
    tmp_msg_0.leader_speed = 0.64267094974;
    tmp_msg_0.leader_bank_lim = 0.203345071443;
    tmp_msg_0.pos_sim_err_lim = 0.179022650575;
    tmp_msg_0.pos_sim_err_wrn = 0.590098021979;
    tmp_msg_0.pos_sim_err_timeout = 2894U;
    tmp_msg_0.converg_max = 0.10023624868;
    tmp_msg_0.converg_timeout = 57106U;
    tmp_msg_0.comms_timeout = 28176U;
    tmp_msg_0.turb_lim = 0.675547096589;
    tmp_msg_0.custom.assign("FPJIWBJEMKXGLGZADHFQEVQNMMLVGYRKRXTQSZFIZVOGYMWHHVWQJEOJXCUOBXFVSLGFMCDKEOPIUAOQEDUSBZ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TNSWDPFSNCWSJMWKVWYQNPQJXUBVZQOIZIDJCANOGISGCCKTHDTOBBXVSJKWZJRLNDCYGIABJKLAROISIWOEFGHFFEHBEMVTXUXDUHJMPUKJUXYPOKAOBZEBYVHPRZGONGSQECUFESVMXQEJXTALZQNHEVRQRBZMDSXYHNGHZAKONRJTULAXPKCICYCETCMBIRPNLWHODMGIRLRZIKPVYPEYFKRYULAUM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.839036524357);
    msg.setSource(11858U);
    msg.setSourceEntity(60U);
    msg.setDestination(32336U);
    msg.setDestinationEntity(80U);
    msg.plan_count = 61935U;
    msg.plan_size = 2847048462U;
    msg.change_time = 0.781308714306;
    msg.change_sid = 14616U;
    msg.change_sname.assign("GNQVBHKJDJBLKDQNNAMDXPSFBNSPRPKSZHBTEAMOKRXMYTVTEETTMZFNPGWLRFIMMEZSYDGIFIDYFPCKVRUQZBTQUUIIQNZACVZOUVKFLVOBRCWHGWEKSLOYHYKRJHCDIUFDOECUYHBUASSTVBOWXWWJVFCLHECQRZPLJTGIXDVMYGRUPQFQWWKXJYASEQZOCPTGJLAWITDNQZJCKRMAONGHAJXDROXXUUNACMXJ");
    const char tmp_msg_0[] = {93, -21, 92, -85, 99, -18, 64, 3, 106, -26, 45, -38, -52, -113, -92, 120, 40, 12, -1, -94, 75, -49, 36, 89, -79, -80, 13, 55, -83, -40, -41, -44, 12, -10, -23, -21, 112, 28, -79, -127, -78, -101, 89, -96, -69, 103, -76, 28, -56, -35, 71, -66, -24, -53, 11, -106, 118, 21, 104, -79, -49, 8, 104, 18, -27, 45, 29, 113, -6, 92, 72, 37, 96, 6, 89, -24, -5, -125, -67, -117, 3, 18, 43, 31, 65, 95, 26, 29, -90, -124, 27, -7, 59, 21, -78, -125, -74, -104, 3, 89, -87, 91, -86, 70, 26, 83, 58, -102, 10, -110, -35, 6, -32, 112, -102, -93, -81, -35, -8, 6, -13};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.17954709611);
    msg.setSource(45406U);
    msg.setSourceEntity(61U);
    msg.setDestination(29746U);
    msg.setDestinationEntity(231U);
    msg.plan_count = 61010U;
    msg.plan_size = 4235657243U;
    msg.change_time = 0.122746904155;
    msg.change_sid = 5602U;
    msg.change_sname.assign("CJIQHDDEJAUDZQWKFZQLGUSXHDQBVCUFHKLEPNOJWEVBH");
    const char tmp_msg_0[] = {87, -71, 24, 69, 24, 106, 63, 118, 23, -49, 110, -81, -35, 49, 44, 74, -38, 103, 18, -63};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("YQRYSCTBFHEVESGWTQLUDTKXXKMLOGKFYWYAUHQVKDEHPZWMRGJZMTITZUNBHSJMNAPOFZYXKMCSMDZVHCRCHKUGGIOIPDVCPKGMRLLCFCWOQKZF");
    tmp_msg_1.plan_size = 14292U;
    tmp_msg_1.change_time = 0.814590237197;
    tmp_msg_1.change_sid = 47338U;
    tmp_msg_1.change_sname.assign("HLKJXWKDGYLVPXIEDNHTFMIIAWSBLWOGGHDSRZBMBJRUCHDZLRAISYQNFQBCCOGOKCHWIVKXCFPHIRJTUFAPFQIOJJEULDXLZKYITO");
    const char tmp_tmp_msg_1_0[] = {-64, 81, -37, 94, 87, 118, 68, 113, -90, 12, 63, -71, 85, -97, 92, 20, 75, -102, -75, 124, -9, 32, 7, -57, -72, 29, 54, -56, 68, -32, -30, -127, -40, -53, -5, 38, -48, -95, -123, -39, 121, 80, 82, 120, 123, -4, -29, 90, 27, -62, 10, 40, -2, -97, -60, -105, 31, 53, 78, -21, 28, -63, -101, 73, -66, -13, -111, -112, -109, -98, 116, 13, 28, -13, 91, -95, -70, -126, 35, 100, 66, 123, -61, -40, 125, 23, -21, -21, 55, -114, 118, 126, -116, -97, 45, 107, 99, 36, -53, -6, -47, 93, -105, 70, 21, 50, 66, 14, -30, -28, 91, -35, 55, -31, -121, 73, 83, 27, 58, 20, 11, 124, 94, 30, -39, 101, -79, 18, 4, 10, 95, -34, -2, -110, 4, 17, -55, 103, -56, -8, -77, -56, -44, -14, -36, 9, -49, -19, -12, -6, 126, 3, 101, 79, 51, 13, 66, 62, -82, -5, -72, 89, -17, -96, -54, 59, 121, -68, 36, -86, 57, -124, 21, -103, 56, 81};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.761506246347);
    msg.setSource(55706U);
    msg.setSourceEntity(241U);
    msg.setDestination(4563U);
    msg.setDestinationEntity(178U);
    msg.plan_count = 54732U;
    msg.plan_size = 238393343U;
    msg.change_time = 0.0844922031737;
    msg.change_sid = 41454U;
    msg.change_sname.assign("RUZITMPXLUWSMBPIZYDEYCQZKMKOISWVNFJBKZQBAFUVDUCGVCSAOPWFDHLFXDEHQJREGNRWIYLNIKSCEXJHBZBDYARVCLYMJGOGUKOPBNQITTKTIDEZWUVPBKWC");
    const char tmp_msg_0[] = {42, 22, -69, -16, -105, 1, 101, -109, -22, -128, 64, 96, -99, -51, -128, -112, -111, 122, 5, -93, -119, -86, -29, 30, -11, -121, 29, -13, -26, -93, 79, -98, -36, -24, 24, 70, -50, 69, -109, -33, 50, 84, -86, 61, 97, -4, -70, -39, -121, -31, 1, -35, 72, 3, -90, -70, -46, 42, -62, -109, 82, -109, -103, 66, 73, -128, -33, 113, 11, -125, 32, -103, 115, 32, 61, 125, 28, -20, -61, 41, -127, -27, 116, 91, 123, 4, 92, 47, 112, -94, -62, -3, 15, -82, 57, -64, -106, -37, 43, -119, 100, -14, -36, 63, -50, -71, 53, 17, -95, 107, 97, 49, -91, 111, -123, -8, 16, -29, 97, -43, -32, 124, -13, -17, -123, -10};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PHXNAUHBRXWWEWYNVOQOKICNTRLLTJDZIRLFIUYWQXLSRBJESHREHMOPZVPGJREXNFKQFHWVOGCFBJCLPTLPTGTNHYAXGBRYQKSHXTTEKODMCJUCXFCLHSUD");
    tmp_msg_1.plan_size = 57654U;
    tmp_msg_1.change_time = 0.765076781404;
    tmp_msg_1.change_sid = 52177U;
    tmp_msg_1.change_sname.assign("OBTEJLFJDWXBUHVBQGLPFKQQPBKFTAXXMUDYFDPCALYPUMWJQVGJF");
    const char tmp_tmp_msg_1_0[] = {-117, -24, 104, 84, -44, -11, -53, -27, 86, 61, 17, -86, -61, -104, -7, -47, 113, 17, 46, -54, -75, -69, -53, 126, 108, -55, -86, -26, 110, -55, 50, 31, -91, 50, -28, 29, 121, -113, -34, -85, 17, 44, 10, -49, -102, -88, 23, 94, -74, 102, -92, -45, 90, -42, 69, -98, 32, 100, 11, 122, -107, 106, 81, -58, -11, 68, 24, -3, -32, 68, 74, -60, -41, -100, -1, -24, 10, 106, -110, 103, 87, 115, 123, -101, -99, -83, -45, 99, 93, -112, 4, 123, 13, 12, -76, 109, -5, 126, -4, 12, 95, 53, -88, -31, 94, -60, 48, -69, 80, 44, -72, 101, -58, -113, -23, 13, -71, -61, 39, -45, 103, -33, 107, -50, -110, 121, 57, 19, 109, -24, -7, 55, 99, -89, 109, -57, -67, -55, -84, -112, -125, 8, -55, -2, -12, 89, 20, 112};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.224638062756);
    msg.setSource(21425U);
    msg.setSourceEntity(214U);
    msg.setDestination(54748U);
    msg.setDestinationEntity(27U);
    msg.plan_id.assign("UWJNSCHRUBFI");
    msg.plan_size = 5056U;
    msg.change_time = 0.362579285755;
    msg.change_sid = 28922U;
    msg.change_sname.assign("IXQQRJWHWBSGDNMROGKOMQYYBFTVH");
    const char tmp_msg_0[] = {-110, 103, -106, 72, -40, -128, -103, 119, 52, 109, -39, -47, 89, -7, 76, 77, -79, 92, 98, -65, 111, -19, 26, -21, -3, 49, -46, -8, -63, 41, -25, -95, 20, -107, 70, -68, 105, -50, 19, -50, 54, -25, -111, -75, 112, 56, 33, 76, -10, -86, 102, 61, 13, -117, -102, -64, 4, 1, 72, -115, 57, 36, -54, 34, -5, 46, -28, 38, -53, -8, -97, 36, 22, 119, 48, 9, 71, 0, 121, -9, -18, -126, 42, -29, 117, -28, 46, 76, -123, 109, -50, -40, -104, -106, -44, 9, -12, 2, 84, 89, -7, 33, -35, 30, -69, -79, -8, -21, 44, 106, -66, -44, -124, -63, 110, 87, 100, -10, 61, 39, -121, -7, -90, -123, 26, -82, 57, 75, -72, -55, -26, 48, -88, 125, 70, -79, 97, 10, -81, -49, -23, 79, 79, -114, -3, -101, -77, 53, 104, 122, -125, 114, -49, 21, 102, -51, -95, -115, -85, -67, 76, 17, -44, -7, 30, 95, 25, -47, 68, 47, 83, -116, -52, 101, 38, 119, 107, 94, 83, 54, 125, -59, -113};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.0137758236014);
    msg.setSource(38741U);
    msg.setSourceEntity(50U);
    msg.setDestination(23093U);
    msg.setDestinationEntity(194U);
    msg.plan_id.assign("ADKHRPUXBIODYXDYLMCUFVDENHGOQDYFPANTJIQIEZBQOTAZPWIXNNAHCFRMGVFYSEURRNUAIQHTYXHJQRPJVODMWJIRPXBVXHGPKZGOUWZFWAWJYLZQBBMLGGBBELVPMOQRSKAJPISFYTMEKXZDMVIEMTZZFKVZHUFTSTBLNHSZLGGCCCPRCVFYPCVOBYAWCTSXWNLXSEGKTUSAIQIDLOSDJWTKUURENNWQKRHJCJSCKQAWBLXUEHD");
    msg.plan_size = 58778U;
    msg.change_time = 0.818144970551;
    msg.change_sid = 382U;
    msg.change_sname.assign("WFZNBIOINSIFGPFPMJJIERSDSUHXBOVXPUDIQICOUNDFHGEQCUODMVATJKZSECPZSROXTYMLKCCYRXYFOZLXKHGQQQJZHNATMUKG");
    const char tmp_msg_0[] = {126, 91, 24, -34, -91, 43, 31, -3, 28, -27, 63, 23, 49, -126, 75, -73, -89, 119, -73, -87, -6, 66, -9, 82, -78, 57, 46, -85, -60, 39, -30, 3, -78, -118, 96, -31, -70, -91, 46, 85, -32, -113, -55, -67, 61, -38, 90, 81, 8, 30, -90, 87, -15, -90, -120, 63, 120, -6, 122, 11, -61, 90, -11, -84, -41, -3, -125, -8, 104, -70, 56, 68, -49, 126, -100, -49, -54, 27, -95, 85, -24, 97, -110, -5, 65, 4, -21, -19, 75, 18, -102, 83, -52, -88, 22, 76, -64, 106, -60, -47, -71, -13, -57, 66, 97, 3, 88, 90, -93, -15, 70, -36, -6, 93, 112, 60, 12, -29, -55, 75, 78, -101, -122, 39, -82, -59, 55, 124, 77, -79, -62, 122, -72, -128, -43, 104, 54, 113, 51, 89, 55, -107, -73, 12, 95, -44, 41, -69, 82, -17, -112, 25, 0, -73, -38, -5, 15, -21, -120, -52, -71, -24, 119, -126, -11, -18, 67, 57, -29, -102, -13, 68, 89, -72, -73, 118, 2, 21, -103, -37, -28, 103, 41, -15, -104, -40, 2, -125, 62, -38, 70, 93, 89, -127, 68, 122, 4, 124, -82, 7, 108, 90, 53, 115, 32, -90, 90, 20, 105, -29, 76, -93, -69, -84, 81, 125, 51, -94, 92, -52, -78, 81, 14, -19, 69, -101, 33, 25, -60, 62, -36, 114, 79, -128, -90, 35};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.275338436414);
    msg.setSource(11269U);
    msg.setSourceEntity(163U);
    msg.setDestination(53998U);
    msg.setDestinationEntity(205U);
    msg.plan_id.assign("LYVABOXOFYNCLNYGVRIRWDPPUJEFYSQITJTAWJBUAGVDACOJMLARZZPUME");
    msg.plan_size = 9647U;
    msg.change_time = 0.0841129048809;
    msg.change_sid = 6455U;
    msg.change_sname.assign("LBLWSALOQVROOKJYJXKOLNMRABCTDYOEVZJTBMCQBPGUNROMWAMIWHXXVFUDTCVAVNWAGHAYMPNWFDYRTUFCCKEUZPKZJOGRLMMMEXRBNXNIHDEKMUPFIYDEPXHEPBGEZMLLQRHUYTOUFPHNOSPIEFHKNVBSW");
    const char tmp_msg_0[] = {-20, -94, -64, -4, 53, -59, 59, -36, 15, -78, 91, -13, 22, 113, 48, 83, -74, -35, 78, 3, 64, -17, -60, -98, -78, -80, 54, -68, -16, 79, -30, 95, 77, -117, 95, 0, 100, -7, 34, 13, 116, 96, 88, -62, 95, -75, 19, -33, -100, 0, 82, -82, 65, -51, -44, 124, -44, 92, 34, 55, 109, 119, -78, 72, 2, 43, 104, -23, 93, 93, 112, -104, 111, 87, -10, -40, -83, 28, -90, 102, -26, 75, 124, -27, 124, 83, -117, -24, -106, 13, -124, 44, 15, -101, -127, -22, -124, -127, -3, -48, 45, 58, -100, 10, -22, 91, -69, 89, -59, -94, 52, 51, -29, -126, -63, -21, 15, 57, 41, 93, 86, 57, 39, -87, -32, 80, -81, 108, -31, -73, 35, -14, 119, 87, 34, -47, 67, -52, 54, -12, -50, 4, -63, -71, -20, -119, 86, 123, -8, 98, -39, -44, 30, 120, 89, -26, -41, 6, 81, -83, 69, -100, -33, -125, 3, 114, 126, -5, 78, -38, -69, 19, -47, 57, 69, -112, 30, 52, -100, 96, -56, -47, 79, 90, -83, -72, -28, 105, 8, -66, -91, -86, 88, -115, -78, 68, -52, 101, 107, -111, -36, -43, 63, 16, -55, 104, 93, 62, 17, -51, 39, 0, -84, -53, 87, 40, 4, 33, -21, -48, -120, -120};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.331462393092);
    msg.setSource(46981U);
    msg.setSourceEntity(85U);
    msg.setDestination(56915U);
    msg.setDestinationEntity(187U);
    msg.type = 83U;
    msg.op = 228U;
    msg.request_id = 26370U;
    msg.plan_id.assign("CLBHUWLAXDUBDEMHHVFAYMCYSGMOVXYBRKSSBGWSGQZXNMQLZIAULBOTSQMXJWPDTNCDQJFARTBMAHIHMYWYJZZO");
    msg.flags = 36407U;
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 144U;
    tmp_msg_0.step_number = 246U;
    tmp_msg_0.step.assign("VTMVTGDBFAXTEZMZHNPXPKJLDDQDWWUVUSXLCAUHVKBRNUEBIYQEPZPQSOHHXARQQZDOMEVRSHDBWNCMCYGUFUVQWHHYSDOPIVCCIPGFRSJNTFPTGXQTEFTOUEDACZTKPJJXLBMFDIGCERJMXBKMSYPOJTLQXAMYBNAPYSODRYRCZUWICRCUZWVIJEKIALKBLEIGNYSFNEAFOIRZSSGJLNWNFWMV");
    tmp_msg_0.flags = 94U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EUGRVPDRGKGPGJDTCDHWJKBPCVABRLQPWLCFGLFKDMNSOFHICXKJPTIGSFWQZAQIXRVVNUMMWYORQQHVROYGLWAJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.291040353443);
    msg.setSource(9868U);
    msg.setSourceEntity(249U);
    msg.setDestination(21280U);
    msg.setDestinationEntity(225U);
    msg.type = 50U;
    msg.op = 115U;
    msg.request_id = 6034U;
    msg.plan_id.assign("HZAUPIJQDCINIYZBVEQGFDGNSQCEFPXWQJPFFJKSONVGGGCLUFBOQSXRLCDBKTYJZVYTHAQQLEKBPFOSPFATRXHCULOJZCKEFFXKVMRTOCJHDSZGUESOBSNDAVUNORUYUIMZAKLNUQDHIEICBWJOHMWQOVXPKRIGMRZ");
    msg.flags = 30617U;
    IMC::GetWorldCoordinates tmp_msg_0;
    tmp_msg_0.tracking = 61U;
    tmp_msg_0.lat = 0.654652767225;
    tmp_msg_0.lon = 0.971803979527;
    tmp_msg_0.x = 0.654181472607;
    tmp_msg_0.y = 0.467369255509;
    tmp_msg_0.z = 0.788034155198;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UCYPBRENFVWYJYLIPTQMZDYWKLTDONHRBRLMKGFVHJMKXFPGGNJQKXVZPIHABOOWFLGVXPECURVEQGAHJFDGYOAYIAQTDMFCWIXWUS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.264232353445);
    msg.setSource(42301U);
    msg.setSourceEntity(24U);
    msg.setDestination(65352U);
    msg.setDestinationEntity(228U);
    msg.type = 112U;
    msg.op = 22U;
    msg.request_id = 51693U;
    msg.plan_id.assign("LNQWBONKCIMFOFGDBJZYJHJQNMIUEEVKJUJLKTIBUBWFQBZHGDQLCITCNUWMFAKFPRSCQZWEUSIGQPAVOKCDFDPMXILHSAHHRRTASLVYTOCDAMZNAFRSKTIYRBGWUTYREXXWDJUPRZYJX");
    msg.flags = 43171U;
    IMC::Conductivity tmp_msg_0;
    tmp_msg_0.value = 0.358018454486;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RDDYPANLSLCNTGTQPLOAIKQYYIJQHDNVGYOGRRTWOAVTEFJMUXLSTPYH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.372225143788);
    msg.setSource(56127U);
    msg.setSourceEntity(226U);
    msg.setDestination(36833U);
    msg.setDestinationEntity(157U);
    msg.state = 49U;
    msg.plan_id.assign("QDRYXTIZEQQGAFWSXJKAUSGVBQ");
    msg.plan_eta = -86618861;
    msg.plan_progress = 0.585287311035;
    msg.man_id.assign("PPIZPDXDZWFRGOJPQRJYVUTJLRDKKAFZIGLSZNWPCOCNHTAJKRIUSBBUTOKSNNQMEYKSXAYIXLPLFFOBGWQBFMNMFQTCJPSAUGWMIBOQHGQSWFMVLWEDJGYCYPZACTSWLBEVQGMVMTCLJYIDXXIRRODYEDEHTKXZOXPQHNHVAXDJGLJ");
    msg.man_type = 33218U;
    msg.man_eta = -1072019845;
    msg.last_outcome = 44U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.50236258257);
    msg.setSource(62122U);
    msg.setSourceEntity(100U);
    msg.setDestination(15857U);
    msg.setDestinationEntity(136U);
    msg.state = 72U;
    msg.plan_id.assign("WIYVOSJGOPDVEOCNMKYHVXDLINOCSECXQBUS");
    msg.plan_eta = 89111894;
    msg.plan_progress = 0.591490488022;
    msg.man_id.assign("TNUCHPMZTSBKGIMRPEUZTTSFGOFANIMTOZASVIRGJKGKRQDCAWWYMNOBQFCRUXSXZFJEOVTGCTQXAPWBJFGMAKQUWKEECSQJXLNBGEVIEBVAPJBRLYYLYDOHGDZDRYEAIJPRIXORHLOYWAJFJNFHQZMXHJOBHUQDGWFSQYAVRIYKNQATESYKPWHQHODXKVKVWLVWPNUIZHDISXIUXSNJLCZCSTVGRDNDNMYBEFW");
    msg.man_type = 30384U;
    msg.man_eta = -890606934;
    msg.last_outcome = 41U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.625663134811);
    msg.setSource(56373U);
    msg.setSourceEntity(33U);
    msg.setDestination(1837U);
    msg.setDestinationEntity(96U);
    msg.state = 164U;
    msg.plan_id.assign("WGWMZVFTIBLAHKYPQEDZPOSFRGVHYDLXHENWADSOIFEJWDJSIAIERXOGMBVMDOQIJRSUCNYMRPKWCLKUTYKQXNMTWOSMSNACTAUUYWVIQHHOKZKZWGQRBSGFUCXVVJZWOLAOGKNVNTBYKNUUMRMSFEIAFBFDKIGUVGTJEJWCJC");
    msg.plan_eta = -1229722327;
    msg.plan_progress = 0.970370002697;
    msg.man_id.assign("IROWWUCYUIJYSXWCBJJHGTOYQOSXRMERNGTAQIFYBMLL");
    msg.man_type = 41288U;
    msg.man_eta = -1491374258;
    msg.last_outcome = 165U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.525149833731);
    msg.setSource(32771U);
    msg.setSourceEntity(71U);
    msg.setDestination(63550U);
    msg.setDestinationEntity(85U);
    msg.name.assign("HIKXTSRBMRVPVNKM");
    msg.value.assign("GBADTCRXQOUJBZEWKLJFGHO");
    msg.type = 224U;
    msg.access = 183U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.591542969082);
    msg.setSource(30999U);
    msg.setSourceEntity(30U);
    msg.setDestination(21078U);
    msg.setDestinationEntity(253U);
    msg.name.assign("OTIPRMGZNIWNJHWXKVSLRYFQBBI");
    msg.value.assign("FIQCMFDFVZLWUZVBMOHRYJSZBWNIDNABJMVEETANJ");
    msg.type = 182U;
    msg.access = 224U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.510811088861);
    msg.setSource(26291U);
    msg.setSourceEntity(128U);
    msg.setDestination(54370U);
    msg.setDestinationEntity(72U);
    msg.name.assign("BJDLGLJCQSSKJYBPHOCOEGNEBBARPKBQVAKTIOKCVJFMSCNMWVPKVZROZFDUELWQHC");
    msg.value.assign("PVTQCBNFEWXVQJJJGCDKGNQJG");
    msg.type = 53U;
    msg.access = 224U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.938082496809);
    msg.setSource(62710U);
    msg.setSourceEntity(57U);
    msg.setDestination(18839U);
    msg.setDestinationEntity(26U);
    msg.cmd = 209U;
    msg.op = 192U;
    msg.plan_id.assign("KBXJVJFYGIHWFJGIAWFKRYZEKLYGNONVUVWDGFLMWMUOMIJYRTCIWFAEEHMFUALBMTWYCMZGOBUFYMVDPSMHALEVGARPBQOTOAKXRWMZHEPKKULQBJXZECTSRHOJIBNUNOTOZRPTFG");
    msg.params.assign("RSINDHHZQLFSJKMETIJTHSGNEQDMLAHRTARENT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.592055844555);
    msg.setSource(17756U);
    msg.setSourceEntity(171U);
    msg.setDestination(45995U);
    msg.setDestinationEntity(151U);
    msg.cmd = 210U;
    msg.op = 170U;
    msg.plan_id.assign("GNKPLOCDJTPEQPPZHSNCFDBEHPZCTQYULAPJVPWARYHMNEPWIFRTIDVDAKGRBQMGUCMFMFEZCEYJHFRWGLLXZHAXBXSVSYRZDCBDJJMYKBWFGAZITSEUBQKGNYCVXXTZURRILDNQOMNMQKZATJNGXSYTIWDUAWJWKXQPYOYFORRZX");
    msg.params.assign("SICHTEFHLVYCUFZNRYRCRTGZKBNOOPITBAWBETJYCFAQTGSLGEPYFWQUHULSFXFLXHMNEFVVOKDBSAEWZWXFDKUPTGFDGLRMFOJJYODLPQZHIQACWXNSVHNUUALDXJDTKMMNZEGGJSGDBSNDHTOPPCMGCZBKKYXRIVLEM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.80250175505);
    msg.setSource(48879U);
    msg.setSourceEntity(199U);
    msg.setDestination(53899U);
    msg.setDestinationEntity(245U);
    msg.cmd = 216U;
    msg.op = 28U;
    msg.plan_id.assign("ZRNNHOUAAUPTYBFVCNSPQRPVHQSASURJIXAJSTOWZUWQPQBGIPOPQFMKVQKWIWJWBMXDYAPOSRVFJWLWVRDLIHONDGZUCRLCXZWALNRFCONBKXISTXZCDEASYWQDXGMVRAFNTZMUXRFCPDBGHRKDZDSEYIAVDLQCHMELTLGIMOKOEB");
    msg.params.assign("LHGHGGLZNROUSUVRMUSFCTPYXWQMOBKEXAKDDFWPLLQCFCNNTTINZEKFZQOGMPTVMCRMJPJQAAAJNHIWWOBJWWIIXNZQKSOYXRDMJKMRMCDBBBVHCVRONCPHEGNRISTFEOLJGQSUBQKSIERVHXZWHCNVCGLHXOTRIBXTUPUOEADWLPAGDNQZYQJADXZDYQOSDTYTKFSVKFUUPKRBKXMLYZMEUFSJSLAGCWFVGYYZE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.120128965424);
    msg.setSource(44864U);
    msg.setSourceEntity(97U);
    msg.setDestination(23253U);
    msg.setDestinationEntity(183U);
    msg.group_name.assign("EJYNZOSAQRWENYFLFHFYKIABXBVXSGHBSUMGDSUOHDYFARJOACWIMWAQILGINKRHLVJGKBPWKMOJQTCKTTDHLSURZKWNQZNNJRJMWLCQKXUSERWIYBCGKTCXMBUOJAIXBEVJDRUVQUPDBDZMMSETINQOXMEPVTNEGHITCHQKDVZFXVYOJMJUGDTGPYXLBPURARPZRAVFFKLQSDWAGHPYWFZYPT");
    msg.op = 0U;
    msg.lat = 0.290439076332;
    msg.lon = 0.0137329691342;
    msg.height = 0.571741247775;
    msg.x = 0.131217883635;
    msg.y = 0.979186817386;
    msg.z = 0.586647549952;
    msg.phi = 0.0207036437433;
    msg.theta = 0.765653074856;
    msg.psi = 0.1617248601;
    msg.vx = 0.232236476894;
    msg.vy = 0.637950379528;
    msg.vz = 0.619356076378;
    msg.p = 0.117856291884;
    msg.q = 0.154605658023;
    msg.r = 0.683634325217;
    msg.svx = 0.330452003701;
    msg.svy = 0.80947509204;
    msg.svz = 0.0790634819607;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.580439818834);
    msg.setSource(32765U);
    msg.setSourceEntity(156U);
    msg.setDestination(60849U);
    msg.setDestinationEntity(151U);
    msg.group_name.assign("NYGKGCZIJQYZBWOEWQWROSZZUJEXRPCUFZOWNEI");
    msg.op = 27U;
    msg.lat = 0.296333786092;
    msg.lon = 0.437449920289;
    msg.height = 0.408998345967;
    msg.x = 0.393371816467;
    msg.y = 0.0571198358819;
    msg.z = 0.476595543586;
    msg.phi = 0.882044655001;
    msg.theta = 0.855368577055;
    msg.psi = 0.122927139074;
    msg.vx = 0.339323927464;
    msg.vy = 0.639719318712;
    msg.vz = 0.872651773322;
    msg.p = 0.755323020445;
    msg.q = 0.910593479755;
    msg.r = 0.255888672967;
    msg.svx = 0.136966835226;
    msg.svy = 0.802965803759;
    msg.svz = 0.499652548344;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.984218733562);
    msg.setSource(4807U);
    msg.setSourceEntity(43U);
    msg.setDestination(9073U);
    msg.setDestinationEntity(208U);
    msg.group_name.assign("BKNIUGLNKQKCWTYKKPSAGXWZNCEPUCSHSJWBKAQRMCGKHQMJGSXVJSDDWYBOODJMLWPAOYLEMFMFFVUBZBPQZILLMVTYDSYDAPCVHHEGEHNCWFACERFERCUOYBHUJWXXGARLWNR");
    msg.op = 210U;
    msg.lat = 0.834278173705;
    msg.lon = 0.827997845579;
    msg.height = 0.359649756309;
    msg.x = 0.282908045754;
    msg.y = 0.067547218899;
    msg.z = 0.956942353389;
    msg.phi = 0.232391678275;
    msg.theta = 0.103135126679;
    msg.psi = 0.733756582858;
    msg.vx = 0.434890604424;
    msg.vy = 0.333882871074;
    msg.vz = 0.691320119392;
    msg.p = 0.291693779139;
    msg.q = 0.938776400992;
    msg.r = 0.141778399349;
    msg.svx = 0.208511750353;
    msg.svy = 0.117881333114;
    msg.svz = 0.728273233431;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.799906540077);
    msg.setSource(22029U);
    msg.setSourceEntity(220U);
    msg.setDestination(37115U);
    msg.setDestinationEntity(167U);
    msg.plan_id.assign("KFNZFORRHIIKZXBUKBOSVCDTZAUBZQGGJNNXJKNFDPLLJJEYGDXHSBCTWYWPDTNOPGLGCQCVXKQJNPIQKFLMWCMNLZZKACDROUEEENRMHYYDLRLQGK");
    msg.type = 236U;
    msg.properties = 241U;
    msg.durations.assign("UKSGFKPSCNDSQPMBRTZQJEEYRIGVPCNMTQTCGGLOYUGFYXMLVIJLEBHAHIYUSNZUEIYOZEKGNAASBTDTJCHMIMTERZBGFDTXROFWUSVLXUDHKIKLCBDWJTAHDVKXWNRJZUVOBTZWPYIAMGBJIPFMJQJDWKEAYAYANHNDPCQQGCIAWRTFEZFPXXPLPPRAORWOHHSVXYMOMCWYIOBVXWMRQNGL");
    msg.distances.assign("GMYNVVAAEMPHJRVMTNQZWBPJQSKPOEHHGWSNQVURZKLYAN");
    msg.actions.assign("GXZCPEYRASSRIRHTJBGIQHDECSBALTGNLLCYIPKYZXQQJEHVSPTVKWMQNOILZLGMVJSFMLRQDERFFCYCVDQIOZZMHADWWCUOUYR");
    msg.fuel.assign("AUBJREAFLRJQDWIPXFHBHHKLZNMUXZOMQJSYAYEBRKETUOTBQAUSMWPULSDAOPJMORKJWFWPKYCRNGYTUWVEJGXVMDMYNOVQNZJXGYGAPIHCRQPCDKMEPIXWENVQWVHZJP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.704859195668);
    msg.setSource(64997U);
    msg.setSourceEntity(106U);
    msg.setDestination(2866U);
    msg.setDestinationEntity(22U);
    msg.plan_id.assign("LLQHKXASSWIFHDCGFVLPJKCTZQRGKSUJMRPDIPNFCUSFHPBWLEUORJVNUNYJTHFDIYCEGBFPGMCVZSKNZXQOVDRKNCQETADOJPAHNATIGDXCUTEDWLFOBMMDRVWQJCYULEKBYIGQAZZZUTIXVUQYHBHNTXLSFXTQSYIMOBLRLDBZAMUGEWJMWRBKED");
    msg.type = 67U;
    msg.properties = 3U;
    msg.durations.assign("MHJPISIWGUUYSGOLNATAMVTMFLZMEXFDFQIQUAPSINIJTQPQKPEPBLZMDZKADCGRBCNNFVVSXFBGYWRNWLEXZSAHRMWLERHTAJRIZYKOHVXVKBPLKCTIURXXTFXOCAFHCHJSCSOEFNIWRZVSPVBODUPEMJKJQKBNTBYQZZWGZDU");
    msg.distances.assign("IKFGJBLCBTOSXWRCWTRULSSIUYZWSYHWVEIDAIRPSGWGQUQDVTLBNPABAHYMXWAUMEKVUDUBDYWJWZSFBZOFYJ");
    msg.actions.assign("MLCXLQBXLKZSUJFHGUBXFKIXHVEYNWYLCZBZOJVKWGRGQFQRUMZRDPCFMV");
    msg.fuel.assign("IJSFXQBNPLYLQXCIUSDXNMQEGDFQUPSOSEHMIKMIPMADRBYTZXSKADNQMDNOTLWYUB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.397964988062);
    msg.setSource(25758U);
    msg.setSourceEntity(200U);
    msg.setDestination(9315U);
    msg.setDestinationEntity(87U);
    msg.plan_id.assign("YALQCZOTBLUNYVJLJYYSQUSRRREKIYKQIVCCFTXAIPDMIZEJMBHUEGFJGVQVKWBONLZKWPHZEAKXSJCHOKYZXTHQIMEZUYSQVBALTTBBMDDGWWJDINNMXODJNIC");
    msg.type = 137U;
    msg.properties = 237U;
    msg.durations.assign("HNEFPBQOKSPSFEEVBWPCKMFSTKAHJQTJKTWLMPWWNGJMKJRGSUQPMKLGPHFVRYDLOLP");
    msg.distances.assign("HFVXDESHZQHFUJVQNHBVTNBMMPLMIVUZZAPVZOJKFGWFZBIJEWXHMAPOPEYUWIENNYPHUJZCFEWAAMRKOW");
    msg.actions.assign("HILYCADLAHFSSLQDYTJCZZFLMQVGLTMFJWWVKHFZLUYHQRHBCAFCXGCE");
    msg.fuel.assign("ZQRCYYSGAAAQPNLRFLYRWNGDOBPDKRMCSZNMNMRXUJAPSPSONMHRETVCPVAZAMWIPKMVHXVDQGIDVEGYISLWFYFBTGU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.167717062365);
    msg.setSource(62981U);
    msg.setSourceEntity(5U);
    msg.setDestination(26711U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.958032677324;
    msg.lon = 0.0297873960052;
    msg.depth = 0.477228715592;
    msg.roll = 0.474528569756;
    msg.pitch = 0.902565967837;
    msg.yaw = 0.296091800203;
    msg.rcp_time = 0.934664869569;
    msg.sid.assign("IDOLAIUAWIBMBHGBMHSMYGNQNPVQBSCLYJUEZAEOOWVORENEDTQPFPRIWZHJUBHLAPKKXLYWGYRBETOGRLHXKFEPSWAVYLURCWVVZQRZJLDKOVPSDWFJSSWTJAAUMCOM");
    msg.s_type = 47U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.533418223555);
    msg.setSource(40221U);
    msg.setSourceEntity(151U);
    msg.setDestination(13091U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.182125125983;
    msg.lon = 0.875267490247;
    msg.depth = 0.333403383006;
    msg.roll = 0.480955665501;
    msg.pitch = 0.249915861558;
    msg.yaw = 0.266948724009;
    msg.rcp_time = 0.828136083376;
    msg.sid.assign("HIURZHXFKIJERWEGCOLVYNOJQWKYBCMDJDWMLQZQSKZZZMJVCZVXHPPGWNJLYPHWNTTEOULXWZVBUTIUITEBFMPURAAHPJDMUEEWDDFDCFALTRJVWYSRQRCMOIWEOCYBIMSGLZPBFPASLMCYNKYYTRAKUXLIBOGXRSGIVQUNDTFKQSAEXOBNFDHEZGBUVDWSOHBASYQJSNXGRDTZKXACQGMUFSFHOMPNLHVAPXCNQKKBFIOGA");
    msg.s_type = 55U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.140511964923);
    msg.setSource(50684U);
    msg.setSourceEntity(40U);
    msg.setDestination(40171U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.672325050797;
    msg.lon = 0.426789120479;
    msg.depth = 0.863196542077;
    msg.roll = 0.630894637755;
    msg.pitch = 0.162379262467;
    msg.yaw = 0.803518422656;
    msg.rcp_time = 0.988394551186;
    msg.sid.assign("GFLUPNBMPDOLLQVFHHEBURJKOZUCKDPTHJRYDZHRDHXGSIUCUEJWVIIWIVMLQJMXMGLASETSXEPDKWSQFLAGIANVKGYSSZNGOGARBOHBYWXYSPFFEVOHXWKMBFLZQDQXIWANGYTCPYRCQOPYWBMXSKJVIXTQZJSWG");
    msg.s_type = 139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.0541137943971);
    msg.setSource(31041U);
    msg.setSourceEntity(27U);
    msg.setDestination(31401U);
    msg.setDestinationEntity(9U);
    msg.id.assign("GFVNZQEJDPSWJPSMBCMBIJFRGAJUSRSRIUQYLEYMXZCJJRKTDLGVOUNECWPYGMSLPLXKAX");
    msg.sensor_class.assign("HLNSYRTEOMVBUQKJFTYTIMRKVWFXJBTJQQNKDQZWKELXIXPYTT");
    msg.lat = 0.455648604113;
    msg.lon = 0.572560677268;
    msg.alt = 0.787410713983;
    msg.heading = 0.203734412127;
    msg.data.assign("IFZEWJGSDEV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.0135971452025);
    msg.setSource(35682U);
    msg.setSourceEntity(84U);
    msg.setDestination(45019U);
    msg.setDestinationEntity(45U);
    msg.id.assign("FHYHJQPBRGWE");
    msg.sensor_class.assign("ACAGLIEFMPFOSQLIYEPBTYWCSKQIDRZGFRTHNOQYQCLVOXYEDUVUKGPSSHUHLQULINAJPRWQKCYTJALJZWSQFBXJNRBOGWOBDGDTJPKLFDJMHRDVCASXQFOMNJDFGDLJRBH");
    msg.lat = 0.815680282261;
    msg.lon = 0.894871105593;
    msg.alt = 0.323044436872;
    msg.heading = 0.113832174178;
    msg.data.assign("FQVDIETFYKUJXCSMZLCJNNSZWPPXRECKZWYDZQKDWUVYLBGYLFSTUBWZPKQPPRRVEISHSQNBEAFWDONWIRBSUKWMCGUZXOSOEKFXISMTGPUJOFYTEBZGHHXHUNJAWNQAZELADAWGJVBBXNLQTILMIRMOEYKCMPCBGZGQVSMMRJJTUFCAMJXTHLDAAQBPVXYWVDLTVCIFROHRTNAINDOKPIUEFMJVE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.8219594784);
    msg.setSource(27785U);
    msg.setSourceEntity(249U);
    msg.setDestination(10284U);
    msg.setDestinationEntity(247U);
    msg.id.assign("TXSGDSIQTKHMPNYHTJRPMSFQPTUWDVDSOXLKGAJAUM");
    msg.sensor_class.assign("DZZRIQHDKRYXGECBLSLGLPVJLFRFNPQGHWORNOUPZXFOJPNILGZESTAHFFUWNSZISNIDHKZERAEJMCYDAMHROBQQOSNSPIRLBBDJCHOZGQAAGTKBFOCMFKWXHWEDYVDQWLUZOFVTMQKWWHCMKTIUBXGIVIQXPCVUEAGKARQGIKWNXXKYVPJUJYZAOVFBTLSTPLTMRYMYVYCXTLXSUPZBAUJTW");
    msg.lat = 0.468333527578;
    msg.lon = 0.0773992137419;
    msg.alt = 0.644879880332;
    msg.heading = 0.5575914066;
    msg.data.assign("SLBKMBAJJGPBLRODONUZXBBVTOQUNPGUIZKVTHGFAAFYCCNJMXDIRWVOLZOXWNTFYIKCYBXEMUHVDCYTHWXEDPBWXGBDLHRKHSRAARCVEPQQSIWPSZDNSCLLFZRKARNWUMLINUSFJEQIMHMTQYYAYYVJMPTFVOTSJUJDOPJKLMQCLBNPVCIPKDRFZEDRZFHXVJISKGGQLTHGWEXZQIPAVBTKJOSHSGQWYCCYKEGNWUMHNEWM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.370749537047);
    msg.setSource(43749U);
    msg.setSourceEntity(63U);
    msg.setDestination(41242U);
    msg.setDestinationEntity(123U);
    msg.id.assign("EMLGBLPZNJKQFNGXAQHYLHIXZNAZXGACLPXVUWBYDOSJGYQZTWOLZUVVESWIJWDRXDOKDHYSRCIEVDZATJICXTEKCMEAAXAMHC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.531854411183);
    msg.setSource(31528U);
    msg.setSourceEntity(201U);
    msg.setDestination(38557U);
    msg.setDestinationEntity(151U);
    msg.id.assign("XJMNPFBGWLDTDOETOZGYUEKAWJMSSMRIZDHMUARCKDXKAQGJMKZFRBHEFJHHWOIQQVNRVXTIUXWAXAYPDPBJWNHCOIQAYODCDSPDSMALWYEZBVYMBIYVIUUXJOKRTBQWFKBTQNPZUUHCRTVSARNWBOCGYFQIJFLNLS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.680525708887);
    msg.setSource(26045U);
    msg.setSourceEntity(25U);
    msg.setDestination(46201U);
    msg.setDestinationEntity(44U);
    msg.id.assign("HRTCPUDUEDLYDEMEXHCPWTKBBTXDZLTOSZICFQFZNXFUGBYWAGSPQRAOOZJWNZVVQPWYFIZREYSFTWJHIBRVUTNMDXYMJFAHALQKFSMTOEIWOMGRHINXDAVMNBCJYBIEYSBHIPO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.814841002327);
    msg.setSource(55537U);
    msg.setSourceEntity(73U);
    msg.setDestination(1651U);
    msg.setDestinationEntity(91U);
    msg.id.assign("LPFDXSUBMFDIJWXGFRKAJDBTRMXOKGLPUOPCZAPIMWOIPRGEMFBMADSEIYLBISKPCDEDRLQMOIMZSIQ");
    msg.feature_type = 162U;
    msg.rgb_red = 175U;
    msg.rgb_green = 217U;
    msg.rgb_blue = 4U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.0628860223638;
    tmp_msg_0.lon = 0.827445797294;
    tmp_msg_0.alt = 0.622121996496;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.600489746071);
    msg.setSource(45240U);
    msg.setSourceEntity(134U);
    msg.setDestination(30063U);
    msg.setDestinationEntity(154U);
    msg.id.assign("XSNHWRSFDFDDYDYURKTRGQOHSOTELHJTBQFMEWLBYRZKOEGCKPAJHZFLBNXRBK");
    msg.feature_type = 230U;
    msg.rgb_red = 19U;
    msg.rgb_green = 164U;
    msg.rgb_blue = 209U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.912125107232);
    msg.setSource(14372U);
    msg.setSourceEntity(209U);
    msg.setDestination(28777U);
    msg.setDestinationEntity(207U);
    msg.id.assign("UEYXWDOTTOVXUETGIWTBKIVULZUXDWXPISPOVEYFIKRSZYEHJRDFCYAIWHVPGDTXCLSWQJUEZWHTDCFSPKNGMGWSPGNUGHNCWNKKVQDOOIZHIAFHZOFHMJ");
    msg.feature_type = 149U;
    msg.rgb_red = 247U;
    msg.rgb_green = 179U;
    msg.rgb_blue = 169U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.585643784449);
    msg.setSource(40507U);
    msg.setSourceEntity(251U);
    msg.setDestination(27581U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.619183902238;
    msg.lon = 0.597251686409;
    msg.alt = 0.788259516417;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.931313532908);
    msg.setSource(53353U);
    msg.setSourceEntity(150U);
    msg.setDestination(28824U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.146127490112;
    msg.lon = 0.511990028984;
    msg.alt = 0.799047673659;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.436652010372);
    msg.setSource(27593U);
    msg.setSourceEntity(65U);
    msg.setDestination(22206U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.379273063227;
    msg.lon = 0.286328802893;
    msg.alt = 0.961139278546;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.327931207155);
    msg.setSource(35311U);
    msg.setSourceEntity(218U);
    msg.setDestination(33670U);
    msg.setDestinationEntity(179U);
    msg.type = 175U;
    msg.id.assign("VOMYUZDCUTYRIQIRKJPUPGSBDGBVOZXIHXKNFBXEESMBVLXFBBGVHAGZISPEKLKQSPSKDTJPUIBRMSBFMAEXJVNMGLWCLCOFNMSGKNIUEVOWQPFRDXWR");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ETFLYXFPZTNRCDQOJIOZKCBOXJQGSILAKFPNIXOIILIRCXWSFBSGPLDHSSWTWHJATJXWMHBBZEOONMUYBKNTIMJJAXBVPNPVHTWSPFUIECDEQZULCRQTRXGFMPYDORKTAAFQGOADUZYQYXVNMTALFQXJLKOGMWUXADQJHBASPCGISDBHZQOPWVPEKRUVKTRRCMSEANVVYEQUDUICESGWYDUCVMYLHZJNYKGMBH");
    tmp_msg_0.sys_type = 242U;
    tmp_msg_0.owner = 34864U;
    tmp_msg_0.lat = 0.522460425274;
    tmp_msg_0.lon = 0.814548936836;
    tmp_msg_0.height = 0.939730672433;
    tmp_msg_0.services.assign("PITPRGKQLQUAFSZMPMPXLQTHNCYBEIWQMPBONXQEDPAAYLQHRDRBWAVWVANFRBIFXCHFTRZVLPKQMEOUKFOMGZTGCZDAZIYUWSPOXHETJDZUGLWVJSWUJDWSZBCDVEEKCHOHNTINXUYKLOPQJLBVTJMKEYSLMQGKYXIRUNETOKRDICJ");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.588162940279);
    msg.setSource(48778U);
    msg.setSourceEntity(35U);
    msg.setDestination(19256U);
    msg.setDestinationEntity(0U);
    msg.type = 139U;
    msg.id.assign("UZFHPQZXVYZAYPHGELTVXLIWNGDJOAJTHZWBELMPLSXTKJITDFMQYITHXBAGLZARJBCNTYUYPMVRGESKUGLQUVPGPPSEPQYMHRHWBOHNGXBUKQVNOZSNFBQUDISJUYIHUVFYYBFTWIKKADWIM");
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 31319U;
    tmp_msg_0.lat = 0.0861370933082;
    tmp_msg_0.lon = 0.896691198725;
    tmp_msg_0.z = 0.601669109743;
    tmp_msg_0.z_units = 90U;
    tmp_msg_0.speed = 0.994248587467;
    tmp_msg_0.speed_units = 167U;
    tmp_msg_0.custom.assign("PYECGANDJJQDZLLIUHSRSJMAIFXQUKZAPFWYBSYUDVZGCIIQSLUVESKMTCEREOLUTNRKUTLGTJDERBDNAZFYXKYMBGIETWUDHRVVLPGBQBJAYOPPYLVXJOTSC");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.143776608669);
    msg.setSource(52215U);
    msg.setSourceEntity(195U);
    msg.setDestination(27826U);
    msg.setDestinationEntity(99U);
    msg.type = 200U;
    msg.id.assign("QXVBAWVJJLJDVWCAGFBQTUERTHHIROXYQDJICLXWAETOCOMZUGEXNJFGARSYFVURQZALFEBSKPOVDUYJLPCIKXQOYNQLNMTXBLBDZZHZFHMPRUSMKNKNIGFHXDGQFWTY");
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.0655794243548;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.179945802233);
    msg.setSource(61607U);
    msg.setSourceEntity(193U);
    msg.setDestination(20734U);
    msg.setDestinationEntity(53U);
    msg.localname.assign("PSHVKGYJMDNPRYGHZXPUCBCBFBUESPVNUVZIEQDUKYOQFXWMRANIIYAIDKBDIXVZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.925614961341);
    msg.setSource(10379U);
    msg.setSourceEntity(104U);
    msg.setDestination(56693U);
    msg.setDestinationEntity(174U);
    msg.localname.assign("NTGCFJESZQQJDNUAGOHESCZKAFUBTQGVCYWROZXDAYKYKWNSZOVHTYCCAGPIDFDQKCCBKPJTJXSNUELFFETBGBQXOZLHTLMKQXESUJYNIDPPOOSLIBFCNPRTXBYEAJEGRAJCNRIIDVTSWLTOJVMDPPUWMDHWWIRENVBPMILFYZGMQKOHAOKIXJDSMYQYQZAFMPGBURCWAVMZXFS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.697704338202);
    msg.setSource(12466U);
    msg.setSourceEntity(45U);
    msg.setDestination(24402U);
    msg.setDestinationEntity(82U);
    msg.localname.assign("MFIMPUEZKRFYVMYKVXUIMRZQVBBQCQPIOAAMYKWUCUFVFYNSIXJEIHCTQNGNKRBLGPLJNHTEYFCWLWXTTNLEDBLARTUAHXLFSOBJKRALUIATZEHVSCYHJVBMZMCPKDDSZXXUWFLPBZNJOHCPQVZNRNQSRVWXPGXEOAWGJSNTHDEXIFAEIEXQDJOLHWVWCOG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.432660675066);
    msg.setSource(7977U);
    msg.setSourceEntity(136U);
    msg.setDestination(9101U);
    msg.setDestinationEntity(134U);
    msg.timeline.assign("XYKZTUSNCESMVJJPGRPJFXYDBIWRUIPKXQSRDLMWTEDEXEKZPRYRFKPMDTQSGVBQGFKBNTMYTKXEGTOHJNOFDAFABWHYCQXPELJ");
    msg.predicate.assign("NFXRKILUVDRJJIOZTTBQQHIAPQIFMFRCZPCRROIDSGSPGGRPXSZEWVKGCFWGUZYAWVJDMLOVSKDYKOMWXEDNMSNZWLABXWOHQLOXDUFGYPZWFIEKAJGQQVPLHXRLOYBSFETDLUAXNCYYRDVHQDCJ");
    msg.attributes.assign("WDBWWSQSTRLXNJXHEBGRUQHFNZJALKACHQXKRJZBAJUKPQPPYTPUPYDSSHSVAYIZVLPUZDQWASVMOJEYTTELKCVGRKXIYSVCABFKCTWYOCNLELWODMXEVGGSRFLIBEMMZNMYZQVGGZCNFJGIENDYDIFAA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.937754463979);
    msg.setSource(23271U);
    msg.setSourceEntity(149U);
    msg.setDestination(8731U);
    msg.setDestinationEntity(238U);
    msg.timeline.assign("TOFVCLNCRALMWXJGKIKQGVXRQTDQSJBTAHCYXHHYFLDDJUFJPDMXZHOIOXZFVUBODAWIKIPGMGQWKNCVUGTYNHCEVXIDCMVDKNPFFPRPBEFZEUMPKLENZTGSNAZO");
    msg.predicate.assign("SGUYCBDZYPCAKFVRJBAOQSLXRKXBDUQHFLQZSMVFMWEREBWEMEZEPHCXRTUIQNJTINWSUHXGRGCIMYKCLKZEYPYGFWMGTQJOYEPOWDZDYYZELTSIPUXJXZKDTRKQOGMLLPVYGEWXMTZCANVDONCWFIXWJTIANNTXNHNRVSVSRKJUCNOPMXOVFAAMPNDVIPTAJJOLRIKFELBIOSFGOZQHGIPWDHZQQUUHUADGBA");
    msg.attributes.assign("HZFDDWCSVTKZWMERCVNCVGNLWTE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.381855216101);
    msg.setSource(2466U);
    msg.setSourceEntity(180U);
    msg.setDestination(22489U);
    msg.setDestinationEntity(199U);
    msg.timeline.assign("GMLCBTZPEHYUKYDFSUQUONALQQHKKVDTTIIPJCSRGPBYNMJNIKMKVQTZVXDBCTPGIWFEUARYMQHFBBNRPHOXKYHQUZBXJLCWEHWLZLWSVFIPXXETD");
    msg.predicate.assign("DUVVGMXEZHRVNTZIMYSMAACVHTCDDYWJELLWKNHPKMAHZYXUUPJCRBYOCJSLWSVMYPXQGLOCPZRJYDIXFHMBBNYIDZQAXEIFLSXWFTPQKGRFIKJSQBIEVRWFJDIMTSDVBPVOSRUTPIGKKTCGZNZRFUQODGPEXAJANEKSJBHLYQMFTXN");
    msg.attributes.assign("ZKDPRZZQWBEWLMZURFFQAPTXLSURWKSHYCOLNEVGSZCHSMVEKOVHVFOLRZBTLHJQJVDGBUXBNJCXWDZEAJOWMAJWUFDQQUSNKHSSIDOAHVBJMXYCTTEFJXTOYHMDCDYPJTCXAQONQZITDJVQMBICIKRJALHAEHYMPRYQEPWPGWPERNCIGNHPFRWVGLEODLOQIOZTRPTGUUYRSUYMNXKYFIXDGFUIKUCCGFAPZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.652719014399);
    msg.setSource(59128U);
    msg.setSourceEntity(37U);
    msg.setDestination(39047U);
    msg.setDestinationEntity(172U);
    msg.command = 88U;
    msg.goal_id.assign("VUUTHMQMWYCFGYRIQGGDKLBNTMDQKJBGDHEBEOLXEWMVPJGZYUPUDWZGQSYVKUOHZJHQDEAEMWTJKCCLZNXHPWQDLTXLWAMS");
    msg.goal_xml.assign("NWFYCXQLEJPBQWDRMCLOIPEWONHRKKEAPIJUKHVUDSCYPMDWOCMUSXHKDSIFIAVLMSBDAYJELXQVJGUBVYRMPNSTBOXICROKDHPZQHTHJTJTYKOWTEPARUUBBIFEQLSDRZLCZKUUXNOXLEWZOQAWJGVXJGVNSVJYOTYG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.123034863076);
    msg.setSource(62763U);
    msg.setSourceEntity(128U);
    msg.setDestination(27220U);
    msg.setDestinationEntity(60U);
    msg.command = 211U;
    msg.goal_id.assign("NDKZAORGTHXPPXIPVCQLGBBDRISUSNISUBQIVOTLNXZWFHYHMDXBOQNIPALNKBVRSMUFSFAHPRHXZWGZQEVJGELDROBZCFMWAHFWGKUVSJPPHCSWMJFJBTXQWMVQKYEZDRKEDLBVTACWKUMSEYQCWJEGJVMVMZHAUOLSBMATTZFLZALDNOCGHFOCHFRODIIDIJLRKRDXTNZQYYYOKYQNTGCMPUUNIEGCPYAWERSNLIJGQPJVOYXAETXBUFYC");
    msg.goal_xml.assign("YSTPXBCXZZCAGPHPGBVDHYIVFSHOYSBEUNIPQFCKIFQJLKGDUAVOPAEZWGDQJXMASDYUCCJUGNMHYXUHTXLDMNNEFMBTQDEQCTOPGOWFEKHDLNEXRSYAMAOVSLKWATLVHBRBVRVEDOOFMJRAUGPHLMPINBZNUYQNKPLIHFQIVBWCUYWSTRREHTWMFBDMPAXACKVMQGWROLXUIDXKSCENZJLF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.0935567897049);
    msg.setSource(34509U);
    msg.setSourceEntity(87U);
    msg.setDestination(48077U);
    msg.setDestinationEntity(206U);
    msg.command = 102U;
    msg.goal_id.assign("YJYXDADSOWVGEW");
    msg.goal_xml.assign("NRURTHOPDJMJBEOWWFXVQZUHCNSZWNVAYRDTDXBMGLSYIQWSSNMFPJOJODFSWAMNMYIAGTEUVQCIDOLKJLLTLADXIFRGTIRBWYHBPTBKVHXEAEFFYXCTUBPIVVTYEZXYFYAYRLHAHZLGCAEGEIQPJCHUGXGPJFUAUIZQKSSPOKQWZCQMRZZQUIFDPODMNGNNRSQVBPE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.0281450432889);
    msg.setSource(19717U);
    msg.setSourceEntity(71U);
    msg.setDestination(8886U);
    msg.setDestinationEntity(155U);
    msg.op = 6U;
    msg.goal_id.assign("XJJAVSHJYLUYRMCRAOYENCUDZXIDZZFGYBVRFRJEGXWNBMJCEJURPMOOUMNAFNHAAFKWKLKZLWLFTSHTBMWNBQTQVLQXKUFZAIPCLRPAZZSEFFHMVCTEGBVWGXQIIEMWDMBTKSYZAPIRFGUBCNXVBOYEFSBVWUOYTIQMSKGNSIVUWGVQJCXDWJHRZHYDDNROMOOIQJHQXENONCLXWLQDLTPXDAYKATDGPIUGZRTQHPKGPUVSISKEHTCPLSPDKC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MESFGFCLTXXOWTVWPWHJZOTINEPXNZEJJVBVIMVDUJFTWBHXITURSKTBBYCWS");
    tmp_msg_0.predicate.assign("FXDDVZERGEAUDLJQMKVXUBJGHFUPWYMQRVUWRCQINMZYFWWEAOAVBCKPBHTSZQBHCTUIQKNOHLJDLXOGZKUFPKYEJQXDWOPXNGBNCAYVSEMTNSICNQRALDAPSPBGNJPMFLOYHUJTPWKFZFXIIZCTYNESCJZJNDKUHTLOIVGEUCMYXJBGVROORPJTDZWMWSYGHGXVWFHMAMOMLZBILWPZLQLUKBSERIYTOSFDSSFHXVQIKVCRDTNYG");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.474040824818);
    msg.setSource(27896U);
    msg.setSourceEntity(37U);
    msg.setDestination(19176U);
    msg.setDestinationEntity(29U);
    msg.op = 251U;
    msg.goal_id.assign("HQAWWYJCLRSKWLBAFOJRIOVITQYZAEKESOUGPDNRTVFYUTPOXWBMWRFFBONGMJJEJQEEYJNGBLKCSRTZZVQRBDEDIZSRLLPRGIZHVJOBBUVTEGAHDLQQONIREWNITCNWMRVAOCCZFAKGMUXNSCTBCMWMHDXFXMUCUPNLTXDXMHGHFYKHUYSCLPFEXLLOMHUMSOTBKVWQKKAQQISKSVNPDYXNGQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZNMQFGQFMUIVFXKURQILDFVHKVTMWTLDQKRIWNALBTYAPPAWXLZEKQPYZYRNJQCCKZPEBYXNEGFGOGIOSDMLEZTBXCEGJISEMQBULVIGYIGBTLITJDPWHRFKTCHWINYMEXCHGPLMATOHZCBFWKETHCWLDNDPXXQUJYJBCMRUAAUUREBZFHOIRJJDACECSKFBQDGKXUSTSQWYSZPVSSJUYZVPVDHRWNNDJYXSBNJRMHOOOV");
    tmp_msg_0.predicate.assign("DABXVAXMMHDQPCIEFEZLJBSXTYVRGBPWMBFCOKKUVSGYBHRIDNTUBCXEXVLKYCFLRGIPWTTEDBWUCQSNXPZRMZ");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.877795602668);
    msg.setSource(48057U);
    msg.setSourceEntity(188U);
    msg.setDestination(9293U);
    msg.setDestinationEntity(115U);
    msg.op = 87U;
    msg.goal_id.assign("KYXVZKMCKNA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MDEHYKNGMNWDXVRIHEAJHPWSMJSFECPEOBLAGUGRAOWKSFRRXNXABRREDTTVXKNDLLMJNIINQTHT");
    tmp_msg_0.predicate.assign("UAGYICEMDENYQDGIXXJTOHMGSJQNUZG");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PZUQUYFGIIIWOJUSRTWJQAQACNWKUTDWNNPLRRTKBCQAVBHDQWJHZYPBEFVNVMTZXGVXVQZQVEDGYCOMZZKLGVIRYXAJFXUIZWZJHMGIPNPEUQFUHXASJBUGSLIDOZCBRVONOMPFJFYCISLSPQRNLPEDCGHCWYJWQMSHFKGLGVITMEJTNFMLZREI");
    tmp_tmp_msg_0_0.attr_type = 24U;
    tmp_tmp_msg_0_0.min.assign("ECQZCICVXZSCCKQNZT");
    tmp_tmp_msg_0_0.max.assign("FRDJQKSHITNILYJAYEEHQBHZHEHDMVZGFJSRSQEGVNRQYXKOQELPXVUURWUTHZZISKARWBZ");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.797164464817);
    msg.setSource(37792U);
    msg.setSourceEntity(125U);
    msg.setDestination(41044U);
    msg.setDestinationEntity(201U);
    msg.name.assign("HOXAJTBGSPSW");
    msg.attr_type = 35U;
    msg.min.assign("ROMSMDVTACVFLZUNBGMJZVUTOCRBNXDJFCXLCJRUOWVNZVTGJ");
    msg.max.assign("ISJTKOFXWTDWBLXCUUILAXDVCP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.268506837562);
    msg.setSource(34785U);
    msg.setSourceEntity(37U);
    msg.setDestination(18077U);
    msg.setDestinationEntity(37U);
    msg.name.assign("WLVUOOOKGWUMZZYQHYBUOGJMEALNYAPXPFVFROFCHDDCHQMTGMYACSRB");
    msg.attr_type = 149U;
    msg.min.assign("GILLWKKWOMCDVNEXSXBCRDGRZPHBVVKSKMUXULGQIGWJPSAYCIMQJIDBUNTPKOTLCHWNRVOCGSJMHMRGHHQLNKLICPDYVYOQNLOFXKBYZBMEPYBSDOMFZFCDTZAUZWHUNQKSASWBRUIJYLRPFNZPBNTCE");
    msg.max.assign("LBILDIWRYLKXFOJMVZJMIAKEBLDPAJHGDPLAJCOOPMXIZYHKVXSDGCYULBWOQYWWJKFVBZNTKTBVJAUSHHAKOFZWVJFTOSMEDSQVLRNSOAZUSFSKEAOIUCWNIWXPEUVHWBLMYERPCGUCRHGDFKBNUYYNRGORQTQGEUVAYBEMQRJCGTXPQOPCTZNAXDQRIFXEFTMQCSQPSCHPKZIRJGZRNGYMDDVJIEFNHSYLXNZDMWNKGB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.811513341944);
    msg.setSource(5496U);
    msg.setSourceEntity(78U);
    msg.setDestination(16883U);
    msg.setDestinationEntity(63U);
    msg.name.assign("TOWGCYCULLHSLSWDASIOWCLYRKNB");
    msg.attr_type = 232U;
    msg.min.assign("ZBACVWDKOXMZSHXVEYVDGEMQHRPSHRJUYEO");
    msg.max.assign("QWLYUYGVRXIUDEADXOUNJSXOKBOSHCVBRRHVZYBIDNWWUJXZSUFDJLWMVIKLEJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.720180903568);
    msg.setSource(6029U);
    msg.setSourceEntity(172U);
    msg.setDestination(10138U);
    msg.setDestinationEntity(73U);
    msg.timeline.assign("CREPJVXXMNXWAYHJZXXMYLABESFNTRXOFOKIBQZQMOBXNHQMKFZAWJVDPUNPOGKHLDKTIPDGDC");
    msg.predicate.assign("EVTXRIBRJPVJDYLNLWAOGRBKNUZODRDFSGSPKKJZTKMYOPMZHIKQQNPEEVAVLGFJJZDSTNEXAKLCDXCIYWXEPFABBNVFXJOXSCJWWBSIXUREYNMUYUVYQIIRGTGKOUQFWCOVUZKAWWYHHDAPCMNUMFQHUOXHQBHKMIRULRGWODWZFEADDYFNZFSOHYPRLBWQQIBMTHMXPOQHQJCHELVAESSLNNRCITTA");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("XYQRYRKUSMRPPWXKFTEDEZCHBWCGGNRFDYDQAVUVWEFCDGLWBHZMNJZATYXFZSBXNGCOJPIICR");
    tmp_msg_0.attr_type = 40U;
    tmp_msg_0.min.assign("USMQCKLYSBYKRSDOOSUHKODCWEKMXYOITGTCQOZIMXDJWQPMQGCCPRUDFLIWUNJSSBAPEJWQXYTIUGJKNNLZNUEJBJIBKPFNNVLQGGYOVLHWIHABGLBVXFVYSMCMNTLVTEEXFHOFDOIZYVUJKXGYIEQPJWPBRASBAHBVEFPOETXEVBCWYGGAUTUPZLASAMZXZCCVY");
    tmp_msg_0.max.assign("IXVAFPDHMKAQUJEVTAGIHWOPEVGBFXGMKCNSNBTTUNDJIAGYLQJFXNVWAPGLZKQIWNRUPIUWRYKDXKVBBTMOFBXXVMPYJNMAWZYEPLEIRLCJTKYWFUWZTYKLZRXZEDMIJUBOCSSGOEGLZYTODRESTHCHNPUVFOQYBGQZRDQEZ");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.6279128681);
    msg.setSource(24629U);
    msg.setSourceEntity(37U);
    msg.setDestination(9425U);
    msg.setDestinationEntity(249U);
    msg.timeline.assign("LRYIFWAJHEDJTMQITQIQNALHLHNXOQOMIGEPNVPGPCMJXLSQWTDHKIEACJBVPURTWCVIWUSCUMZJUVDITFODBYYHJRVXMTPEQRKOLSZEWXCUGURSKRCANWSJENRFYNPKJZXKLCAMADFEBTTBMZRQBRFVSDACWITVUVODKZZZOTAYBZHVGPYNHEJBPAIXLSHAHBKKVKMNRNCYXOEZDZDQHOCGXFXEQGP");
    msg.predicate.assign("KGQDNOHFERAHYEGMIJNHLKCBXORZVCGUVDOWTIHLVXIGZXNMUAQLTWQPYFKDVCTMKTMKYYZZIHRUPTXFLIWZYBJJNDGXSQGNRUDQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.628852471025);
    msg.setSource(1973U);
    msg.setSourceEntity(128U);
    msg.setDestination(43687U);
    msg.setDestinationEntity(66U);
    msg.timeline.assign("CFRKGCXYAFMXJYZQZUKHQUIATMSNQPXKYKZTRYVZAVPWSGVPLBNDQDTWDAMDFZTSTBLWZLKMG");
    msg.predicate.assign("DNIXBUAWCEGHFZUTRMBIKPMVNOCDOYMUUPBAGTSFHQMEXEFLJQRETUYUOVJPZBGAXZWDRXZEGUFLYAQAKCGKNLRDGQVSUEFIIRBHQNCSMQKLXPRNLNVERBJNDKIPYELJYZXINEFPZAQRBBDFLVLKVTQOHVYKMRWDIOKRHWVJMOTWGDFBDOSB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.336428143704);
    msg.setSource(5943U);
    msg.setSourceEntity(169U);
    msg.setDestination(28892U);
    msg.setDestinationEntity(221U);
    msg.reactor.assign("KUIRIQVGCAWCBKNQLQRLHBRGYSIPLVKEKWVSTXTFBUUJETYOBGDSBLWVAXASOOERUTFPXDIFXHCGGENDXBPOMISRMQHRXGPHKLRIZVPNNWTWGNHYBLCRKCYUFMAROFJMTZBEFYY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.677384214941);
    msg.setSource(58413U);
    msg.setSourceEntity(180U);
    msg.setDestination(1254U);
    msg.setDestinationEntity(149U);
    msg.reactor.assign("CYUDYINAEPHGLJZPKFJRMRKCGYCZIKJEEGJOAGUHRQFULKAQINMAOQOVTEWTBQOSCKLAZDMIQYGFMHEWEDZNGVRRJJPYUHKXZHDWIVVWHRBXKZMRPIJSTLDMMBGKPXHEUEZAXLIXDLNBCQVQDOXJYPEGOWPLTBYEOVZYLCXS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.541479214362);
    msg.setSource(42828U);
    msg.setSourceEntity(221U);
    msg.setDestination(12348U);
    msg.setDestinationEntity(245U);
    msg.reactor.assign("KCKCPVHQRJRXZHMNUBDYSBUXUJHKVAIDVRWYRVZGQPOQFAQDKMFNUC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EJWDGLOGXLSKLCJDPGKXFAWSGQKJOSQKDFVHKVAUDVRYNWQCDVVMAKEHNBZYLMUAIPGCMCOTEKRYRWNWFGHYONSHTQLPNOLBCEVJCJRXQPUFGIMCRVTJTHPXKAGETNRDEQVIKPZZZTMCYSBIJPDULSEJRNPBEISUREFLNWBQMTTUUWKFXXUICBIQBIXVSGQIESOPJAHZYLYDMHAVBTYJLUOFWOXIXHFAOYMFNZBZZURXOYW");
    tmp_msg_0.predicate.assign("XISQIRWQNGKQMTFKVYKNVKUAPUOPHMNUQMWUUVQNUHGLPFFERVWSAZEB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CXLIWBVLDYWCMURWWGHFEYDFJRATHJUKMHUQVZAJXMOQDUFEAIGQHVCBPWRKYEVRLHFLGPJNFNIDEQGSIWVTONBZRPZDGBQENKYETXJLVMBVSLSNCQUKJGJHDJTYOUMRPQESQIOMGAZQIYUGXWWUBHISNYAPVWKTXBXHTSTGENPBOLXPHVZNCSZJTNKAUMWAPZORQSKLPKZURDCRTKMEA");
    tmp_tmp_msg_0_0.attr_type = 202U;
    tmp_tmp_msg_0_0.min.assign("FGIVUWLPOWFXMZRNEZVTETSCQXAFNIXQCZQAMPZJPCHVQIFWOSXXGYSDMJDMYTTJRKUCQRGUGEFDGIWGUHOPEMVN");
    tmp_tmp_msg_0_0.max.assign("NWQOZYSDJUPYCQJKRPTXKVZCELCEMKWCRSWVCGSZYPOVMAADTQLITBMZXWLKBALQVRJXGYN");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.077316608612);
    msg.setSource(20765U);
    msg.setSourceEntity(148U);
    msg.setDestination(29856U);
    msg.setDestinationEntity(206U);
    msg.topic.assign("BOYEIGZLGCRJVYXRNDXMYGTQBNBVSOQOQIKNNFLKORHJIBZIHQKFRUBLNXEPAHUIES");
    msg.data.assign("RTWCERQIMMDXJXKUFMKQZSKZKSJLGIFGHE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.856304112791);
    msg.setSource(38694U);
    msg.setSourceEntity(152U);
    msg.setDestination(42711U);
    msg.setDestinationEntity(41U);
    msg.topic.assign("NPTUMZDGZZMAICDMSKNYFOVKEZDQJGNKNROQKETRIOVJTCJVPTLZXPSCJPERRLWSMQRUUNHXWYEWIQLKSLRZZEJDZBUYYLMBOQBACMKYSGAMAFESLBAHQTOXNHWNGAFEWPFPHRFCISWKBTAGQQHC");
    msg.data.assign("UDTCMNWFWKOAWMVUUACQPOOATWFRPATMBYZRWQDCGNEOHXLIJULYGZNFLVMWCHBHVCJTBYCQRBDWPPIKPWAALRNOHOPSCMCVNFNWOUNKQVLOXIHJYDVQTRZMXZZIXBTXEASQKKSZMEUFXPURHGRDEDWZOFFMIHDELZVTHYXKYEBESEETFZTJTAOUSGMDPJLFG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.363756344214);
    msg.setSource(29077U);
    msg.setSourceEntity(217U);
    msg.setDestination(13620U);
    msg.setDestinationEntity(109U);
    msg.topic.assign("AQIVSWIZNKOWKHZCSGBMTPNVACTGQSUNYGLVFQKXIOFGLEYFDCFVTERYSMKUMPUXVEORXTEHCHTMMZDXFHBSBYJUNJLNQPZAHACLHOKNCSJLCARTLMBWXDJNJAIWUYTMPTZEDWDRXBOPJXPIULQYKFIWDRODQITFSEHEJYAOBMXHVBDPWGSRFYSNXAOLGEZ");
    msg.data.assign("WCWYXYMQTJBYMDKROKTJOWFYNUDQUZDEVONRHVMGNPVOCEAMWDXRRBEZNASQZGHRQQZULGAJBKFQXSXLUMHJZJFFWSJVFCPDWAIGLCXNZTDAOYPXXLHBPWTSRGAPTRZEIYOKUTGBQWVNVLEEXHVNXTJNKAHCCTNLDNSWZPTAKMM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.531462293125);
    msg.setSource(62792U);
    msg.setSourceEntity(171U);
    msg.setDestination(19287U);
    msg.setDestinationEntity(132U);
    msg.frameid = 230U;
    const char tmp_msg_0[] = {86, 117, -81, 124, 0, -59, 105, 26, -40, -119, 28, -80, 22, 113, -13, -58, -118, -46, -38, -69, 69, -124, 55, -9, 56, 24, 96, 53, -92, 55, 10, -59, -97, -126, -8, -9, 60, 115, 5, -29, -33, 19, 38, -30, -28, 35, -79, 79, 20, -30, 84, -99, 13};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.946397326731);
    msg.setSource(29740U);
    msg.setSourceEntity(70U);
    msg.setDestination(5731U);
    msg.setDestinationEntity(1U);
    msg.frameid = 28U;
    const char tmp_msg_0[] = {97, 107, 21, -18, 47, 33, 71, -73, 89, -111, -13, -67, -93, -58, -60, 32, 0, 95, 63, -58, -96, -86, 35, 106, 88, -10, 1, -7, -114, -127, -59, -17, -13, 33, -84, 42, -11, -33, -98, 20, 112, 25, 18, -121, 23, -105, 47, 102, -104, 12, -23, -57, -69, 67, -26, -87, -108, 103, 75, 32, 79, -101, -125};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.559088348733);
    msg.setSource(59402U);
    msg.setSourceEntity(246U);
    msg.setDestination(64781U);
    msg.setDestinationEntity(210U);
    msg.frameid = 79U;
    const char tmp_msg_0[] = {12, -89, 89, 34, 23, -76, -3, -1, -31, -14, 107, -51, -4, 29, 99, -18, 74, -70, -16, -28, -50, 117, -90, -122, -34, 91, -25, 4, 108, -12, 63, 4, 109, 69, -52, -62, 74, 10, 68, -54, 69, 17, -101, -72, -32, 81, -16, 11, -97, 51, 64, -86, -107, -86, 13, 124, 117, 19, 87, 108, -34, -114, -100, -80, 73, 36, -97, -67, -97, -29, -8, -98, 71, -39, -19, 13, -56, -43, -112, -85, 17, -56, 10, 23, -63, -70, -113, 62, 82, 72, -126, -39, -113, -46, -3, -78, 57, -60, 70, 122, 85, -8, -95, 94, 82, 94, -89, 61, 80, 78, -8, -82, -20, -37, 67, 12, -57, 46, -115, -21, -12, 88, 85, 123, -19, 88, 122, 78, 19, 90, 71, -70, 14, 41, -113, 43, 39, -11, 54, -77, 123, 123, -68, 96, -126, 61, 113, 24, 62, -67, -90, -118, -33, 57, 126, -128, 88, 105, 50, -115, 73, 36, 112, 13, -6, 48, 41, -22, 39, -104, 123, -57, -89, -62, 62, -57, -70, -50, -65, -124, 94};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.538234876917);
    msg.setSource(5067U);
    msg.setSourceEntity(131U);
    msg.setDestination(61967U);
    msg.setDestinationEntity(152U);
    msg.fps = 218U;
    msg.quality = 192U;
    msg.reps = 29U;
    msg.tsize = 216U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.324412108393);
    msg.setSource(46242U);
    msg.setSourceEntity(36U);
    msg.setDestination(43046U);
    msg.setDestinationEntity(144U);
    msg.fps = 39U;
    msg.quality = 227U;
    msg.reps = 38U;
    msg.tsize = 216U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.107054256816);
    msg.setSource(36942U);
    msg.setSourceEntity(107U);
    msg.setDestination(16617U);
    msg.setDestinationEntity(215U);
    msg.fps = 229U;
    msg.quality = 139U;
    msg.reps = 56U;
    msg.tsize = 203U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.133631710975);
    msg.setSource(32250U);
    msg.setSourceEntity(107U);
    msg.setDestination(50498U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.746423325686;
    msg.lon = 0.920278061357;
    msg.depth = 251U;
    msg.speed = 0.518939209446;
    msg.psi = 0.224901365173;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.543377644706);
    msg.setSource(22194U);
    msg.setSourceEntity(1U);
    msg.setDestination(35590U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.44166175054;
    msg.lon = 0.501991933805;
    msg.depth = 230U;
    msg.speed = 0.28642349064;
    msg.psi = 0.0632756357624;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.606009475243);
    msg.setSource(24582U);
    msg.setSourceEntity(184U);
    msg.setDestination(17360U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.802995677271;
    msg.lon = 0.749305839742;
    msg.depth = 207U;
    msg.speed = 0.878107342281;
    msg.psi = 0.937321794222;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.316970574306);
    msg.setSource(4602U);
    msg.setSourceEntity(222U);
    msg.setDestination(57165U);
    msg.setDestinationEntity(62U);
    msg.label.assign("MEBCAFYLMPURXOVQPMIHYGARLMBHYSZENBPQATAFZVMUIEXBTDKOTFNWQYQKZALDVGBXLZLRQXTLQCCDSCODXLANJXSXZISOFVNKOWZDYITITXRHZFKELNXNCBUWUBOJDMXCMNGPVRSZFVQVIMEFAPHPAOBZWGJGHAJNPOISFTHFGEWGJYWSJTQWUPNPBDKTEUVYVGHCKGHRRFWQBJDLIJSCVSAJCYKUGOKUMOIUEZY");
    msg.lat = 0.250999654853;
    msg.lon = 0.354440518107;
    msg.z = 0.437296359537;
    msg.z_units = 126U;
    msg.cog = 0.153603153683;
    msg.sog = 0.337789313566;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.841625513662);
    msg.setSource(57327U);
    msg.setSourceEntity(93U);
    msg.setDestination(61228U);
    msg.setDestinationEntity(246U);
    msg.label.assign("IHGBOFFPWUBLSZAPJLWTNYXUQCSLSVLFCMUPSIJOAWKGOFXENSJUHRBJEMZVZENIQGURABDVIQAXLHPOHHJVFDBBSSRCKBHGUWYOXFMBAQYXVPDYEKTMDEMWBINJVQRHYBFYTNNQVJGIHWQKTYCKRPIXFGRTRYENOZZDUGCW");
    msg.lat = 0.124696387445;
    msg.lon = 0.461037504958;
    msg.z = 0.136206240117;
    msg.z_units = 103U;
    msg.cog = 0.425416350296;
    msg.sog = 0.623579274151;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.517853226414);
    msg.setSource(52555U);
    msg.setSourceEntity(0U);
    msg.setDestination(54290U);
    msg.setDestinationEntity(51U);
    msg.label.assign("LZEHVKONYGWUBVKKZVEYWBXAQPBHGTAOSDOEQAWUWPEHYOFTIZNGFZSRRMGOQVDQZGNKRWELMJJOXIWAEQDNOECCQKUIMJUFLLDGUYCZEFINXROTZATTXVUCDSABHJYKMWXTIFJSWAZJMFGUELIRPNSJPWLENSHIPCHQRFMPBKFLGOKWFYMMJPVCJRVZYPDAGHFYDJTINDKQMSAQSMRBTNXCASLCOIXVHBRNPDVBKYHZBVHCPGLLUBCSXQIR");
    msg.lat = 0.88942456798;
    msg.lon = 0.618491789045;
    msg.z = 0.739789597405;
    msg.z_units = 7U;
    msg.cog = 0.44288650078;
    msg.sog = 0.970141950389;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.197112600864);
    msg.setSource(35375U);
    msg.setSourceEntity(217U);
    msg.setDestination(65215U);
    msg.setDestinationEntity(213U);
    msg.name.assign("HYHHVJLSTOHQCFLYMZWEKLBMSIYOKXVEXUTAGGBLCZWKCZQYAFMI");
    msg.value.assign("EZTVFHRFRDTOWABKKVFNYFOSLJVHJYAOXVMERESEVRDWRUWYCQVMXWHCPKGLGKIIDMQTHEAWAPIXNZYLZISELJHPLFSPGZXJMWSDNYGECCGITYZKUMIGNKDNHZNKTJJHTQHUBGUOBLFUAQUGYWTWBCSRZYIBCNRAKUVXOCMCMPFYQVTWDWVBYAICUGPEOQJJQKSZIRQOOSFJNXPXFEJADQLRDDX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.620168250917);
    msg.setSource(64768U);
    msg.setSourceEntity(105U);
    msg.setDestination(3446U);
    msg.setDestinationEntity(240U);
    msg.name.assign("LXFXJIKDKBFIVQJVYRCZWJOBQESZFOUFMCKOQGYIYXPNEDNPAXGPDTYWQOOAUDQAOZELPZMXYOSQVBDJAEAKIBUTWUTEFNEPGAUQGDUCJELGBYEVAVUVRBCTQKSYMGMHZEXSLIVPPRVODILAMXRNTFRJFZYTMWLDCDTIPNJHCTABFTRZOZHKGRFHGNLKZLHYIRQWWAHNTXCRUMQWYORDHSLSSXJWCCM");
    msg.value.assign("LOYUBDHRWWHVRPCKXCLTPTISJZSZYXCESQHONAHFVEWXGUYSRPLIGKJVFUHTDMHAZMNBKWBETNGVSREOUZICTBENNSJMYRYBJGTXQCLOCOLQLMIXIRVQPDAEEBSATFWVXUYWJLMSKIGPAXKPHNSKNBFHZCWYBFYQNZTVGZDGXMOPDZUBEILPLWJUIOOPEMRFXKZVNTAANTP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.127433622753);
    msg.setSource(60101U);
    msg.setSourceEntity(120U);
    msg.setDestination(64311U);
    msg.setDestinationEntity(187U);
    msg.name.assign("CWWCPANYRFENPXCTBEZSZRKXXRJFBONNKWBHWWXSWDMXTIPSWSAFYFACVISJIIUYVPLEJZNWNTHQBNTMYVFIDKGAIGKOTXGRDTADGOANIINUZJQSLTBLHMGLCMZPPBFUKMROKXLWLFREDVCYGVBVOERMHOAQVHGAYOTCHHOJESQYLSTBHV");
    msg.value.assign("YFPZDPXKAGIDFHJPXMUBQJRWLWKRZUCLCJCFFA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.601478539502);
    msg.setSource(19744U);
    msg.setSourceEntity(212U);
    msg.setDestination(26395U);
    msg.setDestinationEntity(193U);
    msg.name.assign("KGGRZQSAIVJSSCZLVXWHIJFJREUFL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DDHUUBANCYSZLJYFRVLZGEEYWMKXLRKQQURLXGMNPLNFVRNGEEJXZWFXLXSZPTCSBRJVZTKKLJDXNIMNDGCWYRUTTFEDAMQQNMWFMHTDUOXQANQWHVRZMLJOPIYVFRJSTXDHCYOXMBYHUBPHOBHQPEZKSIYGJZWHZDGFMACYEGAASBTSJGRIUGWQDPUFOKOPILATCRAGSKUCMCCOEOOVQBAIN");
    tmp_msg_0.value.assign("XNOCXFAKVFMGHVQGASMIZOISPZTKWHPPZISVDEVDCWTGZHIEWJYMARKYIPPSQIQRZVUDVLZLDHYMJQRFKGBBGHWUAIFMRJEUKONXXWMXCUQZMJPKN");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.334612647387);
    msg.setSource(41045U);
    msg.setSourceEntity(249U);
    msg.setDestination(58856U);
    msg.setDestinationEntity(34U);
    msg.name.assign("RQDEJXUGWDSAAWGHYJMZXXZGJJQAPARXNKXQFNSKZVIVFGXTAESDDEEDRWPDOIUZXLKTTEARRVCQQJNVCYKEBUQPZEHVVKZWKDJLPMYMCTSTREOWKHNTOEXQALVSPCMMML");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.163081977566);
    msg.setSource(23098U);
    msg.setSourceEntity(152U);
    msg.setDestination(52395U);
    msg.setDestinationEntity(204U);
    msg.name.assign("TXIQPDLXVINPUEYFNOZAHIDPTYOYSFWBICTHCKROEBGDXXXYNLGZLLWSBKGSXRTUEDAJZRMRHKDSZMSERJNAQFHOLCIGGYKLVIUXBUVWGBJPSJKQFJDPQNQZFHGQQLCQEFZYFPDUAJMQKTNKXXRYEWDZDMJWKWIJMMHWABUAZV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VCASGPGDWSQOJTJLNIKHVQFBQYFWTKNELDHYAZPSMXJZCCGGFTUXIJCXLVKNWTFVKRVUMCXPUBTEPZOCMMHZ");
    tmp_msg_0.value.assign("THNDVLQDEYVWHROTGOIBTOSKNLMKVMLWISELYMGUA");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.0575535377327);
    msg.setSource(20176U);
    msg.setSourceEntity(43U);
    msg.setDestination(31166U);
    msg.setDestinationEntity(67U);
    msg.name.assign("MWCRHUSGQAQFKDOJKZYBEANQMVBOGMFFCNPODWXXSSKIPWGGRMGHXVEPFNHBRAAYJOEYHNRFUT");
    msg.visibility.assign("CNRLODWVOTINLZVOWJYQKDRTLPXOAGHWPCRPNKYMZRDGIOOWGUEDJEQSJFHANSSMBSDNAOUKCNFFPULHVVHTGJMTFQUZRKXHIAOCYGGMXIWBQRIZFDPYUPAZXRKXCTMUJKHSEQJEFUODMPWUZLPCCSRYMLQZJFIAHEVTYKRINQSCBUEAXSWNWE");
    msg.scope.assign("VMWOECYTZGXXWZSKOKWSCVGSLOXRAGOBIHJMLHBEHRQYPTAWRDSNHDJPXSSVVFTRZRNUKBYWYJGEPJVYECKUPQEUCBPBPMGJYVUVJONGCJDZDWMDGEOVQMAIZIHSWNLAQQBRMIDPFNXEMAOAOJTKNDFTHFJFJPTQTZHRCILRUBZTCQKRBBKMSFZIADNLOHYETUIUTLKXMYFANFLYZHGIGSUVH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.354003407963);
    msg.setSource(63754U);
    msg.setSourceEntity(190U);
    msg.setDestination(34257U);
    msg.setDestinationEntity(254U);
    msg.name.assign("MJGYPXWSDRQUOJQCSMHCYGUBAFMZSESEBEKQELDZBCLZKASRWVITSXSPQQEZG");
    msg.visibility.assign("JUTIZNIUPNNU");
    msg.scope.assign("GBRVFBKXBGSXPZAIBJDTEOTAAXQFPHXADCMIUDMVSGOJZETPYSSCLLQTWHTKQRQJEEGGKVAKEVKOGNRMHATJDNOLYHSWWKLYBKILEVCGRO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.255902314089);
    msg.setSource(48734U);
    msg.setSourceEntity(91U);
    msg.setDestination(24436U);
    msg.setDestinationEntity(72U);
    msg.name.assign("MUTHBMLCDOSIKVKKZXMEEUDUDOZW");
    msg.visibility.assign("QNUPFDQYRZXYGJLGJGKSFEWBHMGWFDTXFVLWHDPGTLWZCEYUNKNPBGCBOOCIUMXTRBCDVSMUGLXOILVJHQEDGSDKBSUIZYAWSTNPEVRWLMQPLDZISCWRVRSRIMJAKEFQJDUUYPKXZOUXVHOLXJINOKYEQNHEMTANEKP");
    msg.scope.assign("WKPKFMFNBRTHPBGWINADLTYUMFJDZCKSUGVGWNNSFLYNYMGKOAIROFTFJKYAVORXSCIQOGAZVTYVOBVJAUHLACEXJEMNIUSSDIJSRWUZCGWYZDIGORWLGXVYKZPREUNSDHTWBWDJQGPPSBBQICVCFOQMTLESACHMERQHZPVOYJTXDNVHBXLYLKBTPZIQQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.956572540987);
    msg.setSource(57060U);
    msg.setSourceEntity(92U);
    msg.setDestination(56254U);
    msg.setDestinationEntity(118U);
    msg.name.assign("IFCISZYEBPUSOHLDSSGZBDQOBJUVBUFMAURVJOTDYIMAYWFUHIRFOUBYYUAHXEKUXFFOAHECHXJIFGIKBOWDAOYEGYGZLRTGNLYRVTZCNPWHDEZBYZXVQPPRTQWWVWLVFZQKEWCKPARXLZLVSMLVLJMSGVMMPEOEIPJDJMIQOAHJDKCKGWGGKXBOMSRFNCRESINCPXLQJTXSFQJTBSTPAJZKPZKTBWQNNNIDDTXACHNHXMWQHR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MNFZRJVMGCWSLGOASCRYKPJXAJVTJCPIXEUGTOWXKYQQIMXNWRJSNSGJWUZEKATKZOYBEKAJYUNIWBLDDCHGUPUVHRAOWHSYBLBFSPDDJPOMWLZTTZUSSUSDGNFDTREVAOHRQBVXJBAXZUYOZAJOQQQLVRUERQRPRQONBILZZHHVEGMCFFHCKWGQCFBHVNDMKWKFAGYXHKCEIPIFXPVBANNELLSTYFIETNLYPIPMIXBQXDEOYUTLWCDTH");
    tmp_msg_0.value.assign("WHFKZPIMHNVVHUNIIWEHRAYNLPFUJGTZBQNKXROVOJWZPZZUTBKPVDCAOLMKAWMVEFPCOXECCFJQWVZXGTDMDNRGUQEESIQAUSINIHGRQNKSJXVHTBHARFRWJDYKLGHUUSOBPBJTQVXLMIJCTBPMUZNHKSAJDYJQCE");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.272349037932);
    msg.setSource(11096U);
    msg.setSourceEntity(6U);
    msg.setDestination(17201U);
    msg.setDestinationEntity(228U);
    msg.name.assign("PWISMIDAFBZWXKJGOFNEQSXIYNPRQQXJQSIRPBZNR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("USAGXPWYTNYJIVRFCKWBWORAQUVSBHVVBBRURBBYRWPBHQKTMEMDSMMCLDFWEJCNASXVFJBFJXWDTUAYGXKJQRGXUXVYTWPCAICUZDDTIDQPHNZGUOLGPHLZSAJFCTAKMXANMLYPJWZT");
    tmp_msg_0.value.assign("UHDFOGGNLSXMSROCBHJCDDLKXGOBBKMIUAJXNWGTVFIBTJOAEUCTZOWKSGACFLPDEEYZIAJXCSQFJBHYYDTROKDCPODAFWBZCSJMKARLRITMEFQYQNTKHOXVMKSKOIUXEIKPQOUIQFNPMAGDVYYPFBCDUBBSEQIMQRNFLNVHWNZXQMWDZXLNEPYLQTVJZZWJIMGHSFRYUIHWCYSNU");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.670613245975);
    msg.setSource(29280U);
    msg.setSourceEntity(3U);
    msg.setDestination(32450U);
    msg.setDestinationEntity(0U);
    msg.name.assign("KMGUKBSQSHBVYQOKTKCUXKPXIUQBMEVSPFIHBMFORBWDTNPJSBQOZXCLCFFLMVBAJVDNGSQDUUWORIOTEJNCSPPDYGTGCRIJJOEXYPDHWJGFLMASHNHTOHVAIKDZJJYSEMRSCECAXEOZLZGAAUZNIHFKDCNRIRWXLLXNFNMMRDVHFVPBEUXWXWTRKWIQLADKACUGROUQMPTEFW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VCHCWIGUOVFGHPDZOYCAHMOCTHDWMXVUWQNQMTBEFOPAHJOJEJUTZQXRGTPXISQACQSVZRVNFLXIYKKWGWDXFDLZYUGPLIWFMLMOASRCDCWEPTOJVICLFCBRFBEUUKEYVAAXWZURERWZUVIJAABYNNOMYXIKKKIZNRTZBSMJQQHGLDJNHLSFROREAASPKQOPEUGGVEJBISYNZRBXHWDMINLXDLXFCHQSJFSUBMDLGVHDKBYJNTMPSQTPP");
    tmp_msg_0.value.assign("EMGFWDFYIHPILWIQXCSLMOXFJDISNQRGGFCFCDSSFUPBYZHUONHBYRHNCXYKREILYXVJEUBVDTKOUZFINCKUKRVPADECDKOSWIYMPPGVSQEAGUJTMBPXMGOENQZXRKYYTVAWFAABT");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.385978621862);
    msg.setSource(8034U);
    msg.setSourceEntity(179U);
    msg.setDestination(15277U);
    msg.setDestinationEntity(242U);
    msg.name.assign("VKMFZLLBEUMKLGC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.256543946826);
    msg.setSource(55700U);
    msg.setSourceEntity(12U);
    msg.setDestination(47070U);
    msg.setDestinationEntity(119U);
    msg.name.assign("CFOGNRDMPRGERMYIVGVGCJFYJHUINNSJHQLEWOOVETLRFBXZQWKTPIGXXYYKISFKNIUFHTSBNGPGQGHJSHFMUCWHUFAXBBJDBOYLMJCJSGPRGBIVQRXBFDBULRXODZYUPJXAT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.544033647262);
    msg.setSource(50034U);
    msg.setSourceEntity(10U);
    msg.setDestination(30962U);
    msg.setDestinationEntity(221U);
    msg.name.assign("ZPJEVXOAHBLMQRMGPGOILGSUMTGYOYJDLQLEDOZPWBXBWSEJCZULSOKFYPCXMPIEEHZTVXJJBUJRQHKICXFAMZMADNBZYHFCSHRQIFCNRQNHNWTIGUYGFGGJKUXYCANFEKOWWCIVVRYKAVQAUZDCSYBYVPVHICTLPZVOKDKVGPDAWKBSDRENKPEBJXXKBTGVLUTNNOWXOHMATADJTXUJZLINQZNMYRWRQFHLBE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.415725342384);
    msg.setSource(26864U);
    msg.setSourceEntity(123U);
    msg.setDestination(27450U);
    msg.setDestinationEntity(6U);
    msg.timeout = 4261978825U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.670379845972);
    msg.setSource(7562U);
    msg.setSourceEntity(135U);
    msg.setDestination(57420U);
    msg.setDestinationEntity(62U);
    msg.timeout = 1922120979U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.851487933524);
    msg.setSource(38251U);
    msg.setSourceEntity(116U);
    msg.setDestination(327U);
    msg.setDestinationEntity(14U);
    msg.timeout = 891897852U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.824843327853);
    msg.setSource(31498U);
    msg.setSourceEntity(50U);
    msg.setDestination(51587U);
    msg.setDestinationEntity(30U);
    msg.sessid = 216338875U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.998355358138);
    msg.setSource(59807U);
    msg.setSourceEntity(145U);
    msg.setDestination(47624U);
    msg.setDestinationEntity(160U);
    msg.sessid = 4279737787U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.805760499785);
    msg.setSource(39930U);
    msg.setSourceEntity(178U);
    msg.setDestination(18188U);
    msg.setDestinationEntity(113U);
    msg.sessid = 3530521673U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.630781858934);
    msg.setSource(41213U);
    msg.setSourceEntity(46U);
    msg.setDestination(26048U);
    msg.setDestinationEntity(136U);
    msg.sessid = 3382296079U;
    msg.messages.assign("EJKOTGPXUAHQLEOHFNLGQSZKFDZSYNILCHVDUWBIALRHUMACDRXRPKQAAUDTVVISXMIMTGYCMVBGKZYZMUFUEYBESBSSTJKCAJMBDFRTEFVRRIJCVFNGJOOGJZIUWJIYZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.734187971924);
    msg.setSource(52930U);
    msg.setSourceEntity(91U);
    msg.setDestination(53300U);
    msg.setDestinationEntity(117U);
    msg.sessid = 1588236171U;
    msg.messages.assign("UBZYFGNGQRNSVUTHSOPOTKVZJCFODTFIKTYMXUBXJRVFJAKEOICRLKNMUESZTCOXBABOLJMEFSNLCIKUXPYRRLQEADZFVHKAGQWAUBHTMVVWDRHDWQNCVQUMXCIULHDDHJNBXKBATDSEVEPWVWXJKGNLAPCNGROATXYCSWCJLFBASOHOZXPYZLBWJIEIEPRYDLFLGGBJSFVIFCMYIHMDTAHNSIEOUWZS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.409035256682);
    msg.setSource(44055U);
    msg.setSourceEntity(47U);
    msg.setDestination(25515U);
    msg.setDestinationEntity(165U);
    msg.sessid = 3721204733U;
    msg.messages.assign("EATNUCQRIMWCFKXYSHJPRUUGRPRIYVUENNBVTVJNPKUESDNPLHNDWWMSHTXBHNWDFJSVZLELCGLOAOUYXQIFTTOTJKASMGFQOATLRKTAKLPSDUFEAJJVGNVBMXDDKEOPSGPYCOHIJZPHJDFYFDZSQGNMXCBBKLOWMKYSBLVVMAQUQVTKUOCEREZERBZWMD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.163060624134);
    msg.setSource(59765U);
    msg.setSourceEntity(243U);
    msg.setDestination(32739U);
    msg.setDestinationEntity(176U);
    msg.sessid = 400833593U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.117146745444);
    msg.setSource(34591U);
    msg.setSourceEntity(13U);
    msg.setDestination(56247U);
    msg.setDestinationEntity(135U);
    msg.sessid = 4009909540U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.87665468189);
    msg.setSource(45529U);
    msg.setSourceEntity(7U);
    msg.setDestination(8242U);
    msg.setDestinationEntity(99U);
    msg.sessid = 1856217364U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.241895739142);
    msg.setSource(49899U);
    msg.setSourceEntity(39U);
    msg.setDestination(58783U);
    msg.setDestinationEntity(165U);
    msg.sessid = 3324228070U;
    msg.status = 192U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.347207825414);
    msg.setSource(30716U);
    msg.setSourceEntity(56U);
    msg.setDestination(44227U);
    msg.setDestinationEntity(248U);
    msg.sessid = 4210345737U;
    msg.status = 41U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.753540267586);
    msg.setSource(9694U);
    msg.setSourceEntity(146U);
    msg.setDestination(49746U);
    msg.setDestinationEntity(31U);
    msg.sessid = 1278754857U;
    msg.status = 86U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.692219143091);
    msg.setSource(3744U);
    msg.setSourceEntity(152U);
    msg.setDestination(20510U);
    msg.setDestinationEntity(141U);
    msg.name.assign("SILRLQZRYFAEJIQYMWHYRCDFIWWEFATMRSKMIROTMYYXLFDUXQFDIRABQOZXEJPWCXVKRSAFPRTSSCTDHZWDLOJKNGGYNVNQRXZSHDUDCWKZXCHGMQQTCZAKFEUIGKLBGCOZEJIJVKGOODYVTTXANNAEQYQUJHTWEZVVNHOWGPMYCBHEPHSKASWNEUNUUXASGGBOPICBRKPBVNKLLBUVGZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.762217346236);
    msg.setSource(47347U);
    msg.setSourceEntity(193U);
    msg.setDestination(36560U);
    msg.setDestinationEntity(31U);
    msg.name.assign("ABHFOMYNCLZMSXMDFWLNFTSQFQHCYFHCQYNWUOSYCQGTDZJLUVLSTQVPWMGDKLSXLCBNJKWTUBPEZEEMTOBJVBNYB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.803405190255);
    msg.setSource(47704U);
    msg.setSourceEntity(200U);
    msg.setDestination(49911U);
    msg.setDestinationEntity(74U);
    msg.name.assign("XQKLXGOBWDQONPUPHEKFQNODVZLYLGWGSFFGYLYQSJBLPUJISSFVZWZXJZYCOJXTWQMXASQPNRZAXGDATGKEIHZOKEBNQVFVRGIQCINJLDYWTSQPIVEROCNMYJPKCYKLHLVRZDWBWFXC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.211019593791);
    msg.setSource(25733U);
    msg.setSourceEntity(110U);
    msg.setDestination(49654U);
    msg.setDestinationEntity(55U);
    msg.name.assign("SYVFEWHZHSNEBFLOFAODIEZVXQOMWVWNAQAEKTPKUUWCSUSQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.809473512851);
    msg.setSource(57232U);
    msg.setSourceEntity(114U);
    msg.setDestination(28139U);
    msg.setDestinationEntity(42U);
    msg.name.assign("GEMPKFTFWBHVRQYXQCYUFWHMIEZVAASLVXNVNDWWNRJCRGLPJSCDVAYQMRZJKFREGDJFPRCXUCZGBNKHMGKYDQRTPUYFNEASBRAAASLMDJSIWYPVCEWL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.335515450451);
    msg.setSource(22375U);
    msg.setSourceEntity(211U);
    msg.setDestination(56311U);
    msg.setDestinationEntity(91U);
    msg.name.assign("RTAIDMHIYWXPJMKHKEGMWDLZIOTOGAVTJLEHGSIJHNSSSVHRQMDQKTCCBUCJFHIIULDRPBOYELSPQSDEUURKZIFKWVFWVLFYABYHIAEVDSQZAIBTHSOPVDSNUJZKRECFGXABGYRFCFMNAXARXENYBAARBJYMJDPCBFVMGZYJPZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.384531435187);
    msg.setSource(22277U);
    msg.setSourceEntity(176U);
    msg.setDestination(12075U);
    msg.setDestinationEntity(157U);
    msg.type = 246U;
    msg.error.assign("BJNYMJHBCGFBSSRCVFRPAWMMAUGSMLEWCFVAYKTGKFESJFVOGICUUWLPPINALRKUKBEJVXMZSBCLNJCDDOXTAQDLLXG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.468558233718);
    msg.setSource(39792U);
    msg.setSourceEntity(95U);
    msg.setDestination(14350U);
    msg.setDestinationEntity(171U);
    msg.type = 192U;
    msg.error.assign("CGKSYTWDJBFDKXORTRWXAQCUCWFYXPJWBOUXVXAUTOVZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.814826934219);
    msg.setSource(44701U);
    msg.setSourceEntity(75U);
    msg.setDestination(60348U);
    msg.setDestinationEntity(22U);
    msg.type = 146U;
    msg.error.assign("JKJWPKLJGIIHXBXZFHBPNLAEVBWEYNIDLIFKFZPJTMQCFR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.21878708357);
    msg.setSource(25765U);
    msg.setSourceEntity(246U);
    msg.setDestination(50039U);
    msg.setDestinationEntity(120U);
    msg.seq = 17967U;
    msg.sys_dst.assign("CMZGDEEXDJYSNXYWFWFCKOEUNNLWEIQFIWSTAHYKJUGNIKCKXOQVPZOXSBZD");
    msg.flags = 238U;
    const char tmp_msg_0[] = {121, -111, -20, 56, -49, -40, 46, -127, -13, -98, 4, 102, -60, -105, 28, -99, -66, 111, -49, -70, 50, 5, 97, -89, 16, -85, 126, 77, 119, 124, -61, -113, -48, 107, 126, -1, 56, 4, 30, 7, 106, -83, 78, -53, 22, 9, 67, 124, 100, 43, -18, 63, 98, 78, -83, -92, 26, -34, -96, 121, 113, 45, 24, -102, 113, 70, 93, 97, 125, -24, 16, 110};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.674153142789);
    msg.setSource(4882U);
    msg.setSourceEntity(50U);
    msg.setDestination(15950U);
    msg.setDestinationEntity(186U);
    msg.seq = 28355U;
    msg.sys_dst.assign("CJAYQEYJDECLXHHFRIOBOQNYTUYTJCXTUSLWSRAUEYAKVOJTGIKDBJFOJGPKBOZQDCEQVUDNRLVFAIBRNKDHHXSNGHNWDTI");
    msg.flags = 82U;
    const char tmp_msg_0[] = {68, -113, 105, 54, 4, -109, 53, -10, 70, -72, 74, 14, 38, -10, -51, -75, 15, 2, 34, 51, -76, 83, 36, -78, 38, 33, -64, -24, -124, 64, -119, 124, 4, 65, 92, 65, -47, -119, -65, 49, -40, 17, -35, -111, 46, -27, 13, 74, -71, -77, -37, 120, -127, 60, -109, -97, 71, -54, -74, 87, -48, 123, -63, 46, -82, 40, -33, -50, -121, -23, 80, 103, -69, 1, 78, -19, -117, 86, 36, -105, -72, 30, -124, -6, -42, 0, -72, -38, 40, -6, -33, -77, 93, -93, -28, 80, -13, 27, 7, 71, 2, 75, -13, -117, -96, 47, 91, 79, -90, 86, 118, -50, -14, 10, -62, -77, 87, -110, -13, 53, 81, 80, -126, -28, 123, -61, 118, 117, 31, 52, 50};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.263678789772);
    msg.setSource(11312U);
    msg.setSourceEntity(49U);
    msg.setDestination(21155U);
    msg.setDestinationEntity(26U);
    msg.seq = 26452U;
    msg.sys_dst.assign("XAAFYIDNJXDVZUUZPSXDCMTZVZUCOGLRGWVIODKMTEMFNQERMFAGBYOKMKONJACZERKWGTKLNQXWLKCRDJSACPUJRTHIEVNJLJHSBCMUUSEGAZBXNBBWBYFXQIWVELVDYTFPFMCTXSPRDFYVWIPOPGOUVKVXNIBEWQHIRGKBUADGHRGQSBPATECWXGPUSOHZCSRFZHZHDJACQQELOFOKQFAZYQVOJMQLYLIBHULWYNPMJYTMSS");
    msg.flags = 62U;
    const char tmp_msg_0[] = {-15, -104, 63, 18, 125, -108, -93, 33, -19, -10, 25, 88, 74, 58, 47, 41, -35, 28, -33, -100, -58, 64, 87, -38, 11, -66, 31, -62, 73, 29, -18, 56, 35, 12, -112, 80, -13, -21, 17, -36, -50, -51, -47, -91, 85, -104, 75, 101, -123, 19, 93, -50, 14, -30, -12, 100, 100, 50, -14, 125, -31, 70, 69, -67, -7, 67, -19, -126, -37, -118, 63, 113, -54, -112, -48, -46, -65, -22, -13};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.736070287698);
    msg.setSource(6242U);
    msg.setSourceEntity(33U);
    msg.setDestination(27339U);
    msg.setDestinationEntity(137U);
    msg.sys_src.assign("ZHYORHEDNWAHPOOHINTBGSBYYKTPWOVAWFJP");
    msg.sys_dst.assign("CYFAYVKUYTTFRSJBOEPISHHNZPJIBOTYPKWROGERQSEHXGLGBMYCGLROEXXKDGHJXVICPPFENHFWHSQUDSIZDMOWJDGEMGIZXXTBFWVMSHVLPQAMEZNNRZGUVQREQJMKOKRNHCSCBVAXLAAXKAWOFFIBDTYQQHUMQDZWRDPGMLPQUTZNZUIDYLMTJNTVQUVZHCWXFBRJCDKLTLYYINSACVPKPCFGSEVJANJLTEKONA");
    msg.flags = 16U;
    const char tmp_msg_0[] = {-19, -4, -118, -41, 56, 74, 35, -46, -79, -103, -128, -116, -127, 6, -64, 45, -28, -82, -109, 40, 94, -93, -49, 24, -16, 111, -85, -114, 24};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.763699008197);
    msg.setSource(46629U);
    msg.setSourceEntity(169U);
    msg.setDestination(12025U);
    msg.setDestinationEntity(189U);
    msg.sys_src.assign("OHZGCETKDVBALPJZCOKBQVEWXKJEUDRTUWKWMTMMHZUNQXRUXIOYUDLOKHDYRWLCZCVKBWIFRZFRBTJNCIOBURVXVLPLEASZAFONNCIPIH");
    msg.sys_dst.assign("JTTCFQNEXYXUZBIUEMFCECYKEMWRSHTODYPFJALEJUNYHUREPHDAUCSWROCIDICKFLSIEQQCYHOKMGPAAXPWKYHODMQOAQMTSLNFWWMMEIPOEIFQTECFQBZWVPDTTHRDZNXQLKBKXXZGAXHPSWIZKGZZONRZLRNSTVXWBUUVRHHGJFDNYLGBNQYPLGFIIGWBSDRUUSBUVIYJYV");
    msg.flags = 53U;
    const char tmp_msg_0[] = {59, 33, 110, 85, -125, 84, -101, -53, -3, 22, -97, -38, 66, -41, -107, 45, -47, 52, -45, 84, 50, -56, 112, 82, -81, -9, 61, -103, 97, 60, -58, -31, -101, -100, 97, -71, 11, 50, -110, 105, -19, -22, 83, 6, 95, -64, 116, -116, 126, 50, -120, 53, 72, -122, 126, -36, 79, 36, -125, 6, -91, 50, 21, -47, 113, 15, 92, 45, -77, -42, 112, 7, 83, 73, -27, -83, 99, -44, 61, -88, 109, 68, 42, -63, 84, -120, -98, 60, -15, 83, 121, 33, 47, -115, -14, -116, -35, 108, 112, -124, -30, -89, -50, 10, 92, -5, -50, -87, 17, 26, 7, 110, -116, -34, -21, 52, 40, 84, -54, -61, -116, -46, -119, 122, 25, 74, 9, 69, -120, -17, -128, -29, -78, 119, -113, -54, -112, -95, -7, 72, -60, -78, -116, 118, -56, 50, 24};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.938716767801);
    msg.setSource(51703U);
    msg.setSourceEntity(215U);
    msg.setDestination(36410U);
    msg.setDestinationEntity(201U);
    msg.sys_src.assign("LJKINHOGZLTKZKJIAURIXYDPIJFLQYJHORUBXHHHFDPRUXGKKAFBORVRPKELSJESHNMBIOTDMYKSMYAAATXNLNCRZCQCVQMFGNYBTF");
    msg.sys_dst.assign("NMRWEWHJUKCMYAZDPPMUGPDSCXIABGTJXIHCMNISSLPIIUAFLUYGMWFCUGADBKQSXJRRLOESZHNOBJTEZGGACABIAAZPZLFJYSKZRVVPNQABLRYZCRIHPBYTLBCOOOIMOKYNNTHZWCWQFUBBJLJJ");
    msg.flags = 167U;
    const char tmp_msg_0[] = {-73, -80, 21, 119, -60, -48, 32, 56, 21, 34, -8, -48, 57, -65, -124, -37, -14, 5, 101, 26, 15, 45, 104, 3, 122, 41, -121, 13, 105, -40, -104, -62, 26, 41, -2, 24, -7, 19, -55, 73, 48, -40, 68, 72, 23, -126, 44, 125, -60, -95, -117, -71, 76, 45, -71, -39, 86, 108, -65, -10, 23, -12, -55, 18, -33, -15, 58, -92, -82, -6, -22, -10, 75, -122, -14, -35, 69, -86, 70, 80, -33, 20, -29, 43, 93, 87, 77, -21, -76, 108, -65, -108};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.672687927247);
    msg.setSource(1592U);
    msg.setSourceEntity(110U);
    msg.setDestination(38885U);
    msg.setDestinationEntity(42U);
    msg.seq = 63421U;
    msg.value = 6U;
    msg.error.assign("CEYPNWEGOBIUYLIRIPHOXUBGMWTZOFTPYSRVJIPGKVRBXFANRMPDNPAGUAZROSSLZIMTRNHDGOEEMCZLKWZKCFPLUDPRGNECFICZQJANQGKMBQSODEZYBTMBVNJXDXOAOCWBFMS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.216900985098);
    msg.setSource(31907U);
    msg.setSourceEntity(25U);
    msg.setDestination(3914U);
    msg.setDestinationEntity(188U);
    msg.seq = 32316U;
    msg.value = 108U;
    msg.error.assign("BWGCDAQJUSLHFUSKHWLLFTZQOETJIRRXMMKVMPDASUELVQMASRIZKHPADFXILOGVLWLTXGFDCBLXXZEVDEBNOSGUYPCECCSXINJWISAQGIIWPBNMXIDTYFWJWNEHBGHWSGGAWRZPXCEQQOARXPQDJGNRPJVHJHUTHUBZFRNXKUL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.530839124892);
    msg.setSource(41418U);
    msg.setSourceEntity(93U);
    msg.setDestination(14977U);
    msg.setDestinationEntity(18U);
    msg.seq = 8874U;
    msg.value = 8U;
    msg.error.assign("PDAAKGVIWBFWPQJJIXAAUIMSQEJYOBPRJSRLTATNNGLQNMCDROCXNCCYROWDCJQTIEVOFMESWYPXVSMHVQEURKSYLJZTXAVTMXIFOJFHUSLEDETMDXEKWVEMWWIWQFUGPBWDHCTHLJQWZCPBNMFEZTOVKIPCOEFTSHDDLKUVKYHSZCYHUGFNNGRLGBMMOONBRZYAGJJICRIGDRIZUGVQTBPAFXBYHQSZLPYKBXRU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.264568867332);
    msg.setSource(10755U);
    msg.setSourceEntity(241U);
    msg.setDestination(36373U);
    msg.setDestinationEntity(198U);
    msg.seq = 606U;
    msg.sys.assign("HNKUXPMCKUGEJVRHCBJNYCAFKZFKLGCNYLAMWOCDETSBGTANIZVITIGUIRWPSBDMEEYUPNRJBCKNBOSQFMADWRVWMXICBCUAPSUDQEQOBREZMSQTNOJDQZGASKVVSLMFDWJUOWWJCOOXMSKPJKRAIYUXVJYTHZHOYMDZSRUTYXERKCQJFP");
    msg.value = 0.95193518438;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.320006218783);
    msg.setSource(63124U);
    msg.setSourceEntity(60U);
    msg.setDestination(51976U);
    msg.setDestinationEntity(43U);
    msg.seq = 2263U;
    msg.sys.assign("KDBCXJNWTSUDQBFDLBGCAUNDIBZFMUAKRNCPKRBVOXECQ");
    msg.value = 0.512499491977;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.893074126683);
    msg.setSource(55355U);
    msg.setSourceEntity(14U);
    msg.setDestination(33605U);
    msg.setDestinationEntity(251U);
    msg.seq = 56762U;
    msg.sys.assign("YSIJJJLATQKMFMHDJWDBLNVGGJQUWGBFNYTBPCOKKONGFRUECDAAKPNXZKJOCZXECUYSENSYWZPAKPYBCILMQBLISWVSKEXIJ");
    msg.value = 0.429424399404;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.649639230054);
    msg.setSource(34372U);
    msg.setSourceEntity(193U);
    msg.setDestination(4970U);
    msg.setDestinationEntity(63U);
    msg.action = 32U;
    msg.longain = 0.945657209851;
    msg.latgain = 0.0433222799333;
    msg.bondthick = 3478532757U;
    msg.leadgain = 0.164896459391;
    msg.deconflgain = 0.201066154529;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.348007074805);
    msg.setSource(52607U);
    msg.setSourceEntity(51U);
    msg.setDestination(32277U);
    msg.setDestinationEntity(0U);
    msg.action = 66U;
    msg.longain = 0.736133962768;
    msg.latgain = 0.906818998535;
    msg.bondthick = 1513215547U;
    msg.leadgain = 0.332870056387;
    msg.deconflgain = 0.389980615755;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.759105687255);
    msg.setSource(48938U);
    msg.setSourceEntity(122U);
    msg.setDestination(24659U);
    msg.setDestinationEntity(129U);
    msg.action = 211U;
    msg.longain = 0.56432528246;
    msg.latgain = 0.477948880617;
    msg.bondthick = 1042566828U;
    msg.leadgain = 0.283005851535;
    msg.deconflgain = 0.354181936871;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.272074164036);
    msg.setSource(19184U);
    msg.setSourceEntity(142U);
    msg.setDestination(11412U);
    msg.setDestinationEntity(207U);
    msg.err_mean = 0.555793682885;
    msg.dist_min_abs = 0.929763993847;
    msg.dist_min_mean = 0.246518513713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.0206938456853);
    msg.setSource(33412U);
    msg.setSourceEntity(137U);
    msg.setDestination(58871U);
    msg.setDestinationEntity(109U);
    msg.err_mean = 0.245904001969;
    msg.dist_min_abs = 0.0515632535114;
    msg.dist_min_mean = 0.249764070254;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.779672004411);
    msg.setSource(56146U);
    msg.setSourceEntity(21U);
    msg.setDestination(57040U);
    msg.setDestinationEntity(160U);
    msg.err_mean = 0.852755444381;
    msg.dist_min_abs = 0.893592710832;
    msg.dist_min_mean = 0.685851186002;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.468042823123);
    msg.setSource(39695U);
    msg.setSourceEntity(181U);
    msg.setDestination(19455U);
    msg.setDestinationEntity(15U);
    msg.action = 162U;
    msg.lon_gain = 0.0408540203365;
    msg.lat_gain = 0.858082708438;
    msg.bond_thick = 0.691742413073;
    msg.lead_gain = 0.519762046814;
    msg.deconfl_gain = 0.336318549127;
    msg.accel_switch_gain = 0.160610771167;
    msg.safe_dist = 0.888908271972;
    msg.deconflict_offset = 0.563139564947;
    msg.accel_safe_margin = 0.741390339829;
    msg.accel_lim_x = 0.488495801312;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.583069580561);
    msg.setSource(23331U);
    msg.setSourceEntity(91U);
    msg.setDestination(36909U);
    msg.setDestinationEntity(186U);
    msg.action = 40U;
    msg.lon_gain = 0.654627010633;
    msg.lat_gain = 0.567476688387;
    msg.bond_thick = 0.32693548189;
    msg.lead_gain = 0.868049857681;
    msg.deconfl_gain = 0.54598439618;
    msg.accel_switch_gain = 0.790343666487;
    msg.safe_dist = 0.332619280811;
    msg.deconflict_offset = 0.0727602902311;
    msg.accel_safe_margin = 0.666504016328;
    msg.accel_lim_x = 0.931759456174;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.460695881632);
    msg.setSource(7393U);
    msg.setSourceEntity(38U);
    msg.setDestination(34148U);
    msg.setDestinationEntity(172U);
    msg.action = 0U;
    msg.lon_gain = 0.700403324337;
    msg.lat_gain = 0.735694359894;
    msg.bond_thick = 0.552436892486;
    msg.lead_gain = 0.783826764907;
    msg.deconfl_gain = 0.729419852321;
    msg.accel_switch_gain = 0.613268655719;
    msg.safe_dist = 0.518066472398;
    msg.deconflict_offset = 0.681179850184;
    msg.accel_safe_margin = 0.00283452781303;
    msg.accel_lim_x = 0.0914864134223;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.18544702108);
    msg.setSource(12854U);
    msg.setSourceEntity(51U);
    msg.setDestination(50772U);
    msg.setDestinationEntity(132U);
    msg.type = 129U;
    msg.op = 133U;
    msg.err_mean = 0.877616220903;
    msg.dist_min_abs = 0.0204389385465;
    msg.dist_min_mean = 0.114502928342;
    msg.roll_rate_mean = 0.593984824766;
    msg.time = 0.29506873943;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 191U;
    tmp_msg_0.lon_gain = 0.975979672125;
    tmp_msg_0.lat_gain = 0.575329481059;
    tmp_msg_0.bond_thick = 0.285500862021;
    tmp_msg_0.lead_gain = 0.826969272017;
    tmp_msg_0.deconfl_gain = 0.503527297273;
    tmp_msg_0.accel_switch_gain = 0.290812634402;
    tmp_msg_0.safe_dist = 0.272168412213;
    tmp_msg_0.deconflict_offset = 0.510584296636;
    tmp_msg_0.accel_safe_margin = 0.0505815140755;
    tmp_msg_0.accel_lim_x = 0.754404996525;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.475158623692);
    msg.setSource(33582U);
    msg.setSourceEntity(12U);
    msg.setDestination(42905U);
    msg.setDestinationEntity(55U);
    msg.type = 191U;
    msg.op = 233U;
    msg.err_mean = 0.0222055811591;
    msg.dist_min_abs = 0.0283338243664;
    msg.dist_min_mean = 0.884678993021;
    msg.roll_rate_mean = 0.422176781486;
    msg.time = 0.457957876915;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 95U;
    tmp_msg_0.lon_gain = 0.265276714151;
    tmp_msg_0.lat_gain = 0.934573067858;
    tmp_msg_0.bond_thick = 0.480551715507;
    tmp_msg_0.lead_gain = 0.705018109018;
    tmp_msg_0.deconfl_gain = 0.44743103661;
    tmp_msg_0.accel_switch_gain = 0.000297239548582;
    tmp_msg_0.safe_dist = 0.594634514333;
    tmp_msg_0.deconflict_offset = 0.589562975668;
    tmp_msg_0.accel_safe_margin = 0.562520955189;
    tmp_msg_0.accel_lim_x = 0.0667432210951;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.308785561416);
    msg.setSource(53436U);
    msg.setSourceEntity(241U);
    msg.setDestination(62983U);
    msg.setDestinationEntity(59U);
    msg.type = 248U;
    msg.op = 173U;
    msg.err_mean = 0.879028656473;
    msg.dist_min_abs = 0.217342767903;
    msg.dist_min_mean = 0.650674795005;
    msg.roll_rate_mean = 0.586951626827;
    msg.time = 0.447853590981;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 113U;
    tmp_msg_0.lon_gain = 0.720459862737;
    tmp_msg_0.lat_gain = 0.833968385901;
    tmp_msg_0.bond_thick = 0.861708705487;
    tmp_msg_0.lead_gain = 0.306304801209;
    tmp_msg_0.deconfl_gain = 0.873512011803;
    tmp_msg_0.accel_switch_gain = 0.418486032054;
    tmp_msg_0.safe_dist = 0.686276459289;
    tmp_msg_0.deconflict_offset = 0.850680109091;
    tmp_msg_0.accel_safe_margin = 0.268777791988;
    tmp_msg_0.accel_lim_x = 0.0635640978807;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.333690064295);
    msg.setSource(35240U);
    msg.setSourceEntity(27U);
    msg.setDestination(45280U);
    msg.setDestinationEntity(14U);
    msg.uid = 234U;
    msg.frag_number = 71U;
    msg.num_frags = 209U;
    const char tmp_msg_0[] = {106, -21, -65, 74, 68, 19, 77, -95, -25, -47, -78, -21, -89, -101, 16, 14, 6, -113, 65, -61, -81, 71, -49, -4, -48, 123, 117, -24, 45, -100, -18, -44, -24, 74, 69, 119, 69, -115, 71, -9, -122, 126, -88, 116, -118, 61, 21, -52, -45, 41, 21};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.503336810704);
    msg.setSource(44768U);
    msg.setSourceEntity(226U);
    msg.setDestination(20805U);
    msg.setDestinationEntity(205U);
    msg.uid = 97U;
    msg.frag_number = 181U;
    msg.num_frags = 187U;
    const char tmp_msg_0[] = {65, -1, 103, 57, 89, 59, -100, -57, 119, 42, -120, -116, 75, 102, -41, 25, -119, 1, 121, 7, 80, 23, -104, 37, 38, -111, -12, 27, -8, 30, -2, 86, -23, 10, -3, 48, -77, 12, -51, -29, -22, -6, -45, -30, -77, 91, 18, -107, 114, 12, -88, 88, 78, -100, 96, 37, -112, -10, -104, 109, 31, -85, 66, -33, -93, 111, 72, -128, -13, -27, 100, 103, -86, 94, -68, 95, 84, -112, 81, -59, -47, -62, -63, -66, 31, 110, -121, -21, 28, 79, -45, 76, 61, -15, -89, -99, 8, -61, 14, -75, 113, 47, 39, -35, -100, 13, 42, 32, -15, 64, -77};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.242605490066);
    msg.setSource(61039U);
    msg.setSourceEntity(52U);
    msg.setDestination(19055U);
    msg.setDestinationEntity(254U);
    msg.uid = 93U;
    msg.frag_number = 96U;
    msg.num_frags = 90U;
    const char tmp_msg_0[] = {12, 47, -69, 14, -5, 50, 118, 37, 94, -108, -93, -91, 60, -125, -31, -89, -118, -70, -112, -23, -66, 49, -5, 12, 124, 116, 47, 33, -90, 5, 33, 71, -93, -5, -69, 108, 78, -103, -46, 96, -28, -31, -90, 86, 19, 69, -11, -68, -105, 103, -87, 92, -36, 41, -97, 96, 0, 125, -12, 96, -61, 54, -58, 106, 101, -104, -110, -17, -65, -49};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.944356858442);
    msg.setSource(55234U);
    msg.setSourceEntity(80U);
    msg.setDestination(53510U);
    msg.setDestinationEntity(17U);
    msg.content_type.assign("SURZITWGTAEQCSAJEIRKYPDBZHQTTFUXRAOHZUTBFXTBSKSINGKVLIOLPLFEUMGNRLWVINRWZSTENEVSSHQOFXBFGXWONADRAYJHFNGJBUPDXAKCQLFCMAXENUHVDYFJMPWYPOBNGNGIIEUGDCJFOMWMEXHAYHHVVWXLDKJSRQZMHNAWCQTPBTZXYJZRIYPUUJOJISQKVZRKKCTGDZLMCOFQDGPIPVYYMOKLSHVQCMBAXOCDEQWU");
    const char tmp_msg_0[] = {51, -121, -64, 118, 24, 33, -12, 29, -99, -32, 75, 14, 7, 27, -112, 65, -39, -58, -26, 54, 111, 39, -21, -6, -73, 40, -47, 58, -42, -56, -59, 0, -110, -101, -66, -127, -7, 31, -107, 6, 56, 24, 43, -22, 4, -109, 41, -112, -14, -6, -73, 26, 122, -25, -77, 19, 97, 49, 24, 71, -42, 40, -75, 36, 93, 26, -55, 71, -126, -89, -52, -73, -22, -37, 63, 55, 71, -27, -46, 17, -102, -56, 16, -107, 107, 52, 35, 29, -115, 75, 14, 71, 31, -16, -121, -125, 83, 85, -44, -122, 25, 86, 83, 78, -19, 44, -49, -46, -33, 64, -107, 18, -15, 1, 116, 84, -41, -3, 52, -104, -48, 12, -10, 79, -49, 63, -74, 68, -32, -50, -14, 91, -105, 92, -93, 98, -77, -86, -119, 77, 67, 45, 1, -5, -108, 91, -115, -34, 75, 50, 10, 60, 73, -19, -66, -23, -122, -106, -36, -95, 34, -113, 39, -42, -13, -91, 39, 46, -75, -104, -38, -107, -100, 99, 112, -6, -87, 23, 4, 91, 63, 69, 86, -45, 47, -23, -108, 49, -88, -65, -28, -126, 41, -7, -110, -116, -24, 0, 112, -46, 32, 79, 76, 115, -9, -20, 22, -118};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.453572656682);
    msg.setSource(34159U);
    msg.setSourceEntity(195U);
    msg.setDestination(44U);
    msg.setDestinationEntity(175U);
    msg.content_type.assign("NBCRTMHLQKAVKFSBRVHLWWVJXPQKQNUUJPFSHYIROXJUNBGEEWXEYIWVEAYTFGVTBMEWALBVXGEFEIHYMGQURIYQWUECMODKITCPLLZLFZNVYOGSCWJTJZGITONDOBDGKFKNKCDNPPMKRIQZCHDFWJXWMEZHLMDUJRJKXAS");
    const char tmp_msg_0[] = {55, -95, -45, -49, 0, 10, -10, -51, -84, -127, 92, -4, 65, -26, -95, -56, -52, 100, -48, -98, 68, -59, -35, 46, -40, 100, -58, 79, -81, 33, 107, 26, -35, 45, 103, 57, -123, -65, -61, -99, -61, 34, -2, -51, -89, -84, -77, -109, -36, -38, 8, -16, 113, 84, 85, -25, 75, 24, 104, -118, -122, -34, 56, -72, 94, 48, 2, -119, -96, -27, -96, -40, 61};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.93895180479);
    msg.setSource(2U);
    msg.setSourceEntity(10U);
    msg.setDestination(4518U);
    msg.setDestinationEntity(220U);
    msg.content_type.assign("ECJOBRJMATVERCRTQKNJTLDMBIYNITPTBQZLPRNCIGSSXABOCWWMDOTVYQMZRMIVKXPWCFHCEGKSUMPQFIANVQSHYYFOARLGHLXHLUTOLKJOHQOGGUOWXQHFPVUXSGV");
    const char tmp_msg_0[] = {-41, -83, 88, 112, 7, 83, 116, 75, 69, 112, -106, 40, 3, -16, -1, -48, 11, -121, -13, 49, -96, -12, 91, 25, 9, -10, 10, 49, 54, -121, 116, 39, -105, -39, -19, -9, -104, -40, -121, 0, 117, -64, 93, 55, 2, -118, 89, 55, -115, 10, 68, 35, 117, -106, 68, -122, 88, 96, 60, 33, 51, -94, -65, -71, -81, -120, -8, -33, -90, -56, -99, -25, -110, -94, -7, -33, -125, 11, -127, -53, 63, -98, 44, 47, 86, -88, 8, -79, -69, -23, -86, 93, 118, -117, 0, -88, 22, -4, 2, 48, 97, -33, -37, 90, 4, -21, -56, -70, -74, 46, 82, 20, -108, -22, -106, -122, 14, -77, -52, -4, 42, 13, -40, -108, -36, 44, 45, -52, 11, 68, 35, 59, -115, 52, -11, 1, -8, -29, 22, 44, 102, 32, 86, -41, 116, -45, 58, -89, -101, -46, -111, -123, 118, -84, -127, -107, 34, 57, -97, -89, -95, 30, 69, -90, 102, -81, -83, -8, -111, 94, 23, 33, 4, 126, -49, -74, 40, -107, -89, -67, 91, 19, 20, -54, 19, -106, 114, 58, -73, -95, 69, 1, 60, 94, -14, -30, -96, 20, 5, -9, 88, -12, -17, -31, 61, 99, 33, -10, 10, -61, 89, -30};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.953053990061);
    msg.setSource(48478U);
    msg.setSourceEntity(64U);
    msg.setDestination(23664U);
    msg.setDestinationEntity(133U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.5193265909);
    msg.setSource(24661U);
    msg.setSourceEntity(56U);
    msg.setDestination(54461U);
    msg.setDestinationEntity(83U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.839674097976);
    msg.setSource(39171U);
    msg.setSourceEntity(147U);
    msg.setDestination(24071U);
    msg.setDestinationEntity(63U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.54046415561);
    msg.setSource(51560U);
    msg.setSourceEntity(5U);
    msg.setDestination(36175U);
    msg.setDestinationEntity(149U);
    msg.target = 7372U;
    msg.bearing = 0.250788917593;
    msg.elevation = 0.078252261204;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.969588731611);
    msg.setSource(5133U);
    msg.setSourceEntity(63U);
    msg.setDestination(56326U);
    msg.setDestinationEntity(229U);
    msg.target = 14676U;
    msg.bearing = 0.830519857537;
    msg.elevation = 0.644168880054;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.28057798586);
    msg.setSource(56072U);
    msg.setSourceEntity(240U);
    msg.setDestination(45942U);
    msg.setDestinationEntity(80U);
    msg.target = 64282U;
    msg.bearing = 0.388439472153;
    msg.elevation = 0.691620536864;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.620201251585);
    msg.setSource(58005U);
    msg.setSourceEntity(223U);
    msg.setDestination(61170U);
    msg.setDestinationEntity(170U);
    msg.target = 17834U;
    msg.x = 0.48942913665;
    msg.y = 0.0520474583678;
    msg.z = 0.400668693108;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.270272332829);
    msg.setSource(49403U);
    msg.setSourceEntity(91U);
    msg.setDestination(60718U);
    msg.setDestinationEntity(236U);
    msg.target = 65160U;
    msg.x = 0.329296765734;
    msg.y = 0.600745322641;
    msg.z = 0.311662595361;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.0841868265569);
    msg.setSource(45779U);
    msg.setSourceEntity(193U);
    msg.setDestination(7744U);
    msg.setDestinationEntity(118U);
    msg.target = 4740U;
    msg.x = 0.510422360742;
    msg.y = 0.275358860202;
    msg.z = 0.410078450191;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.0256338835524);
    msg.setSource(64963U);
    msg.setSourceEntity(41U);
    msg.setDestination(48765U);
    msg.setDestinationEntity(239U);
    msg.target = 63587U;
    msg.lat = 0.0278441456849;
    msg.lon = 0.0367651855803;
    msg.z_units = 25U;
    msg.z = 0.276284746754;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.037957025161);
    msg.setSource(60686U);
    msg.setSourceEntity(23U);
    msg.setDestination(8247U);
    msg.setDestinationEntity(180U);
    msg.target = 27298U;
    msg.lat = 0.447651681255;
    msg.lon = 0.155404508088;
    msg.z_units = 92U;
    msg.z = 0.768252505654;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.832596994858);
    msg.setSource(58415U);
    msg.setSourceEntity(109U);
    msg.setDestination(19729U);
    msg.setDestinationEntity(164U);
    msg.target = 55737U;
    msg.lat = 0.725374849101;
    msg.lon = 0.742638991103;
    msg.z_units = 65U;
    msg.z = 0.170046163003;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.782695203862);
    msg.setSource(12441U);
    msg.setSourceEntity(151U);
    msg.setDestination(61292U);
    msg.setDestinationEntity(248U);
    msg.locale.assign("ONJGMMGYZQXCDHITHMXGKFPKXXETLLCBXFTEIEEQSRNXBPUSVRCNRTLUIATCKFVJFWHHKVJGPAFTZYSCRZFDJSEBWKSFDRYOYIPUKFZONUANSTNPGM");
    const char tmp_msg_0[] = {106, -56, -75, 112, -68, -1, 78, -103, 93, 107, 115, 17, -120, 14, -23, 116, 18, -17, -110, -65, 66, -90, -13, -57, 35, 12, -23, 106, -43, -109, -100, -15, 7, -77, -125, 113, 78, 95, 74, -7, -118, -117, 59, 2, -121, -16, -54, -62, 79, 25, 48, -78, 93, -49, 40, 91, -126, 57, -118, -14, 100, -97, -34, -102, -75, 40, -97, 49, 87, -79, 0, -39, 112, -116, 7, 16, 66, -88, -64, -119, -101, -13, -115, -125, 119, 40, 114, 97, 4, 22, -85, -72, 46, 40, -102, -44, -4, 9, -41, -40, -19, 17, 106, 8, 18, -75, -75, -28, -70, 79, -128, -108, 73, 73, 14, -37, -105, -13, 120, -54, -10, -41, -27, 29, 97, -106, -103, 108, 3, -99, 21};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.579515448683);
    msg.setSource(7593U);
    msg.setSourceEntity(212U);
    msg.setDestination(18049U);
    msg.setDestinationEntity(74U);
    msg.locale.assign("QPPXJQXIHCRALOGVXFFJDDZSPYXOWDGZDYRXSKVRANLONENBDNRGJJRORUQSLBHEJPCHNWWOYFBYTRPBEYKTTPKHMCULISSAFQZMTPNITGJLAPK");
    const char tmp_msg_0[] = {-22, 62, 11, 2, -122, -77, 74, -74, -27, 117, -83, 31, 82, 120, -4, -36, 74, -122, -46, -107, 11, 76, -45, 31, -128, 85, -109, -25, -1, 29, 34, 28, 104, 55, -51, -8, -18, 77, 23, -22, 66, 113, -32, 111, -63, 56, -17, 101, 68, -107, -115, 100, 13, 52, -74, 24, -58, -59, 116, 74, -18, 112, 56, -54, 60, -20, -79, 0, -65, -11, 64, -42, -108, -115, 38, -42, 74, -102, -74, 100, 9, 48, 13, -78, -109, 26, 58, -8, -86, -124, 126, 57, -113, 99, 118, 12, 91, 89, 116, -114, -88, 106, -72, -110, -55, -40, -18, 70, 1, -71, -15, 120, 34, -15, 33, 65, 110, 57, 14, 38, 89, -104, -67, -12, 42, -122, -117, 50, -25, -106, -58, -87, 95, 64, -21, -16, 118, -72, -73, -61, -126, -91, 13, -45, 108, -120, 35, 115, -40, -106, -86, -121, 122, 95, -25, 67, 5, 13, 44, -103};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.668933588568);
    msg.setSource(24748U);
    msg.setSourceEntity(164U);
    msg.setDestination(41427U);
    msg.setDestinationEntity(183U);
    msg.locale.assign("HMRVTMNGOU");
    const char tmp_msg_0[] = {2, -117, -33, 105, 115, 32, 4, 78, 10, 111, -62, -18, 45, 10, 94, 25, 118, 46, -32, -16, 78, -65, -42, 117, 12, 0, -83, -2, 13, -55, 65, 119, -66, 65, 4, 50, -96, 92, -58, 12, -84, 46, -113, -56, -43, -84, -78, 4, 7, 14, 89, 20, -93, -24, -12, 67, -81, -90, -88, 68, 17, 2, -10, -6, -20, -84, -99, -38, 51, -62, 114, -6, -10, -99, 74, -66, 38, -102, -103, -96, -41, 118, 122, 83, -115, -31, 53, -38, -102, -67, 59, 25, 95, -19, 57, -74, -66, -14, 56, 111, 15, -115, -53};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.685406311728);
    msg.setSource(25484U);
    msg.setSourceEntity(20U);
    msg.setDestination(62660U);
    msg.setDestinationEntity(59U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.613912346272);
    msg.setSource(49970U);
    msg.setSourceEntity(236U);
    msg.setDestination(9739U);
    msg.setDestinationEntity(22U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.120460133993);
    msg.setSource(43514U);
    msg.setSourceEntity(153U);
    msg.setDestination(25853U);
    msg.setDestinationEntity(134U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.269740742434);
    msg.setSource(51084U);
    msg.setSourceEntity(198U);
    msg.setDestination(41022U);
    msg.setDestinationEntity(78U);
    msg.camid = 77U;
    msg.x = 41023U;
    msg.y = 26604U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.756664286753);
    msg.setSource(24984U);
    msg.setSourceEntity(54U);
    msg.setDestination(23773U);
    msg.setDestinationEntity(124U);
    msg.camid = 165U;
    msg.x = 31415U;
    msg.y = 33373U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.684589515854);
    msg.setSource(31724U);
    msg.setSourceEntity(98U);
    msg.setDestination(47660U);
    msg.setDestinationEntity(125U);
    msg.camid = 247U;
    msg.x = 60162U;
    msg.y = 31537U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.436689395056);
    msg.setSource(44858U);
    msg.setSourceEntity(22U);
    msg.setDestination(16954U);
    msg.setDestinationEntity(66U);
    msg.camid = 96U;
    msg.x = 40683U;
    msg.y = 46725U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.134282322396);
    msg.setSource(28968U);
    msg.setSourceEntity(156U);
    msg.setDestination(45236U);
    msg.setDestinationEntity(171U);
    msg.camid = 118U;
    msg.x = 36023U;
    msg.y = 11685U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.0593472342398);
    msg.setSource(33494U);
    msg.setSourceEntity(142U);
    msg.setDestination(19600U);
    msg.setDestinationEntity(55U);
    msg.camid = 78U;
    msg.x = 20414U;
    msg.y = 65275U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.373787605747);
    msg.setSource(27757U);
    msg.setSourceEntity(164U);
    msg.setDestination(61168U);
    msg.setDestinationEntity(196U);
    msg.tracking = 47U;
    msg.lat = 0.0665695850543;
    msg.lon = 0.147646152169;
    msg.x = 0.153834556026;
    msg.y = 0.138880555943;
    msg.z = 0.590027069976;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.433529325419);
    msg.setSource(42802U);
    msg.setSourceEntity(104U);
    msg.setDestination(43276U);
    msg.setDestinationEntity(63U);
    msg.tracking = 180U;
    msg.lat = 0.929705351953;
    msg.lon = 0.620342424713;
    msg.x = 0.691033495429;
    msg.y = 0.682530387086;
    msg.z = 0.599764566752;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.974446065872);
    msg.setSource(37713U);
    msg.setSourceEntity(15U);
    msg.setDestination(10619U);
    msg.setDestinationEntity(152U);
    msg.tracking = 243U;
    msg.lat = 0.866647649208;
    msg.lon = 0.672770063593;
    msg.x = 0.363813789622;
    msg.y = 0.1147064649;
    msg.z = 0.592872212261;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.50503341195);
    msg.setSource(32720U);
    msg.setSourceEntity(78U);
    msg.setDestination(35480U);
    msg.setDestinationEntity(111U);
    msg.target.assign("BQJBLSGHJJNONEWVJPPXMWBBHPIMVTKSVVWGDCAHQJOKBHHRIPTZCGRCDPDYBKUTSFFESWULYJGWEVGMXIHIFXPMZYQSQAKOEKZRFZHHOLVFOYAFVRPGQWPSAXTDXUSKCRADEOUBIWDHVGDHPIOYBS");
    msg.lbearing = 0.309884041127;
    msg.lelevation = 0.241945444819;
    msg.bearing = 0.706621257273;
    msg.elevation = 0.15188810164;
    msg.phi = 0.909790421011;
    msg.theta = 0.56604173456;
    msg.psi = 0.68425673439;
    msg.accuracy = 0.108461687909;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.501468614502);
    msg.setSource(40878U);
    msg.setSourceEntity(30U);
    msg.setDestination(52191U);
    msg.setDestinationEntity(120U);
    msg.target.assign("EKWOXCAEUIFLJHBIVVCOZUGDPBDXPTWAFFGYYQNQXCDNNIIRPZEQIVDSHEBIDLJAKOAVTLCOOMTVOCGZKKTPSTFQHXPICRFVZLSQRMUYHVSHSDPMJKDVJNMZRPVKYRNMYWYEPUZUAEWBJWWHXNGYMRQGBMRHJOCATTBVSG");
    msg.lbearing = 0.927773885937;
    msg.lelevation = 0.415104732581;
    msg.bearing = 0.348882131735;
    msg.elevation = 0.570729783626;
    msg.phi = 0.275036204797;
    msg.theta = 0.234389633887;
    msg.psi = 0.899209834985;
    msg.accuracy = 0.41214954223;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.930090904739);
    msg.setSource(27768U);
    msg.setSourceEntity(146U);
    msg.setDestination(471U);
    msg.setDestinationEntity(126U);
    msg.target.assign("EMUYDGRIVSYNKEOOGPBWNJIGQXTNRPPRZVESVYTRPPOQQJCZLQHZNEOYSJAGKKGILFXVKAZJMKUQVMUYVIEDHEGFQJYELBBINJBISJFSODRALHNZLHAGSDLCMPNHTCKPEZBXBVTWOBMUVMPQFFWXBZXBDSXFYOFUQGZWVJELYU");
    msg.lbearing = 0.198722159553;
    msg.lelevation = 0.566263208558;
    msg.bearing = 0.0197321476131;
    msg.elevation = 0.905046497556;
    msg.phi = 0.42729006926;
    msg.theta = 0.845201076103;
    msg.psi = 0.951987708243;
    msg.accuracy = 0.00314819955776;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.0251597445191);
    msg.setSource(62237U);
    msg.setSourceEntity(80U);
    msg.setDestination(32517U);
    msg.setDestinationEntity(97U);
    msg.target.assign("EMMDQWDFNGHIYCHKGLRAUGAMEZHVVWDCMFHDGPXLRVRPIPAMWLEXMCZWGVTTNPYFZVKXJNVXFTHTYOAZPOCOUSQCPDQPSBAKNWKROUHCDWLDTAHSLYZJKKHIOUNBTUSUSSPIKBCZMBZRGEX");
    msg.x = 0.184006441139;
    msg.y = 0.17071759206;
    msg.z = 0.874228470971;
    msg.n = 0.141341367559;
    msg.e = 0.450939645227;
    msg.d = 0.832574258151;
    msg.phi = 0.240515786106;
    msg.theta = 0.382093316883;
    msg.psi = 0.141633400757;
    msg.accuracy = 0.844308509111;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.654579963029);
    msg.setSource(17692U);
    msg.setSourceEntity(240U);
    msg.setDestination(43266U);
    msg.setDestinationEntity(21U);
    msg.target.assign("OTHXDKQNSFXVENATIEYUJHJHZUQFHREZDLOIPCWWNSIYSXSKXEAHCOAQWEYONNBALVXJKBLVIFQGYMLFHRMUDRSVDPCTXTBMQYJOIRJBARKWELUYWMVPZPOJBUGYPDDRWVGZOOBQLCPNILBLXFBPRHPCFZZGDMWOKRQQEGTMV");
    msg.x = 0.133833471362;
    msg.y = 0.624030216025;
    msg.z = 0.60682808576;
    msg.n = 0.877473185588;
    msg.e = 0.0757637545498;
    msg.d = 0.625051296711;
    msg.phi = 0.790241183539;
    msg.theta = 0.150091992805;
    msg.psi = 0.647608807559;
    msg.accuracy = 0.315648512709;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.885167278745);
    msg.setSource(60262U);
    msg.setSourceEntity(244U);
    msg.setDestination(23488U);
    msg.setDestinationEntity(117U);
    msg.target.assign("WYMFMAGEEUXQZGXZVLEAZDNYXMVOQWJYCHIWIHGYYPNHVXQUPGDTYLWCJPGMULJNAVDNMSKR");
    msg.x = 0.229886651368;
    msg.y = 0.697624473906;
    msg.z = 0.989310211124;
    msg.n = 0.0351321029592;
    msg.e = 0.24840154821;
    msg.d = 0.444314616694;
    msg.phi = 0.547251302597;
    msg.theta = 0.426965412302;
    msg.psi = 0.495330857117;
    msg.accuracy = 0.0397613905937;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.287914841113);
    msg.setSource(41788U);
    msg.setSourceEntity(90U);
    msg.setDestination(33045U);
    msg.setDestinationEntity(122U);
    msg.target.assign("GHQUPGFUZJAIADBLAOFXRDXZKMV");
    msg.lat = 0.451068532309;
    msg.lon = 0.155798473255;
    msg.z_units = 15U;
    msg.z = 0.182207012959;
    msg.accuracy = 0.486093820431;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.251898691904);
    msg.setSource(19798U);
    msg.setSourceEntity(90U);
    msg.setDestination(43401U);
    msg.setDestinationEntity(202U);
    msg.target.assign("GQDZUHXMOHKGKSRGQCBQILBWVHLIXPISGLPRDJOHWTBNANYDCMSGXGDJXAYUVJDNZECQRPMQEXHYOQEVNRJMDHWCKYFSESZPNEDCTUHVBFPCXYVVEOPZGFJKBLPKHL");
    msg.lat = 0.402565274664;
    msg.lon = 0.877562605424;
    msg.z_units = 253U;
    msg.z = 0.770380114734;
    msg.accuracy = 0.612785202228;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.700390040959);
    msg.setSource(2073U);
    msg.setSourceEntity(62U);
    msg.setDestination(57891U);
    msg.setDestinationEntity(39U);
    msg.target.assign("YEVBUNATIGERIHFAPUVHPWWJLMEVRPBTERDYJNEDQASNJIOQIHISCYEDXQLVGFVLKQWHEOCWJBMVTVGGCWZFCWHKXDLCMGHVPQQXFVXMCNUJWYPPUYACMGKKBOBQGDBLFUULROEDHZCXGMVKJFTYSNZRNZLZJEORBOTRKRSFMYMORSLZLSYHUBWAZBASKJJPUAXATFKNP");
    msg.lat = 0.78708592068;
    msg.lon = 0.0674321327167;
    msg.z_units = 30U;
    msg.z = 0.848581149801;
    msg.accuracy = 0.935823840151;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.316788384026);
    msg.setSource(37749U);
    msg.setSourceEntity(6U);
    msg.setDestination(53158U);
    msg.setDestinationEntity(9U);
    msg.name.assign("PHANUYCJCTVHATKTRPWKWMGIHIRXWDNLZQEKNSZJPVEBNSBJYKLDLPIWREBSXIAZHFNHLTOBTKZLJKUFEQJUBHVJXVDCIFVHHFGMAOYPWWBNXWGUVSSVQLCOOUMPUFGJAFLIJBQZGRNPYPXNHZGKRHTAMGCVVBGEUMYMSZLCCYWMOLSUIDJXIMRSRWAZKQXOODNTEFDCETMOFGEXFBQCYDKASTYCDZXAIPRJNYZQDFILPAOQORUW");
    msg.lat = 0.994846861495;
    msg.lon = 0.986567209144;
    msg.z = 0.560994597339;
    msg.z_units = 40U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.891501513087);
    msg.setSource(37287U);
    msg.setSourceEntity(196U);
    msg.setDestination(25909U);
    msg.setDestinationEntity(2U);
    msg.name.assign("GWTWTXIUGSANDSJJBAIVVEXTENFSWGXYWVZVPSRGTFNLRBUWVCTYPALZMZGOSXKNXOLJBEHTJARQUOFMVPLPULGHFGDHIOEBIQVKCYWZJURQNDNOAUSIGECMQJBCDMMXDDYSUHWBKJFMEPYYERHK");
    msg.lat = 0.447643984858;
    msg.lon = 0.577799420139;
    msg.z = 0.632191407137;
    msg.z_units = 199U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.869166268301);
    msg.setSource(39871U);
    msg.setSourceEntity(220U);
    msg.setDestination(39578U);
    msg.setDestinationEntity(92U);
    msg.name.assign("ADBWMCJJTTQNHNRHFELLPQSAHCLCBKNJKMIZYQTRKIGNFZZSZXBMYXWHZZBCVUWMEWNYGLPGRQNLJSBFEDATEJLLYBPTZINIOFUTUPTSUMBQASWRAOKMKVWFRYRZBUJNXPSRLRVWMADDCTPOGDJDGODOOHMGFSXMDXXOVIFYGCQABKGSKKUAXFESOYNIYITDUJYZCEEZJGIUKFWXCQQGDJRLVHRFPTOCNQVOPHHXVEWY");
    msg.lat = 0.687134703144;
    msg.lon = 0.509890666991;
    msg.z = 0.0174343827188;
    msg.z_units = 228U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.10637717645);
    msg.setSource(29042U);
    msg.setSourceEntity(27U);
    msg.setDestination(48947U);
    msg.setDestinationEntity(220U);
    msg.op = 98U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.682749638662);
    msg.setSource(49537U);
    msg.setSourceEntity(38U);
    msg.setDestination(47U);
    msg.setDestinationEntity(34U);
    msg.op = 80U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("OPELUHBNIILQUPGIQNWFVRANPEFXHEQOVFCUMSQBTIKAJLLOYLVGWJTHXNDDWWLRKSGFBAUJIKRZBGZEWMGLJMAQBVXVUPPSUXAMKCFYXYZMCWBUOVPKDYZFQYKIRCKNZISLCUKMHVRFQOHPRESGYBNCDMFNPKRSAXHDOCUMMCXVFVZRYPBCOAJYAYESUBZTJNTQSWOTCDJDXTBANGLWHDIEKQTWARJT");
    tmp_msg_0.lat = 0.111495351652;
    tmp_msg_0.lon = 0.181835097824;
    tmp_msg_0.z = 0.756438835656;
    tmp_msg_0.z_units = 30U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.826960238306);
    msg.setSource(32508U);
    msg.setSourceEntity(165U);
    msg.setDestination(471U);
    msg.setDestinationEntity(47U);
    msg.op = 16U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("CHKSAFFKVQPFXDEMYIHGTATCIURQAGGITLUAFOERALGCYJJZZHCNXDZONSWGBKCRZFTZEPUPY");
    tmp_msg_0.lat = 0.488803588901;
    tmp_msg_0.lon = 0.225589914131;
    tmp_msg_0.z = 0.21738874667;
    tmp_msg_0.z_units = 13U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.452461151085);
    msg.setSource(45682U);
    msg.setSourceEntity(64U);
    msg.setDestination(44636U);
    msg.setDestinationEntity(176U);
    msg.value = 0.396374003019;
    msg.type = 148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.831783059403);
    msg.setSource(7677U);
    msg.setSourceEntity(41U);
    msg.setDestination(58270U);
    msg.setDestinationEntity(241U);
    msg.value = 0.947991976978;
    msg.type = 155U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.170108729088);
    msg.setSource(13577U);
    msg.setSourceEntity(163U);
    msg.setDestination(13238U);
    msg.setDestinationEntity(162U);
    msg.value = 0.210420200962;
    msg.type = 198U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.230610698732);
    msg.setSource(26352U);
    msg.setSourceEntity(211U);
    msg.setDestination(63408U);
    msg.setDestinationEntity(232U);
    msg.value = 0.654485480559;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.755872881121);
    msg.setSource(51499U);
    msg.setSourceEntity(86U);
    msg.setDestination(27611U);
    msg.setDestinationEntity(128U);
    msg.value = 0.461718834879;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.335101864429);
    msg.setSource(42063U);
    msg.setSourceEntity(43U);
    msg.setDestination(59412U);
    msg.setDestinationEntity(132U);
    msg.value = 0.445807900729;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.329801118929);
    msg.setSource(28168U);
    msg.setSourceEntity(198U);
    msg.setDestination(3482U);
    msg.setDestinationEntity(67U);
    msg.timestamp_last_service = 0.322796247788;
    msg.time_next_service = 0.0376830978289;
    msg.time_motor_next_service = 0.719671656775;
    msg.time_idle_ground = 0.0174237067467;
    msg.time_idle_air = 0.846989274044;
    msg.time_idle_water = 0.663137210783;
    msg.time_idle_underwater = 0.943546283492;
    msg.time_idle_unknown = 0.910406843564;
    msg.time_motor_ground = 0.954671922987;
    msg.time_motor_air = 0.243806376884;
    msg.time_motor_water = 0.604591135679;
    msg.time_motor_underwater = 0.94113238662;
    msg.time_motor_unknown = 0.804568988936;
    msg.rpm_min = 26820;
    msg.rpm_max = 18485;
    msg.depth_max = 0.724707716808;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.457838682673);
    msg.setSource(25723U);
    msg.setSourceEntity(168U);
    msg.setDestination(65025U);
    msg.setDestinationEntity(79U);
    msg.timestamp_last_service = 0.283534561463;
    msg.time_next_service = 0.0519479910061;
    msg.time_motor_next_service = 0.202212913583;
    msg.time_idle_ground = 0.290589063804;
    msg.time_idle_air = 0.265222771648;
    msg.time_idle_water = 0.31064616722;
    msg.time_idle_underwater = 0.648747018071;
    msg.time_idle_unknown = 0.431928879571;
    msg.time_motor_ground = 0.222695650358;
    msg.time_motor_air = 0.77057126643;
    msg.time_motor_water = 0.368395438025;
    msg.time_motor_underwater = 0.474084714698;
    msg.time_motor_unknown = 0.294654077128;
    msg.rpm_min = 28060;
    msg.rpm_max = 27496;
    msg.depth_max = 0.0819296072286;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.163288880297);
    msg.setSource(24404U);
    msg.setSourceEntity(19U);
    msg.setDestination(64217U);
    msg.setDestinationEntity(96U);
    msg.timestamp_last_service = 0.982729437611;
    msg.time_next_service = 0.272539907118;
    msg.time_motor_next_service = 0.931702911183;
    msg.time_idle_ground = 0.616780643825;
    msg.time_idle_air = 0.877587818391;
    msg.time_idle_water = 0.147208072688;
    msg.time_idle_underwater = 0.925381786995;
    msg.time_idle_unknown = 0.421854767383;
    msg.time_motor_ground = 0.533486745862;
    msg.time_motor_air = 0.0381566257727;
    msg.time_motor_water = 0.816402255629;
    msg.time_motor_underwater = 0.506907800193;
    msg.time_motor_unknown = 0.130980958317;
    msg.rpm_min = -26185;
    msg.rpm_max = -12720;
    msg.depth_max = 0.769062124932;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.394771184387);
    msg.setSource(35877U);
    msg.setSourceEntity(14U);
    msg.setDestination(18420U);
    msg.setDestinationEntity(102U);
    msg.severity = 141U;
    msg.text.assign("ISOBQOBAQLHGZPPFFPYXCVYTFBNULSJHCRJPLNEFSIAWXKROEZVYUBFRQUFIRMCPJOUVHUMVIGOEEWDSUBYGLMNJXWPDQGQGDIGNWXWFKRBENZDZAHHMAPZFCIYSVXMJA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.882661289723);
    msg.setSource(4261U);
    msg.setSourceEntity(52U);
    msg.setDestination(41121U);
    msg.setDestinationEntity(87U);
    msg.severity = 126U;
    msg.text.assign("YGCYIJRGWBLXAJIOKBOAGLT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.36280789961);
    msg.setSource(17086U);
    msg.setSourceEntity(20U);
    msg.setDestination(45199U);
    msg.setDestinationEntity(180U);
    msg.severity = 188U;
    msg.text.assign("QQWYMTICNVNMUFKGJITRYYKXADGSC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.596531833929);
    msg.setSource(1099U);
    msg.setSourceEntity(149U);
    msg.setDestination(56226U);
    msg.setDestinationEntity(56U);
    msg.channel = -1;
    msg.value = -530162118;
    msg.gain = 40U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.0136939266166);
    msg.setSource(16261U);
    msg.setSourceEntity(222U);
    msg.setDestination(30985U);
    msg.setDestinationEntity(211U);
    msg.channel = -118;
    msg.value = -1424713485;
    msg.gain = 147U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.696042694974);
    msg.setSource(26409U);
    msg.setSourceEntity(50U);
    msg.setDestination(55701U);
    msg.setDestinationEntity(55U);
    msg.channel = -6;
    msg.value = -597817514;
    msg.gain = 79U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TemporalPlan msg;
    msg.setTimeStamp(0.717545520404);
    msg.setSource(12200U);
    msg.setSourceEntity(36U);
    msg.setDestination(29757U);
    msg.setDestinationEntity(156U);
    msg.plan_id.assign("AQWWCZHDLNJKKVSRTJXOHRXGCGYTADZFYBNHIBPMTCPGFOUQOFJMTVGWLHIOVYZNNDWQPBDFQCYAXYXZSBFUVHQXEDRUTQGJXMWRUAPXRPJULFOLLWRVMRAKLUZNNQOJOHKUZNMIQTMWRFASPIDEEEVBPYHECXASSFOCWBCSGGRYWSEDKHKVKHAIRNLSDIEVTOBPHCTZJJDFKABGCJMMGXTXIIQUUYYQCVJMELEIEWUIOBNKLKSSFMDVYG");
    IMC::TemporalAction tmp_msg_0;
    tmp_msg_0.action_id.assign("TTDBKHCXHHMUQNTWCVUKJCVYNGZSLYXISBSLOQFGKPUEEFMHBQIFTAXVNWQUODDBIYGNGQMZLYFSWAJAZJZCJCKVEXSXCRWOIKSREMTBQWSZUSFBVAMMQJPUXTKONIRHFIDNCTNDGFAGHLOTOIEJUNLPBOEZFLKPLOFWHPYEAEJRYVQONWWPZMNRRZOLDUERGLDWBMDVXMHAQIBMYUHGQYAXWVEC");
    tmp_msg_0.system_id = 48729U;
    tmp_msg_0.status = 5U;
    tmp_msg_0.start_time = 0.617700100033;
    tmp_msg_0.duration = 0.964016042587;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("QJYCLMFYISSZKFJRKWWVPDGIXKTPIAPOCHNXVWHQOAZINZLGYOIPLOUTSPDEWHQSUHHGDMEQBSTLWZXDFJCHUZNAZRJAWNOSXFRAADHFGITHVOZOYLTKILBEBLYNGWCQZMYBITVHPUPVOMUYIPECFNSEZYMBGCEHJQNMKGFEYCKQWD");
    tmp_tmp_msg_0_0.description.assign("DBBIOWQFRXOTTCLJAHLNMHHWHMSFZBUWFTURIWATCATXPCICIPHPZRCMCHMSXROWKVOLGDEVGYKLYNYPALMDHKUVILYSYGVYKUOSMRJCFQTEQIPGQPBQNODJMDWSLWORXEZCUTYKBBZJUGAADVBRKFZMNNNFXCXYJHGP");
    tmp_tmp_msg_0_0.vnamespace.assign("URABWPKADOLUXDQRPCRFBILPZMTALYYHBIZBGFZUAIFJVIDZICRNBWSUVOPAMHJJWBTKDSEMIQLJURQQOJDKXIYGESCGJXJDGRUKKHUWCOQHSNQTKEAMHWIRVHFGOVCNMPBDXFEUFZOYIXYATBPOZWXWAIEFSTQBMXMOWXPTKMYSMTCLQYRJPUGHUHDFCDESNFVZNB");
    IMC::PlanVariable tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("ONNUDNQVNFPPXASJTRPLFBFUAAGHCSXSVTLJOMNEMCXZIZIDJQZXWQDJDXFEMIILWHQITMDPWJLGAFWQPJFCQRIUJYHDEYDBGOYEKVEVCGYZOGKHJSGUJSQWVEIKBFXQZGXRNZYHSTWKAYBWSPJTNEKARLNFYPCOWVADZWMYMUKUHLIAGCHQTLYTFRZQHZMRVLROKRBIOMCEIRUDBBFKGUAT");
    tmp_tmp_tmp_msg_0_0_0.value.assign("KVVJSXBRQXAFDUHTOBPTHDCWPJSOOFFCRINDKRJCRHGNKTLWWASCLKHQMXHGPQMUYDASECHQBDLSWBETZVURVLSZADMBPHJNENOJHCTRQJZQERBT");
    tmp_tmp_tmp_msg_0_0_0.type = 235U;
    tmp_tmp_tmp_msg_0_0_0.access = 27U;
    tmp_tmp_msg_0_0.variables.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_man_id.assign("SBARSMDKMCKXNSCUSGOYMAIEABJKLIHDLEOTEWFYSKZREZXHMHGCSDBFKJTDZUNAIHGLVZUSKZUGNWVUHUMPOYBMVVHBAEXIIDDWZCOXYNSDEHWRWKOBVLDHQTXWCDGFZPBERTBBVREQJPTZJWPGOACFAXLVRBRAPJKKTFTLVXFPDPSQPCHM");
    IMC::Sms tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.number.assign("KLDCYKQCIYLCYQINDPDXTECQNVWAQMKSHNNKJFAJGWYWUZGWAVYQYELFMNZCZHDEONVRSOSGCRKJEEECZHPTOZXBZFRMADNKSSTDCWDTMOHWDDPSHETIURJMELWFOSTIYVOMBBVLJG");
    tmp_tmp_tmp_msg_0_0_1.timeout = 4278U;
    tmp_tmp_tmp_msg_0_0_1.contents.assign("DLWWKTKJCROKXQIUUQZQWFFZUIUFGWLWNIXRVUAQKHDPZPOABDSPHOKSWCFNZHTVXVWKODOMEPQACIHMDGHSTVLXIAZGLNBCJCPSNGRATHNAOXSFMXJIRGWFPXVKNJNJITMLACHERMMBRRYHZRCYPOKASYNRBGBPBUZFBLPSKJMOUSDJHQFMVEHSDEKEYZVOEADTFCJBFNJVNCBVEZVEQQAYQYCXTLEYPE");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.duration = 60251U;
    tmp_tmp_tmp_msg_0_0_2.custom.assign("MXQHDRESVKBMKDTIXAFFPKSZFKISADGPSZLJYAWVLOIQNIIGMGSWTKOLNTZUCPAXHCJJLBEUXRBWBQYOYMYCGWTDKQPPIPZSWANUJFLQMYBOEBJJAIVIVNHR");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.action.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 105U;
    msg.actions.push_back(tmp_msg_0);
    IMC::VehicleDepot tmp_msg_1;
    tmp_msg_1.vehicle = 51666U;
    tmp_msg_1.lat = 0.653562327577;
    tmp_msg_1.lon = 0.3099245688;
    tmp_msg_1.deadline = 0.834692392707;
    msg.depots.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TemporalPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TemporalPlan msg;
    msg.setTimeStamp(0.731476821256);
    msg.setSource(64847U);
    msg.setSourceEntity(167U);
    msg.setDestination(36540U);
    msg.setDestinationEntity(110U);
    msg.plan_id.assign("ZJHNKXCFALGEITGYIXASPWHYASEJVACIYBRXCRGIJEFSQNXXZORTVNDWWRXSPLRPMURTMAPQMOFNUHMWFKZHZRROLDQNRCBDTUDOKVLXYAEUFWHIRUQQKWBSBHOZHHIPCGHKOQMZMTNVBWFSTDKGVJDGENNWKOQAMWLEOYVGMUQVBKEXFYQLUKZVCAICCPOBJIYEGDZDGSTKCUFALENPTPJBAYPDZBT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TemporalPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TemporalPlan msg;
    msg.setTimeStamp(0.106711507598);
    msg.setSource(50244U);
    msg.setSourceEntity(117U);
    msg.setDestination(42794U);
    msg.setDestinationEntity(199U);
    msg.plan_id.assign("TPINUUSKKRXJOADDZQFFCAYLMGJMEGOTRLHPGADWJSBHSGCIEUYQQHACDSNUWTYMFRMMBKLJFENLIGQDKPTOVXTPXFHQYAOVGIQCSJEHBVPQNPXWLQIFROKPHRWFHOGBUORKVRMRMWONHJSDZZGLMKOPZUXXYNSFATBTENJRUAFXZNEVXGYKALEQVCYKIWGDZEYURPOBLWTVIKZWWVAJYENDBBJYWIIDABJLTBUQCDTXMSVCXLCHUZ");
    IMC::TemporalAction tmp_msg_0;
    tmp_msg_0.action_id.assign("JXSLZVIJOXHDLAAJBNQHBFNFCVWIDTLROUVTORADPIRYMDHABOCQVTJMXZRADEPUA");
    tmp_msg_0.system_id = 36233U;
    tmp_msg_0.status = 90U;
    tmp_msg_0.start_time = 0.0717200169649;
    tmp_msg_0.duration = 0.0752775627818;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("NGNECUJZOEBWFDVXVYQEHGECKLUIWTOXVUOFDMRWIAHRWWYXQIPXZJTWLIKUHDNWNCSPTFPYDDGYZCRGHEIXBZIHCFMLDOMDJZZQOSBEPHFHJWFNAZQCWJNNGEERKKVVGXHGJKMYAEZARSKWRMUHZBOTETSPASUGNMNYIOIPKCTAJVRVLUXYCTILDQGSQOPAJMMPHSBJXOQSL");
    tmp_tmp_msg_0_0.description.assign("NOFSPWVWUVGWLTZFOKXUHUEAVTPYJZLXHCOTAAEQBKJU");
    tmp_tmp_msg_0_0.vnamespace.assign("TSTEGMZWLBQHCTSDDOPCVSROJKOMYHIETBTGGOSTABYHLVEHQJWEVSMOPXCDLHSGNOWMGAYGWNKWFXUFKBFPYNJZ");
    tmp_tmp_msg_0_0.start_man_id.assign("NTIRLUFDRAAHNVWMYPDQRTFVKMJPGCJEDYMLEXVEVLDRYOGJOGZVFWTTCXFJSBHRUHMPPZQYGFLHJACN");
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.maneuver_id.assign("PYTZHQZFNNNNZHKTUAJUUALBLGBIFMXMPSTZXUWKHBSRGRODZACBDSHETNMKSSDOFVPSHMPPVIYTOKWQBEYGIDOJPGIYGLHEYC");
    IMC::FormationPlanExecution tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.group_name.assign("BWDWOUSHIVBEJMFEFKYHSCEMKXUZMCNXEUKPNKGVJSLJLWAQTLWBSONZERXSEFJPTIZPLXZPXPOTPBBXHDYMRQDKKQMYUSYYCULHZZHNLPSYYRUIQTNFECPVBUQFKGOTVCMRIACNUDBRAWXOFVXSHGGDOFYSAPWVIRGWUMXQMJAAFGMCCNITHWQFIYAKLDDLJHLGRVORWZNJTJE");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.formation_name.assign("DBHTMLAJCUOXMYMWNSSPZPOGVGQDPTXRDXKC");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.plan_id.assign("HCSWLYIBUWJAXLHSIJVDCDXQEJUHVEANGVAMYDEXHFZMHAEVGZSYUUTCWPPAKOVRNSKBVVEGXJG");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.description.assign("UQNSNYHVXARVTKNYWTUSZQEQOBKEOHPIUWVGXUTDVURQFGFLJJWUGVKMQRHMIQOZUEZPCVEVTJHOMEWFGZYGZNLIPEBQBAHZGYLKRFJFMEAHIKBFPMTDBBVEIIDCPRYWZOWAHQCJRSBTXFITNUNKFMKJLMISCJHXMDRZXLXYLOMZDHECLOVDPPGCXYGKCOHWAKDGSSWWDNLR");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.leader_speed = 0.455194241815;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.leader_bank_lim = 0.547359994827;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.pos_sim_err_lim = 0.730765248423;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.pos_sim_err_wrn = 0.0451544684359;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.pos_sim_err_timeout = 36184U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.converg_max = 0.239618264161;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.converg_timeout = 10849U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.comms_timeout = 38918U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.turb_lim = 0.56978905456;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.custom.assign("BMPFGTLBYQZIBIVEVYDPZZLEAFGFCEPXQFEUMJETOCFPCXRLVGZRFKJJDSJPRPIDLYRMSQRIYISRCWVNPUSXFNCHDPASXOOAWWIQOMAUUWTP");
    tmp_tmp_tmp_msg_0_0_0.data.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.maneuvers.push_back(tmp_tmp_tmp_msg_0_0_0);
    IMC::PlanTransition tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.source_man.assign("CYXIYIVVBIQSESFZWJCPQHODKFLVULDOKDWJYTHZOGIQOPAFGBSXLUDYFPBPUWEGQPEDDBMNQLMROFQUHKSXLNIPMSYUXKUSFKIYZQVCSNGFGHCAAHMMWDTHFUMRPRMFCMZOAXJJYSQGONECNLTAJSBTRMVAMTRR");
    tmp_tmp_tmp_msg_0_0_1.dest_man.assign("OYXTMYLIVLXVRFEQDGJIEYEEQTTWLMWFKXIRXHOZJZJECAMVUJSBSJZSVTPVQOYWRHQJVFXLZEERRBQATVDNURVGFPYNGDCZTVUPCLTYXPBDIUSNXKJRPJHGRGQEDWYOWSHKMSBFRWBZICXRYBNKYXUMDCAINHNUPIZZANUIWKKGWFBUIKTAC");
    tmp_tmp_tmp_msg_0_0_1.conditions.assign("OTXIAYGVNUUGZXTOKGKQFXJPPNDTXZVKJQFTQSOUIMBTVIFPKTVLZEEVLIHWMKARFZDONYETPGCQIXJRKRUULBHIKEODEGOHCCIKRQUDSWHTPLCSPHSAWGOMALJEOCJBBDYPRNQWYZYLJSWKGHMUAAQSVNPXVMJJHWCCMQUHCKITFXDSGWYZARQDYAVFFSJSHYZNOWELDYMLTLUJRCIPV");
    tmp_tmp_msg_0_0.transitions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::PathPoint tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.x = 0.306731915699;
    tmp_tmp_tmp_msg_0_0_2.y = 0.521512095801;
    tmp_tmp_tmp_msg_0_0_2.z = 0.779851147734;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.action.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 3U;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TemporalPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TemporalAction msg;
    msg.setTimeStamp(0.766354332779);
    msg.setSource(49959U);
    msg.setSourceEntity(177U);
    msg.setDestination(61244U);
    msg.setDestinationEntity(195U);
    msg.action_id.assign("JSHYHFJCRNQLLRCNVSXBARKOGBTMYDLJEXOJMFEOIROYI");
    msg.system_id = 45073U;
    msg.status = 102U;
    msg.start_time = 0.768600264228;
    msg.duration = 0.412738953024;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BHHBHTAZZTCTLWJIMVUECBVXZMXDUDCONXYGUZJQYEMHIGARWALDOSYLJHOYXXWIGJYBFLUFTPOSFBXNKCKNOGYFQKCWKNSOVJRCJMBFKPZLQDXLYQPNTLQKMITTDDFCPZGXEMQMZGWINYUKIAATDEZQJEWRLSPRIVYVNBERAVCSMEOAAZRCO");
    tmp_msg_0.description.assign("UEWWIWPLIKSVLYNGGQUPUKFRBGDSJIOGQQGZY");
    tmp_msg_0.vnamespace.assign("CUQMYYFOBBSDYBMILTKQTRBTDAWGEBDQEEUSTNLEAGECWTRFQJHGVOQJRYZJNPTQSRMOSCFSZ");
    tmp_msg_0.start_man_id.assign("IMYLSDFJZWCADJXXCNNSNPYYMEWVIOFTKTWDYUXRTELOOVHYELCREFPPWZVSSOKLBIMWCXSITCYJJXIOSYYVXRHUGGRVCBOPTHNAHKLUWGFETGLHJBVRSDKDIUPFAQIIEZDJNPMARDTFJPRTHHZQKFCZJMNBLMOMMGUOFKRKQUAIFGUXQYWACOGQGKPVCDNENQLZBEBJQUTDAHPZKVTUOHQBSWDCXGJHB");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("SBRRASHSGSWTQTUFFENKSDCUUJUZGVHPKIAGACFMYKKDRLYIPTHEVTKWKYYVPWCQYVIFHGCDHJJVGHMKARGFKVEMZSJDSXXATTBUVEOBLDAWMAIYQTFYMJZUSQVCFNLCOIJTPFKOCLUCGXBLNEQZJJXNXJDODYWTZZDKPGOAPXP");
    IMC::FollowPath tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 41068U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.270911324255;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.336670805788;
    tmp_tmp_tmp_msg_0_0_0.z = 0.167893723036;
    tmp_tmp_tmp_msg_0_0_0.z_units = 4U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.0939489175398;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 35U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("EBEDAZTZLDBNVPDFQRBWOUNRFSEMMDGPKTZGRWGFLTQIKKTXKMKQGARKLOIBCHGXNRITHDVC");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::SetServoPosition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.id = 118U;
    tmp_tmp_msg_0_1.value = 0.237905193608;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.action.set(tmp_msg_0);
    msg.type = 131U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TemporalAction #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TemporalAction msg;
    msg.setTimeStamp(0.217735109401);
    msg.setSource(26915U);
    msg.setSourceEntity(108U);
    msg.setDestination(44287U);
    msg.setDestinationEntity(119U);
    msg.action_id.assign("RTUXDWFBHHDJNECUYYMMPWLAXJOVXSIULKARRUPSWVADZNDOFRUEXBIIBXQNQRZKOKHGQHLUOZRHZVRZNVGIYNMSHUBVJESWTQQZTKRETTOMAVWPRJGWEAMBPYNNGYTPHQKJURLNBHTGCVPLZOOPBMXFVLKFTGFCWKCJSMJMYVIZHQACDL");
    msg.system_id = 59985U;
    msg.status = 134U;
    msg.start_time = 0.367992927616;
    msg.duration = 0.145843338762;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZYWBDEGCLWVOMFPHTTYFGIHQSLALRRQPYDTGCNYPAXZMHKRLXETENKYNVWAHLIAZXRGODJROBQHYLWDYSOBCOMJUZMDUGKXWIRXVHQTIVXBPWCQGIAKVJFKISEWVEXFHNZNBNCYJZOKPWTFGAWAIOJUZRHQNBHMIYNUUDZPHDSSIWOMEOIUFLGBCCQATZAXRCEUUCVTJDFKSQVJKKRQVFMPLNJSUXFJVZGTXABMESU");
    tmp_msg_0.description.assign("AFTARSHONIGBWBMWJHXBEIFCSFCYENLDQAIAAEDPXXGFRNYEBFQDAGXEKGOZQIKERQYNUBPVQTUCJPNEUYCUBGHKMKCMWALNQDYEIDTVOURBGSZTYOTDPGGHDZJKLOMNGMHQZLVWELILJYWTFPJAPTQXRLQWSZCPJXDIVFGLSCZAXPMYXSJHVKBHSHWRKVMSHMOMKZWQZVRIUPUOJPCWUZJOVRTSBTJFYHIUECRS");
    tmp_msg_0.vnamespace.assign("WPJNYOJFTPDYESUNAWGCMDIYWDKIIFVMTENKVAPNHOOWTULKGEGQKHRZJXVOUJBCAUSZLGAMHRQZQHTBOHTFPXUMIJSCENZCDVZRYFZYVJDFEXBOXSZHSEJNKVUCEJMDVQNJKPPVOBSRYGRBMXIHYUGUTRXLCLWFHBTKL");
    tmp_msg_0.start_man_id.assign("CVXNRACREYZRPDOJWODLAUMDZCRXOSXPNNPOTZTYELMYXDMSWZVSLQCURPINWTTVIFBBIGUXFBAPEIUKILZSKOYJKDFTXYGSUELDPSRIZSQUVWLNJKFRGGSHNMDBOEHFATLGNHEWEYBCKUQONXEYJIHRJTQVHIJPMGAPVXYSNKJLZMCPJZWAWRCBQJWMDLFKOHCXKMQXBUEBHTIVVMWTDMHCUPLVBKJVQHGAAKCFYITFZWQENZUHQGGRSAYGOQ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("NAZIGUMXMGLRUMFQBTIBKUZZLSDOKWGDBODWIRSFAOXREPAPNVXJDLAMNLMYPRIQFRNYTHFPGWCOOIQGYAHSQAEXJQDWOSUJSUMTECSMGWIBRQJOUEPHWFEBDKZKRGTGKNCLLCYVTNRYMCLFFASUCXWLPEEOUVGHVSBFXUZKKTXLNOLRSQUBWJTYIYTJQSVFMNHPVAXXPKPYRBHVWIIOZZCKHCVDXPHMDHJCNK");
    IMC::FollowPath tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 11401U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.715157096763;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.121982278739;
    tmp_tmp_tmp_msg_0_0_0.z = 0.832701418104;
    tmp_tmp_tmp_msg_0_0_0.z_units = 121U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.419295001703;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 184U;
    IMC::PathPoint tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.x = 0.544888917525;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.y = 0.506961174564;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.120309269406;
    tmp_tmp_tmp_msg_0_0_0.points.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.custom.assign("NBXHGBIXPSGRGRPTWXAKRRITCFUAXFJSMOTFCFNEZYPMUQPZIHNLEMIGOODYQQLCDKMOXVHKYBAZPNAKHVDPLLNEFBANEXNDJRHOPCMHBFXNCCVLGMZZUOKLIWZCFXDAUBOSAGHQQWXCJDTMIULTOJAMDSPZVJSGQEYTCSNESRTJYBRYCNXLYYQVOBWJWQQDDZIWVZYVUOBPWLZSBKFMEVAJGEKVUGRM");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DataSanity tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.sane = 145U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op_mode = 219U;
    tmp_tmp_msg_0_1.error_count = 8U;
    tmp_tmp_msg_0_1.error_ents.assign("CFVGEVMPHSJEJXTHNPAXPCVIUVJATWAAJYCOFTUKXCRMLHWULUDYZNUEVBAGEXNLHQMMPKZYYOWGTTRPARCXZDCUGBDXXNGQJOCSLBPFWBBBZNZSLDQJSLJOBWGFWFTMIHKJINJNKQCIEPMORXPGRSLOMHZAVNQPWWYKJIVQNAVGBZXMERISIFUDSFOSDZTHVQYMUCULRDQHVULIDQGWHEEXRBOZQOETDKAKYCBHOKZ");
    tmp_tmp_msg_0_1.maneuver_type = 46655U;
    tmp_tmp_msg_0_1.maneuver_stime = 0.076145871752;
    tmp_tmp_msg_0_1.maneuver_eta = 17785U;
    tmp_tmp_msg_0_1.control_loops = 2593657598U;
    tmp_tmp_msg_0_1.flags = 19U;
    tmp_tmp_msg_0_1.last_error.assign("UEGAYRIPOTIYKHXVHZLLYDEWJDGZVVCUVRYXFVBFTQBKFELXHPAUNCJNXLLHSEVKVBOJSGZLQMCIIGNNBFXBJVXTLX");
    tmp_tmp_msg_0_1.last_error_time = 0.788475058175;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::EntityParameters tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("POBSEMXEUHDTNYHAUOBBWQKNVZXOXFZAEHVQJKLWPBLVMKWGJWSEYOWLFTUZCTGMSWYUMKGOVAICOLHGMIYYLVPICEEXYARSSQRGM");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.action.set(tmp_msg_0);
    msg.type = 140U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TemporalAction #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TemporalAction msg;
    msg.setTimeStamp(0.150701701417);
    msg.setSource(56107U);
    msg.setSourceEntity(119U);
    msg.setDestination(7514U);
    msg.setDestinationEntity(68U);
    msg.action_id.assign("NKUKABXQHWHGTEGLYWGATPZKPBVSIBTGLKSEDHVFXZPEPTCHNCAQPNWXMXSJCBFVRBREPLJKVOEDLDNMZYGTNNSOESCWGRUFCNJJSLIMINZVQTFDVLRMARBCOASQUJWVEYQFDHZQIOSAYQVIIHMEBQGVKOYXVRKAJMIKMGTLZGXI");
    msg.system_id = 13342U;
    msg.status = 128U;
    msg.start_time = 0.366356630696;
    msg.duration = 0.162282309958;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LVKTLDJXPOMUKYJXZWILISCGSCIOTUXDENRBELUQRZOCZJQXOBPMFWAXUNNVHYINDLUIQDPSYFJGWWVTPGZKBYOBYZHZVDHNFCVAVFLZOYJMUATHMUIXYNHMESFMVWQRNEBGOJJGBPDPGUKA");
    tmp_msg_0.description.assign("TQSVPXGYCEDEMESGEVDKPOVHLQFFOWKQFMRODLCURUZQRWADNROIJFGVIMJBMTKJXAFOEWLUGTFYQPEFVCTSKYNDEDLMQMTZWTBMIVRIXINUIKIKKPWFXNZD");
    tmp_msg_0.vnamespace.assign("IPALEAJNFQRIREMXTMTQKDIKJNRUHPJFUYSIBUYCOZVWOCJVTPDGRDYHDNPZAEVPGQFMXGIXWYRGQCODGFEEECGUCXKAHTXVZFUVHEULZXZMQOGSLWUDRXAKLIBWVWLYKVMMZRWCWVUYBHIOCE");
    tmp_msg_0.start_man_id.assign("KVIMDHTZOCNBPRKRGETCJXLPVMIMDGCPTNQBFTQFHRMXWIVDAEUYCNWATUJURTSGPDEWZJAYGYWHDZWWYIOXULCFSJSPZLAFURZSHRDMUSPYLCOBOEQHWWGXIZIQZYRBLBYQMPYNA");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("JUOKNXSBPYHLEEZNMPGDPSTLHQJSYAYRGBFZXWVMNTXTBLQHJLUKZQMDLEGCOICCGTJFHWTXULTIDWECLNULOFWQYXYQZQNFJCBOIURKKRBMXAYOKOHFGSZQBVSMWWOXMFESPZVTDKSYCJBWYVYLIVANDDIGZX");
    IMC::Launch tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 32058U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.213109873849;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.308929832256;
    tmp_tmp_tmp_msg_0_0_0.z = 0.871466879791;
    tmp_tmp_tmp_msg_0_0_0.z_units = 166U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.717394220409;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 97U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("FQJDDPKAWXAOLWYGRGLWWTEZSGRZNFTUTEATSVIHOHVPSOKBBJMYKCNINDQCGKJYXNFFLDITYYXNJSVGUSMMHIQLIBOUVVGUHMKCVHCZXREFMINEMFAMPMAHJYLHZNVRDRGWHTBRQQAEQEWKNTSLP");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::AutonomousSection tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.lat = 0.225634910081;
    tmp_tmp_tmp_msg_0_0_1.lon = 0.651500490422;
    tmp_tmp_tmp_msg_0_0_1.speed = 0.309447739482;
    tmp_tmp_tmp_msg_0_0_1.speed_units = 122U;
    tmp_tmp_tmp_msg_0_0_1.limits = 251U;
    tmp_tmp_tmp_msg_0_0_1.max_depth = 0.368363326431;
    tmp_tmp_tmp_msg_0_0_1.min_alt = 0.275352576041;
    tmp_tmp_tmp_msg_0_0_1.time_limit = 0.272537431494;
    IMC::PolygonVertex tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.lat = 0.817357972066;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.lon = 0.072039278017;
    tmp_tmp_tmp_msg_0_0_1.area_limits.push_back(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_tmp_msg_0_0_1.controller.assign("SPIEXKJDXHHTPZOKZGJUMZWKFGCBQRVATFVGJPWTKEPLBZTCDDMZMVYMIGYZSSZHYZMVYQSIIXPRLRGLPFYESGLAIGJAQFNDNKCNGCKWXNVGNVGJVZLEFHEIHQKUYHMLWOMUPHUNCHTEMAMVTOVQJJRZUAQFCBQOWDECUFXRQKAOSBFBUOPXUVRMXWE");
    tmp_tmp_tmp_msg_0_0_1.custom.assign("DFIOFYKAOTFUIWVMPHXSRUQMBGARRSJCKLDEPWNZKVISBNPLQDBPSISLDAILGYPHTDKB");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("YXJVRSJTTAMTRPMPLOIBSPUYETGPCXBMYJMRTLWGOIHLVGKXHRKNZRHWDGURHQSYRFOONNCZZBCMUBELGNWAAQKWADVEKQVZFJAWEGBTJFSCSEYVNPPFKKFRDTFUIDNHUQOYYPQLHSXJOIWGQXSXHXLVUZPVDUPMZSMXFQWOCJZIZJCTFJGKAECRWWCLISFQPWEFLIKNDQXVUVHYHUERCZMECBOGVKDNI");
    tmp_tmp_msg_0_1.dest_man.assign("VBAKOFTDOTXQNKKWDZJGAGMIHSTSKZDISRWUHCLOWLYRGGASJKWUCRQHTNPUYNYPXMPPXKYMGWEVBWBIVXLCDUXAHUSFFLGYJBRBI");
    tmp_tmp_msg_0_1.conditions.assign("KALAIJHGDMVYVZWIPAEPHNLOMPKFJXKGHSSKNXZCWEDKUJQBLQAZXBARONHFYJWTEALCCVYJPVEYDVVSHDFWUMULYUBQJOKGIHMRXQWRXAUTGRTSBIGVCBHEPPIPPWBSN");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    msg.action.set(tmp_msg_0);
    msg.type = 114U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TemporalAction #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TemporalPlanStatus msg;
    msg.setTimeStamp(0.166626228168);
    msg.setSource(4921U);
    msg.setSourceEntity(18U);
    msg.setDestination(59657U);
    msg.setDestinationEntity(39U);
    msg.plan_id.assign("DNVKGELMLBNCFKKVFURLBBNROKAZOBEORDSTKPHBTPGHEOZNTQFQUSINTUYHZXOJDFLGOAKRVWACGLWIEQBNFCQVDISTRSFXGIFVDYSJJVPMEHRWUGFMERIOZYJDREXAWAQJUOHYIXSNTRWCICSYFEMNZMJHZOCGCXLXPHTMKEAAZCQIDJVUWLJTDLJSBRDCVMWSKGLUAQXZKPJDIYNPWTAGTIXBMHUHYHUYPGUYVZLMQQSZMBNVCWYPFQOKAW");
    IMC::TemporalAction tmp_msg_0;
    tmp_msg_0.action_id.assign("GNWABLWYXH");
    tmp_msg_0.system_id = 5328U;
    tmp_msg_0.status = 75U;
    tmp_msg_0.start_time = 0.834884287636;
    tmp_msg_0.duration = 0.529142827842;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("UAJYBYLYLRUVKWVJXZCQVPHDNCCLRWREQLJKFFPZUHBHGXPFOPGKNDSEUPBWMUAKWBAZNFEOPMIUKVSYOQJBXGIQRVWDNZTMDVLX");
    tmp_tmp_msg_0_0.description.assign("RNSCEFGUESAWAPONQMRDNTYTDOEVSKNMEPHBLOVMK");
    tmp_tmp_msg_0_0.vnamespace.assign("DNYAEYBFJUPGKVPCHXPSAWNREAQHHCQJZXJBTGXTCWRBIWZUHWNJWVAIRFWGGFBTAICOZLEBSL");
    tmp_tmp_msg_0_0.start_man_id.assign("RDXZQWFEZYBLXPBPGUGNZLGWMOFAYSNTUDNQZLNTTXFEWXZEAXSJCENAIXQBLIAKDMBUNOQCLYGVTYUOYSFK");
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.maneuver_id.assign("CEAWMZWPAQOTCVEKGAJXJRFVCCQHHZXVGXIOEHZOMUMKWIMQJBHFQOZTYTLHLWOKPMDMAPVYIGFSYPAHQZCNRLENPILTUKLCMRVXTOUIUDKJQFFDISWYLVDSJXVRSRTTDWAIBPYJTVEDGDKNQRCPXGUUJZMBZFYIZNFXLCYAAFGKWMMEBBUHKWNYZNSIADBVUOURBJHAEJEQGCNUNKNFYD");
    IMC::Rows tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.timeout = 14700U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.230988666326;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.108958561642;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.777725954686;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z_units = 79U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed = 0.453333901773;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed_units = 34U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.bearing = 0.829423971951;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.cross_angle = 0.0537321658195;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.width = 0.110755998074;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.length = 0.950309623634;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.hstep = 0.520257646246;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.coff = 178U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.alternation = 94U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.flags = 41U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.custom.assign("XFBPUSUCZDOSQTOSYDASIXHZLBMWQHKGNYHORTTKPWXPRYSDTWK");
    tmp_tmp_tmp_msg_0_0_0.data.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    IMC::EntityParameter tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.name.assign("VRJKHRVOWNDHWXFOYGFLFOMJOSXGIGXOLECKDZDFUFQUQDQTIUEEWEBEUZJICYETYRQFSXEJTKG");
    tmp_tmp_tmp_tmp_msg_0_0_0_1.value.assign("QAATDWEDYYZTWWXMCYUQCDUIBCKIDBIWETUHILTKWTOVLZDEWKXXRIJAPRDSIOQSHTHBCOKCBZXGNGSQIHHPVXQCJJAVOVNBKGMACUPPJHKHFDFWYMVRBRJANYFNWRMEZKXSPAYELGSIQNXLXERAVZGNCVUYLHBMIHNXJJAGQZIKOYUMDTFSBWUL");
    tmp_tmp_tmp_msg_0_0_0.start_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    tmp_tmp_msg_0_0.maneuvers.push_back(tmp_tmp_tmp_msg_0_0_0);
    IMC::RemoteCommand tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.original_source = 46915U;
    tmp_tmp_tmp_msg_0_0_1.destination = 51082U;
    tmp_tmp_tmp_msg_0_0_1.timeout = 0.250448064131;
    IMC::FormationMonitor tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.ax_cmd = 0.736306005915;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.ay_cmd = 0.454461735109;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.az_cmd = 0.719037649595;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.ax_des = 0.23678265338;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.ay_des = 0.845225712141;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.az_des = 0.841526885653;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.virt_err_x = 0.228325146984;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.virt_err_y = 0.900939155684;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.virt_err_z = 0.478196871983;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.surf_fdbk_x = 0.859916710388;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.surf_fdbk_y = 0.134558646944;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.surf_fdbk_z = 0.820716175201;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.surf_unkn_x = 0.622179117368;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.surf_unkn_y = 0.0885995413273;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.surf_unkn_z = 0.712191125445;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.ss_x = 0.171693134193;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.ss_y = 0.803244253206;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.ss_z = 0.21312446901;
    IMC::RelativeState tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.s_id.assign("RVJFDMJSLGFDHQKJSDIXVXKJIESADCGJQUBNHXCZRFWOYZFKSVTRTIOBJKMRBUBYBCCWCMULZQSPRPDRXHLWVDAANFYHUIYUNLUIGLMIKVGMCYASNAAHWDVXVYMKXPLNTZWQUWXCEELBFJTDVOIRWOTERJWYJOFPOCEKIYXOSTBIBCCQ");
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.dist = 0.000660648379249;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.err = 0.698135372098;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.ctrl_imp = 0.282806241871;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.rel_dir_x = 0.756181873625;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.rel_dir_y = 0.20275655865;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.rel_dir_z = 0.941718264267;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.err_x = 0.716087527336;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.err_y = 0.81462509422;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.err_z = 0.481452328556;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.rf_err_x = 0.149718581911;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.rf_err_y = 0.454446198086;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.rf_err_z = 0.577897536468;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.rf_err_vx = 0.683266045936;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.rf_err_vy = 0.38203008408;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.rf_err_vz = 0.174274682249;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.ss_x = 0.732819225731;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.ss_y = 0.255648308784;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.ss_z = 0.69012928;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.virt_err_x = 0.805526825361;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.virt_err_y = 0.53017691847;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.virt_err_z = 0.143627246636;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.rel_state.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0);
    tmp_tmp_tmp_msg_0_0_1.cmd.set(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.action.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 18U;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TemporalPlanStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TemporalPlanStatus msg;
    msg.setTimeStamp(0.709849903552);
    msg.setSource(32079U);
    msg.setSourceEntity(135U);
    msg.setDestination(45426U);
    msg.setDestinationEntity(207U);
    msg.plan_id.assign("WUYWWUPUFAHIZZFDRVJE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TemporalPlanStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TemporalPlanStatus msg;
    msg.setTimeStamp(0.794732289882);
    msg.setSource(44801U);
    msg.setSourceEntity(112U);
    msg.setDestination(23212U);
    msg.setDestinationEntity(235U);
    msg.plan_id.assign("CPWTBJNFYOLXRZXTEVRGAZLQFPSEEPWROHCMDXMANPJYBZWLWRMUUGLGOJYKGGVIZBUYDDMRVKYOGBHLKQEJGZQMENXEKZQTUTSNUIFAGLONAKUKUKOJPCZJTENABSKIDWWOYUHBFXRIUXOJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TemporalPlanStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleDepot msg;
    msg.setTimeStamp(0.0956242527228);
    msg.setSource(13847U);
    msg.setSourceEntity(179U);
    msg.setDestination(30900U);
    msg.setDestinationEntity(122U);
    msg.vehicle = 16480U;
    msg.lat = 0.805838516686;
    msg.lon = 0.198180258894;
    msg.deadline = 0.261193308784;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleDepot #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleDepot msg;
    msg.setTimeStamp(0.795132366985);
    msg.setSource(7488U);
    msg.setSourceEntity(69U);
    msg.setDestination(18996U);
    msg.setDestinationEntity(93U);
    msg.vehicle = 17920U;
    msg.lat = 0.615124620037;
    msg.lon = 0.157526729469;
    msg.deadline = 0.887307304778;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleDepot #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleDepot msg;
    msg.setTimeStamp(0.425344076339);
    msg.setSource(44354U);
    msg.setSourceEntity(42U);
    msg.setDestination(59754U);
    msg.setDestinationEntity(12U);
    msg.vehicle = 33841U;
    msg.lat = 0.73524591505;
    msg.lon = 0.969319740112;
    msg.deadline = 0.339895220983;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleDepot #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
