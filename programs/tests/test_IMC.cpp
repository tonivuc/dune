//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 0bb52ca2c789909fdc0b69126b04af22                            *
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
    msg.setTimeStamp(0.205112626375);
    msg.setSource(61581U);
    msg.setSourceEntity(79U);
    msg.setDestination(27850U);
    msg.setDestinationEntity(116U);
    msg.state = 149U;
    msg.flags = 169U;
    msg.description.assign("RVJIQYMNXJYGAOGKNHPHEYASOOLXRPAVEKZKLTEDWMSKWUIDBXJUBDLEIPETFDTLQJXFFPYMTIIRJCGLZHSSABBNRTBBQUNXRHUAFDYZPFIOSOHRCVWEDHIOHPQOHSBJMCQTKBYLPUXTHFIGVCIPGKCZWWDGACRYDWYZPAJZZC");

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
    msg.setTimeStamp(0.276372361277);
    msg.setSource(42526U);
    msg.setSourceEntity(14U);
    msg.setDestination(32737U);
    msg.setDestinationEntity(109U);
    msg.state = 56U;
    msg.flags = 59U;
    msg.description.assign("HLUUPUEIJJAKMCERBDGVKOUFCCJCKZBJYGVURQKTDJHSHPAZGFOWVDQEKCQHELXOTQYYNODNQIFIZEXZUJLAHXZELGVRHMFGSXEGBFOSLQGI");

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
    msg.setTimeStamp(0.893174047288);
    msg.setSource(49663U);
    msg.setSourceEntity(131U);
    msg.setDestination(30908U);
    msg.setDestinationEntity(114U);
    msg.state = 164U;
    msg.flags = 119U;
    msg.description.assign("TPVSZVWCBOGHNGSHRTBQSUJREVVLJEYFLEICUEDZCFHGAKNHMJQGFRZSXLHBVMNNMJSVTCXFQREAGNSOEJUMPOJ");

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
    msg.setTimeStamp(0.347519573754);
    msg.setSource(38072U);
    msg.setSourceEntity(32U);
    msg.setDestination(57876U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.397242982884);
    msg.setSource(18768U);
    msg.setSourceEntity(76U);
    msg.setDestination(53192U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.0781086864712);
    msg.setSource(50413U);
    msg.setSourceEntity(146U);
    msg.setDestination(5903U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.818861534827);
    msg.setSource(16794U);
    msg.setSourceEntity(122U);
    msg.setDestination(20337U);
    msg.setDestinationEntity(152U);
    msg.id = 203U;
    msg.label.assign("HUGTIYTCLXXSJCZDLBFSPLDOROJVREGBMTBH");
    msg.component.assign("VSBTBZRAJRZZIPQRCKWUGELEHMAGIUTKJFXWCQVFXXFCYNSJBKNOGVOHSORCDCQLHLIOUWJVFXNTNRMMOZCUOKTLRAGWDENGEWQSNXBKAXFPBCRXSBLSMQSJHAFENRUWPAEAGSYBPSQZVZPPUUEOHJKGDMMVFDEEDYRFTAADZIXQHBMVKJLLIBYPQTHCUGLNQNGNAOUHWGKJIDYYOTPXCYVJMLSU");
    msg.act_time = 18545U;
    msg.deact_time = 14759U;

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
    msg.setTimeStamp(0.913653872313);
    msg.setSource(44971U);
    msg.setSourceEntity(191U);
    msg.setDestination(35387U);
    msg.setDestinationEntity(16U);
    msg.id = 168U;
    msg.label.assign("VNRMDTQCDMSOYPZRXJNVBITRQSOJWHCOAFWFFRXGGAVJHTVEBYWLFYQYOYPVDVTQSKZYMCCPWNGOIABGKXJLWPQSCDNXGCOSTEV");
    msg.component.assign("WDXMZAUNERDOTZMQCKIVNNIQDRJXWHLVHDDQWNBMPAUBBWFRGPAOZYBWXZOFPQPXYQDECSYEHKPMJSEJIPOTMBJVYUDBSCRUQCLLVFTCKNKIAXPJKNOBGEJZFXGRYYITILZZQZYPWVGMUGYEYVAFFKGRCUCVMBTVSTHTLGEKJPNJHAISSILGAAWESVKHJIHUOFHLNQCXOXGTUBLMERCCDWHDFAEPWSRDJWXANXTKVRMMFSFKUIQSLQ");
    msg.act_time = 16387U;
    msg.deact_time = 44850U;

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
    msg.setTimeStamp(0.186406687222);
    msg.setSource(17622U);
    msg.setSourceEntity(237U);
    msg.setDestination(13248U);
    msg.setDestinationEntity(22U);
    msg.id = 16U;
    msg.label.assign("EMEFWGDNLCENZKJQ");
    msg.component.assign("JNDXAKYONVABEJIWZCLASTQGPGBXBOLUSHOBKW");
    msg.act_time = 32036U;
    msg.deact_time = 43305U;

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
    msg.setTimeStamp(0.25421343685);
    msg.setSource(15114U);
    msg.setSourceEntity(182U);
    msg.setDestination(65261U);
    msg.setDestinationEntity(113U);
    msg.id = 139U;

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
    msg.setTimeStamp(0.895575276352);
    msg.setSource(41612U);
    msg.setSourceEntity(13U);
    msg.setDestination(33771U);
    msg.setDestinationEntity(132U);
    msg.id = 12U;

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
    msg.setTimeStamp(0.151832424854);
    msg.setSource(53046U);
    msg.setSourceEntity(230U);
    msg.setDestination(63309U);
    msg.setDestinationEntity(238U);
    msg.id = 210U;

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
    msg.setTimeStamp(0.733829468387);
    msg.setSource(16232U);
    msg.setSourceEntity(208U);
    msg.setDestination(39622U);
    msg.setDestinationEntity(7U);
    msg.op = 192U;
    msg.list.assign("FMHZCZPGDYPMDMBCJVELIRXPWZRSPJAZBZXYLGUEETHZCVKGUEFFMTOPCABQNXWZWRBHSWGGPOOKLSUHMFJVOVALCZHIJSXYTBPFNXKQKWMQGWSVLSDEHIQKYNKCGNIKBR");

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
    msg.setTimeStamp(0.407519220914);
    msg.setSource(37498U);
    msg.setSourceEntity(110U);
    msg.setDestination(3028U);
    msg.setDestinationEntity(225U);
    msg.op = 127U;
    msg.list.assign("ZEFHXBLDKFIJTYNZCESOUPIUSSKZMWDRUTGBNQWTMLPYEMXWZUTAMSOVBPLBJUAWAVVUDJILHYMMRTLOYBCQJNIURMDAPWBLSRVAGJLYBMVZXHCWLEEHUQPYJGOKHJDCTJPIOHENIREEAQCCXAWXNKOFTQNSUTRMDFNQPAGYAXXOQQMIVDGKYPEQGGZLOBDCCKNKFCVRFVZOFKFNQTXDBRGZVWRHJFAIPHNKZCDKSP");

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
    msg.setTimeStamp(0.466714324029);
    msg.setSource(27776U);
    msg.setSourceEntity(221U);
    msg.setDestination(19553U);
    msg.setDestinationEntity(47U);
    msg.op = 17U;
    msg.list.assign("LUBOTWXWFISBTSWEDHSSMNIAQKTIHOIPDXUEYABWJXHMFDLVHZXHAHGLXBZJJRCAQMOT");

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
    msg.setTimeStamp(0.0779781390192);
    msg.setSource(55424U);
    msg.setSourceEntity(77U);
    msg.setDestination(17779U);
    msg.setDestinationEntity(187U);
    msg.value = 177U;

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
    msg.setTimeStamp(0.86431457668);
    msg.setSource(59399U);
    msg.setSourceEntity(103U);
    msg.setDestination(34441U);
    msg.setDestinationEntity(164U);
    msg.value = 117U;

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
    msg.setTimeStamp(0.67925631324);
    msg.setSource(19910U);
    msg.setSourceEntity(236U);
    msg.setDestination(27069U);
    msg.setDestinationEntity(179U);
    msg.value = 103U;

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
    msg.setTimeStamp(0.24867405897);
    msg.setSource(53116U);
    msg.setSourceEntity(29U);
    msg.setDestination(59259U);
    msg.setDestinationEntity(213U);
    msg.consumer.assign("XCKBYCYUXCCEADLEEASRFAIMQREWZIFTSVKHLXRGNPMRBKHZIPOZTQTWJBAZGLSWLM");
    msg.message_id = 475U;

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
    msg.setTimeStamp(0.00275328904922);
    msg.setSource(14305U);
    msg.setSourceEntity(140U);
    msg.setDestination(60819U);
    msg.setDestinationEntity(121U);
    msg.consumer.assign("WROIOSATKDLKYYILYOFAPLYWWPALZCVRSMXISJUFVKKWNPPCDPNCJZQMWMHCSTWDDOZZNONRPDMINZVLZBQYLILRXUIXULPOMTEV");
    msg.message_id = 64817U;

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
    msg.setTimeStamp(0.296853240339);
    msg.setSource(44625U);
    msg.setSourceEntity(35U);
    msg.setDestination(2027U);
    msg.setDestinationEntity(248U);
    msg.consumer.assign("EZPYPPPKHGOBYTZINQAFCCBBDETHSYLNEWWLRFUSPOXBPJKINKGRVLURGORVMHYFRFPDIUOKMSNQTHPVJJXYSFXHAIZTMFCVXNQUAFMACXOIZEHXAUDGDITL");
    msg.message_id = 34083U;

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
    msg.setTimeStamp(0.502514947714);
    msg.setSource(38722U);
    msg.setSourceEntity(28U);
    msg.setDestination(61281U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.330818948082);
    msg.setSource(18539U);
    msg.setSourceEntity(29U);
    msg.setDestination(34459U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.0368178461168);
    msg.setSource(38631U);
    msg.setSourceEntity(205U);
    msg.setDestination(44666U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.692062965195);
    msg.setSource(12288U);
    msg.setSourceEntity(220U);
    msg.setDestination(29885U);
    msg.setDestinationEntity(67U);
    msg.op = 230U;

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
    msg.setTimeStamp(0.10290151987);
    msg.setSource(28322U);
    msg.setSourceEntity(107U);
    msg.setDestination(32971U);
    msg.setDestinationEntity(31U);
    msg.op = 228U;

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
    msg.setTimeStamp(0.180192354137);
    msg.setSource(55752U);
    msg.setSourceEntity(28U);
    msg.setDestination(56190U);
    msg.setDestinationEntity(184U);
    msg.op = 89U;

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
    msg.setTimeStamp(0.238857301382);
    msg.setSource(38804U);
    msg.setSourceEntity(80U);
    msg.setDestination(42007U);
    msg.setDestinationEntity(248U);
    msg.total_steps = 52U;
    msg.step_number = 70U;
    msg.step.assign("BBEBQPUSZSYUFASUNIRBPRJRDTKROUURVEAWTQUJFTHGMJPCOBNQOICCOVYKVOQLJWKFPPLTSTOPZQUOMCGKPKUVSZDVSCIGGOJXKHAWRXEKDBKNOAVHYXVTDZFWGFCXBGEIGQHSXNOZLMMZXAEAWHNNPCQTJMVLIHTXSHQMWARSDBEIUZYDFCHETFIGYIXS");
    msg.flags = 42U;

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
    msg.setTimeStamp(0.478982100239);
    msg.setSource(17508U);
    msg.setSourceEntity(80U);
    msg.setDestination(910U);
    msg.setDestinationEntity(57U);
    msg.total_steps = 213U;
    msg.step_number = 152U;
    msg.step.assign("SOREMWWJCKEKJFSWYGANQOHHDFLPHCUZXWRDYRGNFBNHZUMQHJSPVPPQOZILMMHLBPKVDMQOKSXDXOVCRBJOBOGUORMYLBJVYXFYAMHBNLWZNNWPFWOPVIJCAYCSLEWEKRZQTSNTVBZIUTYUIGG");
    msg.flags = 198U;

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
    msg.setTimeStamp(0.800653215949);
    msg.setSource(63130U);
    msg.setSourceEntity(251U);
    msg.setDestination(31266U);
    msg.setDestinationEntity(192U);
    msg.total_steps = 39U;
    msg.step_number = 119U;
    msg.step.assign("IBEBGWYGUZZWNOXLMPDHZKXLITZWHWIANGHFUOLAYIDKELESYUIDOIMSMCHYMGQHCJRPVSXHYEPZGBLDAQBSTVVIHHPOJOURQYQVWLNYWXXCEGCOCWDEZDUITNKZQFOSMTJBXRWHVCGTVDRVSVTPKFGBUPJMNUFKPVTMUWYCLFMRZNJDJKTICEWKSEJEPNFBLATGXJAEPFQASLXDRARKHGCJABARO");
    msg.flags = 146U;

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
    msg.setTimeStamp(0.603465174471);
    msg.setSource(53480U);
    msg.setSourceEntity(29U);
    msg.setDestination(51843U);
    msg.setDestinationEntity(12U);
    msg.state = 120U;
    msg.error.assign("GNHGLABTVCSKQT");

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
    msg.setTimeStamp(0.550853102741);
    msg.setSource(38252U);
    msg.setSourceEntity(246U);
    msg.setDestination(13402U);
    msg.setDestinationEntity(183U);
    msg.state = 240U;
    msg.error.assign("OWRFQBYZSTECTEXLJJXUAVQNXSDANPFDVRIJXPMUUNHKQPLVCZGYGVJQYFCIOZFWWXNGCUCWKRHWASPQGIDSAONDRVHUDXAMBRZTTNFTRZVYNLBVADYOXLEPIDUKKHUFPTSXOYDFDZLJMIIOYWFPNIZHZMQFYARBYBEORJKKIPBSGHLASVCQE");

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
    msg.setTimeStamp(0.187997970725);
    msg.setSource(33205U);
    msg.setSourceEntity(58U);
    msg.setDestination(11449U);
    msg.setDestinationEntity(90U);
    msg.state = 167U;
    msg.error.assign("ZKZSIKPLTENWXJRDZFWHRNWQWEGNRPFSAVRDPABJGLSIHSYCTHSILVVMCBYMTZWMOAFYXAOCLLBQJGGKTDCJXKTQHKWDPZGYLLQXXVOBENRCRTPMOMUXXOAYHGJEPENDQHEUXIMGGBLMDJKQVWZDDUQJFRAECWTWRTIU");

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
    msg.setTimeStamp(0.114280257781);
    msg.setSource(61572U);
    msg.setSourceEntity(123U);
    msg.setDestination(4466U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.269305369766);
    msg.setSource(13018U);
    msg.setSourceEntity(79U);
    msg.setDestination(52002U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.0943125964771);
    msg.setSource(4659U);
    msg.setSourceEntity(2U);
    msg.setDestination(26878U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.0304773591699);
    msg.setSource(13228U);
    msg.setSourceEntity(233U);
    msg.setDestination(35976U);
    msg.setDestinationEntity(119U);
    msg.op = 169U;
    msg.speed_min = 0.0350955142451;
    msg.speed_max = 0.00489299046934;
    msg.long_accel = 0.287959477401;
    msg.alt_max_msl = 0.23750148641;
    msg.dive_fraction_max = 0.145094812917;
    msg.climb_fraction_max = 0.282472040161;
    msg.bank_max = 0.995033821892;
    msg.p_max = 0.858187567372;
    msg.pitch_min = 0.914554453248;
    msg.pitch_max = 0.848443454126;
    msg.q_max = 0.181384061299;
    msg.g_min = 0.984016755182;
    msg.g_max = 0.200052980809;
    msg.g_lat_max = 0.870151060704;
    msg.rpm_min = 0.131612110761;
    msg.rpm_max = 0.306192411575;
    msg.rpm_rate_max = 0.792039030326;

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
    msg.setTimeStamp(0.0686577856117);
    msg.setSource(58778U);
    msg.setSourceEntity(55U);
    msg.setDestination(38536U);
    msg.setDestinationEntity(161U);
    msg.op = 40U;
    msg.speed_min = 0.149265323868;
    msg.speed_max = 0.76601286266;
    msg.long_accel = 0.418562995315;
    msg.alt_max_msl = 0.411412358888;
    msg.dive_fraction_max = 0.815296945807;
    msg.climb_fraction_max = 0.656750537259;
    msg.bank_max = 0.731864571555;
    msg.p_max = 0.188554996986;
    msg.pitch_min = 0.934481993792;
    msg.pitch_max = 0.852792497498;
    msg.q_max = 0.666264582393;
    msg.g_min = 0.64432655822;
    msg.g_max = 0.423937089391;
    msg.g_lat_max = 0.351003446059;
    msg.rpm_min = 0.0115700465408;
    msg.rpm_max = 0.500998961189;
    msg.rpm_rate_max = 0.664791398283;

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
    msg.setTimeStamp(0.986106849645);
    msg.setSource(1420U);
    msg.setSourceEntity(86U);
    msg.setDestination(52227U);
    msg.setDestinationEntity(167U);
    msg.op = 204U;
    msg.speed_min = 0.223204118745;
    msg.speed_max = 0.0474956594723;
    msg.long_accel = 0.498356498428;
    msg.alt_max_msl = 0.376512470654;
    msg.dive_fraction_max = 0.887060953741;
    msg.climb_fraction_max = 0.745091087508;
    msg.bank_max = 0.659628818773;
    msg.p_max = 0.793842796074;
    msg.pitch_min = 0.949182899237;
    msg.pitch_max = 0.75990431511;
    msg.q_max = 0.994224743669;
    msg.g_min = 0.816599633648;
    msg.g_max = 0.585303936751;
    msg.g_lat_max = 0.382884318429;
    msg.rpm_min = 0.184481718937;
    msg.rpm_max = 0.518920475481;
    msg.rpm_rate_max = 0.169511181252;

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
    msg.setTimeStamp(0.951874308594);
    msg.setSource(22421U);
    msg.setSourceEntity(186U);
    msg.setDestination(61711U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.748489482567);
    msg.setSource(43330U);
    msg.setSourceEntity(252U);
    msg.setDestination(2261U);
    msg.setDestinationEntity(86U);
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 16966U;
    tmp_msg_0.lat = 0.67853911932;
    tmp_msg_0.lon = 0.204440664424;
    tmp_msg_0.z = 0.291703918896;
    tmp_msg_0.z_units = 127U;
    tmp_msg_0.speed = 0.912982187921;
    tmp_msg_0.speed_units = 29U;
    tmp_msg_0.custom.assign("QERVNSRHLWYHWFNBASHJQRCQUTXVYEBICFJIMHSTAZTAKMYIEMHKUFKGXDCEWPMRPJ");
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
    msg.setTimeStamp(0.602768920854);
    msg.setSource(58167U);
    msg.setSourceEntity(29U);
    msg.setDestination(30053U);
    msg.setDestinationEntity(64U);
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 56028U;
    tmp_msg_0.lat = 0.410511746552;
    tmp_msg_0.lon = 0.555107650072;
    tmp_msg_0.z = 0.114190374163;
    tmp_msg_0.z_units = 96U;
    tmp_msg_0.pitch = 0.929147330882;
    tmp_msg_0.amplitude = 0.291957851565;
    tmp_msg_0.duration = 49834U;
    tmp_msg_0.speed = 0.901770138409;
    tmp_msg_0.speed_units = 148U;
    tmp_msg_0.radius = 0.655794003786;
    tmp_msg_0.direction = 203U;
    tmp_msg_0.custom.assign("VEXEBOANRTSOQQQVFCYMBKVYWHWKAKT");
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.937671076685);
    msg.setSource(206U);
    msg.setSourceEntity(36U);
    msg.setDestination(22096U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.605019605019;
    msg.lon = 0.533692934042;
    msg.height = 0.659784189794;
    msg.x = 0.167885638848;
    msg.y = 0.00689306745655;
    msg.z = 0.983554018324;
    msg.phi = 0.627043087719;
    msg.theta = 0.596173271963;
    msg.psi = 0.939325450171;
    msg.u = 0.988420157339;
    msg.v = 0.442410861676;
    msg.w = 0.471113155314;
    msg.p = 0.334044576383;
    msg.q = 0.0167128190172;
    msg.r = 0.209237802649;
    msg.svx = 0.461451561743;
    msg.svy = 0.568998269864;
    msg.svz = 0.26626289647;

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
    msg.setTimeStamp(0.912722640231);
    msg.setSource(19323U);
    msg.setSourceEntity(23U);
    msg.setDestination(52349U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.622101463681;
    msg.lon = 0.320969604176;
    msg.height = 0.350042971358;
    msg.x = 0.200588606084;
    msg.y = 0.527921455084;
    msg.z = 0.408097520806;
    msg.phi = 0.930104301679;
    msg.theta = 0.857352380732;
    msg.psi = 0.308999817119;
    msg.u = 0.780557038719;
    msg.v = 0.030618094066;
    msg.w = 0.763459088647;
    msg.p = 0.548995153563;
    msg.q = 0.507573359147;
    msg.r = 0.780584543877;
    msg.svx = 0.282241554612;
    msg.svy = 0.688594371013;
    msg.svz = 0.190523833343;

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
    msg.setTimeStamp(0.849298179657);
    msg.setSource(51915U);
    msg.setSourceEntity(65U);
    msg.setDestination(23156U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.528771960296;
    msg.lon = 0.894791851419;
    msg.height = 0.263482708738;
    msg.x = 0.643656669073;
    msg.y = 0.0177084055476;
    msg.z = 0.364799728956;
    msg.phi = 0.742745127245;
    msg.theta = 0.735118221087;
    msg.psi = 0.228752678473;
    msg.u = 0.0286156598111;
    msg.v = 0.599816424952;
    msg.w = 0.871001361081;
    msg.p = 0.365712368377;
    msg.q = 0.1280526857;
    msg.r = 0.676658380814;
    msg.svx = 0.347039322506;
    msg.svy = 0.547316665889;
    msg.svz = 0.281452910449;

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
    msg.setTimeStamp(0.492916782708);
    msg.setSource(38310U);
    msg.setSourceEntity(10U);
    msg.setDestination(63617U);
    msg.setDestinationEntity(164U);
    msg.op = 136U;
    msg.entities.assign("EVAWWSOAVZHMXWMQSUTXZLBJCNAVCQPREENSIUAGQOPPOFKWPXMVMEVUMDFSZOTONFHQOFTXQDXMYHTNRE");

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
    msg.setTimeStamp(0.0456785079036);
    msg.setSource(47064U);
    msg.setSourceEntity(75U);
    msg.setDestination(49599U);
    msg.setDestinationEntity(234U);
    msg.op = 110U;
    msg.entities.assign("ZTMFRKUPXPUBPLAEXUDVBLHBYREDOELJLZGAQLSYDXSDLQNAIHVVITGZAWPIUJCIWQISXOBDMORSRHFWNHGVGPSWACKMNSWCLJMFRCHZIHGCCMNEDZKQOULIBTMQJRFNTAHKNGTYWPDFFKBTYPSUEP");

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
    msg.setTimeStamp(0.262749055923);
    msg.setSource(35755U);
    msg.setSourceEntity(203U);
    msg.setDestination(45114U);
    msg.setDestinationEntity(162U);
    msg.op = 31U;
    msg.entities.assign("WHTDREYROUAQFLOXKEFDIWRAPCIKLGDEKLWZJUCEJPTEUAOTUVQSZPTSMJLKSYBMCUPHJERMYQDGXMHHIRHMPHBNKTZFNVYYRMKKNXVPDDSYKVYNBICQILNNCVXODEPTAVAVQLRSOSVIQQECIOULWBUNXPZATDXJFRYLFAGNZAZIUCDBTHMBWXHEFWPJCNXVKBMP");

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
    msg.setTimeStamp(0.236616939534);
    msg.setSource(55597U);
    msg.setSourceEntity(249U);
    msg.setDestination(41641U);
    msg.setDestinationEntity(47U);
    msg.type = 77U;
    msg.speed = 24805U;
    const char tmp_msg_0[] = {82, -99, 80, 35, -81, 126, 21, -54, -61, 6, -25, -24, 105, -88, 86, 9, 109, -62, 121, -2, -4, -51, -123, -25, -84, 87, 85, 15, 102, 46, 68, -47, -36, -43, -114, 87, 27, 65, -15, 48, 113, 7, -63, 61, -75, 87, -82, -75, 9, 24, 22, 26, 97, 64, -50, 23, -118, 69, -36, -32, -29, 81, 97, 52, -22, -119, 89, -16, -28, -11, -90, -66, -60, -117, 85, -103, -9, 37, 19, -100, 42, 33, -73, -62, 64, -44, -85, 51, -75, -53, -6, 91, 23, 112, -26, 95, 30, -119, -36, 8, 46, -89, -90, -2, 113, -55, 74, -71, -46, -105, -91, 99, -12, 28, -81, 66, -53, 28, -94, 72, -3, 20, -103, 114, -64, 78, -125, -77, -112, -34, -27, -54, -61, 78, -82, -87, -32, -19, 30, -46, 115, 59, -100, 8, -64, 41, 115, -84, -87, -1, -94, -52, -87, 5, -60, -9, -32, 43, -104, 108, -26, 17, -105, -34, -72, -4, 5, 85, -67, 98, -23, -63, 123, 7, 40, 124, -52, -34, -46, 105, -10, 90, -117, -47, -74, 102, 19, 62, -74, -36, 101, 98, -110, 58, 92, 104, -120, 97, 61, 60, 118, 47, 93, -47, 31, 64, 24, 28, -115, -57, -83, 124, -12, -91, -104, 34, 27, -110, -12, -116, 34, -12, 5, 67, -86, -47, 125, 30, 98, 7, 95, 65, 21, 41, -108, 40, 7, -65, -53, -91, 71, 75, 107};
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
    msg.setTimeStamp(0.332734011943);
    msg.setSource(22878U);
    msg.setSourceEntity(131U);
    msg.setDestination(50022U);
    msg.setDestinationEntity(243U);
    msg.type = 47U;
    msg.speed = 28920U;
    const char tmp_msg_0[] = {-27, -92, 91, -39, 84, 122, 121, -3, -75, 69, -123, 110, -4, 6, 89, 90, 75, -82, 126, 103, -123, 44, 41, -68, 85, 97, 9, -69, -100, -44, -31, -8, -16, 52, 52, -23, 99, -7, 71, -31, 62, -17, -119, 3, -54, -20, -114, 18, 88, -85, -51, -51, 109, -22, 110, 80, 42, 24, 58, -92, 59, -13, 5, -90, -86, -77, 13, 65, -85, 110, -61, -92, -96, 11, -50, 102, -98, 96, -13, -40, -46, 22, 44, -5, -36, -116, -97, 15, 85, 63, 46, -88, 122, -62, -13, -14, 90, 73, 0, 6, 49, -2, -34, -41, -68, 85, 111, -35};
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
    msg.setTimeStamp(0.600756357233);
    msg.setSource(64811U);
    msg.setSourceEntity(87U);
    msg.setDestination(3111U);
    msg.setDestinationEntity(196U);
    msg.type = 13U;
    msg.speed = 596U;
    const char tmp_msg_0[] = {-66, -23, 60, -76, 85, -11, -41, 85, -24, -32, -72, -119, -92, 41, 85, 47, -22, 54, -98, 95, -22, 71, 6, -62, -4, -53, -54, -104, -15, 75, 72, -100, -31, 85, -114, -119, -98, -31, -70, -103, 124, -57, 4, 91, -84, 121, -61, 116, -50, 108, 124, -64, -30, 43, 49, -72, -66, -60, 95, -94, 82, -117, -32, -73, -56, 103, -99, 42, -50, -91, -36, -81, -91, 93, -21, 46, -15, 65, -28, 92, 60, 71, 42};
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
    msg.setTimeStamp(0.77924311331);
    msg.setSource(28215U);
    msg.setSourceEntity(151U);
    msg.setDestination(62821U);
    msg.setDestinationEntity(129U);
    msg.op = 10U;
    msg.tas2acc_pgain = 0.671466777084;
    msg.bank2p_pgain = 0.470162255374;

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
    msg.setTimeStamp(0.346015844067);
    msg.setSource(28530U);
    msg.setSourceEntity(40U);
    msg.setDestination(1579U);
    msg.setDestinationEntity(231U);
    msg.op = 126U;
    msg.tas2acc_pgain = 0.405348803261;
    msg.bank2p_pgain = 0.269071469568;

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
    msg.setTimeStamp(0.166336522853);
    msg.setSource(38378U);
    msg.setSourceEntity(137U);
    msg.setDestination(63537U);
    msg.setDestinationEntity(107U);
    msg.op = 70U;
    msg.tas2acc_pgain = 0.649698781455;
    msg.bank2p_pgain = 0.922507534329;

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
    msg.setTimeStamp(0.405547672079);
    msg.setSource(19913U);
    msg.setSourceEntity(57U);
    msg.setDestination(39024U);
    msg.setDestinationEntity(173U);
    msg.available = 4224795831U;
    msg.value = 136U;

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
    msg.setTimeStamp(0.125075229705);
    msg.setSource(57340U);
    msg.setSourceEntity(213U);
    msg.setDestination(26419U);
    msg.setDestinationEntity(241U);
    msg.available = 4107849132U;
    msg.value = 195U;

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
    msg.setTimeStamp(0.821163056092);
    msg.setSource(11336U);
    msg.setSourceEntity(21U);
    msg.setDestination(16154U);
    msg.setDestinationEntity(122U);
    msg.available = 4035550489U;
    msg.value = 10U;

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
    msg.setTimeStamp(0.0150436859112);
    msg.setSource(55420U);
    msg.setSourceEntity(158U);
    msg.setDestination(6220U);
    msg.setDestinationEntity(253U);
    msg.op = 192U;
    msg.snapshot.assign("YDESJVAKJOWKLPVUPSPFTRMFNLYEBWSDTPAKOZXAICPQFNYXULBGDBWVUJMVCXSHGUKETYMYIXTJHLHETHQILVMZAPBIWGGVNRZYFLRINFBZZFDDXETGXCABSHCLORWRMUNVKDKPQOLRZXNUCCIQBSDCBKFOFWJZRVGEXEMHISGGNHLOHOMVEQURSXALKFTIQKCQQTDIODTCYXSGCNJODZMGQNWJRENKUAEYRFJMZYOBHJJAPAABYUMZWWIUPH");
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.681325334117;
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
    msg.setTimeStamp(0.0822576455023);
    msg.setSource(1926U);
    msg.setSourceEntity(185U);
    msg.setDestination(61920U);
    msg.setDestinationEntity(207U);
    msg.op = 199U;
    msg.snapshot.assign("KTTBBZYXHBTHOGMKMLOGKRGABZWHXIAQVCHOCTOKFOKFEGARYYGDTZLZAADMUHNAOEZIMBSCQAKFYQHGSRCPZQSXVDTGJTISVVJPJIJLMILRNFLAMBJQDLIASZJFPGNFOJLVKPCVWBXZKCWHNVNUXLQWPVMBGCXBNWYVSWIRTQUZNIXWYIFUQUREOYTSYEJXMUCSPJWNETBCFPMLDUCKZPEDDUHJXRXEPSDPENGDUOYQWHNOYRV");
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 31U;
    tmp_msg_0.system.assign("TVVTUTFTIBUCLFWVDLLOLBNJYIJLIRXGMRCQAAFIFUUXZGNUNJTUKVKIDCYGMUOLGMRNHWPQGTOMPSACKZEFRWSJZMHVAYFNBDKXIHQQGFMBQONEXBVXJWRDYZEPQAIEQNDJCXKFZ");
    tmp_msg_0.range = 0.484207780284;
    IMC::Distance tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.validity = 69U;
    IMC::DeviceState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.739102497471;
    tmp_tmp_tmp_msg_0_0_0.y = 0.853290881628;
    tmp_tmp_tmp_msg_0_0_0.z = 0.732322101457;
    tmp_tmp_tmp_msg_0_0_0.phi = 0.527457641688;
    tmp_tmp_tmp_msg_0_0_0.theta = 0.487982535301;
    tmp_tmp_tmp_msg_0_0_0.psi = 0.993322194163;
    tmp_tmp_msg_0_0.location.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.value = 0.273925655298;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.816830996959);
    msg.setSource(41932U);
    msg.setSourceEntity(26U);
    msg.setDestination(54256U);
    msg.setDestinationEntity(189U);
    msg.op = 150U;
    msg.snapshot.assign("DPKWLORDBKKDGGOCTZVCZAWTJIOIYUXJDJMCXDBHTZXNITBBZTUHAIQGCPSYRJCNFYMMDHWYRRAZFAXTSLLHQBWBRECYEQOSWYVPIGGCAJUMAVAPYPQM");
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 47U;
    tmp_msg_0.op = 174U;
    tmp_msg_0.plan_id.assign("APXDBOJUHPGTQGYRFLUGUUOVOTAFPVIKRHKRHLZVMYTCSZMUHWRCYCWMILQYNEIHZ");
    tmp_msg_0.params.assign("WGTUQFFJXRBJMEBRLOHIZRJEGVJAOGGYXYMQLUFVXSPN");
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
    msg.setTimeStamp(0.196330373168);
    msg.setSource(61866U);
    msg.setSourceEntity(92U);
    msg.setDestination(59314U);
    msg.setDestinationEntity(47U);
    msg.op = 52U;
    msg.name.assign("JCGLXLDAJCNAGUGZVRGBJIGODBZJWFDDIXUGTDZTYYTMAWLVQWARPPIXNBYMERMLZGLTDKUHGRTPSIBZRUAFAM");

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
    msg.setTimeStamp(0.0152327972033);
    msg.setSource(8395U);
    msg.setSourceEntity(71U);
    msg.setDestination(25177U);
    msg.setDestinationEntity(16U);
    msg.op = 16U;
    msg.name.assign("IFAOYGGLYWGGALVQMMBUTOGHVFZNUVZMWRRIAOMUDIUNEGVWGIUHTKDSNBTYQQIDURHPUGAAKVSQFBADZULPSCPWCVAWIASHVXGXNHTWNQRCPEPEPLJYEBLKKIMBKLOBDLCOPTZMOQBBKFEIWHSJCQJMSQFBTXUSHUS");

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
    msg.setTimeStamp(0.141854395966);
    msg.setSource(45621U);
    msg.setSourceEntity(39U);
    msg.setDestination(43785U);
    msg.setDestinationEntity(169U);
    msg.op = 24U;
    msg.name.assign("TDFWJCCIEFEAPXJMXLHGYULDHKKHFRAYQRZMQFTPZMJRZPFBLEJICMIZHNVVGZWDNQHUVNROGLZOXUPIGBWKRALNMTOSYIFAXWWIWZGKTHASBUJBXJHQPVTLTWQTMKNQDKJKYZGVKDEBYSPGGBELXQENVHQJRQGBCOVPZLSDW");

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
    msg.setTimeStamp(0.697500653604);
    msg.setSource(6327U);
    msg.setSourceEntity(164U);
    msg.setDestination(25573U);
    msg.setDestinationEntity(193U);
    msg.type = 197U;
    msg.htime = 0.276901968879;
    msg.context.assign("RDLTHGPQFZBCHUWOLCYMZSOVTSNHEKSUDPTVJKLVAATAREEINAIDRBYYNGKRMBNYUEYFHWUAPDLPEVQXNPFTJAOGUXOZXKFNLMLWDZANMBDSOEGJRNQJWIXODBBJLXXWPQCTICISKTTVWMOVGZXUKIISQYBRFOVDGLEUIFGCZSHSWEDQXAOXZVCWJSGFZETCRAXUQDOHHJKMF");
    msg.text.assign("JYTACUHIGMNNJBDQDKTBDCGPDJFNOKFULHHPCNOPYTNSRNYIJXGGPWAONPHOYRMUTLKYNGCNLZFEQQKYJQYFCJSEFXCDZPAZJUQVVFOIMVRIBMZPTELROSHFDVOIIO");

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
    msg.setTimeStamp(0.353875241268);
    msg.setSource(2645U);
    msg.setSourceEntity(113U);
    msg.setDestination(24632U);
    msg.setDestinationEntity(43U);
    msg.type = 3U;
    msg.htime = 0.975440962351;
    msg.context.assign("WVCKZFESJCXQKRTMYJQEJIAYXZXAGZHMOEHHQVKFZHNPXWFNJKCZFNXLQCOQGBBFXIQBYDVPWFEKDIBXVENJYUWYTUEDVYSRZNXQHTRJLPEGGMPDONLHFKHVMMHBTACRFWDNUATGSVIWTSUOYRYSBXTDCHKILPTQOUMERLIT");
    msg.text.assign("OWUGGORSRDQXYIVNJGFJVEUQPIPTUZTEOWQSPZCULIRRIFTMPLMJQBKYKZGENYNTAZQILRXTKXHXSYESXDKJMSYQHUKETKBMIJFJMRCFYANFKXGFXIUSNNGZZSDANPVHUYADWCONVIYHVPRPAMHDYLWAQVAZ");

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
    msg.setTimeStamp(0.532211343517);
    msg.setSource(30476U);
    msg.setSourceEntity(213U);
    msg.setDestination(36036U);
    msg.setDestinationEntity(116U);
    msg.type = 111U;
    msg.htime = 0.528524160108;
    msg.context.assign("IMHUNKHPKRPCMJVYKUHKSMOALIXCOWEXJLPGFMMKPOWQTRKTPLDBJXJNIQLRNQDZZMRCYFHSGRLXFZKUJWHOCUNIWWEAOADRGWSTSVXSIYBQXFSCPLQUBKHGBMXOPPZOHPUIRJIEBOXVSUSEOLCAIBEFNLOVXBDSDHEQGHAVAFJANYDZEVSRTZYWJXHKDUYDLMBQNJTMPQDGCAL");
    msg.text.assign("FYTNFIOUWMNIKLKAELOZDDTNXAARQCTFJPVSWMPLVXCI");

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
    msg.setTimeStamp(0.923675234636);
    msg.setSource(18070U);
    msg.setSourceEntity(242U);
    msg.setDestination(21122U);
    msg.setDestinationEntity(171U);
    msg.command = 150U;
    msg.htime = 0.577095162699;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 234U;
    tmp_msg_0.htime = 0.118161493327;
    tmp_msg_0.context.assign("IITBYYIGSLPFDZEXTXWEPAUOJEDMEBYKDFNLHJWTIKMPZXHZUXFUOCDGPALWFTQXFHRHHKSYKIARJAVXYAUVICEDJKKNLZQULEMHONDYNEYEKYLCEGUOJSSFZVQUSBKJSXOZQPLZCRTFUQKTRNOBIGCBGZOJVHYQTWMJRVLMMPBRBWSHNQAVICVAFJATPCSYWUTGHDQNJAMTVGBFSRQSRGBFQRXMPHALCVDOMMDIZOWNNPIKW");
    tmp_msg_0.text.assign("UWMDFQMODFKJDDLATDXHVLJKBMMDZBXNNQJNDSEAKXIWSJABNUSBWOCXAJPLHOVHLXYIPNERSEYQTPFHHXZWDSEOHUYNUWQCXFEYOAFACUVCLI");
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
    msg.setTimeStamp(0.303236958384);
    msg.setSource(41639U);
    msg.setSourceEntity(77U);
    msg.setDestination(15514U);
    msg.setDestinationEntity(8U);
    msg.command = 167U;
    msg.htime = 0.259206726051;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 144U;
    tmp_msg_0.htime = 0.658505846635;
    tmp_msg_0.context.assign("TIQWNTSZAGQSCMQZLKWMVNGDLIUMMSXLGFTXKBLVDWUMPLXHERLHJGEECPVDFKEKHOCPSXHVQTLDWOQQ");
    tmp_msg_0.text.assign("DVTTOJEGAQJERZUBSGTYPACZYXKRFQNHNJSZSLBITGVOCDLQDZZXZLQDIYFCDPAULLPPXUWRWKNJYPUCSIGPHAKOMBYLJZWKRGDKBMEOCAEFJLVLXJCMTBYSBXHOHWVRFVHAWWICXHRFPGIWTTTNNGPSKMJDOOGWKDQANSSLTWYIRPXSXIEGUHVBVKZVMIRYXHHUMBKIKTBWSJFQGZVMVPCUOUYDUFUNEFLCQEERQMAXZMQQDAMNEOEYHFCIAJ");
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
    msg.setTimeStamp(0.657364270774);
    msg.setSource(6526U);
    msg.setSourceEntity(63U);
    msg.setDestination(37052U);
    msg.setDestinationEntity(230U);
    msg.command = 84U;
    msg.htime = 0.114441797724;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 122U;
    tmp_msg_0.htime = 0.265839372905;
    tmp_msg_0.context.assign("MPSULLZABPDCJUYKYBQZXMAPXZHLEQOCELGTRFZWZWOMVCPVSKPVWBAYE");
    tmp_msg_0.text.assign("ZLBVXOFGPOQNIHFWGKKSYFRKZKSHUEZSLKLBVBAINOVKSJTTJJDHZMRZGEEWPWTTFUXELNXZWDPTOUCPQDUXZWFRZOAQDBYWTUQGIKRWJXDQMERECDMFXSHVXTYPQUYUACBQCEBXNFFUYCXYFDNNVSRSSJULIOOBIVQSYKABJATGJIMOPKLNHIPMRPGXCSMDMQNQMJITRDJLNDWPPICERERVAWCMYVULIYG");
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
    msg.setTimeStamp(0.730538091094);
    msg.setSource(30127U);
    msg.setSourceEntity(106U);
    msg.setDestination(50165U);
    msg.setDestinationEntity(40U);
    msg.op = 102U;
    msg.file.assign("DPKTJUVZRAFHNTSOJBXZPXJBUWFGWQZDCKEDNXMIBDNYWZYFJAOCYMVTIVEENGEQTINLGGASGUJJRQGHYOEDSQKKHUIRRSIWECIQPVZHWROELYRMUITPSKIYHENMXPAXGAPHAULGLQCNBFHVWOFQHJCXEOPCDXMWBABOZTJRSPTUUYQTKHSWDIRMCXSKVVPMSHCKDZAXLL");

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
    msg.setTimeStamp(0.852145655587);
    msg.setSource(55076U);
    msg.setSourceEntity(97U);
    msg.setDestination(73U);
    msg.setDestinationEntity(153U);
    msg.op = 133U;
    msg.file.assign("DBZZMABVWLVXNYKGVLJRJPMHCGTXCOPHWBMGXQWPGLQBHHKOLFQNZRDUSRJXYNUZHHBJWILCCUENFLSICNBTOGKABLLAOVJFKRHXIIISDQMBKMYYDATWDTEBSUCWDFLKUZJGKOEWMSFOKFUFYACHXNVEPAVNZGQWFOPQIQGSSDQOEERACTVSYJUEW");

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
    msg.setTimeStamp(0.301755325311);
    msg.setSource(53895U);
    msg.setSourceEntity(4U);
    msg.setDestination(25151U);
    msg.setDestinationEntity(131U);
    msg.op = 153U;
    msg.file.assign("IFTOALITPPPHQOGWRBSPLKCDAUZHSVOPMVROHDXASXORAXHLPUOKTDNDUOXXRZSMGMIBAJCDRYGYDSHEFNNMBKUNCIXKQTBHTWNCHPEZZSICWNQIKEJUZPREKWJEQXFVYVNSCQZGTGVIOPWZKZHBYJBYBGKEBETVQGUDHCDTQBMANJWJVAMXQFFAUALHSMFFRLYEMWJLNECJJEFZVQUGLLTRLCNMGFWIOPVTSI");

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
    msg.setTimeStamp(0.813480035023);
    msg.setSource(62588U);
    msg.setSourceEntity(187U);
    msg.setDestination(34382U);
    msg.setDestinationEntity(30U);
    msg.op = 253U;
    msg.clock = 0.668692633434;
    msg.tz = 10;

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
    msg.setTimeStamp(0.538177854375);
    msg.setSource(20994U);
    msg.setSourceEntity(212U);
    msg.setDestination(45438U);
    msg.setDestinationEntity(7U);
    msg.op = 129U;
    msg.clock = 0.122115782418;
    msg.tz = 60;

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
    msg.setTimeStamp(0.450673748231);
    msg.setSource(55552U);
    msg.setSourceEntity(129U);
    msg.setDestination(26114U);
    msg.setDestinationEntity(143U);
    msg.op = 140U;
    msg.clock = 0.890837659147;
    msg.tz = 75;

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
    msg.setTimeStamp(0.594376052017);
    msg.setSource(32886U);
    msg.setSourceEntity(228U);
    msg.setDestination(37579U);
    msg.setDestinationEntity(90U);
    msg.conductivity = 0.100977673592;
    msg.temperature = 0.11345464525;
    msg.depth = 0.951198410999;

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
    msg.setTimeStamp(0.239965964629);
    msg.setSource(64659U);
    msg.setSourceEntity(30U);
    msg.setDestination(33699U);
    msg.setDestinationEntity(203U);
    msg.conductivity = 0.552829621003;
    msg.temperature = 0.258913511557;
    msg.depth = 0.128562244999;

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
    msg.setTimeStamp(0.646367442617);
    msg.setSource(21810U);
    msg.setSourceEntity(96U);
    msg.setDestination(57345U);
    msg.setDestinationEntity(62U);
    msg.conductivity = 0.963386513963;
    msg.temperature = 0.250449815201;
    msg.depth = 0.274520670787;

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
    msg.setTimeStamp(0.988279084512);
    msg.setSource(7454U);
    msg.setSourceEntity(181U);
    msg.setDestination(34708U);
    msg.setDestinationEntity(103U);
    msg.altitude = 0.516248800194;
    msg.roll = 9591U;
    msg.pitch = 14583U;
    msg.yaw = 24277U;
    msg.speed = -19113;

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
    msg.setTimeStamp(0.11243460544);
    msg.setSource(58178U);
    msg.setSourceEntity(7U);
    msg.setDestination(46504U);
    msg.setDestinationEntity(36U);
    msg.altitude = 0.674557725586;
    msg.roll = 64540U;
    msg.pitch = 1219U;
    msg.yaw = 12474U;
    msg.speed = 3352;

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
    msg.setTimeStamp(0.38276766289);
    msg.setSource(46569U);
    msg.setSourceEntity(254U);
    msg.setDestination(50917U);
    msg.setDestinationEntity(220U);
    msg.altitude = 0.877796070901;
    msg.roll = 28132U;
    msg.pitch = 42329U;
    msg.yaw = 25314U;
    msg.speed = 1981;

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
    msg.setTimeStamp(0.874338775939);
    msg.setSource(24095U);
    msg.setSourceEntity(96U);
    msg.setDestination(43989U);
    msg.setDestinationEntity(36U);
    msg.altitude = 0.735973499295;
    msg.width = 0.800372563488;
    msg.length = 0.396687524043;
    msg.bearing = 0.237801145821;
    msg.pxl = 13518;
    msg.encoding = 99U;
    const char tmp_msg_0[] = {-92, 105, -108, -127, -9, -70, -101, -114, -3, 26, -96, -12, -69, 70, 16, 93, -59, 85, 88, 0, 49, 61, -22, -114, -21, 28, -54, 81, -108, 76, 46, -48, 5, 25, -111, -27, -90, 118};
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
    msg.setTimeStamp(0.198335809671);
    msg.setSource(17803U);
    msg.setSourceEntity(118U);
    msg.setDestination(20389U);
    msg.setDestinationEntity(135U);
    msg.altitude = 0.887508278783;
    msg.width = 0.312874446617;
    msg.length = 0.310418006053;
    msg.bearing = 0.440647784176;
    msg.pxl = -6676;
    msg.encoding = 58U;
    const char tmp_msg_0[] = {40, 123, 86, -80, -80, -26, 15, -71, -65, -64, -83, 58, -75, -19, 31, 124, 114, 34, 30, 110, -108, 40, -20, -115, 92, 87, 67, 65, -12, 118, 42, 45, 105, -17, 37, -13, -83, -48, 87, -57, -6, -120, -66, -27, 76, 60, -72, 102, -46, -94, 36, 66, 30, 27, -67, -51, -71, -82, 126, -128, -47, 44, 0, 101, 14, -116, -123, 33, -38, 60, -87, -86};
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
    msg.setTimeStamp(0.365358570297);
    msg.setSource(61905U);
    msg.setSourceEntity(70U);
    msg.setDestination(9663U);
    msg.setDestinationEntity(19U);
    msg.altitude = 0.626599873132;
    msg.width = 0.842647873378;
    msg.length = 0.860742680213;
    msg.bearing = 0.0642828025947;
    msg.pxl = 7441;
    msg.encoding = 190U;
    const char tmp_msg_0[] = {38, -97, 119, -53, -72, 105, 113, -30, 75, 117, 44, -28, -2, -98, -74, -44, -101, 104, -40, -108, 110, 2, -99, 105, 95, -22, 112, -106, -72, 121, 73, -115, 126, -103, -94, 83, 109, -11, -13, 113, 89, -44, 46, 84, -125, 35, 47, 91, 59, 95, 51, -50, 120, 17, 11, 64, -23, 120, -2, 82, -90, -98, -82, -108, -53, -113, -42, -73, 119, 62, 36, -5, -72, 82, 86, 43, 118, 99, 121, 106, 125, 54, 38, -18, 112, -22, -102, -99, 5, -37, 17, -67, -35, -44, 33, 8, -41, -33, 23, 122, -74, -92, -2, 27, -82, 105, -64, -66, 51, 79, -125, 16, 97, -4, -72, 97, 65, -118, 58, 46, -67, -113, 53, -45, 9, 125, -25, -19, -80, -125, 99, 5, 19, 93, -57, -5, -59, 53, -30, -107, 80, 9, 16, -123, -52, 15, -20, -101, 11, 22, -123, 8, 57, 120, -38, 14, -18, 45, -59, 54, 70, 101, 29, 93, -34, 56, 7, 28, 94, -54, -23, 116, -34, 55, 0, 55, 124, 124, -23, 23, -105, 60, -122, 48, -62, -52, -4, 80, -80, -112, 79, -77, 29, -94, -103, 106, -56, 108, -47, 100, -44, -14, -86, 26, 126, 114, -122, -128, 85, -113, -81, 58, 124, 126, 12, -115, 18, 58, 49, -55, -17, 3, 26, 59, -71, -98, -124, 13, 41, -72, -24, -127, 38, -54, -51, -71, 102, -89, -57, -118, -108, -54, -115, -93, -93, 13, 10, -80, -1, 121, 92, 14, 66};
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
    msg.setTimeStamp(0.325989003718);
    msg.setSource(60301U);
    msg.setSourceEntity(74U);
    msg.setDestination(6900U);
    msg.setDestinationEntity(133U);
    msg.text.assign("JBIELQLPYOROPUQSVGJNNWUHOALXHMVXFKMCSCSPAYZTSLKJLDSQGXBNRJYBTLZINYQKZAEQ");
    msg.type = 198U;

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
    msg.setTimeStamp(0.302994200286);
    msg.setSource(30878U);
    msg.setSourceEntity(135U);
    msg.setDestination(57748U);
    msg.setDestinationEntity(151U);
    msg.text.assign("TTMLGLBUMVDJUZUXXFENRVOSXCHFWBENHDCZVDVEOADKVPRXQWYAORGKJIHWLZTVJIONGDFWMMHNNMGFTXCTFIHQZMJCXWEUFEYCAMFLOYTQOYYPSLWLAAQGHKCGJKQJUYARLMZISDRUFHQVCUGPRBSRFBWOBIIRZUESNQJTPMGSYZDLDXBQNTGNYDLKDUHHOCEZRCQEITAROSBSKPZKSSKFVBEATNHIJXYBPZVEWGJXVACWUBOKAYPMLPPI");
    msg.type = 109U;

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
    msg.setTimeStamp(0.611156886709);
    msg.setSource(23479U);
    msg.setSourceEntity(20U);
    msg.setDestination(22831U);
    msg.setDestinationEntity(13U);
    msg.text.assign("WMSMHJESQTGIQUMKLMSUFPSRELDIRKFQFDUQVAJXGDIPPRYLHXCSTXTBCOJYOEJONBVXJJTRPFRXRKKHTNBIZYEWDGILBBFDDAODWZZXPGUYMIAETWAEHHAUQGQCLSOGZQSZLFJGRFFGSHCEGDFHTJRKXMQOMV");
    msg.type = 213U;

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
    msg.setTimeStamp(0.275929310205);
    msg.setSource(50013U);
    msg.setSourceEntity(148U);
    msg.setDestination(22321U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.76467147223);
    msg.setSource(48987U);
    msg.setSourceEntity(140U);
    msg.setDestination(41436U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.616517416296);
    msg.setSource(27837U);
    msg.setSourceEntity(83U);
    msg.setDestination(14368U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.624787416895);
    msg.setSource(52752U);
    msg.setSourceEntity(200U);
    msg.setDestination(33364U);
    msg.setDestinationEntity(105U);
    msg.sys_name.assign("EFZDQRTAQZKTGNXMULPLZP");
    msg.sys_type = 30U;
    msg.owner = 15582U;
    msg.lat = 0.293961946509;
    msg.lon = 0.0630579606792;
    msg.height = 0.673587565036;
    msg.services.assign("ROHGPPECSGZALIMTEUUUQUZWCEVZBVFTTJPXZAFJJWCXBEBCRVNIGRJILSEFMLOWWWKLVAHYKMKREFWBLBXBSZSJZHYVHQDELZOIKPYCOGHXASMVTJUQJIAMFGKRFXXCUOEPWLYXHDTNKJWWMGIQGXKSBWXVNPTQDNDUOOE");

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
    msg.setTimeStamp(0.35022607546);
    msg.setSource(7986U);
    msg.setSourceEntity(104U);
    msg.setDestination(3484U);
    msg.setDestinationEntity(155U);
    msg.sys_name.assign("MWWPXRWWGUYLMCUMCVSFDMHGJAPHQTQAMONWCOTISCUNYAIFCKBSIYZLBVJOTWOCZHDGUVUELDCODZYRKVZLKOTPTQKTXERUXHACVEXKVJPRSZF");
    msg.sys_type = 26U;
    msg.owner = 45095U;
    msg.lat = 0.0995846377735;
    msg.lon = 0.342914339618;
    msg.height = 0.369480891594;
    msg.services.assign("DVDKMRVDVIWWKJNPXWKBZWCDRVICCBOJYCPIHUZICXMVLSNFQFQTTMXYNQYPYHXUBBTSTJLEYJCDOWULNSRVGHUTNFAEZJPHGTIKACQEXTEEPWOSNUSQXJFDKRDAZYLKUTTZESAOAPOMYQONIOIKDUEREHNRSRXFGULQFMCARXAFILGXQBHKXSKWWCOGHVWVMMFVNGQZLTWQZNHPUUAPSJMFPBMVBJSOKLRJAIJRMHGGDGFZYEEDLPBOYZY");

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
    msg.setTimeStamp(0.1135785123);
    msg.setSource(18633U);
    msg.setSourceEntity(0U);
    msg.setDestination(40780U);
    msg.setDestinationEntity(20U);
    msg.sys_name.assign("XDEFURHHMTIKVWEUBVQFQMEEZTMHWGEQVGPQJTDWRRNQDQYDLKDAARATOENZIZYCKSRFYBJMJHBIUZQCOWLUNXDUPYLBXZWHNYLTNIJGHTUSCWAPUIGMJTCHDPJIZKNVEPTUMYLKXKCLACILFZNXDCJXGAMOKGSZMVXRYROHXWFOACIEBJTKLPUGPRCWSQSEOXLMLKBIYPPGYKODVAFISF");
    msg.sys_type = 239U;
    msg.owner = 15646U;
    msg.lat = 0.404933627674;
    msg.lon = 0.842151077277;
    msg.height = 0.253605325318;
    msg.services.assign("AZNZMAQVLQGYMXXVIBZKUPBEOOSLHCCCXO");

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
    msg.setTimeStamp(0.263789654423);
    msg.setSource(27020U);
    msg.setSourceEntity(105U);
    msg.setDestination(24706U);
    msg.setDestinationEntity(4U);
    msg.service.assign("JWMIVXTMGJEFCSLNDQSOUVIXTEALFOCQSBWJGFBSVVZDTTDZEXEFNCMFAPZSOEIDEUPPPWURADJOUYNDGXJKXZLLDHBHNEAAKLZAVXOGCQTUCSVOWYYWTMYAKBIBURGHOZQELKIWKZNVPGJTJVHMIXHHFZRIWNFKQXEFYIPMMUCKPCLPQVIORHRJRC");
    msg.service_type = 32U;

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
    msg.setTimeStamp(0.0322997752596);
    msg.setSource(2726U);
    msg.setSourceEntity(29U);
    msg.setDestination(55251U);
    msg.setDestinationEntity(57U);
    msg.service.assign("ORLJCBGSZBTGOVEJDNPXAXWCGKLTAYABGWRRSHJHAPKUVKUKZTHNZOCMDSDOLGQQREZFZWQBIQDUZAMSPHBQGURXEJTBYRUEVZTZVCLOTBCFNSDLEJMWDMRIEYKONHODHXNNBAPIOPYSPPIYMFPWCXDMIQA");
    msg.service_type = 12U;

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
    msg.setTimeStamp(0.363669516538);
    msg.setSource(24972U);
    msg.setSourceEntity(123U);
    msg.setDestination(63063U);
    msg.setDestinationEntity(129U);
    msg.service.assign("ECSNPGIOGKPRIZVJEWULLYHFKBTCFDRNNSIIHHBCQJWGRKWXZLKMDSAVQ");
    msg.service_type = 148U;

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
    msg.setTimeStamp(0.838731337827);
    msg.setSource(57787U);
    msg.setSourceEntity(227U);
    msg.setDestination(16875U);
    msg.setDestinationEntity(157U);
    msg.value = 0.180387053054;

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
    msg.setTimeStamp(0.0329755332019);
    msg.setSource(60887U);
    msg.setSourceEntity(193U);
    msg.setDestination(27293U);
    msg.setDestinationEntity(156U);
    msg.value = 0.0519811132994;

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
    msg.setTimeStamp(0.778290719849);
    msg.setSource(8448U);
    msg.setSourceEntity(217U);
    msg.setDestination(7336U);
    msg.setDestinationEntity(47U);
    msg.value = 0.0352213826023;

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
    msg.setTimeStamp(0.842020877271);
    msg.setSource(33445U);
    msg.setSourceEntity(51U);
    msg.setDestination(45330U);
    msg.setDestinationEntity(77U);
    msg.value = 0.854635936698;

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
    msg.setTimeStamp(0.679751344361);
    msg.setSource(34431U);
    msg.setSourceEntity(104U);
    msg.setDestination(25415U);
    msg.setDestinationEntity(18U);
    msg.value = 0.119214516712;

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
    msg.setTimeStamp(0.105269765598);
    msg.setSource(3572U);
    msg.setSourceEntity(221U);
    msg.setDestination(20387U);
    msg.setDestinationEntity(122U);
    msg.value = 0.18239810742;

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
    msg.setTimeStamp(0.692330272504);
    msg.setSource(48267U);
    msg.setSourceEntity(68U);
    msg.setDestination(7432U);
    msg.setDestinationEntity(218U);
    msg.value = 0.40556139613;

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
    msg.setTimeStamp(0.970305965605);
    msg.setSource(31816U);
    msg.setSourceEntity(151U);
    msg.setDestination(3092U);
    msg.setDestinationEntity(16U);
    msg.value = 0.595341300059;

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
    msg.setTimeStamp(0.525466407315);
    msg.setSource(898U);
    msg.setSourceEntity(61U);
    msg.setDestination(60305U);
    msg.setDestinationEntity(86U);
    msg.value = 0.292932593348;

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
    msg.setTimeStamp(0.995308828638);
    msg.setSource(60459U);
    msg.setSourceEntity(66U);
    msg.setDestination(51116U);
    msg.setDestinationEntity(204U);
    msg.number.assign("ILTRMBPQADAVUGJWFHGLMVWJJMNUENOFTXQFPECYYMABEKGNEYGSRPASXNSJYZXXO");
    msg.timeout = 519U;
    msg.contents.assign("OSUMVSFNJNZDSCDKNCRHSBWYWMURXZXOVYFDYWJCSRUJMTZJWEMXFWKAOQOPXESITGTUKDHYAPSQIMYFGDPEPHIBJWQYZVTOXCJGQVIGTXRVIEQUKLETGMQCKNLVMRZMAFFXVAINPJJPBPYLNFDEBZLGDARKMHJLGZLFQZDUWTCWPNBLQKEWIEPYUBSIANJPVIREOKAUBCH");

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
    msg.setTimeStamp(0.0485097358903);
    msg.setSource(29397U);
    msg.setSourceEntity(240U);
    msg.setDestination(4619U);
    msg.setDestinationEntity(112U);
    msg.number.assign("MCDQNBVYUHFOEIGXEDXZXDUK");
    msg.timeout = 41964U;
    msg.contents.assign("MMLWAHGBSMZSOPNPFQIETZLXBJTDWF");

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
    msg.setTimeStamp(0.756685700412);
    msg.setSource(13297U);
    msg.setSourceEntity(246U);
    msg.setDestination(25300U);
    msg.setDestinationEntity(223U);
    msg.number.assign("ARCQVTIGJIDCOURUDCAWHKXDWXJFBHXTITINPUIYJDOIKXNGUVXUXUEQPWWQSZGDBBOMDYWVKLCOLZWBCEEFSEQOPPWCZSBSZEJQEHGCWNJKNPYLMRPGPKLFYBPNHLRNYDLZXVIFFGUHMDCMRVTSOJXAFRRPRSCTBMSMOQYUNLQNBIMZBGAKFIMFXRTGLQJHECHJUFVLGMAABX");
    msg.timeout = 50783U;
    msg.contents.assign("ELHMHYFAVZHYJPWQEMWOLCNUKKEQIKSFTOMJRKOILAPHFINIGSGQQQPFRVCG");

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
    msg.setTimeStamp(0.559308902537);
    msg.setSource(51578U);
    msg.setSourceEntity(58U);
    msg.setDestination(60951U);
    msg.setDestinationEntity(208U);
    msg.seq = 3656229522U;
    msg.destination.assign("ENGDCNLLGLDSORANZQVRJRDQYWZAZNPHITEBJMXMGDQOYJBDJIKIHUFUORPBQZNPNWFVUZXGFFKFSRRAQCUHDXXZGJUOXUFRIJEILCXOOOGMMUEEVZAKGYVMHTMWHASTLNVWCCPUDYZRHXTCDGQFNQHECCISSIYQSTDSYJJHBIWPKWWKMPVCBLOADWPOLMCBSYFYHHZPTTESLX");
    msg.timeout = 8895U;
    const char tmp_msg_0[] = {3, -6, -31, -25, 113, 105, -72, 94, 91, 116, -72, -93, -44, 20, 85, 55, -24, -5, 0, -124, -37, 90, -19, -77, -50, 115};
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
    msg.setTimeStamp(0.86734654839);
    msg.setSource(16123U);
    msg.setSourceEntity(153U);
    msg.setDestination(22319U);
    msg.setDestinationEntity(62U);
    msg.seq = 371859570U;
    msg.destination.assign("LZKVFGOKMHQWNUAGCZELUKQGFJDNTVYQRKNTECZYUIXFHFQSDSOVVXRXWAZSQOBZDEYFJVKCRODUMMEFTUALVLYNNSMCTEMBSAXJAYZZHGNKHXICJMTYTAOVDIGXESOPGBMSTWLWAJIPLGIQJHAZYWPPBZMQNCRVDWBSLBROXFANYMTLQEYPFRKBLXBDUPROEQ");
    msg.timeout = 28472U;
    const char tmp_msg_0[] = {6, 33, 74, -93, -87, -27, 58, -33, 87, -46, 95, -71, -127, -127, 9, -113, 74, 22, 58, -103, -100, -43, -68, -90, -42, 33, 108, 32, 57, -125, -66, -49, 69, -81, 78, 53, 43, 91, -36, -68, 61, -33, 126, 83, -83, 72, 34, 89, -118, 37, 8, 25, 89, -39, -21, -36, 50, 31, -41, 21, -29, 122, -117, 70, -105, 41, 41, 97, 57, 70, -118, -27, 110, 24, -38, -70, -125, -118, -31, -43, -109, -53, -78, 31, 97, -46, -34, -31, 8, -122, 110, -44, -40, 1, 115, -12, 32, 50, 124, -64, -118, -118, -11, -9, 22, -111, -31, -105, 11, 70, -113, 77, -115, 119, 37, 67, -118, -110, 39, 70, -87, -128, 111, 109, -37, 85, 26, 59, 36, 111, -12, -20, 115, 80, 104, -113, 6, -44, 75, 80, -67, -85, -56, 22, -60, 80, 26, 106, -84, 2, 26, -100, 83, 12, -6, -114, 110, 63, -17, -25, -33, 70, 14, 120, -10, -119, 102, 98, 28, 36, 0, -12, 46, -107, 14, 75, -103, -55, -70, 92, -128, 46, 51, 48, -117, 74, 82, -1, -37, -76, -24, -99, 84, 91, -23, 48, -90, -49, 114, 39, -73, 120, 80, 122, 87, -126, -18, -80, 18, 55, -77, -8, 46, 86, -86, 112, -96, -26, 66, -118, 54, 27, 49, 20, 89, -121, -43, 117, -30, 6, -125, 41, -50};
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
    msg.setTimeStamp(0.0496804634898);
    msg.setSource(24725U);
    msg.setSourceEntity(75U);
    msg.setDestination(15963U);
    msg.setDestinationEntity(12U);
    msg.seq = 563384374U;
    msg.destination.assign("ADFBMNEIVFTK");
    msg.timeout = 58672U;
    const char tmp_msg_0[] = {-94, 48, 103, -29, 118, -47, -120, -93, 86, -75, -44, 84, -117, 59, -25, 41, 123, 17, 70, 114, 73, -13, -30, -126, 101, 102, -42, -7, -98, -79, 68, -74, 56, -35, -77, -44, -106, -96, 99, -56, -83, 0, 24, -14, -44, -86, 40, 48, 18, -17, -86, 12, 89, -100, -61, -59, -89, -112, 80, 65, -103, -53, -70, -120, 118, 40, 6, -96, -115, -59, -66, -45, 18, 11, -11, 96, 47, 12, 69, 66, 32, 76, -13, -90, -8, -100, 60, 18, 112, 16, -66, 36, -37, -13, 40, -114, 93, -32, 24, -118, -65, 6, -42, -57, 89, 76, 1, 78, 99, 38, -44, -10, -22, -114, 73, 124, 108, -122, -42, 120, 123, -22, -87, -32, 57, 37, 111, -38, -69, -81, -70, 21, 112, 81, -46, -76, -91, 119, 91, -114, -9, 122, 94, -103, -60, -82, 36, 38, -49, -21, -2, -87, 70, -100, 99, -43, -78, 79, -45, -57, -39, 89, 50, -99, -5, -27, 22, -19, 111, -5, 13, -117, 86, -49, 89, -110, 19, -120, -23, -16, -100, 110, -85, 5, 15, 26, 100, 63, 41, 100, 108, 5, -99, 32, 44, 71, -66, 63, 24, -9, 60, -68, 62, -37, 17, 99, 110, -67, -67, 70, 42, -58, 112, -69, 78, 42, 53, 53, 84, -88};
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
    msg.setTimeStamp(0.501609613418);
    msg.setSource(60906U);
    msg.setSourceEntity(129U);
    msg.setDestination(55105U);
    msg.setDestinationEntity(4U);
    msg.source.assign("APBOCZHJOAOMDCONUDHPFEGYFEGTVBQGMHREXODKZKQNYYPZWYWXMQCYBPTQHTARIL");
    const char tmp_msg_0[] = {-110, 28, -23, -39, -10, 96, -112, 3, 67, 56, 94, 35, 75, 24, 38, 52, -103, -38, 98, 71, -74, -17, 66, -81, 87, 110, -76, -27, 1, 35, -36, 81, -36, -93, 122, 80, 97, 44, 115, -55, 12, -121, 38, 37, 21, 72, -71, 69, -54, -105, 17, -97, -86, 27, -59, -79, 126, 63, 95, 68, -74, -98, -97, 29, 76, 74, -16, 10, 102, 126, 3};
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
    msg.setTimeStamp(0.531626471391);
    msg.setSource(45624U);
    msg.setSourceEntity(41U);
    msg.setDestination(53797U);
    msg.setDestinationEntity(111U);
    msg.source.assign("ZZQRXONUGOVHGDRI");
    const char tmp_msg_0[] = {-53, 94, -84, 24, -45, 121, 79, 37, 17, -112, 64, 113, 12, 18, 110, -57, -38, 69, -118, 59, -100, 69, -32, 12, 88, 24, -27, -33, -39, 77, 85, 34, 57, -50, -20, 32, -13, 25, -23, 41, -25, -69, -41, 78, 123, 86, 55, 8, 32, -97, -124, -46, -95, 121, -52, -98, 100, 61, -119, -52, -69, -35, 121, -65, -83, -56, -33, -128, 101, -99, -31, 64, -32, -43, 37, 125, -16, -92, 37, 58, 24, 52, 34, -25, -4, 75, 79, 73, -13, 48, -29, -58, 37, -73, -16, 120, -120, 91, 95, -38, 13, -14, 3, 35, 118, -91, 43, 1, -62, -111, -71, -79, 62, 23, 99, -51, -97, 85, 80, -4, 5, 22, -4, 80, -36, 66, 7, 102, -102, 12, 78, -33, 32, 22, -119, 35, -27, 50, -88, 73, -17, 19, 49, 82, 99, 36, -72, -32, -91, 54, -74, -121, 93, -78, 29, 53, -104, 115, 78, -74, -40, 76, 105, -71, -53, 97, -40, 19, 102, 88, -76, 27, -116, 92, 82, 33, 121, 125, 22, 96, 7, -120, -2, -91, 64, -91, -49, 70, 76, 25, -106, 4, -17, -68, -118, -107, 79, -125, 73, -123, -41, -85, -98, 53, 75, -127, 62, -77, 121, 22, 114, 41, -51, 1, 87, 34, -103, 60, 50, -124, -92, -22, 39, -97, -123, -81, -39, -6, 55, 36, 48, 56};
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
    msg.setTimeStamp(0.341810401629);
    msg.setSource(35777U);
    msg.setSourceEntity(52U);
    msg.setDestination(948U);
    msg.setDestinationEntity(129U);
    msg.source.assign("ZTCNIGWJKRFOABLHFJSSSBEEHPHHBKZEMIWXWFPYKRXOWPOMNIRXCUNHSDVZIGMQVNNUXLXZMCIDEHYCNLFMQEDMGROCCPSHTOUOZHBACVOQKGJFDZLWBNJYTAFABPIUTUGVTJMUSAHGXWRBCLVEEJYAVQYLXJLZMFIMXUBVKQORBDYPOTYDQLGXACTODBWZTKPFEYHNDQEXTDIECIQJPSRNTJARGGURUWRYVFSKSKPULFYIDG");
    const char tmp_msg_0[] = {58, 124, 103, -118, 38, -31, 42, 52, 56, -37, -41, -87, -101, 32, 77, 117, 107, 125, -29, -88, 120, 86, -115, -110, 121, -118, -13, 30, 93, 1, 41, -17, -41, 78, -80, 97, 9, -70, -83, -64, -114, -52, -26, -6, 72, -39, -103, -20, 18, -14, 122, 46, -51, -99, 25, -99, -14, -94, -116, 3, -12, 99, -79, -112, -44, 27, -102, 125, -1, 24, -18, 63, -46, 18, 119, -93, -90, -105, -91, 73, -20, 78, 58, -39, -53, 11, -59, -46, 59, -126, 23, 105, -45, 75, 77, -65, 52, -115, 117, -53, 70, 81, 88, -19, -89, -23, -128, 73, -124, 108, 9, -92, -43, -5, -66, 47, 2, -103, -58, -58, 80, 51, 52, -39, 1, -25, -57, 16, -56, -119, 75, 4, 52, 27, 84, -26, 17, 12, -52, 88, -105, 80, 54, 41, 12, 35, 72, 125, 9, 51, 111, -127, -104, -9, -10, 123, -64, -55, 38, 50, -65, -98, 87, 113, 16, 114, 65, -109, -73, -49, 117, 111};
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
    msg.setTimeStamp(0.992181500677);
    msg.setSource(31958U);
    msg.setSourceEntity(237U);
    msg.setDestination(63293U);
    msg.setDestinationEntity(61U);
    msg.seq = 1801142613U;
    msg.state = 198U;
    msg.error.assign("GGIBYDAUPWLZYYSWOMELZJOBKVLATMCVVRFIPTEKWZJGJPASGKLBIBJWNQRAPSHMJPZCCMVUPNMBIMYTOAJFVKDFTDTDUMFSFTXSAMDCFEXNWVYRHYKZPZEXKIVFLOBSRUGESHRLXQJIBUZENUOHYMUPHHEXRKBEWOIXWLFPHKQLNDQYLCCWEKOSTGZWDBZDJNYOPNRQSFNXCVLMFTIAGKEGQVCNJTSUGDQCHRANXVO");

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
    msg.setTimeStamp(0.772058504997);
    msg.setSource(10275U);
    msg.setSourceEntity(210U);
    msg.setDestination(54925U);
    msg.setDestinationEntity(129U);
    msg.seq = 4281477361U;
    msg.state = 92U;
    msg.error.assign("NLJGKZUYWLRXCLBIAVLACCSRSRXPHJHGCLVRVQJXGLIWVOYNSUYBIGRLNBQWQZGCCAXIXSBFUWSSKNMKDFDZNAZFHXWBYNPLDMOXZUITPW");

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
    msg.setTimeStamp(0.891314860859);
    msg.setSource(37467U);
    msg.setSourceEntity(169U);
    msg.setDestination(21794U);
    msg.setDestinationEntity(157U);
    msg.seq = 2529355542U;
    msg.state = 170U;
    msg.error.assign("KTKMKPXYDHRCJOBTIVSGZTDVNVMZZXCBHYLQDMPJBBFVSVAGNCUWVXJXPIHHNYQIAYNFXUCRANLJCRJNBWHUODHRGUGNNPGCGEEBFQRFZDECZWWWIHPATJQILPSLDOOUDMAAHVSPHNXWCIISLTFABFJEGNCXGZYYAVJWJOECRYHKPKDSSJKMEKWOOLQRUZU");

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
    msg.setTimeStamp(0.99141240661);
    msg.setSource(40284U);
    msg.setSourceEntity(243U);
    msg.setDestination(18958U);
    msg.setDestinationEntity(176U);
    msg.origin.assign("MCBIRZNWAIYOMDSCIKIUWJUAINBXXUBDNWEYLJFQYQNLMJRALZPBJXTKDWXNMBHJBICGGPQASWGVQVZPHQLCDUTOTZKTUYMDTUXZWFYIMXWZEEFSHRYRHAZFPBNYGBHNOFAPJ");
    msg.text.assign("MGCIILWMGTQBRPDQAXZNLPUYWCBBKFWHXHGKOTVETBFHDEBGYIKFLHUPAYXGBEZJXFNIASNVFAOMSKOIPDMPTKCVPANVIWNHXXUTFYVGYTLXERNAQTWQWFX");

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
    msg.setTimeStamp(0.107366012251);
    msg.setSource(52146U);
    msg.setSourceEntity(21U);
    msg.setDestination(23747U);
    msg.setDestinationEntity(60U);
    msg.origin.assign("WJQVBORZUWGGUZTTVXNQLBMEPROJESSSEFUBGWZYKKNUXIEJVHQBJPSSNQAIYHNPGWDKPUQIQHLDWMCDMEWPCCXYRAHEQWTZITVCNSVIGZJFKOAPNFSRLBMARJUXXGSNOLLHKYUBEYMQTLMQBCOOFZZKTAPCRMYBHCGCBFHIEZPDGLUFNJYXFUYAFSTRLNJDVFOKAQAIKHDIGLOWVYAMIJRVXRWTDNBUMHDED");
    msg.text.assign("DNXRSXJMCLXYSJAWAAOTCXDMBMZNYBGVZUCECZNFGLPMSQGHYHMGJCOJLYBZCPTOXBAJUQANFCZOLHEHTKCDSINDXFCBJEGTYOZIPGQWGWJTVWABQBXGHRUGYEKVKFEAVWRZUYRWFIIIUNKDVUHDODWGLIUTSMUZWPTLPPHVQNRRLXMDPXOXPYLSSAAPEJLRIHETDQZYKMBYKCOERHVMHFQIAKVBLKZOVOJPFQNKQRFNT");

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
    msg.setTimeStamp(0.633624068454);
    msg.setSource(511U);
    msg.setSourceEntity(2U);
    msg.setDestination(53388U);
    msg.setDestinationEntity(28U);
    msg.origin.assign("TTGNMDGKIDPDWNLQPPRHYQCAPIRJICHGXCAKHJQQDOOWKDVDZOYSKBZPTWFZQTYRYADVKYJNVJVGYKCIZCGSFQNWNUTJNSKSNZMROAXLRVDJVIHHDUUXWWDVPENEURPAFIEORZABFBIFJAOIPQIXLLWHJNHGFFHAUCMLYMTEWBXJYWLAXMBLKMZTFYZSBQPSKFMELVXHRECZUOUEYGLCCUPSOIGKZHXMJXSBNG");
    msg.text.assign("SOFLSNMUWPUGPLFHFNYQKXLMFICEVBEUMZTJVVKQTLXGDOPESUKDRIUMIEXZQGXJGEQVGGYTPDMSMBSIKKWBJXVKZY");

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
    msg.setTimeStamp(0.0913275092324);
    msg.setSource(676U);
    msg.setSourceEntity(166U);
    msg.setDestination(15044U);
    msg.setDestinationEntity(224U);
    msg.origin.assign("SPLUBKUESBFSKGRLRGAKBMJTXSVYJOHQZGPXJPVKLBRFQYYYUZNHZPIHIHWPMSFDQAXEYXDBGTLSKCCQMXWCXMQDAQTCXDJTOBNAJKDMVLUTJVVDLOQEGUNFNKRFPPCFHDCUXIZUGUTTSBHLWQGYWYBYOFLZCAZYXSAHALJVPWWERXUUMTCTZKRKNIZWQWOZFNYHAENNTMBIIGDCIN");
    msg.htime = 0.655562776817;
    msg.lat = 0.79860002966;
    msg.lon = 0.777572654169;
    const char tmp_msg_0[] = {-43, -119, -7, -77, -57, 66, -32, -101, 45, -14, -96, 114, -73, 69, 13, 10, -114, 82, -62, -50, -96, 44, 13, -38, 50, 82, 100, 86, -123, -87, -58, 74, -90, 118, -126, 78, 69, 13, 7, -17, 5, -108, -5, -77, 81, -94, -58, -125, -61, 38, 73, 21, 107, 111, -22, 25, 42, -91, -116, -70, -86, -6, -110, -91, 11, -118, 94, -102, 22, -10, 104, -114, 55, 83, -44, -118, -77, 31, 29, -1, -56, 59, -78, 76, -77, 32, 105, -36, -62, 16, -65, 55, 43, 40, -34, 93, 31, 119, -98, -18, 33, -105, 62, 38, -30, 20};
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
    msg.setTimeStamp(0.862019837441);
    msg.setSource(57855U);
    msg.setSourceEntity(248U);
    msg.setDestination(40972U);
    msg.setDestinationEntity(42U);
    msg.origin.assign("VNHKRSWQZLMIWSKAOUQTRFAFBSPEXTPEJVTQUQVEPOFHBNXMABUJUFPGCYTDKNLSXEAHCIB");
    msg.htime = 0.849143589954;
    msg.lat = 0.467623271144;
    msg.lon = 0.112982367751;
    const char tmp_msg_0[] = {90, -25, 44, 92, 76, -95, 115, -5, 80, 48, -1, 45, 94, 33, 85, -98, 113, -27, 46, 16, -53, -11, -112, -29, -34, 30, 111, -58, -49, 88, 48, 40, -12, 125, 77, -107, -102, 50, -1, -32, 4, 37, 12, -124, -105, -128, 48, 76, -111, -32, -41, 35, 56, -6, 62, 106, 36, 74, -69, -17, -11, -103, -4, -57, 115, -79, 117, 120, 9, -69, 81, 73, -74, -94, 73, -69, 98, -82, -84, 53, -42, -27, 41, -44, -57, 1, -102, -10, -38, -104, 117, 7, -118, 15, 103, -71, 117, -43, 65, -84, -109, -115, 108, 110, 72, -95, 94, -65, -92, 46, 107, -101, -65, -35, 80, -23, -17, -92, 120, -14, -117, 95, -41, 41, 77, -80, 50, -70, 2, 37, 102, 58, 122, -70, -111, 18, 28, -13, -17, -22, -91, 85, 103, 36, -11, -8, 64, 123, 12, 69, -126, 80, 91, 50, -102, 84, 54, 57, 8, 73, 39, 92, -114, -18, -80, -5, 23, 50, 59, -50, 100, -55, -3, 86, -56, -127, -57, 30, 5, -72, -117, 122, -45, -83, 51, 126, -64, 56, 9, 79, 0, -22, -80, 14, -58, 55, -45, -77};
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
    msg.setTimeStamp(0.482333838017);
    msg.setSource(59751U);
    msg.setSourceEntity(32U);
    msg.setDestination(43871U);
    msg.setDestinationEntity(107U);
    msg.origin.assign("ULWCFDZWIYILOQUDYRZBPTRTTYHNIZAIXUTBUMVBHPODOKLJRSMGNQANQEUBIIHCQZTXSKZKLKMEYKAPZPBXGBFYDWUGOVZNFRDYHJNTDVSBABKMSFDWNJZATEFKPBNQCMATYEKVONELWTGJDOAXFGPCOAAHFEPLRUDJLCQXSJOYMHYLFEPOFZEUDIGMLVWVKVNIJEGPOUXCRJHGMHQSAWQGJJHNRSRWVFXQMXBES");
    msg.htime = 0.752213636761;
    msg.lat = 0.1717071763;
    msg.lon = 0.774640342985;
    const char tmp_msg_0[] = {-67, 102, 112, -15, -69, -91, 73, 40, 90, -102, 13, -83, -67, 110, -63, -59, -82, 37, 24, -104, -108, 104, -128, 87, 99, 105, 53, -21, -102};
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
    msg.setTimeStamp(0.296127094811);
    msg.setSource(60475U);
    msg.setSourceEntity(135U);
    msg.setDestination(32779U);
    msg.setDestinationEntity(4U);
    msg.req_id = 7593U;
    msg.ttl = 17910U;
    msg.destination.assign("RFGMDFQGZQLQMIIVXNMEWMGOYXLBCSFAEUAHHQTDTQUFKGXFPOTACDLJHYVVZLDKXSCXVIVFXPNGSWPEJSDZJHGNKJRHMZGRAZRABLPIUWACYCHTPQYYWKRYHBDCKLCHIBPJMTEBFQSLOGOBSERGVWDDCINUKBXFUKFQXAZVJJBIEATAPYPLUQQBTFRHYLKVEPMIWOCROTJLJRJNOXDKMNPITZBWHSNTAENWUSYZWIMGVROWNCSUOV");
    const char tmp_msg_0[] = {95, 85, 106, -108, 80, -62, 90, 38, 109, 71, -84, -35, -50, 108, -6, 65, -48, -123, -56, 114, -99, 90, -79, 49, -61};
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
    msg.setTimeStamp(0.824211452367);
    msg.setSource(16107U);
    msg.setSourceEntity(118U);
    msg.setDestination(63489U);
    msg.setDestinationEntity(243U);
    msg.req_id = 62674U;
    msg.ttl = 56704U;
    msg.destination.assign("ZOFMGYUUGKTYIFOAFMGQVQCTZTZIAKJFIADRLRJLJTJGNZVFNBRKZINLVROMBJKPEKFQGHDHXLNLCJDHKHQAEFBCYNNER");
    const char tmp_msg_0[] = {24, 42, -118, 77, -104, -29, -62, -22, 31, 47, 29, 57, -6, 5, 44, 41, -37, 124, 16, -10, -74, 97, 36, 112, -80, 75, -18, 37, 89, -15, -19, -104, 60, -81, 76, -100, -115, -31, -114, 73, -57, -82, -106, 36, 60, -121, 121, 33, -14, -4, 114, -76, -128, 102, 49, -58, 125, -98, -115, -99, 103, -117, 0, -65, 101, -88, -15, -119, -23, -78, 109, 88, -70, 29, -64, -112, -125, -20, -63, 96, 52, -91, 121, 35, -28, 85, -121, -109, 19, -121, -65, -20, -98, 41, -102, -87, 46, 105, -70, -112, -6, 69, 8, -125, -4, 27, 31, 4, 21, 36, -83, -115, -114, 4, 106, -21, 53, -78, 32, 33, 55, 78, 20, -28, -17, 47, -5, 94, 24, -50, -34, 113, -40, 20, 25, 108, -18, 19, 23, 94, -45, 32, -12, -30, -74, -84, 70, -113, 82};
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
    msg.setTimeStamp(0.895453994454);
    msg.setSource(4795U);
    msg.setSourceEntity(3U);
    msg.setDestination(17069U);
    msg.setDestinationEntity(125U);
    msg.req_id = 6764U;
    msg.ttl = 10235U;
    msg.destination.assign("AKEZUQMUHKHZGGCSMURCABWHUNLQBVNL");
    const char tmp_msg_0[] = {-13, 91, 123, -3, -2, -122, 16, -24, 59, 52, 90, 22, 124, -39, -3, 51, -123, 107, 92, 48, -126, -48, 36, -29, -31, -78, 5, -102, -93, 68, 36, 17, 78, 24, -113, -63, 85, 27, -20, 90, -74, -118, -2, 43, -120, -104, 56, 93, 51, -65, -102, 125, 82, 101, 113, 14, 22, -79, -93, -48, 97, -50, 59, -118, 108, 44, -80, -47, 20, 105, 44, -81, 73, -44, 39, 87, -80, -29, -18, 36, 47, 58, -26, -80, 99, -2, 21, -25, 113, 74, 35, -53, 40, 50, 60, -106, -20, 60, 22, -28, -105, 95, 88, 39, -119, 68, 35, 42, -10, 35, -58, 121, 1, 60, 78, 43, -72, 125, -75, -42, 95, -119, -85, -99, 0, 114, -25, 96, -104, 56, -117, -71, -69, -108, -15, -104, -9, -112, -13, -66, 47, -99, -81, -121, 64, 108, -91, -40, -120, 40, -84, -9, 2, 31, 86, 125, 123, 14, 30, 27, -83, 5, 84, 5, -84, 36, 94, -43, -117, -9, -104, -10, -78, 50, -60, 105, -84, 78, -41, -73, 43, 82, 89, 108, -1, -75, 29, 21, 32, 30, 98, 11, 59, -87, 118, -73, 120, 75, -99, -107, -50, -119, -90};
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
    msg.setTimeStamp(0.863853874467);
    msg.setSource(25216U);
    msg.setSourceEntity(4U);
    msg.setDestination(44066U);
    msg.setDestinationEntity(180U);
    msg.req_id = 21885U;
    msg.status = 41U;
    msg.text.assign("PSLUFPDOXHQLBTVFLBGJVKUGANTEDAQYUNXYSKHWKIWYPZCJMEOCRENPDQMSXQOXTCIJBWFVRWIDZARFNRHQNWGZSHLPUEMACMLCLZFFNPVRGPCRQDIRDGIR");

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
    msg.setTimeStamp(0.596233758849);
    msg.setSource(21887U);
    msg.setSourceEntity(250U);
    msg.setDestination(25315U);
    msg.setDestinationEntity(33U);
    msg.req_id = 17187U;
    msg.status = 15U;
    msg.text.assign("DIFOPBCQHKLOHLCZGHTLEQQPX");

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
    msg.setTimeStamp(0.725426485494);
    msg.setSource(52335U);
    msg.setSourceEntity(9U);
    msg.setDestination(11683U);
    msg.setDestinationEntity(122U);
    msg.req_id = 38637U;
    msg.status = 16U;
    msg.text.assign("CFDQYPREWCYASMSJXFKAMWLMUSWTQBTRJQUYNIKDVOZSUZCEHTZNYPLGZANJVHOFFPGZGLBTVYXBVVLHETRMPXZRCKLSUFFKKDRWOLQYCDYJAKNIOWQDINBRAMMSMWJDPONGVJHICNUIEXEFAFRRHHQHBKSTBEIOJSKUZTJATHEDGIQTGG");

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
    msg.setTimeStamp(0.456121058054);
    msg.setSource(30611U);
    msg.setSourceEntity(106U);
    msg.setDestination(19451U);
    msg.setDestinationEntity(186U);
    msg.group_name.assign("NWCXWZZZSAMOZKPVZESTFIZKBWKPCYNRTQHMMZHLDBOMBDFQIGGMSASVAAHLOSOEVPAQLQQWYTYIFINENVXFCOGSHPDEWBXXXQJFLXGETPMJHN");
    msg.links = 809895272U;

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
    msg.setTimeStamp(0.935093302585);
    msg.setSource(2399U);
    msg.setSourceEntity(144U);
    msg.setDestination(46472U);
    msg.setDestinationEntity(164U);
    msg.group_name.assign("AMWMFDIMXBLJQRXLMNSHAAYXNDTXOQVYCMRHMGGNZYJLWULJMGBBXJSZJHEMPESWUCMYILPEJAHVJGFXUCPGPGKTZIIYTCORTXFLIVFXLDIKVWYGFJZOQTANQQFFLPXUODYEAOHQUZLQEXSURIRHBPURPPKWVDDZWFAFSBAQRTDESBSVVTQOKLUOFHUGKGCIZDUCAPWKNRVENWGDEBQZORBYNJYSSWTBECKOB");
    msg.links = 2415020224U;

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
    msg.setTimeStamp(0.9589635345);
    msg.setSource(12647U);
    msg.setSourceEntity(115U);
    msg.setDestination(36815U);
    msg.setDestinationEntity(71U);
    msg.group_name.assign("YDDRLTLCFPANWXWWRKCHUIHOSZUEPJEPGRHYFMMNTFSZGNITTSCGPDKDUILJSKSVFEH");
    msg.links = 325113303U;

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
    msg.setTimeStamp(0.686272276504);
    msg.setSource(6399U);
    msg.setSourceEntity(156U);
    msg.setDestination(27593U);
    msg.setDestinationEntity(144U);
    msg.groupname.assign("RACZGYASXLSPFMXDFYJJHKEWCMGAMQTKFRQEDLBSJDZXOXNGLPTOUGHSMUZMWPCHCJMVJOWCJPEQYQJTNZMTUYXISIWJTECUQAYXMSABXZYLSVOZXHNKWAOORVRTQQDHJNGEOYUEBGDFHLYNIRBERKLGCLRRDLNPKTOOGQBKIXHZSNXTIFPNDTDWFCVIVCBIMKTPFZFVKKGHGUS");
    msg.action = 103U;
    msg.grouplist.assign("ERQQDNIFSWXLYNIRUSIPTFBIMCDOSCWNZDUTKGNUYJZFPHPIOWZADLKEAAWSPFKXBJTFGKFHIVIVESBLFPTVKEAYYSEGOCOUOHQBJEITEQDPRXGSZVADVNVOSGGECBMM");

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
    msg.setTimeStamp(0.199744528617);
    msg.setSource(916U);
    msg.setSourceEntity(242U);
    msg.setDestination(19434U);
    msg.setDestinationEntity(6U);
    msg.groupname.assign("AQEKAHLWFZLCCJGUUNMVHNUTOSBDDKOPSKQVISHWKPWZBNFGQJASVAGPJLTKPOJFLYBYFACKIFKEPUIXQHDMGEJIZGXVRYTORTREIFNNAUXOHVMUKWDQXKFLJRZJTUZRDBKYMEAWECQCNPLPYIBDMBRFZZQALIATGVCXYHEXVYGRSHOTBNXMTZSYMLQMUEQGCVPOGIFBZLGJPHXUZEDLRRDWTHOYJCHCNWEXOSAORJBUSIDNT");
    msg.action = 47U;
    msg.grouplist.assign("ZRZNHIGVBQIJZKVFVBJVYPULJSUVTMXFONTBQMBCJBLEWDTZSDNSTYXIQDPBYOUDJYSBWFOMHAIWXGXORYEIVNKLRMJGOUCRDPDTQVIWJAPSKELRKGMVTHPGYURH");

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
    msg.setTimeStamp(0.534448136197);
    msg.setSource(3507U);
    msg.setSourceEntity(96U);
    msg.setDestination(1688U);
    msg.setDestinationEntity(114U);
    msg.groupname.assign("KVLKFSDSNTONPWRDUBQDFGBYUIHJDUUKGZRDMPDGRMYSICAUNERCCNYSOQATAXJYJBSTHTCERJMPEOQYEHOXNNJOQMRAREMWIVJCQWXBKSDGLEBGOJLAUQWTLIEOZHXTRLRLIUZNVAGJWXCHVB");
    msg.action = 9U;
    msg.grouplist.assign("PBWIEWRBXNZFSRTXKZFKUHJGGUPVDTYLWOVNQVFYMOPNQVASHYGCEEVJFLIMNSDSMPDIBIZIGRQJRZGECQBAJAGKSOCXTFCNYLJTUUQIDWGIZOSOOXHCIRDAQPVLNXBL");

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
    msg.setTimeStamp(0.464364668592);
    msg.setSource(52271U);
    msg.setSourceEntity(94U);
    msg.setDestination(17904U);
    msg.setDestinationEntity(230U);
    msg.value = 0.693397192407;
    msg.sys_src = 33094U;

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
    msg.setTimeStamp(0.484215602222);
    msg.setSource(9848U);
    msg.setSourceEntity(85U);
    msg.setDestination(22839U);
    msg.setDestinationEntity(49U);
    msg.value = 0.586972215899;
    msg.sys_src = 16848U;

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
    msg.setTimeStamp(0.91402971694);
    msg.setSource(35383U);
    msg.setSourceEntity(144U);
    msg.setDestination(10592U);
    msg.setDestinationEntity(99U);
    msg.value = 0.209525692884;
    msg.sys_src = 5030U;

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
    msg.setTimeStamp(0.00569621260559);
    msg.setSource(1730U);
    msg.setSourceEntity(117U);
    msg.setDestination(56253U);
    msg.setDestinationEntity(102U);
    msg.value = 0.222960066159;
    msg.units = 254U;

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
    msg.setTimeStamp(0.285018597826);
    msg.setSource(57017U);
    msg.setSourceEntity(81U);
    msg.setDestination(16542U);
    msg.setDestinationEntity(21U);
    msg.value = 0.856828918942;
    msg.units = 194U;

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
    msg.setTimeStamp(0.909950326845);
    msg.setSource(50989U);
    msg.setSourceEntity(21U);
    msg.setDestination(54285U);
    msg.setDestinationEntity(210U);
    msg.value = 0.0495617466396;
    msg.units = 215U;

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
    msg.setTimeStamp(0.833518630365);
    msg.setSource(55381U);
    msg.setSourceEntity(219U);
    msg.setDestination(26478U);
    msg.setDestinationEntity(107U);
    msg.base_lat = 0.237222438934;
    msg.base_lon = 0.0360071939667;
    msg.base_time = 0.381870452268;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 13926U;
    tmp_msg_0.destination = 41217U;
    tmp_msg_0.timeout = 0.806506869887;
    IMC::GroupMembershipState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.group_name.assign("CAJTBOCFNGHZOCFGYTTOXXFILURMVYKDVLFTPLJADWVANOSXBNPJHGMQJQCEULYWFRHYALOPXAZGEYNVYCIZGWRRNWKDZQSJG");
    tmp_tmp_msg_0_0.links = 3075425118U;
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
    msg.setTimeStamp(0.967764348357);
    msg.setSource(43414U);
    msg.setSourceEntity(198U);
    msg.setDestination(24300U);
    msg.setDestinationEntity(51U);
    msg.base_lat = 0.0725033373809;
    msg.base_lon = 0.817030796564;
    msg.base_time = 0.154094662366;

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
    msg.setTimeStamp(0.116140989861);
    msg.setSource(58560U);
    msg.setSourceEntity(202U);
    msg.setDestination(2963U);
    msg.setDestinationEntity(173U);
    msg.base_lat = 0.951696014136;
    msg.base_lon = 0.183365364833;
    msg.base_time = 0.375912200795;

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
    msg.setTimeStamp(0.757579046786);
    msg.setSource(8583U);
    msg.setSourceEntity(152U);
    msg.setDestination(465U);
    msg.setDestinationEntity(223U);
    msg.base_lat = 0.26279642583;
    msg.base_lon = 0.297724069865;
    msg.base_time = 0.469957513367;
    const char tmp_msg_0[] = {65, 63, -107, -48, 91, 96, 2, -107, 115, -116, -94, 63, -67, 35, -117, 77, -98, -128, 48, 125, -33, -6, -114, 12, -1, -28, 22, -96, -114, 10, 90, 102, 4, -69, -16, -60, -48, -89, 121, -58, -7, -36, -115, -114, 76, 112, 60, -63, 116, 35, 100, 21, 84, 23, 117, -30, -94, 7, -7, 108, 27, 46, 65, 79, -119, -96, 76, -76, -92, 107, 77, -67, -10, 30, -91, -12, 0, -69, -117, 69, -1, 88, -87, 42, -55, 63, 89, 57, 91, 82, 24, -54, 125, -68, -98, 51, -111, -123, 24, -62, -108, 47, 99, 71, -41, 123, 99, -39, -27, -97, 97, 29, 42, -31, -66, -52, -25, -38, 71, -111, 2, -122, 16, 73, 67, -60, 33, 63, 109, 83, 49, -85, 22, -1, 87, -31, 59, -124, -88, -111, 123, -3, 109, 5, 10, -29, 96, 75, 28, 29, 34, -95, 22, 49, 12, -65, 73, 126, 36, 0, -2, -44, -108, 71, -39, -34, 121, -78, 7, -123, -107, -3, -82, -125, 62, 32, -10, -72, -33, -104, 119, 92, -125, -49, -36, -97, 106, -41, -19, -44, 119, -67, -64, -56, 103, 105, 103};
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
    msg.setTimeStamp(0.422765840805);
    msg.setSource(46139U);
    msg.setSourceEntity(41U);
    msg.setDestination(49048U);
    msg.setDestinationEntity(26U);
    msg.base_lat = 0.745913471302;
    msg.base_lon = 0.756701903494;
    msg.base_time = 0.653357853596;
    const char tmp_msg_0[] = {-112, -25, -17, 25, 10, -4, -60, 52, 98, -124, -34, -44, -67, 47, 88, -86, 108, -17, -16, -88, 32, 61, 106, -58, 125, 46};
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
    msg.setTimeStamp(0.479821758755);
    msg.setSource(14418U);
    msg.setSourceEntity(81U);
    msg.setDestination(4269U);
    msg.setDestinationEntity(17U);
    msg.base_lat = 0.324041049972;
    msg.base_lon = 0.496287078172;
    msg.base_time = 0.736116213808;
    const char tmp_msg_0[] = {16, -93, 103, 92, 95, -40, -70, -98, -96, -88, -56, -81, -106, 92, 64, -93, -85, -114, 81, 46, -99, 125, -91, -103, 26, 116, 32, -41, -47, -74, 75, -38, 96, -35, -72, 51, 109, -69, 91, -43, 75, 3, 120, -45, 30, 63, -11, 35, -85, -81, -33, -34, -83, -107, -52, 125, -85, -79, 56, 47, -6, 73, 4, 99, 75, 111, -72, 59, -95, 39, 26, -31, 15, 36, -43, 80, -43, 93, -72, 85, -80, -63, -13, -64, 69, -32, -121, 85, 112, 37, 119, -114, -85, 35, 77, 122, 98, 115, 96, -109, -117, 93, -88, 29, -77, -78, 18, -82};
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
    msg.setTimeStamp(0.768687534536);
    msg.setSource(8773U);
    msg.setSourceEntity(46U);
    msg.setDestination(32447U);
    msg.setDestinationEntity(66U);
    msg.sys_id = 5393U;
    msg.priority = -15;
    msg.x = 25643;
    msg.y = -10971;
    msg.z = 23632;
    msg.t = -12781;
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.240765812451;
    tmp_msg_0.units = 148U;
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
    msg.setTimeStamp(0.389118156225);
    msg.setSource(18011U);
    msg.setSourceEntity(227U);
    msg.setDestination(19886U);
    msg.setDestinationEntity(146U);
    msg.sys_id = 37003U;
    msg.priority = -87;
    msg.x = 3875;
    msg.y = 8022;
    msg.z = -9499;
    msg.t = 17447;
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 23U;
    tmp_msg_0.range = 0.979215599269;
    tmp_msg_0.acceptance = 147U;
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
    msg.setTimeStamp(0.212014216034);
    msg.setSource(21046U);
    msg.setSourceEntity(12U);
    msg.setDestination(16220U);
    msg.setDestinationEntity(64U);
    msg.sys_id = 3331U;
    msg.priority = -116;
    msg.x = -6365;
    msg.y = 16129;
    msg.z = 30074;
    msg.t = 13061;
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 121U;
    tmp_msg_0.goal_id.assign("BXJKKFXJHPFGREVQKHRWNMCZKGSVPNHVGNOHUBTKCBODXELDDWAKIWSQHVSXIAYWMZUQVOKPYMKCYYOROQYGLGQCFQIHJLUCBBFE");
    tmp_msg_0.goal_xml.assign("SLZBTZCJFCPXIVMOLFPGCGZUAVCZHXBYGJTVDLRAGIUUFFQQJLEDTHIPMJZBNVXLDTZZAFLVJICDTURLQEMYUYWAECVKKGHGFMOXMDIRRHUPATWMHZDDEDUXQYWEIGQVISCWYYRPCPTOFKKCBUYGRJMQUOTMKNWOBXRANWNIVJIKKHMKOLHHBSOERGAIPQSSTWSDOHLNVBWEQVTNRWKAOKUZAWFXEXBRNABN");
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
    msg.setTimeStamp(0.137366600455);
    msg.setSource(60234U);
    msg.setSourceEntity(156U);
    msg.setDestination(61562U);
    msg.setDestinationEntity(128U);
    msg.req_id = 57194U;
    msg.type = 42U;
    msg.max_size = 47035U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.190175459613;
    tmp_msg_0.base_lon = 0.234771887757;
    tmp_msg_0.base_time = 0.0874748781431;
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
    msg.setTimeStamp(0.412509955324);
    msg.setSource(2571U);
    msg.setSourceEntity(222U);
    msg.setDestination(27771U);
    msg.setDestinationEntity(95U);
    msg.req_id = 20678U;
    msg.type = 91U;
    msg.max_size = 36413U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.100305536734;
    tmp_msg_0.base_lon = 0.662315158687;
    tmp_msg_0.base_time = 0.442027118579;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 50723U;
    tmp_tmp_msg_0_0.destination = 100U;
    tmp_tmp_msg_0_0.timeout = 0.470963474552;
    IMC::MapFeature tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.id.assign("JOXIWOWHXFIFIHZADXEFVRTSDONCTSVZFOAIPQUCFHGBYALKWVWREGEWQKXPVUNBEHQNKYHBIPWYMCLHRSMIGFKFEURREXAIKVXZGDSJDZTFNUUPCHDBKJVGBDHQQXTQGYRACUNJKBPEDVFJJYWYSHRONLALBZQMTUOMOTAROGMCCTKNOJYJZNMUMIWLEXOLIZLDPTSLIKLSYMACQBPSBVZPMDUGYRJGETNZNCEPGXFDAKZVJWQSTLR");
    tmp_tmp_tmp_msg_0_0_0.feature_type = 198U;
    tmp_tmp_tmp_msg_0_0_0.rgb_red = 107U;
    tmp_tmp_tmp_msg_0_0_0.rgb_green = 191U;
    tmp_tmp_tmp_msg_0_0_0.rgb_blue = 133U;
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
    msg.setTimeStamp(0.224206493318);
    msg.setSource(30507U);
    msg.setSourceEntity(27U);
    msg.setDestination(2809U);
    msg.setDestinationEntity(227U);
    msg.req_id = 15246U;
    msg.type = 4U;
    msg.max_size = 46546U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.826206681498;
    tmp_msg_0.base_lon = 0.113153740757;
    tmp_msg_0.base_time = 0.556867350971;
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
    msg.setTimeStamp(0.558376270331);
    msg.setSource(1367U);
    msg.setSourceEntity(91U);
    msg.setDestination(26124U);
    msg.setDestinationEntity(69U);
    msg.original_source = 1665U;
    msg.destination = 65264U;
    msg.timeout = 0.0940952556605;
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JVILDPNQEBPWIBYTXFVRKRJTFUSNGRUSBSIUUNUNUTVRMMHRSKJOYFMDMOREQ");
    tmp_msg_0.sys_type = 198U;
    tmp_msg_0.owner = 17030U;
    tmp_msg_0.lat = 0.358156671341;
    tmp_msg_0.lon = 0.838461587523;
    tmp_msg_0.height = 0.770727809565;
    tmp_msg_0.services.assign("MFZIMCCSUKDCLWPHKDQWISGZJDABMFLYBQQMCCWRYKEAHIDRPEHHVAPQBGWPOVZECORHEPXKXABLNCUPAKODZJNWFMNOXUYSWHBZLRBSYQLIQMBGYGAWLVYPMCFUDCIKPYOVJIMRHYJVLZMHTGEFIZSBGZINAATTGCTFXWLJJKRHTSOXGNGVKESXSFRJADLZJYSLNXUOIUEIRNWJFZERMQJFPNTDQXNTTBKE");
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
    msg.setTimeStamp(0.834517952836);
    msg.setSource(23828U);
    msg.setSourceEntity(50U);
    msg.setDestination(88U);
    msg.setDestinationEntity(25U);
    msg.original_source = 17628U;
    msg.destination = 27317U;
    msg.timeout = 0.0109856191678;
    IMC::VehicleMedium tmp_msg_0;
    tmp_msg_0.medium = 129U;
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
    msg.setTimeStamp(0.00829500864658);
    msg.setSource(31456U);
    msg.setSourceEntity(143U);
    msg.setDestination(1450U);
    msg.setDestinationEntity(254U);
    msg.original_source = 18040U;
    msg.destination = 57554U;
    msg.timeout = 0.97312153865;
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 101U;
    tmp_msg_0.mode.assign("FXRYTPZFQOIPGDSXRAEGVRONYMNXXLHFOOTWLKFKUNUEISTFUWTXRSO");
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
    msg.setTimeStamp(0.565081110416);
    msg.setSource(41337U);
    msg.setSourceEntity(168U);
    msg.setDestination(41141U);
    msg.setDestinationEntity(87U);
    msg.id = 101U;
    msg.range = 0.835877709768;

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
    msg.setTimeStamp(0.113268552198);
    msg.setSource(41209U);
    msg.setSourceEntity(204U);
    msg.setDestination(48878U);
    msg.setDestinationEntity(82U);
    msg.id = 74U;
    msg.range = 0.622410771942;

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
    msg.setTimeStamp(0.0602390966909);
    msg.setSource(60598U);
    msg.setSourceEntity(59U);
    msg.setDestination(36258U);
    msg.setDestinationEntity(144U);
    msg.id = 32U;
    msg.range = 0.420436709076;

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
    msg.setTimeStamp(0.936305662006);
    msg.setSource(36096U);
    msg.setSourceEntity(9U);
    msg.setDestination(24303U);
    msg.setDestinationEntity(46U);
    msg.beacon.assign("HWWKGPDWLYXOFEMDKJKAXRJQCQOZIJKJFTYHUVSBJWCKNDVENMBZOLXNTWLUOXRDRZGXUUKSVESEUOQGMTTZIEVDYIRHNWFUZSJYGWQGUTAITHMJPSSWFBIIVNGFICLIPJCZPFKDGGKEDWVVREPDLBYYULBOK");
    msg.lat = 0.573123355632;
    msg.lon = 0.158455024967;
    msg.depth = 0.903667056158;
    msg.query_channel = 58U;
    msg.reply_channel = 20U;
    msg.transponder_delay = 128U;

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
    msg.setTimeStamp(0.548767603289);
    msg.setSource(19167U);
    msg.setSourceEntity(136U);
    msg.setDestination(2037U);
    msg.setDestinationEntity(119U);
    msg.beacon.assign("STVWYZNJWAXDVMXZLEOXLJPMIQKHXRFWZURKYXYPVREEXFKAOTKSLUJZGWIDUNQTAVXQSUTVMHJPKNHUBSRQORSYRBNZOIQIFIBPQIFTVUGKHGKIHNEFRPZICBTLNPAPJHORPECZMCWVDJOXSOIMRVHGXSZTEAFFPSXGBBQEMBOFHFVHLLZHEMQQDKAUANGQTOTCWACCLJBGSDWCYMJDKYZCCDGUOMLRAEFYAWDGMGLJB");
    msg.lat = 0.177968007108;
    msg.lon = 0.00123021221105;
    msg.depth = 0.616352404604;
    msg.query_channel = 160U;
    msg.reply_channel = 190U;
    msg.transponder_delay = 186U;

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
    msg.setTimeStamp(0.872201075103);
    msg.setSource(43123U);
    msg.setSourceEntity(79U);
    msg.setDestination(11652U);
    msg.setDestinationEntity(45U);
    msg.beacon.assign("BHAVUEPRCDZSDQOVRQVBSXAYCUWOCCNDTKLINSXHYDNCEIXSAGOHESIPYZYKESVHLVBDLBMIRTMINLCKULUGTOFEPFPHBRYXKOMHZZSTENWQUTYQJMEZOXCNVOEZYLWVGSZFKKALDDALXRMBHUNRGWEGPEGKWRWGQQBZUAGJXPRNFFVKLCFOJBMDJIMTTBXYBYSHXAIPVFVMJLUTPCFASZRUJTXHGJ");
    msg.lat = 0.161105607097;
    msg.lon = 0.606276055139;
    msg.depth = 0.983449642887;
    msg.query_channel = 43U;
    msg.reply_channel = 72U;
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
    msg.setTimeStamp(0.482400324303);
    msg.setSource(36219U);
    msg.setSourceEntity(210U);
    msg.setDestination(44233U);
    msg.setDestinationEntity(229U);
    msg.op = 178U;

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
    msg.setTimeStamp(0.637248901607);
    msg.setSource(30192U);
    msg.setSourceEntity(75U);
    msg.setDestination(5862U);
    msg.setDestinationEntity(156U);
    msg.op = 19U;

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
    msg.setTimeStamp(0.765107915949);
    msg.setSource(9825U);
    msg.setSourceEntity(242U);
    msg.setDestination(46110U);
    msg.setDestinationEntity(241U);
    msg.op = 104U;

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
    msg.setTimeStamp(0.634772050872);
    msg.setSource(7008U);
    msg.setSourceEntity(99U);
    msg.setDestination(9639U);
    msg.setDestinationEntity(199U);
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.627353630488;
    tmp_msg_0.converg = 0.0739620330944;
    tmp_msg_0.turbulence = 0.220167052454;
    tmp_msg_0.possimmon = 76U;
    tmp_msg_0.commmon = 164U;
    tmp_msg_0.convergmon = 188U;
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
    msg.setTimeStamp(0.279006429384);
    msg.setSource(58164U);
    msg.setSourceEntity(31U);
    msg.setDestination(25123U);
    msg.setDestinationEntity(133U);
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 18468U;
    tmp_msg_0.ttl = 34277U;
    tmp_msg_0.destination.assign("CLPLRYLRCIKPTNFSWGZOPQFBHWHXYUYAWDLIDBARQQBOXGDQRKPEDWBNVEDIHMEDLLAJRIFOYDYQHSPRTYNJDUAEJVMMEFJNVHOKASVFGEZIDHSQVNQCNACLTCWVFVBVTBXILXMCZMKHDYRTSJMNTKUNAZOCSPIANSCNJZMPKIPGBUYVZIFOMAKOEJTJMSWBZHUQV");
    const char tmp_tmp_msg_0_0[] = {-18, 124, 28, 69, -44, -45, 6, -114, 57, -125, -77, -127, -24, -30, 92, 94, 61, 15, -124, 96, 55, 115, 52, 41, 0, -27, -27, -28, 51, -52, -15, -43, 109, 52, 98, 52, 106, 4, 6, 34, -51, -18, -7, -124, 7, 88, -110, 65, 110, -118, -31, 93, -100, -22, 31, 68, -86, 62, 20, -115, 88, 118, 101, 22, -15, 119, 37, -67, 41, -112, 124, 68, 63, 96, -8, 58, 49, -52, -58, -103, 11, 48, -68, 100, -107, 39, 98, -51, 31, -78, -102, -116, 11, 95, -112, 62, 3, 1, 102, 126, 19, -124, 74, -68, -115, -22, 77, -94, -105, -49, 76, -15, -22, -79, 68, -115, -36, 112, -78, 104, 52, 98, 13, -24, 2, -120, 66, 31, -33, -1, 70, -35, 54, -95, -87, -61, 67, -108, -25, 101, -53, 113, 53, -118, -125, -84, -79, -17, 111, -71, -50, 7, -53, 113, -82, 21, 23, 94, -105, -98, 20, 45, 49, 95, -94, 104, -44, 106, 125, -112, -31, 110, -122, -60, 1, 45, 76, -56, 70, 88, 112, 16, -79, -59, -6, -24, 93, 37, 111, -120, -93, 30, 79, -37, 90, 53, 114, 122, 65, -48, 71, 121, 111, 89, -24, 35, 97, 92, -91, 89, -81, 66, -13, -45, -114, 118, 93, 12, -103, 38, 48, -16, -61, -100, 80, 118, 17};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.567772277665);
    msg.setSource(25516U);
    msg.setSourceEntity(125U);
    msg.setDestination(4187U);
    msg.setDestinationEntity(91U);
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.686377117846;
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
    msg.setTimeStamp(0.373565245627);
    msg.setSource(22743U);
    msg.setSourceEntity(121U);
    msg.setDestination(15975U);
    msg.setDestinationEntity(177U);
    msg.op = 192U;
    msg.system.assign("GKIOVAKWDPHYDQSGQOPFIBOVTKOIDSXQPTXRXGYJNLLJJCMYARKQKVMEXVDCLJLTRQCUAPMTGELWBMFPSTQIZAMPTIZCKHUKPNNEXOHVHFEUNLUJPZEHEJUEZSTCDAGGLHFFFIFTMOAADXZWKS");
    msg.range = 0.791420287689;
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 18U;
    tmp_msg_0.goal_id.assign("GBOMUUBEBAFZXCDOQQIBEKAFMWYVZTIMMDMVJZVUVYTYJSXMUAYGHZCEKRPENRFKWEAVXWJDXHWQZBOMZOLDJFCKAGEPPFTLRVTRSRSAHTFEXPXTDLLHKPMHVSZNNWITSEJOJNIGTYUGGCPKFHVHDPW");
    tmp_msg_0.goal_xml.assign("LOVWSYGTICXGXOCQPYSUPIOHCZFIWKOFGEICHATAKWBNBAELSTMRBHNQXBILW");
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
    msg.setTimeStamp(0.235159865469);
    msg.setSource(40143U);
    msg.setSourceEntity(209U);
    msg.setDestination(25431U);
    msg.setDestinationEntity(126U);
    msg.op = 13U;
    msg.system.assign("XQWRBPDJTFPGOTIVSVGM");
    msg.range = 0.894075949154;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 43454U;
    tmp_msg_0.off_x = 0.231297620802;
    tmp_msg_0.off_y = 0.474773437607;
    tmp_msg_0.off_z = 0.883658447651;
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
    msg.setTimeStamp(0.739859174439);
    msg.setSource(47777U);
    msg.setSourceEntity(64U);
    msg.setDestination(51291U);
    msg.setDestinationEntity(195U);
    msg.op = 54U;
    msg.system.assign("DLGXVJODTSSWLCUAGOXXXYXOILAYEVJEFJWWQAZRWFSIYWTIFUTQKJQOUGWZBGNYGDKKCM");
    msg.range = 0.866974335583;
    IMC::HistoricTelemetry tmp_msg_0;
    tmp_msg_0.altitude = 0.786963603382;
    tmp_msg_0.roll = 45876U;
    tmp_msg_0.pitch = 41147U;
    tmp_msg_0.yaw = 29349U;
    tmp_msg_0.speed = 7576;
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
    msg.setTimeStamp(0.954017582933);
    msg.setSource(29687U);
    msg.setSourceEntity(101U);
    msg.setDestination(11576U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.0124662843245);
    msg.setSource(43568U);
    msg.setSourceEntity(236U);
    msg.setDestination(62537U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.00164207303703);
    msg.setSource(34334U);
    msg.setSourceEntity(49U);
    msg.setDestination(1828U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.71862243226);
    msg.setSource(44391U);
    msg.setSourceEntity(12U);
    msg.setDestination(30053U);
    msg.setDestinationEntity(16U);
    msg.list.assign("VHMHJQHGARZOELDKNGYOOVLRSCTRLQLMOQKISEFEWVLYPPBUOWMMQLOYGHUACIIXEYTBIARFUZTFTDKVPTELQSVXKJNEUUUVJACAGTXQHBZDZNPCBKDQDPRGNMMROWNHSGECFTIRKBBSSELISXYUFIAYNPJKTCJZWAQIDOTWNJXFHYFVPMSCPMUHVXJSGDFNPFNXTQZFWUALAZZCWMCGMNZIPVXGHEBSKJ");

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
    msg.setTimeStamp(0.75828040379);
    msg.setSource(41517U);
    msg.setSourceEntity(76U);
    msg.setDestination(6227U);
    msg.setDestinationEntity(183U);
    msg.list.assign("VFGKFANXCQIHGQSBEZOJBYUQJHEURYHALRFVNGUMRGGDODTKUXJYCWLWWEHNKYIKWIBKJKYUUTYRMAIDDROEOSYDNFSPIXXNILBTEVPAHUSVPHRGPWQLMODWQPIZJLAEMZZULBJJAQZQWRIMMCEWVYVIUOJY");

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
    msg.setTimeStamp(0.428551212356);
    msg.setSource(13872U);
    msg.setSourceEntity(34U);
    msg.setDestination(26587U);
    msg.setDestinationEntity(216U);
    msg.list.assign("HYGUPNACMXUYDEYXVTWUKTZEWQKFGJAUDQSYEXGVN");

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
    msg.setTimeStamp(0.161288564633);
    msg.setSource(41057U);
    msg.setSourceEntity(35U);
    msg.setDestination(54169U);
    msg.setDestinationEntity(68U);
    msg.peer.assign("STFLNDUQFZNJDJDQZSZLABOXWUEOBFIYYLWRPRYGRKHYNIYNJUPMNETQCTTVCYMUUMRGGLPAOEMPJRKLCIGTBAHEZPUSWHIJUXLQSYWVWOIRKRZXVOWMSTHVFOHJXLAKIKDETBLSIJNXTPDIAOEXEBPLTNUZJUCHGHGYERCITQNQMVHIROVGDFEZCQOAEBFWKPGKANFODKZXQBVXBSJXYLMDWAXJPW");
    msg.rssi = 0.512354685476;
    msg.integrity = 44433U;

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
    msg.setTimeStamp(0.669416561807);
    msg.setSource(62267U);
    msg.setSourceEntity(172U);
    msg.setDestination(3120U);
    msg.setDestinationEntity(95U);
    msg.peer.assign("NDXJTHDLOFGOZBGFUXNQLTAPQF");
    msg.rssi = 0.138485830014;
    msg.integrity = 57807U;

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
    msg.setTimeStamp(0.322489874693);
    msg.setSource(61482U);
    msg.setSourceEntity(33U);
    msg.setDestination(46127U);
    msg.setDestinationEntity(117U);
    msg.peer.assign("ADZELHRGTTAHXAGXSYBYGUYJONFRYFVBCKZNDFIQKKQHNRVZQLTJARFSJEXTPCQIBZNERPMFAYPZAVJNYOOWGMMNDIQFRIMDZQKFVTCXJKUTBFKHGQHIORBT");
    msg.rssi = 0.246454376105;
    msg.integrity = 53113U;

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
    msg.setTimeStamp(0.385184576393);
    msg.setSource(65014U);
    msg.setSourceEntity(248U);
    msg.setDestination(36667U);
    msg.setDestinationEntity(59U);
    msg.value = 16534;

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
    msg.setTimeStamp(0.754100214922);
    msg.setSource(35324U);
    msg.setSourceEntity(71U);
    msg.setDestination(19924U);
    msg.setDestinationEntity(40U);
    msg.value = -13267;

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
    msg.setTimeStamp(0.162821233325);
    msg.setSource(52394U);
    msg.setSourceEntity(65U);
    msg.setDestination(40165U);
    msg.setDestinationEntity(184U);
    msg.value = -24774;

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
    msg.setTimeStamp(0.974738032534);
    msg.setSource(34372U);
    msg.setSourceEntity(62U);
    msg.setDestination(3289U);
    msg.setDestinationEntity(98U);
    msg.value = 0.998810668942;

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
    msg.setTimeStamp(0.0298072842921);
    msg.setSource(10671U);
    msg.setSourceEntity(233U);
    msg.setDestination(52227U);
    msg.setDestinationEntity(241U);
    msg.value = 0.910060687818;

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
    msg.setTimeStamp(0.822191829933);
    msg.setSource(23483U);
    msg.setSourceEntity(197U);
    msg.setDestination(55955U);
    msg.setDestinationEntity(199U);
    msg.value = 0.607333248259;

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
    msg.setTimeStamp(0.863256924193);
    msg.setSource(41757U);
    msg.setSourceEntity(134U);
    msg.setDestination(59203U);
    msg.setDestinationEntity(232U);
    msg.value = 0.506991031972;

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
    msg.setTimeStamp(0.903937864378);
    msg.setSource(13920U);
    msg.setSourceEntity(215U);
    msg.setDestination(40465U);
    msg.setDestinationEntity(120U);
    msg.value = 0.682269390095;

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
    msg.setTimeStamp(0.835397140527);
    msg.setSource(21376U);
    msg.setSourceEntity(135U);
    msg.setDestination(40157U);
    msg.setDestinationEntity(236U);
    msg.value = 0.349751284299;

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
    msg.setTimeStamp(0.0162487598922);
    msg.setSource(64463U);
    msg.setSourceEntity(199U);
    msg.setDestination(12023U);
    msg.setDestinationEntity(37U);
    msg.validity = 17305U;
    msg.type = 175U;
    msg.utc_year = 15906U;
    msg.utc_month = 171U;
    msg.utc_day = 61U;
    msg.utc_time = 0.845992548493;
    msg.lat = 0.416835687313;
    msg.lon = 0.612381428449;
    msg.height = 0.955589319189;
    msg.satellites = 211U;
    msg.cog = 0.410898176497;
    msg.sog = 0.20115987595;
    msg.hdop = 0.0741146365966;
    msg.vdop = 0.116204727508;
    msg.hacc = 0.180103575065;
    msg.vacc = 0.362191274707;

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
    msg.setTimeStamp(0.88440004058);
    msg.setSource(23436U);
    msg.setSourceEntity(103U);
    msg.setDestination(56626U);
    msg.setDestinationEntity(130U);
    msg.validity = 64360U;
    msg.type = 74U;
    msg.utc_year = 58797U;
    msg.utc_month = 194U;
    msg.utc_day = 130U;
    msg.utc_time = 0.641030845922;
    msg.lat = 0.92227763446;
    msg.lon = 0.873557166858;
    msg.height = 0.0368276717304;
    msg.satellites = 222U;
    msg.cog = 0.195119574833;
    msg.sog = 0.338484138628;
    msg.hdop = 0.375679818974;
    msg.vdop = 0.576495569571;
    msg.hacc = 0.343716246336;
    msg.vacc = 0.967789277619;

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
    msg.setTimeStamp(0.812672223128);
    msg.setSource(19684U);
    msg.setSourceEntity(93U);
    msg.setDestination(62376U);
    msg.setDestinationEntity(17U);
    msg.validity = 56568U;
    msg.type = 113U;
    msg.utc_year = 23864U;
    msg.utc_month = 196U;
    msg.utc_day = 86U;
    msg.utc_time = 0.875793906189;
    msg.lat = 0.414815316608;
    msg.lon = 0.397393622127;
    msg.height = 0.178593718341;
    msg.satellites = 1U;
    msg.cog = 0.745989824728;
    msg.sog = 0.0192832608773;
    msg.hdop = 0.549361783663;
    msg.vdop = 0.735703850967;
    msg.hacc = 0.435393290429;
    msg.vacc = 0.42711490343;

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
    msg.setTimeStamp(0.925716361447);
    msg.setSource(2808U);
    msg.setSourceEntity(11U);
    msg.setDestination(8047U);
    msg.setDestinationEntity(50U);
    msg.time = 0.414249140135;
    msg.phi = 0.272021338413;
    msg.theta = 0.606859765011;
    msg.psi = 0.86232675141;
    msg.psi_magnetic = 0.270147794182;

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
    msg.setTimeStamp(0.919146942478);
    msg.setSource(39219U);
    msg.setSourceEntity(116U);
    msg.setDestination(29093U);
    msg.setDestinationEntity(2U);
    msg.time = 0.218984152321;
    msg.phi = 0.276905970237;
    msg.theta = 0.994195255547;
    msg.psi = 0.658221788029;
    msg.psi_magnetic = 0.602482718689;

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
    msg.setTimeStamp(0.233947613521);
    msg.setSource(57570U);
    msg.setSourceEntity(176U);
    msg.setDestination(12517U);
    msg.setDestinationEntity(8U);
    msg.time = 0.0893651865644;
    msg.phi = 0.451739017421;
    msg.theta = 0.788302043345;
    msg.psi = 0.259883690708;
    msg.psi_magnetic = 0.402744982422;

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
    msg.setTimeStamp(0.672082554604);
    msg.setSource(28812U);
    msg.setSourceEntity(99U);
    msg.setDestination(6377U);
    msg.setDestinationEntity(21U);
    msg.time = 0.500126688284;
    msg.x = 0.669897205919;
    msg.y = 0.2074987881;
    msg.z = 0.947056559438;
    msg.timestep = 0.889738905343;

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
    msg.setTimeStamp(0.749161604607);
    msg.setSource(50246U);
    msg.setSourceEntity(175U);
    msg.setDestination(16005U);
    msg.setDestinationEntity(207U);
    msg.time = 0.611900855615;
    msg.x = 0.882883802981;
    msg.y = 0.120066505941;
    msg.z = 0.354330672076;
    msg.timestep = 0.670683119256;

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
    msg.setTimeStamp(0.509580604182);
    msg.setSource(60710U);
    msg.setSourceEntity(33U);
    msg.setDestination(6694U);
    msg.setDestinationEntity(8U);
    msg.time = 0.97257229068;
    msg.x = 0.146073633111;
    msg.y = 0.126966073085;
    msg.z = 0.971570450896;
    msg.timestep = 0.244983040459;

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
    msg.setTimeStamp(0.967598306823);
    msg.setSource(33458U);
    msg.setSourceEntity(19U);
    msg.setDestination(36181U);
    msg.setDestinationEntity(220U);
    msg.time = 0.306293147373;
    msg.x = 0.586527079067;
    msg.y = 0.299060543919;
    msg.z = 0.557115589149;

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
    msg.setTimeStamp(0.321463358104);
    msg.setSource(64229U);
    msg.setSourceEntity(165U);
    msg.setDestination(18188U);
    msg.setDestinationEntity(37U);
    msg.time = 0.707509366332;
    msg.x = 0.140502994397;
    msg.y = 0.804859106926;
    msg.z = 0.858081299065;

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
    msg.setTimeStamp(0.741266083663);
    msg.setSource(55955U);
    msg.setSourceEntity(11U);
    msg.setDestination(8992U);
    msg.setDestinationEntity(115U);
    msg.time = 0.102854482838;
    msg.x = 0.437294493346;
    msg.y = 0.8190195082;
    msg.z = 0.209147153704;

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
    msg.setTimeStamp(0.0369784029983);
    msg.setSource(6995U);
    msg.setSourceEntity(229U);
    msg.setDestination(47231U);
    msg.setDestinationEntity(120U);
    msg.time = 0.074568530099;
    msg.x = 0.719997335747;
    msg.y = 0.292829991651;
    msg.z = 0.0104005920091;

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
    msg.setTimeStamp(0.451025577959);
    msg.setSource(10419U);
    msg.setSourceEntity(192U);
    msg.setDestination(62080U);
    msg.setDestinationEntity(82U);
    msg.time = 0.303846646129;
    msg.x = 0.154860332958;
    msg.y = 0.418094971108;
    msg.z = 0.00676433635964;

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
    msg.setTimeStamp(0.518572919924);
    msg.setSource(37619U);
    msg.setSourceEntity(194U);
    msg.setDestination(60067U);
    msg.setDestinationEntity(118U);
    msg.time = 0.629541380929;
    msg.x = 0.324903884734;
    msg.y = 0.792682656914;
    msg.z = 0.450321975081;

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
    msg.setTimeStamp(0.818809939096);
    msg.setSource(30750U);
    msg.setSourceEntity(137U);
    msg.setDestination(7416U);
    msg.setDestinationEntity(123U);
    msg.time = 0.639814461173;
    msg.x = 0.182681905553;
    msg.y = 0.838699048122;
    msg.z = 0.244214884099;

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
    msg.setTimeStamp(0.487742131006);
    msg.setSource(39423U);
    msg.setSourceEntity(13U);
    msg.setDestination(19664U);
    msg.setDestinationEntity(96U);
    msg.time = 0.216326102968;
    msg.x = 0.0318853317039;
    msg.y = 0.0224340115003;
    msg.z = 0.539526971772;

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
    msg.setTimeStamp(0.616977966376);
    msg.setSource(64165U);
    msg.setSourceEntity(111U);
    msg.setDestination(27557U);
    msg.setDestinationEntity(67U);
    msg.time = 0.489632177884;
    msg.x = 0.242615179667;
    msg.y = 0.256300642055;
    msg.z = 0.155228755084;

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
    msg.setTimeStamp(0.519207065165);
    msg.setSource(45589U);
    msg.setSourceEntity(0U);
    msg.setDestination(13760U);
    msg.setDestinationEntity(178U);
    msg.validity = 22U;
    msg.x = 0.957434414177;
    msg.y = 0.528597921096;
    msg.z = 0.307097232706;

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
    msg.setTimeStamp(0.289524576817);
    msg.setSource(30814U);
    msg.setSourceEntity(119U);
    msg.setDestination(54744U);
    msg.setDestinationEntity(21U);
    msg.validity = 72U;
    msg.x = 0.712488293091;
    msg.y = 0.515737151137;
    msg.z = 0.630822873762;

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
    msg.setTimeStamp(0.0438779069181);
    msg.setSource(26085U);
    msg.setSourceEntity(202U);
    msg.setDestination(59221U);
    msg.setDestinationEntity(26U);
    msg.validity = 54U;
    msg.x = 0.870752599708;
    msg.y = 0.440243352143;
    msg.z = 0.958298359449;

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
    msg.setTimeStamp(0.198879971776);
    msg.setSource(24281U);
    msg.setSourceEntity(223U);
    msg.setDestination(36317U);
    msg.setDestinationEntity(148U);
    msg.validity = 97U;
    msg.x = 0.384083045739;
    msg.y = 0.271634142431;
    msg.z = 0.621339590325;

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
    msg.setTimeStamp(0.91101747692);
    msg.setSource(25710U);
    msg.setSourceEntity(132U);
    msg.setDestination(15458U);
    msg.setDestinationEntity(167U);
    msg.validity = 139U;
    msg.x = 0.651182191018;
    msg.y = 0.128455512;
    msg.z = 0.886313195535;

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
    msg.setTimeStamp(0.173442380335);
    msg.setSource(63032U);
    msg.setSourceEntity(171U);
    msg.setDestination(45407U);
    msg.setDestinationEntity(171U);
    msg.validity = 43U;
    msg.x = 0.807298880056;
    msg.y = 0.64447925131;
    msg.z = 0.643089417322;

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
    msg.setTimeStamp(0.168041516607);
    msg.setSource(5613U);
    msg.setSourceEntity(52U);
    msg.setDestination(62578U);
    msg.setDestinationEntity(225U);
    msg.time = 0.74791828827;
    msg.x = 0.254225054964;
    msg.y = 0.495083135006;
    msg.z = 0.853969292493;

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
    msg.setTimeStamp(0.0972463590283);
    msg.setSource(5714U);
    msg.setSourceEntity(230U);
    msg.setDestination(575U);
    msg.setDestinationEntity(250U);
    msg.time = 0.359091576345;
    msg.x = 0.926131875025;
    msg.y = 0.14292129521;
    msg.z = 0.37977035337;

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
    msg.setTimeStamp(0.43941350048);
    msg.setSource(50058U);
    msg.setSourceEntity(233U);
    msg.setDestination(61090U);
    msg.setDestinationEntity(162U);
    msg.time = 0.970399603041;
    msg.x = 0.267449582773;
    msg.y = 0.495191092048;
    msg.z = 0.302473255647;

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
    msg.setTimeStamp(0.525773118918);
    msg.setSource(64947U);
    msg.setSourceEntity(235U);
    msg.setDestination(16378U);
    msg.setDestinationEntity(223U);
    msg.validity = 155U;
    msg.value = 0.00724810978649;

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
    msg.setTimeStamp(0.981742560004);
    msg.setSource(33158U);
    msg.setSourceEntity(205U);
    msg.setDestination(43163U);
    msg.setDestinationEntity(103U);
    msg.validity = 86U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.533418687157;
    tmp_msg_0.beam_height = 0.416952340199;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.982860763491;

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
    msg.setTimeStamp(0.414321446145);
    msg.setSource(11686U);
    msg.setSourceEntity(158U);
    msg.setDestination(12994U);
    msg.setDestinationEntity(32U);
    msg.validity = 33U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.267863857168;
    tmp_msg_0.y = 0.17722983842;
    tmp_msg_0.z = 0.632120260177;
    tmp_msg_0.phi = 0.851887725458;
    tmp_msg_0.theta = 0.374596227165;
    tmp_msg_0.psi = 0.102488284917;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.0789612958538;

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
    msg.setTimeStamp(0.507312160404);
    msg.setSource(1059U);
    msg.setSourceEntity(146U);
    msg.setDestination(10362U);
    msg.setDestinationEntity(96U);
    msg.value = 0.516750527827;

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
    msg.setTimeStamp(0.560451281185);
    msg.setSource(54060U);
    msg.setSourceEntity(133U);
    msg.setDestination(59979U);
    msg.setDestinationEntity(22U);
    msg.value = 0.387568768371;

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
    msg.setTimeStamp(0.509711161264);
    msg.setSource(44317U);
    msg.setSourceEntity(244U);
    msg.setDestination(49664U);
    msg.setDestinationEntity(30U);
    msg.value = 0.910064525205;

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
    msg.setTimeStamp(0.887566425695);
    msg.setSource(59297U);
    msg.setSourceEntity(145U);
    msg.setDestination(16359U);
    msg.setDestinationEntity(96U);
    msg.value = 0.0507479271447;

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
    msg.setTimeStamp(0.889192163948);
    msg.setSource(23700U);
    msg.setSourceEntity(96U);
    msg.setDestination(14646U);
    msg.setDestinationEntity(166U);
    msg.value = 0.980868412931;

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
    msg.setTimeStamp(0.105485757606);
    msg.setSource(39719U);
    msg.setSourceEntity(192U);
    msg.setDestination(45442U);
    msg.setDestinationEntity(42U);
    msg.value = 0.444865248024;

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
    msg.setTimeStamp(0.0013135162842);
    msg.setSource(5338U);
    msg.setSourceEntity(32U);
    msg.setDestination(20123U);
    msg.setDestinationEntity(44U);
    msg.value = 0.0980174632957;

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
    msg.setTimeStamp(0.491004585322);
    msg.setSource(63498U);
    msg.setSourceEntity(222U);
    msg.setDestination(25135U);
    msg.setDestinationEntity(180U);
    msg.value = 0.421537959495;

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
    msg.setTimeStamp(0.815546378657);
    msg.setSource(9111U);
    msg.setSourceEntity(244U);
    msg.setDestination(36176U);
    msg.setDestinationEntity(217U);
    msg.value = 0.491862004563;

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
    msg.setTimeStamp(0.226724576484);
    msg.setSource(58602U);
    msg.setSourceEntity(165U);
    msg.setDestination(20631U);
    msg.setDestinationEntity(207U);
    msg.value = 0.481251765184;

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
    msg.setTimeStamp(0.559280908412);
    msg.setSource(5637U);
    msg.setSourceEntity(84U);
    msg.setDestination(8588U);
    msg.setDestinationEntity(252U);
    msg.value = 0.486576768169;

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
    msg.setTimeStamp(0.841485450735);
    msg.setSource(20551U);
    msg.setSourceEntity(177U);
    msg.setDestination(41637U);
    msg.setDestinationEntity(215U);
    msg.value = 0.674081579109;

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
    msg.setTimeStamp(0.556790180475);
    msg.setSource(14573U);
    msg.setSourceEntity(212U);
    msg.setDestination(12811U);
    msg.setDestinationEntity(21U);
    msg.value = 0.367295982465;

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
    msg.setTimeStamp(0.25735731128);
    msg.setSource(20143U);
    msg.setSourceEntity(183U);
    msg.setDestination(48763U);
    msg.setDestinationEntity(15U);
    msg.value = 0.187296960217;

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
    msg.setTimeStamp(0.586448228763);
    msg.setSource(24418U);
    msg.setSourceEntity(53U);
    msg.setDestination(58808U);
    msg.setDestinationEntity(161U);
    msg.value = 0.676354126026;

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
    msg.setTimeStamp(0.360418699667);
    msg.setSource(47894U);
    msg.setSourceEntity(56U);
    msg.setDestination(1878U);
    msg.setDestinationEntity(89U);
    msg.value = 0.637585748756;

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
    msg.setTimeStamp(0.729255012778);
    msg.setSource(38345U);
    msg.setSourceEntity(165U);
    msg.setDestination(52193U);
    msg.setDestinationEntity(63U);
    msg.value = 0.839703815299;

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
    msg.setTimeStamp(0.403345333623);
    msg.setSource(25170U);
    msg.setSourceEntity(184U);
    msg.setDestination(20049U);
    msg.setDestinationEntity(74U);
    msg.value = 0.910035958861;

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
    msg.setTimeStamp(0.56769294732);
    msg.setSource(10005U);
    msg.setSourceEntity(116U);
    msg.setDestination(19973U);
    msg.setDestinationEntity(191U);
    msg.value = 0.274929984559;

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
    msg.setTimeStamp(0.428550263141);
    msg.setSource(35841U);
    msg.setSourceEntity(219U);
    msg.setDestination(39942U);
    msg.setDestinationEntity(161U);
    msg.value = 0.892624073922;

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
    msg.setTimeStamp(0.160970110836);
    msg.setSource(34346U);
    msg.setSourceEntity(51U);
    msg.setDestination(4886U);
    msg.setDestinationEntity(27U);
    msg.value = 0.973074343612;

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
    msg.setTimeStamp(0.228163787515);
    msg.setSource(34703U);
    msg.setSourceEntity(36U);
    msg.setDestination(36325U);
    msg.setDestinationEntity(18U);
    msg.value = 0.66582634088;

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
    msg.setTimeStamp(0.143184246642);
    msg.setSource(33442U);
    msg.setSourceEntity(131U);
    msg.setDestination(21278U);
    msg.setDestinationEntity(9U);
    msg.value = 0.0348339490564;

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
    msg.setTimeStamp(0.584151675957);
    msg.setSource(48369U);
    msg.setSourceEntity(76U);
    msg.setDestination(24702U);
    msg.setDestinationEntity(62U);
    msg.value = 0.102892035046;

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
    msg.setTimeStamp(0.540810513111);
    msg.setSource(6360U);
    msg.setSourceEntity(10U);
    msg.setDestination(51965U);
    msg.setDestinationEntity(92U);
    msg.direction = 0.841138641593;
    msg.speed = 0.240056872441;
    msg.turbulence = 0.329858145634;

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
    msg.setTimeStamp(0.794010114338);
    msg.setSource(6979U);
    msg.setSourceEntity(42U);
    msg.setDestination(9631U);
    msg.setDestinationEntity(142U);
    msg.direction = 0.291187436756;
    msg.speed = 0.0350194097101;
    msg.turbulence = 0.292085447915;

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
    msg.setTimeStamp(0.426003762672);
    msg.setSource(29241U);
    msg.setSourceEntity(47U);
    msg.setDestination(10537U);
    msg.setDestinationEntity(205U);
    msg.direction = 0.117250402387;
    msg.speed = 0.492488734702;
    msg.turbulence = 0.562997659625;

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
    msg.setTimeStamp(0.0059625470326);
    msg.setSource(20582U);
    msg.setSourceEntity(169U);
    msg.setDestination(12427U);
    msg.setDestinationEntity(47U);
    msg.value = 0.107696997903;

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
    msg.setTimeStamp(0.815554408974);
    msg.setSource(19955U);
    msg.setSourceEntity(153U);
    msg.setDestination(24904U);
    msg.setDestinationEntity(103U);
    msg.value = 0.954140803355;

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
    msg.setTimeStamp(0.474739449622);
    msg.setSource(31341U);
    msg.setSourceEntity(124U);
    msg.setDestination(43851U);
    msg.setDestinationEntity(172U);
    msg.value = 0.719133399733;

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
    msg.setTimeStamp(0.777935267328);
    msg.setSource(46094U);
    msg.setSourceEntity(69U);
    msg.setDestination(33957U);
    msg.setDestinationEntity(149U);
    msg.value.assign("EJAHXSLAYWADSWNLNXGTJPAXMSTUZGPADMMJSFZIBIEZGUCEGFPEPUKUZAHVEALSITFXZBKYQYHSQLJDBYGSHATYTUROHRSOXLOIRLQLWRQKMUOSGCOCZWXEVCICJDAQVFMRMKHANFQIBVXWLYRHHVXHPMROZKBPCOEGMQPNTWVKWDBCRWUNDDCOJFONZQVBDTNDTQEBC");

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
    msg.setTimeStamp(0.995834758224);
    msg.setSource(119U);
    msg.setSourceEntity(232U);
    msg.setDestination(62586U);
    msg.setDestinationEntity(178U);
    msg.value.assign("YCCZQBLNKMNEKJHKUIRITAWHYAPVAANHUWSAZGELMYIMFTMLFNDKTUUFFIIMLJWLDWXMWUQSQYX");

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
    msg.setTimeStamp(0.231561907672);
    msg.setSource(48818U);
    msg.setSourceEntity(181U);
    msg.setDestination(50424U);
    msg.setDestinationEntity(189U);
    msg.value.assign("VBWNUYDGFVHICDHEAILCIJCDXTVNKIZNYEKHAIMPVVQBWPMYKESWCUEMATQYIZJJXWVMRTWNHQVXKBEOBWTJLNKOKDMNJLMCOXVBNBUJUDGP");

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
    msg.setTimeStamp(0.108594680588);
    msg.setSource(21276U);
    msg.setSourceEntity(171U);
    msg.setDestination(34244U);
    msg.setDestinationEntity(221U);
    const char tmp_msg_0[] = {49, 107, 95, 117, 56, -20, 15, -106, 118, 67, -109, -9, -63, 5, 65, 44, -5, 86, 69, 15, 89, -29, 0, -128, -31, 109, 28, 101, -99, -87, -113, 84, -100, -113, 100, -73, -118, 9, 122, 95, 119, -72, -72, 67, 37, 6, -60, 126, 109, -26, -72, -56, -44, 10, 123, -124, 112, 103, -120, 7, 51, 39, 61, 41, 32, -57, 43, 27, -9, -108, -15, 95, 79, -110, -116, -6, -61, -49, 122, -99, -71, 75, -117, -107, 34, -118, 112, -43, -45, -126, -20, 28, 61, 6, 35, 20, 37, 61, -75, 17, -55, 82, -77, 49, 90, -39, -71, 28, -94, -101, 66, 16, -29, -58, -22, 48, 13, -33, -53, -38, -107, 111, 98, -92, 124, 101, -108, 94, 53, 53, 5, -102, 53, -36, 37, 67, -34, 93, -71, 26, 112, -9, -23, 32, -94, 96, 116, 31, -125, 6, 32, 102, 49, 89, -18, 66, -74, -62, -120, 58, -67, 33, 13, 78, -106, -59, -38, -65, -14, -118, 28, 121, 68, -35, 34, 45, -28, 91, -21, -123, -7, -102, -108, 94, -14, -48, 102, 2, -100, 76};
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
    msg.setTimeStamp(0.505752124942);
    msg.setSource(43992U);
    msg.setSourceEntity(129U);
    msg.setDestination(64639U);
    msg.setDestinationEntity(43U);
    const char tmp_msg_0[] = {21, -69, 91, -64, -40, 94, 82, -124, -30, 86, -95, 37, -24, -27, -15, 108, 72, -103, 52, 77, 106, -104, 81, -8, 46, -75, 82, -84, 70, 3, -41, -123, -66, -11, 81, -84, 19, -100, 71, 66, -4, 66, -124, -127, 45, -81, 76, -24, 88, 81, -27, -119, -128, 72, 97, -105, -2, -93, 80, -82, -6, -41, -42, -92, -54, -61, -86, 50, 87, 95, -33, -25, 10, 69, -89, -42, -90, 124, -66, -2, 103, -42, -108, 29, -118, 98, -99, 87, 57, -15, 88, 69, -8, 93, 81, -87, 36, 16, -46, 74, -128, -41, 117, 57, 19, 11, 12, 60, 55, 32, -97, -55, 88, -28, 78, 7, 84, 120, 108, -119, 24, -124, 29, 83, 51, 112, -127, -82, 89, -111, 1, 63, 115, -1, -82, -49, -22, -39, 85, -105, 101, -12, -72, -39, -42, -11, 93, 100, 79, -81, -86, -43, -128, -110, 55, -35, -44, -21, -52, 115, -108, 18, -89, 99, 71, -108, 71, -62, -119, -2, 9, 72, 7, 35, 42, -11, -30, -44, 42, -114, 57, 126, -11, -22, -62, 48, 85, -126, 1, 110, 63, -60, 39, 0, 69, 76, -11, 112, -17};
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
    msg.setTimeStamp(0.127469172081);
    msg.setSource(47017U);
    msg.setSourceEntity(67U);
    msg.setDestination(8481U);
    msg.setDestinationEntity(10U);
    const char tmp_msg_0[] = {-77, -115, -123, -25, 100, -38, -9, 10, 37, -59, -19, -97, -24, -84, -126, -35, -100, -85, -39, 84, 58, -52, -125, 95, 34, 70, -61, 114, 2, 79, 98, 92, 12, 38, 78, -104, 122, -121, -98, -12, 115, -119, 7, 11, -44, 15, 106, -44, -93, 8, -111, 26, 34, 84, -98, 37, -107, 76, 34, -71, 42, -124, 117, -46, -91, -92, 54, -59, 113, -112, 72, 99, 11, -3, 13, -125, 93, 72, 10, 55, 60, -115, 28, -59, 21, 121, -71, -76, -124, 43, -41, 64, -121};
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
    msg.setTimeStamp(0.17499482162);
    msg.setSource(37656U);
    msg.setSourceEntity(225U);
    msg.setDestination(40099U);
    msg.setDestinationEntity(57U);
    msg.type = 177U;
    msg.frequency = 1768409104U;
    msg.min_range = 20646U;
    msg.max_range = 38095U;
    msg.bits_per_point = 104U;
    msg.scale_factor = 0.955910729491;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.912610811636;
    tmp_msg_0.beam_height = 0.387690224393;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-64, 38, -57, 55, -68, -26, -28, 63, 92, -100, -12, 54, -114, 113, -55, 122, 30, -76, 40, -45, 51, -96, -16, 3, -5, 97, 88, -56, -13, -104, -24, 83, -30, 13, 98, -78, 118, -62, 3, -1, -11, -75, -103, -79, -76, 121, -113, -121, -110, -42, -16, -73, 122, 51, -63, -28, 16, -10, 85, 37, -18, 46, -73, -111, -73, 90, 110, 117, -56, -73, -126, -50, -39, 43, 115, -25, 77, 70, 99, -17, 29, 38, -123, -77, -123, -69, -16, -36, 124, -54, 93, -44, -62, 76, -106, 2, -76, -37, 107, -14, 54, 111, 119, 123, 102, -16, 47, -34, -90, 97, -112, -113, -120, 24, 85, 77, 42, 45, 84, 113, -69, -1, -5, 51, 26, -63, 51, -15, -119, 37, 48, -39, 39, -123, 79, -88, 16, 63, 66, 46, -93, -128, 69, -35, -123, 26, -111, -37, -25, -99, 60, -54, -96, -44, 68, -41, 102, 81, 94, 125, 24, 67, 77, -115, -124, 46, 26, -19, -66, -117, -73, -73, -57, 37, -116, -11, 125, 89, 103, -117, -1, -24, -1, -93, 45, 70, 48, -116, -97, -84, -33, -101, -110, 99, -94, 54, 67, 45, -107, -65, -9, 71, -9, 99, 51, -80, 11, -50, -37, 84, 18, 0, -31, 18, -126, 61, -82, -111, 117, -123, -49, 43, -88, -26, -122, 116, 111, -39, 118, -127};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

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
    msg.setTimeStamp(0.733873969183);
    msg.setSource(38008U);
    msg.setSourceEntity(130U);
    msg.setDestination(22901U);
    msg.setDestinationEntity(188U);
    msg.type = 71U;
    msg.frequency = 2788743907U;
    msg.min_range = 44739U;
    msg.max_range = 31413U;
    msg.bits_per_point = 12U;
    msg.scale_factor = 0.780368871931;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.823790861759;
    tmp_msg_0.beam_height = 0.664990479235;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {105, -26, 33, 109, -112, -115, 68, 62, 23, 109, -41, 32, -28, -107, -32, 4, -104, -116, -57, -105, 34, -109, -51, -110, -8, -28, -37, -54, -4, 2, -85, 118, -78, 78, 19, 85, -17, 77, -56, 124, 42, 86, -122, -103, 86, -106, 125, 61, -5, -71, 13, 74, -52, 55, 100, 52, -80, 120, 36, -24, -12, 61, 123, -72, -47, -40, -77, 100, 22, 25, 79, 67, -18, 119, -98, -84, 23, 36, -95, -13, -82, -15};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

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
    msg.setTimeStamp(0.000632753752376);
    msg.setSource(38860U);
    msg.setSourceEntity(111U);
    msg.setDestination(10210U);
    msg.setDestinationEntity(139U);
    msg.type = 18U;
    msg.frequency = 2355697570U;
    msg.min_range = 61790U;
    msg.max_range = 56936U;
    msg.bits_per_point = 93U;
    msg.scale_factor = 0.699783958337;
    const char tmp_msg_0[] = {-71, 116, -120, -6, 15, 85, -111, 73, 44, 93, -114, 87, -111, 88, 59, -93, -109, -96, -105, -48, 58, 28, 56, -96, 83, -25, -3, -53, -108, 58, 84, -121, -118, 50, 61, 18, -112, -111, 94, 116, -123, -22, -117, -62, -113, -55, -17, 102, -32, -36, -51, -70, -80, -8, -33, -123, -124, -122, -21, -116, -69, 48, -55, 4, -65, -62, -78, 38, 124, 83, 57, -99, 118, -7, 79, -9, -69, -5, 124, 126, -101, 69, -75, -59, -59, 65, -107, 95, -56, -97, -79, -125, 116, -60, -113, -50, 52, 108, -37, -20, -71, 68, 115, -108, -26, 62, 58, 109, 49, -61, -73, -118, 25, 57, 92, 69, -26, 68, 19, 70, 16, 17, 7, 39, 90, 46, 41, -44, 113, -52, 18, -127, -18, 8, 6, -114, -48, 7, 106, -1, 21, 86, 21, 82, -125, 22, -78, -125, -52, 30, 90, 54, -114, -105, -94, -31, -5, -106, -3, -41, -113, -93, 31, 71, -86, 94, -99, -61, -118, 101, 74, 18, -126, -65, -31, -31, 15, 57, -87, -4, 64, -88, 86, -103, 122, -69, -48, -7, 28, -75, -21, 118, 7, -54, 119, -6, -62, 56, 91, 21, -110, -15, -30, 23, 31, 102, -44, 39, 98, -98, -32, -53, 25, -101, 124, 56, 24, -103, 36, 29, -40, -10, -54, 88, 85, -117, -82, 13, 52, -4};
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
    msg.setTimeStamp(0.451035363233);
    msg.setSource(47489U);
    msg.setSourceEntity(244U);
    msg.setDestination(51941U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.653250205821);
    msg.setSource(24239U);
    msg.setSourceEntity(40U);
    msg.setDestination(18012U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.772162246886);
    msg.setSource(37567U);
    msg.setSourceEntity(184U);
    msg.setDestination(39605U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.608777605401);
    msg.setSource(13341U);
    msg.setSourceEntity(240U);
    msg.setDestination(9266U);
    msg.setDestinationEntity(105U);
    msg.op = 118U;

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
    msg.setTimeStamp(0.318910461117);
    msg.setSource(5833U);
    msg.setSourceEntity(14U);
    msg.setDestination(20030U);
    msg.setDestinationEntity(121U);
    msg.op = 82U;

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
    msg.setTimeStamp(0.550905143797);
    msg.setSource(62541U);
    msg.setSourceEntity(207U);
    msg.setDestination(4424U);
    msg.setDestinationEntity(14U);
    msg.op = 234U;

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
    msg.setTimeStamp(0.275677665244);
    msg.setSource(35836U);
    msg.setSourceEntity(58U);
    msg.setDestination(28644U);
    msg.setDestinationEntity(124U);
    msg.value = 0.431669389381;
    msg.confidence = 0.068662590516;
    msg.opmodes.assign("HYKJVKLRYPJPFKOGWNEWBMWOZAVGMQQAOHHKXIXXMWTTRYQVZUBGYSPCXBSUCRAVSMGNPPEFSFWTSJRJZPISXRLUJHUTCPBDXLEYFXTYVWWVMDLHDOEUYHLUWSNCTCZIGWHLDZWGXAVQNUT");

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
    msg.setTimeStamp(0.458271310577);
    msg.setSource(33064U);
    msg.setSourceEntity(91U);
    msg.setDestination(26243U);
    msg.setDestinationEntity(187U);
    msg.value = 0.339142471165;
    msg.confidence = 0.552861007084;
    msg.opmodes.assign("QVLJPQLSXVSYXYCNHSLRMPCHSANNOSOFLCXUONULPLJVIVLJAGOKQBAGKIJRFHPTKNE");

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
    msg.setTimeStamp(0.412375425581);
    msg.setSource(42046U);
    msg.setSourceEntity(203U);
    msg.setDestination(38041U);
    msg.setDestinationEntity(244U);
    msg.value = 0.0875835569355;
    msg.confidence = 0.515998980627;
    msg.opmodes.assign("AGCLMXEQJPNDIFLGPHKRSIRFWCQSHADWUXLZNIUATXRVSIPOYEJKWJHZXAMTOKWICBIZTJCTSBOFNVDTFLJZOLMVXJSDRMWWDEQEUQLYTRPJMRHEIRBBYVCAEWLPHFZBRCDPGNFDNMDOEUGVFKYGHPVGHLMHKXMFYBLMRBEUOEKHTZYMPTXKLFQKQGYWJVYSGTVYBJUOCIQXWQAAZFHYGUQSNZKIXDSQDNANVUSCOBWTCVJRPKZCASUZBNGPEU");

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
    msg.setTimeStamp(0.125487936611);
    msg.setSource(63769U);
    msg.setSourceEntity(96U);
    msg.setDestination(46203U);
    msg.setDestinationEntity(75U);
    msg.itow = 4040382151U;
    msg.lat = 0.0782044278793;
    msg.lon = 0.439140453336;
    msg.height_ell = 0.281761427405;
    msg.height_sea = 0.576405457662;
    msg.hacc = 0.0901620427694;
    msg.vacc = 0.521275247608;
    msg.vel_n = 0.369844871493;
    msg.vel_e = 0.136447542783;
    msg.vel_d = 0.866163117149;
    msg.speed = 0.795442738192;
    msg.gspeed = 0.598063522857;
    msg.heading = 0.033035190055;
    msg.sacc = 0.387854659848;
    msg.cacc = 0.891503918003;

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
    msg.setTimeStamp(0.339396868258);
    msg.setSource(53998U);
    msg.setSourceEntity(87U);
    msg.setDestination(43388U);
    msg.setDestinationEntity(164U);
    msg.itow = 3985270344U;
    msg.lat = 0.614763882969;
    msg.lon = 0.997270803644;
    msg.height_ell = 0.174213390598;
    msg.height_sea = 0.420836269266;
    msg.hacc = 0.672611948828;
    msg.vacc = 0.85973040748;
    msg.vel_n = 0.922839064123;
    msg.vel_e = 0.529813914916;
    msg.vel_d = 0.975184907632;
    msg.speed = 0.330331602765;
    msg.gspeed = 0.937434016903;
    msg.heading = 0.547521574106;
    msg.sacc = 0.100075699957;
    msg.cacc = 0.999281327977;

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
    msg.setTimeStamp(0.00397997769398);
    msg.setSource(29651U);
    msg.setSourceEntity(248U);
    msg.setDestination(23783U);
    msg.setDestinationEntity(32U);
    msg.itow = 3158216537U;
    msg.lat = 0.5830736278;
    msg.lon = 0.834093105177;
    msg.height_ell = 0.743984850533;
    msg.height_sea = 0.86598740481;
    msg.hacc = 0.158604198444;
    msg.vacc = 0.386796438989;
    msg.vel_n = 0.290308957452;
    msg.vel_e = 0.787239563821;
    msg.vel_d = 0.622770473585;
    msg.speed = 0.722948915378;
    msg.gspeed = 0.0696600030328;
    msg.heading = 0.237586190763;
    msg.sacc = 0.727766561912;
    msg.cacc = 0.919592007011;

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
    msg.setTimeStamp(0.602099753661);
    msg.setSource(3923U);
    msg.setSourceEntity(248U);
    msg.setDestination(8467U);
    msg.setDestinationEntity(7U);
    msg.id = 238U;
    msg.value = 0.602107464751;

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
    msg.setTimeStamp(0.679854538566);
    msg.setSource(26071U);
    msg.setSourceEntity(66U);
    msg.setDestination(47033U);
    msg.setDestinationEntity(37U);
    msg.id = 145U;
    msg.value = 0.621814800268;

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
    msg.setTimeStamp(0.444753211241);
    msg.setSource(60099U);
    msg.setSourceEntity(10U);
    msg.setDestination(25349U);
    msg.setDestinationEntity(168U);
    msg.id = 13U;
    msg.value = 0.833280838974;

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
    msg.setTimeStamp(0.843446428608);
    msg.setSource(38306U);
    msg.setSourceEntity(18U);
    msg.setDestination(33809U);
    msg.setDestinationEntity(73U);
    msg.x = 0.278831606014;
    msg.y = 0.736897890226;
    msg.z = 0.963406006869;
    msg.phi = 0.0606250797069;
    msg.theta = 0.42902695168;
    msg.psi = 0.576924284243;

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
    msg.setTimeStamp(0.990880681592);
    msg.setSource(7815U);
    msg.setSourceEntity(92U);
    msg.setDestination(64427U);
    msg.setDestinationEntity(70U);
    msg.x = 0.341581786414;
    msg.y = 0.0664824102619;
    msg.z = 0.295427641269;
    msg.phi = 0.488525457263;
    msg.theta = 0.965410604222;
    msg.psi = 0.58604981941;

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
    msg.setTimeStamp(0.809922252635);
    msg.setSource(19528U);
    msg.setSourceEntity(243U);
    msg.setDestination(14271U);
    msg.setDestinationEntity(151U);
    msg.x = 0.970450701111;
    msg.y = 0.12072696087;
    msg.z = 0.335201277822;
    msg.phi = 0.32297647092;
    msg.theta = 0.937836401969;
    msg.psi = 0.584207983599;

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
    msg.setTimeStamp(0.255091551452);
    msg.setSource(47059U);
    msg.setSourceEntity(237U);
    msg.setDestination(55496U);
    msg.setDestinationEntity(108U);
    msg.beam_width = 0.355888347948;
    msg.beam_height = 0.533317135719;

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
    msg.setTimeStamp(0.693667104916);
    msg.setSource(10919U);
    msg.setSourceEntity(206U);
    msg.setDestination(42114U);
    msg.setDestinationEntity(249U);
    msg.beam_width = 0.569662618557;
    msg.beam_height = 0.523420891661;

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
    msg.setTimeStamp(0.153140166057);
    msg.setSource(42140U);
    msg.setSourceEntity(68U);
    msg.setDestination(28699U);
    msg.setDestinationEntity(83U);
    msg.beam_width = 0.717271107496;
    msg.beam_height = 0.267843019563;

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
    msg.setTimeStamp(0.658927626516);
    msg.setSource(25110U);
    msg.setSourceEntity(174U);
    msg.setDestination(39763U);
    msg.setDestinationEntity(70U);
    msg.sane = 208U;

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
    msg.setTimeStamp(0.00911624464083);
    msg.setSource(27670U);
    msg.setSourceEntity(58U);
    msg.setDestination(36484U);
    msg.setDestinationEntity(37U);
    msg.sane = 22U;

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
    msg.setTimeStamp(0.476294775169);
    msg.setSource(40982U);
    msg.setSourceEntity(23U);
    msg.setDestination(48469U);
    msg.setDestinationEntity(151U);
    msg.sane = 60U;

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
    msg.setTimeStamp(0.982738028989);
    msg.setSource(27080U);
    msg.setSourceEntity(157U);
    msg.setDestination(61290U);
    msg.setDestinationEntity(227U);
    msg.value = 0.187654169391;

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
    msg.setTimeStamp(0.0621364604497);
    msg.setSource(15511U);
    msg.setSourceEntity(118U);
    msg.setDestination(31224U);
    msg.setDestinationEntity(130U);
    msg.value = 0.105382466712;

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
    msg.setTimeStamp(0.742522493602);
    msg.setSource(32154U);
    msg.setSourceEntity(190U);
    msg.setDestination(11034U);
    msg.setDestinationEntity(206U);
    msg.value = 0.495583145988;

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
    msg.setTimeStamp(0.678718510315);
    msg.setSource(39124U);
    msg.setSourceEntity(225U);
    msg.setDestination(26935U);
    msg.setDestinationEntity(135U);
    msg.value = 0.0170753468049;

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
    msg.setTimeStamp(0.338929085787);
    msg.setSource(4933U);
    msg.setSourceEntity(86U);
    msg.setDestination(45852U);
    msg.setDestinationEntity(231U);
    msg.value = 0.188115439282;

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
    msg.setTimeStamp(0.362065646158);
    msg.setSource(23944U);
    msg.setSourceEntity(71U);
    msg.setDestination(22662U);
    msg.setDestinationEntity(88U);
    msg.value = 0.933677467551;

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
    msg.setTimeStamp(0.55491123022);
    msg.setSource(3620U);
    msg.setSourceEntity(8U);
    msg.setDestination(48509U);
    msg.setDestinationEntity(52U);
    msg.value = 0.0705272342301;

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
    msg.setTimeStamp(0.82440466218);
    msg.setSource(44603U);
    msg.setSourceEntity(1U);
    msg.setDestination(32279U);
    msg.setDestinationEntity(155U);
    msg.value = 0.839864590015;

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
    msg.setTimeStamp(0.304989460391);
    msg.setSource(49936U);
    msg.setSourceEntity(189U);
    msg.setDestination(63105U);
    msg.setDestinationEntity(81U);
    msg.value = 0.757897007192;

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
    msg.setTimeStamp(0.090241215732);
    msg.setSource(19210U);
    msg.setSourceEntity(61U);
    msg.setDestination(487U);
    msg.setDestinationEntity(134U);
    msg.value = 0.585006712852;

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
    msg.setTimeStamp(0.792940012303);
    msg.setSource(62627U);
    msg.setSourceEntity(22U);
    msg.setDestination(28366U);
    msg.setDestinationEntity(155U);
    msg.value = 0.126693126824;

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
    msg.setTimeStamp(0.452111422403);
    msg.setSource(2837U);
    msg.setSourceEntity(32U);
    msg.setDestination(5765U);
    msg.setDestinationEntity(166U);
    msg.value = 0.945332681097;

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
    msg.setTimeStamp(0.380030083318);
    msg.setSource(18989U);
    msg.setSourceEntity(181U);
    msg.setDestination(8364U);
    msg.setDestinationEntity(178U);
    msg.value = 0.546125061003;

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
    msg.setTimeStamp(0.85462748874);
    msg.setSource(10410U);
    msg.setSourceEntity(24U);
    msg.setDestination(37186U);
    msg.setDestinationEntity(49U);
    msg.value = 0.232052559264;

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
    msg.setTimeStamp(0.150908183372);
    msg.setSource(26329U);
    msg.setSourceEntity(180U);
    msg.setDestination(58785U);
    msg.setDestinationEntity(248U);
    msg.value = 0.748265650911;

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
    msg.setTimeStamp(0.605565746126);
    msg.setSource(47114U);
    msg.setSourceEntity(192U);
    msg.setDestination(38731U);
    msg.setDestinationEntity(254U);
    msg.value = 0.440084142786;

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
    msg.setTimeStamp(0.755944452834);
    msg.setSource(46350U);
    msg.setSourceEntity(157U);
    msg.setDestination(974U);
    msg.setDestinationEntity(43U);
    msg.value = 0.555218913497;

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
    msg.setTimeStamp(0.0932013431602);
    msg.setSource(61453U);
    msg.setSourceEntity(101U);
    msg.setDestination(63446U);
    msg.setDestinationEntity(217U);
    msg.value = 0.0738076602073;

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
    msg.setTimeStamp(0.525730332508);
    msg.setSource(56944U);
    msg.setSourceEntity(124U);
    msg.setDestination(3748U);
    msg.setDestinationEntity(104U);
    msg.value = 0.0757865993343;

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
    msg.setTimeStamp(0.982026522607);
    msg.setSource(27845U);
    msg.setSourceEntity(208U);
    msg.setDestination(5228U);
    msg.setDestinationEntity(48U);
    msg.value = 0.93406418798;

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
    msg.setTimeStamp(0.793314858068);
    msg.setSource(40749U);
    msg.setSourceEntity(147U);
    msg.setDestination(3113U);
    msg.setDestinationEntity(54U);
    msg.value = 0.325588049336;

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
    msg.setTimeStamp(0.0087878844216);
    msg.setSource(32920U);
    msg.setSourceEntity(30U);
    msg.setDestination(45641U);
    msg.setDestinationEntity(155U);
    msg.value = 0.594864937265;

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
    msg.setTimeStamp(0.890431540045);
    msg.setSource(15034U);
    msg.setSourceEntity(118U);
    msg.setDestination(47166U);
    msg.setDestinationEntity(82U);
    msg.value = 0.301546065308;

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
    msg.setTimeStamp(0.815734124602);
    msg.setSource(16270U);
    msg.setSourceEntity(103U);
    msg.setDestination(11030U);
    msg.setDestinationEntity(223U);
    msg.value = 0.583524964496;

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
    msg.setTimeStamp(0.299828613065);
    msg.setSource(63759U);
    msg.setSourceEntity(142U);
    msg.setDestination(52524U);
    msg.setDestinationEntity(130U);
    msg.validity = 31162U;
    msg.type = 136U;
    msg.tow = 782329261U;
    msg.base_lat = 0.274755606204;
    msg.base_lon = 0.982519525985;
    msg.base_height = 0.259346686114;
    msg.n = 0.407812812027;
    msg.e = 0.912703851759;
    msg.d = 0.84180202267;
    msg.v_n = 0.79789453348;
    msg.v_e = 0.486693337413;
    msg.v_d = 0.102844532823;
    msg.satellites = 191U;
    msg.iar_hyp = 53006U;
    msg.iar_ratio = 0.729431671493;

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
    msg.setTimeStamp(0.511310469334);
    msg.setSource(10639U);
    msg.setSourceEntity(244U);
    msg.setDestination(18576U);
    msg.setDestinationEntity(250U);
    msg.validity = 46959U;
    msg.type = 202U;
    msg.tow = 3176794466U;
    msg.base_lat = 0.993711790015;
    msg.base_lon = 0.51975198573;
    msg.base_height = 0.793310322367;
    msg.n = 0.521157630199;
    msg.e = 0.01031284303;
    msg.d = 0.597139187056;
    msg.v_n = 0.681770242515;
    msg.v_e = 0.374175362212;
    msg.v_d = 0.215630382474;
    msg.satellites = 151U;
    msg.iar_hyp = 14209U;
    msg.iar_ratio = 0.986610096835;

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
    msg.setTimeStamp(0.593170389991);
    msg.setSource(22736U);
    msg.setSourceEntity(201U);
    msg.setDestination(46032U);
    msg.setDestinationEntity(54U);
    msg.validity = 37686U;
    msg.type = 90U;
    msg.tow = 1157652455U;
    msg.base_lat = 0.812332415085;
    msg.base_lon = 0.38744077472;
    msg.base_height = 0.877030729027;
    msg.n = 0.425874259419;
    msg.e = 0.452796420321;
    msg.d = 0.750909844813;
    msg.v_n = 0.690104630872;
    msg.v_e = 0.235825201625;
    msg.v_d = 0.372573809386;
    msg.satellites = 209U;
    msg.iar_hyp = 57264U;
    msg.iar_ratio = 0.938061662249;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.871223582613);
    msg.setSource(30715U);
    msg.setSourceEntity(27U);
    msg.setDestination(59189U);
    msg.setDestinationEntity(234U);
    msg.id = 174U;
    msg.zoom = 73U;
    msg.action = 242U;

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
    msg.setTimeStamp(0.574961057511);
    msg.setSource(14524U);
    msg.setSourceEntity(105U);
    msg.setDestination(43732U);
    msg.setDestinationEntity(120U);
    msg.id = 70U;
    msg.zoom = 20U;
    msg.action = 51U;

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
    msg.setTimeStamp(0.236824831432);
    msg.setSource(56640U);
    msg.setSourceEntity(189U);
    msg.setDestination(42586U);
    msg.setDestinationEntity(129U);
    msg.id = 186U;
    msg.zoom = 163U;
    msg.action = 84U;

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
    msg.setTimeStamp(0.961181919532);
    msg.setSource(16603U);
    msg.setSourceEntity(228U);
    msg.setDestination(24850U);
    msg.setDestinationEntity(190U);
    msg.id = 48U;
    msg.value = 0.529859251137;

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
    msg.setTimeStamp(0.12708026009);
    msg.setSource(40566U);
    msg.setSourceEntity(14U);
    msg.setDestination(54574U);
    msg.setDestinationEntity(133U);
    msg.id = 28U;
    msg.value = 0.112435618603;

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
    msg.setTimeStamp(0.381826138009);
    msg.setSource(22309U);
    msg.setSourceEntity(60U);
    msg.setDestination(38752U);
    msg.setDestinationEntity(128U);
    msg.id = 181U;
    msg.value = 0.286143457572;

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
    msg.setTimeStamp(0.490060482409);
    msg.setSource(40452U);
    msg.setSourceEntity(215U);
    msg.setDestination(7915U);
    msg.setDestinationEntity(39U);
    msg.id = 85U;
    msg.value = 0.11005666156;

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
    msg.setTimeStamp(0.756027549743);
    msg.setSource(42512U);
    msg.setSourceEntity(197U);
    msg.setDestination(18060U);
    msg.setDestinationEntity(70U);
    msg.id = 183U;
    msg.value = 0.662119854388;

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
    msg.setTimeStamp(0.98675102444);
    msg.setSource(4475U);
    msg.setSourceEntity(232U);
    msg.setDestination(40728U);
    msg.setDestinationEntity(122U);
    msg.id = 67U;
    msg.value = 0.100794734971;

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
    msg.setTimeStamp(0.763030055143);
    msg.setSource(57980U);
    msg.setSourceEntity(144U);
    msg.setDestination(11439U);
    msg.setDestinationEntity(157U);
    msg.id = 69U;
    msg.angle = 0.558700798541;

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
    msg.setTimeStamp(0.991460530929);
    msg.setSource(11801U);
    msg.setSourceEntity(192U);
    msg.setDestination(10886U);
    msg.setDestinationEntity(232U);
    msg.id = 32U;
    msg.angle = 0.727129922674;

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
    msg.setTimeStamp(0.687980030439);
    msg.setSource(26176U);
    msg.setSourceEntity(213U);
    msg.setDestination(53913U);
    msg.setDestinationEntity(182U);
    msg.id = 96U;
    msg.angle = 0.612610086478;

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
    msg.setTimeStamp(0.756562225214);
    msg.setSource(49144U);
    msg.setSourceEntity(37U);
    msg.setDestination(24987U);
    msg.setDestinationEntity(80U);
    msg.op = 107U;
    msg.actions.assign("RLBIUDECVPJDOCWXRNXKOVLULBIHDIFOMSVASRKHAEHQLRPRMYZJFGTDMAEERIPNSTGJFFDOSNFDTJISRHHPBLXELNDGZFINOWXBZRGJZLYPGMUYCEXCBCLAJXTQYKZKJMUOTWTBMUQQGVWWBKWZQVZJKSUTTUSKOKOWDPUAGQXXEFPMHCKIYMAHXYDENASCJVUCZNZMAINIUFOBQYFNRLRBMCQB");

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
    msg.setTimeStamp(0.626342242768);
    msg.setSource(18614U);
    msg.setSourceEntity(115U);
    msg.setDestination(17698U);
    msg.setDestinationEntity(144U);
    msg.op = 248U;
    msg.actions.assign("SMMYLZIPISIOLKUPJVUUQQQVKBAYXOWCUKPXXEZEEOJXVTRYEXQMVVTFDJQTKGKTMYCIXKTFYNLNNGSABQDAJMOKZTCGBLWGDSFTVSZDULNHHEKZMQMPMTXGBTQEKWGWEAHSZAONLUSZBNGRLFVIYYEPISOHRDYBEXGHAINDOAJZRPDBFAPCEOMUCJFHCGRNILSFCVUJZRRFOAFTY");

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
    msg.setTimeStamp(0.324025187775);
    msg.setSource(56945U);
    msg.setSourceEntity(169U);
    msg.setDestination(38633U);
    msg.setDestinationEntity(93U);
    msg.op = 136U;
    msg.actions.assign("CSILMRGUWXWNTKYYFLZOWXBPGHFDOEKDAJOFENEWEWHEJIVUATRRTDQKTXIFLTUXFZZJZHKRLNXHMVGKWIZONHNMVIEGWXMHPVFASMVUGURANBNYJMGWXTQPDLISMLPBYQEVTSLYPSQATJMTLDDYXGQNPDYIRPIBOUCFZWFVCUVJC");

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
    msg.setTimeStamp(0.684457705126);
    msg.setSource(33103U);
    msg.setSourceEntity(57U);
    msg.setDestination(3114U);
    msg.setDestinationEntity(148U);
    msg.actions.assign("LASVGXZNIGEZHHPBPMWMGYZULAAGPLFSYYGRHUBLYITMFCVVXAKRCYQPUTTNMHWGMSXHUBBLVCQMRAVIWXPEYRPSDSVPHHFQGNLIZACTI");

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
    msg.setTimeStamp(0.436481635179);
    msg.setSource(65387U);
    msg.setSourceEntity(157U);
    msg.setDestination(22466U);
    msg.setDestinationEntity(189U);
    msg.actions.assign("SBWYJDEODKBRVCMNPONTMOVNDVPKKVFCYNBMIXAIJHPSFJODKKCRDNQMQNBUTTHEUHWUOX");

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
    msg.setTimeStamp(0.89651406997);
    msg.setSource(40475U);
    msg.setSourceEntity(125U);
    msg.setDestination(61969U);
    msg.setDestinationEntity(203U);
    msg.actions.assign("RIAESDPOOITHWAWQJATCIDERIUOAKABBIWWVQGHIFBUPOVGXYEZNQGVFGLFFENRRPVIHZDWXQMZOHEKGSGTEKGLOVRDMCUYNREKFJHZFNOQTFCZSCOIYTTZMLKUFESCDLZXNEJHNHPAHQHKBOMQHJYWSTLDVLWPVGKUXZSQKUMPQUCATOIQXNYDMGADBRVXRNBCXBJVPASTYKXSJPZLYYBMLA");

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
    msg.setTimeStamp(0.860227865877);
    msg.setSource(52881U);
    msg.setSourceEntity(152U);
    msg.setDestination(21574U);
    msg.setDestinationEntity(4U);
    msg.button = 155U;
    msg.value = 6U;

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
    msg.setTimeStamp(0.135192376869);
    msg.setSource(15835U);
    msg.setSourceEntity(126U);
    msg.setDestination(8794U);
    msg.setDestinationEntity(108U);
    msg.button = 39U;
    msg.value = 20U;

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
    msg.setTimeStamp(0.97943723473);
    msg.setSource(26779U);
    msg.setSourceEntity(106U);
    msg.setDestination(30874U);
    msg.setDestinationEntity(34U);
    msg.button = 166U;
    msg.value = 148U;

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
    msg.setTimeStamp(0.470014975743);
    msg.setSource(46782U);
    msg.setSourceEntity(216U);
    msg.setDestination(44508U);
    msg.setDestinationEntity(111U);
    msg.op = 125U;
    msg.text.assign("PEWHVVYSBBBCBSDPUJLQJMXBUZEZPRQQTJPNMKSEWPGPCXGQPDHCAYZXEBLWIOVOUYEJOTROJFVCVRGHMHRHDMCUAKFSIXFYAUEXEFQGGIWTUZJKREKDONCOLTNGKOMKNVOMHRBHITLXTKSZATUWNGINDNDQVVVESLPFIJPFYWYDXHAMJXEMQLNRDWORURAFYLAABKSFPYQLJFHGMGNYYIFXIWOCNUDTAGL");

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
    msg.setTimeStamp(0.676730810753);
    msg.setSource(55046U);
    msg.setSourceEntity(243U);
    msg.setDestination(22020U);
    msg.setDestinationEntity(114U);
    msg.op = 81U;
    msg.text.assign("LSVAETREBQEXHCXQLCEFYGMDKLXRU");

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
    msg.setTimeStamp(0.998883264097);
    msg.setSource(43567U);
    msg.setSourceEntity(12U);
    msg.setDestination(16355U);
    msg.setDestinationEntity(128U);
    msg.op = 17U;
    msg.text.assign("TUXWFCPKXXFCZAISHYGRLRJGKQTIFDUEJVELDXZWRBBLGRQQGIAAMLNDEFFNWWYICSHHQPJLAINISYBHRVDLKBBMYHFCAUDKRDFOWZGMMVXSAHHMCCOUCILDGPBATGDMZOTWYUXMQJVYYOFPEWTSNPEAQSARHVHEZTJBOJYRTUPXTDCVMOVUKMPSWNGNOIATSOCQCZZQTLWVYXUOBXJKXPYOVJGH");

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
    msg.setTimeStamp(0.910583503215);
    msg.setSource(33230U);
    msg.setSourceEntity(12U);
    msg.setDestination(49124U);
    msg.setDestinationEntity(222U);
    msg.op = 104U;
    msg.time_remain = 0.70191689475;
    msg.sched_time = 0.552856900491;

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
    msg.setTimeStamp(0.428207750692);
    msg.setSource(3044U);
    msg.setSourceEntity(110U);
    msg.setDestination(3932U);
    msg.setDestinationEntity(105U);
    msg.op = 217U;
    msg.time_remain = 0.559509254081;
    msg.sched_time = 0.962810036504;

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
    msg.setTimeStamp(0.813976699813);
    msg.setSource(25486U);
    msg.setSourceEntity(31U);
    msg.setDestination(19064U);
    msg.setDestinationEntity(65U);
    msg.op = 37U;
    msg.time_remain = 0.50049588204;
    msg.sched_time = 0.280806195929;

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
    msg.setTimeStamp(0.876169893955);
    msg.setSource(49218U);
    msg.setSourceEntity(90U);
    msg.setDestination(5973U);
    msg.setDestinationEntity(2U);
    msg.name.assign("XANNKBWDSYNPVJQGWDPCZVAJPHAXYLRFKICOSQXRQEDICCUMGCZOWLPGNOVELXPTGTRZTQLMXYJPSOUJWMEHGFZFIU");
    msg.op = 80U;
    msg.sched_time = 0.802936284489;

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
    msg.setTimeStamp(0.931464686014);
    msg.setSource(4506U);
    msg.setSourceEntity(179U);
    msg.setDestination(13922U);
    msg.setDestinationEntity(185U);
    msg.name.assign("BLNAREIVNNIAUKVWOXBQVRBQFDPMMMDAOAKQUYRTISMXDBXVTDCGDCXLZRWWFMXTOLJSUGZFMZWIYUJOONEORAKHBBIQYWRFSSIYFAGNVZARCWCNZEWGTIPRIKLCJGMIVVFYDHSUHEEXKDKYBACGOEUGBCQHTMBPKHKUTOQSFJNXVZFZQPEHPKLTHSUJOLZRMWX");
    msg.op = 192U;
    msg.sched_time = 0.318409639717;

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
    msg.setTimeStamp(0.2720720165);
    msg.setSource(22575U);
    msg.setSourceEntity(32U);
    msg.setDestination(50081U);
    msg.setDestinationEntity(45U);
    msg.name.assign("GMIDATOHYLOOVMXRBQYEAJTKYXMZHWUMYHJSUAZDKVFOWCGVDLEPDLFXANDBFAULCXQWAKPMSIQZAHRESIM");
    msg.op = 39U;
    msg.sched_time = 0.283910782288;

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
    msg.setTimeStamp(0.0507859375198);
    msg.setSource(12796U);
    msg.setSourceEntity(233U);
    msg.setDestination(28574U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.653238550165);
    msg.setSource(23315U);
    msg.setSourceEntity(8U);
    msg.setDestination(1770U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.57264967301);
    msg.setSource(6555U);
    msg.setSourceEntity(64U);
    msg.setDestination(12405U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.694323643154);
    msg.setSource(33136U);
    msg.setSourceEntity(111U);
    msg.setDestination(65008U);
    msg.setDestinationEntity(194U);
    msg.name.assign("FMNPRGPXJMCUKQLQAXSEXZGRBVTIJHOIUWXEZRSRQLEVLRAEDSQFHUWTCIMQGGTKIBITSHVUBGFOAZCRHJVHJQLZGPBJZXIDJKLSLAHZORFROQMWIDFUAEWWJTPEFTYAAOWKMZDRSZCFEVYEFZ");
    msg.state = 200U;

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
    msg.setTimeStamp(0.718828477369);
    msg.setSource(18710U);
    msg.setSourceEntity(161U);
    msg.setDestination(23013U);
    msg.setDestinationEntity(49U);
    msg.name.assign("GZIFYBRTFOQMXRFGRWRGSMTYMPHEQVUOAWHADLXCDPWENELINFMUWYYGMICPRTKZRBLNQQNGZXDWEFWZORSDBSBVGHFLNDKVMAPBQZWHTSSLKUCVXCBIIJFXZHXTDHATOAUAEPZSICKDRYMLXBYOQUVIIWMVKHRACTJVJ");
    msg.state = 151U;

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
    msg.setTimeStamp(0.961470203159);
    msg.setSource(4329U);
    msg.setSourceEntity(174U);
    msg.setDestination(33050U);
    msg.setDestinationEntity(191U);
    msg.name.assign("QWUIPDYGPGFOR");
    msg.state = 30U;

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
    msg.setTimeStamp(0.497617718509);
    msg.setSource(19293U);
    msg.setSourceEntity(159U);
    msg.setDestination(58837U);
    msg.setDestinationEntity(212U);
    msg.name.assign("FYIKILDLLWFCPJQYBNCSWTDGFRMTQNZXWHB");
    msg.value = 18U;

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
    msg.setTimeStamp(0.714250133966);
    msg.setSource(10489U);
    msg.setSourceEntity(179U);
    msg.setDestination(8377U);
    msg.setDestinationEntity(39U);
    msg.name.assign("MDTQQFVSAFFAPACRBVVTXNDLXSXXNQMORLCWGALXCFUTIEWKTVFNDAYIVECFUXFOFPKRMNOZZDEPGKHKCUZHIPVMQLKBIEJLJWUTUMIO");
    msg.value = 162U;

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
    msg.setTimeStamp(0.347023756953);
    msg.setSource(8964U);
    msg.setSourceEntity(140U);
    msg.setDestination(57471U);
    msg.setDestinationEntity(149U);
    msg.name.assign("JPUHLIUHOWXLBIVMHQBXGKWTMGUTCCPOTFIPFLDYZSDJUYENPJKJHXLIEMWXJBOUGCSFYAZNIATUMSHKPYQRKZVRPYWIYAQBKVNJSUPDDKLYELNXOHMOFNJVMRSONSHNBQLDDMXXQHHYAOMGLZXHMQYBQPTIDSSPQAPEVZWQTEIJCWJTIAGOCVZGRZOBKCQFVFEKDREFAKVJRYUMBCAENWDEWCAFXSLSTROWCCRUZX");
    msg.value = 143U;

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
    msg.setTimeStamp(0.0383296150292);
    msg.setSource(31509U);
    msg.setSourceEntity(36U);
    msg.setDestination(29730U);
    msg.setDestinationEntity(34U);
    msg.name.assign("DOOTDNHHMCALDSLRNJBWWNZFXZJUFCWNXUGLVBQCPAWPOTKGDBDNRXRSEEFDUPNIBUISYIOKFUPCYRMCSNFAQBYYNXKVGYNOGDFWWKBIJNQCIVMYKTH");

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
    msg.setTimeStamp(0.792242677838);
    msg.setSource(52648U);
    msg.setSourceEntity(146U);
    msg.setDestination(2596U);
    msg.setDestinationEntity(227U);
    msg.name.assign("YPMGAETPLINUWTYCFKZOGIIQFUPBJGZTUBMWSCFORQWZIXRLXGKSQKSYLETOSNCKQIANQESJFUSPK");

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
    msg.setTimeStamp(0.979902964068);
    msg.setSource(42713U);
    msg.setSourceEntity(219U);
    msg.setDestination(37895U);
    msg.setDestinationEntity(230U);
    msg.name.assign("EOCROIBFCRVBVBBNFUFDUJUWAMQQMJKPHSUNRBYXMQCEAWTMHPCGCXHLVZGLOSZJIOGFSLGPFUKWFTKDGGDINHISESKGPKCDYRZQZMOIIVUFCOBDTEHOSXVXYALCVNAJFXAFKDDMHLYHHRKRZWTGCMLXJETRQTLIEGTV");

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
    msg.setTimeStamp(0.0992155788403);
    msg.setSource(53979U);
    msg.setSourceEntity(72U);
    msg.setDestination(4307U);
    msg.setDestinationEntity(197U);
    msg.name.assign("VOOQIUTPRPZUYQYTWFFLBDQZVKJADXZMLLWHYDIJFCTNITARGBEOKQYHWRRJEGFSRETAPDNHMEZXXBVBYCLASVGPJFZUMKNHUFHJHGWSEUJVNGZQGDVTIBLDCYMFLAENSPVLYMFSDBBJXMSCQEHGLLCKYQXKPMDXIVXJEOAEGUSAWNVZTDQYRIKUITBKNZWW");
    msg.value = 156U;

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
    msg.setTimeStamp(0.810211966725);
    msg.setSource(19484U);
    msg.setSourceEntity(118U);
    msg.setDestination(34185U);
    msg.setDestinationEntity(119U);
    msg.name.assign("KDUTANCNQKMATHCMHVWLOHEEENPSRVXLVNJJNZCFVFYMFECPCAX");
    msg.value = 13U;

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
    msg.setTimeStamp(0.0740724642659);
    msg.setSource(11566U);
    msg.setSourceEntity(28U);
    msg.setDestination(56556U);
    msg.setDestinationEntity(121U);
    msg.name.assign("WKRNFVPJSTXMXONRAEDYQDSYCSCMPQDHGLPMUNVZHGTAEOPHGDTCLLWTBEEJFERWYIZQDMASQLBXVCTUYZYKPDOINDIWYDSMKWHRUPWOQOJTHIUTKYUJAOAIXFKIOMIZKJ");
    msg.value = 175U;

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
    msg.setTimeStamp(0.191581940602);
    msg.setSource(56504U);
    msg.setSourceEntity(67U);
    msg.setDestination(52448U);
    msg.setDestinationEntity(237U);
    msg.id = 25U;
    msg.period = 445574126U;
    msg.duty_cycle = 3966791036U;

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
    msg.setTimeStamp(0.585081764556);
    msg.setSource(8431U);
    msg.setSourceEntity(234U);
    msg.setDestination(64157U);
    msg.setDestinationEntity(89U);
    msg.id = 127U;
    msg.period = 1168529023U;
    msg.duty_cycle = 2325269294U;

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
    msg.setTimeStamp(0.463579323652);
    msg.setSource(5216U);
    msg.setSourceEntity(249U);
    msg.setDestination(56351U);
    msg.setDestinationEntity(236U);
    msg.id = 217U;
    msg.period = 2195315680U;
    msg.duty_cycle = 2746302936U;

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
    msg.setTimeStamp(0.169849571929);
    msg.setSource(29356U);
    msg.setSourceEntity(191U);
    msg.setDestination(5621U);
    msg.setDestinationEntity(193U);
    msg.id = 234U;
    msg.period = 2793587856U;
    msg.duty_cycle = 2276324969U;

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
    msg.setTimeStamp(0.692305124835);
    msg.setSource(62430U);
    msg.setSourceEntity(246U);
    msg.setDestination(1634U);
    msg.setDestinationEntity(244U);
    msg.id = 116U;
    msg.period = 1268623490U;
    msg.duty_cycle = 1734014200U;

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
    msg.setTimeStamp(0.751813220354);
    msg.setSource(9038U);
    msg.setSourceEntity(61U);
    msg.setDestination(42800U);
    msg.setDestinationEntity(45U);
    msg.id = 194U;
    msg.period = 1034720410U;
    msg.duty_cycle = 3985010114U;

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
    msg.setTimeStamp(0.629077210028);
    msg.setSource(29833U);
    msg.setSourceEntity(169U);
    msg.setDestination(33117U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.698809071305;
    msg.lon = 0.29233789383;
    msg.height = 0.0123202920229;
    msg.x = 0.964111061391;
    msg.y = 0.517458113001;
    msg.z = 0.973658251933;
    msg.phi = 0.0215147294719;
    msg.theta = 0.408266833694;
    msg.psi = 0.596591576883;
    msg.u = 0.876792812536;
    msg.v = 0.773778526733;
    msg.w = 0.45686897132;
    msg.vx = 0.674402392217;
    msg.vy = 0.358007655077;
    msg.vz = 0.397992787084;
    msg.p = 0.391015619711;
    msg.q = 0.701672676278;
    msg.r = 0.479411559462;
    msg.depth = 0.586291171171;
    msg.alt = 0.878879037395;

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
    msg.setTimeStamp(0.312328281901);
    msg.setSource(19906U);
    msg.setSourceEntity(167U);
    msg.setDestination(62135U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.889763613773;
    msg.lon = 0.0250466717355;
    msg.height = 0.177638171955;
    msg.x = 0.701816800075;
    msg.y = 0.0595272853884;
    msg.z = 0.462572840062;
    msg.phi = 0.350804569179;
    msg.theta = 0.843606208173;
    msg.psi = 0.179915862201;
    msg.u = 0.094343045483;
    msg.v = 0.212266481462;
    msg.w = 0.770726399965;
    msg.vx = 0.69585704134;
    msg.vy = 0.684312773704;
    msg.vz = 0.484583116499;
    msg.p = 0.465759872688;
    msg.q = 0.0324182582911;
    msg.r = 0.718756252735;
    msg.depth = 0.234104397161;
    msg.alt = 0.626633118169;

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
    msg.setTimeStamp(0.554486065184);
    msg.setSource(32805U);
    msg.setSourceEntity(14U);
    msg.setDestination(23850U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.992503667933;
    msg.lon = 0.106549133854;
    msg.height = 0.267773180348;
    msg.x = 0.193748409952;
    msg.y = 0.0458086043987;
    msg.z = 0.622369749986;
    msg.phi = 0.732600858768;
    msg.theta = 0.748982442314;
    msg.psi = 0.339751386659;
    msg.u = 0.0508424302337;
    msg.v = 0.282121046807;
    msg.w = 0.306772097039;
    msg.vx = 0.550695371095;
    msg.vy = 0.434446941595;
    msg.vz = 0.869083626616;
    msg.p = 0.868193774415;
    msg.q = 0.737991399621;
    msg.r = 0.851446568825;
    msg.depth = 0.0193210694039;
    msg.alt = 0.0632869081517;

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
    msg.setTimeStamp(0.330149541139);
    msg.setSource(7482U);
    msg.setSourceEntity(230U);
    msg.setDestination(24156U);
    msg.setDestinationEntity(199U);
    msg.x = 0.11955965477;
    msg.y = 0.747225352127;
    msg.z = 0.908885437823;

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
    msg.setTimeStamp(0.0603889789167);
    msg.setSource(45607U);
    msg.setSourceEntity(1U);
    msg.setDestination(33318U);
    msg.setDestinationEntity(204U);
    msg.x = 0.571562946817;
    msg.y = 0.442476900377;
    msg.z = 0.566536280512;

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
    msg.setTimeStamp(0.633219560374);
    msg.setSource(23045U);
    msg.setSourceEntity(159U);
    msg.setDestination(19906U);
    msg.setDestinationEntity(223U);
    msg.x = 0.657681357887;
    msg.y = 0.885649790011;
    msg.z = 0.54636346695;

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
    msg.setTimeStamp(0.858017860929);
    msg.setSource(54432U);
    msg.setSourceEntity(17U);
    msg.setDestination(38181U);
    msg.setDestinationEntity(44U);
    msg.value = 0.864778343992;

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
    msg.setTimeStamp(0.602137524581);
    msg.setSource(59845U);
    msg.setSourceEntity(54U);
    msg.setDestination(65444U);
    msg.setDestinationEntity(82U);
    msg.value = 0.941590003603;

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
    msg.setTimeStamp(0.714155877838);
    msg.setSource(57083U);
    msg.setSourceEntity(135U);
    msg.setDestination(42775U);
    msg.setDestinationEntity(32U);
    msg.value = 0.935358380346;

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
    msg.setTimeStamp(0.188021824438);
    msg.setSource(3109U);
    msg.setSourceEntity(136U);
    msg.setDestination(22033U);
    msg.setDestinationEntity(155U);
    msg.value = 0.99261146305;

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
    msg.setTimeStamp(0.340515258526);
    msg.setSource(61693U);
    msg.setSourceEntity(118U);
    msg.setDestination(41492U);
    msg.setDestinationEntity(78U);
    msg.value = 0.748903676104;

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
    msg.setTimeStamp(0.892804117692);
    msg.setSource(50175U);
    msg.setSourceEntity(168U);
    msg.setDestination(41411U);
    msg.setDestinationEntity(6U);
    msg.value = 0.386248470401;

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
    msg.setTimeStamp(0.719566549753);
    msg.setSource(49345U);
    msg.setSourceEntity(77U);
    msg.setDestination(46970U);
    msg.setDestinationEntity(87U);
    msg.x = 0.793994043342;
    msg.y = 0.197968598193;
    msg.z = 0.0978547104771;
    msg.phi = 0.506040257455;
    msg.theta = 0.646956771638;
    msg.psi = 0.22314837172;
    msg.p = 0.0481011981408;
    msg.q = 0.921128114393;
    msg.r = 0.102120425633;
    msg.u = 0.567180601638;
    msg.v = 0.150532771684;
    msg.w = 0.948164677308;
    msg.bias_psi = 0.49440300016;
    msg.bias_r = 0.582703210557;

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
    msg.setTimeStamp(0.370484206104);
    msg.setSource(2699U);
    msg.setSourceEntity(57U);
    msg.setDestination(47242U);
    msg.setDestinationEntity(0U);
    msg.x = 0.695161214896;
    msg.y = 0.503593869377;
    msg.z = 0.690729092432;
    msg.phi = 0.123968861828;
    msg.theta = 0.0678450910533;
    msg.psi = 0.78328078362;
    msg.p = 0.612678625605;
    msg.q = 0.399789684273;
    msg.r = 0.804753532275;
    msg.u = 0.892666662863;
    msg.v = 0.976415107808;
    msg.w = 0.144220883232;
    msg.bias_psi = 0.432529140279;
    msg.bias_r = 0.574250620642;

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
    msg.setTimeStamp(0.710148893227);
    msg.setSource(55833U);
    msg.setSourceEntity(53U);
    msg.setDestination(19430U);
    msg.setDestinationEntity(46U);
    msg.x = 0.900592299248;
    msg.y = 0.671658490639;
    msg.z = 0.408398972427;
    msg.phi = 0.776079103656;
    msg.theta = 0.97074179226;
    msg.psi = 0.329055134296;
    msg.p = 0.0118417995004;
    msg.q = 0.799013290295;
    msg.r = 0.703461253652;
    msg.u = 0.335284795646;
    msg.v = 0.549704724385;
    msg.w = 0.964253402897;
    msg.bias_psi = 0.566991564104;
    msg.bias_r = 0.816871792222;

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
    msg.setTimeStamp(0.129717426546);
    msg.setSource(3661U);
    msg.setSourceEntity(14U);
    msg.setDestination(276U);
    msg.setDestinationEntity(15U);
    msg.bias_psi = 0.925446560586;
    msg.bias_r = 0.351856072109;
    msg.cog = 0.301698598316;
    msg.cyaw = 0.18180602424;
    msg.lbl_rej_level = 0.823524512557;
    msg.gps_rej_level = 0.019691187378;
    msg.custom_x = 0.494330372661;
    msg.custom_y = 0.821527694066;
    msg.custom_z = 0.312938072145;

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
    msg.setTimeStamp(0.00193926687566);
    msg.setSource(24942U);
    msg.setSourceEntity(114U);
    msg.setDestination(59315U);
    msg.setDestinationEntity(135U);
    msg.bias_psi = 0.587805049486;
    msg.bias_r = 0.255981998609;
    msg.cog = 0.808879681927;
    msg.cyaw = 0.631736880314;
    msg.lbl_rej_level = 0.791374144331;
    msg.gps_rej_level = 0.297189340866;
    msg.custom_x = 0.615385930606;
    msg.custom_y = 0.0790575580165;
    msg.custom_z = 0.617522699495;

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
    msg.setTimeStamp(0.287327386837);
    msg.setSource(30033U);
    msg.setSourceEntity(62U);
    msg.setDestination(59034U);
    msg.setDestinationEntity(81U);
    msg.bias_psi = 0.837633650599;
    msg.bias_r = 0.597386991248;
    msg.cog = 0.972201657662;
    msg.cyaw = 0.0417900938491;
    msg.lbl_rej_level = 0.284662777323;
    msg.gps_rej_level = 0.628852091822;
    msg.custom_x = 0.342697952619;
    msg.custom_y = 0.845794750427;
    msg.custom_z = 0.413824329533;

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
    msg.setTimeStamp(0.0544886521234);
    msg.setSource(7552U);
    msg.setSourceEntity(250U);
    msg.setDestination(14915U);
    msg.setDestinationEntity(21U);
    msg.utc_time = 0.127030386438;
    msg.reason = 187U;

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
    msg.setTimeStamp(0.230210011364);
    msg.setSource(62627U);
    msg.setSourceEntity(239U);
    msg.setDestination(46889U);
    msg.setDestinationEntity(240U);
    msg.utc_time = 0.325159149714;
    msg.reason = 190U;

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
    msg.setTimeStamp(0.953361757098);
    msg.setSource(813U);
    msg.setSourceEntity(13U);
    msg.setDestination(40269U);
    msg.setDestinationEntity(186U);
    msg.utc_time = 0.76577375671;
    msg.reason = 146U;

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
    msg.setTimeStamp(0.279549037665);
    msg.setSource(26134U);
    msg.setSourceEntity(9U);
    msg.setDestination(2731U);
    msg.setDestinationEntity(182U);
    msg.id = 27U;
    msg.range = 0.702774500316;
    msg.acceptance = 138U;

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
    msg.setTimeStamp(0.221386678461);
    msg.setSource(16892U);
    msg.setSourceEntity(63U);
    msg.setDestination(58965U);
    msg.setDestinationEntity(228U);
    msg.id = 60U;
    msg.range = 0.653215659955;
    msg.acceptance = 78U;

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
    msg.setTimeStamp(0.951940675982);
    msg.setSource(62630U);
    msg.setSourceEntity(202U);
    msg.setDestination(50459U);
    msg.setDestinationEntity(165U);
    msg.id = 68U;
    msg.range = 0.133462813501;
    msg.acceptance = 131U;

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
    msg.setTimeStamp(0.4246638635);
    msg.setSource(51672U);
    msg.setSourceEntity(36U);
    msg.setDestination(6073U);
    msg.setDestinationEntity(54U);
    msg.type = 182U;
    msg.reason = 180U;
    msg.value = 0.174809166059;
    msg.timestep = 0.93399057511;

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
    msg.setTimeStamp(0.843034168326);
    msg.setSource(55345U);
    msg.setSourceEntity(88U);
    msg.setDestination(46899U);
    msg.setDestinationEntity(11U);
    msg.type = 211U;
    msg.reason = 30U;
    msg.value = 0.858399671839;
    msg.timestep = 0.805363239757;

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
    msg.setTimeStamp(0.0840602784393);
    msg.setSource(52649U);
    msg.setSourceEntity(219U);
    msg.setDestination(63754U);
    msg.setDestinationEntity(67U);
    msg.type = 77U;
    msg.reason = 38U;
    msg.value = 0.721829431655;
    msg.timestep = 0.452247345948;

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
    msg.setTimeStamp(0.786720902624);
    msg.setSource(18000U);
    msg.setSourceEntity(36U);
    msg.setDestination(21927U);
    msg.setDestinationEntity(97U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BCMQQSJSCMQMQBRETXWDFGWISTYODGUJDRWGKWRXINNIORUHWMZECBAQLWUABFLLUBYDEUHSGYZVUYNNHSBJCDHHKVUQEPJY");
    tmp_msg_0.lat = 0.664725835817;
    tmp_msg_0.lon = 0.814055448719;
    tmp_msg_0.depth = 0.303932959535;
    tmp_msg_0.query_channel = 45U;
    tmp_msg_0.reply_channel = 84U;
    tmp_msg_0.transponder_delay = 243U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.583320791202;
    msg.y = 0.406533627401;
    msg.var_x = 0.37108294124;
    msg.var_y = 0.960771375009;
    msg.distance = 0.476790867331;

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
    msg.setTimeStamp(0.443729491198);
    msg.setSource(14819U);
    msg.setSourceEntity(116U);
    msg.setDestination(11388U);
    msg.setDestinationEntity(195U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZWUSTLZTBONKFUHMRKEASNQTTYVWSPXZAPQRWRKUQOFRDESTGVJKCLHNKQZBNAALHBCMGMMFDZFPHTGFXJCCDNJOYAJSUFRK");
    tmp_msg_0.lat = 0.754925012078;
    tmp_msg_0.lon = 0.365217806497;
    tmp_msg_0.depth = 0.760505367253;
    tmp_msg_0.query_channel = 103U;
    tmp_msg_0.reply_channel = 110U;
    tmp_msg_0.transponder_delay = 119U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.344000792508;
    msg.y = 0.165003457988;
    msg.var_x = 0.462167758564;
    msg.var_y = 0.96443807584;
    msg.distance = 0.906649684353;

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
    msg.setTimeStamp(0.681953552517);
    msg.setSource(51291U);
    msg.setSourceEntity(53U);
    msg.setDestination(49569U);
    msg.setDestinationEntity(198U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RHDQXQIUYDNLJ");
    tmp_msg_0.lat = 0.544697353588;
    tmp_msg_0.lon = 0.0558130048487;
    tmp_msg_0.depth = 0.514429504136;
    tmp_msg_0.query_channel = 101U;
    tmp_msg_0.reply_channel = 145U;
    tmp_msg_0.transponder_delay = 253U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.653971233308;
    msg.y = 0.667928520668;
    msg.var_x = 0.647431056357;
    msg.var_y = 0.376226421331;
    msg.distance = 0.246839195028;

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
    msg.setTimeStamp(0.24652220783);
    msg.setSource(44363U);
    msg.setSourceEntity(240U);
    msg.setDestination(37600U);
    msg.setDestinationEntity(30U);
    msg.state = 59U;

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
    msg.setTimeStamp(0.649879907037);
    msg.setSource(25521U);
    msg.setSourceEntity(217U);
    msg.setDestination(8125U);
    msg.setDestinationEntity(158U);
    msg.state = 164U;

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
    msg.setTimeStamp(0.736241976808);
    msg.setSource(1423U);
    msg.setSourceEntity(48U);
    msg.setDestination(62321U);
    msg.setDestinationEntity(120U);
    msg.state = 184U;

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
    msg.setTimeStamp(0.688206894401);
    msg.setSource(64359U);
    msg.setSourceEntity(230U);
    msg.setDestination(50936U);
    msg.setDestinationEntity(96U);
    msg.x = 0.600012451857;
    msg.y = 0.120568629363;
    msg.z = 0.731673843936;

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
    msg.setTimeStamp(0.0436730717449);
    msg.setSource(39206U);
    msg.setSourceEntity(213U);
    msg.setDestination(64487U);
    msg.setDestinationEntity(25U);
    msg.x = 0.834754032974;
    msg.y = 0.0237580810641;
    msg.z = 0.306488022943;

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
    msg.setTimeStamp(0.225052662729);
    msg.setSource(53624U);
    msg.setSourceEntity(9U);
    msg.setDestination(591U);
    msg.setDestinationEntity(194U);
    msg.x = 0.899951213581;
    msg.y = 0.413618544713;
    msg.z = 0.876070992884;

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
    msg.setTimeStamp(0.319141628809);
    msg.setSource(17240U);
    msg.setSourceEntity(4U);
    msg.setDestination(24257U);
    msg.setDestinationEntity(170U);
    msg.va = 0.233761113063;
    msg.aoa = 0.47146919582;
    msg.ssa = 0.261796115719;

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
    msg.setTimeStamp(0.687511936878);
    msg.setSource(32702U);
    msg.setSourceEntity(40U);
    msg.setDestination(47642U);
    msg.setDestinationEntity(0U);
    msg.va = 0.310404687338;
    msg.aoa = 0.596592142592;
    msg.ssa = 0.350161978217;

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
    msg.setTimeStamp(0.442447965953);
    msg.setSource(48170U);
    msg.setSourceEntity(204U);
    msg.setDestination(29437U);
    msg.setDestinationEntity(211U);
    msg.va = 0.88792350114;
    msg.aoa = 0.426216819201;
    msg.ssa = 0.727349867047;

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
    msg.setTimeStamp(0.571759234422);
    msg.setSource(57502U);
    msg.setSourceEntity(65U);
    msg.setDestination(63439U);
    msg.setDestinationEntity(96U);
    msg.value = 0.61393192526;

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
    msg.setTimeStamp(0.633273910189);
    msg.setSource(14037U);
    msg.setSourceEntity(239U);
    msg.setDestination(23988U);
    msg.setDestinationEntity(39U);
    msg.value = 0.152348092131;

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
    msg.setTimeStamp(0.0682828652925);
    msg.setSource(8498U);
    msg.setSourceEntity(11U);
    msg.setDestination(56332U);
    msg.setDestinationEntity(35U);
    msg.value = 0.802480714605;

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
    msg.setTimeStamp(0.178990523945);
    msg.setSource(44677U);
    msg.setSourceEntity(77U);
    msg.setDestination(39527U);
    msg.setDestinationEntity(251U);
    msg.value = 0.288255962544;
    msg.z_units = 29U;

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
    msg.setTimeStamp(0.0352566046386);
    msg.setSource(20069U);
    msg.setSourceEntity(215U);
    msg.setDestination(47258U);
    msg.setDestinationEntity(141U);
    msg.value = 0.396762329455;
    msg.z_units = 176U;

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
    msg.setTimeStamp(0.50559026533);
    msg.setSource(12235U);
    msg.setSourceEntity(49U);
    msg.setDestination(47045U);
    msg.setDestinationEntity(210U);
    msg.value = 0.987199803952;
    msg.z_units = 170U;

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
    msg.setTimeStamp(0.011373177806);
    msg.setSource(4186U);
    msg.setSourceEntity(10U);
    msg.setDestination(50078U);
    msg.setDestinationEntity(16U);
    msg.value = 0.968323919344;
    msg.speed_units = 158U;

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
    msg.setTimeStamp(0.218856821646);
    msg.setSource(11954U);
    msg.setSourceEntity(151U);
    msg.setDestination(32977U);
    msg.setDestinationEntity(56U);
    msg.value = 0.0705038507876;
    msg.speed_units = 3U;

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
    msg.setTimeStamp(0.224022387185);
    msg.setSource(27209U);
    msg.setSourceEntity(194U);
    msg.setDestination(36409U);
    msg.setDestinationEntity(122U);
    msg.value = 0.833948804072;
    msg.speed_units = 148U;

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
    msg.setTimeStamp(0.142670822153);
    msg.setSource(28252U);
    msg.setSourceEntity(225U);
    msg.setDestination(9952U);
    msg.setDestinationEntity(62U);
    msg.value = 0.0421383274183;

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
    msg.setTimeStamp(0.639492941466);
    msg.setSource(65464U);
    msg.setSourceEntity(235U);
    msg.setDestination(34123U);
    msg.setDestinationEntity(154U);
    msg.value = 0.332058278699;

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
    msg.setTimeStamp(0.213403114175);
    msg.setSource(49155U);
    msg.setSourceEntity(226U);
    msg.setDestination(44966U);
    msg.setDestinationEntity(107U);
    msg.value = 0.429617431871;

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
    msg.setTimeStamp(0.111719146601);
    msg.setSource(10545U);
    msg.setSourceEntity(130U);
    msg.setDestination(21374U);
    msg.setDestinationEntity(121U);
    msg.value = 0.23507413221;

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
    msg.setTimeStamp(0.945956935294);
    msg.setSource(17387U);
    msg.setSourceEntity(148U);
    msg.setDestination(37253U);
    msg.setDestinationEntity(213U);
    msg.value = 0.0566317560948;

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
    msg.setTimeStamp(0.43993863331);
    msg.setSource(13933U);
    msg.setSourceEntity(140U);
    msg.setDestination(21977U);
    msg.setDestinationEntity(208U);
    msg.value = 0.279962877817;

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
    msg.setTimeStamp(0.920147752294);
    msg.setSource(12772U);
    msg.setSourceEntity(182U);
    msg.setDestination(20141U);
    msg.setDestinationEntity(183U);
    msg.value = 0.387666755814;

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
    msg.setTimeStamp(0.722517557698);
    msg.setSource(5559U);
    msg.setSourceEntity(12U);
    msg.setDestination(33011U);
    msg.setDestinationEntity(185U);
    msg.value = 0.320635724439;

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
    msg.setTimeStamp(0.727594308574);
    msg.setSource(34946U);
    msg.setSourceEntity(166U);
    msg.setDestination(3344U);
    msg.setDestinationEntity(135U);
    msg.value = 0.0808363049053;

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
    msg.setTimeStamp(0.801645608816);
    msg.setSource(34253U);
    msg.setSourceEntity(121U);
    msg.setDestination(57302U);
    msg.setDestinationEntity(252U);
    msg.path_ref = 710271510U;
    msg.start_lat = 0.914765412978;
    msg.start_lon = 0.424312270683;
    msg.start_z = 0.243068228741;
    msg.start_z_units = 144U;
    msg.end_lat = 0.0306895378387;
    msg.end_lon = 0.67519080668;
    msg.end_z = 0.0972251855323;
    msg.end_z_units = 129U;
    msg.speed = 0.598618630884;
    msg.speed_units = 191U;
    msg.lradius = 0.453020616893;
    msg.flags = 190U;

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
    msg.setTimeStamp(0.483247589485);
    msg.setSource(62457U);
    msg.setSourceEntity(24U);
    msg.setDestination(38154U);
    msg.setDestinationEntity(122U);
    msg.path_ref = 2118529576U;
    msg.start_lat = 0.138495679804;
    msg.start_lon = 0.927215085249;
    msg.start_z = 0.847390387644;
    msg.start_z_units = 143U;
    msg.end_lat = 0.114340978643;
    msg.end_lon = 0.144959620626;
    msg.end_z = 0.533918450711;
    msg.end_z_units = 102U;
    msg.speed = 0.390139402164;
    msg.speed_units = 199U;
    msg.lradius = 0.165772557051;
    msg.flags = 87U;

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
    msg.setTimeStamp(0.468466072418);
    msg.setSource(40760U);
    msg.setSourceEntity(249U);
    msg.setDestination(12536U);
    msg.setDestinationEntity(57U);
    msg.path_ref = 2294990193U;
    msg.start_lat = 0.324303699728;
    msg.start_lon = 0.831298677789;
    msg.start_z = 0.365020987753;
    msg.start_z_units = 76U;
    msg.end_lat = 0.863389044323;
    msg.end_lon = 0.68118581286;
    msg.end_z = 0.935404517161;
    msg.end_z_units = 83U;
    msg.speed = 0.821379917835;
    msg.speed_units = 79U;
    msg.lradius = 0.96860368782;
    msg.flags = 222U;

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
    msg.setTimeStamp(0.0852917026686);
    msg.setSource(36033U);
    msg.setSourceEntity(104U);
    msg.setDestination(27624U);
    msg.setDestinationEntity(225U);
    msg.x = 0.678201029826;
    msg.y = 0.822565616906;
    msg.z = 0.216787921415;
    msg.k = 0.731957517026;
    msg.m = 0.36660898022;
    msg.n = 0.327766982776;
    msg.flags = 249U;

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
    msg.setTimeStamp(0.823567095119);
    msg.setSource(1372U);
    msg.setSourceEntity(253U);
    msg.setDestination(35383U);
    msg.setDestinationEntity(219U);
    msg.x = 0.209093054162;
    msg.y = 0.311208091692;
    msg.z = 0.747096836892;
    msg.k = 0.646326260355;
    msg.m = 0.591847711527;
    msg.n = 0.202090099093;
    msg.flags = 206U;

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
    msg.setTimeStamp(0.0832438707152);
    msg.setSource(26199U);
    msg.setSourceEntity(205U);
    msg.setDestination(31562U);
    msg.setDestinationEntity(44U);
    msg.x = 0.340366302516;
    msg.y = 0.987751600905;
    msg.z = 0.498062515927;
    msg.k = 0.549399890727;
    msg.m = 0.666868753623;
    msg.n = 0.0999194097668;
    msg.flags = 151U;

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
    msg.setTimeStamp(0.59061305779);
    msg.setSource(59403U);
    msg.setSourceEntity(144U);
    msg.setDestination(46106U);
    msg.setDestinationEntity(204U);
    msg.value = 0.513368654353;

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
    msg.setTimeStamp(0.175214106867);
    msg.setSource(57049U);
    msg.setSourceEntity(58U);
    msg.setDestination(7808U);
    msg.setDestinationEntity(1U);
    msg.value = 0.886659792493;

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
    msg.setTimeStamp(0.0900788976927);
    msg.setSource(27184U);
    msg.setSourceEntity(107U);
    msg.setDestination(23907U);
    msg.setDestinationEntity(0U);
    msg.value = 0.508240513089;

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
    msg.setTimeStamp(0.0394478097869);
    msg.setSource(5690U);
    msg.setSourceEntity(179U);
    msg.setDestination(3566U);
    msg.setDestinationEntity(4U);
    msg.u = 0.913316401984;
    msg.v = 0.0124267872418;
    msg.w = 0.851903810461;
    msg.p = 0.551322133682;
    msg.q = 0.905564164699;
    msg.r = 0.733200304742;
    msg.flags = 236U;

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
    msg.setTimeStamp(0.84653864871);
    msg.setSource(37239U);
    msg.setSourceEntity(9U);
    msg.setDestination(59474U);
    msg.setDestinationEntity(230U);
    msg.u = 0.551749634038;
    msg.v = 0.484844540584;
    msg.w = 0.333990344527;
    msg.p = 0.903185884442;
    msg.q = 0.671639686354;
    msg.r = 0.01517837114;
    msg.flags = 129U;

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
    msg.setTimeStamp(0.1597495201);
    msg.setSource(12295U);
    msg.setSourceEntity(94U);
    msg.setDestination(22927U);
    msg.setDestinationEntity(213U);
    msg.u = 0.0446293733024;
    msg.v = 0.681703951254;
    msg.w = 0.790360663624;
    msg.p = 0.747608821741;
    msg.q = 0.412696852622;
    msg.r = 0.421112595452;
    msg.flags = 242U;

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
    msg.setTimeStamp(0.473723772948);
    msg.setSource(23397U);
    msg.setSourceEntity(129U);
    msg.setDestination(48227U);
    msg.setDestinationEntity(6U);
    msg.path_ref = 2445407799U;
    msg.start_lat = 0.954551794462;
    msg.start_lon = 0.636082687849;
    msg.start_z = 0.190531350404;
    msg.start_z_units = 58U;
    msg.end_lat = 0.367188301371;
    msg.end_lon = 0.17213903367;
    msg.end_z = 0.884185122963;
    msg.end_z_units = 148U;
    msg.lradius = 0.480442233735;
    msg.flags = 170U;
    msg.x = 0.270147122158;
    msg.y = 0.694470061886;
    msg.z = 0.50463024963;
    msg.vx = 0.634390962613;
    msg.vy = 0.606055050535;
    msg.vz = 0.495801593991;
    msg.course_error = 0.933912296388;
    msg.eta = 16407U;

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
    msg.setTimeStamp(0.986969231372);
    msg.setSource(6820U);
    msg.setSourceEntity(100U);
    msg.setDestination(3311U);
    msg.setDestinationEntity(252U);
    msg.path_ref = 2344465226U;
    msg.start_lat = 0.206278863062;
    msg.start_lon = 0.135865412025;
    msg.start_z = 0.410410838849;
    msg.start_z_units = 84U;
    msg.end_lat = 0.785990547877;
    msg.end_lon = 0.802297602974;
    msg.end_z = 0.790995754327;
    msg.end_z_units = 52U;
    msg.lradius = 0.720923391481;
    msg.flags = 56U;
    msg.x = 0.177691995586;
    msg.y = 0.559858012734;
    msg.z = 0.845727542137;
    msg.vx = 0.301904215782;
    msg.vy = 0.884475973328;
    msg.vz = 0.732525394088;
    msg.course_error = 0.570018994824;
    msg.eta = 21056U;

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
    msg.setTimeStamp(0.845064687073);
    msg.setSource(15963U);
    msg.setSourceEntity(18U);
    msg.setDestination(41767U);
    msg.setDestinationEntity(156U);
    msg.path_ref = 4255932068U;
    msg.start_lat = 0.00931510830456;
    msg.start_lon = 0.169801495423;
    msg.start_z = 0.185748658979;
    msg.start_z_units = 254U;
    msg.end_lat = 0.564799656505;
    msg.end_lon = 0.241786501861;
    msg.end_z = 0.349026468653;
    msg.end_z_units = 23U;
    msg.lradius = 0.0797970664115;
    msg.flags = 191U;
    msg.x = 0.436786512793;
    msg.y = 0.2427719594;
    msg.z = 0.924290437963;
    msg.vx = 0.198579698638;
    msg.vy = 0.171333844814;
    msg.vz = 0.814499477562;
    msg.course_error = 0.143016782445;
    msg.eta = 21431U;

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
    msg.setTimeStamp(0.223811405308);
    msg.setSource(44543U);
    msg.setSourceEntity(247U);
    msg.setDestination(49569U);
    msg.setDestinationEntity(142U);
    msg.k = 0.269928470316;
    msg.m = 0.0229401984541;
    msg.n = 0.913566777521;

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
    msg.setTimeStamp(0.668492975221);
    msg.setSource(43296U);
    msg.setSourceEntity(198U);
    msg.setDestination(46961U);
    msg.setDestinationEntity(159U);
    msg.k = 0.922781001166;
    msg.m = 0.169673739444;
    msg.n = 0.581976077212;

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
    msg.setTimeStamp(0.650492273695);
    msg.setSource(14996U);
    msg.setSourceEntity(57U);
    msg.setDestination(54812U);
    msg.setDestinationEntity(86U);
    msg.k = 0.2163463613;
    msg.m = 0.0961071411898;
    msg.n = 0.483218610184;

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
    msg.setTimeStamp(0.93815543193);
    msg.setSource(55424U);
    msg.setSourceEntity(72U);
    msg.setDestination(12340U);
    msg.setDestinationEntity(113U);
    msg.p = 0.562470020332;
    msg.i = 0.153578371276;
    msg.d = 0.099438392542;
    msg.a = 0.50280255796;

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
    msg.setTimeStamp(0.477630073534);
    msg.setSource(47906U);
    msg.setSourceEntity(32U);
    msg.setDestination(2854U);
    msg.setDestinationEntity(234U);
    msg.p = 0.066005478054;
    msg.i = 0.354330106809;
    msg.d = 0.30627920518;
    msg.a = 0.450626275155;

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
    msg.setTimeStamp(0.318553792772);
    msg.setSource(51867U);
    msg.setSourceEntity(174U);
    msg.setDestination(58473U);
    msg.setDestinationEntity(68U);
    msg.p = 0.0608987733233;
    msg.i = 0.479582444121;
    msg.d = 0.334597301791;
    msg.a = 0.742198517597;

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
    msg.setTimeStamp(0.558762725453);
    msg.setSource(43643U);
    msg.setSourceEntity(139U);
    msg.setDestination(39346U);
    msg.setDestinationEntity(149U);
    msg.op = 214U;

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
    msg.setTimeStamp(0.0840105093016);
    msg.setSource(34650U);
    msg.setSourceEntity(234U);
    msg.setDestination(51740U);
    msg.setDestinationEntity(254U);
    msg.op = 166U;

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
    msg.setTimeStamp(0.372367811993);
    msg.setSource(62711U);
    msg.setSourceEntity(22U);
    msg.setDestination(23667U);
    msg.setDestinationEntity(18U);
    msg.op = 117U;

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
    msg.setTimeStamp(0.852969523332);
    msg.setSource(27450U);
    msg.setSourceEntity(6U);
    msg.setDestination(15331U);
    msg.setDestinationEntity(28U);
    msg.x = 0.0593141561382;
    msg.y = 0.339045864887;
    msg.z = 0.830452490107;
    msg.vx = 0.665274754605;
    msg.vy = 0.217844313448;
    msg.vz = 0.725630159078;
    msg.ax = 0.440292319658;
    msg.ay = 0.693493509658;
    msg.az = 0.219877006148;
    msg.flags = 36939U;

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
    msg.setTimeStamp(0.58463115794);
    msg.setSource(18380U);
    msg.setSourceEntity(82U);
    msg.setDestination(42027U);
    msg.setDestinationEntity(152U);
    msg.x = 0.133080440901;
    msg.y = 0.810042876722;
    msg.z = 0.314258938111;
    msg.vx = 0.0168849005986;
    msg.vy = 0.468533303465;
    msg.vz = 0.19321425728;
    msg.ax = 0.632672574217;
    msg.ay = 0.96336466164;
    msg.az = 0.0869061301815;
    msg.flags = 22121U;

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
    msg.setTimeStamp(0.781052560846);
    msg.setSource(27625U);
    msg.setSourceEntity(2U);
    msg.setDestination(10832U);
    msg.setDestinationEntity(13U);
    msg.x = 0.440566852305;
    msg.y = 0.973361779247;
    msg.z = 0.00188112638156;
    msg.vx = 0.811896341101;
    msg.vy = 0.445554334285;
    msg.vz = 0.864584739118;
    msg.ax = 0.323404097962;
    msg.ay = 0.254321260616;
    msg.az = 0.728329499514;
    msg.flags = 6872U;

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
    IMC::Goto msg;
    msg.setTimeStamp(0.275559521245);
    msg.setSource(28547U);
    msg.setSourceEntity(251U);
    msg.setDestination(31467U);
    msg.setDestinationEntity(99U);
    msg.timeout = 63191U;
    msg.lat = 0.719295310305;
    msg.lon = 0.98311652551;
    msg.z = 0.562202293702;
    msg.z_units = 157U;
    msg.speed = 0.969101454402;
    msg.speed_units = 94U;
    msg.roll = 0.165326122472;
    msg.pitch = 0.925892135257;
    msg.yaw = 0.722518940956;
    msg.custom.assign("NLMJJUVNKGOAONOAMDKGARTOCTTQSBRCFMPXJBJGIMMVPFBIQYYEWLSYXEDTHSYFPMYEJTDICJJXHTHONOSAE");

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
    msg.setTimeStamp(0.958532520405);
    msg.setSource(42669U);
    msg.setSourceEntity(123U);
    msg.setDestination(39048U);
    msg.setDestinationEntity(244U);
    msg.timeout = 36738U;
    msg.lat = 0.36542845738;
    msg.lon = 0.786870281999;
    msg.z = 0.403187164572;
    msg.z_units = 181U;
    msg.speed = 0.815063945226;
    msg.speed_units = 44U;
    msg.roll = 0.091910752146;
    msg.pitch = 0.939249776692;
    msg.yaw = 0.624765263399;
    msg.custom.assign("ESTDSXZMYVRAILFFCTVKIIGVEBPFFCNVGLDVJDADOQFPBUETQTOWQEZNXSSPFQZRPG");

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
    msg.setTimeStamp(0.862342893676);
    msg.setSource(52473U);
    msg.setSourceEntity(236U);
    msg.setDestination(45672U);
    msg.setDestinationEntity(254U);
    msg.timeout = 23220U;
    msg.lat = 0.508972135058;
    msg.lon = 0.158505274677;
    msg.z = 0.534995019914;
    msg.z_units = 236U;
    msg.speed = 0.692373910216;
    msg.speed_units = 125U;
    msg.roll = 0.504418934087;
    msg.pitch = 0.495089345029;
    msg.yaw = 0.599726537249;
    msg.custom.assign("XKVMLMUYAVBQPEUKX");

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
    msg.setTimeStamp(0.281015021957);
    msg.setSource(30416U);
    msg.setSourceEntity(41U);
    msg.setDestination(64917U);
    msg.setDestinationEntity(113U);
    msg.timeout = 11025U;
    msg.lat = 0.159879577529;
    msg.lon = 0.863412206009;
    msg.z = 0.330390237166;
    msg.z_units = 132U;
    msg.speed = 0.192883846553;
    msg.speed_units = 207U;
    msg.duration = 43196U;
    msg.radius = 0.65087689178;
    msg.flags = 223U;
    msg.custom.assign("QVRYOPTGEIUQAFWCMVZTETGLPDXLBDETVOMZJYIJHKYSIDRLBSZWFXFBKYPMGCECAQHAZMBUHIRQUQECRHYSBLPOSQOKANMQZYYDYJRTGUQIWAOIVTPKEWTAFSOLJHFSLROGDUVKFCNZMIVXPDACJGYJZXVXUWCPXMAZRBVDXXWKUHVMROVHEWSGKPNBN");

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
    msg.setTimeStamp(0.177391363098);
    msg.setSource(2073U);
    msg.setSourceEntity(39U);
    msg.setDestination(46530U);
    msg.setDestinationEntity(130U);
    msg.timeout = 9316U;
    msg.lat = 0.34648395065;
    msg.lon = 0.415747798496;
    msg.z = 0.00351895302885;
    msg.z_units = 24U;
    msg.speed = 0.193796310367;
    msg.speed_units = 58U;
    msg.duration = 57813U;
    msg.radius = 0.936353786761;
    msg.flags = 20U;
    msg.custom.assign("KSNXNJIHUMULLPEQQKVMMETDZUZEQSKDHWHWEOFMDYSWDLRNFVRWYBEXGAGQCONSTTLBULGJYZLTPBMGB");

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
    msg.setTimeStamp(0.290181955141);
    msg.setSource(54556U);
    msg.setSourceEntity(75U);
    msg.setDestination(4634U);
    msg.setDestinationEntity(209U);
    msg.timeout = 4882U;
    msg.lat = 0.721941900055;
    msg.lon = 0.860159421334;
    msg.z = 0.76966135671;
    msg.z_units = 207U;
    msg.speed = 0.311534186764;
    msg.speed_units = 220U;
    msg.duration = 29457U;
    msg.radius = 0.550271508929;
    msg.flags = 83U;
    msg.custom.assign("CTCLZOBRUMRTCQBSIXJVENPIQWKURZCOYNKXMQQWSPGLDTASMTXQCSZTFIXOGQABYQKSCULXAGHNXPUJUEPFSSYPJKQFTPGEXZMJFGKYGZUNCGATTJWRNWPVVEHLYPVIJADOONXYOHBDBRYFQANFBXSDOJMAINYERKWOBDLOKTVNUFCUWEJSLHRQZCFFXETBDWHDVDWIZLZHAHOGMAZSMFLVJNHEVZMDEI");

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
    msg.setTimeStamp(0.591951642738);
    msg.setSource(51517U);
    msg.setSourceEntity(158U);
    msg.setDestination(56176U);
    msg.setDestinationEntity(97U);
    msg.custom.assign("KWEPLIVQLDVVYCDOGBYNVSONEDTVTWFSBAEKPWCIYFWQOCLWJXRPKDNGWPBMAHNZFRUNVNAHUMFIIPTMIJEZHURPFOKFBKQJUBMGDAOQAYIBAMWDQNHZWEELIPMCBAZKXXVGXJFUTUOJRSRMYYHCHXDNGAHYZTPBQZWYOCXHGSFCJVIZGNTKSAJZSEOUIGTPJLMQYLCJRDVRWZBNDQUSQXXLLLIVUCEROSHLUSGTFTK");

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
    msg.setTimeStamp(0.149342141355);
    msg.setSource(60624U);
    msg.setSourceEntity(76U);
    msg.setDestination(17931U);
    msg.setDestinationEntity(42U);
    msg.custom.assign("GLQRRQNDIUHCHXRKVOWEQMPTKHPOHBWCTNTMSNYUXJUDODGIIXN");

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
    msg.setTimeStamp(0.531118875486);
    msg.setSource(24906U);
    msg.setSourceEntity(227U);
    msg.setDestination(50962U);
    msg.setDestinationEntity(133U);
    msg.custom.assign("LNIIGKRUGXPYZHFQRMSHRBOROULUDYRIBBOPQECVMWJSYRDTHATFPQCXKDWVWYRAIPLSGTOAPIIEZOGZBBFJ");

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
    msg.setTimeStamp(0.964116726341);
    msg.setSource(23960U);
    msg.setSourceEntity(34U);
    msg.setDestination(52223U);
    msg.setDestinationEntity(64U);
    msg.timeout = 35688U;
    msg.lat = 0.27737229936;
    msg.lon = 0.374183135812;
    msg.z = 0.846732379169;
    msg.z_units = 204U;
    msg.duration = 50675U;
    msg.speed = 0.560181288249;
    msg.speed_units = 11U;
    msg.type = 87U;
    msg.radius = 0.764492584515;
    msg.length = 0.843795823533;
    msg.bearing = 0.893729201325;
    msg.direction = 15U;
    msg.custom.assign("BMEDFINQVBRHCIKWMZAEGYMJOECLOTWNUCASSVILEAVRTOKPDIZWQYMUQHIUZZPLXZGCMAILTO");

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
    msg.setTimeStamp(0.126708416367);
    msg.setSource(56611U);
    msg.setSourceEntity(75U);
    msg.setDestination(43961U);
    msg.setDestinationEntity(92U);
    msg.timeout = 46629U;
    msg.lat = 0.708408396161;
    msg.lon = 0.435252933917;
    msg.z = 0.173179868514;
    msg.z_units = 99U;
    msg.duration = 5285U;
    msg.speed = 0.147865708473;
    msg.speed_units = 156U;
    msg.type = 107U;
    msg.radius = 0.699442520702;
    msg.length = 0.414435273053;
    msg.bearing = 0.592405691854;
    msg.direction = 248U;
    msg.custom.assign("MUBZPJJUSHRPWOGVYYFPJCVBXJPKTOAMPELV");

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
    msg.setTimeStamp(0.14990784801);
    msg.setSource(38848U);
    msg.setSourceEntity(203U);
    msg.setDestination(18211U);
    msg.setDestinationEntity(14U);
    msg.timeout = 12028U;
    msg.lat = 0.259260662656;
    msg.lon = 0.0308594119283;
    msg.z = 0.118911100159;
    msg.z_units = 166U;
    msg.duration = 62925U;
    msg.speed = 0.737217349207;
    msg.speed_units = 250U;
    msg.type = 77U;
    msg.radius = 0.864524246887;
    msg.length = 0.212607628935;
    msg.bearing = 0.161301627333;
    msg.direction = 173U;
    msg.custom.assign("LOXYUWEEYVIJHTHSJBUHN");

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
    msg.setTimeStamp(0.771514619524);
    msg.setSource(62719U);
    msg.setSourceEntity(61U);
    msg.setDestination(41885U);
    msg.setDestinationEntity(39U);
    msg.duration = 44903U;
    msg.custom.assign("GHVUOSSONEZQJBNAGKATWAENHUDMMWOHHWVIHLAUBWRWOJIZRCNLIGBYXQYKZGCACKEBTJBXLBIKCEIJUMGPNXJYSZJJIGPFYDZUXBQZDRUDTVVQCVZLTPZKIPTORNRVAPKEYYBHAROBDJGQCXPIHOKSBNPLLJLQOEEOFTCWRFCFLYFAGKFSVLNMDIEMAFTMQWFKCTSHXTMGYPNXUKJSSEDHWYPMYATIUFVQWZDRO");

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
    msg.setTimeStamp(0.0328506740869);
    msg.setSource(55351U);
    msg.setSourceEntity(165U);
    msg.setDestination(701U);
    msg.setDestinationEntity(108U);
    msg.duration = 9044U;
    msg.custom.assign("YMNPXVUOQYBZVOBLSEDFFJEWTHVQZENSVUJZOTFXDTKHBAISXBCJIAYDWLUJUADFVLKLLAEMVCHTPHWDWECGJYEJYGZNWSQZSNBTMGUFSQQINSMBCRCXKXMRPUHCHUPSRLDHLHWFZGNMHJIBRRRKVCGTAVEKAG");

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
    msg.setTimeStamp(0.38185603853);
    msg.setSource(10454U);
    msg.setSourceEntity(58U);
    msg.setDestination(16221U);
    msg.setDestinationEntity(239U);
    msg.duration = 18899U;
    msg.custom.assign("NPVXRFWQIWAJSNSTFYQ");

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
    msg.setTimeStamp(0.064731272906);
    msg.setSource(6955U);
    msg.setSourceEntity(17U);
    msg.setDestination(62647U);
    msg.setDestinationEntity(16U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.297960096139;
    msg.control.set(tmp_msg_0);
    msg.duration = 38398U;
    msg.custom.assign("PHXMKHYUONBHMDQKUNOPKEDBPLZWZPSLGBCCQEZTFQWSXOPUYHIJHVVPTNUDAFNVTVVKOEVWSGPKPIZOWERZYIUJX");

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
    msg.setTimeStamp(0.465995746011);
    msg.setSource(6726U);
    msg.setSourceEntity(123U);
    msg.setDestination(9130U);
    msg.setDestinationEntity(145U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1447205613U;
    tmp_msg_0.start_lat = 0.313363018757;
    tmp_msg_0.start_lon = 0.0934251911494;
    tmp_msg_0.start_z = 0.783067076662;
    tmp_msg_0.start_z_units = 202U;
    tmp_msg_0.end_lat = 0.591695966555;
    tmp_msg_0.end_lon = 0.976342204334;
    tmp_msg_0.end_z = 0.394131661076;
    tmp_msg_0.end_z_units = 34U;
    tmp_msg_0.speed = 0.633409350036;
    tmp_msg_0.speed_units = 171U;
    tmp_msg_0.lradius = 0.256671208155;
    tmp_msg_0.flags = 9U;
    msg.control.set(tmp_msg_0);
    msg.duration = 35005U;
    msg.custom.assign("ZDAJLBIQTGWXRBWGXQUGVSZDXNYBTOUJELQAMXVNZAJPWVOOPITOGBQIWTNMSNHCUUTJZKQKJOWBAUSNGRDPRHUDSANFLIOBDDHFHJPAYGWVOMFXIGLJLYXECFGRYLEKWUEHMVCEFWEHPAHQESXRMLLJOACKNNTZISYSPFTXQBBBSLDIMUORNCJXHRYTPCFFPYLWTKUXTPSICIKIHUCQNRVDDFZZ");

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
    msg.setTimeStamp(0.941416950313);
    msg.setSource(12194U);
    msg.setSourceEntity(227U);
    msg.setDestination(64888U);
    msg.setDestinationEntity(20U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.842952468327;
    msg.control.set(tmp_msg_0);
    msg.duration = 60831U;
    msg.custom.assign("PSLBIMJLUPRWNHTXQCEPNOBUEBRUWYSSJRHPJFHDZWCXGZWSNWDUIFYVSROAEYYMLXMATCPXHAKOZPDAIFEXOTZEMFGGVZYNYYKCFZJHJAJQ");

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
    msg.setTimeStamp(0.89124046629);
    msg.setSource(44670U);
    msg.setSourceEntity(107U);
    msg.setDestination(9364U);
    msg.setDestinationEntity(207U);
    msg.timeout = 45793U;
    msg.lat = 0.263382109256;
    msg.lon = 0.726499937313;
    msg.z = 0.335149172858;
    msg.z_units = 214U;
    msg.speed = 0.721277369854;
    msg.speed_units = 106U;
    msg.bearing = 0.984133589037;
    msg.cross_angle = 0.116080556243;
    msg.width = 0.340562115239;
    msg.length = 0.665746293285;
    msg.hstep = 0.67439984426;
    msg.coff = 48U;
    msg.alternation = 162U;
    msg.flags = 123U;
    msg.custom.assign("BWLHTYUNEYTZTHJUMIQPFDCRDJMYWWVFZKJVSHXGQLBPKQCCDNQUOP");

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
    msg.setTimeStamp(0.186031123279);
    msg.setSource(50266U);
    msg.setSourceEntity(39U);
    msg.setDestination(61043U);
    msg.setDestinationEntity(91U);
    msg.timeout = 39053U;
    msg.lat = 0.624579306934;
    msg.lon = 0.210097280153;
    msg.z = 0.67734533945;
    msg.z_units = 231U;
    msg.speed = 0.20102860533;
    msg.speed_units = 140U;
    msg.bearing = 0.804825869352;
    msg.cross_angle = 0.555067823908;
    msg.width = 0.47605738803;
    msg.length = 0.0674500946386;
    msg.hstep = 0.271127422251;
    msg.coff = 252U;
    msg.alternation = 226U;
    msg.flags = 62U;
    msg.custom.assign("EAJMUADLMXGJEMBZVIHEIDVLURPJFIVNMXSHIXAUDNWKBNYHZZLSPFDZKRQUXCYIULTQEISMDXZCEBTQUHASTNRORYAFSTRBQWOSNYOTFHMCVCHODEKAUWGKFZMQCTWAIVPKKURWBSZPFTD");

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
    msg.setTimeStamp(0.989202524274);
    msg.setSource(25848U);
    msg.setSourceEntity(85U);
    msg.setDestination(63083U);
    msg.setDestinationEntity(246U);
    msg.timeout = 47014U;
    msg.lat = 0.974535011763;
    msg.lon = 0.419855898492;
    msg.z = 0.192439503375;
    msg.z_units = 162U;
    msg.speed = 0.717650462768;
    msg.speed_units = 49U;
    msg.bearing = 0.0840359001655;
    msg.cross_angle = 0.583332390488;
    msg.width = 0.409343968986;
    msg.length = 0.748151657007;
    msg.hstep = 0.872254692655;
    msg.coff = 204U;
    msg.alternation = 25U;
    msg.flags = 28U;
    msg.custom.assign("WNERSNLOIBQINSCREVNWAHWNSZGYOBFTAXNYCPRCHGIRYDFF");

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
    msg.setTimeStamp(0.593000124801);
    msg.setSource(53739U);
    msg.setSourceEntity(110U);
    msg.setDestination(9301U);
    msg.setDestinationEntity(240U);
    msg.timeout = 13929U;
    msg.lat = 0.723170916582;
    msg.lon = 0.464751612453;
    msg.z = 0.315735850993;
    msg.z_units = 40U;
    msg.speed = 0.0832623941752;
    msg.speed_units = 34U;
    msg.custom.assign("XQLNHDQQVCFMKATZMERTBMTGMMUDCBSDBQGNSRQRRHWLFPTOVPORZZZLLEBGNZDRQUZDRJQHAZJVKXANVUJJVCPCGTKFSW");

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
    msg.setTimeStamp(0.777615976828);
    msg.setSource(34033U);
    msg.setSourceEntity(185U);
    msg.setDestination(49511U);
    msg.setDestinationEntity(26U);
    msg.timeout = 54480U;
    msg.lat = 0.979417937449;
    msg.lon = 0.969945401178;
    msg.z = 0.605393890907;
    msg.z_units = 233U;
    msg.speed = 0.397539349899;
    msg.speed_units = 209U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.255698422932;
    tmp_msg_0.y = 0.927743631175;
    tmp_msg_0.z = 0.524159290098;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IBRSMFEBODBHAHMTEFZPBTJFNRLOSDIISAXUHUKLWLUJFNCGWQERPDVNEMBTCYFPPQBNBLRROVJACJBHEVQYBHQXUZVZRKYGQYCCFWIQDQRTMOXCKH");

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
    msg.setTimeStamp(0.865491336898);
    msg.setSource(13283U);
    msg.setSourceEntity(137U);
    msg.setDestination(32396U);
    msg.setDestinationEntity(6U);
    msg.timeout = 14661U;
    msg.lat = 0.842459824556;
    msg.lon = 0.29678497786;
    msg.z = 0.0598781996919;
    msg.z_units = 115U;
    msg.speed = 0.783980754032;
    msg.speed_units = 156U;
    msg.custom.assign("YSBELXSHZJVKIQPKWERVBGQZTXTALMLIUIOANMKMJBHWQHBHGWHEPRVKYOQTILQWKYFDHGHXFFBYISTNBCSMFJJVRVPDSHOBFTEIUQIEFAAWDKGGYJGVNXUGACAOLNWTVCREQFXXCKIPLROJZUTGKDGUPKX");

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
    msg.setTimeStamp(0.366695885224);
    msg.setSource(41840U);
    msg.setSourceEntity(82U);
    msg.setDestination(28131U);
    msg.setDestinationEntity(104U);
    msg.x = 0.024049336332;
    msg.y = 0.410149444107;
    msg.z = 0.77830126632;

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
    msg.setTimeStamp(0.614760674433);
    msg.setSource(32937U);
    msg.setSourceEntity(37U);
    msg.setDestination(57439U);
    msg.setDestinationEntity(253U);
    msg.x = 0.142520670482;
    msg.y = 0.188940555754;
    msg.z = 0.112285966367;

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
    msg.setTimeStamp(0.555303886887);
    msg.setSource(10988U);
    msg.setSourceEntity(81U);
    msg.setDestination(12045U);
    msg.setDestinationEntity(116U);
    msg.x = 0.585128966385;
    msg.y = 0.754750587542;
    msg.z = 0.460493899241;

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
    msg.setTimeStamp(0.141105928969);
    msg.setSource(6298U);
    msg.setSourceEntity(28U);
    msg.setDestination(29340U);
    msg.setDestinationEntity(27U);
    msg.timeout = 11063U;
    msg.lat = 0.036025681771;
    msg.lon = 0.411178036773;
    msg.z = 0.0513620515249;
    msg.z_units = 181U;
    msg.amplitude = 0.00662692177835;
    msg.pitch = 0.495646325229;
    msg.speed = 0.958230194962;
    msg.speed_units = 177U;
    msg.custom.assign("NTLVJQTEJHKOITTVDLSOIEMSDATVNXWPVFRGKLMCIWULJQRXCYPFWBXCOHVBAZCBADQJZCOEYLOEEZFZTKKDGDPIRNYHNEMUKZTJZAMASQYDCQQUCQISJKHRCNWCRLJPUKTVGLBSUWEWPHGOUMXFZGYLWDVXMWQOFVWHKEXOPFLIIXZZIYUHKFEDBBSATRYREPMJTSVNBXROHZAD");

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
    msg.setTimeStamp(0.187451203067);
    msg.setSource(17373U);
    msg.setSourceEntity(144U);
    msg.setDestination(14136U);
    msg.setDestinationEntity(171U);
    msg.timeout = 29361U;
    msg.lat = 0.540125131536;
    msg.lon = 0.750068484401;
    msg.z = 0.0622767677177;
    msg.z_units = 136U;
    msg.amplitude = 0.02311879237;
    msg.pitch = 0.772587404172;
    msg.speed = 0.224148364802;
    msg.speed_units = 160U;
    msg.custom.assign("XCUIRTKSQBEXWOHUKZZSWJBNMVEYIFJPXQAVWXWITULYQADKCTHJFPVDSYG");

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
    msg.setTimeStamp(0.896681025021);
    msg.setSource(24173U);
    msg.setSourceEntity(188U);
    msg.setDestination(9260U);
    msg.setDestinationEntity(173U);
    msg.timeout = 31972U;
    msg.lat = 0.769759891024;
    msg.lon = 0.555286420248;
    msg.z = 0.310322671664;
    msg.z_units = 138U;
    msg.amplitude = 0.113070402964;
    msg.pitch = 0.96299369743;
    msg.speed = 0.555034652308;
    msg.speed_units = 173U;
    msg.custom.assign("SBKYXDCIVIWPVXYNDRGAQSPSBHTJDRFAIDZOUJGGJZSHYECAAYSEQFNFZEKASQVIGQMNEHLNFPPZEPKBBEZMQRVWLOCSJMWYGENGLJFJJDKNVFKOUJTXMWKIHTTAHVKQQDW");

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
    msg.setTimeStamp(0.912508689647);
    msg.setSource(51827U);
    msg.setSourceEntity(233U);
    msg.setDestination(62844U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.177791904143);
    msg.setSource(22987U);
    msg.setSourceEntity(10U);
    msg.setDestination(45160U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.359256303691);
    msg.setSource(1009U);
    msg.setSourceEntity(100U);
    msg.setDestination(12370U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.82470497861);
    msg.setSource(10651U);
    msg.setSourceEntity(244U);
    msg.setDestination(50278U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.395327954711;
    msg.lon = 0.786672937601;
    msg.z = 0.212141381047;
    msg.z_units = 121U;
    msg.radius = 0.748320302592;
    msg.duration = 8411U;
    msg.speed = 0.457973906956;
    msg.speed_units = 113U;
    msg.custom.assign("YULFEPMIVZYOPIVZRACCRCKSQXFOEZFLZBBBQZINYTGGSPZJSPXRQVNKZBQNAWPGRJTDJALFWDEHQRDFQVHUTNHAMXJEPTYCCUBOIYNJHWRMSGBHKTJWRHYNSNLODJOKUGPDZJEGGIOBVQORXDTIZUUUKVBFAKUMPENOATVELLSCWSMMYYNEWFLPDAZXKHOAAESLDMTGWDCFIDCYEWYQFHWCBWTHIAMMKMIJSFPXKVX");

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
    msg.setTimeStamp(0.0977650815618);
    msg.setSource(58717U);
    msg.setSourceEntity(129U);
    msg.setDestination(18947U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.650055796519;
    msg.lon = 0.993514069258;
    msg.z = 0.811027421533;
    msg.z_units = 19U;
    msg.radius = 0.776996813169;
    msg.duration = 1520U;
    msg.speed = 0.302606429445;
    msg.speed_units = 87U;
    msg.custom.assign("GKDVPYCTLTEFIMUHFSSYVYVXGRKQZMHSCFUQEOQHNQJHSLINFFCHKRQBTPQJCCDPCPTGWUBKZDILF");

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
    msg.setTimeStamp(0.579031657197);
    msg.setSource(33312U);
    msg.setSourceEntity(81U);
    msg.setDestination(50423U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.0178821612551;
    msg.lon = 0.252550397044;
    msg.z = 0.0850098070943;
    msg.z_units = 97U;
    msg.radius = 0.327476698669;
    msg.duration = 34233U;
    msg.speed = 0.349637492761;
    msg.speed_units = 167U;
    msg.custom.assign("BXJVWMPWNTITUPRCFZYNTQFUBMQLYZWIBYHTCDTOCZDMNHWFYRASUOKQNAZYOLUBCESHNMSFNXIPXZCDKNVLJHXOPGGGTXHHQKXYHOSJIFPLCRXCWZRVPKWEYHVUNJAQBERCLKEBOAGOVJGFGCEVJLEHRSEQKOBPQBOLDXMSFMTUYRIAUSVRAPRALGILOMWSYFEZTQTDUII");

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
    msg.setTimeStamp(0.747679527925);
    msg.setSource(35457U);
    msg.setSourceEntity(79U);
    msg.setDestination(10411U);
    msg.setDestinationEntity(129U);
    msg.timeout = 58034U;
    msg.flags = 191U;
    msg.lat = 0.680286390718;
    msg.lon = 0.676761165627;
    msg.start_z = 0.0282535894476;
    msg.start_z_units = 178U;
    msg.end_z = 0.592130610116;
    msg.end_z_units = 199U;
    msg.radius = 0.984504022811;
    msg.speed = 0.275621062723;
    msg.speed_units = 32U;
    msg.custom.assign("WIWTMDPNDZDEUXIGERPWGWFVQZVPBKXYHPOBJJNJBBHINITDCGZAZVMBYMYEDMXUQSFFLFHORMETNLQBOSZUJRRVMSMRZUEROSTNSRFYSKKGTPPCEVHLEUNPAFISWJAOWCJGLFBGYVMNTHBALPIQTXRDZHLPGXNQCMCRTDIZYEUYJYWHWKRVKUCCLJFXTZNBOHFSKILVUYAYDEKPEQQOAJUJKTVLALSXKGOMDOD");

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
    msg.setTimeStamp(0.621730975512);
    msg.setSource(34117U);
    msg.setSourceEntity(21U);
    msg.setDestination(53013U);
    msg.setDestinationEntity(83U);
    msg.timeout = 44570U;
    msg.flags = 240U;
    msg.lat = 0.853328301421;
    msg.lon = 0.0295483906078;
    msg.start_z = 0.235483717499;
    msg.start_z_units = 203U;
    msg.end_z = 0.713797154214;
    msg.end_z_units = 160U;
    msg.radius = 0.706857512328;
    msg.speed = 0.296156480298;
    msg.speed_units = 40U;
    msg.custom.assign("XKWBDYCZWVFXOGVJDSQKPRQHRKJPGTGQXFBCTFUGNNYBBCZFEYMDDNGZXJETXNRLYJXPMEXZQALAYOPVHVMTWNIIHYIBZPJRSSVC");

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
    msg.setTimeStamp(0.815790486666);
    msg.setSource(41358U);
    msg.setSourceEntity(85U);
    msg.setDestination(54517U);
    msg.setDestinationEntity(232U);
    msg.timeout = 41738U;
    msg.flags = 78U;
    msg.lat = 0.378859165465;
    msg.lon = 0.424586606039;
    msg.start_z = 0.830259004522;
    msg.start_z_units = 133U;
    msg.end_z = 0.933020909937;
    msg.end_z_units = 196U;
    msg.radius = 0.241928118244;
    msg.speed = 0.62423305664;
    msg.speed_units = 61U;
    msg.custom.assign("EKPOPQNXZCVXCYENJMJQBCMXJLAZPTNIFBWVGFTNRKAYGOPWZAGHBYLVTCWYXKALMOZLDCCFBKOSXODXDIOLNNSUPUVIUDJEFDZVZRSLRJEXLTVOICAKFIBNFHAVBLQSGQPYUGRITALSASFLMTHBYERYMHFWBJUHRQZMRSTOUTMAEGWHZVEDGHJOBGNYDERXWQXJWIBHPSSKYGDXTUEUJFRCDFR");

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
    msg.setTimeStamp(0.558899785507);
    msg.setSource(33637U);
    msg.setSourceEntity(108U);
    msg.setDestination(8945U);
    msg.setDestinationEntity(208U);
    msg.timeout = 39564U;
    msg.lat = 0.206120573725;
    msg.lon = 0.979773877069;
    msg.z = 0.0824901092659;
    msg.z_units = 242U;
    msg.speed = 0.486486522392;
    msg.speed_units = 62U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.963286974682;
    tmp_msg_0.y = 0.702023518822;
    tmp_msg_0.z = 0.915829414082;
    tmp_msg_0.t = 0.106690732653;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DBYUCLURSWTXIZCNXXOQRJKREYPGOMQKHLTBEEMHFJINYNUEQVACAYQPMAJDPVMGBRFBDVJTZWMGVHTTCGNEZKDCSBLDSPEFDFUUTYXBIXJMGSLJDVWOAZOEKCAYPXQIAHOYGZRUUOQAOWTVKSUEBRWINGQZSRLLWKDW");

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
    msg.setTimeStamp(0.21498279908);
    msg.setSource(38690U);
    msg.setSourceEntity(203U);
    msg.setDestination(59490U);
    msg.setDestinationEntity(92U);
    msg.timeout = 32679U;
    msg.lat = 0.677721192914;
    msg.lon = 0.181871409484;
    msg.z = 0.536359289346;
    msg.z_units = 210U;
    msg.speed = 0.0270668653332;
    msg.speed_units = 238U;
    msg.custom.assign("MHEZUMSWPVWIAGHAKGNPKHEVDCVIPYHXQCUJOXXSKTDSTOOMFCVISWYNPUWEVCQOPSIRKYYHTSBBKJEUFTAGMKPSQQQQJXHXYELSGUXIZOOELGZLLRWZGCTOUFNTRSPALCARJBRHFAUSFHFBGMYZIGCL");

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
    msg.setTimeStamp(0.910464783174);
    msg.setSource(64722U);
    msg.setSourceEntity(36U);
    msg.setDestination(32425U);
    msg.setDestinationEntity(156U);
    msg.timeout = 55689U;
    msg.lat = 0.459069683531;
    msg.lon = 0.756243735403;
    msg.z = 0.873178835639;
    msg.z_units = 65U;
    msg.speed = 0.342068318125;
    msg.speed_units = 245U;
    msg.custom.assign("MNMSQKMTJPPZVAWXHSVVYCLYWXNJAUFWDHCMKQGNETIJVXUESJIVYSFZABAPPLRJCXGBTQMCKPLBZHIIZSWVCYHCXLJVAWGWTUUAOQMFAUIEONDPSTXABIJHZHYLROQBFOXGBNCMGUIQJRNVMDJRYDSGWYO");

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
    msg.setTimeStamp(0.348742722883);
    msg.setSource(29703U);
    msg.setSourceEntity(175U);
    msg.setDestination(27853U);
    msg.setDestinationEntity(41U);
    msg.x = 0.051240800728;
    msg.y = 0.11337624932;
    msg.z = 0.702387096661;
    msg.t = 0.237253236117;

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
    msg.setTimeStamp(0.852811153838);
    msg.setSource(39501U);
    msg.setSourceEntity(197U);
    msg.setDestination(43763U);
    msg.setDestinationEntity(156U);
    msg.x = 0.197421072477;
    msg.y = 0.816646078629;
    msg.z = 0.530816485096;
    msg.t = 0.924168856926;

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
    msg.setTimeStamp(0.260274138791);
    msg.setSource(11168U);
    msg.setSourceEntity(111U);
    msg.setDestination(65037U);
    msg.setDestinationEntity(55U);
    msg.x = 0.916999716733;
    msg.y = 0.169121683968;
    msg.z = 0.819306841986;
    msg.t = 0.925627178014;

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
    msg.setTimeStamp(0.450572968757);
    msg.setSource(8354U);
    msg.setSourceEntity(218U);
    msg.setDestination(10584U);
    msg.setDestinationEntity(69U);
    msg.timeout = 61886U;
    msg.name.assign("DAYBLFXGXQJYCLVJHJAQRKTZHUCMGISBCCIIJTPANODBMMGMFRTKBJLPQRXMVINOPCQDYBKXYPUELRZEABQSSIWVDPXFWFZDKIVAHBMWXESOBGLYIUFNZROQSMDVREXECZNKMIUORAUPDHNLAQHLTKPGJNPGVOHQEWLGKJUKSHDCAUSZXQSMJYTXBFCYUTUIT");
    msg.custom.assign("LXKSDRVJCONMTJGVKIFUXOOHWOUIFSYSIWCFXMUAEPEIXMGNMAZTLUBYYWRLVMDBDHKTQVJSDZWWAFWODEKGNBVZOVTADBCQMIVRRJZJZLPPQAUNHCLSRHTXEBYHDSHWJIMAYAKPVLKFARNURBGTRXRGYWBKCMSIENP");

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
    msg.setTimeStamp(0.296058302258);
    msg.setSource(31574U);
    msg.setSourceEntity(54U);
    msg.setDestination(4642U);
    msg.setDestinationEntity(119U);
    msg.timeout = 56874U;
    msg.name.assign("VLRTOQDZELQ");
    msg.custom.assign("YGBWFSXHVVGUSWPCUNRMXDSBQELTKXJAPEOUPHDFYXSLJRQAZFGOSCKRFRITEKUBWQTCCSIBKLZQWPJDZNMHNODTUBHYZQMFPPRGFYJBSQCUDVLNEMQONXHENMAVGOTMACYXHIEGLVWLKFVHHUIZKADYRGOIQRWJPNZCIUTLXTJMEVLWINXVBDSLAJCTMMKDOGLNAZXVRJDPFDSTUYFWQRBBAIVEYCGZABWTIPKOXUPYQ");

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
    msg.setTimeStamp(0.0682915511964);
    msg.setSource(59927U);
    msg.setSourceEntity(90U);
    msg.setDestination(41521U);
    msg.setDestinationEntity(211U);
    msg.timeout = 533U;
    msg.name.assign("IOLNXUQOYZPIMZHTEOAAEPRSRFCCVIJSYQJJLHXLFAINEYXGQYZIKCMWONZYKMCLZDPRHPSMDBNVGXMRCDSGQBOZWOUWDTNJJRHCBFGDTIUMWXXBSGSEOFBISDAEQVFVEGAPALULILTEYVLFWUARDHQDYKGNPXMZVCDCFWCPKWAGQWB");
    msg.custom.assign("OUMSYKENHKJKYOQUDIPKBJNVEMXSQHWJCACGPMWTVGGILRXTLOLTVMCYYBXDZOQPAFAUWNPUQSBAFPXBXFVKDQRMXGDKDOLURFBJROFHETVOMPXJHBTAOP");

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
    msg.setTimeStamp(0.936198902369);
    msg.setSource(15284U);
    msg.setSourceEntity(93U);
    msg.setDestination(19984U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.547392616414;
    msg.lon = 0.341979519577;
    msg.z = 0.96978415235;
    msg.z_units = 92U;
    msg.speed = 0.284155370243;
    msg.speed_units = 242U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.314973290116;
    tmp_msg_0.y = 0.733187632103;
    tmp_msg_0.z = 0.934133306678;
    tmp_msg_0.t = 0.720822771108;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 20860U;
    tmp_msg_1.off_x = 0.765096853378;
    tmp_msg_1.off_y = 0.757436702035;
    tmp_msg_1.off_z = 0.547195129473;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.362151772105;
    msg.custom.assign("TMJLMCKHORBNYVUUQBJTPBOUFMRTDVQXQESDVXLPIATQVEZJAYJNGSXJCGEOFJNMUNABIDTPVAGWMLKFCCUMAFBTELNZPJKSYHBTOESVAYSHARMEYMTZYZQLOXYHDNZWGOGJPEQTLGDAFFHSFLDRDRBFSWDYYLVCGTKINXCOMDCWPBRLEINAJIVWK");

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
    msg.setTimeStamp(0.929390725977);
    msg.setSource(29952U);
    msg.setSourceEntity(135U);
    msg.setDestination(6969U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.0318762026216;
    msg.lon = 0.298159166884;
    msg.z = 0.323471570688;
    msg.z_units = 242U;
    msg.speed = 0.522432754067;
    msg.speed_units = 90U;
    msg.start_time = 0.068424324228;
    msg.custom.assign("LDJBGQNZITIQNDRMCCCOZHURLLVJHUZSOQNPGRUAWFCHGMHMCKDLROPU");

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
    msg.setTimeStamp(0.669220470232);
    msg.setSource(15098U);
    msg.setSourceEntity(190U);
    msg.setDestination(39872U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.444496150303;
    msg.lon = 0.567366613799;
    msg.z = 0.877382301515;
    msg.z_units = 73U;
    msg.speed = 0.484048224084;
    msg.speed_units = 221U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.593786626374;
    tmp_msg_0.y = 0.533089726667;
    tmp_msg_0.z = 0.370382387204;
    tmp_msg_0.t = 0.592637871971;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.919068346075;
    msg.custom.assign("HOZXIZVIYGBRLZQOJHRSSFXKPQSKTGNXZEJZCCUADBXCTYQBSQZUMVFLVDPEESEOWXJCVRYJPJYPTKLKKDEGQFEITMRBQNBKBEAVLYARCYYQU");

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
    msg.setTimeStamp(0.680121408703);
    msg.setSource(50795U);
    msg.setSourceEntity(119U);
    msg.setDestination(11736U);
    msg.setDestinationEntity(51U);
    msg.vid = 3226U;
    msg.off_x = 0.888774603742;
    msg.off_y = 0.783479905191;
    msg.off_z = 0.467847892807;

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
    msg.setTimeStamp(0.0827953573199);
    msg.setSource(48255U);
    msg.setSourceEntity(38U);
    msg.setDestination(45861U);
    msg.setDestinationEntity(80U);
    msg.vid = 34821U;
    msg.off_x = 0.947961120393;
    msg.off_y = 0.0395804435964;
    msg.off_z = 0.732311617138;

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
    msg.setTimeStamp(0.0974475288263);
    msg.setSource(40310U);
    msg.setSourceEntity(206U);
    msg.setDestination(30575U);
    msg.setDestinationEntity(71U);
    msg.vid = 3618U;
    msg.off_x = 0.978322458772;
    msg.off_y = 0.116420925052;
    msg.off_z = 0.934086339486;

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
    msg.setTimeStamp(0.282438584983);
    msg.setSource(31285U);
    msg.setSourceEntity(172U);
    msg.setDestination(59387U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.144412466367);
    msg.setSource(43813U);
    msg.setSourceEntity(202U);
    msg.setDestination(53257U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.523389858987);
    msg.setSource(35171U);
    msg.setSourceEntity(151U);
    msg.setDestination(401U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.631376774745);
    msg.setSource(43377U);
    msg.setSourceEntity(144U);
    msg.setDestination(62142U);
    msg.setDestinationEntity(122U);
    msg.mid = 22803U;

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
    msg.setTimeStamp(0.689784493114);
    msg.setSource(40135U);
    msg.setSourceEntity(230U);
    msg.setDestination(5377U);
    msg.setDestinationEntity(11U);
    msg.mid = 57741U;

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
    msg.setTimeStamp(0.0793952546393);
    msg.setSource(21403U);
    msg.setSourceEntity(27U);
    msg.setDestination(9886U);
    msg.setDestinationEntity(235U);
    msg.mid = 7029U;

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
    msg.setTimeStamp(0.781951757601);
    msg.setSource(11408U);
    msg.setSourceEntity(246U);
    msg.setDestination(36391U);
    msg.setDestinationEntity(201U);
    msg.state = 95U;
    msg.eta = 39154U;
    msg.info.assign("EPSSTAXLGBLUFOCRNQWMHXYAZTETJNJOBXKDPGPBMVMUBTFWUMLRHPILHPGKLDCBBOKLZHDYOYHSWQOQRMZCDADVWPJMTDYJSCWPNIWVCEZGCFZFLUIXCEGTARQQJNNDFLTMJTELFOO");

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
    msg.setTimeStamp(0.638808161028);
    msg.setSource(5898U);
    msg.setSourceEntity(28U);
    msg.setDestination(44953U);
    msg.setDestinationEntity(176U);
    msg.state = 97U;
    msg.eta = 46428U;
    msg.info.assign("JYPILCRCIIRNEAKWXFKMDZXWDZMDXTNXLQHZEJMWBWNSPZQFVJHEHOUGVYYYJYVAXBIITKGRSRPBMVUKWGWWRJHYIIBGCLONKQIEKGWUVHDZPHORWJNCBTCQTKUTSXOQZAKVFAPSTONKZIBTOMYPSOGVDABMMUNEOJPHJLPJHLHFFBETDZRQFPGANVSGRVCC");

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
    msg.setTimeStamp(0.997306676351);
    msg.setSource(32013U);
    msg.setSourceEntity(102U);
    msg.setDestination(9503U);
    msg.setDestinationEntity(89U);
    msg.state = 243U;
    msg.eta = 40627U;
    msg.info.assign("OFGIZNPWCNXIAZLOJUJBLRJMNYMJJBKVYPSEPG");

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
    msg.setTimeStamp(0.0688361013866);
    msg.setSource(37434U);
    msg.setSourceEntity(250U);
    msg.setDestination(47150U);
    msg.setDestinationEntity(163U);
    msg.system = 57670U;
    msg.duration = 34379U;
    msg.speed = 0.779079198709;
    msg.speed_units = 180U;
    msg.x = 0.432819405756;
    msg.y = 0.116023239483;
    msg.z = 0.144593466066;
    msg.z_units = 97U;

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
    msg.setTimeStamp(0.590290454303);
    msg.setSource(14163U);
    msg.setSourceEntity(47U);
    msg.setDestination(24557U);
    msg.setDestinationEntity(20U);
    msg.system = 62995U;
    msg.duration = 33815U;
    msg.speed = 0.271371477954;
    msg.speed_units = 199U;
    msg.x = 0.81179086671;
    msg.y = 0.735500244587;
    msg.z = 0.0746443879064;
    msg.z_units = 131U;

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
    msg.setTimeStamp(0.186630780316);
    msg.setSource(8901U);
    msg.setSourceEntity(251U);
    msg.setDestination(38995U);
    msg.setDestinationEntity(182U);
    msg.system = 7544U;
    msg.duration = 21553U;
    msg.speed = 0.194761250615;
    msg.speed_units = 227U;
    msg.x = 0.728891154111;
    msg.y = 0.988081264638;
    msg.z = 0.454836575962;
    msg.z_units = 126U;

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
    msg.setTimeStamp(0.890590197473);
    msg.setSource(59443U);
    msg.setSourceEntity(153U);
    msg.setDestination(51694U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.428150075163;
    msg.lon = 0.264295434641;
    msg.speed = 0.904593259617;
    msg.speed_units = 44U;
    msg.duration = 43434U;
    msg.sys_a = 40854U;
    msg.sys_b = 23001U;
    msg.move_threshold = 0.900237564079;

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
    msg.setTimeStamp(0.464392909872);
    msg.setSource(27439U);
    msg.setSourceEntity(183U);
    msg.setDestination(40356U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.782923588537;
    msg.lon = 0.23562322856;
    msg.speed = 0.776393267761;
    msg.speed_units = 197U;
    msg.duration = 47575U;
    msg.sys_a = 56206U;
    msg.sys_b = 755U;
    msg.move_threshold = 0.00164380115551;

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
    msg.setTimeStamp(0.424517122419);
    msg.setSource(6739U);
    msg.setSourceEntity(170U);
    msg.setDestination(36355U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.871602982839;
    msg.lon = 0.318486283293;
    msg.speed = 0.024556742697;
    msg.speed_units = 160U;
    msg.duration = 30077U;
    msg.sys_a = 59202U;
    msg.sys_b = 24363U;
    msg.move_threshold = 0.202987726771;

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
    msg.setTimeStamp(0.928630485635);
    msg.setSource(49734U);
    msg.setSourceEntity(75U);
    msg.setDestination(22926U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.19974242853;
    msg.lon = 0.477839694447;
    msg.z = 0.0762245088661;
    msg.z_units = 73U;
    msg.speed = 0.365168805355;
    msg.speed_units = 60U;
    msg.custom.assign("NMNWOTJPQAKIKXLDGCMSTYPVJHCHHFPDGVXHZG");

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
    msg.setTimeStamp(0.569985461085);
    msg.setSource(34207U);
    msg.setSourceEntity(246U);
    msg.setDestination(24469U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.887854403903;
    msg.lon = 0.556746783473;
    msg.z = 0.586671894811;
    msg.z_units = 91U;
    msg.speed = 0.113475332364;
    msg.speed_units = 127U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.516521371172;
    tmp_msg_0.lon = 0.683867347905;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("WLKDIXBNIFIUEHWEUSKRCJOZTJUFVCUEDNXJBZHWRUHKZEXMZNYGUAHSNUELSNFVQYARXRIOKVWTGENMNRLRTAVFOPPXPJSTSKLXBILUXSWGBTKFGYIYVRUIKGMVAAHLMVXHDWAOSOO");

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
    msg.setTimeStamp(0.600221923678);
    msg.setSource(9757U);
    msg.setSourceEntity(128U);
    msg.setDestination(19133U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.10961858408;
    msg.lon = 0.507290954621;
    msg.z = 0.299501104624;
    msg.z_units = 187U;
    msg.speed = 0.260439899892;
    msg.speed_units = 14U;
    msg.custom.assign("OCVDBPMIGIBMNVTLRAFULNRKRSBDXKWACYGUOFXZCTNFKPGWACGYVUHLCSIQLQAHPLFCSFOQPXEQZAAWIQEHRJHVQDUVRMPUVNTTRKIGMOJCYNEFSLMBKTSUTEZHKCWQBHJTGTXSQEVEDIBSRDPLDYEOPXKFGQJGJVJMBOXSMVNAEVTSDAWWBUXWJZZAHLNHBXHJWARXYUWQZYIFOJSIKGFTO");

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
    msg.setTimeStamp(0.762821190447);
    msg.setSource(61574U);
    msg.setSourceEntity(202U);
    msg.setDestination(16527U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.795037980184;
    msg.lon = 0.904256521593;

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
    msg.setTimeStamp(0.123485424359);
    msg.setSource(13299U);
    msg.setSourceEntity(120U);
    msg.setDestination(57814U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.937799277807;
    msg.lon = 0.98151246556;

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
    msg.setTimeStamp(0.200933772783);
    msg.setSource(49800U);
    msg.setSourceEntity(150U);
    msg.setDestination(43754U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.446488238465;
    msg.lon = 0.912444024093;

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
    msg.setTimeStamp(0.706278467229);
    msg.setSource(40935U);
    msg.setSourceEntity(201U);
    msg.setDestination(59842U);
    msg.setDestinationEntity(122U);
    msg.timeout = 573U;
    msg.lat = 0.649658422428;
    msg.lon = 0.171329405026;
    msg.z = 0.582619934924;
    msg.z_units = 137U;
    msg.pitch = 0.288373898455;
    msg.amplitude = 0.558846098908;
    msg.duration = 49150U;
    msg.speed = 0.859349422889;
    msg.speed_units = 77U;
    msg.radius = 0.678632385253;
    msg.direction = 24U;
    msg.custom.assign("RTQJJCYBKSUSSECYQBAUSXHJGDHVPLSCIMQRNNQIHZFJVQXRYAUBVDLSGDXUEYJWVPBOMUHUAHSILMXXGMAGJIDWFCRCDNADMKDLDRZRPNKIAHGANCFDCBHFNONZTZVJZTQGVOKXXNGZJBNONEWKTKTCFHEJVAIFLLWEBRKYULSLRAPQKXPPY");

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
    msg.setTimeStamp(0.162007890294);
    msg.setSource(48950U);
    msg.setSourceEntity(199U);
    msg.setDestination(5242U);
    msg.setDestinationEntity(62U);
    msg.timeout = 29761U;
    msg.lat = 0.879013739017;
    msg.lon = 0.0875874602657;
    msg.z = 0.593883904784;
    msg.z_units = 129U;
    msg.pitch = 0.236123951513;
    msg.amplitude = 0.380916501401;
    msg.duration = 50966U;
    msg.speed = 0.207573351475;
    msg.speed_units = 105U;
    msg.radius = 0.615183332401;
    msg.direction = 169U;
    msg.custom.assign("FHOTDAMXIAEMXZHYCOAEIWRCKXKDYJFUNTAMTHCOTZWNTMNUZOTBQXEXQBGYKFTCCZGXDQDKWWPLCMFMLFBKALNHQJVCYEPSLVLSJHOWFNXGHSVRSJPTOOCBPUVSPMSVKVUEDIELZSYOJRNXWBFOFGJQQR");

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
    msg.setTimeStamp(0.758282168892);
    msg.setSource(16147U);
    msg.setSourceEntity(122U);
    msg.setDestination(56142U);
    msg.setDestinationEntity(132U);
    msg.timeout = 29771U;
    msg.lat = 0.649768660998;
    msg.lon = 0.598193061457;
    msg.z = 0.322572309638;
    msg.z_units = 37U;
    msg.pitch = 0.28453453952;
    msg.amplitude = 0.280844824177;
    msg.duration = 52063U;
    msg.speed = 0.545542875207;
    msg.speed_units = 51U;
    msg.radius = 0.113843120231;
    msg.direction = 64U;
    msg.custom.assign("BLFDTTFNNUZYKKWJRNYDTXIUXCLCZABEFTROIWXTKRELOTUMMMEJPFWGURYDYGUJHLHRSEEGOBSZBYHDXYFZQMEBCLZGFXUJFIFTMIAXLIPAJGWHPCOCPJNWUMASVWGCGMBBZATCSZHPKVZRQHGEKGTQOVVKJVQRMNLWDCSFJDLNPNMLURKWWBIQUVSKSDDHIJVN");

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
    msg.setTimeStamp(0.750238244199);
    msg.setSource(48510U);
    msg.setSourceEntity(3U);
    msg.setDestination(15092U);
    msg.setDestinationEntity(68U);
    msg.formation_name.assign("VNNICZUZRJXXNLZXHQBVWQSWDKOAKPUKBEMJJOPFTEUPFQHILQUXEWTPPDXPYGRRGCGTYPTDGNYEYWGUFRORTCNCEIHNGKVBRTHCGFVASSJIWBJFRBKLTZDHYELKJWJWYCRSUSAAZMOZZOWLXRLMZNODMCMTQNZEPLUHYRNACUQOHMTAXBMF");
    msg.reference_frame = 226U;
    msg.custom.assign("OLTILHYILVHMXCBZIRNQLNYDQPXLEWJCTDAFZNZKOHVV");

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
    msg.setTimeStamp(0.470587634849);
    msg.setSource(49956U);
    msg.setSourceEntity(41U);
    msg.setDestination(37832U);
    msg.setDestinationEntity(36U);
    msg.formation_name.assign("CFSGKCTYLGEKLWQDIMZUTXFUOSWZGIXQEMVMSATHIPUBKWCOMDQVHSZXAIWYENGRBREJNVVLCPJCJRUOHBYAJSGIDJWSHQXHDKZMKTXBDYNBMPCLCZFSNKLNCIMCDVHLOJDZVOSXHLIZWZTEVPEOQUWPAXPLDUKFDTPRUNYQSOIJROFAFHHZWXMNYFAUWQFGBEMOKNKWIRGEBFXRFPA");
    msg.reference_frame = 130U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 56886U;
    tmp_msg_0.off_x = 0.359455131338;
    tmp_msg_0.off_y = 0.933171790753;
    tmp_msg_0.off_z = 0.0837367259427;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("OFVANMPWAUDACBYZFLKMQXQOGCKTGUCLKAHRRGFYYUQLFYKMNGOE");

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
    msg.setTimeStamp(0.584570104927);
    msg.setSource(59881U);
    msg.setSourceEntity(211U);
    msg.setDestination(41077U);
    msg.setDestinationEntity(202U);
    msg.formation_name.assign("UQFXEIYPLHYVNEWVQUKIWJTSGWBLWUAKYAYDHSLVXKQFZWLRGAXXJHPICCJQNCUDPUCGBSRETSAQOOLFVZMAHSMRWDSHFHPGGAQGRMOLVTIVZKOUIMZBYMGLPPRXERPXAURDKYXOSIRFIFINMWBKJEZDMUXEJYJESCOAKXOHOBBJZLKUGSGMDIWRQONVECBNWVHGOSTDNFTVFEZQHTQXFVCPCBDPYTNCZNRUMKTMZJPEWJAYLQBD");
    msg.reference_frame = 138U;
    msg.custom.assign("GPASXRATCYXBDECKZRHUEUDSEAGFYQYRQNMNEYYCLQKCEVUKOKNZHLUFIYTEFGBKZSLMSLPSPPTTPUFNFBVAPUKFOWWLIQNICQIGQHVZWFTGWMTFMJO");

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
    msg.setTimeStamp(0.914913136506);
    msg.setSource(2132U);
    msg.setSourceEntity(127U);
    msg.setDestination(65118U);
    msg.setDestinationEntity(76U);
    msg.group_name.assign("OUNQRLXSHMHEKPWWBFLRTMQXROGCFOIDNIFIAMQQHEISXMBJKTCIFLVESNZWSEYUYRKEJALZYXCMDZKACVSSLGYQGQSGUOFYXQNXBROBRYZMFJPIAWTQPJZXECDDGVYOECPUBKPPZSLTFZEUJBVNCUWVNUVHAYAIUEFFBET");
    msg.formation_name.assign("KEMEOYUEPTEBVGUWIQMGAXRRVHVMXFLDFCPOTFPBJPGCSZQRPWMNDYBITZMYQLEHMVQGJKWLBOYPEICSGDZJLNAIXLULXAXTVKTKFENOGPBUEAGJHNDYPSFSNBRDNCJXTSDJIFFIUASDUFQRQFVCJRRDMMMXIJYKQBAERODHEKFCBXHOVAVIOJTZZCPTCXPQKLUHYBNXSSHZSHRGSYLABWULCZLTWWWIAKRAOUQNHZJCWVMGGNWWODONZTUZK");
    msg.plan_id.assign("FJHYQUEEMPJDNCPWMWZRKFFENAHPUBIROISPCLJW");
    msg.description.assign("TBSJRVHCUSWYIFPUHXGZJMGCRDDPJMKBGVPFISKBAZKALHQOAZANUWAHRYYONXULCKVXFPXINNIDTDZEHHIEOFVAIODNZVTLARHWCITOFLVWYSOKSNWAOYJECQQDOQYQVQWYEOZGIUEPCEKHGMBDXMTRQNLUGTJFKEJDCUCWDPKSXFNGLMDSEJJBNSJBLZIH");
    msg.leader_speed = 0.234247761616;
    msg.leader_bank_lim = 0.706233270257;
    msg.pos_sim_err_lim = 0.159992828004;
    msg.pos_sim_err_wrn = 0.423329539199;
    msg.pos_sim_err_timeout = 62799U;
    msg.converg_max = 0.259799166283;
    msg.converg_timeout = 24597U;
    msg.comms_timeout = 20594U;
    msg.turb_lim = 0.7818153053;
    msg.custom.assign("RLIRAJFELFPOPEOWDZDIHXVOABWYQXRMYKBBZXBQAYVHVHZAYNOTPKWDSGFVCRUDHLZFQOYCTXECTPKTMIOFJBMKESULGSVGDFGEKMSWQPDXGZOZNJEMKSOAXIIZEBZZCCPQSNLHRXCVNETWXGLAFYCWJGUMUQQWRTVH");

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
    msg.setTimeStamp(0.6391846663);
    msg.setSource(40389U);
    msg.setSourceEntity(234U);
    msg.setDestination(5829U);
    msg.setDestinationEntity(213U);
    msg.group_name.assign("IZXAPEMFYLDTNKZHMQKBBRPRUHBBTRTDRLWAJVPGBCAJUYHPFD");
    msg.formation_name.assign("BRMEQOXYFZKQVOLBLDJTUWXZTPJPJDBTUNIWEOXYVEQIASRXJHYE");
    msg.plan_id.assign("CDKSRHEKSAUCVAEQVNDRLLZGTBOIEEHZEBHWVVWXGPSFMBLYYVPKLMEWXNYPTWDLHLMWCTKZZQYGDNGBFNIWIBSXPLLQTJDJGFXJWUQCMJJSRXZDIRIDTODPAAIZEFCCAREJWAOFAWQEOMKGCSYQFHUGPKNRWTHBYJ");
    msg.description.assign("ZAYYOEAMQAKISHQUWWDSFRUUULCNILVLSDMYQKBHYZAXEIBUFGEMFGQPEPOYOUUQWJROXDHWDQLOIPSFJDWRLCGENPCLNULZO");
    msg.leader_speed = 0.315955784187;
    msg.leader_bank_lim = 0.44972464436;
    msg.pos_sim_err_lim = 0.667393626183;
    msg.pos_sim_err_wrn = 0.159691312617;
    msg.pos_sim_err_timeout = 23799U;
    msg.converg_max = 0.340625974741;
    msg.converg_timeout = 27985U;
    msg.comms_timeout = 51880U;
    msg.turb_lim = 0.35393420303;
    msg.custom.assign("WHBEMGIMWHXLEQPPBRFEWIBFFXOSBRYZVSZMWNCIKJNWPBFW");

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
    msg.setTimeStamp(0.354363727668);
    msg.setSource(46167U);
    msg.setSourceEntity(31U);
    msg.setDestination(58121U);
    msg.setDestinationEntity(162U);
    msg.group_name.assign("SHYWYAKVIWGVSTJVNVYGDOMHHTVIBYDXWPNWYFDXUXUNMUZNDZHALFTOBXEYJLQJEVSBIUAIPVTVRHRMNQAZOOACPRGLOKQBGCXATEZIZSWCBTWN");
    msg.formation_name.assign("QMUOSHBOBIOGUIFHQDETAO");
    msg.plan_id.assign("WXRHNVKOMATKQBQPLPTFZZSEMSIUIMJCTCXGJQICEEVDWFWCYFLIDLPSILEROYYXCFWCSIWOFOPFBBNVGMSDTWORDRFDHPVDKNBUZYPKMUEJDCNGMVYAJJJXONGFUBTHNARSTHZSACCUINBCGMZYYGVZEINIQALZLLARMOHOATVXQJUEVKXGYZJPVJYPISBTHVQUEDOA");
    msg.description.assign("IKVKSBEVAETYZTARPQNCRACPBRGGEYXXNOVIPUTPFISBTONYJVX");
    msg.leader_speed = 0.557492116692;
    msg.leader_bank_lim = 0.594102314833;
    msg.pos_sim_err_lim = 0.355746466908;
    msg.pos_sim_err_wrn = 0.571483547799;
    msg.pos_sim_err_timeout = 13278U;
    msg.converg_max = 0.425310942367;
    msg.converg_timeout = 12481U;
    msg.comms_timeout = 62697U;
    msg.turb_lim = 0.833700353421;
    msg.custom.assign("THVYBUNIDPESTAUOJRMRLMKFKJASTGFPOYRGYCZWHIKDWSRZBJVTSOJLUNANITGVUTFUTBQZPNEMWZXCNIQISMJLXERSVUSVVAXXRSLMKDQPOEQCXJADGDWMKBXJJHIRDWPBHHQGFHWSNMOVLADZTUOYAGMXSCGHCZVJZFYYKBCCCHEDCKUOYYNLFBLNWEEICNPEBKOIA");

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
    msg.setTimeStamp(0.63988480265);
    msg.setSource(2665U);
    msg.setSourceEntity(50U);
    msg.setDestination(5686U);
    msg.setDestinationEntity(196U);
    msg.control_src = 11735U;
    msg.control_ent = 124U;
    msg.timeout = 0.219717294436;
    msg.loiter_radius = 0.666183418567;
    msg.altitude_interval = 0.469389199742;

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
    msg.setTimeStamp(0.694283052104);
    msg.setSource(46406U);
    msg.setSourceEntity(68U);
    msg.setDestination(5418U);
    msg.setDestinationEntity(15U);
    msg.control_src = 653U;
    msg.control_ent = 15U;
    msg.timeout = 0.697082377787;
    msg.loiter_radius = 0.81366576812;
    msg.altitude_interval = 0.287323924923;

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
    msg.setTimeStamp(0.242743185647);
    msg.setSource(5098U);
    msg.setSourceEntity(75U);
    msg.setDestination(44130U);
    msg.setDestinationEntity(9U);
    msg.control_src = 26050U;
    msg.control_ent = 150U;
    msg.timeout = 0.530261087538;
    msg.loiter_radius = 0.100480212544;
    msg.altitude_interval = 0.058271998283;

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
    msg.setTimeStamp(0.546363551523);
    msg.setSource(17370U);
    msg.setSourceEntity(245U);
    msg.setDestination(15950U);
    msg.setDestinationEntity(94U);
    msg.flags = 219U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0712374682378;
    tmp_msg_0.speed_units = 119U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.518446009491;
    tmp_msg_1.z_units = 159U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.152336407418;
    msg.lon = 0.460842300074;
    msg.radius = 0.100049078512;

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
    msg.setTimeStamp(0.044068922554);
    msg.setSource(12789U);
    msg.setSourceEntity(208U);
    msg.setDestination(39694U);
    msg.setDestinationEntity(58U);
    msg.flags = 80U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.897510777226;
    tmp_msg_0.speed_units = 36U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.16840932747;
    tmp_msg_1.z_units = 25U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3525628402;
    msg.lon = 0.54308120914;
    msg.radius = 0.978708331284;

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
    msg.setTimeStamp(0.516024647348);
    msg.setSource(18725U);
    msg.setSourceEntity(123U);
    msg.setDestination(43279U);
    msg.setDestinationEntity(188U);
    msg.flags = 96U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.401649833992;
    tmp_msg_0.speed_units = 103U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.804270239343;
    tmp_msg_1.z_units = 131U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.620239577173;
    msg.lon = 0.710925394898;
    msg.radius = 0.493697383499;

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
    msg.setTimeStamp(0.748274463326);
    msg.setSource(12504U);
    msg.setSourceEntity(179U);
    msg.setDestination(44245U);
    msg.setDestinationEntity(198U);
    msg.control_src = 6477U;
    msg.control_ent = 209U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 194U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.308787839149;
    tmp_tmp_msg_0_0.speed_units = 9U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.31111011903;
    tmp_tmp_msg_0_1.z_units = 131U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.567344954852;
    tmp_msg_0.lon = 0.413526145261;
    tmp_msg_0.radius = 0.732212706705;
    msg.reference.set(tmp_msg_0);
    msg.state = 182U;
    msg.proximity = 46U;

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
    msg.setTimeStamp(0.248876321304);
    msg.setSource(33147U);
    msg.setSourceEntity(21U);
    msg.setDestination(24078U);
    msg.setDestinationEntity(220U);
    msg.control_src = 53291U;
    msg.control_ent = 150U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 4U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.785574034198;
    tmp_tmp_msg_0_0.speed_units = 136U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.980309535296;
    tmp_tmp_msg_0_1.z_units = 44U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.00615526401108;
    tmp_msg_0.lon = 0.147605750895;
    tmp_msg_0.radius = 0.115338423241;
    msg.reference.set(tmp_msg_0);
    msg.state = 158U;
    msg.proximity = 38U;

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
    msg.setTimeStamp(0.786047914523);
    msg.setSource(31878U);
    msg.setSourceEntity(69U);
    msg.setDestination(53524U);
    msg.setDestinationEntity(51U);
    msg.control_src = 43360U;
    msg.control_ent = 45U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 83U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.113731334311;
    tmp_tmp_msg_0_0.speed_units = 3U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.690924698178;
    tmp_tmp_msg_0_1.z_units = 98U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.100214968274;
    tmp_msg_0.lon = 0.0380420159221;
    tmp_msg_0.radius = 0.209853462477;
    msg.reference.set(tmp_msg_0);
    msg.state = 212U;
    msg.proximity = 176U;

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
    msg.setTimeStamp(0.671546842326);
    msg.setSource(45902U);
    msg.setSourceEntity(219U);
    msg.setDestination(34773U);
    msg.setDestinationEntity(161U);
    msg.ax_cmd = 0.580504255478;
    msg.ay_cmd = 0.389531152958;
    msg.az_cmd = 0.554877139822;
    msg.ax_des = 0.531985177442;
    msg.ay_des = 0.918784307515;
    msg.az_des = 0.289617606986;
    msg.virt_err_x = 0.535030932506;
    msg.virt_err_y = 0.326385931716;
    msg.virt_err_z = 0.54478543023;
    msg.surf_fdbk_x = 0.184098271959;
    msg.surf_fdbk_y = 0.340158670107;
    msg.surf_fdbk_z = 0.44240074298;
    msg.surf_unkn_x = 0.367466493754;
    msg.surf_unkn_y = 0.624909796747;
    msg.surf_unkn_z = 0.00704825209814;
    msg.ss_x = 0.0301412908614;
    msg.ss_y = 0.248448760325;
    msg.ss_z = 0.965347814423;

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
    msg.setTimeStamp(0.906438715508);
    msg.setSource(49235U);
    msg.setSourceEntity(248U);
    msg.setDestination(4246U);
    msg.setDestinationEntity(74U);
    msg.ax_cmd = 0.0629459647228;
    msg.ay_cmd = 0.589948996448;
    msg.az_cmd = 0.896591663261;
    msg.ax_des = 0.66632326551;
    msg.ay_des = 0.195065450733;
    msg.az_des = 0.262581176584;
    msg.virt_err_x = 0.534995596901;
    msg.virt_err_y = 0.447863526285;
    msg.virt_err_z = 0.398187979407;
    msg.surf_fdbk_x = 0.268375176297;
    msg.surf_fdbk_y = 0.780040717301;
    msg.surf_fdbk_z = 0.849854927988;
    msg.surf_unkn_x = 0.897276822891;
    msg.surf_unkn_y = 0.91387718424;
    msg.surf_unkn_z = 0.550068886995;
    msg.ss_x = 0.461166950205;
    msg.ss_y = 0.94885543215;
    msg.ss_z = 0.433928965224;

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
    msg.setTimeStamp(0.044690536133);
    msg.setSource(30152U);
    msg.setSourceEntity(168U);
    msg.setDestination(33144U);
    msg.setDestinationEntity(139U);
    msg.ax_cmd = 0.224393245214;
    msg.ay_cmd = 0.172138987627;
    msg.az_cmd = 0.928420946241;
    msg.ax_des = 0.117856325571;
    msg.ay_des = 0.516476702831;
    msg.az_des = 0.353193778505;
    msg.virt_err_x = 0.966792490512;
    msg.virt_err_y = 0.134752912165;
    msg.virt_err_z = 0.907249497308;
    msg.surf_fdbk_x = 0.239401245436;
    msg.surf_fdbk_y = 0.440783596155;
    msg.surf_fdbk_z = 0.440598020935;
    msg.surf_unkn_x = 0.318657556494;
    msg.surf_unkn_y = 0.479943946412;
    msg.surf_unkn_z = 0.157454107412;
    msg.ss_x = 0.244940694774;
    msg.ss_y = 0.477771811451;
    msg.ss_z = 0.536027388914;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("EWFXJKUGVODMVHSUBIDWWIOXYUMALNPUKBTHMZENFWR");
    tmp_msg_0.dist = 0.844918018774;
    tmp_msg_0.err = 0.487957211551;
    tmp_msg_0.ctrl_imp = 0.12018212162;
    tmp_msg_0.rel_dir_x = 0.881975079522;
    tmp_msg_0.rel_dir_y = 0.286827355975;
    tmp_msg_0.rel_dir_z = 0.301255900416;
    tmp_msg_0.err_x = 0.396500840722;
    tmp_msg_0.err_y = 0.378827938141;
    tmp_msg_0.err_z = 0.815492540732;
    tmp_msg_0.rf_err_x = 0.409834031946;
    tmp_msg_0.rf_err_y = 0.367930141263;
    tmp_msg_0.rf_err_z = 0.247031930532;
    tmp_msg_0.rf_err_vx = 0.299370711909;
    tmp_msg_0.rf_err_vy = 0.0454048667939;
    tmp_msg_0.rf_err_vz = 0.500095659359;
    tmp_msg_0.ss_x = 0.767779257492;
    tmp_msg_0.ss_y = 0.573009213614;
    tmp_msg_0.ss_z = 0.989840497216;
    tmp_msg_0.virt_err_x = 0.511074857127;
    tmp_msg_0.virt_err_y = 0.1443589975;
    tmp_msg_0.virt_err_z = 0.754226566434;
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
    msg.setTimeStamp(0.29369226589);
    msg.setSource(8663U);
    msg.setSourceEntity(40U);
    msg.setDestination(9199U);
    msg.setDestinationEntity(58U);
    msg.s_id.assign("EFHTAGNURJBIUOWLULLKEJMFGTKNWHGGVGYNCNSMOIGQHDMKRDJRLIQRBSKZDTBSBJQUYHLNHXQTOSPXFOENIRVFMVTCAFZPZKBWAYXNICPPXQKPVKHHMSRSVAOCYZLSYOBJICWYXALWWIUFDNZWYCEBFXRAPZEHIUJQYZTUWQJTLDDHGJKMEAXDZQOWGWQMXKGEPVYFNENJBDRBIPVUZFPOTIKZAJSREMLVOBHUMV");
    msg.dist = 0.557714931208;
    msg.err = 0.365772891038;
    msg.ctrl_imp = 0.64442184683;
    msg.rel_dir_x = 0.903799862462;
    msg.rel_dir_y = 0.688496246109;
    msg.rel_dir_z = 0.887035148722;
    msg.err_x = 0.371097819521;
    msg.err_y = 0.243595886366;
    msg.err_z = 0.689145493776;
    msg.rf_err_x = 0.350540948755;
    msg.rf_err_y = 0.830236841654;
    msg.rf_err_z = 0.433125642884;
    msg.rf_err_vx = 0.142972382453;
    msg.rf_err_vy = 0.493944284158;
    msg.rf_err_vz = 0.615788080358;
    msg.ss_x = 0.255083201811;
    msg.ss_y = 0.570677475281;
    msg.ss_z = 0.0740405370302;
    msg.virt_err_x = 0.0377844833395;
    msg.virt_err_y = 0.187327290733;
    msg.virt_err_z = 0.453775017167;

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
    msg.setTimeStamp(0.623950814813);
    msg.setSource(59211U);
    msg.setSourceEntity(133U);
    msg.setDestination(50994U);
    msg.setDestinationEntity(247U);
    msg.s_id.assign("EALPAXNCITYPQOFKRPTDHSGITROLRVPWXYIEUMHEIOHUHPHDAYSMONJDFGOKTIHVNRVRNXLLSAZLQBSBOCMHYMBDOXWYVQDQSJDJKEYXJSUXVZUSVLZUTQACNRQGIOLSMAFBQGLZVMSZWCRFXUJUCJRCAZMCWKITBWCSPGJEABWWHYPIINUTK");
    msg.dist = 0.200422252726;
    msg.err = 0.627852346325;
    msg.ctrl_imp = 0.864504094083;
    msg.rel_dir_x = 0.763225308827;
    msg.rel_dir_y = 0.946828671139;
    msg.rel_dir_z = 0.373488609585;
    msg.err_x = 0.156820526795;
    msg.err_y = 0.533357309595;
    msg.err_z = 0.93329572791;
    msg.rf_err_x = 0.144053465829;
    msg.rf_err_y = 0.349183838086;
    msg.rf_err_z = 0.387889469362;
    msg.rf_err_vx = 0.635618529612;
    msg.rf_err_vy = 0.184241353528;
    msg.rf_err_vz = 0.793750710496;
    msg.ss_x = 0.733778965977;
    msg.ss_y = 0.394907884172;
    msg.ss_z = 0.25989263829;
    msg.virt_err_x = 0.149184936769;
    msg.virt_err_y = 0.819821994284;
    msg.virt_err_z = 0.43617122609;

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
    msg.setTimeStamp(0.273057175265);
    msg.setSource(31550U);
    msg.setSourceEntity(0U);
    msg.setDestination(25348U);
    msg.setDestinationEntity(31U);
    msg.s_id.assign("BIRSXQJUOVCNXAJBONZWSGCJTXEPTKTMICTSDHBNAUXVHQHRZHDHPFPOVFRIJNHEYKQDZIMLQGFQJUCRCZNEPHOXNHYKMNEI");
    msg.dist = 0.344418431294;
    msg.err = 0.482571131391;
    msg.ctrl_imp = 0.620623864049;
    msg.rel_dir_x = 0.107229909558;
    msg.rel_dir_y = 0.898422430202;
    msg.rel_dir_z = 0.58581188035;
    msg.err_x = 0.329962594111;
    msg.err_y = 0.83052332203;
    msg.err_z = 0.295824017992;
    msg.rf_err_x = 0.681996345554;
    msg.rf_err_y = 0.412519473345;
    msg.rf_err_z = 0.904188249282;
    msg.rf_err_vx = 0.21118453954;
    msg.rf_err_vy = 0.673666956418;
    msg.rf_err_vz = 0.719901584995;
    msg.ss_x = 0.411239645721;
    msg.ss_y = 0.611376074737;
    msg.ss_z = 0.50095009828;
    msg.virt_err_x = 0.25615607518;
    msg.virt_err_y = 0.26832609374;
    msg.virt_err_z = 0.178225812067;

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
    msg.setTimeStamp(0.724259625232);
    msg.setSource(45063U);
    msg.setSourceEntity(4U);
    msg.setDestination(43481U);
    msg.setDestinationEntity(95U);
    msg.timeout = 37477U;
    msg.rpm = 0.431573421345;
    msg.direction = 92U;
    msg.custom.assign("SJMIEIPRIAOZFVMGTUMFEYXXCZMITARJBSNNWHJYMYLSWSEHPKYTXEOULLTKSBQRYFNVYZEZEMZKURXCNGATSNIVBPCKXVWFTCDLQJJNPTPGBKTOGLLTNDWAMCGKZLPEVUQYZNVEGGBXODVUFQDKAQDDQVRHQHNOJRSWBJPSDXPRRYELWAAKWWMPJVJNFFCWCUBXZPGDHLHDURWUOOIAHQGGFKIUACBZZE");

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
    msg.setTimeStamp(0.742198197567);
    msg.setSource(8347U);
    msg.setSourceEntity(187U);
    msg.setDestination(19462U);
    msg.setDestinationEntity(64U);
    msg.timeout = 61549U;
    msg.rpm = 0.550003470968;
    msg.direction = 233U;
    msg.custom.assign("SAOWBAAFSTIMAKVTXOQWSLGSBGXDASLVNQKCBAZMPJHLJWJXBZOFMBSQFNQDFRSMPVOULBLMJOUZIZNFUCDXTAUVQZHTECUQNFNBYLNQNSVCLHVHOWRIVXEEFTCCZNVCIWKYIFHIDDUXJESPDGMTGKKHPPPMNBAMZFPEDTORJLHXXRBVZKHGJRKJFGOJREUZEDTRKCAIOWOHGECIZPTYGG");

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
    msg.setTimeStamp(0.84695777829);
    msg.setSource(34511U);
    msg.setSourceEntity(54U);
    msg.setDestination(37416U);
    msg.setDestinationEntity(31U);
    msg.timeout = 56448U;
    msg.rpm = 0.506868293289;
    msg.direction = 198U;
    msg.custom.assign("YFXEBKUDPXLPSRADSIAKERVLTSQPTLHEGKTCYGQGCDPWOUMHWHNFSNWBZLQELKFAFKZQOBVAPBOYVFCCIWCINKTBPZTUPJEVIDWCVJHHEBZYMYVO");

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
    msg.setTimeStamp(0.214365309026);
    msg.setSource(29599U);
    msg.setSourceEntity(115U);
    msg.setDestination(39435U);
    msg.setDestinationEntity(151U);
    msg.formation_name.assign("PCWPYOLERVKNTFKBAPUNDFWKIVGSWDNUFNVXAXLUCMNQPIMHISWAYKJCCDDXGZVHFWZBC");
    msg.type = 41U;
    msg.op = 188U;
    msg.group_name.assign("OITWYGPCMNYRUWPIYJQVVVMTEFGLMKDMTKCAULEGYJREDFZUIZFRSKGZMKJUSCBTDPWHBNTCAALYWVDLFNAIECEZAGSURFQOXUXRJXJQYNVLHFPOSCQTTOPDBDVLXAMWNGPZHCBESGFHEEUFTOXCZPGXDQIEWDOTVSO");
    msg.plan_id.assign("IZSCQRUKPNUDOPXTSQBVXJSIPILYLFXSVAEUITERRJNCTWTTEKMWWABPMNQEISKZOEYLTWYZNAKMITKMVYQGMHSDFPURZDXUCJLHNKXGTBEOWWEYYBGCOALZSVFNOPYWGJFFJGEWBOCGNDJLALALMN");
    msg.description.assign("PANGYKEIEJFLDMXBVJAAXRUNRTLNUFIXNCBEWZJNRWIZHRYKWNHOSHQKLXBSZIVSVOFHNKHGGVAGQVYTJZDBXSWGVDLDQTKFCRHATOCCLWDM");
    msg.reference_frame = 224U;
    msg.leader_bank_lim = 0.0671136825259;
    msg.leader_speed_min = 0.933444977863;
    msg.leader_speed_max = 0.840264578855;
    msg.leader_alt_min = 0.409073544706;
    msg.leader_alt_max = 0.49096464748;
    msg.pos_sim_err_lim = 0.980634673763;
    msg.pos_sim_err_wrn = 0.0615262062889;
    msg.pos_sim_err_timeout = 769U;
    msg.converg_max = 0.237632700592;
    msg.converg_timeout = 28069U;
    msg.comms_timeout = 5493U;
    msg.turb_lim = 0.0357390937415;
    msg.custom.assign("HBUTRNWRYLJXHSBGRPPHKCBCXCOSYCSTFYDXEANYGXMIMPIBVPWDHQXDNTRFQRZILWBDYTJSTWYAMMHCAMVKWINJEEUSUJHVUZWZVLZONKCOQEBSCCZKMGQPRLDRRAYBAGZDJJOGNZLVVVFJOUBNOQSDXBNWEIKAAPHGSKKKHLFMYFACTULZUHDXKFPWTJTPDOQNPYWTIE");

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
    msg.setTimeStamp(0.169862421252);
    msg.setSource(14969U);
    msg.setSourceEntity(46U);
    msg.setDestination(53992U);
    msg.setDestinationEntity(43U);
    msg.formation_name.assign("YXYRJSLZRVRSAHBSJXXUAWFWLN");
    msg.type = 61U;
    msg.op = 173U;
    msg.group_name.assign("TDVKYADVEEIDWYCWBPYMXFODFIACMWIHXVTZRGQAFVOKQERWYGLUSJNCEKHGZPNKBPWKZCUBLNKRHXYZOSVHLKOGEHIURFCMDUMPUWBEUZQQZAUJUCKJJDQDSFPXNSWSVS");
    msg.plan_id.assign("UOKFIHYZFUM");
    msg.description.assign("NXXYJWSJIQPENXLSYVJOAOEAEQLEMOIVAEACCBFIMKTHRRBFGWJNJPZPGIXWPUYFWGLJCZDUNDJWPUHUJUQYRMCDYPIUEFAUXTXGOEUSWNDEDQINA");
    msg.reference_frame = 244U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 7796U;
    tmp_msg_0.off_x = 0.171042928581;
    tmp_msg_0.off_y = 0.157433972617;
    tmp_msg_0.off_z = 0.807645375619;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.873524076097;
    msg.leader_speed_min = 0.417652106097;
    msg.leader_speed_max = 0.333150659403;
    msg.leader_alt_min = 0.3491643478;
    msg.leader_alt_max = 0.829370508656;
    msg.pos_sim_err_lim = 0.581291981357;
    msg.pos_sim_err_wrn = 0.472801840391;
    msg.pos_sim_err_timeout = 37514U;
    msg.converg_max = 0.856944816791;
    msg.converg_timeout = 25141U;
    msg.comms_timeout = 10602U;
    msg.turb_lim = 0.758223471824;
    msg.custom.assign("SFTKEYSPOZRMORDFYBKFZHSLYRFGFCGIWRZGAPWJAMWMAADLGBXKBPZGFOWIJWVPSEJDUFHYUNQDQEXXZHPLYBEAGMQKNIHQWJCNGOOLUATUNZZTUISZEDFGXIGNABKALBWNTSXSSLCMTYPMK");

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
    msg.setTimeStamp(0.647611073737);
    msg.setSource(64660U);
    msg.setSourceEntity(120U);
    msg.setDestination(46847U);
    msg.setDestinationEntity(0U);
    msg.formation_name.assign("MFQZRLOBARUYBDBPUKX");
    msg.type = 180U;
    msg.op = 21U;
    msg.group_name.assign("XDEVQTEWZRMBKTXEDQXVHBXQQFIDPNTSMYZUBLYCBBDHOHSYHWSOENIHNVEZFBHUFAMLCDLDJM");
    msg.plan_id.assign("EGGYUGPXHTUALPIDNTWKHVXNMLRLQOGZBLWFAJVPHISIAMSDZOCIPRBBUDMZZGUYEUKVHHQRUVDOOGXYKTJSFDCQERBZCIFYCNESQPVJBIOJBTEXELNSNKFNQWYJFDIRXQYNGSXATXMAZEIWWXMLGBZIHGSASEMJDDROPBMKCSBKFNWVCLWGJQAFZPPBDJJPKKLWRUFYRUTOXTEIRHYULXCTCNHMMC");
    msg.description.assign("UIWTLEKFWESMVWJATKRIRKYPHQHTUKNOGQPNRSXYQGVVJVWLGVQSMYYEJESJWXLV");
    msg.reference_frame = 168U;
    msg.leader_bank_lim = 0.265380473352;
    msg.leader_speed_min = 0.195423751865;
    msg.leader_speed_max = 0.563712057505;
    msg.leader_alt_min = 0.644104208416;
    msg.leader_alt_max = 0.649414953243;
    msg.pos_sim_err_lim = 0.81624018294;
    msg.pos_sim_err_wrn = 0.373876764046;
    msg.pos_sim_err_timeout = 30168U;
    msg.converg_max = 0.736910075168;
    msg.converg_timeout = 11522U;
    msg.comms_timeout = 44217U;
    msg.turb_lim = 0.0936487408804;
    msg.custom.assign("WIGUXWCLIVEPXSCJBYIHAAJDENLGRHPUEEPKYCWYUMOGDTAQYOKRVIEEOVZIZHEGLIEJMBJDNJOSRMDW");

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
    msg.setTimeStamp(0.731198222007);
    msg.setSource(59781U);
    msg.setSourceEntity(10U);
    msg.setDestination(42390U);
    msg.setDestinationEntity(155U);
    msg.timeout = 24330U;
    msg.lat = 0.940929742244;
    msg.lon = 0.51218646035;
    msg.z = 0.46876882222;
    msg.z_units = 26U;
    msg.speed = 0.0566842950942;
    msg.speed_units = 215U;
    msg.custom.assign("ZUEPXQEEQDHXJQHPEWKFHVSWXARCXVGGMCIOKSDBFXXERHXIZFSCSWGDNCUBTMNZBCRJFTLPQUABVEKMYXHIJUAADOEBKZSQLKYOZCCPLOWYGTMLORJSMIPMNPYGMVSBFYBWRUCVTFIGWPPRAQSNKALNRPZLGTQOUIXHNYJERAMVRYLQANZKERGNVIUMTUPCWD");

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
    msg.setTimeStamp(0.677905795932);
    msg.setSource(5744U);
    msg.setSourceEntity(185U);
    msg.setDestination(9815U);
    msg.setDestinationEntity(197U);
    msg.timeout = 33445U;
    msg.lat = 0.808141199406;
    msg.lon = 0.784344983529;
    msg.z = 0.2583120135;
    msg.z_units = 139U;
    msg.speed = 0.328891393973;
    msg.speed_units = 60U;
    msg.custom.assign("TTRLHXCCBZCQJEJGJIZHGOIBOWQAQOXPCMVXSFXTTXEUKNZTVSCYHWVGSYUJPRRNFFEXVMCBMULQBNOXSGOKBBWRPCLLWIEAAOFSQXBCWZEEGQIZNPKLWYTZKDKDDAARMEQIHMJLFKWMEMVCNGMVONBVUDAIAVF");

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
    msg.setTimeStamp(0.774644452702);
    msg.setSource(25834U);
    msg.setSourceEntity(44U);
    msg.setDestination(39735U);
    msg.setDestinationEntity(15U);
    msg.timeout = 58266U;
    msg.lat = 0.0505833431639;
    msg.lon = 0.492166477515;
    msg.z = 0.0644256836402;
    msg.z_units = 98U;
    msg.speed = 0.487061780004;
    msg.speed_units = 190U;
    msg.custom.assign("NUWLXFPBSSGCLBPXEPLNGPXIDLIBDNVAUGWTZUPTPBINFDZZEYCPIKBXKERGMDMGJEDDLMGZQMEWTVDUYWSXHVTZTOQQLXRQVJVUCFFHMJDMJHHUQZGCE");

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
    msg.setTimeStamp(0.948526638916);
    msg.setSource(32339U);
    msg.setSourceEntity(151U);
    msg.setDestination(33713U);
    msg.setDestinationEntity(6U);
    msg.timeout = 3753U;
    msg.lat = 0.308913247013;
    msg.lon = 0.837430324351;
    msg.z = 0.487567141263;
    msg.z_units = 22U;
    msg.speed = 0.966216351459;
    msg.speed_units = 186U;
    msg.custom.assign("JDHIEOLMEZFYDYBNLPMQGAYGAWTQBRIUGWOQFCZOMNXANFSCEJDGIYUDRAMTSSKSBPEPTDBGKMXLIHEVHLPJUNDIUZPELYMFLPXWIXCGX");

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
    msg.setTimeStamp(0.14300583321);
    msg.setSource(48993U);
    msg.setSourceEntity(61U);
    msg.setDestination(15346U);
    msg.setDestinationEntity(159U);
    msg.timeout = 6352U;
    msg.lat = 0.0955488958257;
    msg.lon = 0.2961127872;
    msg.z = 0.88947397155;
    msg.z_units = 170U;
    msg.speed = 0.671566398116;
    msg.speed_units = 236U;
    msg.custom.assign("WHDNFAAKLFZNYPMESHFQNXQNUNPWJMRPEEJIYBDFPSXOMIGOIBRQTOVNZGOBIDHESJTKKYGLQRPDNZVWUVCXZHLBHCOECMUKAXOVIEZPUWRGASLVTABDDXTWSUKMBMQMCOLYIBNMZARPAQFAXCQJCDU");

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
    msg.setTimeStamp(0.914606663148);
    msg.setSource(57478U);
    msg.setSourceEntity(109U);
    msg.setDestination(64486U);
    msg.setDestinationEntity(12U);
    msg.timeout = 24695U;
    msg.lat = 0.0898566607223;
    msg.lon = 0.93220132239;
    msg.z = 0.00436458913557;
    msg.z_units = 12U;
    msg.speed = 0.149744783743;
    msg.speed_units = 56U;
    msg.custom.assign("TGDVCQGBWCGFSESMLJROAXKZIBICXTCYMXGQLIAGMKFPDNYIMRZQDNRXAOYEWPQHSZIYVJMXFUGMCPJHONTPAKUOHPIQPTNFLEJSYXFGHJFHWGTAWQXURBEZLXVTJMOKZBMXWSETTURAPFYHCDKORRFGBVIO");

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
    msg.setTimeStamp(0.415867194836);
    msg.setSource(12424U);
    msg.setSourceEntity(129U);
    msg.setDestination(10379U);
    msg.setDestinationEntity(62U);
    msg.arrival_time = 0.464303098916;
    msg.lat = 0.31267627187;
    msg.lon = 0.913536869661;
    msg.z = 0.501116974197;
    msg.z_units = 120U;
    msg.travel_z = 0.561741130556;
    msg.travel_z_units = 83U;
    msg.delayed = 227U;

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
    msg.setTimeStamp(0.697212887157);
    msg.setSource(38207U);
    msg.setSourceEntity(113U);
    msg.setDestination(22189U);
    msg.setDestinationEntity(129U);
    msg.arrival_time = 0.491912376397;
    msg.lat = 0.962766444709;
    msg.lon = 0.967955963796;
    msg.z = 0.299516528973;
    msg.z_units = 245U;
    msg.travel_z = 0.535165630574;
    msg.travel_z_units = 179U;
    msg.delayed = 234U;

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
    msg.setTimeStamp(0.889598399547);
    msg.setSource(43918U);
    msg.setSourceEntity(162U);
    msg.setDestination(59726U);
    msg.setDestinationEntity(21U);
    msg.arrival_time = 0.904180338877;
    msg.lat = 0.60968105592;
    msg.lon = 0.131558595422;
    msg.z = 0.137365478395;
    msg.z_units = 152U;
    msg.travel_z = 0.441986233426;
    msg.travel_z_units = 66U;
    msg.delayed = 83U;

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.714224452701);
    msg.setSource(32190U);
    msg.setSourceEntity(117U);
    msg.setDestination(59532U);
    msg.setDestinationEntity(149U);
    msg.op_mode = 58U;
    msg.error_count = 59U;
    msg.error_ents.assign("KKXTDLOAOOEIUEYIVGIHFFDSPQTXOEBRVQLCFHCGXBXXPTGNBEATEVTATLFVGISKAUICYWUHDFPYVADBDBJVNPPBRORJURBBWFONKPLRACYJRUJFYMHGSKGIHBJWIXNMLVSKMCVXMCHVGQAJQMSZMFPLONEWKJMBWNONPYZRDZTZXWORZCEDPULUQFEDIZYNAEXQDWRANMFYLUSZZQJPTKDRMMJHHYJWL");
    msg.maneuver_type = 37222U;
    msg.maneuver_stime = 0.969136580383;
    msg.maneuver_eta = 19929U;
    msg.control_loops = 1032080213U;
    msg.flags = 11U;
    msg.last_error.assign("XFARTFGSTYMGIFJXZDFMXAUPTDVSWCCYUYMMKLVJBCZFOQIADRZZ");
    msg.last_error_time = 0.193990067325;

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
    msg.setTimeStamp(0.701516075718);
    msg.setSource(61964U);
    msg.setSourceEntity(16U);
    msg.setDestination(33164U);
    msg.setDestinationEntity(185U);
    msg.op_mode = 87U;
    msg.error_count = 100U;
    msg.error_ents.assign("PGKVMTDHSMIHMSYRGYFAKFIFDQNHUQPLUIANXJWFLITSABGGLBOCZFSTNJCIYHNMJZVRMFDCRRGRNWAFOXTZCAELSCVQNUCKZFOHJBMPYEULAUIMDQQGOKEZXBHQDJWDCORAZXOJIGKBZODIWWBEKBAPYTESYVHDRZUDJOVYLWIUJKAOQVVDKXLNPUSLLCTRYGEE");
    msg.maneuver_type = 46300U;
    msg.maneuver_stime = 0.303718397575;
    msg.maneuver_eta = 53874U;
    msg.control_loops = 2097592016U;
    msg.flags = 113U;
    msg.last_error.assign("MIGMQISAPQYPNCABJBDCMOUAZTCEWVTSRRUZQHTSOBLKZNXWRTWNRXAYIWHBOTEOMERNQZDTKVTDMWWNKDMYPAFLEOGJWIQWFHCFBLKESVBNGERXHTVNCALVUAGRJCEULPYIXKBEJXW");
    msg.last_error_time = 0.889179583666;

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
    msg.setTimeStamp(0.788656597669);
    msg.setSource(16704U);
    msg.setSourceEntity(65U);
    msg.setDestination(15273U);
    msg.setDestinationEntity(115U);
    msg.op_mode = 102U;
    msg.error_count = 129U;
    msg.error_ents.assign("KJZSHONLXGEESBMHGRVGMYKTRPFKTYYOPQFBVZTTAOLVOBNIYJJKBVPADOCSABCFICGAGUIECVIURILYLWPKEFAFLMJFOXALCNJTAKGUWAWOVEHPVSUMLMIJWQIDOTJVFSSDEFPZLXQYDCDQWMWGNJSXMKKUYRQRNUBMRUUCIWKYPK");
    msg.maneuver_type = 54771U;
    msg.maneuver_stime = 0.0195720383681;
    msg.maneuver_eta = 47252U;
    msg.control_loops = 2731957109U;
    msg.flags = 30U;
    msg.last_error.assign("GVBPJIARKTUZXYHVABMRK");
    msg.last_error_time = 0.974000709854;

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
    msg.setTimeStamp(0.445143431171);
    msg.setSource(45958U);
    msg.setSourceEntity(236U);
    msg.setDestination(41305U);
    msg.setDestinationEntity(55U);
    msg.type = 127U;
    msg.request_id = 36406U;
    msg.command = 158U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.106258711419;
    tmp_tmp_msg_0_0.speed_units = 54U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 16522U;
    tmp_msg_0.custom.assign("ZFOSRCGWDXGZGPHKXOWCKIDUNNTXDIRTUXKCYXMPQFHIGSFBUABKVTMDLCPSSZUGNKFMIFENKURRHNPTEGJUJLLAHUMYBEULZXCFBJQVEZYYQREYEYMAIRXJTBPHDQBVYAZHCIWZVNKALVIOUDZJLMGRTAHMEMOSWSODIEEVWYHOB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 250U;
    msg.info.assign("HZLTGRULVZJLZBFEPTAAZYQTPAYLSXJXRCSKNWME");

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
    msg.setTimeStamp(0.706514980363);
    msg.setSource(52184U);
    msg.setSourceEntity(78U);
    msg.setDestination(43540U);
    msg.setDestinationEntity(90U);
    msg.type = 244U;
    msg.request_id = 31666U;
    msg.command = 126U;
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.55461396163;
    tmp_msg_0.lat = 0.827938349372;
    tmp_msg_0.lon = 0.846026790019;
    tmp_msg_0.z = 0.629271847907;
    tmp_msg_0.z_units = 1U;
    tmp_msg_0.travel_z = 0.156258000372;
    tmp_msg_0.travel_z_units = 185U;
    tmp_msg_0.delayed = 194U;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 27497U;
    msg.info.assign("HISLTQGKVQNJXVRCZUYGOWLVDEZJZJHAEPIVVFEXADAMFSHMGCFXEDAVSZBHMUZLKFBEUGQNDUOSAWMMCBPAWDCMOKGNLAFZXLCYHDZXFHICTSWSJPJQRUQRRNQNLQZTYKBPXUHULZUPBTOHNJOPCGOIGWTSXRBTOGEIXIPFVBRCEAEPHKMTNKGBNWTKIJJOYTSLONVAAMRWUKDVYCEXOKWPIMFBLQXUILYIRYYMYRGCDBQTDESVRZJYKWDQ");

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
    msg.setTimeStamp(0.781700010892);
    msg.setSource(43780U);
    msg.setSourceEntity(132U);
    msg.setDestination(46760U);
    msg.setDestinationEntity(181U);
    msg.type = 161U;
    msg.request_id = 64500U;
    msg.command = 249U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.489107082308;
    tmp_msg_0.lon = 0.638418838657;
    tmp_msg_0.z = 0.163592052288;
    tmp_msg_0.z_units = 120U;
    tmp_msg_0.radius = 0.308367070149;
    tmp_msg_0.duration = 7499U;
    tmp_msg_0.speed = 0.869140688843;
    tmp_msg_0.speed_units = 206U;
    tmp_msg_0.custom.assign("UMVZINDDBPWMQSRGNMPPRTIZREMVWHPIWQTMOTLVHCXCLKPWCJUNFOBNMAJSQOHYELXK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 47193U;
    msg.info.assign("WABASHSTMKLBYSNEOMAGZUKLQLNJDYCVJQRYHSAVNPWAHCYLRTQQUFYQVMPPMXGNKSBIDDVOGBVZUCXGZCPXRNIBIVLOXSENOLUFYOBKIZTCKAFQJVLOJGZPCSSPXXFYHCPJOZLPNWOMHGRTHTTARTFIGNWTLMELDDHBSZUDZIYSAMFJOBWMGDXGBERWDEQFQREIUUKWNRFJWXIJIDYQWPHMBRANKFTKCZQMORGYXEKUEVJDVEHVUUEHFZ");

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
    msg.setTimeStamp(0.604413373705);
    msg.setSource(11572U);
    msg.setSourceEntity(105U);
    msg.setDestination(62714U);
    msg.setDestinationEntity(22U);
    msg.command = 60U;
    msg.entities.assign("MDPHOFIYHBFBLWPKFUQNEIUSSPFNCRTDAWXWJXOIAHTWIKYUBBRSCVOHQIOHPZJYYRAVEUVDKVARULCGXLYHMQLNEPKNUVQTGYYRWXPXDETUZVEQSKWRESCIJBUIBBEUHDGNDIAXTNOSQAZZLRNFGSOMMFCQKRF");

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
    msg.setTimeStamp(0.972173098389);
    msg.setSource(32413U);
    msg.setSourceEntity(113U);
    msg.setDestination(38565U);
    msg.setDestinationEntity(237U);
    msg.command = 81U;
    msg.entities.assign("SBULUQNBVNNXJEDJOQSHGVQSALXMVGCLFMJUOYJWGWZDYBFIPETNBAOAOTMSRFQLMCCTWIEYCEFBKHBHIUABAPWXNQKUVUKPZJRYLEKJKDRQYRKKYQGWNXZTEZYISXDHUXJDRHIVNZEQOCNMHWMUANCLAAFFYSFWGOZETCDIHJDGPQDTGGEICTIBAMBOKVSLRCB");

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
    msg.setTimeStamp(0.246512648974);
    msg.setSource(36910U);
    msg.setSourceEntity(3U);
    msg.setDestination(18555U);
    msg.setDestinationEntity(143U);
    msg.command = 195U;
    msg.entities.assign("CVKSQKQGDASJ");

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
    msg.setTimeStamp(0.361723344937);
    msg.setSource(61800U);
    msg.setSourceEntity(100U);
    msg.setDestination(19149U);
    msg.setDestinationEntity(108U);
    msg.mcount = 104U;
    msg.mnames.assign("RWLOKBBWWAAFFUAXMXBBZEEGXLJDFQMHTATVPQWDHQQRCJUJVJMQWFCSSGUGVNEYGLXUXIYQGZTRKVRDMCYPPTOHXFLPWPMXYQNZYZKGBLVNQWJRUZRNWSITGTKCAOMSYDAFVO");
    msg.ecount = 97U;
    msg.enames.assign("MSGJJKPTSFHDOJUQVRRJAVMRBNUFUGPKONCCXLOVSUBZYHJFSHBOCCGHWMYLPVNKNMQEZRPTZEBJKMWJLDTPSBBNXIQYFKQMFOJYAWPAFBULLXGIXVBAWNIAWWEQQEOGHCUSIEYUGEMOETKRFVVHYRPSZENFXHYSXKJCDWLLIQTLDIZEPWWRJEGBZRCPXXXTDDPHCOANFKGOVGGDSQVZMLQQDAMKKDRIUINVHWNCDCSABTAZTUY");
    msg.ccount = 210U;
    msg.cnames.assign("PDFXDQRQLPICLHHMOJXRTYWKJMFPMPDGIQGOYKMSEGSZDLVRCSVFDPVLBZXDOIBEGJFYEDKCZHGRBNDMELTLRQNSBTCKIVKUHDO");
    msg.last_error.assign("BMSBMNKIFJMJZSNEMASIAVHHJRDVKOIUGQWZHFEFEWAHHFUTEKBYKCVPAWTHMOFGTRKUOHJZZPVAJFXDKYOLREPYBRSQNEDWWTGDELGMZFLAVRIAIRQYDNYECMLCXVLSFCKDWNRSELKGHTAFJKAVBCIQCCWPYYWXQHBIARJXZMFJXOMRNRUQGPYVMDOJOPOXKBPZTVQBZPUDZUBJNTLUEGHGSTIVPTGZQXSTWDNYYPXSQLLCNCOQXNLUUGXIOI");
    msg.last_error_time = 0.179633964012;

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
    msg.setTimeStamp(0.190610257315);
    msg.setSource(49043U);
    msg.setSourceEntity(228U);
    msg.setDestination(54963U);
    msg.setDestinationEntity(217U);
    msg.mcount = 65U;
    msg.mnames.assign("RCHMVIFZCWUXPMAFUYYQNCDSKCZZEEAFRSUIPECJVWDPVQTPBNKZWIZQEPGXWLNUYUMUSRIWADYNGUXCBIMYBISUHRPGHXVDZKRPJCWIOQQWTJEGLPHOTCDYSFVOTQGEXELYTNVDYOXZLARORZJNLLQUYVQXXFOKIORQXLEWDAKSBMGRKOBBADSTJMYMH");
    msg.ecount = 30U;
    msg.enames.assign("EWNCFEFKGHRTZCQFBHJOAQFUMWDZQAQKYZLDACABOX");
    msg.ccount = 177U;
    msg.cnames.assign("EYMGIXZEVOQOYZICAGJCOVPCPJNATXSKDBXGANKPBNGO");
    msg.last_error.assign("HTLPCUKMTNAQQJVHOSNMLWKJKHMZXNJICYNVYDHNUDYDRWASATLKBRPZOWIXGTDKIQSLRVTLIOBNQNEAZLQCSFGLFAXIMBIJHWMNAWPBJSVUMPYGFLENYGKL");
    msg.last_error_time = 0.755310651724;

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
    msg.setTimeStamp(0.802024680643);
    msg.setSource(42487U);
    msg.setSourceEntity(50U);
    msg.setDestination(30257U);
    msg.setDestinationEntity(15U);
    msg.mcount = 61U;
    msg.mnames.assign("HVIOVWZPBSEUOHTYQFWQUVMXIALZTAUPCQVAKXKSMQOUCAJLXQBTKCKMXSKKNEYZDIEWSFJGESEVYPVNQIGRTWQBCBPWGIBEXPGNWDVJWSQDXDAIFMOFULCXHENWSGJNQZUGAMAFNPYRZJMGCPRBYROLCIJWGDDO");
    msg.ecount = 35U;
    msg.enames.assign("DGPRUZFXZMXMSNCKYHVFZVPFWOKIEJQOQPXTGBDLLWBSDAKVQOSQLEHZIDLXUYAAKIEJRKBWXOA");
    msg.ccount = 46U;
    msg.cnames.assign("AONTRVRSEDTZFMQCFHNALXYZLFGYDPPECUKCBLJKBBVTRPLVGNVPANRITJIVPXCVGLYUJEFHJXLQUSYTUQQTKEJTHSOPYCMWSWIUWUAHIBQ");
    msg.last_error.assign("AMJXYIEAFFZMHVYVCKHTJCJQSUNUIBTTAUBPXUPCBNHELSVZMZWKYZGQGVXLYKTFENYXOZMUNCGXQWQFGSKRCSWDGTENLRCNLKAZEZNSOUBDOSAPLROZIHSDKFWOHIUMDHCQQPWXSVPBKMDAMOETBZHIMHEPDJEHHGYVKLYPXZPGJJLARNQVTYR");
    msg.last_error_time = 0.885943583471;

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
    msg.setTimeStamp(0.942420823378);
    msg.setSource(25530U);
    msg.setSourceEntity(137U);
    msg.setDestination(2372U);
    msg.setDestinationEntity(92U);
    msg.mask = 38U;
    msg.max_depth = 0.390172805224;
    msg.min_altitude = 0.27678136372;
    msg.max_altitude = 0.608365286229;
    msg.min_speed = 0.443991129766;
    msg.max_speed = 0.982258440794;
    msg.max_vrate = 0.237428761809;
    msg.lat = 0.251040685931;
    msg.lon = 0.496649081153;
    msg.orientation = 0.6956882302;
    msg.width = 0.0138447116586;
    msg.length = 0.546823045571;

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
    msg.setTimeStamp(0.108915840879);
    msg.setSource(55004U);
    msg.setSourceEntity(61U);
    msg.setDestination(22345U);
    msg.setDestinationEntity(153U);
    msg.mask = 125U;
    msg.max_depth = 0.506557294337;
    msg.min_altitude = 0.0887205860166;
    msg.max_altitude = 0.533700109952;
    msg.min_speed = 0.14234153155;
    msg.max_speed = 0.652959528274;
    msg.max_vrate = 0.175976533497;
    msg.lat = 0.425970153419;
    msg.lon = 0.216009005444;
    msg.orientation = 0.743444712196;
    msg.width = 0.919302792448;
    msg.length = 0.81837909661;

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
    msg.setTimeStamp(0.327968226279);
    msg.setSource(46775U);
    msg.setSourceEntity(18U);
    msg.setDestination(38106U);
    msg.setDestinationEntity(92U);
    msg.mask = 60U;
    msg.max_depth = 0.117940754072;
    msg.min_altitude = 0.628151731297;
    msg.max_altitude = 0.631367938088;
    msg.min_speed = 0.495743010768;
    msg.max_speed = 0.435528524177;
    msg.max_vrate = 0.187945307975;
    msg.lat = 0.665510766299;
    msg.lon = 0.46343259064;
    msg.orientation = 0.865759819237;
    msg.width = 0.0582186038619;
    msg.length = 0.451640822885;

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
    msg.setTimeStamp(0.481917506588);
    msg.setSource(44945U);
    msg.setSourceEntity(174U);
    msg.setDestination(18775U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.01848811531);
    msg.setSource(19649U);
    msg.setSourceEntity(24U);
    msg.setDestination(13733U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.100001927425);
    msg.setSource(23622U);
    msg.setSourceEntity(239U);
    msg.setDestination(50644U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.589165987808);
    msg.setSource(60688U);
    msg.setSourceEntity(194U);
    msg.setDestination(64545U);
    msg.setDestinationEntity(53U);
    msg.duration = 56449U;

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
    msg.setTimeStamp(0.272032715153);
    msg.setSource(13540U);
    msg.setSourceEntity(166U);
    msg.setDestination(56784U);
    msg.setDestinationEntity(249U);
    msg.duration = 20499U;

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
    msg.setTimeStamp(0.187515635093);
    msg.setSource(2088U);
    msg.setSourceEntity(137U);
    msg.setDestination(8394U);
    msg.setDestinationEntity(95U);
    msg.duration = 9479U;

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
    msg.setTimeStamp(0.443076465398);
    msg.setSource(49749U);
    msg.setSourceEntity(219U);
    msg.setDestination(57468U);
    msg.setDestinationEntity(1U);
    msg.enable = 7U;
    msg.mask = 2716747096U;
    msg.scope_ref = 1924594941U;

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
    msg.setTimeStamp(0.556992898186);
    msg.setSource(14453U);
    msg.setSourceEntity(254U);
    msg.setDestination(38059U);
    msg.setDestinationEntity(52U);
    msg.enable = 15U;
    msg.mask = 3559825574U;
    msg.scope_ref = 3545476017U;

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
    msg.setTimeStamp(0.863368224042);
    msg.setSource(14730U);
    msg.setSourceEntity(132U);
    msg.setDestination(26524U);
    msg.setDestinationEntity(157U);
    msg.enable = 205U;
    msg.mask = 3707374609U;
    msg.scope_ref = 193572619U;

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
    msg.setTimeStamp(0.306256379752);
    msg.setSource(13402U);
    msg.setSourceEntity(154U);
    msg.setDestination(29351U);
    msg.setDestinationEntity(21U);
    msg.medium = 182U;

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
    msg.setTimeStamp(0.615103990754);
    msg.setSource(55777U);
    msg.setSourceEntity(123U);
    msg.setDestination(36698U);
    msg.setDestinationEntity(241U);
    msg.medium = 97U;

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
    msg.setTimeStamp(0.745538923119);
    msg.setSource(39553U);
    msg.setSourceEntity(124U);
    msg.setDestination(51305U);
    msg.setDestinationEntity(88U);
    msg.medium = 91U;

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
    msg.setTimeStamp(0.415779024695);
    msg.setSource(36848U);
    msg.setSourceEntity(75U);
    msg.setDestination(14458U);
    msg.setDestinationEntity(25U);
    msg.value = 0.422238596854;
    msg.type = 238U;

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
    msg.setTimeStamp(0.764019615999);
    msg.setSource(59092U);
    msg.setSourceEntity(138U);
    msg.setDestination(59145U);
    msg.setDestinationEntity(82U);
    msg.value = 0.322855876834;
    msg.type = 178U;

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
    msg.setTimeStamp(0.816353606585);
    msg.setSource(51965U);
    msg.setSourceEntity(45U);
    msg.setDestination(9486U);
    msg.setDestinationEntity(132U);
    msg.value = 0.395512118676;
    msg.type = 147U;

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
    msg.setTimeStamp(0.567225606625);
    msg.setSource(55071U);
    msg.setSourceEntity(104U);
    msg.setDestination(27741U);
    msg.setDestinationEntity(16U);
    msg.possimerr = 0.644315989181;
    msg.converg = 0.976343662426;
    msg.turbulence = 0.988914904655;
    msg.possimmon = 147U;
    msg.commmon = 219U;
    msg.convergmon = 113U;

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
    msg.setTimeStamp(0.301626441475);
    msg.setSource(37027U);
    msg.setSourceEntity(72U);
    msg.setDestination(53714U);
    msg.setDestinationEntity(173U);
    msg.possimerr = 0.609138536655;
    msg.converg = 0.934407462825;
    msg.turbulence = 0.154364098197;
    msg.possimmon = 221U;
    msg.commmon = 220U;
    msg.convergmon = 166U;

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
    msg.setTimeStamp(0.980712218818);
    msg.setSource(51747U);
    msg.setSourceEntity(128U);
    msg.setDestination(18326U);
    msg.setDestinationEntity(85U);
    msg.possimerr = 0.24426093901;
    msg.converg = 0.0417683595752;
    msg.turbulence = 0.981073699041;
    msg.possimmon = 208U;
    msg.commmon = 109U;
    msg.convergmon = 216U;

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
    msg.setTimeStamp(0.497484186172);
    msg.setSource(35140U);
    msg.setSourceEntity(157U);
    msg.setDestination(65376U);
    msg.setDestinationEntity(2U);
    msg.autonomy = 22U;
    msg.mode.assign("FFTRHWIYSFUUSBYTSZGBQHFMBBLHQXOEWZBMKLMDCKBKJQAVWQXRAKWDLPXJGPNGAPCLOSHZMJFQTDHTJIMEYTDUDPQUOQUIWTFOCHYZCPMYXVSKWCUKEKFGJMUNNAKPDRDQDZCUYAYGJYTNLQNXRBNRGIONVROXKUD");

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
    msg.setTimeStamp(0.425446347472);
    msg.setSource(59363U);
    msg.setSourceEntity(171U);
    msg.setDestination(61493U);
    msg.setDestinationEntity(83U);
    msg.autonomy = 145U;
    msg.mode.assign("IOMIQKTRJHBAEAHUALPTFBCSPDRURZJYHXYPMEKNOGOJEYFBUENIPWIBVNXDBJKDLQFBNNYYMHWKUBJTEAQYSCWIWOPWGMHWDPNOMTRFZXLKFLCJBCILHNANZUCDZVYGQHZCSQMQAKRENTMUPLEFVXOKRWFKDCFOHHLGERBNKYXJWVOICZAGDVFRBEFOTMAGTVREQZXPGGU");

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
    msg.setTimeStamp(0.702817478146);
    msg.setSource(38736U);
    msg.setSourceEntity(95U);
    msg.setDestination(64290U);
    msg.setDestinationEntity(218U);
    msg.autonomy = 199U;
    msg.mode.assign("EXVCQLXKNBDYPGOWATMBYKMCUSLGMXZIYBRYLXOERDJUHHZKUGOLTLSFEOFJKNJBVSCERTRAIAWGMPAWODDJFVSSWHGBVDY");

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
    msg.setTimeStamp(0.40864422361);
    msg.setSource(19306U);
    msg.setSourceEntity(145U);
    msg.setDestination(11682U);
    msg.setDestinationEntity(244U);
    msg.type = 4U;
    msg.op = 162U;
    msg.possimerr = 0.211684728622;
    msg.converg = 0.561743661798;
    msg.turbulence = 0.380538255812;
    msg.possimmon = 146U;
    msg.commmon = 37U;
    msg.convergmon = 212U;

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
    msg.setTimeStamp(0.115701707471);
    msg.setSource(39797U);
    msg.setSourceEntity(37U);
    msg.setDestination(6049U);
    msg.setDestinationEntity(78U);
    msg.type = 164U;
    msg.op = 20U;
    msg.possimerr = 0.404346658953;
    msg.converg = 0.714462020985;
    msg.turbulence = 0.845915502926;
    msg.possimmon = 243U;
    msg.commmon = 54U;
    msg.convergmon = 114U;

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
    msg.setTimeStamp(0.966754287152);
    msg.setSource(59470U);
    msg.setSourceEntity(128U);
    msg.setDestination(18155U);
    msg.setDestinationEntity(16U);
    msg.type = 66U;
    msg.op = 30U;
    msg.possimerr = 0.786855922539;
    msg.converg = 0.314323884934;
    msg.turbulence = 0.858782083181;
    msg.possimmon = 87U;
    msg.commmon = 37U;
    msg.convergmon = 188U;

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
    msg.setTimeStamp(0.563604854721);
    msg.setSource(12189U);
    msg.setSourceEntity(24U);
    msg.setDestination(52400U);
    msg.setDestinationEntity(55U);
    msg.op = 8U;
    msg.comm_interface = 122U;
    msg.period = 7063U;
    msg.sys_dst.assign("EPRYUPKWLPBOZXAXVCIGYGBZQIMJQNXRWJLXDKNMJEDWMQFVXRUNTBTYAZKFGYEMSGGKEIUVLUDJXWCPGPBBVAZUGQFQHNSAEZAMUSRRWJLSJLHVEHNOQCSBJDHDIHNQWITWDVHPZFLWKASWCKCOYDMTCRASHOUTFXJFBRTZBACKZDNSGYUVTRCDCLDVAWEHNTGOECFOKHUOUFOLYIOBMZQPRYHPIIZTNLNXTIMISG");

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
    msg.setTimeStamp(0.0960743937027);
    msg.setSource(58249U);
    msg.setSourceEntity(190U);
    msg.setDestination(57149U);
    msg.setDestinationEntity(102U);
    msg.op = 69U;
    msg.comm_interface = 219U;
    msg.period = 113U;
    msg.sys_dst.assign("RYEPISRHLUVGOTQXDZWNGFLWUCYRLIEYPSOHZTBRPBLSEDIOMBVDMNCHHDHXPZXFQXLFQVNEDBXKRFTMAGVKUDOMWAIJROZTKJCCGMQMWZYPRLURLGTGNFGAVSXLGARMINKMDECFGVJH");

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
    msg.setTimeStamp(0.172284832247);
    msg.setSource(12835U);
    msg.setSourceEntity(72U);
    msg.setDestination(13704U);
    msg.setDestinationEntity(117U);
    msg.op = 80U;
    msg.comm_interface = 170U;
    msg.period = 62436U;
    msg.sys_dst.assign("REUKZBQFUXWCHZWEUPBWPXTGOXBBVBJXIEKVJIUNMRLSNTOJTSUOHSWB");

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
    msg.setTimeStamp(0.662011488774);
    msg.setSource(25443U);
    msg.setSourceEntity(47U);
    msg.setDestination(38011U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.95179823404);
    msg.setSource(13927U);
    msg.setSourceEntity(254U);
    msg.setDestination(50510U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.268410101984);
    msg.setSource(8640U);
    msg.setSourceEntity(148U);
    msg.setDestination(41607U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.680401664778);
    msg.setSource(3162U);
    msg.setSourceEntity(250U);
    msg.setDestination(12179U);
    msg.setDestinationEntity(235U);
    msg.plan_id.assign("XYJRLYLBVVZGCKPFAGBFXAALS");
    msg.description.assign("OAPDXQKAVLOSXNANMVNWLTKSFNTALYYJGPOVPKMEOSOXSWAQSZVJGTSRWFWKCYDFPHYIPRKKOXWUZUGFOEHYFZDNHRSZRQHZU");
    msg.vnamespace.assign("OWMBKMYVJKYESTCHCIELDMGXNRQXBOXTZLCUNEJBSOOZPKGAFTIPAJVLSRESUUBXXNHYFVKWAMMLWPZEWILJLFJSBVZIVARJLOYGGIHDUSUNBMQAQYNUZFKZTKDKRATYYSIJAOBXQDZKXZFUMRWTDRPCNTDCWBOGMYXEPUPWSWCGIVJKEAUHXEJHEDJGHCCRTDOFECFPNIUBMHQHFHPPWFVQLXLZAQVWNVDHQABONOGZQKTS");
    msg.start_man_id.assign("LBHJOQXTQPDIRHRJHURTSWLIDVKCXGBQHVYBVZABFCEPSGEGTTAEFJWCHMFYCWXSAGVOFSPXRSVKEXSOBNPQDGDOHIQJZWUULZJYXHQLECDFHMJRGAURMMZTCKSVBMIOGTTQMOGXLUPAYNYIANRNQKZYAOIFCCNZZGDUEYVEUWHPEOXKXWQPWISNPAKQVBRZRPIMNFUSKKDPIDFAYFCBZDZYETFRMJJOVOIKNLYLCWULV");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("AGVKVMXNWZREFIOGFRAQPCDBVAHLGBMBPRTXPUUALJXDKHHSUNVJFUZEPIQDOSJNWZSVKXEKVLMCYBEOTMCJMLEDADUYRURBKCNAYWXRRNFUYGGKX");
    tmp_msg_0.dest_man.assign("VRIENDOTBJTUFZHJTZQJRWZKIAMASSUWHTRPDJMXSXZKBBWULJOLLOWQILXNMBREABXOUVCXJ");
    tmp_msg_0.conditions.assign("CUYHLVSRLWDAJCNVOPQGNLLZQFUICXZZAQDMRDYAZOHIZBRAHEDCKVVQPANQMPQUUQKMJMHBRWLPWND");
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.664099975575;
    tmp_tmp_msg_0_0.lon = 0.283138448988;
    tmp_tmp_msg_0_0.alt = 0.8587835411;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.470481047312);
    msg.setSource(47942U);
    msg.setSourceEntity(51U);
    msg.setDestination(9778U);
    msg.setDestinationEntity(223U);
    msg.plan_id.assign("VOWARZSZESBQZWALEWENYDQGSVKRKGOZJCAUMJTVECSXIPUOSRYOQGXEAXHUVSNIE");
    msg.description.assign("UDWAURGASOEJAHMITSYAFZPPQEXTYHZVBULSLYOJCQBEMUNMRJLYHSCDQZKDMVHOLZDZEUUZJTJYYWNDWI");
    msg.vnamespace.assign("XITRAREQNTWJAOLYFHXVSVBIQXLPNMVRSHAQLYYTYIWTKDGCZHQLFISKKKSKVUYEOZKREINOMKZIHTQNSBJIGPHANJGWHWWTLMHFVMQP");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("QEPCNXWOTUPWOUOIIHLXQIANDQNSWIIPNKVDKS");
    tmp_msg_0.value.assign("FSHMNLHKKUFIKOLPUSNOMHFMUJJZXYDZMPKUZQQITJCTEG");
    tmp_msg_0.type = 110U;
    tmp_msg_0.access = 19U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("LERCKFXEQZPNNWYIPYNGMRJOXGHVJPKIHKOT");
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.481569763015;
    tmp_msg_1.beam_height = 0.710472512226;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.656141765355);
    msg.setSource(39807U);
    msg.setSourceEntity(5U);
    msg.setDestination(13748U);
    msg.setDestinationEntity(110U);
    msg.plan_id.assign("COHYPFLWCPIUTZXGWSK");
    msg.description.assign("ZEJZOPHCHRRTAHYJIQHRQPCSAYEWMBWVNAHLQNWFEUKQDXVGNPLVXPVOXILVMQVKRLAKECAJIMTETQIXUESAOVTMUETVHNAULFDROZAARFGLNNJJCTGAYYKBLDJHHSPGNSM");
    msg.vnamespace.assign("AOYBGBXSAZPPEYCIHSIVZEHITSVWCSSAFJBUTQKHFDXYACWEAHFNQDTUYNRCOZPMHNMLDZQNRDNEBGHYMEWODITOZLXOCBXFSJHKEYUICNZEHOOQKWARIRIKLBMVUSYUVXTNVPTPGIGNMQKMQOPSLWJRMXLWAVJGQRXZ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("WQYCWWVFZAFRREVBCFDTEAAMOSSXAQPHHZAOMONTVGTIQHPMFJMNYHKCBCYOIPUKDJINFYBEBWZSYFAMQZIQBRYHEPGODGCJCVIKGCWZYAUEIXSWXIPUYNNABUGODOMSQQKYSZEVUUMXTFOKVJUHHPJRQQXGRCULLVLDHISKLWIUAGOJFNWMVPLDXJQZSFBEJMETLLDJHBTZLKWRWOCTXTKBCRXMVLBRJYDNEZGPLSTNIZGDNDRRS");
    tmp_msg_0.value.assign("TVJOBXJILPSUCENRAFASJPHQQVSZGGTHOOOETLAYYFMZLCSIYFMWTXQXIOCFJ");
    tmp_msg_0.type = 221U;
    tmp_msg_0.access = 9U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("SYDMKVMJTJPCNZBYNBFTFXYAYGIGNASHLJSNRRBUGCTAAVOOFTEOYKYQOVEBLPNWUPBEXVXAPLUMGFZERQSLWIZSSBLNQYMVCKTNUDPGLMEQAXQXJZBDJHFJDIPKUWCEDBZPNELWXRKSWOFFKCWNVUONDKODGJWJTRRZWOIXVRRQUSAGHYCKTUHHEYVPJDBDPPSVYAHUIRTKXIZMELQGHT");

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
    msg.setTimeStamp(0.708941538926);
    msg.setSource(9589U);
    msg.setSourceEntity(191U);
    msg.setDestination(46367U);
    msg.setDestinationEntity(213U);
    msg.maneuver_id.assign("NSHBQXTXNMGVOVEUHINFCWZPKGQPVVQMRDSSJUSTKMSPBFPRIJEKAJYFGPLYPXYBOFTVLHLLZYMOXGGSKQUNUDHVZIEXQVINESVOCDUOMZTHQUGMTWBPOWUAYWDJECQGAOJDR");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 45454U;
    tmp_msg_0.lat = 0.552001900055;
    tmp_msg_0.lon = 0.602692289214;
    tmp_msg_0.z = 0.803932645075;
    tmp_msg_0.z_units = 108U;
    tmp_msg_0.speed = 0.297748894323;
    tmp_msg_0.speed_units = 31U;
    tmp_msg_0.bearing = 0.664495708223;
    tmp_msg_0.cross_angle = 0.0148572564029;
    tmp_msg_0.width = 0.0620413105021;
    tmp_msg_0.length = 0.0902883245702;
    tmp_msg_0.hstep = 0.831222718004;
    tmp_msg_0.coff = 145U;
    tmp_msg_0.alternation = 194U;
    tmp_msg_0.flags = 201U;
    tmp_msg_0.custom.assign("GLTDQMVKDAWIILIHAOVUMYACQANJROWPKETNPDLIPIMWHCWSNRGPOZRKTYCUXCFJQBJBSGKZJFDHDQNVYBBERDBOZEULLKIOEXPFYVKTSJCSTI");
    msg.data.set(tmp_msg_0);
    IMC::HistoricEvent tmp_msg_1;
    tmp_msg_1.text.assign("RIQEWQKYJKUDEOOCVCWQOTMUEVBJNJTGIITULRKHEMAQHAOPTXJBVXAIEMQBVZDSIBQXGORHZVVUDLXCFNXEKQLRDHVCNNJYZUJNQRBTKKSYJYFGPKIEYVPHZZPKOGJYGZQUGCESSWCFZHLATMDLZALCWPIFJDAJXTVWZQEYCYUCHYRDRSUFLPLINAWSSAORHKGZPCFLTF");
    tmp_msg_1.type = 243U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Salinity tmp_msg_2;
    tmp_msg_2.value = 0.984487554575;
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
    msg.setTimeStamp(0.330116119684);
    msg.setSource(53558U);
    msg.setSourceEntity(205U);
    msg.setDestination(36261U);
    msg.setDestinationEntity(238U);
    msg.maneuver_id.assign("CDDRJGSNOKUYPCJLHSEFTPNDVICOMZOWHRFFDOSRWZBKVBJEJHUXLTYICLBKWSUKIRIXNZDPXDOVFCVWDOVYZIJHPFAVNMAOPZWCJAXJFMKSBZINLUTXLEEZBFWULPHNHLEGMYGUMRERPXWTWQUZQACXSOVJTIXIBDNRCLQSBKFQNVUAGBYQVKTHTNRHGMAHRBMFSLHVYCQQMYBFQETYMLSKYTWRSOAWCKZXUEIPDYJTZEQXPGNK");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("OIPMFTCAYTCAXQYBZWBMLZKZPNTSDBRHYFZLJMBQIMPJOIZGTUWYDPKFGHPOVIQMNRRXDVYLDGANPFINHCZSSSMXHYVCHIAZOHOCLEGPEKUQATDEYTAAAWOJLUIBOAQVVWMHHRORQXNEMTCRWLBZUKBXVLDVNTURJWUINGNLJDESHSVJCKXOEGUOLKCFRRCYMSNREXFGDXDPAQKMFPSGDGVNJQGXEWTUBSWZKEQPWKLQEKF");
    tmp_msg_0.formation_name.assign("WKKGGOGXSRUKNEALMSEWDNKAIWVYTJIHJVHVJNRJRROTBXTQCWEGWAUHHKYUFGMVFASQPPBRHQNINLJBVW");
    tmp_msg_0.plan_id.assign("XTMTIXVVBVKEYRVQWLNGWTGSPZAQTQBCXBYGKDUIKSVVIWQQXMOCXSRFNBFPLPCKUPAWMTHOYELRFREWJKDDVKBHJSZLGGLD");
    tmp_msg_0.description.assign("NHRLJVPIXLAFU");
    tmp_msg_0.leader_speed = 0.0715096314846;
    tmp_msg_0.leader_bank_lim = 0.935777011778;
    tmp_msg_0.pos_sim_err_lim = 0.504552056311;
    tmp_msg_0.pos_sim_err_wrn = 0.168732896339;
    tmp_msg_0.pos_sim_err_timeout = 6708U;
    tmp_msg_0.converg_max = 0.00783606518148;
    tmp_msg_0.converg_timeout = 14474U;
    tmp_msg_0.comms_timeout = 30691U;
    tmp_msg_0.turb_lim = 0.956470088263;
    tmp_msg_0.custom.assign("PGDJLMTXNKAVVGKVPSEEBVJYCJMMAZXPHEXADQDBGPMUSCHCSOPNFPSFRUXDPDYYKLWOCYTRJZITTZKJESKAGUWNLRFNDFRHKBUMSYQAQWDPOOKIFFCLKIGLZAFMOWXHGNGTFJQOWCLQQBKHCBPZTSTYROVBGELUNHAUJIQTWODMOLXYSXLQBHFNYVBDRXEHVAAZJEGEBUKWGNXZIDETSRMEZPMOAWJZUILJRYNQRIZNI");
    msg.data.set(tmp_msg_0);
    IMC::IdleManeuver tmp_msg_1;
    tmp_msg_1.duration = 14574U;
    tmp_msg_1.custom.assign("CYOPOVVYMDHKQMQERTZJTCWORPPJMWXAWEHKPKEWNGBJRRCOJLDZUCKLQYJAXJGNIYBTSBZHYRFKONBLPUKIRARWUFQHWNYTQAUIVSNSTFQGGAJPPXCAUHBDIXLDNJHFXSIURZSGXGCRALLLAKVTVOJJCUEZLBDENOISGEZUDHOMRMDSKTEWQXGGOWNAWMMVTDIXOVNIBIWTYHFZZVVCPECQZFD");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::VehicleFormation tmp_msg_2;
    tmp_msg_2.lat = 0.119260449877;
    tmp_msg_2.lon = 0.397134705222;
    tmp_msg_2.z = 0.81525808233;
    tmp_msg_2.z_units = 118U;
    tmp_msg_2.speed = 0.633721031133;
    tmp_msg_2.speed_units = 4U;
    tmp_msg_2.start_time = 0.763916348655;
    tmp_msg_2.custom.assign("YMQEQGFLFASPTWUDJFDABBVOTDGPXORUZRQPNWYANFXCRFDTRSTODKXYRJVKNSGVFXRCBHQMFGIZCWZFKCQLCTKTPWQHUCPOZBISVSGENKLPPTZWIYKHUQZDNJBHOXKYWGNBSDMJVLTPFASXIXUQEMCLGHRTOEIN");
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.72800394549);
    msg.setSource(45618U);
    msg.setSourceEntity(212U);
    msg.setDestination(32217U);
    msg.setDestinationEntity(10U);
    msg.maneuver_id.assign("QPNOAVFMDIUHZPTIKJFDTPDVSVACSOBPSTWSTSGQCFRMKHBOBKOEUPRYENIDAICWRAQNFRAYKLFNUWXSUMWWZNNAMGKZRAMMJTDAGXPTEHEZFYXEZQAHOYCILKDYPCZBLZXXUQVZRGSGLWBLDJQKWUHIJVBOLYUVLWZFSGEFIHNTGOMQHDYVKETBX");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 62186U;
    tmp_msg_0.lat = 0.778804680531;
    tmp_msg_0.lon = 0.643440590922;
    tmp_msg_0.z = 0.378497367193;
    tmp_msg_0.z_units = 9U;
    tmp_msg_0.speed = 0.241009458789;
    tmp_msg_0.speed_units = 42U;
    tmp_msg_0.duration = 49609U;
    tmp_msg_0.radius = 0.0404309953306;
    tmp_msg_0.flags = 2U;
    tmp_msg_0.custom.assign("MKNXBZJTIUPIIFRGDDLJSCUHCFJCRNHKXMZLKSKNAQRDPPOCHCSJRLZQMEVECLQYHPCEAARAGNDPBJMZBTBRQKZURCDATYOAXXXTMVPVRINFIKLWOBXTRNZAEJEEDKEHUPHSOWIUDKOTNGZABYRGWSADQYVUYMDFNQWSEPFMTGWWXYQHWVQGLGDMWSQLUVGN");
    msg.data.set(tmp_msg_0);
    IMC::AngularVelocity tmp_msg_1;
    tmp_msg_1.time = 0.116657218453;
    tmp_msg_1.x = 0.452274752538;
    tmp_msg_1.y = 0.566510134439;
    tmp_msg_1.z = 0.337965061908;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.550581039342);
    msg.setSource(55641U);
    msg.setSourceEntity(218U);
    msg.setDestination(5190U);
    msg.setDestinationEntity(101U);
    msg.source_man.assign("WANQFRDTOWZKBCDZSSHSREROUODJINQFPOZYQBVIAUUJCLVJCGDUUWZDHEPYWAMFCYNSSDAAEQVXPGLTGTXMZQCRKKEMINDP");
    msg.dest_man.assign("IHYDXBGDUBFUGLZAXTBANKOCVHORRSKRETUAPISXAUWTEIGFPANYRGQQQDJKKEFFYGJKCEMUZUCVYSSHXYURJLPWHPFEUEDYDGKIUEGVPYRYTWSTBHLBPHRTNTPAAPOZGKMCKIZHZUONWVVJAIQDLCGHFZOSRLDTBKCAJMXNQEQN");
    msg.conditions.assign("MDXEOHPASYLUAFFJCWTBCMPGSRBVRBBEULMLXZSBITSOQJVMPPSWCIQHYCZSGEORIGAZKUUGZAHGPAMWLHTOXIHIINDWDRHOTJFANWKVVNECDJGXEXRIHRAPNKPYWFYMRNTDDYFWVTTJCRILCYCODMKKKDEDXTQYSULAXQBFW");
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 82U;
    tmp_msg_0.value = 0.629281063463;
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
    msg.setTimeStamp(0.0153452557687);
    msg.setSource(62344U);
    msg.setSourceEntity(238U);
    msg.setDestination(5343U);
    msg.setDestinationEntity(166U);
    msg.source_man.assign("SZCFNFCFIRLFBRDKSBWEOZIIXBDVDBSPNRJTFTGQVKFWKJLRWSVNHVOEDQXZACODAMAABSUOPRMZDSQKGBQUYNPJPZVUYNAHFBKDMHMCEFJLXEOXTJENNYQCMGIXHBUFPYMRKLQXBTWCLAEODTDLJMRWXGCTNHESBOKTIAGHSIOUPKUGGATEYQVWIWJTWXHITZDGUKMIPHLVWPZYHMYUGUAYIVSFWXRRPO");
    msg.dest_man.assign("BKNVHCPZLYMBFBYEVRQTAORGXMHVREKUSUDRWTSMIBIFZGETOQSCHXRHIFYQORVAZCDEQMPUBZCCYYXIEFDJOAOJMQUHIUSSNZDCRFJEYAQDTOTFTAZPGMGXVLF");
    msg.conditions.assign("RWSWGGOBVMZRZIDFLEXYACKOJYQSMJGBRDFYMLNYFCMOCVNVRKOOUUJIAMMAUJUKWAWLEAPZIYBZUOCKEM");

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
    msg.setTimeStamp(0.639595727154);
    msg.setSource(27227U);
    msg.setSourceEntity(50U);
    msg.setDestination(54209U);
    msg.setDestinationEntity(195U);
    msg.source_man.assign("ZZVMGOQMOKKSYWAWUMVCMLXEPOMXZJZSZFHGBGYJPFTHICNVBNCTVUDLTLEXDIVOYIKLZJANJYSQWQGGXFUEJWIUJADMKCRVGHXYNYPBJZUPYTCKFODWAPQFGOIGCRHTCBCIZHDERWKEACVASBQMBUHUEPSPGILFJPLNLDKVRYRJZMKT");
    msg.dest_man.assign("KROPHCGUENQWFACWACMKDRSYNXLCWXDL");
    msg.conditions.assign("RMEMONSZOJKNWPCHUWIAZHUZDJCSRPHJIQUXAEKXTGNLDZZCXLYLTFPSVVQXXGNKHRPXOENVVVJJMKBXMOXOTAPTTUDIGTPQOMWLGUBMNQZROAZYPRIDBEIKITPZGMYECUK");

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
    msg.setTimeStamp(0.256766987758);
    msg.setSource(24477U);
    msg.setSourceEntity(118U);
    msg.setDestination(3938U);
    msg.setDestinationEntity(198U);
    msg.command = 132U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TMTGTTQPJEHECOADC");
    tmp_msg_0.description.assign("IDFNCHQBAUGUZYYSZTDOKJGBPGGEHVCBROLEURJQVDHJHBWKQLBKZMRIPTIFKYYXEAPKNQPWRSICOTAVCZDDKXMSUOMWRNULYRPRTTCXWQSHRMOXLNHNPYLQOYUBAVFEQHFCWZWTGPUJYSLEUKVZTFWATPJGJMCZMRHBXCWUHIGIKSIMLRADNBADEOWCOGO");
    tmp_msg_0.vnamespace.assign("ZFRVBUSAIHFXBDIVYCJZDACWHXUARDEBKFNXQZMNPINBFWGJVODKZT");
    tmp_msg_0.start_man_id.assign("HOEGXVYDZCGMKUZIBUOLUUQWRTSYYKPERPEXHBQSYXSFCMBXLPOWVRDSALW");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("VWPEHRYQPKTNXYOSQNIQWNVUYJHMVDMKZDWDHTZR");
    IMC::FollowPath tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 44082U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.656626104338;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.344449784731;
    tmp_tmp_tmp_msg_0_0_0.z = 0.349796154414;
    tmp_tmp_tmp_msg_0_0_0.z_units = 8U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.662255098231;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 230U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("KMKVPLMTXXXUTWJHBZRKQOHSQSDCRESFBYEEOJUJVZHWILWOXYOLVEMGRSMVTFBDZCUUXVBWUYCGMCJLMTMIXDKJAFFY");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::CrudeOil tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.129385787887;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::Drop tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 48188U;
    tmp_tmp_msg_0_1.lat = 0.402722598882;
    tmp_tmp_msg_0_1.lon = 0.838831003888;
    tmp_tmp_msg_0_1.z = 0.522317098266;
    tmp_tmp_msg_0_1.z_units = 162U;
    tmp_tmp_msg_0_1.speed = 0.0184959008188;
    tmp_tmp_msg_0_1.speed_units = 151U;
    tmp_tmp_msg_0_1.custom.assign("KADEFPBZEXIUBWFFRCYMBTAYQETSTLBYPHSZKEVRMCGNDQXYONELSPOEBCRTPQLGXVGJIHEW");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Pressure tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.53864845462;
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
    msg.setTimeStamp(0.614383855122);
    msg.setSource(8964U);
    msg.setSourceEntity(9U);
    msg.setDestination(11436U);
    msg.setDestinationEntity(254U);
    msg.command = 141U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("AZAUPZPYLJKZYSMXMVMBBCQQWDPKVUTDJJRZUHMDCMAWFNTJDXMBGIYXRYGNPBQPIEQXIDSTZZOTXAGPECNHXQVNSDYNEJCEFGCJOHTAROJGHCCMYLRGHVSAYUYITOOCGBWTNDBJRHVHNOEBLMKEDSCARELSKQUWMFBSWVLKKOQHLZFINNMTKWCAVNWXKZFSJVLUFBTOEZHKIPEQGLWXITWBRF");
    tmp_msg_0.description.assign("RVNRHXKYCTQFSVXDTCTKGBXANJBTTPDOLUPSGFTIHZNXEIOWWZONHVLPZVRCGYOPNCMYQXKNZQSPDJOUOULMCKMFJFCETKHLBAORMXLZYRRPSYPPUKLVIVDPYVWFWNRADOLHJOFNHXMUQMEBWSYXJSMUEQEZKOIHNAQWRWUJHFEIQQDCGBSMRDGABIKDPIDESEEUTGKYFTVUQEGNAWBWBMZHGAGMYCWTAALRLSYAXZICLFDCKUQZVIGJISJJ");
    tmp_msg_0.vnamespace.assign("VMPUCBHTGXKCQOXWJXFSPQOJIPTSYHHDENQWRHGDQWRWXWOGCILRFUPUBJBLNVZAZWJCICUKMZZNFOVPAIADMBBPYQIKIFIDSJADBSUOLECTMRPVJSTVUMYZQZNSRKNVARUCYKGHPSTNKKIIRRXMYRBYHLOZAFFRTOXOPKWBJHMGJETPYBMLILLHZESUGDQLBCETVXUFONATWGXNGMJCDYEDVNKWQGFQDEWGLEYDTVXFAAAHJCSZXM");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LEKADBOFWXGMOFBVVOFYWYAMXPXWALCFITSVJOLVMDOPEXXDGKVFCLLSQRUJGUASKMOQDCHHJMKUWNACUHGYIFRWVHPKVZKECKVEQMKQANYIMUDGIADBDHXIZWTWTYXNGFTSTRNETJYRZRDNNNSDQZCSZPZAUOJQFHJBPCBCXMMHPQGDBELQFNBWSAJNQESPGEHTTF");
    tmp_tmp_msg_0_0.value.assign("KMMXFAXRDYQTTHUHAGWSYSLGGPCFZQGVZCOSBUXUICGFWKOBVJJNYCCKWLRUZPBOUXGJRNXWRHTKHUYEPQLQDZFRLSJPBICXDYZKDKNEFTTGOLTOIKMFWQKZWDEAEHIDMSAKMJNEYWNADLRMNVVFQVQVYFXHDTEHZBIWJJAUABJW");
    tmp_tmp_msg_0_0.type = 52U;
    tmp_tmp_msg_0_0.access = 168U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ZHIEYKIYONOBAVSPXXFJABKKSGKQGHWPKEQGAMPLYBUQVGBVWMUDZQZDWAHRRXZNPSQDWIDXCYMXASEXECAVXZTRHPIPHJPBDSNLWBKTKLVLFNICTKSFOXOGLZWLPODRYOUNCCFYWUMTUBHSJZIMPJZYRMWTCGEPGQTMQJRVNHWYAFCGVXIQHRSABJJYEVLZIKQNGXRTHBZVCUFFAYTWRCBLFDKJLFLDGOT");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("ESAMBNRLFGITZRVMDBXXHUPBLFNTOOAYSFHCRVBBHNWQ");
    tmp_tmp_msg_0_1.dest_man.assign("YYDGHKXCZLNISLOHFGNKXPAXSFEPCKMOFSJNXVWDTCEFBMCDZIWRRYXGSTHKZHWYCSGGDXOIFJWIEQIVNRFKAQXXNLLSGYJXCSYOPZTUDIHUYLVGWKCWLFNWNBBDQHPLTGOJRAQAVYFBRICRMIGJKPMDDTVUBU");
    tmp_tmp_msg_0_1.conditions.assign("EHOHSKRDLPJAHMDOMBNMFUFSYTLBRXYJWJGGPAPZJQVLEKTRYTBJGLXOVZWHAJSORALEFPVTFQPCOYAZOIS");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Teleoperation tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.custom.assign("ZGVAQSUEZTTOWYAIKSIBOYXJRULIDEHZWZVDKSHZOCNMNUWYQEAGSKYDILVKXOCOQEBUWTBBRFNATSFLHXXAKGUIHKHFJPRBBRPXJWWGUJLQKSTNUXCWYIMRHCCNPMRYAYDDJCQGUZQWPLEDAJNVZETXDHLBXEOGIRGEGXASFCVDDYURCBOLOVCKQFMMKMKXSNNZIFVFA");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.764079991665);
    msg.setSource(51897U);
    msg.setSourceEntity(107U);
    msg.setDestination(35426U);
    msg.setDestinationEntity(244U);
    msg.command = 132U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LSRLTSWXVZMBUWOWTANJOCGVLMNTMYAYIVCVINJJKXEYFVGQDXUDCRTHWTKIEYANSAITTFFAUPMGDGXFDIROZEQWJYYBICKBOEJNQFTSKHPQSPDPLNOCHLMKJUWBJVCWHJKROPD");
    tmp_msg_0.description.assign("DGPEXHESCSPWJXIIZBTQWZBXGTOBJRVZEBWLWRMOXEKYSDUJPTHCIJTCUPPYGKVTSZMOQQEFQBJZAGZLFJWTVXEHVPUFAJBHPNIEQAYCKGOKCRNVOZVFOGQUOMCZSEFBNGHKMLYRRNIHDCAYUNZKOOEHDAFHDOUIPMGQLBYUWTNYGXWMDRWABCLVMXFMXTUBDPVMUDJSLVLKDJALQAWIFQRLCAKNYARRUSNJDNNITZFHKL");
    tmp_msg_0.vnamespace.assign("VLTOYOVJYOORXEHMQWRQIBRMZKNHLGGBIOANWSJQFCPJGEJDTSIGDH");
    tmp_msg_0.start_man_id.assign("TSGOLDDMBDSVWCNGULSPLGSENEREFELIHTNFJFM");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("NZUZIGOWTHXNTCUWLWDAFXGQVUMGACHBBPNAXAXQDRLAIMVFXNTYUMQODRRXLSDUGNPHXVQWSPEQWNTLPPCWMGIYJPPSTKCGLGDETCXOFEOMRMRYHRYEUYGFKKOOAS");
    tmp_tmp_msg_0_0.dest_man.assign("ROAVADOYDTPJIZNIHCOWPIAOM");
    tmp_tmp_msg_0_0.conditions.assign("VQYPXYIZGIFACNHBVNOQNIGYRGLGSQZTEBBLTBDETIDEUXXULFMPWAPVGEXJEFQJBXRWOQUKPGTPSMYKJYMJODJRAHMELPSZFDBBVWZCTVKAPCLQALQXBCZZUDVCCOYNKTDPAYNDNZYF");
    IMC::TrueSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.552391651303;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::FollowRefState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.control_src = 636U;
    tmp_tmp_msg_0_1.control_ent = 140U;
    IMC::Reference tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.flags = 135U;
    IMC::DesiredSpeed tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.value = 0.227506822358;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.speed_units = 78U;
    tmp_tmp_tmp_msg_0_1_0.speed.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    IMC::DesiredZ tmp_tmp_tmp_tmp_msg_0_1_0_1;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.value = 0.23468054975;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.z_units = 160U;
    tmp_tmp_tmp_msg_0_1_0.z.set(tmp_tmp_tmp_tmp_msg_0_1_0_1);
    tmp_tmp_tmp_msg_0_1_0.lat = 0.257024583891;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.185873568733;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.0656981852659;
    tmp_tmp_msg_0_1.reference.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_tmp_msg_0_1.state = 39U;
    tmp_tmp_msg_0_1.proximity = 226U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.610484813634);
    msg.setSource(42615U);
    msg.setSourceEntity(179U);
    msg.setDestination(1029U);
    msg.setDestinationEntity(16U);
    msg.state = 70U;
    msg.plan_id.assign("LTVTOQNAYJHQYXQBOXIPLPSPEZXAZCILOJDUGFJAJFMAAHHBSNIQQMBNLDJUIWZDYSFUZRHSHGRFTBBWLLQMGNIRECWEGZRLFXDFPA");
    msg.comm_level = 221U;

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
    msg.setTimeStamp(0.729677000628);
    msg.setSource(30460U);
    msg.setSourceEntity(23U);
    msg.setDestination(27056U);
    msg.setDestinationEntity(228U);
    msg.state = 190U;
    msg.plan_id.assign("FHGKWLJFAUSAREBRBXDOXJSEHQTLVVZSUKSRFCDRYVTPPYKHPEXEMQKKHBNNMORLNFASYNRE");
    msg.comm_level = 16U;

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
    msg.setTimeStamp(0.78495460195);
    msg.setSource(60953U);
    msg.setSourceEntity(14U);
    msg.setDestination(7225U);
    msg.setDestinationEntity(177U);
    msg.state = 130U;
    msg.plan_id.assign("CZYOMAXCAUEQPEILCLHOOGDYJBUPNKRNRQWMEWIDIGYESFZEZBAAFXZEUZMFQQURIYGPRVLDYYZVAQLGHLMSR");
    msg.comm_level = 50U;

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
    msg.setTimeStamp(0.680424415056);
    msg.setSource(64992U);
    msg.setSourceEntity(209U);
    msg.setDestination(619U);
    msg.setDestinationEntity(219U);
    msg.type = 64U;
    msg.op = 4U;
    msg.request_id = 54633U;
    msg.plan_id.assign("LNLYXIVPQZSZSPFMAXRHXBJETRELUFTPTVSKOZUKMJBQXEQIIZBTLAAJVLVNSWGOVUYUFSKYFNMDFEGJDNHALTSIXWUMTURUAEJRPQSKPBFPWOOMBZEQECRBGNNRDOZXHTAKZNQMLKITYUODCRNRKBXGWUGU");
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.467837575583;
    tmp_msg_0.lon = 0.85155785593;
    tmp_msg_0.height = 0.00824227602189;
    tmp_msg_0.x = 0.305052000857;
    tmp_msg_0.y = 0.0449385712648;
    tmp_msg_0.z = 0.945378727339;
    tmp_msg_0.phi = 0.892552456159;
    tmp_msg_0.theta = 0.838803893136;
    tmp_msg_0.psi = 0.10844262829;
    tmp_msg_0.u = 0.788638997069;
    tmp_msg_0.v = 0.480051199597;
    tmp_msg_0.w = 0.17668501195;
    tmp_msg_0.vx = 0.448868689356;
    tmp_msg_0.vy = 0.0423682087847;
    tmp_msg_0.vz = 0.717561686218;
    tmp_msg_0.p = 0.335578167955;
    tmp_msg_0.q = 0.255018066169;
    tmp_msg_0.r = 0.814781071683;
    tmp_msg_0.depth = 0.725769985936;
    tmp_msg_0.alt = 0.365804373991;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RJHLVABDCZNDQOPPEGSJXWMUKMQDQMEYDVNPVXETFBYYSKYDRUGATFTCUHDXEARPFJOYAVTWKBNJRRHUIOWOELCIDLISATYHHPJLMXNUCQZQJLLMODKIPGBOMWWVOQSFRXCXKZLSUCFTBSWEZCMENIINBTFXFCSVEGQWQAKGJZAENWUORTKWCIHZSUYPTNLLHKOMOXNRKTJHFBZJGBUHGI");

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
    msg.setTimeStamp(0.63249171613);
    msg.setSource(8396U);
    msg.setSourceEntity(132U);
    msg.setDestination(57283U);
    msg.setDestinationEntity(35U);
    msg.type = 87U;
    msg.op = 62U;
    msg.request_id = 53937U;
    msg.plan_id.assign("JTUTXJGVBMKKBUSOYXCUSZNKZHUKSUMOWZNGREPQGDJLLFVWOMYYSPRGAVMYNUBDHCCZFPVXLRXGMGQEOHAIUZPQJIVFWETXMUWTLGIAWPCNVPYPDEDKFZMIQWX");
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 2939743611U;
    tmp_msg_0.messages.assign("NEUREVQYBBAVBASMSDGOIDRHLBVBNMJKNEWDOXRBQOTFPXSDKWPUZHCAXLKPPFJFWEUBIMEOHDNDYPXMTBY");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KBINJQRAFNZBIUQYDPCRZSOZNQEASEWJFQASRCDNMGZKFAURCCHRJGOIHWUSSEQUWDXVRHFQTTDEHVMXTORXGKNFLHONKWWUMPRLBVXPISRKKQFDUNFUTLSYDBYJNGCWIZULMZLKAZYKWMGWPYJILIZFYGPOJHNONHVICUOBYTPCVXPPISFOSTATVGMLTUOYXDVDJPJG");

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
    msg.setTimeStamp(0.409633778586);
    msg.setSource(43908U);
    msg.setSourceEntity(223U);
    msg.setDestination(47743U);
    msg.setDestinationEntity(106U);
    msg.type = 3U;
    msg.op = 228U;
    msg.request_id = 27943U;
    msg.plan_id.assign("ZYSKLVPSDRVCDAPSUYBLVWXGIWOYJOHVMWMAIOYEKQKSFRTKRNCMUMBFUZWZYJHYOQBZHGXEVRKYHODLBILTNJJGTUNAKDKAQDGOIFSWIVLZYQCNPSCKHHLMPTTXEMCFHLUEHGDEXHKPXNMMV");
    IMC::ReportControl tmp_msg_0;
    tmp_msg_0.op = 153U;
    tmp_msg_0.comm_interface = 93U;
    tmp_msg_0.period = 62446U;
    tmp_msg_0.sys_dst.assign("QVIYDSRDZQYVXUAWQMEJDVZMOPECWNLJVXJSYALMZVNFYKESDRWZM");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QZPZYTSDUZQQOBKLGJEWLBPEVHGJQHCWGBX");

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
    msg.setTimeStamp(0.932368341576);
    msg.setSource(35156U);
    msg.setSourceEntity(166U);
    msg.setDestination(47370U);
    msg.setDestinationEntity(130U);
    msg.plan_count = 31720U;
    msg.plan_size = 1344536213U;
    msg.change_time = 0.897396269316;
    msg.change_sid = 28013U;
    msg.change_sname.assign("OTLYOGLUEAXLVZJWXQVKOCXAMFCDSRTJBJERQIVIVZRWXGZGNKGMLQKFHVCJJSZMMEPQEDBOSSWZZRYDZCMTWTCBYQSGOOPUMNMEFGRROYTDWQPOHIULJROJUKAXSYGHMPMUTNSDANRICFQOUDAGKTXAVIWHVBALIYITULPLVUAPHIBQCEFSFGDUUYKDYKZVANDLNBBIQENSGVPBRHPAWXYRFEXHHQNFDJLZHHNWCKWKNTXESIKEP");
    const char tmp_msg_0[] = {-54, -26, 118, 71, -100, -97, -124, 28, 106, 18, 63, -29, -18, 30, -36, 82, -56, -8, 26, -66, -89, -10, -56, 71, -58, -13, 37, -62, -78, -93, 31, -20, 56, -49, -108, -83, 78, -35, -117, 71, 14, -54, -37, -51, 56, 17, 78, 118, 55, 47, -86, -29, -26, -45, 9, 45, -124, -62, 110, 125, -67, -40, -54, -56, -46, 46, 117, -36, 29, -25, 71, -75, -60, 35, -115, 38, -111, 97, 31, -41, -116, -85, -54, -49, -61, 58, -100, -24, 112, -103, 39, 69, -26, 45, 23, 18, -98, 84, -105, -83, 83, -52, -104, -35, -45, -128, 52, -43, 95, -10, 55, 126, 82, -76, 30, 86, 126, -12};
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
    msg.setTimeStamp(0.922523374916);
    msg.setSource(18829U);
    msg.setSourceEntity(5U);
    msg.setDestination(32760U);
    msg.setDestinationEntity(105U);
    msg.plan_count = 25613U;
    msg.plan_size = 138714779U;
    msg.change_time = 0.306238732816;
    msg.change_sid = 62381U;
    msg.change_sname.assign("VROJMTMAQWVSLRFWSCEPWBQCYKRSVIPKZCDEEMVIRGKMBNTBWFGLBZUHPQEXLDLJYQURZSISEBAHXOYTAUFVUSTIKQFCBRKUPYBZOOOWCFMYOSPDKHQXKFXGYIDGHWHVZAOQEGJMJNGOOZXKLFRETJIXKAGFDPHEYIFWZVCVREDJUXQHPLJDAJNBB");
    const char tmp_msg_0[] = {-111, -8, 15, -82, 15, -68, -94, -90, -57, -120, -16, 122, -82, -50, 84, -117, -41, 65, 120, -89, 70, 51, 79, -60, -75, -114, -51, 95, 76, -73, -101, -94, -5, -83, -21, -125, 111, 40, 91, -105, 51, -88, -1, -63, 72, -94, 42, 101, 18, 92, 26, 5, -65, 107, 0, 108, -19, 125, -44, -26, 15, 9, 60, 38, 106, -5, -33, 83, -92, 76, 72, 38, -15, -41, 57, 48, -102, 118, 80, 5, 55, -80, 121, -22, -127, -20, -15, 50, -37, 32, -57, -100, -30, 101, 122, 122, -43, -6, 31, -114, 90, -15, -67, 36, 17, 81, 83, -7, 88, -78, -52, -127, 122, 16, 17, -1, 88, -105, -96, 126, -37, 104, -32, -15, -63, -55, -95, -88, -43, -40, 39, -34, 18, -35, -107, 109, 33, -51, 121, -95, -116, 71, 113, -91, 72, -48, -76, -29, 87, 19, 39, -13, 17, -94, -93, 9, 89, -84, -90, 92, 52, -43, -35, 5, -62, 23, 126, 108, -117, -117, 76, 119, 103, 121, 12, -112, 9, -66, 29, -82, -1, -112, 26, 67, 98, 84, 101, 59, -113, 68, -94, 112, -18, 3, 65, 21, -36, 35, -89, -100, 6, -33, -80, -71, 20, -17, 67, 83, 66, -85, -13, -9, -37, -2, 66, -65, 116, -56, 70, -102, -54, 11, -44};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.085341609477);
    msg.setSource(23969U);
    msg.setSourceEntity(203U);
    msg.setDestination(34526U);
    msg.setDestinationEntity(210U);
    msg.plan_count = 10384U;
    msg.plan_size = 1700052715U;
    msg.change_time = 0.359907541814;
    msg.change_sid = 41754U;
    msg.change_sname.assign("XRKVFDZJSIXQNMXDZAOOYNMGDJTXIWVDMZPFJAGUZXFMWGRDOBQHAHPELFRTAXCEFRBFZIVUNSQIGSTBFEOQYJLCVAOLEEOUJNPTEYWASWULAKQRHNDCBSHLG");
    const char tmp_msg_0[] = {-110, 126, -116, -80, 95, 44, 1, 22, 36, 12, 6, 27, -19, -19, -90, 124, 32, -58, -64, 116, 24, -18, 37, 42, 91, -39, -78, 95, -96, -110, 48, 93, -26, 68, -106, -8, -66, 78, -64, 37, 24, -33, 97, 20, 72, 57, -16, 38, 2, -51, 54, -21, 105, -11, -59, 44, -110, 80, 8, 109, 122, -124, -54, -44, 6, 83, 105, 94, -75, -74, -44, 112, -12, 99, 39, 79, -79, 107, -54, -110, -68, 41, -112, 65, -124, -91, 112, 76, -59, -50, -37, -30, -36, 28, 73, -26, -89, -48, 3, 125, -109, -122, 53, 117, -94, 23, 16, -14, -37, -79, 90, -34, 120, -93, 68, -81, -80, -116, -70, 7, 31};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ANZJEOXMEFRIPWBFFQQWPEXERIWQYUYHKRNKDPYVNGQWDXWVWXHVSSMULEASCHFRAJGQWJTRVGIYNGGYYMLURZONZAZUDLUJHJASZIKTLVTZPGWBBCPFVFCMDSFCPDKTISMIHXGUOQBCGVVNF");
    tmp_msg_1.plan_size = 59737U;
    tmp_msg_1.change_time = 0.937985587407;
    tmp_msg_1.change_sid = 35944U;
    tmp_msg_1.change_sname.assign("ELOOHUROEVZKHFFKWYF");
    const char tmp_tmp_msg_1_0[] = {92, 3, -10, -99, -78, -4, -63, 9, 16, 65, 2, -30, 88, -62, 63, -39, -104, 46, -50, -64, -68, -35, 121, 4, -83, -107, 6, 65, -10, 114, -77, 50, 53, 85, -103, -120, 36, -56, 46, 68, 26, 25, 46, 1, -72, -50, -34, 61, -80, -114, 89, -113, -25, -80, -99, -42, 50, -83, 15, -28, -67, -34};
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
    msg.setTimeStamp(0.818055175615);
    msg.setSource(55877U);
    msg.setSourceEntity(29U);
    msg.setDestination(60988U);
    msg.setDestinationEntity(103U);
    msg.plan_id.assign("HZJQNHVWHEMJDLZURGFAZHOOEGXAPMXVGXVWBSHRCQADGXGETLZYGHQJWFOXFLAOUUQPMPWDZYYABBKDWCJFJJSEHIZLQBGVEVPKANSEYWFVVUDPNBKZUFWYEGKCTBXRSANIUQHNIZDTPXXANLXLFTTO");
    msg.plan_size = 63395U;
    msg.change_time = 0.49567536985;
    msg.change_sid = 65429U;
    msg.change_sname.assign("GADFJJDFOZCRRATDYYVTTXEXVRRZZMRIJGXMLAEWRYBMPHPOOBNCPWVIHBDHWXVNWFOFDLJESTZWMHJPIDXQAJHRQSMTNKUNOCCHDWVKASTKJQUILGUYJOTYSNIENPGUCFSGKAFCZEMFVVQPNXGMXHZVEBAXTOQWYOBHIERQBQOMEAYFKNCP");
    const char tmp_msg_0[] = {75, -41, 38, 103, 58, -92, -122, -17, 52, -13, -42, 74, -103, 43, 29, -34, 99, 96, 48};
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
    msg.setTimeStamp(0.611980234225);
    msg.setSource(40269U);
    msg.setSourceEntity(226U);
    msg.setDestination(35098U);
    msg.setDestinationEntity(238U);
    msg.plan_id.assign("TGOTVPIZQYJKNFEJYIBZMHWZLERAHTSEMXJFKFURCDVFGSDNWQLRAQEHJRKQORBBUYXOZJDYSSTEL");
    msg.plan_size = 21201U;
    msg.change_time = 0.516509285534;
    msg.change_sid = 13054U;
    msg.change_sname.assign("WJYBVQCSNRGYMOBAWDRWOXJQJFLSXCSCWTAXAEZJLZMNUXHIHPILLLRREEGITAWSHPJGNEGTQIQHNMJMZPPFTRASKPSCVTWLKNAUKPCGVHKRIFTEUCWBVUCCKPNAMBOBYDIOBVDOMWVJMUPDFOPVSKGBDFKHNZKZSJFFHYZBEQSDQDRMLECUAHMLZU");
    const char tmp_msg_0[] = {-30, -101, 69, 67, 114, -110, -103, 22, 100, -109, -100, 79, 17, 110, 114, -61, -40, -55, -124, -98, -37, 110, 43, 26, -102, 75, -42, -128, -18, -96, -62, 94, 18, -91, -30, 108, -89, -117, -82, 69, 117, -28, 101, -61, -85, 73, -52, 31, 121, -34, -96, 95, -25, -56, -59, -114, -106, -48, -70, -36, -60, 115, -97, -124, 84, 116, 75, 52, 79, -51, -20, -19, -99, -12, 52, 44, -111, 90, 27, 75, 7, -69, -48, -114, -28, 79, -5, 9, -5, 88, -7, 93, -105, -81, 35, 63, -100, 84, -109, 1, -125, 4, -77, -19, 102, 42, 85, -48, -36, 20, 35, 60, 90, -22, 110, -44, -60, -116, -37, -6, -74, 100, -76, -78, 72, 29, 49, -91, -39, 45, -47, 5, -84, 31, -77, 23, -18, -106, 52, -74, -8, -16, -105, 97, -54, 18, -41, 5, -102, -2, -39, -31, 61, 113, 74, -27, 29, -96, 27, -87, 27, -52, -106, -102, -86, 29, 54, 90, 116, 120, -67, 120, -120, -70, -19, -44, -96, 111, -47, 85, 88, 102, 74, -109, -53, -92, 60, -81, 98, 65, 93, -35};
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
    msg.setTimeStamp(0.80627953742);
    msg.setSource(34713U);
    msg.setSourceEntity(38U);
    msg.setDestination(401U);
    msg.setDestinationEntity(220U);
    msg.plan_id.assign("UIHQUOOSAVLEIQRPJMSKLQVBJRYPXSVOKJFRIVOBTYDUGFWCEVCQFKHWBIKHTOSZLCBKZUIBPNVITFAYUHCAXSAWELWCEHUENOLYMAYOTSUNMPKUOWDRJTERJGEDOBPADFZQGHRFXRYLXDCNQEEGGNQVDTTWUGFASJINMLWYDFCMJCANTHXNVTAQMMSZVZWPCJVKZIMPLSAEDJZBZZMBXOFBWRGPRXNIYQC");
    msg.plan_size = 19801U;
    msg.change_time = 0.912917609484;
    msg.change_sid = 64475U;
    msg.change_sname.assign("TQNPOHDAHJSCPQNTOWKSBJZKWPKMZCGBRLQRRJPCIYMSLZSSFUFUQAYGRLXANIQFBIPOKDCRMKHNAGQBZURFNLWVEPBXKVDGLAFVEYTATCIPZKEMCJJLS");
    const char tmp_msg_0[] = {30, 10, 43, 122, 107, 5, -99, -117, 73, -68, -14, 69, -31, 113, -81, 97, -39, -41, 37, -50, 28, 54, 53, -25, 28, -122, -41, 31, 112, -41, -51, -4, -76, -76, 64, -48, 82, 24, 65, 102, -127, -106, 32, -113, -8, 95, -8, 49, -120, 72, 8, -87, 88, 83, 63, -59, -85, -122, -120, 59, -76, -96, 71, 51, -50, -41, -80, 32, 120, 56, 102, -5, -92, -119, -95, -108, -30, 111, 21, 61, -11, -98, 0, 20, -77, 37, 115, 125, -35, -5, -47, -110, -17, 29, -70, -10, -63, -63, 1, -4, 59, 106, -87, 113, -26, 7, -19, -7, 39, 99, 24, 44, -103, -52, 46, 6, -125, -76, 75, -76, -108, 13, 48, 31, -110, -30, 125, -52, 91, -28, -37, -99, 15, 40, -76, -80, 96, -86, 84, -12, -81, 45, 72, 56, -75, -51, 51, -20, 124};
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
    msg.setTimeStamp(0.318310196534);
    msg.setSource(65421U);
    msg.setSourceEntity(248U);
    msg.setDestination(60644U);
    msg.setDestinationEntity(82U);
    msg.type = 184U;
    msg.op = 123U;
    msg.request_id = 37343U;
    msg.plan_id.assign("BDAMRXQRIHGPMKZQUINZDJRHHUERNEXMSIGUFLVQZFPZLABKOEHSEFYHALDHIATXMOXAAMHRCGXXWCBBTHKFSVKJPNSDYEGQZSGBVFFIFTWCLIZOTSZRIDAREKMUPZAPVJMOODOTBDWKWRUPPOVSUWNKXEJUYW");
    msg.flags = 45083U;
    IMC::GetOperationalLimits tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HAUWVJKILQERLNJSWVTHGIGVYVCNMZYEPUOSBXOTEBUFBOMUTOUAGJOVSLDFVRMHCZDRJXIIQLDYOXMQAYQNERPTWTMMRPEYZDXXHSWAZKSVOSRXCYFBHZDBAICURPCJGKFICLHWUGKCENNNGRQOJHTXMZFGPKWGQDVSJTAKYTEJDBFBLYLQNKMEBTMPNEEWNLHHAWOWUPM");

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
    msg.setTimeStamp(0.786702380439);
    msg.setSource(43440U);
    msg.setSourceEntity(171U);
    msg.setDestination(18753U);
    msg.setDestinationEntity(133U);
    msg.type = 103U;
    msg.op = 169U;
    msg.request_id = 19440U;
    msg.plan_id.assign("RFXSQZRFFVBAWPOHGVGPPKYCTYDRTJTOTXDCEIPYRZIQMTYNSPNMDISIWJBEYBGJMOBBQJQDCZNOKFXQREYGWZMWFIVWWNWKSEEELFAHUFDUXDYOEPBOAIKHIYZSJNVLKQBZRDCUCHLHACZU");
    msg.flags = 54974U;
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 174U;
    tmp_msg_0.list.assign("OHAUJAKXPNWGNFEFEZIHKETMCXRDFYBDFEYMQFVBBWQKOTOCDEDJUIGHVYUEHPLHVJNCCWTSSINIUGCRTBK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ARWBLOEVYSNFSYCSKUOSZCEDKJRZAGNTEXXDTCNKMNYRQHOXOHBWWQBRYJOMVVIOLDBIGIYDMZJGEJVIQZMUUYXTIVIGVHBBKZFEDAKLQHNRUMYCNOTKHGFZPOZQHZH");

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
    msg.setTimeStamp(0.728781866422);
    msg.setSource(33058U);
    msg.setSourceEntity(95U);
    msg.setDestination(45538U);
    msg.setDestinationEntity(121U);
    msg.type = 87U;
    msg.op = 64U;
    msg.request_id = 52894U;
    msg.plan_id.assign("SWYCBDJPWRYXEVFQNEFFGVGAIIQHHCBIHTMZJSZJHDMKZVGRZRITUBXVVLTFULUJLNKFKSKEANPFZJEUQWIEKWXTIXYGCDODIGVYFBUEIVULDRHOYPMPOTMRGMF");
    msg.flags = 61247U;
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 3539142794U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RICPVIFBDGXPWTNGBJWOCCFZMLGPFFNZXQLVKUIPLCKTSQMJIPEYXBYSZJGYZEMFMWBSSLPJZTHWFTSRUJCMWLBNADKDIVSMTVUNDDAYQWKCDWIZQERARGNRHKVVYIVNEGHXFAPEPVWYMJAEGHNJHKUUIRXKFAHAQQTURQPOOGZXYLMSXHVBLKYEYSCBOAUJMQAKBFXDTQD");

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
    msg.setTimeStamp(0.588365268297);
    msg.setSource(30667U);
    msg.setSourceEntity(252U);
    msg.setDestination(41502U);
    msg.setDestinationEntity(144U);
    msg.state = 48U;
    msg.plan_id.assign("YOLHWAJRMMMDWAPFNWOFHVJGUZLYLTVSTNFYGLTNIFFVSEFYHDTWANIABVSWRCQZGTXRHMABDJPLNYOKIXB");
    msg.plan_eta = -1384145076;
    msg.plan_progress = 0.260319016438;
    msg.man_id.assign("EKRZVSAEDTWAQNAOMTQUYXHCBSVVXLTXWMHIZIBR");
    msg.man_type = 18316U;
    msg.man_eta = 1823970257;
    msg.last_outcome = 187U;

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
    msg.setTimeStamp(0.311140257841);
    msg.setSource(22624U);
    msg.setSourceEntity(77U);
    msg.setDestination(46388U);
    msg.setDestinationEntity(131U);
    msg.state = 139U;
    msg.plan_id.assign("XTNUSNOAPKCUQBADQPNEMLXBYSRQWXSGMIFWWUFTELWMOXEOZUKQIMSZRALLRCSZTPCNCPJJGWTHZXUKCYOYVOKBBXFYEGDGHMTDPNESIVVBGHHCYNOCFJRLQTXJKPDISBKBJKPHV");
    msg.plan_eta = -125273680;
    msg.plan_progress = 0.597831484127;
    msg.man_id.assign("RCQRPFGYBCOIVUXCOWDFMHZXLWOWMRZUIBMKYOAZSLUEVKDPXSVPUUWEJPBIXDGRCJKKCOTDMRNDBEDHEYGPUKTBZWJTLPQEJXTKTZNTWYPOKO");
    msg.man_type = 25039U;
    msg.man_eta = 1641623048;
    msg.last_outcome = 174U;

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
    msg.setTimeStamp(0.480542781438);
    msg.setSource(49470U);
    msg.setSourceEntity(213U);
    msg.setDestination(46587U);
    msg.setDestinationEntity(219U);
    msg.state = 53U;
    msg.plan_id.assign("ECZBLFRJYDJGCHHLMYZYFKVRKPPFWOKKECBDRJBNKDOONXZLZMRSVAJDWAGRGZRIPERZJNBMYRONFDXTIBKUNYLGXOCYEVKVQDUFMLQSUTUBWEDZNJKEITHUAPGXZPIUIONQZCGEUPSCVWXPMQBLUXLFJLESWHFOHD");
    msg.plan_eta = -648903717;
    msg.plan_progress = 0.951710316899;
    msg.man_id.assign("IAIWTDGAFAJOXEBHOYSVAXFQLQJODEKVZXYPEF");
    msg.man_type = 8144U;
    msg.man_eta = -1802551119;
    msg.last_outcome = 233U;

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
    msg.setTimeStamp(0.893809856623);
    msg.setSource(40617U);
    msg.setSourceEntity(68U);
    msg.setDestination(42449U);
    msg.setDestinationEntity(40U);
    msg.name.assign("EYSKJHBUQGTLIBOWNEMYWKHCZURKK");
    msg.value.assign("BRLZOPQFYOKMNZKNLUGUABYGRCMGTPPOEWWDMLGVAEJBFNCYOLB");
    msg.type = 9U;
    msg.access = 143U;

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
    msg.setTimeStamp(0.621898193885);
    msg.setSource(62677U);
    msg.setSourceEntity(224U);
    msg.setDestination(17554U);
    msg.setDestinationEntity(174U);
    msg.name.assign("UBPHIIKSNFEVOMFVNGSCDMQBGCBYZATCEKMJCQCTCPVYJZRSUDDHUMYOXNKALTTPYVKLNQQGLJZGQOFPSRABSDWIWUVPSNWAEZOWHXVQEXOUTEHWIHUXVRDLWJNOXVKKLRWPFRWCPDFLLGIGUTEBGZMDIQRRDZBHPJVJMSKIXYYTHEAGFRYYPRBHBKZIBCFTPEJINFDMKOLUVCRMQLUZJXAISWACNJZFQXYAAAEHSTNESOB");
    msg.value.assign("AYFZJJOXVAAXKKFKHDNUXSJRKZZQTMGOXPXEZGWENLQUVRDWWLSPDSNBVSKBBOIVBARZISCMOUWWADNFGBOVYAURQZGONTPLBPFZYWRVSFDOLLIJSTJEIMEYOLDHTBTAVDKUJPUBGCPAEHQLJFHIWYYVGMAECIWTOEWXCNJRCSMKJPDTRQMCQUQGYMXERIDP");
    msg.type = 113U;
    msg.access = 253U;

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
    msg.setTimeStamp(0.714155104064);
    msg.setSource(7637U);
    msg.setSourceEntity(132U);
    msg.setDestination(25840U);
    msg.setDestinationEntity(149U);
    msg.name.assign("FFCQDNTVYEZETOESWIJDFMNLOLNWYRPHLVXINAKMOUQJYQAZYXQPFXHRAWRAPRVEKUMIQEIBCWYAXGBKYEERBUQPXNGJLCOLSXZUKGWWRNGMYCOUDBWDQMMUHFSZTUYXHHZKDZFOPVLMCDMTESSTGHYAIFGULCFUBGSJHGADDMWKRJJBISHDZIALCJBQTJTZUYVSKIPLPQNHGSSKKWAFONFNOTACJPVRZOORRVIP");
    msg.value.assign("FCXROUWOBLOYAYUWWEINZKXEMKWAMAGHKCMMABXGBQBRPOLYYFDJJNBSGUQZXLEIIPPHGEAHNZCIIGEHLJDITSFDGHGQPJDQZLZHDUCDKQRXMGNGWS");
    msg.type = 210U;
    msg.access = 62U;

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
    msg.setTimeStamp(0.524857420228);
    msg.setSource(28094U);
    msg.setSourceEntity(88U);
    msg.setDestination(61833U);
    msg.setDestinationEntity(221U);
    msg.cmd = 206U;
    msg.op = 174U;
    msg.plan_id.assign("XUNKYNZMHKMZUBAMSDHAAPFMZTRZSZTMZJFZDUAREXPTAGTVQZWIIRJGIYJSLNMQTYPQKSTQCFVPCLGVJMEIWDRGILKQRSJHNSKEWRFSDKDFXOBAIYEAYDUOYHOIOWVEPWK");
    msg.params.assign("SBJHMFYUXZOIOYOLDCOURMZTXKENUHCNABMJPDIVPRWNODQUSPTZIFETCFZXJTCQMQHQTN");

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
    msg.setTimeStamp(0.0165909902889);
    msg.setSource(43680U);
    msg.setSourceEntity(2U);
    msg.setDestination(56059U);
    msg.setDestinationEntity(60U);
    msg.cmd = 86U;
    msg.op = 239U;
    msg.plan_id.assign("DPXAKULGDGPYCJHKWRRKJUFYMISJBLEXHWFEZKKFSRQRFSBIVLNXOAAMWNBSKXWIEVAQCFNVZJCTNDEBOUFCQYBQGQOZSIZSBLYTZXOVLAGAECQEVNALLTYZUUXDSMMDFKRNZYNCGBWYGHUZDYBCOIGXKSGTMITHEXVEZCMLJYOQOIQWBHQBVPEWVOPKSFUMVDGRJFFLJNPATUJOEXRPPYHMMTRDUGPTQRMAP");
    msg.params.assign("SFYBXLAMYVTXYHIUOQAZGXGCRIMQYHVJABJDFHYVSDBNWSSU");

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
    msg.setTimeStamp(0.0636677086146);
    msg.setSource(34348U);
    msg.setSourceEntity(44U);
    msg.setDestination(42240U);
    msg.setDestinationEntity(226U);
    msg.cmd = 121U;
    msg.op = 87U;
    msg.plan_id.assign("FPLEROWKEQATIPCGSIWTSANCVZGFHIELNTUJSXCBKVJDYNIJBAQUYFGMFNRZCHGZXWRXVCKKLZFKNQMRVVYHEECORARIEQEGJRTXVJWLMTCYHHSSUZOBUQTTJWKKPYPPNWHBGBXDPXVLOXSZDNJBTRL");
    msg.params.assign("LRAYSOKXUHCYZBGQHOPTVLHIBRZWZRNAFJWMWICZDHFKZUKGWEIHMAODGIJMJOCJBPQRNNUERSYMIEOIJQGQXUXVQNSMDZBVCEMDZOGGNYDWXTNKAAXUQJUPYCKUSITHUHKBED");

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
    msg.setTimeStamp(0.0506909830471);
    msg.setSource(36369U);
    msg.setSourceEntity(18U);
    msg.setDestination(57321U);
    msg.setDestinationEntity(210U);
    msg.group_name.assign("TIJQVWZCWJDSGBYQUHVEHCMOOHVDZZAXCWRWNMPBPOXIXWDRJVAIBESEAJBDAFXVREPSCQYGUIKBSXRPENQQRRBDAVWLPMFKTGQDBZGCFUZURTOBIQHVHFXXJSGTSNDTGKNZKWRIYAFNYIKDLJOKDLROFFAZMNGOEASOITBLTBCGFFNUUYPWNJVCUOHPYVYHEILFAKMTHTRQEHEXNSTWSULGMLEMUKZPQLWUMZYJCDZYIKMXKJLPNPYJMVHLQC");
    msg.op = 57U;
    msg.lat = 0.191438588864;
    msg.lon = 0.0506335784861;
    msg.height = 0.422640004401;
    msg.x = 0.70470842643;
    msg.y = 0.0711404706224;
    msg.z = 0.134036647214;
    msg.phi = 0.497026753511;
    msg.theta = 0.778210474794;
    msg.psi = 0.49667667576;
    msg.vx = 0.433236731459;
    msg.vy = 0.703611262589;
    msg.vz = 0.795434021569;
    msg.p = 0.991961379049;
    msg.q = 0.687936272102;
    msg.r = 0.456158414952;
    msg.svx = 0.845918302931;
    msg.svy = 0.461634609772;
    msg.svz = 0.260388620361;

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
    msg.setTimeStamp(0.746683702175);
    msg.setSource(58474U);
    msg.setSourceEntity(186U);
    msg.setDestination(1942U);
    msg.setDestinationEntity(194U);
    msg.group_name.assign("AVZEXVOGIIJWYBUHWNULXQRRPUNSAPDWQDVSRMFPDXMIUZEOTWBESZKRHABQLOLSCOHXYNWRIDDOCMSUNOVIJXCPNJQCZQTFBRBNJLLFAVTKTXUGQCJSVMRGEDAYIMGCKBKHIZAICYKXIOCVHMALRYYKPZVZOQFSERXEPTFVHM");
    msg.op = 214U;
    msg.lat = 0.207850019114;
    msg.lon = 0.512037348815;
    msg.height = 0.950321251385;
    msg.x = 0.49930328382;
    msg.y = 0.980362799201;
    msg.z = 0.518478168519;
    msg.phi = 0.333541418981;
    msg.theta = 0.498012560562;
    msg.psi = 0.788674486842;
    msg.vx = 0.274774106449;
    msg.vy = 0.862466879005;
    msg.vz = 0.151394645474;
    msg.p = 0.259263854651;
    msg.q = 0.945072438075;
    msg.r = 0.588579991856;
    msg.svx = 0.40818391115;
    msg.svy = 0.170556256385;
    msg.svz = 0.519533559717;

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
    msg.setTimeStamp(0.31071710773);
    msg.setSource(27344U);
    msg.setSourceEntity(118U);
    msg.setDestination(18174U);
    msg.setDestinationEntity(206U);
    msg.group_name.assign("YKDWAFRTZFZOIUSSCJHFQBPSUNX");
    msg.op = 156U;
    msg.lat = 0.800527316582;
    msg.lon = 0.286580267875;
    msg.height = 0.81315033569;
    msg.x = 0.0352523553662;
    msg.y = 0.101078034584;
    msg.z = 0.427096877841;
    msg.phi = 0.0957421139;
    msg.theta = 0.0848607342366;
    msg.psi = 0.357284610589;
    msg.vx = 0.224524756224;
    msg.vy = 0.594894327592;
    msg.vz = 0.161977051813;
    msg.p = 0.997175726144;
    msg.q = 0.395062085753;
    msg.r = 0.568388235719;
    msg.svx = 0.715887036561;
    msg.svy = 0.480435113728;
    msg.svz = 0.441336428166;

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
    msg.setTimeStamp(0.457816903245);
    msg.setSource(8315U);
    msg.setSourceEntity(99U);
    msg.setDestination(45441U);
    msg.setDestinationEntity(102U);
    msg.plan_id.assign("INXKJMLHGXOWAJLOXMSGDGMIISUGCWPYYHAGEZBFJHNBZDEKAQHSFJLPVNYIPAHCGEHVDVDLGUFWWKQKNSXREIFUFVGUJEKDABINEEUJUEOAXSOBDTRFBDVYVDHQMMFTKHRQKNBSYMTWYRRJYWJLL");
    msg.type = 182U;
    msg.properties = 229U;
    msg.durations.assign("MQARODBRHGTYNPJXCNFSVKLNYPWGTRZCOIJNJLTYXAVBTKUNFKZBOEAEXZAAOSYZLEGZYQHSNXRUZEHOZDIMUCHTXTMSPGAOQTHKNPJLHIAMEKNVCRQMHUHPOAVIPSUWVEIJTDFQLWWWIAIRMLYYBRPHZEGRCMAFPTUSBFPEQRICJXV");
    msg.distances.assign("BRQBYFOARPRCKHAPSTYHQFERZXUGZERZUTWNIEWSQRZQOQGVWECLGWLFCFFCVLSZQFLRGYCSIZPEENXMWDBUUYZDMCDMQWCHNOJFNXHKPGIOKDWHRXJNMYDGJDSHBARNEZFBGIESDLMLOJHPJQAMLHTJOPUVOBAPIFUXDAVTMJWBPETLTGZMYJTDNKGEGVLYVXWPRMTIFIIAJHM");
    msg.actions.assign("NUXXRANBGSLTLOZO");
    msg.fuel.assign("KTMMHXGGLTCHTKAKTLAWGYHKAQNLOGPORAUCUNNVPYQDBJTDJBBZXWOCFJIBLJOJNTLCRVYHNNXZFGVWMYEEAXMSFDHALIKMMEVTQCOZAZFPXSQQHOXKBYSPBCFQURDRBIVWCRVCWNDSPQWBZYWRSBNJWRQDBJAYXIXSCH");

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
    msg.setTimeStamp(0.235087172778);
    msg.setSource(51763U);
    msg.setSourceEntity(57U);
    msg.setDestination(42467U);
    msg.setDestinationEntity(161U);
    msg.plan_id.assign("WSAFGZTRNNYHOJLUTXIGHCQUSFAFAVCKZZSBAZLVHECRJATWFZULLZERWTYLCCADMDBSXMOKPPEKHFTJNIHLBDTXZYBQSIQORRLBZVOGXMHYUAQJJFKOCTOGSMJHMNYTBGLPPWTIOSPDLMKFFXGVQIJDWVYARNWPXYBPWISMOBHYDCIUIUXFXNUKJIXOVPVTYMMCODPPMGDSCUVQJ");
    msg.type = 155U;
    msg.properties = 136U;
    msg.durations.assign("GLINBIYTQAULQOVACVNLZTRIDXUWSMWBZKVHWANGXPQNBXJLHPRFQOOTFOWRTGGYVQJHUIKBPHKZJBSABZBZERLJNORUDJAYSISYNOCGYQHUKERIMUBPSEFDTDAYZKUSQVMKOQHWDKPWDVNXJCPVAMGMCYYOYWDZXMCERHGMELILPIZLZBLKCTXVMFPVALNEHMTQJKWJRFPKDXQSVHJAGRTNWFDWMZNCDCETEGXFJU");
    msg.distances.assign("YBFJSKMOSRZBIHGLPBDWUCNRKDAUGFUJUTHVHOJYRWAEEQDWMSNZZDJRUDLUVKFPJTEQNTDFHYLTCZOMT");
    msg.actions.assign("PVQZDCDQFDBTKGMMPGHNDVWLUJYGVJMVUSHHSDFDTXNHMKQZHZWQAWEDBCAATRMZBZEYXCIIFZSSTYCXOOBIAGEGJJJLGKUEARWQFEGKTHAOUZTKVJUBNMRGYSBOWAVRYUULEJTIEXYYBPONNKHVIMOFSUPIJZOVWHXGUXIBCALLNF");
    msg.fuel.assign("WZITGJXGLSELTCDPRHSLKYPMHWMVIFJMHTBXUQLCHUGBSZSZFMNKUBMDLTELYVQRDSAYZGWFSEJDWYTVONZBDFKKAOGPRAWTKPQZSRNEAHCDFZGEOLKSVPUHLRTKCACZQCDOSIWLWDHAVXOIGUREOIXMVHBXURJFEYYKZMXPXPGQJORFJENWRVUQTMNZKNBTAPJSVCIXFQQTBLDMHAGIYDV");

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
    msg.setTimeStamp(0.278380810078);
    msg.setSource(55461U);
    msg.setSourceEntity(97U);
    msg.setDestination(45561U);
    msg.setDestinationEntity(33U);
    msg.plan_id.assign("CGOVEQLSHBIUKRBYAKPZEYSOPLQULATGSCHMDSDWOZDVVNRFJAUCVOPRLTYEXMATKWCILLBGVSFPMPVXZZUXMCJUTUJVQXKSSHMKFXDOKKWKGPGWTJOCHFRPNDOQCCBGWQJJRAUJX");
    msg.type = 61U;
    msg.properties = 193U;
    msg.durations.assign("DJQKPUJFSZMPOYIJGMECJTPTNWFGNMYYHUQWZWBPJPCIWPKTXKWTVNBYMVVRGQXCRTAFYAJSVAXECFSAHRLOGGHEOMBRXWKAVFHUUQKZIXOJISCHDWBQKKBTEIZDAQRGHRIZQOHSLXBXGCCIOLJDGNZTXVHMDQNAYGSFNDEPEYCJJUZESRFBCFWSKSOYKTULMTRZLRGEZVALFLVMPXOCPBAVLFYDWDLBMERIIQUHHSN");
    msg.distances.assign("XNPSDAQQIUBAYUXHLKUFXTTQLLDWDDGMGEYDWSKEEJRBZGMBFNCKXCVXDYSCKFPQSYEGUANWPFOOCMOAZLJKYAUNLTMJWQTBVROITVIQANZKVGVLDSZDMJCA");
    msg.actions.assign("XAKLYLRHWENWALKPAMKMQQIEOFIJGHRZPHJ");
    msg.fuel.assign("OWHNYKBVEHGONFIRQNSRVYICDSWWVBFZYRUSXFLGYLTJJUYATVVNMXPJPHZMGPPCAGSDGWLEAXFKVSWQTESVILCQNJFQWN");

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
    msg.setTimeStamp(0.948963932097);
    msg.setSource(1933U);
    msg.setSourceEntity(80U);
    msg.setDestination(20073U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.043012326625;
    msg.lon = 0.669736455283;
    msg.depth = 0.37163839236;
    msg.roll = 0.279002029459;
    msg.pitch = 0.298270877841;
    msg.yaw = 0.688897924497;
    msg.rcp_time = 0.561096419776;
    msg.sid.assign("TUVKCJFQQMJEPORKNIVXHQYSISGVNRHESBLZHJYWTJGKRCPIYFXNAPBBISBWKNARDUISPKCDZOUIMTZLYRDSDGENEMNMCQVKXHFJUTVHUYLDLAWJBKGA");
    msg.s_type = 188U;

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
    msg.setTimeStamp(0.775224754755);
    msg.setSource(46814U);
    msg.setSourceEntity(243U);
    msg.setDestination(27497U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.0834679268898;
    msg.lon = 0.69031802805;
    msg.depth = 0.040753806372;
    msg.roll = 0.906324884088;
    msg.pitch = 0.836595996003;
    msg.yaw = 0.463490494604;
    msg.rcp_time = 0.156145517731;
    msg.sid.assign("TNISAZKHLNCMEIGKWCSYRSJNHRFJLJXZDZOLBRIRHB");
    msg.s_type = 41U;

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
    msg.setTimeStamp(0.752344720694);
    msg.setSource(63992U);
    msg.setSourceEntity(158U);
    msg.setDestination(458U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.743965482123;
    msg.lon = 0.2368112027;
    msg.depth = 0.819155858631;
    msg.roll = 0.135404571247;
    msg.pitch = 0.568891591714;
    msg.yaw = 0.847700124902;
    msg.rcp_time = 0.658431024161;
    msg.sid.assign("ZKRXGRMAYGMVIEXUZPNIYCTHICJULRTCTAFEBENXDCILEVBYSMPLJADSUBUHXDJKKXWBPNBQKALWTXZNYMPKNPBJDYPIQPUMZHGMWCHKVOEOYETVBXEFAVOAFVZIQFGOAJSIQKUFNJDAHCPQHESEWOTVRQSCIQMVITOXSDCFONVSHDHWMIMBQUPWVGLEAWOWJAQYRLJDNTCWGGX");
    msg.s_type = 3U;

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
    msg.setTimeStamp(0.0568116904897);
    msg.setSource(61066U);
    msg.setSourceEntity(117U);
    msg.setDestination(54296U);
    msg.setDestinationEntity(137U);
    msg.id.assign("GLJJYKDXAZOQXFUNCJIXFLSCVRBHMRHCOPFBGBIQKMQEYDMCDXNFOPJSAWRQPUXODRYBKUSFOGHFYCAYLLCXRMCPMWQSIKTKGBTVARPETXLKKOEJYNCIUSEYPGFOIOWPDXZWRSNHENDSPTDRVHMUVTMDAJWUHIVGV");
    msg.sensor_class.assign("YUQBXITBXDXKGYXVODKFRWLZNADGKKGPJWTTZINWLHOTYJNXIOZDQMGCSVXZXJCPVDHVVFSKOBVLAQMZUZ");
    msg.lat = 0.876303459341;
    msg.lon = 0.78419469041;
    msg.alt = 0.135192626929;
    msg.heading = 0.336376398998;
    msg.data.assign("TJUHTDKRMRPPQCCBLPNQFMWSNSPJYADVCAFHXRCHISPCUBGMCXWHHDJGWQOJHWVOKMTOENNTNXVTFGLCIBYYHNWQLLMIZBXALKTURXPMJLKIESTYAELSROSGRYRYJBNOAGLOOEUKSBFMNWBXDQIKKQBDJHVWKMXIAIGBLZZFCUE");

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
    msg.setTimeStamp(0.680136943368);
    msg.setSource(56312U);
    msg.setSourceEntity(93U);
    msg.setDestination(20303U);
    msg.setDestinationEntity(235U);
    msg.id.assign("SBBKCJIINSXQDXEPHPZMLIT");
    msg.sensor_class.assign("UPTRAZOFBAFMVEBZSYUEOMPSNWWSYKLNMDDUFIUCHMQVGBBKFZYVITACBKWKZDCXQMLGOTBJYKTDUQSXRAHZKATDSXYLHH");
    msg.lat = 0.133214790667;
    msg.lon = 0.500061118635;
    msg.alt = 0.187901752065;
    msg.heading = 0.890098060306;
    msg.data.assign("XGYQJFAWCQBPUTZRJJLOBIQGQAYDHQDKFTEJPCTVJSOXIFZYDACOOHBNZTNWUBNRKAZGBBHLIOOPYUIMXXEJSYJBMFQRVTWAKECMHKQIKZZDWXZXCNNTORCLHGRHRVLEKTGXLASCYRAYNIQFILWNUSDUFRDIOKAGQUM");

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
    msg.setTimeStamp(0.90772614775);
    msg.setSource(22765U);
    msg.setSourceEntity(42U);
    msg.setDestination(15543U);
    msg.setDestinationEntity(98U);
    msg.id.assign("SYJSNPGMCLXGVNGQFRKBUHDWRDIQNEIDDWYZKYDZHSLQNIAEPZJTDDIWJHVNUUAICQOJTIXFROGRAMPTNWBRZIPYAYAXHVXVLPUNTGEOSNVJFXPYOLBDUZLFFEUEJUEDHKWXHHFLCCZFXTOOMVYVQRMBBMCQZLHACPMSFEAOCJOWWESHBQCMBDL");
    msg.sensor_class.assign("OOIZRDMISSQFABRMIUVOUBZQQWRSBVLYPWDAWUVVARJXFSFNTZQIBGLJYAPZYKSIJVVDFKZGSICUTZGCXFAQPEOEVENDPJVABJHJREWYLFFAHHMWEQQJEEVCKGDZVJGKICWTLINLGSLRLDYXMBIBNEQQBONYAMXSUWMYFPEGHNWPCZLCDPYEHFXQSOIKHNPNRHMHZKLOJUUTPCXUXGDTTAKOZLYCOJDB");
    msg.lat = 0.210301390429;
    msg.lon = 0.101228427882;
    msg.alt = 0.614837045646;
    msg.heading = 0.302314313779;
    msg.data.assign("NKZSRDDSRDAJIDRNUAVFXVAARIXEYZSOKJCEMGTOKNXQXCLJCGUSXLMWJEM");

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
    msg.setTimeStamp(0.224658467272);
    msg.setSource(54119U);
    msg.setSourceEntity(63U);
    msg.setDestination(5270U);
    msg.setDestinationEntity(175U);
    msg.id.assign("JUQQFHQDWNOHLETDUODKEXUTKETNIUABLFKZUVQCYTIBMXNHLWAHOWHDXSOBIZSACVIGBHZVXS");

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
    msg.setTimeStamp(0.79757129427);
    msg.setSource(62793U);
    msg.setSourceEntity(232U);
    msg.setDestination(63944U);
    msg.setDestinationEntity(132U);
    msg.id.assign("RUBCGUFQIPYZIJIMFRABBHFVELNPTMLHZOIKTJRPQADOEBQWKVRUCGMC");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("YOUPHUBALSHAPRQUFYWYIXLMTFJDIJJ");
    tmp_msg_0.feature_type = 72U;
    tmp_msg_0.rgb_red = 24U;
    tmp_msg_0.rgb_green = 195U;
    tmp_msg_0.rgb_blue = 43U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.444076360306;
    tmp_tmp_msg_0_0.lon = 0.17828947769;
    tmp_tmp_msg_0_0.alt = 0.239378181565;
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
    msg.setTimeStamp(0.26099095019);
    msg.setSource(488U);
    msg.setSourceEntity(16U);
    msg.setDestination(53235U);
    msg.setDestinationEntity(181U);
    msg.id.assign("UPTDAZXJFMLCAUSYJMCNVIBTPEBRLCICLUPZMOYVCMGPMUFEEXGWOTHZGUJSLAEIQOCQAQBWBAXTEFLYXHJIQMOARTR");

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
    msg.setTimeStamp(0.627309510912);
    msg.setSource(5452U);
    msg.setSourceEntity(186U);
    msg.setDestination(58344U);
    msg.setDestinationEntity(98U);
    msg.id.assign("DYNFEXRBXJIFVAECMDEHKUWRGNOHIVDVJEQBZOZNNPDESOVOBIZWEWUHNX");
    msg.feature_type = 9U;
    msg.rgb_red = 189U;
    msg.rgb_green = 156U;
    msg.rgb_blue = 211U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.0506196408868;
    tmp_msg_0.lon = 0.524639687581;
    tmp_msg_0.alt = 0.823065850844;
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
    msg.setTimeStamp(0.906569454449);
    msg.setSource(24372U);
    msg.setSourceEntity(25U);
    msg.setDestination(62522U);
    msg.setDestinationEntity(111U);
    msg.id.assign("HGQPWDPGHYBEWJOGLNDQVNFEWLJKYTYGPGTWTDCILKDXEYJJLMOUMBGEISHPEEVAFQOSOAJBHUZNMZTACZFLONXXVFDM");
    msg.feature_type = 205U;
    msg.rgb_red = 94U;
    msg.rgb_green = 100U;
    msg.rgb_blue = 201U;

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
    msg.setTimeStamp(0.403467747814);
    msg.setSource(43635U);
    msg.setSourceEntity(191U);
    msg.setDestination(2092U);
    msg.setDestinationEntity(181U);
    msg.id.assign("ILORJFYMLMEMAKTIFJTQBEJBIDZDFBFFALLFMAKSOGUWECOKXZIXCIAYYJHRSDYJGSMQGVONNCHHARGVGYIYSMADURQSETZOTXAQZXBF");
    msg.feature_type = 139U;
    msg.rgb_red = 80U;
    msg.rgb_green = 200U;
    msg.rgb_blue = 71U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.148208537962;
    tmp_msg_0.lon = 0.990294738338;
    tmp_msg_0.alt = 0.0105860803457;
    msg.feature.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.373477566235);
    msg.setSource(17832U);
    msg.setSourceEntity(190U);
    msg.setDestination(56318U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.738951400624;
    msg.lon = 0.892472700272;
    msg.alt = 0.748065112345;

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
    msg.setTimeStamp(0.622815089195);
    msg.setSource(59396U);
    msg.setSourceEntity(125U);
    msg.setDestination(47063U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.954481599888;
    msg.lon = 0.378865039801;
    msg.alt = 0.697048163652;

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
    msg.setTimeStamp(0.388400263571);
    msg.setSource(13965U);
    msg.setSourceEntity(67U);
    msg.setDestination(32373U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.968590810523;
    msg.lon = 0.674197051846;
    msg.alt = 0.720194663672;

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
    msg.setTimeStamp(0.952722822441);
    msg.setSource(15452U);
    msg.setSourceEntity(254U);
    msg.setDestination(6081U);
    msg.setDestinationEntity(125U);
    msg.type = 53U;
    msg.id.assign("RWIHMISCBHQHSRDQZXYJGCTIBNVCXULDOFIFOKBHQZXWTJLNUURGTDJAJWVWVGLMOKFZSPJLGOBHNPLZNOMFJVTKIIOGKALPHAOSILVPUKLBQKNMRUZZEHWXCBQ");
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("PEONCIWAPHFMTCREBZVOXLKNIPDTREEOTMXPNBSAZYYAWWHISHSNRVSBPGGBQKPJYOOJPWZEDDMGOVIQUTTQMFOLXCUDWXA");
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
    msg.setTimeStamp(0.438674655638);
    msg.setSource(26507U);
    msg.setSourceEntity(132U);
    msg.setDestination(33107U);
    msg.setDestinationEntity(226U);
    msg.type = 148U;
    msg.id.assign("RCIIQNUGZEKYEDWJKNMMTZDRHCCIWVXAJBPEBZPJJABNPZYRRMWNUNJHTMFUHWYOJQTKTZXVYYYENCWJWEDHCSJQGQAAQZSYZQBGBGWRGUKDHVLLSAGYCXJAAJUDQDPGOVFWYLQKDVFLPZXMCETZLPBPRIEWUXKUVURSCZILXOGIMMQXCTLSWDNIABOVKSANEMFOBSIOOVDHOTYVVFTHTEXGMOUKCLFHUHGITXOSDPSQXFRIKFBRMHNR");
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 51154U;
    tmp_msg_0.type = 152U;
    tmp_msg_0.max_size = 39544U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.0412717260448;
    tmp_tmp_msg_0_0.base_lon = 0.970517669546;
    tmp_tmp_msg_0_0.base_time = 0.772473327457;
    IMC::RemoteCommand tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.original_source = 49359U;
    tmp_tmp_tmp_msg_0_0_0.destination = 43704U;
    tmp_tmp_tmp_msg_0_0_0.timeout = 0.553099161557;
    IMC::OperationalLimits tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.mask = 185U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.max_depth = 0.697296040776;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.min_altitude = 0.0711107260241;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.max_altitude = 0.465146609424;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.min_speed = 0.552856073054;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.max_speed = 0.21352485109;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.max_vrate = 0.800066410851;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.802114246737;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.953577972919;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.orientation = 0.00192737824466;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.width = 0.751364080727;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.length = 0.236054621397;
    tmp_tmp_tmp_msg_0_0_0.cmd.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.data.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.473644469756);
    msg.setSource(33249U);
    msg.setSourceEntity(139U);
    msg.setDestination(63805U);
    msg.setDestinationEntity(41U);
    msg.type = 212U;
    msg.id.assign("RYXVBUKJPLHMWPHXHWOHAGFQCANPUXFBLUOUVGRCNSJLGJQNXHDDZMNAYBFRKKKDHROAXLNBNALJZCWDTAKHWNIAEVCSVCIPOGVUXLQVGMEKCBYVEUGLSSFKBEICZVRZYZXMPAEXJTYQJLFRAWOHMRDWXIZQYQTIKSGMNPIBQYSNOQVEVUXDOUMYJTDOFOGGZWSJTPO");
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 31U;
    tmp_msg_0.speed = 36281U;
    const char tmp_tmp_msg_0_0[] = {101, 107, -105, -81, -42, -54, 118, -68, -33, 122, -103, -105, 9, 45, 44, -44, 31, 35, 59, 102, -89, -63, -44, -11, -96, -29, -107, -44, 126, -56, -60, -103, -10, -67, 95, 28, 104, -54, 114, 68, 101, 78, -83, 18, -66, 4, -119, -58, 121, -14, -21, 107, -125, 25, -89, 33, -68, 13, -108, -45, -91, -14, -102};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.623544738924);
    msg.setSource(49364U);
    msg.setSourceEntity(87U);
    msg.setDestination(18663U);
    msg.setDestinationEntity(139U);
    msg.localname.assign("RZNTTDDPZESHMEVEYZXUWKLJDFYGOKRTBNFNGUFOKYMQJLWBTCQMWKOUKJYAGORAMDALUFZFJFOCRROHPROGHZISOGFVSAOKQ");

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
    msg.setTimeStamp(0.608572053784);
    msg.setSource(53804U);
    msg.setSourceEntity(65U);
    msg.setDestination(38637U);
    msg.setDestinationEntity(93U);
    msg.localname.assign("DNKAHCVHDIZFSEWLRQYEUYLAJDLTYJXLJIGAUFZBSPZCKRFNCIMWCSXPVWLOBXUCIGFIMRAPGWFKBHIQDWONQEIDXQJETRUZYFOUYQWVOFENZMQTWFTKOBVDIRKHXMVGZIFFVGMPBGETCNCXPRJCLKHMVKZJWORCADRONHWRSSYPVMYIRHHUETHKVXUJDJALZTYJPPXEOCGEDOWUQSNJLMPZTPGABHGSEOLTSU");

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
    msg.setTimeStamp(0.145256245777);
    msg.setSource(16472U);
    msg.setSourceEntity(70U);
    msg.setDestination(36591U);
    msg.setDestinationEntity(129U);
    msg.localname.assign("JXUJIYCBMLXQCNGWKNFECRGMRKHNGHAVTGOEHXPHONXSUGZWDCMGDLZIPUEYJJBOQIKZCRLVJEBZKYSWADIFZKLPPWQBYFEXEULLWTVQSJQUWZVTXFMUXOPSUEAYDTTQTHHQGEAXMDSJHQBQGMUVSINOPFWYIORANSAFOCVLAZADFDZRWBPCIWALOKP");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("YVQQXXPECEWKUFWTPPDXGDQGVZDDNBURLQVRHBB");
    tmp_msg_0.sys_type = 172U;
    tmp_msg_0.owner = 2532U;
    tmp_msg_0.lat = 0.516847412973;
    tmp_msg_0.lon = 0.721216071747;
    tmp_msg_0.height = 0.727718771123;
    tmp_msg_0.services.assign("ECLLVZVCAGEPDZRYBQ");
    msg.links.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.964147127779);
    msg.setSource(34932U);
    msg.setSourceEntity(195U);
    msg.setDestination(4414U);
    msg.setDestinationEntity(232U);
    msg.timeline.assign("OPZMJPIVWBNZHBGORNEKRLAKYWUNUMADRPJLCMTEQUFWDHSUEDRAFYJWJYVIQTRGHLXPHCSHEANIDIVELISXJBXTWALXYUTYWVSHWHTBZQQZAJC");
    msg.predicate.assign("NBBOSOVGUHOJBUNGXHXFAKFXGLCDBCTIRKYFGURJWRUVUUEJSDWIMTPWNTQTJSEVIZREYWZNQDXDARCPIZWUKHSCZVDMPCBBS");
    msg.attributes.assign("FLLIDPHSCJJVNYGDIWLAYDIRQYWFBCPBXGBADBESKOLNRATLJ");

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
    msg.setTimeStamp(0.755930158559);
    msg.setSource(42329U);
    msg.setSourceEntity(18U);
    msg.setDestination(39778U);
    msg.setDestinationEntity(91U);
    msg.timeline.assign("CLONTJZRKJJMSFBZZJAPCFZCTEUUEXNNQMUFDFOGLKSQHXBQTPRUWWSOXENBQLIUBZRONKCJIZZYHEXPFQEGYTAXCEIGLJGEURZDFCQQENKWVCMBLSZHIMRWYRXTDISKDVSMGHPFFLR");
    msg.predicate.assign("HKECCNVWOSLTGGNBVCDMUUJBNHANVRYSXTPWBBWHRQSHPZCHFBHZVPDPRDJYDZMGERFKVDKCVUVLSPUXPKYHCCTNXEMGJBEMCBYDTLOCAZTDJBXOTWKJFIUOHQFKXGWNITXQLKWEERTMTSILAIQAYNFIIYIHQYVJZDFTSEQYNXIKJGAJHSRVZAOEQGRMKPGCASXIZQWSYWFPMB");
    msg.attributes.assign("WAOHPMCKNOZMFWAZERSSKORDCAVQULVNZYWALAOLUODGEHIEMFYPTESFADAOYIHRDULDRSCGBBJPMRIIDMYZBQWXJTFYZPDDTIMIYVTMTURNHCQQBECCSNLYQVPGOGOJYZNBTJPQFSSXKKGLPIPRGCGMKLDUJBNGTMAXUQVJVPVLKPJCWSTYIMZBVJJJBA");

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
    msg.setTimeStamp(0.826430410258);
    msg.setSource(46743U);
    msg.setSourceEntity(42U);
    msg.setDestination(33204U);
    msg.setDestinationEntity(117U);
    msg.timeline.assign("FCERWESTYITWQPGUDBLRGJZUPSILXFUQZGMQLHSOMYTZVCKDNBQONIEXWVOTDKJCXQTBAPJPYZV");
    msg.predicate.assign("BXVCAFWZHQCWIEDBJSFSCEYZVWRXZGEHMOHFTXRW");
    msg.attributes.assign("KZGLYNSDQFNNHRWOUEJUWJZMZMASQQLIUKYHDNDTWJSRISGBIHRNLFGEBRHCDJODCFJJOWBXYUWVDTMIXODPTXXXSIZGQRDFFLVAQEKVVUFHFLYIPSGIWANFSBICVUPAUCSOQNVRVZJPXXQMZYKKOLKBJBTYWEGZCPMPBKZHLMCHUNBTRAEJPMQFNATWCOHQPBEVV");

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
    msg.setTimeStamp(0.758481986839);
    msg.setSource(41440U);
    msg.setSourceEntity(158U);
    msg.setDestination(34434U);
    msg.setDestinationEntity(21U);
    msg.command = 103U;
    msg.goal_id.assign("KQALXCNMVJZTEAKGTSVGZNVQPCLVDIZHLYEGZQYKNQEZAUKIACTSTPQFCSCPYWMNJXNOPOWWKHFTXRUOFJMFSMIWSBWEKCTYHUBXVCUUAHDGBZRFJSVOHGDHPNFCRPGJUULFBRDKVGDRIOPMJZSABEL");
    msg.goal_xml.assign("ESSKOCFPYGHPP");

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
    msg.setTimeStamp(0.304866753113);
    msg.setSource(28180U);
    msg.setSourceEntity(12U);
    msg.setDestination(57023U);
    msg.setDestinationEntity(251U);
    msg.command = 207U;
    msg.goal_id.assign("WKIGROXEBHCFFUHMFVUJZROFIPJ");
    msg.goal_xml.assign("MNGEXTNHPFFCHILQSJVUJXOYCUUOEBGZVTBQUYRTQISIDSEVMBMIQYLZMPUONGWCZGODRNBTSNK");

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
    msg.setTimeStamp(0.323700248903);
    msg.setSource(52835U);
    msg.setSourceEntity(108U);
    msg.setDestination(36179U);
    msg.setDestinationEntity(114U);
    msg.command = 131U;
    msg.goal_id.assign("NPDLQZTNXTRMPZFNVOVBZIXSHCJBJNSLQWDJNKLBWV");
    msg.goal_xml.assign("FIKDRFTBLKLSXWUVHWWVZYTZAEELEBJRXOKYQSUJIYFRGYCHGDNPXZNGFMDBCQHYJOUISCJAMLJCGPAKAYULPWBXTMKADIOUQKDBVSFMSJVPOWHGSRQHMUUZSBWJMIOEXDLRLYCKRARJBIPRMLTBHOKEAFNUCXHMXPTWNYVNIGXZGILUHRFADPGNNOAOXTSGNWIFCTVZKZPJTVZVBMEZPMSBTXYCEF");

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
    msg.setTimeStamp(0.750178391993);
    msg.setSource(41289U);
    msg.setSourceEntity(233U);
    msg.setDestination(33472U);
    msg.setDestinationEntity(31U);
    msg.op = 37U;
    msg.goal_id.assign("SCUPUFTCXESWXKJMRENDYBHXEDVABKTIVQQIWYZTMNMQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MWGNHBEKLKMZQBOCDAUYOAXSLJHBZHPOMUCFSQXKCVAMAXMVIHSJIDIURNERWBCEEPDKKQJKGTDPOCRROCTPYLLXGXYSVFXFNPJCUOTACTXUNFRGUJICKYNAAWLOYHFNZKQGATFOHVDSGGQFCUHWQMNTWOJPDWZIAELULHQYTNAPQPYDTEZMIVGGLYKEWWBBTTHJJPGMV");
    tmp_msg_0.predicate.assign("OBQMVUNNOFCVJHXQLIZINNMCREOAWHACBMZTTJEBSFMSNYKOPGRMYLRVLPXSVYDZUIHHFFUAVXSVTUUHFRQTQGQQPEWMHDYGUABPZFRWPQWOOXKJBXFSWLKIRDYCKZZXTBJSGCFIFYQWYAKPMGTRVOEEMNCHSJLKZRIRHJTVGBQSXLLZNAUCIBQCOPAWWEPDVNEYMWISHJEWOKKDDDXN");
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
    msg.setTimeStamp(0.534753946948);
    msg.setSource(26703U);
    msg.setSourceEntity(198U);
    msg.setDestination(45415U);
    msg.setDestinationEntity(239U);
    msg.op = 82U;
    msg.goal_id.assign("SMLYPNPIDMANCXQGEMBKKRARLOGRPFGMGEJEWPOOBMAZRCEBITVQQDVNUJGANNKHXILUFZWZNZSHNOPOGRMDQWSFWPWBZTTEIIFHSMFPCVRHDMHBGSKAKIYXYARKHFUSXOVLYUUPOOEWACCLDRRTUMMYXOXUVSEYDXACQVJQVSUBAQDWZEYCHJJKFBJUCBLJALCBCQQFLJPIVGPYSTHVVWXITKJXZKODHFLZITKNEJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HSGGJCSREBFPQMBSHCNVUWQSNGXEFTIQM");
    tmp_msg_0.predicate.assign("BJYDAQFBWKFNMQEATFCVZJQGURBDIVOMZBXUIIGYOBTKURJASSINJPTAOEXFPVPKKSHMXMZLGQTGPTSAYAFWKGOHHDHVFUQGTNIDGCRCMMZEKG");
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
    msg.setTimeStamp(0.478487131752);
    msg.setSource(59447U);
    msg.setSourceEntity(46U);
    msg.setDestination(45088U);
    msg.setDestinationEntity(187U);
    msg.op = 229U;
    msg.goal_id.assign("FSQIWLTVTNICSSSARZSTPMFZUMWGQBNRIWAPLHVRNFZXIUABOOYTOEATDIMHWIRLFHFKHWHCHFPGBAXNKYOOEFNUKQHDNNNJTKYJJVYQELSDYEUHLBWDEDKQYMVCDADXDOCXVBSJWGASBICLVPBZVYJGVCMDXHERVEOLOKQGUZIGBWTXXMQNGLSGZLXAVIKYMHUECUQEJPQTWFXPDC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VXMJSNHXSZAWDTVNRLZMPNPAIQQYBYQHWYBIGSDXXZQEUDZUFKEJDZLKKBUIZYPNCXNCTFFXBROVOGTAVAMEGLKSTERQUTRFOFFFOWLGNXKVDSEHUBJRWCLPORBVXLMUYGULWYRZAMMMYPNDKJOYPEWYQUDUGRPIPTTIZTSBEQIDDWAGPKPUIMHTJHVWOQECGKFCWZCIAHABSHQBVEJILJXGGK");
    tmp_msg_0.predicate.assign("UYWIIIWLQTWXIPYYEPXZOJUILSVYFSCGFXLNFLOLSXCYDXURROBMBNMKFUMPVMBHDRUILEKKFCHAZPCGJGE");
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
    msg.setTimeStamp(0.0383676627244);
    msg.setSource(33324U);
    msg.setSourceEntity(102U);
    msg.setDestination(14751U);
    msg.setDestinationEntity(130U);
    msg.name.assign("PLSHNYQHSAXDOSZKQDKKTZMWSGFQXW");
    msg.attr_type = 155U;
    msg.min.assign("YAPTENYSLZUABUDLWGBGMXINHUANICEBDBJEJSBUWSKRVNBCQKAFJYXHTMQAKGOTYTPG");
    msg.max.assign("HUULKIJDWLWJHURUBYHCFCGMFHEHZDTXOLFBMLTRJSSEKWZJDRUQRQIOAYMHUKSRREXLTYLPDAJZDNVPTNBBEALYY");

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
    msg.setTimeStamp(0.0984919785873);
    msg.setSource(52263U);
    msg.setSourceEntity(63U);
    msg.setDestination(6804U);
    msg.setDestinationEntity(155U);
    msg.name.assign("TDAYFQLXRVHUGOQGIGNHUTTNNZSWLOGFHOPEMYEXSRZRIFRVLCZBPNCBRGXQWLKJPWPURAUUYDCRJBFFAOYQOKJWKYZPPQHUPGVSVEPDMTRLMGCTHDSANRXJOJIZJQQHUMSSCXJYAJVTELNXSSJWGANTEHMCIIYDAKMDVJYZWIXPZFXCFZTSYW");
    msg.attr_type = 55U;
    msg.min.assign("WTQVGHJRTMDWRJWAMATCIDOACLBGKOHXLZXLJNOANEHUVGXQDPXVFYJWJRTYMUBGGCIZMYKETPEITRSIGPHIOJYIZKBKJCUUYNEBBOFPSCBRHDSSLCUROOKZAZLPFQDFKEIUOAKAUMUBKCRVBTQYFWAPHJLQTXFVDGOEHENPRPVMHRLWWMLUXQSWXTQNKJEVXWDSPDNNDFGEZYZGRWFEMQCPHI");
    msg.max.assign("CPMEKSEDROSVEJURPOJWXVHNDYDFTTLMZHCNGGSOLSLKDBFANDFLQBQPHYWXBNUVMFNCOETWYOYSTDUFCHOWUFFDSBYYOZBAHQRPUIZCVUHIIQKRWBQAIGBTAXVOGNNQMEQSGKZAJCBPZGAESKCLHUMQIINWPDJLAPMZRV");

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
    msg.setTimeStamp(0.619766016296);
    msg.setSource(12319U);
    msg.setSourceEntity(157U);
    msg.setDestination(45203U);
    msg.setDestinationEntity(129U);
    msg.name.assign("HSGBMRTQMEDOUVTJHVECFSERJNHCGLAMNTWSZOLXMVQPWTYPAOABQAEMPIPLWADIADPYFTQNXJZLPBFVECKKEBLHAYIWFKHTEPJQHVKKLDWDKTWFNUZETHNNKSGCXVNIUTCWYXEIXURUZFVKUWIXGRGGCJXOQGDYXINRHOFYQMWZDSBQR");
    msg.attr_type = 45U;
    msg.min.assign("GRUYMVLUXQDAHCVOICMSYEENFOSGVIRTUDXGNJASCKDBRXWBSPKVBDIRQKWNLCQSEAHXOFCVGBSYHBPMALUPQYNHDKZITLSPGTJOUZPZYURMRPROGTYEQQMIHQDJTOUCAYNTXFYAWZEWKWNJWFRHMGPVBFQELNSKPOZLKFANXBKHEOVOFJAWBIMPFBWOSLITRQXIETDJVFECCZKNDBPZJWYVIMNFGJEMIHSYMUVUCUTQG");
    msg.max.assign("NVIMKXALEILJDIBLZBSQFNEEACLLWUMQSQPDGDZERWLRKDSFNEOXAGFYXPVMIJKIGUDAFZUSUNQHNZTDFPOUTFVBSONJPVHCMUPHBVKEVCMJAXGHAHOCSLRXGOOYNEZRFDRPFPDWEZQMZUCOHVKRETCRFKMMIASMIUGBPUTHNKPNCWVXRYDVYXXA");

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
    msg.setTimeStamp(0.24020325326);
    msg.setSource(3240U);
    msg.setSourceEntity(188U);
    msg.setDestination(35892U);
    msg.setDestinationEntity(82U);
    msg.timeline.assign("CNUTJVNZLQNQGAXXEFJSLPIPJCRAYRXDFTKNPZMNOSGGVWVPYQBUIMRMDCHOXEYHBOUMSQLO");
    msg.predicate.assign("IXANAEZHIMYXSLKIDRLOIQYAOUWRKSWYSCKYLEHGNPOVYYLATPNGLZKPEAJVMGNYAXXPXTUMBDULXGMHAYGRKDFHCFNGRBVJSDLSWIHDDGJQFOVFQJPBQEZAGQTBKURPSWLPNNZZRCATTFSWVWRVKFMSECCUZMUWTRBYFKQ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("JZYCAQPMARIUKOSOTJBNDUHFFM");
    tmp_msg_0.attr_type = 138U;
    tmp_msg_0.min.assign("BIRLXFLRRZSMZPWMBCDGGLPDJDAXPZQOWXPSIMIEGAQFLNFUKJPIUOKASLJJYZCVMCWBIOKEAREZLQDVAOUDKARANBYMEROQNJHPGSQKBTGPHBPGYSQBZGNXZANYDHLBZTXYFQFJURTOHZWSPETOCMDFVWOEBZHRTWBWAXVKTPVHUTCWVSSNEMDYVMHQDHJLFXNUYUFKMSKJIHMHLIYOGXJTQIFURQEFLKWOUYYDGGVNXN");
    tmp_msg_0.max.assign("ESWSZFUQZSUWLYIESLCGJPFDMNIOTGPOPUYHLKPLAHQVTKDRTOZCBRYVUBECTPGMNJCIEWBHGRJ");
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
    msg.setTimeStamp(0.340220044972);
    msg.setSource(24189U);
    msg.setSourceEntity(210U);
    msg.setDestination(42722U);
    msg.setDestinationEntity(233U);
    msg.timeline.assign("CHUWQEGEELITJENZUJNZWBDCRFLVFBSGVZORNOVCCWCUYYPRBOPMXQPHKCSEEBLGREDOZVRXFPFCABWYQAYKCKEIPIMTBNJSSAZIYZVEPMHMQMAJAXHDCMRLDNLLLNLVTLPWUXHXUUXZGFBDBADFWHRKIVIMWIAHBQ");
    msg.predicate.assign("MJVERBRYLESCCZNWPJYYLVOQZPIDFETMRTJJIVNQRZJMUNLXICJKTRLTTGOMCHWKTVUOOYPKBTDFHXKXQGLPFDIURNZSJANHGVEUFSWWWBDKCIOYIDHPBMJQPAEQGUOXUYRIPMSTKNEDLZFOMXWBKZAYOSTQWEOEWSRYVDHVXRBU");

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
    msg.setTimeStamp(0.717248078976);
    msg.setSource(60123U);
    msg.setSourceEntity(34U);
    msg.setDestination(16552U);
    msg.setDestinationEntity(207U);
    msg.timeline.assign("EGVOASKRMOIODLIKPEDQCVVINMIJLQQXWWPXJDCBCOQRWFONUUHDWKUAVGEIYJEBJBDWYVTEPCHCE");
    msg.predicate.assign("COVKRBQQZKNNTZGDQPSNLFJSMJKCKIEBXALMWPGTHXNCSPOJLEYGRDJXZSEUCHNHLTRMJAXXLHLXOEMIFZYURXPXHJDTTPRLGDYUAZIUBIZFFOSLSUUKQVGERFKBCIQRDDOAJ");

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
    msg.setTimeStamp(0.485505826745);
    msg.setSource(36652U);
    msg.setSourceEntity(155U);
    msg.setDestination(56425U);
    msg.setDestinationEntity(239U);
    msg.reactor.assign("ERYZKVYQQVKUTJIZAWNUEPGXZDEXGBONWZCPFDDDAHVDIMKJHHFWINRPHGEAGUCCBKFYFWVGZCRORZHBDDXNUJNRVLBFRXNMWUBLUTFEZSFPJVBDYLOLTLYCBOIXGTKIDPKWWCPYGAHIJJPSYNCKHQSAHUOKAKXPXHFMYSUZJSOTKLEMQQSMRCBQXAMPOIJSQJWWVRDBITRYZMGSFGJUQMOTENGQETESALNUAWLI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LBALGIRDUBIECHNKBGNEDRNLNJUQPCXAFELNOEOCIXRWTUTEWUEZAQRZVVHFBJZVJBTYMYNDGSZMUJQPFDIJSNMLWLMEPXTSLXAUKSAXMWWEYVBYWFTLYYVQKCBISBNKSJZRRHNMMIUVKZIXSWOWJADPGVORQQFHDOWCHXYYIKHGFAGSKNCURHJTFGJZKFFFCXXACQBVUAWPLOBZGLZMXGGHYEVTIOSDHTDPQICKYDJMPTQQOHTOZVAD");
    tmp_msg_0.predicate.assign("YXAOROZYSHVNKRUVFDBGOXOCPEPQIAPJHYKLVFAIQELLPYEQXNVSPKCOKHYKVDACFZFQWMCKKWDGEGRTBWBEBEINWXYFDSMROWRKATTDBJHMLISBQLIGPSOOZWYCZBRIMUUXLJTMXGNGUZXMERTGONWIGXATNFXIOATNUDHHACPNREQQTFPUUZVRFTNSDYMDJJZZARJJ");
    msg.tokens.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.339438410729);
    msg.setSource(36895U);
    msg.setSourceEntity(134U);
    msg.setDestination(63424U);
    msg.setDestinationEntity(82U);
    msg.reactor.assign("WYRQTFNULBRWVAJOGMSFYAIFQSPSHG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BBMGOKQKZKGMJVRSTQQHVGVVNVTIEYAVCLBBMRUDDXREOECEOWEZBHXYFCQDKJZALQHFTRHFNDRCYLNCXRYNJTYIAZOP");
    tmp_msg_0.predicate.assign("TNFNLKPPAQAQDWMHUEHQHPNISZMEAZKWUHSCFXEJGFKCQGARIQFQXRTNKSVYNVSJVEJOBCRBHTSOJMAMWMRLEYQSOKPMKRMEFMBFKMFIXVNYHRMXDPVIIVTZCXAWTTAPYIIXBFDCKXZZHJSRGGHKCOQIGDFBHSPNTLCXUVFRGLBYDTZJEJOLCJDQGUBELIYCRYXOIAWODOLDDWYJNALONZUEBWLVJ");
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
    msg.setTimeStamp(0.506529096347);
    msg.setSource(4837U);
    msg.setSourceEntity(103U);
    msg.setDestination(57672U);
    msg.setDestinationEntity(167U);
    msg.reactor.assign("FMXQBHTPJYSOGMTPGUEPCELGRWPGBAYBTUZSDNNLLYVTONNCDUEDAIKGJGWPPKKIKUPECXZVJKHJUCNQNBKYRANVRTWTPOYBKFMOOFEYROALHHBXNEYVVFXWVWMEADZL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IEOTSCLKAJHLJHDSHIAJOXMFQFBFPXVQKOYZMHZLMCIUPQEHCRQPAHYJRXLDTRWGWIYDTEGKPESZUDVNQXTWGYETYSNGSLPBWDGYBUWUHJYSZJWPNBIGFBUVSKIKROFWRRMBLZAVVBRNRPJNEVHJNLGROACHFXMYHALXEFKZCXGUQQDPANTNFPFIYVCAKTUNJGCCQDTZIZRQSWELUTO");
    tmp_msg_0.predicate.assign("VEVBSADGIOHLDUJPZLCVMEKTLXKXJUWRSXSRWZEO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CTQFSZWHOIOOVWBAALGPKTUXN");
    tmp_tmp_msg_0_0.attr_type = 101U;
    tmp_tmp_msg_0_0.min.assign("TRXJZFIADACWKAUIFDPUMMQTPEHZOCXMBJQTASLVKOFBDVYMOAVNWHDOFXCBAZFESGIEOMMNFQNSYESLLRJWGLNDBHUZEVEYOPUAHXSTNJATXFESSRTQFEIRJNPIWZTQLIGGKBLGVLBWPKEYDYRSWVITLJAIKKKDCRMRXPCKIYSOKWRSDWUXCCHVDQYPWNPEOBYVHJBGMOKVQPYZ");
    tmp_tmp_msg_0_0.max.assign("KOSUDOBWQDNCRRERPYKYFHDXHTLODNQV");
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
    msg.setTimeStamp(0.464265177024);
    msg.setSource(17909U);
    msg.setSourceEntity(230U);
    msg.setDestination(6630U);
    msg.setDestinationEntity(228U);
    msg.topic.assign("VBSZZTRGTURLUWMMKJFQSAQYZKMTHUQIPRXUKHCCOSRVCHKHYJOLXGTTSCFGEUVNILQJDTENKFMSANEHTDYUANSAZTWSTXVONFVCEYLZXOXZMMJONLRXHMUIJKNJPXRYWEYQYEGOBEWBADIDJHOABMWCLOFDXNHLAIFYZOGEGFVBBWKCDCQWYUELBUQKOGIRDXWKIEIJZRYFPVIBJVDVAPQKTGNHWMJV");
    msg.data.assign("WKNQXZTCXGAWIWD");

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
    msg.setTimeStamp(0.929075867318);
    msg.setSource(31757U);
    msg.setSourceEntity(163U);
    msg.setDestination(21997U);
    msg.setDestinationEntity(93U);
    msg.topic.assign("RDLKYMPVMLWBBZYBASIOYZPJGRIPEOWPDXTZMHAJIEVQAIEFEGNXDENNTYOWQLDIAJKYVJNFSRQRDLMETUAZHHOJQBVMLXDCFSOCCFOHCKNPPDMRRYKKKIOBGZIKEUTSLJTUXUGPSOFWZJNXCASITHEPFSAJNMQXMJESBGVYUXSGGLUHYBBBGZXDIWAPHJGOAKLRAGUVKWDPQYWLBHUUUCWFVEFTQRFSVYWRQNMHTHZKWFCTCVQQZMLRC");
    msg.data.assign("LRGMCFOKPYGXPXKNBLIZCXHVAOKNAXKGFVUTJLPRUZJUETQIQOXNZHBYXX");

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
    msg.setTimeStamp(0.24436744179);
    msg.setSource(2131U);
    msg.setSourceEntity(38U);
    msg.setDestination(47566U);
    msg.setDestinationEntity(172U);
    msg.topic.assign("CGGJHZQGSVAFKPYGZZTQOBLSZJXUEDRMYLUGWTCQFEPVLFSNSLYMUFPYIJNOJJE");
    msg.data.assign("VIEVXRTIUFZZGNLBUJKSYAHTWBPKZJOWJZGSMOPIBIYDGLEIXGNECYBBTOIRXNVADFCTMYKRCIAVFKVSJYRXCNZUQPXAWMMJZDRZCEWLTQVVQSUJXTANQURYLZEDTKDNGJBBOAOYHUHARQGQPPFLPSHVKILMGNFEWSFRJOWBIC");

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
    msg.setTimeStamp(0.836302508597);
    msg.setSource(64940U);
    msg.setSourceEntity(181U);
    msg.setDestination(57616U);
    msg.setDestinationEntity(208U);
    msg.frameid = 0U;
    const char tmp_msg_0[] = {43, -8, -78, -33, 77, -85, 73, 57, 69, 69, 75, -36, -112, 14, -118, 84, 83, 3, 107, -19, -1, -72, 108, -17, 79, -40, 26, 24, -68, 16, 34, -22, -35, 22, 10, -92, -15, 11, -71, 37, -27, -57, -28, 30, -51, -92, -107, 97, -111, 71, -35, 111, -108, 120, 10, -48, 37, 23, -123, -123, -97, 10, -33, -3, 17, 98, -41, -77, -83, -41, -70, 106, -89, -36, 124, -128, 108, -74, -41, 96, -48, -69, -117, 0, 84, 11, -56, 72, 57, 126, -113, -12, -110, 85, -107, 4, 117, 88, -71, 111, 46, 62, 103, -71, 10, 113, -96, 104, 66, -51, -6, 38, 24, -8, -69, -115, 26, -23, -102, 89, -19, 23, 3, 51, -86, 8, 16, -27, 107, -72, -55, -49, 61, 49, -78, 118, 122, 7, 84, 109, -109, 0, 94, 49, -117, 93, 53, -121, -97, -58, -48, -3, 85, 23, -109, -45, 20, 75, -9, -37, 38, 35, 4, 124, 22, -5, 120, -54, -28, -12, 91, -3, 7, 124, 21, -11, -90, -8, -3, 57, 92, 112, 102, -27, 117, -56, 86, -115, 116, 99, -51, 125, 59, 46, 74, -96, 73, 87, -70, 110, -58, -117, -39, 41, -21, 16, 31, -101, 2, 101, 37, 114, -14, 92, 70, -90, 18, -97, -116, -49, -117, -79, 103, -94, 12, -38, -96, 50, -44, 103, 24, 4, -87, -97, 114, -1, 20, -53, 24, -125, -6, 65, -126, 124};
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
    msg.setTimeStamp(0.676929305688);
    msg.setSource(40605U);
    msg.setSourceEntity(229U);
    msg.setDestination(34044U);
    msg.setDestinationEntity(231U);
    msg.frameid = 233U;
    const char tmp_msg_0[] = {97, 8, -9, -38, 107, 114, 29, 110, -17, -60, -6, 58, -20, 25, 51, -118, 38, -82, -124, -20, 76, -11, 40};
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
    msg.setTimeStamp(0.822797338112);
    msg.setSource(41685U);
    msg.setSourceEntity(40U);
    msg.setDestination(21268U);
    msg.setDestinationEntity(132U);
    msg.frameid = 173U;
    const char tmp_msg_0[] = {-90, 117, -84, 124, -41, -71, 26, 105, -119, 49, -62, -7, 71, 41, 42, -94, -2, 21, -10, -59, 61, -8, -86, 121, -7, -124, 63, -98, 112, -66, -6, -50, -38, -77, 26, 102, -103, 14, -98, -15, 42, 120, 52, -18, 63, 100, 31, -121, 84, -46, 32, -64, 103, -78, 72, -95, 103, -7, 120, -38, -86, 17, 103, -2, 2, 53, -32, -52, 101, 107, -108, -82, 23, -118, 46, -109, 58, -117};
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
    msg.setTimeStamp(0.474735238426);
    msg.setSource(9810U);
    msg.setSourceEntity(16U);
    msg.setDestination(55487U);
    msg.setDestinationEntity(121U);
    msg.fps = 15U;
    msg.quality = 102U;
    msg.reps = 71U;
    msg.tsize = 193U;

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
    msg.setTimeStamp(0.493364892434);
    msg.setSource(60084U);
    msg.setSourceEntity(204U);
    msg.setDestination(12072U);
    msg.setDestinationEntity(223U);
    msg.fps = 169U;
    msg.quality = 62U;
    msg.reps = 120U;
    msg.tsize = 192U;

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
    msg.setTimeStamp(0.886401406068);
    msg.setSource(62171U);
    msg.setSourceEntity(71U);
    msg.setDestination(39695U);
    msg.setDestinationEntity(143U);
    msg.fps = 136U;
    msg.quality = 47U;
    msg.reps = 62U;
    msg.tsize = 60U;

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
    msg.setTimeStamp(0.938530156757);
    msg.setSource(37283U);
    msg.setSourceEntity(211U);
    msg.setDestination(61616U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.127179457651;
    msg.lon = 0.619995587871;
    msg.depth = 30U;
    msg.speed = 0.0996150592724;
    msg.psi = 0.152255662115;

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
    msg.setTimeStamp(0.290076489077);
    msg.setSource(28651U);
    msg.setSourceEntity(100U);
    msg.setDestination(24466U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.250969453811;
    msg.lon = 0.302607402134;
    msg.depth = 84U;
    msg.speed = 0.423348628996;
    msg.psi = 0.16729849534;

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
    msg.setTimeStamp(0.38279985885);
    msg.setSource(15934U);
    msg.setSourceEntity(4U);
    msg.setDestination(63657U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.162727886749;
    msg.lon = 0.832766979866;
    msg.depth = 47U;
    msg.speed = 0.584287476192;
    msg.psi = 0.835104895482;

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
    msg.setTimeStamp(0.517589239598);
    msg.setSource(17361U);
    msg.setSourceEntity(253U);
    msg.setDestination(47992U);
    msg.setDestinationEntity(213U);
    msg.label.assign("OAPCNTVJHHQUCTXHZAFKASOYIYPSRSJQRQKIFDRWTJUVFMCEELBXSBKXHRGUBCHASVEWXFUYAOUYVUJATAWKYMFYBYWGPFCGKTJIFDQNNOCGIBQWSTXDCQKPTJNOQZRTOVBQVUDQJZGVNHMZNPDBZEWXGLXLALMXDKGNEEWSWB");
    msg.lat = 0.606624051565;
    msg.lon = 0.31960433101;
    msg.z = 0.717199950222;
    msg.z_units = 59U;
    msg.cog = 0.175675438217;
    msg.sog = 0.4656161204;

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
    msg.setTimeStamp(0.804785669157);
    msg.setSource(9558U);
    msg.setSourceEntity(202U);
    msg.setDestination(16134U);
    msg.setDestinationEntity(46U);
    msg.label.assign("WYWLKFRQJQTHXGEURTJYNBGGBIYLOSTJQBZILKUNNKNDQWEQAPPPSHFZRCKIUCIBHJIWXAHCERZZHBEGKJVGTNMSFUOVBVLOCHZSYYCPMTYPOXVJDAYAPWNIFGZFQXZCPWPTEVAIEUDNLBYDCIYOXAMTSUVOCWDXUEMRWNZKGTSXVLSHTGLWORMYSAXDVDL");
    msg.lat = 0.0295715032425;
    msg.lon = 0.116255307013;
    msg.z = 0.81362203706;
    msg.z_units = 67U;
    msg.cog = 0.431570989452;
    msg.sog = 0.217519670317;

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
    msg.setTimeStamp(0.523538843734);
    msg.setSource(47830U);
    msg.setSourceEntity(187U);
    msg.setDestination(19443U);
    msg.setDestinationEntity(183U);
    msg.label.assign("CXNJUAZYQRYPQCAJOYIOBDVPJSIWRSFGVCJPPMALJNOJIFWTTCIPNIHUKNEITBLLPDMWUOU");
    msg.lat = 0.401675252271;
    msg.lon = 0.263964215069;
    msg.z = 0.989168588439;
    msg.z_units = 113U;
    msg.cog = 0.0212039329489;
    msg.sog = 0.0605560073488;

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
    msg.setTimeStamp(0.433686037152);
    msg.setSource(63469U);
    msg.setSourceEntity(116U);
    msg.setDestination(59505U);
    msg.setDestinationEntity(104U);
    msg.name.assign("FHMHKVAEGVCHNRUOTKEVOUPYPXGMADSCPVYADIBRZTNTQGBWSSBOWCJSDZNHOKYFRBQACJOMPGMKFDVSRILHJFQJQRUEPNRPWWYLDHUXBKTNXGICLREKJLWAPQUXLJQDVBTANZSNJJLZLYJVEZRGYFGWFCFLBSODXBXHYQSAL");
    msg.value.assign("MEOXAQGBLVNUYECKLNDHBVEWVTJXTDGTKMAIQEIFZAGYAKJWSNOZFAOFHLNX");

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
    msg.setTimeStamp(0.944692283018);
    msg.setSource(36521U);
    msg.setSourceEntity(10U);
    msg.setDestination(52278U);
    msg.setDestinationEntity(120U);
    msg.name.assign("IUMVMLEKINVKQSMEQHPFKDPYRGCGZIAYTUFTQVFKMOJSKNGYYJBWWPZXZRTWYGYNTPTEPJXCBWXPRYLHAZNVSBHMAVZTWWSOBCMRAZBLIEPOFQHPBUSNKCIDAGSN");
    msg.value.assign("MFVHZIKLYIJSGGVARQHYBDPEPPLJUDIEFOEBKDAOHSYUFUWITRNZOSZRLPCEVHRYCBQIOXBMVHNCDOVMEREVPJADGLNGEDBOBIZATFTWAZHYGTJAKYJUUM");

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
    msg.setTimeStamp(0.763662713144);
    msg.setSource(52147U);
    msg.setSourceEntity(36U);
    msg.setDestination(35112U);
    msg.setDestinationEntity(224U);
    msg.name.assign("HLZAJSTDXHYBOORLRSKJYWEYUAESUXNBUQUNDFGKXAYVKRDTIXFGGZETAGQZFCVMTLFZZFQQSCMHGLQGKOHJWAPRCWNVNPWHPXOLEBCWRGEWULUYANOCYMOJPXIEDTSJLDQDDXCRBMJHZHSSZABCSVEYPZNDSYAKFDJXUFQTWEYDGEHTIXNI");
    msg.value.assign("BXRBXQJCUPYWQRYFJYLCURVSLVGGTACFSWDTONZKTMODMAXAVECVFNNZHDMAEXGRGZJOPDRYOKINIJHCNFIMPEFXNBKWANZCUDAADUWZQLJUOUEMZGTEXHLTBI");

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
    msg.setTimeStamp(0.0588009255531);
    msg.setSource(37026U);
    msg.setSourceEntity(126U);
    msg.setDestination(39756U);
    msg.setDestinationEntity(233U);
    msg.name.assign("FRXIFOGRUBEPCQWWVZILASAHRJXFTSMUHQPUOPXFDTJSLWKKSGYTREMCDGNOMOG");

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
    msg.setTimeStamp(0.264066982457);
    msg.setSource(25062U);
    msg.setSourceEntity(181U);
    msg.setDestination(33105U);
    msg.setDestinationEntity(42U);
    msg.name.assign("YTBNBRIKVMADLHYXHULMQELBZRDJIHLJACFPHVOTIXDKETJWKVGUXOXAFGKTKMKNAFBZJKRVAUYWDSHDTFYTU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QDDLKQWIVEQNZBQRKEKUCZKLBRFNISRNXXBFVBMRYAEVRFDEGOSDWSYMLJJAYBPXBHQCLWBJFKJYZONACXZNRFJGEDUTMDZOMGICHTYUWVHGKEEHUYZLTENPKFAFOWXTBHTWLQFCTATZBWSGLPUWJVNAUPGQVISOJFSTCGJJIAEYSGKVARCQQTGLZMMKZOOMIXMYHPPACDONHXUIQSXXVPXDAL");
    tmp_msg_0.value.assign("YRPVGUHZPHPKDUNXBWVJKN");
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
    msg.setTimeStamp(0.225545377575);
    msg.setSource(60697U);
    msg.setSourceEntity(113U);
    msg.setDestination(14177U);
    msg.setDestinationEntity(8U);
    msg.name.assign("AYVCKWQTKZLENSFYSIXOSBBAANDAONRWFZKTHHPFRUXFTDUXNVTDPUSNPTPYURMSQMHVAUMSBMBLQCTJOMVXKQJSBYCWHKQMROADWDIITVYSKJKPZGWMCVCEQHVGZEFYOLRYRPNVSXXWNELADJFIZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VMMJBDJTAQKSBIILPZIZKOVZILEYDKUQPNFXPFZPWKXJBMSYSGGEEHTEFFCVRAMNBSDTQPX");
    tmp_msg_0.value.assign("FIMGHSJNWGHSDERQKIXJWOVCIAALMEHZOQWJPDUBATAQBLXJQAGNDCFKNSBPMDLNXKOJYVUKBGWHBZIWHSVEVEOMSFIUSCJICAAXLRPZCWUBYCOYPFHCNRQGGMLHODHOZTPOORPEXRJRQKGI");
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
    msg.setTimeStamp(0.728585812163);
    msg.setSource(13671U);
    msg.setSourceEntity(72U);
    msg.setDestination(4064U);
    msg.setDestinationEntity(72U);
    msg.name.assign("ILKGVILWYUCUMCEHOEJUYIJQZGTHYFLZGGBWOLIZRBAXSKQDIYBUEIMRIWNNOHSOEGYBMJWLKRJMRFFREDSAFZDRURPTTFSNQHMIYKXHZRUMHSONVOCUCXTVPHXSFAGTQVOAPAMCLSVKZKJCUAPYEHVRJTWHBWZJXEGCTDGWIGMTMXNXXBUPZBQEVBEYZYXQAECWNJPOAQLTLNXGUWBPQHSFIFKVOMJNLYDKNCAFRQKDDWASTPDPCPZ");
    msg.visibility.assign("VIVNEFMRYPJCXLAGRMNREXYCWQBSOQWWXWQGLBCTJOUZRQJSCDKTMQPOORMHIEDEDPAHH");
    msg.scope.assign("PDRFBXLOZVAELTQXQNWSTMCLLDXRFHIHXWUYQYJYMZMTLFGJHLWNESBAWAQPDKZOVENUWYRYPVHEYMGWQISGVRIJDJKZTMVZXITYOMFVDRMUPCBXOWBDBNOHJUZSSQVICLLEVNXAGHJUYNHNTQQYANBMGOGGXBDKBAHUN");

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
    msg.setTimeStamp(0.482652915476);
    msg.setSource(35012U);
    msg.setSourceEntity(106U);
    msg.setDestination(42533U);
    msg.setDestinationEntity(92U);
    msg.name.assign("SYFETYRDHMERQRFFUNLAFFNAPCQKTOCZDVBZRMLXWLONQUGINYBUUCELURATAZQJGWMFOKCEXCHDRLBNVIPDEHYOGHPCVK");
    msg.visibility.assign("NIVQBLTVRJCWWTSOMNNCOVBAECSQORJYMDLFAVXBI");
    msg.scope.assign("RAXEUKOUAMROATCMSFXPOBNYVKFZISABCGFGVIMBSFVQODKQPHMZATUMWFZAKMCHUZSDWSRAPAHHTRSUYDUHOQIICRNUDOSLYGQQXBHJIEGKLOZCZXLTLKNCQJEIXEGEYVYMHTXPBLQGCLTMYWKPWJJSTEGDPRDNEQJVVBOXV");

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
    msg.setTimeStamp(0.758974541306);
    msg.setSource(27104U);
    msg.setSourceEntity(254U);
    msg.setDestination(25531U);
    msg.setDestinationEntity(40U);
    msg.name.assign("EVEFAQMCOWNXZAVXEABZAOTPXYUUOATEYSVUDFSNZGNMOTODFSWSMXSYENHJWTKITMEWBOYIFHZCHTZTSVMIKRRPUYQODNDRUHFDVZQJPDNXGQOLLJBCH");
    msg.visibility.assign("PEMBGSDYQOXNABJXARHOWKYB");
    msg.scope.assign("FDRLHRHFCZUCQPZWVQPNPZBAHVASAUYOJEUOIVXSFJZTLNZHXIGJIXONZEYTMPIUABZSKLLEUQKQRJIGEWVRJZPGQQHMCCOOBKYHMUFWALETKFDXNLDHCNCBJFRWEDGXSJVDIMVJW");

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
    msg.setTimeStamp(0.303406143878);
    msg.setSource(61159U);
    msg.setSourceEntity(179U);
    msg.setDestination(36917U);
    msg.setDestinationEntity(167U);
    msg.name.assign("UQGCUOCEMCZZLQSSTIRKRJVDZXFXBPXFBHDKNYRAVSDNWEPTLWYGVGJCLAVWQKJGXFMLYWGKUFLTIPEBZCGWFGZTTYCPJUYLJIQMIRASAIP");

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
    msg.setTimeStamp(0.840950386584);
    msg.setSource(53491U);
    msg.setSourceEntity(167U);
    msg.setDestination(14278U);
    msg.setDestinationEntity(139U);
    msg.name.assign("EUQNWBGADGEFTSDBYUWSNDVPWLBEVXMMGIMHHLLYVGNSSLTDECJFTCDKKVMGLWOMJXXAZCRZOQAMBUOGOYHEWUSOXHWCHNQSKDTRSPPBXTUUUOLMSLMAUIXVDAAHHYYZGTTQRDJKQRRYWFCUFFIVMOCZKHVKPROAXZMBUNJXPBJENKTPFGWASKYAVYQ");

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
    msg.setTimeStamp(0.998432121995);
    msg.setSource(32181U);
    msg.setSourceEntity(215U);
    msg.setDestination(57208U);
    msg.setDestinationEntity(61U);
    msg.name.assign("USJWHMPZFXKVVYQBSLKJTEUTROHYNHJIMVEWIBHNHNDWBWDWYVPPUEVYPORZJLCJPQYGABXVUXRTPLRNKAGMPTSAEIWSKLTLFBXIMDCNSNMERUFWHSGKZTEZYBDONMYOJFLIYGOQITGDPOCVLZRBNKXLTBCAEXEHFSZTSVZGDAZCJUCFQARFOLUKYPGGXJCMIZQSQDWHERMZKACK");

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
    msg.setTimeStamp(0.849849962624);
    msg.setSource(6196U);
    msg.setSourceEntity(218U);
    msg.setDestination(29877U);
    msg.setDestinationEntity(168U);
    msg.name.assign("QYFUKMUDOWHJUYRLZRMMHIPBLGVYQJGBLRDKZIJWGCSJSWNBZMCGIBNAAMYNKVCENKZCDFOAKVXBAPPVJLDDLVOZWEHKAYTFXGXUZVPCFTGOHSIZXHAZQJIRTHECODQCRJEWSWRKXFLBTLNYONWPF");

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
    msg.setTimeStamp(0.83278455259);
    msg.setSource(28514U);
    msg.setSourceEntity(65U);
    msg.setDestination(53484U);
    msg.setDestinationEntity(116U);
    msg.name.assign("OLDAXBEIPLRBHZTGBWYGPOTUADTVXGDTBSSRDYSFLEJBIQLHHLSKQSGZKCYAJTCHLRYUBNSVMJOGGYTCQLVI");

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
    msg.setTimeStamp(0.709286333681);
    msg.setSource(46538U);
    msg.setSourceEntity(220U);
    msg.setDestination(43422U);
    msg.setDestinationEntity(183U);
    msg.name.assign("IJOYOUQHBZSVWCQPCNKRKKSQRIPNNXOGLWTIWZBYDURILEGSWJTSYUVHOCCZTTPPYGJMOVWGQRJSAYDPUANHHGHBH");

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
    msg.setTimeStamp(0.116088815161);
    msg.setSource(3152U);
    msg.setSourceEntity(186U);
    msg.setDestination(55718U);
    msg.setDestinationEntity(101U);
    msg.timeout = 4223847694U;

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
    msg.setTimeStamp(0.560461885242);
    msg.setSource(24549U);
    msg.setSourceEntity(215U);
    msg.setDestination(28001U);
    msg.setDestinationEntity(231U);
    msg.timeout = 26321556U;

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
    msg.setTimeStamp(0.106316661233);
    msg.setSource(7547U);
    msg.setSourceEntity(247U);
    msg.setDestination(52592U);
    msg.setDestinationEntity(136U);
    msg.timeout = 200009684U;

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
    msg.setTimeStamp(0.363959920112);
    msg.setSource(3507U);
    msg.setSourceEntity(63U);
    msg.setDestination(10593U);
    msg.setDestinationEntity(96U);
    msg.sessid = 3585385231U;

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
    msg.setTimeStamp(0.438091356949);
    msg.setSource(52162U);
    msg.setSourceEntity(201U);
    msg.setDestination(18246U);
    msg.setDestinationEntity(116U);
    msg.sessid = 1565745779U;

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
    msg.setTimeStamp(0.297913410726);
    msg.setSource(18191U);
    msg.setSourceEntity(253U);
    msg.setDestination(53568U);
    msg.setDestinationEntity(244U);
    msg.sessid = 1854037887U;

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
    msg.setTimeStamp(0.160058596629);
    msg.setSource(61863U);
    msg.setSourceEntity(45U);
    msg.setDestination(7251U);
    msg.setDestinationEntity(86U);
    msg.sessid = 800651215U;
    msg.messages.assign("DTCQWQBBABFEGDZVTHGVIMTGCLHNRTKUSEREOXFMNMBCIMYYWDWQLNKNUSE");

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
    msg.setTimeStamp(0.0608988417526);
    msg.setSource(34630U);
    msg.setSourceEntity(203U);
    msg.setDestination(57622U);
    msg.setDestinationEntity(91U);
    msg.sessid = 399326590U;
    msg.messages.assign("IWLYFUOGJUENCZADVGQHPXKNFLRLAMWZNBBMYKKFJVHWXSFPDGYPBPBCGDCICIOLGEWMSVBUHGCNSRULCYBQREJUWDEHIOPLQYZXCED");

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
    msg.setTimeStamp(0.9174661187);
    msg.setSource(48725U);
    msg.setSourceEntity(193U);
    msg.setDestination(33760U);
    msg.setDestinationEntity(209U);
    msg.sessid = 3017945453U;
    msg.messages.assign("PWAVSABXHGSWIQRYDJWKUJBKQBMLAIETIUZWD");

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
    msg.setTimeStamp(0.0620798749501);
    msg.setSource(12483U);
    msg.setSourceEntity(166U);
    msg.setDestination(12732U);
    msg.setDestinationEntity(178U);
    msg.sessid = 3492999258U;

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
    msg.setTimeStamp(0.492917658035);
    msg.setSource(6842U);
    msg.setSourceEntity(82U);
    msg.setDestination(20456U);
    msg.setDestinationEntity(76U);
    msg.sessid = 862408439U;

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
    msg.setTimeStamp(0.863436806384);
    msg.setSource(22354U);
    msg.setSourceEntity(52U);
    msg.setDestination(436U);
    msg.setDestinationEntity(217U);
    msg.sessid = 2048506241U;

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
    msg.setTimeStamp(0.626673088195);
    msg.setSource(15164U);
    msg.setSourceEntity(171U);
    msg.setDestination(47591U);
    msg.setDestinationEntity(28U);
    msg.sessid = 71226509U;
    msg.status = 174U;

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
    msg.setTimeStamp(0.504539947077);
    msg.setSource(1533U);
    msg.setSourceEntity(104U);
    msg.setDestination(30692U);
    msg.setDestinationEntity(237U);
    msg.sessid = 3633642202U;
    msg.status = 208U;

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
    msg.setTimeStamp(0.65179420806);
    msg.setSource(18566U);
    msg.setSourceEntity(173U);
    msg.setDestination(5707U);
    msg.setDestinationEntity(214U);
    msg.sessid = 1543185440U;
    msg.status = 111U;

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
    msg.setTimeStamp(0.311263472398);
    msg.setSource(38335U);
    msg.setSourceEntity(106U);
    msg.setDestination(21120U);
    msg.setDestinationEntity(182U);
    msg.name.assign("QKTSLGMAOSGUTYPUXNRACNOLRYRDIENCMLOWWJELYTGPFEKPF");

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
    msg.setTimeStamp(0.593186092153);
    msg.setSource(8726U);
    msg.setSourceEntity(172U);
    msg.setDestination(53305U);
    msg.setDestinationEntity(163U);
    msg.name.assign("IOAXEDPMFODYJXLRXCBAEBLOUHBWQRFEVADTPXYZUUZQHKVSIXYBHWCKNPGVLHVUQCGANYJTXVEPAJLWMCRAEMKJCSMAEQMARFMRPSNHIDYFTZOLEEELFFXQNNRIXQXPPZDCOOJAGKBLPQYCWVSFLROPQSSYNCKVZHPULJUGTTWMHZZTSNKOIUVEWMTTDCROOUISHQNBYGVGKYXBGKMUHZTJDZNBZDISYBJLHJNM");

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
    msg.setTimeStamp(0.935029578964);
    msg.setSource(35015U);
    msg.setSourceEntity(50U);
    msg.setDestination(18831U);
    msg.setDestinationEntity(211U);
    msg.name.assign("UTSVURTURCFNTGBXCMDPUJLRKOPHIHMFHMXLNMUYSTQIADCNMCCZPPCUVVVXVMVSLCMJWGBWAIGEOGGBNYPNLFDLELWLTROQCAGSHKLIKSDOOWFEZBYZVQYYKPKOWJNWQJPYFZAOUVXZIQMEKJAHJEDQZTRQTJMEFJJFUNNRTWDOEHHIWIGYRXBDBERXLHVESBCPQBNJUIFTBHPKFA");

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
    msg.setTimeStamp(0.336036447126);
    msg.setSource(33718U);
    msg.setSourceEntity(160U);
    msg.setDestination(61295U);
    msg.setDestinationEntity(188U);
    msg.name.assign("LWXJYOWEOUSHLMGWWTKJCHIBHJQAVEDGCOTMIZPRPAANXTD");

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
    msg.setTimeStamp(0.430071646619);
    msg.setSource(13028U);
    msg.setSourceEntity(94U);
    msg.setDestination(8514U);
    msg.setDestinationEntity(38U);
    msg.name.assign("BUHYVCWVKCLROZDGOPHNMCNOMSAXARUEZZXAQPNYOQHGAJIZIYEEFKGMJRSMBTYFKUXDHWZYBXCTYUHEXPRWPHMHIURRNKABFOLOJVWVLVLQXKPASEEUGDQIYYNHQIHWGWZZWAAFP");

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
    msg.setTimeStamp(0.815149272656);
    msg.setSource(20294U);
    msg.setSourceEntity(114U);
    msg.setDestination(14035U);
    msg.setDestinationEntity(160U);
    msg.name.assign("PPDSNRISRZFQTNGXOUATFCHBDLZYSYXIKAVJSHINIKRURMDCWAYVJTRUTZEMEILSAGKUZFMEWCWIWPHUSPDQGXVXTGRJCGYOWMCRKPLQDZOALTWMTBOBBANKZCFESVUOE");

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
    msg.setTimeStamp(0.528351428785);
    msg.setSource(56501U);
    msg.setSourceEntity(157U);
    msg.setDestination(23916U);
    msg.setDestinationEntity(83U);
    msg.type = 250U;
    msg.error.assign("PEPMREEVKYSVIKPIWTSWGBZQBHLXMOFDPIZTLNGLWODKDMBXSZLLZBXTYJNPDSRSCRTZTCOAFVOVCRFUNAYYQQDACFDUAENXCG");

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
    msg.setTimeStamp(0.162661946599);
    msg.setSource(11561U);
    msg.setSourceEntity(120U);
    msg.setDestination(65203U);
    msg.setDestinationEntity(254U);
    msg.type = 126U;
    msg.error.assign("GUJNMLEKHLPIZVVUBHOFNQQYM");

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
    msg.setTimeStamp(0.501476115718);
    msg.setSource(36295U);
    msg.setSourceEntity(77U);
    msg.setDestination(51775U);
    msg.setDestinationEntity(169U);
    msg.type = 58U;
    msg.error.assign("LLUZHWZNVXCJGTXTWMUOATGFPBMSAZOMSCSRKOHWPILHXGVNTUYPEFHQMACCTHCCANVRECAMKDMHYINMRVXKBMYBJHRNWDOXKDYJHVZQOHVEJQIXIZLSJOQQTLUJTUPBEGZIJTKEWN");

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
    msg.setTimeStamp(0.260895794623);
    msg.setSource(21312U);
    msg.setSourceEntity(248U);
    msg.setDestination(48814U);
    msg.setDestinationEntity(170U);
    msg.seq = 9545U;
    msg.sys_dst.assign("SITMQFKDDPZXFMZLTYHKOZQBHYRMYCIXJRIGKRMABSVUVWVBPYEDYZCUIWBVCZPMWVECEFXFP");
    msg.flags = 12U;
    const char tmp_msg_0[] = {-79, 11, -38, 28, 86, -22, -22, -71, 7, -12, 54, -42, -44, -60, -88, -99, 106, 109, -80, -80, 0, 10, -116, 41, -52, -18, -10, 23, -23, -26, 104, 3, 68, -47, -27, 86, 67, 3, 88, 98, 23, -52, 30, 15, -94, -92, 26, 1, 97, 121, 40, -85, 112, 79, 16, -25, 11, 47, 90, -121, 85, 34, 95, -44, -35, 3, 79, 39, -55, 103, -106, -34, -58, -78, 119, 64, -9, -55, 112, 73, -110, -24, 62, -104, -115, -119, -1, -124, 118, -10, 3, -100, -76, -115, -65, 0, 4, -115, -116, 101, -55, -64, -75, 36, 86, 118, -49, -116, 38, -2, 75, -26, -127, -127, -90, 98, -89, -113, -28, 33, 104, -19, 60, 79, 117, 25, -3, 46, 84, 84, 69, -91, -56, 22, -57, -35, 29, 23, -65, -86, -10, 90, -68, -37, 38, 78, -47, 54, -13, 89, 35, -52, -40, -43, 48, 115, -110, -79, 87, 48, -29, -42, -99, 56, -33, -9, 51, 103, -24, -113, 31, 102, 41, -59, 11, -30, 117, 6, -117, -59, -82, 43, -10, -65, 105, 123, 2};
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
    msg.setTimeStamp(0.747037684457);
    msg.setSource(49837U);
    msg.setSourceEntity(30U);
    msg.setDestination(56944U);
    msg.setDestinationEntity(122U);
    msg.seq = 8407U;
    msg.sys_dst.assign("EPVAIXCVUJYYCZZUGQFGQAHQVRUJFITTNPCHTORKKWQNUGBIQFADMULLMDATMLTVBJNWXVQNZQYODWUATMBSHNGMLLSIVAVFDDNGXYHMCWFWQECMLPTZFIJBJHOLFESJCOETRSPABXESEFOHKOMEQDCR");
    msg.flags = 96U;
    const char tmp_msg_0[] = {-27, 85, -65, 23, 103, 56, 9, 114, -31, 84, 72, -105, 29, -22, 42, 120, -81, 3, -34, 116, 70, -96, 85, 62, -85, 103, 126, -100, 38, 56, 25, -75, -113, 30, -2, -54, 89, 61, -127, -116, 60, -39, 93, 52, -16, 70, -71, 9, -30, -68, -43, -85, -1, 53, 96, 99, 32, -44, -32, -47, -53, -3, 27, 4, 124, 31, 40, -107, 56, -10, 28, -23, -57, -28, 89, 84, 48, 85, 67, 55, 105, 103, -66, 22, -70, 52, -67, 56, -110, 19, -66, -69, -29, -123, -99, -54, 101, -66, 91, 87, 53, 122, 38, 6, 85, -65, -72, 54, 55, 91, -8, -106, -19, -109, 29, 124, -33, -52, 87, 13, 20, 76, 73, -53, 107, 76, 109, 18, -7, -22, -85, -104, -117, -59, -74, 29};
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
    msg.setTimeStamp(0.167429575364);
    msg.setSource(47043U);
    msg.setSourceEntity(178U);
    msg.setDestination(9550U);
    msg.setDestinationEntity(214U);
    msg.seq = 65440U;
    msg.sys_dst.assign("JQADCLJWUGVGAVFCSKOIPCOCWRV");
    msg.flags = 27U;
    const char tmp_msg_0[] = {113, 19, -18, -6, -81, 58, -67, 125, -75, 107, -78, -97, 17, 120, 64, 61, 77, -114, 1, 113, -87, -38, -51, 42, 107, 94, -62, -90, 109, 40, -91, -84, -80, -26, -60, 71, -13, 36, -80, 72, -78, -82, 39, -99, -122, 51, 104, -124, 125, -62, 125, 100, 105, -40, -32, 16, 47, -11, 92, -48, 5, -86, 3, 65, 68, -40, -2, -123, -81, 27, 79, 56, -72, 99, -50, -98, 16, 104, -102, -39, -98, -126, -15, -107, -105, 49, -13, -22, -4, 23, 91, -88, 23, 54, 21, 112, -9, 119, -26, 39, -66, -63, -59, -15, 123, 98, 44, 85, -26, -99, 28, -66, 26, -96, 41, -17, -120, 43, -126, 100, -17, -68, -29, -9, 23, -105, -12, -88, -25, -99, 37, 84, -85, -91, 74, 113, 102, -90, 115, -69, 49, -32, -50, -114, 67, -60, 22, 40, -68, -65, 56, -55, 100, -29, 62, -98, -7, 56, -80, 101, -125, 2, -75, 8, -93, 75, 4, -69, -14, -116, -114, 44, -95, -24, 78, -55, -42, 19, 3, 53, -90, 102, -89, -60, 55, 117, 82, -33, -25, -43, -16, 58, 116, 12, 57, -54, 62, 7, 90, -47, 117, 78, -127, 92, -1, -83, 58, 113, 96, -107, 46, 48, 4, -6, -13, 121, -4, -91, -85, -10, 104, 87, 108, 85, 2, 25, -101, 37, 15, 49, 113, -13, -81, -59, 90, -33, 110, -61, 18, 114, 86, 19, 60, 99, 99, 49};
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
    msg.setTimeStamp(0.253106677148);
    msg.setSource(54101U);
    msg.setSourceEntity(55U);
    msg.setDestination(59675U);
    msg.setDestinationEntity(68U);
    msg.sys_src.assign("EWRTAOZDPUUJQUXKFKYRCQQCXYSNLZIMCQKLUMHSEOSJYDFTIIFSYVJAGOLUQHIB");
    msg.sys_dst.assign("HYMHDZWETVFFGPUNNQKCAOANMZEHXNTVRQERAZCJTPBBWJVLEFTNGIGCEAUVKJBCGDODHUPYRLIBNCBYMSHFKSPHMGALYUVXDXQJMKWQLZNUFQLPRWAOJLTORSSHSKSBWWFQEUCYMDVABYUZNSFUIIQBIPFKRPQLJHBDGFMBKDAZWYDXTTZDJOSXOVJRZSXFHIPVEEKNIGCIRIXUMXQCRYLWOYMZELHQNVWTTTUMJLAIGOPCCROKAWX");
    msg.flags = 41U;
    const char tmp_msg_0[] = {-3, -86, 63, -55, -99, -45, -67, -102, -36, 80, 81, -36, -104, 1, -81, -117, -63, 63, 114, -87, 83, -13, 7, -27, 75, 110, 4, -18, -63, -109, 115, 117, -68, 5, 26, -27, -92, 64, 45, 25, -77, -98, 6, 79, -33, 20, 86, 95, 12, 73, -23, -72, -32, 120, 18, -109, 56, -59, 75, 104, 53, 5, -128, 99, -52, -62, 9, -105, 62, -91, 118, 117, 29, -85, -109, 26, 98, 121, 5, 76, -55, 42, 112, 51, 115, -79, -105, 116, 71, 2, -71, 56, 53, 68, 88, -110, 124, 15, -39, -92, -98, -90, 51, 126, -116, 78, 111, -70, -46, -90, -128, 19, 43, -75, 64, 67, -5, -58, -63, 42, 103, 61, -75, -128, 52, -127, 112, 29, -6, -114, -67, 113, 110, 68, 33, -85, -53, -16, -45, -127, -4, 97, -93, -97, 50, -73, 45, 57, 30, -102, 51, -127, 88, 10, 76, -110, 44, -54, -80, -20, 77, 125, -49, 91, -56, 109, 112, 78, 10, -71, -52, 81, 57, -44, 29, 14, 58, -126, 89, -13, -96, -49, 110, -39, -73, -75, -43, 121, -53, -51, -45, 15, 101, 125, -85};
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
    msg.setTimeStamp(0.417544614224);
    msg.setSource(44049U);
    msg.setSourceEntity(40U);
    msg.setDestination(56690U);
    msg.setDestinationEntity(25U);
    msg.sys_src.assign("PVIMURCGKHXZXZNCUPXUWKOQKMOXXSWXAZVGOYSYFVNTLKFHGNZYATHXAMEVIIHCZTKMNKUNGWELYJUTBCYZKIORUFRNELDH");
    msg.sys_dst.assign("KGQADPHTXCZZIVZCBDAPPDJEESNUNHBGFTGWHWJKBZXUIIEMQADJDMRCAEOSPJIOXHOYIZJKBWBZSJCWVAEYNRVKDBLCPDTJQBLGISOXYNJYMZSC");
    msg.flags = 97U;
    const char tmp_msg_0[] = {93, 67, 126, 68, -40, 111, 54, 67, -36, -78, -108, -1, 125, -89, 17, -98, -46, -13, -83, -118, -41, 54, 72, -79, 123, 67, 43, 73, -114, 51, 116, -117, 64, 39, 94, 74, -18, 46, 49, -96, -71, 24, -101, -100, -76, 68, -87, -12, -92, -68, 6, -35, 99, 1, 29, -72, -110, 46, 65, -96, -118, 38, -2};
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
    msg.setTimeStamp(0.453220746928);
    msg.setSource(19682U);
    msg.setSourceEntity(242U);
    msg.setDestination(58211U);
    msg.setDestinationEntity(23U);
    msg.sys_src.assign("ABNFCJFXENBIPROSBHGTJHFFYDXNMCJZYUJY");
    msg.sys_dst.assign("YHENDGZROJKHMNPCMDIDFOXCBNRTITWXGQEYLSBYLLQGNUFBTZPMRSLGRTIMUCGKAMFSRZBYVTAITNWKJGLZPQPUYVCZPTYSQHOHXSFLXFBCBAELECUDFMVCIKRIXQV");
    msg.flags = 175U;
    const char tmp_msg_0[] = {61, 4, 48, -82, 67, -104, 59, -90, -3, 80, 17, -123, -9, 35, -6, -9, 91, -91, 32, 28, -128, 9, 65, 33, 98, -89, -1, -67, 55, -124, 82, 92, 50, 43, 118, -63, 50, -77, 47, 22, 25, 52, 111, 47, 20, -103, 41, 108, -14, 57, 107, -15, -118, 121, -21, 72, -4, -91, -8, -41, -118, 38, -68, -119, 42, 112, -18, 57, -48, -23, -86, 9, 56, -106, 47, 85, 107, -92, 17, 103, 15, -20, 60, -84, -65, -17, -69, 41, 116, 71, 95, -83, -84, -51, -119, -35, -114, -62, 107, -6, 18, 48, 72, 89, 2, -94, -9, 22, -41, 38, 94, 68, -95, 56, -26, -91, -28, -45, -38, 84, -35, 83, -20, 121, -114, 35, 8, -14, 78, 31, 28, -73, -61, 103, -122, 100, 16, 123, -117, -78, -15, -85, -61, 95, 3, -83, -12, -108, -111, 53, 116, 103, -13, 1, -81, -69, -116, -28, 34, -24, -43, 24, -17, -7, -98, 51, 13, 1, 103, 90, -101, -70, 12, -104, 68, -32, -123, -123, 81, 21, -88, -35, 95, 111, -110, -40, -81, 109, -89, -118, -14, -24, 120, 87, -94, 75, 26, 65, 69, -13, 20, -13, -110, -20, 61, 8, -66, -114, 65, 60, -119, 58, 58, -99, 94, -25, 10, -96, -100, -104, -115, 36, -68, -93, 42, -65, 58, -3, -26, 78, -104, -118, 67, 99, -17, 17, -80, 101, -19, 29, 96, -35, 64, 117};
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
    msg.setTimeStamp(0.286594812192);
    msg.setSource(42467U);
    msg.setSourceEntity(58U);
    msg.setDestination(21344U);
    msg.setDestinationEntity(121U);
    msg.seq = 29443U;
    msg.value = 205U;
    msg.error.assign("MNIOELQWAUTGSOTWETUNNPSLKPGPHLSJEQIDLYQCXMLGRFK");

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
    msg.setTimeStamp(0.620186166439);
    msg.setSource(14259U);
    msg.setSourceEntity(43U);
    msg.setDestination(16518U);
    msg.setDestinationEntity(164U);
    msg.seq = 29253U;
    msg.value = 56U;
    msg.error.assign("MAXUSLJYHIGWZVAZPPQUQUBBFCMGCIIVSIEUCNWNKQVYGVDJNOVLABPPLBGTZJZORFVU");

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
    msg.setTimeStamp(0.719481829727);
    msg.setSource(9918U);
    msg.setSourceEntity(96U);
    msg.setDestination(17153U);
    msg.setDestinationEntity(176U);
    msg.seq = 27499U;
    msg.value = 13U;
    msg.error.assign("ODNILOQIFODBLGAKYLUJWCHYWMYXCIMHGZNKYNNAKKEWNQFZTDXEXXEYPTROSELOLSACMPFCZDGGOGAPXKKVWDFUHGWPYXQHSQDATWYTQKUARBNVBTRAATQZUCSJNVRPJOVIOFFKBSAXFSHJLESBXJWWPMJFZFBXRDTEVRIMYGMIGCHUIRJECZSMLQKNGYBGVDJJPVTQCZBQFLOLJRYBPPWPAKNSCU");

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
    msg.setTimeStamp(0.0963737025526);
    msg.setSource(40703U);
    msg.setSourceEntity(136U);
    msg.setDestination(26518U);
    msg.setDestinationEntity(39U);
    msg.seq = 1828U;
    msg.sys.assign("YCTVTEIYIXPRQAWFQFCUUAHUSZXENXNQCBODXAP");
    msg.value = 0.676859328175;

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
    msg.setTimeStamp(0.75730777317);
    msg.setSource(61672U);
    msg.setSourceEntity(56U);
    msg.setDestination(27299U);
    msg.setDestinationEntity(168U);
    msg.seq = 35907U;
    msg.sys.assign("ZZJUVPYAWAGYHBOFNDWMRWAFCHQIECKYZJDALBJGQJUXXMXHUVOQDJNYXPTCAFSGWRWEPTHBHOKGDFQKNFZLJINFLCRVPYGLSFNPFMNOXGYEZUMYNMYMPKCTBHKJIRMSDJSZHXOARJZIPZUGCYMTSCBDUIULKPHKAORESLSXSWGWDIZVNEUTBBTOQIXVV");
    msg.value = 0.0591842468774;

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
    msg.setTimeStamp(0.731505296074);
    msg.setSource(29025U);
    msg.setSourceEntity(176U);
    msg.setDestination(33019U);
    msg.setDestinationEntity(42U);
    msg.seq = 59663U;
    msg.sys.assign("TISIOZTVRXBMWHXOHPVCMHTAIQEYJUPXVAQHHRNKCYOFTLSURCRLLEUJIXLMZUDZRYZLGSPNIKBKUXAIQMWURWGHFUPZJYFPEVWNOYDEBZMMBKIVOOSIVBPVECTKBGXNMEWWMQAHXGMSQDDEJWSWZTQFYSJBNJFBLACQALVEUFATKTMYFZNDZIVHJQWUADDPARJKO");
    msg.value = 0.218333076926;

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
    msg.setTimeStamp(0.694748679036);
    msg.setSource(9673U);
    msg.setSourceEntity(237U);
    msg.setDestination(7267U);
    msg.setDestinationEntity(75U);
    msg.action = 91U;
    msg.longain = 0.732490278575;
    msg.latgain = 0.0043225553196;
    msg.bondthick = 1124107737U;
    msg.leadgain = 0.174884381064;
    msg.deconflgain = 0.843937877495;

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
    msg.setTimeStamp(0.118931136682);
    msg.setSource(43371U);
    msg.setSourceEntity(4U);
    msg.setDestination(37590U);
    msg.setDestinationEntity(141U);
    msg.action = 5U;
    msg.longain = 0.889954673672;
    msg.latgain = 0.420869202696;
    msg.bondthick = 654728437U;
    msg.leadgain = 0.235565571143;
    msg.deconflgain = 0.807350996686;

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
    msg.setTimeStamp(0.115398425867);
    msg.setSource(21308U);
    msg.setSourceEntity(79U);
    msg.setDestination(33253U);
    msg.setDestinationEntity(42U);
    msg.action = 78U;
    msg.longain = 0.0656841862616;
    msg.latgain = 0.416169145753;
    msg.bondthick = 552788964U;
    msg.leadgain = 0.362330992618;
    msg.deconflgain = 0.70609662349;

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
    msg.setTimeStamp(0.629325562033);
    msg.setSource(27802U);
    msg.setSourceEntity(121U);
    msg.setDestination(43466U);
    msg.setDestinationEntity(172U);
    msg.err_mean = 0.710009141299;
    msg.dist_min_abs = 0.0836824870462;
    msg.dist_min_mean = 0.15884534229;

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
    msg.setTimeStamp(0.513167028118);
    msg.setSource(33292U);
    msg.setSourceEntity(108U);
    msg.setDestination(43945U);
    msg.setDestinationEntity(246U);
    msg.err_mean = 0.669625072273;
    msg.dist_min_abs = 0.342476377314;
    msg.dist_min_mean = 0.631703420615;

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
    msg.setTimeStamp(0.733757943247);
    msg.setSource(42516U);
    msg.setSourceEntity(196U);
    msg.setDestination(58253U);
    msg.setDestinationEntity(229U);
    msg.err_mean = 0.947892317953;
    msg.dist_min_abs = 0.468581680206;
    msg.dist_min_mean = 0.479299545342;

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
    msg.setTimeStamp(0.876329420538);
    msg.setSource(58181U);
    msg.setSourceEntity(42U);
    msg.setDestination(46707U);
    msg.setDestinationEntity(202U);
    msg.action = 193U;
    msg.lon_gain = 0.378845775822;
    msg.lat_gain = 0.119119763078;
    msg.bond_thick = 0.800774711379;
    msg.lead_gain = 0.365985397817;
    msg.deconfl_gain = 0.4164226003;
    msg.accel_switch_gain = 0.52404104682;
    msg.safe_dist = 0.654890343886;
    msg.deconflict_offset = 0.367703848777;
    msg.accel_safe_margin = 0.664608554524;
    msg.accel_lim_x = 0.788809291509;

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
    msg.setTimeStamp(0.928292674912);
    msg.setSource(39255U);
    msg.setSourceEntity(48U);
    msg.setDestination(36071U);
    msg.setDestinationEntity(19U);
    msg.action = 177U;
    msg.lon_gain = 0.373628020699;
    msg.lat_gain = 0.789253401207;
    msg.bond_thick = 0.122647939759;
    msg.lead_gain = 0.507316990171;
    msg.deconfl_gain = 0.00718228070743;
    msg.accel_switch_gain = 0.0340690728681;
    msg.safe_dist = 0.187207082989;
    msg.deconflict_offset = 0.510233352497;
    msg.accel_safe_margin = 0.681400288746;
    msg.accel_lim_x = 0.417802842008;

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
    msg.setTimeStamp(0.769232929635);
    msg.setSource(15184U);
    msg.setSourceEntity(236U);
    msg.setDestination(3976U);
    msg.setDestinationEntity(223U);
    msg.action = 14U;
    msg.lon_gain = 0.478919079727;
    msg.lat_gain = 0.91759791344;
    msg.bond_thick = 0.346383538948;
    msg.lead_gain = 0.406081130848;
    msg.deconfl_gain = 0.28629020543;
    msg.accel_switch_gain = 0.620320620052;
    msg.safe_dist = 0.539968468564;
    msg.deconflict_offset = 0.0601744552111;
    msg.accel_safe_margin = 0.123110004143;
    msg.accel_lim_x = 0.52980983121;

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
    msg.setTimeStamp(0.964009565022);
    msg.setSource(42643U);
    msg.setSourceEntity(68U);
    msg.setDestination(18126U);
    msg.setDestinationEntity(177U);
    msg.type = 214U;
    msg.op = 119U;
    msg.err_mean = 0.806106116615;
    msg.dist_min_abs = 0.666446832057;
    msg.dist_min_mean = 0.918073082565;
    msg.roll_rate_mean = 0.0363093783591;
    msg.time = 0.32808163897;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 145U;
    tmp_msg_0.lon_gain = 0.325839545957;
    tmp_msg_0.lat_gain = 0.5624969975;
    tmp_msg_0.bond_thick = 0.321189909104;
    tmp_msg_0.lead_gain = 0.315305930659;
    tmp_msg_0.deconfl_gain = 0.607319786812;
    tmp_msg_0.accel_switch_gain = 0.0364315088738;
    tmp_msg_0.safe_dist = 0.598839822667;
    tmp_msg_0.deconflict_offset = 0.339095635945;
    tmp_msg_0.accel_safe_margin = 0.483988123422;
    tmp_msg_0.accel_lim_x = 0.499168349741;
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
    msg.setTimeStamp(0.390024803462);
    msg.setSource(24841U);
    msg.setSourceEntity(195U);
    msg.setDestination(34080U);
    msg.setDestinationEntity(160U);
    msg.type = 131U;
    msg.op = 215U;
    msg.err_mean = 0.520712585762;
    msg.dist_min_abs = 0.473492142709;
    msg.dist_min_mean = 0.268989904243;
    msg.roll_rate_mean = 0.409522663566;
    msg.time = 0.412812987181;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 235U;
    tmp_msg_0.lon_gain = 0.380882856917;
    tmp_msg_0.lat_gain = 0.73257333855;
    tmp_msg_0.bond_thick = 0.11663370464;
    tmp_msg_0.lead_gain = 0.793731951095;
    tmp_msg_0.deconfl_gain = 0.668353129141;
    tmp_msg_0.accel_switch_gain = 0.97203289902;
    tmp_msg_0.safe_dist = 0.599758037662;
    tmp_msg_0.deconflict_offset = 0.825498991556;
    tmp_msg_0.accel_safe_margin = 0.553160688899;
    tmp_msg_0.accel_lim_x = 0.171915624574;
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
    msg.setTimeStamp(0.771326252823);
    msg.setSource(61566U);
    msg.setSourceEntity(171U);
    msg.setDestination(56164U);
    msg.setDestinationEntity(121U);
    msg.type = 204U;
    msg.op = 19U;
    msg.err_mean = 0.251417752987;
    msg.dist_min_abs = 0.343067519138;
    msg.dist_min_mean = 0.192352715317;
    msg.roll_rate_mean = 0.172246370085;
    msg.time = 0.721618727421;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 195U;
    tmp_msg_0.lon_gain = 0.401853378263;
    tmp_msg_0.lat_gain = 0.0459706558686;
    tmp_msg_0.bond_thick = 0.0799860724503;
    tmp_msg_0.lead_gain = 0.465220387103;
    tmp_msg_0.deconfl_gain = 0.418483595367;
    tmp_msg_0.accel_switch_gain = 0.405433063191;
    tmp_msg_0.safe_dist = 0.652369040498;
    tmp_msg_0.deconflict_offset = 0.912864118951;
    tmp_msg_0.accel_safe_margin = 0.666041442193;
    tmp_msg_0.accel_lim_x = 0.241651537681;
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
    msg.setTimeStamp(0.414084674187);
    msg.setSource(15026U);
    msg.setSourceEntity(196U);
    msg.setDestination(19673U);
    msg.setDestinationEntity(135U);
    msg.uid = 142U;
    msg.frag_number = 183U;
    msg.num_frags = 246U;
    const char tmp_msg_0[] = {108, -102, 122, 67, -70, -28, -95, -125, -69, -2, -108, -21, -2, -126, -67, 71, 37, -50, -32, 52, 40, 83, 39, 59, 78, 17, 17, 48, 51, -118, 107, 53, -62, -107, -119, 39, 46, 111, 27, 60, 41, -28, -103, 105, -27, 72, -90, 26, 112, -55, -17, -111, 90, 1, -56, 19, 20, 41, 49, 23, -46, 49, 62, -19, -124, -29, -19, -123, 102, 51, -21, 105, -88, -123, -79, 104, -124, -62, -37, -106, 41, -16, 22, -107, -64, 119, -101, -108, -114, -39, 23, 110, 21, 13, 102, 94, 55, 40, -85, 92, -37, 126, -65, 114, -61, -80, 36, -48, -37, 106, -103, -6, -105, 126, 53, -61, -66, 101, 10, 29, -57, 17, -72, 102, -119, 106, 20, 122, 56, -96, -116, 121, -104, -36, 19, -112, 54, -23, 36, 76, -87, 96, 118, -55, 42, 12, 31, -2, -126, -4, -58, -6, -125, 33, -55, -3, 115, 62, 59, 105, -57, -88, 7, -19, 67, 121, 9, -34, 84, 108, 123, -63, 51, 14, 124, 3, -123, -58, -77, -81, 66, 29, 52, 53, 101, 115, 7, 57, -75, 19, -123, -88, -95, 88, 114, 21, -117, 73, -61, 91, -65, -34, 14, 62, 13, -61, 125, 9, 51, 12, -7, -82, 121, -93, -95, -19, -26, 78};
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
    msg.setTimeStamp(0.203158709315);
    msg.setSource(12506U);
    msg.setSourceEntity(70U);
    msg.setDestination(32520U);
    msg.setDestinationEntity(135U);
    msg.uid = 103U;
    msg.frag_number = 208U;
    msg.num_frags = 240U;
    const char tmp_msg_0[] = {38, -103, 21, -109, -71, -98, 50, 42, 29, 54, 46, -10, 32, 89, 120, -71, 86, 64, 100, 47, -114, 125, 12, 97, -105, -121, 77, 114, -29, -6, -93, 89, -71, -95, -52, 45, -62, -37, 27, 90, -30, 90, -96, 96, -103, -112, 105, -46, -106, -56, -58, -73, -90, -12, -4, 68, 32, -55, 79, 106, -64, 15, 41, 71, -23, -115, -41, -67, -76, 69, 35, -73, -49, 125, -8, -48, -126, 38, 77, 108, -48, -126, 53, 79, 122, 58, -98, -23, -41, -88, 86, -119, 110, 104, 20, -89, 119, -23, -108, 61, -41, 94, -6, -34, 18, -77, 95, 105, -86, 0, -99, 43, -117, 37, 111, 94, -77, 25, -54, -84, -12, -71, -116, 94, -53, -115, -15, 54, -96, -66, 48, 20, 30, 14, 122, -122, -1, -94, 84, 121, 108, 25, 7, -76};
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
    msg.setTimeStamp(0.979526178641);
    msg.setSource(29858U);
    msg.setSourceEntity(44U);
    msg.setDestination(40132U);
    msg.setDestinationEntity(59U);
    msg.uid = 99U;
    msg.frag_number = 28U;
    msg.num_frags = 112U;
    const char tmp_msg_0[] = {-56, -106, -127, 89, 122, -104, 42, -5, -86, 124, 124, 87, -111, 2, -120, 36, 125, 59, 69, 112, -14, 119, 97, -62, 96, 14, 72, 83, -54, -117, 67, -17, -106, 5, 34, 36, 125, 105, -107, 107, -88, 110, -2, -98, 58, 61, 114, 62, -50, 71, 16, -51, 113, 44, -83, 121, -60, -127, -72, -108, -123, 54, -99, -84, 104, -91, 91, 11, -92, 125, 14, -68, -102, -50, -113, -70, -114, 57, 85, -46, -67, -61, -63, 90, -100, 101, -96, -126, -31, 14, 52, 99, -57, 66, -91, 108, -91, -75, 33, -76, 15, 100, -95, -96, 81, 43, -106, -66, 59, 21, -100, 25, 75, -6, -77, 32, -56, 67, -123, -113, -125, -107, 62, 2, 16, -84, 126, -122, 94, 41, -68, 70, -95, 12};
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
    msg.setTimeStamp(0.185673285667);
    msg.setSource(47322U);
    msg.setSourceEntity(12U);
    msg.setDestination(44647U);
    msg.setDestinationEntity(124U);
    msg.content_type.assign("VVGSPXYOCYBVAIJHUYCCFUMWGSXJPFBTCBNHDSSZUPEIRAVJA");
    const char tmp_msg_0[] = {-118, -117, 119, 50, 65, 111, 104, -30, 27, 37, -18};
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
    msg.setTimeStamp(0.480657340564);
    msg.setSource(27142U);
    msg.setSourceEntity(70U);
    msg.setDestination(56709U);
    msg.setDestinationEntity(19U);
    msg.content_type.assign("YWGCAKZJYPWOERFPNAPMCLFJZOIBCDLMUSDPGXTCSBEDUSSVBIRPQPCRQEHIMKZIXFBQYLJAKYDNIUEPNFHDHTMUULUIIUWECVALBPHMBTHFFFJEURYDTDRWSDHZJVGHXBOHFRISNZXJHVWTESLTLQNNXCVMJGVKQGMJYSFZUOTGTWSXXCQZVMOQYWZCKZOMGUPYWAXKRAGDNIBKCOVENQKOF");
    const char tmp_msg_0[] = {-44, 68, 37, -93, 115, -64, -103, 96, 95, -15, 107, 109, 19, -102, 31, -24, -99, -61, 67, -50, 53, 66, 105, 66, -33, -8, -93, -82, -68, 125, 96, 27, -23, -61, -105, -101, 76, 21, 95, 71, 8, -49};
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
    msg.setTimeStamp(0.900080150791);
    msg.setSource(18893U);
    msg.setSourceEntity(164U);
    msg.setDestination(2919U);
    msg.setDestinationEntity(15U);
    msg.content_type.assign("HLEVVDROEBGQBBRNBLSCYITRCTVCTJHJNVGSMHQJWUAEAZRZFMFXGABIHNVLOWIKPGZMJHQUXMRKOOKKZJWVDZRNKZBEVLPQXIQARFTWPGEUNKCSCESXTLRQPOSPMDNDPYFFTQRLHPYQNDKCYDAINRTJMWDYDGJYMMIWZIWOHOLYHGCPBBZSSBJKYEOAAOIPTENXNTIOABXKFQUXAUEGZCX");
    const char tmp_msg_0[] = {-79, 102, -50, -33, 62, -106, -106, 50, -46, -56, 91, 61, 51, 2, 20, -70, -112, 79, -35, 55, -10, -82, 107, 120, 12, 111, -64, -77, 52, 94, 59, -51, -96, 59, 92, 114, 76, 90, -101, -10, 10, 73, 117, 47, -38, 95, -8, 6, 14, -47, -3, -56, 108, -58, -99, 97, 10, -116, -24, 57, 8, -36, 47, 10, 59, 47, 21, 98, 124, -52, -68, 33, -11, 7, 23, 70, -37, 78, 105, -24, 109, 112, 104, -108, 100, -104, 56, -87, 23, -34, 116, -79, 53, -65, 40, -66, 35, 35, -34, 98, 20, -126, 61, -94, 68, 81, 89, 27, -11, 43, -72, 51, 94, -29, 56, 72, 30, 93, 124, 69, 121, -101, -8, 24, 102, -116, -95, -45, -83, 90, -69, 82, 67, 64, -7, -100, -40, 28, 48, -60, -8, -80, -43, 110, -104, -24, 35, -87, -45, -10, 84, 116, 85, 32, 60, -93, -45, -83, -85, -19, -113, 18, 119, 38, -58, -24, 95, 78, -32, -118, 47, 89, -12, 31, 63, -71, 113, 24, 23, -34, -128, -16, 124, -52, 37, -124, 13};
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
    msg.setTimeStamp(0.522131109201);
    msg.setSource(23380U);
    msg.setSourceEntity(236U);
    msg.setDestination(55274U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.264086275109);
    msg.setSource(29900U);
    msg.setSourceEntity(170U);
    msg.setDestination(7107U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.156123753724);
    msg.setSource(62638U);
    msg.setSourceEntity(102U);
    msg.setDestination(48935U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.81796779682);
    msg.setSource(49935U);
    msg.setSourceEntity(115U);
    msg.setDestination(13252U);
    msg.setDestinationEntity(187U);
    msg.target = 4228U;
    msg.bearing = 0.933842161785;
    msg.elevation = 0.442712880087;

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
    msg.setTimeStamp(0.486794971496);
    msg.setSource(61678U);
    msg.setSourceEntity(125U);
    msg.setDestination(62348U);
    msg.setDestinationEntity(17U);
    msg.target = 52737U;
    msg.bearing = 0.443482887839;
    msg.elevation = 0.820425137427;

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
    msg.setTimeStamp(0.361759715719);
    msg.setSource(44825U);
    msg.setSourceEntity(209U);
    msg.setDestination(11697U);
    msg.setDestinationEntity(20U);
    msg.target = 27743U;
    msg.bearing = 0.339917639268;
    msg.elevation = 0.826756606797;

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
    msg.setTimeStamp(0.203862479203);
    msg.setSource(49234U);
    msg.setSourceEntity(129U);
    msg.setDestination(11553U);
    msg.setDestinationEntity(124U);
    msg.target = 51301U;
    msg.x = 0.620408732437;
    msg.y = 0.103598728737;
    msg.z = 0.0417664526311;

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
    msg.setTimeStamp(0.344804295047);
    msg.setSource(47278U);
    msg.setSourceEntity(200U);
    msg.setDestination(61354U);
    msg.setDestinationEntity(230U);
    msg.target = 55073U;
    msg.x = 0.333138945651;
    msg.y = 0.0984411370392;
    msg.z = 0.898758555899;

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
    msg.setTimeStamp(0.691222636183);
    msg.setSource(16260U);
    msg.setSourceEntity(97U);
    msg.setDestination(14359U);
    msg.setDestinationEntity(2U);
    msg.target = 38160U;
    msg.x = 0.660578001476;
    msg.y = 0.167348773802;
    msg.z = 0.282599687241;

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
    msg.setTimeStamp(0.0404601920727);
    msg.setSource(7268U);
    msg.setSourceEntity(194U);
    msg.setDestination(5997U);
    msg.setDestinationEntity(221U);
    msg.target = 32740U;
    msg.lat = 0.148531603763;
    msg.lon = 0.930776486745;
    msg.z_units = 152U;
    msg.z = 0.17127737337;

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
    msg.setTimeStamp(0.293094974947);
    msg.setSource(36249U);
    msg.setSourceEntity(131U);
    msg.setDestination(15181U);
    msg.setDestinationEntity(217U);
    msg.target = 39214U;
    msg.lat = 0.22178954799;
    msg.lon = 0.563084643262;
    msg.z_units = 121U;
    msg.z = 0.197307181007;

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
    msg.setTimeStamp(0.121622900928);
    msg.setSource(31517U);
    msg.setSourceEntity(224U);
    msg.setDestination(41927U);
    msg.setDestinationEntity(111U);
    msg.target = 24820U;
    msg.lat = 0.597234237874;
    msg.lon = 0.10605525102;
    msg.z_units = 128U;
    msg.z = 0.9894010645;

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
    msg.setTimeStamp(0.88591134561);
    msg.setSource(20969U);
    msg.setSourceEntity(219U);
    msg.setDestination(57585U);
    msg.setDestinationEntity(191U);
    msg.locale.assign("PWZSAOXQCOVXSDJTHJVIDUEZAXPBCVGMYPFPMJTYL");
    const char tmp_msg_0[] = {100, 72, 110, -125, -75, -114, -109, -109, -47, -43, 102, 15, -71, -10, 3, 50, -40, 21, 32, -48, -93, 91, 67, -61, 94, 94, -46, 53, 118, 22, 102, 0, -49, -10, -10, -92, 1, 12, 22, 12, 35, -14, -106, -108, -43, -83, 48, 66, -118, -100, -3, -105, 56, 47, 69, 9, -121, -120, -26, -95, 28, 114, -94, -100, -43, -66, -53, -63, 114, -4, -10, -19, 59, -50, 124, 96, 85, -14, -85, 54, 14, 57, -17, 23, -117, -39, 62, -31, 65, -39, -26, 20, 60, -58, 21, 18, -62, -44, 117, -123, 80, 71, -59, 124, -119, 84, -76, 39, -61, 59, -87, -34, -28, 111, 32, 6, -97, 41, 23, -89, 25, 34, -29, 112, 88, 119, 36, 73, -125, -82, 33, 30, 41, 28, 14, -45, -88, -74, 123, -35, -10, 17, -80, -80, 124, 10, 124, -94, -52, 11, -17, 84, -9, -92, -12, -38, 88, 125, -107, 66, -57, 88, -94, 22, 46, -11, -92, -4, -90, -34, -125};
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
    msg.setTimeStamp(0.397827870499);
    msg.setSource(24970U);
    msg.setSourceEntity(139U);
    msg.setDestination(53428U);
    msg.setDestinationEntity(87U);
    msg.locale.assign("APWGEYWCLBEUSIYYGDXMVFHQKFLQIDYXIONOOMWJVMJGGVSXAIHIHTERZNUIKXIBMRWQZGEFKQKKRPDWLBCRLQBTDDQNSSFYQBZFNRPTSVEMJANZUUJOOIMWJEPVVLSEPADBVTOPOYNWPGGLCBQRNHQURAOHWJHCZLTLYAUFKMQDFZAXTEXKLEXJUROFBNKEWDUUZBNBGMHTZGDPYSRHRZPHCJVJOKPSVIICVXAMTWCNUCFXCH");
    const char tmp_msg_0[] = {96, -103, 28, 45, 13, 77, 7, 74, -44, 103, 102, 14, 71, -39, -111, -97, -78, -31, -54, -38, -102, -36, -49, 91};
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
    msg.setTimeStamp(0.346873540203);
    msg.setSource(45543U);
    msg.setSourceEntity(49U);
    msg.setDestination(56238U);
    msg.setDestinationEntity(25U);
    msg.locale.assign("QLQTOQRSQVOJOUMUBWYDXQFMGDAEFZPOXANNXDNCTVEIZWNYNIHWKBSKNCHQHGDJNMXAHSPULICRAULXBKMZXELXCZIPKNCJKTTIFQHSMFDMLFXGNERILCUWVGKAVHRSSKBTJBBOPDEJHHOWCTZEWG");
    const char tmp_msg_0[] = {-7, -79, -59, 89, 62, 55, -69, -93, -90, 85, 19, 69, -16, 82, -76, -103, 12, 122, 3, -103, 30, 84, -80, 38, -18, 85, -78, 126, -109, 120, -24, 25, -34, 80, 39, -90, 1, 99, -126, -98, 104, 35, -103, -71, 94, -26, -33, 79, 16, 89, 107, -103, 49, 77, -96, 116, -12, 16, -90, 95, 27, 80, 103, -85, -79, 59, -14, 102, 3, 5, 110, 43, 59, 59, -38, -7, -63, -100, 2, -17, 52, 4, -113, 15, -104, -79, -94, -7, 39, -106, 21, -34, 126, 89, -49, 24, -11, -29, -15, -31, 23, 119, -12, 33, -20, 52, -61, 126, 71, 77, -109, 90, -20, 50, 110, -75, 54, -66, 71};
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
    msg.setTimeStamp(0.617196732489);
    msg.setSource(11478U);
    msg.setSourceEntity(29U);
    msg.setDestination(65529U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.889928627689);
    msg.setSource(14156U);
    msg.setSourceEntity(250U);
    msg.setDestination(11810U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.814055196139);
    msg.setSource(49955U);
    msg.setSourceEntity(159U);
    msg.setDestination(53279U);
    msg.setDestinationEntity(31U);

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

  return test.getReturnValue();
}
