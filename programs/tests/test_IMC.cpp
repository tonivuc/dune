//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: a125aaa4a156a5fa352c388c1fc3bc30                            *
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
    msg.setTimeStamp(0.00219648932624);
    msg.setSource(2906U);
    msg.setSourceEntity(207U);
    msg.setDestination(36003U);
    msg.setDestinationEntity(2U);
    msg.state = 193U;
    msg.flags = 114U;
    msg.description.assign("OTEBGDXEDNYGERRDRJJHPXT");

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
    msg.setTimeStamp(0.496673311156);
    msg.setSource(35505U);
    msg.setSourceEntity(34U);
    msg.setDestination(56333U);
    msg.setDestinationEntity(78U);
    msg.state = 50U;
    msg.flags = 122U;
    msg.description.assign("MHURWIPCMFJOMGBUYRXISVDSRUEKRPGLLGMAQEHGAXHBBJPHPRDZRDXNIZFYEESL");

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
    msg.setTimeStamp(0.528909874074);
    msg.setSource(7009U);
    msg.setSourceEntity(71U);
    msg.setDestination(50213U);
    msg.setDestinationEntity(1U);
    msg.state = 52U;
    msg.flags = 179U;
    msg.description.assign("SYJXVNLXKERDMBSLYDCKPTJNRSADPTOYLVGFNUDMFGTGYGHFUOZEYHJNZSWWLQJIHVYVVWNMBCMUWBPRZUIGDAGLLHQCZIMBAVQJTEBSRMAWKJJHYUJTUWPOPYTPDCFIOGGVVBIEQUKQCKROBEAJQZTQEWZIFJULDLQFUEDIBAPEHNCWKAOZBXTDIXVTRVXCYBFANKIXWHOZZDSSQSKPSCYNNTLOIHCPFAQLFG");

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
    msg.setTimeStamp(0.0120403850908);
    msg.setSource(24665U);
    msg.setSourceEntity(107U);
    msg.setDestination(39162U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.271213034895);
    msg.setSource(25316U);
    msg.setSourceEntity(149U);
    msg.setDestination(53534U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.114790359583);
    msg.setSource(29848U);
    msg.setSourceEntity(173U);
    msg.setDestination(59361U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.692638035317);
    msg.setSource(64557U);
    msg.setSourceEntity(16U);
    msg.setDestination(60043U);
    msg.setDestinationEntity(188U);
    msg.id = 84U;
    msg.label.assign("LBSWPTPNERJMWJQSQUOIUEUIEURHJIRKXHFMUALNZGZPLRPAVICZGDQFKBFORDYILGFETQXIHBXHYSFEKHKWDNUNRVKLQQMMUHQNXKTATVYYBCOSOPGTYGMFVFS");
    msg.component.assign("FXPBSAFEEGWLHGMSNNXJKPETHWGWDZYRZYYQVZIFXPDEBUCQUZKHTHXLTKQTZESHIXUGMWAUYRIHIBADLNYNGVSLNJYQMWDKUKBVJUZCKILRBPPRPGFLGKZOJBXPHAQOPRAVBAUXNRTOCAJORXMTKNVDDCSOLRTFWIZEELCJOICXIBORFJZXDUADUHUVQBSSVRTMSDIHDJYPWBTQMFGGAQNMEZGWSOEYLANKVMCHCF");
    msg.act_time = 9310U;
    msg.deact_time = 16646U;

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
    msg.setTimeStamp(0.158105761498);
    msg.setSource(3599U);
    msg.setSourceEntity(119U);
    msg.setDestination(52722U);
    msg.setDestinationEntity(104U);
    msg.id = 96U;
    msg.label.assign("OUSGFLLAQGSTYFYGQAUNYTUPZKZHTUOGMESHVEUSSXEAEFVYHMJNWJBDEDTNIVQJVKURWMWXTMULIHGXVABHFPKPEYIXCPWKQBHKOBAOZFAAJLLTQCHKZWOFIRPYGQMHCIMRNWTNLKBVLLDEURDDIWUFDNXFJOSZAZCDSYLDSRCPEPXYXJJNTWMBIHTVPLCQOKWRZOEBGJGUWADQNKMXGBJQASBVVIMKXHCFTROVQYRRRYXCSJGZCOIPCD");
    msg.component.assign("RHZOWIMKLEARRQPMYQSDKJURSVDAXCBWSFSOACAJRXWCZVGZJKTGYVNIPMTMKZGQYFTPOIKSWYGFTXWXTQCREWSUBYJNQIXBTBQHMJINLQARLYZZPIJIKBLMBEVDDRVVZFTIRMZDBNHNUMOBPHFGHEYRQLTUEWOBSPHUOTDINDSJOYKFGEEVXDHCCXFOXULDNLVV");
    msg.act_time = 30737U;
    msg.deact_time = 57309U;

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
    msg.setTimeStamp(0.471535686132);
    msg.setSource(12283U);
    msg.setSourceEntity(81U);
    msg.setDestination(47891U);
    msg.setDestinationEntity(206U);
    msg.id = 252U;
    msg.label.assign("KUFFQJKUMHFXHSIGMQYRORTSUBNPGKBMRLSUXBKBXXDUAYYQPVNDWLJOAHOYDNNQCKTGPSGPEQJZHILGYYHOOFCSEBDOCRSFZQAISLRTDIPBWJSVZNKCWTDL");
    msg.component.assign("LVCXJXYWQCVMMACGHDKGDQRTAEHSXKJAVFMSZZFWEINFJKYWXXBSENDUKLTTGNCCEKUICDNVPYZAHHPLMTHZYLUZRCEOURTLOOMYFZGRVJEGHSSWJIKANVSIEPNNQTQBRBYKPXLFPBKMOSIDHPBYIOZDXQVUNVBQQLGIFUCGOMFROCAEARZAGTXMMMBIJULRUWAVBWJKXOLSZTLOYTQPPZNGQWHIFHTUB");
    msg.act_time = 13117U;
    msg.deact_time = 23555U;

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
    msg.setTimeStamp(0.218740728194);
    msg.setSource(3996U);
    msg.setSourceEntity(25U);
    msg.setDestination(60825U);
    msg.setDestinationEntity(80U);
    msg.id = 252U;

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
    msg.setTimeStamp(0.0909045346827);
    msg.setSource(33196U);
    msg.setSourceEntity(25U);
    msg.setDestination(33482U);
    msg.setDestinationEntity(130U);
    msg.id = 43U;

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
    msg.setTimeStamp(0.43467904349);
    msg.setSource(59471U);
    msg.setSourceEntity(25U);
    msg.setDestination(56089U);
    msg.setDestinationEntity(152U);
    msg.id = 86U;

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
    msg.setTimeStamp(0.309164690133);
    msg.setSource(32388U);
    msg.setSourceEntity(92U);
    msg.setDestination(29272U);
    msg.setDestinationEntity(46U);
    msg.op = 12U;
    msg.list.assign("PRIIBXJFYKDEPOAHDJRKIDDTFPNGIOMROIUTWTVRTBTGGNPDRBQFVUEYSLCHJRCMVHEUJZDNTXFBCQCGXZANHMLQMXXAW");

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
    msg.setTimeStamp(0.18858194043);
    msg.setSource(50299U);
    msg.setSourceEntity(96U);
    msg.setDestination(22854U);
    msg.setDestinationEntity(128U);
    msg.op = 84U;
    msg.list.assign("UFWLHVHBDTZEEGWZLATUEJKUCLDIFCYLIVJTPJPPHKUQIKZBUYWASJMNGGZYXQSHRICXITLLEOYMTDRHWMVVPLQGYJIT");

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
    msg.setTimeStamp(0.535371272818);
    msg.setSource(41578U);
    msg.setSourceEntity(10U);
    msg.setDestination(13275U);
    msg.setDestinationEntity(199U);
    msg.op = 43U;
    msg.list.assign("ZIEGZIGZHJNJSHYRNTVUJCFDAKNKUZDUGRAGVLRKFAECOWMFTERAQQGYJTNIBHAYYMVLEBCTVGGTEYKOMFTZCXJSDPMVGGPIIZPXPWHAQWHMVKYFUQHHOJUUBQWKA");

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
    msg.setTimeStamp(0.872593987341);
    msg.setSource(53402U);
    msg.setSourceEntity(101U);
    msg.setDestination(60168U);
    msg.setDestinationEntity(148U);
    msg.value = 56U;

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
    msg.setTimeStamp(0.259400843018);
    msg.setSource(38984U);
    msg.setSourceEntity(67U);
    msg.setDestination(8257U);
    msg.setDestinationEntity(171U);
    msg.value = 187U;

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
    msg.setTimeStamp(0.889999010548);
    msg.setSource(28205U);
    msg.setSourceEntity(185U);
    msg.setDestination(10035U);
    msg.setDestinationEntity(50U);
    msg.value = 75U;

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
    msg.setTimeStamp(0.523523460373);
    msg.setSource(40542U);
    msg.setSourceEntity(173U);
    msg.setDestination(55715U);
    msg.setDestinationEntity(62U);
    msg.consumer.assign("JLHKABQQXKIOCLAZQCGWUTWKQDXKRCYAIXHSZRMNFETIVJZWAHQHHLCPCOKSVRVFAOMTCGHGBDJYLIABEECWSOBQFRKPIMXXYYSKQEXPYBYNMSHKMJVPRDORMTUGBSRCGLDEWLZFGVDQHEYBTSDOIQWUACIFVPV");
    msg.message_id = 62785U;

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
    msg.setTimeStamp(0.0582669084005);
    msg.setSource(26498U);
    msg.setSourceEntity(74U);
    msg.setDestination(37502U);
    msg.setDestinationEntity(140U);
    msg.consumer.assign("QOBLGGNYMDBRSTOXXNWOUUCAQKZDLDLAHUUAFUCYXENHVPUTQFPFOHTXDYGVBAWVJAAOMOWPBPWNLHVOPYGDNLEJMVQWFYXWEUGFJHEEOJJHBCKVZYZSKGLIANPIFPSITKRRBJZLSRRVKJWKKBQNGIYPXTUMDFTJMZIQWVDQRBFONLQCKUTHXAPWGFPNCHBCWKMSHQEAMNRXQJD");
    msg.message_id = 58303U;

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
    msg.setTimeStamp(0.264233284648);
    msg.setSource(33158U);
    msg.setSourceEntity(142U);
    msg.setDestination(30927U);
    msg.setDestinationEntity(225U);
    msg.consumer.assign("LIEHFZBFJIAHXFYXCYOOPAILNTHPFBFTGQPUIOGVTRHDVVDLSMJVMGWWHGMYSAUYYKPJXNMVEYAMONKMQACIGPAWMFJODZPLSZJBSQAXXOFPUWLSDLGRUILPVYYODRXSVJXBVQBDBEQWGEDEERGTKZHCZT");
    msg.message_id = 48006U;

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
    msg.setTimeStamp(0.268390510729);
    msg.setSource(52386U);
    msg.setSourceEntity(89U);
    msg.setDestination(65225U);
    msg.setDestinationEntity(105U);
    msg.type = 138U;

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
    msg.setTimeStamp(0.801269280428);
    msg.setSource(25492U);
    msg.setSourceEntity(177U);
    msg.setDestination(53279U);
    msg.setDestinationEntity(184U);
    msg.type = 152U;

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
    msg.setTimeStamp(0.691281824872);
    msg.setSource(16665U);
    msg.setSourceEntity(39U);
    msg.setDestination(56108U);
    msg.setDestinationEntity(76U);
    msg.type = 194U;

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
    msg.setTimeStamp(0.793564940985);
    msg.setSource(47594U);
    msg.setSourceEntity(227U);
    msg.setDestination(54430U);
    msg.setDestinationEntity(202U);
    msg.op = 130U;

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
    msg.setTimeStamp(0.758086331767);
    msg.setSource(6195U);
    msg.setSourceEntity(15U);
    msg.setDestination(46610U);
    msg.setDestinationEntity(185U);
    msg.op = 51U;

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
    msg.setTimeStamp(0.69967860443);
    msg.setSource(39748U);
    msg.setSourceEntity(22U);
    msg.setDestination(12101U);
    msg.setDestinationEntity(231U);
    msg.op = 44U;

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
    msg.setTimeStamp(0.535088585955);
    msg.setSource(21497U);
    msg.setSourceEntity(105U);
    msg.setDestination(37924U);
    msg.setDestinationEntity(239U);
    msg.total_steps = 196U;
    msg.step_number = 33U;
    msg.step.assign("HJOVQAJAFWBTFHCTNSTKTPNTPFVMYQGRKIDXGZZORCPRVJOCZABQXQXNKHGRUVIRHNEOBAVKJUUEHSLYLZYRYODSIZJTTIMUFPIJRBQUOKDWOTZLNXOPFLPENULFGHUMHZBZFAYAGUEBANSCWEQCOZDIPPVWXDTWNSMGMFM");
    msg.flags = 185U;

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
    msg.setTimeStamp(0.154625707107);
    msg.setSource(40510U);
    msg.setSourceEntity(129U);
    msg.setDestination(63563U);
    msg.setDestinationEntity(61U);
    msg.total_steps = 117U;
    msg.step_number = 65U;
    msg.step.assign("BPPEAVDIOVSMQWLSHPQQYJIDHHGNTHEUGUXVJMKMHYUYHASEMMGDYYBWWTHFAYRNNXOJNBEKDLJDAEGSSTLCMBILXKTURFHFIOUKGPZKDBPWFRCRAVUZOKHQTROGEUJGXMFIBYHPSCQBNNWQWXEMRNCBCPASQZFRFNTCYZUKFKXRVSOZSOZIDABWWRMANLQZZUPJYOMLVP");
    msg.flags = 199U;

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
    msg.setTimeStamp(0.674611410337);
    msg.setSource(43893U);
    msg.setSourceEntity(124U);
    msg.setDestination(24311U);
    msg.setDestinationEntity(123U);
    msg.total_steps = 252U;
    msg.step_number = 101U;
    msg.step.assign("CXVSPZQNZQMPPEUGKNWQWBOUHJCAAUPLRXRKEQQSCIIVLPCTVKDUTXDOKHNAYFEWNKHYVMJBWRRGBHBBRZHOZXIMSLVVORKTCLTJYJGHEFMHWRQFITGSPTAJIAETPEUPGRMSMRFRCCIXVFGQDQJZVDJFGALHCKDGOBYCMVNBNFKFNASSYNYUDX");
    msg.flags = 1U;

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
    msg.setTimeStamp(0.155986311008);
    msg.setSource(23378U);
    msg.setSourceEntity(8U);
    msg.setDestination(16561U);
    msg.setDestinationEntity(123U);
    msg.state = 109U;
    msg.error.assign("ZTPUEBQINQTODIOCPKESNFKFCAEZQKPFEERNNLYUFOKCFEXBAKJB");

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
    msg.setTimeStamp(0.915075445019);
    msg.setSource(63175U);
    msg.setSourceEntity(202U);
    msg.setDestination(32266U);
    msg.setDestinationEntity(235U);
    msg.state = 38U;
    msg.error.assign("LFMYRMMDMGRVEPUQYBEOSEJHNVTADVPGKQNKCGQKSVSJGGESEVHIJMCTYRIOTCRKBZGPZHTMWLFNIZAXWUXJFPCLOHMQBXXFRCRFGDYIZHIYPONSEJCPDZPOAIZVLFDJIDSSSYUTUAUCTZZBAHTBQBZCVYXVHMTXBAWQDLRNGQIPHASJFUWJK");

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
    msg.setTimeStamp(0.744298917253);
    msg.setSource(9008U);
    msg.setSourceEntity(149U);
    msg.setDestination(22858U);
    msg.setDestinationEntity(134U);
    msg.state = 88U;
    msg.error.assign("IOKKCPLOGRKAZJSBEOHLWECZNBSVBLEIEIPXWKXGQXFSRRPAVKNNNAJTCNMPRFXSRTLZAGXGEJCKDEZQYVUYLTRCMNDDNYGFQABMYTDHCCAYUPMDLMOZVBBGYVFT");

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
    msg.setTimeStamp(0.343917370929);
    msg.setSource(45985U);
    msg.setSourceEntity(210U);
    msg.setDestination(53974U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.248918614155);
    msg.setSource(21819U);
    msg.setSourceEntity(207U);
    msg.setDestination(15666U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.852181391606);
    msg.setSource(53256U);
    msg.setSourceEntity(132U);
    msg.setDestination(31781U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.101849965967);
    msg.setSource(5815U);
    msg.setSourceEntity(70U);
    msg.setDestination(4637U);
    msg.setDestinationEntity(138U);
    msg.op = 202U;
    msg.speed_min = 0.0807252082348;
    msg.speed_max = 0.280291565275;
    msg.long_accel = 0.773824186421;
    msg.alt_max_msl = 0.502920693147;
    msg.dive_fraction_max = 0.911631945613;
    msg.climb_fraction_max = 0.480113056037;
    msg.bank_max = 0.0357231781932;
    msg.p_max = 0.800450971247;
    msg.pitch_min = 0.907188130264;
    msg.pitch_max = 0.605260378628;
    msg.q_max = 0.449361486379;
    msg.g_min = 0.136325652314;
    msg.g_max = 0.428232119886;
    msg.g_lat_max = 0.685530759422;
    msg.rpm_min = 0.670589144121;
    msg.rpm_max = 0.205330712854;
    msg.rpm_rate_max = 0.489657318738;

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
    msg.setTimeStamp(0.863539274636);
    msg.setSource(39875U);
    msg.setSourceEntity(5U);
    msg.setDestination(25761U);
    msg.setDestinationEntity(14U);
    msg.op = 191U;
    msg.speed_min = 0.955996690486;
    msg.speed_max = 0.595077730112;
    msg.long_accel = 0.6551745873;
    msg.alt_max_msl = 0.944674244833;
    msg.dive_fraction_max = 0.0873326377597;
    msg.climb_fraction_max = 0.565197455538;
    msg.bank_max = 0.859747819053;
    msg.p_max = 0.466186469085;
    msg.pitch_min = 0.0340380286908;
    msg.pitch_max = 0.461096791719;
    msg.q_max = 0.465362533357;
    msg.g_min = 0.190304693027;
    msg.g_max = 0.487908567406;
    msg.g_lat_max = 0.621813041296;
    msg.rpm_min = 0.651764967955;
    msg.rpm_max = 0.362142635126;
    msg.rpm_rate_max = 0.0965938732005;

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
    msg.setTimeStamp(0.495921848083);
    msg.setSource(24231U);
    msg.setSourceEntity(16U);
    msg.setDestination(4954U);
    msg.setDestinationEntity(8U);
    msg.op = 104U;
    msg.speed_min = 0.292616620691;
    msg.speed_max = 0.642417102761;
    msg.long_accel = 0.58716896459;
    msg.alt_max_msl = 0.327297390733;
    msg.dive_fraction_max = 0.238453819181;
    msg.climb_fraction_max = 0.334239827067;
    msg.bank_max = 0.65507077043;
    msg.p_max = 0.34260362002;
    msg.pitch_min = 0.888185516449;
    msg.pitch_max = 0.616029360157;
    msg.q_max = 0.728180827026;
    msg.g_min = 0.0146199023188;
    msg.g_max = 0.31999090793;
    msg.g_lat_max = 0.494061000641;
    msg.rpm_min = 0.131118667565;
    msg.rpm_max = 0.136377327384;
    msg.rpm_rate_max = 0.163758412367;

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
    msg.setTimeStamp(0.294796553847);
    msg.setSource(35227U);
    msg.setSourceEntity(2U);
    msg.setDestination(58931U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.81741334848);
    msg.setSource(27873U);
    msg.setSourceEntity(102U);
    msg.setDestination(19148U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.870021596233);
    msg.setSource(43247U);
    msg.setSourceEntity(168U);
    msg.setDestination(57994U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.592929084617);
    msg.setSource(45143U);
    msg.setSourceEntity(222U);
    msg.setDestination(9178U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.0864206493215;
    msg.lon = 0.841992036228;
    msg.height = 0.57681221129;
    msg.x = 0.0166686189938;
    msg.y = 0.478575769919;
    msg.z = 0.826018339513;
    msg.phi = 0.0285209851594;
    msg.theta = 0.540115744407;
    msg.psi = 0.438600146851;
    msg.u = 0.878113340342;
    msg.v = 0.487875336323;
    msg.w = 0.164261462002;
    msg.p = 0.982619735916;
    msg.q = 0.3046079468;
    msg.r = 0.306138442408;
    msg.svx = 0.10557267864;
    msg.svy = 0.892712203616;
    msg.svz = 0.983749562735;

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
    msg.setTimeStamp(0.844058535196);
    msg.setSource(2596U);
    msg.setSourceEntity(134U);
    msg.setDestination(14443U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.902243589668;
    msg.lon = 0.736393993148;
    msg.height = 0.899416026316;
    msg.x = 0.501688527634;
    msg.y = 0.236138404112;
    msg.z = 0.750392795959;
    msg.phi = 0.998376147763;
    msg.theta = 0.829024059946;
    msg.psi = 0.41838006229;
    msg.u = 0.618951422207;
    msg.v = 0.59353564598;
    msg.w = 0.713722112735;
    msg.p = 0.231396928211;
    msg.q = 0.017302987258;
    msg.r = 0.748981081258;
    msg.svx = 0.617601953936;
    msg.svy = 0.251316944198;
    msg.svz = 0.45849037294;

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
    msg.setTimeStamp(0.583501939304);
    msg.setSource(49159U);
    msg.setSourceEntity(95U);
    msg.setDestination(39400U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.0605290279042;
    msg.lon = 0.807860663871;
    msg.height = 0.151783812203;
    msg.x = 0.693142582741;
    msg.y = 0.864866614082;
    msg.z = 0.400249030287;
    msg.phi = 0.541121689772;
    msg.theta = 0.352653104942;
    msg.psi = 0.0644255732564;
    msg.u = 0.579648710109;
    msg.v = 0.0694614211908;
    msg.w = 0.250955611938;
    msg.p = 0.986172124286;
    msg.q = 0.748607222884;
    msg.r = 0.798051491672;
    msg.svx = 0.833796768605;
    msg.svy = 0.154084181908;
    msg.svz = 0.366544732976;

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
    msg.setTimeStamp(0.160196771149);
    msg.setSource(16585U);
    msg.setSourceEntity(0U);
    msg.setDestination(33552U);
    msg.setDestinationEntity(138U);
    msg.op = 178U;
    msg.entities.assign("CHCNHESXSLSPGBABYNSPSNWLKXKBXLQYAZKPREBMYUJKLTKOSGCFMIEKSVYWDFPMDXPGTBIRKZVPFVLWANHMIGZRODQMNIRXJVHGZKOAVCC");

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
    msg.setTimeStamp(0.463351530812);
    msg.setSource(65280U);
    msg.setSourceEntity(118U);
    msg.setDestination(7852U);
    msg.setDestinationEntity(218U);
    msg.op = 138U;
    msg.entities.assign("MVNCFMZIRPOQJZNGAQVAMRFAZFFYAGCCBBZOSPJWGTSXDKOHYDGSMIBGRBXREGCDTVAMZDHAFQZVLSKTUUTQEOPFKRHWCHIGNDKRHUQEWOAWVWEO");

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
    msg.setTimeStamp(0.582330180624);
    msg.setSource(52858U);
    msg.setSourceEntity(83U);
    msg.setDestination(52295U);
    msg.setDestinationEntity(40U);
    msg.op = 57U;
    msg.entities.assign("CJENVJQSALEJGRKBEZFTFLCPTHMLLRCLGNYDLXQSQVYEPFYDKTDPUYTTMQEUBJDNCGAMVJTBYWHRUGTGQSRVMVBNJPCGCAUTZXZVXXNBMBVSOLEYFZBDSTGIMNSYABAQSRVHRSDYAWXRJFEKQCPPOXFWRHIFJSCUKZMOWBNIXEODDAQUOHPNPWGUKJIWOMICVIQRMOKKWJZHIIZLATQWCIIGPKXOH");

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
    msg.setTimeStamp(0.641356656457);
    msg.setSource(21913U);
    msg.setSourceEntity(104U);
    msg.setDestination(45953U);
    msg.setDestinationEntity(250U);
    msg.type = 202U;
    msg.speed = 19457U;
    const char tmp_msg_0[] = {0, 26, 6, 50, -88, 29, 82, -30, -122, -107, -44, -124, -116, 3, 110, 23, 30, 42, 81, -19, 49, -24, 85, 66, -87, 94, 39, -33, -120, 97, -89, 55, -7, 51, 121, 92, -13, -48, 68, 108, -46, 18, 47, -57, 72, -113, -70, 112, 39, -127, -118, -106, -20, 101, -30, 2, 61, 89, -65, 111, -12, -48, 34, -106, -45, 121, -77, -45, 54, -123, 15, 27, -36, -22, 80, -108, 25, 40, -111, -44, -60, -13, -55, -77, -24, 49, 44, -107, 82, -96, -84, -3, 17, -35, 115, 1, 21, 76, -117, -29, 112, -54, -54, 14, 8, 73, -39, 11, -43, 61, -114, 27, -8};
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
    msg.setTimeStamp(0.355155654019);
    msg.setSource(47418U);
    msg.setSourceEntity(187U);
    msg.setDestination(36177U);
    msg.setDestinationEntity(174U);
    msg.type = 217U;
    msg.speed = 29211U;
    const char tmp_msg_0[] = {19, -79, 34, -1, 58, -77, -23, 62, -13, 83, 40, -65, -106, 55, 115, 100, -9, -125, 76, 23, 71, -124, 44, -50, -95, 25, 90, -71, 17, -106, 123, 43, -69, -111, 92, -12, -104, 34, -45, -120, 50, 102, -18, 12, -26, -101, -77, 116, 95, 63, 73, 82, -108, 87, -54, 39, 2, 39, 82, -10, 62, -123, 69, 65, -54, -83, -16, -24, 18, -12, -124, -37, -92, -20, 11, 70, 61, -13, 32, -106, 3, -61, -59, -126, 26, 96, 125, 96, -94, 67, 108, -116, -69, 102, -43, -49, -94, -43, 10, -45, 105, -103, -91, 11, 22, -40, -83, 75, -25, 58, -9, 17, 72, 124, 54, -50, 88, -58, -15, 117, -73, -126, -84, 9, 58, -75, 102, -105, -118, -35, 54, -105, 8, 67, -28, -128, 76, 43, 94, 52, 104, 61, -67, -61, 18, -102, -32, -83, -4, 11, -70, -4, 4, 84, -29, -23, -94, -32, -18, 79};
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
    msg.setTimeStamp(0.158480841226);
    msg.setSource(64717U);
    msg.setSourceEntity(178U);
    msg.setDestination(20305U);
    msg.setDestinationEntity(17U);
    msg.type = 9U;
    msg.speed = 39093U;
    const char tmp_msg_0[] = {-32, -127, -124, -117, -27, -27, 92, -61, -79, 3, -17, -26, -59, 48, -104, 84, -72, -3, 119, 20, 34, 8, 46, -38, -15, -115, -93, 22, -10, -33, 70, 69, -71, 76, -41, 17, 122, 113, -33, -61, 24, 92, -12, 72, -44, 80, -59, 51, -110, -26, 5, 76, 25, 44, 102, -117, 15, 121, -21, -23, -16, -83, 42, -79, -89, -37, 70, -122, 10, 3, -36, -9, -37, 77, 29, -62, 109, 105, 108, 89, -12, -27, 29, 116, -92, -74, -23, -57, 32, -113, 90, -66, 116, 53, -75, -46, 100, -19, -92, 30, 99, -35, -121, -121, -48, -37, -47, 103, -81, -75, -90, 53, -100, -57, -98, 55, 106, 99, -14, -38, -58, -98, 29, 61, -9, 8, -102, -69, 79, -51, 18, -64, -3, 42, -32, -29, -7, -105, -65, -60, -37, -109, 106, -89, -15, 24, -109, 44, -75, -45, 14, -105, -10, 66, 11, 49, -93, 24, 27, -31, -117, -48, 30, 49, 6, 2, 103, -9, 11, -76, -89, 48, 72, -96, 70, -77, -5, 53, 125, -90, 72, 24, 67, 4, 65, -112, 47, -21, -27, 126, -54, -85, -58, -100, -10, 76, 5, 39, -31, -121, 37, 114, -47, -68, -37, 21, -51, 14, 69, -110, -17, -91, 110, 124, -28, -66, -4, 26, -28, -95, -99, 45, 12, 67, 53, -6};
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
    msg.setTimeStamp(0.539405840301);
    msg.setSource(15095U);
    msg.setSourceEntity(210U);
    msg.setDestination(14622U);
    msg.setDestinationEntity(197U);
    msg.op = 243U;
    msg.tas2acc_pgain = 0.668702434561;
    msg.bank2p_pgain = 0.582497358678;

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
    msg.setTimeStamp(0.743639891845);
    msg.setSource(15248U);
    msg.setSourceEntity(187U);
    msg.setDestination(32450U);
    msg.setDestinationEntity(42U);
    msg.op = 88U;
    msg.tas2acc_pgain = 0.689634957512;
    msg.bank2p_pgain = 0.848174045247;

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
    msg.setTimeStamp(0.3582155188);
    msg.setSource(44131U);
    msg.setSourceEntity(93U);
    msg.setDestination(36461U);
    msg.setDestinationEntity(93U);
    msg.op = 54U;
    msg.tas2acc_pgain = 0.831093399638;
    msg.bank2p_pgain = 0.354472798333;

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
    msg.setTimeStamp(0.623489889334);
    msg.setSource(32400U);
    msg.setSourceEntity(141U);
    msg.setDestination(5630U);
    msg.setDestinationEntity(239U);
    msg.available = 4282984328U;
    msg.value = 168U;

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
    msg.setTimeStamp(0.297525300587);
    msg.setSource(3188U);
    msg.setSourceEntity(115U);
    msg.setDestination(23823U);
    msg.setDestinationEntity(232U);
    msg.available = 1877166688U;
    msg.value = 66U;

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
    msg.setTimeStamp(0.0857507340347);
    msg.setSource(52782U);
    msg.setSourceEntity(221U);
    msg.setDestination(10661U);
    msg.setDestinationEntity(237U);
    msg.available = 2553703558U;
    msg.value = 36U;

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
    msg.setTimeStamp(0.814084675089);
    msg.setSource(23800U);
    msg.setSourceEntity(89U);
    msg.setDestination(48460U);
    msg.setDestinationEntity(155U);
    msg.op = 105U;
    msg.snapshot.assign("VUGVOZNGUTROLURWHQJLPAHSTGDCUWBFBZJKKYWEZVAXENCTFCWWCKLQYBMUVNKSWTHAHQXWMRMIJEUSSASQRNIDPITAFFEPRQZEAAOHJBEYFNMXXODUGVM");
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 195U;
    tmp_msg_0.step_number = 229U;
    tmp_msg_0.step.assign("UYZVSIUYCUBTCTFHMMPLYDIOBEWJO");
    tmp_msg_0.flags = 75U;
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
    msg.setTimeStamp(0.278937627189);
    msg.setSource(51162U);
    msg.setSourceEntity(149U);
    msg.setDestination(34703U);
    msg.setDestinationEntity(89U);
    msg.op = 219U;
    msg.snapshot.assign("XYSTOBUWHVXWQFNJBTPGDPWCIFKGSLBZUOMMNDCFEKOQUOWRADLFABFPOBYYIRKBCDXNAUZEWYWMRILIDPVBNZIWXQQHRGAXDBPYZKKXNRRUCWZZKIJQQWNGTSNYPHXPSHELZMFXZBXHESVVCPSGHYRFEAKEQLQTDJNLUKHGTMTEAJVWEUKFAYSANVLNHMRCMTXDCKMYIGZTUOVJ");
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 70U;
    tmp_msg_0.actions.assign("ODUVUEFLXHIVZOQYXMBUJGQNFSADFLPCSUNDPUYIGQRTGFKQX");
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
    msg.setTimeStamp(0.311670120925);
    msg.setSource(61048U);
    msg.setSourceEntity(214U);
    msg.setDestination(37525U);
    msg.setDestinationEntity(43U);
    msg.op = 220U;
    msg.snapshot.assign("PDVCLOXDZTOPAEBBQNIABDKQJEXKFIFFETFPUFYJUBARFKSURKVZULJCRRWSTDATIFGIORE");
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.431785802306;
    tmp_msg_0.converg = 0.583884846369;
    tmp_msg_0.turbulence = 0.411352453154;
    tmp_msg_0.possimmon = 124U;
    tmp_msg_0.commmon = 46U;
    tmp_msg_0.convergmon = 191U;
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
    msg.setTimeStamp(0.245935245821);
    msg.setSource(65012U);
    msg.setSourceEntity(184U);
    msg.setDestination(27438U);
    msg.setDestinationEntity(13U);
    msg.op = 168U;
    msg.name.assign("EGBBSGHOLETYDUDQQKRDLIVVZORDMIQGJQPMHSLKEZDLIYXAUNODJOLUEPIKBGDCACEMEFKPKSQYFHGWUHKTSGPTAFVBZYXSDWFFXIYBRCVHEPEKJNPNURTXXLACGDQCARFMMZWYNBWGJOUVNISSEXTHWHKLJCAJBSPVQYHENMKGOFNTTAHBTMTUCIXXZZLUUPIULQPOVXWIOZWMQAOPZOZTVFCMQRYRNRRHRJMYIAFDGSSJCWCNAVKJZ");

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
    msg.setTimeStamp(0.545837836332);
    msg.setSource(47395U);
    msg.setSourceEntity(197U);
    msg.setDestination(5146U);
    msg.setDestinationEntity(197U);
    msg.op = 10U;
    msg.name.assign("SNPSDBWEZDOMQRUBLGRRSHDAJSOSLMXHAOWBRTDKDJXZWCERVVEKEHQEYDBTKTDUPOYHOJVJPFDVQVEHVFQIFNVVNZWQQ");

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
    msg.setTimeStamp(0.672017868817);
    msg.setSource(34169U);
    msg.setSourceEntity(42U);
    msg.setDestination(25484U);
    msg.setDestinationEntity(211U);
    msg.op = 76U;
    msg.name.assign("UDBQWGDHPCFORMLABJRLEZCQBPDKVSCEEZCHBRWFZFVIQRDPFWYFTVOIAVF");

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
    msg.setTimeStamp(0.420320915267);
    msg.setSource(62420U);
    msg.setSourceEntity(232U);
    msg.setDestination(37337U);
    msg.setDestinationEntity(140U);
    msg.type = 88U;
    msg.htime = 0.825546746355;
    msg.context.assign("FHSSTXPFOYOUPVCPEULHSIYPTXVJQKFZMEANBWPSKXKNDZMZZGKZMSRAYRBQPBWDULIAQTBJSHUECZOIAFUZXJSYDXH");
    msg.text.assign("NLCGILOULTFXHQBXPLPVKWKDGHIRVLOMHWCNCWETZ");

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
    msg.setTimeStamp(0.13727635169);
    msg.setSource(18569U);
    msg.setSourceEntity(147U);
    msg.setDestination(13703U);
    msg.setDestinationEntity(52U);
    msg.type = 201U;
    msg.htime = 0.788367727702;
    msg.context.assign("UVTZXJSVXRGTWGDBEPTPJANCLCCGUBNLOMOQBPKRVLNPMCFZWQHYVQMRUDBJCMJYNXTSJGEBEPNOHXUZGYWQULVPRTLJTMTSXXDOTAHBQFAKFAOZBURKUNZIHABAERNIHASWYEQQKCFLTLSMIDDLDLNEJQYMHVFFI");
    msg.text.assign("VHSCKHOZEPOQKZHVYVPXPPIBJKVXWQLRZAHBVRKXMMRNVGNHOCBWQGEGHEHFIMUNNKUFUTWEUNLPX");

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
    msg.setTimeStamp(0.989152514364);
    msg.setSource(6445U);
    msg.setSourceEntity(10U);
    msg.setDestination(7487U);
    msg.setDestinationEntity(182U);
    msg.type = 76U;
    msg.htime = 0.481921085883;
    msg.context.assign("UBDWMVOQFUIQUFJCRHFXVPKADIIGQOYNBCWPXFWTYSMXJGPSJLIZEDFNJBIQKJWGXUEUSPVNMEARHXVBJCDMGQWTIMZYIULGKGNLZYVLVSQDZNBPHFCMLUAYCGLQNEEGIDVXYSXZRBCHTZONKLGHEZWLXRLYOSCTWAUYHCIUETW");
    msg.text.assign("COZRMQJEPJKLLYHNPCTVESWYVPDAZECAMIHTUKYBIAXDSPWJTINGGPIOGYRZHJFYLPRNXOKGXUMNRTTMIQDMFNYEUUETBBZMFQQZNEOBGPZSHKEPAMCDRXYBSOHALRMFQXSJWKOJOCQFLXRYCLRCHBWOVXHJZKVKUSGPUDMWQDUZNQJSLVFDOREXCIDUFITAWDWSEVHB");

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
    msg.setTimeStamp(0.447339510635);
    msg.setSource(5912U);
    msg.setSourceEntity(146U);
    msg.setDestination(48963U);
    msg.setDestinationEntity(42U);
    msg.command = 70U;
    msg.htime = 0.0675690289433;

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
    msg.setTimeStamp(0.407893114471);
    msg.setSource(43672U);
    msg.setSourceEntity(71U);
    msg.setDestination(37169U);
    msg.setDestinationEntity(27U);
    msg.command = 28U;
    msg.htime = 0.0706077704673;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 230U;
    tmp_msg_0.htime = 0.780101911227;
    tmp_msg_0.context.assign("PQEAYROQCRFJAAUMMEIBUGMQUXXNRRDGTIDFWTEAQZCL");
    tmp_msg_0.text.assign("DDBLUUIKKODADTP");
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
    msg.setTimeStamp(0.0044034995037);
    msg.setSource(3455U);
    msg.setSourceEntity(133U);
    msg.setDestination(56222U);
    msg.setDestinationEntity(17U);
    msg.command = 189U;
    msg.htime = 0.838447748127;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 177U;
    tmp_msg_0.htime = 0.634359018065;
    tmp_msg_0.context.assign("QTSVTICGFQUUXPAZMLAOOXWBJINVHAUBCOUGDJNPPWYRPJCRXXHHGDTHWVKSCLVUPMKQNLSLNYUROCRALKSWOVRQEFMJKZMVBGVBYZMUJCAIDCFTBKGUYGNIVOQQRYBFKOZTGZPDVJSROHVYBLDLIPTXDHMMKZCZHFIXLNNXMS");
    tmp_msg_0.text.assign("IALZICIAGBHDKTAWVGBQFNVPJCFLPZOUFOQL");
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
    msg.setTimeStamp(0.607254379511);
    msg.setSource(15287U);
    msg.setSourceEntity(158U);
    msg.setDestination(37861U);
    msg.setDestinationEntity(231U);
    msg.op = 158U;
    msg.file.assign("GLRZLBTKHUCCRSJVFARTEAVFABVFMGNQFMNZGQNJOBWYZBRZKECWLYASFIRNLONOJQMAPAYFJXKPWAQKMRXIEDHILLWZSTJBXEUJEJSZWKSUEHPOUNUCFJHPZBDUTKYUJBCTCMGDDQMDHPKXGUEPRINAYPFTLVCEZZZQYSOQBSKSWKVCLNLVDSMX");

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
    msg.setTimeStamp(0.774696703329);
    msg.setSource(37023U);
    msg.setSourceEntity(210U);
    msg.setDestination(59892U);
    msg.setDestinationEntity(13U);
    msg.op = 27U;
    msg.file.assign("JVYCRMDBDZUTHAGXBPDGOIRFPMMKMMITAWDQVVLCIIDBIUZYRSWSZGXJQDAMFCEDGKARYWABCISX");

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
    msg.setTimeStamp(0.270417969522);
    msg.setSource(23594U);
    msg.setSourceEntity(95U);
    msg.setDestination(44805U);
    msg.setDestinationEntity(131U);
    msg.op = 107U;
    msg.file.assign("QNFAUOQQNYMARIZEIBLVJWAPEONBVCTHUCCSWCADVRXAOKVZSPTKWLAMURNLBJWJHQWHEIGKRQKVFDLOBBWGRZXYKIOSXJCOPSUTJCRMSEBNDXFUALNEKXXMCTZSPDLUGOPJNLDMYPM");

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
    msg.setTimeStamp(0.758787776125);
    msg.setSource(7524U);
    msg.setSourceEntity(192U);
    msg.setDestination(48588U);
    msg.setDestinationEntity(72U);
    msg.op = 247U;
    msg.clock = 0.143448459811;
    msg.tz = 65;

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
    msg.setTimeStamp(0.295299890316);
    msg.setSource(53483U);
    msg.setSourceEntity(158U);
    msg.setDestination(31365U);
    msg.setDestinationEntity(81U);
    msg.op = 122U;
    msg.clock = 0.251489458471;
    msg.tz = 74;

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
    msg.setTimeStamp(0.985759255571);
    msg.setSource(5241U);
    msg.setSourceEntity(25U);
    msg.setDestination(52976U);
    msg.setDestinationEntity(29U);
    msg.op = 238U;
    msg.clock = 0.454397157456;
    msg.tz = 41;

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
    msg.setTimeStamp(0.506276411792);
    msg.setSource(21383U);
    msg.setSourceEntity(94U);
    msg.setDestination(62861U);
    msg.setDestinationEntity(1U);
    msg.conductivity = 0.19526120945;
    msg.temperature = 0.218015002215;
    msg.depth = 0.76197422128;

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
    msg.setTimeStamp(0.327079950514);
    msg.setSource(33297U);
    msg.setSourceEntity(163U);
    msg.setDestination(27359U);
    msg.setDestinationEntity(230U);
    msg.conductivity = 0.210981909354;
    msg.temperature = 0.617260064457;
    msg.depth = 0.602858436433;

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
    msg.setTimeStamp(0.936297466687);
    msg.setSource(58750U);
    msg.setSourceEntity(211U);
    msg.setDestination(6979U);
    msg.setDestinationEntity(208U);
    msg.conductivity = 0.896133449824;
    msg.temperature = 0.45660088557;
    msg.depth = 0.638346336877;

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
    msg.setTimeStamp(0.999475733365);
    msg.setSource(65134U);
    msg.setSourceEntity(5U);
    msg.setDestination(62277U);
    msg.setDestinationEntity(160U);
    msg.altitude = 0.669057826078;
    msg.roll = 6582U;
    msg.pitch = 47683U;
    msg.yaw = 32452U;
    msg.speed = -1007;

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
    msg.setTimeStamp(0.240869832456);
    msg.setSource(10173U);
    msg.setSourceEntity(49U);
    msg.setDestination(4797U);
    msg.setDestinationEntity(43U);
    msg.altitude = 0.837428862815;
    msg.roll = 9637U;
    msg.pitch = 54853U;
    msg.yaw = 25636U;
    msg.speed = -7228;

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
    msg.setTimeStamp(0.893660889285);
    msg.setSource(59004U);
    msg.setSourceEntity(212U);
    msg.setDestination(54777U);
    msg.setDestinationEntity(190U);
    msg.altitude = 0.172417695482;
    msg.roll = 46716U;
    msg.pitch = 45166U;
    msg.yaw = 31028U;
    msg.speed = 18129;

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
    msg.setTimeStamp(0.649698480832);
    msg.setSource(27405U);
    msg.setSourceEntity(59U);
    msg.setDestination(35718U);
    msg.setDestinationEntity(149U);
    msg.altitude = 0.433886396126;
    msg.width = 0.187289093589;
    msg.length = 0.983038791626;
    msg.bearing = 0.0758974268586;
    msg.pxl = 3796;
    msg.encoding = 122U;
    const char tmp_msg_0[] = {41, -27, -58, -1, 3, 120, 10, 117, -95, -69, -24, 47, -5, 49, -87, 25, -2, 12, -4, 52, -12, 83, 33, 110, -119, 125, 107, -119, 102, 89, -87, -118, 40, 46, -10, -17, 35, -81, 90, 69, -127, -1, -49, 57, 5, -118, -99, 109, 59, -106, -93, -24, 14, 114, -123, 68, -85, 35, 112, -45, 50, -65, -69, -128, 14, -80, -24, -118, -120, -74, 29, -70, 92, 105, -4, -69, -27, 116, 94, -11, 111, -109, 85, 52, 71, -62, 31, 26, 21, 2, 13, 21, -3, -78, 70, -114, 40, -47, -59, -64, 23, 65, -127, -26, 40, 41, 80, 112, 66};
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
    msg.setTimeStamp(0.743034411721);
    msg.setSource(32582U);
    msg.setSourceEntity(188U);
    msg.setDestination(20995U);
    msg.setDestinationEntity(52U);
    msg.altitude = 0.235129140052;
    msg.width = 0.619125847695;
    msg.length = 0.53522530172;
    msg.bearing = 0.780249602407;
    msg.pxl = -20950;
    msg.encoding = 105U;
    const char tmp_msg_0[] = {-18, 2, 44, -88, 5, -75, 99, 119, -70, 43, -51, -43, 106, 90, 61, 35, -52, -122, 75, 45, 51, -11, -28, 4, -66, 116, -115, -53, 3, 12, 119, -61, -45, 52, -118, 72, -40, -39, -126, -123, -106, -56, -87, -85, -52, 99, 58, -33, 43, -31, 112, -29, -6, -116, -83, 91, 46, 32, -2, -39, -25, -6, -21, -75, -44, -88, -97, 46, -65, -8, 1, 102, 53, -5, -106, -122, 20, 31, 123, -95, -47, -15, -41, 12, -114, -114, -21, 101, 92, -41, 77, 80, 87, 90, 87, -19, 5, 32, 123, -121, -92, 52, -58, -29, -13, 78, -103, -119, 115, 65, 93, 109, -86, 2, 125, -60, -20, 73, 121, -105, 123, -33, -118, 124, -93, -62, -124, 110, 114, 94, -19, -4, 118, -21, 24, -104, 12, -35, -105, -105, -48, 67, -63, -112, -115, 40, 99, 98, -122};
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
    msg.setTimeStamp(0.372667168772);
    msg.setSource(61820U);
    msg.setSourceEntity(12U);
    msg.setDestination(916U);
    msg.setDestinationEntity(187U);
    msg.altitude = 0.0441093253018;
    msg.width = 0.434144503588;
    msg.length = 0.346255964534;
    msg.bearing = 0.0196267910525;
    msg.pxl = 3620;
    msg.encoding = 95U;
    const char tmp_msg_0[] = {4, -113, 30, -12, 97, -107, -106, 52, 22, -2, -31, -2, -69, -34, -43, 92, 32, 32, -95, 53, -69, 93, 96, -62, 119, -54, -92, 47, 54, -67, 2, -125, -118, -110, -76, 45, 67, 104, 29, -96, 6, 4, 25, 58, 28, 124, -12, -101, 8, 27, 60, 5, 44, 42, 3, 6, -10, 47, -96, 68, -25, -11};
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
    msg.setTimeStamp(0.526074859357);
    msg.setSource(59997U);
    msg.setSourceEntity(115U);
    msg.setDestination(21027U);
    msg.setDestinationEntity(220U);
    msg.text.assign("ZMNWLDUMKRKTNZPLTHSJFRIOCBPOPVDGFVNQNSUXYHFDACUKUDBZLTABKRYOTXEPF");
    msg.type = 6U;

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
    msg.setTimeStamp(0.363872794794);
    msg.setSource(38043U);
    msg.setSourceEntity(42U);
    msg.setDestination(12887U);
    msg.setDestinationEntity(156U);
    msg.text.assign("MHUCUYVHTFLMOWHHBFTFDCDVDSOGIFVVJDPAB");
    msg.type = 193U;

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
    msg.setTimeStamp(0.382934815379);
    msg.setSource(10012U);
    msg.setSourceEntity(235U);
    msg.setDestination(22623U);
    msg.setDestinationEntity(151U);
    msg.text.assign("STAZSZENOVQTCIFCXUVYTYVXFVBEDDGJHSSVBHNYQSBVEOKPODBLUTLLRKGUWXKHZIARQHLZNZWWNQZYRYIMHYQAUHLWDFMROEXUDVOEBPFMSIPGDVDOYMJJLGEWJIIZFFPRXUCCTYILDXUKMFGPKHOJPRXJOZWSTAQDLXQEZNNVTEGHTPBUMPKKAGWCFXMFCNUUACAWJKIGKHAQY");
    msg.type = 72U;

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
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.410075757064);
    msg.setSource(48016U);
    msg.setSourceEntity(241U);
    msg.setDestination(52936U);
    msg.setDestinationEntity(207U);
    msg.parameter = 163U;
    msg.numsamples = 145U;
    msg.lat = 0.0858883251777;
    msg.lon = 0.177152137865;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.896084163119);
    msg.setSource(50757U);
    msg.setSourceEntity(74U);
    msg.setDestination(14986U);
    msg.setDestinationEntity(20U);
    msg.parameter = 55U;
    msg.numsamples = 84U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 14833U;
    tmp_msg_0.avg = 0.384916504191;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.585480189381;
    msg.lon = 0.144920145992;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.871405245773);
    msg.setSource(26616U);
    msg.setSourceEntity(38U);
    msg.setDestination(14412U);
    msg.setDestinationEntity(85U);
    msg.parameter = 191U;
    msg.numsamples = 253U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 15774U;
    tmp_msg_0.avg = 0.720526409579;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.505473870601;
    msg.lon = 0.311263840217;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.369216792834);
    msg.setSource(19775U);
    msg.setSourceEntity(166U);
    msg.setDestination(21703U);
    msg.setDestinationEntity(195U);
    msg.depth = 22063U;
    msg.avg = 0.569990450646;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.00854025265862);
    msg.setSource(60941U);
    msg.setSourceEntity(81U);
    msg.setDestination(55245U);
    msg.setDestinationEntity(65U);
    msg.depth = 20325U;
    msg.avg = 0.0644134823302;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.98097997467);
    msg.setSource(61059U);
    msg.setSourceEntity(87U);
    msg.setDestination(47539U);
    msg.setDestinationEntity(247U);
    msg.depth = 53338U;
    msg.avg = 0.569150108838;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #2", msg == *msg_d);
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
    msg.setTimeStamp(0.505401089616);
    msg.setSource(7304U);
    msg.setSourceEntity(195U);
    msg.setDestination(9240U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.47674484282);
    msg.setSource(53217U);
    msg.setSourceEntity(242U);
    msg.setDestination(1989U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.53941103549);
    msg.setSource(62136U);
    msg.setSourceEntity(89U);
    msg.setDestination(18458U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.242657032581);
    msg.setSource(19626U);
    msg.setSourceEntity(142U);
    msg.setDestination(26101U);
    msg.setDestinationEntity(64U);
    msg.sys_name.assign("DSZZLFATPDUFA");
    msg.sys_type = 246U;
    msg.owner = 11792U;
    msg.lat = 0.748381531796;
    msg.lon = 0.810799083143;
    msg.height = 0.67871124103;
    msg.services.assign("TEGXWKWIFFQMVSDTBTLVDLGZHUEIDJWMKZBUBERULACKOXQUIVUDGHORCNLBRVJOYSMTWIZFAGDHSTQMPGBIQXJKAAPYVAAHZOEFETUUEKCRVNYGJMCYJVXNQTFMKAAMKWDDLGZWSNUCYCIWPLQWMHINSEZQPCJXOXPKZFPQPHFWCSDYIBAAQGNIVRHFYZYEKXEVSRRJTONMNXHSLPBYTUDVJINRKFTCXB");

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
    msg.setTimeStamp(0.863915094705);
    msg.setSource(14875U);
    msg.setSourceEntity(15U);
    msg.setDestination(61886U);
    msg.setDestinationEntity(251U);
    msg.sys_name.assign("BRHHHXRDCEVKSSOTFGAGIVKUQTCOFVZPPJJAWIXIJSWOUWIUMYDMSLMBLBCETXIFBPZVVKINNENWTKDHWFHTKQOPNMWAUMJYBVUOUJGJNFCZZIQUFMCJMYADAEQZLLFHVVNEOYDTTSXPUWH");
    msg.sys_type = 130U;
    msg.owner = 48705U;
    msg.lat = 0.183200245209;
    msg.lon = 0.0742080092117;
    msg.height = 0.425437806828;
    msg.services.assign("UELOHFXCDCNFROFQQVEVVYPLBXZQRIAWDLXHSKSCIRXLLAZWIFHXUZKXXUBSILLZDJIIWIVFAFVOQGBCFCMKIFZUNJGYBPKWKASKTRADPPVYBHUPEOEKGKNCGXCJNUBPFTNNEQMXEUNMCMGDMDGDIXTREVYZRHZPCLLWEQZMMABOEFGJEMANGTUSLKOYSGBVHUAMWAQYYOBTJDPSWZTAGVJJPSDNHHDHJQQWRRR");

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
    msg.setTimeStamp(0.413540316318);
    msg.setSource(9980U);
    msg.setSourceEntity(49U);
    msg.setDestination(56967U);
    msg.setDestinationEntity(120U);
    msg.sys_name.assign("WNUTACLKBTOTOBLTQWIXIATSHZTAYVKSZGWKNKSPFGDQDMVJUXLDQREXHVEVOIVEUEORSBOPDKGBZVJLUMQRSDCXMHYQCFYOANABMYDWCNQSFHYOLPXPCFBEQWFUJEFCKJSMJBUZMAENAMVDIRULDHQSUIZXUYEKYULFDRHPLBNJSINKWZXXZYIWNXPRAMCNLCCZPFTSKODVQHWQVGTMAHGPXRZJIOBIJYNKFGTGECHGYFWAOIHJWPGMTLGJ");
    msg.sys_type = 120U;
    msg.owner = 50610U;
    msg.lat = 0.808527154821;
    msg.lon = 0.436387655318;
    msg.height = 0.398065899879;
    msg.services.assign("DQMGNIMKCXZVXQHDPJNYHVHCZGLJETTSGVLAGQCBMFOEFCIXDHDKVINIYUZUPYBRENXAFLFJSBYOSQLDYRRTXPMJIAKXQAAYOVZPUDBLURFMRFZGDOTDMATHBWEEACMSWBNNYKWBWUVBPWCT");

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
    msg.setTimeStamp(0.999044997532);
    msg.setSource(35305U);
    msg.setSourceEntity(115U);
    msg.setDestination(5562U);
    msg.setDestinationEntity(165U);
    msg.service.assign("XEOXNVIGBIOAZCHOOFUJPVLKIZFXVWVFXKHREPPYALFCOWDQXUCOMZAMTVRSBJAJHRJULEPOMKAETIWEOXCOHSHDCBTMUGXRWKDRMJQYHMBXNGDTFWKXPBDITLYZUIQVMQGFKSPGYQHUKAHGIIFZMBJNVZBLQEYSLCJSFRDPPTENMWIDTQYSSVAGUMELZCFRAY");
    msg.service_type = 212U;

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
    msg.setTimeStamp(0.964633139247);
    msg.setSource(2518U);
    msg.setSourceEntity(16U);
    msg.setDestination(31317U);
    msg.setDestinationEntity(142U);
    msg.service.assign("ILTHZHJXNWGYQLHOUVKZYQEFBZGBMNVRUPKAXZUE");
    msg.service_type = 196U;

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
    msg.setTimeStamp(0.151783145996);
    msg.setSource(174U);
    msg.setSourceEntity(109U);
    msg.setDestination(21134U);
    msg.setDestinationEntity(85U);
    msg.service.assign("VOMELDRHTYJZJKMLISJYQUCAYGSXWDEAXLWFQRNEYXXZRPWDBSRHWVELZSGMDBPRTBVIOTPIGCYEIOOBNZHNCCIPKRUJLHYMTCQOW");
    msg.service_type = 86U;

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
    msg.setTimeStamp(0.742791166137);
    msg.setSource(5874U);
    msg.setSourceEntity(146U);
    msg.setDestination(32867U);
    msg.setDestinationEntity(8U);
    msg.value = 0.43117781705;

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
    msg.setTimeStamp(0.118848580082);
    msg.setSource(14128U);
    msg.setSourceEntity(43U);
    msg.setDestination(21321U);
    msg.setDestinationEntity(203U);
    msg.value = 0.390842451574;

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
    msg.setTimeStamp(0.202899242063);
    msg.setSource(49172U);
    msg.setSourceEntity(5U);
    msg.setDestination(34677U);
    msg.setDestinationEntity(60U);
    msg.value = 0.451283569304;

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
    msg.setTimeStamp(0.108564775528);
    msg.setSource(27084U);
    msg.setSourceEntity(179U);
    msg.setDestination(49600U);
    msg.setDestinationEntity(228U);
    msg.value = 0.130011518469;

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
    msg.setTimeStamp(0.171253244872);
    msg.setSource(36839U);
    msg.setSourceEntity(138U);
    msg.setDestination(48180U);
    msg.setDestinationEntity(196U);
    msg.value = 0.955772364906;

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
    msg.setTimeStamp(0.226677939555);
    msg.setSource(42285U);
    msg.setSourceEntity(95U);
    msg.setDestination(22346U);
    msg.setDestinationEntity(102U);
    msg.value = 0.748361603053;

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
    msg.setTimeStamp(0.505310107454);
    msg.setSource(41267U);
    msg.setSourceEntity(107U);
    msg.setDestination(15255U);
    msg.setDestinationEntity(85U);
    msg.value = 0.76017052586;

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
    msg.setTimeStamp(0.369480783521);
    msg.setSource(48504U);
    msg.setSourceEntity(80U);
    msg.setDestination(28261U);
    msg.setDestinationEntity(51U);
    msg.value = 0.340135260694;

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
    msg.setTimeStamp(0.999192099239);
    msg.setSource(21519U);
    msg.setSourceEntity(197U);
    msg.setDestination(19539U);
    msg.setDestinationEntity(16U);
    msg.value = 0.568123103547;

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
    msg.setTimeStamp(0.410047328664);
    msg.setSource(12262U);
    msg.setSourceEntity(160U);
    msg.setDestination(23886U);
    msg.setDestinationEntity(250U);
    msg.number.assign("XUOTJHLPLPHJTKXQZSKATOSIDVUJHWSCJRPVGKUUP");
    msg.timeout = 32163U;
    msg.contents.assign("IGCAJZYMKBIGLISQUANGUEPEFRUYGNVBALBWCMVEQDWSNOUYOWSJSRKPXACJHJKIXBQSAUMTGGFWEUBPFRJXYKOVKFNIOYOTKPNHFEVSCOOFLYYBGRWTWTCFMZPNQJPDNKF");

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
    msg.setTimeStamp(0.0797746431784);
    msg.setSource(122U);
    msg.setSourceEntity(135U);
    msg.setDestination(7066U);
    msg.setDestinationEntity(124U);
    msg.number.assign("OSYNUVWQOBXUCTCSLVQWOJUMBCLRQIERJSUJVPOMFDKTQWRIKEILUWIDEGBHXLWCWXENMXUCJQPZKIZPDIXAYTWMRVZVDAFQCHACNSHEAVGFPBELZKDLZQXTSTUSZJAHFRIAOYGAFANGGJSNPRCKVQYWRHCBFVEBTWRMZBUBLOXSNVMOYCAMJKGKYGEYFHNHSJXJDGFBAOOSEIYUKIPPMRMHDTLDGNZPRYWETHZQHBTGUJPFNNTXQP");
    msg.timeout = 48212U;
    msg.contents.assign("XZAWGFBDBTRQMIMZBYJOGSIBCZWQFTBNHKHHGLWIVHJOXNNRLGZRVYMDKNRBLQGKSCSDDTEZMTSAKPPDOIEECBVFRYPLTKWANIQAXGSUANUCCAQOPQTVJFCBXICDDSWPHHGJPGMREV");

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
    msg.setTimeStamp(0.407728480957);
    msg.setSource(54437U);
    msg.setSourceEntity(139U);
    msg.setDestination(12856U);
    msg.setDestinationEntity(132U);
    msg.number.assign("IVOWCYNGUPMGHYNUHBRHPQFDKXXINDDBWMVMOGRXMRGYKLTSAKZJOTBZJSWGUICASKVASLMDMTLELKXJWOPJWFKIODZBEHCUIQZEMDYRSVTB");
    msg.timeout = 58762U;
    msg.contents.assign("QALHTTFEGCUTVFKFUTBXBNDPRZDIBJYVHKYOCJPPVRHKLBCKMDPKCYZXEIGOOAXVAHPKXWLNNRTXFYJYBFUVUKHJSLFQIWRAZVEFUHXATOJDQQKERZBPUSOCBOJWYSLPSMJAEFPGDMLWGCGSSLAGOLRYFNMRIPJYHYRENMSMKUVNGSDXSEMZGIGZRQEIEPUXVRAZNIVQZHHAENCZJUMAC");

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
    msg.setTimeStamp(0.835666583073);
    msg.setSource(22350U);
    msg.setSourceEntity(222U);
    msg.setDestination(15133U);
    msg.setDestinationEntity(39U);
    msg.seq = 356397768U;
    msg.destination.assign("GISWFPNHUNRFLWZBSMFCGMUICFZJKMIDDKGYDFCHCXRPBPYSNJLFKPTETZHBOLEEDMKWRZBJIOZHOJQVDCERZVFAWUHMLKWNJXUHTGQIFPGQDXPPMXHEEUXOCUYN");
    msg.timeout = 47153U;
    const char tmp_msg_0[] = {78, 126, -82, 48, 14, 37, 119, 93, 79, -5, -46, -67, 7, 62, -17, -128, 116, 64, 123, 48, 72, -74, 12, -11, 57, -20, 68, -2, 13, -57, 104, 29, -37, 68, -81, -116, 17, -44, 39, 106, 96, -100, -53, 2, 9, -124, -124, -33, -60, 37, -113, 104, 118, -63, 87, -31, -47, 75, -50, -104, -67, 12, -92, -102, 64, -103, -6, 86, -128, -32, -100, -43, -69, -80, 50, 80, 100, 71, -101, 25, -40, 32, 54, -114, -80, -105, 9, 92, -47, -51, -103, -88, -15, 62, 27, -122, -16, 6, 56, 120, -36, -62, 115, -61, -110, 20, 120, -17, -99, -97, -70, 126, 123, -8, 29, 69, 121, 18, -125, 110, -83, 94, 62, -39, -45, -118, -124, -110, -120, 88, -70, -123, 47, 79, 19, -57, 73, -72, 117, -71, 7, 55, 73, -24, 124, 89, -54, -6, 0, 33, -79, -29, -94, -95, -6, -118, 30, -82, -35, -17, -46, 62, -82, -49, -67, -30, 96, 14, -110, -17, -85, -78, 5, 104, 17, -30, 29, 3, 50, -27, -10, 26, 91, 119, -76, 90, -102, -97, 79, -71, -74};
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
    msg.setTimeStamp(0.580200263747);
    msg.setSource(58858U);
    msg.setSourceEntity(211U);
    msg.setDestination(20204U);
    msg.setDestinationEntity(239U);
    msg.seq = 1010406892U;
    msg.destination.assign("XYTZKRHZKBOHPWYBNDOJSFYQETAPYGUCYZDBJCQNSAFZCDIQEHZTLKZCDQKEVFTQDALRLZBVDNHWZYBEVBRPKJTPKOESTLWPBDHLCXLGVXFJUQIANDCUUPNMRISVADNLVJEUKEYVLXZXNUIFJOGWHMKBQMJNIXJSISHOEXRIHUFSAAMSOXJYPOGJWB");
    msg.timeout = 22164U;
    const char tmp_msg_0[] = {26, 105, 123, -25, 102, 125, -71, 6, 63, -126, 80, -78, 20, -61, -97, 101, 5, 83, 79, 126, 62, 14, 89, 26, 54, -40, 37, 120, 54, -54, -78, -4, -5, -86, -66, -52, -93, 23, -33, -77, 30, -103, -101, -28, -101, 118, 48, 113, -116, -27, 89, -61, 28, -122, 43, -2, 47, 17, 40, -34, 103, -91, 101, -94, -25, -1, -23, 100, -94, 87, 87, -62, 39, -13, 30, 102, -59, 72, 126, -56, 102, -1, 102, -77, 120, 60, 19, -80, 120, 8, 49, 61};
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
    msg.setTimeStamp(0.83541028972);
    msg.setSource(948U);
    msg.setSourceEntity(152U);
    msg.setDestination(28222U);
    msg.setDestinationEntity(69U);
    msg.seq = 1120305011U;
    msg.destination.assign("RLULYGOHMZASTIFJFTPGGBJWKZLIOHEGMBHSOIYNPVAIMAGUGIYNZTCMZPFWTBEDZEELQDUQAFKYDWKWFLLBKGHEFLTIDOPORVPVGGMSXTULKQNDGSPPZQJJRSAHPKHNYJTOWYAZAWJPXNVRONDIMCXARJUM");
    msg.timeout = 23471U;
    const char tmp_msg_0[] = {21, -32, -98, -55, 110, 18, 63, 68, 59, 36, -14, 59, 113, 8, -82, -68, -79, 78, 113, 58, -11, 15, 97, 79, -51, 69, 73, 98, -31, -90};
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
    msg.setTimeStamp(0.984344559718);
    msg.setSource(13281U);
    msg.setSourceEntity(155U);
    msg.setDestination(63829U);
    msg.setDestinationEntity(51U);
    msg.source.assign("WEFOXVJNPPEDDYOMQCESPBZWLYIYDUZSPHYPFTDSUMCVOXSARHTOKTGCORVOUJRZUF");
    const char tmp_msg_0[] = {-4, 48, 119, 96, -128, 104, -45, -48, -62, -69, -22, -120, 84, -58, -24, -48, 82, 70};
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
    msg.setTimeStamp(0.762230385027);
    msg.setSource(60391U);
    msg.setSourceEntity(4U);
    msg.setDestination(19841U);
    msg.setDestinationEntity(113U);
    msg.source.assign("YEGOYAYDHNFFZVPETMJTDSEFKCSYKVBGVVGSRJNQZMGKXNPFZZAIFWYSRDKXRXZDSXQMPNBNOVMYMEFJEYAWEICABOOEMCQUAXUHZLVPGUOFLDAUCDZBNBQZLCIKUYCSHD");
    const char tmp_msg_0[] = {-11, 121, 23, -78, 6, -125, -75, -51, 93, -111, -79, 115, -100, -70, 111, 39, 109, 43, -20, -119, 75, 23, 76, -105, 18, 35, -82, -79, -81, -99, 33, -44, 24, 51, 88, -20, -97, 34, -59, -128, 100, 77, -32, 36, -65, 27, -86, -12, 23, 106, 26, -92, -121, -32, 46, 2, -8, 61, -80, -67, -104, 52, 69, -108, -37, 77, 13, -110, 70, 57, -42, 108, -35, -56, -16, -79, -126, 122, -111, -127, -13, -52, -104, -125, 87, -20, -46, 120, 67, 112, 71, 96, 115, 68, 60, -118, -27, -123, -40, -106, -88, 109, -79, 42, -122, -91, -4, 45, 118, 55, -76, 8, 96, 63, -97, 82, 32, 87, 104, 6, -107, -5, -76, -101, 7, -56, -115, -106, -92, 72, -19, 101, -124, -117, -50, 30, 98, 77, 8, 72, -108, 55, -89, -118, 67, 109, 27, 120, 116, -96, -88, 11, 120, -96, 68, -72, 43, 6, 3, -107, -58, -86, -78, 21, 102, -55, -94, 27, 118, -94, 1, 58, 44, -125, 47, 69, -10, 34, -17, -10, 23, 91, -54, 115, -52, 97, -112, -77, -105, -104, -98, 122};
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
    msg.setTimeStamp(0.874941111111);
    msg.setSource(60545U);
    msg.setSourceEntity(253U);
    msg.setDestination(33235U);
    msg.setDestinationEntity(123U);
    msg.source.assign("DOJCBVSLAOHMCPBFMRYZQPAFWZEEUQGTGOGFOTXRVLMAJNIZZQUZPAXSYBS");
    const char tmp_msg_0[] = {-27, -82, 75, -104, -117, -98, 22, -89, -121, 118, -48, -59, -54, 74, 79, -47, 41, 75, 40, -101, -124, 9, -25, 95, -59, -84, 116, 97, 92, 85, 39, -80, -108, -52, -115, 7, 6, 58, 4, -68, 41, 124, -111, 82, -112, -6, 17, -79, 93, -38, 95, 56, -85, 36, 51, -79, 22, -46, 30, 11, -24, -101, 16, 68, -47, -13, -71, -84, 108, -6, 103, 101, 123, 82, 65, 50, 46, -69, 14, 57, 40, 111, 80, -65, -22, 84, -81, -85, -103, 111, -50, 49, 48, -103, 17, -123, 90, 12, -58, -10, 63, -70, -111, -108, -90, -11, 19, -111, -39, -2, -110, -89, -106, -121, 53, 64, -40, 59, 79, -61, 107, 77, -60, -4, 18, 91, 39, 54, 25, 125, 113, 29, -103, 62, 106, 28, -103, 109, -128, 85, 124, 7, -24, 21, -37, -109, 19, 110, -28, -61, 57, -125, -106, 112, 104, -100, 94, 25, 44, 15, -25, 88, -98, 50, 3, 117, -6, 71, 2, -20, -119, -27, 9, -115, -13, -84, -86, 30, 76, -72, -24, -120, -118, -73, 19, 97, -122, -100, -57, 114, -17, -93, -118, 16, -71, -108, -53, -109, 25, -34, -70, 111, -93, -53, -56, -92, 39, 62, 8, 43, 35, -72, 16};
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
    msg.setTimeStamp(0.802793576674);
    msg.setSource(52605U);
    msg.setSourceEntity(80U);
    msg.setDestination(12949U);
    msg.setDestinationEntity(171U);
    msg.seq = 3435393190U;
    msg.state = 63U;
    msg.error.assign("VGJAWNUGMVREPKOANSFEIBTPYZLWCDT");

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
    msg.setTimeStamp(0.940617500252);
    msg.setSource(14389U);
    msg.setSourceEntity(252U);
    msg.setDestination(38799U);
    msg.setDestinationEntity(211U);
    msg.seq = 1108474093U;
    msg.state = 13U;
    msg.error.assign("PEFYXQXFJADITTYTOZBZRKFEAWDGEXMCFKOCJLSPIEQLWUFANSAEQAHCPSZJLKGIZLHDRICQLXSHHQXIYFKQEZDBVWTNHYTOBNACPMRIFUGYQVNIUHBOWMYCOZGGMDRQXUJSBWRRJMRMHKWHFMJCTIXEVKOPSGJBMEMULVLTYKYBPPAKBDVUTGNXVKAHNUSTKBYBASNGPRCDVIUZWLEJVO");

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
    msg.setTimeStamp(0.831383069598);
    msg.setSource(46810U);
    msg.setSourceEntity(23U);
    msg.setDestination(40989U);
    msg.setDestinationEntity(200U);
    msg.seq = 3006072555U;
    msg.state = 85U;
    msg.error.assign("TVQFSAHJOHNODHTQQCCDWEBWJXDYMKLTMSRNUQFJBZRDKSHVLKDZQGLNKTLVSTYABFWUJRMFSPZM");

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
    msg.setTimeStamp(0.100570953479);
    msg.setSource(40424U);
    msg.setSourceEntity(126U);
    msg.setDestination(22687U);
    msg.setDestinationEntity(94U);
    msg.origin.assign("BOHTSZKWWWGAMMQTFKRSJH");
    msg.text.assign("CGRZSUYGNTXRMWBWCMAXHHTFYULDHRAHZRPJUEISMYJTELZJLHFJGMCCMJDACWXOCSGXBXVHKBWDLNZIYVPRUGADVOPZZUEGUVQDARMNUISFBXQWNAMJTQEPGXKKTMFNBOXEOKXCILLDUKWNPYLYSFUJPRBPHUDSYNRG");

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
    msg.setTimeStamp(0.724010288828);
    msg.setSource(11042U);
    msg.setSourceEntity(39U);
    msg.setDestination(17416U);
    msg.setDestinationEntity(150U);
    msg.origin.assign("XTOQBLINPXBZTBMMZNNOSOOKDINDVYOUHYHGLMRBKIHZNVFULLFAIYJIAKTJAFMVERCPQVRJSXKKLUPWTXQGLIHCXHFWCFSAGSFAAUBSPZGDSLQTXPHDYIOOUYMFPAQKUREWZQZQNJV");
    msg.text.assign("KKJCPJANTUYIVXDHVEQDZFFNUYDJWIAKCXJMNJSNEHSRWWSNCIYNMFOVWSYHEBMKRPIZJRYBPDJEROWBXMOTJFQOIMWFBZWXWRYMQXQLCUHPYUZXLTIFBSPVNIGFZZETKADOMADTFAGTSEDPKCALLJMVEAGLTBLCZZKBHQIXWBOMJOMYLYKZGCHXUGVVGBUDUHIHFROLGQDIHCQAP");

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
    msg.setTimeStamp(0.189829659044);
    msg.setSource(52798U);
    msg.setSourceEntity(138U);
    msg.setDestination(33545U);
    msg.setDestinationEntity(238U);
    msg.origin.assign("RBFVRXFPFYNGGHVJUSLBMRJMFTILVCWRJPTSZEVILUXGUNRCNMYQMGEZPNVUILTFXNGGSLINIBIUOKQYWWPSFIHCOQHYWCJZEK");
    msg.text.assign("SJKZRIJRTHKEDIJULKRDKEQYUCSVLQLTFDZQMXMCYKZNMEVDIWPCMDTARHQUAKJRYWABYZMDTRHGBVHREXSFSXZJGFGRCIAGRSIJMBVNCQOLGGBKTJMPAGCSVGSHBOHBWPJLIBYHTYYLVUSPWMPNIAMSHOYELEVDTNFTCOKUUPNUZVBLZKFNUFLPQWXNXOUFFVTGCWWCGPXVEQ");

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
    msg.setTimeStamp(0.724931346765);
    msg.setSource(48616U);
    msg.setSourceEntity(141U);
    msg.setDestination(17462U);
    msg.setDestinationEntity(14U);
    msg.origin.assign("QXCBCZKOHGZQRAAKPHOWPFOAEVBMTKDOHSSWWZRCUUHTSZVYDQXFWTXENAZVOQDEYJSWMAXKOJKXMXNJLLPWGGXNGAVMURBZBUBTNNJANIRAYJVUNTSYNFURUEIVXVTBGGILKGLSPPMEDFPISSQPVQCDCKSIQHDMPL");
    msg.htime = 0.055864982827;
    msg.lat = 0.638290112054;
    msg.lon = 0.456722702533;
    const char tmp_msg_0[] = {18, -78, -92, 80, -108, -74, -59, -110, -95, -34, 31, 107, -55, -59, -47, 77, 99, 92, 107, -28, 51, 73, -102, 43, 118, -77, -65, 11, -20, 19, 27, -83, 2, -42, -124, 108, 5, -11, -70, -36, 51, 94, -32, 12, -4, 113, -64, 109, 95, -14, 124, -64, 116, -54, 94, -53, 29, 95, -44, 42, -124, -82, -83, 5, -69, -21, 74, 69, 18, -97, 16, 48, -19, -6, 31, -45, 22, 94, -112, -95, 101, 119, -30, -51, 122, -12, -43, -95, 79, 105, -67, -74, -75, -105, -52, -53, 22, -44, -13, 121, -84, -96, -101, -4, -28, 111, -9, -29, 95, -43, 124, 56, 102, 12, -4, -38, 87, 19, -126, 42, 17, 121, -29, 27, -95, -98, 114, 84, -80, -113, -109, 13, -83, 107, -19, -107, 19, 126, 10, -37, 93, 27, 93, -39, -86, -29, -5, -28, -39, 61, 88, -59, 53, -95, 111, -17, -127, -9, -98, 42, 80, -128, -30, -85, -128, -101, -23, 93, 22, 26, -87, 59, -17, 18, 51, -123, -95, 67, 18, -52, -90, -96, -38, 77, -121, -97, -109, -109, -60, -128, -55, 125, 71, 63, -6, 73, -61, 102, 36, 52, -40, 39, -37, 100, 109, 103, -117, -24, 12, 2, -121, -106, -96, -62, -87, -1, -9, 21, 92, -28, -92, -56, -35, -52, -99, -123, 42, -68, 11, 18, -114, -111, -36, 97, -25};
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
    msg.setTimeStamp(0.234459008773);
    msg.setSource(47205U);
    msg.setSourceEntity(56U);
    msg.setDestination(30389U);
    msg.setDestinationEntity(99U);
    msg.origin.assign("LRVTPGUBICHBYIRCIBAUAFDXQQAEAQBUTKOVYVYRPLEIJMFWNUHICGZPPKKAMLNBJVHJGRERVAC");
    msg.htime = 0.736137174237;
    msg.lat = 0.64092478826;
    msg.lon = 0.286726502169;
    const char tmp_msg_0[] = {105, 55, 77, 4, 6, -14, -6, 114, -56, -24, 125, 85, 75, -95, 13, -29, -30, 52, 50, 5, 88, 66};
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
    msg.setTimeStamp(0.115217268128);
    msg.setSource(41430U);
    msg.setSourceEntity(125U);
    msg.setDestination(23995U);
    msg.setDestinationEntity(71U);
    msg.origin.assign("PAJIZNQZFXRGARVFZDXBRLBMZPSLATDDOURKSYYFQIVIVQLQTOY");
    msg.htime = 0.744188989689;
    msg.lat = 0.966990640971;
    msg.lon = 0.501792224608;
    const char tmp_msg_0[] = {10, -15, 47, -81, 64, 4, -96, -10, 46, -24, 58, -16, -50, 74, -122, 71, -75, 19, -23, 45, -100, 52, 43, 18, 126, 35, 54, 34, -109, 4, 13, 73, 62, 37, -53, 63, -11, 73, 74, 64, 100, -36, 50, -101, 4, -33, -53, -126, 97, 59, 41, 0, 97, 18, 64, -73, 101, -7, 103, -60, -13, -65, 74, 37, 19, 74, -24, -67, -43, -52, -109, 106, -125, -63, -62, 96, -33, 30};
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
    msg.setTimeStamp(0.987031327437);
    msg.setSource(24159U);
    msg.setSourceEntity(93U);
    msg.setDestination(56608U);
    msg.setDestinationEntity(207U);
    msg.req_id = 50541U;
    msg.ttl = 5123U;
    msg.destination.assign("YNWHLVSTSBBKFXZRPKTDVIEZOTOHLDEAUUZELGQHXUUJGCLIOYDHXRFPZPFFNKZKAGLJEPLMBFHRHOYCVIJTIEVBYPTHMKCZCDNQPAVNAYNGEQLIVDCAWJJHLXLIFQWAPBISZJWOQGXPUCIZAMROBMAXRNEVFBKNXWUKVGU");
    const char tmp_msg_0[] = {-106, 16, 38, -89, 115, 102, -28, 114, 69, -100, -107, 7, -70, 112, 94, -83, 94, 114, -60, 5, -34, -128, -49, 44, 41, 2, 60, 109, 0, -122, -114, 80, 75, 58, -2, 62, 41, -69, 74, 88, -37, 83, 92, -60, 98, -24, -52, -64, 107, -100, -108, 7, -50, -101, 78, -83, -64, 0, -113, 87, 85, -28, 115, -14, 115, 112, -39, -96, -39, 12, -84, 103, -112, -37, 15, 21, 53, 34, -48, 101, -121, -7, 77, -12, -66, -86, -94, 6, 69, -39, -122, 83, -109, 99, 49, -22, -21, -31, -102, 55, -92, -82, 42, 40, -18, -121, -72, 117, -3, -51, 115, 23, 124, 123, -37, 35, 83, -15, 20, -98, -102, 110, 47, -52, 71, -116, 40, 11, 115, 27, -5, 84, 122, 71, 12, 85, 61, 103, 61, -76, -35, -114, 72, 55, 37, 72, 61, 38, -103, 66, -70, -106, -69, -46, -39, 7, 17, -81, -45, -126, 47, 97, 44, 80, -13, 18, 118, 111, -29, -23, -113, -5, -96, -55, 116, 54, 97, 65, 6, 91, 95, -69, -87, 106, -35, -9, 124, -51, 87, -74, 59, 101, 11, 82, -51, 49, -76, -105, 23, -59, 88, 47, -115, 26, 109, 73, 14, 68, 99, -105, -74, -17, 39, 94, 18, -80, 60, 82, 63, 12, -96, 9, 94, 31, -41, -74, 56, 82, -23, 6, -21, 24, -77, 86, -122, -101, -88, 82, 80, -75, -19, 4};
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
    msg.setTimeStamp(0.734391026768);
    msg.setSource(26960U);
    msg.setSourceEntity(61U);
    msg.setDestination(7762U);
    msg.setDestinationEntity(187U);
    msg.req_id = 44719U;
    msg.ttl = 47471U;
    msg.destination.assign("UACUGUSRSOAIFCJGZLNHMNGVEBJADWFLXFUARKZSENPI");
    const char tmp_msg_0[] = {71, 105, -61, -93, 64, 20, 23, 73, -107, -49, 72, -97, -65, -7, -69, 2, -40, -29, -37, 63, 69, 82, -64, -20, -80, -100, 114, 62, 47, -103, -84, 75, -86, -22, 55, -49, -37, -108, 49, -3, -91, -105, -85, -42, 111, 87, -66, -62, -90, 113, -61, 111, 74, 124, 62, 96, 7, -21, -83, -66, -126, 66, 39, -75, 12, -2, 125, -17, -9, 71, 22, 97, -72, -121, -57, 13, -110};
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
    msg.setTimeStamp(0.852041782232);
    msg.setSource(30868U);
    msg.setSourceEntity(40U);
    msg.setDestination(9506U);
    msg.setDestinationEntity(50U);
    msg.req_id = 60084U;
    msg.ttl = 26791U;
    msg.destination.assign("PGDHJNFPBCQJYXAGBEAADWTCWEHSBPCEPYVXBRAXCTSBTZCDMQTILLNDZRWXRBGKLJGJPIUKDQHPZFNXWPZEWYYFMSNZRZDFCRGONKKMRNYOJQAQRUHSSJ");
    const char tmp_msg_0[] = {-108, -26, -67, -126, -40, 39, 64, 109, 45, 27, 73, -11, 122, 15, -104, 115, 81, 102, 19, -121, -24, 105, -35, 124, -28, 36, -65, -70, 44, -77, -45, -59, -33, 101, 0, -86, 112, -12, -8, 109, 56, -46, -34, -79, -52, -7, -116, -12, -93, -57, -9, 61, 68, 9, 6, -122, 108, 29, -87, -85, 6, -106, -52, 82, -58, -39, -119, 43, -22, -29, 74, 55, 79, -50, 70, 74, 91, -97, 113, 99, 78, -97, 35, 96, -34, -84, -89, -51, 45, 42, 3, 60, 88, 92, -93, 110, -91, -14, 75, 90, -30, 43, 83, -61, -65, 52, 111, -124, -92, -57, -128, -119};
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
    msg.setTimeStamp(0.622870538619);
    msg.setSource(45716U);
    msg.setSourceEntity(100U);
    msg.setDestination(26085U);
    msg.setDestinationEntity(220U);
    msg.req_id = 5258U;
    msg.status = 159U;
    msg.text.assign("BHCFULHKWXZWVSOKLKINAVDCMNQGHJQCZTZMBDLORPGZGKLQTWHALDQERNTOLJXPLVGEPOPECHXRKVVWVSSSNKFJXBUFDBWGFHLXRMZBTOBXFEXUEOFNLYKZGXWPTOWPDUBEJQUYYVHFYJTIAIUKNUFHSYBYOQJKAIYTMUYREYYGNZBCAPRNOGXFLKXJDAHUI");

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
    msg.setTimeStamp(0.563194132688);
    msg.setSource(61355U);
    msg.setSourceEntity(218U);
    msg.setDestination(31956U);
    msg.setDestinationEntity(122U);
    msg.req_id = 33186U;
    msg.status = 167U;
    msg.text.assign("LQMKNPDDVNFWBJYHHVKNCJPSDWEWJKTIJLJVNEPGGXKXKUCQ");

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
    msg.setTimeStamp(0.334417376084);
    msg.setSource(65206U);
    msg.setSourceEntity(116U);
    msg.setDestination(22568U);
    msg.setDestinationEntity(118U);
    msg.req_id = 52336U;
    msg.status = 51U;
    msg.text.assign("KOFCSATRXKRHPFOUAMSQNJNFEXGMHVIGIJVWUTSS");

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
    msg.setTimeStamp(0.90946418821);
    msg.setSource(34427U);
    msg.setSourceEntity(138U);
    msg.setDestination(61150U);
    msg.setDestinationEntity(154U);
    msg.group_name.assign("GCYSSIQIGUGVBRSKMVVHRTAXJYGFZPADAOGYWFUZDEYTXCLWYKMTSGMFTFEDBKBYKJHJUSDOPOLPOWZBAPRSJAZLUASCXMNBXZRGCHIBOTSKVRXVZFLHTGHDEERCCLINTAYNQROQOIFIUVWDNXMGKMPFQCQIXLNEHNCJPTYHPFWZMURWWLILAMVNLYLDBUKWW");
    msg.links = 941358180U;

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
    msg.setTimeStamp(0.884481916472);
    msg.setSource(15187U);
    msg.setSourceEntity(227U);
    msg.setDestination(2854U);
    msg.setDestinationEntity(209U);
    msg.group_name.assign("GTVWTQJECHXYTYBMEKFHNBALBDBYDXOCVSTUVSUIZZDPSJLSBRJQXNGXEHMGJZGGIZFQBEWLHCIMWNMQSYQURFHGFCFPWOUZWNFVUNAYAAMIOPKINROXGLOPLLZZKEDWRQICRXITPKZPALUJEOVLDKMNUOKJKFTGCXRVUTBVGJJDRJDUXLCLMZBYWPREHRUCCAASOPEYHPQK");
    msg.links = 1880529490U;

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
    msg.setTimeStamp(0.32093659045);
    msg.setSource(15133U);
    msg.setSourceEntity(146U);
    msg.setDestination(18865U);
    msg.setDestinationEntity(213U);
    msg.group_name.assign("HMTDOHLOKABJADDVKEAVNGPUVJPFNENJQSRFGQMYPUYFZWTLJUCRABOQPIGG");
    msg.links = 3212074127U;

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
    msg.setTimeStamp(0.423713712182);
    msg.setSource(34893U);
    msg.setSourceEntity(110U);
    msg.setDestination(61212U);
    msg.setDestinationEntity(77U);
    msg.groupname.assign("GZQDNXPCXXIDBRCTYOKFUKESLHANCACYDGLSSXHTSFVR");
    msg.action = 164U;
    msg.grouplist.assign("WSTGJTECMTDYRZOLGQPOMRKISBSGMBEJN");

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
    msg.setTimeStamp(0.351455750161);
    msg.setSource(4346U);
    msg.setSourceEntity(226U);
    msg.setDestination(39050U);
    msg.setDestinationEntity(92U);
    msg.groupname.assign("TTNDWHKFIHCWNARCRPFWNKVZSSWBMEAHVICLCPPMCSINZHZSFYBBRGEFSYWYEUBWXVHFGVZRBFVYOCODJJOYXBCHUMDULYLGJTXGEDOINAMNGOAPREZKRYJIGFUVIBEVROBAZSDUKKLSAQZOVAZQIWTAEMPKRUGONEZMOPSQYHLLJXJXLSWKYTKQNTQVGLJCJD");
    msg.action = 90U;
    msg.grouplist.assign("YJLJDSAEAWFDIRXIJKIZQGLFQMWAVSOFUURQDNEIJMXLZTPCASBWBBZZZKZCNGEFQDWWHQHBCPPBXNXLEOOVYCFVELOTVHEUPTTUHARM");

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
    msg.setTimeStamp(0.554526731932);
    msg.setSource(54761U);
    msg.setSourceEntity(134U);
    msg.setDestination(46266U);
    msg.setDestinationEntity(224U);
    msg.groupname.assign("TWEQYABHBILLDTOCAFKQJHGYLSZFDYDRBEICIJCVSKHVGPZAKWXTNLOHPXPJFJIVVPKJHOKMNWDRPPZUHTDKTIDQNBVLAOUDZTXVUSZGLXMQRGTUVHVCHF");
    msg.action = 55U;
    msg.grouplist.assign("GSBJGFUBMFWPLEXZKNDNYXCFHRYFYWUTXVJYXCHQTRPVBKEFIIVOGTNNEZQLHDLYFBSYTJOPCCCIZUZOVNMBWDILAVVITUHXUIWNFBEHWSNSTILU");

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
    msg.setTimeStamp(0.127170516113);
    msg.setSource(60266U);
    msg.setSourceEntity(34U);
    msg.setDestination(15143U);
    msg.setDestinationEntity(15U);
    msg.value = 0.316026032544;
    msg.sys_src = 25740U;

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
    msg.setTimeStamp(0.326545119023);
    msg.setSource(1013U);
    msg.setSourceEntity(154U);
    msg.setDestination(22734U);
    msg.setDestinationEntity(139U);
    msg.value = 0.4865391433;
    msg.sys_src = 36959U;

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
    msg.setTimeStamp(0.237757245162);
    msg.setSource(47048U);
    msg.setSourceEntity(101U);
    msg.setDestination(21839U);
    msg.setDestinationEntity(204U);
    msg.value = 0.356795662358;
    msg.sys_src = 59753U;

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
    msg.setTimeStamp(0.906436133421);
    msg.setSource(34423U);
    msg.setSourceEntity(48U);
    msg.setDestination(13237U);
    msg.setDestinationEntity(29U);
    msg.value = 0.161969568868;
    msg.units = 141U;

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
    msg.setTimeStamp(0.823919770941);
    msg.setSource(28722U);
    msg.setSourceEntity(160U);
    msg.setDestination(35415U);
    msg.setDestinationEntity(46U);
    msg.value = 0.0220796055112;
    msg.units = 173U;

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
    msg.setTimeStamp(0.3568199017);
    msg.setSource(42980U);
    msg.setSourceEntity(35U);
    msg.setDestination(51279U);
    msg.setDestinationEntity(99U);
    msg.value = 0.945756837032;
    msg.units = 117U;

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
    msg.setTimeStamp(0.251451799236);
    msg.setSource(61755U);
    msg.setSourceEntity(232U);
    msg.setDestination(47846U);
    msg.setDestinationEntity(176U);
    msg.base_lat = 0.844897926917;
    msg.base_lon = 0.0699906441913;
    msg.base_time = 0.373303784716;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 45577U;
    tmp_msg_0.destination = 24304U;
    tmp_msg_0.timeout = 0.215454591791;
    IMC::WindSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.direction = 0.0154203487383;
    tmp_tmp_msg_0_0.speed = 0.332352534999;
    tmp_tmp_msg_0_0.turbulence = 0.397092905054;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.342280384093);
    msg.setSource(16889U);
    msg.setSourceEntity(186U);
    msg.setDestination(47176U);
    msg.setDestinationEntity(63U);
    msg.base_lat = 0.605033911252;
    msg.base_lon = 0.0303040679955;
    msg.base_time = 0.745341385052;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 62259U;
    tmp_msg_0.destination = 17853U;
    tmp_msg_0.timeout = 0.114174109917;
    IMC::LblRange tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 27U;
    tmp_tmp_msg_0_0.range = 0.101951858835;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.739090401016);
    msg.setSource(1504U);
    msg.setSourceEntity(92U);
    msg.setDestination(11130U);
    msg.setDestinationEntity(64U);
    msg.base_lat = 0.731010194267;
    msg.base_lon = 0.376367656849;
    msg.base_time = 0.767670945559;

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
    msg.setTimeStamp(0.945031894467);
    msg.setSource(52707U);
    msg.setSourceEntity(79U);
    msg.setDestination(11032U);
    msg.setDestinationEntity(17U);
    msg.base_lat = 0.388231071005;
    msg.base_lon = 0.748508459144;
    msg.base_time = 0.75181498108;
    const char tmp_msg_0[] = {23, 0, 90, 62, -25, -114, 113, 101, 2, -125, -42, 56, -80, -58, -95, 73, 82, -69, -90, -117, 21, -97, -33, -52, -44, -2, 95, 55, 81, -32, -28, 11, 108, -30, -96, 78, -100, -24, -41, 82, -104, 4, 24, 84, 86, -111, 12, -97, -117, -63, -93, -101, -83, 110, 118, -124, -114, 27, -44, -50, -8, 22, 65, -80, 41, -2, 46, -99, 125, 48, -55, 115, 90, 64, 41, -105, -100, -35, 33, -66, 19, -37, 44, -43, -122, 67, 59, -93, -73, -103, 102, -104, 49, 18, 83, 6, 10, -70, -105, -88, -55, 25, 91, 75, 105, 31, -27, 13, -111, -121, 88, -4, -110, 3, 64, -98, -30, 62, 85, -45, -105, -122, 81, -69, -12, 88, 93, -120, 121, 35, 41, 80, -44, 112, 45, 2, 50, -65, -24, -125, -43, -69, -72, -87, -63, 124, 103, -21, 8, -48, 84, -75, -42, -46, 29, -37, -10, 105, -43, 93, 62, 85, -26, -19, -48, -8, -44, 8, 100, 47, -104, 74, -29, 69, 45, 26, 85, -31, 94, -59, 37, -80, 32, 114, -88, -93, 92, -84, -100, -57, 120, 26, 123, 91, -43, 9, -47, -122, -115, -120, 83, -125, -124, 78, 78, 91, -123, -57, 72, 109, -21, 36, -3, 89, -17, -35, 60, -73, -119, -30, -60, 64, 61, -111, -29, 70, -71, -108, -16};
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
    msg.setTimeStamp(0.277275613614);
    msg.setSource(404U);
    msg.setSourceEntity(6U);
    msg.setDestination(21280U);
    msg.setDestinationEntity(209U);
    msg.base_lat = 0.384556238642;
    msg.base_lon = 0.701747947131;
    msg.base_time = 0.955606340004;
    const char tmp_msg_0[] = {-77, 32, 39, 18, -10, -51, -120, 116, 25, 61, 30, 121, 115, -91, -55, -115};
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
    msg.setTimeStamp(0.0075365479942);
    msg.setSource(48591U);
    msg.setSourceEntity(132U);
    msg.setDestination(13478U);
    msg.setDestinationEntity(103U);
    msg.base_lat = 0.401592382025;
    msg.base_lon = 0.0989883519497;
    msg.base_time = 0.265769485379;
    const char tmp_msg_0[] = {38, -58, -40, 94, 120, 91, -40, -9, 18, -14, -119, -120, -16, -118, 94, -74, 26, 91, 74, 76, 69, -22, 21, -46, 59, 83, 14, 105, -18, 65, 54, -61, 19, 75, -40, -115, -108, 125, -29, -75, 18, -3, 67, 29, 41, 35, -77, -22, -62, 39, -120, -23, 51, -77, 77, 2, -90, -49, 52, -32, -30, -31, -28, 86, -113, -67, -97, 121, 98, 24, -96, 111, -23, 79, -114, -125, -29, 48, 86, 28, -40, 126, 125, 60, 25, -75, 91, 33, 107, -91, -2, 80, 21, -98, 21, -104, 32, -108, 0, -87, -100, -60, 0, 72, -14, -104, 105};
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
    msg.setTimeStamp(0.584097369602);
    msg.setSource(49279U);
    msg.setSourceEntity(224U);
    msg.setDestination(64152U);
    msg.setDestinationEntity(22U);
    msg.sys_id = 11100U;
    msg.priority = 79;
    msg.x = -19498;
    msg.y = -28213;
    msg.z = 19136;
    msg.t = -7178;
    IMC::AirSaturation tmp_msg_0;
    tmp_msg_0.value = 0.358338552906;
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
    msg.setTimeStamp(0.119615390254);
    msg.setSource(49000U);
    msg.setSourceEntity(182U);
    msg.setDestination(38310U);
    msg.setDestinationEntity(207U);
    msg.sys_id = 48997U;
    msg.priority = 112;
    msg.x = 32649;
    msg.y = -10294;
    msg.z = 8485;
    msg.t = -18512;
    IMC::TransmissionRequest tmp_msg_0;
    tmp_msg_0.req_id = 22191U;
    tmp_msg_0.comm_mean = 126U;
    tmp_msg_0.destination.assign("PIQJTBCNOVYTPXEEOVZ");
    tmp_msg_0.deadline = 0.047506561236;
    tmp_msg_0.range = 0.244366878152;
    tmp_msg_0.data_mode = 76U;
    IMC::WindSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.direction = 0.247715619463;
    tmp_tmp_msg_0_0.speed = 0.49446990059;
    tmp_tmp_msg_0_0.turbulence = 0.655118816548;
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
    tmp_msg_0.txt_data.assign("LTRPBMAQEIVXQFFSZPXJTAWGLPXETLKVVANJWHSOVQPXDFTGHZHWIRSXKHJOXFCFYLHXNNEBCQBLTDZJUVAEHYYJSIGTZJRPIFCFTXWPDMNYEITOZWULUNUXNZMJKYU");
    const char tmp_tmp_msg_0_1[] = {-18, -123, 89, 105, -47, -7, -48, -91, -40, 74, -82, 0, -113, -47, 67, -18, -108, 27, 82, 53, -77, -96, -96, -79, -106, 31, -14, 53, -46, -13, 106, -61, -43, -80, -73, 2, 31, 110, -123, -58, -23, -73, 69, 61, -22, 15, 24, 71, 110, -20, -76, 80, -4, 6, -93, -92, -42, -3, 114, -24, 81, 31, 47, -40, 98, -122, -19, -10, 34, -49, 65, -99, 102, -102, 51, 73, -68, 46, -13, 86, -52, -25, -12, -69, 18, 20, 77, 124, -122, -109, 116, 8, -69, 17, -112, -74, 70, -89, -30, 115, -16, -24, -84, -107, 40, 55, -95, 119, 26, 9, 75, 74, 122, 12, -100, 116, 44, 73, -55, 35, 94, 74, 94, 64, -83, 10, 107, 91, -114, 110, -22, -127, -34, -103, -50, 89, 48, 122, 33, -37, 79, 25, -107, -111, -78, -69, 7, -85, -8, -5, 71, 76, -45, 107, -7, 110, -79, -66, -3, 107, 116, 54, -97, -127, -39, -6, -48, -5, -62, -34, -36, 16, 10, 57, -121, -88, -56, -46, -35, -96, 104, -75, 17, -9, -80, 114, 33, -51, -33, 62, 60, -5, 48, -18, 121, -37, -29, -34, -111, -45, 9, -99, -114, 32, -34, -103, 29, -97, 41, 73, 104, 123, 9, -60};
    tmp_msg_0.raw_data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
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
    msg.setTimeStamp(0.63887717029);
    msg.setSource(20288U);
    msg.setSourceEntity(128U);
    msg.setDestination(22506U);
    msg.setDestinationEntity(248U);
    msg.sys_id = 56798U;
    msg.priority = 123;
    msg.x = -27461;
    msg.y = 13127;
    msg.z = 31079;
    msg.t = -15238;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 7438U;
    tmp_msg_0.lat = 0.771362834098;
    tmp_msg_0.lon = 0.228663665465;
    tmp_msg_0.z = 0.940536670565;
    tmp_msg_0.z_units = 233U;
    tmp_msg_0.speed = 0.813762995231;
    tmp_msg_0.speed_units = 79U;
    tmp_msg_0.custom.assign("YTMNFKXHJDNXYUBYTAQYRKRTINBLIRYSVWWSOUOISYSFPMLZXVDAUUQCLEKGHNFIEEDNORQSVMDDJOTFOJFXAHDXZKULVZFPBMRHXPEKTPAXWZRZLKBRJCAHORTYDOOYUEJJSAXGGXWMTZNTHDJVVHMJCMQLQUGCGKWGAIROVCC");
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
    msg.setTimeStamp(0.788462228035);
    msg.setSource(30772U);
    msg.setSourceEntity(76U);
    msg.setDestination(49250U);
    msg.setDestinationEntity(182U);
    msg.req_id = 28881U;
    msg.type = 59U;
    msg.max_size = 28325U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.851069303602;
    tmp_msg_0.base_lon = 0.9850106869;
    tmp_msg_0.base_time = 0.88005825947;
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
    msg.setTimeStamp(0.578716029997);
    msg.setSource(12732U);
    msg.setSourceEntity(173U);
    msg.setDestination(14926U);
    msg.setDestinationEntity(203U);
    msg.req_id = 34278U;
    msg.type = 157U;
    msg.max_size = 39040U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.712553365776;
    tmp_msg_0.base_lon = 0.0588346297896;
    tmp_msg_0.base_time = 0.375222613021;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 1703U;
    tmp_tmp_msg_0_0.priority = 34;
    tmp_tmp_msg_0_0.x = -28682;
    tmp_tmp_msg_0_0.y = 5505;
    tmp_tmp_msg_0_0.z = -10190;
    tmp_tmp_msg_0_0.t = -7130;
    IMC::AnnounceService tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.service.assign("CQUVZLNGKZTECSISJIDLHDLEKJPJZLSIABRSHAMNAUVSWWGGKJZXMQTXBTKFRRYGMGPTKOXLXESRLAUVQGOLVFPYOYMKWAFSXZNOVHDZTEUWKMGSCCEKEQBONNPJPAVDFEQFHYMALSCBFENPGIOZPPIGUYYWQATHCWCMDYLVMDMVTTNQIWHZNRAHPOIGUORTSXKHRUQJDDNWCZDMQJI");
    tmp_tmp_tmp_msg_0_0_0.service_type = 84U;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.720490556041);
    msg.setSource(62615U);
    msg.setSourceEntity(119U);
    msg.setDestination(12265U);
    msg.setDestinationEntity(126U);
    msg.req_id = 10248U;
    msg.type = 227U;
    msg.max_size = 48141U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.989622794165;
    tmp_msg_0.base_lon = 0.365636305426;
    tmp_msg_0.base_time = 0.337676094783;
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
    msg.setTimeStamp(0.157268811302);
    msg.setSource(48515U);
    msg.setSourceEntity(28U);
    msg.setDestination(32435U);
    msg.setDestinationEntity(32U);
    msg.original_source = 16471U;
    msg.destination = 61782U;
    msg.timeout = 0.333378014563;
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("ALDMDWXANSVTFPKYVJQBCVXKPWSZNAXPXOXDLXIOATLDTCGNRHBQBCKJQKYPCBFANHMTCBQVJFZRWQYMZRHG");
    tmp_msg_0.visibility.assign("LCWCEDYOGEKFATXHHKKOUPWHMDQBLCFQFFRDZPNUEJZGUNSMYWNHMLWQLUNMQHGCBOZRFFYNXIQOYCLRGUHTRWJJVTBHSYAHTPIOFPPJSUIQOJZELCHSPSIACEMDSVBIAQGJXRBKOENIWKFZNGQJKETTTBUVDNAGYZBYZDMVJXQDSDMFVZARSTLYJCBWENXVULTMMRCVFXIZGIVJKPGNQKAWD");
    tmp_msg_0.scope.assign("WHEUDPLXPQWVOILZZSQOBTRUPUNXWNNVGBMTIZHDNZQOUNRXQKSUPTWCEWJKAHHTSW");
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
    msg.setTimeStamp(0.420235351048);
    msg.setSource(20889U);
    msg.setSourceEntity(136U);
    msg.setDestination(47192U);
    msg.setDestinationEntity(196U);
    msg.original_source = 14523U;
    msg.destination = 33525U;
    msg.timeout = 0.793784062125;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.0598410884334;
    tmp_msg_0.lon = 0.0708623041316;
    tmp_msg_0.speed = 0.510518230742;
    tmp_msg_0.speed_units = 166U;
    tmp_msg_0.duration = 55904U;
    tmp_msg_0.sys_a = 13345U;
    tmp_msg_0.sys_b = 51088U;
    tmp_msg_0.move_threshold = 0.987894652004;
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
    msg.setTimeStamp(0.897971838509);
    msg.setSource(20695U);
    msg.setSourceEntity(179U);
    msg.setDestination(35004U);
    msg.setDestinationEntity(132U);
    msg.original_source = 25148U;
    msg.destination = 57739U;
    msg.timeout = 0.707008869368;
    IMC::ApmStatus tmp_msg_0;
    tmp_msg_0.severity = 84U;
    tmp_msg_0.text.assign("HPQJEJNJQHQWPPDPSGZHPTRQFFKKKLHGOBWUBLESVOPKFPBQQLYJDZSXVIBQBKLFMCNIEGKGUAXDSYYZRMOTYLKWXVIVUCFZWJNSKZVIXWNZOVOEXTJYMFZUEJRRKGMDUSSSRCFZUIIPTHOUIGYNNHCCWXYMDETVCXNCNEVMBLWTVBGMBZXRAM");
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
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.307955825377);
    msg.setSource(56276U);
    msg.setSourceEntity(37U);
    msg.setDestination(51232U);
    msg.setDestinationEntity(170U);
    msg.type = 151U;
    msg.comm_interface = 4741U;
    msg.model = 64540U;
    msg.list.assign("XBIGPRSANNTDMIZEPJSDXGNTTFLRKJMRYFGYEJIMU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.167656326824);
    msg.setSource(10634U);
    msg.setSourceEntity(226U);
    msg.setDestination(21666U);
    msg.setDestinationEntity(34U);
    msg.type = 85U;
    msg.comm_interface = 14208U;
    msg.model = 35944U;
    msg.list.assign("VIDZOTPFORTTZZWAJTLVKFABZHCSJOOAFPKVDFWZEYPYJYXIKHUDLIIBKTMIYGQRGKUNPYRLHESMLLFMOSQJHCUXQJKZNGTJLAJSQWWLUJSAEHXISUYXQLLNBURQOUDVWPUN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.655776769396);
    msg.setSource(42880U);
    msg.setSourceEntity(35U);
    msg.setDestination(26264U);
    msg.setDestinationEntity(230U);
    msg.type = 44U;
    msg.comm_interface = 21572U;
    msg.model = 34288U;
    msg.list.assign("UDGKAZOXAJVXYATPLPOLEDNVCOKCKEQFEXMCJFNAWACQIVLPSONSNGDYYGMITVLLIWFHMXQCMBIYRUUYGFHUZKGPMYNJPRGGEONVBDNFXAGARXWSPUQOEGKABAQNQUQPSEHCJTJBXSAKXSONZIVRWFQFLZTHJRCIBOSRLCDRZWTIUVEMZPTTHJYKHSOVZFEODLQDPKYIWFWMJVRUBSKHYJWNBUTEWUVFDBHRMX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.103085545713);
    msg.setSource(36474U);
    msg.setSourceEntity(65U);
    msg.setDestination(46231U);
    msg.setDestinationEntity(73U);
    msg.type = 250U;
    msg.req_id = 1593577517U;
    msg.ttl = 56039U;
    msg.code = 78U;
    msg.destination.assign("KMCQRNJZOECU");
    msg.source.assign("UWYYYUHEKCGYXRCAGYQGTJKVNCWMVEACNTAOEJWIBPPJJWDMFMHPTFZBDWXKXXNEOOZOWLEHSORMMEQTFFQSUPDPCIUGXQVRQQKAPABGPLENSKXMUYHCELIFOHLPFURUSTBRKGEQHUSYBWNFRGDTQLSORVNVRXKFHVIIZDSHYISGZJSBVGRLOZYZDVPTWZDVEJOTUNMJMIFJHQMICIBFBYLADTBDWJ");
    msg.acknowledge = 205U;
    msg.status = 16U;
    const char tmp_msg_0[] = {-95, 53, -87, -103, -29, 47, 11, 10, -122, -66, 61, -88, 116, 93, 52, 121, -78, 117, -15, 22, -111, -39, -105, -82, 91, -63, 4, 123, -20, -105, -81, 3, -124};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.321530507972);
    msg.setSource(37138U);
    msg.setSourceEntity(201U);
    msg.setDestination(31983U);
    msg.setDestinationEntity(157U);
    msg.type = 189U;
    msg.req_id = 3270616234U;
    msg.ttl = 34863U;
    msg.code = 249U;
    msg.destination.assign("PZJWLAIVSQHHHKAMWZXRKEYJBAUJNZCLVZGUWRVKKCDABFQQCSKGZOIBCETAXQYDSGRAXAPDOVXGCJFIRHEGEJJIDNFHXHOCKTZNESPLSRFAIBRSPPFMBJASDLOEJBWKVDFOXTBWVXFFQMKPRCIDWGPLUMTRWTBOOWZYVMIUDNYDCGHRJZMJXWHZVGQPULVKWTNYSMLNEEIYXQSMNLTRBVQLAUGBTTYSCHZ");
    msg.source.assign("WUFPYXRKMQEGKWHKJKLMJVUSAITSYBBNMGQAJCZCNCIIYDAGBCRFFFGLEQRYAZJWOVUOFBVFBHLOBORFISSQNUTPQHYEIZXAZYLDPCXYTYZJDXVOXSPUPRHWBUUKYQHDHCSSNTRFLUMNZGVOOBMWRZFLRCKVRTZTWCCEJIEVDMXDQVAFNVMPBEEKDOSNXPMHIQKBWPXLWZYPNLMUZAKPSIOJNTLDILDWHCOXEQTHTAVMKJJGAGGQHSDGTIE");
    msg.acknowledge = 33U;
    msg.status = 158U;
    const char tmp_msg_0[] = {-59, 119, 76, 50, -113, 46, -11, -99, 113, 74, 17, 123, -47, 56, 57, -72, -95, -57, 91, 15, 94, -85, -39, 5, 126, 91, -1, 110, -30, -66, 76, 14, 65, 70, 98, -100, -90};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.914180818647);
    msg.setSource(31526U);
    msg.setSourceEntity(170U);
    msg.setDestination(31970U);
    msg.setDestinationEntity(147U);
    msg.type = 194U;
    msg.req_id = 85344327U;
    msg.ttl = 50925U;
    msg.code = 88U;
    msg.destination.assign("RLMZHEDCBMGFTKWNEVJXYBVOERODPXLAYXNHRQZMQJSZETAHLQGRMOSCKIXJUEPSEGDBHIXAQFIRBUNQVRGUWWEQGQSHWUKCTWXUWHYMJEZNCMYPOIQATOLSNRTYOQZQNIFVKHBJVOYNPOFCBSIXUFPFXZFNITVWTTL");
    msg.source.assign("RSIETNOTFLHSVUNJXHSDVTOZIOQOWKRJQRYUFMDWAVPSIPLWMLCYUGVXKLVOQIJBUBSEBDMTUWJJNNGQZTNPVEYMTSYDPVHBGXBLEHRAKPRKAGVCUNKYXKFDLKHGGDGUPYHHUMCMRYCCOJTJEHWBDFJACXJYZQCFAJFDRWDXIUQWMHMIRTQSMBPPTSPAFOUBNFLTNYAWOOANOLMIBZLGHLENV");
    msg.acknowledge = 20U;
    msg.status = 41U;
    const char tmp_msg_0[] = {-4, 18, -86, 51, -2, -27, -59, -58, -85, 116, 36, -73, 29, 63, -41, 29, -77, 97, -95, -61, 96, 107, 103, 1, -82, -127, 61, 18, -116, -47, -115, 9, -113, -74, -124, -1, 53, -11, -86, -73, 52, 118, -100, 52, 24, -67, -108, -83, -29, 9, -122, -6, -75, 75, 21, -122, 5, 41, -70, -47, -48, 122, 48, 93, 103, 26, 13};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #2", msg == *msg_d);
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
    msg.setTimeStamp(0.964709729612);
    msg.setSource(34514U);
    msg.setSourceEntity(27U);
    msg.setDestination(20608U);
    msg.setDestinationEntity(62U);
    msg.id = 160U;
    msg.range = 0.543337836612;

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
    msg.setTimeStamp(0.00935826313821);
    msg.setSource(22975U);
    msg.setSourceEntity(182U);
    msg.setDestination(25872U);
    msg.setDestinationEntity(46U);
    msg.id = 91U;
    msg.range = 0.0452290390823;

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
    msg.setTimeStamp(0.631805998238);
    msg.setSource(56961U);
    msg.setSourceEntity(57U);
    msg.setDestination(30019U);
    msg.setDestinationEntity(48U);
    msg.id = 213U;
    msg.range = 0.570281289696;

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
    msg.setTimeStamp(0.307169163035);
    msg.setSource(55527U);
    msg.setSourceEntity(35U);
    msg.setDestination(36586U);
    msg.setDestinationEntity(56U);
    msg.beacon.assign("PDTOATAIDHUHLCPLEPTSILEAJNU");
    msg.lat = 0.892522955827;
    msg.lon = 0.933146357424;
    msg.depth = 0.671694839135;
    msg.query_channel = 192U;
    msg.reply_channel = 123U;
    msg.transponder_delay = 208U;

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
    msg.setTimeStamp(0.848476842685);
    msg.setSource(29571U);
    msg.setSourceEntity(185U);
    msg.setDestination(968U);
    msg.setDestinationEntity(79U);
    msg.beacon.assign("MODCXRCDFSVHBNITGXJIRGHMPEFTTPXHLAIWDDCOKJZSCXOQZEUJMYLKWKRGWHOUKCXQGJXRPQVEJAFZRGPTNNNTJILSWAEQKEUUHGZQWFMUDREAIVBPLHIVDOYRDCLRAGQNXBAMJEMZXSKLBYWENTWAXQGEZMSNTVJSOYYRHHZVLFNZPIPCQUUKMFOPKBSDIBBVFLKAAFGICQRNHLUIOLSZMCWGYDPUWOATZQYUXYHVCTJSSNMJBFVWEPY");
    msg.lat = 0.428325683781;
    msg.lon = 0.245641824103;
    msg.depth = 0.19549689881;
    msg.query_channel = 102U;
    msg.reply_channel = 199U;
    msg.transponder_delay = 199U;

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
    msg.setTimeStamp(0.558481901298);
    msg.setSource(49414U);
    msg.setSourceEntity(134U);
    msg.setDestination(60034U);
    msg.setDestinationEntity(53U);
    msg.beacon.assign("KGPDJQQNDYGUFXJJBZJZMXAOOALQVEGAOKVRYQGZNCCNPPTXCABOCHJIBCTOYXYPWZVPELFMAEYMXOZDWLJYMQAUTIVANNLNFEELOULIRGOXPWWGRZEKKYIC");
    msg.lat = 0.0926491466468;
    msg.lon = 0.132579655449;
    msg.depth = 0.38058295054;
    msg.query_channel = 106U;
    msg.reply_channel = 129U;
    msg.transponder_delay = 232U;

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
    msg.setTimeStamp(0.464436730047);
    msg.setSource(56332U);
    msg.setSourceEntity(18U);
    msg.setDestination(31536U);
    msg.setDestinationEntity(14U);
    msg.op = 52U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XHLCMMDVEDENBODXQLKXH");
    tmp_msg_0.lat = 0.634162545787;
    tmp_msg_0.lon = 0.892238392104;
    tmp_msg_0.depth = 0.071434500708;
    tmp_msg_0.query_channel = 146U;
    tmp_msg_0.reply_channel = 187U;
    tmp_msg_0.transponder_delay = 150U;
    msg.beacons.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.289103894397);
    msg.setSource(20919U);
    msg.setSourceEntity(58U);
    msg.setDestination(63876U);
    msg.setDestinationEntity(229U);
    msg.op = 52U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("COMAJQVUCWRNDIVYLKFEHRQODCLSPYQINWFFVRRNSPMBSFXNVIVAFOWVFUEGQSMOTPCDWWRWKBAMLUIZCQJKZOPG");
    tmp_msg_0.lat = 0.0922367712662;
    tmp_msg_0.lon = 0.0240942933236;
    tmp_msg_0.depth = 0.643169606189;
    tmp_msg_0.query_channel = 31U;
    tmp_msg_0.reply_channel = 26U;
    tmp_msg_0.transponder_delay = 254U;
    msg.beacons.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.817550026683);
    msg.setSource(22205U);
    msg.setSourceEntity(3U);
    msg.setDestination(53891U);
    msg.setDestinationEntity(58U);
    msg.op = 150U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LWNQCKQUHMWCZSNBOXKTIQWTNYKBOSMPQDNIBDQEPHOXXAKZKSLIB");
    tmp_msg_0.lat = 0.404222206788;
    tmp_msg_0.lon = 0.431684566232;
    tmp_msg_0.depth = 0.758141775359;
    tmp_msg_0.query_channel = 43U;
    tmp_msg_0.reply_channel = 167U;
    tmp_msg_0.transponder_delay = 125U;
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
    msg.setTimeStamp(0.180734905068);
    msg.setSource(51467U);
    msg.setSourceEntity(83U);
    msg.setDestination(37144U);
    msg.setDestinationEntity(217U);
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("ZVRMOGTQDIBWSSHHKGIICMGQFWWWHIAGUXDZKFLOKRXNMPVBMETAWNQVQMEUTYZSPMHYCQUIDTYKLNWJEFXIFAKFBTBEDQXOEPAOCYIUJVVYSOYCXZUUAWTPELPNXZHDCVTQRRMHRWGEFODBDOZK");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("SBGIHCSASOXOOMSNTYRGAYFKYAAKORPDXOXOMRDKHZGKMWPENTKGRKYKCVJVTANUHFXLVYSATDOBBEZLDWUFGRLOOTVWNPQBZJFHZCCVGPZTCRTXIZDXIPSJQBMAJLLVCFWFUFIZDIIWLUNCULIYWLFPBMYACPVWJEDJHBZYJQQWQBZPKISYDHRBPGIUPDWMLNUREHMVXDAESZOJEEERAXJKYMJSKTIXSFGNURQCNMGVHNEBUHMUQF");
    tmp_tmp_msg_0_0.predicate.assign("NEWNUXAYIZNFSRLBLVPPKATQDGUHUCIFGTSGIVUXSGFCJOGCWWBMDTXSPIOLKSUSHFQXILPXGEGXPJRQPHRNFJVCCARAPMAHBBVXQHHJZZJJZDJKLFYOADZFTCCKIKAZUYOHDFUYFWQTOEYJDVOEDNHARLXYEZOYVEJBIEHNZBVRWLEMBVMOTLGHZARQDENCVGNDKSBIYLMIKZWRXMUQKBNMWSNMIQYWCPUMRTMPVTCYSQG");
    tmp_msg_0.tokens.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.311104598406);
    msg.setSource(2846U);
    msg.setSourceEntity(175U);
    msg.setDestination(31872U);
    msg.setDestinationEntity(79U);
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 37U;
    tmp_msg_0.mode.assign("BLKGOBUNSHURNYICIQLDEBIZDPOR");
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
    msg.setTimeStamp(0.551289034389);
    msg.setSource(22985U);
    msg.setSourceEntity(246U);
    msg.setDestination(574U);
    msg.setDestinationEntity(49U);
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.60539331799;
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
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.070732884911);
    msg.setSource(47395U);
    msg.setSourceEntity(185U);
    msg.setDestination(11903U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.142250047016;
    msg.lon = 0.668775183263;
    msg.depth = 0.200474244161;
    msg.sentence.assign("BPZWJIDQQXZHYWLXOSEEJJIPFX");
    msg.txtime = 0.193332641013;
    msg.modem_type.assign("XDIZFCMSVNGWWLGXEJUENVESAIWRKF");
    msg.sys_src.assign("CFBXTIRYOIQIIBDVQLHXNXBWXIUZLYDIQMWNLUCKACALPUMZANNCFOQTERPJECFKLKGDLQDGVYOTAXCQVDOTLRTPGFWNYMWBHKHIAMHKJXZJNSSUYFGRKUIZXBUOAKFCYUXLNRTYVNZVMDAVSWSEDXUMBCJDQBOHFIQHYOJSKVEFREGSGQPVNSGSKTAPJBDLIVZWUREPPNZOMWMEJHJZHTSMBEOKRPUSEQJC");
    msg.seq = 24623U;
    msg.sys_dst.assign("SKOSDONWALPNRYLMHDNBKFHUUQHBAJXEWBPIXIROCOOXVGQAFFISNZ");
    msg.flags = 245U;
    const char tmp_msg_0[] = {-24, -50, -123, 14, -120, -64, 5, -54, 58, 44, 112, -100, -20, 122, 57, -117, 59, -25, -16, -36, -35, -44, -10, 51, -46, -52, -21, 16, 106, 86, 25, 74, -32, 43, -23, -73, 77, -14, -6, -120, 67, -21, -83, -71, 74, -74, 100, -75, 27, -67, 63, 3, 64, -72, -70, 107, -123, -95, -50, -108, -84, 115, 27, 64, -108, 44, 82, -89, 21, 73, -37, 19, -118, -115, -84, 50, 18, 111, 6, -77, -97, -99, -81, -7, 4, 13, 2, 25, 9, 75, -10, -7, -37, 87, -97, 9, -28, -84, 9, -7, 96, -46, -7, -22, 28, 58, -6, -97, 113, 22, -35, -53, 3, 92, 46, -128, -71, -72, -109, 77, 46, -78};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.757104990267);
    msg.setSource(38050U);
    msg.setSourceEntity(10U);
    msg.setDestination(58082U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.910929080367;
    msg.lon = 0.688357607344;
    msg.depth = 0.571895825004;
    msg.sentence.assign("NZTBATSUJQZRYZADVOHHHLVOUVOMHHBUQHZGSRVAGQEGRPQLFWGDJYLFANJXGWCHPIMG");
    msg.txtime = 0.985241734292;
    msg.modem_type.assign("GVALAZSBWIINZKGCRSRUCWYJHNAYPJIYHITVRGAZALLCUJHOHCEBRWRNVDIGOVFVRJHPQVJQJCINPYMNPIEFZGFEOXPQMFEZDDMGRPALNDYBMNFQWMXXGMDSYCTTSODHJTUZSVUYFSBBUPLEDPKXIKYSATCYTEXXHWFFMGCYBKEWRXQRUQLAKWBJOWJQHVACEWOFOHBPXZVQUOUSSGIGLQEDNKIQNOBZPOZBZJNCMXXWMEMKLTTTKTFHLDUUDL");
    msg.sys_src.assign("QSHYLPEZPOUIDVYYZDUDXDVWBGXDCVCXWRBIRIPZNYYCZOCMGGULROQNEATFIPVJTKU");
    msg.seq = 19315U;
    msg.sys_dst.assign("HRGLEPSCIRCMPPNXIZYLKBJJUIMOBNXDGHAPLNTDRKTCEPHPUPTVHLFPMRNSOKJKAEMZDLLRJTMJYWOMDYHZNAIZXDAJVISIUFDJGVIRSOLDQYQSOC");
    msg.flags = 238U;
    const char tmp_msg_0[] = {30, 13, -39, -19, 87, 15, 85, -114, -33, -109, -59, -44, -19, 39, -59, 47, -89, -120, -89, 122, -81, -106, 24, -76, -40, 75, -117, -119, -82, -94, 100, -3, -5, 59, 37, -80, 57, 32, -86, 83, 66, 113, -122, -42, 123, 0, 49, -12, 67, -56, -9, -91, -2, 125, -44, -111, -54, 53, 18, -85, -7, -7, 55, 48, -58, 27, 80, 113, 101, 50, 106, 39, 10, -97, -119, -105, -90, 101, 108, 41, 52, 12, 72, 106, 103, 47};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.599957048659);
    msg.setSource(4673U);
    msg.setSourceEntity(88U);
    msg.setDestination(36125U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.664879603499;
    msg.lon = 0.480345984023;
    msg.depth = 0.981612746614;
    msg.sentence.assign("BOJOUZTUZMWDMMJZQVEFDGWIPVKWVGJFTDRZORXEICGPTMANJPHXAQCZPIMVCACASNYQQSTCHHVXSWCZFAQQRHHDTABFDALUGAUPCKIVBCASKUKNDTPWDPEEWRVJXGTJYRPFUUOOWYJBXBMLQCEZELMYDONBGQIIUZFKHYKWNSIJSNVYJHEBROIKSPNIEGYKMVXILTSEFHODPGEYLUYRWXMNWAYTFGLFHFH");
    msg.txtime = 0.377432938783;
    msg.modem_type.assign("RXQUPUSBMQHPOLJBAJUIXDYZQXJOXZQKPKPPNMSVRVATEITFOEGDTDSYDFCDHESOPSFTAXLNJUEJRNVVMWLTBMUHWPICMXVWEDEMJHFADYNZUGYVWOYFZDMIDCVSDHZEITCHKIFZIPXCUQNBTYTVZABLRWWYVIBLEJJ");
    msg.sys_src.assign("ZEURBHKSBSTOPHOIRGSIWCEMQGRATIQFNLBXGDEXXFBPZVJVYVGDDQPUOSSXHWPEYQANB");
    msg.seq = 42166U;
    msg.sys_dst.assign("GNHTKZNUYRKHMXYWNDFXKLPSNWHCBJUBMMOEVGTXVFQLAAHSJUWLFPPSKTQNOZIBIYEQKFLGZHWAREPBQBZLUOR");
    msg.flags = 150U;
    const char tmp_msg_0[] = {28, 17, -20, -85, 124, 81, -122, 65, 65, -77, -123, -38, -51, -5, 7, -74, 24, -62, 83, -1, 89, 29, -72, -99, 30, -77, 92, 74, -19, 61, -45, 23, -67, 109, -49, -97, 11, -71, 80, 84, -123, 7, 31, -89, -90, -102, 26, -117, 57, 73, -58, 31, 90, 55, 45, -5, 11, -101, -40, 76, 19, -50, -108, 34, 106, -37, 30, 41, 64, -21, -7, -32, -75, -65, -77, -102, 93, -124, 114, -5};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #2", msg == *msg_d);
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
    msg.setTimeStamp(0.6450326456);
    msg.setSource(37397U);
    msg.setSourceEntity(56U);
    msg.setDestination(6849U);
    msg.setDestinationEntity(163U);
    msg.op = 46U;
    msg.system.assign("BDHXKFMCZUQRKKLOLRFMBUTFOEDSLRARFPRHHUIXMJDOQRWHYJCAOBVILFQQNTIXDAPORIVPJGWSAKUXSQXZOSDXJZEBOFVDGQBWNEVCELHGEICYIISPSIPJPPRMTAJCLWAZYBQQDGKCNVQGFGEVBNWLJLVAGZNHJESBTFWECXKRWEYMXTZVK");
    msg.range = 0.83530587202;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 6800U;
    tmp_msg_0.lat = 0.765955430157;
    tmp_msg_0.lon = 0.541955096832;
    tmp_msg_0.z = 0.117265482964;
    tmp_msg_0.z_units = 250U;
    tmp_msg_0.speed = 0.476761791972;
    tmp_msg_0.speed_units = 9U;
    tmp_msg_0.roll = 0.268108323688;
    tmp_msg_0.pitch = 0.213244218252;
    tmp_msg_0.yaw = 0.286959470299;
    tmp_msg_0.custom.assign("IISLWZSGLYLIEXIIVEBYKEHQTLKICPDWSTEWLZRTYMXNEAFDPVISQHNIDUZSUAXYPBLMGZGLSQSDVUKWBXKOHXEPMJHSCDNKGMYEWOWECTROONSKHCWCNGQVFFNOJMRAFXPDTUADFLAGJUEQBBAWFRMZFCOUWTVQHDUFRDKYUGQC");
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
    msg.setTimeStamp(0.779437523941);
    msg.setSource(10076U);
    msg.setSourceEntity(153U);
    msg.setDestination(3092U);
    msg.setDestinationEntity(18U);
    msg.op = 69U;
    msg.system.assign("DNQSTUQYAJMHYNPRGOLTLRKOLQKVKAHRFRYTYKJKNEFRGSFCOZUTMWTOMXPXUDRBNPQVJNBAZRZPUG");
    msg.range = 0.0758505176277;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GADBVGCJUSTDHIGFOEMNMXJKRXRVCFYJNNQRQMBFMYRKZZLQQPAASAOSDSPHWBZRBLAWVLYZVGGPRGASNSERXQFRQXKAIVKEXHPPWNRIELWIBEFIOYCDTLJTVODUGXEEYUWHCTJMFTHBFTJJWAFNEZJHWQTNXLKRUHNFPWXWMILUVSUGIDIUVOKZIKQWTPPDSYBEBYNLMQZXCGTSOEXKGMCAYUJOOBHS");
    tmp_msg_0.lat = 0.469597941542;
    tmp_msg_0.lon = 0.0715554471718;
    tmp_msg_0.depth = 0.524980057796;
    tmp_msg_0.query_channel = 100U;
    tmp_msg_0.reply_channel = 176U;
    tmp_msg_0.transponder_delay = 59U;
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
    msg.setTimeStamp(0.31666660285);
    msg.setSource(31136U);
    msg.setSourceEntity(38U);
    msg.setDestination(26224U);
    msg.setDestinationEntity(220U);
    msg.op = 126U;
    msg.system.assign("GIOJREVTYUSAOLGQYJIBDNQLDKPBOVZOPVPMAWKOMWUJCNYUEUZOIFEPVBAYNGISZEWIFBQPOIHFJXVUUBCTVQWZGZJHFMLZWCLDGYANGFWRR");
    msg.range = 0.45294192759;
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.983910298376;
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
    msg.setTimeStamp(0.448487309007);
    msg.setSource(26353U);
    msg.setSourceEntity(143U);
    msg.setDestination(7903U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.723738117784);
    msg.setSource(60552U);
    msg.setSourceEntity(130U);
    msg.setDestination(58513U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.171826510036);
    msg.setSource(54248U);
    msg.setSourceEntity(158U);
    msg.setDestination(42742U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.963392672276);
    msg.setSource(37595U);
    msg.setSourceEntity(218U);
    msg.setDestination(25616U);
    msg.setDestinationEntity(248U);
    msg.list.assign("RSHLUBXESKRTYYT");

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
    msg.setTimeStamp(0.660345145167);
    msg.setSource(43568U);
    msg.setSourceEntity(108U);
    msg.setDestination(5306U);
    msg.setDestinationEntity(250U);
    msg.list.assign("PBSPKQYXOHUUGQSBFAUWIQNDJHVOGRACGFXLTXOPCZXFIB");

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
    msg.setTimeStamp(0.175357843307);
    msg.setSource(63210U);
    msg.setSourceEntity(4U);
    msg.setDestination(52421U);
    msg.setDestinationEntity(128U);
    msg.list.assign("SVWWVRZKCRTZ");

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
    msg.setTimeStamp(0.623150150029);
    msg.setSource(63051U);
    msg.setSourceEntity(207U);
    msg.setDestination(63336U);
    msg.setDestinationEntity(135U);
    msg.peer.assign("FVCAAZOOINXVLHWEENCOWTVLKQFYYMZOFBCUDVSJWWBBRUNOMGXTGXVWQNSEJNIWUISPCBEETQKZXORKYDYWAATHRPYNKFWZNSSZJYUKLLVUERFGRMOIXVZRUQZCSARHPHQZDIEMNYAJYHBXLIAHGHEBMBVIKAKWXJJQLECPSCCJVPDQUTQLYBDTOTIMZBGOKIOISKQTDXTRHPKSUPDGJRXLJUHGDCUFHFAGCLBNM");
    msg.rssi = 0.51582488236;
    msg.integrity = 36443U;

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
    msg.setTimeStamp(0.537244393623);
    msg.setSource(54110U);
    msg.setSourceEntity(29U);
    msg.setDestination(16506U);
    msg.setDestinationEntity(15U);
    msg.peer.assign("VMZQELLQBBQDIBVCRNHOCMVJXLBUECAXVNUGLTYNHFPLWUHTXPSJUUYQCYGBILVMOTNGGYKZQHYWRPEGWWNLZZOYQZPPHJEMNNAROIJFWUDGZCTKMMXSUXYDFIKODVSVCOFKBYHJTSNEERNYDMPPVDJHVZBIMKQANXJUBLZHXCKEXRAOPFKRAROPW");
    msg.rssi = 0.619575804501;
    msg.integrity = 52302U;

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
    msg.setTimeStamp(0.588164943685);
    msg.setSource(32494U);
    msg.setSourceEntity(202U);
    msg.setDestination(51247U);
    msg.setDestinationEntity(248U);
    msg.peer.assign("ESUEYUYJVZSKVXOIWZZCHRHEPLXLLLMTDAHFRWTBURMEMTQRCGORLKUUZJDJSEVYIAMVKILWSGOFMVMCPIQBAXOXHTPGDQQGISENAFIFHJMBRJNNHDAKVNPRWIDMGPIRTYIDYPQNCLDLODJNFHPKFZAFS");
    msg.rssi = 0.343684044437;
    msg.integrity = 10287U;

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
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.978619612027);
    msg.setSource(64711U);
    msg.setSourceEntity(169U);
    msg.setDestination(35557U);
    msg.setDestinationEntity(220U);
    msg.req_id = 55299U;
    msg.destination.assign("KRLOZRVSTBEVQVAAYAOPDRPNMJJUXJPAFEOPIHGDTTSXQFWEBQKKGUQRLOUFGOQFLTPRSWYXTBSVDOOKUIUWXMNVJSHWEBGNABGCNAJRHWZSCDDORWZPDKCWSQBCKXXNIXFYYKGLYCHTJXHHEVHJLTUYGWCRQUHZQMIENGCKBZIMFLBFNPEZCNJXVLDHLMULIPAMTIUQXBCJKSSFDZKMZGEIIIPRUDOAVEYSOMNRVWVQAPGJTNZ");
    msg.timeout = 0.240881412857;
    msg.range = 0.491465131842;
    msg.type = 244U;
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 28U;
    tmp_msg_0.zoom = 102U;
    tmp_msg_0.action = 35U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.0733212308804);
    msg.setSource(18236U);
    msg.setSourceEntity(65U);
    msg.setDestination(25612U);
    msg.setDestinationEntity(117U);
    msg.req_id = 8999U;
    msg.destination.assign("GFEKDOIMDMXMGGJHUEJLCRYIUFQZFCBAEAFTGIXPZHUBLYDBBXUGNIGXWVGANXDNFVOOZMOLNFKYYZQZAWEIIIJSZHKSSDDPWUORRTNTAVU");
    msg.timeout = 0.731133635196;
    msg.range = 0.58955822445;
    msg.type = 117U;
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("HPRSDZYKSWSHJTCYOECBMXJWQFHDJAFKCBMPDCZJTAGTACZQXFEKRFLJFBABURJKII");
    tmp_tmp_msg_0_0.lat = 0.794623743637;
    tmp_tmp_msg_0_0.lon = 0.583555934281;
    tmp_tmp_msg_0_0.depth = 0.309175662383;
    tmp_tmp_msg_0_0.query_channel = 158U;
    tmp_tmp_msg_0_0.reply_channel = 138U;
    tmp_tmp_msg_0_0.transponder_delay = 117U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.269987252894;
    tmp_msg_0.y = 0.0534383623384;
    tmp_msg_0.var_x = 0.394644145383;
    tmp_msg_0.var_y = 0.901048122823;
    tmp_msg_0.distance = 0.873401999114;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.485655505358);
    msg.setSource(28401U);
    msg.setSourceEntity(162U);
    msg.setDestination(58078U);
    msg.setDestinationEntity(119U);
    msg.req_id = 17036U;
    msg.destination.assign("KHGXHMURZLEWGNGIBUVHRMJPKWRNYGPSFLUDJXMNVBTIKCBZOYKRBSDXQJIJOXGLAONHLRKZSATUISHFPFXOIDMQEDNYYJCKVEPGPPIPGHLZGSVDFFHQMTQDYFKNWVZTYIQWRLBECKLELQXCUWCQVCS");
    msg.timeout = 0.865347568774;
    msg.range = 0.299096747718;
    msg.type = 86U;
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("FHBQBGLXZIUGMJMTSNPOYMWREEPBGSSGWZACRLXNPITHCDWXYDLQGQNIHOJTZ");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.63675328419);
    msg.setSource(51417U);
    msg.setSourceEntity(158U);
    msg.setDestination(7394U);
    msg.setDestinationEntity(149U);
    msg.req_id = 11461U;
    msg.type = 202U;
    msg.status = 221U;
    msg.info.assign("DBPMIMPUAIOPNVFYWHZXXBWUWEVNLJEQCNALQOYDVEJRDYTNVZUUQKCAMPKPVETDVGVZXFSAESD");
    msg.range = 0.616945809801;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.433928090236);
    msg.setSource(38902U);
    msg.setSourceEntity(9U);
    msg.setDestination(27219U);
    msg.setDestinationEntity(139U);
    msg.req_id = 2010U;
    msg.type = 184U;
    msg.status = 248U;
    msg.info.assign("OBSNKOELPKBOOFVTQWHNWSICNYIIDKPKLODCQQWLUDHSFZKTOLEFYYUTKTAJCURNJHCXVXAFBKVTAYWEEGSUZNBUDQMRMFJSXYIVQKAZMZRRQMTMTU");
    msg.range = 0.300530946397;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.244783271932);
    msg.setSource(50840U);
    msg.setSourceEntity(197U);
    msg.setDestination(12U);
    msg.setDestinationEntity(152U);
    msg.req_id = 42762U;
    msg.type = 145U;
    msg.status = 215U;
    msg.info.assign("TDORPZLQYTYBFNNKNDWNJMKCCRSTXHLZSHOXAAJGQITLVKFEEFMYBZAGYBMQRXFEJZCWGQTRUIULCMJPNEPWUFDDGVMJKPADU");
    msg.range = 0.189415619359;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #2", msg == *msg_d);
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
    msg.setTimeStamp(0.33512255345);
    msg.setSource(15959U);
    msg.setSourceEntity(86U);
    msg.setDestination(8003U);
    msg.setDestinationEntity(150U);
    msg.value = -17224;

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
    msg.setTimeStamp(0.325439630399);
    msg.setSource(47948U);
    msg.setSourceEntity(82U);
    msg.setDestination(59649U);
    msg.setDestinationEntity(91U);
    msg.value = 2890;

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
    msg.setTimeStamp(0.226237445846);
    msg.setSource(32118U);
    msg.setSourceEntity(152U);
    msg.setDestination(33061U);
    msg.setDestinationEntity(130U);
    msg.value = 28568;

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
    msg.setTimeStamp(0.311387934796);
    msg.setSource(23965U);
    msg.setSourceEntity(221U);
    msg.setDestination(34192U);
    msg.setDestinationEntity(146U);
    msg.value = 0.0713525320227;

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
    msg.setTimeStamp(0.0904841919497);
    msg.setSource(31454U);
    msg.setSourceEntity(149U);
    msg.setDestination(43228U);
    msg.setDestinationEntity(169U);
    msg.value = 0.587126137426;

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
    msg.setTimeStamp(0.565475363571);
    msg.setSource(8987U);
    msg.setSourceEntity(240U);
    msg.setDestination(9899U);
    msg.setDestinationEntity(15U);
    msg.value = 0.630966238801;

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
    msg.setTimeStamp(0.555287903285);
    msg.setSource(50221U);
    msg.setSourceEntity(12U);
    msg.setDestination(48249U);
    msg.setDestinationEntity(191U);
    msg.value = 0.429472999897;

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
    msg.setTimeStamp(0.637454885819);
    msg.setSource(5304U);
    msg.setSourceEntity(134U);
    msg.setDestination(38205U);
    msg.setDestinationEntity(10U);
    msg.value = 0.573921678853;

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
    msg.setTimeStamp(0.986194250769);
    msg.setSource(19482U);
    msg.setSourceEntity(16U);
    msg.setDestination(59297U);
    msg.setDestinationEntity(150U);
    msg.value = 0.918330419296;

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
    msg.setTimeStamp(0.363031659254);
    msg.setSource(530U);
    msg.setSourceEntity(31U);
    msg.setDestination(3972U);
    msg.setDestinationEntity(120U);
    msg.validity = 41923U;
    msg.type = 219U;
    msg.utc_year = 17440U;
    msg.utc_month = 44U;
    msg.utc_day = 48U;
    msg.utc_time = 0.710245599394;
    msg.lat = 0.291777450125;
    msg.lon = 0.306120698741;
    msg.height = 0.969858073803;
    msg.satellites = 181U;
    msg.cog = 0.690945990349;
    msg.sog = 0.0666343363993;
    msg.hdop = 0.628261681643;
    msg.vdop = 0.597504539585;
    msg.hacc = 0.503120449217;
    msg.vacc = 0.0142743211181;

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
    msg.setTimeStamp(0.0413900564227);
    msg.setSource(45628U);
    msg.setSourceEntity(224U);
    msg.setDestination(41394U);
    msg.setDestinationEntity(114U);
    msg.validity = 24604U;
    msg.type = 33U;
    msg.utc_year = 29276U;
    msg.utc_month = 216U;
    msg.utc_day = 238U;
    msg.utc_time = 0.529104431446;
    msg.lat = 0.919487100038;
    msg.lon = 0.682252723219;
    msg.height = 0.195825441278;
    msg.satellites = 179U;
    msg.cog = 0.50968761791;
    msg.sog = 0.988909098264;
    msg.hdop = 0.788785877607;
    msg.vdop = 0.440050325429;
    msg.hacc = 0.120198715813;
    msg.vacc = 0.426783515409;

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
    msg.setTimeStamp(0.431739455902);
    msg.setSource(18555U);
    msg.setSourceEntity(93U);
    msg.setDestination(24795U);
    msg.setDestinationEntity(190U);
    msg.validity = 54656U;
    msg.type = 77U;
    msg.utc_year = 14071U;
    msg.utc_month = 186U;
    msg.utc_day = 99U;
    msg.utc_time = 0.446689291155;
    msg.lat = 0.375882252979;
    msg.lon = 0.7480835524;
    msg.height = 0.869875386597;
    msg.satellites = 10U;
    msg.cog = 0.729627008668;
    msg.sog = 0.492935645202;
    msg.hdop = 0.337698195212;
    msg.vdop = 0.949245648652;
    msg.hacc = 0.488770921028;
    msg.vacc = 0.372452796033;

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
    msg.setTimeStamp(0.412809779834);
    msg.setSource(57988U);
    msg.setSourceEntity(219U);
    msg.setDestination(8782U);
    msg.setDestinationEntity(169U);
    msg.time = 0.750928636665;
    msg.phi = 0.359002463524;
    msg.theta = 0.434167726829;
    msg.psi = 0.186958757939;
    msg.psi_magnetic = 0.0969019280615;

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
    msg.setTimeStamp(0.928397842596);
    msg.setSource(23398U);
    msg.setSourceEntity(43U);
    msg.setDestination(24626U);
    msg.setDestinationEntity(42U);
    msg.time = 0.569307166679;
    msg.phi = 0.887992403255;
    msg.theta = 0.54058097666;
    msg.psi = 0.929106215246;
    msg.psi_magnetic = 0.928146030232;

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
    msg.setTimeStamp(0.637391621975);
    msg.setSource(36001U);
    msg.setSourceEntity(89U);
    msg.setDestination(18871U);
    msg.setDestinationEntity(21U);
    msg.time = 0.340956534548;
    msg.phi = 0.738446610145;
    msg.theta = 0.73855145662;
    msg.psi = 0.765789557454;
    msg.psi_magnetic = 0.204506442807;

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
    msg.setTimeStamp(0.193955677002);
    msg.setSource(57417U);
    msg.setSourceEntity(84U);
    msg.setDestination(14200U);
    msg.setDestinationEntity(87U);
    msg.time = 0.456281656239;
    msg.x = 0.00844498968768;
    msg.y = 0.560640853394;
    msg.z = 0.308446758209;
    msg.timestep = 0.921243224801;

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
    msg.setTimeStamp(0.200401550012);
    msg.setSource(35701U);
    msg.setSourceEntity(35U);
    msg.setDestination(44297U);
    msg.setDestinationEntity(155U);
    msg.time = 0.303135890713;
    msg.x = 0.325871953783;
    msg.y = 0.246915379758;
    msg.z = 0.594934552068;
    msg.timestep = 0.511185947646;

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
    msg.setTimeStamp(0.175023767429);
    msg.setSource(15319U);
    msg.setSourceEntity(158U);
    msg.setDestination(3412U);
    msg.setDestinationEntity(133U);
    msg.time = 0.823625461049;
    msg.x = 0.886313238272;
    msg.y = 0.975772990177;
    msg.z = 0.844910164618;
    msg.timestep = 0.989059699418;

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
    msg.setTimeStamp(0.267030329231);
    msg.setSource(52468U);
    msg.setSourceEntity(169U);
    msg.setDestination(49945U);
    msg.setDestinationEntity(157U);
    msg.time = 0.413873566163;
    msg.x = 0.448875283511;
    msg.y = 0.722433992284;
    msg.z = 0.26964509995;

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
    msg.setTimeStamp(0.900676189154);
    msg.setSource(50064U);
    msg.setSourceEntity(62U);
    msg.setDestination(41674U);
    msg.setDestinationEntity(237U);
    msg.time = 0.431001033358;
    msg.x = 0.213820252115;
    msg.y = 0.137324157307;
    msg.z = 0.393591170468;

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
    msg.setTimeStamp(0.758874747508);
    msg.setSource(49610U);
    msg.setSourceEntity(35U);
    msg.setDestination(15951U);
    msg.setDestinationEntity(181U);
    msg.time = 0.752442458485;
    msg.x = 0.561172833395;
    msg.y = 0.624204846586;
    msg.z = 0.00129574715694;

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
    msg.setTimeStamp(0.674563738829);
    msg.setSource(49570U);
    msg.setSourceEntity(84U);
    msg.setDestination(34427U);
    msg.setDestinationEntity(103U);
    msg.time = 0.458858509256;
    msg.x = 0.022370046952;
    msg.y = 0.332673820222;
    msg.z = 0.785374890066;

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
    msg.setTimeStamp(0.626947811322);
    msg.setSource(45999U);
    msg.setSourceEntity(51U);
    msg.setDestination(61771U);
    msg.setDestinationEntity(51U);
    msg.time = 0.407680630462;
    msg.x = 0.132963834267;
    msg.y = 0.681673660434;
    msg.z = 0.260482530242;

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
    msg.setTimeStamp(0.806541542576);
    msg.setSource(7162U);
    msg.setSourceEntity(222U);
    msg.setDestination(21271U);
    msg.setDestinationEntity(126U);
    msg.time = 0.244482506406;
    msg.x = 0.442383997884;
    msg.y = 0.734641547219;
    msg.z = 0.287632615966;

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
    msg.setTimeStamp(0.740882696907);
    msg.setSource(54303U);
    msg.setSourceEntity(25U);
    msg.setDestination(49197U);
    msg.setDestinationEntity(96U);
    msg.time = 0.977392649705;
    msg.x = 0.392236079156;
    msg.y = 0.329674873459;
    msg.z = 0.621872691089;

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
    msg.setTimeStamp(0.756030856157);
    msg.setSource(20549U);
    msg.setSourceEntity(43U);
    msg.setDestination(19270U);
    msg.setDestinationEntity(193U);
    msg.time = 0.63985902044;
    msg.x = 0.836374767656;
    msg.y = 0.304173174538;
    msg.z = 0.759735021537;

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
    msg.setTimeStamp(0.737116271222);
    msg.setSource(33023U);
    msg.setSourceEntity(136U);
    msg.setDestination(55955U);
    msg.setDestinationEntity(236U);
    msg.time = 0.87879875148;
    msg.x = 0.987604840909;
    msg.y = 0.41502110929;
    msg.z = 0.0922498354444;

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
    msg.setTimeStamp(0.359431726476);
    msg.setSource(20434U);
    msg.setSourceEntity(171U);
    msg.setDestination(696U);
    msg.setDestinationEntity(57U);
    msg.validity = 137U;
    msg.x = 0.0728963897256;
    msg.y = 0.375832468103;
    msg.z = 0.491356920467;

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
    msg.setTimeStamp(0.402177249354);
    msg.setSource(26820U);
    msg.setSourceEntity(163U);
    msg.setDestination(41703U);
    msg.setDestinationEntity(130U);
    msg.validity = 3U;
    msg.x = 0.258049129607;
    msg.y = 0.760778068598;
    msg.z = 0.848197194176;

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
    msg.setTimeStamp(0.378496297721);
    msg.setSource(30321U);
    msg.setSourceEntity(92U);
    msg.setDestination(42581U);
    msg.setDestinationEntity(43U);
    msg.validity = 34U;
    msg.x = 0.286354771138;
    msg.y = 0.129814536308;
    msg.z = 0.89948534266;

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
    msg.setTimeStamp(0.503688285176);
    msg.setSource(19191U);
    msg.setSourceEntity(1U);
    msg.setDestination(40826U);
    msg.setDestinationEntity(160U);
    msg.validity = 120U;
    msg.x = 0.612433303466;
    msg.y = 0.738055050198;
    msg.z = 0.152918346564;

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
    msg.setTimeStamp(0.318574691627);
    msg.setSource(13407U);
    msg.setSourceEntity(108U);
    msg.setDestination(24996U);
    msg.setDestinationEntity(176U);
    msg.validity = 167U;
    msg.x = 0.634385132544;
    msg.y = 0.328306108974;
    msg.z = 0.348016132664;

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
    msg.setTimeStamp(0.598686112585);
    msg.setSource(49435U);
    msg.setSourceEntity(60U);
    msg.setDestination(1173U);
    msg.setDestinationEntity(48U);
    msg.validity = 1U;
    msg.x = 0.798940681661;
    msg.y = 0.385889113363;
    msg.z = 0.575789332269;

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
    msg.setTimeStamp(0.793387518669);
    msg.setSource(15621U);
    msg.setSourceEntity(97U);
    msg.setDestination(47283U);
    msg.setDestinationEntity(64U);
    msg.time = 0.461458696642;
    msg.x = 0.716030087678;
    msg.y = 0.524681861609;
    msg.z = 0.105982474482;

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
    msg.setTimeStamp(0.152824162368);
    msg.setSource(3291U);
    msg.setSourceEntity(194U);
    msg.setDestination(55927U);
    msg.setDestinationEntity(185U);
    msg.time = 0.295851002937;
    msg.x = 0.0413833711974;
    msg.y = 0.290374218005;
    msg.z = 0.63438085837;

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
    msg.setTimeStamp(0.594850734978);
    msg.setSource(10381U);
    msg.setSourceEntity(40U);
    msg.setDestination(10440U);
    msg.setDestinationEntity(194U);
    msg.time = 0.560889463937;
    msg.x = 0.0111663680861;
    msg.y = 0.0549642253276;
    msg.z = 0.146040718108;

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
    msg.setTimeStamp(0.668624598712);
    msg.setSource(49718U);
    msg.setSourceEntity(47U);
    msg.setDestination(65125U);
    msg.setDestinationEntity(197U);
    msg.validity = 5U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.715603022036;
    tmp_msg_0.beam_height = 0.338743620939;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.906901259042;

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
    msg.setTimeStamp(0.740677719933);
    msg.setSource(43639U);
    msg.setSourceEntity(88U);
    msg.setDestination(58689U);
    msg.setDestinationEntity(251U);
    msg.validity = 146U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.445139652943;
    tmp_msg_0.y = 0.688157539855;
    tmp_msg_0.z = 0.92727295678;
    tmp_msg_0.phi = 0.917181359378;
    tmp_msg_0.theta = 0.813262564089;
    tmp_msg_0.psi = 0.131048318742;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.123840064159;
    tmp_msg_1.beam_height = 0.275637977863;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.433814793542;

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
    msg.setTimeStamp(0.764753711692);
    msg.setSource(48162U);
    msg.setSourceEntity(111U);
    msg.setDestination(9234U);
    msg.setDestinationEntity(62U);
    msg.validity = 80U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.233290859138;
    tmp_msg_0.beam_height = 0.378454566328;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.224906950028;

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
    msg.setTimeStamp(0.244143636993);
    msg.setSource(36009U);
    msg.setSourceEntity(176U);
    msg.setDestination(52911U);
    msg.setDestinationEntity(120U);
    msg.value = 0.608263111395;

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
    msg.setTimeStamp(0.103538197295);
    msg.setSource(46067U);
    msg.setSourceEntity(85U);
    msg.setDestination(59365U);
    msg.setDestinationEntity(67U);
    msg.value = 0.401198868182;

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
    msg.setTimeStamp(0.152155555071);
    msg.setSource(18352U);
    msg.setSourceEntity(212U);
    msg.setDestination(53177U);
    msg.setDestinationEntity(140U);
    msg.value = 0.941899316735;

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
    msg.setTimeStamp(0.961853439587);
    msg.setSource(2208U);
    msg.setSourceEntity(156U);
    msg.setDestination(4340U);
    msg.setDestinationEntity(174U);
    msg.value = 0.0902778094928;

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
    msg.setTimeStamp(0.496446376614);
    msg.setSource(50835U);
    msg.setSourceEntity(46U);
    msg.setDestination(23884U);
    msg.setDestinationEntity(91U);
    msg.value = 0.182729500809;

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
    msg.setTimeStamp(0.184501255058);
    msg.setSource(33393U);
    msg.setSourceEntity(174U);
    msg.setDestination(60546U);
    msg.setDestinationEntity(223U);
    msg.value = 0.54459455313;

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
    msg.setTimeStamp(0.939331586085);
    msg.setSource(30437U);
    msg.setSourceEntity(5U);
    msg.setDestination(13121U);
    msg.setDestinationEntity(28U);
    msg.value = 0.518548682958;

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
    msg.setTimeStamp(0.0440100808361);
    msg.setSource(8747U);
    msg.setSourceEntity(64U);
    msg.setDestination(47905U);
    msg.setDestinationEntity(153U);
    msg.value = 0.674461533507;

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
    msg.setTimeStamp(0.148663094099);
    msg.setSource(10687U);
    msg.setSourceEntity(176U);
    msg.setDestination(46221U);
    msg.setDestinationEntity(36U);
    msg.value = 0.578195812548;

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
    msg.setTimeStamp(0.25678569579);
    msg.setSource(44465U);
    msg.setSourceEntity(184U);
    msg.setDestination(2010U);
    msg.setDestinationEntity(107U);
    msg.value = 0.858611378617;

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
    msg.setTimeStamp(0.984545503935);
    msg.setSource(46876U);
    msg.setSourceEntity(12U);
    msg.setDestination(1846U);
    msg.setDestinationEntity(156U);
    msg.value = 0.819251365736;

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
    msg.setTimeStamp(0.922452047934);
    msg.setSource(16678U);
    msg.setSourceEntity(42U);
    msg.setDestination(28599U);
    msg.setDestinationEntity(11U);
    msg.value = 0.362849420207;

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
    msg.setTimeStamp(0.281351668365);
    msg.setSource(13602U);
    msg.setSourceEntity(198U);
    msg.setDestination(43197U);
    msg.setDestinationEntity(103U);
    msg.value = 0.446383752563;

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
    msg.setTimeStamp(0.808823680456);
    msg.setSource(35688U);
    msg.setSourceEntity(197U);
    msg.setDestination(36422U);
    msg.setDestinationEntity(174U);
    msg.value = 0.633988892483;

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
    msg.setTimeStamp(0.947923589871);
    msg.setSource(56726U);
    msg.setSourceEntity(110U);
    msg.setDestination(30557U);
    msg.setDestinationEntity(201U);
    msg.value = 0.229012795526;

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
    msg.setTimeStamp(0.134058998572);
    msg.setSource(27388U);
    msg.setSourceEntity(69U);
    msg.setDestination(51739U);
    msg.setDestinationEntity(118U);
    msg.value = 0.182206249122;

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
    msg.setTimeStamp(0.74038736252);
    msg.setSource(42170U);
    msg.setSourceEntity(31U);
    msg.setDestination(17130U);
    msg.setDestinationEntity(150U);
    msg.value = 0.204941300195;

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
    msg.setTimeStamp(0.050981775372);
    msg.setSource(15641U);
    msg.setSourceEntity(97U);
    msg.setDestination(9394U);
    msg.setDestinationEntity(35U);
    msg.value = 0.813958789765;

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
    msg.setTimeStamp(0.802845029376);
    msg.setSource(31223U);
    msg.setSourceEntity(32U);
    msg.setDestination(63441U);
    msg.setDestinationEntity(34U);
    msg.value = 0.419209698273;

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
    msg.setTimeStamp(0.348501180174);
    msg.setSource(30499U);
    msg.setSourceEntity(120U);
    msg.setDestination(33950U);
    msg.setDestinationEntity(248U);
    msg.value = 0.0850071925886;

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
    msg.setTimeStamp(0.11088321881);
    msg.setSource(26749U);
    msg.setSourceEntity(39U);
    msg.setDestination(13413U);
    msg.setDestinationEntity(18U);
    msg.value = 0.470684234828;

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
    msg.setTimeStamp(0.0736769658284);
    msg.setSource(7571U);
    msg.setSourceEntity(3U);
    msg.setDestination(31336U);
    msg.setDestinationEntity(119U);
    msg.value = 0.966221371359;

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
    msg.setTimeStamp(0.8872479212);
    msg.setSource(18088U);
    msg.setSourceEntity(249U);
    msg.setDestination(65509U);
    msg.setDestinationEntity(93U);
    msg.value = 0.591506866376;

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
    msg.setTimeStamp(0.0806855400035);
    msg.setSource(32392U);
    msg.setSourceEntity(61U);
    msg.setDestination(11104U);
    msg.setDestinationEntity(222U);
    msg.value = 0.162494123696;

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
    msg.setTimeStamp(0.402373838038);
    msg.setSource(12107U);
    msg.setSourceEntity(151U);
    msg.setDestination(6036U);
    msg.setDestinationEntity(144U);
    msg.direction = 0.729616400366;
    msg.speed = 0.207040011281;
    msg.turbulence = 0.14902208198;

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
    msg.setTimeStamp(0.354417366967);
    msg.setSource(27750U);
    msg.setSourceEntity(141U);
    msg.setDestination(60472U);
    msg.setDestinationEntity(156U);
    msg.direction = 0.114190972412;
    msg.speed = 0.127905069612;
    msg.turbulence = 0.390439012654;

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
    msg.setTimeStamp(0.00974192160076);
    msg.setSource(38684U);
    msg.setSourceEntity(207U);
    msg.setDestination(61451U);
    msg.setDestinationEntity(96U);
    msg.direction = 0.409371652975;
    msg.speed = 0.689038228291;
    msg.turbulence = 0.596927800683;

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
    msg.setTimeStamp(0.899474805973);
    msg.setSource(33330U);
    msg.setSourceEntity(171U);
    msg.setDestination(1637U);
    msg.setDestinationEntity(165U);
    msg.value = 0.377128997313;

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
    msg.setTimeStamp(0.956728962645);
    msg.setSource(48683U);
    msg.setSourceEntity(67U);
    msg.setDestination(1708U);
    msg.setDestinationEntity(172U);
    msg.value = 0.248986072263;

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
    msg.setTimeStamp(0.347337579166);
    msg.setSource(59692U);
    msg.setSourceEntity(80U);
    msg.setDestination(58376U);
    msg.setDestinationEntity(179U);
    msg.value = 0.696070040524;

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
    msg.setTimeStamp(0.0561624254328);
    msg.setSource(54412U);
    msg.setSourceEntity(235U);
    msg.setDestination(6290U);
    msg.setDestinationEntity(240U);
    msg.value.assign("TCXLYGEQGGDHOWBIRCCAKNODZDIQFEDBUTMIHSTNIUYISTTEHTJ");

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
    msg.setTimeStamp(0.582288814059);
    msg.setSource(55444U);
    msg.setSourceEntity(58U);
    msg.setDestination(53182U);
    msg.setDestinationEntity(184U);
    msg.value.assign("ZTBDHSWUMYJVETLFBYHRNFXNHNZPAEICKMRGLSAMRLPMXZTCZJOFPSXASYXEDXFRPSYOHWDULFLEKCVHXBRZPIXUJVIGKCVFFVSMCGMNGHTOPKYBSLODWQJSJWDEZBTOINITHDOQLCGJYENWURMUXEQVCAQRRIAGWCPKUFJTYDFQBLTIRYQKAVKGBIAQPEZMFUDWQKWGHONIEWAOZBLSVKSRKNPXUZPYCQE");

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
    msg.setTimeStamp(0.905516227062);
    msg.setSource(40739U);
    msg.setSourceEntity(61U);
    msg.setDestination(44462U);
    msg.setDestinationEntity(52U);
    msg.value.assign("OVTIKYBHIMSXNRAMUMFYNCFSSHQYDBIJOLZJ");

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
    msg.setTimeStamp(0.766744886142);
    msg.setSource(58952U);
    msg.setSourceEntity(158U);
    msg.setDestination(64285U);
    msg.setDestinationEntity(182U);
    const char tmp_msg_0[] = {73, -45, -113, -80, -107, 86, 17, -14, -109, 10, -27, 54, -81, -104, -24, 96, 55, -10, 27, 82, 33, 80, 110, -6, 49, -126, -38, 35, 29, 63, 97, -86, -106, 80, -125, 80, 56, -123, 59, 30, -80, -33, -8, 47, -17, -39, -89, -74, 83, -108, -63, 26, 93, 71, -62, 38, 54, -86, -23, -86, -70, -128, 4, -29, 6, 71, 37, 108, 18, 46, 64, 17, 56, 83, 54, 75, -116, -94, -128, -80, 34, 110, -64, 19, -122, 73, 57, 60, 66, -64, 34, 99, -36, -128, -126, 13, 59, 68, -84, -28, 122, 74, 114, 99, 92, 39, 73, 75, -44, -45, -73, -64, 119, -99, 78, -22, 83, -1, -59, 120, -9, -70, -27, 105, -118, 118, -13, 104, -120, 110, 38, -52, 45, 82, -83, 73, 25, 109, 102, -61, 86, 10, -103, 107, -90, -128, 6, 5, -16, 114, 61, -43};
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
    msg.setTimeStamp(0.302831767669);
    msg.setSource(7243U);
    msg.setSourceEntity(131U);
    msg.setDestination(5903U);
    msg.setDestinationEntity(37U);
    const char tmp_msg_0[] = {49, -39, -28, 112, -98, 6, 37, 83, 27, 60};
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
    msg.setTimeStamp(0.264678403082);
    msg.setSource(61499U);
    msg.setSourceEntity(91U);
    msg.setDestination(28516U);
    msg.setDestinationEntity(148U);
    const char tmp_msg_0[] = {-54, 86, -89, -62, -10, 42, -111, -60, -78, -93, 71, 53, 53, -73, 118, -24, -32, 85, 91, -91, 121, 112, -120, -9, -117, 27, -4, 73, 75, 31, 91, 105, 101, -30, -47, 0, 93, 55, 102, 11, -9, 22, 62, 56, 67, -73, 110, 112, -7, 22, -79, 125, 52, -104, 87, -56, 118, 79, -34, 46, 41, 118, -48, 33, 105, 50, 27, 77, 7, 99, 113, 53, -90, 0, -52, -75, 8, -86, 90, 84, 6, 111, 107, 42, 113, -85, -78, -64, -89, 48, -96, -99, 52, -39, -58, 54, 27, -108, -23, 50, -34, -65, 41, -107, -33, 12, 33, -66, -105, 59, 114, 64, 122, -94, 25, 63, 40, 124, -45, -19, -71, 49, 105, 25, -121, 51, -121, 14, 66, -42, -114, -76, -83, -102, 100, -10, -111, 28, 99, -55, 99, -114, 121, -6, -100, 53, 18, -39, 97, 66, 21, -8, -3, 29, 46, -89, -24, 85, -34, 78, 38, -124, -52, 68, -7, -82, 44, -49, -122, 114, 93, 25, 89, -49, 17, 79, 32, -91, -12, 73, 48, 70, -84, -27, -55, 52, -53, -99, -127, -54, -74, -23, -20, -95, -68, -116, 43, 61, 14, 81, 49, 13, 4, 46, 35, -116, -76, -40, 90, 122, -30, 77, -52, 46, -66, 117, 72, 34, -77};
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
    IMC::Force msg;
    msg.setTimeStamp(0.0867190746769);
    msg.setSource(5551U);
    msg.setSourceEntity(159U);
    msg.setDestination(35036U);
    msg.setDestinationEntity(9U);
    msg.value = 0.17377525582;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.443712676962);
    msg.setSource(15353U);
    msg.setSourceEntity(162U);
    msg.setDestination(47344U);
    msg.setDestinationEntity(90U);
    msg.value = 0.266039151541;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.571712467447);
    msg.setSource(64715U);
    msg.setSourceEntity(235U);
    msg.setDestination(24402U);
    msg.setDestinationEntity(190U);
    msg.value = 0.0542292404284;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #2", msg == *msg_d);
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
    msg.setTimeStamp(0.201979142907);
    msg.setSource(3703U);
    msg.setSourceEntity(51U);
    msg.setDestination(55326U);
    msg.setDestinationEntity(40U);
    msg.type = 94U;
    msg.frequency = 1899987531U;
    msg.min_range = 48632U;
    msg.max_range = 2048U;
    msg.bits_per_point = 162U;
    msg.scale_factor = 0.636161301214;
    const char tmp_msg_0[] = {38, -69, -102, 68, -12, -120, 33, -26, -39, 39, 41, -7, 55, -95, 120, 19, -45, 100, -18, -37, 110, -19, -11, 124, -17, -106, -45, 107, -62, 3, -119, -47, 121, 11, -39, -28, 104, -54, -2, -118, -87, -13, 67, -37, -121, 51, 41, -21, -3, -102, -11, -57, 5, 0, 29, 53, 41, -49, 58, -2, -105, -127, -104, -49, -114, 83, 84, 50, 3, 109, -52, 103, 21, 101, 118, -126, 21, 9, 125, 124, -64, -13, -72, 18, -116, 45, 117, -63, 62, -13, -37, -88, -64, -124, -107, -35, 63, -21, -96, -10, 111, -84, -106, 74, 68, -28, -120, 23, 33, -40, 44, -74, 19, -47, 41, 62, -15, -125, -18, 17, -94, -92, 84, -124, 24, 8, -112, -99, -63, -60, -110, -46, -102, 32, 69, -38, 24, 90, -20, -36, -1, 84, 26, 28, 118, -71, -29, -117, 19, -18, 82, 106, 111, 53, 25, 53, 12, 5, -38, 31, -21, -94, 46, -85, -120, -77, -73, -63, 34, 25, 57, 82, 112, 39, 99, -69, 92, 104, -58, -59, -116, -59, -76, -104, 115, 73, -40, 15, 108, 65, 82, 77};
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
    msg.setTimeStamp(0.923612097729);
    msg.setSource(5916U);
    msg.setSourceEntity(156U);
    msg.setDestination(59503U);
    msg.setDestinationEntity(33U);
    msg.type = 215U;
    msg.frequency = 198377751U;
    msg.min_range = 54347U;
    msg.max_range = 43327U;
    msg.bits_per_point = 125U;
    msg.scale_factor = 0.260907418387;
    const char tmp_msg_0[] = {-40, 4, 116, -58, -11, 48, 104, -103, -83, -66, -77, -60, 116, 1, -76, -117, -84, -106, 98, -58, 23, -70, 0, 84, -9, 40, -89, -104, -45, -15, -21, -20, -38, -19, 96, -83, 78, 38, 45, 75, 79, -124, 103, -107, 64, 34, -11, -10, 109, -80, -71, 96, 123, -69, 116, -15, -99, 70, 69, 77, 22, 100, 98, 73, -59, 108, -86, -71, -55, 46, -88, 4, 39, -52, 124, -81, 43, 77, 21, 31, 91, 38, 57, -37, 26, -68, -120, -41, 23, -61, 93, 22, -107, -71, -45, -88, -59, 36, 119, -126, 38, 17, -80, -47, 123, 72, 89, 47, 82, -28, -57, -25, -8, 43, 13, 53, 30, 20, -122, 3, 86, -55, -117, -83, -96, 55, 1, 87, 11, -68, 35, 110, -76, -45, 39, 81, -4, 117, 57, 108, 101, -53, 59, -125, -32, 26, 104, 112, 69, 96, -9, 4, 77, -80, -10, -48, 111, 62, -12, 44, -93, 61, -100, 17, 60, -6, 84, 36, -76, -70, 95, -96, 23, -3, -73, -33, 5, -64, -76, -17, -105, 27, -101, -98, -47, 4, 40, 78, -81, 93, -74, -127, 86, -80, -122, -14, 35, 2, -66, -126, -110, 58, 96, 19, -34, -105, 49, -45, 54, 102, 95, -2, 22, 37, 73, -98, 31, 70, -124, -17, 84, -10, -98, 44, -41, -14, 15, 22, -12, 10, 29, -116, 39, -29, 72, 33, 18, 98, 54, -81, -74, 79};
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
    msg.setTimeStamp(0.611904199572);
    msg.setSource(35224U);
    msg.setSourceEntity(14U);
    msg.setDestination(23490U);
    msg.setDestinationEntity(152U);
    msg.type = 1U;
    msg.frequency = 855277762U;
    msg.min_range = 40822U;
    msg.max_range = 50701U;
    msg.bits_per_point = 48U;
    msg.scale_factor = 0.107266771071;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.470929822513;
    tmp_msg_0.beam_height = 0.959320716003;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-112, -53, -16, -76, 61, 113, -44, -54, -42, -25, 81, 124, 28, -75, 57, 21, 12, -115, 57, 90, 47, 114, 1, 68, -30, -95, 123, -30, 64, 31, -4, -92, 51, 46, 10, 80, 82, -72, -10, -60, 54, 60, 83, -40, -37, 45, 18, -64, -57, -101, 87, 49, -77, 120, -109, -7, -3, 107, -99, -85, 11, 8, 98, 120, -38, 82, -81, -128, -92, -88, -112, -57, 125, -61, 32, 94, 2, 51, 19, -27, -128, 2, -2, 67, 91, 4, -111, -91, 90, 78, 74, 18, -71, -49, 86, 109, 91, 26, -60, -16, -109, -15, 94, 47, 45, -103, -21, 104, 8, 103, -119, 37, 76, 54, -48, 9, 74, 4, 60, 97, 43, 43, -104, 72, -71, -81, -68, 125, -61, 116, 107};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

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
    msg.setTimeStamp(0.181760266852);
    msg.setSource(58539U);
    msg.setSourceEntity(64U);
    msg.setDestination(52750U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.751764720326);
    msg.setSource(57095U);
    msg.setSourceEntity(106U);
    msg.setDestination(8314U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.659419309582);
    msg.setSource(58802U);
    msg.setSourceEntity(132U);
    msg.setDestination(46417U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.775318765392);
    msg.setSource(54674U);
    msg.setSourceEntity(205U);
    msg.setDestination(25859U);
    msg.setDestinationEntity(214U);
    msg.op = 16U;

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
    msg.setTimeStamp(0.953418764169);
    msg.setSource(41768U);
    msg.setSourceEntity(150U);
    msg.setDestination(43982U);
    msg.setDestinationEntity(146U);
    msg.op = 171U;

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
    msg.setTimeStamp(0.643830063116);
    msg.setSource(5713U);
    msg.setSourceEntity(196U);
    msg.setDestination(53520U);
    msg.setDestinationEntity(143U);
    msg.op = 186U;

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
    msg.setTimeStamp(0.823691677598);
    msg.setSource(17537U);
    msg.setSourceEntity(16U);
    msg.setDestination(42344U);
    msg.setDestinationEntity(246U);
    msg.value = 0.886685145629;
    msg.confidence = 0.801100429697;
    msg.opmodes.assign("BEQRNXIYOSHFLGXNGKAHMMQCOOAHHTDYZZWEUWKTIGBIAFYMVQZPFYCEGJDERIVNTNSFHGPRCURNJZOQVUJUJVTSYCMUJUXIBLWPMLANQVKCPWAYZDTWRPHTSZYSDYUAHUJQOXESHYKZOKJLWEXVFWCGTGDFCTPRXXFDDBTPOKTCRQSRRAWALPVDOCZUBUJHDXB");

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
    msg.setTimeStamp(0.0962709998018);
    msg.setSource(36894U);
    msg.setSourceEntity(221U);
    msg.setDestination(31702U);
    msg.setDestinationEntity(225U);
    msg.value = 0.680246755911;
    msg.confidence = 0.624462068198;
    msg.opmodes.assign("SDJRJTVQXPLFCQTSLZYAGOVAZSKWIPNZPPEIVZVBMZBNZGVQBBOALODWURNQZHKASXLFEUUOZUIYYCWKXSENYZLGWHSDHJOEQFGJJRAWUXPRIRHVIGPHEQBUPTLTXKXCRJHPNCKCDIFLDKRQSGYLNBEHVCNTXUIJBRKBIETFFHATBYCDKACIFAYTEUELNXIWCOOFNM");

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
    msg.setTimeStamp(0.782979993891);
    msg.setSource(36611U);
    msg.setSourceEntity(170U);
    msg.setDestination(20422U);
    msg.setDestinationEntity(151U);
    msg.value = 0.175463053212;
    msg.confidence = 0.697397759968;
    msg.opmodes.assign("HEXXGYAOFEJJWNFGGXBQRDPIZRUDHSTNZLOOGTFKTTNKWFWTTBQRCBPKVLHUGPPBBINITYMUWMJJAFSXOLXMRDDOOFWVRQHYPOZGKRGWBZVAEEFREZSBG");

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
    msg.setTimeStamp(0.141585224965);
    msg.setSource(34316U);
    msg.setSourceEntity(9U);
    msg.setDestination(25972U);
    msg.setDestinationEntity(4U);
    msg.itow = 674600978U;
    msg.lat = 0.62855072016;
    msg.lon = 0.146132566099;
    msg.height_ell = 0.163750227214;
    msg.height_sea = 0.305841013403;
    msg.hacc = 0.555673691278;
    msg.vacc = 0.457934615967;
    msg.vel_n = 0.0147391741156;
    msg.vel_e = 0.0869915406062;
    msg.vel_d = 0.651012100037;
    msg.speed = 0.0497860925856;
    msg.gspeed = 0.22045267159;
    msg.heading = 0.871338960513;
    msg.sacc = 0.538464146351;
    msg.cacc = 0.660373997939;

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
    msg.setTimeStamp(0.202878346894);
    msg.setSource(453U);
    msg.setSourceEntity(212U);
    msg.setDestination(57724U);
    msg.setDestinationEntity(164U);
    msg.itow = 2183481049U;
    msg.lat = 0.289296299032;
    msg.lon = 0.150571243147;
    msg.height_ell = 0.961583976709;
    msg.height_sea = 0.726960307953;
    msg.hacc = 0.919497686738;
    msg.vacc = 0.584824594258;
    msg.vel_n = 0.363817744024;
    msg.vel_e = 0.681820530949;
    msg.vel_d = 0.151453132581;
    msg.speed = 0.511526309518;
    msg.gspeed = 0.907716239766;
    msg.heading = 0.977436803887;
    msg.sacc = 0.476484483356;
    msg.cacc = 0.165205638804;

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
    msg.setTimeStamp(0.673882157844);
    msg.setSource(47212U);
    msg.setSourceEntity(119U);
    msg.setDestination(8410U);
    msg.setDestinationEntity(30U);
    msg.itow = 2973875177U;
    msg.lat = 0.664579942514;
    msg.lon = 0.513164612687;
    msg.height_ell = 0.572099876783;
    msg.height_sea = 0.0247778163992;
    msg.hacc = 0.181299170219;
    msg.vacc = 0.00618337485348;
    msg.vel_n = 0.544703224246;
    msg.vel_e = 0.931898955865;
    msg.vel_d = 0.774021526335;
    msg.speed = 0.0237986174585;
    msg.gspeed = 0.160569001458;
    msg.heading = 0.513869565487;
    msg.sacc = 0.05196345795;
    msg.cacc = 0.0444423639883;

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
    msg.setTimeStamp(0.884877304065);
    msg.setSource(4342U);
    msg.setSourceEntity(109U);
    msg.setDestination(22903U);
    msg.setDestinationEntity(135U);
    msg.id = 209U;
    msg.value = 0.0819207224295;

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
    msg.setTimeStamp(0.921096400649);
    msg.setSource(34497U);
    msg.setSourceEntity(5U);
    msg.setDestination(6732U);
    msg.setDestinationEntity(134U);
    msg.id = 39U;
    msg.value = 0.041690498728;

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
    msg.setTimeStamp(0.801486248626);
    msg.setSource(37707U);
    msg.setSourceEntity(11U);
    msg.setDestination(15734U);
    msg.setDestinationEntity(2U);
    msg.id = 41U;
    msg.value = 0.488221399813;

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
    msg.setTimeStamp(0.147765260556);
    msg.setSource(46614U);
    msg.setSourceEntity(104U);
    msg.setDestination(51720U);
    msg.setDestinationEntity(83U);
    msg.x = 0.585447785708;
    msg.y = 0.768523675911;
    msg.z = 0.688692461606;
    msg.phi = 0.834973255327;
    msg.theta = 0.397068507934;
    msg.psi = 0.619445496102;

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
    msg.setTimeStamp(0.399972601522);
    msg.setSource(5454U);
    msg.setSourceEntity(230U);
    msg.setDestination(44639U);
    msg.setDestinationEntity(61U);
    msg.x = 0.242766122182;
    msg.y = 0.725953418756;
    msg.z = 0.0952553389849;
    msg.phi = 0.980759637489;
    msg.theta = 0.643334822665;
    msg.psi = 0.774145738648;

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
    msg.setTimeStamp(0.585259522261);
    msg.setSource(94U);
    msg.setSourceEntity(74U);
    msg.setDestination(48186U);
    msg.setDestinationEntity(104U);
    msg.x = 0.264798981861;
    msg.y = 0.490803042109;
    msg.z = 0.33410558517;
    msg.phi = 0.23840656481;
    msg.theta = 0.691798146152;
    msg.psi = 0.598610866251;

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
    msg.setTimeStamp(0.996003315302);
    msg.setSource(16772U);
    msg.setSourceEntity(229U);
    msg.setDestination(9533U);
    msg.setDestinationEntity(39U);
    msg.beam_width = 0.291521742718;
    msg.beam_height = 0.687498442974;

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
    msg.setTimeStamp(0.945279839029);
    msg.setSource(55495U);
    msg.setSourceEntity(207U);
    msg.setDestination(5984U);
    msg.setDestinationEntity(111U);
    msg.beam_width = 0.342115657177;
    msg.beam_height = 0.421604314184;

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
    msg.setTimeStamp(0.951250715287);
    msg.setSource(10792U);
    msg.setSourceEntity(18U);
    msg.setDestination(42458U);
    msg.setDestinationEntity(49U);
    msg.beam_width = 0.521141898571;
    msg.beam_height = 0.287696056204;

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
    msg.setTimeStamp(0.877895952669);
    msg.setSource(50457U);
    msg.setSourceEntity(33U);
    msg.setDestination(38685U);
    msg.setDestinationEntity(133U);
    msg.sane = 18U;

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
    msg.setTimeStamp(0.718013103665);
    msg.setSource(16698U);
    msg.setSourceEntity(95U);
    msg.setDestination(27958U);
    msg.setDestinationEntity(212U);
    msg.sane = 242U;

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
    msg.setTimeStamp(0.13595210719);
    msg.setSource(16118U);
    msg.setSourceEntity(106U);
    msg.setDestination(47698U);
    msg.setDestinationEntity(93U);
    msg.sane = 2U;

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
    msg.setTimeStamp(0.110960613655);
    msg.setSource(30247U);
    msg.setSourceEntity(234U);
    msg.setDestination(17671U);
    msg.setDestinationEntity(132U);
    msg.value = 0.730364585161;

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
    msg.setTimeStamp(0.446916868751);
    msg.setSource(53473U);
    msg.setSourceEntity(211U);
    msg.setDestination(39381U);
    msg.setDestinationEntity(84U);
    msg.value = 0.697986478164;

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
    msg.setTimeStamp(0.637065701218);
    msg.setSource(25626U);
    msg.setSourceEntity(43U);
    msg.setDestination(60220U);
    msg.setDestinationEntity(170U);
    msg.value = 0.95145378223;

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
    msg.setTimeStamp(0.138290293345);
    msg.setSource(64465U);
    msg.setSourceEntity(43U);
    msg.setDestination(50264U);
    msg.setDestinationEntity(188U);
    msg.value = 0.310982020366;

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
    msg.setTimeStamp(0.451246659431);
    msg.setSource(64860U);
    msg.setSourceEntity(115U);
    msg.setDestination(15494U);
    msg.setDestinationEntity(115U);
    msg.value = 0.450576117665;

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
    msg.setTimeStamp(0.952238426502);
    msg.setSource(12073U);
    msg.setSourceEntity(210U);
    msg.setDestination(19153U);
    msg.setDestinationEntity(168U);
    msg.value = 0.045116387628;

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
    msg.setTimeStamp(0.738297250251);
    msg.setSource(42782U);
    msg.setSourceEntity(84U);
    msg.setDestination(12405U);
    msg.setDestinationEntity(29U);
    msg.value = 0.213080402708;

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
    msg.setTimeStamp(0.163134580202);
    msg.setSource(31145U);
    msg.setSourceEntity(158U);
    msg.setDestination(7677U);
    msg.setDestinationEntity(79U);
    msg.value = 0.100528463327;

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
    msg.setTimeStamp(0.441252901888);
    msg.setSource(28781U);
    msg.setSourceEntity(1U);
    msg.setDestination(45305U);
    msg.setDestinationEntity(37U);
    msg.value = 0.798030905303;

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
    msg.setTimeStamp(0.278970672669);
    msg.setSource(37575U);
    msg.setSourceEntity(47U);
    msg.setDestination(63507U);
    msg.setDestinationEntity(140U);
    msg.value = 0.00325941822159;

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
    msg.setTimeStamp(0.0447628839799);
    msg.setSource(25125U);
    msg.setSourceEntity(81U);
    msg.setDestination(7588U);
    msg.setDestinationEntity(1U);
    msg.value = 0.164340877493;

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
    msg.setTimeStamp(0.775607999112);
    msg.setSource(7509U);
    msg.setSourceEntity(157U);
    msg.setDestination(6341U);
    msg.setDestinationEntity(149U);
    msg.value = 0.57705552887;

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
    msg.setTimeStamp(0.398409271629);
    msg.setSource(20649U);
    msg.setSourceEntity(56U);
    msg.setDestination(34846U);
    msg.setDestinationEntity(32U);
    msg.value = 0.564220188319;

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
    msg.setTimeStamp(0.297969124876);
    msg.setSource(2667U);
    msg.setSourceEntity(100U);
    msg.setDestination(36615U);
    msg.setDestinationEntity(9U);
    msg.value = 0.654785196055;

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
    msg.setTimeStamp(0.522104426801);
    msg.setSource(51807U);
    msg.setSourceEntity(199U);
    msg.setDestination(62338U);
    msg.setDestinationEntity(183U);
    msg.value = 0.00911170252426;

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
    msg.setTimeStamp(0.123646945719);
    msg.setSource(34675U);
    msg.setSourceEntity(46U);
    msg.setDestination(10607U);
    msg.setDestinationEntity(127U);
    msg.value = 0.873527049798;

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
    msg.setTimeStamp(0.710110149875);
    msg.setSource(38484U);
    msg.setSourceEntity(133U);
    msg.setDestination(25185U);
    msg.setDestinationEntity(70U);
    msg.value = 0.385206936979;

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
    msg.setTimeStamp(0.555386765036);
    msg.setSource(64160U);
    msg.setSourceEntity(141U);
    msg.setDestination(38764U);
    msg.setDestinationEntity(179U);
    msg.value = 0.859579977132;

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
    msg.setTimeStamp(0.802632160961);
    msg.setSource(31097U);
    msg.setSourceEntity(249U);
    msg.setDestination(25065U);
    msg.setDestinationEntity(10U);
    msg.value = 0.0774123282131;

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
    msg.setTimeStamp(0.194634160715);
    msg.setSource(13462U);
    msg.setSourceEntity(221U);
    msg.setDestination(36657U);
    msg.setDestinationEntity(28U);
    msg.value = 0.179574552117;

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
    msg.setTimeStamp(0.256055304175);
    msg.setSource(6710U);
    msg.setSourceEntity(23U);
    msg.setDestination(14875U);
    msg.setDestinationEntity(213U);
    msg.value = 0.990871035759;

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
    msg.setTimeStamp(0.289856873679);
    msg.setSource(13005U);
    msg.setSourceEntity(87U);
    msg.setDestination(63752U);
    msg.setDestinationEntity(43U);
    msg.value = 0.554738632759;

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
    msg.setTimeStamp(0.112500747469);
    msg.setSource(59855U);
    msg.setSourceEntity(156U);
    msg.setDestination(44449U);
    msg.setDestinationEntity(215U);
    msg.value = 0.870974363912;

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
    msg.setTimeStamp(0.40910189568);
    msg.setSource(20264U);
    msg.setSourceEntity(72U);
    msg.setDestination(6190U);
    msg.setDestinationEntity(116U);
    msg.value = 0.740817605104;

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
    msg.setTimeStamp(0.19053408486);
    msg.setSource(63936U);
    msg.setSourceEntity(15U);
    msg.setDestination(26716U);
    msg.setDestinationEntity(57U);
    msg.validity = 15315U;
    msg.type = 209U;
    msg.tow = 1962490707U;
    msg.base_lat = 0.884093314339;
    msg.base_lon = 0.154527308262;
    msg.base_height = 0.376139669369;
    msg.n = 0.0856235586529;
    msg.e = 0.989144982479;
    msg.d = 0.45394234835;
    msg.v_n = 0.2006473407;
    msg.v_e = 0.868287378861;
    msg.v_d = 0.323046648611;
    msg.satellites = 146U;
    msg.iar_hyp = 13477U;
    msg.iar_ratio = 0.518085449439;

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
    msg.setTimeStamp(0.126862036579);
    msg.setSource(31660U);
    msg.setSourceEntity(65U);
    msg.setDestination(51501U);
    msg.setDestinationEntity(134U);
    msg.validity = 60740U;
    msg.type = 102U;
    msg.tow = 3030313083U;
    msg.base_lat = 0.509226765786;
    msg.base_lon = 0.0522842759834;
    msg.base_height = 0.802645145667;
    msg.n = 0.113789640755;
    msg.e = 0.818019579782;
    msg.d = 0.50113195833;
    msg.v_n = 0.271165958295;
    msg.v_e = 0.157150421771;
    msg.v_d = 0.850253665712;
    msg.satellites = 116U;
    msg.iar_hyp = 19459U;
    msg.iar_ratio = 0.506089929337;

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
    msg.setTimeStamp(0.00777761655007);
    msg.setSource(28681U);
    msg.setSourceEntity(4U);
    msg.setDestination(21418U);
    msg.setDestinationEntity(139U);
    msg.validity = 49834U;
    msg.type = 119U;
    msg.tow = 3413227326U;
    msg.base_lat = 0.700894301514;
    msg.base_lon = 0.159314622398;
    msg.base_height = 0.215703174719;
    msg.n = 0.451673179553;
    msg.e = 0.792811095538;
    msg.d = 0.263205033586;
    msg.v_n = 0.510901677498;
    msg.v_e = 0.468346195905;
    msg.v_d = 0.974801282395;
    msg.satellites = 151U;
    msg.iar_hyp = 10727U;
    msg.iar_ratio = 0.187180994969;

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
    msg.setTimeStamp(0.861637659086);
    msg.setSource(21580U);
    msg.setSourceEntity(90U);
    msg.setDestination(46863U);
    msg.setDestinationEntity(209U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.766969184676;
    tmp_msg_0.lon = 0.321259636909;
    tmp_msg_0.height = 0.929395553766;
    tmp_msg_0.x = 0.981166432992;
    tmp_msg_0.y = 0.490270064437;
    tmp_msg_0.z = 0.108226255072;
    tmp_msg_0.phi = 0.031354515728;
    tmp_msg_0.theta = 0.554957830453;
    tmp_msg_0.psi = 0.220249981836;
    tmp_msg_0.u = 0.657644511838;
    tmp_msg_0.v = 0.950205608266;
    tmp_msg_0.w = 0.39695200289;
    tmp_msg_0.vx = 0.316164835873;
    tmp_msg_0.vy = 0.248068255443;
    tmp_msg_0.vz = 0.0888686216381;
    tmp_msg_0.p = 0.324140388969;
    tmp_msg_0.q = 0.580781013198;
    tmp_msg_0.r = 0.455962450835;
    tmp_msg_0.depth = 0.0301288151142;
    tmp_msg_0.alt = 0.913751221206;
    msg.state.set(tmp_msg_0);
    msg.type = 200U;

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
    msg.setTimeStamp(0.00418599260775);
    msg.setSource(26089U);
    msg.setSourceEntity(191U);
    msg.setDestination(13375U);
    msg.setDestinationEntity(120U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.119849919251;
    tmp_msg_0.lon = 0.966019433274;
    tmp_msg_0.height = 0.571711980069;
    tmp_msg_0.x = 0.978542478724;
    tmp_msg_0.y = 0.0155536170324;
    tmp_msg_0.z = 0.329719236217;
    tmp_msg_0.phi = 0.151836536007;
    tmp_msg_0.theta = 0.857566041308;
    tmp_msg_0.psi = 0.102082233905;
    tmp_msg_0.u = 0.106751143188;
    tmp_msg_0.v = 0.82428968862;
    tmp_msg_0.w = 0.860118868984;
    tmp_msg_0.vx = 0.545866203591;
    tmp_msg_0.vy = 0.182412710986;
    tmp_msg_0.vz = 0.120093494525;
    tmp_msg_0.p = 0.783781318492;
    tmp_msg_0.q = 0.490650250966;
    tmp_msg_0.r = 0.936724064856;
    tmp_msg_0.depth = 0.632767911697;
    tmp_msg_0.alt = 0.608113803974;
    msg.state.set(tmp_msg_0);
    msg.type = 74U;

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
    msg.setTimeStamp(0.347040633633);
    msg.setSource(6012U);
    msg.setSourceEntity(190U);
    msg.setDestination(26859U);
    msg.setDestinationEntity(100U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.766516540551;
    tmp_msg_0.lon = 0.631471194619;
    tmp_msg_0.height = 0.432810794042;
    tmp_msg_0.x = 0.423368505696;
    tmp_msg_0.y = 0.24141305105;
    tmp_msg_0.z = 0.429791676256;
    tmp_msg_0.phi = 0.1520988064;
    tmp_msg_0.theta = 0.742123678475;
    tmp_msg_0.psi = 0.205061952343;
    tmp_msg_0.u = 0.553278825911;
    tmp_msg_0.v = 0.301863356922;
    tmp_msg_0.w = 0.601265560546;
    tmp_msg_0.vx = 0.420795546419;
    tmp_msg_0.vy = 0.901697488359;
    tmp_msg_0.vz = 0.513605923854;
    tmp_msg_0.p = 0.631892332918;
    tmp_msg_0.q = 0.615298270527;
    tmp_msg_0.r = 0.127339723258;
    tmp_msg_0.depth = 0.638049072506;
    tmp_msg_0.alt = 0.441400596903;
    msg.state.set(tmp_msg_0);
    msg.type = 240U;

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
    msg.setTimeStamp(0.794737823474);
    msg.setSource(35464U);
    msg.setSourceEntity(175U);
    msg.setDestination(7981U);
    msg.setDestinationEntity(181U);
    msg.value = 0.70254924037;

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
    msg.setTimeStamp(0.538688157109);
    msg.setSource(64955U);
    msg.setSourceEntity(120U);
    msg.setDestination(14306U);
    msg.setDestinationEntity(159U);
    msg.value = 0.371093544902;

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
    msg.setTimeStamp(0.518520909288);
    msg.setSource(28891U);
    msg.setSourceEntity(123U);
    msg.setDestination(11020U);
    msg.setDestinationEntity(204U);
    msg.value = 0.436150525416;

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
    msg.setTimeStamp(0.919007170642);
    msg.setSource(4793U);
    msg.setSourceEntity(113U);
    msg.setDestination(28991U);
    msg.setDestinationEntity(88U);
    msg.value = 0.0708373136027;

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
    msg.setTimeStamp(0.508839789528);
    msg.setSource(60518U);
    msg.setSourceEntity(192U);
    msg.setDestination(27468U);
    msg.setDestinationEntity(62U);
    msg.value = 0.949547895186;

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
    msg.setTimeStamp(0.774146704646);
    msg.setSource(63057U);
    msg.setSourceEntity(224U);
    msg.setDestination(7544U);
    msg.setDestinationEntity(179U);
    msg.value = 0.228708377973;

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
    msg.setTimeStamp(0.197611377294);
    msg.setSource(58314U);
    msg.setSourceEntity(28U);
    msg.setDestination(43023U);
    msg.setDestinationEntity(72U);
    msg.value = 0.670576110016;

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
    msg.setTimeStamp(0.169535697866);
    msg.setSource(11422U);
    msg.setSourceEntity(134U);
    msg.setDestination(26346U);
    msg.setDestinationEntity(243U);
    msg.value = 0.6548888026;

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
    msg.setTimeStamp(0.104372413706);
    msg.setSource(59616U);
    msg.setSourceEntity(129U);
    msg.setDestination(24951U);
    msg.setDestinationEntity(217U);
    msg.value = 0.662935576596;

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
    msg.setTimeStamp(0.0626304275999);
    msg.setSource(60474U);
    msg.setSourceEntity(51U);
    msg.setDestination(38701U);
    msg.setDestinationEntity(169U);
    msg.value = 0.153333046546;

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
    msg.setTimeStamp(0.631533706966);
    msg.setSource(7097U);
    msg.setSourceEntity(21U);
    msg.setDestination(30247U);
    msg.setDestinationEntity(187U);
    msg.value = 0.997753229453;

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
    msg.setTimeStamp(0.731966540643);
    msg.setSource(50028U);
    msg.setSourceEntity(50U);
    msg.setDestination(12123U);
    msg.setDestinationEntity(161U);
    msg.value = 0.778246445022;

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
    msg.setTimeStamp(0.377776478463);
    msg.setSource(38349U);
    msg.setSourceEntity(248U);
    msg.setDestination(59412U);
    msg.setDestinationEntity(74U);
    msg.value = 0.153355341162;

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
    msg.setTimeStamp(0.211308367667);
    msg.setSource(45634U);
    msg.setSourceEntity(249U);
    msg.setDestination(16775U);
    msg.setDestinationEntity(8U);
    msg.value = 0.306890055914;

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
    msg.setTimeStamp(0.385808289771);
    msg.setSource(11625U);
    msg.setSourceEntity(189U);
    msg.setDestination(50912U);
    msg.setDestinationEntity(62U);
    msg.value = 0.723809506466;

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
    msg.setTimeStamp(0.602339118741);
    msg.setSource(46100U);
    msg.setSourceEntity(238U);
    msg.setDestination(1132U);
    msg.setDestinationEntity(190U);
    msg.id = 221U;
    msg.zoom = 213U;
    msg.action = 185U;

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
    msg.setTimeStamp(0.27136593551);
    msg.setSource(25137U);
    msg.setSourceEntity(110U);
    msg.setDestination(20055U);
    msg.setDestinationEntity(4U);
    msg.id = 44U;
    msg.zoom = 42U;
    msg.action = 197U;

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
    msg.setTimeStamp(0.352856268541);
    msg.setSource(45940U);
    msg.setSourceEntity(137U);
    msg.setDestination(16503U);
    msg.setDestinationEntity(202U);
    msg.id = 49U;
    msg.zoom = 240U;
    msg.action = 166U;

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
    msg.setTimeStamp(0.354864854983);
    msg.setSource(41928U);
    msg.setSourceEntity(101U);
    msg.setDestination(59613U);
    msg.setDestinationEntity(115U);
    msg.id = 130U;
    msg.value = 0.573609295356;

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
    msg.setTimeStamp(0.244514821077);
    msg.setSource(57481U);
    msg.setSourceEntity(80U);
    msg.setDestination(42295U);
    msg.setDestinationEntity(243U);
    msg.id = 22U;
    msg.value = 0.428078280758;

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
    msg.setTimeStamp(0.71915787421);
    msg.setSource(27743U);
    msg.setSourceEntity(175U);
    msg.setDestination(47140U);
    msg.setDestinationEntity(212U);
    msg.id = 141U;
    msg.value = 0.503493987681;

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
    msg.setTimeStamp(0.925829484923);
    msg.setSource(63305U);
    msg.setSourceEntity(81U);
    msg.setDestination(59936U);
    msg.setDestinationEntity(181U);
    msg.id = 202U;
    msg.value = 0.724543367627;

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
    msg.setTimeStamp(0.931147911485);
    msg.setSource(64075U);
    msg.setSourceEntity(22U);
    msg.setDestination(54493U);
    msg.setDestinationEntity(164U);
    msg.id = 31U;
    msg.value = 0.272819028324;

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
    msg.setTimeStamp(0.582243560969);
    msg.setSource(6920U);
    msg.setSourceEntity(145U);
    msg.setDestination(58841U);
    msg.setDestinationEntity(241U);
    msg.id = 195U;
    msg.value = 0.133221719578;

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
    msg.setTimeStamp(0.372808548089);
    msg.setSource(8250U);
    msg.setSourceEntity(104U);
    msg.setDestination(10783U);
    msg.setDestinationEntity(158U);
    msg.id = 74U;
    msg.angle = 0.952935651062;

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
    msg.setTimeStamp(0.157195887183);
    msg.setSource(23332U);
    msg.setSourceEntity(164U);
    msg.setDestination(28649U);
    msg.setDestinationEntity(137U);
    msg.id = 102U;
    msg.angle = 0.300022232133;

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
    msg.setTimeStamp(0.260642542307);
    msg.setSource(39319U);
    msg.setSourceEntity(8U);
    msg.setDestination(41687U);
    msg.setDestinationEntity(235U);
    msg.id = 70U;
    msg.angle = 0.8326562036;

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
    msg.setTimeStamp(0.51706641492);
    msg.setSource(40749U);
    msg.setSourceEntity(30U);
    msg.setDestination(14588U);
    msg.setDestinationEntity(233U);
    msg.op = 217U;
    msg.actions.assign("OYSPBASFEQHDXUWFWIJVGHOLAPAKMHTFJAEICHUOVEKTIQQRYAQUSJZFILIKEPVJSSENWRHEXWBYJGCMWAODAXMWRDUTRXJAOEZILKMTFZPNJCLWWRTMBPVCUQAQPRFVJKOGRUXTBNQRMOHWQTDIJXMDCLLGVITKKMSSIYCZZHDBLSACYEVYBXPEGTDLNMYYBKGQRSXUBLUNHUGXUNGICYGPTBLZOVFQF");

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
    msg.setTimeStamp(0.771264699467);
    msg.setSource(13940U);
    msg.setSourceEntity(131U);
    msg.setDestination(28237U);
    msg.setDestinationEntity(19U);
    msg.op = 149U;
    msg.actions.assign("ITOZTEXSDQSXPQLYBYPRJYBEVQIPHWBERBWPKINBFTRHGSHYHAQNDSFJNHQWXVILXVIJNJMUTRKADVONWBSRGVHSZCMUGOCTKZNPJJCZNMAWSGWKXGFV");

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
    msg.setTimeStamp(0.0484564807965);
    msg.setSource(60274U);
    msg.setSourceEntity(186U);
    msg.setDestination(37454U);
    msg.setDestinationEntity(141U);
    msg.op = 162U;
    msg.actions.assign("ABDZZKHSDLHIXRVNFCOLHMZWMHTLTSAEFVWHGKIOGINNYIVLJXUKOT");

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
    msg.setTimeStamp(0.781072449127);
    msg.setSource(24796U);
    msg.setSourceEntity(200U);
    msg.setDestination(16105U);
    msg.setDestinationEntity(130U);
    msg.actions.assign("KJDVYTCVBJQQRZAEGYHZCTAAYSSFUFGEGSWPDVRXENLIKIEFXVWIEKLSWZLTJFCPGDAXRIFUDNOOJXNJPEZMRWUXRYDADWNHPAEOTSXGRDMTNCEBVKOWIRQLDPIL");

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
    msg.setTimeStamp(0.681275345152);
    msg.setSource(28866U);
    msg.setSourceEntity(9U);
    msg.setDestination(10071U);
    msg.setDestinationEntity(210U);
    msg.actions.assign("ZUDUVNOCEAXMNBPTJULVAYQZGMNQTCOYAKFHWHPVDBSLYABPEEJYHALWLWOMNQBPSNPLCIXFXYZXTMUUHHNPSEOURLQXMYSSIAZKYEOCJVJHCGQQFVXTKUOTZVZGULMOIIBDRDBQJIXYZPEEOICUHWWWDMFBBSLAWGRCGGHZMIQFHSLIAKKPXBSWSPWZTCDIOTVKDNJMNNVYGKTMRRXXJKACFUBEGVDAYFEQKHRGJSDJCNGTZKQFVE");

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
    msg.setTimeStamp(0.738683034341);
    msg.setSource(890U);
    msg.setSourceEntity(60U);
    msg.setDestination(40603U);
    msg.setDestinationEntity(219U);
    msg.actions.assign("CULUYVFGHWJWLJPREGOIYTQZKIFAIIDHPTSGWRTJDVUTFMXSSWNSWFXMADAIFDXZNPNGWJ");

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
    msg.setTimeStamp(0.177165033596);
    msg.setSource(30170U);
    msg.setSourceEntity(72U);
    msg.setDestination(6584U);
    msg.setDestinationEntity(13U);
    msg.button = 212U;
    msg.value = 141U;

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
    msg.setTimeStamp(0.069050369252);
    msg.setSource(17599U);
    msg.setSourceEntity(39U);
    msg.setDestination(14757U);
    msg.setDestinationEntity(138U);
    msg.button = 115U;
    msg.value = 169U;

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
    msg.setTimeStamp(0.828089711719);
    msg.setSource(40003U);
    msg.setSourceEntity(83U);
    msg.setDestination(20359U);
    msg.setDestinationEntity(128U);
    msg.button = 191U;
    msg.value = 80U;

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
    msg.setTimeStamp(0.282847450587);
    msg.setSource(37700U);
    msg.setSourceEntity(102U);
    msg.setDestination(3424U);
    msg.setDestinationEntity(15U);
    msg.op = 168U;
    msg.text.assign("GAOCXDNOKSXBJWUKGSWQKIZGGAIINNSWDPUKRACJLHIHKSAWVSUPCSXLHXPEENBFGWHLMDICRZSEPHPYQAZRLZCNKMRYFEQUWWNTBTFUWTOYVWDKQJLQJUZVHJGYFBELBBJDMYAVODQVZGUEYFCXPUFBQPRQOZTAGCTPAOBFYJHHBUXLXAOTCXPMDNTKRNMJYECZYSLDVMTNJVFREHZKIQXVIFRHMJDTMCFLM");

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
    msg.setTimeStamp(0.92102929035);
    msg.setSource(53656U);
    msg.setSourceEntity(196U);
    msg.setDestination(16012U);
    msg.setDestinationEntity(243U);
    msg.op = 79U;
    msg.text.assign("VGIGAVWPZDIWPLOUHUHQFKUSPYEORDUJJWMPJJUXDUXEJPQSNDOFOJDA");

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
    msg.setTimeStamp(0.668815327064);
    msg.setSource(25618U);
    msg.setSourceEntity(243U);
    msg.setDestination(13309U);
    msg.setDestinationEntity(122U);
    msg.op = 157U;
    msg.text.assign("VQNYMXRBLSQGH");

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
    msg.setTimeStamp(0.792573203607);
    msg.setSource(38577U);
    msg.setSourceEntity(176U);
    msg.setDestination(10621U);
    msg.setDestinationEntity(227U);
    msg.op = 14U;
    msg.time_remain = 0.722190306319;
    msg.sched_time = 0.0275809846097;

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
    msg.setTimeStamp(0.390285371125);
    msg.setSource(27861U);
    msg.setSourceEntity(217U);
    msg.setDestination(6480U);
    msg.setDestinationEntity(199U);
    msg.op = 43U;
    msg.time_remain = 0.984637865074;
    msg.sched_time = 0.405261116068;

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
    msg.setTimeStamp(0.968629375483);
    msg.setSource(30207U);
    msg.setSourceEntity(196U);
    msg.setDestination(39902U);
    msg.setDestinationEntity(110U);
    msg.op = 69U;
    msg.time_remain = 0.580424725466;
    msg.sched_time = 0.337022219077;

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
    msg.setTimeStamp(0.344644292856);
    msg.setSource(13127U);
    msg.setSourceEntity(211U);
    msg.setDestination(58662U);
    msg.setDestinationEntity(45U);
    msg.name.assign("MKRGJRJYEAAOSBWHWPYT");
    msg.op = 108U;
    msg.sched_time = 0.813969571919;

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
    msg.setTimeStamp(0.808349863638);
    msg.setSource(52156U);
    msg.setSourceEntity(179U);
    msg.setDestination(7689U);
    msg.setDestinationEntity(95U);
    msg.name.assign("YWQIAGOROYVKCCZMIAXMLKEOZQOGRKWRKIEOGFDOXZSJEKTMCQYPCYWPSKJVVAUORFHUFHVHYRLTTKHJXZXSVBPDQQLTZXLUVBNTFVFJMQPQUYHNPEACDTUBSYGG");
    msg.op = 138U;
    msg.sched_time = 0.915870336247;

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
    msg.setTimeStamp(0.258237967723);
    msg.setSource(21481U);
    msg.setSourceEntity(148U);
    msg.setDestination(4680U);
    msg.setDestinationEntity(95U);
    msg.name.assign("JWBUGQRLPXZXZDKZUJGTDSGYYPGGBUWBAZADQIJBXVBPEOOXQCNBFXAEZTQHSWZZRXKSAZTJTJCIRNXQFGHRJJYLRVIKCVQRLWHFSSMFJPPSIOMMUERVMTXKQBURLHOUKDKVLNVFCABVMHDZSESNGTYHHEYYPIWULVWDIZXVKQNPYDESFFDOKNTCMDBNNWOCOTQBUWWHCAGFELCEDEKLPYITHPTUJLOIIACLMMAKFIARQUAVMCJPNFOEYWGX");
    msg.op = 144U;
    msg.sched_time = 0.550592140599;

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
    msg.setTimeStamp(0.171761572549);
    msg.setSource(5220U);
    msg.setSourceEntity(108U);
    msg.setDestination(57416U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.459639910498);
    msg.setSource(51251U);
    msg.setSourceEntity(155U);
    msg.setDestination(8846U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.810444944317);
    msg.setSource(35666U);
    msg.setSourceEntity(196U);
    msg.setDestination(1193U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.740710128553);
    msg.setSource(60353U);
    msg.setSourceEntity(134U);
    msg.setDestination(31403U);
    msg.setDestinationEntity(73U);
    msg.name.assign("CEKLUSFPTOIPRXJNUPXYEAYFNJVAOZWMEBGAHUSPKKRSZZDSZQXCMCRFNVAXIITJNICSWLPJHCPYLIDBWHATCMDROZDFDBKYGULCSGDEONETDZOZGYQXWSRQDQMGFPGQATOHLNBLFURJMKBTWCVRTPQGJHJBOTSJBGAAWHMXUOECZKVVFERJBLQKNNEPBRVTKLWHLXGOIWXAUYULEDSIK");
    msg.state = 4U;

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
    msg.setTimeStamp(0.609925122742);
    msg.setSource(19103U);
    msg.setSourceEntity(238U);
    msg.setDestination(11282U);
    msg.setDestinationEntity(87U);
    msg.name.assign("TYGZZNPPOIJGYPIDKQUFJIZSLYRYUOMQJFDWVCKQRCNCHELOAPLNUJTGWAZPQPAGQYMKCEAHTUCREDTHZWXBCKDMVBUDNFCVMYPSZXGHADZEZETSFRUBGNJJALHIQAZKTXPEWLHOOVFPCXVQRFSFWYLTSWAVYARBEQHQIBOKHYTUDOKEVMWMJNLDKVDMGSIASTVREXF");
    msg.state = 236U;

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
    msg.setTimeStamp(0.147318489632);
    msg.setSource(3644U);
    msg.setSourceEntity(77U);
    msg.setDestination(43226U);
    msg.setDestinationEntity(91U);
    msg.name.assign("RDWLNPMQDOBWJBHEMZMMOQCLUUWBRYECAPNRMIWMPDIEHBWMUCHFAHWQISHXUZNTXSAFKJSVKPFBQORBRNETJVECCTQKPIKNPZYHUJLKWRZLGQXQFCVWKLMSJSTFEYAXDDVFIKZBPVTGNUCZODXIPXTWWQNIYIFEADJPIJRFUKKMDOYOJLSKEASXX");
    msg.state = 86U;

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
    msg.setTimeStamp(0.0543018737448);
    msg.setSource(34627U);
    msg.setSourceEntity(19U);
    msg.setDestination(37245U);
    msg.setDestinationEntity(238U);
    msg.name.assign("JVIMTBWPPQGHKQVURBEUDIKUVGVMDBLNEZOQWBTKAIZSDLATGWRMNPENHQPDDYUGXCFQXWEFPVFVSRCNAFXXBJBWQVOCLCGPOVKADNKCAZRYDHTZWXLOXUYCPGNWJAVIILFYUZYITIYZYITOJLAYBHUMLTPJHNKBOMCVRBDMRGUN");
    msg.value = 152U;

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
    msg.setTimeStamp(0.719461867337);
    msg.setSource(60244U);
    msg.setSourceEntity(31U);
    msg.setDestination(10824U);
    msg.setDestinationEntity(180U);
    msg.name.assign("ASDSIWSUFNZSQUMVPIYKDFHKXJRZHFCRLGCHTWTOAEARXUHWIBBHDJTOHOJCQJOXZEUQDDAVOYHGTQAOIWPSCKSDYFLTTLFXGFH");
    msg.value = 127U;

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
    msg.setTimeStamp(0.845327455034);
    msg.setSource(60745U);
    msg.setSourceEntity(27U);
    msg.setDestination(17595U);
    msg.setDestinationEntity(106U);
    msg.name.assign("BAYRJCQXPCPIYUSNNHZCKPQFQLGTXDYJCEKVNZWGYZLEDWLRWSAPFXAL");
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
    msg.setTimeStamp(0.814660504971);
    msg.setSource(7884U);
    msg.setSourceEntity(99U);
    msg.setDestination(19711U);
    msg.setDestinationEntity(194U);
    msg.name.assign("DVCFXHOTDLTBZMTNCYZPUXLVIEOLOZBDQTNFIELUACAZUTOYAJTBWPKPWWYNJMJVFDEANALHGUUESCHQNFRXVZMOUQMWWHFRVUDRWGYBTPVQI");

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
    msg.setTimeStamp(0.406789485781);
    msg.setSource(61078U);
    msg.setSourceEntity(70U);
    msg.setDestination(52529U);
    msg.setDestinationEntity(251U);
    msg.name.assign("OIIZAAPFZADCKSNZSGOLHTUWJTPNYPRKKKLJLJTUHDEPFSPABUDHHPLQZAJQLVEAXARCROJMPXOYFFDKAFICGJVUGHINMTBOVZYUTURVMCCKI");

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
    msg.setTimeStamp(0.394587625726);
    msg.setSource(5023U);
    msg.setSourceEntity(139U);
    msg.setDestination(21934U);
    msg.setDestinationEntity(142U);
    msg.name.assign("VOUSPKSTPRINISFLCTGABBPFWEZGAWZMORYSGANSDGWVUJZFNZNHOWEFNAWPSEELFKXGMFUAXIHLYQMAEBHQJQQJRPGUTQJLRBOMFDIC");

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
    msg.setTimeStamp(0.261081989542);
    msg.setSource(49691U);
    msg.setSourceEntity(110U);
    msg.setDestination(1370U);
    msg.setDestinationEntity(196U);
    msg.name.assign("AEMEIYEGUPPUXWPRASPSFYSDZJVZQQCJINTPRFMHMOYVHCKGZPJGGEVMALSUABJXZXSVYFUDGLGORHXGKDAKAXZKPHALHHWKAGWFIMQMWEMTTAVVJQSZCDCYINFKJCPDONQRZEILJNQQLTYPVIHTBYRWCBQLNMWQVFIJETBVSFOZEUOMDUSCNXRXNHGDONBKTDBQKYYBBNLMKHVDAWOIIRXKCNTXHOUGUIS");
    msg.value = 15U;

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
    msg.setTimeStamp(0.202679967008);
    msg.setSource(50901U);
    msg.setSourceEntity(165U);
    msg.setDestination(14812U);
    msg.setDestinationEntity(69U);
    msg.name.assign("TSSLPJANQUJAULDHKXEDPJPMDTRSYBBQOJPLOHEFGKVSLYWXZFXCURNDZFGOAPBNORZHPRLMQMDVZIMNA");
    msg.value = 197U;

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
    msg.setTimeStamp(0.933011697814);
    msg.setSource(53284U);
    msg.setSourceEntity(18U);
    msg.setDestination(64242U);
    msg.setDestinationEntity(121U);
    msg.name.assign("ESZKLXMSIZGYBAKTOUNLVODTTAUMSGWCZQVCTNLRKOFBHSAJGEECMFPMZUDFXXSCWUVMHNPNGXXNEDDHVALECPARLIEEPRITJSWHDJVRFQBKO");
    msg.value = 13U;

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
    msg.setTimeStamp(0.146808803692);
    msg.setSource(52498U);
    msg.setSourceEntity(3U);
    msg.setDestination(50721U);
    msg.setDestinationEntity(222U);
    msg.id = 94U;
    msg.period = 770406776U;
    msg.duty_cycle = 1991594374U;

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
    msg.setTimeStamp(0.403742726674);
    msg.setSource(20790U);
    msg.setSourceEntity(95U);
    msg.setDestination(23805U);
    msg.setDestinationEntity(172U);
    msg.id = 152U;
    msg.period = 1028497753U;
    msg.duty_cycle = 643127692U;

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
    msg.setTimeStamp(0.622802379615);
    msg.setSource(47700U);
    msg.setSourceEntity(126U);
    msg.setDestination(39534U);
    msg.setDestinationEntity(167U);
    msg.id = 207U;
    msg.period = 94789010U;
    msg.duty_cycle = 960274224U;

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
    msg.setTimeStamp(0.0036850746722);
    msg.setSource(48922U);
    msg.setSourceEntity(2U);
    msg.setDestination(32854U);
    msg.setDestinationEntity(30U);
    msg.id = 131U;
    msg.period = 2848503662U;
    msg.duty_cycle = 1656608167U;

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
    msg.setTimeStamp(0.839536221376);
    msg.setSource(55458U);
    msg.setSourceEntity(248U);
    msg.setDestination(12946U);
    msg.setDestinationEntity(241U);
    msg.id = 151U;
    msg.period = 2428222555U;
    msg.duty_cycle = 2055583590U;

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
    msg.setTimeStamp(0.986638019992);
    msg.setSource(7458U);
    msg.setSourceEntity(107U);
    msg.setDestination(59410U);
    msg.setDestinationEntity(3U);
    msg.id = 218U;
    msg.period = 1563160195U;
    msg.duty_cycle = 698715808U;

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
    msg.setTimeStamp(0.984488452677);
    msg.setSource(26105U);
    msg.setSourceEntity(29U);
    msg.setDestination(41300U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.952302627588;
    msg.lon = 0.229147306836;
    msg.height = 0.0394869076834;
    msg.x = 0.604454178579;
    msg.y = 0.25175092554;
    msg.z = 0.782872293864;
    msg.phi = 0.980017578491;
    msg.theta = 0.492912779115;
    msg.psi = 0.160179492138;
    msg.u = 0.771030902892;
    msg.v = 0.29375814177;
    msg.w = 0.568277689266;
    msg.vx = 0.552827725803;
    msg.vy = 0.122737345218;
    msg.vz = 0.26813143007;
    msg.p = 0.409220781583;
    msg.q = 0.650761608656;
    msg.r = 0.889774468031;
    msg.depth = 0.416302187797;
    msg.alt = 0.5012508239;

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
    msg.setTimeStamp(0.730484808915);
    msg.setSource(15943U);
    msg.setSourceEntity(37U);
    msg.setDestination(33763U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.314881340879;
    msg.lon = 0.754655161199;
    msg.height = 0.962565766565;
    msg.x = 0.546324283441;
    msg.y = 0.0823748184595;
    msg.z = 0.979047300753;
    msg.phi = 0.287921558069;
    msg.theta = 0.751734080813;
    msg.psi = 0.661908184683;
    msg.u = 0.267090669464;
    msg.v = 0.563059649892;
    msg.w = 0.404485037775;
    msg.vx = 0.581874167435;
    msg.vy = 0.270726167118;
    msg.vz = 0.527223002191;
    msg.p = 0.235277041058;
    msg.q = 0.227676645839;
    msg.r = 0.654924323684;
    msg.depth = 0.0400506796138;
    msg.alt = 0.201035245358;

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
    msg.setTimeStamp(0.732418127362);
    msg.setSource(62394U);
    msg.setSourceEntity(209U);
    msg.setDestination(33020U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.853595957315;
    msg.lon = 0.790843592253;
    msg.height = 0.989067289564;
    msg.x = 0.32433702216;
    msg.y = 0.136989441245;
    msg.z = 0.260434438936;
    msg.phi = 0.321419191612;
    msg.theta = 0.511941926498;
    msg.psi = 0.584973684956;
    msg.u = 0.132246573886;
    msg.v = 0.583992426467;
    msg.w = 0.0577444257538;
    msg.vx = 0.879590784565;
    msg.vy = 0.11384439252;
    msg.vz = 0.268478966058;
    msg.p = 0.960452571618;
    msg.q = 0.0797713473545;
    msg.r = 0.46604952104;
    msg.depth = 0.917529772742;
    msg.alt = 0.364700397095;

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
    msg.setTimeStamp(0.311621091922);
    msg.setSource(22487U);
    msg.setSourceEntity(104U);
    msg.setDestination(21183U);
    msg.setDestinationEntity(149U);
    msg.x = 0.63136290239;
    msg.y = 0.125685743952;
    msg.z = 0.0223128521811;

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
    msg.setTimeStamp(0.525001556098);
    msg.setSource(51781U);
    msg.setSourceEntity(40U);
    msg.setDestination(8470U);
    msg.setDestinationEntity(81U);
    msg.x = 0.0533753240804;
    msg.y = 0.261586662131;
    msg.z = 0.24873545138;

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
    msg.setTimeStamp(0.0746473385084);
    msg.setSource(21674U);
    msg.setSourceEntity(60U);
    msg.setDestination(6684U);
    msg.setDestinationEntity(161U);
    msg.x = 0.947137829025;
    msg.y = 0.111055129947;
    msg.z = 0.375667111015;

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
    msg.setTimeStamp(0.573469768154);
    msg.setSource(18498U);
    msg.setSourceEntity(102U);
    msg.setDestination(51359U);
    msg.setDestinationEntity(121U);
    msg.value = 0.755837378934;

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
    msg.setTimeStamp(0.945923219496);
    msg.setSource(48272U);
    msg.setSourceEntity(142U);
    msg.setDestination(49110U);
    msg.setDestinationEntity(127U);
    msg.value = 0.110212305395;

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
    msg.setTimeStamp(0.320097247419);
    msg.setSource(25117U);
    msg.setSourceEntity(82U);
    msg.setDestination(60734U);
    msg.setDestinationEntity(22U);
    msg.value = 0.840470289723;

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
    msg.setTimeStamp(0.711006739954);
    msg.setSource(22226U);
    msg.setSourceEntity(154U);
    msg.setDestination(44934U);
    msg.setDestinationEntity(126U);
    msg.value = 0.416752771536;

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
    msg.setTimeStamp(0.741530870725);
    msg.setSource(15523U);
    msg.setSourceEntity(130U);
    msg.setDestination(2624U);
    msg.setDestinationEntity(186U);
    msg.value = 0.294703137175;

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
    msg.setTimeStamp(0.664372423742);
    msg.setSource(41412U);
    msg.setSourceEntity(178U);
    msg.setDestination(13821U);
    msg.setDestinationEntity(104U);
    msg.value = 0.772685721596;

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
    msg.setTimeStamp(0.809770603566);
    msg.setSource(46545U);
    msg.setSourceEntity(171U);
    msg.setDestination(8857U);
    msg.setDestinationEntity(20U);
    msg.x = 0.496494293364;
    msg.y = 0.312781857864;
    msg.z = 0.770627233978;
    msg.phi = 0.902930634219;
    msg.theta = 0.681091302502;
    msg.psi = 0.0554606558269;
    msg.p = 0.127298019431;
    msg.q = 0.641356499876;
    msg.r = 0.816772401532;
    msg.u = 0.146775278934;
    msg.v = 0.262770697618;
    msg.w = 0.323706132833;
    msg.bias_psi = 0.975178833238;
    msg.bias_r = 0.105442832433;

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
    msg.setTimeStamp(0.134365890669);
    msg.setSource(21355U);
    msg.setSourceEntity(15U);
    msg.setDestination(38260U);
    msg.setDestinationEntity(168U);
    msg.x = 0.514651364928;
    msg.y = 0.947636380168;
    msg.z = 0.46397697374;
    msg.phi = 0.0563163146253;
    msg.theta = 0.089371090303;
    msg.psi = 0.584497714308;
    msg.p = 0.358533684403;
    msg.q = 0.918629539559;
    msg.r = 0.817389143382;
    msg.u = 0.832659928761;
    msg.v = 0.082023734727;
    msg.w = 0.754768935113;
    msg.bias_psi = 0.912136960936;
    msg.bias_r = 0.109543846647;

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
    msg.setTimeStamp(0.563663731931);
    msg.setSource(8269U);
    msg.setSourceEntity(128U);
    msg.setDestination(59471U);
    msg.setDestinationEntity(162U);
    msg.x = 0.144845030493;
    msg.y = 0.0268328026945;
    msg.z = 0.115673771903;
    msg.phi = 0.893341316122;
    msg.theta = 0.510660759967;
    msg.psi = 0.914618009007;
    msg.p = 0.587068514934;
    msg.q = 0.577558429195;
    msg.r = 0.895300572107;
    msg.u = 0.576756246057;
    msg.v = 0.286072460983;
    msg.w = 0.230860288235;
    msg.bias_psi = 0.676348017786;
    msg.bias_r = 0.330741806841;

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
    msg.setTimeStamp(0.478351798718);
    msg.setSource(54642U);
    msg.setSourceEntity(27U);
    msg.setDestination(38264U);
    msg.setDestinationEntity(241U);
    msg.bias_psi = 0.0931431642311;
    msg.bias_r = 0.298199175432;
    msg.cog = 0.482843532312;
    msg.cyaw = 0.93729268713;
    msg.lbl_rej_level = 0.0532746452374;
    msg.gps_rej_level = 0.350289985866;
    msg.custom_x = 0.103903556264;
    msg.custom_y = 0.372400133777;
    msg.custom_z = 0.535991074447;

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
    msg.setTimeStamp(0.100771425851);
    msg.setSource(33621U);
    msg.setSourceEntity(59U);
    msg.setDestination(29624U);
    msg.setDestinationEntity(169U);
    msg.bias_psi = 0.262381656387;
    msg.bias_r = 0.805171297086;
    msg.cog = 0.242183356989;
    msg.cyaw = 0.515302675996;
    msg.lbl_rej_level = 0.929549697555;
    msg.gps_rej_level = 0.0366332596016;
    msg.custom_x = 0.909942799297;
    msg.custom_y = 0.700698206576;
    msg.custom_z = 0.52492432019;

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
    msg.setTimeStamp(0.585391206174);
    msg.setSource(7523U);
    msg.setSourceEntity(237U);
    msg.setDestination(35387U);
    msg.setDestinationEntity(208U);
    msg.bias_psi = 0.233618274636;
    msg.bias_r = 0.99265301884;
    msg.cog = 0.995505177331;
    msg.cyaw = 0.277267967726;
    msg.lbl_rej_level = 0.250303401525;
    msg.gps_rej_level = 0.316831053788;
    msg.custom_x = 0.216286259041;
    msg.custom_y = 0.657881690724;
    msg.custom_z = 0.39363054438;

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
    msg.setTimeStamp(0.330846129398);
    msg.setSource(30809U);
    msg.setSourceEntity(232U);
    msg.setDestination(46837U);
    msg.setDestinationEntity(141U);
    msg.utc_time = 0.762995919959;
    msg.reason = 141U;

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
    msg.setTimeStamp(0.0595189624375);
    msg.setSource(7949U);
    msg.setSourceEntity(159U);
    msg.setDestination(44057U);
    msg.setDestinationEntity(43U);
    msg.utc_time = 0.565172820444;
    msg.reason = 96U;

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
    msg.setTimeStamp(0.989576008544);
    msg.setSource(22071U);
    msg.setSourceEntity(155U);
    msg.setDestination(54191U);
    msg.setDestinationEntity(177U);
    msg.utc_time = 0.427160782177;
    msg.reason = 20U;

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
    msg.setTimeStamp(0.65941081462);
    msg.setSource(12295U);
    msg.setSourceEntity(21U);
    msg.setDestination(14268U);
    msg.setDestinationEntity(101U);
    msg.id = 214U;
    msg.range = 0.72640009661;
    msg.acceptance = 51U;

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
    msg.setTimeStamp(0.120348110505);
    msg.setSource(24928U);
    msg.setSourceEntity(227U);
    msg.setDestination(46083U);
    msg.setDestinationEntity(135U);
    msg.id = 228U;
    msg.range = 0.933947463848;
    msg.acceptance = 184U;

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
    msg.setTimeStamp(0.191403747488);
    msg.setSource(30688U);
    msg.setSourceEntity(116U);
    msg.setDestination(41697U);
    msg.setDestinationEntity(38U);
    msg.id = 206U;
    msg.range = 0.0671762122693;
    msg.acceptance = 90U;

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
    msg.setTimeStamp(0.0491863143182);
    msg.setSource(34478U);
    msg.setSourceEntity(227U);
    msg.setDestination(14256U);
    msg.setDestinationEntity(216U);
    msg.type = 180U;
    msg.reason = 139U;
    msg.value = 0.0180385511914;
    msg.timestep = 0.633241255624;

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
    msg.setTimeStamp(0.576767469355);
    msg.setSource(20458U);
    msg.setSourceEntity(173U);
    msg.setDestination(20345U);
    msg.setDestinationEntity(111U);
    msg.type = 114U;
    msg.reason = 80U;
    msg.value = 0.350439716174;
    msg.timestep = 0.829065768667;

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
    msg.setTimeStamp(0.563793185518);
    msg.setSource(6364U);
    msg.setSourceEntity(247U);
    msg.setDestination(65384U);
    msg.setDestinationEntity(131U);
    msg.type = 123U;
    msg.reason = 231U;
    msg.value = 0.797653844385;
    msg.timestep = 0.118832711866;

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
    msg.setTimeStamp(0.348124498336);
    msg.setSource(5969U);
    msg.setSourceEntity(189U);
    msg.setDestination(23571U);
    msg.setDestinationEntity(252U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OTUZCFYYPEMNAEZRPHAZWYILZNRDUHCXHJMCDIIKDXRMFQEOOPJPVFFMWJCGVSJUMRXFPESIKVZWXWCPSGCJYGXMUSNBUUAYVHGFWATBXDTVOLSUDVQKNVLENLBHKRAIKEAAKNFYCTZWSTQGSDJDCQSMJFFTRKWOIQFTTLYKALLJIOTNOHUMO");
    tmp_msg_0.lat = 0.555349430698;
    tmp_msg_0.lon = 0.0400398812755;
    tmp_msg_0.depth = 0.360877633542;
    tmp_msg_0.query_channel = 137U;
    tmp_msg_0.reply_channel = 236U;
    tmp_msg_0.transponder_delay = 92U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.393679195595;
    msg.y = 0.852259315394;
    msg.var_x = 0.712056415151;
    msg.var_y = 0.0896227333811;
    msg.distance = 0.393160658428;

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
    msg.setTimeStamp(0.295408126574);
    msg.setSource(33159U);
    msg.setSourceEntity(125U);
    msg.setDestination(12881U);
    msg.setDestinationEntity(227U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VHCJZAPIVFWLCOSCDYRMBOWZTFAAVJTNHDUZSYTLOPEUIRPSVMMKXXHCYLSUXKDZKCLXDHPATZFOFNMCVKMNFMMQNJIUKPRBSEIOLHTEUFBYFJDWRZYWAQLAYUSBZWHBINXUWJYTLUHDZVIQJETSPVG");
    tmp_msg_0.lat = 0.0680141433453;
    tmp_msg_0.lon = 0.911119137547;
    tmp_msg_0.depth = 0.544559866227;
    tmp_msg_0.query_channel = 81U;
    tmp_msg_0.reply_channel = 2U;
    tmp_msg_0.transponder_delay = 10U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.880778939995;
    msg.y = 0.735801269475;
    msg.var_x = 0.0610330493145;
    msg.var_y = 0.8124090518;
    msg.distance = 0.924835336341;

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
    msg.setTimeStamp(0.373856178138);
    msg.setSource(55556U);
    msg.setSourceEntity(156U);
    msg.setDestination(60883U);
    msg.setDestinationEntity(197U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YNJSQXSFDGSWSTZOUBUHCUXNZKQFRTPMRPYBLFCRCXNPGPLTASMZXKERJDWVUWBVLSNXMVOGTYETEHQXNRQHVLFITADBPRHYIJGVQPMKJGXTAHGQZEIOUOAQNWLLZZSDMWYGRFIZZLCOMEUANKPDCEQIIHJKCGDKQRKFMEMXBFFQCYGHNIILJUSEHTBFCONYUTUTDALBCAZPJOEMPOAJHBWERSJWZIWYKXALVVNGFW");
    tmp_msg_0.lat = 0.33453011712;
    tmp_msg_0.lon = 0.0370488726006;
    tmp_msg_0.depth = 0.909868312567;
    tmp_msg_0.query_channel = 234U;
    tmp_msg_0.reply_channel = 82U;
    tmp_msg_0.transponder_delay = 161U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.341727385161;
    msg.y = 0.162321962604;
    msg.var_x = 0.348636126524;
    msg.var_y = 0.889792376511;
    msg.distance = 0.837242804876;

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
    msg.setTimeStamp(0.598686641622);
    msg.setSource(37685U);
    msg.setSourceEntity(216U);
    msg.setDestination(43850U);
    msg.setDestinationEntity(236U);
    msg.state = 122U;

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
    msg.setTimeStamp(0.668902309396);
    msg.setSource(58199U);
    msg.setSourceEntity(245U);
    msg.setDestination(484U);
    msg.setDestinationEntity(164U);
    msg.state = 117U;

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
    msg.setTimeStamp(0.361085854894);
    msg.setSource(39839U);
    msg.setSourceEntity(232U);
    msg.setDestination(56575U);
    msg.setDestinationEntity(116U);
    msg.state = 23U;

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
    msg.setTimeStamp(0.578625726624);
    msg.setSource(29941U);
    msg.setSourceEntity(201U);
    msg.setDestination(26635U);
    msg.setDestinationEntity(152U);
    msg.x = 0.944705225003;
    msg.y = 0.770512613443;
    msg.z = 0.162759498236;

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
    msg.setTimeStamp(0.262917642525);
    msg.setSource(54237U);
    msg.setSourceEntity(210U);
    msg.setDestination(940U);
    msg.setDestinationEntity(84U);
    msg.x = 0.759129584542;
    msg.y = 0.749457222202;
    msg.z = 0.483940101577;

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
    msg.setTimeStamp(0.166456617159);
    msg.setSource(12611U);
    msg.setSourceEntity(224U);
    msg.setDestination(848U);
    msg.setDestinationEntity(216U);
    msg.x = 0.095926193217;
    msg.y = 0.347397585037;
    msg.z = 0.168550414415;

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
    msg.setTimeStamp(0.813640134658);
    msg.setSource(42726U);
    msg.setSourceEntity(131U);
    msg.setDestination(52107U);
    msg.setDestinationEntity(218U);
    msg.va = 0.8586294196;
    msg.aoa = 0.313159570099;
    msg.ssa = 0.101773806808;

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
    msg.setTimeStamp(0.204533257087);
    msg.setSource(28479U);
    msg.setSourceEntity(205U);
    msg.setDestination(62341U);
    msg.setDestinationEntity(175U);
    msg.va = 0.886124022282;
    msg.aoa = 0.985413772803;
    msg.ssa = 0.435941713238;

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
    msg.setTimeStamp(0.66826221701);
    msg.setSource(6652U);
    msg.setSourceEntity(109U);
    msg.setDestination(53249U);
    msg.setDestinationEntity(91U);
    msg.va = 0.165792408089;
    msg.aoa = 0.520640401748;
    msg.ssa = 0.493724293231;

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
    msg.setTimeStamp(0.0212767172606);
    msg.setSource(59507U);
    msg.setSourceEntity(215U);
    msg.setDestination(32082U);
    msg.setDestinationEntity(138U);
    msg.value = 0.382888676256;

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
    msg.setTimeStamp(0.620383231597);
    msg.setSource(40782U);
    msg.setSourceEntity(32U);
    msg.setDestination(12269U);
    msg.setDestinationEntity(137U);
    msg.value = 0.635938418965;

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
    msg.setTimeStamp(0.113626628406);
    msg.setSource(50471U);
    msg.setSourceEntity(58U);
    msg.setDestination(40780U);
    msg.setDestinationEntity(20U);
    msg.value = 0.646737958905;

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
    msg.setTimeStamp(0.57835493592);
    msg.setSource(54524U);
    msg.setSourceEntity(79U);
    msg.setDestination(5741U);
    msg.setDestinationEntity(125U);
    msg.value = 0.418746502921;
    msg.z_units = 4U;

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
    msg.setTimeStamp(0.530659826222);
    msg.setSource(11849U);
    msg.setSourceEntity(224U);
    msg.setDestination(33996U);
    msg.setDestinationEntity(174U);
    msg.value = 0.274117440045;
    msg.z_units = 6U;

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
    msg.setTimeStamp(0.165725027904);
    msg.setSource(60842U);
    msg.setSourceEntity(144U);
    msg.setDestination(12087U);
    msg.setDestinationEntity(177U);
    msg.value = 0.888178381312;
    msg.z_units = 162U;

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
    msg.setTimeStamp(0.926946855472);
    msg.setSource(40645U);
    msg.setSourceEntity(208U);
    msg.setDestination(39315U);
    msg.setDestinationEntity(158U);
    msg.value = 0.290332268555;
    msg.speed_units = 231U;

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
    msg.setTimeStamp(0.885644097987);
    msg.setSource(12516U);
    msg.setSourceEntity(240U);
    msg.setDestination(21042U);
    msg.setDestinationEntity(104U);
    msg.value = 0.744821817785;
    msg.speed_units = 34U;

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
    msg.setTimeStamp(0.0967136042485);
    msg.setSource(26938U);
    msg.setSourceEntity(98U);
    msg.setDestination(19318U);
    msg.setDestinationEntity(203U);
    msg.value = 0.216086961254;
    msg.speed_units = 46U;

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
    msg.setTimeStamp(0.62933358275);
    msg.setSource(46014U);
    msg.setSourceEntity(37U);
    msg.setDestination(49622U);
    msg.setDestinationEntity(178U);
    msg.value = 0.721111512041;

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
    msg.setTimeStamp(0.0720498466806);
    msg.setSource(55758U);
    msg.setSourceEntity(206U);
    msg.setDestination(34403U);
    msg.setDestinationEntity(243U);
    msg.value = 0.919495560075;

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
    msg.setTimeStamp(0.383877793582);
    msg.setSource(40836U);
    msg.setSourceEntity(45U);
    msg.setDestination(25897U);
    msg.setDestinationEntity(190U);
    msg.value = 0.485753578321;

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
    msg.setTimeStamp(0.560986014148);
    msg.setSource(35988U);
    msg.setSourceEntity(31U);
    msg.setDestination(40273U);
    msg.setDestinationEntity(151U);
    msg.value = 0.568719199455;

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
    msg.setTimeStamp(0.331864126908);
    msg.setSource(44586U);
    msg.setSourceEntity(58U);
    msg.setDestination(25656U);
    msg.setDestinationEntity(81U);
    msg.value = 0.209675748349;

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
    msg.setTimeStamp(0.088820131812);
    msg.setSource(40784U);
    msg.setSourceEntity(51U);
    msg.setDestination(36374U);
    msg.setDestinationEntity(58U);
    msg.value = 0.15304093751;

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
    msg.setTimeStamp(0.335967961777);
    msg.setSource(5105U);
    msg.setSourceEntity(21U);
    msg.setDestination(62401U);
    msg.setDestinationEntity(73U);
    msg.value = 0.0402969165682;

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
    msg.setTimeStamp(0.239967975917);
    msg.setSource(40036U);
    msg.setSourceEntity(172U);
    msg.setDestination(26150U);
    msg.setDestinationEntity(162U);
    msg.value = 0.132884439592;

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
    msg.setTimeStamp(0.291908025454);
    msg.setSource(13565U);
    msg.setSourceEntity(178U);
    msg.setDestination(48414U);
    msg.setDestinationEntity(144U);
    msg.value = 0.530952374188;

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
    msg.setTimeStamp(0.736320788178);
    msg.setSource(8362U);
    msg.setSourceEntity(179U);
    msg.setDestination(62637U);
    msg.setDestinationEntity(145U);
    msg.path_ref = 2078505317U;
    msg.start_lat = 0.684339071159;
    msg.start_lon = 0.478138846518;
    msg.start_z = 0.682609562877;
    msg.start_z_units = 83U;
    msg.end_lat = 0.16413442272;
    msg.end_lon = 0.740091295323;
    msg.end_z = 0.866291451291;
    msg.end_z_units = 159U;
    msg.speed = 0.464104746975;
    msg.speed_units = 71U;
    msg.lradius = 0.611079024602;
    msg.flags = 29U;

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
    msg.setTimeStamp(0.204951812799);
    msg.setSource(59663U);
    msg.setSourceEntity(24U);
    msg.setDestination(24569U);
    msg.setDestinationEntity(38U);
    msg.path_ref = 1507852300U;
    msg.start_lat = 0.530819162281;
    msg.start_lon = 0.165797791434;
    msg.start_z = 0.356961478705;
    msg.start_z_units = 9U;
    msg.end_lat = 0.419643883492;
    msg.end_lon = 0.854174208028;
    msg.end_z = 0.315225565659;
    msg.end_z_units = 98U;
    msg.speed = 0.220491867514;
    msg.speed_units = 80U;
    msg.lradius = 0.927051419297;
    msg.flags = 62U;

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
    msg.setTimeStamp(0.170053824888);
    msg.setSource(16541U);
    msg.setSourceEntity(73U);
    msg.setDestination(52015U);
    msg.setDestinationEntity(201U);
    msg.path_ref = 3020456881U;
    msg.start_lat = 0.199340182942;
    msg.start_lon = 0.20467792955;
    msg.start_z = 0.550650009753;
    msg.start_z_units = 111U;
    msg.end_lat = 0.333386156424;
    msg.end_lon = 0.537609025887;
    msg.end_z = 0.937684535629;
    msg.end_z_units = 207U;
    msg.speed = 0.944097366409;
    msg.speed_units = 118U;
    msg.lradius = 0.307550040328;
    msg.flags = 129U;

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
    msg.setTimeStamp(0.469134343138);
    msg.setSource(20525U);
    msg.setSourceEntity(52U);
    msg.setDestination(13397U);
    msg.setDestinationEntity(83U);
    msg.x = 0.814756550588;
    msg.y = 0.26667525372;
    msg.z = 0.982306635193;
    msg.k = 0.180926981958;
    msg.m = 0.735856193777;
    msg.n = 0.131451286589;
    msg.flags = 214U;

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
    msg.setTimeStamp(0.960205286723);
    msg.setSource(44445U);
    msg.setSourceEntity(174U);
    msg.setDestination(51U);
    msg.setDestinationEntity(105U);
    msg.x = 0.867371965636;
    msg.y = 0.421075487435;
    msg.z = 0.429416493627;
    msg.k = 0.570063095271;
    msg.m = 0.628765460922;
    msg.n = 0.535873556369;
    msg.flags = 11U;

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
    msg.setTimeStamp(0.335718291885);
    msg.setSource(50193U);
    msg.setSourceEntity(196U);
    msg.setDestination(15589U);
    msg.setDestinationEntity(205U);
    msg.x = 0.0929716446803;
    msg.y = 0.233372268683;
    msg.z = 0.654886039503;
    msg.k = 0.25964145914;
    msg.m = 0.313778240855;
    msg.n = 0.253049577785;
    msg.flags = 222U;

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
    msg.setTimeStamp(0.704175906803);
    msg.setSource(33323U);
    msg.setSourceEntity(65U);
    msg.setDestination(34491U);
    msg.setDestinationEntity(112U);
    msg.value = 0.753277266222;

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
    msg.setTimeStamp(0.223841538097);
    msg.setSource(15509U);
    msg.setSourceEntity(66U);
    msg.setDestination(39793U);
    msg.setDestinationEntity(201U);
    msg.value = 0.757774696134;

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
    msg.setTimeStamp(0.880902773083);
    msg.setSource(53151U);
    msg.setSourceEntity(95U);
    msg.setDestination(55805U);
    msg.setDestinationEntity(205U);
    msg.value = 0.757827630946;

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
    msg.setTimeStamp(0.44273636743);
    msg.setSource(61859U);
    msg.setSourceEntity(116U);
    msg.setDestination(24742U);
    msg.setDestinationEntity(23U);
    msg.u = 0.0957273108657;
    msg.v = 0.682258333166;
    msg.w = 0.491379175305;
    msg.p = 0.520340998831;
    msg.q = 0.75641821455;
    msg.r = 0.764892919452;
    msg.flags = 25U;

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
    msg.setTimeStamp(0.551074841497);
    msg.setSource(34395U);
    msg.setSourceEntity(24U);
    msg.setDestination(46328U);
    msg.setDestinationEntity(229U);
    msg.u = 0.62848688642;
    msg.v = 0.318869337273;
    msg.w = 0.0182403055831;
    msg.p = 0.681196436617;
    msg.q = 0.97037503554;
    msg.r = 0.60592653648;
    msg.flags = 192U;

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
    msg.setTimeStamp(0.065923920142);
    msg.setSource(47790U);
    msg.setSourceEntity(34U);
    msg.setDestination(58188U);
    msg.setDestinationEntity(104U);
    msg.u = 0.530454435333;
    msg.v = 0.151387213397;
    msg.w = 0.579205604574;
    msg.p = 0.438085199235;
    msg.q = 0.935481756243;
    msg.r = 0.319621631872;
    msg.flags = 84U;

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
    msg.setTimeStamp(0.114451311149);
    msg.setSource(35533U);
    msg.setSourceEntity(205U);
    msg.setDestination(8333U);
    msg.setDestinationEntity(146U);
    msg.path_ref = 3761264086U;
    msg.start_lat = 0.862076252163;
    msg.start_lon = 0.682641560348;
    msg.start_z = 0.875574155838;
    msg.start_z_units = 155U;
    msg.end_lat = 0.676397128767;
    msg.end_lon = 0.4819256579;
    msg.end_z = 0.128059487938;
    msg.end_z_units = 58U;
    msg.lradius = 0.821805731684;
    msg.flags = 120U;
    msg.x = 0.723757921978;
    msg.y = 0.11171026154;
    msg.z = 0.355747296821;
    msg.vx = 0.117364970133;
    msg.vy = 0.706162334087;
    msg.vz = 0.291891008691;
    msg.course_error = 0.789179632645;
    msg.eta = 43729U;

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
    msg.setTimeStamp(0.137613654049);
    msg.setSource(35209U);
    msg.setSourceEntity(76U);
    msg.setDestination(29102U);
    msg.setDestinationEntity(16U);
    msg.path_ref = 807040121U;
    msg.start_lat = 0.678802312152;
    msg.start_lon = 0.213381023823;
    msg.start_z = 0.517037323817;
    msg.start_z_units = 4U;
    msg.end_lat = 0.19861062745;
    msg.end_lon = 0.506811481456;
    msg.end_z = 0.4672012291;
    msg.end_z_units = 163U;
    msg.lradius = 0.217994387432;
    msg.flags = 94U;
    msg.x = 0.974851520831;
    msg.y = 0.691463426769;
    msg.z = 0.31993178035;
    msg.vx = 0.533638666301;
    msg.vy = 0.66942957953;
    msg.vz = 0.810628990109;
    msg.course_error = 0.430290801302;
    msg.eta = 38175U;

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
    msg.setTimeStamp(0.141726022788);
    msg.setSource(60583U);
    msg.setSourceEntity(200U);
    msg.setDestination(34029U);
    msg.setDestinationEntity(8U);
    msg.path_ref = 729270891U;
    msg.start_lat = 0.748711453601;
    msg.start_lon = 0.922472111678;
    msg.start_z = 0.590599183885;
    msg.start_z_units = 252U;
    msg.end_lat = 0.211061536343;
    msg.end_lon = 0.779006543609;
    msg.end_z = 0.806658353223;
    msg.end_z_units = 169U;
    msg.lradius = 0.320568877186;
    msg.flags = 57U;
    msg.x = 0.542235204497;
    msg.y = 0.91525967883;
    msg.z = 0.190580135948;
    msg.vx = 0.643425841984;
    msg.vy = 0.817178318837;
    msg.vz = 0.917930507673;
    msg.course_error = 0.937541475748;
    msg.eta = 15901U;

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
    msg.setTimeStamp(0.485671558126);
    msg.setSource(37202U);
    msg.setSourceEntity(253U);
    msg.setDestination(62484U);
    msg.setDestinationEntity(28U);
    msg.k = 0.495209574034;
    msg.m = 0.181448396821;
    msg.n = 0.0176071565929;

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
    msg.setTimeStamp(0.745837068745);
    msg.setSource(36226U);
    msg.setSourceEntity(125U);
    msg.setDestination(15313U);
    msg.setDestinationEntity(57U);
    msg.k = 0.997756230629;
    msg.m = 0.798942498204;
    msg.n = 0.89903785029;

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
    msg.setTimeStamp(0.452980860493);
    msg.setSource(23994U);
    msg.setSourceEntity(13U);
    msg.setDestination(62195U);
    msg.setDestinationEntity(75U);
    msg.k = 0.489008720374;
    msg.m = 0.268525668657;
    msg.n = 0.23465083211;

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
    msg.setTimeStamp(0.528525137066);
    msg.setSource(41929U);
    msg.setSourceEntity(211U);
    msg.setDestination(53567U);
    msg.setDestinationEntity(168U);
    msg.p = 0.705206272182;
    msg.i = 0.511716430523;
    msg.d = 0.750111651097;
    msg.a = 0.0795810902242;

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
    msg.setTimeStamp(0.977479297159);
    msg.setSource(35037U);
    msg.setSourceEntity(198U);
    msg.setDestination(51906U);
    msg.setDestinationEntity(221U);
    msg.p = 0.0432098582474;
    msg.i = 0.115988660989;
    msg.d = 0.640576324481;
    msg.a = 0.429596544189;

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
    msg.setTimeStamp(0.829332385895);
    msg.setSource(61198U);
    msg.setSourceEntity(233U);
    msg.setDestination(36592U);
    msg.setDestinationEntity(72U);
    msg.p = 0.742316499148;
    msg.i = 0.820131876039;
    msg.d = 0.289254754543;
    msg.a = 0.905415233678;

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
    msg.setTimeStamp(0.973955805759);
    msg.setSource(39339U);
    msg.setSourceEntity(136U);
    msg.setDestination(63341U);
    msg.setDestinationEntity(208U);
    msg.op = 185U;

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
    msg.setTimeStamp(0.322415960759);
    msg.setSource(8108U);
    msg.setSourceEntity(240U);
    msg.setDestination(2964U);
    msg.setDestinationEntity(209U);
    msg.op = 118U;

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
    msg.setTimeStamp(0.799512185296);
    msg.setSource(64061U);
    msg.setSourceEntity(30U);
    msg.setDestination(41016U);
    msg.setDestinationEntity(51U);
    msg.op = 174U;

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
    msg.setTimeStamp(0.132324090265);
    msg.setSource(15530U);
    msg.setSourceEntity(78U);
    msg.setDestination(33624U);
    msg.setDestinationEntity(208U);
    msg.x = 0.301020847263;
    msg.y = 0.937709985564;
    msg.z = 0.780155543371;
    msg.vx = 0.236610147464;
    msg.vy = 0.28473505292;
    msg.vz = 0.68741160917;
    msg.ax = 0.418066922254;
    msg.ay = 0.732673086484;
    msg.az = 0.796520541812;
    msg.flags = 60191U;

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
    msg.setTimeStamp(0.160744168197);
    msg.setSource(6166U);
    msg.setSourceEntity(16U);
    msg.setDestination(8832U);
    msg.setDestinationEntity(101U);
    msg.x = 0.407191217276;
    msg.y = 0.220235039876;
    msg.z = 0.474084038596;
    msg.vx = 0.342939753129;
    msg.vy = 0.22587971611;
    msg.vz = 0.119836199943;
    msg.ax = 0.594269791555;
    msg.ay = 0.123612047772;
    msg.az = 0.0287409535017;
    msg.flags = 19169U;

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
    msg.setTimeStamp(0.915005651716);
    msg.setSource(64167U);
    msg.setSourceEntity(83U);
    msg.setDestination(802U);
    msg.setDestinationEntity(95U);
    msg.x = 0.596796015518;
    msg.y = 0.672261180901;
    msg.z = 0.367330488185;
    msg.vx = 0.252362725479;
    msg.vy = 0.583596652115;
    msg.vz = 0.588632510945;
    msg.ax = 0.169685709844;
    msg.ay = 0.16995182872;
    msg.az = 0.14285209298;
    msg.flags = 21642U;

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
    msg.setTimeStamp(0.689519486168);
    msg.setSource(49611U);
    msg.setSourceEntity(112U);
    msg.setDestination(1764U);
    msg.setDestinationEntity(56U);
    msg.value = 0.239231698729;

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
    msg.setTimeStamp(0.542287855959);
    msg.setSource(34934U);
    msg.setSourceEntity(22U);
    msg.setDestination(47216U);
    msg.setDestinationEntity(177U);
    msg.value = 0.515343204132;

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
    msg.setTimeStamp(0.293076948027);
    msg.setSource(5600U);
    msg.setSourceEntity(80U);
    msg.setDestination(38822U);
    msg.setDestinationEntity(80U);
    msg.value = 0.504514009068;

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
    msg.setTimeStamp(0.668537324012);
    msg.setSource(33076U);
    msg.setSourceEntity(124U);
    msg.setDestination(30789U);
    msg.setDestinationEntity(250U);
    msg.timeout = 16116U;
    msg.lat = 0.276517524548;
    msg.lon = 0.338274121665;
    msg.z = 0.395563094217;
    msg.z_units = 135U;
    msg.speed = 0.779335935557;
    msg.speed_units = 78U;
    msg.roll = 0.896700959495;
    msg.pitch = 0.0947278731361;
    msg.yaw = 0.279185132113;
    msg.custom.assign("VQYCVUVVXCQHBINIMYOPVFNCYALMOCRFARGHKUMHXUOGRAGWJRXZWXFODMFGHJTSGFYNAECZPZJ");

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
    msg.setTimeStamp(0.447484138916);
    msg.setSource(13838U);
    msg.setSourceEntity(46U);
    msg.setDestination(25228U);
    msg.setDestinationEntity(151U);
    msg.timeout = 48287U;
    msg.lat = 0.785421890077;
    msg.lon = 0.263298422842;
    msg.z = 0.777430246449;
    msg.z_units = 247U;
    msg.speed = 0.225772159843;
    msg.speed_units = 242U;
    msg.roll = 0.131477994621;
    msg.pitch = 0.322172394317;
    msg.yaw = 0.45844705842;
    msg.custom.assign("SFNDAQLBIQZHBFIGXGPACVMNMTBWXYESPGPMJHCDNJMIBLXQXZBKTLVOQNXKITWKHHOBOUQNLXOSKVUJNIEQRAEJXJLTOOIDZZDWSNVOFUEQSSKGEXRUJGYHMPXUZZYAOMBLARKJYOXLRCEYEFBTSTHRPODCDMSMVWDPPWZLQIDAYCYHJZYWKLKEFMVWUACIYRUKPUFUJGMBFRCUIBFWTYVAWVNCZCATVGDGC");

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
    msg.setTimeStamp(0.234058996312);
    msg.setSource(30514U);
    msg.setSourceEntity(161U);
    msg.setDestination(62774U);
    msg.setDestinationEntity(190U);
    msg.timeout = 64639U;
    msg.lat = 0.985445944653;
    msg.lon = 0.805906806645;
    msg.z = 0.950585807745;
    msg.z_units = 57U;
    msg.speed = 0.74945677766;
    msg.speed_units = 161U;
    msg.roll = 0.0508229273811;
    msg.pitch = 0.549137340165;
    msg.yaw = 0.536689291771;
    msg.custom.assign("CFAFZXYAXVRDNONHUXZOSAWSJVCJPIIESZMKRLQTVRKMAEACUGQEASUGIYGYTPRDJBSKFLOEVCZDDR");

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
    msg.setTimeStamp(0.777796612134);
    msg.setSource(10299U);
    msg.setSourceEntity(106U);
    msg.setDestination(38599U);
    msg.setDestinationEntity(210U);
    msg.timeout = 16623U;
    msg.lat = 0.715742629432;
    msg.lon = 0.596511504245;
    msg.z = 0.841368922557;
    msg.z_units = 34U;
    msg.speed = 0.28093372831;
    msg.speed_units = 146U;
    msg.duration = 1514U;
    msg.radius = 0.0438527381361;
    msg.flags = 236U;
    msg.custom.assign("KYWTRIHRWCBSGYUPDEEPNTOLMVWXQSKUDOOSRPFMAEHIVUCPAXSXGBPPCOJQBFYHHGSGTAJJIMTWDUWTOIBNZNXJVLMEBSTWYKTAZBPRZYZJWBUNXLXZE");

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
    msg.setTimeStamp(0.667150854702);
    msg.setSource(41366U);
    msg.setSourceEntity(13U);
    msg.setDestination(43794U);
    msg.setDestinationEntity(218U);
    msg.timeout = 10680U;
    msg.lat = 0.490846420124;
    msg.lon = 0.411984657284;
    msg.z = 0.585602973373;
    msg.z_units = 1U;
    msg.speed = 0.112792020498;
    msg.speed_units = 15U;
    msg.duration = 53484U;
    msg.radius = 0.158937555213;
    msg.flags = 181U;
    msg.custom.assign("SVRUKPQAEZZKGMYPMZGEBRRIVACFGG");

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
    msg.setTimeStamp(0.311470187731);
    msg.setSource(52230U);
    msg.setSourceEntity(208U);
    msg.setDestination(34679U);
    msg.setDestinationEntity(191U);
    msg.timeout = 42773U;
    msg.lat = 0.415951377912;
    msg.lon = 0.144454401909;
    msg.z = 0.245461521634;
    msg.z_units = 53U;
    msg.speed = 0.342686870314;
    msg.speed_units = 222U;
    msg.duration = 11950U;
    msg.radius = 0.144583845788;
    msg.flags = 182U;
    msg.custom.assign("EOBJTTGUOWFRANZJJKLCOQSWVDTEVSDRDVNKFRAJWIAYOUFXUDSMABTZQQANBHVAARILPEHMAKDEXCTQHNESSGYQBKUOZKWUBXSYUHNIKNPIMPZBLWOFTZXOFSREYLYOSPKSGGHYVW");

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
    msg.setTimeStamp(0.885843505032);
    msg.setSource(40510U);
    msg.setSourceEntity(94U);
    msg.setDestination(50355U);
    msg.setDestinationEntity(207U);
    msg.custom.assign("ETQGLUISRLTJLZIMADQZWLEQKJHJFDLEOSSCPXRRSJICIIJSXWLNFWIAUOETRVGGGMDDXNKU");

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
    msg.setTimeStamp(0.463640609382);
    msg.setSource(29560U);
    msg.setSourceEntity(24U);
    msg.setDestination(56529U);
    msg.setDestinationEntity(134U);
    msg.custom.assign("CINWJVSNWXENEUFBZZGGZEJRKOSOZIUIJAIDEWOMEARRCNPFAIMMYHF");

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
    msg.setTimeStamp(0.963702597566);
    msg.setSource(19638U);
    msg.setSourceEntity(65U);
    msg.setDestination(20218U);
    msg.setDestinationEntity(72U);
    msg.custom.assign("DDYASAJLDOUFKHLEANBFWNAMHNKZZXKSVLJTJKOPHNBYLXPBOYUFZZOGVRCCWOQNAXNFEEGBFBXVSGMYJTNCFBCIOQZMYTALDRQPKQVTQPAVLMICRYCOKCUGGRBSWNFEUIUQYDITVLWUFZMIIJQVIXWJHQTIDW");

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
    msg.setTimeStamp(0.247191932252);
    msg.setSource(33149U);
    msg.setSourceEntity(156U);
    msg.setDestination(47804U);
    msg.setDestinationEntity(50U);
    msg.timeout = 38609U;
    msg.lat = 0.18250088218;
    msg.lon = 0.293084982414;
    msg.z = 0.617985981068;
    msg.z_units = 144U;
    msg.duration = 332U;
    msg.speed = 0.603081936948;
    msg.speed_units = 166U;
    msg.type = 136U;
    msg.radius = 0.184424181977;
    msg.length = 0.776877594535;
    msg.bearing = 0.420624424394;
    msg.direction = 178U;
    msg.custom.assign("YWRBWOMHLRKBWGSOZGNEQHYXTUIADTSKCQYLTJFCNJKPLLJXZOWLSLHJCZQVFNNRJNMGYRPCHDKTWTGPADJNFIEMBKHYCHGOVXDZYIWOUVREBXOLDRTSSDEDAEVLQHQMPFPMFESMFDNQCGVBJIXIZUWBBRSWETRUASZWLJURHBYPSQEBGQQP");

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
    msg.setTimeStamp(0.512696253864);
    msg.setSource(37846U);
    msg.setSourceEntity(1U);
    msg.setDestination(6683U);
    msg.setDestinationEntity(93U);
    msg.timeout = 43772U;
    msg.lat = 0.303276682505;
    msg.lon = 0.812438989648;
    msg.z = 0.886635009869;
    msg.z_units = 69U;
    msg.duration = 19150U;
    msg.speed = 0.601460928583;
    msg.speed_units = 106U;
    msg.type = 4U;
    msg.radius = 0.571003645069;
    msg.length = 0.0354361176776;
    msg.bearing = 0.132563234507;
    msg.direction = 26U;
    msg.custom.assign("RRGAQIBYIZLWAQVTKKQWTDTQFBBKOYJUTJVXNFHUWZNBMHRZUBIHNEMZBJLFUAEUFVDRXDSPWMROMMEMHZJHGTGILFNSEGYXACVXOJVFZNNXAZCSJBJTQDEMACBXANPGUGWIMCPPRDSILSTXWTHHCXXKIPQOFYKOWFVZYKPUIZOYKURIGJTMMYNQPKAYPNOUY");

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
    msg.setTimeStamp(0.950985404618);
    msg.setSource(189U);
    msg.setSourceEntity(58U);
    msg.setDestination(34758U);
    msg.setDestinationEntity(122U);
    msg.timeout = 14916U;
    msg.lat = 0.731343092736;
    msg.lon = 0.181989360069;
    msg.z = 0.364098103547;
    msg.z_units = 90U;
    msg.duration = 28500U;
    msg.speed = 0.903021708589;
    msg.speed_units = 106U;
    msg.type = 90U;
    msg.radius = 0.0313746091464;
    msg.length = 0.598125809606;
    msg.bearing = 0.372389365017;
    msg.direction = 155U;
    msg.custom.assign("YPKGNBRUJLGFKNQYWEPMZPJKVCTLRDBUKOIQINFRWSVNTFFECPAIFXGFZYMJWRDGXIXJEYZESNKBBUOVTJXSXRPZWLEHVPNKWKHMGLFHUAQCMYKELXDESHTMPLUXGUVRXXSOHMQLIRFQFDDHVWLVHSUZHADSMEJTYICZRGMLYKGOCCTCCMYVRIVTJRZUPUCHPATFQDAWE");

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
    msg.setTimeStamp(0.37662839629);
    msg.setSource(5805U);
    msg.setSourceEntity(239U);
    msg.setDestination(6117U);
    msg.setDestinationEntity(178U);
    msg.duration = 55118U;
    msg.custom.assign("DWQHHNMGQCRNYSSKGWSYCPFV");

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
    msg.setTimeStamp(0.357831994351);
    msg.setSource(32089U);
    msg.setSourceEntity(163U);
    msg.setDestination(43948U);
    msg.setDestinationEntity(7U);
    msg.duration = 33494U;
    msg.custom.assign("GBUBKHFZBJBRMVSLLDQGBTMOLQYZTRMJUFVDAPIXDJCTJCSXPYWWSFUZXZYRYDJPKJIE");

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
    msg.setTimeStamp(0.316748949232);
    msg.setSource(360U);
    msg.setSourceEntity(122U);
    msg.setDestination(35387U);
    msg.setDestinationEntity(238U);
    msg.duration = 59624U;
    msg.custom.assign("WCRZXUGEPHFQXFJHKUHQJHELOJABHCXFPLDVLVEIOXVYMRPQPHYSUFCEATZXXWEMSGCVKQXAZJQGSDBNOLKBHYTWDEVBEVYORIFCDECOJZDDCMX");

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
    msg.setTimeStamp(0.29210415033);
    msg.setSource(12944U);
    msg.setSourceEntity(108U);
    msg.setDestination(62996U);
    msg.setDestinationEntity(40U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.383640150023;
    msg.control.set(tmp_msg_0);
    msg.duration = 16295U;
    msg.custom.assign("QUSBLXKYRJPNQXDBALXIESGGERZEOJSJDIPNFOAVZFVQGYSHTCPHOLMRZZXBOGRMHNPITGIJNLWWVUFQWFMCKWJSIFMTIKYNBXDTGJIBOECBBJHXIETQYPMEGNIUCTWDMKQDRKLSLQDJUNDKYWWANHBWUKGIMPEKHANYXFCUHAGCTRRVUAPGKLSURVHZYXAKCHHZZPZQOTDAZLBVAQVTXPSRVTVZDEVSJPLWXFMEOCUWAOY");

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
    msg.setTimeStamp(0.0295894126454);
    msg.setSource(16676U);
    msg.setSourceEntity(95U);
    msg.setDestination(43127U);
    msg.setDestinationEntity(188U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.228593051719;
    tmp_msg_0.z_units = 124U;
    msg.control.set(tmp_msg_0);
    msg.duration = 45124U;
    msg.custom.assign("KFIQWABYFBCPMQZLWJYIFAROEBXZZCRNKETUQXTUIRBEETNGDBJCODJHNQGWDWDAJHADRYUORYCGPCGVIOJANYQISDHOWOIRZGPLMYQNVUJDKSDVVHOTFKXGKKLTXIHWHUPRSNMQZFHLHEFPPXIRTAJXKNZZUWUYCIPXLJHPLBBLPXSJKDREAZLXTESXLVQEECCMHPOTVUTSMVZVQMSONYZCLDVSFQVTYNEFUJABWGSYGUAKBS");

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
    msg.setTimeStamp(0.777444263848);
    msg.setSource(18004U);
    msg.setSourceEntity(87U);
    msg.setDestination(42665U);
    msg.setDestinationEntity(234U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.377296305402;
    tmp_msg_0.speed_units = 189U;
    msg.control.set(tmp_msg_0);
    msg.duration = 18274U;
    msg.custom.assign("KBJKRRDFRDHUFARNLNNZJJSQNUYINRLQGEUAEIKOFLRRGVIVIEGTEAYZASPUDFEAITQPHPHWLGFOXAUBCWHGDGMMHTEETEQFVWFRGKFBJZSANYTPICNDSSWNAIADMMLKZQRZYWSKKYVGCTZJBXAWUQCOHNGCOHLXJLUQYXPBZWJHVWPHMLVOKLOQZUGNHSKFBQZMQFMMYEUTCXOVXVSIMTPXLSTRJCDPCJYUJC");

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
    msg.setTimeStamp(0.0607689658957);
    msg.setSource(53903U);
    msg.setSourceEntity(49U);
    msg.setDestination(18367U);
    msg.setDestinationEntity(96U);
    msg.timeout = 43557U;
    msg.lat = 0.291714354078;
    msg.lon = 0.175184169854;
    msg.z = 0.98508520955;
    msg.z_units = 167U;
    msg.speed = 0.0521245459647;
    msg.speed_units = 131U;
    msg.bearing = 0.171231618015;
    msg.cross_angle = 0.0784358203769;
    msg.width = 0.705658988167;
    msg.length = 0.688198435904;
    msg.hstep = 0.853989403905;
    msg.coff = 208U;
    msg.alternation = 188U;
    msg.flags = 33U;
    msg.custom.assign("PULLWYGLPGWFIGYYOMPMKBQJQEWJOPJUJGKEUIBKHRUZUZMSTOTDUZVNIOUNNGSEPSFFMDWOYWSXWKVDINBWCAIUNYZGXDRTHTDDJZXVMVSHJAUIEXFCWJHLAVOF");

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
    msg.setTimeStamp(0.213214807974);
    msg.setSource(13047U);
    msg.setSourceEntity(64U);
    msg.setDestination(48131U);
    msg.setDestinationEntity(163U);
    msg.timeout = 15550U;
    msg.lat = 0.467067198296;
    msg.lon = 0.829718988116;
    msg.z = 0.960381442648;
    msg.z_units = 136U;
    msg.speed = 0.74949649245;
    msg.speed_units = 223U;
    msg.bearing = 0.162546817097;
    msg.cross_angle = 0.720119338813;
    msg.width = 0.647198791459;
    msg.length = 0.409387042482;
    msg.hstep = 0.211427672588;
    msg.coff = 61U;
    msg.alternation = 5U;
    msg.flags = 212U;
    msg.custom.assign("YAOPAHYUTXLJKSINNQVTQNWXIUYCJFTFCNJBFORBUXRDPPSCASXPKGLEVRUEJNTCYJIUDLWZWIVDMTWNNMJFSUYFCZIIQZIIRCAYDHAFDZAQAOQSZLHUXAMB");

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
    msg.setTimeStamp(0.269111142336);
    msg.setSource(51587U);
    msg.setSourceEntity(55U);
    msg.setDestination(1732U);
    msg.setDestinationEntity(215U);
    msg.timeout = 14436U;
    msg.lat = 0.689863715749;
    msg.lon = 0.673151302639;
    msg.z = 0.551322799509;
    msg.z_units = 161U;
    msg.speed = 0.0140022645433;
    msg.speed_units = 7U;
    msg.bearing = 0.848582178457;
    msg.cross_angle = 0.480575846385;
    msg.width = 0.985443869761;
    msg.length = 0.982830405474;
    msg.hstep = 0.717144176646;
    msg.coff = 61U;
    msg.alternation = 3U;
    msg.flags = 196U;
    msg.custom.assign("EVQXQDNZFQCSUMFXJJJRADSEEBECCBBIZROMOTYLNQGBZSQLDGTLBIZUUPWQHTURNJJMAWZCBHYVHYIGZODIAZTRFQMAEGNPSJWNMSCERRVALQMLFSUNZNUAXDHTOHGWNYJISTLRSSNREVGBAJIXQIFFUUZKYVXIAIXOKTGYYLVWVCXWKVMLHYKR");

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
    msg.setTimeStamp(0.983398314646);
    msg.setSource(10727U);
    msg.setSourceEntity(140U);
    msg.setDestination(58465U);
    msg.setDestinationEntity(97U);
    msg.timeout = 34602U;
    msg.lat = 0.144738568771;
    msg.lon = 0.727196298422;
    msg.z = 0.738205297301;
    msg.z_units = 45U;
    msg.speed = 0.984975942457;
    msg.speed_units = 64U;
    msg.custom.assign("PZOSVUDFEORVLQKMCWRUQAFGHIIFIEUBEJGTZRTPRNOEZNUPZPYDTPQYBNYAQSJRTXCSJNQQVWNGIYIXDIJZHOMMZJVTUAPSCVYMTNXOGXEJTBHESDFLWVFSJEJLOWMKGHAUZYLKRLFHDECLZMOEVDOLARAWXUDKIUCGOUNFALWVQXFYKXHKGVKAGKRBIJRSBGWITCPXBSMPSRDYOFVYZMFCHTJCIDNNCHHWPANWUYBDTQBZHG");

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
    msg.setTimeStamp(0.356596312349);
    msg.setSource(235U);
    msg.setSourceEntity(247U);
    msg.setDestination(7179U);
    msg.setDestinationEntity(220U);
    msg.timeout = 54710U;
    msg.lat = 0.261171470241;
    msg.lon = 0.346936533746;
    msg.z = 0.0547348564415;
    msg.z_units = 88U;
    msg.speed = 0.0423366954305;
    msg.speed_units = 27U;
    msg.custom.assign("IWTCOVKTDGGGPOYQSVMAR");

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
    msg.setTimeStamp(0.273592555522);
    msg.setSource(32389U);
    msg.setSourceEntity(34U);
    msg.setDestination(43894U);
    msg.setDestinationEntity(153U);
    msg.timeout = 55448U;
    msg.lat = 0.790725210627;
    msg.lon = 0.159381852096;
    msg.z = 0.29687096654;
    msg.z_units = 220U;
    msg.speed = 0.0983166611599;
    msg.speed_units = 146U;
    msg.custom.assign("YLJFCOTSGZHFSKMRVJQZGHSCCWDBEIQKUVZYP");

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
    msg.setTimeStamp(0.272452943347);
    msg.setSource(65455U);
    msg.setSourceEntity(119U);
    msg.setDestination(27939U);
    msg.setDestinationEntity(184U);
    msg.x = 0.152590867343;
    msg.y = 0.457016289938;
    msg.z = 0.141481495216;

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
    msg.setTimeStamp(0.366851927352);
    msg.setSource(43646U);
    msg.setSourceEntity(38U);
    msg.setDestination(60330U);
    msg.setDestinationEntity(134U);
    msg.x = 0.172139689036;
    msg.y = 0.500798801737;
    msg.z = 0.929913602575;

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
    msg.setTimeStamp(0.327250707051);
    msg.setSource(19869U);
    msg.setSourceEntity(163U);
    msg.setDestination(62036U);
    msg.setDestinationEntity(58U);
    msg.x = 0.745426111195;
    msg.y = 0.291021816653;
    msg.z = 0.21070571819;

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
    msg.setTimeStamp(0.0489841902156);
    msg.setSource(46074U);
    msg.setSourceEntity(242U);
    msg.setDestination(39987U);
    msg.setDestinationEntity(187U);
    msg.timeout = 14400U;
    msg.lat = 0.833610530779;
    msg.lon = 0.380906770357;
    msg.z = 0.0165605089653;
    msg.z_units = 78U;
    msg.amplitude = 0.615756992097;
    msg.pitch = 0.51737162149;
    msg.speed = 0.540076240298;
    msg.speed_units = 14U;
    msg.custom.assign("XEWRGMTUJHFHSZIWYRVRKGICFYWBGTMYVJISENJVXLAIQSVVUPRYYUBNLQQSBNSCHLJZFONMPFPWJCKPXANBVSCOQMZLTYCCEHZZTOOANYADRHQUXXAEWL");

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
    msg.setTimeStamp(0.18141031255);
    msg.setSource(29246U);
    msg.setSourceEntity(220U);
    msg.setDestination(24326U);
    msg.setDestinationEntity(46U);
    msg.timeout = 49429U;
    msg.lat = 0.653079623792;
    msg.lon = 0.107668662493;
    msg.z = 0.187169200113;
    msg.z_units = 225U;
    msg.amplitude = 0.519457792703;
    msg.pitch = 0.961004447528;
    msg.speed = 0.310023393063;
    msg.speed_units = 48U;
    msg.custom.assign("GZQAHXVAGMHQTVFIUXFIVLHHEZUXBFWWGQPSACXQEDYLPDXMABUMWEURKOUXBKDGCRMFXZHWSWVDAWEWOCCRZMULKVIJVQVEJJMUITFTROQNTRWWSLSQLNNPBRKRETZAASXBOTBSVQDCCRSFPIGNHDIYZVTEGFYNCDIYOPPSGZMJNENA");

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
    msg.setTimeStamp(0.750031915448);
    msg.setSource(6509U);
    msg.setSourceEntity(55U);
    msg.setDestination(55456U);
    msg.setDestinationEntity(253U);
    msg.timeout = 20780U;
    msg.lat = 0.250752849085;
    msg.lon = 0.23539674311;
    msg.z = 0.450186774192;
    msg.z_units = 3U;
    msg.amplitude = 0.128091356726;
    msg.pitch = 0.203153719517;
    msg.speed = 0.995922298984;
    msg.speed_units = 141U;
    msg.custom.assign("TMSVFAXMJTRRHMWGHFYMBBCBXOKGUADDRLHZCQDYUYVRUWJLNSNOLJSDIAVCKBOHWYTMZCHLNBDBDYFPNBHOQWYYQYUZGPTUVCOXXSUMDQCZQPEJBHOWBLLSTLVXZKROVCKOETGGETQZSEPWGUKKWSPYKZFUVREJAKIOLVPALGNQRMCIIMPXGFEGQXARZDQHKAEWZFTECRMVFSXZPITIUGICOJSFWEILAVSAM");

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
    msg.setTimeStamp(0.0410883119881);
    msg.setSource(7045U);
    msg.setSourceEntity(65U);
    msg.setDestination(26998U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.193338682905);
    msg.setSource(39919U);
    msg.setSourceEntity(224U);
    msg.setDestination(45600U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.413870314113);
    msg.setSource(63934U);
    msg.setSourceEntity(78U);
    msg.setDestination(6228U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.387884042428);
    msg.setSource(38859U);
    msg.setSourceEntity(143U);
    msg.setDestination(16104U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.000720855010896;
    msg.lon = 0.784538890606;
    msg.z = 0.0898063105934;
    msg.z_units = 220U;
    msg.radius = 0.26682636742;
    msg.duration = 50454U;
    msg.speed = 0.996785854377;
    msg.speed_units = 218U;
    msg.custom.assign("HXUDOLIAZEFEAXQBKRYHLCEJJRCHXXDWQAJYRHBMRMZILCUPQEBMIBCWUBDQVGXYJUQRHR");

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
    msg.setTimeStamp(0.274313027988);
    msg.setSource(26058U);
    msg.setSourceEntity(133U);
    msg.setDestination(48267U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.483530460197;
    msg.lon = 0.186261971281;
    msg.z = 0.0235072051821;
    msg.z_units = 193U;
    msg.radius = 0.533051663247;
    msg.duration = 63483U;
    msg.speed = 0.559254691159;
    msg.speed_units = 247U;
    msg.custom.assign("OOBERISCORQESVWUGUKHLSFIIYQYMYMISMEQTODRPDRSRTOJDSYWUOZKXIXYCXOQXRCABFYWZMGKDKBHLPIDQFABXLYPULGEAJBTVZCJZCNFMHVWWWKIZWZGXMPCLEERXBAPJGJNYUNHHABGOMUMGVTPJEXRAHNEYQPVVWDGHQTKFMUBJRSBCPKILQNVCONLCKNDETTDHTNAZJJAVMD");

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
    msg.setTimeStamp(0.661074023306);
    msg.setSource(12156U);
    msg.setSourceEntity(241U);
    msg.setDestination(51559U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.509098468949;
    msg.lon = 0.175146611058;
    msg.z = 0.655268416316;
    msg.z_units = 191U;
    msg.radius = 0.169524076427;
    msg.duration = 30903U;
    msg.speed = 0.859055462468;
    msg.speed_units = 195U;
    msg.custom.assign("IEYXCUXHWQZIIVEGXZEBKYEPOYGSPTXPMVSZKDLAJBKAHVBTUVNJINVNRPDEEBLWKIUQRHSRPJSTHMDCRLKCNCBSOXXGBYWGZZRM");

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
    msg.setTimeStamp(0.0199577856246);
    msg.setSource(7325U);
    msg.setSourceEntity(158U);
    msg.setDestination(29765U);
    msg.setDestinationEntity(20U);
    msg.timeout = 32888U;
    msg.flags = 153U;
    msg.lat = 0.534408217563;
    msg.lon = 0.22921697998;
    msg.start_z = 0.295986147593;
    msg.start_z_units = 236U;
    msg.end_z = 0.725003140375;
    msg.end_z_units = 139U;
    msg.radius = 0.878183376638;
    msg.speed = 0.954704639313;
    msg.speed_units = 105U;
    msg.custom.assign("UKOZNMLYJVJNPXSCVXKEREDSJGTIBZGSTNIKWUDAONEPTOSQDRLFETQMZOJCYJPPQZVNHFGOWREMWIYFPQQXDFDBUITHRWBLVDQOSNMPJFLZXCLWHNVEKXCWKMKPZXAYPWIMXYOFAJBEGQQCOKTAOLASKQCOAWGAMUDEMDAUTZFUHDHSWCVXPRRVBGIJXSF");

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
    msg.setTimeStamp(0.066723392867);
    msg.setSource(56060U);
    msg.setSourceEntity(103U);
    msg.setDestination(53982U);
    msg.setDestinationEntity(208U);
    msg.timeout = 5623U;
    msg.flags = 164U;
    msg.lat = 0.586285751078;
    msg.lon = 0.950414435834;
    msg.start_z = 0.451536015782;
    msg.start_z_units = 58U;
    msg.end_z = 0.895333673083;
    msg.end_z_units = 43U;
    msg.radius = 0.861073271445;
    msg.speed = 0.28335302847;
    msg.speed_units = 254U;
    msg.custom.assign("DXSNUUPWIISEUVTMJPHFUZYQDLVDIXGNYFZXGLTWOKCDJASLZCIUJXLWMOOCFASYRYARBNYWJGSNJBXMEZZGPTRWESQXQDZSFABIQJACPBGCVZOCEUZVEFC");

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
    msg.setTimeStamp(0.642547296353);
    msg.setSource(39693U);
    msg.setSourceEntity(221U);
    msg.setDestination(5486U);
    msg.setDestinationEntity(230U);
    msg.timeout = 41773U;
    msg.flags = 133U;
    msg.lat = 0.969631955507;
    msg.lon = 0.323556446603;
    msg.start_z = 0.167394709621;
    msg.start_z_units = 26U;
    msg.end_z = 0.0365190286261;
    msg.end_z_units = 22U;
    msg.radius = 0.91170791614;
    msg.speed = 0.58623930137;
    msg.speed_units = 221U;
    msg.custom.assign("NPRCSVWJYQAVEPBCGHINCKLOMCFASRQTQZGNOAJKHORRHGRGLMPQUVLIXEHAFPANDBLSGSIFXQQVCOALDTZKMVJBLPBUGJLYMBOQVFOYVSMBTUKURXWRNWKTFDTXYUAUHQCNLEMJYUHFDCJNZUW");

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
    msg.setTimeStamp(0.863722907914);
    msg.setSource(32513U);
    msg.setSourceEntity(92U);
    msg.setDestination(58158U);
    msg.setDestinationEntity(229U);
    msg.timeout = 53871U;
    msg.lat = 0.530500677518;
    msg.lon = 0.765612544713;
    msg.z = 0.712400360779;
    msg.z_units = 100U;
    msg.speed = 0.587728155925;
    msg.speed_units = 5U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.553658285381;
    tmp_msg_0.y = 0.221820304814;
    tmp_msg_0.z = 0.943738055841;
    tmp_msg_0.t = 0.569599723419;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UYUXGTMTQGOYPZBIWMQEKYKJWMFQIYAVUCQXVPKTEHZDVZBONCWJHHCZLOHMUKOOKIWSBAX");

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
    msg.setTimeStamp(0.207996638702);
    msg.setSource(44598U);
    msg.setSourceEntity(132U);
    msg.setDestination(53938U);
    msg.setDestinationEntity(79U);
    msg.timeout = 64013U;
    msg.lat = 0.79214910106;
    msg.lon = 0.36150234954;
    msg.z = 0.556807265751;
    msg.z_units = 67U;
    msg.speed = 0.10645788907;
    msg.speed_units = 205U;
    msg.custom.assign("DQHFMLUCCIUBBMZ");

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
    msg.setTimeStamp(0.989280003596);
    msg.setSource(4498U);
    msg.setSourceEntity(206U);
    msg.setDestination(32958U);
    msg.setDestinationEntity(153U);
    msg.timeout = 62067U;
    msg.lat = 0.267591738984;
    msg.lon = 0.229274795226;
    msg.z = 0.35840851946;
    msg.z_units = 97U;
    msg.speed = 0.400544892433;
    msg.speed_units = 184U;
    msg.custom.assign("TJZUYKVHYHVKEMFRCVOPUAEIFJIBLBAPRJGCQIDLTBOTSVTDEFZYYKUHYVNECSAHSIWTEXHRJRMZUKGXNFFGALJGDUZWQHLFICNMRMTIPMCIWAFDBGKVOHQZJTDBZW");

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
    msg.setTimeStamp(0.613381241769);
    msg.setSource(20524U);
    msg.setSourceEntity(106U);
    msg.setDestination(39639U);
    msg.setDestinationEntity(190U);
    msg.x = 0.0890942744384;
    msg.y = 0.77023131669;
    msg.z = 0.274122752;
    msg.t = 0.0775542496046;

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
    msg.setTimeStamp(0.786599752126);
    msg.setSource(25378U);
    msg.setSourceEntity(115U);
    msg.setDestination(7926U);
    msg.setDestinationEntity(226U);
    msg.x = 0.14897057828;
    msg.y = 0.999700833358;
    msg.z = 0.128832937201;
    msg.t = 0.226696231585;

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
    msg.setTimeStamp(0.234253244141);
    msg.setSource(20404U);
    msg.setSourceEntity(188U);
    msg.setDestination(62989U);
    msg.setDestinationEntity(50U);
    msg.x = 0.956714443569;
    msg.y = 0.562344609906;
    msg.z = 0.0635652924648;
    msg.t = 0.475316755029;

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
    msg.setTimeStamp(0.286894439322);
    msg.setSource(55252U);
    msg.setSourceEntity(225U);
    msg.setDestination(9853U);
    msg.setDestinationEntity(133U);
    msg.timeout = 8952U;
    msg.name.assign("PTHYUJOLKTNFBCHHBBVKOSQTOSXSXZPNUHNCWFTQCKHFNMOWMFNBGXBKZTEBMGXIILGYIAGKJJHLFGQULFCZTIXFENNJAFYPKIAUBXAMUVJVJARKQODMRRDRUSWTZGKUCRIPEZMQIXOWGYMVSYHOCDQDRNFZEOEJJHJEQGRUSTOCDNEYIBFBMDSXVLQSVEIPWYTYY");
    msg.custom.assign("MIDCVGCORBCWZRZXRHJNDFFKXTQMNZEFWYUGLMZIDELUXOPMUXRCTHRKZDWXIAABAMYGFYJJWQGGRASOSNNVGQSWQAXNAJHTTMJQIPYBMIRFRWQENEDYUBCOZNDQSAONXTTZBGYTMKXCBVRYVPLVLKLFKTHLWLHPCVVZPHBOBWJINLBXSSBSGEFMCYJFQCOZDQP");

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
    msg.setTimeStamp(0.891639769438);
    msg.setSource(13528U);
    msg.setSourceEntity(98U);
    msg.setDestination(40397U);
    msg.setDestinationEntity(18U);
    msg.timeout = 55642U;
    msg.name.assign("FLJUPMMPCNUMWXFXIVHZBQHLHGPDGBNIPZZCZXUZDQUWKNIVTZQRMWUUJYXZYKMTCHGUQBE");
    msg.custom.assign("HUQAFKYMNMNTGLOUKRWFMPUSVVTERYWDRDLIPCUDRTZYQYDRVHKXXLWIUUGKZIMTDTEROBXSIPAFQAEAHMXPHIUJHTQYKAELTBWSJENTVEABOIKCWLFWLJGCHTURDCNXOQNNTDQSOCVJGSMQIPBQFRXEZLAZMXGRAWFIZJ");

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
    msg.setTimeStamp(0.0685197639662);
    msg.setSource(52270U);
    msg.setSourceEntity(94U);
    msg.setDestination(38222U);
    msg.setDestinationEntity(96U);
    msg.timeout = 54763U;
    msg.name.assign("ATUSKOLJISIIDHJDTOEETHQRKCDCSHXUHYMLQIVNBXAWYINEBUXFLLWYBEPKKLMGPDBUWDQSEPFIYIVOLCQFSNHDTMJMWUOUHZOBUJPCOWRFRGFFGYHWJMSDVVQCRUGNTWZJSZARXXFEOQPNKAANMZVXSCZYLEGARAHLTPWWERYMECGDPOVQHJJCJYTFPAZKFVYVETXKKBYNIMZCGLGJMGLTBN");
    msg.custom.assign("OSLLCJXHPBEZQVWZYKKJUUDYNFWBJXKLSAPAORZLQJGYHPQYZWBYVOVNFVRHFJFZLFBPWITSMFVVYITWUSZILRUAUPBBOAQKDAJNFHGTLJXPCNPMRAANGLRGKHKEEOBMYWRHIMDYBXQNTSXGAOOXMCDQWCLEITPXUEADOHGSIJXNVKCPUDQWDXZHEQMTICZKCSTZDSCACRQMPFJLMSVXRIHENWQEEMRGW");

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
    msg.setTimeStamp(0.6243681284);
    msg.setSource(49271U);
    msg.setSourceEntity(128U);
    msg.setDestination(56136U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.0489153256142;
    msg.lon = 0.30760355108;
    msg.z = 0.929833965782;
    msg.z_units = 88U;
    msg.speed = 0.829298235895;
    msg.speed_units = 26U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.633886377422;
    tmp_msg_0.y = 0.820528575754;
    tmp_msg_0.z = 0.288820955611;
    tmp_msg_0.t = 0.737984469651;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.288611271624;
    msg.custom.assign("BZVBXRMVINMYTYRVXKYJKSUSISVTGUIBNOYSLAPRCLMGQISLMADQIQHQNEVERHXACYNWMEYMLDWDZRSOGCZOQOUILXTPHXKWFQTBKDMJJJZRFNFEHBYTIOUXJOBMZXPNAFKFKREYXBLFTPNCKRTDEEDPCNOCHANAJWPIMOBUGHSZIGBVCHTGGEUXHWGAPHQEYCZLJKBDUATURVLFZFUKZKVXSDJADQ");

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
    msg.setTimeStamp(0.934661112477);
    msg.setSource(51732U);
    msg.setSourceEntity(244U);
    msg.setDestination(20758U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.483473953227;
    msg.lon = 0.103790615758;
    msg.z = 0.13640316582;
    msg.z_units = 59U;
    msg.speed = 0.431922790903;
    msg.speed_units = 12U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.743310400888;
    tmp_msg_0.y = 0.518524416488;
    tmp_msg_0.z = 0.266089911223;
    tmp_msg_0.t = 0.78232831833;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.597839281066;
    msg.custom.assign("WUZORSRBBPIWWZMXCGZFXONODUGHYPDJZNJQGESNIZBVDEXWTASFOCCLVPKLAMMYUZTKJMAPAIEVEFIXHFJHUOJMKKVDRXDUQLYNDCEKUQINLCVJEXOPZRNQGANMYKWYQPBUUEUGKOMIWMSATJFCPQLNMKZWYXAIFBVYCTKBQCXNYHJDWQMPY");

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
    msg.setTimeStamp(0.0348871101067);
    msg.setSource(20012U);
    msg.setSourceEntity(203U);
    msg.setDestination(8545U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.829680501665;
    msg.lon = 0.721184632586;
    msg.z = 0.322793184319;
    msg.z_units = 182U;
    msg.speed = 0.71423279484;
    msg.speed_units = 122U;
    msg.start_time = 0.285645352755;
    msg.custom.assign("LUVTCSQSPZMBMLBMDGTXGVKCCZGQYOTSCXRHGBGAYENWZJCVCWFKMMYVBRNPUQJLLDTTKBHHUINECAIXHMWTRMKJZBWKAGGERDWFSXUWIJLDZRNDAFOCEMRNSTDJSBHPARJACDQROIYFYSUU");

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
    msg.setTimeStamp(0.358173843301);
    msg.setSource(17928U);
    msg.setSourceEntity(75U);
    msg.setDestination(5661U);
    msg.setDestinationEntity(182U);
    msg.vid = 55338U;
    msg.off_x = 0.910620257491;
    msg.off_y = 0.237793756126;
    msg.off_z = 0.976516682979;

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
    msg.setTimeStamp(0.994472104587);
    msg.setSource(42411U);
    msg.setSourceEntity(43U);
    msg.setDestination(44268U);
    msg.setDestinationEntity(33U);
    msg.vid = 22106U;
    msg.off_x = 0.550813403982;
    msg.off_y = 0.55032925067;
    msg.off_z = 0.396428642979;

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
    msg.setTimeStamp(0.964994741249);
    msg.setSource(33456U);
    msg.setSourceEntity(160U);
    msg.setDestination(8308U);
    msg.setDestinationEntity(26U);
    msg.vid = 40749U;
    msg.off_x = 0.717095939485;
    msg.off_y = 0.113609781152;
    msg.off_z = 0.40999893219;

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
    msg.setTimeStamp(0.773555693144);
    msg.setSource(35826U);
    msg.setSourceEntity(248U);
    msg.setDestination(29628U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.841394088685);
    msg.setSource(5987U);
    msg.setSourceEntity(40U);
    msg.setDestination(34231U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.881688660918);
    msg.setSource(10860U);
    msg.setSourceEntity(17U);
    msg.setDestination(40035U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.711715804738);
    msg.setSource(12843U);
    msg.setSourceEntity(132U);
    msg.setDestination(37977U);
    msg.setDestinationEntity(168U);
    msg.mid = 36766U;

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
    msg.setTimeStamp(0.606226796185);
    msg.setSource(7683U);
    msg.setSourceEntity(207U);
    msg.setDestination(12648U);
    msg.setDestinationEntity(120U);
    msg.mid = 56357U;

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
    msg.setTimeStamp(0.619418334093);
    msg.setSource(64765U);
    msg.setSourceEntity(86U);
    msg.setDestination(56485U);
    msg.setDestinationEntity(33U);
    msg.mid = 50915U;

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
    msg.setTimeStamp(0.853246174398);
    msg.setSource(6504U);
    msg.setSourceEntity(128U);
    msg.setDestination(43595U);
    msg.setDestinationEntity(202U);
    msg.state = 205U;
    msg.eta = 49192U;
    msg.info.assign("GTKQYXMOMWMKLQXFMURVSTBHZYOCJHOSGLNVABXHWAUMPZZHGLMDQOTGHJCEHSTIIMLSVJCYCWSATOFBWKRNLXTBPLSFVVYKCUORRKPZNFDSZJEBNUVWILJEQZIUEYWPJMDBCTPNVLRRNUGVVZWGBKYAHESRIEEQOQAWCOYX");

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
    msg.setTimeStamp(0.245450171347);
    msg.setSource(63659U);
    msg.setSourceEntity(75U);
    msg.setDestination(27619U);
    msg.setDestinationEntity(78U);
    msg.state = 184U;
    msg.eta = 44546U;
    msg.info.assign("UBHFKPXBAKHTGCLMCFVWLTVPCUKADEEDNSQAALOLTNJVDNSQBYZRBPSCJQHHZULZIMCXJHGWJNIEISOXMGEPRBCXUTJSYMQRPHTWHWXFHRUAIVZUPZVMOYKPLXUCOFOCGITVKHDGWICXBVOMCFLFTIFREANAJDLAXJXRGZDMNNYQKMRYTBQJHLORRIQWTPQSYNWFKDDYJKBETN");

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
    msg.setTimeStamp(0.297854920018);
    msg.setSource(27112U);
    msg.setSourceEntity(242U);
    msg.setDestination(63951U);
    msg.setDestinationEntity(85U);
    msg.state = 238U;
    msg.eta = 47179U;
    msg.info.assign("KCHRHWZPKNPVDWPBZQFCXXFKEMJMYATBOYASPTTWEYBZXSRZGRUODZDFILYCAJXYDNVIDGNADHBKXFQIRAJJMZNNNRPIPGACQWHJGLUZDEPNBEOQPJLJBFGPI");

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
    msg.setTimeStamp(0.686912761814);
    msg.setSource(25099U);
    msg.setSourceEntity(96U);
    msg.setDestination(25430U);
    msg.setDestinationEntity(175U);
    msg.system = 24227U;
    msg.duration = 23563U;
    msg.speed = 0.44283834051;
    msg.speed_units = 38U;
    msg.x = 0.724760914063;
    msg.y = 0.309092881919;
    msg.z = 0.395178756952;
    msg.z_units = 129U;

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
    msg.setTimeStamp(0.643569440552);
    msg.setSource(4142U);
    msg.setSourceEntity(156U);
    msg.setDestination(24122U);
    msg.setDestinationEntity(125U);
    msg.system = 10439U;
    msg.duration = 42817U;
    msg.speed = 0.0333519108298;
    msg.speed_units = 146U;
    msg.x = 0.940472673031;
    msg.y = 0.410754974034;
    msg.z = 0.782755778822;
    msg.z_units = 71U;

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
    msg.setTimeStamp(0.611317067226);
    msg.setSource(41928U);
    msg.setSourceEntity(177U);
    msg.setDestination(12716U);
    msg.setDestinationEntity(151U);
    msg.system = 46186U;
    msg.duration = 13431U;
    msg.speed = 0.790022351427;
    msg.speed_units = 160U;
    msg.x = 0.469705078359;
    msg.y = 0.81148136592;
    msg.z = 0.232983904385;
    msg.z_units = 212U;

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
    msg.setTimeStamp(0.182378085591);
    msg.setSource(19640U);
    msg.setSourceEntity(115U);
    msg.setDestination(53000U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.957236765952;
    msg.lon = 0.411926667928;
    msg.speed = 0.154353418627;
    msg.speed_units = 26U;
    msg.duration = 61633U;
    msg.sys_a = 27830U;
    msg.sys_b = 62666U;
    msg.move_threshold = 0.362228513807;

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
    msg.setTimeStamp(0.971835896284);
    msg.setSource(27124U);
    msg.setSourceEntity(156U);
    msg.setDestination(59764U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.603100285382;
    msg.lon = 0.743495691017;
    msg.speed = 0.226939512959;
    msg.speed_units = 229U;
    msg.duration = 27965U;
    msg.sys_a = 49708U;
    msg.sys_b = 36278U;
    msg.move_threshold = 0.861872438668;

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
    msg.setTimeStamp(0.120762592729);
    msg.setSource(58770U);
    msg.setSourceEntity(33U);
    msg.setDestination(42552U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.632115062457;
    msg.lon = 0.0334898013595;
    msg.speed = 0.0285126748692;
    msg.speed_units = 84U;
    msg.duration = 9397U;
    msg.sys_a = 2956U;
    msg.sys_b = 51257U;
    msg.move_threshold = 0.186260071942;

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
    msg.setTimeStamp(0.221663666076);
    msg.setSource(5523U);
    msg.setSourceEntity(65U);
    msg.setDestination(18482U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.689502518124;
    msg.lon = 0.406577758769;
    msg.z = 0.293809927731;
    msg.z_units = 229U;
    msg.speed = 0.822013818673;
    msg.speed_units = 186U;
    msg.custom.assign("BKGGYFURLMQGZNOBUTMSWSCLDZXHMIJDAECASEUHURXDSOXERWILUYYGZIQEVIMHQTLFCJVTXRUSZWQBLTAAESIOFGPHSFWNASTVXKGVNKBXIQBFBILZCPIWBXZNDFYHOHDYPYKHJAOWNKMFHZVBYPTKKSPUIZYQMLNEFVNPSJXNRUZRCKJEXVFAMCFOQQJMGTVCAE");

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
    msg.setTimeStamp(0.412707999605);
    msg.setSource(25338U);
    msg.setSourceEntity(185U);
    msg.setDestination(48772U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.594499734799;
    msg.lon = 0.657682690449;
    msg.z = 0.0898762887326;
    msg.z_units = 250U;
    msg.speed = 0.608737721686;
    msg.speed_units = 198U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.981067236241;
    tmp_msg_0.lon = 0.125833881627;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("TWRXFUHWDAZCEDDBBNOHXRHZJEVJLNHDXDSWWHNCSIBVESXOCHKEMJYIFHZGBNCOKKPPEKLCYBUESCJTLCGMZQMXMLRASZGIYGYYWFHXLTNRMRTEBAVUZYFDLOETIQTYGRPLPIIFVZFWXADLVGRLCKSSKAILUWBOQGMZYPQAMQANBNJKJDQPJPAMROUJTKNGQTCRUNQHXNIRYPMMVGEVVZWJZUIBTIO");

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
    msg.setTimeStamp(0.192884761306);
    msg.setSource(15277U);
    msg.setSourceEntity(65U);
    msg.setDestination(54944U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.0773310658685;
    msg.lon = 0.936378691034;
    msg.z = 0.493944260886;
    msg.z_units = 66U;
    msg.speed = 0.33259547448;
    msg.speed_units = 113U;
    msg.custom.assign("DDPCQNAFAGGYILBINWZOTZYPRZHDXPYCRVVGZCWWBOKVXWJPYUWUENXTVUKFJFQFLDKPELIAKFIVPDYNEYPMNBLUROOEPQDSGNUJWNZQYBCFILYFIJDB");

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
    msg.setTimeStamp(0.31935802119);
    msg.setSource(64687U);
    msg.setSourceEntity(145U);
    msg.setDestination(50105U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.642896211944;
    msg.lon = 0.683714396805;

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
    msg.setTimeStamp(0.649689243799);
    msg.setSource(31907U);
    msg.setSourceEntity(102U);
    msg.setDestination(33142U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.436300787045;
    msg.lon = 0.491262693421;

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
    msg.setTimeStamp(0.0178855418913);
    msg.setSource(52630U);
    msg.setSourceEntity(13U);
    msg.setDestination(8393U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.590725809473;
    msg.lon = 0.22132231749;

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
    msg.setTimeStamp(0.481390808917);
    msg.setSource(19251U);
    msg.setSourceEntity(19U);
    msg.setDestination(24673U);
    msg.setDestinationEntity(0U);
    msg.timeout = 51340U;
    msg.lat = 0.189646761385;
    msg.lon = 0.00383378634381;
    msg.z = 0.591783519172;
    msg.z_units = 244U;
    msg.pitch = 0.330783743853;
    msg.amplitude = 0.956218879011;
    msg.duration = 56038U;
    msg.speed = 0.190153628894;
    msg.speed_units = 158U;
    msg.radius = 0.679865445112;
    msg.direction = 240U;
    msg.custom.assign("ABVDXUOUGOGGAEOWTONASSWQXUIHOLEPFMONOLEUYBBWEZIQMIZMRHSRKEKGYHSTWEH");

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
    msg.setTimeStamp(0.838995233002);
    msg.setSource(5693U);
    msg.setSourceEntity(107U);
    msg.setDestination(25699U);
    msg.setDestinationEntity(196U);
    msg.timeout = 14405U;
    msg.lat = 0.898424552431;
    msg.lon = 0.811979435022;
    msg.z = 0.348485934161;
    msg.z_units = 63U;
    msg.pitch = 0.0740454925403;
    msg.amplitude = 0.29305780993;
    msg.duration = 56321U;
    msg.speed = 0.804091353225;
    msg.speed_units = 127U;
    msg.radius = 0.294156256111;
    msg.direction = 20U;
    msg.custom.assign("GBSULTRMDXZDSZYRBOMCZRKHEURZDWIXSHGGHHOCXFSXQRXHOQPFKJPUSNOTVVUPDJQEEMGWDDTUNCNOIKJNSABPCPZVWMABGCADICINU");

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
    msg.setTimeStamp(0.63894009643);
    msg.setSource(43403U);
    msg.setSourceEntity(246U);
    msg.setDestination(5889U);
    msg.setDestinationEntity(233U);
    msg.timeout = 57490U;
    msg.lat = 0.478191133824;
    msg.lon = 0.298522775955;
    msg.z = 0.487181311223;
    msg.z_units = 80U;
    msg.pitch = 0.625518173883;
    msg.amplitude = 0.727145301277;
    msg.duration = 31680U;
    msg.speed = 0.103770994244;
    msg.speed_units = 42U;
    msg.radius = 0.691699650125;
    msg.direction = 232U;
    msg.custom.assign("INDRVUAZWHJKMDPYDJWHESMMXYOTPTFKQEABRXONQCINKCYMLXWZIVCOQGSNELYXYKNYWVARSLCBDHGRGJIHQNWDIUOKFJHCVZURFRSFZGWX");

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
    msg.setTimeStamp(0.935058268465);
    msg.setSource(45527U);
    msg.setSourceEntity(8U);
    msg.setDestination(56813U);
    msg.setDestinationEntity(137U);
    msg.formation_name.assign("QTIISKJPXPFAMLPLPVZERQVRKJDBDMMRABWLJBMPECGRSCLBGZPKUSPUROKBXWSCFBRXTXOBHXUPTIHAGEYGWMYDTCFRJJUTLQ");
    msg.reference_frame = 118U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 42032U;
    tmp_msg_0.off_x = 0.7693953641;
    tmp_msg_0.off_y = 0.452109613765;
    tmp_msg_0.off_z = 0.0737514509083;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BUZRIROBLHNNJGLWFIQCMEJMCZUBQZJBQVPILSSDEFGWFBXAFHPRNPXNWIOHKHGLWDTDLMIJVGQWJOGPRGONBCUXPASCCDDCPAQOTARLPYCMSUZQAETMUNTBNXYPWTRNFUQEOASRBRXZEINCZEIVKZKFREEBKMZXTHWWYEFHKAYMVXUUJUPTDXTVQKGXHKBTTYYSSJQCFIVKXCRFYELOYJZOVKZLOVVML");

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
    msg.setTimeStamp(0.623087152571);
    msg.setSource(41878U);
    msg.setSourceEntity(169U);
    msg.setDestination(57542U);
    msg.setDestinationEntity(88U);
    msg.formation_name.assign("HQLFZMSSOYMUTZBPUFSVXEJTX");
    msg.reference_frame = 31U;
    msg.custom.assign("MEVPPNIBZAYINPYXVKXVZKDRFLEODJKIBITPORCQLEMUVHUNFZQPAGBQZMHAJNHCFTLZDWBZSWQLBGWKKQCATCTHTMOESBEXEZDVSBVXAGLXJMZAIFFYFVHTRVUDSSPAXNDYRQKGV");

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
    msg.setTimeStamp(0.833714732089);
    msg.setSource(26400U);
    msg.setSourceEntity(193U);
    msg.setDestination(7786U);
    msg.setDestinationEntity(77U);
    msg.formation_name.assign("QTWKWPNISIWXTSQQXOJGLHRDODFZVRQMIANRXULJHOPSTEOFHXIMDXSUYCLUNHGIXVNCBOXZTAIBZJLGHPDYLWUSTNGBFGMGRDMQTKCICWPRRFK");
    msg.reference_frame = 224U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 45362U;
    tmp_msg_0.off_x = 0.142684502603;
    tmp_msg_0.off_y = 0.247579289858;
    tmp_msg_0.off_z = 0.636566879764;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("NNIITYHYLFFZUOFIADDTQHGCATBFSM");

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
    msg.setTimeStamp(0.0295432728723);
    msg.setSource(59047U);
    msg.setSourceEntity(13U);
    msg.setDestination(59334U);
    msg.setDestinationEntity(244U);
    msg.group_name.assign("KJZFAJQLPNBRWOFYCSHGQBALLSXYTSFVABBRMOQGABADGWEURYXMKBOPKZAZPMWYEQWPFLRWTTPFNEZDMRURKFMHDLHJCAXQUISBAXPTHVDSRHGIDPBZFIKDXNVXWLXQEUKQFRIJVCEWW");
    msg.formation_name.assign("NVFWRKZIXTFSTQUGCDXTIDFYSOHZWDZMCGOMVRGXHIYRZCOEDZSPGEKENJUOLDHZUMUQXRJKCDMSMHZMLJTSCEZEVPU");
    msg.plan_id.assign("OTYACAHELXRXUMZAFZJLGHKMBBQEKQBUQWFKPKDGOUVSNRGPJGIVJDURXWHQMCOJABPQLIPYWSWAWDKMEPSFJZWXSYZTNVQNFGUYLBGBGJPQFMVEEA");
    msg.description.assign("ARHLGLMIFSVIGAVJUVHENTWDCCKBBLPNPPSHGKFWKDIIORTYXCLGXHLQYMXBBEQAUOMLNLLWDYQKAEFTHRGSMRUAQJTSTRSUJFFFHVNJZSBMABUXNYMKJDEZHNWXDZDESOVUQWKVZYIGPC");
    msg.leader_speed = 0.94301790392;
    msg.leader_bank_lim = 0.238809044344;
    msg.pos_sim_err_lim = 0.873947382732;
    msg.pos_sim_err_wrn = 0.0138415469545;
    msg.pos_sim_err_timeout = 13582U;
    msg.converg_max = 0.904118552554;
    msg.converg_timeout = 57215U;
    msg.comms_timeout = 10758U;
    msg.turb_lim = 0.526087849949;
    msg.custom.assign("FHUKDTGBQFBOLXTKDNREJQZKBNPLSVSOTWGIOAVOGCIHAGGMQSMZEIQBEAYMUVRKTJZZVWEPFSYM");

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
    msg.setTimeStamp(0.796450602903);
    msg.setSource(2411U);
    msg.setSourceEntity(130U);
    msg.setDestination(62710U);
    msg.setDestinationEntity(132U);
    msg.group_name.assign("JQLFJVQCXOUYLYTKMYRSB");
    msg.formation_name.assign("JRVDKRCPHLKQEPNXSHIFNYNPCIKFPEOJEGTYOBRKHEBAIJVQDSHEVJALFVUTOYLCIFPGVTWGQRESOXCOLDSLDUGZGWVJLHNIXPZBYQEHFUVWFRKTTQZEAEVUBZCFFVZSKCOPZCJYOWMCUFANPRASZHRLHGUMGWTRBLYANONQKSQKWASIGI");
    msg.plan_id.assign("MYHSWCWQPCBZVCKMOJTXUDOLEXYRPFVUXCPWZPDSJRYKFVDTYIGZOMHR");
    msg.description.assign("PUNOJBMQEDLQUBUJCCXITQJMXULGXHUPYZWDSFHZNBVTZISZRLXWTFVOERLFHOZKERGEQLWF");
    msg.leader_speed = 0.501308640379;
    msg.leader_bank_lim = 0.220832569622;
    msg.pos_sim_err_lim = 0.799945169877;
    msg.pos_sim_err_wrn = 0.0726240818587;
    msg.pos_sim_err_timeout = 60318U;
    msg.converg_max = 0.988052923144;
    msg.converg_timeout = 38737U;
    msg.comms_timeout = 9104U;
    msg.turb_lim = 0.459375988238;
    msg.custom.assign("SMCMDAXLZWFJBELDG");

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
    msg.setTimeStamp(0.838915396811);
    msg.setSource(45046U);
    msg.setSourceEntity(65U);
    msg.setDestination(65363U);
    msg.setDestinationEntity(82U);
    msg.group_name.assign("YYVSHMVZOXQESRTMBWENTMBHZHNXUNBQZOYSBKEURGBVCVXHJKIEIZGZWTCOLHSPWDYDRPHCQYABOUHSLDPWMDGJIUAMAELGZQEIPCFKXRNKCXPJQGNWGJRFEKBXWYFAMAKGXNIMKCJTAJKEZXDPGOHIHLFDBWVYTRJOYONWNACVIMBIGOQKBFRJLDLFAWCAZSVFWMREQDZVTPPMOCCXTEIPFRSNUADSLFVJOTUDKRUNI");
    msg.formation_name.assign("AQJFSTKEKJPQLRIXQUXLDXRAGSUAFFXPFYCPNYDOHBPOKXT");
    msg.plan_id.assign("PDAGISMTNDZGOSNHHONKNAMDKOOJMADLFNYHRUMOQWJVVGPDWUGDRMIYBWGTOYYYISWTUNMUVPZSIBPWBLCRHMQLJRKJOCFEGSDIUHTRXDLTKPWHBALPSHSVKZUCC");
    msg.description.assign("OLHSFGUYNTSMEKRQOPVBSEGVFRJHLMCRFXUIELPGDO");
    msg.leader_speed = 0.245392989921;
    msg.leader_bank_lim = 0.874049518729;
    msg.pos_sim_err_lim = 0.193405512308;
    msg.pos_sim_err_wrn = 0.707179685804;
    msg.pos_sim_err_timeout = 22012U;
    msg.converg_max = 0.0857623515224;
    msg.converg_timeout = 38467U;
    msg.comms_timeout = 1255U;
    msg.turb_lim = 0.10672758051;
    msg.custom.assign("XGKETSPIXUNNHASPCCZXVXFDPFTVHPPRDUWYGXXKAHSJRUIYWJXTMKZYEUULZFEENPNOBMLQWMQCAGOBMCLSYJQEVRPCPIFVX");

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
    msg.setTimeStamp(0.482805665999);
    msg.setSource(32179U);
    msg.setSourceEntity(253U);
    msg.setDestination(47544U);
    msg.setDestinationEntity(198U);
    msg.control_src = 8939U;
    msg.control_ent = 189U;
    msg.timeout = 0.257840724971;
    msg.loiter_radius = 0.428810533167;
    msg.altitude_interval = 0.211152433122;

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
    msg.setTimeStamp(0.834008956657);
    msg.setSource(54092U);
    msg.setSourceEntity(195U);
    msg.setDestination(4044U);
    msg.setDestinationEntity(242U);
    msg.control_src = 49676U;
    msg.control_ent = 241U;
    msg.timeout = 0.00496999892489;
    msg.loiter_radius = 0.371510666484;
    msg.altitude_interval = 0.932131137456;

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
    msg.setTimeStamp(0.509507250792);
    msg.setSource(39854U);
    msg.setSourceEntity(208U);
    msg.setDestination(61314U);
    msg.setDestinationEntity(52U);
    msg.control_src = 32512U;
    msg.control_ent = 46U;
    msg.timeout = 0.335634083903;
    msg.loiter_radius = 0.681605341088;
    msg.altitude_interval = 0.369365069639;

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
    msg.setTimeStamp(0.166896468954);
    msg.setSource(64911U);
    msg.setSourceEntity(67U);
    msg.setDestination(3234U);
    msg.setDestinationEntity(147U);
    msg.flags = 232U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.89141290181;
    tmp_msg_0.speed_units = 144U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.301283491618;
    tmp_msg_1.z_units = 73U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.222265266257;
    msg.lon = 0.346963127585;
    msg.radius = 0.452789129806;

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
    msg.setTimeStamp(0.688394976879);
    msg.setSource(14092U);
    msg.setSourceEntity(130U);
    msg.setDestination(15283U);
    msg.setDestinationEntity(146U);
    msg.flags = 200U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.504941735782;
    tmp_msg_0.speed_units = 99U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.231461123277;
    tmp_msg_1.z_units = 122U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.232399962497;
    msg.lon = 0.334843313834;
    msg.radius = 0.995635133321;

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
    msg.setTimeStamp(0.759105982099);
    msg.setSource(9818U);
    msg.setSourceEntity(239U);
    msg.setDestination(14530U);
    msg.setDestinationEntity(254U);
    msg.flags = 184U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.349246440255;
    tmp_msg_0.speed_units = 247U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.716237294204;
    tmp_msg_1.z_units = 8U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.041380037546;
    msg.lon = 0.29333804252;
    msg.radius = 0.897349595748;

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
    msg.setTimeStamp(0.222839768057);
    msg.setSource(55351U);
    msg.setSourceEntity(225U);
    msg.setDestination(143U);
    msg.setDestinationEntity(178U);
    msg.control_src = 36694U;
    msg.control_ent = 194U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 75U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.665441928264;
    tmp_tmp_msg_0_0.speed_units = 227U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.90518426191;
    tmp_tmp_msg_0_1.z_units = 34U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.77957786466;
    tmp_msg_0.lon = 0.699320957897;
    tmp_msg_0.radius = 0.166420589946;
    msg.reference.set(tmp_msg_0);
    msg.state = 47U;
    msg.proximity = 248U;

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
    msg.setTimeStamp(0.258249566808);
    msg.setSource(46970U);
    msg.setSourceEntity(133U);
    msg.setDestination(53428U);
    msg.setDestinationEntity(33U);
    msg.control_src = 65035U;
    msg.control_ent = 79U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 186U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.266809738563;
    tmp_tmp_msg_0_0.speed_units = 26U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.198823811496;
    tmp_tmp_msg_0_1.z_units = 51U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.924966501802;
    tmp_msg_0.lon = 0.382199249523;
    tmp_msg_0.radius = 0.760176439434;
    msg.reference.set(tmp_msg_0);
    msg.state = 246U;
    msg.proximity = 184U;

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
    msg.setTimeStamp(0.494420338044);
    msg.setSource(202U);
    msg.setSourceEntity(203U);
    msg.setDestination(6529U);
    msg.setDestinationEntity(140U);
    msg.control_src = 22194U;
    msg.control_ent = 164U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 161U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.575080837559;
    tmp_tmp_msg_0_0.speed_units = 19U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.178411138878;
    tmp_tmp_msg_0_1.z_units = 209U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0749132768649;
    tmp_msg_0.lon = 0.369432636976;
    tmp_msg_0.radius = 0.0379170366028;
    msg.reference.set(tmp_msg_0);
    msg.state = 140U;
    msg.proximity = 23U;

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
    msg.setTimeStamp(0.536701654775);
    msg.setSource(29054U);
    msg.setSourceEntity(20U);
    msg.setDestination(54290U);
    msg.setDestinationEntity(105U);
    msg.ax_cmd = 0.273595009195;
    msg.ay_cmd = 0.0216819172088;
    msg.az_cmd = 0.927072210781;
    msg.ax_des = 0.498258873869;
    msg.ay_des = 0.636304265369;
    msg.az_des = 0.0367802946497;
    msg.virt_err_x = 0.794820716859;
    msg.virt_err_y = 0.676058419938;
    msg.virt_err_z = 0.0406686975545;
    msg.surf_fdbk_x = 0.334253829594;
    msg.surf_fdbk_y = 0.28279186472;
    msg.surf_fdbk_z = 0.14297095442;
    msg.surf_unkn_x = 0.531417040876;
    msg.surf_unkn_y = 0.249586537606;
    msg.surf_unkn_z = 0.418450048708;
    msg.ss_x = 0.403415741488;
    msg.ss_y = 0.698473138515;
    msg.ss_z = 0.817487105421;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("AZIGMBURGSRZBCGBNKRJIBRUVZLRPRFKSJDXVAYQVQKPVZASREZPVHYMMIXYTLJJMXYBSHKPDWOZGTQSRMEYNIAYHTECQECPTBCTGLAKINC");
    tmp_msg_0.dist = 0.0845896633573;
    tmp_msg_0.err = 0.121709745331;
    tmp_msg_0.ctrl_imp = 0.53260511564;
    tmp_msg_0.rel_dir_x = 0.661097982156;
    tmp_msg_0.rel_dir_y = 0.975208965415;
    tmp_msg_0.rel_dir_z = 0.621919316591;
    tmp_msg_0.err_x = 0.242801650396;
    tmp_msg_0.err_y = 0.254657783061;
    tmp_msg_0.err_z = 0.343399780138;
    tmp_msg_0.rf_err_x = 0.0177472434934;
    tmp_msg_0.rf_err_y = 0.920191041436;
    tmp_msg_0.rf_err_z = 0.89973262479;
    tmp_msg_0.rf_err_vx = 0.221512549049;
    tmp_msg_0.rf_err_vy = 0.775212476591;
    tmp_msg_0.rf_err_vz = 0.942861599084;
    tmp_msg_0.ss_x = 0.609786633659;
    tmp_msg_0.ss_y = 0.816188570524;
    tmp_msg_0.ss_z = 0.519370774657;
    tmp_msg_0.virt_err_x = 0.128184373316;
    tmp_msg_0.virt_err_y = 0.113840953668;
    tmp_msg_0.virt_err_z = 0.830790773328;
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
    msg.setTimeStamp(0.486851344005);
    msg.setSource(45190U);
    msg.setSourceEntity(57U);
    msg.setDestination(57549U);
    msg.setDestinationEntity(177U);
    msg.ax_cmd = 0.0380143426247;
    msg.ay_cmd = 0.457169374254;
    msg.az_cmd = 0.170240892353;
    msg.ax_des = 0.283037041865;
    msg.ay_des = 0.149021247621;
    msg.az_des = 0.887499713515;
    msg.virt_err_x = 0.494509966284;
    msg.virt_err_y = 0.186250179253;
    msg.virt_err_z = 0.843693000087;
    msg.surf_fdbk_x = 0.976960001128;
    msg.surf_fdbk_y = 0.368152777085;
    msg.surf_fdbk_z = 0.702149657016;
    msg.surf_unkn_x = 0.923267076;
    msg.surf_unkn_y = 0.603007569914;
    msg.surf_unkn_z = 0.747271705259;
    msg.ss_x = 0.676542358547;
    msg.ss_y = 0.278534353681;
    msg.ss_z = 0.38505142376;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("EOYRJOZZAHJBVBID");
    tmp_msg_0.dist = 0.992069838354;
    tmp_msg_0.err = 0.99134798826;
    tmp_msg_0.ctrl_imp = 0.995993463016;
    tmp_msg_0.rel_dir_x = 0.960385971861;
    tmp_msg_0.rel_dir_y = 0.44792024585;
    tmp_msg_0.rel_dir_z = 0.263879291485;
    tmp_msg_0.err_x = 0.132295902618;
    tmp_msg_0.err_y = 0.52549700671;
    tmp_msg_0.err_z = 0.997579130966;
    tmp_msg_0.rf_err_x = 0.978354461882;
    tmp_msg_0.rf_err_y = 0.968821425684;
    tmp_msg_0.rf_err_z = 0.303332717153;
    tmp_msg_0.rf_err_vx = 0.541609911182;
    tmp_msg_0.rf_err_vy = 0.859902310226;
    tmp_msg_0.rf_err_vz = 0.229522909981;
    tmp_msg_0.ss_x = 0.398215240077;
    tmp_msg_0.ss_y = 0.468328250539;
    tmp_msg_0.ss_z = 0.618917936797;
    tmp_msg_0.virt_err_x = 0.133912229646;
    tmp_msg_0.virt_err_y = 0.224353093536;
    tmp_msg_0.virt_err_z = 0.390375967649;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.608403366547);
    msg.setSource(32955U);
    msg.setSourceEntity(25U);
    msg.setDestination(20167U);
    msg.setDestinationEntity(172U);
    msg.ax_cmd = 0.159873441093;
    msg.ay_cmd = 0.221408336796;
    msg.az_cmd = 0.169961142216;
    msg.ax_des = 0.420500161236;
    msg.ay_des = 0.00907158353232;
    msg.az_des = 0.232531630072;
    msg.virt_err_x = 0.867226590939;
    msg.virt_err_y = 0.75476712067;
    msg.virt_err_z = 0.299222588091;
    msg.surf_fdbk_x = 0.69682152423;
    msg.surf_fdbk_y = 0.993013820237;
    msg.surf_fdbk_z = 0.843940355917;
    msg.surf_unkn_x = 0.37240801017;
    msg.surf_unkn_y = 0.588732950411;
    msg.surf_unkn_z = 0.945301908569;
    msg.ss_x = 0.799080167722;
    msg.ss_y = 0.983279007086;
    msg.ss_z = 0.79864386618;

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
    msg.setTimeStamp(0.176483256533);
    msg.setSource(48038U);
    msg.setSourceEntity(244U);
    msg.setDestination(18584U);
    msg.setDestinationEntity(142U);
    msg.s_id.assign("LSWHVSHAPNAGOJJZNCUZTBZQMGMRZYZPBMQGWLOAKRCSJTQMWKNAXCRTIORIWKAYJ");
    msg.dist = 0.652553814109;
    msg.err = 0.269341557792;
    msg.ctrl_imp = 0.685123419678;
    msg.rel_dir_x = 0.54983380178;
    msg.rel_dir_y = 0.377305356133;
    msg.rel_dir_z = 0.679782997535;
    msg.err_x = 0.402369332924;
    msg.err_y = 0.460599819166;
    msg.err_z = 0.995146850227;
    msg.rf_err_x = 0.299874721696;
    msg.rf_err_y = 0.545281963752;
    msg.rf_err_z = 0.534069875387;
    msg.rf_err_vx = 0.486559320381;
    msg.rf_err_vy = 0.645848354964;
    msg.rf_err_vz = 0.988256844299;
    msg.ss_x = 0.230322441502;
    msg.ss_y = 0.174886842334;
    msg.ss_z = 0.90799831137;
    msg.virt_err_x = 0.832409057211;
    msg.virt_err_y = 0.182815782199;
    msg.virt_err_z = 0.623532804406;

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
    msg.setTimeStamp(0.588922118249);
    msg.setSource(39866U);
    msg.setSourceEntity(45U);
    msg.setDestination(46143U);
    msg.setDestinationEntity(233U);
    msg.s_id.assign("PNHSBBOEAPMOAWONCGZNMCQIZLXLBXMYKVJGTZPARTDURNYEREMFMVWQVGUDFTSYKEZPFBNLIZNUSDUTLINSCARSUVPLNDRSAFEAOW");
    msg.dist = 0.605837284263;
    msg.err = 0.220335999433;
    msg.ctrl_imp = 0.625907807455;
    msg.rel_dir_x = 0.869607732803;
    msg.rel_dir_y = 0.166087921222;
    msg.rel_dir_z = 0.908471670157;
    msg.err_x = 0.242952054024;
    msg.err_y = 0.0859358240895;
    msg.err_z = 0.419985835549;
    msg.rf_err_x = 0.232242187593;
    msg.rf_err_y = 0.661490318952;
    msg.rf_err_z = 0.0347581540487;
    msg.rf_err_vx = 0.754357293821;
    msg.rf_err_vy = 0.057977249273;
    msg.rf_err_vz = 0.293855616916;
    msg.ss_x = 0.940284777848;
    msg.ss_y = 0.808758446119;
    msg.ss_z = 0.729033305466;
    msg.virt_err_x = 0.254389550476;
    msg.virt_err_y = 0.831791754793;
    msg.virt_err_z = 0.302993831861;

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
    msg.setTimeStamp(0.909484384945);
    msg.setSource(33923U);
    msg.setSourceEntity(248U);
    msg.setDestination(21610U);
    msg.setDestinationEntity(195U);
    msg.s_id.assign("HNPAAQMJYUJELMARWKXDTLMKWNLJSBERCZSMZCKVYWNOKPFNKBWUIYEVGRPXPBMTURWHPIDWIZOLQUYDOFCYJNZAMOPQSVQUUYQJLHZDVIEAXPUGGYXVCFOMQONZXFORYCEJEJTPIVGTDEVSDFMNVHLGQACUDNWLSCHSBZCBFDIOTXSMGOYHHSBXGLWAUKRADECHOAQWWIXKTZPFTCMT");
    msg.dist = 0.857362588317;
    msg.err = 0.940046957324;
    msg.ctrl_imp = 0.448269848353;
    msg.rel_dir_x = 0.0814711074089;
    msg.rel_dir_y = 0.747478624702;
    msg.rel_dir_z = 0.610624012535;
    msg.err_x = 0.398945258195;
    msg.err_y = 0.108533506121;
    msg.err_z = 0.100987227367;
    msg.rf_err_x = 0.0674346610463;
    msg.rf_err_y = 0.84198849009;
    msg.rf_err_z = 0.325536800429;
    msg.rf_err_vx = 0.765331402929;
    msg.rf_err_vy = 0.605858164028;
    msg.rf_err_vz = 0.195045662848;
    msg.ss_x = 0.553755698855;
    msg.ss_y = 0.548832746523;
    msg.ss_z = 0.0060733799797;
    msg.virt_err_x = 0.5217119156;
    msg.virt_err_y = 0.705422097655;
    msg.virt_err_z = 0.585839435614;

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
    msg.setTimeStamp(0.28649539598);
    msg.setSource(58672U);
    msg.setSourceEntity(180U);
    msg.setDestination(14443U);
    msg.setDestinationEntity(136U);
    msg.timeout = 36534U;
    msg.rpm = 0.666139754173;
    msg.direction = 221U;
    msg.custom.assign("DGTUQOXYJRIJQNWSJHGRQWWNHQVBLHVJZKWXBNYGGLDWZXGFOAZBEZTHRCVCVWRRAMPEP");

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
    msg.setTimeStamp(0.693335424882);
    msg.setSource(623U);
    msg.setSourceEntity(200U);
    msg.setDestination(26256U);
    msg.setDestinationEntity(85U);
    msg.timeout = 12510U;
    msg.rpm = 0.839007325086;
    msg.direction = 142U;
    msg.custom.assign("ASZKROGFBEPSGVOLGBLJHQGSQHSOYBWMOGWNLVCNDDZOVLRTEDOTBESZEQUEW");

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
    msg.setTimeStamp(0.162376305776);
    msg.setSource(64506U);
    msg.setSourceEntity(35U);
    msg.setDestination(63910U);
    msg.setDestinationEntity(173U);
    msg.timeout = 57513U;
    msg.rpm = 0.330343455448;
    msg.direction = 85U;
    msg.custom.assign("BBXOUJAAXJNHJNEBFRFBSMWHYWWBANTMTIQXYTQDMRQDFDBNXYVL");

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
    msg.setTimeStamp(0.0707018111789);
    msg.setSource(58489U);
    msg.setSourceEntity(13U);
    msg.setDestination(11937U);
    msg.setDestinationEntity(174U);
    msg.formation_name.assign("IWIMCGVLJXXHZJVWDVDHQQKIOLMHNBGLDZYXKWDQLVTTOGP");
    msg.type = 23U;
    msg.op = 134U;
    msg.group_name.assign("VWRSOKSQDRHCGUAKDWDNATHOXMIDGCZXYARKTXYMB");
    msg.plan_id.assign("OKSYACMLJYXWUUIKNEZMHTOAVNBDSLKBDGYBZCDPBPSOSJQKFTHMOODEDLBIAK");
    msg.description.assign("PHSKDUGGWUIHIIYAFLYUZOQRJHRVIDEVDAYIYQWNWUZTEZJZEQWXGMYRQFKSRIXNEXJVEPYBRUHCMDVECSBDMAWCMDJQYLMFIYQYTTLTJXJCWLANABLUEXCBXGQTOMDLVWDOSTNO");
    msg.reference_frame = 115U;
    msg.leader_bank_lim = 0.450632314981;
    msg.leader_speed_min = 0.962723545514;
    msg.leader_speed_max = 0.754932724161;
    msg.leader_alt_min = 0.260895072454;
    msg.leader_alt_max = 0.531152964544;
    msg.pos_sim_err_lim = 0.705955459463;
    msg.pos_sim_err_wrn = 0.249299425812;
    msg.pos_sim_err_timeout = 62124U;
    msg.converg_max = 0.742126348565;
    msg.converg_timeout = 5624U;
    msg.comms_timeout = 5080U;
    msg.turb_lim = 0.131833586876;
    msg.custom.assign("WWAYTSLMBFHNLMOGMKDIOPUJVKRWSWQOPGFAYCSBPWGKHFNQNJEXVLDDINWAZZKZDTTSLIXKELKCGZBAKPFXQJXUUNGNSLSEQJHPOBLCWWEVDXVIQARGBQOAEJUNTB");

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
    msg.setTimeStamp(0.314926941741);
    msg.setSource(49788U);
    msg.setSourceEntity(254U);
    msg.setDestination(42296U);
    msg.setDestinationEntity(74U);
    msg.formation_name.assign("XOSPBHAPTQIBXHBJGWAXLPRJHNSTZDZQRJFAKODIYFRAUSOJLMHYJFKFGUVWYENAYEUNVVQUTN");
    msg.type = 104U;
    msg.op = 250U;
    msg.group_name.assign("EIOHREMXCUXWVXKEJFNKNYAKJPWLULJI");
    msg.plan_id.assign("TILWKLERBNKFFRKBPXUOPHSXCDXDJXTIPPGWUPVGRROPXRYCKIM");
    msg.description.assign("EMQHSOGTQBGLPNGLPHNLTPILWEKUYLTGDZKXCXXCAFKTEQPVOZSZALGXAWBKQDMTZNEWTVDKGTZFYZFZYBAIEJFMOBRCUYYBQDWOESBCGSTMOKULXVNXNUKEKKXLVWIWHHJVSXCQEZSCAYWOIPGBAQFGHKWN");
    msg.reference_frame = 185U;
    msg.leader_bank_lim = 0.937681639893;
    msg.leader_speed_min = 0.147985443511;
    msg.leader_speed_max = 0.261288817577;
    msg.leader_alt_min = 0.0468156979594;
    msg.leader_alt_max = 0.811416059413;
    msg.pos_sim_err_lim = 0.891588317701;
    msg.pos_sim_err_wrn = 0.358132524916;
    msg.pos_sim_err_timeout = 6440U;
    msg.converg_max = 0.545722313533;
    msg.converg_timeout = 36979U;
    msg.comms_timeout = 59761U;
    msg.turb_lim = 0.874142018064;
    msg.custom.assign("JZRIGPEDZXHOHYSTLXUKCJIKWFEOIZPCVRMBJDGLLIEMVOCYCBNNXPHLDQBHOBJFOKOMRLCQVWDNPBUQYUHYWZKTOBNXVAZPYFGWGMNASHKGBIREJRNEZAJXFDYMVALOKNSPGKCGIFNBPUCXTHYIYRFQFMVIEWM");

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
    msg.setTimeStamp(0.802605301765);
    msg.setSource(24869U);
    msg.setSourceEntity(108U);
    msg.setDestination(29502U);
    msg.setDestinationEntity(238U);
    msg.formation_name.assign("BASHHIPBMRFZZWJEXYMRYRFIMBLSZSVAUMML");
    msg.type = 111U;
    msg.op = 196U;
    msg.group_name.assign("ZCWGFDZUDYJLTLVTTPUAERBMBVFFMWJAKIOKOVYTXGWXGLXQSVKQQNZSGPKGMHQEDRARHAPAPATGFCVLFITRIDMBTOLWFORABBCOOOFWZDNGNIBIBRZDYNHRBUSOKXPVOLC");
    msg.plan_id.assign("NJZAEWHAWBJTKSKWAOTRLAQSEXVCZXOWVIKRFQCZRAZPDYNOOZGXRICIILEN");
    msg.description.assign("SSGKYNEFRQSPMAJGZOBUQYREZKEDVPUQBMRLRQADIWMQWEJQOCQSXEJNWVGPGLPWLZVSPCTAAIXWPEOHKPGCSXQJHFJSKRMTLMGZTNP");
    msg.reference_frame = 156U;
    msg.leader_bank_lim = 0.562052789805;
    msg.leader_speed_min = 0.105992807321;
    msg.leader_speed_max = 0.716413821941;
    msg.leader_alt_min = 0.429001609469;
    msg.leader_alt_max = 0.748239927278;
    msg.pos_sim_err_lim = 0.400062524316;
    msg.pos_sim_err_wrn = 0.766074011307;
    msg.pos_sim_err_timeout = 31959U;
    msg.converg_max = 0.577070443221;
    msg.converg_timeout = 11725U;
    msg.comms_timeout = 53090U;
    msg.turb_lim = 0.397126775781;
    msg.custom.assign("XUSQHJFPOYLKJWOIDDTNLUXGXAEQONTOBYETPSHPNDBDGSVZLUQLRYIQZQIYWCUMEVRCPFVTFWS");

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
    msg.setTimeStamp(0.858208730739);
    msg.setSource(53059U);
    msg.setSourceEntity(30U);
    msg.setDestination(33385U);
    msg.setDestinationEntity(233U);
    msg.timeout = 18873U;
    msg.lat = 0.241216461942;
    msg.lon = 0.278151064531;
    msg.z = 0.695584978648;
    msg.z_units = 127U;
    msg.speed = 0.188660835951;
    msg.speed_units = 111U;
    msg.custom.assign("CCAVTBZCRLYVPAUHOFGOFZXHRAVIVFTAIXULMNPPEYIFYSPTAJEXTCMQHDNPKWVNFQTDDUGKCUYGWSSBGAXYAJXOWGFFQGSUBRJHDXUDMBMBCMARTPOKDKNVWODNQHGOTORUEHPNJZJIRELQTLFSIPWSVSXEUHIYTGWZ");

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
    msg.setTimeStamp(0.927147033622);
    msg.setSource(43513U);
    msg.setSourceEntity(205U);
    msg.setDestination(3942U);
    msg.setDestinationEntity(225U);
    msg.timeout = 21772U;
    msg.lat = 0.309380638409;
    msg.lon = 0.254572617142;
    msg.z = 0.306570124435;
    msg.z_units = 186U;
    msg.speed = 0.10768602493;
    msg.speed_units = 43U;
    msg.custom.assign("JIXDFBEMRTLLBFCBFOPUISYIMWMZMRNMROEKRZNKQYTJYKFOZKRUAHCLKWUJAIHJBYENCJKMCXFA");

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
    msg.setTimeStamp(0.207407337806);
    msg.setSource(23154U);
    msg.setSourceEntity(97U);
    msg.setDestination(24600U);
    msg.setDestinationEntity(52U);
    msg.timeout = 26872U;
    msg.lat = 0.695636196272;
    msg.lon = 0.282709897418;
    msg.z = 0.588802787348;
    msg.z_units = 177U;
    msg.speed = 0.62337250857;
    msg.speed_units = 153U;
    msg.custom.assign("QGVBMNFYEMLLZISRNCLWXSSJFKBSVHBPDIHPXAEQYNJHVUZSCGXRTJBNIHYWJGGFPVTXWDDZEQTJHSTIDUEGLETUKSFOFNXBNCRDWBNKOVAZAXCEWGPANUDHYGWQWUMCAYBDWRXVUCOYIOAKAPDVMVVAIM");

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
    msg.setTimeStamp(0.51541213189);
    msg.setSource(10438U);
    msg.setSourceEntity(65U);
    msg.setDestination(52784U);
    msg.setDestinationEntity(58U);
    msg.timeout = 38454U;
    msg.lat = 0.692082422588;
    msg.lon = 0.718861896156;
    msg.z = 0.00354959175569;
    msg.z_units = 51U;
    msg.speed = 0.352071560041;
    msg.speed_units = 198U;
    msg.custom.assign("VIWRSJUYLRZRFYJIMKNCTQUCPZVMBMBEGJYUXSTWAENNKYZKQDJICJHIMXFAXUPRPGFQSGJRZOAOSLTPNYCTSMGHZLOZOCQSZHNMMSTQUCWPGIBSKLBUIYHGVSNNUEFYWRCTLKPGGTKDQAULPEFOPXBCLVVQJWOIVYIAREAOUEXBMWDWURNZXIWIRKQVEKCXHQBJDAHHKGEMZVFDDW");

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
    msg.setTimeStamp(0.730603258046);
    msg.setSource(56181U);
    msg.setSourceEntity(252U);
    msg.setDestination(33499U);
    msg.setDestinationEntity(213U);
    msg.timeout = 38473U;
    msg.lat = 0.824809640533;
    msg.lon = 0.0572219463277;
    msg.z = 0.270729597357;
    msg.z_units = 238U;
    msg.speed = 0.613850154948;
    msg.speed_units = 179U;
    msg.custom.assign("JVTGPHNLHRRERSTUATBJZWYVYWQNYVODYURQXJGMFGQEZVQDBGIFAPPHEAALVQPIELETTEWBCOMVVMITBYMJJSCZRTSCOUHSJTXBJMWXCXLHFBCNJIZCDXFZFDXDKLUASMNIGXRHUSKDQAOUSFETWAMKACKWQVECZPZLPLIEZFKFIODKJCURUIMAMSPKLZYOVUWICGDPNHYWQRFUJEKQBLAGXDNYLZPHGNGBIXNVRYQNWHNPKOOOBBX");

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
    msg.setTimeStamp(0.981666482855);
    msg.setSource(40379U);
    msg.setSourceEntity(165U);
    msg.setDestination(58249U);
    msg.setDestinationEntity(164U);
    msg.timeout = 1280U;
    msg.lat = 0.385441237123;
    msg.lon = 0.0593135258182;
    msg.z = 0.251363253681;
    msg.z_units = 152U;
    msg.speed = 0.0208850188268;
    msg.speed_units = 84U;
    msg.custom.assign("CMSVUGYPVBDJFCEOTPCUIWYKIBAXQFXDDARVGTBJIJWPLMAWSDTTJEJPKCOMKFFLXZYHPAJVOHJQVGQECNQAHBDSCAVQXOWBNKIGZZR");

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
    msg.setTimeStamp(0.522060835516);
    msg.setSource(18087U);
    msg.setSourceEntity(22U);
    msg.setDestination(58828U);
    msg.setDestinationEntity(247U);
    msg.arrival_time = 0.925447955279;
    msg.lat = 0.489313162296;
    msg.lon = 0.40541649499;
    msg.z = 0.569244914896;
    msg.z_units = 205U;
    msg.travel_z = 0.178603724867;
    msg.travel_z_units = 210U;
    msg.delayed = 124U;

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
    msg.setTimeStamp(0.989064593536);
    msg.setSource(28405U);
    msg.setSourceEntity(81U);
    msg.setDestination(62191U);
    msg.setDestinationEntity(86U);
    msg.arrival_time = 0.401675409349;
    msg.lat = 0.246885539683;
    msg.lon = 0.807565778307;
    msg.z = 0.52489902338;
    msg.z_units = 251U;
    msg.travel_z = 0.453310589266;
    msg.travel_z_units = 157U;
    msg.delayed = 158U;

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
    msg.setTimeStamp(0.75800238641);
    msg.setSource(32518U);
    msg.setSourceEntity(211U);
    msg.setDestination(21632U);
    msg.setDestinationEntity(187U);
    msg.arrival_time = 0.787570895755;
    msg.lat = 0.949839959668;
    msg.lon = 0.549272026568;
    msg.z = 0.910622324825;
    msg.z_units = 56U;
    msg.travel_z = 0.460196815741;
    msg.travel_z_units = 97U;
    msg.delayed = 162U;

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
    msg.setTimeStamp(0.92371404864);
    msg.setSource(44075U);
    msg.setSourceEntity(137U);
    msg.setDestination(43197U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.18261631679;
    msg.lon = 0.211856355533;
    msg.z = 0.239979229259;
    msg.z_units = 132U;
    msg.speed = 0.78473079994;
    msg.speed_units = 190U;
    msg.bearing = 0.798270171377;
    msg.cross_angle = 0.0240188283615;
    msg.width = 0.684253659506;
    msg.length = 0.744457170056;
    msg.coff = 9U;
    msg.angaperture = 0.248093687224;
    msg.range = 12103U;
    msg.overlap = 69U;
    msg.flags = 238U;
    msg.custom.assign("VXUGKOJRUCJKHIE");

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
    msg.setTimeStamp(0.718090244502);
    msg.setSource(58650U);
    msg.setSourceEntity(234U);
    msg.setDestination(41877U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.551010741852;
    msg.lon = 0.443196004912;
    msg.z = 0.750202995494;
    msg.z_units = 96U;
    msg.speed = 0.196488769344;
    msg.speed_units = 203U;
    msg.bearing = 0.724932647892;
    msg.cross_angle = 0.571623729759;
    msg.width = 0.714112772441;
    msg.length = 0.100192063172;
    msg.coff = 94U;
    msg.angaperture = 0.730170979787;
    msg.range = 57305U;
    msg.overlap = 155U;
    msg.flags = 193U;
    msg.custom.assign("ARJLBTHTDOICCAOQEYCYDSWOQBNISXPSOEQELYZPLADJKPUIXGATIZTJPRVIIASQYTNJNJZHZUQDRPSVRIBYMHYVWUJQREIWFOKCYNDMVEPJGLKHOVHIAMLKWQBGVPLHKCAUZDWOTMWBFCLPKGPQDCYXVMWNQYXXNSLMRUXUCNIXGQMFUFVMBAFCBFDFFRFHNEGOSHBUOEXEKGVEFJXTSXTYMRNVLGZBURHK");

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
    msg.setTimeStamp(0.522711410835);
    msg.setSource(59096U);
    msg.setSourceEntity(103U);
    msg.setDestination(58350U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.218342919204;
    msg.lon = 0.726470579392;
    msg.z = 0.380104953595;
    msg.z_units = 185U;
    msg.speed = 0.83337370135;
    msg.speed_units = 131U;
    msg.bearing = 0.367305636878;
    msg.cross_angle = 0.114647176756;
    msg.width = 0.527321481831;
    msg.length = 0.865237565848;
    msg.coff = 111U;
    msg.angaperture = 0.206434477138;
    msg.range = 22517U;
    msg.overlap = 60U;
    msg.flags = 178U;
    msg.custom.assign("ICQJUKCLLXSIAOZYQCJYPJGJVJZXCEDEKRWGWTVFWEVZSDFNFTTFYMUUDTCMJMSEPNYKWHUQBQCRKYFYKIIRFZCDZUOYTKNHTRC");

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
    msg.setTimeStamp(0.497391131123);
    msg.setSource(15884U);
    msg.setSourceEntity(205U);
    msg.setDestination(23465U);
    msg.setDestinationEntity(17U);
    msg.timeout = 60183U;
    msg.lat = 0.977533282935;
    msg.lon = 0.664657240428;
    msg.z = 0.14534519216;
    msg.z_units = 176U;
    msg.speed = 0.650646582463;
    msg.speed_units = 101U;
    msg.syringe0 = 200U;
    msg.syringe1 = 197U;
    msg.syringe2 = 147U;
    msg.custom.assign("IUVHSMCVXZMVNOTNOMEULHXYMCVFTEQIJSCDCQWBRKWVGBQPZIBOKAZPVFAZNSGRLUGAIWGTMALDJHQJSNEADUXADQAYTWHTQRXLJYTMJGFFRIWLIRSBFCEPEDPKHNLAFSHCYDTYVGSOBBLNEJMYYYUKXXPZWFGBKYVXKKZQEOIOKWMXTMODZPAURJCADVHPIKDGZFBDCU");

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
    msg.setTimeStamp(0.957532858732);
    msg.setSource(63797U);
    msg.setSourceEntity(185U);
    msg.setDestination(39715U);
    msg.setDestinationEntity(73U);
    msg.timeout = 53139U;
    msg.lat = 0.465413205115;
    msg.lon = 0.299819375825;
    msg.z = 0.988742220422;
    msg.z_units = 174U;
    msg.speed = 0.183528690857;
    msg.speed_units = 135U;
    msg.syringe0 = 109U;
    msg.syringe1 = 169U;
    msg.syringe2 = 12U;
    msg.custom.assign("GDKIHFIJNLBYCXACXUIYEQZORFGVHUQKRWQAFMRKHDEJGATNKGMXWFVIIHYNIDKSCAUYMDTCWXRUZKLFJNUYZEESZJPEDTTBULTNAUZWBJPQHWBNUZIXMAXFOMWVDIGBKOLSFUWLOQQPMRLZGMQTCPKOBYCBYVJJNQRFOVLLWFLVDRQKVHKJHASMPO");

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
    msg.setTimeStamp(0.523208227106);
    msg.setSource(25130U);
    msg.setSourceEntity(242U);
    msg.setDestination(64727U);
    msg.setDestinationEntity(224U);
    msg.timeout = 50804U;
    msg.lat = 0.010718487218;
    msg.lon = 0.10030956472;
    msg.z = 0.154218326906;
    msg.z_units = 87U;
    msg.speed = 0.419815111199;
    msg.speed_units = 244U;
    msg.syringe0 = 222U;
    msg.syringe1 = 191U;
    msg.syringe2 = 25U;
    msg.custom.assign("CFQWBHGRWGTYKGTZNQBJACUCKDSNROBVQVPIJHUKPKIECXNDGCHPMUJQZAXVYOIWXFBZSUYTPYMVKVMPLJGTHEPYLSLHERZPZLJHUJAYTYCJVEDKHTAQNUREWOSOWDCFNZAMKVDRHRUSBMPFRJKNOSFELWQZMEXYOSYIHNGRHQSXKDCJNSQFAOTNAIPBFXZXIUOAWMA");

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
    msg.setTimeStamp(0.498421039455);
    msg.setSource(57502U);
    msg.setSourceEntity(196U);
    msg.setDestination(14906U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.0652505756177);
    msg.setSource(60960U);
    msg.setSourceEntity(26U);
    msg.setDestination(28955U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.754968822252);
    msg.setSource(23304U);
    msg.setSourceEntity(168U);
    msg.setDestination(29303U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.447184243968);
    msg.setSource(29167U);
    msg.setSourceEntity(125U);
    msg.setDestination(29479U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.286223002242;
    msg.lon = 0.868817403444;
    msg.z = 0.258295256781;
    msg.z_units = 165U;
    msg.speed = 0.258267123888;
    msg.speed_units = 87U;
    msg.takeoff_pitch = 0.613040574902;
    msg.custom.assign("TFVQKLHMEGIVMGWUQFLHHOLDASQYSXPBJQFSVHNFMRKCBKNEBGOWUGQFUXNWJYSUZUGTIPIXZTCJNAWELCXCGAXTLPITORWHKOAFHURP");

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
    msg.setTimeStamp(0.84137225543);
    msg.setSource(797U);
    msg.setSourceEntity(246U);
    msg.setDestination(24621U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.998831899131;
    msg.lon = 0.0225692232713;
    msg.z = 0.127385514622;
    msg.z_units = 41U;
    msg.speed = 0.794274983292;
    msg.speed_units = 209U;
    msg.takeoff_pitch = 0.862227029051;
    msg.custom.assign("TQJDZJBPCNFORDBNGTHUUQTZBYQADLJXYSETTYEPZWFJKHDYVFSO");

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
    msg.setTimeStamp(0.492881517391);
    msg.setSource(59446U);
    msg.setSourceEntity(1U);
    msg.setDestination(32399U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.655158232615;
    msg.lon = 0.770252873286;
    msg.z = 0.151595122205;
    msg.z_units = 45U;
    msg.speed = 0.443619005713;
    msg.speed_units = 40U;
    msg.takeoff_pitch = 0.536375393435;
    msg.custom.assign("MMUYWCUGYGOQZVJZCOMFEIMQIDOPOTDQMNNKWBJLZTSPEWKRTMUABWFGYVTZPUDKAYXLVEAKFXTASQVLSJNQDXJKRTKNJL");

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
    msg.setTimeStamp(0.643383128086);
    msg.setSource(39385U);
    msg.setSourceEntity(123U);
    msg.setDestination(65099U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.127364937279;
    msg.lon = 0.585995811375;
    msg.z = 0.697936089882;
    msg.z_units = 203U;
    msg.speed = 0.730255914232;
    msg.speed_units = 152U;
    msg.abort_z = 0.412097900689;
    msg.bearing = 0.213298307532;
    msg.glide_slope = 97U;
    msg.glide_slope_alt = 0.781889477328;
    msg.custom.assign("QWRGBVTGAPJVSIMKFRDREEEWAIGERHXYXIVKBLEDWMJNWWFOHJQZ");

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
    msg.setTimeStamp(0.783601919735);
    msg.setSource(41541U);
    msg.setSourceEntity(212U);
    msg.setDestination(27189U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.832495400232;
    msg.lon = 0.575780963695;
    msg.z = 0.464330303177;
    msg.z_units = 75U;
    msg.speed = 0.195097003539;
    msg.speed_units = 173U;
    msg.abort_z = 0.784998887828;
    msg.bearing = 0.833751171523;
    msg.glide_slope = 13U;
    msg.glide_slope_alt = 0.857066950244;
    msg.custom.assign("CXCGXNQQUUKEEXDVMRBJUPJMWYYBOVHUHYQVMCAFZZKZXPFXWIYTONIXJFIJTYXTZSWORMLUAJCEHLOXJSVMDGVDYBAVVAAFNGIEUNPKCPKEPTLUVRUCIFCSWLBHSFDPRBJQHLQNHNBAKPVRNAHBQSZMQGRZNIDRLPUGGIOMUHPEAZYDFFOOOKSEMEJHNREETXFGTQDSBAJTYILCPMABNV");

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
    msg.setTimeStamp(0.596363789338);
    msg.setSource(11808U);
    msg.setSourceEntity(1U);
    msg.setDestination(62431U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.891129910483;
    msg.lon = 0.753784428672;
    msg.z = 0.470464324137;
    msg.z_units = 6U;
    msg.speed = 0.00183554494208;
    msg.speed_units = 18U;
    msg.abort_z = 0.286226362059;
    msg.bearing = 0.825256735032;
    msg.glide_slope = 133U;
    msg.glide_slope_alt = 0.229498699465;
    msg.custom.assign("XYMWZWZNRLBXEQCMNCRKUPKHVJVKFSGGFCKZAWBMWPDXXPLQEEDVMNCYXWBFQUALXNAUGIBVYIPGTBMJWPOVEJUIOOFHHBZQQKSRDPIMPXUGXIKTQCKJEJELKAOMZRQIYRLFGOAVNHJMHYEDDGNZMSAJERWDDBSLTQSFRVGBFCWEDAONFZ");

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
    msg.setTimeStamp(0.0593983194322);
    msg.setSource(18588U);
    msg.setSourceEntity(32U);
    msg.setDestination(12994U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.750446726341;
    msg.lon = 0.307523599151;
    msg.speed = 0.983379480301;
    msg.speed_units = 177U;
    msg.limits = 180U;
    msg.max_depth = 0.600513995213;
    msg.min_alt = 0.287029405968;
    msg.time_limit = 0.338511752847;
    msg.controller.assign("LBPOZPPPOETGOTVNGLOCIUYZHTJZFXNEPXKGUREWCPJHEVRVOQPTELSUOWSFCHVAQKMWQHNKWVTLMSKIJRXHDMDFYLBZAWAYWRGRINUSVHFPBZXEXCHVQPBSROQQBKJJHHALMNQYGDTLVTSIKJEXRKMUOARGNBDSOI");
    msg.custom.assign("EZEXXJMNXLEGMPSJGHTMOALXPRRXFLLVBIVKODEHIQCHVEWKGPKFMYJBWRYFV");

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
    msg.setTimeStamp(0.840442296852);
    msg.setSource(48314U);
    msg.setSourceEntity(144U);
    msg.setDestination(31940U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.684639466069;
    msg.lon = 0.888337713262;
    msg.speed = 0.507696765696;
    msg.speed_units = 144U;
    msg.limits = 116U;
    msg.max_depth = 0.467886425808;
    msg.min_alt = 0.201111302025;
    msg.time_limit = 0.384298420233;
    msg.controller.assign("GRSYCNCJVVGEAXMZKAFBUDGKBZQLIVNHTTSQMTJSFANKHBKVIZCFMUYEBQZ");
    msg.custom.assign("RJZURWISHEGTMPFBTLBGZQXCWHSNBFUHAJAWBYPPPHQDOKDUVIEFYJXNMYGHACMYXWIKVAJDN");

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
    msg.setTimeStamp(0.952869509149);
    msg.setSource(1189U);
    msg.setSourceEntity(160U);
    msg.setDestination(47378U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.921059126563;
    msg.lon = 0.99339798536;
    msg.speed = 0.230292429015;
    msg.speed_units = 215U;
    msg.limits = 76U;
    msg.max_depth = 0.0105691994512;
    msg.min_alt = 0.114995479475;
    msg.time_limit = 0.484180731849;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0666861655934;
    tmp_msg_0.lon = 0.400553354942;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("XBNCHFPLIWNOSZGPCTDLFZNJUPJNUPGOTWDLVXLEYRTHWLUBVDWPQWCHRWA");
    msg.custom.assign("BVPUOTPBFXWJJPHHNTIHKXRYWLAUXPDRGVFXVNOSVBRVHKMUFDLAUMEXXSKIPASKRRNCOQXCEIWIOMGNTEEFQJSCKBDTCTYYLVCMZOZUFEZADUMXKMNKSGBDQQULDNJUTWKWQZCJTTHGOQRVEYHELLRDVGIHMJXSOBUCXAFRWGAYQYZYYPNNTFBPVIY");

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
    msg.setTimeStamp(0.156623960178);
    msg.setSource(35002U);
    msg.setSourceEntity(119U);
    msg.setDestination(64041U);
    msg.setDestinationEntity(207U);
    msg.target.assign("GTCEKJLPOXYLLOAFRQQQWTIFMCMZXKQOESREPQJRWDUSORKAENUMKBXDVDUIAKLILQIXTVSBYAZUPWHHJERYCXSFJAKFVZITWTYBPCJIBBVWYDTYCCXLUTJGEGNTJWYVG");
    msg.max_speed = 0.149302633159;
    msg.speed_units = 209U;
    msg.lat = 0.439400589001;
    msg.lon = 0.922813373543;
    msg.z = 0.579025898408;
    msg.z_units = 188U;
    msg.custom.assign("OPMPGJPJELOBPQHDDBABCZUPBSYCLJPHXSKSBULZZFGCRILOGMORSTVVTSRAZVFUFNNHZDHFWYYLWWTKAXFEJCHJIOMEXCRICMNUWTUQFQNDWVHWUHILWLSZIEROYMJNYTAXJWEXSEHROYDSMGUNMDDLDYPTPXKSGOZAQBGRMRHKMXECFGHDUKIQEWNVLYADBTTVZJTIQZGUAPWRRVEXMNCU");

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
    msg.setTimeStamp(0.908133949651);
    msg.setSource(37014U);
    msg.setSourceEntity(79U);
    msg.setDestination(54657U);
    msg.setDestinationEntity(187U);
    msg.target.assign("HGMKVDCRMCHLCXTMFPSIIREQVFAWTQOTMMBIHVYCGPWHLSCSQUXKNARVKZYFAWHSLLZFWWXJPYOFOBEZSHFILONNBTGBXGNYWZZXBPBUEGJZLFYIUXWJPL");
    msg.max_speed = 0.743594265736;
    msg.speed_units = 163U;
    msg.lat = 0.813346414509;
    msg.lon = 0.794777591147;
    msg.z = 0.102401852875;
    msg.z_units = 50U;
    msg.custom.assign("PQBIOIVIQDDIXYMRMMGLRYHKKHDRCEOJFKYKPAJPTHFSTYVTGGSOUTHMPVQBLDOXDSMWXRCUBYTKZTMMCVOAGXF");

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
    msg.setTimeStamp(0.00523375303919);
    msg.setSource(59413U);
    msg.setSourceEntity(188U);
    msg.setDestination(3853U);
    msg.setDestinationEntity(169U);
    msg.target.assign("EYYMLZUZRKJFEHDQYGMSXNRZSUJVXUGVRZRAMFNTXJVZKMMTSLDITKNZWGWWBSTPTUKLILWIDIMOTEQOWQJFWAHUNQBFOMWCFHJBPWEZESGPPPFJKYUHUOSXJDAEJHCOIIHCJVEMUCAKRB");
    msg.max_speed = 0.155621707901;
    msg.speed_units = 130U;
    msg.lat = 0.581493006896;
    msg.lon = 0.211201129256;
    msg.z = 0.758573134309;
    msg.z_units = 230U;
    msg.custom.assign("MSPCMSKJIMGBUV");

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
    IMC::Alignment msg;
    msg.setTimeStamp(0.969781158471);
    msg.setSource(53673U);
    msg.setSourceEntity(190U);
    msg.setDestination(51072U);
    msg.setDestinationEntity(57U);
    msg.timeout = 47663U;
    msg.lat = 0.387584243956;
    msg.lon = 0.416201355862;
    msg.speed = 0.778465150556;
    msg.speed_units = 227U;
    msg.custom.assign("LSVZROUZJYABZAULYIKJZTVUZNWODEMDFBTYMFSRPNRAVRHOKMGZXJDOSOCNXHBQAQWMLBGHTCEDSVWAPGERSOIQAFVJPSVBDWATWCKOBTYCTYQBIUEIRLDYKIPCOEMIKOJZPNBXXUGBETDKFNVTOWVN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.0793523885807);
    msg.setSource(49072U);
    msg.setSourceEntity(247U);
    msg.setDestination(52072U);
    msg.setDestinationEntity(89U);
    msg.timeout = 9279U;
    msg.lat = 0.668028504544;
    msg.lon = 0.678828861129;
    msg.speed = 0.495197259484;
    msg.speed_units = 2U;
    msg.custom.assign("TQVFYEBYWXVHJUAHKPTSTIRGYSMOSXYHFLXLOTFREFIQOYOPLIXMCPLVWYBUCIQZWWDHZEUCLKORIGEZVRKASGQMLKZFYNJEKSKOSBEFUKWELLMTVYULQUBPDAPAMOVUADAYMZDRTJZN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.198934131163);
    msg.setSource(2581U);
    msg.setSourceEntity(33U);
    msg.setDestination(21082U);
    msg.setDestinationEntity(196U);
    msg.timeout = 13313U;
    msg.lat = 0.592894560125;
    msg.lon = 0.896414514832;
    msg.speed = 0.634546766273;
    msg.speed_units = 125U;
    msg.custom.assign("ZWJPLXLNXJRNDMHWROTDMBMQRCXZJVHFUSXEQRKWAWJZAKULCOQPPYRIAQTXWPRLADYJYEGCHTODQVZEVMFUPSLEECYURHBZOUSZDSQYVOIB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.393572281522);
    msg.setSource(18847U);
    msg.setSourceEntity(235U);
    msg.setDestination(7918U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.264732464067;
    msg.lon = 0.260446310205;
    msg.z = 0.0778578597793;
    msg.z_units = 204U;
    msg.radius = 0.390448604916;
    msg.duration = 42548U;
    msg.speed = 0.902719670955;
    msg.speed_units = 207U;
    msg.popup_period = 46341U;
    msg.popup_duration = 57885U;
    msg.flags = 17U;
    msg.custom.assign("QJHTPMJDSXYCLPZFGDBLFLNCOWNDGRWPEAXSXVTMBRCOTXAQVDCFJZCLROUIHBQRAWXGOOZSLHKADLUWKKSGMMGULXNJBINKUVQYLOMDKUGHFSEFVQTTJIGBPPXRBVYIQCEVMCVHKFYVEGBBYYQACPIGDPNXRMOUZZQRADIYPSSDUFJXXECAEZPWJFVFIWEHTHZFSJLYKHAYU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.436559672751);
    msg.setSource(38573U);
    msg.setSourceEntity(150U);
    msg.setDestination(17427U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.339442931125;
    msg.lon = 0.119977090682;
    msg.z = 0.714779268956;
    msg.z_units = 191U;
    msg.radius = 0.737966350544;
    msg.duration = 29735U;
    msg.speed = 0.769227408706;
    msg.speed_units = 243U;
    msg.popup_period = 64237U;
    msg.popup_duration = 50465U;
    msg.flags = 142U;
    msg.custom.assign("JQHXIYBUKLVSEOPIZTEAQHYBVADXSTHHVGYTSUZPYNEIBBOKUGNQDVFTLRNUFBRFLFHISXZJEBKSXOANUFVHKWAWAKBLKNWNSBKHPZXCSYCUDEDMCFQIPQMABRVRAJZJYOSKFIGYWJDQUMAETYYCTRWTMPWEVWLOSPLIFXRIUGXAGHFZVLXOCCMGVHANMQJQGRVTBZJTRUPO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.550455118692);
    msg.setSource(48408U);
    msg.setSourceEntity(125U);
    msg.setDestination(4271U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.874762319822;
    msg.lon = 0.848776331571;
    msg.z = 0.824598292823;
    msg.z_units = 155U;
    msg.radius = 0.519138674492;
    msg.duration = 62756U;
    msg.speed = 0.625807172494;
    msg.speed_units = 77U;
    msg.popup_period = 62899U;
    msg.popup_duration = 29517U;
    msg.flags = 71U;
    msg.custom.assign("NFOUJFHLTPJNIAYZOINCNNHWEOQLJGOESRZQTIXJVYVEHGZCJXLWKPOMSUNWURDZWQTKJGWMBQCYIFAEVYIYPOBRPUAXSHJPBVNAPAELGCHKXETXEYDCZLYUHKGYCTSHRDFZGMFZRVVUBMXCUJFRUFDQAQAIWVOMFXDPMFGSICDKLXPOBSYNMTQMWSVPDHZDVRSIQIHKFBAQMTJGCBAEKJSNKZLYINPTRTM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.617070400933);
    msg.setSource(3174U);
    msg.setSourceEntity(137U);
    msg.setDestination(62465U);
    msg.setDestinationEntity(171U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.195465037554);
    msg.setSource(49219U);
    msg.setSourceEntity(10U);
    msg.setDestination(48137U);
    msg.setDestinationEntity(110U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.0367242262972);
    msg.setSource(39383U);
    msg.setSourceEntity(157U);
    msg.setDestination(39261U);
    msg.setDestinationEntity(218U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.0456833044748);
    msg.setSource(33643U);
    msg.setSourceEntity(39U);
    msg.setDestination(2928U);
    msg.setDestinationEntity(178U);
    msg.timeout = 65247U;
    msg.lat = 0.351570765258;
    msg.lon = 0.576507341699;
    msg.z = 0.150823840754;
    msg.z_units = 16U;
    msg.speed = 0.589260612552;
    msg.speed_units = 99U;
    msg.bearing = 0.289794466785;
    msg.width = 0.898153997146;
    msg.direction = 135U;
    msg.custom.assign("KLCGHFZKCXNYLEPOIMNPANCSRDNIWSTEFKPUJQAYHMS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.553740001421);
    msg.setSource(24166U);
    msg.setSourceEntity(116U);
    msg.setDestination(65136U);
    msg.setDestinationEntity(178U);
    msg.timeout = 64445U;
    msg.lat = 0.629123767792;
    msg.lon = 0.808060920541;
    msg.z = 0.915524121399;
    msg.z_units = 93U;
    msg.speed = 0.58701124767;
    msg.speed_units = 170U;
    msg.bearing = 0.96971393101;
    msg.width = 0.850351631367;
    msg.direction = 243U;
    msg.custom.assign("PKWGKNTIAXGEVCCFDJGZRJAMAOOCJXXYDOFEMVHCKIINTBWSWWFTCELMTYIFWKDUQHZYLYDZDUVUCGIGGRPXHSRSKBBUJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.265810696488);
    msg.setSource(38469U);
    msg.setSourceEntity(26U);
    msg.setDestination(27815U);
    msg.setDestinationEntity(115U);
    msg.timeout = 47270U;
    msg.lat = 0.123138416556;
    msg.lon = 0.494190932121;
    msg.z = 0.864658325196;
    msg.z_units = 13U;
    msg.speed = 0.423411093669;
    msg.speed_units = 141U;
    msg.bearing = 0.0630178059335;
    msg.width = 0.0508770563558;
    msg.direction = 123U;
    msg.custom.assign("CTODZEZETXHWFQSPURZAINGAQZSBETTMOSKAHUNHFLLQXJUPKMYCLVATJVLFYSWSDFEZNAQFCWLINRWZDXHQRNKCPDRXOJTYPAWSMYGBAJPCKEJGOMCEEGUSNRCMGZYDWQQUGOOMURMHSVAJQLMJUPFXOICFITSNWIKNTNRTBUHDPRGIZALKLOVOZKJPGHYJWHMVKVBBPNPDVURFVZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #2", msg == *msg_d);
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
    msg.setTimeStamp(0.259196101462);
    msg.setSource(11533U);
    msg.setSourceEntity(126U);
    msg.setDestination(18931U);
    msg.setDestinationEntity(81U);
    msg.op_mode = 3U;
    msg.error_count = 253U;
    msg.error_ents.assign("ZGDACZAQQUINOHIIIHGHJFPBRXVOMHCMUSTSRVLAEINGOKLUVKJRLDXFGDIMUGZLOFRXCZASMKBDSEMWJZKZNAXJPGTGPYGUWTECEYYFJQRVRFORVGQPLWLHLWQNOS");
    msg.maneuver_type = 10467U;
    msg.maneuver_stime = 0.524704021461;
    msg.maneuver_eta = 50812U;
    msg.control_loops = 2137764351U;
    msg.flags = 153U;
    msg.last_error.assign("XLBKNUUOCYRIZUKGHUNXBDWSXGNCQAZPLVWFDMPRSAQSPPYKZJIWW");
    msg.last_error_time = 0.923985432577;

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
    msg.setTimeStamp(0.191789216494);
    msg.setSource(520U);
    msg.setSourceEntity(62U);
    msg.setDestination(10410U);
    msg.setDestinationEntity(14U);
    msg.op_mode = 233U;
    msg.error_count = 154U;
    msg.error_ents.assign("IVTJUSPACBJKFWBCZRGFIXAWMNUQDGKULTVAUFMLSHVEYAPCJIYRYWQFPGSRTYTMRKPBZVWTUXOQMQKNMYBLQQVOEBCEOZQXLBONYENUUCISISNTNPKVWPGHOLJKVPXASREGHILTHVU");
    msg.maneuver_type = 12760U;
    msg.maneuver_stime = 0.651728829235;
    msg.maneuver_eta = 54987U;
    msg.control_loops = 3661520570U;
    msg.flags = 163U;
    msg.last_error.assign("CLQIMTEIIMPYXINVYONNDSUXXUVSYKMLOKQBFKIZFMPQMEYHDRCZCS");
    msg.last_error_time = 0.407742766393;

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
    msg.setTimeStamp(0.946237500814);
    msg.setSource(42038U);
    msg.setSourceEntity(182U);
    msg.setDestination(30372U);
    msg.setDestinationEntity(48U);
    msg.op_mode = 43U;
    msg.error_count = 87U;
    msg.error_ents.assign("FSDWQOMUJULRPZVPTXEZGTAJEMSNYKGRXHGLKJOZLYPRFSFXIIBZGIGUDSEQDYEMIDINJCYSOAOWAFLEXVMDVIYCFCRTRHHHTPRDNVIYOEKBNGSDLHBQJIFGAMPAYDUZCEGKTQMQEOOWUUIJWFHZPGVVTPBNYJPUNTLDKOMBDBEKRNJQHGAKTPSUKYCWVBMMOEVFKXWSCLNYVZNMHQLSWNVXXQQJQTABZOBCFFJCALWWZRCU");
    msg.maneuver_type = 53124U;
    msg.maneuver_stime = 0.885409118313;
    msg.maneuver_eta = 22063U;
    msg.control_loops = 3835217992U;
    msg.flags = 138U;
    msg.last_error.assign("TEUDMQSCBCOBFWPZGZGKANJQAPZFANDNNSZFBRTRRRTNOHLUVXGWWMSWUBGWTHDHWEOHCPIHMSHLVDZVUAMCFBXDOWVONITIICRVXVRLKYCCXARBFKCOIBTFHGQWYMLNLDOFWAKYEGDPJEAFGKYLXMJXJAZATJBZOEVRSOEY");
    msg.last_error_time = 0.12947794074;

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
    msg.setTimeStamp(0.0735246370185);
    msg.setSource(17838U);
    msg.setSourceEntity(208U);
    msg.setDestination(6605U);
    msg.setDestinationEntity(45U);
    msg.type = 128U;
    msg.request_id = 52198U;
    msg.command = 77U;
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.926321310394;
    tmp_msg_0.lon = 0.858066599645;
    tmp_msg_0.speed = 0.485927615962;
    tmp_msg_0.speed_units = 18U;
    tmp_msg_0.limits = 17U;
    tmp_msg_0.max_depth = 0.306241556446;
    tmp_msg_0.min_alt = 0.426490382517;
    tmp_msg_0.time_limit = 0.468331256774;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.624915303091;
    tmp_tmp_msg_0_0.lon = 0.289300331576;
    tmp_msg_0.area_limits.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.controller.assign("RKOJNBANORJXXKKRZHETVEUYUACTDCMCCWDMGFPGZARTPGKZIDUQPLXOOWCOWNNCSJFCSMWCZQTUKGYYFWNOITSVUNYPEDHOMBJEESILQKJ");
    tmp_msg_0.custom.assign("FUQJYVRFQYAGGUHPKEDXFJBENRWZFGBUKJSLDNMHMPPDOMACNVNGJHKJASYAHKUUQZBBPTZULTTCXWLYDBPLRAKPKEODQFXWUSTDNZOGDYKIZSEYMQVRGUITSRLKYOMXQEJVPPIAISHIEYIRJBQXLVOHWMCFSWWHXFRXOPUCBHTPAGBQAWTNI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 8655U;
    msg.info.assign("PAVSXPRKUTWQZNPKVHDIIEWJLFOZIZPDGCBCUQHUJRGRSITLHMQYKDPWXWYBSNPSYNERUSJOMIVDFTGATHUNDZVNAOUALMBAJFWRELDJZAYKKCWZQBHMJKCDYUYMLTELGWSURLJMQCHLGIHWQAFFZGMMVAZEEONCXZIMGVLKXVCVEDRXBCGXYXXPCANO");

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
    msg.setTimeStamp(0.489048320398);
    msg.setSource(16736U);
    msg.setSourceEntity(249U);
    msg.setDestination(36366U);
    msg.setDestinationEntity(155U);
    msg.type = 9U;
    msg.request_id = 51026U;
    msg.command = 152U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.456919723702;
    tmp_msg_0.lon = 0.576158222876;
    tmp_msg_0.z = 0.878484763751;
    tmp_msg_0.z_units = 53U;
    tmp_msg_0.speed = 0.133195696901;
    tmp_msg_0.speed_units = 183U;
    tmp_msg_0.takeoff_pitch = 0.151110805578;
    tmp_msg_0.custom.assign("TVMJLXQJQXSFUIKOKCYAUHRKAMMWHFJHVZKOPBKWBZMNQMWYLFFZWLNSBLRRPFAVAMYPWSAJGHYCMTADQNJHCMLWOWFEYII");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 25318U;
    msg.info.assign("VIXZKEPVQNIFNHODFASGSCTIRERORJLCWLW");

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
    msg.setTimeStamp(0.161678933205);
    msg.setSource(1783U);
    msg.setSourceEntity(2U);
    msg.setDestination(11710U);
    msg.setDestinationEntity(243U);
    msg.type = 157U;
    msg.request_id = 27376U;
    msg.command = 132U;
    IMC::ImageTracking tmp_msg_0;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 63935U;
    msg.info.assign("NWKBFQPDIRBDLESXIEAWOQRVXQZDYJYUEHZLDTKROMIOJNIGCUNBMCZWZAIKCAZYPYPJVUGDCJGGBXYFXOUTQGNARWNTBZWMXMUSEYTJRHFKRDDPLSKGVHDCBFQEVRMSBCEMTGNYLMZPLOYLWGXHVPMSOSUGAFUBLXFSHRWJCEARAXNIGVMYJTPPAQTNIVOXNHQXECKVZKPWQT");

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
    msg.setTimeStamp(0.952674257224);
    msg.setSource(51253U);
    msg.setSourceEntity(87U);
    msg.setDestination(46975U);
    msg.setDestinationEntity(132U);
    msg.command = 45U;
    msg.entities.assign("VSJEMSBJDDRLVACPUDCIVKEOLNHBAXIMMOCPWFXIJYHTKQLNNRPLPBZQWWWSVERWTJOQUFSCGXDUZNGPBZKZQMYPOGMDNJJYXRGBBQEHWBMWALIVEAGAIHQARYYYAHWOMLPJDAOJOXM");

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
    msg.setTimeStamp(0.493886605601);
    msg.setSource(16700U);
    msg.setSourceEntity(85U);
    msg.setDestination(18055U);
    msg.setDestinationEntity(208U);
    msg.command = 248U;
    msg.entities.assign("RBMZXHRJPSLCITLYEFXYTDREFPQBOTHIGIMTGMUAABLUAOKMQXILIMDHRQVNHOLTIYFFECZKPYCEGJOQENCJUOWILNNPBFIVMNYXLUMJG");

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
    msg.setTimeStamp(0.259921837047);
    msg.setSource(61111U);
    msg.setSourceEntity(118U);
    msg.setDestination(14461U);
    msg.setDestinationEntity(111U);
    msg.command = 216U;
    msg.entities.assign("NKCOSZXGBOWOMOPZELATUCXLAGTRIQRUOQYSKEFHPNCKBFNXLGVYTSEFCRUABMJEZORLVSMQSHYZVDXRVFTYXBDDOJFDWNMIFPIJWRDFJRMQUVOGPQPNZIPAFIRJKNSCIHTGWBPYLTWWATCBGCKJHZADDHEGYIXJKRHQOPDVKLLMYHBNITZMBSVPUQKBVUWREUXSCBGKWEZUHJSFUNWILFGPUYXCYOAQTHELAMXJNDKYNDQAZQZGXJMESWIVAH");

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
    msg.setTimeStamp(0.504143643612);
    msg.setSource(4142U);
    msg.setSourceEntity(135U);
    msg.setDestination(32668U);
    msg.setDestinationEntity(243U);
    msg.mcount = 16U;
    msg.mnames.assign("ZTJIAOKGQXTQCBPAIXOYXRSHHTOFTKKIYPDUGMTDQONIVGYPRIRWZQFVYQOJSBXGUHFWEEWPLPRHRZBJESOICXDXPRSHBWGTWBDJFVDKFHXJVRLYPIWEVJGPBLCVELAOTNKELFWHYYVUJNZTKQLCFFOEYUSZMRJIYVWUKOJSYZAMFXQCZDKUDGSMNHOMQTASENNZUHSAWZBDDCQMPMAGULLBNIA");
    msg.ecount = 150U;
    msg.enames.assign("VSIBRVXVRJWMHWZZRJJGHDUYRALLSOYNIHQRQBPFNFFYUMSQWOMZBYUFUSOACAWOUND");
    msg.ccount = 230U;
    msg.cnames.assign("TBYZXNZWNXWGWLUHSPMSSXWCXRJCCEBEZAKBIKDJOJLKENALAUDUSVNYYPKHZITCSJFLNGDROIRTVPWBAIKENOKQMDMPLXLTFLTOBLDDKUMKAUYXHHQIACBQCGGVGVTJTBRFBGFMATRFVSRRYZZNLYAGXDSEPVJGJMZTRUBOYXOMP");
    msg.last_error.assign("YIPLOMWYDZCIWJDGRQGQKGOWQJFSAUSQGAQHIGEOPQKAMXCJLAODNJOPEZTUVXZDNZWWBERTWDPKIXLAKPQYASVVBNXAKBWTHNSLUEIZDERQFYXFEIRHJYCXEFLRFPDDFMWUROSRMQXSHZIGAYBVMYICGMUFNNXPLPWXVSJPEMMY");
    msg.last_error_time = 0.496763899007;

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
    msg.setTimeStamp(0.513752072777);
    msg.setSource(60887U);
    msg.setSourceEntity(120U);
    msg.setDestination(17137U);
    msg.setDestinationEntity(182U);
    msg.mcount = 87U;
    msg.mnames.assign("JIPJPGMMENHIRHD");
    msg.ecount = 224U;
    msg.enames.assign("DKGSOPGMASVFFDJPNSWDCDDALHNHTYWKSKBHOUTBLILUZNTHOYSJHWDAYQG");
    msg.ccount = 69U;
    msg.cnames.assign("ZEUAMWETKKNGITXCCXYZVOJBSNDBPABBMZDAQGQYCEHIQHPUWSELBANNLODWQTULXHZEGSIKROONBGPCDLFA");
    msg.last_error.assign("ADHMFLYMCHPOBFEOOLMZUUTBICXWRLPKAZEVYMGHROBSODNVONGXCEJRXSKNNMZOSCNFUUETLOUMMACVDBHXGLSDPFXDHEFAUIKYERNYAWLIHMQWDNVPGLHVDWIQJTNWAXUIWKFGCTBIKZIVLYPWSZDJGHQKXAPUJYLTPJBRRVBIJGTRESBQJHXZOITATPRPDPFFVCGFZBDQ");
    msg.last_error_time = 0.39343397625;

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
    msg.setTimeStamp(0.648292915375);
    msg.setSource(11748U);
    msg.setSourceEntity(207U);
    msg.setDestination(54638U);
    msg.setDestinationEntity(123U);
    msg.mcount = 111U;
    msg.mnames.assign("BKZARADJIQUTJSEDTOJWNCGGRMZSIXHIFLFZXRLPANRMVBEMH");
    msg.ecount = 103U;
    msg.enames.assign("BDYSHAXNOPHJFMGOWDJNBPFJWSBTGDHFBZWDPUPIRUOUAORGTVEFAIJJHIPEJXWHBEGLJWKLYUYEKWKLJIY");
    msg.ccount = 131U;
    msg.cnames.assign("ZWQIWHRPNZLHMXWLPYGPKKUVBETCGDBKSLGRJNHQSLOQMEKNHYGYRMODMABPBGYMEMOFEUFSRLVIULXQTAHOQFXTWWDGERFENVPNCNMCGWXIR");
    msg.last_error.assign("ZIEENYUTWMCHLCFPRTUCDDCRUZIEVBCPHNQZOQCXOMAFLJIPZBXBU");
    msg.last_error_time = 0.469214004945;

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
    msg.setTimeStamp(0.840113599853);
    msg.setSource(33931U);
    msg.setSourceEntity(76U);
    msg.setDestination(5327U);
    msg.setDestinationEntity(173U);
    msg.mask = 35U;
    msg.max_depth = 0.870914203574;
    msg.min_altitude = 0.0147526717437;
    msg.max_altitude = 0.769586982535;
    msg.min_speed = 0.795186653716;
    msg.max_speed = 0.76573271379;
    msg.max_vrate = 0.349953994183;
    msg.lat = 0.471450164237;
    msg.lon = 0.974794743415;
    msg.orientation = 0.493303575239;
    msg.width = 0.573632214405;
    msg.length = 0.366512153805;

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
    msg.setTimeStamp(0.330471963361);
    msg.setSource(62568U);
    msg.setSourceEntity(203U);
    msg.setDestination(15786U);
    msg.setDestinationEntity(183U);
    msg.mask = 129U;
    msg.max_depth = 0.477207452194;
    msg.min_altitude = 0.439386020697;
    msg.max_altitude = 0.844523201234;
    msg.min_speed = 0.124924911169;
    msg.max_speed = 0.880723447015;
    msg.max_vrate = 0.78042702062;
    msg.lat = 0.082683747763;
    msg.lon = 0.660766217545;
    msg.orientation = 0.604287735635;
    msg.width = 0.985368411146;
    msg.length = 0.42166801697;

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
    msg.setTimeStamp(0.0295140801344);
    msg.setSource(25221U);
    msg.setSourceEntity(67U);
    msg.setDestination(12034U);
    msg.setDestinationEntity(128U);
    msg.mask = 43U;
    msg.max_depth = 0.906963245503;
    msg.min_altitude = 0.525069672724;
    msg.max_altitude = 0.776461527612;
    msg.min_speed = 0.00972969073281;
    msg.max_speed = 0.853282408625;
    msg.max_vrate = 0.999049139937;
    msg.lat = 0.884996823528;
    msg.lon = 0.723969778145;
    msg.orientation = 0.316585079743;
    msg.width = 0.992463231501;
    msg.length = 0.170956591661;

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
    msg.setTimeStamp(0.964511321447);
    msg.setSource(48095U);
    msg.setSourceEntity(212U);
    msg.setDestination(8997U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.318486558739);
    msg.setSource(12496U);
    msg.setSourceEntity(236U);
    msg.setDestination(6414U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.131820012834);
    msg.setSource(4680U);
    msg.setSourceEntity(209U);
    msg.setDestination(12750U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.166458065658);
    msg.setSource(2097U);
    msg.setSourceEntity(70U);
    msg.setDestination(36006U);
    msg.setDestinationEntity(156U);
    msg.duration = 43643U;

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
    msg.setTimeStamp(0.000745199390431);
    msg.setSource(55864U);
    msg.setSourceEntity(65U);
    msg.setDestination(64033U);
    msg.setDestinationEntity(65U);
    msg.duration = 64307U;

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
    msg.setTimeStamp(0.409760753827);
    msg.setSource(13507U);
    msg.setSourceEntity(110U);
    msg.setDestination(63794U);
    msg.setDestinationEntity(115U);
    msg.duration = 42311U;

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
    msg.setTimeStamp(0.537626494552);
    msg.setSource(51173U);
    msg.setSourceEntity(29U);
    msg.setDestination(24988U);
    msg.setDestinationEntity(147U);
    msg.enable = 230U;
    msg.mask = 1376286281U;
    msg.scope_ref = 3242130998U;

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
    msg.setTimeStamp(0.992358943086);
    msg.setSource(12326U);
    msg.setSourceEntity(6U);
    msg.setDestination(2176U);
    msg.setDestinationEntity(170U);
    msg.enable = 217U;
    msg.mask = 3841053748U;
    msg.scope_ref = 4243143350U;

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
    msg.setTimeStamp(0.81551059725);
    msg.setSource(6355U);
    msg.setSourceEntity(203U);
    msg.setDestination(39397U);
    msg.setDestinationEntity(131U);
    msg.enable = 102U;
    msg.mask = 638114190U;
    msg.scope_ref = 4105007896U;

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
    msg.setTimeStamp(0.285842520753);
    msg.setSource(47775U);
    msg.setSourceEntity(137U);
    msg.setDestination(9607U);
    msg.setDestinationEntity(175U);
    msg.medium = 55U;

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
    msg.setTimeStamp(0.652617415868);
    msg.setSource(48205U);
    msg.setSourceEntity(232U);
    msg.setDestination(53861U);
    msg.setDestinationEntity(192U);
    msg.medium = 93U;

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
    msg.setTimeStamp(0.680328669486);
    msg.setSource(41557U);
    msg.setSourceEntity(235U);
    msg.setDestination(15008U);
    msg.setDestinationEntity(5U);
    msg.medium = 59U;

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
    msg.setTimeStamp(0.686606616901);
    msg.setSource(59088U);
    msg.setSourceEntity(29U);
    msg.setDestination(2881U);
    msg.setDestinationEntity(45U);
    msg.value = 0.697157754253;
    msg.type = 9U;

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
    msg.setTimeStamp(0.957776542141);
    msg.setSource(10917U);
    msg.setSourceEntity(72U);
    msg.setDestination(7918U);
    msg.setDestinationEntity(217U);
    msg.value = 0.813007376653;
    msg.type = 202U;

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
    msg.setTimeStamp(0.552056528925);
    msg.setSource(32016U);
    msg.setSourceEntity(49U);
    msg.setDestination(1386U);
    msg.setDestinationEntity(239U);
    msg.value = 0.40927304446;
    msg.type = 34U;

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
    msg.setTimeStamp(0.25245987334);
    msg.setSource(17619U);
    msg.setSourceEntity(0U);
    msg.setDestination(42106U);
    msg.setDestinationEntity(161U);
    msg.possimerr = 0.209760251838;
    msg.converg = 0.241097214267;
    msg.turbulence = 0.301432808038;
    msg.possimmon = 218U;
    msg.commmon = 9U;
    msg.convergmon = 178U;

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
    msg.setTimeStamp(0.761306955295);
    msg.setSource(46833U);
    msg.setSourceEntity(29U);
    msg.setDestination(22476U);
    msg.setDestinationEntity(226U);
    msg.possimerr = 0.397856370493;
    msg.converg = 0.58962872501;
    msg.turbulence = 0.00215085341106;
    msg.possimmon = 97U;
    msg.commmon = 252U;
    msg.convergmon = 229U;

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
    msg.setTimeStamp(0.581906199872);
    msg.setSource(38158U);
    msg.setSourceEntity(69U);
    msg.setDestination(23276U);
    msg.setDestinationEntity(55U);
    msg.possimerr = 0.618149969134;
    msg.converg = 0.410332578332;
    msg.turbulence = 0.203964670307;
    msg.possimmon = 252U;
    msg.commmon = 190U;
    msg.convergmon = 3U;

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
    msg.setTimeStamp(0.796441499241);
    msg.setSource(65002U);
    msg.setSourceEntity(47U);
    msg.setDestination(59558U);
    msg.setDestinationEntity(206U);
    msg.autonomy = 209U;
    msg.mode.assign("RVEVDMHZQAHYOZEASZMBETPGFRBWLDYQIPQVBTZCLHKQTIDOKFNJCAPSIUASYMEGCJDXHNOWOPTAJKWKIKLJQMWGPUUQEEAFPBSXXAMUQIMVFPBHKDCMWTK");

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
    msg.setTimeStamp(0.150272927848);
    msg.setSource(21376U);
    msg.setSourceEntity(80U);
    msg.setDestination(53243U);
    msg.setDestinationEntity(138U);
    msg.autonomy = 154U;
    msg.mode.assign("ALCUIZPJBYBVSYDKVZCAYEM");

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
    msg.setTimeStamp(0.860387467664);
    msg.setSource(38224U);
    msg.setSourceEntity(15U);
    msg.setDestination(39409U);
    msg.setDestinationEntity(90U);
    msg.autonomy = 16U;
    msg.mode.assign("MUZXSNBSSHIOSUAQMS");

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
    msg.setTimeStamp(0.380611087229);
    msg.setSource(34033U);
    msg.setSourceEntity(42U);
    msg.setDestination(23132U);
    msg.setDestinationEntity(57U);
    msg.type = 253U;
    msg.op = 196U;
    msg.possimerr = 0.576142709814;
    msg.converg = 0.464678706924;
    msg.turbulence = 0.527947059161;
    msg.possimmon = 219U;
    msg.commmon = 184U;
    msg.convergmon = 232U;

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
    msg.setTimeStamp(0.120713750712);
    msg.setSource(55122U);
    msg.setSourceEntity(98U);
    msg.setDestination(3703U);
    msg.setDestinationEntity(184U);
    msg.type = 243U;
    msg.op = 91U;
    msg.possimerr = 0.172373270538;
    msg.converg = 0.653753554701;
    msg.turbulence = 0.330721447422;
    msg.possimmon = 167U;
    msg.commmon = 237U;
    msg.convergmon = 33U;

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
    msg.setTimeStamp(0.74081029435);
    msg.setSource(13134U);
    msg.setSourceEntity(154U);
    msg.setDestination(46184U);
    msg.setDestinationEntity(165U);
    msg.type = 235U;
    msg.op = 206U;
    msg.possimerr = 0.619937163879;
    msg.converg = 0.314688919115;
    msg.turbulence = 0.929424243214;
    msg.possimmon = 194U;
    msg.commmon = 134U;
    msg.convergmon = 166U;

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
    msg.setTimeStamp(0.145331803045);
    msg.setSource(14014U);
    msg.setSourceEntity(17U);
    msg.setDestination(29982U);
    msg.setDestinationEntity(203U);
    msg.op = 102U;
    msg.comm_interface = 94U;
    msg.period = 64796U;
    msg.sys_dst.assign("SCUNSYNYHFOPYRRIRYXRXVLXEDOGICAMFDHLEVEMJGQMPFZYBVIIPNFVNMYEOJAXPNCX");

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
    msg.setTimeStamp(0.0679332262308);
    msg.setSource(42496U);
    msg.setSourceEntity(80U);
    msg.setDestination(63975U);
    msg.setDestinationEntity(146U);
    msg.op = 92U;
    msg.comm_interface = 162U;
    msg.period = 53912U;
    msg.sys_dst.assign("FMLSNADZUERWTZZOBKMPJQHAKUHWJGZTIDYMGIIVIVGDEDBFQCYSMRCXFHYVSHXTCVNWEJIK");

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
    msg.setTimeStamp(0.535536871868);
    msg.setSource(3571U);
    msg.setSourceEntity(92U);
    msg.setDestination(61047U);
    msg.setDestinationEntity(20U);
    msg.op = 1U;
    msg.comm_interface = 119U;
    msg.period = 24167U;
    msg.sys_dst.assign("PINFRRUDLGPLYGMGGGASLKTDVNCJQTNCTJQUNYZMOUVTEHUHIPYSXDKTQLUAWPXINMBBDJICBCCSMEWJWQXQEXTVMBRKCDFGAZQAYNTZWRTHQNPAQRVMYHHVCIG");

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
    IMC::StateReport msg;
    msg.setTimeStamp(0.964893919487);
    msg.setSource(29454U);
    msg.setSourceEntity(106U);
    msg.setDestination(58908U);
    msg.setDestinationEntity(119U);
    msg.stime = 1291915480U;
    msg.latitude = 0.917289218398;
    msg.longitude = 0.0212090798608;
    msg.altitude = 25097U;
    msg.depth = 31163U;
    msg.heading = 12441U;
    msg.speed = 11289;
    msg.fuel = 11;
    msg.exec_state = 86;
    msg.plan_checksum = 24202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.210361904406);
    msg.setSource(60318U);
    msg.setSourceEntity(140U);
    msg.setDestination(15429U);
    msg.setDestinationEntity(165U);
    msg.stime = 2407926560U;
    msg.latitude = 0.753057724127;
    msg.longitude = 0.898803713758;
    msg.altitude = 8277U;
    msg.depth = 3713U;
    msg.heading = 43984U;
    msg.speed = 716;
    msg.fuel = -31;
    msg.exec_state = -51;
    msg.plan_checksum = 9964U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.554814946551);
    msg.setSource(10386U);
    msg.setSourceEntity(87U);
    msg.setDestination(40233U);
    msg.setDestinationEntity(13U);
    msg.stime = 1184273214U;
    msg.latitude = 0.135005220043;
    msg.longitude = 0.389194432161;
    msg.altitude = 23603U;
    msg.depth = 42512U;
    msg.heading = 11128U;
    msg.speed = -24351;
    msg.fuel = -76;
    msg.exec_state = 106;
    msg.plan_checksum = 28366U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.428103650684);
    msg.setSource(27201U);
    msg.setSourceEntity(16U);
    msg.setDestination(46896U);
    msg.setDestinationEntity(39U);
    msg.req_id = 37207U;
    msg.comm_mean = 165U;
    msg.destination.assign("YKROFDAMXFQOPUDSUNFIVCXLLUMPWJGTZMVKWTNBXPOLNAPA");
    msg.deadline = 0.279317523922;
    msg.range = 0.357497644271;
    msg.data_mode = 118U;
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.ax_cmd = 0.717838343106;
    tmp_msg_0.ay_cmd = 0.17324679573;
    tmp_msg_0.az_cmd = 0.566244116007;
    tmp_msg_0.ax_des = 0.211605828988;
    tmp_msg_0.ay_des = 0.638080754831;
    tmp_msg_0.az_des = 0.113868307905;
    tmp_msg_0.virt_err_x = 0.83164321262;
    tmp_msg_0.virt_err_y = 0.197822847104;
    tmp_msg_0.virt_err_z = 0.261232838075;
    tmp_msg_0.surf_fdbk_x = 0.940151958029;
    tmp_msg_0.surf_fdbk_y = 0.971927515313;
    tmp_msg_0.surf_fdbk_z = 0.330072350165;
    tmp_msg_0.surf_unkn_x = 0.335271161864;
    tmp_msg_0.surf_unkn_y = 0.550742228333;
    tmp_msg_0.surf_unkn_z = 0.143453969202;
    tmp_msg_0.ss_x = 0.748920890743;
    tmp_msg_0.ss_y = 0.724163457263;
    tmp_msg_0.ss_z = 0.431658464465;
    IMC::RelativeState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.s_id.assign("FNLMMJSGQGZUBRCCMYPOKZSPQQOQOBCRSROGFXSHYIOKPJBLKSVSFTR");
    tmp_tmp_msg_0_0.dist = 0.621390817441;
    tmp_tmp_msg_0_0.err = 0.973968946389;
    tmp_tmp_msg_0_0.ctrl_imp = 0.443435599004;
    tmp_tmp_msg_0_0.rel_dir_x = 0.946757472472;
    tmp_tmp_msg_0_0.rel_dir_y = 0.144857655729;
    tmp_tmp_msg_0_0.rel_dir_z = 0.250953267573;
    tmp_tmp_msg_0_0.err_x = 0.126535962402;
    tmp_tmp_msg_0_0.err_y = 0.311574571475;
    tmp_tmp_msg_0_0.err_z = 0.292840381739;
    tmp_tmp_msg_0_0.rf_err_x = 0.478305023131;
    tmp_tmp_msg_0_0.rf_err_y = 0.128786298334;
    tmp_tmp_msg_0_0.rf_err_z = 0.349243196364;
    tmp_tmp_msg_0_0.rf_err_vx = 0.989894979855;
    tmp_tmp_msg_0_0.rf_err_vy = 0.573074086899;
    tmp_tmp_msg_0_0.rf_err_vz = 0.916312822248;
    tmp_tmp_msg_0_0.ss_x = 0.255038560764;
    tmp_tmp_msg_0_0.ss_y = 0.14850602094;
    tmp_tmp_msg_0_0.ss_z = 0.248053419643;
    tmp_tmp_msg_0_0.virt_err_x = 0.101640783136;
    tmp_tmp_msg_0_0.virt_err_y = 0.747083708334;
    tmp_tmp_msg_0_0.virt_err_z = 0.113178294147;
    tmp_msg_0.rel_state.push_back(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("EZBSIXRDWNCWGKJMEFGHWRHQECMTOANQYQOHKDIQYPBTJBXDUSZQNLTCOYVSCHRXRLTMLLSLYLOQVOAFLGIHPPKZGPMDJGKPUFCNTZNSYQEMJYXNIEOHZOHMQDPUKDDIMWVIBWPDJVNUJPSCVFCJFWHDVHWPBFOEUFRZWIKUSWGFSMCVARIYXKSVTSLCNQEIZKXIXGRTNEDUHTFWBTFBGUJYX");
    const char tmp_msg_1[] = {63, -78, -2, -37, 64, 15, 29, -24, -52, 74, -55, 30, 9, 57, 32, 119, -58, 29, -72, 8, -27, 60, -126, -23, -118, -121, -93, 55, -78, 110, 81, 20, -123, -15, -9, -7, -1, 19, -80, 120, -101, -27, 103, 22, 102, -110, 14, 81, -57, -40, -74, 119, 110, 9, 73, 66, 51, -96, 15, -64, -73, 86, 90, 95, -1, -66, -76, 0, -110, 56, -101, 122, -42, -121, -51, -79, -124, 16, 19, 72, -10, 10, 2, -117, 57, -28, 106, 99, -80, 36, 65, -65, 45, -126, -79, 92, -128, -87, -22, -10, -105, -105, 40, 65, -61, 57, 8, 29};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.567514678183);
    msg.setSource(3155U);
    msg.setSourceEntity(147U);
    msg.setDestination(43027U);
    msg.setDestinationEntity(225U);
    msg.req_id = 27300U;
    msg.comm_mean = 98U;
    msg.destination.assign("XLNTRRJRZZPAWRSFBKHKZNEBKEDAAEFCHYGHZHIREJKFZATUCBEJUTMNEBGVEFAJJZXCQSQWAYDGQ");
    msg.deadline = 0.119826111904;
    msg.range = 0.268567360542;
    msg.data_mode = 95U;
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 14U;
    tmp_msg_0.longain = 0.0330647265913;
    tmp_msg_0.latgain = 0.977979746799;
    tmp_msg_0.bondthick = 1626265179U;
    tmp_msg_0.leadgain = 0.856966796759;
    tmp_msg_0.deconflgain = 0.48628979035;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ZDRHHUZDOEVMHWQBFAYTOWQEBNKX");
    const char tmp_msg_1[] = {-64, -119, -42, 6, 13, -121, -62, -96, -81, 22, -26, -64, -57, -46, 11, -89, -34, 74, 90, 70, -26, -115, 11, -54, 3, 13, -73, 28, -32, 85, -97, 41, 80, 48, -74, 100, -101, 98, 96, 115, -21, 8, 77, -98, -63, 121, 99, -75, 100, -125, 68, -61, 12, -28, 61, -104, -81, 92, 121, -66, -61, 12, 30, -112, -124, -121, 66, -26, 9, 70, -35, 29, 0, 8, -14, 2, 62, 34, 29, 38, -33, 113, 113, 92, -91, -117, -92, 27, -102, -3, -32, -53, -57, -8, -5, 61, -65, 46, -122, -110, -77, -100, 99, -95, 87, 1, -121, 43, 107, 31, -111, 99, 71, 31, -49, 74, -61, 67, 96, -54, 100, 72, 115, -85, -99, -49, -38, -8, 69, -4, -62, -58, 29, -100, -67, 92, 29, 119, 116, -52, -39, 124, 55, -92, 39, 0, 95};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.655101210275);
    msg.setSource(59850U);
    msg.setSourceEntity(53U);
    msg.setDestination(14213U);
    msg.setDestinationEntity(175U);
    msg.req_id = 64715U;
    msg.comm_mean = 125U;
    msg.destination.assign("DCHHUFAEVUKFZZBVPQKOAKAMNAKHMSKWH");
    msg.deadline = 0.479294432256;
    msg.range = 0.167364428376;
    msg.data_mode = 162U;
    IMC::Conductivity tmp_msg_0;
    tmp_msg_0.value = 0.159501808248;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("PWPCRIDDVJXKXHDETGXQMESUABGODIYRJQTNKTSLZSICBPPBVVOLFALYLRUFOFHTLHZHRQUGFEOQYTSONLFMXJPQVUNMHEABMXPIZJNOUDVVYRESIEINYWUCLKNTXTRNMBBKJAZWHDCCZZDBMNSMFUKGFFQMWCVCYZAUHJYAGQELTHWODIA");
    const char tmp_msg_1[] = {20, -39, -3, 81, 55, 118, -1, 90, 16, -12, 29, 49, 89, 40, -2, 22, 9, 11, -127, -27, -12, 44, 16, 1, 93, 50, -117, -83, 109, -71, -90, -82, -53, 91, -1, -127, -25, -56, -72, -71, -120, 82, -64, 76, 95, -13, -117, 48, 79, 62, 87, 4, 27, 9, -8, 6, -48, -124, -48, -24, 50, 125, 123, 54, 52, 88, 119, -117, 106, -65, -113, 80, 121, -63, -76, 16, 119, -88, 120, 78, 13, -90, -24, -127, -111, -121, -17, -8, -117, 81, 97, -21, 98, 67, 57, 44, -108, -81, -26, 81, 83, -22, 14, -75, -97, 118, 122, 26, -94, -71, 71, -39, 119, 30, 88, 11, 61, 38, -89, -72, -84, -77, 37, -69, -109, -55, -16, 10, -93, -67, 66, 46, 5, 121, -25, -67, 114, -49, 10, 98, 32, -54, -3, -109, -52, -124, -75, 1, -38, -100, 91, -70, -112, -106, 30, 50, -8, -93, -36, 53, -86, 89, 26, 47, -119, 86, -119, -25, -100, 100, 68, 31, -64, -53, 104, 71, -109, -15, -94, 118, 39, 103, 9, 84, -48, -10, 13, -63, 6, -85, -40, -60, -10, 105, -9, -102, -76, -105, 5, -110, -87, 96, 56, 111, -93, 106, -83, -121, -7, -107, -39, 99, -43, -72, -111, -92, -59, 115, 86};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.686834414588);
    msg.setSource(44176U);
    msg.setSourceEntity(175U);
    msg.setDestination(4551U);
    msg.setDestinationEntity(139U);
    msg.req_id = 37777U;
    msg.status = 173U;
    msg.range = 0.303046277924;
    msg.info.assign("ZSQEMYDEYSWWUHWXDVXLSYFBLFEAWZLUZBSFVMHHXLXGBBEAUMZRGHQMZVTORGTAWEXBIJRQVIJISUWCROYQXPDFDDGFPCDHMCTOIVISZFZJINCNFOXGIYQNOCQJVXKUMNHYOPRZZKIVLXKDQNFPSWUUGWKMAGAOTZIK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.835720610798);
    msg.setSource(832U);
    msg.setSourceEntity(74U);
    msg.setDestination(6861U);
    msg.setDestinationEntity(163U);
    msg.req_id = 10066U;
    msg.status = 172U;
    msg.range = 0.571128845032;
    msg.info.assign("FFBEJWVOMCPDILOELVTERIGWGY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.378442440101);
    msg.setSource(49208U);
    msg.setSourceEntity(8U);
    msg.setDestination(20642U);
    msg.setDestinationEntity(41U);
    msg.req_id = 52903U;
    msg.status = 170U;
    msg.range = 0.988966374805;
    msg.info.assign("UFEHSTUCCHEHYBDOLZEBZCSOVRWEECCGBZLQKDKYPEHOMNUACVWQUOJOSSOAKPJWEJMA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.681011810307);
    msg.setSource(12807U);
    msg.setSourceEntity(163U);
    msg.setDestination(53538U);
    msg.setDestinationEntity(95U);
    msg.req_id = 617U;
    msg.destination.assign("GBANWCREBXMKLWZVWDVODBHYQMMPLT");
    msg.timeout = 0.604920054121;
    msg.sms_text.assign("TGFOPURWSTSFJXYQVXMUOUOWMTDUMLOVJHTYAWBAAFZBZNAEOEXHLDBPMGSEXLOBMWXKTGIUJQGVTYDOQFTSNGTIWOQJXHJBDFUOSPRIGAHCZDCGGEZMXHCBZPRZAFPKQVCDYLNFRPJAVHXRDNQRYUZNBEWEGIISIJPERSHAJCWVRXDSCKLMYWHLHMQQKFZLUNDAWSFICOFXIRIRTBGBQJUYWZPMYPCKLVKBLKKNAYNVEYLNKSVQVEMCKHTNP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.967304982992);
    msg.setSource(20372U);
    msg.setSourceEntity(198U);
    msg.setDestination(46202U);
    msg.setDestinationEntity(231U);
    msg.req_id = 29735U;
    msg.destination.assign("LBHWTBWRIIYCAVEACYGZYLPUSXSQFIUJIEQXMNHGBLQRVSCHTKVBCOGMBIOYLIZINFVQTQBJKJENORMSJXTEJYBHTJDNVJMXZCBTPSHOXGPWWIQLVUFFMMHDAJETSPUODUVDAZKOUHWNQQRFAGPTGQCWITQUZUYRCNKAZDOVRSVKNWEYSZSRKMLLGFMGXYWXREZCGKXLXFLBHUAIVPMDORC");
    msg.timeout = 0.113679963629;
    msg.sms_text.assign("KCUFDVLTTEZYOMTLURZRXMEHKYUIYWVAPMOGRQNPWEKDJQHRGRBKLMRUPJYOCFQPDKJOECJMGBIOJWXJVWCXFHQFQDTHOSFHAFEZENNHWSQVCQAFNXXHSJTBXEMPYWYMGGZGIWBINJKZABVLDFIXJBSSXOCLTNRTBSMMILYTDPIZTGMXJSUBBYWFYVARHNHZNU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.105883695295);
    msg.setSource(56772U);
    msg.setSourceEntity(161U);
    msg.setDestination(50900U);
    msg.setDestinationEntity(169U);
    msg.req_id = 41811U;
    msg.destination.assign("LUGNQBHGRNLLPTUCRFJHTXGYFLEXVDOFYFHJDRUETGEWXDVGXSJCZZBOCGBOMYUPDJOMSWIRNNPPCCETVMKCKRJDIDPFSZZYAEKZYHPAAXZRHFBGUXVAYOAUDQKCJYVBXIGJLFXOLIKRRNMNMNEETOWWQMXTVACBZIQFPRWUFQKDQONTUDEEHQZTEVQPSWAVBVCBIUWSJIIVJ");
    msg.timeout = 0.943342290152;
    msg.sms_text.assign("AOPRYBFJSGWPYUGSFQXHHMDPJVJFOILWMUUFUCBGIQSMWJHPWYECRKOZCRKKCVKNATOLZSRLIZEYUMUFLHOKWDYOHALZOGMCPBEATGVAIJAHRTFQODLKQIBHNZTDYPWTIZSSXRUVWUVGYOIGXXZFAKVELHVTITGZMJBDETMDJVNXKWYDQMPCCAXEGSNBVNQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.764574169601);
    msg.setSource(19843U);
    msg.setSourceEntity(27U);
    msg.setDestination(24769U);
    msg.setDestinationEntity(2U);
    msg.req_id = 1216U;
    msg.status = 154U;
    msg.info.assign("NZRPIOYAYPBSTMTIDNJYTHNEVMFIASJXMKTADLPQWGZHCDOCVQFJZQPKTRBWQNNUWDTXLUOEMNALCTFUG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.501343223637);
    msg.setSource(8515U);
    msg.setSourceEntity(90U);
    msg.setDestination(63205U);
    msg.setDestinationEntity(181U);
    msg.req_id = 17288U;
    msg.status = 85U;
    msg.info.assign("UZPCEEDALWEKTYBZXYGQKEEETZRHJATQICORBZZFLHBJOIEOITCETUKMLFPYFNPFKRSRJMQWNTKXTCDVIMPPVUAYRJNSFNSLKMXJSNHGRPWFKFBSZYVBMPFNXC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.968260405188);
    msg.setSource(46050U);
    msg.setSourceEntity(105U);
    msg.setDestination(35230U);
    msg.setDestinationEntity(133U);
    msg.req_id = 22318U;
    msg.status = 45U;
    msg.info.assign("EELWHNZOSFCSEJHIGXJXBFHIFRDWNFEWNTFYZUDHQOAAUTXQLSBRUMNGONYDCMZMAJJYQDASTLSDFAYVUVQSUKGDJOCRJNUDEKBTUZIVZQCGCNZWFSRDTKJYHKQLBZYDELSNGVACMKAQTMPYLIPMOPKZHUBVXCBBKTAXOEQIUPLAG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.714347694964);
    msg.setSource(34183U);
    msg.setSourceEntity(29U);
    msg.setDestination(22030U);
    msg.setDestinationEntity(95U);
    msg.state = 107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.0260945623531);
    msg.setSource(62279U);
    msg.setSourceEntity(77U);
    msg.setDestination(42291U);
    msg.setDestinationEntity(203U);
    msg.state = 187U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.103200719739);
    msg.setSource(21162U);
    msg.setSourceEntity(134U);
    msg.setDestination(3567U);
    msg.setDestinationEntity(77U);
    msg.state = 105U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.746467251263);
    msg.setSource(26884U);
    msg.setSourceEntity(229U);
    msg.setDestination(8459U);
    msg.setDestinationEntity(191U);
    msg.state = 163U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.859991586045);
    msg.setSource(56800U);
    msg.setSourceEntity(238U);
    msg.setDestination(31512U);
    msg.setDestinationEntity(238U);
    msg.state = 16U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.607401919999);
    msg.setSource(24079U);
    msg.setSourceEntity(223U);
    msg.setDestination(12525U);
    msg.setDestinationEntity(224U);
    msg.state = 113U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.668814895572);
    msg.setSource(54084U);
    msg.setSourceEntity(237U);
    msg.setDestination(29304U);
    msg.setDestinationEntity(212U);
    msg.req_id = 11191U;
    msg.destination.assign("ASWGGTCPQVSJFBOUKYOZQZHSXOGFJYLOWPPNNVKWOBUXADFLPNAMFMUWDMLFYJBJGOBODPIG");
    msg.timeout = 0.816897233801;
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.661791389689;
    tmp_msg_0.type = 12U;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.826659686256);
    msg.setSource(12219U);
    msg.setSourceEntity(105U);
    msg.setDestination(7798U);
    msg.setDestinationEntity(94U);
    msg.req_id = 47396U;
    msg.destination.assign("MXIUURUPAOAHNQUOQKYJGKDIOCXEZYIGRJCGKFPCUAJAGGHDPWVSUOYBRXLHSSAQCYXTEIRJVWEVOJG");
    msg.timeout = 0.829326832098;
    IMC::DmsDetection tmp_msg_0;
    tmp_msg_0.ch01 = 0.643142473226;
    tmp_msg_0.ch02 = 0.163524820571;
    tmp_msg_0.ch03 = 0.327349378962;
    tmp_msg_0.ch04 = 0.796550229216;
    tmp_msg_0.ch05 = 0.861231207687;
    tmp_msg_0.ch06 = 0.549684428012;
    tmp_msg_0.ch07 = 0.697840808468;
    tmp_msg_0.ch08 = 0.47880716012;
    tmp_msg_0.ch09 = 0.0854324948199;
    tmp_msg_0.ch10 = 0.105966450068;
    tmp_msg_0.ch11 = 0.624733462914;
    tmp_msg_0.ch12 = 0.929823476541;
    tmp_msg_0.ch13 = 0.81210601331;
    tmp_msg_0.ch14 = 0.116057009906;
    tmp_msg_0.ch15 = 0.0345191350587;
    tmp_msg_0.ch16 = 0.859092527902;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.257575685768);
    msg.setSource(282U);
    msg.setSourceEntity(208U);
    msg.setDestination(41014U);
    msg.setDestinationEntity(249U);
    msg.req_id = 45442U;
    msg.destination.assign("XUVFMAKHWQDIJFCVVOLJODEDNLPZERSUHRPYXOAMSMRNDLKTOOBGHABOTCZXCIFOUSKGJYKTMQEWIWEMPGAQYANCIYZFRMBDFPWEEMUWI");
    msg.timeout = 0.194559869599;
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 244U;
    tmp_msg_0.range = 0.438967415452;
    tmp_msg_0.acceptance = 213U;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.577008173519);
    msg.setSource(48574U);
    msg.setSourceEntity(211U);
    msg.setDestination(39874U);
    msg.setDestinationEntity(238U);
    msg.req_id = 57270U;
    msg.status = 98U;
    msg.info.assign("TYYSQDXMVNFEWWVPNMOBOAFPDIYNCBWFUIPERTXGXXNLBQQMBFSYJAPYYTJXHQSUSUPTZGKRMLUSCEZPXCYJOKLPIHUEMHNPBYFBGGJUADIZBZUI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.534235372973);
    msg.setSource(50343U);
    msg.setSourceEntity(115U);
    msg.setDestination(5246U);
    msg.setDestinationEntity(9U);
    msg.req_id = 51835U;
    msg.status = 149U;
    msg.info.assign("AROQKYOFVOWJRNEKQFTGROHCPEKPLWDUVWFQZCLWTMLFIMKGPEHQDYEXTANLPVCJASUZZNHGCCMDDHRRWAMOOSOKHOMGZCKDWLBXCFDEYDAACTNDZUZWTQLVEZANLXVJNQBWBYTUBBHXSJSIJLGVRPTGALJCLUHDPXNHBVIUMENFVPCORZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.433452942858);
    msg.setSource(62682U);
    msg.setSourceEntity(89U);
    msg.setDestination(14663U);
    msg.setDestinationEntity(48U);
    msg.req_id = 7440U;
    msg.status = 174U;
    msg.info.assign("HETDBDUTOVOIVULOLASICRAMFMYBLVRUPLXBHPQJYZCQCTMPTGNPXUQJZCRLJWFNYJBBSWVSJKXRLQUQGUMBMOMRWYPPPDTNHJKWLABDXNWFIWYQDRKEBXZEMPJWATCKSSOHYFUFVFOIVTLHYWLFQZCNIPAOZTKMRZKWEEONKSQUBKBTGXGERDMIJSORZCAJANIMEDGNJFIKGVLS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #2", msg == *msg_d);
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
    msg.setTimeStamp(0.609997135886);
    msg.setSource(49235U);
    msg.setSourceEntity(240U);
    msg.setDestination(37172U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.477356110837);
    msg.setSource(61933U);
    msg.setSourceEntity(205U);
    msg.setDestination(24338U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.549449872982);
    msg.setSource(791U);
    msg.setSourceEntity(85U);
    msg.setDestination(30040U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.545721086419);
    msg.setSource(8871U);
    msg.setSourceEntity(212U);
    msg.setDestination(6454U);
    msg.setDestinationEntity(78U);
    msg.plan_id.assign("VSGZWNWXAPQYMVKFABMGRPEOVHNTEYPJXOOOPYAFIOFEBHJEVCUQZMNKJRKXPBMQUSUULDZMWTY");
    msg.description.assign("NWIHXNWCMPWDHCTKDZNOORFFPQJYTACUXBYHPKDWRLBWZQYJCWSFMUSLUAVIGQOKPXGXIFXV");
    msg.vnamespace.assign("RYPQIJBXGCTCWRJTBXFVPXCZWQFSTTSRBLCYLXBIDSFHBRUPWOOKUHSOQLJQRGUKECTGREELSAWJNCAGNIMIEGXXNNCKRJLEXYJMYFZHNJLSDPJOSDNISIDMPXMGOLZHEHWGCOUFVPNCAYULWHQDSDVKAVIATFMAOHAVXKG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("OOOZQXCFRHABHILWGIYUOCXUBVXORJSPPMXTVGYJEFRLAHDBXVNLXEIVMLZR");
    tmp_msg_0.value.assign("HAJIGRSIGXMQDCSEKCNNQRFDRJEVBEBHFREFUXAYMPYPGWDPUAZWNLRPTMNTFVMPGPCCWMAWNTXFQQIFOTESPBSKLKDOYHZBQEHBXVASPSTTKCWRSXBZHBOUJYNDZGEWLYYFYOXSQILOLNPYPGNGJKQGDEIVKQLJOHMJTUFLD");
    tmp_msg_0.type = 88U;
    tmp_msg_0.access = 145U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("NGHNEPXJYQBEROQCAYRQMNVGOSRUVUZZSGFFFWMWUAZVWJIEKHUJTHPKJRFAKSCDWKTUDQXUQPLNZTSEHHUSGQNQXKRYZNRSWGBMRLLUYOYXDEPAYABRHHUPLCXQJZKXOFUIYNG");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("ODURMONDQEPSVUKNJDZZTQLEJYTQWCBPDOUTVRNWUAZRPMTKXSLRHUEXWIAMFKXHZXCUQNHTOSEYJZVYSSHAAMPPFKIIYKBLXDRCIFVXDHOLVMYIEQSLMYQUUPFXEOLTYNOKLRPYYRVJJWVNLHDBDKTUWHZEHLFAOGGSQBRMVWWMQXBBAJZXTGCEMFJGZIOACACHUQKFS");
    IMC::PopUp tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 39842U;
    tmp_tmp_msg_1_0.lat = 0.319687487948;
    tmp_tmp_msg_1_0.lon = 0.450825860433;
    tmp_tmp_msg_1_0.z = 0.252152936269;
    tmp_tmp_msg_1_0.z_units = 86U;
    tmp_tmp_msg_1_0.speed = 0.0238559840537;
    tmp_tmp_msg_1_0.speed_units = 196U;
    tmp_tmp_msg_1_0.duration = 28736U;
    tmp_tmp_msg_1_0.radius = 0.240522410038;
    tmp_tmp_msg_1_0.flags = 47U;
    tmp_tmp_msg_1_0.custom.assign("XJHUQVYZDPHRHUJADNTYLOWRMGZFUOUCNTNWEQKBICTHNYEAXFUQXUBUSIIIAZVKGGJJJPTYBIDFYOIKPBULXPVBAMYRNRMBQMSFTANXXGOTHTOUEWAHYGZPDMOCIQLWNWFTBGYTGDFGBFSKLHFXSZLNMWBVKNQFRLXVSQRVIGWZUMECCVJOOQQDCCFSEVSRHYRSHEXPNTXAHYKVJMIP");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Reference tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.flags = 91U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_1_1_0;
    tmp_tmp_tmp_msg_1_1_0.value = 0.514400721173;
    tmp_tmp_tmp_msg_1_1_0.speed_units = 52U;
    tmp_tmp_msg_1_1.speed.set(tmp_tmp_tmp_msg_1_1_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_1_1_1;
    tmp_tmp_tmp_msg_1_1_1.value = 0.395110734677;
    tmp_tmp_tmp_msg_1_1_1.z_units = 174U;
    tmp_tmp_msg_1_1.z.set(tmp_tmp_tmp_msg_1_1_1);
    tmp_tmp_msg_1_1.lat = 0.784998408617;
    tmp_tmp_msg_1_1.lon = 0.383231554965;
    tmp_tmp_msg_1_1.radius = 0.812428731404;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::LblBeacon tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.beacon.assign("JHOVLWFGXSGTIVIDOMCYODNVRLAMPAAVWCHMJYSIXVTJBDLZLTJWGUWQYYKEUKFAVKAPSRDHUNDPEJGOSLWZFBWBUXSVOKEX");
    tmp_tmp_msg_1_2.lat = 0.268759040983;
    tmp_tmp_msg_1_2.lon = 0.0434220878997;
    tmp_tmp_msg_1_2.depth = 0.161912453833;
    tmp_tmp_msg_1_2.query_channel = 161U;
    tmp_tmp_msg_1_2.reply_channel = 6U;
    tmp_tmp_msg_1_2.transponder_delay = 87U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("UFCTLOEIXDXNHUDCSFGUKSULFWTIOKGCOZXORJTLUNJJYAZGYCLENCGNLPBHMIYJWPBXIBLPRBYNKWQYAKBCPEWKEPLQPDSMOEBJMCHMBRUIECZIMXWKSMQQYFRFLHWIETQPIUDRGMVGRZZZVDSVVUVKXLCVEBOHMMFWQGJOJCDGOWBRXEAVHDNTDKFQJAYRTTDNJZUMAVOYYAPUXHYHQPVXXPH");
    tmp_msg_2.dest_man.assign("ZTCCDUVUVKHKXIAROVYBCNAAQZICCOLZOEBAFGTKXOSPGKEEHVHPOXYYEHMIXWDGYSGEDLYDAQEYYJNJPPZVWFXXGNHVQIPSPBLTREOSMRMXHMFABPHNBFFIDQUHPT");
    tmp_msg_2.conditions.assign("JSWVKXAJFAZHCGSJWNDTPNBIRSEIAQRHFBTYYUXLXWQXTWNXYHXNAYYDMZUGIDOLIUVXOKNRTAJRCCBSNLZGHPKECLSKUQFZSVMTFQFOAATPDKIIYGLMHJEDHSTZKCLZYYNRFYCAXPRBAOMLTHUZLJJDLSMUFWUKVFOPGSFQCEXKUREVPDOTGEOJGNBLPHEMOPWMIZXCVEYDJKRRNBQNIZWHJHMPSBZQBQOBO");
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
    msg.setTimeStamp(0.716443682835);
    msg.setSource(37116U);
    msg.setSourceEntity(238U);
    msg.setDestination(17494U);
    msg.setDestinationEntity(192U);
    msg.plan_id.assign("DJFQMSCMCKKBDADLEWWWSJGSTBERRBWGGUMAQMHAIBAVZXYXCUKLOXIIVSWTFLEZISLUTJHKZVAUFQFKBJESMPBLRQRRTMBDCZWZXGOHDNNWOBKCYOAHPADXFILXHFRVZENTDJVBVRYLAMPYOQMJMTL");
    msg.description.assign("UCJFZWCAWGXUAEWTOPRUUEQDXFUBHNKNFCYVFVADKFSBYDNYMPVBQVXHGLWVGSKAHRCGZZWQVEDKSLRWMJHITVBXPQKUYHVXLENJDISJGMQXLKQOSCRGYCCRHODDECBEYG");
    msg.vnamespace.assign("UPQAFNMKKPMHKXBHADWFROXINZSTNIAUXGPAMVDGDTIHBFKLFMPPLLBOEUIJFPAHWPT");
    msg.start_man_id.assign("KPMYCUKOEAZMHMZJIXAEDWRGRVGWPL");

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
    msg.setTimeStamp(0.929359753417);
    msg.setSource(1082U);
    msg.setSourceEntity(31U);
    msg.setDestination(28637U);
    msg.setDestinationEntity(235U);
    msg.plan_id.assign("ZDGCRKITYEOINIXWDJXCETOJHSXBFFUTBERSEHQVAOYCZFYETEWKRUPJZVULLYIJAASYZTTFPODGVMAHENLDSCMVIAVNFGYWGONCFHYNPCZIWHKPHVRCKXXLRMMLLIKOXPHNFQDZWNKUJGQLSGEWOFMQCPOOQPBDXHKMCOTWSKAEZRLMJRNRJVYQADKERJSQNSDCHQZUGTMBXRKBSGPBHSUATGUIFTA");
    msg.description.assign("EUNJBXTRNZQKEOTINSPAVFGQINCWKLDHDHRQQGKVKZPYHATXRZSXZSQBVKLFVMCQYSGXRLWXJUNUYOHJTIVODAEGBUSFVYJTIJREFDDRSPKFIMKHDBMQTWLNLALOBUUQANOZBFPMCMZCSYWCWCFWPWZNIZKXLMMAVLEHHPCMGIUTJYUTCGANSPVIRYQ");
    msg.vnamespace.assign("MPQPGDLIRQOEFMIXDSUOSXEWWGUHJIMYRDPEPGPYTRQMVEICZIKVJWCNWMSWGZXUXAJMFSVAYJBTBCWVKNLKJZKAWUVKHSERPTSBJAMLGRQYTPUWLXMD");
    msg.start_man_id.assign("DSHGWFNLHEJPTYNKAIVINMRDJNXEJK");

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
    msg.setTimeStamp(0.0629985824012);
    msg.setSource(9967U);
    msg.setSourceEntity(146U);
    msg.setDestination(43852U);
    msg.setDestinationEntity(46U);
    msg.maneuver_id.assign("QFIKPTTHYXOZIQSOEKLWBZTNLDTJFQNFYGYCFDPJPGSSBTHFIUIGYGESAIRMAVDRDJRXUFFZKARGAITXEEGKIVQWOQGRYNBCOKNDNJNBYOGCLVWZCWLAWYAJLMMSOWECSQUPISSCPVPMUXRMRZVOPAKLEXAILXMAJQKZ");
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.1855389512;
    tmp_msg_0.lon = 0.925184119188;
    tmp_msg_0.z = 0.506937805018;
    tmp_msg_0.z_units = 6U;
    tmp_msg_0.speed = 0.545274241586;
    tmp_msg_0.speed_units = 168U;
    tmp_msg_0.bearing = 0.614211216212;
    tmp_msg_0.cross_angle = 0.495598383017;
    tmp_msg_0.width = 0.670484080893;
    tmp_msg_0.length = 0.345177170529;
    tmp_msg_0.coff = 121U;
    tmp_msg_0.angaperture = 0.366235922356;
    tmp_msg_0.range = 6354U;
    tmp_msg_0.overlap = 86U;
    tmp_msg_0.flags = 207U;
    tmp_msg_0.custom.assign("DJQDEKJWUBGAHRIZMVKUXQWNDNSYJUXOJIQLICWURFQUCSFVGCWLGAYGDMTVZWATNET");
    msg.data.set(tmp_msg_0);
    IMC::Dislodge tmp_msg_1;
    tmp_msg_1.timeout = 36718U;
    tmp_msg_1.rpm = 0.914904329916;
    tmp_msg_1.direction = 205U;
    tmp_msg_1.custom.assign("QKVWDLAIMLCV");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::EntityInfo tmp_msg_2;
    tmp_msg_2.id = 190U;
    tmp_msg_2.label.assign("YMAATNJGVTKNMXLIFZPZWOCELNJQCLMUNBQYYEGDNDWRYZTSYPGMUSGHAUGBOIISNCOTCJQARLEUQPGVUWRJKEJSYVNZSHZBIDCRICJRZDTZHSUVPM");
    tmp_msg_2.component.assign("FVNXQXVKCTSCGXZOWPDUZQDRYBIIOCSSKTQHBNMRLZTZWDQNGFEFWNIQUAXUVJKGANKEPWXIYYIRVZFXJ");
    tmp_msg_2.act_time = 8586U;
    tmp_msg_2.deact_time = 45939U;
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
    msg.setTimeStamp(0.385048916934);
    msg.setSource(56145U);
    msg.setSourceEntity(29U);
    msg.setDestination(33645U);
    msg.setDestinationEntity(218U);
    msg.maneuver_id.assign("SMHXRJKSSFLLSUKEYLIXRYHAZAKMPUBQBKGXJZZHLWIAJIKXSPRFGKFWORAEDZRAFJCWRRXMNVNDVQHGMOPHKWUEUTRJLJZXCQUQEBDLDTVYTKTDPYWFCPTGCSGJYWSONAPNOYUXOLCVWVLEOWHCUTGDMPIINAMNSOGDVBVFNAQQVEBE");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("HDSOJAXFCKDJTLUGISEEKEFEGTOAAJFBXBKZXGCUKSYPGEOMPRFQHFGNNWCLRMJHVJYEML");
    msg.data.set(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 35884U;
    tmp_msg_1.off_x = 0.904324769243;
    tmp_msg_1.off_y = 0.832542322525;
    tmp_msg_1.off_z = 0.668312041693;
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
    msg.setTimeStamp(0.626016999535);
    msg.setSource(36119U);
    msg.setSourceEntity(153U);
    msg.setDestination(3930U);
    msg.setDestinationEntity(197U);
    msg.maneuver_id.assign("NCTPLTKADYWFRCDLDEGRHTJPCSRGFMUCGBMWTIRGNYQQDEIJBTBCFCIZNBLWBGNOGQAXXMOLARKOQVFRUQOOHFEAZCTEJUMTSHFINZXKKPTKAIYPASZEADEAEXSYGUEXULU");
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 55666U;
    tmp_msg_0.lat = 0.472439783792;
    tmp_msg_0.lon = 0.12546647918;
    tmp_msg_0.z = 0.438375461757;
    tmp_msg_0.z_units = 88U;
    tmp_msg_0.speed = 0.864399219968;
    tmp_msg_0.speed_units = 226U;
    tmp_msg_0.custom.assign("KQLGOXJKXKFRIAFFHIVIVGES");
    msg.data.set(tmp_msg_0);
    IMC::IridiumMsgTx tmp_msg_1;
    tmp_msg_1.req_id = 28195U;
    tmp_msg_1.ttl = 13106U;
    tmp_msg_1.destination.assign("BRHAXIVNPXUTOVDJRNZLHKZBTNB");
    const char tmp_tmp_msg_1_0[] = {-115, 117, 32, -54, -98, 20, 58, 68, 22, 56, -89, 92, 12, 13, -20, -14, 72, 103, -112, 117, -70, -81, 13, 44, 38, -42, 17, -24, -30, -45, -2, 7, 83, 85, 16, 16, 16, -38, -102, -48, -62, 102, 16, 14, -79, -102, 70, -8, -57, 121, -52, -43, 65, -60, 95, 115, 57, -73, 30, -3, 121, -56, -14, 78, -111, 15, 67, -88, -91, -64, -79, -121, 53, 104, -63, 61, 20, 4, -9, -11, 3, 41, 47, -63, -87, -21, -97, -7, -77, -69, -48, 1, -26, -93, -128, 60, -88, 116, 82, 47, 42, -5, 78, 106, 80, 60, 120, 9, 93, 80, -82, -81, -58, 71, 63, -93, 44, -92, -89, 15, 47, 15, -95, 57, 95, -33, 73, -39, -55, 28, 42, -122, -11, 22, -95, -39, -54, -120, -47, -7, 105, 114, 89, -59, 10, -93, -10, 56, -42, -120, -11, -55, -70, 44, -37, 87, 88, -102, 0, 48, -88, -80, 52, -71, 99, 106, -52, 26, -101, -58, -64, -15, 9, 72, -58, 70, 18, 10, 117, 37, -126, -121};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.start_actions.push_back(tmp_msg_1);
    IMC::CrudeOil tmp_msg_2;
    tmp_msg_2.value = 0.0278494632215;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.181329072782);
    msg.setSource(25032U);
    msg.setSourceEntity(240U);
    msg.setDestination(26387U);
    msg.setDestinationEntity(122U);
    msg.source_man.assign("NVBXFDSUKSLZHHIIAJHQD");
    msg.dest_man.assign("SNHNRXDWBUKZXAMHZPBLTJCVQYKJRKCPEJEZGFPUXQERBLSOQOCBUYMNIPBYCYVZWZILIUWSSTXFBVPRBSFKVAXWISGDKXWOZDNWNVNIKOAFHECLGIVMHNGNUJYAUATEZTLTTYNAUJUGDQLPPTWBOBCROZCELIHHKJZFTBQJXGHXDPPMEWMPFISROOKXREWSRAYVOJSDOGACQFWDTMC");
    msg.conditions.assign("BJXWCWSNELIHQSZALLGQAVYGCLKBTDZPBURKZUSECJGQUJJDDHTRKUQMQQFITVTNUIGYKILJZVBOT");

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
    msg.setTimeStamp(0.567356065122);
    msg.setSource(21151U);
    msg.setSourceEntity(190U);
    msg.setDestination(27935U);
    msg.setDestinationEntity(40U);
    msg.source_man.assign("AWTMHGGLEKPCVYUCJQWWHCDVFCNMHT");
    msg.dest_man.assign("OLMUXQINDFBHXMZWRXNVEPPJTNLRGILSHZZFSWLTYFXOSRVQUAHTGEZYGBJQNCBHEJMEHVLXCZBSPSLFVUQDHILTPSXHZKTATLIQUADUKOBQMRCYIRPNCIEAHMUVUGEIMUDMRTFQAXOUIORSMUZROYKKOXTSFYVPEIAVGPSKCJCBWLHEKWAJIXDKOAGZCYYKNBJWDJPFGMNMEDDVSQB");
    msg.conditions.assign("WFFOGAAELLMUGPBDQSNLBWQWDGRPNXJTKHIRXYLWMYXUZGDFGDRJBVUZEJNFQQEGOBASPIEVIXZRNHKPBIGOFNJPKMHJVLNZXOUDRIMLYCIFWLZZESDAQHT");
    IMC::LblRange tmp_msg_0;
    tmp_msg_0.id = 54U;
    tmp_msg_0.range = 0.741329738811;
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.0235752361112);
    msg.setSource(59091U);
    msg.setSourceEntity(93U);
    msg.setDestination(31183U);
    msg.setDestinationEntity(150U);
    msg.source_man.assign("ZZQWFMMUKAEVANRGVDPSJMVBMOTJWDORFMQNZXRROEPEMHFAVTJTYNKXYQZXCIPVDJQFZRJDWOHTOCHQEEUVHHTFIXKNXWPBLXFCDVAWHYGAOHIWHGTDELLVSYETBSKGSYPQJRSLKPALCBENYBOINUWYDSRNTUMVIRUXDRGZAICMKCIBAUCKUJZJRTSOJUYSBYNPCIMUXGQNQNZHYPWGSELUGFZVCFSQCKPXFHABLBMLWLQIGDLK");
    msg.dest_man.assign("NOYLRDXCQBZSQKCXVUNBZDDQFOQPTWSWFXBOTJGLUKEIQFJFWNGHVTMGWBSNQJSJZJFFROXWGKPMZMPSLELTTOALUJPCLPCLHLIYFADWCYHPCKNSKZXBAWMYPCNJHUBSUGTABIG");
    msg.conditions.assign("PVDIQZMWJWBYRMQEURREVMDOARAKOXAHELVNKCSAOACHIDLJPBHUXYXLBQI");

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
    msg.setTimeStamp(0.576115651121);
    msg.setSource(13279U);
    msg.setSourceEntity(121U);
    msg.setDestination(58457U);
    msg.setDestinationEntity(145U);
    msg.command = 157U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YAKREBLIKKZHGTURCT");
    tmp_msg_0.description.assign("BGHCRHIBWKVHIXVKMMROXZQMKPFKIDUDCJXMNRZLJPJDEYKURLQQAKUUXFINNNABDGBTFDSHXGLCNIDAFKJNCTFTSPMQWYSBLRASOADQKZPQOMZCYOWIRIVQUYKUFSCINJSUXMJDXYAZWKIJEPYASIHEZCFGMDPVVGCJUDGSLWZJOVOBBVEREUWEZQOMARHLYVVTGASEOTNEQLVEHEPLHHONXXOQMWFFLAGPTCRXLZYPUW");
    tmp_msg_0.vnamespace.assign("UHAKHHLCWSKUPTFSMWRNLFWCHAGZBMGVE");
    tmp_msg_0.start_man_id.assign("YVIGZTLBNIYRMANCOKYUHABTEIKWTBBYONKSJYESAQXYHHOIMZSIUVOCFTNZOGJKVRXJBGDSEQLXHDXESOAREEAXKZCLOTTCXXAZGUXJHMFRVJGFFWZCFLPFSWWNJBDWMYIQBAHPZGFWBLKWZYMLYQRRGJUQDSKBPEPJDYAPKRQVHGLEQESCDVGCNPPKQVNUVZHDVOCTWQHELJQFLHNUUNMRGXSAUPMSBTKTRIMM");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("XLVBGTCDSEEJGJDUMQFKQGGMSQWWVCPWEHIVLIMABOSEQUBUJRTEQIEVXMMKWTNKMIWRMVJTABAEUOPFFAKLJLREDIJAGXBEWNFGVXIWYNOUPTLDIULPFQGLWDHHTXUZXIHQMVDTVSKPORQTUJXYBZPXLFGCHOYNSROQ");
    IMC::AutonomousSection tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.765626475307;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.016186142654;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.823050342699;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 28U;
    tmp_tmp_tmp_msg_0_0_0.limits = 65U;
    tmp_tmp_tmp_msg_0_0_0.max_depth = 0.513837397507;
    tmp_tmp_tmp_msg_0_0_0.min_alt = 0.207740377838;
    tmp_tmp_tmp_msg_0_0_0.time_limit = 0.30128407665;
    tmp_tmp_tmp_msg_0_0_0.controller.assign("BTCBHBFXFLQBIJCYUZJOS");
    tmp_tmp_tmp_msg_0_0_0.custom.assign("JJDLJSBHRSIRIUNOFKBLJWKDHZOQLMRUYQUCTODEJTJETOKLFHM");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("LKIWHYRYPEDZSIJKUFAAUESANFRJARJDQXHMUQHCQIOGLAMEHTDEXSJMCDQVNCXEAOWGMTJVPLZSIBIWGFLUPNYPZTBRJKBVNVNYCPEKGOOBZJWKLEVJRDZVYYTTLQFSNI");
    tmp_tmp_msg_0_1.dest_man.assign("WCZZEYOJEBBLGDAJSISSIZBQMLBNMKSXLLALVYIZMWAVUFILNTOPFNUVTFUTTEJZKKFDPPIPQUXSHVMPNDATWHWHYMWSNPFXDEODFIBTJORPDHAYXUCRPYYXFGZCDJWCMKJOOQKSGVYNGBKLQYNUHWVXQMIOAHTRLABFIUGJRCYUQWDJXOJEEUGRKCKSPQEGHCRTYZVXRFQFWXCGZNGCOMWKGERNAHMTTLCQDIVIEAJRZS");
    tmp_tmp_msg_0_1.conditions.assign("RPQPAVOMISKVODCOPUACHIZHEPBRERZUTNBOJUHSEZDYWODUMDMJMMFYJLCGLUQASGFWWRDOCFJKQYDYBIIONJWPZNYCAYONXVFKCZAJGXGBFASXXKAXEHKBRTVSSONDNVTSJF");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.350937386636);
    msg.setSource(18084U);
    msg.setSourceEntity(192U);
    msg.setDestination(10664U);
    msg.setDestinationEntity(94U);
    msg.command = 17U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KKGNZDAANRPNKSLEMDOVJTSDMXQSWKCVCYHMAQFBIBPTBMOHIGLOGJEBYKMIZXCNEUZTRWEWXVLUGZUOWYAQMAJMOCPYCZRIOVQHEBPMLUYFTFPQGCZIHNSKHSXFLFZFEWWCITBVUHCDNATZPCMFYEHBXXUUQNDJNWXDOTVMZDLJIQKAPKJICBBDGTAFUOYSSUGSEGGJXNKQPVYERINUDLBYSRWLLKLPIJZHXXHFRSOWVYDRTRAVQOJQRRET");
    tmp_msg_0.description.assign("LGTUYPSIPZSGUDWEADWJLJDHKJGGOOZYRZKLRBUJDEJFEZRFEDBXOTBWKFBHNYCISCKTHBJAVICRLJZYXKAKMXXGOAFLQTWAXLDPFUYPGFZMKUYKEXISISNEPY");
    tmp_msg_0.vnamespace.assign("YHCLLUCLIEAXVNERKFNNVRZTTQYGMYVGHGUSDPUSDQTPWQFTNFIUIJMNWHWKXDPBMCEQZEBGOZWSELDYX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KOCIOWIJTEADYNEQRSWJSYBCUWQVXKPAHHFBJPTQRNIPHMUGEEPNYC");
    tmp_tmp_msg_0_0.value.assign("OXVYFQQRGUKSIKVSTPGOYRCUQWMZJOTIBMLZYOJCMBKPRMWFULDZWNLME");
    tmp_tmp_msg_0_0.type = 187U;
    tmp_tmp_msg_0_0.access = 224U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("XFYWORVFELTBXGGQTZWIWMKUQEMUDBASERFEJFKHDACHYESYLLAMROAJCKSONGEGMJOBFCKGLYSQSXAGTTJVRYGQWLAFAJ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("NPRJPJLOXGYBWQBTNFRGZTXBPRSBTQDUCKPWEVOYJYYGYIWMGXSDBLQXZMGZERMUXSLLRFYOJGPOAOJWIFHUZMQHKL");
    IMC::Alignment tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 14360U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.914975878421;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.416691179947;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.819591953291;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 112U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("DAQNMPJTKHHNTORXLTKHDJLKBWYSUPXSEWZVCFGUUOPKZDFOQWAIDRUAZGZBXCFNQFMLSMSTTXDZGNLUCHCZBDIGEDOYRFCBRKWVLVJJHEDOCZMUTLBQPEVNIEMUKNIXXNYDAXWKSRVLIJVVGINRHBMYBFLWNYWILVFZTOJBCSXHUGTQGANADBMOCWAQSYQSEWVJYZFJZVAORPGKMHYP");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("JUXGUBEQWQKSHEFQHMLATRZAEGYQUSCPHMEQRGROODOSPPVDTGPRLKGHEJZMUTVYXBCVCKKSKWBZWDGDZSKOOPYYFXI");
    tmp_tmp_msg_0_2.dest_man.assign("PCPUFRSUXHFJZOPVEYWNHOCHKZIWCYL");
    tmp_tmp_msg_0_2.conditions.assign("IJORGNWLPDFIJLNHCSHIUDJDPGCTFBXRAQMLNLFVOUSENCQAVDJOPRWFYLMSREGMJTYLGKDQLBBVYSNURBNOEWYFAFTQSESZSUWVPUWBIWIOSYGIFAOKMZBJKAIBBYQUDZIDHLKOQXXFXHROFZHNRYTAQUTWJBVCDZTVVUNXKVPKWEYQDZQPJFXKBZAUJ");
    IMC::DesiredPath tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.path_ref = 3840210841U;
    tmp_tmp_tmp_msg_0_2_0.start_lat = 0.812194707173;
    tmp_tmp_tmp_msg_0_2_0.start_lon = 0.862516647476;
    tmp_tmp_tmp_msg_0_2_0.start_z = 0.673874987494;
    tmp_tmp_tmp_msg_0_2_0.start_z_units = 212U;
    tmp_tmp_tmp_msg_0_2_0.end_lat = 0.459572040696;
    tmp_tmp_tmp_msg_0_2_0.end_lon = 0.215826388506;
    tmp_tmp_tmp_msg_0_2_0.end_z = 0.812570888719;
    tmp_tmp_tmp_msg_0_2_0.end_z_units = 66U;
    tmp_tmp_tmp_msg_0_2_0.speed = 0.120591523284;
    tmp_tmp_tmp_msg_0_2_0.speed_units = 146U;
    tmp_tmp_tmp_msg_0_2_0.lradius = 0.418243717584;
    tmp_tmp_tmp_msg_0_2_0.flags = 13U;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.84055163604);
    msg.setSource(61247U);
    msg.setSourceEntity(76U);
    msg.setDestination(2873U);
    msg.setDestinationEntity(46U);
    msg.command = 173U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HMFLDPDZRUNWVDVOSBTGLHNGKIVUZHIPWSLAJXVZKPRGEZQMZFELMGTEIZWEEHPLGYOQYXLUGUNLDRMNICACSIGFITTMYKSKWSPNWYVTCBYMKHFPFCVDOEUFDLAKEXQJAMFOPNUMVGAUIRRRHCAXHWPCWRAVQBOOTJBGDXEJTNQJNMMZCNODGWKESQRIZXTWJYYLYQQQSAXJBSJ");
    tmp_msg_0.description.assign("ULKDLRLTEPYUKFGSEOAHTAMJSLXESBJRBZHFMUTBEIFHBWMWPQCGBXYZNMYFECQVO");
    tmp_msg_0.vnamespace.assign("TUNWMNRZLUAOJUCDZNPLZTXUVEVAIYPDONTGOJGFXMYMKPTFSQWGHCSGJBXOYAXEXQJHZOUWEIYDMQLMLDMJRYCSFCQAYXLAVNWCDEOTEZNOKEQ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XXADACOAINDJDGWMDTIRYQYVSDTJZVPORUEKPUKUKWLMFJBSIHMNLVTWOKGCUFWBSSXGROWMCTOHTIFUKPBMYRYCWZYHUOHQAPOEOYMKDTVXHEMZGEKAJBNVIPJ");
    tmp_tmp_msg_0_0.value.assign("KKXNNYIKGPLPZOFIRKNFPWPZNTCBRLMJPPINCIYJJSSRRYEJGVYGUWBGDCTOWAQBRUOZNWIDZEUYAREMMOHQQGHLGBIDMZLSTXHSVYAFNIZBVYMCCPREKFGSGVHUHKHTVCCXDJBHMESXAMZWAJFULOWAGTDIEQBLUMFGDAAXXXQCJHUKVJTPRWAOXLOONTTTYOSAHRHKNLVQVZSWBPDUINEFFROXUK");
    tmp_tmp_msg_0_0.type = 230U;
    tmp_tmp_msg_0_0.access = 211U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("WAUMTZVYFXJYPCQYEXRISDPQIRGUWFHFEWMOUGJQYILCILRFGCJKORABPNLYVASTLHEYVVVMOFOEMHWETTMOSPMJGQVUGNKYDKNWFTNNKIXALKLIZUQXJTDRSTEHXVCHCGDGXDBMNPLWUGQRTIJKESBZZASDNZTWRBWYMNHJVIBWJQZUYXHFLBSEAUQPSUGOAQOVGPAHLDMCBPKNCOAEHSM");
    IMC::DesiredThrottle tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0233275557018;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.294414988398);
    msg.setSource(56291U);
    msg.setSourceEntity(251U);
    msg.setDestination(60622U);
    msg.setDestinationEntity(60U);
    msg.state = 129U;
    msg.plan_id.assign("QBPUAHZUGTHOEIJFDFDJKRGAPXHWBNFMDIWXONRHYCRVICXERGOVBXIQDOSOLRYRPYAJNLFHQISNGSFYOKMJWQNAKNVZHZXSZTSTWXYUWIKJZMUKOHULWOMQNLGXDIVCCTDCLYJSXKBMFXAKQNVAQMNUORZLBKGEHPUZTVSWRKZCLYTRFGCUEMYDMPHBSIIEFQYEXPPCVTBWOUUEJJWQJ");
    msg.comm_level = 172U;

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
    msg.setTimeStamp(0.956870026207);
    msg.setSource(2526U);
    msg.setSourceEntity(253U);
    msg.setDestination(32913U);
    msg.setDestinationEntity(197U);
    msg.state = 64U;
    msg.plan_id.assign("PRMILGOSHQISJWOCFBYHJ");
    msg.comm_level = 56U;

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
    msg.setTimeStamp(0.280749916319);
    msg.setSource(46042U);
    msg.setSourceEntity(106U);
    msg.setDestination(64273U);
    msg.setDestinationEntity(77U);
    msg.state = 150U;
    msg.plan_id.assign("JOYBRVZZEUAFTXVDYPTFCJFFNNJWWAWKIUTGOSEKDEYAVUZBHOCQTZUVWLIOCYNUCPQURTWYIXDSQYTDYXCIBELHRKHGMEOLQSDALSWYCCABOLGXZRAEGAEQPLJRCNRNEFIJYZFPPTQLAIHPZJMGWSWQXIHNFMCRKHIKGQVKSTMIHARFKDQJNNPYLVBBJXEJXUNXXMTUOOUGDZMHWVPMATXCZMVIDRBELQZSGBPGGSKHSVMURDJW");
    msg.comm_level = 170U;

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
    msg.setTimeStamp(0.52417424732);
    msg.setSource(13132U);
    msg.setSourceEntity(9U);
    msg.setDestination(25577U);
    msg.setDestinationEntity(239U);
    msg.type = 191U;
    msg.op = 73U;
    msg.request_id = 57883U;
    msg.plan_id.assign("YSQGFUMXVSTGXPAUEYLHZAJMPRLZTBNPEWDXJUWOOJBVNCQHGABJXMSLKTZZDPFTAZPLKXUFHCMYUQDMELERKUEJTVIPEQNKRISGMYFBAREHZXTJCYXFYLWVNJWIDRAATNJFCDZKXQGSBXKJOIOFRZUDPQGIOCWVTYBPDMHDCWZGBKSTGZRNFOLHEICQUNULIUSSCNH");
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 31630U;
    tmp_msg_0.sys.assign("IHNLFHOBLRFXEJNNCS");
    tmp_msg_0.value = 0.949730253343;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MHEPBKYQQRCQATYPPKSXNOIFHBOVBTKYWFFXIJKSHXFINMVSFQAUGZMCENCZDIKQWBIDCUACHGDVEBULUGVQZCAWPJJDFTPWMIDXIPAKPZZNUXXWRHMXCEQZWIJQJNWGHYFVRC");

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
    msg.setTimeStamp(0.33665755348);
    msg.setSource(19709U);
    msg.setSourceEntity(100U);
    msg.setDestination(19592U);
    msg.setDestinationEntity(118U);
    msg.type = 215U;
    msg.op = 94U;
    msg.request_id = 44263U;
    msg.plan_id.assign("KHQOCKTRILTRZSKKRDGNXJBOLNEHETIH");
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.830588492767;
    tmp_msg_0.temperature = 0.992441412284;
    tmp_msg_0.depth = 0.255006017654;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YFFYMHLWZNQIUQSSIRESKVMSEFYKYVPDQOZLSNWPPFNOXAQQBGIOYCAYAFFYLBDOOQGMDBTCJVADHGKYJOOXFCEIALCIWDVKWBRALHSPAMRWAQULNLLCKNSXUBEGEZYRMCCZYTDKEEAGIUXJUDJDXBHPMSFRFVGUJTWMBMPVRNORHVGUGWGIKZQCXTZPAWOCXIJLPWDZHFIBKUDRTZKUJXHTESJNNBMITJXQPTTCMWPZKRHHSNLVUBVOGQERZ");

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
    msg.setTimeStamp(0.515118313796);
    msg.setSource(59871U);
    msg.setSourceEntity(128U);
    msg.setDestination(57112U);
    msg.setDestinationEntity(181U);
    msg.type = 209U;
    msg.op = 152U;
    msg.request_id = 29421U;
    msg.plan_id.assign("WTNYRVBIJGRMNRXHLUYUWNPSVXTFQHXOZIYUVTOFGLFSQMAKUQLFELQQNCJNCXKBKTLCWFBMKLPEVCYXYTBBIIBUELICVDPAVIQETJXHXRUFHSODMAELWKQJFWYOPCWNVZXGAGLDADFGUPQECRGZKNVKRRUPBXRASOKMFYBAZLTGPMVFCHZXSADYHUUOZRZHOM");
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 163U;
    tmp_msg_0.numsamples = 186U;
    IMC::ProfileSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.depth = 49313U;
    tmp_tmp_msg_0_0.avg = 0.986008453746;
    tmp_msg_0.samples.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.lat = 0.834937435842;
    tmp_msg_0.lon = 0.011047864225;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NQWBRMMLBJWYNVDISDPTYZWDZYVAKHNXMXEAXWOHANPFJMLHGSNISJISDFCRSIECNMAGGSJXJZVDOIMUPUZRUOHXJQWTEKTDWTRESXEGJPYLKXTWSEAUOTVOGLONCRZGJRLJOOBKILBSOGQPFGIKFFUHKDKXTUALGEPHBPYQCCEOWUYRZQLRIWTALRBAYIUEHVFPQRXMBHBZJASXNWBKQKTHCVZDUBCMYDUCPFLVCZFTFPYIMVVQZQNQC");

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
    msg.setTimeStamp(0.703522556551);
    msg.setSource(22115U);
    msg.setSourceEntity(129U);
    msg.setDestination(37698U);
    msg.setDestinationEntity(208U);
    msg.plan_count = 23043U;
    msg.plan_size = 4146467256U;
    msg.change_time = 0.543393886954;
    msg.change_sid = 5232U;
    msg.change_sname.assign("FNFVSCUYDDAPRXNMIGEQBHAMWQMXMTIYCPAGOSVQEBHKOLTDDOGSPLUXTPVKITYSRFGRPBHAAWEARHJSVXVJFEKDJOPQMBIREWKKJKJLGFTDRHUXQCWCMIQURWNKJZHWYAYVUBUUYOPSFUTLZHHLUNJYLAXCOPCOMIKENZIPAMXEOCRDKBQMJIODEIMRXKSHOWCNZBSDAGH");
    const char tmp_msg_0[] = {-71, -64, 80, -45, 88, 12, 92, 112, -40, 29, 22, 29, -122, 120, 63, 101, 103, -50, -112, 52, 107, 69, -106, 48, -4, -97, 24, -115, -56, -108, 57, -45, -37, -1, -3, -123, 121, -74, 37, -118, -123, 11, -128, 52, -45, -75, -116, -13, 97, 45, -86, 41, 78, 38, 81, 86, -98, 43, 8, -44, 119, -46, 106, 117, -52, 32, 29, -117, 14, -46, -76, -85, 98, 3, -47, 5, -32, -127, -62, 95, 83, -45, 115, 104, -79, -91, 32, -8, 29, 46, -81, -3, -99, -93, -61, 99, -31, -113, 54, -17, 19, 72, -27, 101, 103, -16, 53, 104, -42, -25, -58, 63, 80, 71, 30, 99, -22, 6, -119, -7, -64, 85, 75, -40, -4, 37, -38, -15, -39, -114, 33, -14, 32, 104, -106, -84, 46, -116, -88, -90, 77, -105, 63, -52, 36, -70, 62, 26, -60, 19, 20, 47, 0, 95, -40, 66, -78, -52, 118, -95, -91, -97, 72, 29, 102, 19, -103, 77, -127, -4, -6, -124, 22, 2, 35, -60, -19, 62, -38, -79, 112, 0, -28, 54, 43, 18, -98, -22, 18, -107, 9, 28, -62, -79, -119, 59, 51, -102, -47, -117, -121, -46, -87, 76, -33, -64, 55, 16, -8, -3, -43, 85, 103, -107, -72, -81, 50, -64, 92, 117, 70, 47, 98, 120, 12, -68};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("VNGXBXEOBUCRRRKBASVWYQBNTLKWARJXPHIXWACGEUXUAQBYEAJYYCSGTCSGAWJVNJKLPHIONRFVMFEAQTYWKGZSORVNVWHIVPXBASHKXQIFOXOPNJPQUPLLSBUNGZJUCODCLPBXYDZEDIOKVFKGMRQDCWQWISUOSTHFNDHMMZWHSUDHDIFEABRVLZTTCMYQMKIXRNTLFFKRMSYLJUQBTGCDDCTAVFWQYDMEZJTLLOGZHN");
    tmp_msg_1.plan_size = 7529U;
    tmp_msg_1.change_time = 0.755324428001;
    tmp_msg_1.change_sid = 8395U;
    tmp_msg_1.change_sname.assign("CUAJEFXEXPGWETGRLYXZZHSUQMVJMPEVPQADIBEICGQFXNTKRPFZMBITWCXRMODSSRWOPTNJVJCJXWTGOWCBDVOXLABQHQMWFJCLLIYVKLTNGOVOCKYNAUNLIBSLORNPCTGSYSQWZKULZBWFIFVKJUKRTWQZHBBAFHNLYGAAHUYKFDNYHXMJ");
    const char tmp_tmp_msg_1_0[] = {-109, 25, 37, 103, -70, -53, -60, 32, 64, 99, 14, -117, -86, -122, -124, 107, -36, 111, 21, 106, -16, 92, -126, 124, -111, -34, -11, 125, 107, -110, 6, 119, 48, 51, 63, -81, -3, -103, 51, 110, 43, -52, -47, -101, 124, 107, -13, 33, 119, 44, 38, 82, 85, -16, 126, -70, -63, 126, -39, 87, 1, 67, 96, 49, 117, 107, 12, 100, 20, -106, 121, 32, 115, 99, -46, -47, 42, -113, -18, -105, -57, 109, 12, 86, -125, 26, 77, 70, -21, 101, 29, 114, 120, 13, -72, -5, -32, -92, -33, 102, 40, -79, 7, -109, 51, 105, -126, 121, -39, -29, 103, 118, -107, 114, 50, 70, 66, -76, -18, -86, -63, -14, 60, -110, -82, 64, 6, -108, -124, -94, 76, 75, -15, 77, 10, -81, 27, 1, -8, 69, -10, 14, -34, -32, -106, -34, -121, -103, -104, -53, 75, -106, -5, -29, -65, -36, -119, 17, 92, 89, 78, 92, 74, -100, -106, 15, -1, -99, 18, 14, 88, -76, -112, 49, -36, 106, 109, -97, 30, -39, 50, 60, 92, -102, 74, 25, 1, -98, 111, -86, -12, 26, 68, 58};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.631594978025);
    msg.setSource(996U);
    msg.setSourceEntity(247U);
    msg.setDestination(55441U);
    msg.setDestinationEntity(127U);
    msg.plan_count = 159U;
    msg.plan_size = 754174112U;
    msg.change_time = 0.95719058515;
    msg.change_sid = 43629U;
    msg.change_sname.assign("HRQHDTXCODPZMMZFDKWVLRBFZQAEILIJWGXEQIBUFSTAGZJILQAUUJXNDQPPJJVIQRYIVTDKWRCMUTQIGOIEKEBCJPRBEPTOLRDUKKXPGLBFSCYOCN");
    const char tmp_msg_0[] = {-50, 27, -127, 68, 21, 11, -119, 36, -68, -18, -44, -72, -109, 34, -14, -125, -43, -94, -25, 35, 107, 41, -106, -65, -123, -56, -99, 109, 109, -20, -73, 98, -92, -66, 125, -121, -35, -64, -82, 95, -95, 70, -110, 63, -78, -43, -58, 47, 38, 10, 11, -14, -122, 95, -6, -107, 27, -28, -12, 120, 101, -87, 99, -114, 83, 15, 9, -89, -41, -107, -86, -87, -12, -124, 1, 3, 1, 19, -63, -5, -35, -111, 52, -88, -14, 77};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("AKYRZMKMQOXZOPXPQIFNXXJQQJGSPZKJDSIOWDUPSGIDSCGVBXTDTAICVMUPZAIVRCVBIVNBEETSUDNGUEWBQHZISLSJMNETJJFRUUOABZWBMHOQYTYNVRXYZFLIQFGLNGVWAGXDRPBAWYYPOFLUCMMGSHLEENNFXNZTPDBNYUJHZKMDHLLTKCQWJFIPWRHZLVOAUQEWDSSRJYOCECRAOWHMBFQTLKLXVYATDO");
    tmp_msg_1.plan_size = 49346U;
    tmp_msg_1.change_time = 0.306766076538;
    tmp_msg_1.change_sid = 19457U;
    tmp_msg_1.change_sname.assign("EASNMFFJGFBJKWSTTLADKQYENBSUUYCWCDMJZTAZGEIGCYWBXYAPXILENZYRXZRMQSBZJVKBNJKPIGWLBOWHIOPFVLMGSROEATELCQMTOXHRPRNIANSUFVVMJICQETLBPHPRVGXLVYKTDQQVXBDKOUJKIUHHHFSZFJMYMWEYZPVXTSXVSCGHCUKNZVNDZEXOPYLWFMLDHKFKYCCHIEHWTPNAOCANIBA");
    const char tmp_tmp_msg_1_0[] = {105, 23, 32, -17, -67, 79, 118, -99, 108, 34, 72, 111, 117, -24, 42, -64, 17, 98, -74, -32, -98, 120, -93, 83, 39, -81, -35, 69, 125, -53, -60, 14, 54, 6, 30, -67, 64, 109, 89, 124, -101, -111, 118, 28, -112, 78, 92, 98, -87, 46, -102, 92, -60, -60, -39, 50, 29, 68, 93, -29, 95, -27, 54, -93, 39, -40, 89, 12, 123, -60, 123, -83, 125, -93, -119, 5, -70, 28, 38, -37, -91, -98, 99, -90, 122, -90, -17, 6, 38, -86, 5, -86, 111, -30, 88, 79, 10, -115, -4, 125, -27, -128, 42, 82, 11, -37, 71, 32, 39, 4, -10, -125, 86, -69, 23, 72, 115, 125, -89, 84, -40, 23, 45, 61, 48, 22, 59, -60, 104, 33, -121, 56, -39, -68, -73, 64, 69};
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
    msg.setTimeStamp(0.436654212409);
    msg.setSource(17114U);
    msg.setSourceEntity(118U);
    msg.setDestination(20022U);
    msg.setDestinationEntity(254U);
    msg.plan_count = 5695U;
    msg.plan_size = 963696807U;
    msg.change_time = 0.307236023742;
    msg.change_sid = 23729U;
    msg.change_sname.assign("EKTKAHTRNVYAHXVXGLWIMHQSMFWZOMQGJLDAYZYUJZVXIFROCFQZVXBCRNSFPEEOOIANSFQOBJLKHHNVIUDLHOKUVEZMIHRLRTQJLJXAGYSGFFJGSBUGBOEZZAT");
    const char tmp_msg_0[] = {20, 121, 69, -10, -29, -117, -106, 2, -38, -46, 40, 50, 89, 78, 51, -122, 91, -54, -103, -59, 78, -115, -46, 85, -68, 6, 39, 60, 3, -86, -19, -6, 60, 46, -99, 29, -60, -102, -64, 32, -58, 109, -11, -96, -120, -50, -101, -75, -83, 123, 48, 35, -96, 75, 17, 73, -78, -75, 3, 31, 126, -93, -4, 23, 49, -34, -29, -117, -122, 45, 7, -16, -73, -16, 86, 104, 60, 124, 9, 45, 126, 113, -128, -21, 12, -11, -108, -112, 12, 36, -8, 92, 120, 87, -90, 96, 89, -7, 31, 61, 10, -54, -28, -87, -59, -92, -15, -35, 16, -51, 102, -83, -64, 21, 104, -49, -58, -26, -30, 90, 20, -76, 50, 21, 11, -10, 106, -67, 75, 61};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("NLJMHCPLBEVYANDCYHTRELTLVHGWQSYGSMFKGKYEUSAMDNEBTDCKSOXWNJJULAF");
    tmp_msg_1.plan_size = 7019U;
    tmp_msg_1.change_time = 0.89169929504;
    tmp_msg_1.change_sid = 62682U;
    tmp_msg_1.change_sname.assign("OHQTRUOLZPLNGHWNKRZIJOSEFHZRCUDQTDSEEJXXXTAKPPLFTDDCTYKBTWFCSNFXYGHSXFAOEGEIGIUNRNSZCXWUYRAZVBAAKVPPINDGEONFXLWRVZVKXHMFTCHJTQKBEYYGKMQDOUKXVZMIJVYOUBDPWNJGIIXLSMDABNAGZMQVHHTMUYWRSLMOOJCQZBEQCDH");
    const char tmp_tmp_msg_1_0[] = {44, -108, 100, -17, -16, 119, -128, 12, -57, -114, 87, 37, -25, 92, 101, 27, -9, -106, -92, 11, -61, -8, -121, 126, 46, 124, -16, -84, 10, -90, 66, 97, -10, 32, -59, 24, 6, -5, 120, 18, -127, 86, 30, 59, 37, -93, -25, -121, -83, -15, -127, -89, -25, 16, 45, 27, 75, -92, -15, -1, -123, 126, 101, 86, -77, 56, -42, -36, -30, -75, -8, -13, -64, -117, 90, 8, -118, 54, -8, 90, 47, -68, 42, -128, 126, 71, -91, 25, 33, -51, -126, 9, -15, 27, -62, -110, -114, -106, 37, -49, -107, 72, 109, -84, -16, 90, 62, -82, 115, -11, 32, 8, 113, -87, 87, -79, 59, 62, -121, 86, -4, -42, -119, 113, -112, -11, 24, -46, 74, 4, 103, 40, 93, -69, -57, -106, -14, 44, -8, -111, 120, 1, 38, 56, 115, -54, -3, -6, -119, -6, -2, -56, 112, 46, -61, -78, 34, 53, 95, 115, -64, -61, 59, 111, -88, -116, -42, -3, -122, 60, -94, 20, -37, 28, 14, -113, -23, 97, -55, 93, 47, 16, 45, 88, 17, -46, 32, -111, 1, 61, -104, -118, 122, -59, -28, -106, -7, -109, -26, 7, 31, 115, 4, -35, -81, -62, 106, 11, -88, -40, -34, -19, -42, 42, 86, -77, -7, 28, 82, -120, -57, 71, -56, 8, -69, 66, 105, 8, -11, -14, -92, 29, -61, -14, -120, 38, 103, -118, -15, -109, 112, 40, -74, 42, -26, 88, -93, -93};
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
    msg.setTimeStamp(0.290430721427);
    msg.setSource(19787U);
    msg.setSourceEntity(164U);
    msg.setDestination(44472U);
    msg.setDestinationEntity(98U);
    msg.plan_id.assign("SVDTLNYSSXJMHEUOCTEWLXWPWMPHYIAKXSMZJRQXJOBAWJGIZVJGBDDRNYDZDOFAUIYWISQTGIPNRHZQUWFHIFPRCTKEPLVUYFKBFOEZMLMUITGVZCEAHYGFVPOFSJQLAXCUYDG");
    msg.plan_size = 52820U;
    msg.change_time = 0.872435775101;
    msg.change_sid = 6651U;
    msg.change_sname.assign("JKTWJMUMSPDULPTGBWXBNAHAIHXYJULAQZRLLZOSBVFCHFOETGVANZZSDZBCDCJRVVYWBBOYH");
    const char tmp_msg_0[] = {83, 53, -28, 26, 126, -89, 109, 36, 38, 93, -118, 122, 32, -65, -20, -88, 110, -34, 107, -35, -107, -122, 106, 69, 1, 98, 95, -119, 107, -128, -122, -80, 8, -54, 78, -126, -118, 51, -29, -99, -20, 29, 27, -71, 31, -110, 76, 37, -97, -73, 42, -48, -53, 120, -108, 111, 88, 27, -108, 93, 36, -74, 31, 72, 10, -96, -26, 105, 58, 13, -40, -32, -45, 15, 16, -29, -48, 29, 44, -32, 95, 64, 107, -51, 62, 115, -127, -97, 121, -72, -117, 101, -88, 25, 24, -80, 100, 97, -117, 36, 36, -41, -114, 13, 123, -37, -115, 85, 114, -106, 89, -116, -77, -74, -56, 18, -24, -13, 79, 106, -36, -55, 17, -48, 106, -58, 3, -60, 40, 70, 103, 48, 93, -97, 16, 25, 79, 16, 69, -38, -18, 116, -90, 102, 12, -96, -128, 4, -21, 75, 109, 89, 94};
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
    msg.setTimeStamp(0.332170515163);
    msg.setSource(28874U);
    msg.setSourceEntity(37U);
    msg.setDestination(52062U);
    msg.setDestinationEntity(20U);
    msg.plan_id.assign("LDYZUOJINPIJOVLCZVDSYNPTCFWGYJPDISQJVARHZZWHSEAKMOTQGOGSQAWEQFRBVVXXBTWFZEYPPHFRFMXYNVBATJOPEEPZTBUKFXGSRRFDZJQAKVANQGKPMUAKMHLICEMZBQHXTZSLDAUSGAVTBOBSICGVGKGUKQMJPDBLBWUNEHDUYRWAXLOXYJIDEWLIJLTUQYIDYJCERIHPLKEFNXOKLMMZNNHRHHSCFTMIVGTUXWCNWXKFORUR");
    msg.plan_size = 63017U;
    msg.change_time = 0.00118375815152;
    msg.change_sid = 41318U;
    msg.change_sname.assign("UOJEVBHWIDPXORUIP");
    const char tmp_msg_0[] = {-105, -126, -92, 58, -11, -17, 52, -62, -21, 65, -11, 16, -21, 54, 37, 5, 73, -78, -90, -117, 97, 13, -7, 108, 72, -47, -56, 3, 75, -53, -2, -110, -128, 30, 3, 117, -53, -66, -59, -56, -100, 71, 95, 14, -89, 36, -110, -83, 121, 86, -86, 33, -41, -78, -79, -59, 13, -109, -52, 80, -91, -52, 84, -112, -32, 103, -108, 55, -98, 104, 11, -75, 78, -115, -75, -82, -27, 73, 73, -2, -25, 8, -102, -96, -22, -123, -52, 80, 53, -49, -63, -7, -12, 116, -6, -24, 73, -68, -73, 80, 54, -94, 34, 100, -27, -21, -54, 57, -25, 115, 23, 92, -53, -48, 114, -98, -92, -62, 94, -58, 13, -49, -111, -18, -13, 73, 75, 103, 70, 29, -92, 84, 94, -80, -80, 16, -109, -69, 116, 26, -3, -69, 46, -114, -110, -58, 48, 77, -120, -14, -51, 5, -101, 38, -47, -6, -64, 112, -51, 18, -51, 95, 48, -25, -20, -51};
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
    msg.setTimeStamp(0.908835072114);
    msg.setSource(50845U);
    msg.setSourceEntity(249U);
    msg.setDestination(61761U);
    msg.setDestinationEntity(3U);
    msg.plan_id.assign("HFLRDNKOQCJNBFFQVCGIWHCOWLPWVFYOGYQRIOWZHMVVFQHQXUGZCONGMWDGSBKV");
    msg.plan_size = 43135U;
    msg.change_time = 0.915416198567;
    msg.change_sid = 22937U;
    msg.change_sname.assign("KTBEGMFQJXNLXJOTEWHAZNFYJDGZARGYDSIIIHERCXFUVEBCZYYPZLAOEWCUZIKQNXVCLSQQGPEJTAVSXKSNKGJDKTUXKXQAIHAQITUATJPYZIJZWHCMMXEZHULFBTDQVORLMLPNGBCBSHXATRWYDTUKOIMKCWOJHVMALZWCKQRWBFY");
    const char tmp_msg_0[] = {-32, -63, 101, 85, 104, -113, -5, 48, -80, 36, -71, 101, -103, -55, 49, 47, 31, -18, -43, 93, -77, -42, 105, -9, -107, 32, 42, -10, 99, 44, -90, 82, -92, 5, 115, -33, 43, 35, -116, -72, 70, -78, 119, 11, 22, -36, -46, 39, 126, 27, -83, -40, 22, 105, -116, 10, -9, 111, 16, 84, 66, -78, -33, 20, -25, -26, -75, -26, -56, 13, 20, -45, 65, 75, 103, 6, 91, -78, -53, -18, -15, -20, 78, 52, 89, -87, 62, -26, 75, -121, 104, -31, 97, -98, 75, -51, 47, -111, -59, 24, 46, 53, -107, -61, 33, -127, -45, 4, 47, -31, -21, -122};
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
    msg.setTimeStamp(0.298042488876);
    msg.setSource(48456U);
    msg.setSourceEntity(15U);
    msg.setDestination(38198U);
    msg.setDestinationEntity(175U);
    msg.type = 158U;
    msg.op = 213U;
    msg.request_id = 13627U;
    msg.plan_id.assign("BYMDJRJVDVBRVTSEHXAZGMKALAEZMQVNUQMYNRWAQESKXFNIIQZUMHGVMEGGIOYJRTWKNPJXAOTFRSFSMPKYHPECLUACJWWIMBKZLOPQRGZBHDEXCZQJBDEUWCTO");
    msg.flags = 33254U;
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 5909U;
    tmp_msg_0.ttl = 12466U;
    tmp_msg_0.destination.assign("CNNDUAJFFPFTYORLDMWXNFDGHNLCWMYFOJQRVFNOPRH");
    const char tmp_tmp_msg_0_0[] = {27, 51, -114, -123, -46, -117, -121, 30, -107, 85, -42, 1, 72, 58, -5, 76, 103, 18, -48, 73, 118, 101, 62, 45, 74, 35, -15, 1, -72, 39, -63, -87, 1, -6, 64, 37, -73, 39, -92, -19, -51, -24, -32, -3, -46, -58, 53, -91, 58, 106, 33, 122, 18, 106, 93, -62, 53, 68, 89, 104, 84, -117, 29, 58, -82, 26, 80, 122, -39, 106, -127, -13, -55, -15, -62, -31, -120, -2, 38, -61, 26, 19, -48, 100, 92, 44, -108, 89, -57, 96, -40, 79, 68, 83, 27, 120, 73, -5, 86, 57, -6, -127, -15, -50, 78, -61, -93, 110, -1, -21, -85, -85, -7, -51, -58, 50, -48, -55, -67, 72, -105, -35, 52, -80, -29, 99, -51, -19, 40, 27, -125, 47, 104, 89, -112, -29, -51};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WTBICXFLGIQZENAOOZCCSVVKYPEDKWSXPRLWGMUVDCXLXREIMJHFUXIXORQUAMHFHSCIIWKJIKXHTTETLARQVJSYRAIBNURZWCPENVCGPCPGTSRKDNMUOSTNFBGYHAZFHHFEAWLCBYGZLETGYUDAOBUSURLDZGOEADIZXJBFLZYQVMQYJBADTFJFQNU");

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
    msg.setTimeStamp(0.860880066571);
    msg.setSource(9466U);
    msg.setSourceEntity(238U);
    msg.setDestination(59718U);
    msg.setDestinationEntity(151U);
    msg.type = 208U;
    msg.op = 166U;
    msg.request_id = 57812U;
    msg.plan_id.assign("QYXJWWSPIWUZLKJEIFJRIZPPCORBONITGITMESABWEOLXPOABVLJCKBBJLNJHYMTNRSJQQCTNZMCDVSKTLVSDKHHNHUTWJHTOZNBVGHMAFXEGWFTSUGRLETNAXVKRUVQVCORYEIGQNAWSGXISFOLWFXFVZPAWCOXOYXDOTGBBYKZFPEPFEZBJEUMDAGAILUKSHBRGUCAUCKJMYHMMDPWMPQ");
    msg.flags = 60535U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.34558232381;
    tmp_msg_0.y = 0.800143878628;
    tmp_msg_0.z = 0.880427978588;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IIMTFZLFAUQRQCMMUJCLIGWWXWYDKFGJOQVOFML");

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
    msg.setTimeStamp(0.8948804962);
    msg.setSource(4708U);
    msg.setSourceEntity(73U);
    msg.setDestination(6321U);
    msg.setDestinationEntity(200U);
    msg.type = 225U;
    msg.op = 192U;
    msg.request_id = 20844U;
    msg.plan_id.assign("EQLZLVKWREHCNTGIQGCSDHMQDAZBKCQVARVOCIOPRXSRQKNTHZDNLYPSGCFJFWNDVGNOWJUMJXAKYISXBETNUAFRIRBHASUJQZQKVXXPQFLXTOOJJDJJHLZFVMETMXIKOURBMZEVEQZCPOEKKZPJFPMHXMNYYFLWEWGQW");
    msg.flags = 1446U;
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.992143079011;
    tmp_tmp_msg_0_0.lon = 0.919521122883;
    tmp_tmp_msg_0_0.height = 0.106756552734;
    tmp_tmp_msg_0_0.x = 0.291509593764;
    tmp_tmp_msg_0_0.y = 0.0187334278797;
    tmp_tmp_msg_0_0.z = 0.664073942279;
    tmp_tmp_msg_0_0.phi = 0.832214000738;
    tmp_tmp_msg_0_0.theta = 0.298067906476;
    tmp_tmp_msg_0_0.psi = 0.301169138035;
    tmp_tmp_msg_0_0.u = 0.947485917582;
    tmp_tmp_msg_0_0.v = 0.0428279921473;
    tmp_tmp_msg_0_0.w = 0.0865567463924;
    tmp_tmp_msg_0_0.vx = 0.882163052612;
    tmp_tmp_msg_0_0.vy = 0.24645730846;
    tmp_tmp_msg_0_0.vz = 0.148398372406;
    tmp_tmp_msg_0_0.p = 0.442106436842;
    tmp_tmp_msg_0_0.q = 0.060215894746;
    tmp_tmp_msg_0_0.r = 0.616886281998;
    tmp_tmp_msg_0_0.depth = 0.0329489169503;
    tmp_tmp_msg_0_0.alt = 0.372702287246;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 13U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AKSGSTVMOLQLWDQTPKANYNGFASEACRXOETROJYPNBISLGTAHHXZYLBYUKSLWNTWWXDBCCQNBZXMVQRUUGZTMBTSEHIJJUXFYW");

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
    msg.setTimeStamp(0.737036937211);
    msg.setSource(38169U);
    msg.setSourceEntity(173U);
    msg.setDestination(16700U);
    msg.setDestinationEntity(60U);
    msg.state = 39U;
    msg.plan_id.assign("OQOIOVOUAANCTCRLCIPEXMVDGGUTZZKFDSXWLUVYLKPNVKAJLLQQNUSSBJOKIBXLEQNPCHQURAJHRQEKLRPNAKRJUZXTCFEXDJEIIZBMRVLQURAMFZGZEPYYBHTKFCGOBYQFFNVMGWTAIBSWXWMPGWUZFRJNASQIASMMRCEYEDYIGHGXHBWNXOVTVUOHLHYCTDZDDXOYUJCSPJWDGCBKDRXTBHFGNEDKKSILVBHOVPAHNSFWTPZTEW");
    msg.plan_eta = 956112440;
    msg.plan_progress = 0.859873424243;
    msg.man_id.assign("MPXABURZYFHPTBIGDJAQMGBILOJBLEYYOUCXZYYWUQVEKRBTSUNAQLJAGIWBDHJOERMLSDCQNRDRMHSOWYBNEYRJTUIOASVUKGXYTQIOGJVNFPXOISWHOZHTVWXZYGPHPNZLEQVFPEBXZXICWRFT");
    msg.man_type = 11137U;
    msg.man_eta = -1947718268;
    msg.last_outcome = 84U;

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
    msg.setTimeStamp(0.999886999564);
    msg.setSource(58904U);
    msg.setSourceEntity(218U);
    msg.setDestination(39378U);
    msg.setDestinationEntity(1U);
    msg.state = 99U;
    msg.plan_id.assign("RGWNKGSYZEJRJTGBCYUZUILWPFZNEVTZXMGBXHNGFPQUYTIPPESXPHJOGFEFCDJUJDHHEPBDZOQXCKUQLWELSVGSKLATNKAYWFYCYVRVSLBLMFTOJCDAALXSOUCRIMPAZYVADIGRILKEWRDZAPARHOQQUEXEMNTBUPDZESVDWWRVQCJUCSNBJYVRMNMOYKOHHTKDHMDQJOTVNGBWMMKBIHNMWLFPCZTAUFWFXBOCYAXO");
    msg.plan_eta = 1114383279;
    msg.plan_progress = 0.637443016388;
    msg.man_id.assign("BPDIMOWMQZZJFUACINDKDGVNPKEXFXUVZTTVUVSPZLMIWPFMSEVJHMUGBCWNUNEBXMSQBYYWLAKRJFGFPIZOMCAGKRAR");
    msg.man_type = 11781U;
    msg.man_eta = 363139054;
    msg.last_outcome = 210U;

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
    msg.setTimeStamp(0.980316471706);
    msg.setSource(53271U);
    msg.setSourceEntity(220U);
    msg.setDestination(4955U);
    msg.setDestinationEntity(248U);
    msg.state = 187U;
    msg.plan_id.assign("JOAUBXFZBVCILXWUVZBXKMCVWNENDLMHSRBWJBHNOQZVPAGRSEHTREFRLMRUJKFMYLTJFTCYTRYMEZAVQKBIZDNZCBBPQPNWNFPOFEPNECLSDCTDCFXPKOCOMDAWWLMXIJYHITNFHIYTWSAQTQXXLWABEGRPOODSXPFGRGQQWGZGNGVHLQJUGSYULXFQTPXYJJZVKUCKUUKMRJAHUIDZYSZSYBOIRLHIHOTPAAUDJGKEEDANKSDV");
    msg.plan_eta = 197014505;
    msg.plan_progress = 0.400284719667;
    msg.man_id.assign("KPTIZWMIFEDGBOIRTHYDUXGZFBGNRSTRQLMQYMHEXTUHCECYOEGLVHPHXIQ");
    msg.man_type = 5890U;
    msg.man_eta = 219625717;
    msg.last_outcome = 80U;

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
    msg.setTimeStamp(0.857816588149);
    msg.setSource(36467U);
    msg.setSourceEntity(162U);
    msg.setDestination(23608U);
    msg.setDestinationEntity(87U);
    msg.name.assign("TDWHDBDFWFTRURIAKSLPCDOEWNQOPMYMSXTXQVTBHIBHMCNJIBJZSHQLOEVXHRZKIYTLTSGJAGOGTAOQDFMVPTALKUGEU");
    msg.value.assign("YZADOXFDSTGYIWBOPRWALSSANXQCJAMHQALTTOKFOLAAMWYKFIRKHURDYREDEVSBQGUEMJYCNTDTGSLOLBLUVRXFGJLAYIMIWSZBHJWHCXVHUYURIBQKMJVJZWXMIJXVCDNCQUSEQYBLFNVGWELPDKIERYWZVHUKNIHJRTZOUFSNGRJT");
    msg.type = 174U;
    msg.access = 14U;

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
    msg.setTimeStamp(0.725095703452);
    msg.setSource(13728U);
    msg.setSourceEntity(103U);
    msg.setDestination(44475U);
    msg.setDestinationEntity(243U);
    msg.name.assign("MGYEVTNSRHLVUUMPEIRRCUPQXSXJAUSMBOTHCDKLBFTOGYNFPNKCWNXEVUHRFQZUDX");
    msg.value.assign("DDGZTMXVTIHPRNUBQQSMDDAYEAHLKRFHWSKTZNOWITKJH");
    msg.type = 92U;
    msg.access = 149U;

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
    msg.setTimeStamp(0.586139912898);
    msg.setSource(59286U);
    msg.setSourceEntity(131U);
    msg.setDestination(11702U);
    msg.setDestinationEntity(169U);
    msg.name.assign("BWDXTCYNCASGEHPGQIULSHGTYIC");
    msg.value.assign("LWDXONDSJPSQOWLJQTKFFBCBGTNFQLRXKXRDPHXYVRTONUKBJNYIHQJRSKZTBOMMIEZHWBYOSOVMYOTAGXOHWHYVFHSHXKJVRUZIIA");
    msg.type = 137U;
    msg.access = 57U;

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
    msg.setTimeStamp(0.907654425605);
    msg.setSource(21417U);
    msg.setSourceEntity(4U);
    msg.setDestination(34254U);
    msg.setDestinationEntity(6U);
    msg.cmd = 173U;
    msg.op = 88U;
    msg.plan_id.assign("GOPZJGOCJOQJIDCQPZXLTMUQRYXSTJXRJX");
    msg.params.assign("MVQTNIDLFHRZTZHUIJUKGBKUERZWUQABKHDQMXECCBOOCOKPGGMGXSDRPKXHYJERAVAVHYWWHQDFDHUTLTXJYZEKZLEJVDOLQTFGFKPBMLFZQWEBYNYJIDAZCYRFLMVNWUJEMOCRATFNIYCMSHKCPGUTDFMXIGPRWBIRPGXHIEZNYENFLMVCLVPWRTDXPWBVNBAAQUUVVJXJPBLATOCQWCONWYSFHPS");

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
    msg.setTimeStamp(0.506808634408);
    msg.setSource(52631U);
    msg.setSourceEntity(69U);
    msg.setDestination(57622U);
    msg.setDestinationEntity(55U);
    msg.cmd = 184U;
    msg.op = 232U;
    msg.plan_id.assign("EWPCRBMIDCIYBJTYEDJFKSHEPMUZCCX");
    msg.params.assign("WXSGYGLUFOGFYSASERIXUDPJHKHVKIFCBMOYGHTESPQUWEBKEKJTTILECMYDTKAGEJFXPPQFWXQOJHCWNSCGWQAAITWKPAPZUHHVIXWCANYVZJHFLELRENWAD");

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
    msg.setTimeStamp(0.221863483904);
    msg.setSource(50862U);
    msg.setSourceEntity(140U);
    msg.setDestination(49971U);
    msg.setDestinationEntity(246U);
    msg.cmd = 32U;
    msg.op = 180U;
    msg.plan_id.assign("QYXDFPBTOTQUXMRPVEXFUZANTBIZHPSIIPWHZJCHMEANBEMDDPXKJLWHIBGSVMNXXNDKCLVTPFJKQMZFNYYQGCKNFDHQBEQCWFYLUYLMKMOTODQEFNSIWGVYXWCSHDUOMCADTBJPCTAFRYUAHACDSJVGARWZUGTVPZQSFUZNNYVNVPRGXKVIIFCAZYBWJIMRLBQVR");
    msg.params.assign("SRHAAIOOHWTLNAKJQAXZIIRNZDXCJSHQIZRXHBADPCNEDSIEQCZCQWWOVJHWBNRIMKYWDDUTWOTFVUOCHPUXTKADQYFSUGKMLZETILPNFGKJBSAXUMPXOWBMBVDUKCG");

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
    msg.setTimeStamp(0.000836608843773);
    msg.setSource(40362U);
    msg.setSourceEntity(189U);
    msg.setDestination(21441U);
    msg.setDestinationEntity(84U);
    msg.group_name.assign("IIIYFQBZEDKXSLQCEVTHRIIHWIWMLZBLGRNDXXQPOEIRUDHOYGWQGXSCAQJLZTHLZGYCNNJETOWPSOGPHNKMTFVDHRTDUMTEGEANSBFASQKVOZFTHTRBAMMRCMBTQCUDJPURIWYYWDPXJPKUDCJUKJVVLEVAOUHYLBWRIEQEVGCWBS");
    msg.op = 214U;
    msg.lat = 0.248505809476;
    msg.lon = 0.952939418825;
    msg.height = 0.108718830652;
    msg.x = 0.501808425495;
    msg.y = 0.384065376759;
    msg.z = 0.739016865985;
    msg.phi = 0.647461051345;
    msg.theta = 0.99459721286;
    msg.psi = 0.897145591984;
    msg.vx = 0.0496352922902;
    msg.vy = 0.631781418535;
    msg.vz = 0.124250499703;
    msg.p = 0.738042264752;
    msg.q = 0.196816007436;
    msg.r = 0.202079992527;
    msg.svx = 0.106319011799;
    msg.svy = 0.116796449409;
    msg.svz = 0.558785410408;

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
    msg.setTimeStamp(0.62644378901);
    msg.setSource(44658U);
    msg.setSourceEntity(146U);
    msg.setDestination(54132U);
    msg.setDestinationEntity(174U);
    msg.group_name.assign("AEDWCTPUXZZQCEAVWKOJVVOYEPDLUVEEXDKPAHNLXZEZRNYVZACRFBGXMFCONQFXGSZIVFYGDEKJVOEKTTGKEFIMQNLXQPUWUXRZTGNKWYCYPDHSJUOLOVQISCFHMHHUMAPXUCARPYDBMCAQBKQJHRISQYGWWINLHMHGLGRKROBZSSLUSSLOJUNENYRAWNPFUKBJHMTDWMBBXIRZTCTFMWTKDD");
    msg.op = 112U;
    msg.lat = 0.157594802385;
    msg.lon = 0.283713193996;
    msg.height = 0.642323356012;
    msg.x = 0.555993983452;
    msg.y = 0.025277219827;
    msg.z = 0.379155219363;
    msg.phi = 0.804608067124;
    msg.theta = 0.325723812085;
    msg.psi = 0.701718368667;
    msg.vx = 0.45363290181;
    msg.vy = 0.750579799882;
    msg.vz = 0.812925063665;
    msg.p = 0.615430564896;
    msg.q = 0.80007419607;
    msg.r = 0.841403463362;
    msg.svx = 0.514137943282;
    msg.svy = 0.436760193629;
    msg.svz = 0.315084959033;

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
    msg.setTimeStamp(0.792150073504);
    msg.setSource(64217U);
    msg.setSourceEntity(213U);
    msg.setDestination(19890U);
    msg.setDestinationEntity(7U);
    msg.group_name.assign("GWKIPGAJKWBTACMDZVAOSRFANEICUSUHYYAZDAZXKWPLCYUJIYLXPYXRFXGWIZSEETKUVQVCRXIVDXNWYIQBMTSGAPIMREXCLNYNGRZDOVSTPHMKPNTWNQCQMATUZHSJLRIJYWTKJHTXVRBBUXHBUBDUSZGQCVFSJRXEOCJOBDGLCEFLBUQVRHHN");
    msg.op = 5U;
    msg.lat = 0.470692376874;
    msg.lon = 0.633842848592;
    msg.height = 0.567637510548;
    msg.x = 0.835290653504;
    msg.y = 0.785831210499;
    msg.z = 0.421578008908;
    msg.phi = 0.249361733279;
    msg.theta = 0.536097336758;
    msg.psi = 0.811577833512;
    msg.vx = 0.393618325193;
    msg.vy = 0.263567984105;
    msg.vz = 0.370180520043;
    msg.p = 0.103405789789;
    msg.q = 0.637717724696;
    msg.r = 0.754473710293;
    msg.svx = 0.284959305842;
    msg.svy = 0.96757623767;
    msg.svz = 0.423398197597;

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
    msg.setTimeStamp(0.514973450291);
    msg.setSource(46616U);
    msg.setSourceEntity(116U);
    msg.setDestination(36754U);
    msg.setDestinationEntity(64U);
    msg.plan_id.assign("LCHRIHKADURXZBNAAPFLJFUCPKYODVFBRDIRVWRMQEWVNULLXKDXVGMOZXPGMRAVNCVKNHYQXMRMWAQUASMAWPIMIBLDPESYUOGTMKMKHZJXCIQFNPJTHJJQDKGWSNWQZHAYYOYSYYS");
    msg.type = 167U;
    msg.properties = 109U;
    msg.durations.assign("KQTJNLRZSUQCVVBMUUZTCETDNYPVUYOXFZGBWRQKHLDJMGGMAXMHFYBZMXAPMCRCYOGYTPQCILHFKXRLIIWVLFDPTZSTLJVWSAMNWAMDHSKPBYGBQEXOFCHZDBKQRAPCKVWRYHWCJEQBICMLQWSIDYWXEHUOXVVUXMIWPNSUWHXFARCRFDLPFNTKZEASSIREZFE");
    msg.distances.assign("UTVWYTXFJXERBDBULUAGDSRXPQPEKLKX");
    msg.actions.assign("YOSOHNDUUABIUCQBOQJYXDXGMCFJREFATMOZFNWMHPDNXZTUSHRGAMGMLIBRIJAMLFXPQZBSNKNLHGVRCSYVHZNOSLXGDVUZWEWGBGVDIZHSCALBWYHBNTKWCUVXQHIZKVETJDFELWEELNRBSOUZSCVQKCOAHKVMFTYRTTDIKSWKJADJTRGXAGJFPQQVFIWMLOQPUVYTPFTQPPIWRYUQRDLPGHCWLYXABYSFEZPEEMCK");
    msg.fuel.assign("XHAZZFISDLIVCORRUMDYNTYQXGUWUQDRAKOUSUNHZLQSAGPIMKIZVLMDOFDBCLUYTGXFDHFHOTERITQCWRWJGQWTYIIVNCBXQZGUJCVSRI");

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
    msg.setTimeStamp(0.511589294556);
    msg.setSource(39630U);
    msg.setSourceEntity(239U);
    msg.setDestination(42867U);
    msg.setDestinationEntity(50U);
    msg.plan_id.assign("MNYPXKKYYJQMSPLSWBLBHIGQUXPBQVETYEWMAFQBIMMLSLKVSALPFGGLTAVRXREOFXHPIBYVGPKHOCNPHJUDYCYZZZRXPTTIFAFMDNUAHOFQDEVXJAJKXKTHRFWKZVJZBTOCWANOFZRDWIUGWKJOSIFWIDDDJWRNSOQTJMHVODJOROLSBEBYVUVSNCUEQCMBLCHZXYKZRNIAEHPMMCEDQGGDXWCNUISLIEVCBUZQFGSGGKCPNTAWNLZEQTAR");
    msg.type = 144U;
    msg.properties = 30U;
    msg.durations.assign("PHYMPJKTTMILNWAUEFNUOAXFKFQBJTOBVJEPCABCEWCTMWPMYBNTCPBLZRVMQYZKSQJGWLUAJIBLQWZHVHVJBXMGKRONSEEDHXZZTQMTIPZCLILVAQGPRNOEDGDKJRLLESYXUORXVAOXQRFSFUVIQEDWFHHUCASSVCKGUZNJUXDMRIJAOKCPSTK");
    msg.distances.assign("UHVOINBQVCXMTYQEBFRSVQFZKPN");
    msg.actions.assign("SFJBVOXYMCPFYSCBVRQPSMEUZXKOJTIKMACTPSWHKJKMBGOAABALJCWYEHEIODIVALYKTNTUMWSNYGDRDORWFRQMPMNKA");
    msg.fuel.assign("RCMJHKJPUCDLHTWVPAKNOOTBAGKIVLHHOSXELYJLFSFBEQFUIOQVVCOYQRSOVZBLEPUSWTIMRXUILCILYIJBMBCAFEGHRXDCDQFJDGZZMMINRGZKAQQGMYTOUNKUGFKVJWJMCTWXWERVNFHYDTDJNVTNEXLWXRRJEDAQSKWSLZTSZMCXPEY");

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
    msg.setTimeStamp(0.702977109747);
    msg.setSource(28756U);
    msg.setSourceEntity(236U);
    msg.setDestination(42945U);
    msg.setDestinationEntity(214U);
    msg.plan_id.assign("HCUXZEJGRSQBRXXLPVILJNNTFQBZVOKOKJKIPOQZHKBSXEMIEORNRDZCLDYEMXIEFQIBAZNUMBZYUQQNEHOYYWQDWXEAGPJAVJZFUKVPRUWDOTPAJHCWFTAHMFQGBBMSHOAFWKUZLSUBTCPOGRUEXVYWQTPVLMYRGFDYMTIGMVHWKDQLCDK");
    msg.type = 27U;
    msg.properties = 228U;
    msg.durations.assign("RRAWCEDFCXXKIKIRZYANZXQERMWVOEWBQJSNDYESGUYWJPMP");
    msg.distances.assign("VRYASTQNCEDLSKCPGJMRHZIENHVMBJZLFKBJFMRAWKQTCUVXJOEQPZYWKYVQJODCNFFMORAS");
    msg.actions.assign("BHZGPUPNBLVDPVZXFHKWKRLPHSRHKBZOSQITMFCYCDQESOOWFMVDHJDSCFXWLPVITNEEWMJURONEURLXIVYJXOUSATVDTQGPZBZAXMQMFICJWZYMLMJGYAUFTCSNRSFVIWGCNZYFPLMEWKKNUQJYWSZGPTGKJXSAGLUHTLBBRINAAKSAYIJKEEUNYLDOZKYFCDJIRRHQXBCAGCBHOUDMAVPTQGNIVBWOCPERDZXMR");
    msg.fuel.assign("POBSDPFBZFAIVZMLNBYMJXLMXEFTJDHKEDRHYIJBKOWU");

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
    msg.setTimeStamp(0.25102414438);
    msg.setSource(55433U);
    msg.setSourceEntity(84U);
    msg.setDestination(57628U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.712394770034;
    msg.lon = 0.100653376046;
    msg.depth = 0.70743517479;
    msg.roll = 0.229978319409;
    msg.pitch = 0.143104186471;
    msg.yaw = 0.302507960492;
    msg.rcp_time = 0.490827238061;
    msg.sid.assign("GMYFWHDGKWXVOBONVKQUQUEGAMXOQRCOITJOLMZXHCIGSYLQTFHTDBFXSSQELDTXJIAPHLTKPRYYTVOVHWBPYWDUUWKEGINXNLZDXV");
    msg.s_type = 131U;

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
    msg.setTimeStamp(0.475643062376);
    msg.setSource(10335U);
    msg.setSourceEntity(177U);
    msg.setDestination(14918U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.0264718063999;
    msg.lon = 0.409813871831;
    msg.depth = 0.0317122972895;
    msg.roll = 0.124023180724;
    msg.pitch = 0.219330619262;
    msg.yaw = 0.231062230076;
    msg.rcp_time = 0.324940130539;
    msg.sid.assign("FCLNPNUVKBNLPGLMHEHYYXIAYBZBOHRETNE");
    msg.s_type = 42U;

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
    msg.setTimeStamp(0.335775861022);
    msg.setSource(16109U);
    msg.setSourceEntity(26U);
    msg.setDestination(30854U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.209702361362;
    msg.lon = 0.0345072363716;
    msg.depth = 0.897142695179;
    msg.roll = 0.957135787038;
    msg.pitch = 0.62259312508;
    msg.yaw = 0.722052353003;
    msg.rcp_time = 0.15431492025;
    msg.sid.assign("XFACDZBZDKDTRGTXULWMHITZSDVZGNVIRKVZSYXHAASPYBPIPLWLOEDZFQSEWLFXRUGIWEWPRKHGPSJJVNOGHNZSPJYXEMQPISCBKDFEYGRVFMXUCZWBSODOAORATELMMLLVAKGWNP");
    msg.s_type = 169U;

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
    msg.setTimeStamp(0.0979696608171);
    msg.setSource(61044U);
    msg.setSourceEntity(196U);
    msg.setDestination(44696U);
    msg.setDestinationEntity(96U);
    msg.id.assign("EYPVALQPQGFDJSCVTNXODCAQYATLLPMMHFXYOMRKSPWQIIJHVIHDPZNMKTUJSCXJHRANTWPBCMIWYXQOGKYKUGFSZXSKBHHATYNHMZROSNVSSRHNXLCJYIMLXBGGDFBASNPRTNMQYLQDHBODFGTTVWUMUZVKBUQFEYA");
    msg.sensor_class.assign("LVUBPXQGJELEB");
    msg.lat = 0.143580195951;
    msg.lon = 0.575114302679;
    msg.alt = 0.987748761333;
    msg.heading = 0.831557872008;
    msg.data.assign("OZXCEPLBRRLSECWEVVMIFGJMUHVZNGSOTTRYQPSMLDCINSHQQXSTFNEY");

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
    msg.setTimeStamp(0.286210627313);
    msg.setSource(24943U);
    msg.setSourceEntity(15U);
    msg.setDestination(22843U);
    msg.setDestinationEntity(112U);
    msg.id.assign("HPRBWNMJJICMVWENPMPQQTXVWCTSAXYPUIIKHNUIOBYFGOJDHVQZQZOMYZDTKKFVORDPRRDVRYVOLOMFAXZSDPENRXBQKTREFOZBNAWKBMHGZISVUHVSBPLTSHWVKAQJXEGGLXRHXNSELGSNGWVITCYFYATAEETU");
    msg.sensor_class.assign("BLMHVVIHUAJGDJGRYMJWYXFQKIVNWUOFLRSQRBAKSXVJXIZABLSEMKHWZVRBWEKBAADHAVTQXNLGLGHNCZEJTCAKNXTMOCSMTIYBNSDQOJWCGXGFEBQDBJQFPXINUFUILVVHOESTMZEAAQWCDOO");
    msg.lat = 0.964215042333;
    msg.lon = 0.987873315853;
    msg.alt = 0.653315455531;
    msg.heading = 0.104216741122;
    msg.data.assign("PGTLVCPBBGKYOXL");

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
    msg.setTimeStamp(0.0275473186928);
    msg.setSource(18964U);
    msg.setSourceEntity(110U);
    msg.setDestination(51154U);
    msg.setDestinationEntity(96U);
    msg.id.assign("JRKZKTZBRTNOOADMBOCOWBDLPHEUFELWALEZMSPMQYGSHBCJFOKIGAWWSJDNKRUMVQXGOVNZFJJUQLXRDKMTOCWJYSKRMSRIBFPHEAGXSRJZHQIGVENDVOGBCAY");
    msg.sensor_class.assign("WYZKFPJAADXNUZFYECZFNMFLMEOIDWUOSQQZLVGDLDCJDIEAUSGRPHNSPUNYSCMMZTFGUCHBOFNYCLVXRTDWWGBHBJSYBWXJKHEMTKVENQSVHXAKZDWUOBFTQ");
    msg.lat = 0.997436389052;
    msg.lon = 0.300256253708;
    msg.alt = 0.591779899802;
    msg.heading = 0.708315084631;
    msg.data.assign("MUPGPXXFECIOCBPYCHYHBGVORACJGUSDNDCBRPXWARFZBERMWSUFDOEPKVHFCDBNGBCVUULLHJQWPZIPYRZHETPHDVYJXTSLBLZINSKBQWSHVKCKKNVVZJLQIGQLBHQEJQASYMIOCOIZEPMTXOTMXGEHZJOUAIPVEDNDIRDBKSYOYZQXNHLKWCIGFWAMNRKLETKVNDRJFFAFJNYYWGQAWJUMSEXSLUDTAKNOTTGTZMGTXRRUFWZ");

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
    msg.setTimeStamp(0.319067824519);
    msg.setSource(63414U);
    msg.setSourceEntity(75U);
    msg.setDestination(22022U);
    msg.setDestinationEntity(193U);
    msg.id.assign("UEFQDXKPYHUOFJFCNGOLQRYZIDXMGHAQFIYUCFJWDBGKGOSUVBUCBFCKHVUBZLOQHTEVEMBGZTHPYJCZWXJNSJHENVEWGSSPAPLJLULQMLMTXTCLXLPAFMCZLEZSBQXWOVAAJNKFIRAIDXBXIKVVTDWNRCT");

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
    msg.setTimeStamp(0.806141757743);
    msg.setSource(11775U);
    msg.setSourceEntity(227U);
    msg.setDestination(64060U);
    msg.setDestinationEntity(176U);
    msg.id.assign("AKYYAKTONXCNUVFNQZLUXFLNPYHHEZZSYIZJCMCVEVZZWASCZUZIOIIPWFNRJEKZEBGMGPHDQLGDWQSOEYLLKSCRPYATQBWMSIGEGDIWR");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("RAZPDOHDDTWQDETXXWMNGHNFQWFDIYPNCUBVRY");
    tmp_msg_0.feature_type = 121U;
    tmp_msg_0.rgb_red = 59U;
    tmp_msg_0.rgb_green = 81U;
    tmp_msg_0.rgb_blue = 183U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0918092171614;
    tmp_tmp_msg_0_0.lon = 0.703903168929;
    tmp_tmp_msg_0_0.alt = 0.631179364256;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.859681077437);
    msg.setSource(7728U);
    msg.setSourceEntity(231U);
    msg.setDestination(26228U);
    msg.setDestinationEntity(144U);
    msg.id.assign("XWPYIOPJMSJGVUJSJPMCNHPWCYMWLUXLQWDOIJKSAYDVBUUOEEXRHTGRJACNEHUPOSMFPDTNADGLACHYXZJLNRSFBOOKCFBEAAKFTVVQONBKKDIVXWQJACLRQKIEPQTBPMRTKHRFASEZNUBZRKCVILTVCDFBFDRIKQOZX");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ERFINPADKAEHLGTSVVXBPY");
    tmp_msg_0.feature_type = 164U;
    tmp_msg_0.rgb_red = 184U;
    tmp_msg_0.rgb_green = 225U;
    tmp_msg_0.rgb_blue = 241U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.574453895495;
    tmp_tmp_msg_0_0.lon = 0.322329618739;
    tmp_tmp_msg_0_0.alt = 0.38323142377;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.558169884897);
    msg.setSource(35780U);
    msg.setSourceEntity(144U);
    msg.setDestination(58509U);
    msg.setDestinationEntity(223U);
    msg.id.assign("VOWKOKMCTTWQHOEVSYVUFEFTVCHPKLILATXZASYOACDWNREFXKPBCBRHJXIBVTNAOYBNZUHKYILBXGQMRYGYLRFMMVKGDIELRGATZDLIXQZJXFPCUXJLYCAJCZXMXUBVFZQIZUELMDKWFSNKQJPIUTNSYGVDMSLIUWXSSTSAQPZFPUCWTRZWLQMRZJKQEHSPENOAUMQCVORCIHJSGQJWGBHNBDDNNOHRJFKG");
    msg.feature_type = 207U;
    msg.rgb_red = 224U;
    msg.rgb_green = 32U;
    msg.rgb_blue = 236U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.752966708806;
    tmp_msg_0.lon = 0.379604795668;
    tmp_msg_0.alt = 0.532747586079;
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
    msg.setTimeStamp(0.419466068323);
    msg.setSource(55752U);
    msg.setSourceEntity(33U);
    msg.setDestination(17212U);
    msg.setDestinationEntity(109U);
    msg.id.assign("QUJBXXRXTAZJNNGDGRFLJOSFRKBDMWYLJZHDFYFXCWCYMLLHGTGDPNXBUAAYVDFPTQTFASHYXZOYVDZWIGTZETOKKEERQJKEOWSRCSHAFIWBCRQERTKPROAVFBVKSUXUNSVPMOUKGIRZPGRSYLQZYEWSWMWICMOVETQHNGTCVMHCWJWEKJSAHXACNLNDMQIFIICIJBOOGPNUD");
    msg.feature_type = 115U;
    msg.rgb_red = 17U;
    msg.rgb_green = 221U;
    msg.rgb_blue = 244U;

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
    msg.setTimeStamp(0.626393575753);
    msg.setSource(43590U);
    msg.setSourceEntity(133U);
    msg.setDestination(17281U);
    msg.setDestinationEntity(93U);
    msg.id.assign("UXBJKDFJXLQMYAUNIYVROIKTDXCOPWTTUSXDLZNRGVBQWKYDMAOFEZVETPJDLSSOBPOXOARPRNGVUMMTLRQLPHNEHKLLXWCSNAXQZABVIPHRYWZIXYYFVUHNIBJWQTGRZCVJWMFECVKZHHMOVJFJJDQSIYWPESTLDEYHGAEZOCGLBWDAFRFQAZUSRZBIWTMUFXGMOGIVHICKIMQKNACNSNPZGUSDFEKPXYQYSBUFJRT");
    msg.feature_type = 143U;
    msg.rgb_red = 56U;
    msg.rgb_green = 35U;
    msg.rgb_blue = 60U;

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
    msg.setTimeStamp(0.430745771356);
    msg.setSource(35407U);
    msg.setSourceEntity(167U);
    msg.setDestination(23424U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.264382314253;
    msg.lon = 0.887208569264;
    msg.alt = 0.3963929422;

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
    msg.setTimeStamp(0.476884837485);
    msg.setSource(24646U);
    msg.setSourceEntity(174U);
    msg.setDestination(40849U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.470472668404;
    msg.lon = 0.555514786787;
    msg.alt = 0.281220462505;

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
    msg.setTimeStamp(0.09209932622);
    msg.setSource(52576U);
    msg.setSourceEntity(152U);
    msg.setDestination(49490U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.495878763623;
    msg.lon = 0.651197196551;
    msg.alt = 0.707081206606;

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
    msg.setTimeStamp(0.391791414507);
    msg.setSource(30776U);
    msg.setSourceEntity(5U);
    msg.setDestination(26571U);
    msg.setDestinationEntity(252U);
    msg.type = 40U;
    msg.id.assign("GWGPRWYVSMQQNZGDNGSCFAJRIJXGFOQYUAWAWBOSMLZUOGRCXTWOJUMBCEHFZIDKWBZNCSRUYVVBVSSXJTYRSTFKNROTYKLIFDRECKQIPBFBDAIFN");
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.889923599555;
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
    msg.setTimeStamp(0.324895733483);
    msg.setSource(38547U);
    msg.setSourceEntity(143U);
    msg.setDestination(55775U);
    msg.setDestinationEntity(129U);
    msg.type = 86U;
    msg.id.assign("UVXGUDLLWADNQADIFZQGPRMMJYRDTLXYPMXNFXGKMSBXVWTDSZWRRKHKDOEHMBKEXKGHLYARAHWPKNGSJAAUKERSHVCAPFKBKSHRVZTBODNJFSFGHJDCWCQNXZEUYYILGMLJJIEPOCBYPWIJKAVXAVEQRNIEPVPCHCTLSVGTDJTJSNGZPWFZUQBOQOHCOCWIIYUXNOUCDXOQOFEVTQWZJYMIPTASEMEBLNFWHY");
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.326271770554;
    tmp_msg_0.lon = 0.355346120724;
    tmp_msg_0.eta = 1146600443U;
    tmp_msg_0.duration = 7291U;
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
    msg.setTimeStamp(0.955647137593);
    msg.setSource(61750U);
    msg.setSourceEntity(210U);
    msg.setDestination(58924U);
    msg.setDestinationEntity(205U);
    msg.type = 233U;
    msg.id.assign("ASAJZBBFKZIYYSXDOMADDVJYNCOYEOAXWHIXVJQYJLWRAJLGNRMBDQLZPGITMQIXZNSHBELSPJKTTCSHBZTGFTHCWCFMTYRRXXSRDLHUESBPYLEZSZLSWHMZOVLEWQRKRFJCGSMYOCAYHPCETWDGGVNRNWEWBIBUUQCNFOVMVDXVKOJANOPMUOWTNGIDUQRFLKKUCIIQKHZNBNTHFPPIMUQWMJKFGUIFDK");
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("PTJWLRHPTROMSZAAQGGNCSLTECSDECYNNRJLZGVSVRHMEQCEQHFBSDPTOCOVBESHYOLHUIUDRXGQFZPBXYVHMXWNMELEVZNTPUIOIOQJFNYZDZIYHNSGMEMIAGWXLPLNRIHFPWXAADIMRCCCUZXZJGDVAWGFKMVRFQNAGVQWYRFJZYDPTWKTEQBJJKSIOQYATJDLBUPUFIDBHYPBAGAXQ");
    tmp_msg_0.lat = 0.206253761515;
    tmp_msg_0.lon = 0.152205864052;
    tmp_msg_0.z = 0.357891428903;
    tmp_msg_0.z_units = 109U;
    tmp_msg_0.cog = 0.101454939119;
    tmp_msg_0.sog = 0.0744738352799;
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
    msg.setTimeStamp(0.290176749369);
    msg.setSource(49247U);
    msg.setSourceEntity(95U);
    msg.setDestination(3746U);
    msg.setDestinationEntity(190U);
    msg.localname.assign("YXZDWRHIHVITZSUHSNDCOOBNLMGIWFZCJTYFGBEXMVHASIJDCYHGSVLHHMKVVGVKKMEYLQEWFFZYDGABDFPTTOJRTPOXMTSYPFEAKGHFCMNAQRTLRWRQRQVAKCPUGGFJNRUMRBEILPXQDAVQLFEWECVAYTREEIUNXUYOULTARJKSWNMINZKQJZBCNPJQNQFPOKDDXKULGGLUOSEJ");

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
    msg.setTimeStamp(0.511642778617);
    msg.setSource(5059U);
    msg.setSourceEntity(207U);
    msg.setDestination(52590U);
    msg.setDestinationEntity(148U);
    msg.localname.assign("MUMVEFAKFAPWDPOBROFTWZQHJPHYOCOKRCJBNPSWZXFCTUTLOCQJNLEREJIUKAASEDDNHJGZWGKXZWWFKMLXNXYYFYGFXBIKCOSVCUYDNHQSMBUJRGZRSNQHMDSTIPVTWKAMJERZMGVVCKBNYBQRZIUYUVMDAZZMJIVXOOCHETETW");

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
    msg.setTimeStamp(0.902658202296);
    msg.setSource(12909U);
    msg.setSourceEntity(190U);
    msg.setDestination(37345U);
    msg.setDestinationEntity(142U);
    msg.localname.assign("GPFNVOJOWFWQJKDAUDWBWKHZCLLDPSXMXOZOQMDFZRJRNTMYCGWLUTCXIVRAQPPGQHTCXUYJNEMRQHHXNAFQCGKNSVBOAXPFUDMWYGWABKSPTBCFLHVBDKWFSKGBUUVSGAHLLYUZBXPHTTKILIZSIFPYEOGJNRCEVTMZILEDQTBIZOUGJNKYOAZQWSQRQOLXEJJYAGKAUYRMFLNRNBYREMRTMDBJECITDEIPNSMIZOHZVFWSUPIEECHXSC");

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
    msg.setTimeStamp(0.964352570194);
    msg.setSource(50902U);
    msg.setSourceEntity(254U);
    msg.setDestination(15366U);
    msg.setDestinationEntity(69U);
    msg.timeline.assign("JIIEJYMBMRVPMXAW");
    msg.predicate.assign("EDELPCWFKWRNWJBGSCSLVQOUOMAQJNFMZOHWUVAWBKUTBHRNIQPADSMYXRLTXKEKDNVHARJEANYHDNMXYWMBPWDGKPRXBBCOORUJQCMSZTRHIPYKVVKOQIQIGXSZLIVFYAOQCTBFTWRYANBYIJXAGRZFICPZFLDWNZSUTJGUWJNTTTXDLOQGFCJQPZXFICLYGMHHLRNCIVFXPLABSEKBEHVMU");
    msg.attributes.assign("NODLSPCAVXUAGHUZJYMBUDASILI");

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
    msg.setTimeStamp(0.602971054322);
    msg.setSource(51556U);
    msg.setSourceEntity(239U);
    msg.setDestination(42980U);
    msg.setDestinationEntity(242U);
    msg.timeline.assign("TNEOWBZJBEUBGOBRPDDXQCTTPDZICQPHJUKJATPWAGVMJLOFPSFZSS");
    msg.predicate.assign("FHMHAWXWOIMJNRXCDFJIFCSTBOZBI");
    msg.attributes.assign("KVBJIORPJJFSDCUJQMNWUIXSKUIYOECNBPWZZHQKIKQRYVEGQHPXW");

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
    msg.setTimeStamp(0.0821013432867);
    msg.setSource(30099U);
    msg.setSourceEntity(229U);
    msg.setDestination(17217U);
    msg.setDestinationEntity(214U);
    msg.timeline.assign("OGXCYJAIZUERQQAKJZQNICELORXBOMDSWPWYUIBAMQNKUPMATTDLLQOJJKYURIFMVCKKAGKSKMZUEVYQVASNXFLERTBINYRGIQJBJPZSDXUWQWGPLLKREGVYCCQZJJIOLRJDTDGFTYMFBAGFBHNTDYEYPVMKDVZXNNEOBLARWANTUNVXWVOZSWUBFSMEHGIKTPUAUWDHSDHFHTYCCHBFDSSHRXCSIWVPLPVCXENHLMHGOPFHZCIQPGOWFE");
    msg.predicate.assign("WIOYPYVCYMFNSNQJBHNKPQWGGFTFVFRFOIZNGUAJZPRZCXYPHSKDFDAEMZSMJXVKCGTZWYNQPXHEWGMJHEAWRUXXYBYDHWCETZFYIUILSVBOKLCJEAVPSNMRYSKLGZWUEIBICLQTRGTVLGFQYDPLPDCBJGRPDBOOBWTFHXNLUXIQANHXSGXSHAIIHRZUUQDNNREKOOAMCWKVQVEJZBBQMCS");
    msg.attributes.assign("BDFWZRXMCSYGBQQTKGFLQJLR");

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
    msg.setTimeStamp(0.515617117452);
    msg.setSource(37248U);
    msg.setSourceEntity(157U);
    msg.setDestination(61889U);
    msg.setDestinationEntity(131U);
    msg.command = 190U;
    msg.goal_id.assign("GEZDBSITMSFFXBYFPDTVISTHJPDDOKBEAPIPNUNQERGEWYUXGUFDVXRJJLESWKWQKKJTAZMPHGFYVLSXZEUDIWFBQIUYYVFOWHPFTJEBJHXOSITZIHRCGYLZOYSBTVVQBKBCRPAAXWALKWPUEURJCCSSLSRZXCDOHCPQKJMYLQONYZXZHTKFDZACNNPMWDBOHMMUNFGIWILHVRLWZMLRAKDAOEUQ");
    msg.goal_xml.assign("VVANUOIVPMZHJIEFYDDBYYSTQQWSWJHZORLEQMIMTMGUIUWNESKBKPAVQDMUMRNBBVWGSTXYUOZJLMCHVFBNXJGAXKEKBZDSTZZYLMN");

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
    msg.setTimeStamp(0.43732233478);
    msg.setSource(49642U);
    msg.setSourceEntity(242U);
    msg.setDestination(36950U);
    msg.setDestinationEntity(177U);
    msg.command = 47U;
    msg.goal_id.assign("QQWLKAQVTSKEMCZNUWHJBKAJQXUAZUIFWLBALRYISOZBRBBQEMHXPPTVNTZBWJGSHQKZWFMFLRUECSMZYUPSEVPICHCVYY");
    msg.goal_xml.assign("VHNKRNQFGTIBHNYYSKCRPRMKGTUJNDACPDNVPNIECKAAWXQRIPFFSEAKLRNGDZVBLETBNXIJHLIWFUHHDSRCRYOHKVUMCLIUZFOSAOCRZOSGGWUXQWWVBASVYJQKYDCWGDGKDQZMDRZCXTBMMEMPCOEFZYZWJMEPZYRIGQQXSYXALBJLTFCEWOQUPWJEZ");

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
    msg.setTimeStamp(0.562734054561);
    msg.setSource(55794U);
    msg.setSourceEntity(13U);
    msg.setDestination(4574U);
    msg.setDestinationEntity(81U);
    msg.command = 148U;
    msg.goal_id.assign("XIBNAIWDTZEKMIWDSEHASWUXWJKUEKHOYNCCDOWPUMYJLPWVMPFQYXBNRCPBSFFLJTVZDUOLWIIQUHRRDKJRSMTSXTSXZKEQZAXQBVAGTFCLZYMMAQUMETFDNIHVQEOKZGBUPHMPVJ");
    msg.goal_xml.assign("LKZYOEJARRZBPHEJTFUQKS");

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
    msg.setTimeStamp(0.999084600116);
    msg.setSource(40774U);
    msg.setSourceEntity(107U);
    msg.setDestination(33694U);
    msg.setDestinationEntity(47U);
    msg.op = 183U;
    msg.goal_id.assign("QYGRBFZCNWRDIQWGMOMATGNKVCHITILARBEBFFOZEVJITPUKYTMNVIFXPGWNUSUAMAFUTIMDOBQVUFZSOXHVUHRRJKQAFLJSEJLFDILHDTTWPNSLORYVXUWZRDMGBCDIVBYPNTWIJHXHWASEZCDCGTMDJZSEAGPJEPCLHIUJYXCJYOYVKDELSPQBHZQWMAKPJRHXNRGZKMCXXDEWAEAK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MLIVEPHSYELHQFHSBJFRDDCNUWVMIAOYDXBQYZKVQVQSNSCSCJEFOLBTWLUIXBGXQAPBFPEYKDCNIUHCOVWMZTUSOTQJQAOKTZHIDZYINGGUTOKDKAVUBWDXJAAPLGNWZCKPNRLVJGDIWRJGESDMHXZUKOGFMTSOFCGLJNJVYRALHKYBMCZPSNXPZVMWWOBGEQIMEXRTAHRLYREPBPQYXTNMKUIZ");
    tmp_msg_0.predicate.assign("LKXTIRQCUCUFSTWNSRZIEXQVNBALECBWDGIBXJEMSXOSFPQVUCFTZTBPQVCRCJUMQGZFQMKKXIAJKVYZJDNDYKAHUHWOYUIGFTHUYR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SEBZGUDLNATVXLASQALMWGVYTFHQROFNOBGHEFSHGMBXVFHSPFDYVYKXBRBMCUEMRTQCZGPERYMDDRWCIXQBSORAKUQQOEKDPWXRJWCRIYYSCOIWGZQULNYIFJWGPBECFIODKKSILFDNTHPCMKERSLKWQDQCYMXOMYZBUSJDZUQUXGTHWAAFDVNMJPTPJGCNJLINGPYVRXEJVHNVNAKKZVXEBALCPTUUJZJWAKZNVABLFPMSI");
    tmp_tmp_msg_0_0.attr_type = 244U;
    tmp_tmp_msg_0_0.min.assign("ZSPGHCHAVGOQJMDEZAEOYBXHOXUSXLGLBQDAILXKBRNFAVPTDQTFIVOXCWTSJSOALTVPGTDFHNFLHYJKWYEFUYREUASRBCZVEJRRPZCNMBMZQPYZBKPBZICETSYRXMKYRTQKNNEUOEUFVXEOZFPSJSOCQCZLH");
    tmp_tmp_msg_0_0.max.assign("NENGQPAODYEIEHCPVQAGHVZXGNMNZKHCUKIWVOIDUSASLABMFGYWUBEROCGYMMYNZWUCKRTRDVQASHQOWBSZHVOMTNFXMWLSLVFKMYCYSPJQAHIBWKFRJBGHZPTORIQACEIXAFLTXAKAIXQYZQBSDXGKKMTLEQKRE");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.799515413437);
    msg.setSource(34407U);
    msg.setSourceEntity(100U);
    msg.setDestination(23462U);
    msg.setDestinationEntity(122U);
    msg.op = 164U;
    msg.goal_id.assign("RLWKGIGFTAVRALBTHSLCRLZMPHOSXWNOLBCIYPKJQGEQCKSAUHQBGOEPMAYZFTDVHEEVIQZVDGENVGAKPTXFDTNUUUIMYRKLYWFZOTTWXZKNNTHFOMXJNIRIWYJEBGEHCDSXOVWHZDABYFVRBDUCTQJIBODHJMGKNPHUVDVAFYSQOPIDFVSWJWTKZJCRXNICYFNZXMUUJCIMPAFCLABZPRNQLBWEQOMMLYDSAGPMWJBELHSXOCGQKK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SOGQCZXJXHHDQUMNGXPWCSPLDVFYXWUIRLWBFTRBIPTODPMYLOIEIXBYTQQHBSUIPNALUCU");
    tmp_msg_0.predicate.assign("TBAULJGAUUPVXBNMJQAGNHVKKKYLXLHZDFOMTHVWJDOABSALKJAUWUCZFEBIOPKFRHJONSTOYXRCVWHZQMEDPUPDBMAVXEICX");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BAKZJYKQRWWKJWEHDQCZCUHZDXMPWTQMQQZAYLNKJYSXISSCKGLJHXOTFWMQIHTNUKSTEPDMGHDATLKNSAOOEVAPFOBOMRDZKFXNBIQETNZAYJGAXBSZCCFLFPZPTICZAHLPEHEUOJGWKFTWHVMVUPMDAGJWJPGELNNDGDNFSXWXLRUUAOYVMHEDWLETQMYRIOCRMIOIFYCYSHCRCK");
    tmp_tmp_msg_0_0.attr_type = 134U;
    tmp_tmp_msg_0_0.min.assign("VFNFGOLGGODDAIALYXZRALABSEQQZAPICGHKDVTOFOHRZWCTYKFOXYSJPULZBTMBLPL");
    tmp_tmp_msg_0_0.max.assign("MDTYYGRCUILSYGQXFFEKWBRNEIIZPGUINOTRPGMYTOTETDJVMKPWBIEQQCUPIMIJCHHKNVVALLFSVZYTZHRIPXLNADANFRIHVLOODMFKNNJWWOSWGBCZDTDSVQZSQKBRXYCLYWWJNXYOOEUJGGKSTKSUZFNPSHMXOEZEUFARCJOBNCMBEAGQBAKRJJEHD");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0479692526378);
    msg.setSource(10352U);
    msg.setSourceEntity(193U);
    msg.setDestination(4422U);
    msg.setDestinationEntity(199U);
    msg.op = 154U;
    msg.goal_id.assign("IBKBPLXSMCDXWTCXKJPSKAEUTDNSZDAWSRBGRVCAWHTYQLXNBOPPLQFEBQTYMBWWQARXTOMILQEGSJDJIBRGQQHXGTNGYMUPRGDNVFJXYUTEUHWZISQMKFUNEBHOAFBDYU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YDIQKIBIXLDCFTUHGMIDLUSUUGRDGQBYCOEAJBOQESQNJPRMROESAEENYJFPCODTRHJLYJYSEQCWBMKMWYTNTWGUYTHEZJVVSTZQSZGO");
    tmp_msg_0.predicate.assign("ISZMWWLZYUFYULNTDCNFPMHVVFMVPORGEIOPVQVVWJKUPPZGSKAXALGNULF");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UECZTFXIZJHKZGRWZDDBXFLTFTELFAABJXIQVWACCVJPEOWCKJCQQTMSEXJPNS");
    tmp_tmp_msg_0_0.attr_type = 250U;
    tmp_tmp_msg_0_0.min.assign("VPMQPDHQRWGSVFCLAFANTJCKMJCPAMXXKHSRCAHFKTMUZRSYFQXJWYYCEEYBZBIROTMMYGPKOZLDPEOAEVRAWRDISZASCYDAQXFZDGOYYSFUZVCHCOVKWNMKNXBQQSKRLLXNBQUTYFOVKEJAGGTOPSJUBNEVUOIHNPJHOTVJXRNGXDVOGZJUIIZHHWUWTHBUWWPAILNVHDC");
    tmp_tmp_msg_0_0.max.assign("XEWIQGDEFYXFAIAHXVZHNKMGVSZYSUZJMIDBPNGBOPLRSIKKBVCPSYLYFXHNQTJVZXDSPSYWOAPGELTYWDHKUQUCLUBKAXXFCTTTQRQF");
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
    msg.setTimeStamp(0.399477223286);
    msg.setSource(26281U);
    msg.setSourceEntity(29U);
    msg.setDestination(24438U);
    msg.setDestinationEntity(107U);
    msg.name.assign("NMGZQNVOCVCDTAZ");
    msg.attr_type = 254U;
    msg.min.assign("IGIBXHVOESZBWOWETWEDQGFTQJQPEPVPDYLITALBRXTHWPIQFSXIJPKTFALMZCWDNHVYFLCNRBJEJKELRXJYSEGMSJSNKPJOAZUVVOTDRXNINHGACCPCYHXZMGDFFRKXELLYUWNHTEBGSNFRSCZOGSYWXYZJDZOZIOMRFSUHPPUHIMQCWGLOAIXQLJUIVQWMMKPTRDSFQBDJUUBAFNVUUBCLHUVQKAOKAOBAR");
    msg.max.assign("OEFGMJXMYRGNENQOKLZCYFRANMIJZFEGFPOODVCZCJXQSBRLAQTQLZKVLPIZZXTSYICHXRWMALPJEOWYBOJDUUSMULIJYMSQBIRTGXAODGSQUKYKCDXBNFDHGWMMRCEG");

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
    msg.setTimeStamp(0.263639928608);
    msg.setSource(27296U);
    msg.setSourceEntity(81U);
    msg.setDestination(57121U);
    msg.setDestinationEntity(162U);
    msg.name.assign("XQEZZWNWCAKYCGPCCYMFXJXKVGIIAWJSBNBEKEVXR");
    msg.attr_type = 121U;
    msg.min.assign("YLKFWGYYFSCDAETKZHQGITOXVMPQRKCODKAAQFCGJLIOHJDPAEFNDZDJYYRRBTTBLFQJABMMBVBAHKMGRQNUSSLZGDQETWSSFCVJPOLKZXZKJYVCQDJMUNXHCUPYBRXCMNRENMACWUASFBXGTZKIHEEVMUTIWSZTZVLARXHRLNCHGHVZJUYWDGODUIHTPOEFAXCFIXGLRNWDVGP");
    msg.max.assign("PEDQMWQGZHCVSTRYTWISAGUHQHGBDGNMGJXWULPMCOXDQMSUHAGRFPZFFNKKBEGORMSXYEQBQYUKFTGWYWWPXONDLQSKORHQYWCFEYQLUDENXBPOSVNEJUDMHMVDSDZIVFJJRYRVVCAZNPXNZJMXCTLSSOSKELOGKTCKTWBNAFCLRDPZXETVIIVFHIKQLARPZZZBNFTEVRJDFNKYOUPCXWBWGVXCPAJAJBKULIZYHLIITAUBORH");

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
    msg.setTimeStamp(0.180232773708);
    msg.setSource(44437U);
    msg.setSourceEntity(10U);
    msg.setDestination(36167U);
    msg.setDestinationEntity(229U);
    msg.name.assign("FRUQDLUDTNKOHQJFB");
    msg.attr_type = 129U;
    msg.min.assign("UBJMWWZKCNSQJPYJNYSJFPVBRVRFXLBVSGMUOTHSGMTVMFFDCEVUNQLWKWDRRBJYULGVXFMO");
    msg.max.assign("DVGEURWYQYTPURTOSTMXQVKSMRPXOWDLRWEXVNCZQQYDOBXKJRNACLKTVWPWUWAKULFBVGXFQVAFEYBFYTANMVCPOCIPGLZGUKCKDGJGLHTSUIMZYBHYLYOHAEWRVYKRKEXCUDHCBEQAQJQRPGOBDZZNKHFHDPNFSFDMXFUXZBQOJGPNXAQOMLASHONFJTDJCBSSLFTPIJPJHIASMWYW");

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
    msg.setTimeStamp(0.680193463499);
    msg.setSource(9543U);
    msg.setSourceEntity(112U);
    msg.setDestination(39224U);
    msg.setDestinationEntity(90U);
    msg.timeline.assign("ZJGDFMELSARPMJLGCCBPZOYWSEQFMUSZUPGBYCFINKQUJLPEALOHXTXNCNJDNWXSSNAEQORDENFPHTCQKMXTHGOZOSOQIXFYJDIEKLUWOZWKGBVYYPHLOFDPWNZHXYCSDJMERTRIGBJLLARRGDVJMGUTTEMILUSWFCXTFTX");
    msg.predicate.assign("LCRQFGSZBTSQLJAAWNKWCRCJOZASAKIGEKBRXCUXMZMJRMZPPTMURTXRNCSBTGUTDDWUIXNOTBRFTGNKQKYCMRWLVBCADWULPJOLXQYQJZLMBCKEDLUYZOOYZSHAIDGESJECEKYPOFBKBCJVPRVUXWQHZDWTFFPHSVNGUJDSMINS");

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
    msg.setTimeStamp(0.642245875133);
    msg.setSource(29522U);
    msg.setSourceEntity(149U);
    msg.setDestination(45460U);
    msg.setDestinationEntity(171U);
    msg.timeline.assign("OUIMLANTOMAKHMWNSSYIQMNELDLUSDOXSUYBCIAEIVPQINZEQLKHEBVSXJYQBSGURWZWABVQRFEKEDPJDRCDQFTVOLSYLYQOSITYJBNUMZTOZXXCEJXLUJZTHRCAOPVCKKRFUXNRVXFAQBVAGXFAHWFCRLZMTZWFGKDWBGUGEHBWDFMTNJPCGJXMGHJYMPBOVGRZRBRHDITKVMLIYPKQFNCUSWZPFHXUAHWCTJECWOKAYVTHPPJGZDIGLYEPK");
    msg.predicate.assign("NGNOFFHVRKRRQTXEKOKOZOPBKQOSXOYLGRRRMANTPXMPUINMMUXHIJCKXUQBLBYPSBUHHUXAIKTVQWSCSWNLLSVDXBJDYHTGVCZTWAXSTYJKQ");

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
    msg.setTimeStamp(0.694958275234);
    msg.setSource(12760U);
    msg.setSourceEntity(24U);
    msg.setDestination(25892U);
    msg.setDestinationEntity(165U);
    msg.timeline.assign("EIIFNJMWFZZNYPTKCSROPPVQEFTNBQJABFTAKOIYYAYUHRHHXRNTRIGIXIKUCRUGSX");
    msg.predicate.assign("QNDEUWTGBYFZMQMDOKXLKSNBNVFKSYTMGFLFTIBJUOKJBFOCGFWWJTCOVHJGEMPSURENDTDKCHBGXWDOISHQYOIDKZUUY");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ICRFYTXPRJFPOMXBEFFPZQVNFGMGGATDLQIJTWOHETCVAXPHEYUBMKHQVFBJXPRJGLHWDITURUSCDHWIZVACEDKKIXJUBGOVGAQDKJCJNSPQLPXXMEKRNCDDWZTKHANUIFEHWWADHZZZMKSTWEUBZOXVOJPRQCRHKURYCFUYIOSMTQTQASWLX");
    tmp_msg_0.attr_type = 193U;
    tmp_msg_0.min.assign("WBBLFPFZBYJANXVBQSTNGDXVFTVEPRSWRFNRKWGLJCTQQFFYJGIMAVQWZJDMIUBXQKPHHJKAMKACKFHXEJQOXXWDRSJPPOBPFFLEDFWMKRNGHGOOZXZVPDHVUIYLRSIKBIHCBTDWOCXZWNGOTPBALCSXVAOOTLSCEUQLWNGTCZMKQWGEYQOZRORUENCEUMJERNGMYSUTPVTVLZGYTBSJIDH");
    tmp_msg_0.max.assign("UNVDSVQZIWGITRIYRBDRLPVERKSGFMSLAHRGYJZYXOTAJLTUSPRCJTFUXFFHJNTHCIPTUWLAHJBFVLHONWBLJZPZUZEP");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.149923389878);
    msg.setSource(43741U);
    msg.setSourceEntity(194U);
    msg.setDestination(35950U);
    msg.setDestinationEntity(147U);
    msg.reactor.assign("PZHTQRWNKRULTXUYOIRJMFDEGBLE");

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
    msg.setTimeStamp(0.555523692274);
    msg.setSource(14198U);
    msg.setSourceEntity(37U);
    msg.setDestination(63889U);
    msg.setDestinationEntity(249U);
    msg.reactor.assign("KIWMNRUFWIKUNITXPQHOEMUXCFLTUZJSKZQBPNMTAIVKVXDPUHYJCBBRVEMFSUONXWGVFZRBZSAJOFAFEORCWQTMGURLMTCESEQLNPLGKTJMHX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GMFKMJZZBYKGHBALGWHQTZHETWUBINQIAGMWRRFACRRFHKAOBSZDYUBKIPTYZWQXPGMXIQRTALOBOKPEFFLNLIXAVMMSPZDUTSUCMZUNRVOWVXTYJDAGFVTCZJVXBKYLYXVQYSJYLIVJOPULPYCEXDDOICMUVWSXVIQOIARDYZJJSPQWEOUAEHONRIKJASPNSLDCQUTECFBK");
    tmp_msg_0.predicate.assign("JKOLAMNBMWSMAFNDHOBYCTRGUPQAGLUEIKNSXAACDJPROBTHEGKCZDSMJEGLCFBIVHDUQCWZZMTGSPKFXEFRCGWZZNTJBDBTSIOTPURMCRRKBYWQBXPWAPCEQNXYXWXHXNGMOQVHCWDGVPSPXQZHRWJIUAUYYSSTRFPYEEEKAVIVDZULPQNIKQLEWQLKMVFYVHNDVHYSLUOOHAEQFILLBDRAOVOBHYUXNMGTFZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WTSCWUPQTHIZLHVLLQJVEGEZGHAKXAUGOGFFHXQRKJCZXFALUEBVRLZGGYVNHAYMUZPFZIDSWOPICDIJMSMIEHZYGWTDDWEBSTQWQDJOMOLUQKLTMBYCMVISKTTSBPHYTWZHXHYNBOPCOPRLUOBPYGPGYBIVKJADHAQJQIYFVDJNSBRDQNLQKSERXXOCNPYFMWFBRCJOANMRCUOFZRZCFFRJIEWJMKE");
    tmp_tmp_msg_0_0.attr_type = 109U;
    tmp_tmp_msg_0_0.min.assign("JDNIEKYPJBMMJAVKWOPPIXWLCKWRUJDJKXHOXWFAUCPCZTGBEMESDFZZEVZHBEZLVRGNKAJTHOBAULTTNSFSGVSCSZRIPFNRRQDMSZHAJIATVFD");
    tmp_tmp_msg_0_0.max.assign("BSCWRTTJRDHLLGEWIQNLTNPTDFPMAPUVWDIQPISKEWNGSOIFHPEGBPFUJIGRZAQKMFNRQETHUTZMVLJYVFQMJECYSCLHJAWMKMYALTEJYCAGCDQXUSUZWKJXVSVKGOYWFLAZNCKGHZO");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.900847982888);
    msg.setSource(49069U);
    msg.setSourceEntity(226U);
    msg.setDestination(39860U);
    msg.setDestinationEntity(63U);
    msg.reactor.assign("PMTRDRQAUPRXANECCJVTIZLZQGBTYEZNSKHOYIQMKMZYSGEK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MQCVJWLREGAXEPRXFMLUGXCLOGABSNYMPSXICBDDBLGLJCGGTNJUILEHEJWYLXVKGJYBKUOVFBINCJRVADKTJVFDYCBOZTVHJCPRDSXFWR");
    tmp_msg_0.predicate.assign("UYNCDURMXWZKSAHKPLXYNACBVBWZSGWMDTVNXNENDJCBYOHZSFEXNWJTTOWIYTRWLGYMGIRSFUFCKVOPKUBLNX");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MRGEHQXXHGFPUESODIQWBHVMVASBXRJVEIDNXFEGSEPZUPRITYOZLMVAVJMVVUGQTDWAKABPLTFJXZWIKRXJBDZNHGRMZMDCDPJNVQEPKUWRVABTNGWTWLFRKLSCWEBBVXCWACULNCFULZPFEFHPQZTNGKMSQDRDLQCIOJAZPKIUDLCZYSMJKKFXSOXAHNYYGSDTAUOCLRSJWOWNMH");
    tmp_tmp_msg_0_0.attr_type = 123U;
    tmp_tmp_msg_0_0.min.assign("BTZKSJOFTYAWMESPDCZFMAWNJCNSIZRFKVKIJIMUMJPBJTAXWOBBGUXYLNXKSEPMIASOLVJSRVNQVKLPZNHAUECGPXGEEBOWHFCRNQMGFXFEZRHJYLRHLOGCIUXBTWWYKTTCOFQXPIUSDOQAUMIDPBHKGGXWADNNSCWLLXJLQQFKJQPZYNSVBFHDR");
    tmp_tmp_msg_0_0.max.assign("AJGUHNWJQRVKQXRSZNRFZGOHELCKOR");
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
    msg.setTimeStamp(0.767232545077);
    msg.setSource(62327U);
    msg.setSourceEntity(14U);
    msg.setDestination(27469U);
    msg.setDestinationEntity(208U);
    msg.topic.assign("ZKWKSSFMXJPSVBLFHFJEJFMYNDRQGTOEODJWDYKYHYUAZLVPBZJYWGSLMLUCZXAJDBZFVXLNFAJKNVOLXOUKBHHIKBDUIDDSBENSEANTAFMVIQRNPBTTEDBGYTORWHRNYRTXGJPXYQWMIRDMPYTZVAQRKFISFBZOAUITPEQCCUZAUKQWAPUIXVVCSXCMERCYCHPULABENTXQGRLFCGWCWPZSJUKMOTQGVQLKZHHCLVRGXGWHOGMPIOEOM");
    msg.data.assign("KWIJKMCXNVQNRSJKYQNJDJMVGTBTPDLALMYFAEFBPGQUCTIHDKSZJFRERRTVEZYUNFMVSFWIJSVQSOEATCUNUWEWAAKFUXMGGJLREVYPXYMWFIEQRPBSPYQZYHGDGTROCGDQMSLAZZYHJGDKIBKTZBHXLHCHNURNCMSEVYMXXNXLUWMREZROPHCUOCCWTLVOOFPIDDPTBBXLAGFLHHWCDKKSNBPZUIEDLIQAPGOZQF");

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
    msg.setTimeStamp(0.614816090338);
    msg.setSource(61577U);
    msg.setSourceEntity(29U);
    msg.setDestination(30098U);
    msg.setDestinationEntity(190U);
    msg.topic.assign("WSAFJBHBYBNWWEPWLZQDLNPKIILCLMTXSWFHPZNTJGNCSCWUSOFMDGIYRUOEFNQXTEGTMOBJCXYKEKKOQAMMLDTSQBMUVGHJXWYKPBYYVCZUOVTYPN");
    msg.data.assign("GSEIPXSLKMGMHQPQWRZATLJCTFHHDDQEAWMHYQBIRRWLIEPWWWBBPAEWDGVRAFVZBFRZXWPILQXBCLOONFSLOCGQYYKUDKIPVLTURNHOELDTNKHEUUAMPNFMHNJUXYMXBPVJSZNDKCTYUWAIMBGCVKYEFBZMZFKIJEDPJGJXEQKRVZUCECNYRXNI");

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
    msg.setTimeStamp(0.783785150552);
    msg.setSource(48966U);
    msg.setSourceEntity(49U);
    msg.setDestination(57538U);
    msg.setDestinationEntity(147U);
    msg.topic.assign("DCSFBTXATMNPQJJYCRRXRSTJLATTMJOSNZBORCFAZVDJHYYZVXXQPNZNLXWKLHLUVHQQULLHKTGUYCYPIOJQTYHCGUWCXPWKWZMTUIEDGLZMZXBAJKNUQFAAWOEEULTMHKSBLGVMYFIVJGRUP");
    msg.data.assign("ESMQKWYFTIBTBQHGERUUASQRPHYLXQANACLZVCRHQSPBIKTQYIZJWEVDWJADJPMXUOBMCLOHUTVZFJFLPYGNKAMIXQBFSJWHMNOISWWQS");

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
    msg.setTimeStamp(0.559925384997);
    msg.setSource(12246U);
    msg.setSourceEntity(65U);
    msg.setDestination(48570U);
    msg.setDestinationEntity(108U);
    msg.frameid = 121U;
    const char tmp_msg_0[] = {-60, -22, 38, -17, -59, -102, 4, 7, 36, 23, -72, 109, 21, 11, -76, -69, -40, 44, -51, -7, -76, -110, 30, 98, 105, -56, -29, -100, 68, 9, 65, -74, -40, 64, -108, 22, 93, 104, -29, 120, 21, -7, 119, -109, -116, 71, 71, 120, -84, 60, -63, -22, 88, -52, 118, -83, -117, 31, 4, 58, -34, 31, -92, 53, -111, 0, 100, -85, -45, -50, 40, 76, -38, -104, 23, -36, -77, 126, -124, 54, 91, 18, 89, -112, 23, -11, 1, 113, 4, 13, 3, 103, -104, -90, 35, -20, 54, 116, -38, -57, 65, 79, -37, -78, 5, -87, 98, -70, -15, -17, -115, -20, 113, -117, -120, -77, -124, 126, -99, 74, -84, 55, 114, -25, 94, -13, -43, -59, 111, 20, -26, -107, -104, -29, 9, -28, -61, 76, -128, 55, 102, -43, -103, -91, -36, 110, 107, 123};
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
    msg.setTimeStamp(0.142973127845);
    msg.setSource(52286U);
    msg.setSourceEntity(199U);
    msg.setDestination(31504U);
    msg.setDestinationEntity(86U);
    msg.frameid = 224U;
    const char tmp_msg_0[] = {37, 108, 11, -16, -31, 73, 44, 89, 56, -56, -14, -51, -124, -98, 50, 15, 4, 97, -128, -46, 122, 82, -58, 4, 115, 26, 41, -19, -17, -44, -36, 41, -56, 52, -37, 10, 1, -63, -74, 126, 100, 40, -13, -30, -79, 29, -99, -68, 123, 68, -107, 117, -103, 11, -65, -83, -127, -114, -30, -83, 4, 5, -32, -27, 38, -36, -125, 108, 42, 47, -57, 13, 57, 108, -98, -43, -60, 55, 109, -81, 99, 4, -16, 84, -6, -80, 118, -46, -103, -101, -13, 72, -10, 42, 103, -59, -56, 16, -17, -67, -54, 84, -2, -19, -87, -3, -43, 124, 61, 57, 93, 93, 62, 72, 122, -27, 40, 17, 5, -88, 47, 12, 111, 75, 113, 70, 71, -86, 36, 90, -108, 17, 29, -22, -75, 116, -55, 57, -119, 19, -91, 91, -8, -22, 109, 113, -75, 113, -50, -25, 97, 27, -19, -107, 43, 29, -14, -111, 116, -27, 65, 14, -66, -63, -109, 66, 9, -89, -111, 99, -96, 94, -87, -112, -19, 14, -24, 85, -9, 121, 121, 76, -45, 13, -84, -62, 65, -20, 87, -41, 33, -36, -6, -59, -43, -109, 68, 64, -64, 122, -74, -64, -88, 17, 43, -42, 64, 30, 114, 8, -3, 43, 75, -62, -8, -6, -120, -45, 71, 116, 73};
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
    msg.setTimeStamp(0.803834584406);
    msg.setSource(80U);
    msg.setSourceEntity(198U);
    msg.setDestination(63727U);
    msg.setDestinationEntity(40U);
    msg.frameid = 181U;
    const char tmp_msg_0[] = {-54, 103, 50, 67, -97, -17, -72, -71, -64, -24, 81, 79, -18, 59, -33, 83, -79, 105, 87, -81, 13, -23, 80, 57, 117, -78, 126, 69, -90, 49, -89, -69, -100, 124, 10, -59, -24, 123, 87, -93, 68, 113, -2, -95, 83, 31, -113, -19, -112, -109, -50, 59, -69, 104, -64, -83, 84, 124, -67, -52, 114, -100, 112, 60, 123, -120, -83, 120, 61, -58, -53, -47, 28, -111, 77, -58, 77, -95, -90, -13, -84, -64, -3, -91, 95, -93, 66, 49, 56, 30, -39, -87, 99, 94, -61, -9, -21, -32, -5, -104, 117, 20, 27, 8, -83, 108, -118, 38, 30, -93, -74, -31, 108, 86, 9, -46, -108, -76, -44, 102, 46, -67, 44, 122, 24, -96, 107, -17, 116, -104, -30, 11, 48, -58, -1, 95, -101, 59, 32, 67, 124, 79, 2, 6, -39, 40, -104, 39, -97, 50, 107, -66, -62, -13, 6, -94, 109, -126, 43, -92, 37, 112, -75, 55, 117, -125, 117, 55, -59, -121, -64, 107, -83, 55, -97, -2, 20, -115, 31, 125, -4, -73, 34, 73, -58, -22, -9, -87, 10, -16, -50, 19, 77, 57, -36};
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
    msg.setTimeStamp(0.677695842266);
    msg.setSource(34308U);
    msg.setSourceEntity(34U);
    msg.setDestination(27439U);
    msg.setDestinationEntity(35U);
    msg.fps = 239U;
    msg.quality = 181U;
    msg.reps = 220U;
    msg.tsize = 231U;

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
    msg.setTimeStamp(0.16130334117);
    msg.setSource(42176U);
    msg.setSourceEntity(63U);
    msg.setDestination(45296U);
    msg.setDestinationEntity(252U);
    msg.fps = 154U;
    msg.quality = 44U;
    msg.reps = 160U;
    msg.tsize = 10U;

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
    msg.setTimeStamp(0.730606071208);
    msg.setSource(21567U);
    msg.setSourceEntity(173U);
    msg.setDestination(52317U);
    msg.setDestinationEntity(197U);
    msg.fps = 23U;
    msg.quality = 86U;
    msg.reps = 123U;
    msg.tsize = 61U;

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
    msg.setTimeStamp(0.603223232544);
    msg.setSource(57332U);
    msg.setSourceEntity(32U);
    msg.setDestination(49980U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.241953098231;
    msg.lon = 0.0251030997137;
    msg.depth = 7U;
    msg.speed = 0.604884229268;
    msg.psi = 0.0974914572959;

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
    msg.setTimeStamp(0.243972744784);
    msg.setSource(708U);
    msg.setSourceEntity(211U);
    msg.setDestination(54430U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.565477190382;
    msg.lon = 0.150617054724;
    msg.depth = 167U;
    msg.speed = 0.962888756017;
    msg.psi = 0.0884228801508;

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
    msg.setTimeStamp(0.339175390781);
    msg.setSource(18521U);
    msg.setSourceEntity(207U);
    msg.setDestination(16358U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.168966338224;
    msg.lon = 0.326865998274;
    msg.depth = 57U;
    msg.speed = 0.25832736172;
    msg.psi = 0.274185178195;

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
    msg.setTimeStamp(0.211947602963);
    msg.setSource(60457U);
    msg.setSourceEntity(117U);
    msg.setDestination(5688U);
    msg.setDestinationEntity(189U);
    msg.label.assign("YZXXKQKGGEOUMUCUTMXYQSWRPKELIPBHFJUOWETHNPAGNGFABVCHACORRMFDATZKICJZURTZMANRQSCMDPPBRNTIQOXKYDTIGIAQTQKZWWWVSUESGHILRXHEOCCADIXLVSWDKYEFSWLNCIGKUHPBTVNMOJQECUDRWOAMJYEBUQDSDJUZPIDTKVPFXJBRYYLZJHTDZSZVHFQBQFVFJ");
    msg.lat = 0.0422603988565;
    msg.lon = 0.988496911637;
    msg.z = 0.712252903417;
    msg.z_units = 144U;
    msg.cog = 0.785609785062;
    msg.sog = 0.371979883623;

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
    msg.setTimeStamp(0.546668682411);
    msg.setSource(23698U);
    msg.setSourceEntity(38U);
    msg.setDestination(45831U);
    msg.setDestinationEntity(42U);
    msg.label.assign("TGTGHZOXNHHJOXRWWLBGVVESUDTIOLPEYCJWGPQUQYRUZEMLIJRFPGRSEANPZLVSAKRFMDKBVCXKIYUXDUMZSPXKYTLUYFBRHIJXANKVNVPWHPNFGIKGVAIFKEDWQNUHOEXVAIIZTMNVJQOTECODSBWUHBBXMUGHJFNQCMLKKWNZHAFBBZLQLQSOCCZAORJEPAYDYUQYWGRTOTRBIZLRLFWEIHXWJMM");
    msg.lat = 0.455306981827;
    msg.lon = 0.833913527591;
    msg.z = 0.862831375119;
    msg.z_units = 102U;
    msg.cog = 0.588007221247;
    msg.sog = 0.674196159981;

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
    msg.setTimeStamp(0.178360628145);
    msg.setSource(3589U);
    msg.setSourceEntity(230U);
    msg.setDestination(7885U);
    msg.setDestinationEntity(142U);
    msg.label.assign("PIJWFHAXCIKQDNULRLATWMQOGFHMERXVOZEBLPUQUSPTLRPVERZSXNNLCYRGMUMCDVHLOIISCXXSRARBCFEPJQXBNPXAGPABHYZTHTDVVFYFSBVJIBEDAPRDWNKKKFWABPWLUWCYMVYHUGKKGBOKGOZICSVZGXTWHBIKUJCGWQWUZYSIUTZQQZMAJQOOMQD");
    msg.lat = 0.807994107554;
    msg.lon = 0.24977729263;
    msg.z = 0.268132525853;
    msg.z_units = 60U;
    msg.cog = 0.49653557846;
    msg.sog = 0.262264960422;

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
    msg.setTimeStamp(0.844302040819);
    msg.setSource(1042U);
    msg.setSourceEntity(199U);
    msg.setDestination(25017U);
    msg.setDestinationEntity(27U);
    msg.name.assign("FJZIISKNPGTYVGDEPNSTZZEPMBVWBDIMBLOTJDECOOJRNKHCLDCWVUHRQGYATQASETVMKLNMFLWYQBAQEXBGVIEEWUTOKKFCLOFVIXEYBYRITNNZSJAAMBZIHCCWKLGUFHMQPCFXDNQFNAJIDA");
    msg.value.assign("DTPYXNNFPXZFZQMKRTQSVGCJWDUAMSQXMCRHNFJSDXZOPHMEIPVRHQWSNOMLVVNOQYTPCEUBWKKDWCUYOOGYBTJLIIUKVBHLLTBGXCSZFOLZZJXEYTERXSECJRHGSHURQYFRPIOFPLHNHFYNDRINTP");

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
    msg.setTimeStamp(0.357000509431);
    msg.setSource(9567U);
    msg.setSourceEntity(106U);
    msg.setDestination(56708U);
    msg.setDestinationEntity(195U);
    msg.name.assign("LPHVBFJNPDRNZQOCLFMONIHDIJSEMSGCREGPZOTTHQBZAEIBZGJSDGABJRMTVLWFQCZTFXYDNP");
    msg.value.assign("WKSOYROXSKAQVXKKFRUSKPDWQZ");

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
    msg.setTimeStamp(0.662479699844);
    msg.setSource(18584U);
    msg.setSourceEntity(104U);
    msg.setDestination(49007U);
    msg.setDestinationEntity(145U);
    msg.name.assign("WVDCQAFWIPDEKLGZPGYUTPYKKKBVTRIZTJSEPFXIQJWXMNOFECNHCMURSLKFQOJJADGWSMAROAXBUBOVSQBITCCQAVENNJILJYETOZRHLZDYKBUOAGBPLEYLNRSVVWSFHQDTEUDPVDNKXSMZHBJTOWAJNPMZQSUCIUOPZRDIMPCAMAYGFXEVPZHVETGLLWIHWCWHM");
    msg.value.assign("FZVDGGOVAWZKZQYXDQKPRDHBQTNKGOHAEXOYRHVLIWYNYQALXLPREHFREPYBOZYIIDHUENLSKEYSDQIUDJCKW");

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
    msg.setTimeStamp(0.317425392865);
    msg.setSource(6928U);
    msg.setSourceEntity(164U);
    msg.setDestination(7904U);
    msg.setDestinationEntity(2U);
    msg.name.assign("DBGCVMVTQXDFHUICTNXZTHDXBZFPPLJRZXKDFRWPIRVLBPOB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NXEVVWUAEKZNGIJ");
    tmp_msg_0.value.assign("QSVINWNWFAKKQROIWUDOLMBLPHNXVENNHICPAZZWFNV");
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
    msg.setTimeStamp(0.656803684173);
    msg.setSource(3518U);
    msg.setSourceEntity(156U);
    msg.setDestination(45501U);
    msg.setDestinationEntity(4U);
    msg.name.assign("MSXIKUCSORBODRMOCZJQFSHISVZQFHRJATWEIXDVYGFEHRNKEQGDCSUVAYXWVNKJOAEAMBZLRMKUKB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YVNTUJLXPIBHMGPGRKQOFDBIFZIECSXBLQLCYVRVZJELXDIOTYLJNMWXIOAHEGIYUHKCDXDNKXGHMANEZRJNZGTQCPLKMQUGGFWYLSRVEWVOAWUWKXZRMYAUUZKGBJESPHPSXJIVFSGDNOUZWMRSFEOTCHO");
    tmp_msg_0.value.assign("MMUTNFSFANBLBPECUFGUYT");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.618402122689);
    msg.setSource(37585U);
    msg.setSourceEntity(41U);
    msg.setDestination(3215U);
    msg.setDestinationEntity(0U);
    msg.name.assign("YGOADBWRPGODNXOJJYAOFWKGZNEZEOBHXLNPYGFECSEGJIXQNHRLDOPBIHRURYNJERESOAPXJIIZKLZUTBQJNWVMLNIMCUTKHMLVDMAMFCYIVUPSORYULZVBFKRGSGYWSETAZXKTPQVHZADJMCZWHZLYOZUVRPEBXTTAWESIMJCFGQGQLSGMJBCWKQKQWUPFTCKXCCWULNBSMFNBTPXWQNDVADHAOEHHRXRDIUIJVUFVMLXY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZWEPJLIEHUQCZBUWIPROBPCOGYHVNHQOQWMIDZSEFXJLATFJBFHUMCNXGVBDKUVEHKAMDNGREKJYIOGIUNQQBMTKTFEPFDODLXNEBGALWVCZDHQRTXXGAVYGCCNPUTQFYVMPDMSGVVSXB");
    tmp_msg_0.value.assign("CTLGUGUCVWKZXIIEPYPYNWMJNCXOHWYZPJJFQDKJALVHURWCYTDBGIKCMAWZCLSDBLRBUWNHMVPMAXUVNHZOSVOXOSWYAEMDOTGKLLGJHBARTBPSPWAEFWQVOXKJGCYZZUONIRJFITDUHOPBFZDNFEISFMGEIVTLKITRSQ");
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
    msg.setTimeStamp(0.729128924891);
    msg.setSource(49849U);
    msg.setSourceEntity(165U);
    msg.setDestination(36062U);
    msg.setDestinationEntity(174U);
    msg.name.assign("JFJFDZNNIFWBUGDAYGNTYEHUPVDWYLEDZIAXTHTUGFOYHJASQIEXPCEDNUHWWUVXGTSHSQ");
    msg.visibility.assign("CGCHVYAZYZPLKWQGTLMAUODGBCDMMJYYVJPRMTMBTUFRSKNOGWIOHKCBRKPYWSKUJODZVBVSZSQEHJHAIUWHCKYJSMBLISQACTDGZZYYCXGFUBFHVMWSQLMSIKDHGKLUJDPJQNAPVTQNQTCSEBOWIQ");
    msg.scope.assign("BZQWEYMLLXUHMCVMANEZPAHPNNIRVXQAFEJIRDZGDTPHXNCBPMEPRYCFXCPBURSSOASNSNZWDBKTVTISIAQJQVKQTVFOUBCSLRBKIINDKKAKDKUBZMJYRPCEGRVGFUEVXCXBOHRWPETOVSSDJQSCYOWAOMUZUOYWGLUAQWBJXOJCVWFWQIGDNELEXBWTDQGLHXKHEHJJIMNZYKD");

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
    msg.setTimeStamp(0.713115504008);
    msg.setSource(51981U);
    msg.setSourceEntity(112U);
    msg.setDestination(48336U);
    msg.setDestinationEntity(44U);
    msg.name.assign("XPCTOMYSWOXJTLABIJFQJYUNBUIGDVNKPNLSJCQHVRNSCSEQAVHHDUDWXKXHLCXZFZBQGNNXFNVJQPRNODMYMVZZDRYTLXLBAMVCRPEKGYCWVRYWS");
    msg.visibility.assign("VQLVBJLGPLEOJGDCUPYUDQHRTVASPCXJWIKOKBRBHCQDKCLXUHRAHAMFWSBJBCSWVOSYOEDNAFNDFOTBYMOIVAQNRWTJVRSBQEGAGPXLPEHZZXMUKCKXTEYYPAKONBUBTUTNCLSHWMFFZLQDZEJHGIIFXYMQGUZZZWNTTJEBTMJWXIFMYAFSYVLNECMCTIDMVULXDKSURNKHCZMVPOYFYGSGEWZRHPJIRANRQDPIAIGWOQWQKZUGIEPSRHKV");
    msg.scope.assign("FMGOXBDKJVAIEOCKJAOJLSTKYUQSXOUCDLZHLQJGSKMNVBODYUILWQDTFRNMTIBPKXJWADBNRNPQHISDWRJRAWQYWFQPDKHKGJEFMTWCQWFARPYXVMHHRCEAXHZI");

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
    msg.setTimeStamp(0.532665156899);
    msg.setSource(10031U);
    msg.setSourceEntity(123U);
    msg.setDestination(35186U);
    msg.setDestinationEntity(20U);
    msg.name.assign("UIEORFISWLALEEEFYZDIMKZJKJPXMUJGZBBPWDXNXZPHAJAOQEXXS");
    msg.visibility.assign("EIGHEYMGPJXGFAVDN");
    msg.scope.assign("PGANZPHJOWBFIMRXOKFADOXCOXOVVTHSEYDNWMQBJWMSDOJCEYIKGGUCYLYCBMINJCBYTLSBVVQLDFYSHDNSJKTMHDBEFCRUWZBEIWFLURRYRKEMAXEJBYSFLUQRJGUCTOWPJKPXMTLGPHFDAZZIMETXDVGXXK");

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
    msg.setTimeStamp(0.666180747304);
    msg.setSource(9127U);
    msg.setSourceEntity(126U);
    msg.setDestination(34122U);
    msg.setDestinationEntity(12U);
    msg.name.assign("ECQFYTOXCHUZINXHJFUXJCPFKQLWAEXKDZVZUKRKHRMOLZHSDCBGBTZZLGPJQGBMLIHGTVSYOVYJWDUAOUDVNHBOYG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OMZIGFWMOXADPZLCCKIUCBDRUCFIHNXGOKNFMLTUJVWIBSOOKTFXODIVPSWAYYMGKVJNCVEHTMJVWJLQQDGHHDSANGBYWAJBJQXDLZUYVSEQLUEXKBAJYCCAMJXENQVZZGQXTMQUDVOVCERYCYGNDWKNFZNBZSQBOKYYXWBLPJPEERPURW");
    tmp_msg_0.value.assign("DFRJYFUDGUEOVUMXFRVAWDOPZWEUUCYLEAASIKFZJNKTMNKOMNJGORMILPRVHDJTMBFCOJQVEHQRLEVSSXIIWLGQQUXIHCZAUMR");
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
    msg.setTimeStamp(0.614099212743);
    msg.setSource(12489U);
    msg.setSourceEntity(106U);
    msg.setDestination(14966U);
    msg.setDestinationEntity(208U);
    msg.name.assign("RTFIPJURVSFPMGQROCTEOOZWACIYNEJJJSLBUDTPXBHXMIZXKWDYHTXMYMBZEIAQTETLOCLUOJMKBXBKVKDNUERAOSUZCRTDLIBZMYFSHOZWQRNKJHAACESGWVWYGKOWNIYLNUMCCJPZPUVCDAVBQNGHZWLSQXRRWIYZNLANXHOGQJUHPUVGKELJFTNPDXMMMIDPGXVYQNBTRYFFKDUGQEHYAFBCFKJVOGCHZDFSWPDKLWILEISXS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZESNNBMPSIEJQUHHBHRCMFQRRVOOHYSVTIWNLNOKWDDPUEXMICRKKFXLJEUEEAMKOHQJXCTUISPSUDQAYALYXCQTRZRLWJAUOQKDUFHKLSTSOYFVIDFRADNXOLRTFGQHYBFWBWLWIPGPLZHGGGEDGWKAYZ");
    tmp_msg_0.value.assign("HBRWAVAKIURCTRPCBNAALFOIGGHKEVYUCJVNZYQSYYDCUJIDLCDSIWWTHXWYOUIPQPOMIEKOPNZHZGPSSFHQLJVDSKESXMSGFDEOKYQAPMFLJGITDTRKZLNKKJGGLQFTJVPXEUOHWFOAKZHWXGBRLHLXKCOMZNUUDTJFUGNHYETSRMBXUCBVWO");
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
    msg.setTimeStamp(0.189591021759);
    msg.setSource(36018U);
    msg.setSourceEntity(23U);
    msg.setDestination(45867U);
    msg.setDestinationEntity(156U);
    msg.name.assign("CQEXLBRIPNEMRVOPBKJRPPVNZPBRKXUWSCIUSJTAKIZHNQGUBOJYEWMXCHROQQLVCVZFGYLNVFQNTJZRSEZHNFIBSUNVQPJREEAOZFAFWWGKU");

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
    msg.setTimeStamp(0.428342822215);
    msg.setSource(16477U);
    msg.setSourceEntity(100U);
    msg.setDestination(46349U);
    msg.setDestinationEntity(67U);
    msg.name.assign("HFORFQQERNVZUJVBSOFKGLONNAXSWJWN");

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
    msg.setTimeStamp(0.248314600259);
    msg.setSource(26713U);
    msg.setSourceEntity(228U);
    msg.setDestination(61156U);
    msg.setDestinationEntity(10U);
    msg.name.assign("MICRCNJBEMYQCNIYFLVQHLCTPSDRFGHJQMMKBLEJTCAGZIVOVISDKWIPYJHEIUIMOHBWWSAAKJEUSDXHUWJINLVLNPGLVDAKZTQZLCBOHKCOFEBYTFMSPBGBXWBVRNFFNOXZRPSMRXHXZXIUZFNQQPLRZLFQXEGPOZQWFGJHDUFGRTGKEJXNCYMBVYCOTSBDAEDAWSQASYQUWGGDRAOKXPTAPAZESMOVRKUYKPTNVUWUDDJNULOT");

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
    msg.setTimeStamp(0.850568716107);
    msg.setSource(15706U);
    msg.setSourceEntity(250U);
    msg.setDestination(13124U);
    msg.setDestinationEntity(105U);
    msg.name.assign("YCAISLCGPQFOEZZKTXNXILERNUQRJCANSPSLVWKMZZZHDOHRPKOZJJFFJYVORHLSJVDGVVYIXHQZMYKTKEEIQNCKBBLDZQGHBT");

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
    msg.setTimeStamp(0.221182404702);
    msg.setSource(33959U);
    msg.setSourceEntity(46U);
    msg.setDestination(19618U);
    msg.setDestinationEntity(144U);
    msg.timeout = 883576478U;

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
    msg.setTimeStamp(0.00426208718744);
    msg.setSource(3537U);
    msg.setSourceEntity(15U);
    msg.setDestination(18338U);
    msg.setDestinationEntity(240U);
    msg.timeout = 3009431779U;

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
    msg.setTimeStamp(0.158704544775);
    msg.setSource(7135U);
    msg.setSourceEntity(145U);
    msg.setDestination(56854U);
    msg.setDestinationEntity(204U);
    msg.timeout = 2596360915U;

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
    msg.setTimeStamp(0.143131505133);
    msg.setSource(21761U);
    msg.setSourceEntity(94U);
    msg.setDestination(8473U);
    msg.setDestinationEntity(203U);
    msg.sessid = 3035399060U;

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
    msg.setTimeStamp(0.79361783858);
    msg.setSource(8151U);
    msg.setSourceEntity(8U);
    msg.setDestination(11139U);
    msg.setDestinationEntity(161U);
    msg.sessid = 1534374448U;

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
    msg.setTimeStamp(0.494805331286);
    msg.setSource(5827U);
    msg.setSourceEntity(200U);
    msg.setDestination(41596U);
    msg.setDestinationEntity(185U);
    msg.sessid = 3594213120U;

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
    msg.setTimeStamp(0.740303848267);
    msg.setSource(18961U);
    msg.setSourceEntity(93U);
    msg.setDestination(19460U);
    msg.setDestinationEntity(221U);
    msg.sessid = 3603793590U;
    msg.messages.assign("KMNQXMRCLQRQTSNENDPSNEJOWSSCTEAIZSFGVVPCVASIHBUBIKIJOXSMBPIHALOKYCDJAVBUHYNGJIETBAYUWEZY");

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
    msg.setTimeStamp(0.652958636815);
    msg.setSource(24338U);
    msg.setSourceEntity(61U);
    msg.setDestination(54981U);
    msg.setDestinationEntity(26U);
    msg.sessid = 2978311928U;
    msg.messages.assign("TZKEJBQETBFXEVTAVTFRHUDMXLNTVDKUMRNPWLOGCGYJAYDFBYVIYSZDRFHKLBNYQQOPXHVGEDLPXAONIHXQHSRMPGESSUTPBAOLUFCRGYJFQGZZJDEOCXAPIYRUJBYHSKSIZUZSMKCDBXRJCKJIDILLZASCZKPWQNJSQHORGHWYLTWZCAIOALANEPXIUVNOWFNVEGKBCTGWNFXHKQMVDTBIOUWWMRYMEWGAJVVOPQFQJKBMRNTXELC");

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
    msg.setTimeStamp(0.758404035765);
    msg.setSource(5320U);
    msg.setSourceEntity(195U);
    msg.setDestination(32661U);
    msg.setDestinationEntity(30U);
    msg.sessid = 1608071892U;
    msg.messages.assign("VINHRACMXKOVGZQPSFYIVRYOUIWOBMDOOSUPIWEHWLDUCBZPBSQ");

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
    msg.setTimeStamp(0.478591942361);
    msg.setSource(6191U);
    msg.setSourceEntity(213U);
    msg.setDestination(36564U);
    msg.setDestinationEntity(199U);
    msg.sessid = 3872799020U;

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
    msg.setTimeStamp(0.567386106861);
    msg.setSource(55436U);
    msg.setSourceEntity(6U);
    msg.setDestination(18479U);
    msg.setDestinationEntity(234U);
    msg.sessid = 1373960070U;

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
    msg.setTimeStamp(0.965398024772);
    msg.setSource(50171U);
    msg.setSourceEntity(123U);
    msg.setDestination(519U);
    msg.setDestinationEntity(126U);
    msg.sessid = 1368338511U;

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
    msg.setTimeStamp(0.0558955447893);
    msg.setSource(57910U);
    msg.setSourceEntity(172U);
    msg.setDestination(47627U);
    msg.setDestinationEntity(118U);
    msg.sessid = 732865876U;
    msg.status = 96U;

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
    msg.setTimeStamp(0.415901479801);
    msg.setSource(52790U);
    msg.setSourceEntity(127U);
    msg.setDestination(43424U);
    msg.setDestinationEntity(7U);
    msg.sessid = 4010963895U;
    msg.status = 45U;

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
    msg.setTimeStamp(0.310997312345);
    msg.setSource(14180U);
    msg.setSourceEntity(164U);
    msg.setDestination(861U);
    msg.setDestinationEntity(150U);
    msg.sessid = 1212787177U;
    msg.status = 196U;

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
    msg.setTimeStamp(0.178212066951);
    msg.setSource(62216U);
    msg.setSourceEntity(36U);
    msg.setDestination(41246U);
    msg.setDestinationEntity(116U);
    msg.name.assign("ENUAYRQVTXUZBDTCHEOJKKIXXEXJJYSBPZYQDDOAKVAMMTDOFQHENTBBMXZKQBMMRVJVDFWAJKRGIMSAJJEPOFCEWOEGXBVULHICCYLDQITVLNCEENFJABXAPSVJHWH");

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
    msg.setTimeStamp(0.435512728548);
    msg.setSource(25991U);
    msg.setSourceEntity(223U);
    msg.setDestination(5198U);
    msg.setDestinationEntity(222U);
    msg.name.assign("UKEVBRINISZKEHCPPTRNADGYGZYOSWLYWAHSCANJUYIMVVJLNJPWMDKFFITDDVXFKXYKCQH");

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
    msg.setTimeStamp(0.601499834967);
    msg.setSource(60272U);
    msg.setSourceEntity(38U);
    msg.setDestination(58665U);
    msg.setDestinationEntity(108U);
    msg.name.assign("ERIYRJBGBSVUMPHCWSSNNCPAT");

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
    msg.setTimeStamp(0.367820240541);
    msg.setSource(24125U);
    msg.setSourceEntity(85U);
    msg.setDestination(16579U);
    msg.setDestinationEntity(60U);
    msg.name.assign("LFKMTERYZGAHYGITZOVJRCUUQERZVRCBGOEEBVCWWCCAZOESPFCUFMVSWIXHXTSJHBFKQVZZHIKHXXSIWMGYLKRQGPITKBHIIBNANAYDOVLQMGGXTAAWAPRPJENKNLNSXKGCUJXWPXFJYTDFVQPNDCAHHKIJBNOLSSDMJFAFETJETYFXQXLAZHZZDMYPLNUQLEWYBPBUVVDDLYOJDCUOQNPMWLOUMTI");

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
    msg.setTimeStamp(0.40753262761);
    msg.setSource(51906U);
    msg.setSourceEntity(65U);
    msg.setDestination(58717U);
    msg.setDestinationEntity(54U);
    msg.name.assign("IJLBRNWLDQN");

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
    msg.setTimeStamp(0.555376957657);
    msg.setSource(38311U);
    msg.setSourceEntity(170U);
    msg.setDestination(32100U);
    msg.setDestinationEntity(3U);
    msg.name.assign("DGOBDYXEIQWTKBDQTMLKKFSNQKFORLJLGFGFEWRCMKBFAVHJBMYZKUYPXKWVBAPIBVIHZ");

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
    msg.setTimeStamp(0.0778616817829);
    msg.setSource(24777U);
    msg.setSourceEntity(218U);
    msg.setDestination(44129U);
    msg.setDestinationEntity(68U);
    msg.type = 192U;
    msg.error.assign("KVWBYQZOKLCAFDTFNVAWPVZVBKNVKUQMCNLTMMQGZFRNYJGYZDYCISHXJXHEPMBCJTNNKCZVABJSZCITBGPNUEOGUGGDZETDCEYMREXJITISHMSDWYTZTSRSFUMFEMAAZUFLYIJS");

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
    msg.setTimeStamp(0.754451209126);
    msg.setSource(54834U);
    msg.setSourceEntity(133U);
    msg.setDestination(23268U);
    msg.setDestinationEntity(19U);
    msg.type = 162U;
    msg.error.assign("CFAZKNIXTMYBCJHUFTQKIVUWGRKFCTMZUBYQUAECHGHHWEUZFOSRGLGQSHEQKDYFMWQSKMATDGNLDAJXFGCRWSKUDPZALBBUIMRIRDZJWWIICFSNXVZHQBZHLXWLTYIBPJMETTSSZMOSLZVADVOCAPBQNSRABWFIK");

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
    msg.setTimeStamp(0.631409221184);
    msg.setSource(16345U);
    msg.setSourceEntity(179U);
    msg.setDestination(43156U);
    msg.setDestinationEntity(140U);
    msg.type = 128U;
    msg.error.assign("PRCTBTLAJSOIJWMZEHCHLEFQJNHZGKGV");

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
    msg.setTimeStamp(0.374367596283);
    msg.setSource(53138U);
    msg.setSourceEntity(135U);
    msg.setDestination(62289U);
    msg.setDestinationEntity(93U);
    msg.seq = 58810U;
    msg.sys_dst.assign("RKRUOJWKMFVGDWQAMONPSYIPBSIPEHIGDOXWFBMHQMERODQFHYBUXBKSOCAZZVOGAPNNPLAIY");
    msg.flags = 102U;
    const char tmp_msg_0[] = {-51, -89, 15, -71, 28, -78, -91, 38, -91, 11, 99, -3, 23, 44, -112, 27, -44, 125, 58, 64, 14, 92, 88, -39, -55, 51, -27, 55, -105, -30, 107, -47, 126, -85, -27, -110, 73, 39, -55, 119, 16, 48, 103, 82, -128, -101, 23, 100, -60, -67, 110, 1, -22, 68, -81, -43, 3, 69, -85, 2, 124, 119, 116, -23, -21, 122, 12, 45, 18, -117, 23, -16, -23, -15, 69, 74, -66, 46, 63, 53, 11, 78, 10, -19, -120, 40, -108, -99, 88, -118, 93, -60, -23, 19, 62, 110, -5, -67, -78, 31, 95, -5, -97, 18, 114, -39, -91, 22, -94, 65, 14, -86, 125, -119, -55, -112, -71, 92, 112, -5, 3, 75, 36, 83, -73, 97, 55, -18, -56, 111, -126, 61, 88, 86, 28, -101, 9, -92, 30, -94, 46, 125, -12, -9, 31, 101, -83, 95, -73, 109, -78, 49, 94, -87, -118, -121, -82, -76, -76, 60, 17, -61, -18, -50, -37, 12, 97, -78, 84, 115, -51, -49, -72, 118, 22, 112, -104, -118, 124, 75};
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
    msg.setTimeStamp(0.363368072435);
    msg.setSource(8981U);
    msg.setSourceEntity(240U);
    msg.setDestination(29294U);
    msg.setDestinationEntity(130U);
    msg.seq = 20219U;
    msg.sys_dst.assign("RURAGGTJDPSSAEZOYKULOGFEONQYESMPQFIUBKVHVNCKWMMXQDIUNLIADHYTSBPPJHMFGSLMDZWDPDNCGLPNCWDDRGBIRUMFRTFIQDKAVRQZYCTLHQRRVCAQUMKWFXOUZZFEBNSZOTEUELXQXVXPJLXCWHNXIJBVEHYWPMYJSZHSHKZGWCKFHKVTMKYZVFUXOQNBWGIFTLTNVVKJEOBBMLIRWBIGYEQXACNZSPJAPJRJBAHDILAUCASTY");
    msg.flags = 100U;
    const char tmp_msg_0[] = {2, -2, -123, 102, -7, 33, 13, 114, -67, 1, -76, 64, 98, -123, -87, 4, -68, 54, 0, -27, 44, 15, 103, -128, 67, 124, 69, 37, 92, 115, 73, 117, 80, -106, 121, 62, 112, -39, -73, -116, -34, -120, 1, 49, 19, 94, 109, 66, -113, 68, -72, -73, 85, 23, -90, -10, 80, -127, -31, 116, -122, -84, -15, 30, 4, -119};
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
    msg.setTimeStamp(0.339820941562);
    msg.setSource(13159U);
    msg.setSourceEntity(137U);
    msg.setDestination(38501U);
    msg.setDestinationEntity(85U);
    msg.seq = 45305U;
    msg.sys_dst.assign("IHUGRPJMKCAPGWRLAJICBHDOXVQEEGZAQKKQEQZWZLUZSAQTGBMTBYLPSEIKI");
    msg.flags = 118U;
    const char tmp_msg_0[] = {84, -13, 107, 58, -10, -46, -104, -9, 50, 76, -88, -61, 125, -25, -119, 15, 11, 118, -54, 112};
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
    msg.setTimeStamp(0.299447877123);
    msg.setSource(56043U);
    msg.setSourceEntity(197U);
    msg.setDestination(60002U);
    msg.setDestinationEntity(153U);
    msg.sys_src.assign("EZJGEDBQQXUGTXYGMPPRKDUYLJJEJQSCOMVGPGPNSMIGCCFYWQMAGMAFGIKQTQKAXFNJDLKOVGWXANHLHGFZTIRETKZVEBETDQAUCXEYEZUXOLAIPOKBWXRAMIVLYWHZRVBWFBSCWCOVMZBNTBNSFKNKQSEVRDTYWSLRJVHJLZUODUCFMRVTIJPHOYNFUQMMVYHNSOOAJBLCKDJIXOKCUYYBPFZXCWATPWHLDTXUFIWPL");
    msg.sys_dst.assign("JNEKSTNEKASSOAIEAJUIADHVXNBSHGLIFHDBLTKCCCVSASZZJONZRCDRDQOZCUWKSERIQWIWNPVKMDTEQTMDJYHYGQJODPCYFLXBWZEBGELAXPUNLNYOYUXJIRDBQXFVHWQPFUOAYFPJVSVVHVJYQDTXZRGBGIMECQUYINUUMPAFBLSMLTCATNUCTWFZXLJTLMLKSXWPYKMQFOXGYBOPGWNPVBIMRRREXEMKZDGWFHAVHQ");
    msg.flags = 135U;
    const char tmp_msg_0[] = {-87, 61, 36, -71, 60, 2, 117, 90, -82, -60, 57, -28, -90, 34, 103, -128, -33, 101, 25, -31, -113, 52, -7, -109, -79, 58, -63, 79, -42, -60, 28, -84, 12, -5, 109, -115, -103, 120, -47, -97, -67, 8, -55, 59, -92, 27, 0, 58, -23, 73, 15, -80, 35, -35, 7, 10, -106, -115, 1, 74, -19, 40, -32, -18, 117, -4, 43, 72};
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
    msg.setTimeStamp(0.790651948768);
    msg.setSource(55510U);
    msg.setSourceEntity(16U);
    msg.setDestination(11762U);
    msg.setDestinationEntity(172U);
    msg.sys_src.assign("EMEZUZTCIKQIUSPVWAKRKIDNAMLITVJVLKFJGEKNHLPFVZOULBYOZTSOKFKCTOERQMNARFVINZPCXXOGAEOXAUPYIQDDDHGRQWNAGMTWBSFSTEDBLHJMRWCMKIFTDRVVRDZWPMOHGCEUDMOEAYYQEUJPSRNLNBBKLHBXCGPNQHRKETFQBGVYFMDJWIYPYQDGOFMHBHWNOXSJWUUYBIJLSHCUPSQZLTYXFAGZQRXLHAVJYTSNJWGSUJIZXBPCWC");
    msg.sys_dst.assign("ITQINCERFLVAAVYOFTXGJQOZQMKIZOOFQHBLADPJBNGBDYFWJLLZSGBHJFLVSXBPWAFGTUBEUJQCEKBRSNWRXPBUUURTSKIWQCUNPVKLCEGDVVCBPSDCNKUGGHIJZEXZDATQSHDVYUMTCHIHZRWBPNHIMXSKOKYYMNZMRWXTMRKCVGZRAOZHGEJCDTYMYOQQVNYANAXUFLFFVSPKFOMTDQIPMKODEPOERST");
    msg.flags = 243U;
    const char tmp_msg_0[] = {-119, -13, -46, -97, 25, 15, -42, -46, -42, 46, -15, -40, 54, -101, 109, 9, -43, 56, 64, 113, 126, -34, -62, 30, -29, 63, 57, -52, 15, 57, 75, 79, -3, -23, -1, 40, 114, 40, -92, -49, 17, -103, -74, -34, 13, 91, -29, 119, 10, 125, -41, 54, 96, -20, -16, -114, -70, 75, -95, 69, 121, 56, -75, -36, 37, -17, -118, 82, 49, -6, -90, 66, 47, 3, -81, -30, 14, 32, -102, 81, 85, -30, 54, -70, 29, 98, -41, -123, 113, 110, -38, 15, 20, 68, -13, 27, -11, -45, 23, 94, -33, 10, -117, -38, -3, 35, -124, 46, -13, -98, 10, -10, -27, -114, 38, -37, 102, 27, -109, 22, -62, 65, -85, 57, 58, 39, -88, 27, 74, 56, -99, -107, -53, 56, -105, 81, 99, -118, 101, 59, 113, 46, 51, 80, 81, -59, 83, -9, 32, 45, -119, -69, 60, -123, 120, -9, -50, 68, 108, -128, 98, -108, 28, 35, 4, 119, -49, 56, -10, 46, 85, 95, 37, -56, 41, 112, 113, 7, 102, -65, -116, 40, 21, -57, 108, 39, -40, -92, -77, -14, -8, 66, 67, -48, -100, -62, 113, 38, -77, 8, 99, 67, -53, 74, 110, -9, -54, -92, 33, -102, 32, 82, -64, 93, -87, 42, 68, 105, -39, 96, -30, 67, -19, 57, 125, 102, -14, 96, 107};
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
    msg.setTimeStamp(0.647479341467);
    msg.setSource(43299U);
    msg.setSourceEntity(57U);
    msg.setDestination(26625U);
    msg.setDestinationEntity(180U);
    msg.sys_src.assign("VQLSGJQZAVPJXWHADCIVIIQDEWPVRNHPHOFOFKTKEIFCXIQVBEUXQMTJBGOKIXZUVCMSQFLCSLZZQPGTDIMZSYJLNRQWPGCMMPCIORXNDEMBDFJVRRJPSAEZGPNIDGWYJCYUOHVJGGAURYOJFUMESYZCNYQWNRAVPLHTKVUYAKONYHOWTTR");
    msg.sys_dst.assign("EMRSSOEMPANCHNWDJYDDJIPKMGMQRJOO");
    msg.flags = 109U;
    const char tmp_msg_0[] = {-96, -122, 74, -36, -4, -57, -29, -123, -110, 22, -5, 117, -16, -52, 73, 20, -80, -7, -33, -10, -106, 28, 14, 110, -74, -22, -76, 51, 37, 101, 67, 32, 80, 44, 20, 71, -67, 84, 56, -100, 54, -125, 32, -106, -1, 48, 27, -84, -4, -88, 48, -91, 21, 1, 39, -8, 68, 56, 58, -35, -80, -37, 113, 0, -29, 84, -52, 11, 8, -108, 19, -75, 11, 7, 6, -103, 91, 69, -110, 84, -108, -114, 18, -88, 31, 44, 31, -46, -66, -8, 50, 7, 90, 125, -88, -105, 22, -97, -53, 35, -108, -55, -69, 126, -44, 88, 21, 3, 34, 91, -9, -7, -110, 15, 36, -43, 48, -59, -114, -32};
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
    msg.setTimeStamp(0.526745376686);
    msg.setSource(64204U);
    msg.setSourceEntity(35U);
    msg.setDestination(362U);
    msg.setDestinationEntity(221U);
    msg.seq = 51211U;
    msg.value = 23U;
    msg.error.assign("ZMJCMXXETTFTYZEQYNKHAES");

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
    msg.setTimeStamp(0.11720627237);
    msg.setSource(56836U);
    msg.setSourceEntity(237U);
    msg.setDestination(26394U);
    msg.setDestinationEntity(183U);
    msg.seq = 41313U;
    msg.value = 44U;
    msg.error.assign("IKHNFADLDAMVAQGEYGWHSETTXPIPVAUKZKLSXXMIGITLBWTOQRSRYNIIZPSLEVMQGOTBRTEFADEVOAPQNUZYW");

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
    msg.setTimeStamp(0.313142447546);
    msg.setSource(23030U);
    msg.setSourceEntity(184U);
    msg.setDestination(823U);
    msg.setDestinationEntity(138U);
    msg.seq = 1591U;
    msg.value = 187U;
    msg.error.assign("VMWZJGJULLFFUXAMRQYSZBTGIEXBOCBKPYTLKVVRIUCFKEXALANEJPXVSUGMNUKZWITIWADTSACUREVVUGTKREDHMBVLDQZDFMRPPKDYOHCWSFYHPMIGGEQTQYNYUGPBQNLGNCUXJPTGVWRNLRJCORDZXZSJZEWNPWRSYNIFXIZS");

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
    msg.setTimeStamp(0.809953670527);
    msg.setSource(13162U);
    msg.setSourceEntity(134U);
    msg.setDestination(60397U);
    msg.setDestinationEntity(183U);
    msg.seq = 58186U;
    msg.sys.assign("XRJODOIZAQVWFOIZJKAFCDSAMFLSJUTLTJOLYRDKBMHVJRADIMTDIQWFZMRVIBYKUGVFMWGMXGBKSABXZQDNBDDCZG");
    msg.value = 0.816186856326;

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
    msg.setTimeStamp(0.122412535908);
    msg.setSource(21944U);
    msg.setSourceEntity(58U);
    msg.setDestination(61439U);
    msg.setDestinationEntity(182U);
    msg.seq = 33227U;
    msg.sys.assign("VXPAIKDWNMCEPIEYDPQRQPEYXSDRWBZPOQOMYBQUHMVCPUXJBOXSHSCEBWYRJJSGIKZLUKORJGQLTLFUEXNETCZHJRUSOLNASNGUFDLKDMHKXQFFXNXZMGJVKBCRFDAMASLSHG");
    msg.value = 0.491279002096;

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
    msg.setTimeStamp(0.127692441138);
    msg.setSource(60723U);
    msg.setSourceEntity(166U);
    msg.setDestination(2731U);
    msg.setDestinationEntity(76U);
    msg.seq = 6583U;
    msg.sys.assign("ILGTXQOVKDGREHJIRBWYJPXACAAPKEMBJJXOCSJZZYKAFDFGNPEYPSLQXXEZVBUTOLLPDYVLRIEWETIMDOSOKNNGZOMCNFDMALYUPCVBWTQGSWYDHRJFMNKFVBLJWGIVNBCGRQZIMQQSSHUONUYEO");
    msg.value = 0.667835996335;

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
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.323351112204);
    msg.setSource(22337U);
    msg.setSourceEntity(10U);
    msg.setDestination(980U);
    msg.setDestinationEntity(20U);
    msg.seq = 42749U;
    msg.sys_dst.assign("VSXQXUFOUEPFLUQKDCJVLWZGCMKDUOPSIJFYVWOBNSKHLRGSDAQAAPOC");
    msg.timeout = 0.563527804945;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.667859728336);
    msg.setSource(17704U);
    msg.setSourceEntity(61U);
    msg.setDestination(12364U);
    msg.setDestinationEntity(140U);
    msg.seq = 37599U;
    msg.sys_dst.assign("JONKJCZJFVMLZCDFYDSFMAQIRBYUPFBAOSPTQCQGIMCBVDNXBHXKRMVFLVICOIJIIEKRKQKLEVYTECWUNJFMRBOZXMWSGVKNCHGVTNTUWGTHWKVXLIHUZDLSAHEOH");
    msg.timeout = 0.0517346927135;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.0708211747744);
    msg.setSource(59780U);
    msg.setSourceEntity(224U);
    msg.setDestination(4826U);
    msg.setDestinationEntity(50U);
    msg.seq = 8588U;
    msg.sys_dst.assign("QMPRNZQUMCEOBZAKSJDAVYBQXEFFHZDAVSLGVDFYWYUZLAIHVNDPABHJPVWCDGSVCKXJJZNNPFYMWUUYBXMEGSRKXQURLFJPYLYDIUOOTJWHIAERKAZCSXQ");
    msg.timeout = 0.290328413176;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #2", msg == *msg_d);
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
    msg.setTimeStamp(0.740753203236);
    msg.setSource(36957U);
    msg.setSourceEntity(193U);
    msg.setDestination(3317U);
    msg.setDestinationEntity(78U);
    msg.action = 224U;
    msg.longain = 0.976463697961;
    msg.latgain = 0.464418022838;
    msg.bondthick = 1263993410U;
    msg.leadgain = 0.47026694525;
    msg.deconflgain = 0.045934933044;

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
    msg.setTimeStamp(0.279082675031);
    msg.setSource(34855U);
    msg.setSourceEntity(171U);
    msg.setDestination(64075U);
    msg.setDestinationEntity(91U);
    msg.action = 181U;
    msg.longain = 0.110129753028;
    msg.latgain = 0.796374625572;
    msg.bondthick = 3913053581U;
    msg.leadgain = 0.202043345049;
    msg.deconflgain = 0.189583890885;

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
    msg.setTimeStamp(0.759990542473);
    msg.setSource(47121U);
    msg.setSourceEntity(53U);
    msg.setDestination(65319U);
    msg.setDestinationEntity(85U);
    msg.action = 54U;
    msg.longain = 0.261897303369;
    msg.latgain = 0.917054327463;
    msg.bondthick = 818975927U;
    msg.leadgain = 0.483027056924;
    msg.deconflgain = 0.878629840413;

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
    msg.setTimeStamp(0.0354005198688);
    msg.setSource(63093U);
    msg.setSourceEntity(173U);
    msg.setDestination(59242U);
    msg.setDestinationEntity(88U);
    msg.err_mean = 0.655363241695;
    msg.dist_min_abs = 0.401229838297;
    msg.dist_min_mean = 0.304340435;

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
    msg.setTimeStamp(0.990174142249);
    msg.setSource(50361U);
    msg.setSourceEntity(55U);
    msg.setDestination(59123U);
    msg.setDestinationEntity(217U);
    msg.err_mean = 0.199801810142;
    msg.dist_min_abs = 0.391436556601;
    msg.dist_min_mean = 0.0604950006869;

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
    msg.setTimeStamp(0.984865333554);
    msg.setSource(39633U);
    msg.setSourceEntity(78U);
    msg.setDestination(55425U);
    msg.setDestinationEntity(133U);
    msg.err_mean = 0.817323149284;
    msg.dist_min_abs = 0.362648423487;
    msg.dist_min_mean = 0.488617145307;

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
    msg.setTimeStamp(0.504294404231);
    msg.setSource(47774U);
    msg.setSourceEntity(227U);
    msg.setDestination(25669U);
    msg.setDestinationEntity(169U);
    msg.action = 248U;
    msg.lon_gain = 0.350957693161;
    msg.lat_gain = 0.991540433602;
    msg.bond_thick = 0.471936686288;
    msg.lead_gain = 0.54854154737;
    msg.deconfl_gain = 0.814624976326;
    msg.accel_switch_gain = 0.203219841369;
    msg.safe_dist = 0.913754452395;
    msg.deconflict_offset = 0.0601239243445;
    msg.accel_safe_margin = 0.857540618616;
    msg.accel_lim_x = 0.954413452709;

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
    msg.setTimeStamp(0.576237761791);
    msg.setSource(41416U);
    msg.setSourceEntity(5U);
    msg.setDestination(45855U);
    msg.setDestinationEntity(71U);
    msg.action = 183U;
    msg.lon_gain = 0.254444989871;
    msg.lat_gain = 0.656332508949;
    msg.bond_thick = 0.256724116432;
    msg.lead_gain = 0.880409368755;
    msg.deconfl_gain = 0.367278009643;
    msg.accel_switch_gain = 0.655515751056;
    msg.safe_dist = 0.9829605878;
    msg.deconflict_offset = 0.115162207472;
    msg.accel_safe_margin = 0.965376033962;
    msg.accel_lim_x = 0.419837649772;

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
    msg.setTimeStamp(0.0070056342266);
    msg.setSource(25579U);
    msg.setSourceEntity(91U);
    msg.setDestination(53720U);
    msg.setDestinationEntity(231U);
    msg.action = 53U;
    msg.lon_gain = 0.656347484872;
    msg.lat_gain = 0.427862081365;
    msg.bond_thick = 0.49579752115;
    msg.lead_gain = 0.649735978029;
    msg.deconfl_gain = 0.900664111556;
    msg.accel_switch_gain = 0.776154480367;
    msg.safe_dist = 0.395075321518;
    msg.deconflict_offset = 0.806631372092;
    msg.accel_safe_margin = 0.64615196281;
    msg.accel_lim_x = 0.28473152726;

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
    msg.setTimeStamp(0.175090571257);
    msg.setSource(47926U);
    msg.setSourceEntity(43U);
    msg.setDestination(58804U);
    msg.setDestinationEntity(84U);
    msg.type = 188U;
    msg.op = 194U;
    msg.err_mean = 0.419470334336;
    msg.dist_min_abs = 0.899936444945;
    msg.dist_min_mean = 0.25377544272;
    msg.roll_rate_mean = 0.699229036434;
    msg.time = 0.958981193713;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 132U;
    tmp_msg_0.lon_gain = 0.604241869052;
    tmp_msg_0.lat_gain = 0.798989169072;
    tmp_msg_0.bond_thick = 0.217890526529;
    tmp_msg_0.lead_gain = 0.42135116985;
    tmp_msg_0.deconfl_gain = 0.235110674421;
    tmp_msg_0.accel_switch_gain = 0.227237144934;
    tmp_msg_0.safe_dist = 0.876639614523;
    tmp_msg_0.deconflict_offset = 0.143079692094;
    tmp_msg_0.accel_safe_margin = 0.376705110896;
    tmp_msg_0.accel_lim_x = 0.384932038956;
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
    msg.setTimeStamp(0.926993155732);
    msg.setSource(9339U);
    msg.setSourceEntity(183U);
    msg.setDestination(14014U);
    msg.setDestinationEntity(218U);
    msg.type = 47U;
    msg.op = 75U;
    msg.err_mean = 0.127060504532;
    msg.dist_min_abs = 0.636542501352;
    msg.dist_min_mean = 0.714737538417;
    msg.roll_rate_mean = 0.64641984723;
    msg.time = 0.242195865257;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 99U;
    tmp_msg_0.lon_gain = 0.0997071178471;
    tmp_msg_0.lat_gain = 0.547289469443;
    tmp_msg_0.bond_thick = 0.11140923364;
    tmp_msg_0.lead_gain = 0.493521293217;
    tmp_msg_0.deconfl_gain = 0.675166452156;
    tmp_msg_0.accel_switch_gain = 0.0497587427371;
    tmp_msg_0.safe_dist = 0.184214944033;
    tmp_msg_0.deconflict_offset = 0.045976727823;
    tmp_msg_0.accel_safe_margin = 0.548535844982;
    tmp_msg_0.accel_lim_x = 0.194607892919;
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
    msg.setTimeStamp(0.466882437489);
    msg.setSource(43645U);
    msg.setSourceEntity(42U);
    msg.setDestination(14452U);
    msg.setDestinationEntity(244U);
    msg.type = 197U;
    msg.op = 214U;
    msg.err_mean = 0.585221827106;
    msg.dist_min_abs = 0.203104073246;
    msg.dist_min_mean = 0.879348671203;
    msg.roll_rate_mean = 0.279501684436;
    msg.time = 0.344986723319;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 161U;
    tmp_msg_0.lon_gain = 0.124792643479;
    tmp_msg_0.lat_gain = 0.0861725935148;
    tmp_msg_0.bond_thick = 0.773697953762;
    tmp_msg_0.lead_gain = 0.250838496278;
    tmp_msg_0.deconfl_gain = 0.0239559492275;
    tmp_msg_0.accel_switch_gain = 0.238916741346;
    tmp_msg_0.safe_dist = 0.75987413688;
    tmp_msg_0.deconflict_offset = 0.159286600519;
    tmp_msg_0.accel_safe_margin = 0.693339593958;
    tmp_msg_0.accel_lim_x = 0.196673379123;
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
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.264966507108);
    msg.setSource(14162U);
    msg.setSourceEntity(185U);
    msg.setDestination(23818U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.423209860786;
    msg.lon = 0.0101223867963;
    msg.eta = 2614274210U;
    msg.duration = 10482U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.266840376187);
    msg.setSource(8942U);
    msg.setSourceEntity(203U);
    msg.setDestination(46213U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.365622654485;
    msg.lon = 0.56665382686;
    msg.eta = 644902460U;
    msg.duration = 59397U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.26399664974);
    msg.setSource(60402U);
    msg.setSourceEntity(10U);
    msg.setDestination(13491U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.958325516052;
    msg.lon = 0.044880228779;
    msg.eta = 1555927383U;
    msg.duration = 56184U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.435534990123);
    msg.setSource(24415U);
    msg.setSourceEntity(38U);
    msg.setDestination(47305U);
    msg.setDestinationEntity(5U);
    msg.plan_id = 26U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.332434673999;
    tmp_msg_0.lon = 0.488643210137;
    tmp_msg_0.eta = 3343686598U;
    tmp_msg_0.duration = 42402U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.0142181854989);
    msg.setSource(61578U);
    msg.setSourceEntity(121U);
    msg.setDestination(38211U);
    msg.setDestinationEntity(195U);
    msg.plan_id = 49195U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.785018086473;
    tmp_msg_0.lon = 0.307631286431;
    tmp_msg_0.eta = 1657790534U;
    tmp_msg_0.duration = 61692U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.794998832078);
    msg.setSource(30247U);
    msg.setSourceEntity(138U);
    msg.setDestination(28302U);
    msg.setDestinationEntity(60U);
    msg.plan_id = 24421U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.605095137109;
    tmp_msg_0.lon = 0.697131874121;
    tmp_msg_0.eta = 3395422497U;
    tmp_msg_0.duration = 22441U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.7957363367);
    msg.setSource(53005U);
    msg.setSourceEntity(113U);
    msg.setDestination(7984U);
    msg.setDestinationEntity(112U);
    msg.type = 246U;
    msg.command = 242U;
    msg.settings.assign("JOOTFTDASKLYFVRLHHLGLRRFOOVGXRAFMGWVLYKKEYUHBQBRQEPWSCHKCLKRMAZJWWIEUGYBRNUB");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 41232U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.867755681329;
    tmp_tmp_msg_0_0.lon = 0.193646366126;
    tmp_tmp_msg_0_0.eta = 135353797U;
    tmp_tmp_msg_0_0.duration = 356U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("YWQPBCNZDKWXS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.0724095460696);
    msg.setSource(40059U);
    msg.setSourceEntity(199U);
    msg.setDestination(26737U);
    msg.setDestinationEntity(48U);
    msg.type = 175U;
    msg.command = 153U;
    msg.settings.assign("OSDQKVQRWKSZJFAWLVBGOYVKMB");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 25735U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("WGFOUVSMMHLOYI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.370022640596);
    msg.setSource(56090U);
    msg.setSourceEntity(86U);
    msg.setDestination(49149U);
    msg.setDestinationEntity(224U);
    msg.type = 122U;
    msg.command = 137U;
    msg.settings.assign("TXAOUJRZZXKMQQPCIYELZHGYNTGTGUNGQBPRLERXXNWQUWSRQRGANSCFIXTDSFKFKVELYRLIVAKTCVAADCWYLMAXILOCFGZISUJFMQAWDBEJSYJDWCHDPYJBSNLDLLKITGSN");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 2038U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.496331275765;
    tmp_tmp_msg_0_0.lon = 0.893645308277;
    tmp_tmp_msg_0_0.eta = 2385319263U;
    tmp_tmp_msg_0_0.duration = 27024U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("OGCZZHRYSVPPGXCOSLBIYORABHSFQWHECSGMUFNVLEVGHOCYPGLDUZOCBGEBWBDSGKUOJLMEFZNIWNBPKTROAQRDFBVTQMIAGRTUXXQTEMEEPHDUMJEWSQIUKFODQJUEYAVCCAEYSAVHPFWNHKKHYXDOWWSKAZOZYACJTJIVPIVNMDNG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.396706404324);
    msg.setSource(30867U);
    msg.setSourceEntity(111U);
    msg.setDestination(64350U);
    msg.setDestinationEntity(111U);
    msg.state = 110U;
    msg.plan_id = 43477U;
    msg.wpt_id = 126U;
    msg.settings_chk = 63533U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.837554883971);
    msg.setSource(8964U);
    msg.setSourceEntity(214U);
    msg.setDestination(11580U);
    msg.setDestinationEntity(170U);
    msg.state = 21U;
    msg.plan_id = 26624U;
    msg.wpt_id = 157U;
    msg.settings_chk = 659U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.487082981287);
    msg.setSource(9542U);
    msg.setSourceEntity(169U);
    msg.setDestination(279U);
    msg.setDestinationEntity(31U);
    msg.state = 204U;
    msg.plan_id = 24033U;
    msg.wpt_id = 44U;
    msg.settings_chk = 59080U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #2", msg == *msg_d);
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
    msg.setTimeStamp(0.997262449715);
    msg.setSource(50724U);
    msg.setSourceEntity(159U);
    msg.setDestination(53228U);
    msg.setDestinationEntity(33U);
    msg.uid = 165U;
    msg.frag_number = 178U;
    msg.num_frags = 22U;
    const char tmp_msg_0[] = {-97, -115, -12, 124, 121, 101, 76, 35, 50, 77, -128, 93, 62, 27, -113, -66, -56, -81, 124, 57, -11, 6, 46, 64, -56, 32, -95, -35, 46, -121, -106, 85, 45, -67, -21, 122, -41, -61, -117, -16, 114, -96, -34, -36, -43, 111, -43, 52, -59, -67, -27, -2, 38, -98, 42, 69, 37, -110, -96, 86, 25, -43, 76, 35, -5, -83, 97, -67, 9, 85, 32, -97, 115, -107, -5, 51, 48, 85, -95, -10, 98, 119, 32, 120, -54, 110, 1, 73, -47, -109, 15, 96, 58, -66, 65, 20, 26, 40, -94, -34, 64, -118, -63, 91, -96, -99, -2, 50, 26, -13, -17, 25, 1, -58, 105, -37, -47, -108, -83, -44, 15, 43, -70, 41, 122, -77, -37, 118, 29, -82, -46, 112, 68, -115, 57, 123, -1, 74, -73, -88, -80, -3, -13, 112, -38};
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
    msg.setTimeStamp(0.892773404519);
    msg.setSource(13516U);
    msg.setSourceEntity(193U);
    msg.setDestination(53679U);
    msg.setDestinationEntity(208U);
    msg.uid = 154U;
    msg.frag_number = 156U;
    msg.num_frags = 1U;
    const char tmp_msg_0[] = {116, 89, -118, -87, -125, 106, -11, -80, -118, -88, 52, -63, 76, -117, -66, -123, 94, 43, -72, -56, -58, -123, 69, 48, 93, 12, -98, 97, -52, 107, 12, -58, -119, -50, 80, -85, -126, 124, -114, -9, 31, 28, -114, 31, 119, 30, -125, 42, -78, 54, 47, 6, 80, 86, -105, 12, -8, 120, -2, 88, -63, 92, -111, 7, 84, 81, -72, -27, 4, -28, -18, 49, 100, 38, -31, -49, -37, 79, 58, 33, -49, 47, 9, 67, 13, 42, -52, -63, -51, -31, -33, 14, -73, -61, 121, -15, -71, -12, 54, -72, -107, 106, -85, 32, -103, -95, -107, -105, 115, 98, -8, 65, -44, 99, -24, -44, -21, -28, -86, -113, 102, 36, -71, -78, -52, -26, 21, 99, 11, -103, 2, -100, -97, -84, -3, 19, -110, 99, 76, -127, -100, 68, 116, 77, 45, -52, -20, -125, -111, -72, -116, 82, 125, -75, -70, 116, -8, 122, -49, 34, 32, 63, 15, -124, -5, -37, 66, 66, 37, 69, 59, -55, 13, -56, 65, -124, -57, -32, -124, 49, -35, 26, -80, -16, -1, -77, 22, 89, -72, 27, -7, 29, -115, 108, -86, 2, -31, -57, 28, -69, 75, 30, -105, -36, -10, -78, -88, 120, -108, 119, 13, 99, -69, -28, 95, -20, 4, -42, 14, 117, 97, 59, 30, 108, 30, -2, 69, 69, 75, 17, -42, 7, 0, -98, -61, 121, 80};
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
    msg.setTimeStamp(0.284916421712);
    msg.setSource(40909U);
    msg.setSourceEntity(55U);
    msg.setDestination(18879U);
    msg.setDestinationEntity(49U);
    msg.uid = 228U;
    msg.frag_number = 123U;
    msg.num_frags = 149U;
    const char tmp_msg_0[] = {-14, -9, -11, -107, -27, 71, -112, 0, 18, -66, 4, 107, -81, -54, 118, -11, -116, -101, 10, 88, 110, 80, -127, 42, -77, 88, -122, 36, -103, -94, -31, -20, 42, -60, 60, 99, -35, 123, -88, 4, 103, 0, 79, -50, -1, -62, 110, -72, 60, -56, 39, -79, -116, 27, -83, -14, 29, -90, -96, 19, -84, -5, 14, 3, 54, -31};
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
    msg.setTimeStamp(0.844349518918);
    msg.setSource(42687U);
    msg.setSourceEntity(230U);
    msg.setDestination(4252U);
    msg.setDestinationEntity(42U);
    msg.content_type.assign("CCVOLDCIEOCONCLMJPUDWXHCRTRVMHEHJW");
    const char tmp_msg_0[] = {-49, 1, 45, -14, -66, -55, -58, -61, 98, -24, -98, 114, -39, 34, -72, -78, -59, 74, -113, -1, -81, -38, -117, -28, 96, 41, 77, -114, -47, 47, -1, 23, 19, -103, 73, 1, 64, 29, 3, -106, -13, -60, -71, 7, -80, 52, 83, -42, -96, -36, -12, 39, 99, -82, -70, -103, 7, 28, 20, -110, 41, -56, -19, 55, -54, 126, 111, 124, -34, -68, 90, 92, 15, 23, 56, -68, 91, 55, 118, -113, 46, -42, 121, 100, 84, -112, -53, 37, 110, 76, 42, -65, -87, -21, 51, -5, 107, 20, 7, 41, -8, 14, -10, -112, 41, 125, -73, -58, -100, 16, 100, -96, -23, -126, -51, -3, 72, 107, -51, -37, 114, 16, 94, -43, -116, 50, -9, 79, 45, -15, 115, -90, -16, -96, -125, 49, -69, 34, -99, 4, 64, -35, 101, 93, -113, -4, -70, -32, 93, 25, -25, 47, -80, 69, 23, 17, 110, 68, 23, -105, 69, -29, 77, -28, 56, -95, 31, 103, 38, 10, -71, -55, 111, 63, 33, 32, 3, -122, 5, -8, 118, -79, 77, 4, -16, -1, 32, -22, 60, -34, 103, -35, 34, 6, 22, -117, -13, -39, -127, 111, -75, 26, -16, -116};
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
    msg.setTimeStamp(0.733594470892);
    msg.setSource(41570U);
    msg.setSourceEntity(117U);
    msg.setDestination(1354U);
    msg.setDestinationEntity(119U);
    msg.content_type.assign("YWNIBHTPTDGAMSIYDSQAMLHJSTLFZIZXAOWEQGWHFMKNWDYACQMGRUYDSRHZLROIWZWBLXBKANWUUINPKQBGUSTKFLNNAKUHCDMFOCGNVYXXFKYSTOEPPRIJQEZVRHCDQWPKPCOIRWOXIBRDTTVNYZBYFNXCOLSVHRWZFGC");
    const char tmp_msg_0[] = {101, 10, 111, -29, 73, 3, 77, 111, 74, 92, 118, -60, -62, 46, 12, 65, -68, -29};
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
    msg.setTimeStamp(0.234479959662);
    msg.setSource(48302U);
    msg.setSourceEntity(95U);
    msg.setDestination(34189U);
    msg.setDestinationEntity(216U);
    msg.content_type.assign("XDVKNEELMUNJCGTCGVZJBZHDWVEBIMDMKZWUZUTOEPVHKEADFIFRGFZWPQSAKYHMPCBPTRBVXUPQKTQUHVAOVBWQGFOHJXUMDIPDEOLTGTBQSKCVLLWOMYCOKZBZYKNJTAHYYYJUPXG");
    const char tmp_msg_0[] = {-42, 20, -18, 120, 87, 85, -116, -63, 30, 6, 124, -54, -98, -87, -97, 55, -98, -93, 102, 32, 52, 45, -14, 66, -75, 27, -80, -16, 8, -60, 82, 19, -80, -45, 53, 116, -53, -22, 119, 120, 45, 67, 58, 4, 1, -29, -108, 125, 101, -5, 62, -1, -4, -97, -45, 6, 34, 50, -35, 56, 101, -124, 31, 21, 80, 20, 94, 50, -6, 74, 91, -41, -128, 103, 123, -16, 64, -59, 103, -88, -43, 115, -120, 53, -61, 2, -49, 80, -108, -10, 60, -49, 6, 28, -23, -34, -93, 45, 2, -78, -60, 118, 25, 98, -39, 26, -104, 18, -4, -47, 69, 99, -63, -113, 120, 82, 8, -16, 6, 7, 99, 34, 18, -80, 61, -93, 118, -34, -41, 36, 72, 93, 102, -121, -52, 56, -42, 91, -33, 24, 116, -94, -91, 61, 11, -16, 10, 62, 109, -113, -75, 44, -33, 78, 78, -112, -60, -126, 59, -122, -1, -19, 40, 100, 115, -58, -5, -46, -88, -121, 82, 53, 99, 40, 37, -77, 119, -43, 27, -8, 122, 82, 69};
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
    msg.setTimeStamp(0.289851032117);
    msg.setSource(49676U);
    msg.setSourceEntity(89U);
    msg.setDestination(16632U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.679019075507);
    msg.setSource(10612U);
    msg.setSourceEntity(242U);
    msg.setDestination(2621U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.383519778553);
    msg.setSource(6064U);
    msg.setSourceEntity(235U);
    msg.setDestination(15474U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.334703602123);
    msg.setSource(59302U);
    msg.setSourceEntity(58U);
    msg.setDestination(57970U);
    msg.setDestinationEntity(254U);
    msg.target = 3421U;
    msg.bearing = 0.459296077895;
    msg.elevation = 0.532415262871;

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
    msg.setTimeStamp(0.135441676908);
    msg.setSource(38318U);
    msg.setSourceEntity(65U);
    msg.setDestination(39961U);
    msg.setDestinationEntity(166U);
    msg.target = 3858U;
    msg.bearing = 0.0135033993944;
    msg.elevation = 0.938076715624;

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
    msg.setTimeStamp(0.687761469125);
    msg.setSource(18572U);
    msg.setSourceEntity(111U);
    msg.setDestination(62011U);
    msg.setDestinationEntity(92U);
    msg.target = 27200U;
    msg.bearing = 0.673163737807;
    msg.elevation = 0.866206271628;

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
    msg.setTimeStamp(0.0463722130095);
    msg.setSource(17353U);
    msg.setSourceEntity(13U);
    msg.setDestination(50627U);
    msg.setDestinationEntity(77U);
    msg.target = 41908U;
    msg.x = 0.858215998215;
    msg.y = 0.74407987959;
    msg.z = 0.369729133713;

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
    msg.setTimeStamp(0.764912321797);
    msg.setSource(32971U);
    msg.setSourceEntity(32U);
    msg.setDestination(12708U);
    msg.setDestinationEntity(43U);
    msg.target = 63479U;
    msg.x = 0.782354125595;
    msg.y = 0.381551504288;
    msg.z = 0.206688849154;

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
    msg.setTimeStamp(0.801044485773);
    msg.setSource(46381U);
    msg.setSourceEntity(143U);
    msg.setDestination(34789U);
    msg.setDestinationEntity(143U);
    msg.target = 30568U;
    msg.x = 0.0572308735025;
    msg.y = 0.715472715589;
    msg.z = 0.227744670141;

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
    msg.setTimeStamp(0.910603986866);
    msg.setSource(39469U);
    msg.setSourceEntity(55U);
    msg.setDestination(56889U);
    msg.setDestinationEntity(17U);
    msg.target = 48761U;
    msg.lat = 0.360178788309;
    msg.lon = 0.494567721408;
    msg.z_units = 71U;
    msg.z = 0.372706742828;

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
    msg.setTimeStamp(0.844031587617);
    msg.setSource(53001U);
    msg.setSourceEntity(36U);
    msg.setDestination(22534U);
    msg.setDestinationEntity(10U);
    msg.target = 10841U;
    msg.lat = 0.527857293034;
    msg.lon = 0.528947176408;
    msg.z_units = 29U;
    msg.z = 0.503024905769;

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
    msg.setTimeStamp(0.793346149343);
    msg.setSource(31493U);
    msg.setSourceEntity(25U);
    msg.setDestination(33419U);
    msg.setDestinationEntity(132U);
    msg.target = 22020U;
    msg.lat = 0.365060573771;
    msg.lon = 0.657278025489;
    msg.z_units = 136U;
    msg.z = 0.570051629076;

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
    msg.setTimeStamp(0.654857947132);
    msg.setSource(20255U);
    msg.setSourceEntity(53U);
    msg.setDestination(10012U);
    msg.setDestinationEntity(245U);
    msg.locale.assign("KSYWZJMDZCBXHPUYOGWIQYXGNCYARCLHPGYCTKZQEKFPQSGEFUXEVYAZSKAREMQMYNQFNCJHMQNCETTSLDLAAOOPJVPDKBGRSUMBHYOTHWDKWANUIILUTFCTXNROOSJBNAMNFWIBHWDPTRFSIVVMHLEGBRGIKKVCQVODIUZWXIREPUOUWDLXCJSXWFWVFDB");
    const char tmp_msg_0[] = {2, 24, -107, -33, -88, 107, 67, 98, -111, -50, 102, 119, 73, -124, 76, -17, 19, 27, 111, 38, -38, -73, -4, -54, -100, 103, 41, -80, 119, 122, 6, -1, -63, 114, -5, -97, -102, -42, -72, -98, -100, -118, -107, -119, -72, 77, 54, -4, 95, -59, -43, 8, -94, 118, -69, -14, 70, 92, 19, -22, 39, 41, -12, 30, 70, 46, 94, 104, 121, 44, 10, 102, 115, 17, 50, -13, 3, -75, -102, -73, 42, -68, 75, -103, 14, -18, -108, -62, -128, -85, -65, -93, 85, 26, -125, 93, -92, 4, 2, 44, 67, -128, -127, 19, -104, -77, -15, 35, -17, 121, 3, 48, -69, -62, 34, 11, 103, 8, -87, -123, -34, -64, -36, 35, 94, -100, 108, -39, -32, 55, -95, -15, 45, 79, 52, -79, -27, 119, -119, -123, -2, 62, 113, -21, 17, -98, -21, -9, 120, -44, -65, 61, 6, -124, -120, 18, -23, -20, 65, -76, -41, -34, 3, 63, 94, 116, -49, -114, -108, -103, -20, -53, 26, -49, 2, 22, 16, 32, 13, -126, -21, -52, -4, -89, 51, 13, 77, -78, -47, -66, -2, -10, 113, -94, 44, 22, -68, -4, 94, 47, 106, -87, -34, -39, -61, 70, 38, -115, 10, 115, -9, -51, 78, -117, 73, -15, 92, 94, -96, -58, -12, 58, -121, 118, 64, -25, -70, -48, 115, -46, 77, 82, 122, 32, -77, -23, -9, 121, -5, -123, -104, 44, -30};
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
    msg.setTimeStamp(0.212000732983);
    msg.setSource(30461U);
    msg.setSourceEntity(253U);
    msg.setDestination(32661U);
    msg.setDestinationEntity(42U);
    msg.locale.assign("IRNBHEQBDBCLKQSFCXQRJEWOCDQTYBACBVLRSVZGJNEULEEDJGKRFXGISHQAITRFMSGYWXSHKZSBTXRUDKZTYPUEIVYKNPZKUPNTUEOMJWVXUQLLMZAQYKFPDXTWDZRKSINQNOMVMRPHGDZMPPMAFOLOELKRLHJXQVWFYXIHTHGCYWWTCZ");
    const char tmp_msg_0[] = {-81, 95, -47, 85, -81, -65, -108, 34, -80, 5, 82, 15, 37, 15, -80, -110, -124, -86, 8, 112, 52, -44, -23, 18, -30, -64, -98, -76, 126, -56, 109, 33, -10, 90, -46, -47, 28, 119, -59, -4, 57, -66, 85, -1, -97, 42, 55, -22, 51, -123, -66, -122, -48, -107, -58, 115, -99, -43, -23, -94, -20, -93, -77, 87, -121, 86, 91, 102, -23, -84, 112, -100, -28, 94, 9, -112, -44, -73, -52, -100, -81, 1, 62, -23, -72, 44, 1, 52, -8, 35, -3, -59, 29, -28, -8, -53, -5, -57, -60, 95, 68, -78, 40, -51, -3, 38, -8, 50, -41};
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
    msg.setTimeStamp(0.473435107577);
    msg.setSource(17578U);
    msg.setSourceEntity(104U);
    msg.setDestination(26376U);
    msg.setDestinationEntity(182U);
    msg.locale.assign("BSCGORYJYVRAKMIFUMEZGKCNVBQBSUQKWOOWZGBJPIWAAETFEQSZRGSFHWFXSFJP");
    const char tmp_msg_0[] = {-98, -86, 20, -108, -92, 66, 123, -19, 98, -77, 90, 49, -126, -91, 57, 15, 84, -123, 102, 71, 99, -1, 30, 40, -111, -56, -23, -54, 68, 44, 67, -60, -68, -69, 42, 82, 58, -16, -111, -83, 107, 105, 67, 35, -120, -36, 112, -72, -123, -68, 106, -24, -7, 88, -22, 16, -33, -9, 44, -29, -21, 36, 2, 90, 45, -34, 32, 107, -68, -22, 72, -4, 101, -30, 14, 76, 84, -91, -21, 93, 79, 6, 15, -32, 59, 114, 73, 7, -71, -6, 72, 38, -3, -88, -128, 20, -81, -90, -78, -32, -9, 109, 51, 55, 123, 88, -98, 44, -112, 115, -41, -92, -50, -86, 84, 77, -113, -24, 44, -69, 98, -117, 106, -95, 53, -79, -96, 49, 53, 124, -37, -34, -59, 76, 85, 105, 112, 97, -38, 11, 106, 89, 22, 25, -49, 58, -124, -7, 36, 91, -103, 41, -58, 22, 93, -66, 108, 99, -11, 9, 40, -44, 87, 72, -127, -85, -94, -83, 63, -109, 6, -9, -14, -13, -110, -18, 7, -38, -61, 35, 89, 76, -109, -2, -57, -106, 94, -83, 71, 56, 31, -15, -84, 20, 114, 102, -112, 20, 54, 60, 19, -51, -35, -95, -51, -44, -76, 32, -97, -103, -107, -40, -40};
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
    msg.setTimeStamp(0.410889015253);
    msg.setSource(10505U);
    msg.setSourceEntity(93U);
    msg.setDestination(61590U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.310243699724);
    msg.setSource(58746U);
    msg.setSourceEntity(127U);
    msg.setDestination(10916U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.682514455146);
    msg.setSource(57878U);
    msg.setSourceEntity(146U);
    msg.setDestination(24214U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.691655590323);
    msg.setSource(43786U);
    msg.setSourceEntity(153U);
    msg.setDestination(5775U);
    msg.setDestinationEntity(37U);
    msg.camid = 190U;
    msg.x = 49814U;
    msg.y = 53157U;

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
    msg.setTimeStamp(0.0218994285137);
    msg.setSource(36379U);
    msg.setSourceEntity(215U);
    msg.setDestination(50706U);
    msg.setDestinationEntity(236U);
    msg.camid = 54U;
    msg.x = 20529U;
    msg.y = 2396U;

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
    msg.setTimeStamp(0.828999754277);
    msg.setSource(57836U);
    msg.setSourceEntity(101U);
    msg.setDestination(7738U);
    msg.setDestinationEntity(236U);
    msg.camid = 165U;
    msg.x = 51358U;
    msg.y = 48556U;

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
    msg.setTimeStamp(0.330351666962);
    msg.setSource(62702U);
    msg.setSourceEntity(105U);
    msg.setDestination(21448U);
    msg.setDestinationEntity(166U);
    msg.camid = 72U;
    msg.x = 22352U;
    msg.y = 12867U;

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
    msg.setTimeStamp(0.0311221244043);
    msg.setSource(37863U);
    msg.setSourceEntity(104U);
    msg.setDestination(1593U);
    msg.setDestinationEntity(221U);
    msg.camid = 191U;
    msg.x = 18218U;
    msg.y = 7151U;

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
    msg.setTimeStamp(0.130729349268);
    msg.setSource(51679U);
    msg.setSourceEntity(169U);
    msg.setDestination(65519U);
    msg.setDestinationEntity(175U);
    msg.camid = 50U;
    msg.x = 9377U;
    msg.y = 39635U;

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
    msg.setTimeStamp(0.0318249683386);
    msg.setSource(36832U);
    msg.setSourceEntity(226U);
    msg.setDestination(13616U);
    msg.setDestinationEntity(79U);
    msg.tracking = 76U;
    msg.lat = 0.268982040975;
    msg.lon = 0.863890066031;
    msg.x = 0.289394874943;
    msg.y = 0.486939150287;
    msg.z = 0.581078898893;

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
    msg.setTimeStamp(0.814435522248);
    msg.setSource(39372U);
    msg.setSourceEntity(51U);
    msg.setDestination(53604U);
    msg.setDestinationEntity(232U);
    msg.tracking = 23U;
    msg.lat = 0.892719358671;
    msg.lon = 0.769829559461;
    msg.x = 0.96133582279;
    msg.y = 0.573751515971;
    msg.z = 0.981866546475;

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
    msg.setTimeStamp(0.130591827075);
    msg.setSource(8514U);
    msg.setSourceEntity(53U);
    msg.setDestination(57394U);
    msg.setDestinationEntity(224U);
    msg.tracking = 240U;
    msg.lat = 0.691154875957;
    msg.lon = 0.975616842376;
    msg.x = 0.666508130435;
    msg.y = 0.0742859542734;
    msg.z = 0.602406794987;

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
    msg.setTimeStamp(0.197975774394);
    msg.setSource(38964U);
    msg.setSourceEntity(84U);
    msg.setDestination(25928U);
    msg.setDestinationEntity(104U);
    msg.target.assign("XAGQMSOADQUKMZWXOSZPJTREEHWSZDGOCLMBAUZYFDGBLWOATQNFPINZMBGHTYVTSRECFXHWCPGLYLHVBCKZRSVXJVDBKUVIJRNMFDSFSTEHLPYKOTCTEQJNUYLQVBWHHIQAOJHIAJNDNASSLUNUNDJMGDNEJCMXVPGEXKXCUZRKCGBGRASK");
    msg.lbearing = 0.847811059935;
    msg.lelevation = 0.633245698885;
    msg.bearing = 0.848301228665;
    msg.elevation = 0.61042185497;
    msg.phi = 0.791817334758;
    msg.theta = 0.684766325059;
    msg.psi = 0.444789651887;
    msg.accuracy = 0.775231874593;

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
    msg.setTimeStamp(0.627098570361);
    msg.setSource(9930U);
    msg.setSourceEntity(224U);
    msg.setDestination(20860U);
    msg.setDestinationEntity(99U);
    msg.target.assign("MVAFEGCTJXPXBGKZNGYVZFQIVRFTOSXOUXOZDGLBHOMEHOBNGTEPPWQMWYMVCDJXLMBVZUBJARWWRMFOUPINQLJOOSKNGISSRKIFWXWDZGDIEVFKEDXHAJBWAGVSDMMBSFTCQPEGJTCDYCAYLCJRDUOVCIOBATWIWZZJHUFNHKUTAEUDZISKMAJSZYBVPFGCNXHHUBLZLLEXQRUNQYCSWQETYRYCDSLRATXLTEHK");
    msg.lbearing = 0.262825389564;
    msg.lelevation = 0.0291676791267;
    msg.bearing = 0.755166608261;
    msg.elevation = 0.16879817682;
    msg.phi = 0.546219282816;
    msg.theta = 0.0910578922342;
    msg.psi = 0.651543713742;
    msg.accuracy = 0.191455178693;

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
    msg.setTimeStamp(0.845044726069);
    msg.setSource(9640U);
    msg.setSourceEntity(46U);
    msg.setDestination(33258U);
    msg.setDestinationEntity(103U);
    msg.target.assign("QZTIYKLUDJLOWGZTBBVRUICIJILRTMLYOBHCEKKGCHJFDWJJDYZIXGBVWRZRCXKZFFYDGAXRHGDCOSALWDJEOIPEQNIQCNVYXEZKJRQFSPQQNCOXLAMMGUVKPDBUEMWQTUXVOFGFXIBWYMTNSEJVUCYFHENEAZRVHYRDMSTPSTWDUALEQELHTOAPCMFNALIPHPUNGSYBWVHAJTQFDNKXVZPIUBKZGFCKMAWPJ");
    msg.lbearing = 0.0911604895039;
    msg.lelevation = 0.682558205229;
    msg.bearing = 0.352039886759;
    msg.elevation = 0.941047618725;
    msg.phi = 0.614443669038;
    msg.theta = 0.259455520109;
    msg.psi = 0.319937052341;
    msg.accuracy = 0.869007718682;

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
    msg.setTimeStamp(0.0236277579213);
    msg.setSource(44310U);
    msg.setSourceEntity(198U);
    msg.setDestination(3812U);
    msg.setDestinationEntity(12U);
    msg.target.assign("KXMQPBBSIPKEOEOXWRHEKFXHUUVWKYBAKTJWJTDJRIKDEGXEKDSXOPSUUGSHCLKMPOIYCAGPJJXAXRRGRNEBGFQZIYXJDTLNMOYPWCFSHIYQVKHFYJOVRLMYIVLOXHBCNTD");
    msg.x = 0.113545747385;
    msg.y = 0.48005529908;
    msg.z = 0.234426839199;
    msg.n = 0.392615564777;
    msg.e = 0.601986468508;
    msg.d = 0.948596198898;
    msg.phi = 0.255556761715;
    msg.theta = 0.801768146987;
    msg.psi = 0.564360588096;
    msg.accuracy = 0.968576913762;

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
    msg.setTimeStamp(0.576732845469);
    msg.setSource(270U);
    msg.setSourceEntity(6U);
    msg.setDestination(2704U);
    msg.setDestinationEntity(71U);
    msg.target.assign("ENNLNUIZZXFLYXTAEUXHVMCWIVCSJIDCWKBEMUNSJYUXHLPOPJNUGDZJQHJOEZWCQKGFDCRYWFFTGFHTLMDMWKLHEMXSRRCZAGZKEVUTQGLNVRTFQEL");
    msg.x = 0.357637270139;
    msg.y = 0.879669946591;
    msg.z = 0.470273646468;
    msg.n = 0.463282810809;
    msg.e = 0.541970979257;
    msg.d = 0.190623877334;
    msg.phi = 0.42009512422;
    msg.theta = 0.127888968937;
    msg.psi = 0.671022350029;
    msg.accuracy = 0.170763338949;

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
    msg.setTimeStamp(0.12050305358);
    msg.setSource(42871U);
    msg.setSourceEntity(1U);
    msg.setDestination(7114U);
    msg.setDestinationEntity(187U);
    msg.target.assign("RWHZCDJLYNXSHXSWKHPEQTPNARDUYDXSHAIOTDCTIEYKTILHXKQEGLQEOYMPSMNDHJIOBIHRDMNUKFQUMQKRKELUZNKYSYTPINXJPRYQXWOLSFWGI");
    msg.x = 0.467199190457;
    msg.y = 0.444540763754;
    msg.z = 0.0342986451776;
    msg.n = 0.495969968471;
    msg.e = 0.247083916411;
    msg.d = 0.917431182353;
    msg.phi = 0.261221388478;
    msg.theta = 0.289412767288;
    msg.psi = 0.351208366476;
    msg.accuracy = 0.636487034159;

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
    msg.setTimeStamp(0.452412469339);
    msg.setSource(54407U);
    msg.setSourceEntity(94U);
    msg.setDestination(33769U);
    msg.setDestinationEntity(98U);
    msg.target.assign("OIKHHZLPGZXDNKFAY");
    msg.lat = 0.689706100467;
    msg.lon = 0.05686189234;
    msg.z_units = 13U;
    msg.z = 0.573805549286;
    msg.accuracy = 0.935093786926;

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
    msg.setTimeStamp(0.224598745182);
    msg.setSource(58519U);
    msg.setSourceEntity(45U);
    msg.setDestination(27982U);
    msg.setDestinationEntity(42U);
    msg.target.assign("WOWJRLOGDNYPQUGHHWOCJBAUIIUFKJOCSPGSZBFUEFIMGDYUSRRIDIFZNOGLBVKLNDCKPACFQMEWTUPXVUVILSVDCNXNVETQPVDZYWRSLAMQWMWKCSQTESZORJAXZJQCJTGNYKOYSYXXXABOFVNEPHPGTREQYZFGTEB");
    msg.lat = 0.319390630262;
    msg.lon = 0.688132353478;
    msg.z_units = 203U;
    msg.z = 0.486886955633;
    msg.accuracy = 0.643863178675;

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
    msg.setTimeStamp(0.36724484797);
    msg.setSource(21479U);
    msg.setSourceEntity(225U);
    msg.setDestination(37505U);
    msg.setDestinationEntity(116U);
    msg.target.assign("DOVCPRWZCNUPWLJEFXTZUSQLRMERPFMXMUJCVGGXRYXJSNTMSSAJZXOBBNUWIY");
    msg.lat = 0.686253244291;
    msg.lon = 0.985420717583;
    msg.z_units = 205U;
    msg.z = 0.215675563415;
    msg.accuracy = 0.071810471722;

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
    msg.setTimeStamp(0.296847881612);
    msg.setSource(12025U);
    msg.setSourceEntity(187U);
    msg.setDestination(5615U);
    msg.setDestinationEntity(109U);
    msg.name.assign("HPBSNFAPRPGIVSFJGWJVHWTYDLVECUXILMEHUONFGCNTRYNGSVKDZBUEEDFARDLIBQYUXQWKLRWSDZLKCLIAGOUGGPCPHEAHIBGZFSQL");
    msg.lat = 0.237645826094;
    msg.lon = 0.231692785737;
    msg.z = 0.308884559642;
    msg.z_units = 56U;

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
    msg.setTimeStamp(0.4217451078);
    msg.setSource(12666U);
    msg.setSourceEntity(30U);
    msg.setDestination(63451U);
    msg.setDestinationEntity(94U);
    msg.name.assign("UAUBQAFQPJNWSCEZOQGNKWSRUAGHODSLVTLTSVEQZZWQWGWJIPFXSPDBPZXHGRHGXOTAMYYMDANCJFRLXVDUTUEVZEYRAZENKLKKDMAFPRTSMPOINBJBEWVXPPVYZUKTXUJNYCYFOHQHSLKCXNDGGQYHDKYMAVVICFBHXKDHBCJAMIBOMPIWGHLWLFRSTLMKFBZVJRNEHOIVBLQDPGIRZXR");
    msg.lat = 0.890186359505;
    msg.lon = 0.340845138536;
    msg.z = 0.37876762269;
    msg.z_units = 138U;

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
    msg.setTimeStamp(0.568129112473);
    msg.setSource(61878U);
    msg.setSourceEntity(236U);
    msg.setDestination(31484U);
    msg.setDestinationEntity(19U);
    msg.name.assign("VXRBZHAEOMAKVALFHJJHMVJCINEGTEOTRPPQNBLUPYEMKUBTMDKYLHXIPSNSCANHQWSKFEUBHVXTFGMEAOLPCYDDMQGZJRRTHFWCQYUVAXCNKPWTSO");
    msg.lat = 0.488461399169;
    msg.lon = 0.028192744055;
    msg.z = 0.93674058877;
    msg.z_units = 135U;

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
    msg.setTimeStamp(0.602937867037);
    msg.setSource(49314U);
    msg.setSourceEntity(105U);
    msg.setDestination(57253U);
    msg.setDestinationEntity(78U);
    msg.op = 85U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("STPYGMUKAHXMJHLPBTVWCBANFMPZFCCQUJSKMTWRVJPCDXWQEEOEDQFYXLDQQKJQYBBSBHKXRZFEGFXOYPDOHAGPICYIDVIGLESNGPYZLEXWQTDKAKRGRHVUCZERNOOARYIAKICVJATUUHAZIFDYLGWVIFUURHTKSJWSRNCUTRYKXNIZEOWHQADNSNBMLATZSESRQNMBGMDJIPLZTQMBBMKTPENFLXVJWUJOOYVFXVSOLL");
    tmp_msg_0.lat = 0.841623515745;
    tmp_msg_0.lon = 0.652494528763;
    tmp_msg_0.z = 0.773001658921;
    tmp_msg_0.z_units = 159U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.65558418217);
    msg.setSource(20938U);
    msg.setSourceEntity(231U);
    msg.setDestination(38879U);
    msg.setDestinationEntity(218U);
    msg.op = 225U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("BLRAXJKQZWHAYXNHWOACWVDCPUNZYCKIFKZOXEUVPBJAGCREOMADEHNMJOVBGJGYOAKJEWQEGVNVRQASQVTXWJPWPURSFACIANVJRDEPXTGIDYHILKTWYHRBRNSHXBUHXYIDFSWTAYQKMKUMPZJSVMDLFVFSPBTBOLMCHKT");
    tmp_msg_0.lat = 0.892451320351;
    tmp_msg_0.lon = 0.0925974237373;
    tmp_msg_0.z = 0.977932259793;
    tmp_msg_0.z_units = 202U;
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
    msg.setTimeStamp(0.381939075266);
    msg.setSource(61282U);
    msg.setSourceEntity(121U);
    msg.setDestination(64129U);
    msg.setDestinationEntity(241U);
    msg.op = 121U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("PSBFCGGHSJHHQKACUBTHLGHZJQVIVMPXFOJUOSBMEWEZISVWDYMXPDQWQNRCVPNGXUYNOWQGEZKDKQLTHULNFCPTYKQKERYCDLLEADICPFTISXEXAAMALMIVKRWVVIZDBRUHFRUQIUGBOKVWZEHLZYIITFOWUVAZTKBFPOMUJSXH");
    tmp_msg_0.lat = 0.510586433041;
    tmp_msg_0.lon = 0.124817592674;
    tmp_msg_0.z = 0.628508048125;
    tmp_msg_0.z_units = 44U;
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
    msg.setTimeStamp(0.268440523945);
    msg.setSource(36819U);
    msg.setSourceEntity(41U);
    msg.setDestination(13145U);
    msg.setDestinationEntity(83U);
    msg.value = 0.989669293691;
    msg.type = 74U;

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
    msg.setTimeStamp(0.749212521295);
    msg.setSource(29132U);
    msg.setSourceEntity(173U);
    msg.setDestination(64660U);
    msg.setDestinationEntity(228U);
    msg.value = 0.404564905532;
    msg.type = 147U;

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
    msg.setTimeStamp(0.249633559185);
    msg.setSource(14747U);
    msg.setSourceEntity(194U);
    msg.setDestination(15733U);
    msg.setDestinationEntity(126U);
    msg.value = 0.573360485669;
    msg.type = 149U;

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
    msg.setTimeStamp(0.2307817451);
    msg.setSource(57683U);
    msg.setSourceEntity(134U);
    msg.setDestination(8488U);
    msg.setDestinationEntity(224U);
    msg.value = 0.570639200693;

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
    msg.setTimeStamp(0.0336855143581);
    msg.setSource(6208U);
    msg.setSourceEntity(230U);
    msg.setDestination(57319U);
    msg.setDestinationEntity(182U);
    msg.value = 0.453702131283;

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
    msg.setTimeStamp(0.375892020838);
    msg.setSource(4957U);
    msg.setSourceEntity(62U);
    msg.setDestination(25191U);
    msg.setDestinationEntity(1U);
    msg.value = 0.250906104334;

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
    msg.setTimeStamp(0.781888767723);
    msg.setSource(24554U);
    msg.setSourceEntity(248U);
    msg.setDestination(33099U);
    msg.setDestinationEntity(10U);
    msg.timestamp_last_service = 0.23936690479;
    msg.time_next_service = 0.671069584345;
    msg.time_motor_next_service = 0.159395448084;
    msg.time_idle_ground = 0.0445465969576;
    msg.time_idle_air = 0.0541246990098;
    msg.time_idle_water = 0.0449561917283;
    msg.time_idle_underwater = 0.277273266084;
    msg.time_idle_unknown = 0.109813584667;
    msg.time_motor_ground = 0.285917753774;
    msg.time_motor_air = 0.44966042201;
    msg.time_motor_water = 0.807705357292;
    msg.time_motor_underwater = 0.146378535556;
    msg.time_motor_unknown = 0.269581603837;
    msg.rpm_min = 24131;
    msg.rpm_max = -21301;
    msg.depth_max = 0.225275418918;

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
    msg.setTimeStamp(0.191285557819);
    msg.setSource(37153U);
    msg.setSourceEntity(103U);
    msg.setDestination(14527U);
    msg.setDestinationEntity(253U);
    msg.timestamp_last_service = 0.198385163503;
    msg.time_next_service = 0.389056243341;
    msg.time_motor_next_service = 0.630572059524;
    msg.time_idle_ground = 0.618244932492;
    msg.time_idle_air = 0.782966133572;
    msg.time_idle_water = 0.303330026651;
    msg.time_idle_underwater = 0.881795016261;
    msg.time_idle_unknown = 0.15021073625;
    msg.time_motor_ground = 0.805593101719;
    msg.time_motor_air = 0.921191764038;
    msg.time_motor_water = 0.925896044476;
    msg.time_motor_underwater = 0.853710692637;
    msg.time_motor_unknown = 0.639257165483;
    msg.rpm_min = -29249;
    msg.rpm_max = 11070;
    msg.depth_max = 0.403170135015;

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
    msg.setTimeStamp(0.759682221852);
    msg.setSource(1527U);
    msg.setSourceEntity(136U);
    msg.setDestination(13855U);
    msg.setDestinationEntity(82U);
    msg.timestamp_last_service = 0.603730711573;
    msg.time_next_service = 0.38658816155;
    msg.time_motor_next_service = 0.994485104076;
    msg.time_idle_ground = 0.143022761261;
    msg.time_idle_air = 0.395705796036;
    msg.time_idle_water = 0.494028186121;
    msg.time_idle_underwater = 0.254491525218;
    msg.time_idle_unknown = 0.0150362750973;
    msg.time_motor_ground = 0.954451420078;
    msg.time_motor_air = 0.208483892078;
    msg.time_motor_water = 0.433994311271;
    msg.time_motor_underwater = 0.446354100915;
    msg.time_motor_unknown = 0.655549930907;
    msg.rpm_min = 22678;
    msg.rpm_max = -30084;
    msg.depth_max = 0.253460936973;

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
    msg.setTimeStamp(0.690369915488);
    msg.setSource(21652U);
    msg.setSourceEntity(81U);
    msg.setDestination(14629U);
    msg.setDestinationEntity(121U);
    msg.severity = 251U;
    msg.text.assign("JPJVAOYPEONLIEFTFWBNKSHQGKDELHDZCAUXYXAYFNDVDZYWTVCAVXIHIBQXBBRPPQCKYLNLZJUOIQHLSCFWKAYFVZUTMTRUTESSINWPUMXCBIXGPFRZTHPXLQNQHMFEZTWAQKODMIZKLJYLUCDVELCTWCN");

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
    msg.setTimeStamp(0.636794619685);
    msg.setSource(428U);
    msg.setSourceEntity(112U);
    msg.setDestination(57256U);
    msg.setDestinationEntity(241U);
    msg.severity = 186U;
    msg.text.assign("HAXNISPFZVNDYOYHJJPTKLNYAWKLPGUBENKCUTVABVQFRQGSUYUHRDPFXYRCTLZJUUUUTZFSMMEVZUVLKTOAYSFOEMWSHYXTDGGMTCIRUYZSXJOKSAOTJI");

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
    msg.setTimeStamp(0.883681140306);
    msg.setSource(37197U);
    msg.setSourceEntity(48U);
    msg.setDestination(15737U);
    msg.setDestinationEntity(106U);
    msg.severity = 158U;
    msg.text.assign("GDQZMHBYQPXADRRTIMYUSPYKLTLOKVLCEHGKJDJORTNEYIFFTCQPWYSNTZKNIUSEJGHEPTJASJAYSCSLXUZQTRFTNWZZMVWSMVIZKWXROOAXQSQDBJO");

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
    msg.setTimeStamp(0.38825664264);
    msg.setSource(45661U);
    msg.setSourceEntity(239U);
    msg.setDestination(62867U);
    msg.setDestinationEntity(117U);
    msg.channel = -89;
    msg.value = 91452337;
    msg.gain = 210U;

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
    msg.setTimeStamp(0.233575758642);
    msg.setSource(62965U);
    msg.setSourceEntity(188U);
    msg.setDestination(35410U);
    msg.setDestinationEntity(152U);
    msg.channel = -114;
    msg.value = 1873470066;
    msg.gain = 39U;

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
    msg.setTimeStamp(0.436694459028);
    msg.setSource(57146U);
    msg.setSourceEntity(21U);
    msg.setDestination(6418U);
    msg.setDestinationEntity(34U);
    msg.channel = 120;
    msg.value = -865180586;
    msg.gain = 144U;

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
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.307054809967);
    msg.setSource(36062U);
    msg.setSourceEntity(193U);
    msg.setDestination(53839U);
    msg.setDestinationEntity(92U);
    msg.ch01 = 0.641443162364;
    msg.ch02 = 0.810158395803;
    msg.ch03 = 0.210868234318;
    msg.ch04 = 0.332561183783;
    msg.ch05 = 0.639314043072;
    msg.ch06 = 0.290728635341;
    msg.ch07 = 0.232246837546;
    msg.ch08 = 0.109461945672;
    msg.ch09 = 0.619480424073;
    msg.ch10 = 0.254758179358;
    msg.ch11 = 0.841411886271;
    msg.ch12 = 0.790413057872;
    msg.ch13 = 0.218215126144;
    msg.ch14 = 0.940024211604;
    msg.ch15 = 0.856485654309;
    msg.ch16 = 0.047359092224;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.482809523196);
    msg.setSource(43041U);
    msg.setSourceEntity(206U);
    msg.setDestination(33050U);
    msg.setDestinationEntity(116U);
    msg.ch01 = 0.305411654759;
    msg.ch02 = 0.402201370595;
    msg.ch03 = 0.0705668171524;
    msg.ch04 = 0.224799501538;
    msg.ch05 = 0.850914794612;
    msg.ch06 = 0.90018225916;
    msg.ch07 = 0.355190387499;
    msg.ch08 = 0.0606131235436;
    msg.ch09 = 0.867330689007;
    msg.ch10 = 0.463588910563;
    msg.ch11 = 0.483123766167;
    msg.ch12 = 0.697239324468;
    msg.ch13 = 0.78288659319;
    msg.ch14 = 0.0254699321996;
    msg.ch15 = 0.0821609762457;
    msg.ch16 = 0.116502212308;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.219590462317);
    msg.setSource(16104U);
    msg.setSourceEntity(61U);
    msg.setDestination(28767U);
    msg.setDestinationEntity(186U);
    msg.ch01 = 0.220678929443;
    msg.ch02 = 0.499843917593;
    msg.ch03 = 0.699284615252;
    msg.ch04 = 0.0165912537566;
    msg.ch05 = 0.453694743608;
    msg.ch06 = 0.296713587295;
    msg.ch07 = 0.64733211234;
    msg.ch08 = 0.966498827118;
    msg.ch09 = 0.282000842668;
    msg.ch10 = 0.101207868776;
    msg.ch11 = 0.776623108976;
    msg.ch12 = 0.643232517695;
    msg.ch13 = 0.268354715311;
    msg.ch14 = 0.0466647917205;
    msg.ch15 = 0.876710766088;
    msg.ch16 = 0.0969934280075;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.503684879733);
    msg.setSource(32058U);
    msg.setSourceEntity(55U);
    msg.setDestination(47241U);
    msg.setDestinationEntity(37U);
    msg.value = 0.708510650954;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.254621953117);
    msg.setSource(56784U);
    msg.setSourceEntity(121U);
    msg.setDestination(52888U);
    msg.setDestinationEntity(237U);
    msg.value = 0.652479337784;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.731687775467);
    msg.setSource(58786U);
    msg.setSourceEntity(178U);
    msg.setDestination(34887U);
    msg.setDestinationEntity(89U);
    msg.value = 0.664818695765;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.345901840262);
    msg.setSource(62663U);
    msg.setSourceEntity(221U);
    msg.setDestination(40476U);
    msg.setDestinationEntity(232U);
    msg.op = 149U;
    msg.lat = 0.949255015618;
    msg.lon = 0.456391005276;
    msg.height = 0.108123728953;
    msg.depth = 0.121463527207;
    msg.alt = 0.758351965028;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.370862189311);
    msg.setSource(52679U);
    msg.setSourceEntity(242U);
    msg.setDestination(27649U);
    msg.setDestinationEntity(35U);
    msg.op = 51U;
    msg.lat = 0.124018443533;
    msg.lon = 0.814910852271;
    msg.height = 0.304929897563;
    msg.depth = 0.741492848942;
    msg.alt = 0.297732147057;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.327247727825);
    msg.setSource(55519U);
    msg.setSourceEntity(147U);
    msg.setDestination(14380U);
    msg.setDestinationEntity(192U);
    msg.op = 85U;
    msg.lat = 0.530411619731;
    msg.lon = 0.925697292424;
    msg.height = 0.195853241112;
    msg.depth = 0.321897460616;
    msg.alt = 0.640063047904;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExpandingSquare msg;
    msg.setTimeStamp(0.946420691555);
    msg.setSource(15250U);
    msg.setSourceEntity(191U);
    msg.setDestination(56717U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.976298985724;
    msg.lon = 0.297000543046;
    msg.z = 0.5073605987;
    msg.z_units = 248U;
    msg.speed = 0.900309039009;
    msg.bearing = 0.602234171658;
    msg.width = 0.363959089335;
    msg.length = 0.940291990992;
    msg.flags = 223U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExpandingSquare #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExpandingSquare msg;
    msg.setTimeStamp(0.97742841346);
    msg.setSource(57905U);
    msg.setSourceEntity(221U);
    msg.setDestination(57676U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.331814346862;
    msg.lon = 0.285701134451;
    msg.z = 0.744742071865;
    msg.z_units = 34U;
    msg.speed = 0.236369532991;
    msg.bearing = 0.197117494183;
    msg.width = 0.443848941996;
    msg.length = 0.482049176607;
    msg.flags = 35U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExpandingSquare #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExpandingSquare msg;
    msg.setTimeStamp(0.0449996497805);
    msg.setSource(15229U);
    msg.setSourceEntity(148U);
    msg.setDestination(47518U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.548933976182;
    msg.lon = 0.664018712329;
    msg.z = 0.379732389096;
    msg.z_units = 209U;
    msg.speed = 0.749860294024;
    msg.bearing = 0.981909385648;
    msg.width = 0.0125271111546;
    msg.length = 0.391305867317;
    msg.flags = 87U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExpandingSquare #2", msg == *msg_d);
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
