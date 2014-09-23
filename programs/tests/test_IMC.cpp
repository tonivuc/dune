//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 2082508f7ca90365a9b479251a12d1d7                            *
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
    msg.setTimeStamp(0.120488312666);
    msg.setSource(37222U);
    msg.setSourceEntity(204U);
    msg.setDestination(46634U);
    msg.setDestinationEntity(72U);
    msg.state = 104U;
    msg.flags = 130U;
    msg.description.assign("GJPSMVXSZXEMRLCJXZMQPBNMZNINIDLPFVKEWFQOOIGMKOTACZYGTBQIXRJJUPHRXHBWBJMDNMPRUVDYOVCTWNLHQKHWIXGRICISVGVQKWJVOJHYFYEYUWBCNQFDTLJELAUBSOQFUOFUUYLNXBDOKYRERWRPLFNGWAFUEELDZAHCTHKIZIAGWJWAZALBRUNNYDPSFJGZHTMAHCHZCTG");

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
    msg.setTimeStamp(0.10749047445);
    msg.setSource(52738U);
    msg.setSourceEntity(184U);
    msg.setDestination(30753U);
    msg.setDestinationEntity(160U);
    msg.state = 245U;
    msg.flags = 89U;
    msg.description.assign("SYGNTZMHHYWRXAQFQSEEHMHDLWIVXGCWNIFSGKCZOGYUVLHPXZBLNDIRTLTGKKAQIWBVR");

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
    msg.setTimeStamp(0.268996808864);
    msg.setSource(59412U);
    msg.setSourceEntity(5U);
    msg.setDestination(61670U);
    msg.setDestinationEntity(189U);
    msg.state = 47U;
    msg.flags = 50U;
    msg.description.assign("OTODRPZEPRAHFHEJLUAMVXPMNLJQNDQTBHKAWQZCWFBDATFAPILYGDXDPXYUHAETUEINFRCPKPJAZYARHTRJZEQHGAKRTGUYMMGMBCUFWBVWSJFKOSVHTBOIXIKWZTLXWYXCLUIELZQUOWITIVBXOSWNCLIUYNQVRPFVLOCZRDNCXDSPSHCUQYJDVKSGFZZSXNTJZLKWNSMIYGVKGBPHBSXSNMMBKOMOUQGWGCI");

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
    msg.setTimeStamp(0.188521417647);
    msg.setSource(34202U);
    msg.setSourceEntity(171U);
    msg.setDestination(41817U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.523029893939);
    msg.setSource(42775U);
    msg.setSourceEntity(89U);
    msg.setDestination(33529U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.0994974295582);
    msg.setSource(28652U);
    msg.setSourceEntity(131U);
    msg.setDestination(22465U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.610266041748);
    msg.setSource(26671U);
    msg.setSourceEntity(139U);
    msg.setDestination(21821U);
    msg.setDestinationEntity(50U);
    msg.id = 173U;
    msg.label.assign("GPYXPQZPEOCGEJXEHLLCRDDJVSWTMHAPNXREKDONRJWEISWRVSLOQTIOLBJBWBZECUDCIJORBCBVAYMKYRJVQANNXLPOFTMZSUVAMLURZDPMMTYTQIRSHXOBYNGLXMGSCZFDQIAIVBTHJUSC");
    msg.component.assign("SIIWOLOJFXTHRLWAIAQZMNXFNOSJENCPPHYHBZSEAIOFTHLMPGDUSUGVXUHOZECVVLQWBDPWKUJXITOMYXBGHMTZWNKDIJXPYSZCDDFJOEYYBZMFOJQXQAJYVPUHEQWLWUQHRRANDCMIMNRZLG");
    msg.act_time = 1255U;
    msg.deact_time = 24256U;

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
    msg.setTimeStamp(0.195912595537);
    msg.setSource(37276U);
    msg.setSourceEntity(159U);
    msg.setDestination(61383U);
    msg.setDestinationEntity(43U);
    msg.id = 189U;
    msg.label.assign("MKSPQADWWBYZCRHDRNZTDFGEXDAWXBDUTSCTOQYLIZMLVYKVHSJJPEYICOSAXLXOSRGMFJHBFFX");
    msg.component.assign("IZMYYXJJUHUWIORIRGFWNALFHFGBWTCVMRCSDYZMHNCVJMJDYJLVGORZSXTZZPANRGBQFSCHIHFRTTLKWTGSCVPIIDOHOBCNBTLFV");
    msg.act_time = 55572U;
    msg.deact_time = 1108U;

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
    msg.setTimeStamp(0.474314753029);
    msg.setSource(54575U);
    msg.setSourceEntity(153U);
    msg.setDestination(300U);
    msg.setDestinationEntity(254U);
    msg.id = 254U;
    msg.label.assign("ELWKTTGMYQNVTZRSWQOUZGSWCJEAUNTYJFUKMPPVWBZTNYUGZSOMIJSBPPNXNSKWNCWSIDNFQZQWRZFDMJIJLONRVGPXVAOBJFQBTLBHSZLBXSRCMJFZKQZEOYHDUYQ");
    msg.component.assign("HPKRZQRSDXRUXIGBFRSUKSJURZVZDNBEUHRHRNEGGOWGOPAXDXNJVYYDESLQEKNMUWKJATLWFTONJAGMPTJFWSVAPVBFNMUZQLNFZACZTCELIPOEIEKYSBIKNXOKFDHHRCXJDQQHTURZMWVXYMIQPBBDDKLNVJAZIFIQDQPALPWEMCAYIVABCLSBVMCMFCYFVTUILSUSGYCJLYLORHZIOWHGYKETPXBOUOGWTKYHGVEFHQCGQDWSP");
    msg.act_time = 15895U;
    msg.deact_time = 40425U;

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
    msg.setTimeStamp(0.705094950206);
    msg.setSource(37900U);
    msg.setSourceEntity(173U);
    msg.setDestination(34090U);
    msg.setDestinationEntity(153U);
    msg.id = 98U;

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
    msg.setTimeStamp(0.647857692342);
    msg.setSource(17970U);
    msg.setSourceEntity(89U);
    msg.setDestination(25105U);
    msg.setDestinationEntity(191U);
    msg.id = 59U;

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
    msg.setTimeStamp(0.340741722363);
    msg.setSource(41635U);
    msg.setSourceEntity(91U);
    msg.setDestination(45947U);
    msg.setDestinationEntity(104U);
    msg.id = 229U;

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
    msg.setTimeStamp(0.582516939924);
    msg.setSource(46723U);
    msg.setSourceEntity(63U);
    msg.setDestination(62716U);
    msg.setDestinationEntity(33U);
    msg.op = 146U;
    msg.list.assign("KXEKARMHNLOHDWFQUYSOCYUPWSTFQIRXPEYGENZQRGOWYPSBOYNAOZWJGNPDFLWFYDSZYHBTETKEMVXAGPDNFIHBVZKFNXPALWJEHV");

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
    msg.setTimeStamp(0.056388955137);
    msg.setSource(57085U);
    msg.setSourceEntity(159U);
    msg.setDestination(45684U);
    msg.setDestinationEntity(231U);
    msg.op = 84U;
    msg.list.assign("FTRZEVGHZPOLMALZXXHZKZZXLRCRAFEJWDLBDPSXCYBGJRHIOJDXSKECQCYZABUKHRQRQXUVQUUKTSNBRKWKYMMMAAHZNGMXIASMQSWTVLJXJFBKHFIGPOWNFYVUNUYDSJON");

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
    msg.setTimeStamp(0.18473143193);
    msg.setSource(14295U);
    msg.setSourceEntity(245U);
    msg.setDestination(27061U);
    msg.setDestinationEntity(212U);
    msg.op = 129U;
    msg.list.assign("WSCOWJGFLKCRYJVTSSUINLMIHBLQSBHQZIZYHEHMMGTTIGRCZDJMVJBQ");

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
    msg.setTimeStamp(0.0761833113057);
    msg.setSource(15402U);
    msg.setSourceEntity(11U);
    msg.setDestination(8916U);
    msg.setDestinationEntity(9U);
    msg.value = 39U;

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
    msg.setTimeStamp(0.968167097084);
    msg.setSource(54602U);
    msg.setSourceEntity(247U);
    msg.setDestination(19894U);
    msg.setDestinationEntity(44U);
    msg.value = 158U;

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
    msg.setTimeStamp(0.148174729016);
    msg.setSource(64505U);
    msg.setSourceEntity(89U);
    msg.setDestination(54056U);
    msg.setDestinationEntity(138U);
    msg.value = 48U;

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
    msg.setTimeStamp(0.0636230945988);
    msg.setSource(42593U);
    msg.setSourceEntity(230U);
    msg.setDestination(1227U);
    msg.setDestinationEntity(118U);
    msg.consumer.assign("KTQZMDOGVDKLWQLVVUCEYYMFYPFTYFGELNHBHQQYLMAZHFIBJRUOGIMEFXZIOWWONNSMCDIGSSWDXWKHJFGBTUJUPEACZJNGKJCEOIXOGDIAMPIATSCJLKWMQFQVJCBBRXLAPTYPARRTPTJYQCHEGCRINRAOOTFRNZXLRCUVXWWFYPZDQUNLPXZVSUGNSJZAMKMADFDH");
    msg.message_id = 8536U;

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
    msg.setTimeStamp(0.951015848392);
    msg.setSource(28879U);
    msg.setSourceEntity(21U);
    msg.setDestination(43413U);
    msg.setDestinationEntity(155U);
    msg.consumer.assign("XRLRUWAJJIXZWLQHQVPONGQYWWDJEKGDEWXNTYDZUTEUJNDQGABHMSKVBNIMLWFQRPLGMMSLRHCDFDKGUONWHPG");
    msg.message_id = 37967U;

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
    msg.setTimeStamp(0.374596383293);
    msg.setSource(21098U);
    msg.setSourceEntity(228U);
    msg.setDestination(25327U);
    msg.setDestinationEntity(201U);
    msg.consumer.assign("AYGHBMYOPVIRLDREOKKGAOTSPNCVLHQYAQXONUNDXIJPRUFLZUSXMCRUOHFSMRDJALYYLEHVSUDZWZMGPXSTIJGUFPUORSKRVPFQZVHMVUBKTDSAENXJXDJJWREWTRLBSNPXGWACGVKEHHQZBPCZFYTPSE");
    msg.message_id = 2272U;

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
    msg.setTimeStamp(0.677173118584);
    msg.setSource(26530U);
    msg.setSourceEntity(167U);
    msg.setDestination(3493U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.12841947299);
    msg.setSource(26616U);
    msg.setSourceEntity(34U);
    msg.setDestination(50691U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.121656764648);
    msg.setSource(44750U);
    msg.setSourceEntity(86U);
    msg.setDestination(56728U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.0317571113692);
    msg.setSource(24187U);
    msg.setSourceEntity(19U);
    msg.setDestination(51186U);
    msg.setDestinationEntity(16U);
    msg.op = 98U;

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
    msg.setTimeStamp(0.580988198146);
    msg.setSource(38205U);
    msg.setSourceEntity(206U);
    msg.setDestination(32574U);
    msg.setDestinationEntity(161U);
    msg.op = 75U;

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
    msg.setTimeStamp(0.313367473854);
    msg.setSource(35576U);
    msg.setSourceEntity(96U);
    msg.setDestination(39039U);
    msg.setDestinationEntity(243U);
    msg.op = 111U;

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
    msg.setTimeStamp(0.152760344558);
    msg.setSource(19655U);
    msg.setSourceEntity(194U);
    msg.setDestination(6671U);
    msg.setDestinationEntity(83U);
    msg.total_steps = 128U;
    msg.step_number = 88U;
    msg.step.assign("ALVFQWUSLQFGZPFKMAURAUHADDLNLVI");
    msg.flags = 235U;

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
    msg.setTimeStamp(0.862476974316);
    msg.setSource(25671U);
    msg.setSourceEntity(83U);
    msg.setDestination(38100U);
    msg.setDestinationEntity(122U);
    msg.total_steps = 133U;
    msg.step_number = 163U;
    msg.step.assign("AWVWYBKDJYWLAOOJIUTVXKCEIUTLLGMHIYJZFJQFUMHKGDNDKNFTKGIUWAMFDSSLQUTRMITYONCEVTSZWYEHNGDZBTYCNAXREPOVLEYTCUAPRMKJQHVAXCWYRLXXQEQJCRCAGBRCDOGMSWBPZHHQZUIDLAMXJZNFSJ");
    msg.flags = 17U;

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
    msg.setTimeStamp(0.965263554975);
    msg.setSource(32126U);
    msg.setSourceEntity(114U);
    msg.setDestination(33336U);
    msg.setDestinationEntity(174U);
    msg.total_steps = 81U;
    msg.step_number = 136U;
    msg.step.assign("XCZSKFJXVQBEZTTWAXUNNLGNUFQZGFAPYQOAPLZVDOOCESEZDFOHEDKLMUJTGRYNWJRZNTLKCGSIYLPFFKAXIDUFSZGNYDJDMKBAHWQMVKURCLPOMJOIGGZWRUPKESBVLBRBOQHLXVVTFRKRZSXWMYQCNMTHWDBUPRJBGPSWHJXK");
    msg.flags = 119U;

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
    msg.setTimeStamp(0.872329319262);
    msg.setSource(57850U);
    msg.setSourceEntity(152U);
    msg.setDestination(28355U);
    msg.setDestinationEntity(89U);
    msg.state = 165U;
    msg.error.assign("TBLGOBEFRUQEAFASKHBICRDKBSIYCINPZJFSOLYPCHSOFXXDBSRTHDVBXNGMTKQMEUTLSZCAGO");

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
    msg.setTimeStamp(0.0711579509865);
    msg.setSource(24894U);
    msg.setSourceEntity(209U);
    msg.setDestination(15523U);
    msg.setDestinationEntity(208U);
    msg.state = 194U;
    msg.error.assign("MIDSIGWCLFZMCBBP");

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
    msg.setTimeStamp(0.417824733711);
    msg.setSource(61958U);
    msg.setSourceEntity(206U);
    msg.setDestination(61671U);
    msg.setDestinationEntity(151U);
    msg.state = 15U;
    msg.error.assign("KCWHHOGNLVPFMYHDUCEQYMOCPGICBREFSSIPXDAMTLOTYXFUWWBXCLFIMGDSYJZRKOFRRHIGPBEPDBMGUREWNAXEXUMNCUAHMOQWGQMJHIBUGDPXFHVQAWUFXZCGKNYSPLBDIRHUATAHKTLSGMELVQKVACULYAJNIPYCBJFJBLMOTKVNWQDNTYZFSOKISPHXEIESDGLBUZZVATJZOKJVYVVKBJZWZSYILWJTRNKZRXNWNAX");

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
    msg.setTimeStamp(0.787821269352);
    msg.setSource(33871U);
    msg.setSourceEntity(130U);
    msg.setDestination(50299U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.408236537099);
    msg.setSource(44003U);
    msg.setSourceEntity(18U);
    msg.setDestination(33956U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.904195069);
    msg.setSource(48052U);
    msg.setSourceEntity(88U);
    msg.setDestination(21027U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.302838787393);
    msg.setSource(16043U);
    msg.setSourceEntity(32U);
    msg.setDestination(49808U);
    msg.setDestinationEntity(24U);
    msg.op = 175U;
    msg.speed_min = 0.755352255005;
    msg.speed_max = 0.173962832597;
    msg.long_accel = 0.127651949204;
    msg.alt_max_msl = 0.112973069626;
    msg.dive_fraction_max = 0.512660043196;
    msg.climb_fraction_max = 0.486709291821;
    msg.bank_max = 0.760970079492;
    msg.p_max = 0.150023660215;
    msg.pitch_min = 0.673427302215;
    msg.pitch_max = 0.449234577095;
    msg.q_max = 0.66355304152;
    msg.g_min = 0.920120533729;
    msg.g_max = 0.739443670422;
    msg.g_lat_max = 0.73840275858;
    msg.rpm_min = 0.627473448978;
    msg.rpm_max = 0.179774641757;
    msg.rpm_rate_max = 0.7507717877;

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
    msg.setTimeStamp(0.445341448492);
    msg.setSource(18818U);
    msg.setSourceEntity(153U);
    msg.setDestination(34971U);
    msg.setDestinationEntity(87U);
    msg.op = 219U;
    msg.speed_min = 0.597674893695;
    msg.speed_max = 0.319933235111;
    msg.long_accel = 0.656329477252;
    msg.alt_max_msl = 0.366498196204;
    msg.dive_fraction_max = 0.820229877049;
    msg.climb_fraction_max = 0.0156312985021;
    msg.bank_max = 0.174314669372;
    msg.p_max = 0.808841168146;
    msg.pitch_min = 0.377902296936;
    msg.pitch_max = 0.677387389258;
    msg.q_max = 0.980045697957;
    msg.g_min = 0.121608263174;
    msg.g_max = 0.60111724658;
    msg.g_lat_max = 0.959709352689;
    msg.rpm_min = 0.228048695087;
    msg.rpm_max = 0.211135581453;
    msg.rpm_rate_max = 0.858405212318;

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
    msg.setTimeStamp(0.643503738344);
    msg.setSource(9338U);
    msg.setSourceEntity(186U);
    msg.setDestination(6765U);
    msg.setDestinationEntity(248U);
    msg.op = 160U;
    msg.speed_min = 0.629346418584;
    msg.speed_max = 0.984724134593;
    msg.long_accel = 0.0533868679841;
    msg.alt_max_msl = 0.583446824899;
    msg.dive_fraction_max = 0.0942966416641;
    msg.climb_fraction_max = 0.514516065915;
    msg.bank_max = 0.249438608055;
    msg.p_max = 0.998200742985;
    msg.pitch_min = 0.495375468203;
    msg.pitch_max = 0.312036778547;
    msg.q_max = 0.100052492059;
    msg.g_min = 0.292258638352;
    msg.g_max = 0.923069512118;
    msg.g_lat_max = 0.592545292992;
    msg.rpm_min = 0.788446177548;
    msg.rpm_max = 0.708866256027;
    msg.rpm_rate_max = 0.108834769163;

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
    msg.setTimeStamp(0.595674068429);
    msg.setSource(24116U);
    msg.setSourceEntity(198U);
    msg.setDestination(16928U);
    msg.setDestinationEntity(135U);
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 252U;
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
    msg.setTimeStamp(0.916905709118);
    msg.setSource(8843U);
    msg.setSourceEntity(218U);
    msg.setDestination(14588U);
    msg.setDestinationEntity(230U);
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 145779243U;
    tmp_msg_0.start_lat = 0.225186334556;
    tmp_msg_0.start_lon = 0.140074194759;
    tmp_msg_0.start_z = 0.181077637997;
    tmp_msg_0.start_z_units = 85U;
    tmp_msg_0.end_lat = 0.367694361865;
    tmp_msg_0.end_lon = 0.58806306073;
    tmp_msg_0.end_z = 0.207960123334;
    tmp_msg_0.end_z_units = 28U;
    tmp_msg_0.lradius = 0.624143419007;
    tmp_msg_0.flags = 219U;
    tmp_msg_0.x = 0.379010443502;
    tmp_msg_0.y = 0.0491999952256;
    tmp_msg_0.z = 0.844390125587;
    tmp_msg_0.vx = 0.291612222743;
    tmp_msg_0.vy = 0.166385528726;
    tmp_msg_0.vz = 0.130233394493;
    tmp_msg_0.course_error = 0.643296165039;
    tmp_msg_0.eta = 57059U;
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
    msg.setTimeStamp(0.76233748608);
    msg.setSource(2483U);
    msg.setSourceEntity(52U);
    msg.setDestination(54340U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.70249738044);
    msg.setSource(51609U);
    msg.setSourceEntity(176U);
    msg.setDestination(41241U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.609024761995;
    msg.lon = 0.277802980929;
    msg.height = 0.415155790857;
    msg.x = 0.606172743554;
    msg.y = 0.71044966437;
    msg.z = 0.520279452383;
    msg.phi = 0.508971051947;
    msg.theta = 0.473703040294;
    msg.psi = 0.675400711312;
    msg.u = 0.16883461327;
    msg.v = 0.183906999787;
    msg.w = 0.494227597497;
    msg.p = 0.988175419848;
    msg.q = 0.682775663285;
    msg.r = 0.83389927174;
    msg.svx = 0.90390990214;
    msg.svy = 0.73831200677;
    msg.svz = 0.48923524993;

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
    msg.setTimeStamp(0.444448828216);
    msg.setSource(47674U);
    msg.setSourceEntity(39U);
    msg.setDestination(1721U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.91575004834;
    msg.lon = 0.741763910034;
    msg.height = 0.458162873382;
    msg.x = 0.617491656105;
    msg.y = 0.60906876267;
    msg.z = 0.171271635063;
    msg.phi = 0.486105330195;
    msg.theta = 0.0198255861049;
    msg.psi = 0.0287068525966;
    msg.u = 0.963113928938;
    msg.v = 0.811164894717;
    msg.w = 0.593480573583;
    msg.p = 0.483679313303;
    msg.q = 0.843350211622;
    msg.r = 0.456319144235;
    msg.svx = 0.934110025518;
    msg.svy = 0.807634125398;
    msg.svz = 0.206808918047;

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
    msg.setTimeStamp(0.452332832119);
    msg.setSource(55096U);
    msg.setSourceEntity(100U);
    msg.setDestination(60385U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.875182554387;
    msg.lon = 0.98987939689;
    msg.height = 0.385880720569;
    msg.x = 0.392899428309;
    msg.y = 0.753725454878;
    msg.z = 0.446739574321;
    msg.phi = 0.425440458353;
    msg.theta = 0.727746340098;
    msg.psi = 0.614984548907;
    msg.u = 0.200262469314;
    msg.v = 0.231101232041;
    msg.w = 0.179220481095;
    msg.p = 0.400518156362;
    msg.q = 0.352373235072;
    msg.r = 0.452078181024;
    msg.svx = 0.721677068225;
    msg.svy = 0.592493561002;
    msg.svz = 0.376626366009;

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
    msg.setTimeStamp(0.483603336337);
    msg.setSource(27530U);
    msg.setSourceEntity(41U);
    msg.setDestination(51656U);
    msg.setDestinationEntity(8U);
    msg.op = 118U;
    msg.entities.assign("KLAEQZJGKALWFJXQHCEDEOYDYGIYLYGLLBJTUOOMNGJPQFPKABXSVEWDNQPIITGCEXPRYZSJPWTKVAAWMNYMCVCSAKNXZTODWQU");

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
    msg.setTimeStamp(0.0112140667205);
    msg.setSource(57854U);
    msg.setSourceEntity(11U);
    msg.setDestination(34010U);
    msg.setDestinationEntity(84U);
    msg.op = 114U;
    msg.entities.assign("WYAYSKSHTWZFOJMFQIJSSLXDWSEQOKRLQAGLNVGFWQMMPNGPTBTAKOYWXJFGNNZDYFPUJKQJQOBMSWXPCOTWELXAJAQHHAVGTBYMMWVVCDPUGEIDCEQVUMFKFGTIHGDKCRHUBCCUCAVYRIAEBUZSCZPXILRLTKLGEXSNNVLIBJDZXFDDFOBRHITHXECSPNDUYBYPLZPRW");

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
    msg.setTimeStamp(0.864740118605);
    msg.setSource(52594U);
    msg.setSourceEntity(134U);
    msg.setDestination(39838U);
    msg.setDestinationEntity(33U);
    msg.op = 241U;
    msg.entities.assign("COWZFILZZUBUSJMHBONWGGAEYTOTWTGXLBSAVSVKHYEAESOYUZVEILAYVXPYGQMMJCPZCZLXBFSCMKCYEKAWTFYPKIDGQVJVCPDQSNVNMPHDWARFQQANIDWBQIPZXCQXREYJJPESIJGOTFXIWRQOMVBPRANOXWWOMHNBDBFUHRCLJRDVNITTFMLGEMV");

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
    msg.setTimeStamp(0.0120432933736);
    msg.setSource(29105U);
    msg.setSourceEntity(95U);
    msg.setDestination(59051U);
    msg.setDestinationEntity(105U);
    msg.type = 91U;
    msg.speed = 60888U;
    const char tmp_msg_0[] = {-52, -18, 105, -21, 125, 116, 108, 61, -82, 38, -27, 80, -65, -24, 109, -6, -125, 40, 62, -97, -74, 12, 124, 75, 32, 111, -10, 7, 71, -79, 71, -25, 65, 122, 60, 1, 50, 117, -82, 41, 79, 56, 84, 94, -91, -87, -101, 18, 115, 17, -26, -109, -54, -119, -44, 45, 77, -82, 8, -75, 102, -22, 83, -67, -38, 110, 83, -5, -109, -77, -112, 22, 31, -28, 124, -31, 96, 79, 99, -51, 7, 63, 46, 93, 64, -64, -43, 43, -102, -101, -95, -83, -63, -2, -126, -105, -77, -108, 43, 40, -88, -54, -35, 47, 26, 60, 22, -35, -73, 96, -101, -78, -50, -14, -32, -116, 35, 59, 67, -107, 47, -24, -70, 16, -37, -113, -71, 56, -44, 89, 68, -7, 108, 125, -20, -100, -33, 92, 115, 60, 17, 5, -26};
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
    msg.setTimeStamp(0.270138216493);
    msg.setSource(55019U);
    msg.setSourceEntity(164U);
    msg.setDestination(15740U);
    msg.setDestinationEntity(160U);
    msg.type = 2U;
    msg.speed = 18126U;
    const char tmp_msg_0[] = {-31, -120, 71, -50, -78, -121, 102, -72, -18, -51, -23, -37, -108, 123, -104, -74, 85, 53, -6, -31, -8, -43, 50, -127, 3, 123, -2, 84, 45, 103, -1, 19, -88, 24, 60, 51, -106, -102, -61, 98, 23, -106, -41, -85, 58, -84, 8, -103, -53, -112, 36, 58, -78, 57, 101, -49, 91, 111, -62, 98, -100, -68, -61, -6, -23, 126, 70, 100, -3, -15, 69, -52, 114, -91, 6, 44, 65, -65, 53, 94, -94, -95, 29, -66, 55, -5, -121, 116, 66, -57, -108, 6, 78, 29, 0, -51, -61, 55, 106, 64, -106, 64, -21, 91, 69, 27, 84, -87, -86, -50, -49, -56, 36, 62, 81, -67, -47, -42, 36, -41, -51, 45, 55, -76, 117};
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
    msg.setTimeStamp(0.870735577172);
    msg.setSource(48010U);
    msg.setSourceEntity(95U);
    msg.setDestination(60654U);
    msg.setDestinationEntity(241U);
    msg.type = 21U;
    msg.speed = 7785U;
    const char tmp_msg_0[] = {96, 81, -39, 61, 29, -43, 82, 98, 126, -74, 122, -8, 101};
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
    msg.setTimeStamp(0.432100095997);
    msg.setSource(64465U);
    msg.setSourceEntity(72U);
    msg.setDestination(57633U);
    msg.setDestinationEntity(82U);
    msg.op = 198U;
    msg.tas2acc_pgain = 0.287550501922;
    msg.bank2p_pgain = 0.543281184054;

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
    msg.setTimeStamp(0.0298021800006);
    msg.setSource(18180U);
    msg.setSourceEntity(204U);
    msg.setDestination(31744U);
    msg.setDestinationEntity(181U);
    msg.op = 201U;
    msg.tas2acc_pgain = 0.654719038237;
    msg.bank2p_pgain = 0.73159209375;

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
    msg.setTimeStamp(0.593501811289);
    msg.setSource(15240U);
    msg.setSourceEntity(146U);
    msg.setDestination(25497U);
    msg.setDestinationEntity(63U);
    msg.op = 114U;
    msg.tas2acc_pgain = 0.708902469323;
    msg.bank2p_pgain = 0.58949654513;

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
    msg.setTimeStamp(0.475966526732);
    msg.setSource(32717U);
    msg.setSourceEntity(62U);
    msg.setDestination(20046U);
    msg.setDestinationEntity(199U);
    msg.available = 929895513U;
    msg.value = 218U;

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
    msg.setTimeStamp(0.396545039338);
    msg.setSource(21407U);
    msg.setSourceEntity(68U);
    msg.setDestination(20161U);
    msg.setDestinationEntity(177U);
    msg.available = 1100381097U;
    msg.value = 213U;

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
    msg.setTimeStamp(0.250780242596);
    msg.setSource(21956U);
    msg.setSourceEntity(206U);
    msg.setDestination(30075U);
    msg.setDestinationEntity(192U);
    msg.available = 3289552609U;
    msg.value = 115U;

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
    msg.setTimeStamp(0.766166369204);
    msg.setSource(51573U);
    msg.setSourceEntity(109U);
    msg.setDestination(39600U);
    msg.setDestinationEntity(103U);
    msg.op = 140U;
    msg.snapshot.assign("GIAQRYKKJBXIKNYDUJBGCNPQDRUCUWMGIOVBHZHEKEETAAJWPFTK");
    IMC::SessionStatus tmp_msg_0;
    tmp_msg_0.sessid = 1191698236U;
    tmp_msg_0.status = 230U;
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
    msg.setTimeStamp(0.813408732925);
    msg.setSource(43207U);
    msg.setSourceEntity(160U);
    msg.setDestination(34195U);
    msg.setDestinationEntity(181U);
    msg.op = 96U;
    msg.snapshot.assign("USQFNPDEKXVCFFXRAWHJMVHDGBEWJAYBWTSCGEKZWHEGMTRCPUGDAIZCUSRMLJRMEGAYCJKAKADXEBTNOAX");
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 185U;
    tmp_msg_0.quality = 223U;
    tmp_msg_0.reps = 49U;
    tmp_msg_0.tsize = 230U;
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
    msg.setTimeStamp(0.716059008781);
    msg.setSource(36057U);
    msg.setSourceEntity(156U);
    msg.setDestination(22571U);
    msg.setDestinationEntity(5U);
    msg.op = 33U;
    msg.snapshot.assign("ANIPDIXGEBAFMYCYQADOOHBNZILNEUQNWXRBLYPQXXQMCJHRKLHXSGFB");
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 10944U;
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
    msg.setTimeStamp(0.819848009109);
    msg.setSource(25141U);
    msg.setSourceEntity(14U);
    msg.setDestination(6585U);
    msg.setDestinationEntity(197U);
    msg.op = 87U;
    msg.name.assign("RTBVBUSKRUFJVXUIHCLHINFSYNTZVOCNZKYAIHEQFMBZOQTVPZOYQARUVUUJGYNXSXYTREEXGSGZANWDIOPDOSYEJJBVDUWYYEDOEXEFURHTPNLMDTMWVZZXQGNFBNCCZVYUJZAMXDRBPHITIFCPDWQFKGEI");

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
    msg.setTimeStamp(0.187631347541);
    msg.setSource(8727U);
    msg.setSourceEntity(94U);
    msg.setDestination(43885U);
    msg.setDestinationEntity(39U);
    msg.op = 101U;
    msg.name.assign("XRGAJKPNXKRVOBFLDRAITOALSABHLXXSCOOLYIWTDAOHEQSENYQVWQJXFQLIWMWVEUXRLVKCBZPEXZWSURCMPWMDGOKURJPDECGUMPSWTXFNDNGZOQHUJY");

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
    msg.setTimeStamp(0.823358581048);
    msg.setSource(57458U);
    msg.setSourceEntity(141U);
    msg.setDestination(13203U);
    msg.setDestinationEntity(80U);
    msg.op = 138U;
    msg.name.assign("OOZINXGVDGJSQCZMJUZZOEFWLVXVIZXBWYDFUEBMIHTDVDMPATHRRWHTAQPLHBRUXWBQAIMCHGCLDEHICQOSLXQVYEVNZRJKPOFCVMJMEWZTBSKKFNNLQBPRCJBUUYMDNIZEYOOCKCPSBQLSHPZFWGETAATNFPJIOQNGXUKDCTRMEZKSUVYXIPXGJFLGHPYFRKHATDUVTYYYBSPKNNAOLSJUFAQITGWAOYMIGKCBMLDGWXJKAEHWWRLQ");

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
    msg.setTimeStamp(0.784845065222);
    msg.setSource(65396U);
    msg.setSourceEntity(38U);
    msg.setDestination(34219U);
    msg.setDestinationEntity(70U);
    msg.type = 172U;
    msg.htime = 0.574239581509;
    msg.context.assign("TVLZHDBCEOZCGWUFMTXOXHNCFKYKYUGINPIXTDWKOYKMNHVJYRSKLQJIOUDHDSPDJMTVLBAFRZYDMPAQJBOTEJQWWAIICGEGWEZFPMPNVOKHVFZBBVGGDCSWQPRZKFZRQGAYYDKUDIVVTNMOFSNGJCSUZJKSEGBYUHWRHFMQVPHWRJMZEHXAOFTWQPIEJBUULXSLCTH");
    msg.text.assign("PCVOZWTHAMRXMERLOCZKSECFOKWIXKBSBYUBIADGIAUJ");

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
    msg.setTimeStamp(0.411457490865);
    msg.setSource(2215U);
    msg.setSourceEntity(69U);
    msg.setDestination(20370U);
    msg.setDestinationEntity(59U);
    msg.type = 102U;
    msg.htime = 0.517584523024;
    msg.context.assign("LWFXICQWVFLCMMHCAYDVHRTMZZLOJTECLLCZWNRYRVMHODHCHGEFSAZGHQAUKOQNKAGKBMFZMBAOGXYJFSPMWWVEQOMSCODPJKWKBPDUJXZJDQQIJMNBRYDRSWNETHCIZRRBZHPEHYUTNFXLUSYBIUUNXXTFUKENXYTPPITOEGGXBQWNSMPULQDJKZEDKFGLJYAV");
    msg.text.assign("KOTHPOQQALYMKVERGCLVUSRJNIRDLKAJKVDYJJXKEAKUNPVOUELILCYPVNNBTWDVFJLBIMEHZNRIWSYEIOXBBBZVAAROBMRDGPXZFMREYMCWVFBDXMGAODXCSZTFMEZZGRPQNHPCNHOEATSGZPJVDIWSPULWGCQBWXUHFASTYFSRLAJXOGWUPTCYZGSCTPHXDGQIVCDSJRJNMKIJDFHZN");

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
    msg.setTimeStamp(0.705304006894);
    msg.setSource(45430U);
    msg.setSourceEntity(50U);
    msg.setDestination(12676U);
    msg.setDestinationEntity(214U);
    msg.type = 92U;
    msg.htime = 0.492639950929;
    msg.context.assign("BBIGUFSIQNZYSHWUZBQZCVKDSGVZCLJNTWBZGEKUFDXMITOHLPNRMBCYHYJXCMIKXQVTOEOVLCHZXTZBGKLDCVAAMHWPAURXAUOECWAKFLPBZJOEXVEKUUHWNPIYXPONMDWOCMHODEOIGWLBETGVDRKYPRBANWLCKYQUFQXNKVFKMUCIFMXJSIDEAHDNFYPGPJZRNMTJFPTDEPASRRSTVNIFYSMQJYB");
    msg.text.assign("RLHNIGTNYFMLZJJCXTVXGPWCOSQBAKZTEGKSLRQAVEBBWTDFOUEBXLHZLWSNJPMPNQCAZFWPYWTHVBYMREJYCVVCXGDABJFIADQLKXDLARQGMIIDQZLRSCFFIGFYFHKOJDNHNQMAIOIONLJZPFHNEPHZZOUEMJRYUGSTBPCRUSJXERXUSXDOIJGICPVHYMCASUHALODAGDSCKTEBYIZKBTWDTVWOESNWUMWUUNPVKXQQBVKRHYPGVW");

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
    msg.setTimeStamp(0.130735577708);
    msg.setSource(10679U);
    msg.setSourceEntity(162U);
    msg.setDestination(26191U);
    msg.setDestinationEntity(242U);
    msg.command = 66U;
    msg.htime = 0.293989067736;

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
    msg.setTimeStamp(0.533668290007);
    msg.setSource(31938U);
    msg.setSourceEntity(54U);
    msg.setDestination(28367U);
    msg.setDestinationEntity(15U);
    msg.command = 219U;
    msg.htime = 0.528475266619;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 205U;
    tmp_msg_0.htime = 0.130279843455;
    tmp_msg_0.context.assign("EUVLZNIJSWTYABXRIOZOPQPMVGLOMZDDRHSIWAGZOUWPHHDHEMOODTIUVQVFNVKQBLSUMQWUSFLOMELXSFJZWKKJYWKVEYJYCMXSHAWLXOPCTKQUAQIVTDVFTEAGKXMCJNJHACUYNHWL");
    tmp_msg_0.text.assign("ZOVOPKOREXRQZSFCJXPCSODKEWSSZNVRCVGBLYBNYBNHYCPDUQDJSZNNQUJOHMYVYMOPEUWFZBZHDXMVISSMLNXPJFTGGUYZTMAXTAWVZDCW");
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
    msg.setTimeStamp(0.0716642996353);
    msg.setSource(39140U);
    msg.setSourceEntity(231U);
    msg.setDestination(41874U);
    msg.setDestinationEntity(85U);
    msg.command = 211U;
    msg.htime = 0.434915482291;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 22U;
    tmp_msg_0.htime = 0.266549773108;
    tmp_msg_0.context.assign("FRGRCWSDONJMUOQQJDRRAUJTMWTIAXWYMXVHFUKXUYOIOMTGYLNXJLNWSNTPVAIOPELIDPFJHFZVDYJG");
    tmp_msg_0.text.assign("YOOHDWIBILEXQSELJUQIVAZMSMXQBTNGDRXMAOPPDPHHWBDRHZHCAHJKUREGHSHYUJOKXGZNHIAMCUVBRLUQFAYQZDOJWZGVBEPXYVM");
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
    msg.setTimeStamp(0.410488612749);
    msg.setSource(58372U);
    msg.setSourceEntity(250U);
    msg.setDestination(47762U);
    msg.setDestinationEntity(251U);
    msg.op = 166U;
    msg.file.assign("YZFTGLFRLLHSKJESJOHWSVXKZDLRYVMTOIYXAZHLXNJZHQCMUQJDVGEDAUUBAWRPFYOKGEDNBUVSARHMPWOMQDFAWXMVDAZQPENCJKRBVEUWNIOTQZGZCWBHVTPABBXRYPICPVSPQDQZPIANXEHTICLKEUFTSJEHFDMXQOMISLMLFBPATVECWJKIKUPELRWRARGDNCSBVY");

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
    msg.setTimeStamp(0.536640867022);
    msg.setSource(59736U);
    msg.setSourceEntity(79U);
    msg.setDestination(1087U);
    msg.setDestinationEntity(29U);
    msg.op = 110U;
    msg.file.assign("IVHMOCVQULGMOGJTTUWDVACSKJRQLFWWPYOGESAAHLTDSPZGPIHDPBGKYHUWMQYTCXDRGAOUDPMVAXFOUBEGIRCXOZLNZXDVEMRDVFNVYNRNZXEJTLIRYKZKXFSDNBGKTOLFCUWICBBOYLZBINRQPXZJNMQEEPSMNOYDEKPEAAWHOKKXZSMJS");

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
    msg.setTimeStamp(0.43448284158);
    msg.setSource(62730U);
    msg.setSourceEntity(88U);
    msg.setDestination(39115U);
    msg.setDestinationEntity(134U);
    msg.op = 8U;
    msg.file.assign("XFYZBRWUOEJXCIVFCLWBRNYYESMWFRNUGULWSXBYNOWRFKOCHZHDGZZPYPTPUOBVZGNMPPQQYFOASRMMSDDFWLMMASWVSOHHSUDQQCRRZETLNIUAXKXKIFSRMKGUKUEENCLOJTLBILRQQUCVEAWKWBQMDJZJJOCIDCPPKXNCPVZWFHTTNTKAGLOLXJIUTZTBBNHOGVGHPVYDVQXGLDEAASTNEPKGQDZIHKE");

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
    msg.setTimeStamp(0.781794055821);
    msg.setSource(16557U);
    msg.setSourceEntity(59U);
    msg.setDestination(6516U);
    msg.setDestinationEntity(195U);
    msg.op = 69U;
    msg.clock = 0.335552696306;
    msg.tz = -40;

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
    msg.setTimeStamp(0.318307440072);
    msg.setSource(57595U);
    msg.setSourceEntity(195U);
    msg.setDestination(55564U);
    msg.setDestinationEntity(115U);
    msg.op = 107U;
    msg.clock = 0.458675893034;
    msg.tz = -92;

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
    msg.setTimeStamp(0.0531353869282);
    msg.setSource(28575U);
    msg.setSourceEntity(205U);
    msg.setDestination(48293U);
    msg.setDestinationEntity(106U);
    msg.op = 237U;
    msg.clock = 0.762644768347;
    msg.tz = -73;

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
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.906162692607);
    msg.setSource(15738U);
    msg.setSourceEntity(247U);
    msg.setDestination(19574U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.274496586978);
    msg.setSource(61776U);
    msg.setSourceEntity(114U);
    msg.setDestination(36970U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.869557309175);
    msg.setSource(22216U);
    msg.setSourceEntity(211U);
    msg.setDestination(34629U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.759621720758);
    msg.setSource(15998U);
    msg.setSourceEntity(102U);
    msg.setDestination(39757U);
    msg.setDestinationEntity(170U);
    msg.sys_name.assign("UXIBAJQPWEBFQBKZOBPEAOMDLKUIUPRYVGHMHDBCJXIWHEOTMSRLWQIINDJHVFXVTEWZNPNXSSQLFFTDERJBZGOWHZSJQOLAWVDYHVNCRKLAQWQVLOPOUSGQSWCRJODKGYMWXTHLCKFIFYRQINFTPBZCAJDFUGRKNAGAUTZSLOOEANHLSKCICGIJSKUCHDTBMUNXJCKUPYWEJSYMTAPEXMAVRPYDMEGFFYZYIRYXXNHZNMUE");
    msg.sys_type = 154U;
    msg.owner = 47527U;
    msg.lat = 0.594211854643;
    msg.lon = 0.503580719329;
    msg.height = 0.0313759175846;
    msg.services.assign("JYFSWZTVPAFCBJXVZKUSRHCBCZDDIKUAFPNQQNLBMRXXNIXNRHMKSXCGJYZORNDNCELRRILLYJZAJUVRPWAQTOEVIIYFOHYJFXKSGEHWWKIYEWJEULTWWQNSTCCKJRODOGGZGTDLNRCISFQATPDFAAHLAOSEJUBAPFHPDHMOBYIWVYBHVMEMKZHOXWVQEPCKPMEOGUHZKNXMWGULB");

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
    msg.setTimeStamp(0.159113059435);
    msg.setSource(51671U);
    msg.setSourceEntity(210U);
    msg.setDestination(47858U);
    msg.setDestinationEntity(194U);
    msg.sys_name.assign("JDOBBKXVDPUESGBCLJMYAMVHXVWRJVH");
    msg.sys_type = 49U;
    msg.owner = 21664U;
    msg.lat = 0.63080457805;
    msg.lon = 0.0473045806108;
    msg.height = 0.342778247026;
    msg.services.assign("DXVPJRZJPJZRYJQBCJDAIUYYQGGQCIQGSGQWVXATPESNICKLGSFYAFQYRVBSMOOEIMVIQPICAVPOVKEKUDFKXWAEKJTVJIRGTSHNOTWIBGZKWQEPMFXOZRAZHHMTHNEPHOFWBNFTKBGJLYDNWHMACKRAVBXMPIXUUDMTWRNXGWDZYOHWBSURZFCFDLCIBYYCNAMLEHNZXGMWELLNJOUSSDLBBPKZJCQOMFXRUDUEC");

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
    msg.setTimeStamp(0.391641953428);
    msg.setSource(1205U);
    msg.setSourceEntity(217U);
    msg.setDestination(34357U);
    msg.setDestinationEntity(145U);
    msg.sys_name.assign("LVGRJUTOEQIKDHXSFQ");
    msg.sys_type = 203U;
    msg.owner = 31197U;
    msg.lat = 0.01904507721;
    msg.lon = 0.403099032369;
    msg.height = 0.895612557238;
    msg.services.assign("PQCUOWDYLSSHQQHSSOTNAOVZPMEOYNOFHNMAOFWWCPDEHHBCURIKDHVYAXBJKPEQPDFHUZLEIZLNAJYLRCBUGMTTMMCTJGRVJXBYEWYMPJYFCQLMYTVRVCTLIZIURFSVCPEGNYLGWXIIBVSBFFDZJCARVRPAUXNWIWPNSNQ");

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
    msg.setTimeStamp(0.0662278548198);
    msg.setSource(45760U);
    msg.setSourceEntity(95U);
    msg.setDestination(54875U);
    msg.setDestinationEntity(184U);
    msg.service.assign("GNHHCPGAQMXBDWOWIAHWHSWZIESLIHXCPCQYAMTTLDEKJULGXEYSOYQJWYTUKVENCPMGRWWGRHLDYCNHZYEQJHIAYVKUPEVVRSLA");
    msg.service_type = 76U;

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
    msg.setTimeStamp(0.321429961008);
    msg.setSource(2484U);
    msg.setSourceEntity(201U);
    msg.setDestination(33080U);
    msg.setDestinationEntity(144U);
    msg.service.assign("DBATJDYLCIUUUPSNFGKCLSXVWFWOHIDOSGIXAOWRHNLWVYWWJPZBCCEQGMIVVRRZJKBPOMYMFDJJRAZXVTXQPCBQUOQKASMNCODXUIZHEDKDIQEPZAEGRTXYALHPYZDEISCMLBRVTPZUEIKTVZZXQSQCWVLFQYENHVFGJUGTAUMMUEBPLRUGRNBTMYIDJEGLOI");
    msg.service_type = 201U;

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
    msg.setTimeStamp(0.734499184378);
    msg.setSource(5996U);
    msg.setSourceEntity(213U);
    msg.setDestination(27790U);
    msg.setDestinationEntity(48U);
    msg.service.assign("MSBDDKQZAMQIJWVQWWWXLCXKGSVFGGJJGUEUOVNXIYDSUOEKCZZHPCNTVOIYWYFITMQWGPALASULGKSEBULRUIRVESOEDCKOWWPPXHMDMGLFRZBPIGZUYJCLGLWXFNJNITHZPDDQTAXVMOBHCYJNCRCD");
    msg.service_type = 228U;

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
    msg.setTimeStamp(0.863034363488);
    msg.setSource(49365U);
    msg.setSourceEntity(50U);
    msg.setDestination(41566U);
    msg.setDestinationEntity(47U);
    msg.value = 0.640045587964;

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
    msg.setTimeStamp(0.171099637821);
    msg.setSource(29982U);
    msg.setSourceEntity(220U);
    msg.setDestination(32472U);
    msg.setDestinationEntity(112U);
    msg.value = 0.516178793087;

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
    msg.setTimeStamp(0.229201968194);
    msg.setSource(31865U);
    msg.setSourceEntity(56U);
    msg.setDestination(44176U);
    msg.setDestinationEntity(67U);
    msg.value = 0.180377829955;

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
    msg.setTimeStamp(0.656085864058);
    msg.setSource(49101U);
    msg.setSourceEntity(30U);
    msg.setDestination(42612U);
    msg.setDestinationEntity(209U);
    msg.value = 0.223047330712;

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
    msg.setTimeStamp(0.395268482342);
    msg.setSource(34083U);
    msg.setSourceEntity(200U);
    msg.setDestination(22093U);
    msg.setDestinationEntity(171U);
    msg.value = 0.991039698669;

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
    msg.setTimeStamp(0.0938878378476);
    msg.setSource(44453U);
    msg.setSourceEntity(194U);
    msg.setDestination(22521U);
    msg.setDestinationEntity(35U);
    msg.value = 0.35930997239;

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
    msg.setTimeStamp(0.829879854879);
    msg.setSource(3378U);
    msg.setSourceEntity(224U);
    msg.setDestination(14518U);
    msg.setDestinationEntity(202U);
    msg.value = 0.0769261747811;

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
    msg.setTimeStamp(0.814600112133);
    msg.setSource(7762U);
    msg.setSourceEntity(124U);
    msg.setDestination(27369U);
    msg.setDestinationEntity(188U);
    msg.value = 0.401966676654;

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
    msg.setTimeStamp(0.724571026067);
    msg.setSource(18351U);
    msg.setSourceEntity(60U);
    msg.setDestination(9868U);
    msg.setDestinationEntity(33U);
    msg.value = 0.0427961800824;

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
    msg.setTimeStamp(0.130237064376);
    msg.setSource(35226U);
    msg.setSourceEntity(96U);
    msg.setDestination(44889U);
    msg.setDestinationEntity(203U);
    msg.number.assign("YCFMFDIFSYAMYCSWLJIARUSKUXKWKQFFVKMRIWJTGRFZIRLTDXWJVNBLBCTPMJCCABMRGNSOVYSBBSERDIDBNHOIAAFDHJTTHYWGFPLKGYZNZUQOSXLEDHBILKHPQR");
    msg.timeout = 9979U;
    msg.contents.assign("QSSFJSHIRWJDQBZBTLWIJVRJYMCDBDIPTGWUJUFULIAMGPGBZMPTTERNPQPUNPYQJRNHVYEQSUBJNU");

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
    msg.setTimeStamp(0.273165647849);
    msg.setSource(1823U);
    msg.setSourceEntity(48U);
    msg.setDestination(56339U);
    msg.setDestinationEntity(62U);
    msg.number.assign("OPKFMQWJPJGZVNMHMAUILXGYEFDBYAHQCOCLRXLAZFHAPKJOWHWAKRLYVSPIUONKNVSMMARTEGGCUZUWJFWPQXMGHGRCQQFVHENZXYLGXQBSGNPBXRPTDDTYROKVFBOKBXYZIPBSMJUSOSIUZESWIGZIOQTWTDJYEUFVNPKUFHSBFYRASDLLDWJZAXKXCOI");
    msg.timeout = 54021U;
    msg.contents.assign("ERMTAJCSTIKQCUEHCBEMXFNXQKJOKXIIPAHUFUWRJUZJFLPDPKZAEWRAVMJMNVRWSCIPLVSZTBXVSOARMLRYYKTMLIPQEGFCNSLNZXMQDBCAAUCBQPBYHYAHENKDGRWVNIDOVQDOBTPBZOIEGKUCFHKZRWPTBGMSWOZLNZMOFVSCYHITHGSJWYUXFPOTEBFDTSGJYOLGIGFJBQAOPGNVXVUYLSRTUDDXDMW");

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
    msg.setTimeStamp(0.608917657305);
    msg.setSource(38332U);
    msg.setSourceEntity(195U);
    msg.setDestination(46857U);
    msg.setDestinationEntity(129U);
    msg.number.assign("GYPUQOPELH");
    msg.timeout = 1700U;
    msg.contents.assign("WPVRDOWNJMPQSJSZBWZHFTBYJANHVCLULNRRENADPEUGCVSZXESWLJVDARNQJOTCOFFXBJRHPRGNWOAEYLDRGATXGHQMIMWXTNNNTKLFLZNSFTMMJZOQEMKZHTLKIDZYUXGIOGEUYPCRCJTPSFXHEDXUWWUPHPGKKVVRYBUDVIIQASEYQQZHAODKQRBCKITCSUYGBUYBIZYDUIHXVHEBQXFCSFQKGALKBMBYJEJOLSGWMC");

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
    msg.setTimeStamp(0.0198234386729);
    msg.setSource(20248U);
    msg.setSourceEntity(234U);
    msg.setDestination(45408U);
    msg.setDestinationEntity(74U);
    msg.seq = 3172798814U;
    msg.destination.assign("SAIVEBPAUFDKXPVSJZRPBOPEBJTZSVNTMFRGKBXCRQTETVZYGNFNIMYRQCEVYAMNDUQIPVDILKSQWHUJANQZTRUOCUXWLBZHVIKSRWQJBMGOHFEHIJELUWGWDPOAYDWICXSDZWOLXKZDHSAUIOPLRRDVMOOJHRKSEXKTCAGQLGSJTLFMNGWNSXYODMYNGPAFQTTNQMWVGXYDHCHBNJJEJBLICWFMYZGBVYPYKEFQTZU");
    msg.timeout = 20265U;
    const char tmp_msg_0[] = {86, 55, 109, 7, -27, 98, -28, -67, -55, -99, -73, -49, -69, -16, -116, -26, 16, 93, 102, -74, 114, 23, -73, 116, 60, 48, -75, 51, -40, 2, -13, -31, 12, 75, -83, 26, 56, 20, 122, 19, 54, 56, -121, 103, 31, 17, 87, 33, 32, -10, 99, -26, 64, -42, -107, 88, -52, -63, 52, 105, -115, -77, 75, -18, 49, -107, 51, -108, 98, -60, -6, -77, 94, -10, 47, -99, 2, 83, 82, -12, -114, -58, -30, 74, 6, -110, -121, 126, -47, 101, 80, 13, 126, -11, 117, -118, -25, 51, -63, 28, 65, 113, -115, 29, -87, 112, -33, -118, -83, 100, 83, -58, -26, 28, 74, -52, -105, 18, 32, 28, -8, 79, 52, 105, -120, 99, 54, -107, -67, 81, 2, -62, 42, -29, 18, 1, -95, -53, 46, 81, 54, -58, 101, 45, 115, -29, -87, 5, 49, -20, 86, -10, 74, 11, -61, -89, 40, 83, -10, -119, 117, 42, -29, 106, -123, -20, -3, -39, 59, -97, 26, 122, -48, -40, 115, 1, 112, -83, 67, -90, -52, 59, -82, 0, -37, -51, -8, -69, -29, 98, 86, -80, 52, -29, 115, -15, 71, -69, 39, 93, -111, 113, -111, 90, -112, -83, -77, 72, -28, 56, -74, 2, -104, 117, -67, -106, -124, -30, -99, 65, 58, 95, -6, 12, -48, 104, -121, -12, 80, 8, 45, 27, -125, 44, -57, -80, -96, -103, -110, 43, 94, 97, -15, 33};
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
    msg.setTimeStamp(0.96646918287);
    msg.setSource(4962U);
    msg.setSourceEntity(232U);
    msg.setDestination(55817U);
    msg.setDestinationEntity(184U);
    msg.seq = 1797676928U;
    msg.destination.assign("NCRZRPJNLQUWOATHZKWGPXJVYRPODBYAAMCOUKWKMWIPHNDGQIEMFSOHEXBXBLQVJXIWDRGJXZTZDRCSMTNOFHQECPEUIJZPTLXFMVNFBGKYQAGAGTIYQFACNTUEPKNBCJBT");
    msg.timeout = 21299U;
    const char tmp_msg_0[] = {8, -113, -99, -105, -9, -76, 59, -20, 100, -46, 33, -109, 96, 85, 82, 24, -64, 45, 90, 96, -93, 56, 6, -43, -69, 9, -64, 120, -59, 126, -47, 125, 116, 38, -49, 58, -90, -33, -35, 38, -125, 78, 89, 53, -91, -32, 86, 41, 47, 87, -13, -76, -43, 32, -16, -73, 64, -58, 75, 15, -95, -122, -18, -92};
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
    msg.setTimeStamp(0.405440603396);
    msg.setSource(62834U);
    msg.setSourceEntity(23U);
    msg.setDestination(65333U);
    msg.setDestinationEntity(238U);
    msg.seq = 407289483U;
    msg.destination.assign("UAGMRYSXNHZTFYDTJQGPTCBIRVMVCLQHSLVOZRHJQAQT");
    msg.timeout = 21551U;
    const char tmp_msg_0[] = {54, 93, -3, 50, 110, 6, -67, 29, -110, -7, -32, -64, 31, 89, 6, -57, 63, -97, -38, -116, 61, -38, -23, -120, 76, -109, -39, -53, 26, -55, -96, -21, 7, 14, 72, 119, 125, 69, 81, -87, -20, -18, 3, -11, 117, 14, -109, -101, -88, -115, -24, -123, -71, 68, -107, -30, 123, -89, 61, -83, 53, -98, -35, 9, -119, -80, -119, 92, -25, 100, -117, 27, 120, -24, -25, 18, -98, 82, 83, 121, 48, 33, 47, 11, 10, -40, -119, -102, -95, -106, 18, -81, 22, 124, 124, -51, -104, -61, 121, 62, 39, -22, 34, -96, 84, -125, 40, 54, 31, -7, 38, 69, -89, -83, -73, -37, 62, 9, -56, 113, 60, -47, 1, 32, 68, 48, 36, -55, 120, -74, 110, -10, -35, 79, 65, -39, -81, 43, -108, -61, 121, -39, 98, -99, 64, 50, 46, -64, 114, 27, -60, -2, 43, -110, 47, 61, 15, -127, -17, 42, 64, -122, 30, -3, 36, -102, 102, 25, 19, 92, 43, 95, 63, 116, 123, -26, 5, 107, -124, -106, 40, -106, -16, -26, -35, -123, -62, -35, 113, 103, 124, -104, 10, 48};
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
    msg.setTimeStamp(0.501734160638);
    msg.setSource(35732U);
    msg.setSourceEntity(87U);
    msg.setDestination(5982U);
    msg.setDestinationEntity(32U);
    msg.source.assign("TLHZNADMLJYKGFYHARYMGJSISVRECDBPDIDCJBXUWCXJLIOAZHESUFGBWKWTGFBJKWTMEUPZYFYTFZGAWEYSZRNSCPHNDRTYYFBUXALPVWUXPOGJVKBXIQPERIIEXNNVJNAUMRQOCSQCLCOQNKXQLLQQLIKMVXHRTBZWZCRMLVNWCEPBCUXVRSNPVGFAOHVBDAWPDMVMIXZQDISDFEJT");
    const char tmp_msg_0[] = {-39, -75, -62, 65, -47, 69, 0, 123, 28, 14, -99, 30, 19, 125, -121, 70, -42, -72, 42, -63, 66, -60, -120};
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
    msg.setTimeStamp(0.092190825646);
    msg.setSource(28848U);
    msg.setSourceEntity(143U);
    msg.setDestination(2485U);
    msg.setDestinationEntity(224U);
    msg.source.assign("MHPQNPUDHUGPXRZLGVPNARMWUVEUUVD");
    const char tmp_msg_0[] = {-80, 16, 112, -57, 19, 61, 119, 124, 65, -91, -88, -34, 117, -21, -75, 32, -38, -10, 31};
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
    msg.setTimeStamp(0.409344277087);
    msg.setSource(54589U);
    msg.setSourceEntity(213U);
    msg.setDestination(20573U);
    msg.setDestinationEntity(176U);
    msg.source.assign("REODUWDSWIVBHUGMMEHAITJXUSEITVFYKLAVVZEGPNJEXPCIWVXJQX");
    const char tmp_msg_0[] = {54, -92, 37, -53, 90, 2, -84, -83, 43, -98, -80, 125, -77, -10, -80, 9, -12, -3, 49, -47, 74, 69, 103, 44, -37, -57, 68, -109, -30, -13, 4, -40, -38, -52, -5, 125, 79, -126, 71, -15, 11, -101, -9, -86, -112, 82, -108, -52, 47, -79, 1, -53, 103, 79, -50, 33, 50, 94, 76, -39, 123, -46, -27, -43, -84, 122, 53, -11, 68, 40, 19, 6, 54, -88, 14, 11, -116, 48, -23, -55, 53, 18, -44, -15, -110, 14, 29, 95, 89, -12, -97, -31, 120, -105, -21, -110, 40, -101, 87, -68, 25, 29, -97, -91, 111, 119, -21, 90, -122, -6, -16, 31, 26, -72, -102, -122, -73, 61, 125, -60, -48, 79, -96, -105, -96, -107, 31, 47, -22, -14, 83, -52, -90, 36, 112, -77, 85, 75, 52, 33, -21, 97, -45, 7, 100, 83, -55, -63, 54, -96, -81, -19, -94, 18, 8, -95, -67, -103, -59, -68, -41, 65, -3, 75, -30, -89, 27, -9, -127, -27, -88, 52, 78, 51, -78, -95, -7, 91, -26, -78, 83, 99, -66, 29, 110, 2, -54, 35, -53, 81, -15, -96, -86, -54, 97};
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
    msg.setTimeStamp(0.376658116984);
    msg.setSource(40639U);
    msg.setSourceEntity(1U);
    msg.setDestination(3198U);
    msg.setDestinationEntity(233U);
    msg.seq = 1111817750U;
    msg.state = 169U;
    msg.error.assign("VPXJKSQNDNKMKNEIXBISWLESORFCITPBVGZIUEPLRZATRMCUIPAURVYKSBEYMCYQXNXNLJSYEXJMXOOWAOQLENZYQGQGYQPGLWHHKAUHJDVVMGWVJBERDTPHGCANTCJTIBLVRUMWNWPHAXDFSKLAZFITTEYZYVUZWXJWEHSFADLLLTFBVPJIQHCFZPWBDXKHBFKBJBUFXHOMGQTZCZHIOTDOYACWNYVUFJSPZSRMGMSFDQDMUGU");

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
    msg.setTimeStamp(0.153214442726);
    msg.setSource(59557U);
    msg.setSourceEntity(83U);
    msg.setDestination(53458U);
    msg.setDestinationEntity(228U);
    msg.seq = 1081494077U;
    msg.state = 68U;
    msg.error.assign("KFGBJKFCQCQAQCLVOYMEDLLXCQEWUIWAUXTULFSLZQIOZTKIOBNHBCGFGOMDAMFMPHFINZNXCHRUWNZXVWIYCHABTTEXIGBLJDSMHLKRURVJONOLGTHYIYJGRYMGVNZPVPSKXBWJHDNSXLEZVOPZRYRIFGBG");

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
    msg.setTimeStamp(0.891798970865);
    msg.setSource(26607U);
    msg.setSourceEntity(251U);
    msg.setDestination(19855U);
    msg.setDestinationEntity(209U);
    msg.seq = 3812484779U;
    msg.state = 76U;
    msg.error.assign("QAEOOAPHVKQGMEHNRGHCVKJRFQDFVRPNSGOUJUYBYHVGFAQIDXYCXTANSIVQEPONJDAOTDZYAQWVOPWKUBEVEFWHFBRVTZGWWBQKTJEYUZPIOGAIFLKLJLQAYYMXUMNLZJXPRTHLLEBNSIRYXPCZRBYUCMPEFKSASDRVXHDWOYPKJCCXNRLKQDODLWTBWMTJEUITPMXCSWIUUSBMBGFINHQSGAESNIZNSJZLG");

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
    msg.setTimeStamp(0.459672598645);
    msg.setSource(36465U);
    msg.setSourceEntity(10U);
    msg.setDestination(49650U);
    msg.setDestinationEntity(96U);
    msg.origin.assign("CNJWKEEXGVTQIZXZNIPQOJAXHAOWFLBBGJECNEHAKACMUTFZIJCJBQJFUPFZWTXQHKYOMVVRZ");
    msg.text.assign("UDLWPFZMLVACEZRPJNZQUCXROXJIMJCYNKHORYJTFSWXOMNNDNPCSLQWSNEOFDWZRITPPXHBSUAQIHXQUSEPBDHJGRFMZCOZSLGSMTGBHVUFYAZUVXWDLMZVMROIWAHYIABJBIZLETEIWYSGBKUYPQQYYKCQMGCVMQJPXITLTDKLUFVKXEHNZVFOASKHRDTAEHJGNEUTHVCEQOBFOWKQKFDPWKEMNOWBDJAF");

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
    msg.setTimeStamp(0.388056146506);
    msg.setSource(18673U);
    msg.setSourceEntity(228U);
    msg.setDestination(45991U);
    msg.setDestinationEntity(181U);
    msg.origin.assign("ZAGFXXMYRZLRRTZIEHUIZASQISUZVRDCUHCQMFXPVCZUPTEGSBBOPIJHWQCYHHGJGHBHARCFLZOWZCYBPDIUNQQFVRWAWSPPVCYSFVNJLDSLNJGLNQLTOYXXBSMHPYSWFDWFMLEQAVLHGOEXDDVMERUJJ");
    msg.text.assign("FXDROICXPUWJYQHKEEWVFGZIJABOJRKUWQYYKZNJBCRWNZQKYYHMESXXKBDYLCZVHLMIRFTVZTBNTFIANXZFVMDPERVFILOFMLEMLUOOBURWAJTSPKHSUCGMWQQSPQJQLSHTDKJMXNACMBMKOYQHFAPJEILBIVZGQHUBLCUGDOSGTZARPTNTYUQVKSPECAKNOWPEXIDNPCXAJWPTIOAGGGESLHYDYGMARGHCZIECUNSHVORWVZRTXWJVBFNFD");

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
    msg.setTimeStamp(0.343586417993);
    msg.setSource(18527U);
    msg.setSourceEntity(54U);
    msg.setDestination(40559U);
    msg.setDestinationEntity(46U);
    msg.origin.assign("CMYHETXLAOJCJXREVDJTOADICMDSRXONBMDBAAOEOPRQNQGGKSUQUGMIGNHKIPIFGMRUFBQKKQORBYOVLQWRVNHWSZSZRHNIZFKVSFHLHWMIDRXWDWYSNONCZSPNGVYEFMIYPT");
    msg.text.assign("CMPOQBQCSHSJZIVXQWFGHMVCFGRAIDURJRDJKTMBAEIQFNVFYZNXCZNVCMODRKSUXYQNEPKTFVOUYFYHCLKKCLHHEWPUZUKGJGPYALOWOWLHOVEXURGDMZALPBPAOKHNRMPEVUPPXWJIDTNANPBXDTWIZTSKGASEMJUCRIHEEIFWTFILISJXBILSVQEGZUYBXSNUXGRDQSQAYARMTWQFRBHETZDZDFCYWKD");

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
    msg.setTimeStamp(0.972267859619);
    msg.setSource(11716U);
    msg.setSourceEntity(118U);
    msg.setDestination(17103U);
    msg.setDestinationEntity(210U);
    msg.origin.assign("BOVGGUPXPXJBGPWGIJKSOKKTFMUVQWYLZNCKFHPXRFSXMCFBEVCAABNWBNODFCEZFKCSADXRXEBMPAEKFMZKOUMNAUBYFZABUMSXOQJNYHJWUWHDHGJKYYPIDNFVDQICHGLUNGGIOSRFIEJDMLIJLTZDDRRMVCRUTTTEHEYYTTPIXIWNGAKJZSUVVOQVLRWQOPILZHZVASWHXDLHAZPLQLQZRJRLCOMYKEQS");
    msg.htime = 0.0962215649204;
    msg.lat = 0.0774144003676;
    msg.lon = 0.380028591582;
    const char tmp_msg_0[] = {100, -56, -62, -115, -10, 119, -12, -43, 101, 108, 114, -117, -32, -98, 119, 38, 118, -14, -100, -126, 110, -63, -70, -30, 90, 42, -7, 82, 9, -26, -65, 54, -40, 0, -122, 89, 60, -23, 12, 111, 98, 121, -84, -90, -54, 81, 61, 45, 72, -18, 65, -93, 65, 126, 29, -103, 80, 122, -37, -96, 68, 16, 52, 18, -111, 118, -127, -26, 26, 74, -20, 120, 45, -26, 16, 66, -59, 12, -64, -8, -49, 81, -23, -56, 52, -123, 95, 9, -128, -63, 49, -115, 117, 87, -14, -72, -85, 33, -125, 26, -25, -111, -43, -57, 27, 97, 47, 120, 7};
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
    msg.setTimeStamp(0.0319111452712);
    msg.setSource(28599U);
    msg.setSourceEntity(135U);
    msg.setDestination(51069U);
    msg.setDestinationEntity(245U);
    msg.origin.assign("VULLBDXWCWNLZOBWKRQSDOOSCKYEMFHAAUW");
    msg.htime = 0.968809822469;
    msg.lat = 0.728602503101;
    msg.lon = 0.425786179252;
    const char tmp_msg_0[] = {8, 17, 47, 55, -117, 71, 16, 101, 116, 59, -112, -52, 124, -120, -43, 61, 49, 110, -3, 116, -58, -22, 12, -6, 33, 87, 88, 13, -111, -25, 29, -11, 124, 19, 23, -45, -89, -12, 65, -14, 78, -61, -56, -96, -73, -119, -2, -88, 126, 122, -128, 54, -105, 74, -54, -26, -34, 3, 118, 37, 51, -122, 80, 110, 21, 50, 81, -22, 51, 124, 51, 30, 40, 42, -4, -82, -35, -72, -73, -59, 91, 1, -21, 29, -72, 101, 7, -115, -36, -36, 15, -127, -27, 40, 35, -52, 104, 117, -62, -56, -25, -33, 40, 47, -78, 14, 74, -59, -107, 122, -57, 55, 21, -61, -121, 112, 27, -100, 122, 112, -118, -54, 104, -123, 91, -11, -127, 116, 22, -109, -81, -97, 74, 14, 6, 73, -29, 70, 106, -54, 117, 9, -32, 49, 37, -11, -62, 109, 106, -93, -106, -65, -55, -27, -4, 26, 54, 101, 85, 96, 58, 41, 88, -64, 0, 65, 80, 17, -20, -8, -13, -75, 59, -85, 85, 109, -2, 56, 108, 52, -33, 0, -10, -119, -34, -62, 89, -93, 26, 9, 27, -1, 118, 93, -78, 121, 39, -69, -74, -79, -18, 61, 101, 89, -13, 42, -6, 101, 98, 70, 116, 32, 28, -6, 57, 71, 120, -101, 31, -122, -42, -77, 52, -53, -71, 121, 66, -38, 55, 87, -17, -63, 15, 37, -114, 47, 71, 79, 18, -102, 49, -2, 93, -96, 114, -118, -68, 10, 3, 64, -14, 88, 124, -27};
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
    msg.setTimeStamp(0.021844445929);
    msg.setSource(38382U);
    msg.setSourceEntity(230U);
    msg.setDestination(37614U);
    msg.setDestinationEntity(32U);
    msg.origin.assign("JROHJSNGAPTILEKLJSVTMXPWFOWHDCSH");
    msg.htime = 0.963199772299;
    msg.lat = 0.200802893083;
    msg.lon = 0.640176086396;
    const char tmp_msg_0[] = {-34, 103, -18, -11, 112, 81, 89, -112, 116, 82, 38, -81, 105, -42, 11, -41, 124, 74, -89, 77, -100, -76, 78, 55, -83, 64, -83, -111, 38, -120, -6, -91, 37, -39, 100, -121, -62, 86, 31, -4, -54, 102, -97, -106, 13, -83, -31, 64, -20, -44, -54, -25, -2, -18, -12, -55, 115, -57, 71, -33, -14, 10, 117, -39, -66, -7, 19, 24, -77, 113, 54, -122, 60, -115, -99, -4, -109, -59, 114, -33, -116, 43, -114, -109, 18, -30, 19, -16, 50, -110, 85, -3, 45, -48, 45, -104, -62, 67, 15, 113, -73, -77, -50, 57};
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
    msg.setTimeStamp(0.422563706935);
    msg.setSource(65532U);
    msg.setSourceEntity(113U);
    msg.setDestination(36593U);
    msg.setDestinationEntity(89U);
    msg.req_id = 36232U;
    msg.ttl = 44956U;
    msg.destination.assign("EPZCKBOWMRUSKXIFJYTWMOZDBTVEJEIDCOMODSZYHHZMZDUIRCGGFNFCAJVMPL");
    const char tmp_msg_0[] = {-24, 53, -103, -123, 4, -113, -77, 83, -66, 63, 83, 6, -83, -90, 58, 15, 114, 7, -61, -94, -87, -23, -61, 91, 46, 76, 41, -33, 27, -106, -4, 51, -103, -18, -126, 1, -92, -114, 47, 75, -69, 7, 90, -54, -64, -66, -77, 21, -77, 11, -114, 125, -87, -68, 42, -85, 55, 89};
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
    msg.setTimeStamp(0.870092462663);
    msg.setSource(4851U);
    msg.setSourceEntity(172U);
    msg.setDestination(48460U);
    msg.setDestinationEntity(118U);
    msg.req_id = 56171U;
    msg.ttl = 14609U;
    msg.destination.assign("RDKFYEUDTBRMJYVQOAXLYLZGDYQJQIHPZBDHXKFXTZOKDJXKGSNAUNCCFTTZUMVQPUPEIAPULEORHVXSEVMEFYHJLFWVVHJKWRBSLSGQTQARNSFOCAQCLGSSINDKSJOILJBHTPNOMLBWBERXMIGGY");
    const char tmp_msg_0[] = {-48, 109, -78, -85, 28, -57, -37, 111, -31, -120, 67, 105, -32, -46, 70, 57, -78, 109, -111, -30, 118, 112, 87, 89, -113, -91, -72, 42, 26, -78, 64, -52, 4, 77, -79, -93, 56, 49, -53, -119, -19, -87, 43, 32, 104, -122, 21, 114, 38, -38, -88, -127, -106, -98, -79, 122, 63, -67, 79, 90, 48, -62, 16, -16, 106, 11, -16, -126, 32, -46, -33, 86, -118, -65, -98, 11, 45, 85, -77, 7, -107, -42, -57, 120, -75, 47, 107, 86, 88, 31, 65, -116, 104, 72, -67, 38, -76, -117, 116, -70, -98, -4, -9, 28, -8, 31, 71, -21, 12, -10, 85, -5, 83, -65, -32, 33, -40, -9, -17, -7, -115, -94, 124, -28, -79, -114, -11, 62, -49, 13, -23, -128, 86, -118, -62, 15, -44, -86, 81, 96, -59, -61, 69, 33, 14, 104, -7, -70, 27, 110, -103, 117, 18, -107, 48, 96, -110, 31, -126, 62, 72, 104, -88, -45, 119, -75, 86, 87, -81, -1, 26, 93, -78, 25, 25, -95, -95, -112, 24, 36};
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
    msg.setTimeStamp(0.828640453718);
    msg.setSource(17114U);
    msg.setSourceEntity(237U);
    msg.setDestination(38097U);
    msg.setDestinationEntity(210U);
    msg.req_id = 40696U;
    msg.ttl = 7277U;
    msg.destination.assign("IASHYUDLBFYHCHYPOBHLWAMDQACLKKXTZGVWDNJNUDAFNMVECGYBRGCRRRFCZHKOPSFVNIZMHTTPPEEXLOYOFQXRXNJFPGXXQCDERPSBWCARDCZBVLTWWURQNJCFIYSNOZYBKUKSWWZJSNWHMTGLGKREJDIBQQEUBUVXTSKUFLZHXFUEXYFEZKAMWOHSLADYGAQVPGMNJIMTGEVUDMQIRJOXZSIAYO");
    const char tmp_msg_0[] = {-43, -49, 1, 93, -77, 15, -56, -14, -55, 28, 113, -28, -78, 111, -22, 15, -73, 25, 103, -117, -121, 109, 116, -87, 1, -93, -124, -62, -79, -89, 45, 82, 29, 6, -115, -79, -65, -7, 98, -30, 26, 54, -14, -114, -93, 13, 94, 66, 76, 57, 85, 38, 122, -111, -105, 126, 85, -73, 17, 40, -80, 58, 122, -89, -127, -41, 124, 51, 48, -5, 123, -8, -113, -43, -19, -25, 6, 13, 80, -40, -2, -94, -91, 86, 90, 89, 48, 122, 76, 42, -64, -82, 16, 93, -110, -16, 48, -45, 3, -99, -95, 121, 33, 18, 9, 42, -11, -57, 60, 94, 62, 42, -49, 96, 82, -7, -89, 97, 46, 19, 20, -128, -78, -108, 23, 67, 29, 91, -26, -112, -127, 66, 91, -94, 25, 41, -40, 20, 103, -75, 53, 47, 3, 15, -77, 98, 3, -12, 35, -121, -125, -24, -34, -119, -51, -3, -22, -25, 108, -68, 25, 114, 31, 18, 68, -79, 83, 47, -41, 7, -123, -119, -37, 52, -64, -102, -103, -90, 113, -65, -32, -103, 87};
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
    msg.setTimeStamp(0.118043108648);
    msg.setSource(47621U);
    msg.setSourceEntity(194U);
    msg.setDestination(16239U);
    msg.setDestinationEntity(7U);
    msg.req_id = 23602U;
    msg.status = 154U;
    msg.text.assign("GKMNIZPVRTYOMJQHWERWDRLWUSQOKSJCVMZVSOYMPJTZXLUAFDBRXNGVXMZISIPIUFAECYHMKEBYELJNHLPQLMNFQGBUFNPZAHEYOKTAUTKHKEXKGBYZUANQHEXRSQSIUFMJVLZRBAPRRSOLWCBBVDTPFWQTCAHYWFQWEXGWXDZFIHRTLTEYIACGTSUOPNSORKDH");

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
    msg.setTimeStamp(0.551669862412);
    msg.setSource(46603U);
    msg.setSourceEntity(56U);
    msg.setDestination(44008U);
    msg.setDestinationEntity(96U);
    msg.req_id = 59328U;
    msg.status = 229U;
    msg.text.assign("VBXXFKTAISYNHEPQSTLXXOYKEACRWPWMJKREYQWFJVGAUUIWZONQLHPEBZIMLSESPBHEDSTLRYHBNHDYYMLUILZCQLZKLKNTUBXUOWSBGOGDGJVOMRVBCGSEUCFAAEDIUAAEVGDIJSUQQTDKQVTATYSTBWCHOMRXLJXATKHCQXZHQVYRNYPIRMAPKFFKMBCLNJZ");

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
    msg.setTimeStamp(0.457293744918);
    msg.setSource(33548U);
    msg.setSourceEntity(136U);
    msg.setDestination(39918U);
    msg.setDestinationEntity(128U);
    msg.req_id = 24769U;
    msg.status = 132U;
    msg.text.assign("FUDHACPFFRWYFHJCFZXXJMNKTSTDOOUKZVKKBDMSLUFARYJYYYMMVSAIXQTDNXGPNAEWZCUOWTRPKKLSAPQZRCVRLCW");

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
    msg.setTimeStamp(0.422548701184);
    msg.setSource(54712U);
    msg.setSourceEntity(224U);
    msg.setDestination(57442U);
    msg.setDestinationEntity(150U);
    msg.group_name.assign("FVFRCFFPFEONUXKRBCYIQBYLXNQYGXTELQAUXSVMXTSIKPTIUGELGMNUODOSZARGHOHBZZWBBHYAHEDHJZEOZGIAWLLZHAEQNWRHKNAAMWJUOCTSHWQBQNWLFPSPPBXNRWKOSCIFZYWWPVEMIHZEXRMTHYOTLFSYMJGRPPTKTYEQDCKVXCLFXKVIVJUQKIMZKDRUXKSTAUWACSQVVVMJMOZYNGNGGDEJ");
    msg.links = 1497601342U;

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
    msg.setTimeStamp(0.87245088179);
    msg.setSource(13556U);
    msg.setSourceEntity(82U);
    msg.setDestination(25244U);
    msg.setDestinationEntity(222U);
    msg.group_name.assign("OIUMIDFMUSHGNDSCCPBNENUVJXGPOZYHKFSWSPLPGXGSQUDRYMFEFTITPJGVAXQJQGVBGQBZHXJEGBBMDELHFRIUJOFOAKRRSHPTXHRCCTTYYCOKAVLZOMJXMNMXQWNKWLSYVQMKFTKUDBHYEEAQDLXEIZYCDSCATWTZEWXKGDFIZNSCRWOVAULRUCJFPOMNWKYNLEBZAEMHBVXOSLLVBQKPHQHYIZNUPZORWJYQGPVTUCJIRWDRTDALIIWAKN");
    msg.links = 4106880479U;

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
    msg.setTimeStamp(0.183343682458);
    msg.setSource(5341U);
    msg.setSourceEntity(84U);
    msg.setDestination(46397U);
    msg.setDestinationEntity(34U);
    msg.group_name.assign("QIJMXHNTDNTLURMYZNDCPTAGKSHJNFKTSWRRSDEQNWRPWDUHDLCRARTJPLPMYETBEFAVNHZZIDIKQNOKVEKZWAGPFGEXSUQRMLLYBQSXBOWYMSHFIUEQUJVWDGGIXWETGOQMOFDZSGLGACEONODWIBKHEJFCIKLVKFOKVAUEVDHMFBJJOYLJMWMAU");
    msg.links = 2815012670U;

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
    msg.setTimeStamp(0.0948087770455);
    msg.setSource(5453U);
    msg.setSourceEntity(110U);
    msg.setDestination(32429U);
    msg.setDestinationEntity(171U);
    msg.groupname.assign("LRKSEGQRLEHBYFFVLVBUTXMSOTDLYNGNKCMHRGXNNZPSNLFZATL");
    msg.action = 167U;
    msg.grouplist.assign("TIPHDHZTDCVYWDBPPNGFTXVILZBRDFMUZGZBYCCEQKJOELNBEJIUYVMCPKKZCSVOEJJFCTZPZNANSTBVIWKZJPFGOCREJQUYIMCAHTAIWRXMZFARMLLRHPEIJXAXDFOSWVNSYTDGZTEIDOWKWYDXUGQQB");

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
    msg.setTimeStamp(0.0966595351641);
    msg.setSource(44502U);
    msg.setSourceEntity(31U);
    msg.setDestination(17942U);
    msg.setDestinationEntity(98U);
    msg.groupname.assign("QRJBPXAEYLTZWGOECWJFISGRFXNFVFMLMTEAKDXKVHGYNCTYLBINCCQDZZZYQYQBVDJWHMJMGFHATBIHFCUYXGEOUXNFOIPUAYJSUJDRCNUTSBWVWZSYLQKVNKVIULIRUINCMLOEZAKISAOKKFPA");
    msg.action = 254U;
    msg.grouplist.assign("ATKVGWZVWGFFEBVIJIBAMIBOCXVIZDQYBFLLRDTLVJLKPPQZAPYRPRNVZAHIISXJXEXOOYFTGYJWFNYKNCFWKWSYOBSMMKWPRUZRAEQEZGDAZPXNTDLGPJVCXHUPCJQAUNBKQYHCSEYDRSZDNTCRGWXSSVBURMNGFCLUAQU");

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
    msg.setTimeStamp(0.794492727321);
    msg.setSource(41218U);
    msg.setSourceEntity(219U);
    msg.setDestination(48318U);
    msg.setDestinationEntity(206U);
    msg.groupname.assign("IUZDGHRRDZKNQHDMCWMSHJOWWBIFOUQAVQHMYHOBYTMGXGEEECNPKTUGTTWVEFDMBCHUYMTAKJNZZRMYSFPCVGTWIYNZSWRJAPSAXOVYEVPYJWXPCQZXCNMGWCUQXASXSLDLXFRLNHLKPICVZZTJGRDCJAHVLINATZEKSKGLSKFEOLLPQWARVNIDHIOPOYVQGJMSKJBBEFLXHGDTKXRSYWFFPBFUIAUXQBIEZCODRTNPBDNFJKOIEQLJVBQU");
    msg.action = 18U;
    msg.grouplist.assign("USRZFPLBKABWILUGURPYTKJ");

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
    IMC::LblRange msg;
    msg.setTimeStamp(0.868427227559);
    msg.setSource(39054U);
    msg.setSourceEntity(35U);
    msg.setDestination(56334U);
    msg.setDestinationEntity(82U);
    msg.id = 101U;
    msg.range = 0.123567439409;

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
    msg.setTimeStamp(0.416212411142);
    msg.setSource(51276U);
    msg.setSourceEntity(128U);
    msg.setDestination(42375U);
    msg.setDestinationEntity(189U);
    msg.id = 235U;
    msg.range = 0.0768967517279;

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
    msg.setTimeStamp(0.0963425794311);
    msg.setSource(24263U);
    msg.setSourceEntity(141U);
    msg.setDestination(49902U);
    msg.setDestinationEntity(169U);
    msg.id = 89U;
    msg.range = 0.0775847916556;

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
    msg.setTimeStamp(0.794049366663);
    msg.setSource(37803U);
    msg.setSourceEntity(16U);
    msg.setDestination(33068U);
    msg.setDestinationEntity(180U);
    msg.beacon.assign("XYIMHGAPJOOFKWFWIREKGAHFSJSTYVAOHAMUDHLCQFBXWCBAQRPZZPRFEZKZGQHZGDXSBWFDMIVUZWPDJSMOQ");
    msg.lat = 0.883233672748;
    msg.lon = 0.905303073506;
    msg.depth = 0.853819057525;
    msg.query_channel = 27U;
    msg.reply_channel = 45U;
    msg.transponder_delay = 141U;

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
    msg.setTimeStamp(0.297971848235);
    msg.setSource(8245U);
    msg.setSourceEntity(225U);
    msg.setDestination(59418U);
    msg.setDestinationEntity(36U);
    msg.beacon.assign("NKCYIBJDOOPMUQBYKAKMFDQQUJMKYHPFFSZIJZZMWSJZAGNFYCUJGNWMRDRGYPXY");
    msg.lat = 0.21926333276;
    msg.lon = 0.280677920511;
    msg.depth = 0.555416735832;
    msg.query_channel = 225U;
    msg.reply_channel = 65U;
    msg.transponder_delay = 12U;

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
    msg.setTimeStamp(0.518082054278);
    msg.setSource(54467U);
    msg.setSourceEntity(232U);
    msg.setDestination(4849U);
    msg.setDestinationEntity(240U);
    msg.beacon.assign("IRMKGHQZLSGVHXYXNRJQNZLFIAHGJODZFWJRETJKOYSVNHCETTKTNRTBPQTIIAANILLHBSKZPXOWBMDHAQIMQIDLCRGKBYVYJAMMSULTTMVBFUEMMFOZCGQP");
    msg.lat = 0.178334277401;
    msg.lon = 0.131332019375;
    msg.depth = 0.470214767974;
    msg.query_channel = 161U;
    msg.reply_channel = 8U;
    msg.transponder_delay = 35U;

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
    msg.setTimeStamp(0.403661730358);
    msg.setSource(2266U);
    msg.setSourceEntity(131U);
    msg.setDestination(17831U);
    msg.setDestinationEntity(76U);
    msg.op = 119U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JMUBODNABJKTTQAEHXYFMVIUOYPFERUGZNYPXJGSKAIXHDDYIBPESURMLPUQRQYUWNHOYWOY");
    tmp_msg_0.lat = 0.419901312892;
    tmp_msg_0.lon = 0.0638264219795;
    tmp_msg_0.depth = 0.427876842329;
    tmp_msg_0.query_channel = 57U;
    tmp_msg_0.reply_channel = 41U;
    tmp_msg_0.transponder_delay = 15U;
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
    msg.setTimeStamp(0.672196757306);
    msg.setSource(59304U);
    msg.setSourceEntity(151U);
    msg.setDestination(54384U);
    msg.setDestinationEntity(142U);
    msg.op = 218U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RPIOFVQUCHPRTNEUNIFHCGYXGUWBQPCMSVHBYTGTEAIHOZSGNBBLFPXCKBPOQOQXQVRQSTULGNIHCAJEXQQNMUDWTNMDWYPZOFZAKVCCYKFIUVJAEUXILJONWOLHDRIJKLXTLLWBHVJKZTJKIMZZZNXLLQSVTKLSAWWYUMZMORHOTZ");
    tmp_msg_0.lat = 0.463173515673;
    tmp_msg_0.lon = 0.324643361205;
    tmp_msg_0.depth = 0.84912373424;
    tmp_msg_0.query_channel = 119U;
    tmp_msg_0.reply_channel = 125U;
    tmp_msg_0.transponder_delay = 48U;
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
    msg.setTimeStamp(0.495402606624);
    msg.setSource(52119U);
    msg.setSourceEntity(145U);
    msg.setDestination(44844U);
    msg.setDestinationEntity(177U);
    msg.op = 155U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CINDGSZFXJLKSBVRNWHMYDFMRCDVIEAFEDTJKPUXCTFIFSUNFQOJMPUSJIEXLHXZJSJKALIHZPBGQUGBI");
    tmp_msg_0.lat = 0.660075128329;
    tmp_msg_0.lon = 0.0337811288309;
    tmp_msg_0.depth = 0.159618380671;
    tmp_msg_0.query_channel = 225U;
    tmp_msg_0.reply_channel = 144U;
    tmp_msg_0.transponder_delay = 89U;
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
    msg.setTimeStamp(0.841199203769);
    msg.setSource(52408U);
    msg.setSourceEntity(5U);
    msg.setDestination(62060U);
    msg.setDestinationEntity(18U);
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.63298543406;
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
    msg.setTimeStamp(0.63697969712);
    msg.setSource(31624U);
    msg.setSourceEntity(116U);
    msg.setDestination(20650U);
    msg.setDestinationEntity(233U);
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 241U;
    tmp_msg_0.error_count = 226U;
    tmp_msg_0.error_ents.assign("OVKGMMCDVTFNONOPWBMYTBRSYRYXCLNRPEBJHBSVKEWVQHBFPEROFELNTSUFLCBGUOXFWQHTYGEFQWMOTMGZOUEGQDPKKUECILMZ");
    tmp_msg_0.maneuver_type = 26282U;
    tmp_msg_0.maneuver_stime = 0.409492718804;
    tmp_msg_0.maneuver_eta = 18367U;
    tmp_msg_0.control_loops = 4112085732U;
    tmp_msg_0.flags = 120U;
    tmp_msg_0.last_error.assign("AJLNZGNWAHVGSYMVZQTGKASZYPQMMJSTJBVUIQEUDURPTDWPBCOZKFIQBEXWNYFKMCDNGEAJFSNGQFALYUEPLYBTQJSKGPDYLKUNFIPTATUEORHDXKAHBVTZBCXULROJMFTHMCNW");
    tmp_msg_0.last_error_time = 0.0747805911197;
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
    msg.setTimeStamp(0.422822966911);
    msg.setSource(8393U);
    msg.setSourceEntity(202U);
    msg.setDestination(34271U);
    msg.setDestinationEntity(104U);
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("SSIQOKQRWAGINRTIJBUFPHUPCEHMKJRTPYBXOPNVYXEQVVDWQRBTXNMFBWLVCCAVGZOAIXRNSGWFQDUOWAYZMHDESDIQVFKLSOYTWNFMKMEAQKGPSXVCXDYRRLMMBZICPBLJJ");
    tmp_msg_0.formation_name.assign("MBBXSYLEWMBULUIZFFDVDLCGBDOYUEHQMRCEAUWKXHBBCWSPEFDDXOWGKXSCEHJARTGNKJLMXPIAQNLFMLPZYLWNRKDAAGNGFFHUFNVMQQQDOQUGPTKHKAJUQPEYXPRFHTYIEPGWHPCIQZXVCRMATLBNUATDMRVTBVEUWBZZESTIYZSRLJOQZD");
    tmp_msg_0.plan_id.assign("LTLFLRCVZZFWULOLXWJHXDCYXAFYWZJLSNYYRHFOSDKIEAIWEFVHJNATHKCVZGIXMXIFZUNPDONUDKWOVSOWCBHMJGMSHWXDGFLQXYFXQBDLZQPGSACHYBXNVJVNEIRCBUGKEMFDAUUFKMBZTGHBTOHKLPJTWYARGQBVMTCNIQZNRSPAETDJJVYSCTOQRCWTSBAKDDJIPMGYRYKJEQMOMGCUIQXBURUREMIKPAGZQHOWVZNTPEUQPROVSL");
    tmp_msg_0.description.assign("ZXYJRNENCJLHAGFYINRDFVCDVNSJTRGZQIRERVMSWLPBQNNVESKWMADPHTYYUIOVIBBBKHOLZNMFWLSUEOOAIFCJZWKBDISEGIYVJBHSILYMHQBWTHKXKWUGTHHYJWDTLJXSTPXPOREPRJDQMGKERWFCQAQWUJGGELAKDQUEUMMKODAUCMCOSIQRNZXHYMLZFZDOXAZBXCQTGFKEIVNY");
    tmp_msg_0.leader_speed = 0.782508394813;
    tmp_msg_0.leader_bank_lim = 0.980154260603;
    tmp_msg_0.pos_sim_err_lim = 0.532683726001;
    tmp_msg_0.pos_sim_err_wrn = 0.971303331698;
    tmp_msg_0.pos_sim_err_timeout = 20946U;
    tmp_msg_0.converg_max = 0.172516995955;
    tmp_msg_0.converg_timeout = 10269U;
    tmp_msg_0.comms_timeout = 20428U;
    tmp_msg_0.turb_lim = 0.814794442958;
    tmp_msg_0.custom.assign("XXCAYRAORAYTSJHIQGNNBTEEHXPFUTLTUCIFWJ");
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
    msg.setTimeStamp(0.159004882515);
    msg.setSource(64284U);
    msg.setSourceEntity(196U);
    msg.setDestination(13819U);
    msg.setDestinationEntity(102U);
    msg.op = 78U;
    msg.system.assign("BESQCMTGIAPAYLSHYEDGRDZYHQLUVTICJWWIAHOQVVXKOBTOFHGWXWLSVKZOUWQSUYGBPYLCNAXXETUCMTDAXMXLRZRYCFOMEHMHSFAPCGWTPDGBDNAHFWPZXMJTQKIXBFMYFHLVVJFJOEFCZSDYPSZTOEI");
    msg.range = 0.484541756793;
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.518447715801;
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
    msg.setTimeStamp(0.906383994604);
    msg.setSource(55289U);
    msg.setSourceEntity(5U);
    msg.setDestination(21929U);
    msg.setDestinationEntity(176U);
    msg.op = 193U;
    msg.system.assign("JWMFFEDZFICEJSSECAEBFVYINYHSTQCVUNNISOGBZLZEKATHXTKRQWLFZWLRAYOONGZRIUDJYXFZOVIQGLZFKMVFQHVKTQMCVKFYUQJJUJHPYREOXJWSDNWDQSVRTMODOGBQLWUXAQPCAUV");
    msg.range = 0.819793341648;
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.474962815947;
    tmp_msg_0.i = 0.159556742566;
    tmp_msg_0.d = 0.136895424298;
    tmp_msg_0.a = 0.815952026563;
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
    msg.setTimeStamp(0.677632568458);
    msg.setSource(26095U);
    msg.setSourceEntity(31U);
    msg.setDestination(62293U);
    msg.setDestinationEntity(17U);
    msg.op = 239U;
    msg.system.assign("NZCUMFIYSZISAXG");
    msg.range = 0.982607240712;
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("EHAJDDCZEGSESILNBC");
    tmp_msg_0.sys_type = 85U;
    tmp_msg_0.owner = 43004U;
    tmp_msg_0.lat = 0.683114531815;
    tmp_msg_0.lon = 0.198139230079;
    tmp_msg_0.height = 0.381809844652;
    tmp_msg_0.services.assign("GEBEXYPVBBGCJOMKUBAXDHWSRMLHMNQCBWRBVNTUIZFYPJMILWJNECTYWXCQHTZLGKGMCSOQSQEWLXZVXSHDAEOAVHXPRKEBZKFAUANZXWHKALBYWGORPRQHWOKSVBIQFXAZZECPJSJSGKLUWAZUDJYRPSOGIQLXOFAFVYEMRHYJKWNUXZBDFNSKEPIJTJCFKDUTQIVGVHGHYR");
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
    msg.setTimeStamp(0.112349126223);
    msg.setSource(57851U);
    msg.setSourceEntity(10U);
    msg.setDestination(7835U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.940105139575);
    msg.setSource(64722U);
    msg.setSourceEntity(196U);
    msg.setDestination(30949U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.474996828993);
    msg.setSource(53487U);
    msg.setSourceEntity(53U);
    msg.setDestination(38586U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.631496662622);
    msg.setSource(56707U);
    msg.setSourceEntity(159U);
    msg.setDestination(5503U);
    msg.setDestinationEntity(227U);
    msg.list.assign("CQIGEQWIMUWLEXGNSQJHYHUZTATPVRSYSAGHSQHTW");

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
    msg.setTimeStamp(0.0938455163416);
    msg.setSource(49866U);
    msg.setSourceEntity(134U);
    msg.setDestination(20865U);
    msg.setDestinationEntity(213U);
    msg.list.assign("BNPVPJOJSNEBVVDVYQKFHMPPTFQLZBFLUCGQHPOZHWDEXYPVNZQUFQSQWHBCCGQHUXXSNFPLTBYUOSPWTSRLFQMHGCERZOXJAKZTRKQMGNRBFK");

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
    msg.setTimeStamp(0.606922520256);
    msg.setSource(13773U);
    msg.setSourceEntity(58U);
    msg.setDestination(5219U);
    msg.setDestinationEntity(237U);
    msg.list.assign("UJKPVZIOAJDCXYHDPUZQSXMZAJWPRSHWTOFPJBGHAUPMNTGJZAADEGBQBLRIEEESNDZSYRQMAGAVVFGFKCKRJQENYSXTUCIKFFRBKHOYRLNTPJMORODFQLXHYGUWMOVIAYLIXYKYRSHONVXKNNJUMTTBVIJYUKIXLODFVQLFQCTGPCNGDBTHMSBVEGWMXKVZBFMLWYQCHLWCILHOTTQJECWU");

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
    IMC::Rpm msg;
    msg.setTimeStamp(0.728239790597);
    msg.setSource(38131U);
    msg.setSourceEntity(58U);
    msg.setDestination(15603U);
    msg.setDestinationEntity(92U);
    msg.value = -11735;

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
    msg.setTimeStamp(0.516069106584);
    msg.setSource(32248U);
    msg.setSourceEntity(81U);
    msg.setDestination(21855U);
    msg.setDestinationEntity(129U);
    msg.value = -19279;

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
    msg.setTimeStamp(0.20128452209);
    msg.setSource(6590U);
    msg.setSourceEntity(43U);
    msg.setDestination(40315U);
    msg.setDestinationEntity(158U);
    msg.value = -1034;

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
    msg.setTimeStamp(0.345572589104);
    msg.setSource(11266U);
    msg.setSourceEntity(200U);
    msg.setDestination(49540U);
    msg.setDestinationEntity(5U);
    msg.value = 0.715515592823;

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
    msg.setTimeStamp(0.520548802573);
    msg.setSource(31806U);
    msg.setSourceEntity(91U);
    msg.setDestination(31596U);
    msg.setDestinationEntity(173U);
    msg.value = 0.846226557619;

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
    msg.setTimeStamp(0.13072282578);
    msg.setSource(39125U);
    msg.setSourceEntity(19U);
    msg.setDestination(17012U);
    msg.setDestinationEntity(156U);
    msg.value = 0.891371761154;

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
    msg.setTimeStamp(0.332976795195);
    msg.setSource(50574U);
    msg.setSourceEntity(161U);
    msg.setDestination(33499U);
    msg.setDestinationEntity(180U);
    msg.value = 0.810505659549;

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
    msg.setTimeStamp(0.408915471728);
    msg.setSource(40193U);
    msg.setSourceEntity(34U);
    msg.setDestination(2521U);
    msg.setDestinationEntity(19U);
    msg.value = 0.829433712356;

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
    msg.setTimeStamp(0.176749220809);
    msg.setSource(55330U);
    msg.setSourceEntity(79U);
    msg.setDestination(64738U);
    msg.setDestinationEntity(64U);
    msg.value = 0.413217883812;

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
    msg.setTimeStamp(0.780895394641);
    msg.setSource(45847U);
    msg.setSourceEntity(7U);
    msg.setDestination(40352U);
    msg.setDestinationEntity(162U);
    msg.validity = 952U;
    msg.type = 50U;
    msg.utc_year = 11578U;
    msg.utc_month = 80U;
    msg.utc_day = 127U;
    msg.utc_time = 0.0961855339134;
    msg.lat = 0.00101757486869;
    msg.lon = 0.353754508176;
    msg.height = 0.786566067983;
    msg.satellites = 114U;
    msg.cog = 0.703188398656;
    msg.sog = 0.644201339327;
    msg.hdop = 0.485998580179;
    msg.vdop = 0.10518822687;
    msg.hacc = 0.0640364898727;
    msg.vacc = 0.122945724112;

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
    msg.setTimeStamp(0.548119939886);
    msg.setSource(41041U);
    msg.setSourceEntity(115U);
    msg.setDestination(171U);
    msg.setDestinationEntity(36U);
    msg.validity = 28556U;
    msg.type = 4U;
    msg.utc_year = 49771U;
    msg.utc_month = 251U;
    msg.utc_day = 11U;
    msg.utc_time = 0.434108268295;
    msg.lat = 0.0585344321167;
    msg.lon = 0.322370854535;
    msg.height = 0.591966458662;
    msg.satellites = 79U;
    msg.cog = 0.624824158095;
    msg.sog = 0.899280976888;
    msg.hdop = 0.466595905523;
    msg.vdop = 0.0887326805321;
    msg.hacc = 0.919652437562;
    msg.vacc = 0.996308907326;

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
    msg.setTimeStamp(0.777445419953);
    msg.setSource(51610U);
    msg.setSourceEntity(39U);
    msg.setDestination(1973U);
    msg.setDestinationEntity(134U);
    msg.validity = 41232U;
    msg.type = 57U;
    msg.utc_year = 1807U;
    msg.utc_month = 205U;
    msg.utc_day = 52U;
    msg.utc_time = 0.305502874252;
    msg.lat = 0.185472892053;
    msg.lon = 0.0564972924424;
    msg.height = 0.349735703157;
    msg.satellites = 50U;
    msg.cog = 0.107478536462;
    msg.sog = 0.344144722311;
    msg.hdop = 0.589416857092;
    msg.vdop = 0.989636700574;
    msg.hacc = 0.936011353018;
    msg.vacc = 0.426568181995;

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
    msg.setTimeStamp(0.175936488497);
    msg.setSource(28213U);
    msg.setSourceEntity(38U);
    msg.setDestination(23484U);
    msg.setDestinationEntity(137U);
    msg.time = 0.778200978988;
    msg.phi = 0.301342368649;
    msg.theta = 0.249016880893;
    msg.psi = 0.789824666452;
    msg.psi_magnetic = 0.733929875658;

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
    msg.setTimeStamp(0.725595825885);
    msg.setSource(43813U);
    msg.setSourceEntity(212U);
    msg.setDestination(8418U);
    msg.setDestinationEntity(167U);
    msg.time = 0.0574349971844;
    msg.phi = 0.638375518559;
    msg.theta = 0.783710400179;
    msg.psi = 0.536444945605;
    msg.psi_magnetic = 0.468787774626;

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
    msg.setTimeStamp(0.551239988159);
    msg.setSource(31754U);
    msg.setSourceEntity(252U);
    msg.setDestination(25588U);
    msg.setDestinationEntity(26U);
    msg.time = 0.831362553189;
    msg.phi = 0.404917944591;
    msg.theta = 0.0212218926411;
    msg.psi = 0.920705745546;
    msg.psi_magnetic = 0.776992667847;

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
    msg.setTimeStamp(0.883438575446);
    msg.setSource(22674U);
    msg.setSourceEntity(165U);
    msg.setDestination(27319U);
    msg.setDestinationEntity(109U);
    msg.time = 0.247685325258;
    msg.x = 0.982538025388;
    msg.y = 0.577557197531;
    msg.z = 0.533063430796;
    msg.timestep = 0.722563772137;

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
    msg.setTimeStamp(0.673598060481);
    msg.setSource(20714U);
    msg.setSourceEntity(161U);
    msg.setDestination(59602U);
    msg.setDestinationEntity(128U);
    msg.time = 0.713640130783;
    msg.x = 0.700452132226;
    msg.y = 0.122026219289;
    msg.z = 0.400382136692;
    msg.timestep = 0.145187102065;

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
    msg.setTimeStamp(0.307650549893);
    msg.setSource(8749U);
    msg.setSourceEntity(55U);
    msg.setDestination(6318U);
    msg.setDestinationEntity(183U);
    msg.time = 0.0860636243362;
    msg.x = 0.426634021201;
    msg.y = 0.971499623861;
    msg.z = 0.583380561022;
    msg.timestep = 0.0145802348471;

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
    msg.setTimeStamp(0.291783535796);
    msg.setSource(61933U);
    msg.setSourceEntity(15U);
    msg.setDestination(2121U);
    msg.setDestinationEntity(195U);
    msg.time = 0.433743416575;
    msg.x = 0.556468435324;
    msg.y = 0.89229398235;
    msg.z = 0.0946255851527;

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
    msg.setTimeStamp(0.965493612943);
    msg.setSource(51243U);
    msg.setSourceEntity(109U);
    msg.setDestination(26674U);
    msg.setDestinationEntity(46U);
    msg.time = 0.871259835657;
    msg.x = 0.946594841464;
    msg.y = 0.381096773966;
    msg.z = 0.0209798739452;

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
    msg.setTimeStamp(0.396634181187);
    msg.setSource(39280U);
    msg.setSourceEntity(117U);
    msg.setDestination(39319U);
    msg.setDestinationEntity(37U);
    msg.time = 0.136809138998;
    msg.x = 0.952390383374;
    msg.y = 0.0560320551335;
    msg.z = 0.998697696554;

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
    msg.setTimeStamp(0.947227739398);
    msg.setSource(52762U);
    msg.setSourceEntity(246U);
    msg.setDestination(51356U);
    msg.setDestinationEntity(176U);
    msg.time = 0.746842589272;
    msg.x = 0.112897441592;
    msg.y = 0.424636299331;
    msg.z = 0.613845233773;

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
    msg.setTimeStamp(0.848712167295);
    msg.setSource(21404U);
    msg.setSourceEntity(5U);
    msg.setDestination(57434U);
    msg.setDestinationEntity(6U);
    msg.time = 0.235832837898;
    msg.x = 0.128100258056;
    msg.y = 0.327264368173;
    msg.z = 0.636692965814;

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
    msg.setTimeStamp(0.61736547756);
    msg.setSource(27644U);
    msg.setSourceEntity(176U);
    msg.setDestination(4104U);
    msg.setDestinationEntity(48U);
    msg.time = 0.326343852662;
    msg.x = 0.622069248917;
    msg.y = 0.801291743115;
    msg.z = 0.026983235112;

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
    msg.setTimeStamp(0.946385463796);
    msg.setSource(44524U);
    msg.setSourceEntity(40U);
    msg.setDestination(50147U);
    msg.setDestinationEntity(20U);
    msg.time = 0.023717496443;
    msg.x = 0.498698536544;
    msg.y = 0.266657627411;
    msg.z = 0.647999602776;

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
    msg.setTimeStamp(0.423780632271);
    msg.setSource(30509U);
    msg.setSourceEntity(103U);
    msg.setDestination(31189U);
    msg.setDestinationEntity(122U);
    msg.time = 0.502599829679;
    msg.x = 0.368682558078;
    msg.y = 0.21466202516;
    msg.z = 0.233345250689;

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
    msg.setTimeStamp(0.42302393566);
    msg.setSource(33335U);
    msg.setSourceEntity(65U);
    msg.setDestination(38520U);
    msg.setDestinationEntity(244U);
    msg.time = 0.913755988053;
    msg.x = 0.952790605332;
    msg.y = 0.136533963912;
    msg.z = 0.45167325427;

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
    msg.setTimeStamp(0.971076047696);
    msg.setSource(6002U);
    msg.setSourceEntity(72U);
    msg.setDestination(36600U);
    msg.setDestinationEntity(148U);
    msg.validity = 99U;
    msg.x = 0.633364085629;
    msg.y = 0.832925039325;
    msg.z = 0.939849735508;

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
    msg.setTimeStamp(0.0746730156751);
    msg.setSource(34770U);
    msg.setSourceEntity(168U);
    msg.setDestination(24257U);
    msg.setDestinationEntity(156U);
    msg.validity = 184U;
    msg.x = 0.717368168793;
    msg.y = 0.070633146793;
    msg.z = 0.363786224539;

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
    msg.setTimeStamp(0.958543783391);
    msg.setSource(31457U);
    msg.setSourceEntity(63U);
    msg.setDestination(31385U);
    msg.setDestinationEntity(31U);
    msg.validity = 236U;
    msg.x = 0.903476815434;
    msg.y = 0.531739487163;
    msg.z = 0.402559194312;

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
    msg.setTimeStamp(0.520388371796);
    msg.setSource(22196U);
    msg.setSourceEntity(199U);
    msg.setDestination(32657U);
    msg.setDestinationEntity(249U);
    msg.validity = 239U;
    msg.x = 0.24837053809;
    msg.y = 0.723659218616;
    msg.z = 0.7466190941;

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
    msg.setTimeStamp(0.310939252421);
    msg.setSource(35732U);
    msg.setSourceEntity(100U);
    msg.setDestination(5341U);
    msg.setDestinationEntity(246U);
    msg.validity = 47U;
    msg.x = 0.535685475147;
    msg.y = 0.541089938988;
    msg.z = 0.384073300292;

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
    msg.setTimeStamp(0.661867112839);
    msg.setSource(57960U);
    msg.setSourceEntity(7U);
    msg.setDestination(51988U);
    msg.setDestinationEntity(132U);
    msg.validity = 64U;
    msg.x = 0.443917146605;
    msg.y = 0.480570112313;
    msg.z = 0.443160778782;

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
    msg.setTimeStamp(0.745994711959);
    msg.setSource(2962U);
    msg.setSourceEntity(57U);
    msg.setDestination(55565U);
    msg.setDestinationEntity(202U);
    msg.time = 0.719894230454;
    msg.x = 0.539108182404;
    msg.y = 0.23350091277;
    msg.z = 0.950410910879;

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
    msg.setTimeStamp(0.54000976498);
    msg.setSource(1722U);
    msg.setSourceEntity(190U);
    msg.setDestination(13865U);
    msg.setDestinationEntity(57U);
    msg.time = 0.651410447642;
    msg.x = 0.428978327475;
    msg.y = 0.175522632569;
    msg.z = 0.287048343664;

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
    msg.setTimeStamp(0.00772160173653);
    msg.setSource(9897U);
    msg.setSourceEntity(5U);
    msg.setDestination(53072U);
    msg.setDestinationEntity(8U);
    msg.time = 0.885782710557;
    msg.x = 0.76188893379;
    msg.y = 0.515904491545;
    msg.z = 0.159182063938;

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
    msg.setTimeStamp(0.637914350157);
    msg.setSource(34582U);
    msg.setSourceEntity(176U);
    msg.setDestination(48496U);
    msg.setDestinationEntity(215U);
    msg.validity = 47U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.903567702753;
    tmp_msg_0.y = 0.692940724183;
    tmp_msg_0.z = 0.367259826232;
    tmp_msg_0.phi = 0.119365168301;
    tmp_msg_0.theta = 0.12995554187;
    tmp_msg_0.psi = 0.409904024623;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.808135250214;

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
    msg.setTimeStamp(0.86169236429);
    msg.setSource(49810U);
    msg.setSourceEntity(249U);
    msg.setDestination(45149U);
    msg.setDestinationEntity(53U);
    msg.validity = 164U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.224043254102;
    tmp_msg_0.y = 0.617773056703;
    tmp_msg_0.z = 0.143566408643;
    tmp_msg_0.phi = 0.0715415634229;
    tmp_msg_0.theta = 0.502305717817;
    tmp_msg_0.psi = 0.507104101482;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.609530329772;

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
    msg.setTimeStamp(0.0451711464116);
    msg.setSource(46784U);
    msg.setSourceEntity(250U);
    msg.setDestination(31117U);
    msg.setDestinationEntity(189U);
    msg.validity = 46U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.649258443476;
    tmp_msg_0.y = 0.782968093864;
    tmp_msg_0.z = 0.959682234998;
    tmp_msg_0.phi = 0.8152691712;
    tmp_msg_0.theta = 0.14955581626;
    tmp_msg_0.psi = 0.461220603045;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.66231175814;
    tmp_msg_1.beam_height = 0.879979045953;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.203767859508;

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
    msg.setTimeStamp(0.135493198689);
    msg.setSource(56335U);
    msg.setSourceEntity(32U);
    msg.setDestination(11077U);
    msg.setDestinationEntity(144U);
    msg.value = 0.590246502246;

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
    msg.setTimeStamp(0.685428342171);
    msg.setSource(10668U);
    msg.setSourceEntity(63U);
    msg.setDestination(38059U);
    msg.setDestinationEntity(120U);
    msg.value = 0.886453697856;

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
    msg.setTimeStamp(0.410890322145);
    msg.setSource(38148U);
    msg.setSourceEntity(90U);
    msg.setDestination(3595U);
    msg.setDestinationEntity(235U);
    msg.value = 0.455827426934;

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
    msg.setTimeStamp(0.639822387331);
    msg.setSource(31125U);
    msg.setSourceEntity(180U);
    msg.setDestination(27006U);
    msg.setDestinationEntity(119U);
    msg.value = 0.101731774795;

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
    msg.setTimeStamp(0.106896642032);
    msg.setSource(42356U);
    msg.setSourceEntity(118U);
    msg.setDestination(44885U);
    msg.setDestinationEntity(84U);
    msg.value = 0.573214681714;

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
    msg.setTimeStamp(0.352172407433);
    msg.setSource(177U);
    msg.setSourceEntity(242U);
    msg.setDestination(34478U);
    msg.setDestinationEntity(73U);
    msg.value = 0.250410588205;

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
    msg.setTimeStamp(0.915488971349);
    msg.setSource(42939U);
    msg.setSourceEntity(188U);
    msg.setDestination(48299U);
    msg.setDestinationEntity(196U);
    msg.value = 0.635008626528;

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
    msg.setTimeStamp(0.747258451197);
    msg.setSource(57487U);
    msg.setSourceEntity(168U);
    msg.setDestination(26093U);
    msg.setDestinationEntity(38U);
    msg.value = 0.821175660714;

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
    msg.setTimeStamp(0.935696326086);
    msg.setSource(15980U);
    msg.setSourceEntity(205U);
    msg.setDestination(4529U);
    msg.setDestinationEntity(70U);
    msg.value = 0.528805672034;

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
    msg.setTimeStamp(0.625851450044);
    msg.setSource(1293U);
    msg.setSourceEntity(238U);
    msg.setDestination(58772U);
    msg.setDestinationEntity(239U);
    msg.value = 0.649173644443;

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
    msg.setTimeStamp(0.193409415379);
    msg.setSource(26877U);
    msg.setSourceEntity(209U);
    msg.setDestination(64600U);
    msg.setDestinationEntity(250U);
    msg.value = 0.864505107441;

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
    msg.setTimeStamp(0.050333714499);
    msg.setSource(33934U);
    msg.setSourceEntity(47U);
    msg.setDestination(30530U);
    msg.setDestinationEntity(136U);
    msg.value = 0.302893132345;

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
    msg.setTimeStamp(0.672158075533);
    msg.setSource(58619U);
    msg.setSourceEntity(90U);
    msg.setDestination(8538U);
    msg.setDestinationEntity(43U);
    msg.value = 0.634861008261;

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
    msg.setTimeStamp(0.238018626901);
    msg.setSource(32478U);
    msg.setSourceEntity(127U);
    msg.setDestination(36142U);
    msg.setDestinationEntity(165U);
    msg.value = 0.824651792135;

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
    msg.setTimeStamp(0.376400688631);
    msg.setSource(25042U);
    msg.setSourceEntity(36U);
    msg.setDestination(49404U);
    msg.setDestinationEntity(165U);
    msg.value = 0.0161813907499;

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
    msg.setTimeStamp(0.545193895006);
    msg.setSource(37228U);
    msg.setSourceEntity(89U);
    msg.setDestination(64199U);
    msg.setDestinationEntity(231U);
    msg.value = 0.440063464908;

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
    msg.setTimeStamp(0.884158112686);
    msg.setSource(36474U);
    msg.setSourceEntity(28U);
    msg.setDestination(64677U);
    msg.setDestinationEntity(102U);
    msg.value = 0.274628602996;

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
    msg.setTimeStamp(0.317133829764);
    msg.setSource(35778U);
    msg.setSourceEntity(207U);
    msg.setDestination(23464U);
    msg.setDestinationEntity(233U);
    msg.value = 0.472848261641;

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
    msg.setTimeStamp(0.755305736837);
    msg.setSource(26015U);
    msg.setSourceEntity(243U);
    msg.setDestination(42403U);
    msg.setDestinationEntity(163U);
    msg.value = 0.549814866375;

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
    msg.setTimeStamp(0.256602141921);
    msg.setSource(62345U);
    msg.setSourceEntity(23U);
    msg.setDestination(3799U);
    msg.setDestinationEntity(65U);
    msg.value = 0.909231145805;

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
    msg.setTimeStamp(0.71994373479);
    msg.setSource(36U);
    msg.setSourceEntity(69U);
    msg.setDestination(62697U);
    msg.setDestinationEntity(109U);
    msg.value = 0.943048360445;

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
    msg.setTimeStamp(0.276246315291);
    msg.setSource(58574U);
    msg.setSourceEntity(100U);
    msg.setDestination(19992U);
    msg.setDestinationEntity(100U);
    msg.value = 0.633582240564;

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
    msg.setTimeStamp(0.243083497983);
    msg.setSource(47816U);
    msg.setSourceEntity(102U);
    msg.setDestination(15361U);
    msg.setDestinationEntity(70U);
    msg.value = 0.462411934355;

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
    msg.setTimeStamp(0.999920156777);
    msg.setSource(21500U);
    msg.setSourceEntity(224U);
    msg.setDestination(47281U);
    msg.setDestinationEntity(14U);
    msg.value = 0.705636349327;

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
    msg.setTimeStamp(0.21863274854);
    msg.setSource(29420U);
    msg.setSourceEntity(212U);
    msg.setDestination(29434U);
    msg.setDestinationEntity(29U);
    msg.direction = 0.897457755659;
    msg.speed = 0.0283019903244;
    msg.turbulence = 0.671669844639;

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
    msg.setTimeStamp(0.494973951607);
    msg.setSource(24952U);
    msg.setSourceEntity(84U);
    msg.setDestination(63616U);
    msg.setDestinationEntity(232U);
    msg.direction = 0.405098961703;
    msg.speed = 0.229088417732;
    msg.turbulence = 0.0113500586092;

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
    msg.setTimeStamp(0.272119812938);
    msg.setSource(15862U);
    msg.setSourceEntity(60U);
    msg.setDestination(32774U);
    msg.setDestinationEntity(2U);
    msg.direction = 0.301923454687;
    msg.speed = 0.300388970019;
    msg.turbulence = 0.609131456708;

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
    msg.setTimeStamp(0.0183071747846);
    msg.setSource(51936U);
    msg.setSourceEntity(237U);
    msg.setDestination(13450U);
    msg.setDestinationEntity(34U);
    msg.value = 0.74679487338;

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
    msg.setTimeStamp(0.746404235613);
    msg.setSource(56076U);
    msg.setSourceEntity(128U);
    msg.setDestination(45631U);
    msg.setDestinationEntity(32U);
    msg.value = 0.584385849085;

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
    msg.setTimeStamp(0.520487071719);
    msg.setSource(11643U);
    msg.setSourceEntity(12U);
    msg.setDestination(32117U);
    msg.setDestinationEntity(126U);
    msg.value = 0.248711570413;

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
    msg.setTimeStamp(0.228236785079);
    msg.setSource(9931U);
    msg.setSourceEntity(226U);
    msg.setDestination(73U);
    msg.setDestinationEntity(34U);
    msg.value.assign("VOOHYAZOELXBKWLNJKOCYPULHJUMVDLACSPKZWDPGNNBWLOJYUDOZLJRMMEYSJHFTBCFYVRXVZXCAYCQXWSHFOQCIUFFVNIHPJAMYGZQTBGTYCGTCCFOADIVUWZZKCUGXRJYDQOQDWPHZQGIAMHMEGVEPOFKVEHBTBRNJXETNSQTKXKKIDAFFBRTBUKXQWLSLSUPMXWPJDHMTSDMEBZ");

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
    msg.setTimeStamp(0.50964915452);
    msg.setSource(25943U);
    msg.setSourceEntity(225U);
    msg.setDestination(50061U);
    msg.setDestinationEntity(197U);
    msg.value.assign("RSPXKZBWBVYFXSZECYAYBNCRYIDGNQGPQLNRLBGZXLZUNZFUNWEYTQWTMBUGCBCYLAOIYVXHLNSOSPWRJIMNGCBAPAHJPSLRQSBGOPERUCIRRHUQKFJIDTCDWHTMEAKCVDLVXFGDQFDVCTJJPLBMOKWVAOZPXPQOOHZHBNAYKXWFHNIVJ");

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
    msg.setTimeStamp(0.305753737201);
    msg.setSource(50634U);
    msg.setSourceEntity(44U);
    msg.setDestination(60782U);
    msg.setDestinationEntity(74U);
    msg.value.assign("TVDSFHBTEUMUPDPHJOCASSKIQJXJFTKLQQGPRLRWALTUWFXVNQIHUNMUDLNEXANRYYOMBDWWOJISCCPOZSKPDCTXVAIHIAYZLBKZCZGQAWFXQUSXMNSVYYUUPOQWF");

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
    msg.setTimeStamp(0.376824895862);
    msg.setSource(50841U);
    msg.setSourceEntity(192U);
    msg.setDestination(36959U);
    msg.setDestinationEntity(234U);
    const char tmp_msg_0[] = {54, 24, -9, -10, -84, 53, 72, 11, -38, -10, 60, -66, 3, 26, -31, -34, 47, 126, -110, 83, 118, 56, 103, 41, -81, 113, -105, 1, -89, -116, 43, 110, 12, 49, 26, -32, -17, -115, 18, -111, 103, -20, -47, 111, -115, 17, 90, 76, -18, 2, -103, 59, 9, -24, 54, -23, 79, -97, -53, 74, 62, -81, 105, 6, 59, 41, 119, -44, 56, 21, -113, -15, 121, -73, 40, 54, -120, 76, -118, 86, -41, 125, -39, -86, -78, 29, -91, 20, -96, -113, 46, -26, -21, 52, -42, -15, 122, -36, 116, -81, 55, 27, -97, -6, 32, 32, 120, -63, 64, -97, -110, -83, 44, 48, -28, 3, -120, 115, 30, 102, -49, -64, -87, -101, 38, -71, -2, 25, -74, 97, -15, 105, 30, -26, -55, 12, 47, 103, 94, -81, 124, -94, 94, -82, -104, -99, -93, -26, -82, 51, 82, -56, -94, 123, 0, -38, -13, -120, 49, 112, 112, 101, 106, 49, -9, 114, -91, 84, -25, 93, 81, -24, -121, -88, -127, -120, 44, 13, -47, 117, -47, -21, -25, 60, -83, -34, 102, 85, -92, -52, 2, -23, 101, 33};
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
    msg.setTimeStamp(0.7033604151);
    msg.setSource(36186U);
    msg.setSourceEntity(114U);
    msg.setDestination(33470U);
    msg.setDestinationEntity(32U);
    const char tmp_msg_0[] = {-96, -71, -55, -10, -84, -1, -55, -80, -3, 65, 80, 117, 100, 91, 93, -24, 9, -59, -4, 60, 24, -102, -24, 45, -13, -69, 125, -118, 74, -101, 69, 58, 4, 93, 60, 44, 57, 106, 84, 20, 33, 43, 55, -3, 2, -123, 19, -26, -119, -41, -103, 18, 43, 112, 7, 52, -21, 63, 98, 89, 20, -103, 4, -6, -112, -95, 12, 23, -4, 60, 14, -98, -114, 38, 103, 7, 123, 51, -108, 118, 66, -108, -62, -124, -125, 52, 35, -114, 60, 69, 23, -56, 15, 56, -2, -23, -28, 2, -27, 87, 26, -59, 23, 117, -116};
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
    msg.setTimeStamp(0.260671477146);
    msg.setSource(26147U);
    msg.setSourceEntity(151U);
    msg.setDestination(32574U);
    msg.setDestinationEntity(123U);
    const char tmp_msg_0[] = {-12, -101, -83, 44, -102, 110, 69, -76, -97, 90, 83, -78, -42, -7, -14, 95, 15, -55, 58, -72, 104, -1, 47, 102, 43, 92, -95, -28, -122, 44, 14, -26, -92, -28, -39, -13, 126, -23, -56, -124, 94, 123, -116, 57, -37, -87, -87, -25, 52, 47};
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
    msg.setTimeStamp(0.740749244358);
    msg.setSource(45364U);
    msg.setSourceEntity(112U);
    msg.setDestination(46563U);
    msg.setDestinationEntity(84U);
    msg.type = 160U;
    msg.frequency = 1548124563U;
    msg.min_range = 40086U;
    msg.max_range = 3436U;
    msg.bits_per_point = 91U;
    msg.scale_factor = 0.543701246064;
    const char tmp_msg_0[] = {-109, -90, -118, 41, 92, -121, 76, -105, 24, 71, 125, -23, 68, -112, 93, 60, -31, -103, 49, 18, 13, 70, -44, -86, -13, 43, -25, -2, -84, -21, -110, -121, -56, -60, 106, -32, -99, 23, -27, 30, -76, 31, 102, -53, 47, 113, -121, 51, -34, 19, 101, 79, 42, 66, 11, 117, -3, -26, 56, -20, -82, 25, -60, 93, -37, 124, -113, 7, -117, -7, 17, 87, -1, -101, 60, -98, -48, 65, -114, -127, 41, 79, -119, -88, 88, -90, 101, 57, -42, -97, 16, -35, 106, 25, -31, 52, -57, 95, 79, -41, 29, 45, -114, -86, 48, 67, -83, 43, -35, -101, -106, -24, 17, -45, -7, 83, -69, 126, 26, -95, -9, -117, -72, -54, 115, -72, 55, -42, -30, -114, 88, -44, -124, 64, -94, 18, -113, 79, -8, 75, 122, 72, -106, -116, 37, -68, 45, 98, 34, 115, -104, -114, -41, 105, -66, -111, 100, 34, -20, -16, -71, 55, 5, -12, 90, -55, 22, -72, 36, -117, 33, 115, 42, 114, 86, 97, -61, -14, -68, 57, -45, -87, -69, 33, -84, 121, -30, -1, 121, -34, -123, 102, -37, 51, 92, -6, -89, 49, 34, -87, -37, 5, 49, -86, -108, 66, 52, 125, 24, 69, -5, -11, 102, 16, -93, 83, 102, 90, -87, -15, -70, -18, 126};
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
    msg.setTimeStamp(0.374728711187);
    msg.setSource(21131U);
    msg.setSourceEntity(27U);
    msg.setDestination(16562U);
    msg.setDestinationEntity(156U);
    msg.type = 129U;
    msg.frequency = 2498371972U;
    msg.min_range = 64482U;
    msg.max_range = 12331U;
    msg.bits_per_point = 252U;
    msg.scale_factor = 0.422218753504;
    const char tmp_msg_0[] = {19, -90, -21, -8, -40, -119, -96, 83, 30, 74, -24, -17, -43, 36, 119, -104, -38, 65, -9, 69, 87, -86, -2, 108, -49, 33, 96, -60, -16, 48, -126, -23, 121, 9, 72, 117, 96, -65, 87, -105, -45, -3, -24, 123, -121, 1, -31, -47, 66, 53, 85, -51, 94, -98, -50, -77, -96, -103, -76, -39, 53, 1, -80, 87, -125, -53, 120, 35, 18, 85, 69, -6, -30, -55, 110, 21, -124, 62, 70, -94, -80, 112, -48, 120, 29, -31, 17, -22, -15, 83, -93, 123, 30, 100, -106, -18, -70, 41, -24, -101, -97, -112, 41, -79, -47, 56, -118, 37, 126, -47, 35, -40, -6, -7, 62, 7, -102, -70, 87, 85, 28, -68, 58, 73, 46, -72, 110, -71, 37, -86, 30, 45, -13, 112, -90, -73, -74, 107, 110, -12, -14, 13, 116, 91, -16, 61, -122, 69, 108, -72, -98, 81, -124, 106, -48, -104, -16, 117, 27, -73, -79, -71, -71, 90, -9, -82, 93, -35, -31, -86};
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
    msg.setTimeStamp(0.46942363611);
    msg.setSource(6212U);
    msg.setSourceEntity(104U);
    msg.setDestination(23100U);
    msg.setDestinationEntity(156U);
    msg.type = 218U;
    msg.frequency = 1153352813U;
    msg.min_range = 10321U;
    msg.max_range = 40329U;
    msg.bits_per_point = 91U;
    msg.scale_factor = 0.0840413176487;
    const char tmp_msg_0[] = {-10, -12, 4, 37, -16, -106, -68, -36, -97, -78, -73, -71, -56, 11, 41, -28, 52, 13, 115, 27, -98, -119};
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
    msg.setTimeStamp(0.157852320865);
    msg.setSource(7026U);
    msg.setSourceEntity(69U);
    msg.setDestination(8124U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.68060804363);
    msg.setSource(39090U);
    msg.setSourceEntity(78U);
    msg.setDestination(49807U);
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
    msg.setTimeStamp(0.683026046001);
    msg.setSource(45343U);
    msg.setSourceEntity(77U);
    msg.setDestination(36664U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.436600223197);
    msg.setSource(26747U);
    msg.setSourceEntity(151U);
    msg.setDestination(6736U);
    msg.setDestinationEntity(84U);
    msg.op = 29U;

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
    msg.setTimeStamp(0.161815681247);
    msg.setSource(41845U);
    msg.setSourceEntity(117U);
    msg.setDestination(49848U);
    msg.setDestinationEntity(105U);
    msg.op = 174U;

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
    msg.setTimeStamp(0.591832022673);
    msg.setSource(39592U);
    msg.setSourceEntity(199U);
    msg.setDestination(48688U);
    msg.setDestinationEntity(235U);
    msg.op = 244U;

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
    msg.setTimeStamp(0.793953589368);
    msg.setSource(51503U);
    msg.setSourceEntity(185U);
    msg.setDestination(18613U);
    msg.setDestinationEntity(93U);
    msg.value = 0.338328925263;
    msg.confidence = 0.649612043466;
    msg.opmodes.assign("GASNEYNRWDIXLHSYKKWOTICSCHVMKKULLGPZBTYALIQVRMQOXHKXTRBBNFAYEWMEHOMCUGCXUNPHKROEVDMQYKILPFSHNOLDVLDZSAQFMNISSZNLYJATDJGQGNNIHMAZYDBHPWEUQWRAEDWGUCGPHVWQURWUSGDOABCPXKRPC");

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
    msg.setTimeStamp(0.413488089955);
    msg.setSource(28870U);
    msg.setSourceEntity(201U);
    msg.setDestination(33403U);
    msg.setDestinationEntity(150U);
    msg.value = 0.956502530431;
    msg.confidence = 0.163804931333;
    msg.opmodes.assign("GGQWSXVUATIFVKLBZGAPILVMWCTRCKLUWPAUTVCCAEMVDKTTRXWVAALZKPEZKYPNQEWGEWHGEGRJGXJRMFDPJCETABFIDYFQBQYIIJRVAJUPSYHLBBZROSXSQSJQZIQDNFUKI");

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
    msg.setTimeStamp(0.303767469846);
    msg.setSource(26222U);
    msg.setSourceEntity(20U);
    msg.setDestination(2650U);
    msg.setDestinationEntity(185U);
    msg.value = 0.127753256275;
    msg.confidence = 0.701876351366;
    msg.opmodes.assign("YDQKYGAAFZFBIAXORCTVINKHPVRKCZHVYFZLFCJBHKNNFTJEQOXNBUUOMSTLILOJPWQLIBNMDCCYXSCLKTHDP");

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
    msg.setTimeStamp(0.0733740560896);
    msg.setSource(62041U);
    msg.setSourceEntity(121U);
    msg.setDestination(5480U);
    msg.setDestinationEntity(39U);
    msg.itow = 81597218U;
    msg.lat = 0.59962139815;
    msg.lon = 0.400491663783;
    msg.height_ell = 0.134218735414;
    msg.height_sea = 0.604118866755;
    msg.hacc = 0.503353525911;
    msg.vacc = 0.0670081301366;
    msg.vel_n = 0.185325367244;
    msg.vel_e = 0.52853433755;
    msg.vel_d = 0.879219799714;
    msg.speed = 0.974579792335;
    msg.gspeed = 0.335444576017;
    msg.heading = 0.378066263862;
    msg.sacc = 0.773156705182;
    msg.cacc = 0.841882352806;

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
    msg.setTimeStamp(0.8921449398);
    msg.setSource(38190U);
    msg.setSourceEntity(71U);
    msg.setDestination(56116U);
    msg.setDestinationEntity(119U);
    msg.itow = 302460950U;
    msg.lat = 0.576806312135;
    msg.lon = 0.758986647709;
    msg.height_ell = 0.623862148784;
    msg.height_sea = 0.368007488309;
    msg.hacc = 0.150964253488;
    msg.vacc = 0.886715503022;
    msg.vel_n = 0.772197479007;
    msg.vel_e = 0.942130544004;
    msg.vel_d = 0.616834006776;
    msg.speed = 0.797722336969;
    msg.gspeed = 0.195502961495;
    msg.heading = 0.207322453742;
    msg.sacc = 0.0727325433218;
    msg.cacc = 0.28708414062;

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
    msg.setTimeStamp(0.0459018261309);
    msg.setSource(36764U);
    msg.setSourceEntity(163U);
    msg.setDestination(9177U);
    msg.setDestinationEntity(177U);
    msg.itow = 2743094819U;
    msg.lat = 0.37971882224;
    msg.lon = 0.30220452478;
    msg.height_ell = 0.67298333768;
    msg.height_sea = 0.454240701234;
    msg.hacc = 0.53705741771;
    msg.vacc = 0.57127479784;
    msg.vel_n = 0.641085615487;
    msg.vel_e = 0.944262773904;
    msg.vel_d = 0.356272199239;
    msg.speed = 0.783114611792;
    msg.gspeed = 0.719696188055;
    msg.heading = 0.663941767529;
    msg.sacc = 0.53134527836;
    msg.cacc = 0.903053870317;

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
    msg.setTimeStamp(0.289697688579);
    msg.setSource(12072U);
    msg.setSourceEntity(56U);
    msg.setDestination(12162U);
    msg.setDestinationEntity(133U);
    msg.id = 211U;
    msg.value = 0.877545316231;

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
    msg.setTimeStamp(0.854696699967);
    msg.setSource(59627U);
    msg.setSourceEntity(222U);
    msg.setDestination(3707U);
    msg.setDestinationEntity(5U);
    msg.id = 215U;
    msg.value = 0.556397573695;

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
    msg.setTimeStamp(0.160737335547);
    msg.setSource(56308U);
    msg.setSourceEntity(169U);
    msg.setDestination(10327U);
    msg.setDestinationEntity(121U);
    msg.id = 80U;
    msg.value = 0.186841174288;

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
    msg.setTimeStamp(0.63471616925);
    msg.setSource(37929U);
    msg.setSourceEntity(128U);
    msg.setDestination(12519U);
    msg.setDestinationEntity(252U);
    msg.x = 0.72067821253;
    msg.y = 0.36916292913;
    msg.z = 0.275567735595;
    msg.phi = 0.404496903856;
    msg.theta = 0.598877268197;
    msg.psi = 0.35290845224;

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
    msg.setTimeStamp(0.427161138993);
    msg.setSource(27644U);
    msg.setSourceEntity(246U);
    msg.setDestination(53068U);
    msg.setDestinationEntity(16U);
    msg.x = 0.802633276693;
    msg.y = 0.0238322914047;
    msg.z = 0.834280168074;
    msg.phi = 0.51444973178;
    msg.theta = 0.48795475133;
    msg.psi = 0.663576352628;

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
    msg.setTimeStamp(0.414682290655);
    msg.setSource(10506U);
    msg.setSourceEntity(159U);
    msg.setDestination(31534U);
    msg.setDestinationEntity(19U);
    msg.x = 0.655463678404;
    msg.y = 0.748929256147;
    msg.z = 0.989050316609;
    msg.phi = 0.665177629666;
    msg.theta = 0.5678007489;
    msg.psi = 0.771221461097;

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
    msg.setTimeStamp(0.116080082503);
    msg.setSource(21638U);
    msg.setSourceEntity(172U);
    msg.setDestination(61305U);
    msg.setDestinationEntity(225U);
    msg.beam_width = 0.823530134193;
    msg.beam_height = 0.453295298738;

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
    msg.setTimeStamp(0.3047006833);
    msg.setSource(14619U);
    msg.setSourceEntity(222U);
    msg.setDestination(40458U);
    msg.setDestinationEntity(215U);
    msg.beam_width = 0.230859479261;
    msg.beam_height = 0.934020906675;

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
    msg.setTimeStamp(0.0310378606115);
    msg.setSource(27282U);
    msg.setSourceEntity(90U);
    msg.setDestination(27677U);
    msg.setDestinationEntity(207U);
    msg.beam_width = 0.357527442222;
    msg.beam_height = 0.114106142648;

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
    msg.setTimeStamp(0.0780599942331);
    msg.setSource(22786U);
    msg.setSourceEntity(63U);
    msg.setDestination(59176U);
    msg.setDestinationEntity(102U);
    msg.sane = 40U;

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
    msg.setTimeStamp(0.477128476745);
    msg.setSource(9652U);
    msg.setSourceEntity(149U);
    msg.setDestination(18839U);
    msg.setDestinationEntity(221U);
    msg.sane = 105U;

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
    msg.setTimeStamp(0.752148240147);
    msg.setSource(60231U);
    msg.setSourceEntity(194U);
    msg.setDestination(24579U);
    msg.setDestinationEntity(207U);
    msg.sane = 22U;

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
    msg.setTimeStamp(0.983979393252);
    msg.setSource(57974U);
    msg.setSourceEntity(143U);
    msg.setDestination(47776U);
    msg.setDestinationEntity(134U);
    msg.value = 0.497403421007;

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
    msg.setTimeStamp(0.318193822031);
    msg.setSource(46528U);
    msg.setSourceEntity(62U);
    msg.setDestination(20458U);
    msg.setDestinationEntity(116U);
    msg.value = 0.181540569493;

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
    msg.setTimeStamp(0.223643029022);
    msg.setSource(31012U);
    msg.setSourceEntity(15U);
    msg.setDestination(23069U);
    msg.setDestinationEntity(38U);
    msg.value = 0.86834105415;

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
    msg.setTimeStamp(0.380539471472);
    msg.setSource(35584U);
    msg.setSourceEntity(26U);
    msg.setDestination(42945U);
    msg.setDestinationEntity(78U);
    msg.value = 0.908610519221;

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
    msg.setTimeStamp(0.207085187577);
    msg.setSource(14150U);
    msg.setSourceEntity(66U);
    msg.setDestination(57303U);
    msg.setDestinationEntity(155U);
    msg.value = 0.508846163452;

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
    msg.setTimeStamp(0.316298515646);
    msg.setSource(36846U);
    msg.setSourceEntity(238U);
    msg.setDestination(58444U);
    msg.setDestinationEntity(139U);
    msg.value = 0.844316116119;

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
    msg.setTimeStamp(0.976662152636);
    msg.setSource(13071U);
    msg.setSourceEntity(204U);
    msg.setDestination(25250U);
    msg.setDestinationEntity(142U);
    msg.value = 0.469024441059;

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
    msg.setTimeStamp(0.54721881729);
    msg.setSource(27303U);
    msg.setSourceEntity(219U);
    msg.setDestination(55354U);
    msg.setDestinationEntity(14U);
    msg.value = 0.614843503121;

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
    msg.setTimeStamp(0.751932130763);
    msg.setSource(40186U);
    msg.setSourceEntity(247U);
    msg.setDestination(53284U);
    msg.setDestinationEntity(110U);
    msg.value = 0.432202632827;

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
    msg.setTimeStamp(0.267229603132);
    msg.setSource(27894U);
    msg.setSourceEntity(159U);
    msg.setDestination(9936U);
    msg.setDestinationEntity(171U);
    msg.value = 0.940197304656;

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
    msg.setTimeStamp(0.867032925451);
    msg.setSource(33548U);
    msg.setSourceEntity(35U);
    msg.setDestination(11842U);
    msg.setDestinationEntity(50U);
    msg.value = 0.565194424074;

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
    msg.setTimeStamp(0.506752312787);
    msg.setSource(17729U);
    msg.setSourceEntity(178U);
    msg.setDestination(3962U);
    msg.setDestinationEntity(50U);
    msg.value = 0.974725248677;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.144729955069);
    msg.setSource(34159U);
    msg.setSourceEntity(139U);
    msg.setDestination(22491U);
    msg.setDestinationEntity(60U);
    msg.id = 79U;
    msg.zoom = 30U;
    msg.action = 249U;

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
    msg.setTimeStamp(0.307733942502);
    msg.setSource(12551U);
    msg.setSourceEntity(57U);
    msg.setDestination(57067U);
    msg.setDestinationEntity(215U);
    msg.id = 179U;
    msg.zoom = 146U;
    msg.action = 165U;

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
    msg.setTimeStamp(0.478625463);
    msg.setSource(43377U);
    msg.setSourceEntity(227U);
    msg.setDestination(45005U);
    msg.setDestinationEntity(175U);
    msg.id = 50U;
    msg.zoom = 115U;
    msg.action = 73U;

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
    msg.setTimeStamp(0.594678009788);
    msg.setSource(4572U);
    msg.setSourceEntity(84U);
    msg.setDestination(58406U);
    msg.setDestinationEntity(138U);
    msg.id = 183U;
    msg.value = 0.448162166938;

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
    msg.setTimeStamp(0.606921953003);
    msg.setSource(63761U);
    msg.setSourceEntity(65U);
    msg.setDestination(7329U);
    msg.setDestinationEntity(162U);
    msg.id = 66U;
    msg.value = 0.907271370056;

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
    msg.setTimeStamp(0.0693620766304);
    msg.setSource(31683U);
    msg.setSourceEntity(182U);
    msg.setDestination(50914U);
    msg.setDestinationEntity(75U);
    msg.id = 81U;
    msg.value = 0.0246208246073;

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
    msg.setTimeStamp(0.437346420421);
    msg.setSource(61148U);
    msg.setSourceEntity(1U);
    msg.setDestination(39917U);
    msg.setDestinationEntity(88U);
    msg.id = 243U;
    msg.value = 0.198062607827;

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
    msg.setTimeStamp(0.0763691185148);
    msg.setSource(38751U);
    msg.setSourceEntity(134U);
    msg.setDestination(38246U);
    msg.setDestinationEntity(69U);
    msg.id = 103U;
    msg.value = 0.699521801255;

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
    msg.setTimeStamp(0.11651257703);
    msg.setSource(9474U);
    msg.setSourceEntity(191U);
    msg.setDestination(13896U);
    msg.setDestinationEntity(14U);
    msg.id = 239U;
    msg.value = 0.757573715792;

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
    msg.setTimeStamp(0.427985928508);
    msg.setSource(6764U);
    msg.setSourceEntity(19U);
    msg.setDestination(19989U);
    msg.setDestinationEntity(192U);
    msg.id = 27U;
    msg.angle = 0.191941507635;

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
    msg.setTimeStamp(0.266640961936);
    msg.setSource(47812U);
    msg.setSourceEntity(235U);
    msg.setDestination(26898U);
    msg.setDestinationEntity(251U);
    msg.id = 161U;
    msg.angle = 0.141929674043;

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
    msg.setTimeStamp(0.826072199248);
    msg.setSource(63824U);
    msg.setSourceEntity(30U);
    msg.setDestination(63522U);
    msg.setDestinationEntity(93U);
    msg.id = 21U;
    msg.angle = 0.408566592874;

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
    msg.setTimeStamp(0.999681167833);
    msg.setSource(30752U);
    msg.setSourceEntity(50U);
    msg.setDestination(25756U);
    msg.setDestinationEntity(130U);
    msg.op = 97U;
    msg.actions.assign("AKJICFXKTPROOBOEDMQJORVFHNAGUGYFUVACLVETXYRZKDUQAHUHFANYQWQCGNYMQGLHKGCSIWBHBQVSPGTQTDFMZWOHZCOSEROQUSZLMVOAUVYRGCXYLKVEQUXZLIEZTEJRRRJGLXPEQFOSNYMVZHWBHDMXDGMIPNPCJSIITDBLJPFXKWYZNWVABNUJURTLXLWRUOZJJMCHFDNAKIZFLEV");

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
    msg.setTimeStamp(0.948049834378);
    msg.setSource(50599U);
    msg.setSourceEntity(152U);
    msg.setDestination(48733U);
    msg.setDestinationEntity(118U);
    msg.op = 169U;
    msg.actions.assign("FTMWQUCOZMPLKYIOMTOUNUQCYVGQWFTXDNJHDGDJKSHIAJRGDTLVDPOGMONEGCFVESZKPNLQSGDIBDAIMFHDJVBTPJWQNRTMHCPANSHAFVLWESYLAXKYIBURQEMWKYAGUUZHQJXYDVNRAMFIOMZHQEROTGXNFWK");

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
    msg.setTimeStamp(0.152064127984);
    msg.setSource(57683U);
    msg.setSourceEntity(236U);
    msg.setDestination(42004U);
    msg.setDestinationEntity(229U);
    msg.op = 27U;
    msg.actions.assign("QHOZJVTAZKZPPMHPSNGIIAJSPABIFQTKQRSZUXFMLQDXETCWINKRPTFAWDUXDEXNQRBOKJDPOYMTEIEYQVZSJGXWZIRFDRVGMMLHKVVYNOVAEQAMCBYWSIRZIHOKRPHCCNUGLNSKYKHGJFNMLWSIYGGQUMBVKJETMEGKXCOWDTOOJHOCJOCYLLBCNYXBBWMNEHEHYQYXXFV");

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
    msg.setTimeStamp(0.91065028237);
    msg.setSource(1999U);
    msg.setSourceEntity(6U);
    msg.setDestination(60921U);
    msg.setDestinationEntity(112U);
    msg.actions.assign("MKEDGBABVJKCPXKXPCUHWZKEVSCJLSWBEEJQMYSVRZFJKAAPVXJWWMGZOFQUCQQMXOLOCDUZRTPUGIBJXTLIYZDETHBGBEQRNUPSLMQBLHF");

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
    msg.setTimeStamp(0.557350449345);
    msg.setSource(7449U);
    msg.setSourceEntity(28U);
    msg.setDestination(49934U);
    msg.setDestinationEntity(218U);
    msg.actions.assign("IRQIAJILHPOBPYOQSIVFCRHJTOPYPDYSXZUYMVGFLRALKAWXGFVXYELDYCLEXTHEGMNBHHAKTGUKZANAYCVSA");

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
    msg.setTimeStamp(0.424794492292);
    msg.setSource(39407U);
    msg.setSourceEntity(242U);
    msg.setDestination(34966U);
    msg.setDestinationEntity(73U);
    msg.actions.assign("ZIVKHRKJXVZPELBQCUKAPQYJIWBICQVGTWHWDMLQEAX");

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
    msg.setTimeStamp(0.685179927348);
    msg.setSource(60465U);
    msg.setSourceEntity(180U);
    msg.setDestination(23453U);
    msg.setDestinationEntity(222U);
    msg.button = 156U;
    msg.value = 232U;

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
    msg.setTimeStamp(0.885730854235);
    msg.setSource(59730U);
    msg.setSourceEntity(101U);
    msg.setDestination(5868U);
    msg.setDestinationEntity(30U);
    msg.button = 75U;
    msg.value = 99U;

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
    msg.setTimeStamp(0.591674384672);
    msg.setSource(51056U);
    msg.setSourceEntity(95U);
    msg.setDestination(13749U);
    msg.setDestinationEntity(133U);
    msg.button = 172U;
    msg.value = 154U;

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
    msg.setTimeStamp(0.477031143772);
    msg.setSource(24916U);
    msg.setSourceEntity(21U);
    msg.setDestination(60538U);
    msg.setDestinationEntity(8U);
    msg.op = 91U;
    msg.text.assign("WVRTVJTOSWIAJMQIHYZFUMWTIBXNOENDRKSHPGRQLHWHBOPDSSDNCFMGWYIJDXWSBLKDJICZUFXJORLPDYUECGHFBOVZRLUOBMFJTAQKRWRJRKKUZAPCONTNPRULZEOAENMXFELGVQGLNCDQTGEASIHCSJZTCFVOVFEAQVIQNHE");

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
    msg.setTimeStamp(0.241498616051);
    msg.setSource(46513U);
    msg.setSourceEntity(132U);
    msg.setDestination(20115U);
    msg.setDestinationEntity(244U);
    msg.op = 0U;
    msg.text.assign("OHJLHZJJYBWAMILKWBWCVJUQPKKDHURJMTIZPYHHSEKTRMDVWQDVMSTAFRDDUVTCYXWGABLMCIFXTUOXAEOZCYRXUHAGBPNSGCPPVUDGGQRLEFEEFSYTNKNMCHEWSITJJYXFLWJVZEGPZTBDUGVSIAFHZKQDEYGIHSRRBVIHJBBOSVYKFQLLRDNZEQRERXOGXMCWDKFULPXTUMYLNGZMANWPQUZSKOOXNQIYXWOMNAIOLZABTPJFCKFANQOSB");

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
    msg.setTimeStamp(0.247077469936);
    msg.setSource(42647U);
    msg.setSourceEntity(83U);
    msg.setDestination(25313U);
    msg.setDestinationEntity(16U);
    msg.op = 245U;
    msg.text.assign("EFAWDHJKTOCQVCCEGYRESSCIRTULBSSGYBU");

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
    msg.setTimeStamp(0.482198779319);
    msg.setSource(57734U);
    msg.setSourceEntity(66U);
    msg.setDestination(4415U);
    msg.setDestinationEntity(244U);
    msg.op = 236U;
    msg.time_remain = 0.566132742334;
    msg.sched_time = 0.280130003241;

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
    msg.setTimeStamp(0.0856457625324);
    msg.setSource(7042U);
    msg.setSourceEntity(3U);
    msg.setDestination(32180U);
    msg.setDestinationEntity(75U);
    msg.op = 159U;
    msg.time_remain = 0.314643082653;
    msg.sched_time = 0.191449879785;

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
    msg.setTimeStamp(0.932409985881);
    msg.setSource(28540U);
    msg.setSourceEntity(214U);
    msg.setDestination(36981U);
    msg.setDestinationEntity(174U);
    msg.op = 185U;
    msg.time_remain = 0.916344445722;
    msg.sched_time = 0.263251315947;

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
    msg.setTimeStamp(0.683373148308);
    msg.setSource(53068U);
    msg.setSourceEntity(168U);
    msg.setDestination(43740U);
    msg.setDestinationEntity(118U);
    msg.name.assign("BMQRSXIJWVHCBLQUELAJMLJVYUNYYII");
    msg.op = 135U;
    msg.sched_time = 0.591400916441;

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
    msg.setTimeStamp(0.526024451535);
    msg.setSource(33346U);
    msg.setSourceEntity(51U);
    msg.setDestination(42421U);
    msg.setDestinationEntity(175U);
    msg.name.assign("ZPSXPENVIYAEFMDUIYUGHYJHIAAD");
    msg.op = 95U;
    msg.sched_time = 0.683210090911;

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
    msg.setTimeStamp(0.937486206248);
    msg.setSource(48655U);
    msg.setSourceEntity(99U);
    msg.setDestination(57826U);
    msg.setDestinationEntity(49U);
    msg.name.assign("EIBFWQDWPZBTPKDEOQIVHIJYTHBAAWVLKEQJTLHWRPSXEAIBWIPPDLMYLFKUQLJTLZAARFRMWAZIGVINVSNNUDCMKFF");
    msg.op = 54U;
    msg.sched_time = 0.434575508968;

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
    msg.setTimeStamp(0.00898199829106);
    msg.setSource(3828U);
    msg.setSourceEntity(146U);
    msg.setDestination(6482U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.422376192673);
    msg.setSource(57927U);
    msg.setSourceEntity(218U);
    msg.setDestination(12795U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.601082996438);
    msg.setSource(458U);
    msg.setSourceEntity(250U);
    msg.setDestination(32636U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.296902647472);
    msg.setSource(98U);
    msg.setSourceEntity(8U);
    msg.setDestination(22821U);
    msg.setDestinationEntity(196U);
    msg.name.assign("AXEPUHLDVKBACEXVSGMPYZEXQTLNZEDNJDTONYXBPQHKRCRONCQDWPINBSPXRDMHDOKYNXDFJOMHYKQIOLNLWETUVWEAVSDYZZSRXKIZFZGJKRINFGIUATURMUNCWTTQHVVCXQPQNJIXWJSYMCGFSCAQAYBZFMOLCYVBRQPVZSQFWLHAALJVUEKHZSPJYIGEGCFGOXVUFMBAOMOZUULBI");
    msg.state = 40U;

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
    msg.setTimeStamp(0.16559697316);
    msg.setSource(25697U);
    msg.setSourceEntity(146U);
    msg.setDestination(39225U);
    msg.setDestinationEntity(17U);
    msg.name.assign("IALDJXXIHXBJSEZIRZKBFJJKGYDTNXNFFAJEIXIMAPOTDQVMQNRJGKS");
    msg.state = 80U;

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
    msg.setTimeStamp(0.729058946892);
    msg.setSource(25986U);
    msg.setSourceEntity(218U);
    msg.setDestination(38918U);
    msg.setDestinationEntity(169U);
    msg.name.assign("JABUPIFYCRZKVBAVNLFMGDUHATJXOJBNAMBOSXFMFIMAVLPYSQEDLQMNTXECMYANOOIRHWVHZXZBZSDFNXQGXOTLKZGAZHTIUCKWSGGPPYCRHXXYKJDIFCSTLIPVJCNELSKNBWKVNCTIQWUUKNHPDMJWPLVYWDX");
    msg.state = 33U;

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
    msg.setTimeStamp(0.269152904648);
    msg.setSource(18930U);
    msg.setSourceEntity(112U);
    msg.setDestination(10186U);
    msg.setDestinationEntity(91U);
    msg.name.assign("ZJWIRTCBLUKQYHTEMJONQJRFFNQMVDPVRVLIVRYUWNXZYPETHOPKEHYLUGBUROIMTWRAINUNVKPDGTTZBTOODQAFNVSXDNSLZAKISMEKOESDUFGTGXLXQPSYHDWHRXICDYBRFSGARCGWSULJKNZBPPQXFCCHAMWXEQIJQLLHBUEJCGNFZCPCTFAHLQZ");
    msg.value = 203U;

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
    msg.setTimeStamp(0.247856960415);
    msg.setSource(45208U);
    msg.setSourceEntity(136U);
    msg.setDestination(10013U);
    msg.setDestinationEntity(230U);
    msg.name.assign("GUDDNBHMUCKSNWMPJKZMJTPBLOORRVXDATPKYVRJDCOIDDZSQWNZDOVVXRQTYSYOAHTJUKCAIEOQLPFLSOZDTABBUQDFCHFIBMHIWNTIJGUXGWZESQFXKEQFTPBLPUWALHPPEJQKKHCLZUAINTECMTFJJRFXYVIYMFQAZVNRKWSZXHINBNCKAHPCMENUXVKYMVXEGZFSQGJQNBUBZORIWGWJMOSSARHLDIL");
    msg.value = 45U;

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
    msg.setTimeStamp(0.199807472556);
    msg.setSource(50778U);
    msg.setSourceEntity(17U);
    msg.setDestination(2562U);
    msg.setDestinationEntity(47U);
    msg.name.assign("UAGRUQOROAISDRMXYFLVCLLWVLSYJNSRJRCU");
    msg.value = 111U;

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
    msg.setTimeStamp(0.88447284079);
    msg.setSource(21621U);
    msg.setSourceEntity(58U);
    msg.setDestination(10513U);
    msg.setDestinationEntity(72U);
    msg.name.assign("ZGMUGENBTJQGMLNYSZLTPUAVWXTCJFENKECTNOBIFAFTDYIRPRVMOAXYLZPLAOGZYCXDRKYNREDMPVNLQOLUSKPHAJKCQAEFDIYNSFYXFDLVCJZYWQUMIVNEXHTGSJFGANAUHWZXLGBSLLBKMUGP");

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
    msg.setTimeStamp(0.390219762144);
    msg.setSource(58271U);
    msg.setSourceEntity(99U);
    msg.setDestination(35689U);
    msg.setDestinationEntity(17U);
    msg.name.assign("UQSEEHRAELSTBWWSJONZEXNVJTYKXVNLFGFIIDVAOCNSDYMRZWLLYKKZFWRKOSQLEUTZYPXBFIIMQJUBTNUIHMJAYACTXRGVRLTCGMOCLGYOQCJDCQKOOQVIUNDM");

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
    msg.setTimeStamp(0.938094624594);
    msg.setSource(24740U);
    msg.setSourceEntity(113U);
    msg.setDestination(18395U);
    msg.setDestinationEntity(240U);
    msg.name.assign("ESTQYKKTXLBAQCOLJLOCTAPEJNBYVYCUMUICOHFFSYPMSVPOTGDZIPJSPBJIJTMPJDBZOWEBREXELDGGTFWEDQLRMRDWRAPOWFFUXKFVCTFGGRRPJBYIUMXHXQVVHMHWZZQCSQYSHLZNKUSDJKZNHPRQRIKZGZSHWAEMMLVJAKDIQWDOLNEG");

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
    msg.setTimeStamp(0.000440074883725);
    msg.setSource(21311U);
    msg.setSourceEntity(223U);
    msg.setDestination(55859U);
    msg.setDestinationEntity(95U);
    msg.name.assign("QJUSTRJIPWVDETRDJAOMNCVIBDRUSFQNWFADYZHNNAXJLFRRWVWYFBNOPAKXCGMZVHGHGZI");
    msg.value = 151U;

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
    msg.setTimeStamp(0.259045829848);
    msg.setSource(51940U);
    msg.setSourceEntity(216U);
    msg.setDestination(50415U);
    msg.setDestinationEntity(98U);
    msg.name.assign("SEKHDIQOOSLAQNLUUAQGXGRSRZQNJVRHYJLDWEVIHFZDVYBHYBVUWKFLDIUCKIFAYENJHQSURFTUUVVIRPHVGUZAVBAFOQOTBSKTRXDNBWOWDRNYIJBQJLZMGSHQBPTBMGFEVEGPRMNXESWIYPACDJWLWMKYNZCCFGEFCWPRDLCKZCVHTDGQDSABKCYXLYIQLTXAXWZZXMEGIXZFMTJNWPASFMNEJX");
    msg.value = 19U;

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
    msg.setTimeStamp(0.145040357134);
    msg.setSource(58242U);
    msg.setSourceEntity(137U);
    msg.setDestination(56393U);
    msg.setDestinationEntity(131U);
    msg.name.assign("KDLLEIBVUAWEBPGCNBGJJKONNFVLNDTBOLMRYFAFUGNICIBSEDQVNUMQRTFTTVFJHNNVYHYMJFKAWFDMGZTWHXVJJTPSACRBDTNI");
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
    msg.setTimeStamp(0.737291570926);
    msg.setSource(16935U);
    msg.setSourceEntity(119U);
    msg.setDestination(42841U);
    msg.setDestinationEntity(54U);
    msg.id = 248U;
    msg.period = 2198522184U;
    msg.duty_cycle = 2705830459U;

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
    msg.setTimeStamp(0.191984019244);
    msg.setSource(18413U);
    msg.setSourceEntity(238U);
    msg.setDestination(63847U);
    msg.setDestinationEntity(182U);
    msg.id = 175U;
    msg.period = 3927879659U;
    msg.duty_cycle = 3412468141U;

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
    msg.setTimeStamp(0.549081680485);
    msg.setSource(30608U);
    msg.setSourceEntity(0U);
    msg.setDestination(60030U);
    msg.setDestinationEntity(88U);
    msg.id = 20U;
    msg.period = 1914304790U;
    msg.duty_cycle = 2293474379U;

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
    msg.setTimeStamp(0.340898919843);
    msg.setSource(42786U);
    msg.setSourceEntity(56U);
    msg.setDestination(50008U);
    msg.setDestinationEntity(160U);
    msg.id = 51U;
    msg.period = 1752128633U;
    msg.duty_cycle = 1323023109U;

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
    msg.setTimeStamp(0.482639294223);
    msg.setSource(41624U);
    msg.setSourceEntity(173U);
    msg.setDestination(62171U);
    msg.setDestinationEntity(191U);
    msg.id = 130U;
    msg.period = 3013003843U;
    msg.duty_cycle = 2162615984U;

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
    msg.setTimeStamp(0.0543666002057);
    msg.setSource(42986U);
    msg.setSourceEntity(148U);
    msg.setDestination(9030U);
    msg.setDestinationEntity(124U);
    msg.id = 45U;
    msg.period = 856193325U;
    msg.duty_cycle = 3755855943U;

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
    msg.setTimeStamp(0.310229116656);
    msg.setSource(51032U);
    msg.setSourceEntity(67U);
    msg.setDestination(12302U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.471355709947;
    msg.lon = 0.794020308465;
    msg.height = 0.36805199801;
    msg.x = 0.391581227174;
    msg.y = 0.565233802496;
    msg.z = 0.0564995075762;
    msg.phi = 0.841977668638;
    msg.theta = 0.700196848092;
    msg.psi = 0.69039332129;
    msg.u = 0.0939933529476;
    msg.v = 0.732244751901;
    msg.w = 0.0912508459587;
    msg.vx = 0.0454060402048;
    msg.vy = 0.440538186318;
    msg.vz = 0.626940677522;
    msg.p = 0.497403818476;
    msg.q = 0.344638835701;
    msg.r = 0.0452210258006;
    msg.depth = 0.503378978861;
    msg.alt = 0.161984816326;

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
    msg.setTimeStamp(0.917739587404);
    msg.setSource(63978U);
    msg.setSourceEntity(120U);
    msg.setDestination(52581U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.38338351151;
    msg.lon = 0.138059370116;
    msg.height = 0.771478656091;
    msg.x = 0.520583454996;
    msg.y = 0.770494971097;
    msg.z = 0.808488342045;
    msg.phi = 0.763863835202;
    msg.theta = 0.495245410942;
    msg.psi = 0.633521123569;
    msg.u = 0.511923795551;
    msg.v = 0.259995701899;
    msg.w = 0.500009236368;
    msg.vx = 0.423155460365;
    msg.vy = 0.716946007779;
    msg.vz = 0.290181067062;
    msg.p = 0.0420353554967;
    msg.q = 0.0563654463725;
    msg.r = 0.134451071511;
    msg.depth = 0.685342573114;
    msg.alt = 0.491318515904;

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
    msg.setTimeStamp(0.394993999859);
    msg.setSource(34902U);
    msg.setSourceEntity(141U);
    msg.setDestination(8510U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.806189885201;
    msg.lon = 0.320667129749;
    msg.height = 0.598612724693;
    msg.x = 0.804874096402;
    msg.y = 0.648141212663;
    msg.z = 0.1303449661;
    msg.phi = 0.736089061259;
    msg.theta = 0.829111709149;
    msg.psi = 0.756488664278;
    msg.u = 0.925148731793;
    msg.v = 0.529875328554;
    msg.w = 0.33630308276;
    msg.vx = 0.284507099208;
    msg.vy = 0.756144418529;
    msg.vz = 0.232050264071;
    msg.p = 0.668172249168;
    msg.q = 0.181146149592;
    msg.r = 0.447693219688;
    msg.depth = 0.22546462661;
    msg.alt = 0.656625268672;

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
    msg.setTimeStamp(0.256402100559);
    msg.setSource(40369U);
    msg.setSourceEntity(173U);
    msg.setDestination(41993U);
    msg.setDestinationEntity(206U);
    msg.x = 0.262153991308;
    msg.y = 0.900291471446;
    msg.z = 0.821625760768;

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
    msg.setTimeStamp(0.287040093741);
    msg.setSource(788U);
    msg.setSourceEntity(155U);
    msg.setDestination(9849U);
    msg.setDestinationEntity(48U);
    msg.x = 0.936252013371;
    msg.y = 0.547063632004;
    msg.z = 0.515339703046;

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
    msg.setTimeStamp(0.210182469728);
    msg.setSource(36383U);
    msg.setSourceEntity(141U);
    msg.setDestination(38565U);
    msg.setDestinationEntity(148U);
    msg.x = 0.461842686806;
    msg.y = 0.828771996191;
    msg.z = 0.482645125839;

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
    msg.setTimeStamp(0.434991305348);
    msg.setSource(43277U);
    msg.setSourceEntity(178U);
    msg.setDestination(17777U);
    msg.setDestinationEntity(19U);
    msg.value = 0.599551363257;

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
    msg.setTimeStamp(0.321922018121);
    msg.setSource(62755U);
    msg.setSourceEntity(24U);
    msg.setDestination(57527U);
    msg.setDestinationEntity(125U);
    msg.value = 0.200043305909;

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
    msg.setTimeStamp(0.493540882623);
    msg.setSource(42736U);
    msg.setSourceEntity(28U);
    msg.setDestination(295U);
    msg.setDestinationEntity(251U);
    msg.value = 0.100391084907;

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
    msg.setTimeStamp(0.842138533473);
    msg.setSource(20955U);
    msg.setSourceEntity(77U);
    msg.setDestination(20468U);
    msg.setDestinationEntity(18U);
    msg.value = 0.282009830996;

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
    msg.setTimeStamp(0.0242773882213);
    msg.setSource(27689U);
    msg.setSourceEntity(230U);
    msg.setDestination(41005U);
    msg.setDestinationEntity(204U);
    msg.value = 0.618400690814;

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
    msg.setTimeStamp(0.392091685477);
    msg.setSource(25303U);
    msg.setSourceEntity(105U);
    msg.setDestination(62292U);
    msg.setDestinationEntity(213U);
    msg.value = 0.34766787981;

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
    msg.setTimeStamp(0.0818514306851);
    msg.setSource(11119U);
    msg.setSourceEntity(135U);
    msg.setDestination(49419U);
    msg.setDestinationEntity(221U);
    msg.x = 0.670452690256;
    msg.y = 0.691703469673;
    msg.z = 0.865849604274;
    msg.phi = 0.636881832356;
    msg.theta = 0.913099359702;
    msg.psi = 0.471853959411;
    msg.p = 0.360841416632;
    msg.q = 0.0807823335219;
    msg.r = 0.0161306537024;
    msg.u = 0.323867757337;
    msg.v = 0.206695123882;
    msg.w = 0.240545199251;
    msg.bias_psi = 0.809050995182;
    msg.bias_r = 0.0582213003887;

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
    msg.setTimeStamp(0.707753559274);
    msg.setSource(11863U);
    msg.setSourceEntity(137U);
    msg.setDestination(60417U);
    msg.setDestinationEntity(212U);
    msg.x = 0.689707708542;
    msg.y = 0.970057931477;
    msg.z = 0.0537392675955;
    msg.phi = 0.913052932377;
    msg.theta = 0.623766689035;
    msg.psi = 0.612644595709;
    msg.p = 0.942869998461;
    msg.q = 0.565269211057;
    msg.r = 0.323275768118;
    msg.u = 0.923827264615;
    msg.v = 0.118522486862;
    msg.w = 0.25638107751;
    msg.bias_psi = 0.400434484086;
    msg.bias_r = 0.936960880493;

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
    msg.setTimeStamp(0.600490252933);
    msg.setSource(7377U);
    msg.setSourceEntity(212U);
    msg.setDestination(47239U);
    msg.setDestinationEntity(181U);
    msg.x = 0.158231431519;
    msg.y = 0.0391821354211;
    msg.z = 0.138672136493;
    msg.phi = 0.409917047479;
    msg.theta = 0.278447995243;
    msg.psi = 0.534050911907;
    msg.p = 0.403690076363;
    msg.q = 0.680134922566;
    msg.r = 0.919871148084;
    msg.u = 0.546124047312;
    msg.v = 0.680932358083;
    msg.w = 0.660301925199;
    msg.bias_psi = 0.188300035178;
    msg.bias_r = 0.908857494461;

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
    msg.setTimeStamp(0.512771805803);
    msg.setSource(62844U);
    msg.setSourceEntity(61U);
    msg.setDestination(27173U);
    msg.setDestinationEntity(60U);
    msg.bias_psi = 0.0131974533086;
    msg.bias_r = 0.2950251693;
    msg.cog = 0.202484370773;
    msg.cyaw = 0.68499161899;
    msg.lbl_rej_level = 0.777235136733;
    msg.gps_rej_level = 0.725786363486;
    msg.custom_x = 0.821097445218;
    msg.custom_y = 0.753971186849;
    msg.custom_z = 0.251729364976;

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
    msg.setTimeStamp(0.711397611089);
    msg.setSource(40219U);
    msg.setSourceEntity(18U);
    msg.setDestination(31894U);
    msg.setDestinationEntity(102U);
    msg.bias_psi = 0.0447827463633;
    msg.bias_r = 0.360390410428;
    msg.cog = 0.312741827193;
    msg.cyaw = 0.825921065647;
    msg.lbl_rej_level = 0.232445491476;
    msg.gps_rej_level = 0.433324827023;
    msg.custom_x = 0.553191508344;
    msg.custom_y = 0.898581221717;
    msg.custom_z = 0.842765369742;

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
    msg.setTimeStamp(0.325402637504);
    msg.setSource(23141U);
    msg.setSourceEntity(214U);
    msg.setDestination(18060U);
    msg.setDestinationEntity(251U);
    msg.bias_psi = 0.113832395871;
    msg.bias_r = 0.28350229636;
    msg.cog = 0.40329450168;
    msg.cyaw = 0.32875092792;
    msg.lbl_rej_level = 0.69744147138;
    msg.gps_rej_level = 0.94853071881;
    msg.custom_x = 0.578832796976;
    msg.custom_y = 0.650808151266;
    msg.custom_z = 0.890816012753;

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
    msg.setTimeStamp(0.322745090539);
    msg.setSource(3949U);
    msg.setSourceEntity(239U);
    msg.setDestination(39731U);
    msg.setDestinationEntity(235U);
    msg.utc_time = 0.78397689923;
    msg.reason = 62U;

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
    msg.setTimeStamp(0.573138518949);
    msg.setSource(37997U);
    msg.setSourceEntity(223U);
    msg.setDestination(4397U);
    msg.setDestinationEntity(120U);
    msg.utc_time = 0.419623631353;
    msg.reason = 245U;

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
    msg.setTimeStamp(0.0883586270739);
    msg.setSource(37739U);
    msg.setSourceEntity(156U);
    msg.setDestination(49301U);
    msg.setDestinationEntity(99U);
    msg.utc_time = 0.757822175667;
    msg.reason = 14U;

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
    msg.setTimeStamp(0.663818276495);
    msg.setSource(7141U);
    msg.setSourceEntity(11U);
    msg.setDestination(35165U);
    msg.setDestinationEntity(69U);
    msg.id = 174U;
    msg.range = 0.615485448565;
    msg.acceptance = 120U;

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
    msg.setTimeStamp(0.940986193346);
    msg.setSource(33755U);
    msg.setSourceEntity(11U);
    msg.setDestination(17502U);
    msg.setDestinationEntity(119U);
    msg.id = 61U;
    msg.range = 0.735954149615;
    msg.acceptance = 28U;

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
    msg.setTimeStamp(0.32109427283);
    msg.setSource(55853U);
    msg.setSourceEntity(188U);
    msg.setDestination(20527U);
    msg.setDestinationEntity(52U);
    msg.id = 14U;
    msg.range = 0.91686888597;
    msg.acceptance = 245U;

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
    msg.setTimeStamp(0.146015806346);
    msg.setSource(35718U);
    msg.setSourceEntity(80U);
    msg.setDestination(64475U);
    msg.setDestinationEntity(26U);
    msg.type = 12U;
    msg.reason = 202U;
    msg.value = 0.21259068083;
    msg.timestep = 0.345046298998;

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
    msg.setTimeStamp(0.198265880913);
    msg.setSource(2143U);
    msg.setSourceEntity(211U);
    msg.setDestination(6762U);
    msg.setDestinationEntity(60U);
    msg.type = 40U;
    msg.reason = 112U;
    msg.value = 0.651505959046;
    msg.timestep = 0.196461031235;

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
    msg.setTimeStamp(0.642293506321);
    msg.setSource(52633U);
    msg.setSourceEntity(74U);
    msg.setDestination(24638U);
    msg.setDestinationEntity(106U);
    msg.type = 167U;
    msg.reason = 192U;
    msg.value = 0.259149033268;
    msg.timestep = 0.589884069171;

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
    msg.setTimeStamp(0.912168547623);
    msg.setSource(35208U);
    msg.setSourceEntity(189U);
    msg.setDestination(58021U);
    msg.setDestinationEntity(38U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ABXTEQBPITYGLLYJDPBQQNGMFFAHOCEKEMMTFJXAFCEGBWEDROXBDEPZHJMZVNRKOXHTBYRVIBFZVPZUWYYIROZSTWDCWKP");
    tmp_msg_0.lat = 0.596450691269;
    tmp_msg_0.lon = 0.539023884898;
    tmp_msg_0.depth = 0.0452607376227;
    tmp_msg_0.query_channel = 216U;
    tmp_msg_0.reply_channel = 123U;
    tmp_msg_0.transponder_delay = 238U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.158995560868;
    msg.y = 0.596428717444;
    msg.var_x = 0.178492381655;
    msg.var_y = 0.644214147229;
    msg.distance = 0.291801056702;

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
    msg.setTimeStamp(0.847501391887);
    msg.setSource(4595U);
    msg.setSourceEntity(52U);
    msg.setDestination(7089U);
    msg.setDestinationEntity(235U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NVGGZEVCHCAPTDPTOVTNAUYJSIYSW");
    tmp_msg_0.lat = 0.770849722535;
    tmp_msg_0.lon = 0.958656600191;
    tmp_msg_0.depth = 0.956715325181;
    tmp_msg_0.query_channel = 211U;
    tmp_msg_0.reply_channel = 177U;
    tmp_msg_0.transponder_delay = 25U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.975444300514;
    msg.y = 0.901442266073;
    msg.var_x = 0.546185749593;
    msg.var_y = 0.316338934316;
    msg.distance = 0.107091426614;

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
    msg.setTimeStamp(0.000782724105844);
    msg.setSource(39367U);
    msg.setSourceEntity(27U);
    msg.setDestination(63347U);
    msg.setDestinationEntity(231U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KSQMEZFNFSKELJZZRWJXRVNOIGEWODOTBRCNLCPSFRZVDFXTPECVHSHZGZGIKXCNBPULTHMAIBUYWTMXILRWZWDPJUTBGMXQSKRNYHFCNMVWXEAFGBIAIHXWVUMQBDYYBHOESPDUNFYXSPPPWMCAMJWPNKOZBOVQLJOPQEOEVZFGFADHDQHIBQAACWKYUVUQCEXTLIGCLHUOTUKQTJVJNYDDCGTGYNTIVJYLLMRGKOJSUAZLD");
    tmp_msg_0.lat = 0.667278642964;
    tmp_msg_0.lon = 0.844646061779;
    tmp_msg_0.depth = 0.917622801479;
    tmp_msg_0.query_channel = 0U;
    tmp_msg_0.reply_channel = 100U;
    tmp_msg_0.transponder_delay = 136U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.564011409991;
    msg.y = 0.586204998154;
    msg.var_x = 0.370803414675;
    msg.var_y = 0.233886855218;
    msg.distance = 0.099013346208;

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
    msg.setTimeStamp(0.858290700751);
    msg.setSource(43910U);
    msg.setSourceEntity(247U);
    msg.setDestination(14932U);
    msg.setDestinationEntity(39U);
    msg.state = 83U;

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
    msg.setTimeStamp(0.493201252803);
    msg.setSource(21748U);
    msg.setSourceEntity(0U);
    msg.setDestination(47939U);
    msg.setDestinationEntity(18U);
    msg.state = 196U;

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
    msg.setTimeStamp(0.359994961223);
    msg.setSource(20203U);
    msg.setSourceEntity(52U);
    msg.setDestination(41890U);
    msg.setDestinationEntity(155U);
    msg.state = 178U;

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
    msg.setTimeStamp(0.934695941454);
    msg.setSource(57592U);
    msg.setSourceEntity(98U);
    msg.setDestination(8234U);
    msg.setDestinationEntity(213U);
    msg.x = 0.726603321597;
    msg.y = 0.576794871158;
    msg.z = 0.754712444216;

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
    msg.setTimeStamp(0.862376786309);
    msg.setSource(57264U);
    msg.setSourceEntity(30U);
    msg.setDestination(3372U);
    msg.setDestinationEntity(253U);
    msg.x = 0.00920634273851;
    msg.y = 0.447056667849;
    msg.z = 0.926132311434;

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
    msg.setTimeStamp(0.255414889979);
    msg.setSource(62908U);
    msg.setSourceEntity(168U);
    msg.setDestination(9075U);
    msg.setDestinationEntity(102U);
    msg.x = 0.641649005249;
    msg.y = 0.144275069851;
    msg.z = 0.217492010168;

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
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.756645697111);
    msg.setSource(17528U);
    msg.setSourceEntity(36U);
    msg.setDestination(933U);
    msg.setDestinationEntity(106U);
    msg.value = 0.395559557939;

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
    msg.setTimeStamp(0.301847639287);
    msg.setSource(8401U);
    msg.setSourceEntity(105U);
    msg.setDestination(46330U);
    msg.setDestinationEntity(250U);
    msg.value = 0.188311271537;

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
    msg.setTimeStamp(0.129224310385);
    msg.setSource(37575U);
    msg.setSourceEntity(14U);
    msg.setDestination(26205U);
    msg.setDestinationEntity(119U);
    msg.value = 0.887493935241;

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
    msg.setTimeStamp(0.786175781497);
    msg.setSource(61553U);
    msg.setSourceEntity(250U);
    msg.setDestination(48012U);
    msg.setDestinationEntity(14U);
    msg.value = 0.727747391486;
    msg.z_units = 112U;

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
    msg.setTimeStamp(0.340050726926);
    msg.setSource(5663U);
    msg.setSourceEntity(98U);
    msg.setDestination(17492U);
    msg.setDestinationEntity(207U);
    msg.value = 0.164491727366;
    msg.z_units = 138U;

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
    msg.setTimeStamp(0.994804552817);
    msg.setSource(30337U);
    msg.setSourceEntity(50U);
    msg.setDestination(36489U);
    msg.setDestinationEntity(75U);
    msg.value = 0.863619829643;
    msg.z_units = 16U;

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
    msg.setTimeStamp(0.655461548977);
    msg.setSource(50240U);
    msg.setSourceEntity(61U);
    msg.setDestination(50503U);
    msg.setDestinationEntity(26U);
    msg.value = 0.156475161545;
    msg.speed_units = 185U;

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
    msg.setTimeStamp(0.156150468403);
    msg.setSource(54408U);
    msg.setSourceEntity(188U);
    msg.setDestination(51338U);
    msg.setDestinationEntity(65U);
    msg.value = 0.750772376241;
    msg.speed_units = 145U;

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
    msg.setTimeStamp(0.16493825596);
    msg.setSource(60111U);
    msg.setSourceEntity(229U);
    msg.setDestination(40404U);
    msg.setDestinationEntity(216U);
    msg.value = 0.181882816173;
    msg.speed_units = 135U;

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
    msg.setTimeStamp(0.697582493535);
    msg.setSource(22927U);
    msg.setSourceEntity(33U);
    msg.setDestination(19842U);
    msg.setDestinationEntity(84U);
    msg.value = 0.115418707374;

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
    msg.setTimeStamp(0.882408282734);
    msg.setSource(17989U);
    msg.setSourceEntity(52U);
    msg.setDestination(19505U);
    msg.setDestinationEntity(100U);
    msg.value = 0.592460472099;

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
    msg.setTimeStamp(0.747940753012);
    msg.setSource(30781U);
    msg.setSourceEntity(249U);
    msg.setDestination(36806U);
    msg.setDestinationEntity(163U);
    msg.value = 0.598793451131;

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
    msg.setTimeStamp(0.497675890468);
    msg.setSource(32889U);
    msg.setSourceEntity(191U);
    msg.setDestination(26293U);
    msg.setDestinationEntity(204U);
    msg.value = 0.0475921295699;

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
    msg.setTimeStamp(0.106985571606);
    msg.setSource(9078U);
    msg.setSourceEntity(122U);
    msg.setDestination(41488U);
    msg.setDestinationEntity(204U);
    msg.value = 0.659548018846;

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
    msg.setTimeStamp(0.688585331928);
    msg.setSource(49230U);
    msg.setSourceEntity(90U);
    msg.setDestination(41994U);
    msg.setDestinationEntity(167U);
    msg.value = 0.252891325749;

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
    msg.setTimeStamp(0.826863508103);
    msg.setSource(26602U);
    msg.setSourceEntity(133U);
    msg.setDestination(16777U);
    msg.setDestinationEntity(198U);
    msg.value = 0.926230848706;

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
    msg.setTimeStamp(0.41519392904);
    msg.setSource(13740U);
    msg.setSourceEntity(168U);
    msg.setDestination(61173U);
    msg.setDestinationEntity(204U);
    msg.value = 0.689481264112;

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
    msg.setTimeStamp(0.784349389066);
    msg.setSource(16320U);
    msg.setSourceEntity(45U);
    msg.setDestination(32931U);
    msg.setDestinationEntity(105U);
    msg.value = 0.929853711089;

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
    msg.setTimeStamp(0.312202936103);
    msg.setSource(62268U);
    msg.setSourceEntity(187U);
    msg.setDestination(52122U);
    msg.setDestinationEntity(220U);
    msg.path_ref = 2337662545U;
    msg.start_lat = 0.155034920729;
    msg.start_lon = 0.934922800061;
    msg.start_z = 0.917222750254;
    msg.start_z_units = 156U;
    msg.end_lat = 0.425327856829;
    msg.end_lon = 0.132560602783;
    msg.end_z = 0.287843870023;
    msg.end_z_units = 125U;
    msg.speed = 0.335089768151;
    msg.speed_units = 171U;
    msg.lradius = 0.719754626858;
    msg.flags = 250U;

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
    msg.setTimeStamp(0.556988023015);
    msg.setSource(53776U);
    msg.setSourceEntity(33U);
    msg.setDestination(18053U);
    msg.setDestinationEntity(21U);
    msg.path_ref = 480118790U;
    msg.start_lat = 0.650992056407;
    msg.start_lon = 0.0715512875425;
    msg.start_z = 0.810199087545;
    msg.start_z_units = 129U;
    msg.end_lat = 0.602139549633;
    msg.end_lon = 0.0272985803392;
    msg.end_z = 0.124322579517;
    msg.end_z_units = 151U;
    msg.speed = 0.00516157003506;
    msg.speed_units = 172U;
    msg.lradius = 0.326977644312;
    msg.flags = 23U;

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
    msg.setTimeStamp(0.335412786173);
    msg.setSource(20280U);
    msg.setSourceEntity(241U);
    msg.setDestination(47847U);
    msg.setDestinationEntity(237U);
    msg.path_ref = 1356114062U;
    msg.start_lat = 0.6079670704;
    msg.start_lon = 0.946532236185;
    msg.start_z = 0.763484558004;
    msg.start_z_units = 141U;
    msg.end_lat = 0.841487719938;
    msg.end_lon = 0.386739194991;
    msg.end_z = 0.715553308843;
    msg.end_z_units = 24U;
    msg.speed = 0.985098517922;
    msg.speed_units = 207U;
    msg.lradius = 0.588284295736;
    msg.flags = 15U;

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
    msg.setTimeStamp(0.446085434577);
    msg.setSource(48834U);
    msg.setSourceEntity(108U);
    msg.setDestination(7252U);
    msg.setDestinationEntity(63U);
    msg.x = 0.368989158965;
    msg.y = 0.050895618658;
    msg.z = 0.162734553004;
    msg.k = 0.0954585999033;
    msg.m = 0.750087435247;
    msg.n = 0.264907638499;
    msg.flags = 26U;

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
    msg.setTimeStamp(0.724512926012);
    msg.setSource(10470U);
    msg.setSourceEntity(142U);
    msg.setDestination(48118U);
    msg.setDestinationEntity(193U);
    msg.x = 0.292099323649;
    msg.y = 0.376661834564;
    msg.z = 0.157491066997;
    msg.k = 0.593355517718;
    msg.m = 0.301514195237;
    msg.n = 0.251180866867;
    msg.flags = 145U;

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
    msg.setTimeStamp(0.189267556301);
    msg.setSource(47253U);
    msg.setSourceEntity(218U);
    msg.setDestination(11290U);
    msg.setDestinationEntity(93U);
    msg.x = 0.157195742299;
    msg.y = 0.120357233634;
    msg.z = 0.404731547763;
    msg.k = 0.337005311319;
    msg.m = 0.883177546127;
    msg.n = 0.825680015199;
    msg.flags = 21U;

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
    msg.setTimeStamp(0.379286514258);
    msg.setSource(30143U);
    msg.setSourceEntity(248U);
    msg.setDestination(46953U);
    msg.setDestinationEntity(7U);
    msg.value = 0.923259823499;

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
    msg.setTimeStamp(0.489341671682);
    msg.setSource(15161U);
    msg.setSourceEntity(134U);
    msg.setDestination(42700U);
    msg.setDestinationEntity(233U);
    msg.value = 0.201396104295;

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
    msg.setTimeStamp(0.701598686526);
    msg.setSource(58376U);
    msg.setSourceEntity(178U);
    msg.setDestination(16924U);
    msg.setDestinationEntity(78U);
    msg.value = 0.447309490307;

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
    msg.setTimeStamp(0.335488702876);
    msg.setSource(26730U);
    msg.setSourceEntity(19U);
    msg.setDestination(49618U);
    msg.setDestinationEntity(173U);
    msg.u = 0.972408693216;
    msg.v = 0.338561745992;
    msg.w = 0.406057126835;
    msg.p = 0.792705272514;
    msg.q = 0.439944898269;
    msg.r = 0.779711064906;
    msg.flags = 254U;

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
    msg.setTimeStamp(0.318353700971);
    msg.setSource(10921U);
    msg.setSourceEntity(238U);
    msg.setDestination(6964U);
    msg.setDestinationEntity(29U);
    msg.u = 0.40511625369;
    msg.v = 0.209951321926;
    msg.w = 0.503654110103;
    msg.p = 0.914936117802;
    msg.q = 0.251922314024;
    msg.r = 0.517005819137;
    msg.flags = 244U;

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
    msg.setTimeStamp(0.640548136641);
    msg.setSource(38148U);
    msg.setSourceEntity(15U);
    msg.setDestination(25299U);
    msg.setDestinationEntity(197U);
    msg.u = 0.423435520048;
    msg.v = 0.971101839245;
    msg.w = 0.451739167231;
    msg.p = 0.264444958374;
    msg.q = 0.578699922327;
    msg.r = 0.319913186785;
    msg.flags = 228U;

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
    msg.setTimeStamp(0.147491037074);
    msg.setSource(7062U);
    msg.setSourceEntity(221U);
    msg.setDestination(55337U);
    msg.setDestinationEntity(221U);
    msg.path_ref = 1022572207U;
    msg.start_lat = 0.865047830697;
    msg.start_lon = 0.197342157305;
    msg.start_z = 0.0683693231446;
    msg.start_z_units = 95U;
    msg.end_lat = 0.974652356157;
    msg.end_lon = 0.929253541251;
    msg.end_z = 0.872682930088;
    msg.end_z_units = 67U;
    msg.lradius = 0.0315354407975;
    msg.flags = 36U;
    msg.x = 0.534456957585;
    msg.y = 0.40049831231;
    msg.z = 0.833438162427;
    msg.vx = 0.478544113896;
    msg.vy = 0.549043250645;
    msg.vz = 0.0862590736481;
    msg.course_error = 0.857540141854;
    msg.eta = 45379U;

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
    msg.setTimeStamp(0.533304838109);
    msg.setSource(33507U);
    msg.setSourceEntity(239U);
    msg.setDestination(7857U);
    msg.setDestinationEntity(52U);
    msg.path_ref = 3329752754U;
    msg.start_lat = 0.0986016954667;
    msg.start_lon = 0.300691412087;
    msg.start_z = 0.903839872992;
    msg.start_z_units = 57U;
    msg.end_lat = 0.290290104619;
    msg.end_lon = 0.713206847802;
    msg.end_z = 0.282548323882;
    msg.end_z_units = 177U;
    msg.lradius = 0.562675602697;
    msg.flags = 102U;
    msg.x = 0.600286810574;
    msg.y = 0.456067173008;
    msg.z = 0.577129113413;
    msg.vx = 0.87998242634;
    msg.vy = 0.384594327799;
    msg.vz = 0.172207629;
    msg.course_error = 0.755667780828;
    msg.eta = 22880U;

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
    msg.setTimeStamp(0.97714834357);
    msg.setSource(14323U);
    msg.setSourceEntity(248U);
    msg.setDestination(45982U);
    msg.setDestinationEntity(253U);
    msg.path_ref = 1911995950U;
    msg.start_lat = 0.494968436687;
    msg.start_lon = 0.157433941607;
    msg.start_z = 0.608093228554;
    msg.start_z_units = 16U;
    msg.end_lat = 0.10817880367;
    msg.end_lon = 0.916206441618;
    msg.end_z = 0.917521174458;
    msg.end_z_units = 96U;
    msg.lradius = 0.538043059876;
    msg.flags = 248U;
    msg.x = 0.242907538113;
    msg.y = 0.487086657114;
    msg.z = 0.174561778641;
    msg.vx = 0.386052891025;
    msg.vy = 0.678265867242;
    msg.vz = 0.386218603729;
    msg.course_error = 0.654084409901;
    msg.eta = 34840U;

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
    msg.setTimeStamp(0.970923750541);
    msg.setSource(890U);
    msg.setSourceEntity(106U);
    msg.setDestination(29136U);
    msg.setDestinationEntity(45U);
    msg.k = 0.548773445165;
    msg.m = 0.748991043908;
    msg.n = 0.364103118563;

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
    msg.setTimeStamp(0.626948973073);
    msg.setSource(29338U);
    msg.setSourceEntity(174U);
    msg.setDestination(8722U);
    msg.setDestinationEntity(115U);
    msg.k = 0.603439332329;
    msg.m = 0.51094354885;
    msg.n = 0.820164265954;

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
    msg.setTimeStamp(0.686540371647);
    msg.setSource(40572U);
    msg.setSourceEntity(119U);
    msg.setDestination(33855U);
    msg.setDestinationEntity(124U);
    msg.k = 0.669471899709;
    msg.m = 0.154693611691;
    msg.n = 0.410914015357;

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
    msg.setTimeStamp(0.571017208277);
    msg.setSource(40508U);
    msg.setSourceEntity(217U);
    msg.setDestination(25538U);
    msg.setDestinationEntity(64U);
    msg.p = 0.0776459243537;
    msg.i = 0.888580348486;
    msg.d = 0.519753569475;
    msg.a = 0.456929417516;

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
    msg.setTimeStamp(0.399757514052);
    msg.setSource(7804U);
    msg.setSourceEntity(193U);
    msg.setDestination(10377U);
    msg.setDestinationEntity(105U);
    msg.p = 0.601607205827;
    msg.i = 0.0536400001434;
    msg.d = 0.212043864668;
    msg.a = 0.154677516141;

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
    msg.setTimeStamp(0.276932427432);
    msg.setSource(58539U);
    msg.setSourceEntity(20U);
    msg.setDestination(43386U);
    msg.setDestinationEntity(243U);
    msg.p = 0.0943982709339;
    msg.i = 0.657869176113;
    msg.d = 0.529820546984;
    msg.a = 0.799057319857;

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
    msg.setTimeStamp(0.43449183003);
    msg.setSource(59754U);
    msg.setSourceEntity(26U);
    msg.setDestination(32372U);
    msg.setDestinationEntity(135U);
    msg.op = 16U;

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
    msg.setTimeStamp(0.705429277148);
    msg.setSource(48618U);
    msg.setSourceEntity(16U);
    msg.setDestination(8708U);
    msg.setDestinationEntity(48U);
    msg.op = 244U;

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
    msg.setTimeStamp(0.334440513781);
    msg.setSource(42738U);
    msg.setSourceEntity(172U);
    msg.setDestination(15095U);
    msg.setDestinationEntity(165U);
    msg.op = 98U;

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
    IMC::Goto msg;
    msg.setTimeStamp(0.897156547523);
    msg.setSource(11400U);
    msg.setSourceEntity(22U);
    msg.setDestination(24043U);
    msg.setDestinationEntity(29U);
    msg.timeout = 15290U;
    msg.lat = 0.541024247421;
    msg.lon = 0.427607502702;
    msg.z = 0.316672989607;
    msg.z_units = 71U;
    msg.speed = 0.144410542956;
    msg.speed_units = 134U;
    msg.roll = 0.918938574718;
    msg.pitch = 0.0942820299907;
    msg.yaw = 0.380735904531;
    msg.custom.assign("GZCRWDTYUGSWVVNUFXSGLTXUBDEBQJZATY");

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
    msg.setTimeStamp(0.147789348064);
    msg.setSource(23083U);
    msg.setSourceEntity(81U);
    msg.setDestination(51870U);
    msg.setDestinationEntity(110U);
    msg.timeout = 58053U;
    msg.lat = 0.169357235008;
    msg.lon = 0.847574787248;
    msg.z = 0.392572081409;
    msg.z_units = 155U;
    msg.speed = 0.207882230125;
    msg.speed_units = 234U;
    msg.roll = 0.0272805991549;
    msg.pitch = 0.0961223369607;
    msg.yaw = 0.395438845509;
    msg.custom.assign("JJOLFWVVJGOUSBWPWRPBLAUQWMSWVZNXDOAVXDUJCDMVSCSBGYPVQAXKXWHEYIKAPUOLGHEEITNJZAIVLFUZCRRDORAJPTCBSZZLMPYFBXAYCTUMNDQIZL");

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
    msg.setTimeStamp(0.569703614732);
    msg.setSource(14531U);
    msg.setSourceEntity(165U);
    msg.setDestination(45230U);
    msg.setDestinationEntity(79U);
    msg.timeout = 41991U;
    msg.lat = 0.410833900813;
    msg.lon = 0.654817272346;
    msg.z = 0.518154508623;
    msg.z_units = 106U;
    msg.speed = 0.704849832721;
    msg.speed_units = 62U;
    msg.roll = 0.717447247894;
    msg.pitch = 0.60798714949;
    msg.yaw = 0.943923457401;
    msg.custom.assign("ITEBLCJNQBRZULNGURWUJFFHYIOTSZNDPKVXDVKIVXJAFPJNMHAHILSKIQEAZTZOYGZIWEMQPGXCFCBVGFYRUGQKDAQFMNJCHRTNSXLTAWSYDMIPBQIJSULTXLYVFBKKORPHZBC");

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
    msg.setTimeStamp(0.084553549399);
    msg.setSource(19679U);
    msg.setSourceEntity(168U);
    msg.setDestination(47751U);
    msg.setDestinationEntity(6U);
    msg.timeout = 34440U;
    msg.lat = 0.603778718135;
    msg.lon = 0.850385812273;
    msg.z = 0.249226178503;
    msg.z_units = 126U;
    msg.speed = 0.454163032441;
    msg.speed_units = 176U;
    msg.duration = 57336U;
    msg.radius = 0.176942423413;
    msg.flags = 113U;
    msg.custom.assign("WJSTOKSZIJBEILZCTJASOUFXKIUINMEWXDMEWTFDREMLOKJVLB");

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
    msg.setTimeStamp(0.947077394636);
    msg.setSource(41903U);
    msg.setSourceEntity(168U);
    msg.setDestination(27186U);
    msg.setDestinationEntity(168U);
    msg.timeout = 3592U;
    msg.lat = 0.555790251924;
    msg.lon = 0.370034569667;
    msg.z = 0.132835085509;
    msg.z_units = 109U;
    msg.speed = 0.92903234796;
    msg.speed_units = 0U;
    msg.duration = 35507U;
    msg.radius = 0.0674411024998;
    msg.flags = 30U;
    msg.custom.assign("RZNRHHWZSCYFECWHIUMWQTITKCGJVUXMXESAUPAIUDKLQPIXYQFTEMFZTKOJAMXPSFRDADLRSPASHVYGWSBOYSFKSZWJGENICWMTCKKYDGICZZEDNCXEDTQGLBAWKMWLPQQXVCARQIMLJOAFTBFHZJVIYMUBVJWDDQRUNYOXHHBEOBTHCBVVRNJXNXBGHMKJFUDJGEWQJTALFRKYOMZGFBPVGRNPLEYOXZNVU");

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
    msg.setTimeStamp(0.98780033203);
    msg.setSource(41898U);
    msg.setSourceEntity(214U);
    msg.setDestination(59612U);
    msg.setDestinationEntity(113U);
    msg.timeout = 29039U;
    msg.lat = 0.321278480028;
    msg.lon = 0.124908113377;
    msg.z = 0.925342389983;
    msg.z_units = 38U;
    msg.speed = 0.240516391575;
    msg.speed_units = 173U;
    msg.duration = 56429U;
    msg.radius = 0.529971837502;
    msg.flags = 254U;
    msg.custom.assign("PTMKIVGFOULWPANZTUCJSJVTFUPVIUDEGUZLMEZTSPBCEJCXWPDYPNDRRLUPKJAYWXNREFYDKDDWASLOJBOBLBKAOXYQTMCDQTVJQSMZIVDOPSWVIFCRHMXXYYQMTXGWNBYAAUASDPQYRTIBORMIJVGHQPEGGSWNXCVZBTNXSAFESNHVIMCGOGRGKYJACENOHNQKENRQUFQXFRQHKIOLHEKZWKRLHWOZKIXEHBZJMLLCABGHFJHWVTBFCZS");

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
    msg.setTimeStamp(0.54855213233);
    msg.setSource(23917U);
    msg.setSourceEntity(2U);
    msg.setDestination(5892U);
    msg.setDestinationEntity(36U);
    msg.custom.assign("VJICBJQJIYOHVNFNVXOYROGEXHNOVSBA");

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
    msg.setTimeStamp(0.717315702063);
    msg.setSource(6115U);
    msg.setSourceEntity(149U);
    msg.setDestination(14374U);
    msg.setDestinationEntity(49U);
    msg.custom.assign("SFXSMUJVRBKPYKFLBWVVBMNPLQTEPEUNYHMJOKYYORQCJLSLRXKVOFPZPMJALHZMVUFZHSRIWHARTBYDEUUGDJJWGFZRXVEIFHMGKLECBTJLRXXXQAXOCAIIANNDUWOEYCAGPFNJDTDBWSCHHAAJQA");

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
    msg.setTimeStamp(0.872966900616);
    msg.setSource(18917U);
    msg.setSourceEntity(84U);
    msg.setDestination(31810U);
    msg.setDestinationEntity(86U);
    msg.custom.assign("AYZMRJOGENOMRVKYUOSUXCLWXBFGOYUDMHEKIGMAIIJRYTCYDXVWZFRBIGYZEPFFEPVZWSRQL");

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
    msg.setTimeStamp(0.401470156911);
    msg.setSource(53967U);
    msg.setSourceEntity(240U);
    msg.setDestination(44763U);
    msg.setDestinationEntity(242U);
    msg.timeout = 36972U;
    msg.lat = 0.0521437285262;
    msg.lon = 0.173342994563;
    msg.z = 0.62890413992;
    msg.z_units = 130U;
    msg.duration = 53488U;
    msg.speed = 0.941740174009;
    msg.speed_units = 48U;
    msg.type = 130U;
    msg.radius = 0.652449926235;
    msg.length = 0.620832518701;
    msg.bearing = 0.984546538258;
    msg.direction = 8U;
    msg.custom.assign("LYBHUNEKRHC");

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
    msg.setTimeStamp(0.13411102071);
    msg.setSource(44882U);
    msg.setSourceEntity(112U);
    msg.setDestination(50131U);
    msg.setDestinationEntity(192U);
    msg.timeout = 36849U;
    msg.lat = 0.730188678863;
    msg.lon = 0.957093635766;
    msg.z = 0.729343585854;
    msg.z_units = 151U;
    msg.duration = 27909U;
    msg.speed = 0.792978421738;
    msg.speed_units = 229U;
    msg.type = 3U;
    msg.radius = 0.814154467282;
    msg.length = 0.126069704595;
    msg.bearing = 0.291743564095;
    msg.direction = 231U;
    msg.custom.assign("EVWKWEXNLWMRYQUJJFSZVTSUSZZZWKKYELJYTQYMJUTRLNEJBMFUWHNGNEIEQMQVSFNZQGUXCVKRAMXUGOFVYXCKDMRLJWYDGPQBRVPGBDHAHYVCNOIGSNOPRBPCHUCXRHKTLXPVOBRNLXCCKAPMVZHUDLCTFGBTDSAWFJYQWBPIPJTADOZOHDAZIAFUPGXFOEYFLVRJHGXJDZSSNDCIWETAAQDTBIKMFEERQMKAIHITBCZIOHBNOOK");

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
    msg.setTimeStamp(0.743391294862);
    msg.setSource(58226U);
    msg.setSourceEntity(180U);
    msg.setDestination(52970U);
    msg.setDestinationEntity(6U);
    msg.timeout = 59371U;
    msg.lat = 0.22326276201;
    msg.lon = 0.040974321326;
    msg.z = 0.491211368939;
    msg.z_units = 6U;
    msg.duration = 11015U;
    msg.speed = 0.174505616088;
    msg.speed_units = 129U;
    msg.type = 208U;
    msg.radius = 0.781201047738;
    msg.length = 0.166871072013;
    msg.bearing = 0.8014725012;
    msg.direction = 177U;
    msg.custom.assign("YJCUTPKROXAPSKUHAGZPXHLEKGULBJXCQDYZTSVKZEFIMIYGGZRELZFIMFRAXNQSSMCMYXNABZJPOVSGILJJBWPBPESHBORYEWPNCZBNVYQGLNKNWTUJGIONMQNVHQEWLPURJLUKAUAVTHELCYFDXUESVJOHJDEPOTYT");

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
    msg.setTimeStamp(0.382275791);
    msg.setSource(12089U);
    msg.setSourceEntity(47U);
    msg.setDestination(7486U);
    msg.setDestinationEntity(53U);
    msg.duration = 21493U;
    msg.custom.assign("RSLCGBLMUCWHFNEFBJSPPEPFEZTTJIBZMLBMQQPUIMSHBLOGQIBKHCLPDWACVDNGYRTDFVYGXWACUVWONQQRFXYZZKGKYSYVTUDXRXVKRYQCLVCKISN");

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
    msg.setTimeStamp(0.717760085334);
    msg.setSource(8370U);
    msg.setSourceEntity(209U);
    msg.setDestination(16159U);
    msg.setDestinationEntity(254U);
    msg.duration = 61184U;
    msg.custom.assign("UVZWFBVKLQNDCRSTOKUGFYTSACKIBZQMUYLUKNBIELBAGGAIICEJGKOXMGLAIHKRTNDRFAYTQEBTCQLZQSZBAELCRDJKJHFQRTZYDQAXWOXVZKBFFAYLCBWHMZIYXGSMZWUEPFZSUQOHOOFVSMRJRSDPWPHRVJEJMVQDPXELGUKNDMALPWPDHXYZIWGVJ");

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
    msg.setTimeStamp(0.506771191256);
    msg.setSource(63952U);
    msg.setSourceEntity(246U);
    msg.setDestination(57982U);
    msg.setDestinationEntity(250U);
    msg.duration = 2416U;
    msg.custom.assign("RXVHEROVFEAQC");

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
    msg.setTimeStamp(0.3808307482);
    msg.setSource(130U);
    msg.setSourceEntity(46U);
    msg.setDestination(28044U);
    msg.setDestinationEntity(15U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3038006271U;
    tmp_msg_0.start_lat = 0.912167254277;
    tmp_msg_0.start_lon = 0.626650973024;
    tmp_msg_0.start_z = 0.410481113453;
    tmp_msg_0.start_z_units = 201U;
    tmp_msg_0.end_lat = 0.376300305281;
    tmp_msg_0.end_lon = 0.247797424133;
    tmp_msg_0.end_z = 0.591434636565;
    tmp_msg_0.end_z_units = 20U;
    tmp_msg_0.speed = 0.528235554651;
    tmp_msg_0.speed_units = 158U;
    tmp_msg_0.lradius = 0.974439825948;
    tmp_msg_0.flags = 47U;
    msg.control.set(tmp_msg_0);
    msg.duration = 26045U;
    msg.custom.assign("UPMZQBBOMIBFPCGUWEENFFIGESGDSJYWVTXCFNHNMMUQIYZJHJZAYOSTPQWOZYFQXOIWAIBEASKMDEVCKBDYHQWHCXUABZITWENGKKJTRAZVOGEPV");

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
    msg.setTimeStamp(0.861176575521);
    msg.setSource(5794U);
    msg.setSourceEntity(94U);
    msg.setDestination(6713U);
    msg.setDestinationEntity(17U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 4012463635U;
    tmp_msg_0.start_lat = 0.152457880711;
    tmp_msg_0.start_lon = 0.878681273809;
    tmp_msg_0.start_z = 0.60718969249;
    tmp_msg_0.start_z_units = 127U;
    tmp_msg_0.end_lat = 0.243364860421;
    tmp_msg_0.end_lon = 0.405474790526;
    tmp_msg_0.end_z = 0.414270641295;
    tmp_msg_0.end_z_units = 179U;
    tmp_msg_0.speed = 0.733300535819;
    tmp_msg_0.speed_units = 162U;
    tmp_msg_0.lradius = 0.0264455178011;
    tmp_msg_0.flags = 193U;
    msg.control.set(tmp_msg_0);
    msg.duration = 61957U;
    msg.custom.assign("FRQIRFPDASOKOBAILRRVMPMEVTUQZXGLNSHDIQULHNMDLTSIZCLIYMJDGZGOQUWVKQAVCDZRTXUISTLFRFDPXXUKBWXZTYEAJUAJNLVSWNDHOGCDILFPZRXZSACPFVJHHNADXUAWHYCQBKPMKXBOOHBMWBFKVTCHIOBXMPGWBB");

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
    msg.setTimeStamp(0.548274540326);
    msg.setSource(3801U);
    msg.setSourceEntity(107U);
    msg.setDestination(13027U);
    msg.setDestinationEntity(17U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.0280893198122;
    msg.control.set(tmp_msg_0);
    msg.duration = 33567U;
    msg.custom.assign("DYYZZPQOZSVREWTBRVLZFYRTCCRYGBGMKIDJRFEEABIHGXNNWZNPFHQEM");

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
    msg.setTimeStamp(0.438035201387);
    msg.setSource(5954U);
    msg.setSourceEntity(235U);
    msg.setDestination(47209U);
    msg.setDestinationEntity(222U);
    msg.timeout = 21732U;
    msg.lat = 0.705226163909;
    msg.lon = 0.229652570765;
    msg.z = 0.354991112327;
    msg.z_units = 119U;
    msg.speed = 0.564801410474;
    msg.speed_units = 155U;
    msg.bearing = 0.784947627796;
    msg.cross_angle = 0.175930361336;
    msg.width = 0.993344542991;
    msg.length = 0.274325208797;
    msg.hstep = 0.232296873083;
    msg.coff = 11U;
    msg.alternation = 76U;
    msg.flags = 175U;
    msg.custom.assign("KXFTFDCEGRVKNPSCSRYJOGTLWFHTSUNSWSYXBTAJ");

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
    msg.setTimeStamp(0.72627234039);
    msg.setSource(41823U);
    msg.setSourceEntity(144U);
    msg.setDestination(23386U);
    msg.setDestinationEntity(215U);
    msg.timeout = 22097U;
    msg.lat = 0.476910037135;
    msg.lon = 0.146771000353;
    msg.z = 0.723971843047;
    msg.z_units = 22U;
    msg.speed = 0.925596213246;
    msg.speed_units = 160U;
    msg.bearing = 0.993475091911;
    msg.cross_angle = 0.311752361963;
    msg.width = 0.70826718563;
    msg.length = 0.374074211119;
    msg.hstep = 0.109020137187;
    msg.coff = 71U;
    msg.alternation = 21U;
    msg.flags = 145U;
    msg.custom.assign("LJDGWUYKBEHWXJWOVHMDNEWTNJINBRCFTRVXPTRZAHJQOMGINBEALFYPDQLFWPQZBGGBOBVGQWKDVRPSXLTEZIAJRMHJTBPYUVPSYTRBCZODMGUBEMJAYXCZXKSYFKCOGNPBCLUEVRUAUNQVJEQSCMOVQLMWFUPTYIUHAXSRKQNHEDSRASSKZWDKULLOZLTXFSAKAAFNTWEPYIUHPYOVNLFDVHMIRGHCMENKCFQIZFDZXOZGCMTCJWISH");

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
    msg.setTimeStamp(0.46174302356);
    msg.setSource(53176U);
    msg.setSourceEntity(165U);
    msg.setDestination(58395U);
    msg.setDestinationEntity(2U);
    msg.timeout = 47618U;
    msg.lat = 0.173127475517;
    msg.lon = 0.312231230391;
    msg.z = 0.872550129832;
    msg.z_units = 213U;
    msg.speed = 0.351751106937;
    msg.speed_units = 77U;
    msg.bearing = 0.283691833633;
    msg.cross_angle = 0.257221384999;
    msg.width = 0.824893761302;
    msg.length = 0.822037336921;
    msg.hstep = 0.616641045142;
    msg.coff = 233U;
    msg.alternation = 142U;
    msg.flags = 170U;
    msg.custom.assign("XHHIVNRJKMMFDHVCYJWFZXNFEOSGJUOKLRIQLWQETDJEMBZVOCPRTNSWKRFBMFXCSJIYAZBDXZCTKTINYPYPYHOIPWRSENCGAJEIPZAKCKZNYVQBQBTRTMYRVUFDRLHWBUEZSIXEWYMPGDVNXOMJWFNSQPPOGWGLDJVASCKYWEUTOARDTTZLQBUULBFGCNZSEXRLNGDVQQJOLIMCSP");

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
    msg.setTimeStamp(0.472761025341);
    msg.setSource(6255U);
    msg.setSourceEntity(29U);
    msg.setDestination(44063U);
    msg.setDestinationEntity(143U);
    msg.timeout = 30114U;
    msg.lat = 0.206198126749;
    msg.lon = 0.312698613099;
    msg.z = 0.210676210386;
    msg.z_units = 127U;
    msg.speed = 0.910204372437;
    msg.speed_units = 90U;
    msg.custom.assign("RENHWARVADTEWMPISLRYHSIDPBSZDEQRKFQKVZVQGNHMHCPXSTULPLKNICJYQXQAGTNVOCZGGXNPOIJFXVYEJEARUFTCDZWQFMWHSVFHZJMRWBAQBPIPIBYIZSXMMCPFOCWZSNCIBKODKEJEEHSUAAWRNDJKXUVQLFDOAOUDLBMYKXOEQRWDVTGUPTRLLSBZSXBJFJNMYJKTHCGGAZOFRTBKEXUNUHTGQILZMOYWCVGNJYIACDUOWU");

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
    msg.setTimeStamp(0.359525583959);
    msg.setSource(54343U);
    msg.setSourceEntity(247U);
    msg.setDestination(60587U);
    msg.setDestinationEntity(164U);
    msg.timeout = 51173U;
    msg.lat = 0.54339760982;
    msg.lon = 0.805321962144;
    msg.z = 0.715525079476;
    msg.z_units = 171U;
    msg.speed = 0.306548527757;
    msg.speed_units = 235U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.619711591338;
    tmp_msg_0.y = 0.536511836561;
    tmp_msg_0.z = 0.507959327776;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TCTXBHGFKSOPJQPPSBFIXEGKAECPRDIPDOFPOCTVEBRZPIEXVSRRBOIVQJTI");

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
    msg.setTimeStamp(0.431708292342);
    msg.setSource(11194U);
    msg.setSourceEntity(39U);
    msg.setDestination(23021U);
    msg.setDestinationEntity(92U);
    msg.timeout = 31783U;
    msg.lat = 0.829206359642;
    msg.lon = 0.109854587507;
    msg.z = 0.510339803963;
    msg.z_units = 223U;
    msg.speed = 0.667649394087;
    msg.speed_units = 185U;
    msg.custom.assign("TEKXXIDGXLBZDCMDIFPLTQOPRXMBPIHCYEZEHUGASMAJRAIOZELCPLWOHLMGWYVXYBBDRFTVUQYGOIDSMZQWQGJWAUKCBYFOVLTAPQFZMESLYTHTFCDSR");

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
    msg.setTimeStamp(0.936837504926);
    msg.setSource(64736U);
    msg.setSourceEntity(138U);
    msg.setDestination(20002U);
    msg.setDestinationEntity(6U);
    msg.x = 0.0145995190926;
    msg.y = 0.166131970524;
    msg.z = 0.834432162859;

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
    msg.setTimeStamp(0.101670585431);
    msg.setSource(36353U);
    msg.setSourceEntity(112U);
    msg.setDestination(4936U);
    msg.setDestinationEntity(142U);
    msg.x = 0.186736670812;
    msg.y = 0.5492974391;
    msg.z = 0.894246208742;

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
    msg.setTimeStamp(0.551685300826);
    msg.setSource(13130U);
    msg.setSourceEntity(120U);
    msg.setDestination(9802U);
    msg.setDestinationEntity(136U);
    msg.x = 0.70839271718;
    msg.y = 0.149165634265;
    msg.z = 0.436704604075;

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
    msg.setTimeStamp(0.0403959283126);
    msg.setSource(53328U);
    msg.setSourceEntity(219U);
    msg.setDestination(23975U);
    msg.setDestinationEntity(93U);
    msg.timeout = 49304U;
    msg.lat = 0.383545097746;
    msg.lon = 0.298556803272;
    msg.z = 0.646220471586;
    msg.z_units = 52U;
    msg.amplitude = 0.198464161929;
    msg.pitch = 0.719953771985;
    msg.speed = 0.796120961284;
    msg.speed_units = 199U;
    msg.custom.assign("ISXJEQAGJNBRXRGAIESAOCJHWVHABRTAQMPHLENXGDGMKDFFRWIGMBAMVSCYZFWOQUIEKQRWXNZLOFPTV");

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
    msg.setTimeStamp(0.455177450159);
    msg.setSource(20310U);
    msg.setSourceEntity(160U);
    msg.setDestination(37915U);
    msg.setDestinationEntity(129U);
    msg.timeout = 52143U;
    msg.lat = 0.358450627687;
    msg.lon = 0.553777114503;
    msg.z = 0.877266139896;
    msg.z_units = 67U;
    msg.amplitude = 0.256412047417;
    msg.pitch = 0.167914675048;
    msg.speed = 0.563451980494;
    msg.speed_units = 160U;
    msg.custom.assign("TRAWBQPPQXTGSFZXBRYISMWKOBLPNIKLLAJEQQZNXWVKEZGULYFNGQTOPREXNJIHYEHOUMKMFXTHBERHZLMCNKOKGIHIVCSIAWRQULDPO");

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
    msg.setTimeStamp(0.979732176947);
    msg.setSource(34647U);
    msg.setSourceEntity(108U);
    msg.setDestination(10733U);
    msg.setDestinationEntity(232U);
    msg.timeout = 57229U;
    msg.lat = 0.496152701555;
    msg.lon = 0.490956078818;
    msg.z = 0.253913397782;
    msg.z_units = 208U;
    msg.amplitude = 0.30057435247;
    msg.pitch = 0.737087905697;
    msg.speed = 0.785937100318;
    msg.speed_units = 218U;
    msg.custom.assign("JXFTBNZCWRQHRKMFYZOJWYDNORDVHPUECIHBHIJSWCELKMXELGDLPSJYGBWXOUGHXAJWYMQUAENVSWYFQLMNFCBRVDVABCQZAZSDVNTAIBRNTOPZEHCQITFIPJLTYRUQNCYSSDGXJQXFZTUVBHIKOSXCNMFJUXEDQLVIZAMPRBZUKWKMOPGXEMYSUNAKZMJRFMDED");

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
    msg.setTimeStamp(0.202704696795);
    msg.setSource(14542U);
    msg.setSourceEntity(112U);
    msg.setDestination(17159U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.0181742960515);
    msg.setSource(53038U);
    msg.setSourceEntity(163U);
    msg.setDestination(38993U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.352208682278);
    msg.setSource(62967U);
    msg.setSourceEntity(228U);
    msg.setDestination(52768U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.563849109581);
    msg.setSource(48890U);
    msg.setSourceEntity(84U);
    msg.setDestination(45699U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.36074329729;
    msg.lon = 0.845838155348;
    msg.z = 0.884314625426;
    msg.z_units = 55U;
    msg.radius = 0.343679635833;
    msg.duration = 29105U;
    msg.speed = 0.272539920545;
    msg.speed_units = 63U;
    msg.custom.assign("JRNVEAXEMSWFJQTIIVTDBZGXLDQAYGNWTBYBCDLLUNRAJSDAZUPAPDIQXQAPJDGYCMQUTFRFCOICZDHO");

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
    msg.setTimeStamp(0.579893414641);
    msg.setSource(55004U);
    msg.setSourceEntity(26U);
    msg.setDestination(13248U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.25056322645;
    msg.lon = 0.562482545155;
    msg.z = 0.976703972051;
    msg.z_units = 51U;
    msg.radius = 0.764968160587;
    msg.duration = 58007U;
    msg.speed = 0.925450238381;
    msg.speed_units = 182U;
    msg.custom.assign("BKVQPHMUEBIHMMVUMR");

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
    msg.setTimeStamp(0.844596393659);
    msg.setSource(55073U);
    msg.setSourceEntity(184U);
    msg.setDestination(65231U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.706282202152;
    msg.lon = 0.340124200639;
    msg.z = 0.716355695972;
    msg.z_units = 156U;
    msg.radius = 0.399134600444;
    msg.duration = 36824U;
    msg.speed = 0.675433560157;
    msg.speed_units = 143U;
    msg.custom.assign("BFVWQKRELETSSNIJQVTHTEIUWXWYWHJVSOELUFOBDNLCVRPNIPRGXIEPTHBRYBPYOSZDENZDOXAWJZAYFQIMAQRLRNJNZMRAHIOUZAWFHIKGGXJDRKQFMSNCKQIYWXJMMLJXSOGDTBTAFKVTPZIKSKGYCESXAFBVJUACLICZPXKCAVFGMMTLPQAOUZPWRUHHJCRBFVNCKUEDNV");

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
    msg.setTimeStamp(0.759998524442);
    msg.setSource(14627U);
    msg.setSourceEntity(1U);
    msg.setDestination(100U);
    msg.setDestinationEntity(116U);
    msg.timeout = 3032U;
    msg.flags = 139U;
    msg.lat = 0.719584377072;
    msg.lon = 0.198002431978;
    msg.start_z = 0.855362951547;
    msg.start_z_units = 245U;
    msg.end_z = 0.24536826195;
    msg.end_z_units = 237U;
    msg.radius = 0.883110917053;
    msg.speed = 0.224624113149;
    msg.speed_units = 5U;
    msg.custom.assign("UXZHKKTYZGGWXCYFQJPWSPHREMGEMNZBTXNBHXOHKPRJNKJBHUGVRIIBZGWAFMSEKBGFWHVYCCEVDLCGCDQEQZXMQAQWTAIPOSBBAWJIVYHSNLYZJFVZAMKWLVDUCDTBRCHLOZSAUNXFEUGCNEHSCPGNMUJAQSFBMCYVDRFQIOSKYQOOILYLTOPGAK");

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
    msg.setTimeStamp(0.847051250182);
    msg.setSource(46977U);
    msg.setSourceEntity(46U);
    msg.setDestination(46376U);
    msg.setDestinationEntity(218U);
    msg.timeout = 36705U;
    msg.flags = 196U;
    msg.lat = 0.935098477552;
    msg.lon = 0.321904324808;
    msg.start_z = 0.0573831134697;
    msg.start_z_units = 196U;
    msg.end_z = 0.629515009251;
    msg.end_z_units = 62U;
    msg.radius = 0.24447721876;
    msg.speed = 0.894565377964;
    msg.speed_units = 87U;
    msg.custom.assign("OPIYDSIAFCWMLYDNLLUUYSNVUEPQCIPCZJKLHQGPMYSTPTJFERCYSMNVCBKUHTGRGNEZALXLBXGHWHPTTDIGGHCXHNQDQUTIZWKEDENVP");

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
    msg.setTimeStamp(0.43102796614);
    msg.setSource(41198U);
    msg.setSourceEntity(155U);
    msg.setDestination(48144U);
    msg.setDestinationEntity(54U);
    msg.timeout = 20794U;
    msg.flags = 25U;
    msg.lat = 0.0186223023996;
    msg.lon = 0.968959471972;
    msg.start_z = 0.447078587008;
    msg.start_z_units = 241U;
    msg.end_z = 0.447835430882;
    msg.end_z_units = 75U;
    msg.radius = 0.615584899952;
    msg.speed = 0.940955693657;
    msg.speed_units = 201U;
    msg.custom.assign("EZTMPZQCCPHALWLIOMTXGUJWIQYFOLLJLERJYERDXXAGTQKRBIUQRTYGNPIMIEHRPDSNMFPUIWSUDSFFJIOGVHONCRVWAYHKAROMHLHAWXPAVIQAWDECZTNWFDQGXSUZOLEEBTCSVOYNYYJSKFMSWNTUSNKKZJPETSCYIMSZKNDBXLJDZKQBMFZYGBXKJBLV");

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
    msg.setTimeStamp(0.894035896758);
    msg.setSource(21327U);
    msg.setSourceEntity(84U);
    msg.setDestination(10768U);
    msg.setDestinationEntity(60U);
    msg.timeout = 37282U;
    msg.lat = 0.427798965042;
    msg.lon = 0.571048988496;
    msg.z = 0.985342357697;
    msg.z_units = 217U;
    msg.speed = 0.164422338056;
    msg.speed_units = 163U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.168638923649;
    tmp_msg_0.y = 0.484824261399;
    tmp_msg_0.z = 0.55083994826;
    tmp_msg_0.t = 0.139153516575;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TRVVICKLOWVRAGUXQWJAMZIRWEPLCQHJLBDAWXAFZHMAQLMZQYRCPKSOHPAYJMUWTIVOVWMHNVXKUQBMCIATNOGGTSIQXYBLVHDUBDNWKFVTYFRCQSZNNASKNYBDJLJXFSBBRLGPSDEWLXVKSXKPWPXQNJUALFPICDCOENDUFJBYCHZFRLRZSMHGTNEAYDTPYSMZOOIOTCSNZIIHERHXQXEUDYYMKPMEOJGWR");

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
    msg.setTimeStamp(0.881586372777);
    msg.setSource(42756U);
    msg.setSourceEntity(93U);
    msg.setDestination(1240U);
    msg.setDestinationEntity(55U);
    msg.timeout = 12526U;
    msg.lat = 0.65884990077;
    msg.lon = 0.594595399084;
    msg.z = 0.794990757674;
    msg.z_units = 228U;
    msg.speed = 0.791991735244;
    msg.speed_units = 57U;
    msg.custom.assign("ZOHZQNOECVRKCWWICPTQBZFQIPQJJTGMEUFMHNRKYGMECUZKFUDBHTISHOHSWMROPRMJEVNXYUCZRIBWBAFGUVZWGUTKLVNQLXGBHVOMQAKSRLAAHYFAKPCVVPSLAXONURDWPGBBTLSVGNYTYCCVSDDINSJNJKBACEEYAIUJGEWWGSXLQIDIXFQXMKRQLZYYFEXUXS");

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
    msg.setTimeStamp(0.720146561615);
    msg.setSource(24506U);
    msg.setSourceEntity(80U);
    msg.setDestination(14953U);
    msg.setDestinationEntity(53U);
    msg.timeout = 728U;
    msg.lat = 0.345575349124;
    msg.lon = 0.98533924287;
    msg.z = 0.826185020427;
    msg.z_units = 178U;
    msg.speed = 0.696034755886;
    msg.speed_units = 237U;
    msg.custom.assign("MVLJEQANYVUSEWMTJQWWGZAHGITYOSDVOODGBQDVSSPNOGCBNXBFPPHUIRXNSBIZOSLACEDQCX");

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
    msg.setTimeStamp(0.967757579189);
    msg.setSource(60888U);
    msg.setSourceEntity(203U);
    msg.setDestination(5915U);
    msg.setDestinationEntity(193U);
    msg.x = 0.882006917482;
    msg.y = 0.223553027897;
    msg.z = 0.648858952666;
    msg.t = 0.0629817679334;

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
    msg.setTimeStamp(0.232112705443);
    msg.setSource(20889U);
    msg.setSourceEntity(149U);
    msg.setDestination(37944U);
    msg.setDestinationEntity(71U);
    msg.x = 0.430667532841;
    msg.y = 0.0317620812494;
    msg.z = 0.822191431673;
    msg.t = 0.100199218232;

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
    msg.setTimeStamp(0.976212993934);
    msg.setSource(59439U);
    msg.setSourceEntity(65U);
    msg.setDestination(41777U);
    msg.setDestinationEntity(79U);
    msg.x = 0.804293558848;
    msg.y = 0.575954053672;
    msg.z = 0.843266327009;
    msg.t = 0.193752699811;

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
    msg.setTimeStamp(0.0561235772011);
    msg.setSource(2033U);
    msg.setSourceEntity(101U);
    msg.setDestination(23399U);
    msg.setDestinationEntity(146U);
    msg.timeout = 5516U;
    msg.name.assign("JXNAGTVAUHTRJSMECWXHMMIZKRUMPFPVTXCERSUGPVMGFMSRGNUCWPIHAQXCJOKDKRBYEXNATQDWEIWZVBJCZXLLQDONOXIVQVGZOYAANGXPDEVBFNGQPJSKFLTRLWDDXSLUOBVRFUPCZKYUZMTAEZWHEOQEHMCBLCSGI");
    msg.custom.assign("IEVCIFHUUPOLDMFWYUZYJGMSFJGMPYUPOGHEZKIIMOQKIXSWRHJXUVWDLTZYZSGUJLXETHKWOJBGLEPWANQHJ");

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
    msg.setTimeStamp(0.710259462018);
    msg.setSource(7686U);
    msg.setSourceEntity(195U);
    msg.setDestination(38024U);
    msg.setDestinationEntity(212U);
    msg.timeout = 38127U;
    msg.name.assign("DHTECMFROGLRZFIHRCZKYXLENQPGKJIFURSNTZOZXYZDENMPACYLKSLTDDJUZJEMBUMYHWKOOZMGDYVLISSVQATNQOXSIAVWWNAIUJYGWGBHBWOBAXCREWKHVTTOBQPPMSBOZADPBTACIVPMKTJICVLQUBJHUSJKEFOKNNWEWXCYEIICUQGRISAHDXDCVMXNTLOFSFPFVRYJSDEYKQUW");
    msg.custom.assign("UKFMIGRUPSCAUDGKZFSOTLBYZTAOEONOKJZACHHFTXWIPGVYUYHNYRZXVVJDEBABSBYDLTDVRLACHJGCXJFMPGHZMUNMKSJYXUPJLXXNCMNBJCTFFOWQGKPOVSVHMBSXYJXRBLWEQUQPDKWUHWSJFTJQHNUIBCFFMVZWYKQWHHX");

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
    msg.setTimeStamp(0.876084576001);
    msg.setSource(63946U);
    msg.setSourceEntity(66U);
    msg.setDestination(42538U);
    msg.setDestinationEntity(172U);
    msg.timeout = 5777U;
    msg.name.assign("QECEOXFOSXLNTKELGLEMEMACGBYFKZCJZXBDBJKFJHRCQKNZHHWSRICGLODWOIXSDBZWIFJOHGPBPCQCZSNMLJFUIOLT");
    msg.custom.assign("KJVRZWSUCFCHWRSGFKDPFZXUUGZHIHVKQXFFPHHVIVJBMDT");

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
    msg.setTimeStamp(0.677882109057);
    msg.setSource(18121U);
    msg.setSourceEntity(41U);
    msg.setDestination(37639U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.915352747822;
    msg.lon = 0.523344741808;
    msg.z = 0.860707501388;
    msg.z_units = 239U;
    msg.speed = 0.132545760181;
    msg.speed_units = 62U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.326582580329;
    tmp_msg_0.y = 0.800008337581;
    tmp_msg_0.z = 0.95239852137;
    tmp_msg_0.t = 0.160992052407;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 777U;
    tmp_msg_1.off_x = 0.312009368272;
    tmp_msg_1.off_y = 0.641571803465;
    tmp_msg_1.off_z = 0.684477688757;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.378748726294;
    msg.custom.assign("GXBAAIWLABLKZPMCRHNPCVWHPQZUIVVKBJVTEXUIFMMPCISRHDPYYHUEWGKMWOAYYRXZJQASEECSESGMUHNOSTDGIIBLQWJUIYIOOMDHFTGXVZEKRQWXFUQWUVPCARGBFKEDZZENMXKCMTLDGZMVIPFJBQNSOBJVCTNLLKQGFVYOJCRSLOTZKULLOFDFTLPQUHQBKFEJYJTHMYNXDDWBNAXYVAPHCCQBS");

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
    msg.setTimeStamp(0.0749301921074);
    msg.setSource(5333U);
    msg.setSourceEntity(44U);
    msg.setDestination(22022U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.832988869936;
    msg.lon = 0.0444061506678;
    msg.z = 0.368739078425;
    msg.z_units = 177U;
    msg.speed = 0.911588138364;
    msg.speed_units = 133U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.180901919472;
    tmp_msg_0.y = 0.993101880806;
    tmp_msg_0.z = 0.827209352947;
    tmp_msg_0.t = 0.18864201826;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 5709U;
    tmp_msg_1.off_x = 0.841139756733;
    tmp_msg_1.off_y = 0.62752349606;
    tmp_msg_1.off_z = 0.67062379381;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.869679590078;
    msg.custom.assign("DSOIBHNCPWOCVQGNAOLYUWSLUUCUZIAMFKHRIVOFYWEIXPDNXIXNFQQJQJGMJMSYWTCETVJLAPHOMPNAYEBRTABJTAVGKMQZIGHLQXDFTVSFJACVDUDLBZRYQUXPFZOCYNOPTXDKXVPRVF");

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
    msg.setTimeStamp(0.976351961731);
    msg.setSource(3579U);
    msg.setSourceEntity(36U);
    msg.setDestination(51325U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.850492237092;
    msg.lon = 0.0468947090103;
    msg.z = 0.618330132861;
    msg.z_units = 54U;
    msg.speed = 0.441519595892;
    msg.speed_units = 48U;
    msg.start_time = 0.456489835909;
    msg.custom.assign("TFSKGQNSVJOWNUYHJPHSOYSCVTOUGZWRNFEWYMQORKGTDDTCDHBZRCGTJATJSZPERUVLVUKYTGKNQVUGQIDWAHFOIEBYRCTNYVZAJLPJP");

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
    msg.setTimeStamp(0.968225496678);
    msg.setSource(63764U);
    msg.setSourceEntity(69U);
    msg.setDestination(26414U);
    msg.setDestinationEntity(239U);
    msg.vid = 9605U;
    msg.off_x = 0.140456443273;
    msg.off_y = 0.516933363707;
    msg.off_z = 0.293923639446;

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
    msg.setTimeStamp(0.717258479083);
    msg.setSource(17378U);
    msg.setSourceEntity(25U);
    msg.setDestination(5862U);
    msg.setDestinationEntity(36U);
    msg.vid = 24891U;
    msg.off_x = 0.513216575035;
    msg.off_y = 0.87479942365;
    msg.off_z = 0.167806530987;

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
    msg.setTimeStamp(0.86901685262);
    msg.setSource(35510U);
    msg.setSourceEntity(167U);
    msg.setDestination(48633U);
    msg.setDestinationEntity(103U);
    msg.vid = 37640U;
    msg.off_x = 0.291605287845;
    msg.off_y = 0.47107268581;
    msg.off_z = 0.753064546264;

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
    msg.setTimeStamp(0.67859904893);
    msg.setSource(4603U);
    msg.setSourceEntity(162U);
    msg.setDestination(17624U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.137087012168);
    msg.setSource(33495U);
    msg.setSourceEntity(96U);
    msg.setDestination(46584U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.383174496928);
    msg.setSource(57867U);
    msg.setSourceEntity(218U);
    msg.setDestination(17611U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.0123230251046);
    msg.setSource(12641U);
    msg.setSourceEntity(223U);
    msg.setDestination(26180U);
    msg.setDestinationEntity(83U);
    msg.mid = 60815U;

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
    msg.setTimeStamp(0.761168229402);
    msg.setSource(52948U);
    msg.setSourceEntity(131U);
    msg.setDestination(53802U);
    msg.setDestinationEntity(110U);
    msg.mid = 18985U;

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
    msg.setTimeStamp(0.491574646147);
    msg.setSource(34550U);
    msg.setSourceEntity(43U);
    msg.setDestination(24156U);
    msg.setDestinationEntity(229U);
    msg.mid = 59739U;

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
    msg.setTimeStamp(0.132148841074);
    msg.setSource(45596U);
    msg.setSourceEntity(217U);
    msg.setDestination(54551U);
    msg.setDestinationEntity(113U);
    msg.state = 195U;
    msg.eta = 14419U;
    msg.info.assign("ZOWAQEODNOZJMILUYVRDSIMLYOQXBNAICLDKYTTTWXZKGPQGJSAPQLKSBRZRDCXNB");

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
    msg.setTimeStamp(0.961689163227);
    msg.setSource(48164U);
    msg.setSourceEntity(221U);
    msg.setDestination(6188U);
    msg.setDestinationEntity(76U);
    msg.state = 78U;
    msg.eta = 11530U;
    msg.info.assign("OFMKMXXOOYNGGKHNZQTBBUHGYXTDFVRFJJZEUWBIINQSWUNMGSGLNLWLEZKAWQMDUASSATDEWJFCLIAWKRXHHGQMQGLNIJOAFDMYZZJCSDGWKETPPYBCUYIBRPKKCNBSMSRXCKZJRJXDVHZKAEMULFTLTUDRPFCOEDIBYUOGIEQQQMJXMNXVSVYHCPTFPPQVJUDPVWRSCATLWHJVABPXINYHBORIEAUKVAYOERVRXB");

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
    msg.setTimeStamp(0.644516393909);
    msg.setSource(38146U);
    msg.setSourceEntity(2U);
    msg.setDestination(28459U);
    msg.setDestinationEntity(219U);
    msg.state = 75U;
    msg.eta = 42505U;
    msg.info.assign("PBFHWHNMGTPJCOOQCDKPISFYSF");

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
    msg.setTimeStamp(0.618630389008);
    msg.setSource(18557U);
    msg.setSourceEntity(120U);
    msg.setDestination(42883U);
    msg.setDestinationEntity(98U);
    msg.system = 1196U;
    msg.duration = 12272U;
    msg.speed = 0.485595440374;
    msg.speed_units = 187U;
    msg.x = 0.17185711222;
    msg.y = 0.343195126178;
    msg.z = 0.233002816892;
    msg.z_units = 178U;

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
    msg.setTimeStamp(0.247191648194);
    msg.setSource(52493U);
    msg.setSourceEntity(230U);
    msg.setDestination(3038U);
    msg.setDestinationEntity(154U);
    msg.system = 61842U;
    msg.duration = 52769U;
    msg.speed = 0.223536161001;
    msg.speed_units = 136U;
    msg.x = 0.736154188953;
    msg.y = 0.082727991086;
    msg.z = 0.992051098747;
    msg.z_units = 35U;

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
    msg.setTimeStamp(0.870673851953);
    msg.setSource(11947U);
    msg.setSourceEntity(246U);
    msg.setDestination(31573U);
    msg.setDestinationEntity(191U);
    msg.system = 32189U;
    msg.duration = 30510U;
    msg.speed = 0.119229762362;
    msg.speed_units = 118U;
    msg.x = 0.552914602209;
    msg.y = 0.555240309942;
    msg.z = 0.658103349174;
    msg.z_units = 227U;

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
    msg.setTimeStamp(0.974182575777);
    msg.setSource(44943U);
    msg.setSourceEntity(192U);
    msg.setDestination(21941U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.550813777318;
    msg.lon = 0.672963372659;
    msg.speed = 0.990022342532;
    msg.speed_units = 136U;
    msg.duration = 58429U;
    msg.sys_a = 38429U;
    msg.sys_b = 43753U;
    msg.move_threshold = 0.266493063346;

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
    msg.setTimeStamp(0.856625650119);
    msg.setSource(34230U);
    msg.setSourceEntity(176U);
    msg.setDestination(5071U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.841420630008;
    msg.lon = 0.227185528134;
    msg.speed = 0.717709305477;
    msg.speed_units = 131U;
    msg.duration = 53307U;
    msg.sys_a = 6051U;
    msg.sys_b = 46190U;
    msg.move_threshold = 0.890416713291;

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
    msg.setTimeStamp(0.208879598802);
    msg.setSource(18049U);
    msg.setSourceEntity(189U);
    msg.setDestination(41256U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.551975380308;
    msg.lon = 0.713225901993;
    msg.speed = 0.457757260339;
    msg.speed_units = 141U;
    msg.duration = 47462U;
    msg.sys_a = 23432U;
    msg.sys_b = 23692U;
    msg.move_threshold = 0.186266340931;

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
    msg.setTimeStamp(0.0718697978334);
    msg.setSource(44830U);
    msg.setSourceEntity(127U);
    msg.setDestination(24141U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.0791552035204;
    msg.lon = 0.551697273741;
    msg.z = 0.322712229783;
    msg.z_units = 235U;
    msg.speed = 0.899697088011;
    msg.speed_units = 203U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.269363700372;
    tmp_msg_0.lon = 0.031311739374;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("QCAWOWLJWMVNZOXQKXDALMPIAHTTFFHTOKSRZYJSCNQSGTSGOVNWVGYMZMVMHRBUTKKMFLEHIWCLEVEKXGUDAFFXMXBYGEJCYPNAHUFALJYTVMNNDUNPJUTGBMIVBLS");

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
    msg.setTimeStamp(0.802058378758);
    msg.setSource(18925U);
    msg.setSourceEntity(114U);
    msg.setDestination(56398U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.0624431745365;
    msg.lon = 0.904746146043;
    msg.z = 0.0931310192963;
    msg.z_units = 115U;
    msg.speed = 0.294785753189;
    msg.speed_units = 36U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.222140006873;
    tmp_msg_0.lon = 0.027707282829;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ETXZSOZVIYTMCWRQPHPWBQXGKCIVJPTDWQMZTJPSCUMUVAYPBCFOXHQINFV");

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
    msg.setTimeStamp(0.514659239598);
    msg.setSource(59453U);
    msg.setSourceEntity(242U);
    msg.setDestination(39677U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.429231711557;
    msg.lon = 0.0076595303265;
    msg.z = 0.43034184237;
    msg.z_units = 166U;
    msg.speed = 0.221399755414;
    msg.speed_units = 77U;
    msg.custom.assign("BUACXXHDHLBLUMKJKPKOVDIYMZYRUJGGXYCKEPNCCQLJSMBHJBGXHIECQBWOAAGRJFBSGYDZWESVRYETQZXVDUFUOTWSFXLCNPSAOFNACAHLCPNEPMZIDNECTOPLZ");

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
    msg.setTimeStamp(0.0354676180544);
    msg.setSource(35692U);
    msg.setSourceEntity(42U);
    msg.setDestination(18156U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.810812153291;
    msg.lon = 0.03896538756;

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
    msg.setTimeStamp(0.897979154039);
    msg.setSource(62142U);
    msg.setSourceEntity(134U);
    msg.setDestination(63418U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.796537846808;
    msg.lon = 0.853261477512;

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
    msg.setTimeStamp(0.0693069787755);
    msg.setSource(57916U);
    msg.setSourceEntity(17U);
    msg.setDestination(41457U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.658855098717;
    msg.lon = 0.637738610587;

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
    msg.setTimeStamp(0.52947191785);
    msg.setSource(60178U);
    msg.setSourceEntity(236U);
    msg.setDestination(44698U);
    msg.setDestinationEntity(57U);
    msg.timeout = 11536U;
    msg.lat = 0.865738755361;
    msg.lon = 0.558275288627;
    msg.z = 0.37138280254;
    msg.z_units = 104U;
    msg.pitch = 0.845548911364;
    msg.amplitude = 0.681867714433;
    msg.duration = 63463U;
    msg.speed = 0.491084573611;
    msg.speed_units = 223U;
    msg.radius = 0.882935586749;
    msg.direction = 79U;
    msg.custom.assign("ANLKCMBATHNDDBWORJGIZGLRMAYJVUJOHREXDJAYENUGOQZVBYCNVSSLIRHWNTSCQFSMSCXYZREYGDUUJEVOPMLZTWIBHBSIZMGLUKEHKTXDJRONICUBOAXEMZNPOMVHETLGAVSRNKXFFAUZZDGRPGWVIDKTPBBAIQZZSBXXKCTGIYANQDYPEPJRTQXP");

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
    msg.setTimeStamp(0.425376453465);
    msg.setSource(62183U);
    msg.setSourceEntity(36U);
    msg.setDestination(8642U);
    msg.setDestinationEntity(29U);
    msg.timeout = 58141U;
    msg.lat = 0.524446074233;
    msg.lon = 0.296411064251;
    msg.z = 0.146102580551;
    msg.z_units = 1U;
    msg.pitch = 0.847165514818;
    msg.amplitude = 0.590512947086;
    msg.duration = 58378U;
    msg.speed = 0.813413864222;
    msg.speed_units = 15U;
    msg.radius = 0.441827142876;
    msg.direction = 202U;
    msg.custom.assign("REOVANXBELAKVHPOARQQVWLZFZRZPGGGHVVONHECARRKCDUJOXOPTCKPPTQSDDCFSTWSSNNBKFRJZHZVBUCYYLQMSTMFZMKUUNIFNADJBBHCOBF");

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
    msg.setTimeStamp(0.182748289751);
    msg.setSource(43931U);
    msg.setSourceEntity(61U);
    msg.setDestination(16488U);
    msg.setDestinationEntity(72U);
    msg.timeout = 35286U;
    msg.lat = 0.840074088793;
    msg.lon = 0.774087699996;
    msg.z = 0.179120249795;
    msg.z_units = 214U;
    msg.pitch = 0.0337821318126;
    msg.amplitude = 0.743545035545;
    msg.duration = 35449U;
    msg.speed = 0.127408950399;
    msg.speed_units = 156U;
    msg.radius = 0.55550801662;
    msg.direction = 211U;
    msg.custom.assign("UWKIQRANAOPSDZDJWAKTVEZQDHPNOERENAIGVMHPUYPHFWXZACHCHVJSFCRDTTUXEMJULGYGMRKJGATOMYXKKBELFKBRZHLWXROVQIRCDGZWSQPOIBLXXEJPXXLNIIDJSRHUSMVQCWBZFFXIZHFERVCPWEPSEKYVLOTDAMZUDJUXQYHUFMNJFKYAQCGNGVFYIMGKCPTQZPLWFVZLQYJBAWC");

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
    msg.setTimeStamp(0.702994672548);
    msg.setSource(38442U);
    msg.setSourceEntity(104U);
    msg.setDestination(62466U);
    msg.setDestinationEntity(101U);
    msg.formation_name.assign("HSLMTXAEGTLQLLAELUOXXZJEBDQTMNEWEDFBTPYCVKDGPSAYJANUIVNMIJJZPAZMRSPOFCNTGOXDHSPZXGRDCWVUDLHQIHOWYIGVJUEPSJWDWQOTPXBHKARSCECRKMWCOBPYLRSVOTZXVZOIKZNIYHIARFVYXEHJUXKBFGQNGBQMQIRBMVERZJUIR");
    msg.reference_frame = 248U;
    msg.custom.assign("SONFMJLIXJIYPFCEGKQYDUZ");

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
    msg.setTimeStamp(0.476948492681);
    msg.setSource(54820U);
    msg.setSourceEntity(24U);
    msg.setDestination(3835U);
    msg.setDestinationEntity(205U);
    msg.formation_name.assign("OTASZVGJMUSQARCOYRSPKFKGZGNIARLSEXBKCUHQGBRAHVDMBCMUWUQEBPYJFSRCNZAOKJK");
    msg.reference_frame = 231U;
    msg.custom.assign("PJSCZXZRJOFURAHGEPEGDRHDDCWHWVKOEKWYRLTZLBLQYIVAVKJCNCFMGDRXNLYCNJKTBVWGQJDUONSXYIZMQ");

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
    msg.setTimeStamp(0.11124723653);
    msg.setSource(54352U);
    msg.setSourceEntity(143U);
    msg.setDestination(48378U);
    msg.setDestinationEntity(242U);
    msg.formation_name.assign("XMVVXFFECPKDYECWRHWAOEEMVRDGVNBVYPSFBDYBPIPBESALGJRDZIAULTEJBRZFVEVXTCMSQUEYNPNSQQMKDZSGLNKTESNLUKGMYOOTRHCUTG");
    msg.reference_frame = 159U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 24196U;
    tmp_msg_0.off_x = 0.539790856389;
    tmp_msg_0.off_y = 0.489955513595;
    tmp_msg_0.off_z = 0.614457798746;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("WWUQIHMZVVCJMYCPNIVVRRGVBLFBAZULE");

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
    msg.setTimeStamp(0.204367832712);
    msg.setSource(55961U);
    msg.setSourceEntity(123U);
    msg.setDestination(16982U);
    msg.setDestinationEntity(230U);
    msg.group_name.assign("IBNVDOEOQLXWFGOEWRBKHCKUWSZWMBHWWYCJVQMOEUZNUHCGAVPQBFDRUUKKYBXKTJSGJLVYQPOCURAQLOVFYTJTUYHGPTYOINVNYBBJKPGEDIRNLJTEGLFWPYLUSZNLAFXJCIGAOQTRAKXNSHGQSINCYCYKHRHJDMVLFPROCMTHDESXVIKZBSAVFRCIZTMGMFMXFZQEUPNJDIZDSFIUKMIPNZHBRGJDLAMRXVBEZWDHSE");
    msg.formation_name.assign("SKJLWHWEEETBRLLCUHWZQDHUGYCHXNDBTAGYNKRZBIRUOEMWGUFRVCBLMFXVNWYHIWTTCEKDYPPNVCEGSOPJXGGNTTSPUWFYTNOSPZPOISKLGRODBGJCFUWHIMUDIQPKSBFBEJFEVJCTSIQUJZAOVMSZDEXYSJLBHIRAQJWKNYVKPVXHBRNDTIOVRQZQYMDIJX");
    msg.plan_id.assign("URYHNZZSBGYSMEVCGJCQMZOORQKZWIBWHFQJUHKXPTOESA");
    msg.description.assign("RFCAHLXUGCUPJAYYGSYTSZWNQQO");
    msg.leader_speed = 0.671750212796;
    msg.leader_bank_lim = 0.151280865423;
    msg.pos_sim_err_lim = 0.200104183868;
    msg.pos_sim_err_wrn = 0.103241640433;
    msg.pos_sim_err_timeout = 22822U;
    msg.converg_max = 0.253146941455;
    msg.converg_timeout = 53705U;
    msg.comms_timeout = 46802U;
    msg.turb_lim = 0.938494663648;
    msg.custom.assign("BUWJOFDSIUPFTROQBUHYXIRWWCLSRNKGUNSIMMJWYKMFGWNEJNWAXVGQQLBBCILNKDTQPQAJERCRITFPZGRQOXVKTARPJRBWVVY");

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
    msg.setTimeStamp(0.406221922962);
    msg.setSource(14841U);
    msg.setSourceEntity(203U);
    msg.setDestination(51658U);
    msg.setDestinationEntity(84U);
    msg.group_name.assign("IXCKMEQJYANJXFMEZZMYCFZSOOKNKQKTBEFTFXZWWJSPRYNRCDKMYJEZNAQQCHFZAWDHTTJWOGASECKIUYBEGWCRFEPLHFJUVBLHOWZALUDQYEDITGZYMBJEIVXNUZNKCHIXCXQEXQGDAQJXRNLPLOBXIBZTSURTGOVWIMUHAGRPMRVIHT");
    msg.formation_name.assign("WYEOFRFMYDEONMKSPJNBCQXJTOHBQRXVHSGLPJIKDWUQEYHMSBOQJUDXJMTWVOPZLTAMZLUBGLTUDIFXJBXIKBXHSQALQAGMXNQVYEDYPCKXMCVPURUZLRGONKEBWJILRNVCVASZIYBRZVZGLPTDAHZHOQHJXRWAVFUVFYDFBJWCESEKG");
    msg.plan_id.assign("GHHJDRWVVJERRUZKXUSASHPUOZVJYEIYQJFYFUPGYOWTKXMWQYHZLRKEQLMUMXBDCBPNERFAQFWEMAXMAPSTLXFCAFJBAVOKEXRPOIBJXKRWMUQLPJVQUSRUKZUPNLWTMFNGDONXXCG");
    msg.description.assign("ZMCLRPXYBONQTNFSRTKFEKWSATWCXRVABBAO");
    msg.leader_speed = 0.700934802263;
    msg.leader_bank_lim = 0.387327394934;
    msg.pos_sim_err_lim = 0.00193746192118;
    msg.pos_sim_err_wrn = 0.980098582161;
    msg.pos_sim_err_timeout = 60208U;
    msg.converg_max = 0.533351293844;
    msg.converg_timeout = 57251U;
    msg.comms_timeout = 17951U;
    msg.turb_lim = 0.649164705243;
    msg.custom.assign("CVITZFCZOTMLXAOWUCPPVGPXCADBZPQLQPIQGAF");

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
    msg.setTimeStamp(0.865749266821);
    msg.setSource(15524U);
    msg.setSourceEntity(252U);
    msg.setDestination(19533U);
    msg.setDestinationEntity(167U);
    msg.group_name.assign("BIWTIBNWCE");
    msg.formation_name.assign("VQTEZOQFWJQTVSZQPMMPXVNKZLZVYICQDLJIGMFBLRCYMCXUNAZGQYSS");
    msg.plan_id.assign("WZYABHGTLIRVMAQPHVALDYBDTNPLSSWTGFDMZJKTMWTVNOEZQCGWYBVEYDFEOIQUXPOIISNPZAARXOUXUKVEZUQZESFNEQBMOYIBCFXKEVPXGNIAPTXOZISLCROJEJDGLSMJCOCNSWGKUKHRHAWCJUNFQUOWQWGFPMKIRWGFLRHYJZNTMDRCWSVKHAFGFCHJYDJRAHHMBPCPGMUXCI");
    msg.description.assign("WKJZXBMUUVLPBTELMBRYXLJYZIFZFXTDHPIERLGDQPHOPRARDDYDDHTEMQOAFYLZYEOPGALHZGXSJOTUWXJAHYMBISMCRKWVHJXTQWUHWBYYBCZBV");
    msg.leader_speed = 0.960993507232;
    msg.leader_bank_lim = 0.612009895823;
    msg.pos_sim_err_lim = 0.526158314004;
    msg.pos_sim_err_wrn = 0.113110851314;
    msg.pos_sim_err_timeout = 19115U;
    msg.converg_max = 0.639272477288;
    msg.converg_timeout = 18717U;
    msg.comms_timeout = 36927U;
    msg.turb_lim = 0.0133231730635;
    msg.custom.assign("WJTASFKDDBCVNXXGIUTEOYLPAOQDEANIJQLSQIDPLAYSDNZNARROFYTHIQZJACJXHLGCWBBZXEYGECLFPSSGDNORDEDGVOTWHUTPORRIGZLHHGMGFDESJNLPMAJUVFXCRMHUHILJXMBUVJPVBICNKSKXTZSTJIM");

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
    msg.setTimeStamp(0.297672757388);
    msg.setSource(5617U);
    msg.setSourceEntity(170U);
    msg.setDestination(21745U);
    msg.setDestinationEntity(232U);
    msg.control_src = 44549U;
    msg.control_ent = 179U;
    msg.timeout = 0.641951661662;
    msg.loiter_radius = 0.92098373977;
    msg.altitude_interval = 0.693046857449;

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
    msg.setTimeStamp(0.905630272234);
    msg.setSource(19831U);
    msg.setSourceEntity(36U);
    msg.setDestination(19585U);
    msg.setDestinationEntity(79U);
    msg.control_src = 51551U;
    msg.control_ent = 194U;
    msg.timeout = 0.300988381202;
    msg.loiter_radius = 0.138745473702;
    msg.altitude_interval = 0.42680267098;

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
    msg.setTimeStamp(0.433487446978);
    msg.setSource(39533U);
    msg.setSourceEntity(203U);
    msg.setDestination(25975U);
    msg.setDestinationEntity(178U);
    msg.control_src = 1593U;
    msg.control_ent = 149U;
    msg.timeout = 0.475628171773;
    msg.loiter_radius = 0.890839058993;
    msg.altitude_interval = 0.718404871616;

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
    msg.setTimeStamp(0.2228055999);
    msg.setSource(26433U);
    msg.setSourceEntity(153U);
    msg.setDestination(42307U);
    msg.setDestinationEntity(96U);
    msg.flags = 233U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.986150722326;
    tmp_msg_0.speed_units = 159U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.513669538846;
    tmp_msg_1.z_units = 123U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.567674268993;
    msg.lon = 0.148042152866;
    msg.radius = 0.393003488149;

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
    msg.setTimeStamp(0.675476763823);
    msg.setSource(6220U);
    msg.setSourceEntity(212U);
    msg.setDestination(46842U);
    msg.setDestinationEntity(232U);
    msg.flags = 86U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.00652808601265;
    tmp_msg_0.speed_units = 182U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.14566240851;
    tmp_msg_1.z_units = 171U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.454036848379;
    msg.lon = 0.322247376059;
    msg.radius = 0.771901225375;

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
    msg.setTimeStamp(0.412100512178);
    msg.setSource(42147U);
    msg.setSourceEntity(199U);
    msg.setDestination(61935U);
    msg.setDestinationEntity(189U);
    msg.flags = 79U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.775123902153;
    tmp_msg_0.speed_units = 205U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.133152748098;
    tmp_msg_1.z_units = 138U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0788538692875;
    msg.lon = 0.233111132302;
    msg.radius = 0.893210750026;

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
    msg.setTimeStamp(0.48828254181);
    msg.setSource(56694U);
    msg.setSourceEntity(65U);
    msg.setDestination(24219U);
    msg.setDestinationEntity(128U);
    msg.control_src = 5786U;
    msg.control_ent = 124U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 126U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.890417299461;
    tmp_tmp_msg_0_0.speed_units = 94U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.967105143994;
    tmp_tmp_msg_0_1.z_units = 130U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.152230509949;
    tmp_msg_0.lon = 0.299633528377;
    tmp_msg_0.radius = 0.34403713016;
    msg.reference.set(tmp_msg_0);
    msg.state = 41U;
    msg.proximity = 168U;

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
    msg.setTimeStamp(0.454329071395);
    msg.setSource(30217U);
    msg.setSourceEntity(88U);
    msg.setDestination(23127U);
    msg.setDestinationEntity(154U);
    msg.control_src = 28382U;
    msg.control_ent = 195U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 14U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0423128737182;
    tmp_tmp_msg_0_0.speed_units = 42U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.276149515316;
    tmp_tmp_msg_0_1.z_units = 200U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.447879931381;
    tmp_msg_0.lon = 0.448801349172;
    tmp_msg_0.radius = 0.326530562642;
    msg.reference.set(tmp_msg_0);
    msg.state = 123U;
    msg.proximity = 244U;

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
    msg.setTimeStamp(0.446734756291);
    msg.setSource(11137U);
    msg.setSourceEntity(153U);
    msg.setDestination(64050U);
    msg.setDestinationEntity(138U);
    msg.control_src = 57381U;
    msg.control_ent = 107U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 188U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.832881172818;
    tmp_tmp_msg_0_0.speed_units = 51U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.190364297795;
    tmp_tmp_msg_0_1.z_units = 242U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.812686228374;
    tmp_msg_0.lon = 0.217049131066;
    tmp_msg_0.radius = 0.547540789817;
    msg.reference.set(tmp_msg_0);
    msg.state = 190U;
    msg.proximity = 248U;

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
    msg.setTimeStamp(0.733196490787);
    msg.setSource(9058U);
    msg.setSourceEntity(215U);
    msg.setDestination(50425U);
    msg.setDestinationEntity(85U);
    msg.ax_cmd = 0.408280557395;
    msg.ay_cmd = 0.463924143941;
    msg.az_cmd = 0.893034221897;
    msg.ax_des = 0.752381264629;
    msg.ay_des = 0.462718285798;
    msg.az_des = 0.951937897801;
    msg.virt_err_x = 0.270068522536;
    msg.virt_err_y = 0.412698467966;
    msg.virt_err_z = 0.501004127443;
    msg.surf_fdbk_x = 0.368598553841;
    msg.surf_fdbk_y = 0.768668018197;
    msg.surf_fdbk_z = 0.141337526315;
    msg.surf_unkn_x = 0.219114899255;
    msg.surf_unkn_y = 0.592021246606;
    msg.surf_unkn_z = 0.928702236714;
    msg.ss_x = 0.00510297710766;
    msg.ss_y = 0.610340113367;
    msg.ss_z = 0.929461959017;

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
    msg.setTimeStamp(0.926445115299);
    msg.setSource(34599U);
    msg.setSourceEntity(102U);
    msg.setDestination(27019U);
    msg.setDestinationEntity(194U);
    msg.ax_cmd = 0.118484281775;
    msg.ay_cmd = 0.334128002579;
    msg.az_cmd = 0.0705075926426;
    msg.ax_des = 0.373584011078;
    msg.ay_des = 0.821730793172;
    msg.az_des = 0.0215265794337;
    msg.virt_err_x = 0.684443060587;
    msg.virt_err_y = 0.874999551643;
    msg.virt_err_z = 0.103670036324;
    msg.surf_fdbk_x = 0.6331700187;
    msg.surf_fdbk_y = 0.352211955621;
    msg.surf_fdbk_z = 0.812540716945;
    msg.surf_unkn_x = 0.6300809892;
    msg.surf_unkn_y = 0.963619560574;
    msg.surf_unkn_z = 0.0353544999088;
    msg.ss_x = 0.225266472241;
    msg.ss_y = 0.981127715966;
    msg.ss_z = 0.169290579753;

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
    msg.setTimeStamp(0.276516193255);
    msg.setSource(46336U);
    msg.setSourceEntity(142U);
    msg.setDestination(14726U);
    msg.setDestinationEntity(162U);
    msg.ax_cmd = 0.120108308044;
    msg.ay_cmd = 0.383419886174;
    msg.az_cmd = 0.733693492692;
    msg.ax_des = 0.158937308445;
    msg.ay_des = 0.657581378042;
    msg.az_des = 0.634157684697;
    msg.virt_err_x = 0.49037470632;
    msg.virt_err_y = 0.0916411675079;
    msg.virt_err_z = 0.0171120252633;
    msg.surf_fdbk_x = 0.429713595112;
    msg.surf_fdbk_y = 0.902163112175;
    msg.surf_fdbk_z = 0.924827212428;
    msg.surf_unkn_x = 0.363543786305;
    msg.surf_unkn_y = 0.997053584163;
    msg.surf_unkn_z = 0.67597822481;
    msg.ss_x = 0.0422795073511;
    msg.ss_y = 0.242026695937;
    msg.ss_z = 0.650522684379;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("WRETBYAGNHWJQOGSRJFKHECBZPX");
    tmp_msg_0.dist = 0.237546495897;
    tmp_msg_0.err = 0.543016623341;
    tmp_msg_0.ctrl_imp = 0.716646008488;
    tmp_msg_0.rel_dir_x = 0.0669260283175;
    tmp_msg_0.rel_dir_y = 0.421041359591;
    tmp_msg_0.rel_dir_z = 0.610124759343;
    tmp_msg_0.err_x = 0.989082475462;
    tmp_msg_0.err_y = 0.49767283496;
    tmp_msg_0.err_z = 0.663583487922;
    tmp_msg_0.rf_err_x = 0.722629619252;
    tmp_msg_0.rf_err_y = 0.194491575036;
    tmp_msg_0.rf_err_z = 0.540645144425;
    tmp_msg_0.rf_err_vx = 0.881852021761;
    tmp_msg_0.rf_err_vy = 0.691638389375;
    tmp_msg_0.rf_err_vz = 0.3811426072;
    tmp_msg_0.ss_x = 0.42782043231;
    tmp_msg_0.ss_y = 0.137091317437;
    tmp_msg_0.ss_z = 0.924376363977;
    tmp_msg_0.virt_err_x = 0.190417474635;
    tmp_msg_0.virt_err_y = 0.630219422268;
    tmp_msg_0.virt_err_z = 0.153429011147;
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
    msg.setTimeStamp(0.308660070988);
    msg.setSource(5883U);
    msg.setSourceEntity(218U);
    msg.setDestination(61670U);
    msg.setDestinationEntity(112U);
    msg.s_id.assign("AHUYWCNDOYWRADEJBFZQVOUFYZKGTYSLOTMQHZWCFUQSEVQNPBKRDSTCGPKUJZSUMSZGXQKJDNWDOPAWDIHFCFSRLOYNXPBTAZQOBVWHEFMWVLLYROXCBLXSSPRWRTVHRJZGURTKUQTDGAFIXXRROAILPEWZDWMMPNBNHAGG");
    msg.dist = 0.286573232406;
    msg.err = 0.837750542624;
    msg.ctrl_imp = 0.206398670207;
    msg.rel_dir_x = 0.267557687591;
    msg.rel_dir_y = 0.746790696838;
    msg.rel_dir_z = 0.849353400806;
    msg.err_x = 0.849523112616;
    msg.err_y = 0.236429958726;
    msg.err_z = 0.377435075453;
    msg.rf_err_x = 0.247125121047;
    msg.rf_err_y = 0.253738434852;
    msg.rf_err_z = 0.880528171002;
    msg.rf_err_vx = 0.0203551794138;
    msg.rf_err_vy = 0.165555588294;
    msg.rf_err_vz = 0.541450732832;
    msg.ss_x = 0.608658455698;
    msg.ss_y = 0.962378706544;
    msg.ss_z = 0.115184224367;
    msg.virt_err_x = 0.271879913124;
    msg.virt_err_y = 0.316522136434;
    msg.virt_err_z = 0.951931294758;

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
    msg.setTimeStamp(0.636165037649);
    msg.setSource(18480U);
    msg.setSourceEntity(150U);
    msg.setDestination(6277U);
    msg.setDestinationEntity(244U);
    msg.s_id.assign("FPNDVSAVYMOVXUMGTEKGOSLJOCMDSDTVJRZIFNCVXQMEGRJMUPWATRBJHHGWQRPIVMDJXGFNGYKIUHASRABXWXKAYBDUXHLUZSNOCYLJTOLCQHKUANEFCTPBYQVATTSNFNTVQAXCNEVQ");
    msg.dist = 0.377552094508;
    msg.err = 0.215942784086;
    msg.ctrl_imp = 0.510401267511;
    msg.rel_dir_x = 0.213944547023;
    msg.rel_dir_y = 0.0440597622919;
    msg.rel_dir_z = 0.787599668911;
    msg.err_x = 0.442130455587;
    msg.err_y = 0.902070278009;
    msg.err_z = 0.996653242941;
    msg.rf_err_x = 0.219633345256;
    msg.rf_err_y = 0.48124090711;
    msg.rf_err_z = 0.243380429903;
    msg.rf_err_vx = 0.62047375096;
    msg.rf_err_vy = 0.23692903932;
    msg.rf_err_vz = 0.706954458142;
    msg.ss_x = 0.327057877594;
    msg.ss_y = 0.187873734613;
    msg.ss_z = 0.733667801923;
    msg.virt_err_x = 0.257299721785;
    msg.virt_err_y = 0.881712447498;
    msg.virt_err_z = 0.169872379616;

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
    msg.setTimeStamp(0.904162056056);
    msg.setSource(58669U);
    msg.setSourceEntity(10U);
    msg.setDestination(10091U);
    msg.setDestinationEntity(1U);
    msg.s_id.assign("ZTUIZQUKZVHFSWPRNXQOHQGOSDKSRQEIFWLVSOGMXRKERBWMXMLHEATWRPPRFGCXKLTMUDKMWZRTRUITRAANNBVBVCYUBIJZXMYPBVGDLLOBDQJFFIQWNLZQLCCHPMYJJFHEULBKPPCYHDODKMTFMACDPBZLENOKJHUOFNHQSADYSHGSCGUSQAVGBXENIOXJAGFYVGLSNKZYXHVWIQPCUEYCTOMAYONU");
    msg.dist = 0.537837214348;
    msg.err = 0.180632914986;
    msg.ctrl_imp = 0.0592305745677;
    msg.rel_dir_x = 0.464978324509;
    msg.rel_dir_y = 0.780588849632;
    msg.rel_dir_z = 0.49883069344;
    msg.err_x = 0.773149277883;
    msg.err_y = 0.963142309011;
    msg.err_z = 0.894722644308;
    msg.rf_err_x = 0.149136277705;
    msg.rf_err_y = 0.799832408592;
    msg.rf_err_z = 0.187406293625;
    msg.rf_err_vx = 0.929194161529;
    msg.rf_err_vy = 0.528286543915;
    msg.rf_err_vz = 0.754734231308;
    msg.ss_x = 0.792495535188;
    msg.ss_y = 0.520230771601;
    msg.ss_z = 0.668524997171;
    msg.virt_err_x = 0.0908042612034;
    msg.virt_err_y = 0.0956263449493;
    msg.virt_err_z = 0.691150473598;

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
    msg.setTimeStamp(0.863337585559);
    msg.setSource(19717U);
    msg.setSourceEntity(23U);
    msg.setDestination(4725U);
    msg.setDestinationEntity(51U);
    msg.timeout = 6776U;
    msg.rpm = 0.0968205790528;
    msg.direction = 227U;
    msg.custom.assign("KYMTLQSRUODXZMTAYKTYITHMRPFWMJNSMLOIIJRDEDSULUWOISHBZWGBMVIAPLOLNOYGFGXVBKCGCAJMQKVHUOZUVRZLGEZJQNGFKVHLVXFBSUNYBSNKVPWHLKNWJVPQOFQSGDCHMTEXEUVXQRZNYAFOIGJCCERMTGJHNLBVEWYPPBYDSOERXSRJU");

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
    msg.setTimeStamp(0.539305334116);
    msg.setSource(6416U);
    msg.setSourceEntity(201U);
    msg.setDestination(3406U);
    msg.setDestinationEntity(182U);
    msg.timeout = 18123U;
    msg.rpm = 0.277023659216;
    msg.direction = 214U;
    msg.custom.assign("EJHSBIUCWTRKNIPSCKLQDPTCOTZWXYAAJCQCBQPXNYVKMUASZIGGPHOGOJXRNLFVVAZDKRSCYZOZLI");

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
    msg.setTimeStamp(0.551293025749);
    msg.setSource(32209U);
    msg.setSourceEntity(152U);
    msg.setDestination(50460U);
    msg.setDestinationEntity(188U);
    msg.timeout = 18848U;
    msg.rpm = 0.0285673520447;
    msg.direction = 102U;
    msg.custom.assign("BEZRSOPMAYIMBSELYOEZOKIRMATYQXPAMSVOYNHBETFZGYQHEWOLWRHKJBDZLCLKFFKANLSVCKJCXMXDPUVFUVWQYFUFQRSVXMLGNDDVXHXIQSTKCJFYJFECUERWUTNPUCBIUMDBWCIAABWPSUNPRHLGZHJDGKDJZQAMMHZWRDCVXHQGYHIUOXKUVONWLEHQTTZIDNCEPTJCAZPAGXXRIBOKISVROGGYFJGWZLDTPNNGKT");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.243947288815);
    msg.setSource(23381U);
    msg.setSourceEntity(64U);
    msg.setDestination(8539U);
    msg.setDestinationEntity(174U);
    msg.op_mode = 11U;
    msg.error_count = 21U;
    msg.error_ents.assign("UZCWBETIMDYUCLCCQOVIHZFMPDOWSVYBKBUHLNEOFNPVTNGWXKGPNTUUPPSQZFBAWNQKAGUORVELJAKSCOYFNOEHNFHXKRJDBPCKIAYNKVNWBWHSHCFYSTIVXAQETZPRHWIIMLMXXJGZHGSXHYGDZVODRJVUZCRGYTQGHRMISGCYORDELYDEBUOEMOXYTQTJQMLZVJJFRAQSPQXDFURBFATPZX");
    msg.maneuver_type = 27087U;
    msg.maneuver_stime = 0.834141419556;
    msg.maneuver_eta = 42768U;
    msg.control_loops = 1869127791U;
    msg.flags = 199U;
    msg.last_error.assign("KCXEOSRJUFPZVHHELVX");
    msg.last_error_time = 0.393825910031;

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
    msg.setTimeStamp(0.521385865821);
    msg.setSource(41295U);
    msg.setSourceEntity(100U);
    msg.setDestination(55954U);
    msg.setDestinationEntity(9U);
    msg.op_mode = 31U;
    msg.error_count = 6U;
    msg.error_ents.assign("RDOUJBITKAQXWSIAZGVZHVMVORBPNWGZKCJEMOELQNECRKZDPDFMEYWDACONETYYVFBRMODDXIRWLLDEKYTGSIHTMLGCRPFAOZ");
    msg.maneuver_type = 16713U;
    msg.maneuver_stime = 0.911967105999;
    msg.maneuver_eta = 43856U;
    msg.control_loops = 2558090745U;
    msg.flags = 58U;
    msg.last_error.assign("JCMELRHDOOTPDURQDKVMENMUAVXPBSPLFTLWWKQMVKQXGKQEHXJAWOJDXDSAZCVYAPTOSIHZCLSH");
    msg.last_error_time = 0.0174928281656;

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
    msg.setTimeStamp(0.0252185376827);
    msg.setSource(61299U);
    msg.setSourceEntity(136U);
    msg.setDestination(15498U);
    msg.setDestinationEntity(133U);
    msg.op_mode = 105U;
    msg.error_count = 37U;
    msg.error_ents.assign("VTCGHVXFQWTUBXQXZHIQJADALGSYESFYBLNXJFMFBNIZEPQAJRZZAYJADVMHPFFCVLZPOJBWUGSKKBQZTGVUHIDKDE");
    msg.maneuver_type = 60646U;
    msg.maneuver_stime = 0.508244074523;
    msg.maneuver_eta = 23395U;
    msg.control_loops = 2259194731U;
    msg.flags = 76U;
    msg.last_error.assign("PPEXLTGBDKQNYWTVIBSMXAJGNXUYGNZKJCSDUQXLNZYBHOUEGDKWDJMBQFXFPQVSUMHKKCFGSUEVSCSCTRYAKXAJOAFVZPAVTYVJXAYNRTEEORIVDGMMNEEBETJKZSCBWTDQIRHOCDDUWJYPYGMTXPJMZAEPLMPHYLFQUVWOWKNNKBRYZQFSFILCZWB");
    msg.last_error_time = 0.129051267033;

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
    msg.setTimeStamp(0.146707569578);
    msg.setSource(34504U);
    msg.setSourceEntity(124U);
    msg.setDestination(53271U);
    msg.setDestinationEntity(152U);
    msg.type = 124U;
    msg.request_id = 40360U;
    msg.command = 80U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("GIOCQCVWKMWBQJSCHHXKGLMVGTGJWAVWJZXSWDEGIIEQZSHRAGCONKHHYLCVWBPXKRDRULKJYEPPEZTPIUVODQRRTXIKYJFZMKBPSOPVCYUITJARUIRKYAOFNMYHXDHZLBUMFZASMPXFYCMABZKARQDZZTDECJUUUSMVOVSYHODGRL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 2727U;
    msg.info.assign("XXAKQTJNXGPGTMSXCVZVHUMHKLTOEYJQHIIBBOSQJDZMPLOYGFFSEUDQEBKMMJDUTAGNAAKXCUTVLECBONSMNCWPPERUTBBKYQUFOSNGWNXWPPIYRRRHWHHBMXDAVVDQQFMFDZ");

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
    msg.setTimeStamp(0.436523472165);
    msg.setSource(16500U);
    msg.setSourceEntity(6U);
    msg.setDestination(59807U);
    msg.setDestinationEntity(236U);
    msg.type = 160U;
    msg.request_id = 28013U;
    msg.command = 112U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 45032U;
    tmp_msg_0.flags = 247U;
    tmp_msg_0.lat = 0.454232844869;
    tmp_msg_0.lon = 0.325570367585;
    tmp_msg_0.start_z = 0.917641453702;
    tmp_msg_0.start_z_units = 6U;
    tmp_msg_0.end_z = 0.0989685076797;
    tmp_msg_0.end_z_units = 179U;
    tmp_msg_0.radius = 0.513119284391;
    tmp_msg_0.speed = 0.988166242671;
    tmp_msg_0.speed_units = 38U;
    tmp_msg_0.custom.assign("ASHKTVTUWQBBLPDDAXUQSZQBVJODLEDSKOFXCYWAHHBAROVSYSPIESYHVNSDQTAAXKAIXTUNSWIUNJZEUPVOGGCEWTBMJFFFKFPPZZNJCIVFHUGKBLCHKLKNGWOGPGYNOYZRRBBHBAMIJIWJCZQZLMRQLOWVINYCZGAVMQVNLYJHRXXOMCATTPGLQCDDXTQCYKPFURCTIYXUZWRGIPLOMEFDMEXMMJEGUEOEJHWSZRRWDNRFIB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 21896U;
    msg.info.assign("XQJHFZVTPCVMUBKJXPRLIUTSCPWLOIZXITFUV");

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
    msg.setTimeStamp(0.20684163206);
    msg.setSource(32366U);
    msg.setSourceEntity(97U);
    msg.setDestination(4755U);
    msg.setDestinationEntity(101U);
    msg.type = 187U;
    msg.request_id = 35487U;
    msg.command = 226U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 47021U;
    tmp_msg_0.custom.assign("VFBIGQBZTUBYVVGIRVPDMCDSBCDSF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 43699U;
    msg.info.assign("XFIKZIQVVKNKXRUUGEYHSCMYKYALKRHDUSBTEKGZPVXOAXNOT");

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
    msg.setTimeStamp(0.879611490081);
    msg.setSource(59038U);
    msg.setSourceEntity(210U);
    msg.setDestination(26144U);
    msg.setDestinationEntity(3U);
    msg.command = 155U;
    msg.entities.assign("IUGZMAJHZXZQEKFUPTWWDNZUBEQDHQJLCKRMVBTWILMAAFAOSSNHRUZSSKCQUXLYGFHINGVEKDJGLRVPORCXTICOAXYYNNDZBOVLPWVLRCEDOKEOGXDVADFUKPFPMFBAPETYEQSUBSQMAIMRWWISDTZEORBKIWSHLNJWITUEUJMTHMHAIFPGGZQLDWBNXXTWYNSOXXGYCJZVXCFNNZEGVHJOKYIPJVBTM");

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
    msg.setTimeStamp(0.756741524928);
    msg.setSource(64489U);
    msg.setSourceEntity(217U);
    msg.setDestination(60930U);
    msg.setDestinationEntity(233U);
    msg.command = 119U;
    msg.entities.assign("ESMAMWXBMLISEHUNKRNBAIEGYLKYCZOMBSSLIHGEULYBTCNPRKPDQDXPMKTWOUZFVWDKABZFOHTTFPNNKRAICEKTVEPVDLAPKHYZNTWSLQRDGVSBCCUZHFJAJZJVDQTOFP");

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
    msg.setTimeStamp(0.985415933142);
    msg.setSource(34643U);
    msg.setSourceEntity(89U);
    msg.setDestination(47776U);
    msg.setDestinationEntity(66U);
    msg.command = 124U;
    msg.entities.assign("DDHIPAZPJQCIACWTVKONYGQNTOQHSLIHRBNJTMNYBQSAXWMEJZCEURSJLZXYWDAIHMVGIXEROPVZQRRSTQGSHNPEOKKDBYTBWRTGKIVCXJTPUKLKACZQBYGEJVAGRBRGPBTVWSMPBUDDZLFCFGDWNGLLSDEUOYFVLPPTDVOMSOUUWFJSMXHIWCXUHVBKMJMOYEKCYFFMFXAXLJYVZZBALRCKNHIXSGEMURQIFFDANEZZQLPTOKC");

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
    msg.setTimeStamp(0.144819213464);
    msg.setSource(34610U);
    msg.setSourceEntity(17U);
    msg.setDestination(35237U);
    msg.setDestinationEntity(151U);
    msg.mcount = 47U;
    msg.mnames.assign("DOHYHZRGEUTLLXAJHHGSWMDPRBNLFGVFCERSREGJJQOTYOWECKAMIJXDIOEYPMUDOQSSIXTNAWCYNAZUDBIZDYHHFXNRXEZVQTHYTWNWVZCNLPRCBJMWBMBUGKIDEVSKGBOWMQULLJPKFIPIFOKQHXBQTUTZADMFVVMFALKWZPJGFXNVYTGKBPOACQRFY");
    msg.ecount = 46U;
    msg.enames.assign("CBTNMHASWTFIOOLKUMNFWSWKGZYUONCZWOEVLZFPDOPWKYONNCIIYAKJKLUXIPYRIZPMVRKQBDLVQXFBXXOAMVJALHCYZQRRMUOCJZXQXRFIMSDJAGRWMPESKGHIGOVNGSDUFEHEZNIHVCPGBJQSREKMDIWHNFSXW");
    msg.ccount = 163U;
    msg.cnames.assign("JKVVMLBTVWDHAMMOEAZEFERZCSKQATIAXYRGIQQXJIGNUHWRXGSTKFFQMYLSGTAUGECBEAUVUGAZFXBPUKPKDBPOYVRRJUHYZWJDBXHFWHNUFVRBOMTFFQOTXKDCQIGXWCSUJJCFNOIGODKHROCJHVNY");
    msg.last_error.assign("ZHCRLHHXMCONXMVKWVWXTVOKILPEIKDKMXYNEDWOMFNUFETWMTVXTMYIUQMGTXVFEQZCWUERQTUNSKCAQMRDIFUHHZPJWDOHFIZSWSBLLANYDNSAZYCUBBSSKQALNQPXBYAMFTJIXDUIOQOBQYWVARCZFGNMLALVHFGYEHJKPBGNRKLJSQJTDVPBJUPJOKZHOEKTBGDJWNJGROW");
    msg.last_error_time = 0.761504390236;

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
    msg.setTimeStamp(0.862039726642);
    msg.setSource(29747U);
    msg.setSourceEntity(156U);
    msg.setDestination(53899U);
    msg.setDestinationEntity(5U);
    msg.mcount = 176U;
    msg.mnames.assign("MHSIUUWVEKQLYLMAFDKHQTJXPPMGSCVEYNCOSKOOFBHHJLNOHIIEBRSXTJQBWZPMXRRAWCTIYZOWVXACBCGNLTNAOLEJAFFUPURACWXMADJKFPTSQAVLYMNZBUEIKVDFJYMFVSHRTGVNXIVPSGXOEKPDWGUHJIFMGZYHUDWXYQDQYECPZCBKBYVMQZQCGNROJNEWOQDZPJRBNGFWNTPGEWFTLDQBZDAH");
    msg.ecount = 241U;
    msg.enames.assign("EFXDMQDYPIJGJPFUKPHUZZNOOYBPASMGFQRJTLEEPYHFQEBAJRRHANEJTCQAWXJVGKVKYNHLZGFBNVVGCCMRYYTEMYXVMKPDKZSRTMXFQEZBXEKXMJBDDSDKITWGHANOLWPLBHETVLQFECFSABYISXTIJWILBLLOVZCNXHJYDSCHGGVAIAVKKPLWOSHQUNGUAMXSCPZOTQRMZTWNIXFUZDUATOQ");
    msg.ccount = 179U;
    msg.cnames.assign("RDEOIYWGKGAIDCUGBSPLJXIEOLVYTJEGSYINTTFUHKBUEXRYBZDZZMWMSAJDDLUJLCCQSDJDBFTQXRTDRSDHHKXBONLUMRWXUCULXPLVRZZESEPR");
    msg.last_error.assign("TRBUUICKYEUERJPAMCLMUNBCOFZHMMRBFCVIMQECIGUKGKMZRZDTHXZDWABBAPYLSVEVPLWTJPLJBGOOWGVNPVRYNNHHVYCNGXBOZIJHDVNSEKZLURCYGSEARQANGLKWTFXZTMIAJAPVYWNDDTSIQQA");
    msg.last_error_time = 0.600900717959;

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
    msg.setTimeStamp(0.465595871388);
    msg.setSource(43768U);
    msg.setSourceEntity(149U);
    msg.setDestination(33560U);
    msg.setDestinationEntity(67U);
    msg.mcount = 173U;
    msg.mnames.assign("FNVPWBTCXDBOUKUZEGCZKYMKAURYOMFBOAQAFTBIRZDTHCAPDDJYPQNLSQFWMKPOZGCRWNKGOKQVXJLFJBEZRSROCAZHYNPLJVXWUNSEWXPHEKVNZCNJIKDVVREHWGBIIUYCHHBXXIVCQQXDJLVUYLLEZQALETRSDTASMFFWDHMNSJJDQJLXBKFPWMRGBUICRTOXWULQPOBGAYIJEMSANYEIHGRSZGIUOEZFSHOTIQNUM");
    msg.ecount = 119U;
    msg.enames.assign("YLFZADKGUOTMKSYDMGJOQAOXTTAVCRUUYBQOTSAWXWTNAWBCHYRTWMVVNKDFXNJGIXXPTZHDVKWWJMGSDONXISNMFYPOMDWTJZAZQLEG");
    msg.ccount = 222U;
    msg.cnames.assign("CXRGGNSXUPZVNXTMRTBNIIHARSXDOPGXHTZOWLCOWZJVEDHSYOJJHWJOXFGMFDHISFQRTHVYPBUWCFVVWBNUUTXGKAUJYH");
    msg.last_error.assign("PSIKLHZXCROMOMGCZVLTPYLXRNYXULMFEQPNEMKNEOLICAXQEQCEXRUBFJAAXTEXZDQSECGFZFTYYTVDQGCPVWIDTZTNQJOZKGKVUBYNLSUUIADUVBOUFKJNEEOBKJBVIDDHGKKWSNGHDSSMHFTHCTIRLVRNGDRKBWMVAOHDIUGTIKWAMPWWXZJJYHQAPONXLBZBAA");
    msg.last_error_time = 0.854361867513;

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
    msg.setTimeStamp(0.423085363564);
    msg.setSource(21873U);
    msg.setSourceEntity(38U);
    msg.setDestination(58563U);
    msg.setDestinationEntity(142U);
    msg.mask = 160U;
    msg.max_depth = 0.231056182749;
    msg.min_altitude = 0.393366012907;
    msg.max_altitude = 0.322773883167;
    msg.min_speed = 0.788756909753;
    msg.max_speed = 0.0323146766388;
    msg.max_vrate = 0.410723161855;
    msg.lat = 0.951687791496;
    msg.lon = 0.964552313583;
    msg.orientation = 0.784902261644;
    msg.width = 0.693311469489;
    msg.length = 0.175002909595;

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
    msg.setTimeStamp(0.766746599927);
    msg.setSource(18401U);
    msg.setSourceEntity(185U);
    msg.setDestination(3224U);
    msg.setDestinationEntity(109U);
    msg.mask = 3U;
    msg.max_depth = 0.211657016343;
    msg.min_altitude = 0.39338587638;
    msg.max_altitude = 0.482776534186;
    msg.min_speed = 0.690061387616;
    msg.max_speed = 0.98410066035;
    msg.max_vrate = 0.350091551923;
    msg.lat = 0.19575336774;
    msg.lon = 0.933607798973;
    msg.orientation = 0.246903575075;
    msg.width = 0.927024926586;
    msg.length = 0.258793785037;

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
    msg.setTimeStamp(0.811219137764);
    msg.setSource(18593U);
    msg.setSourceEntity(50U);
    msg.setDestination(52964U);
    msg.setDestinationEntity(45U);
    msg.mask = 125U;
    msg.max_depth = 0.765498845298;
    msg.min_altitude = 0.930424070103;
    msg.max_altitude = 0.00315169424807;
    msg.min_speed = 0.158647149384;
    msg.max_speed = 0.651094254491;
    msg.max_vrate = 0.543914857305;
    msg.lat = 0.365473454898;
    msg.lon = 0.772598206447;
    msg.orientation = 0.866396545895;
    msg.width = 0.0334233577453;
    msg.length = 0.971110223069;

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
    msg.setTimeStamp(0.966411044168);
    msg.setSource(19478U);
    msg.setSourceEntity(180U);
    msg.setDestination(36157U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.395246317172);
    msg.setSource(35608U);
    msg.setSourceEntity(90U);
    msg.setDestination(23201U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.242030018339);
    msg.setSource(44178U);
    msg.setSourceEntity(95U);
    msg.setDestination(59517U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.250086537083);
    msg.setSource(48654U);
    msg.setSourceEntity(42U);
    msg.setDestination(16779U);
    msg.setDestinationEntity(216U);
    msg.duration = 19123U;

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
    msg.setTimeStamp(0.0484988986963);
    msg.setSource(3497U);
    msg.setSourceEntity(85U);
    msg.setDestination(62497U);
    msg.setDestinationEntity(229U);
    msg.duration = 48958U;

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
    msg.setTimeStamp(0.801824228884);
    msg.setSource(7931U);
    msg.setSourceEntity(42U);
    msg.setDestination(15865U);
    msg.setDestinationEntity(12U);
    msg.duration = 28865U;

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
    msg.setTimeStamp(0.554480925739);
    msg.setSource(7927U);
    msg.setSourceEntity(87U);
    msg.setDestination(11345U);
    msg.setDestinationEntity(110U);
    msg.enable = 227U;
    msg.mask = 4243191838U;
    msg.scope_ref = 114495036U;

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
    msg.setTimeStamp(0.121830116212);
    msg.setSource(9557U);
    msg.setSourceEntity(60U);
    msg.setDestination(76U);
    msg.setDestinationEntity(134U);
    msg.enable = 120U;
    msg.mask = 3152931540U;
    msg.scope_ref = 3848874584U;

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
    msg.setTimeStamp(0.23539910418);
    msg.setSource(64886U);
    msg.setSourceEntity(133U);
    msg.setDestination(35961U);
    msg.setDestinationEntity(58U);
    msg.enable = 91U;
    msg.mask = 1700158289U;
    msg.scope_ref = 648189431U;

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
    msg.setTimeStamp(0.172217014346);
    msg.setSource(35537U);
    msg.setSourceEntity(235U);
    msg.setDestination(16095U);
    msg.setDestinationEntity(101U);
    msg.medium = 168U;

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
    msg.setTimeStamp(0.344239166213);
    msg.setSource(27340U);
    msg.setSourceEntity(110U);
    msg.setDestination(48874U);
    msg.setDestinationEntity(238U);
    msg.medium = 53U;

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
    msg.setTimeStamp(0.454047665943);
    msg.setSource(31311U);
    msg.setSourceEntity(77U);
    msg.setDestination(60784U);
    msg.setDestinationEntity(95U);
    msg.medium = 121U;

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
    msg.setTimeStamp(0.980759249813);
    msg.setSource(62008U);
    msg.setSourceEntity(50U);
    msg.setDestination(39231U);
    msg.setDestinationEntity(93U);
    msg.value = 0.586459955213;
    msg.type = 107U;

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
    msg.setTimeStamp(0.695862158132);
    msg.setSource(15321U);
    msg.setSourceEntity(237U);
    msg.setDestination(30749U);
    msg.setDestinationEntity(49U);
    msg.value = 0.855843740473;
    msg.type = 235U;

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
    msg.setTimeStamp(0.943285066021);
    msg.setSource(26710U);
    msg.setSourceEntity(127U);
    msg.setDestination(19635U);
    msg.setDestinationEntity(8U);
    msg.value = 0.737387318593;
    msg.type = 86U;

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
    msg.setTimeStamp(0.426502923779);
    msg.setSource(12583U);
    msg.setSourceEntity(133U);
    msg.setDestination(560U);
    msg.setDestinationEntity(187U);
    msg.possimerr = 0.284149736681;
    msg.converg = 0.282924539569;
    msg.turbulence = 0.847166456779;
    msg.possimmon = 136U;
    msg.commmon = 73U;
    msg.convergmon = 151U;

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
    msg.setTimeStamp(0.93279368558);
    msg.setSource(966U);
    msg.setSourceEntity(54U);
    msg.setDestination(25010U);
    msg.setDestinationEntity(70U);
    msg.possimerr = 0.417858180394;
    msg.converg = 0.190691789657;
    msg.turbulence = 0.05051420605;
    msg.possimmon = 114U;
    msg.commmon = 194U;
    msg.convergmon = 162U;

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
    msg.setTimeStamp(0.965296985641);
    msg.setSource(59884U);
    msg.setSourceEntity(169U);
    msg.setDestination(34245U);
    msg.setDestinationEntity(190U);
    msg.possimerr = 0.955555319633;
    msg.converg = 0.808372704716;
    msg.turbulence = 0.160166303524;
    msg.possimmon = 132U;
    msg.commmon = 134U;
    msg.convergmon = 109U;

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
    msg.setTimeStamp(0.880363004768);
    msg.setSource(15631U);
    msg.setSourceEntity(124U);
    msg.setDestination(28315U);
    msg.setDestinationEntity(152U);
    msg.autonomy = 49U;
    msg.mode.assign("APKLKKOHEAWOFBWJYVDCTSHMFGBIMZTIGZNTMFECDDNTLYFYVLZSAUUCGCUFEKJWXOMCKGJRNDBNVRNPBPWISTPUVEZHKQJKQF");

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
    msg.setTimeStamp(0.181644076813);
    msg.setSource(41886U);
    msg.setSourceEntity(7U);
    msg.setDestination(55612U);
    msg.setDestinationEntity(95U);
    msg.autonomy = 60U;
    msg.mode.assign("EVEOFOPSMKSCJIXIUCINAZIBWXHHGJAVIYTCRVKSGMTTNAVYZTVHBAXURGCTW");

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
    msg.setTimeStamp(0.13988446258);
    msg.setSource(64176U);
    msg.setSourceEntity(131U);
    msg.setDestination(58820U);
    msg.setDestinationEntity(27U);
    msg.autonomy = 117U;
    msg.mode.assign("GTQVYOKWMAPLIXDPWZUBEUTPGVISMZSKNAXZBONQLBYBEPUOAVJDLGTEFAQGEHLJRCKCPFXZDZAFCMVHHJPQ");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.671192613277);
    msg.setSource(27789U);
    msg.setSourceEntity(189U);
    msg.setDestination(50754U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.364123860359);
    msg.setSource(34864U);
    msg.setSourceEntity(99U);
    msg.setDestination(38124U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.340745513383);
    msg.setSource(45939U);
    msg.setSourceEntity(5U);
    msg.setDestination(41827U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.754460973287);
    msg.setSource(23823U);
    msg.setSourceEntity(168U);
    msg.setDestination(58343U);
    msg.setDestinationEntity(97U);
    msg.plan_id.assign("BVIXWPNLFESKDWURUXUNATGQHLJYDTWSNMJHWMHMDCIJLUWGOIPZCAWXPHQVRCYLGMKBVNJEGSVZQGDMFBKPQEWHRKNJ");
    msg.description.assign("GWPQLGQXPVOWLRZLWMEUYAFJEREWIKYIAIVEWINXKSHBRJDXZSRRGUWPZWFPNLDRDWPTHSQMAAZDDOQRTCQFANDFBVENBIIHFLHDCZXCUUVOEEIWRTT");
    msg.vnamespace.assign("GRLHHRTSDELKBHJOSKYKOUOVOCHDZGBZFSKBIIQYABWSIGITMESTEEYBNDPAXMVGTXNFPPBGADSGSWYYMZJJVXXXQTMUZFCPPJLRJQELZY");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("HOKQWFMFEMSPQZGTGCXWLKGXFNRXGDIMBTLSDKHCSCEIBFEGJAFASAHQVWRROINNBPPJVPHZUPZYCVBHITOBJOXUNPLWBRUALRHCE");
    tmp_msg_0.value.assign("ZTOQCRBHPCJDRFIZQHESKXAYTLVBAPBGAFPJEFUMPKRGGWSUUGLOWJPJZRQNSHYIMNYQRNETSAGKPTLWVVHKOFIUMUGYHAWZEAYYLPJ");
    tmp_msg_0.type = 247U;
    tmp_msg_0.access = 165U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("CLGQDBTPYBYNTAXOGNYNMLXQRHLAXUQETZICKWUJTBBUTNBMYOJDVQGMNMQOBZAHSEKULNHLALZJZHSYFXMYHCZKQJWSGRIYEGEVIDZSWADNVUIIHJRFXKK");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("KHSTXLXWXNYIMOQLQSHDZKIIWOCUBJWXMEOHZTHSENPGBXMKNRHHLGGUEOAYTGKHLWBBFHOOXCQICMDRFVYKCRUIAIMKKGB");
    IMC::IdleManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.duration = 36157U;
    tmp_tmp_msg_1_0.custom.assign("EPVGLUPJSXMWVHZAOKMBNIKVENDYZZFKBCHQSSLCFXDDANSPQYFYGWGPFEMYLXRJEWPMQHPXUOUTDIDETKOAWXVCCQVRIPBSHJDKSGNGWINBKJYAMTELFKSXWTRHSLOFQIZUQFEAFZIOAUENZXTGYVPXRBJJTEYIDUIHYRQ");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("QISOVRCSQZIGJHZOUBNRHAKOIMBDMEPHTJWEPYCFBQU");
    tmp_msg_2.dest_man.assign("SEQWZXUFSCKAZNNGBCVKVGPVIFPJQGCDBGIDAWLRQREDGCFYXMSFIDMQMDLCJRRDLFOBVUPMTNONODTNOCCDYZICWMLGPOTJTTEHFMOAVQUOJQYHSJJHECETWYKKYMAYVLWKEIEHRNYJHBSIAXJWAQYATJUUSSBMBVQIORZEWLZOVLZKLQGPFVUXAYZVLSHUIEANRMRMXLKSRGXGNHXHKFPIUTIUWXXFN");
    tmp_msg_2.conditions.assign("UAKZNBTFTGWIFYYPKYDDUMBAVVQMAZTVBEJOFCIPJIIVPDOURCLQEWUVZGLXDXVNBSWGOUPBKCJXRWIEQLNXBCIEQPXQJYBCTXFOXA");
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
    msg.setTimeStamp(0.340697835047);
    msg.setSource(46302U);
    msg.setSourceEntity(59U);
    msg.setDestination(49218U);
    msg.setDestinationEntity(198U);
    msg.plan_id.assign("FNBKFDNJRXCCNGVKURDJWUQPZCQLIBMZJFTSNORICNMTOIKVXBTUAZNXFUTUXEGAHCJWPWMBBVETOSVNYHKRGYWSEUZKVMKSNLOVZDYUEDOZDHTWPMYNSCQFQCIXWAJWSHCBXYKEEABQWOHGGWZFEVLNEIAL");
    msg.description.assign("DLOZWHKZAXIOFGHFOKBQIJODQAJIEBQKLWLCHOTMEJSXSNOHUMXZLFPCSQEVWZJRPZUMDOUEYGBSXSBDICGHMNJWIHUAFYDHFPYNXUYYEGETBAVTRQKPCLJFFACCMQVMVTYTDXOHRWLNRSJPRTTKNUVVNQQSVAYJWANNHUVLBKXRTPKTCMXAYVWCZLIXRFPOBUNABCDEHGZZGLMWCJNORLIPEUQGXVSJTDMUWYGFKPYGSEGWDKBABRMIQRD");
    msg.vnamespace.assign("FZJKOQRGWHAQKXVUNFNQKBDMHUIQVZPCOJZKYNOEUAPCNRVLVETZVFTUKDOTLIZBBHDUFWBRXLHBLQOIKZASZWNEDVLKXMMMLSPLVRLYIJZUHXTKFRWJFUTYWDDNDNYGPUASPPMXNGNEIYMOGJLYEYAWEBSKTAHVSOCDAGSJRDISXBEBRFHNTHCRSP");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("LOMODZOZWFCBPCARRWFRIPUJTYFWLOLUOLLUXREQYDUACMSVRAGSKBEVPUXTGXNGGAYIZUQYJZCNQBTLCHEMMWVRKFQYKCCZPTSVQNMAWFSIXGDYBRKLDULBHGHEUSIDZGIFWFLJTHTSHKREEAEBZEPFSHYLUJWVNZUWQMCMHXBHMKCMNKQGAYIAOVZIFGVP");
    tmp_msg_0.value.assign("GLFHBFUTUUBIPYDYZAGHRSVOWUTQQFQNNQYJJPGTSOVOWPCUTMSMPCYWPLLJBBTCGRKXRQZQEGHUKVQEYHCZCXMVMXNXSCGTLJDUNVHEFIIRAHEOOCAIBTPYFPKHZZZPZKBGWDTRXBHSYNJSWJRLABULIRZKIKICTHDXGBLWNPHYAFONDYVISMQNMAEDGJPEFVKXAEWEZUJTCSXMSFQ");
    tmp_msg_0.type = 230U;
    tmp_msg_0.access = 5U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("OLZPXMYINWDD");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("LUMPYNDPHVUKLNRCPYDHTIKUMJE");
    IMC::Rows tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 31113U;
    tmp_tmp_msg_1_0.lat = 0.666998314604;
    tmp_tmp_msg_1_0.lon = 0.633745899472;
    tmp_tmp_msg_1_0.z = 0.507793223425;
    tmp_tmp_msg_1_0.z_units = 42U;
    tmp_tmp_msg_1_0.speed = 0.78949940925;
    tmp_tmp_msg_1_0.speed_units = 65U;
    tmp_tmp_msg_1_0.bearing = 0.680562141405;
    tmp_tmp_msg_1_0.cross_angle = 0.136473191456;
    tmp_tmp_msg_1_0.width = 0.277775074818;
    tmp_tmp_msg_1_0.length = 0.660319012446;
    tmp_tmp_msg_1_0.hstep = 0.584473307272;
    tmp_tmp_msg_1_0.coff = 38U;
    tmp_tmp_msg_1_0.alternation = 132U;
    tmp_tmp_msg_1_0.flags = 133U;
    tmp_tmp_msg_1_0.custom.assign("DAFOOUETUCOPJMCLTABGQSHIMUTBAVUJAXJHQSTUQWGFBSNGHSYARFKVPYBYMSRDMJSXCQKIBGEYPNLEBREQNCSWIIAKEQMPZOMWVHAHLYVVWOSLDAANMZBCXGYENXCXNUHGTTFZKXUAQTHQCFWUPJFFILTEPVRBJORDVPYKJXWXCIMUCNDDEJ");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::AllocatedControlTorques tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.k = 0.584417067677;
    tmp_tmp_msg_1_1.m = 0.215844471343;
    tmp_tmp_msg_1_1.n = 0.878228094282;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::RemoteSensorInfo tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.id.assign("MFPWPFFCWQXHYNEBXOCENWERADJU");
    tmp_tmp_msg_1_2.sensor_class.assign("NTONXWUQRCBJEKZNEYLAAKVJICOPYBXGEPSIDGBZPXQTIQUNGRPIKKHSUECTEOAQHJFWFCAWDPVHVWKRLKPZOBKTMIDZGZTMWOTUEYSSXHMGILLYQGZDPAQWREBJFCDMLZMKQJWL");
    tmp_tmp_msg_1_2.lat = 0.729521158275;
    tmp_tmp_msg_1_2.lon = 0.350230392776;
    tmp_tmp_msg_1_2.alt = 0.949411514121;
    tmp_tmp_msg_1_2.heading = 0.355238638543;
    tmp_tmp_msg_1_2.data.assign("JOBPFOPWIEWHLJIJGQUZBZWBSEQGQUWKPDWNVBKMRASQYAJ");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("GHBLCPERIZJDXKSMSXWYZBPODXGYSAQWKUPHHFIDOOBMMFHPRNXSMACVAPAEUMKLWVIZCRUKHHLBCJUBTTYGJEJKGTYAGNERNOTLEEBNXOGVUNALBYVPFSQEQUUIOZTYJRWIWVXONRKGRCPINBZEPKUWVLYGMSAXFXDHFOIYQLNSQITROBSMASMQQCSTTVDDMOWKDDX");
    tmp_msg_2.dest_man.assign("MXCCUGYUHTLUHMMBLAZREOVZSJNJXRZRJEDELLHUIDUKYEPILPCDWZVTTENYSTBSQNAEGNXBKQWKOHJGZPFYBIZJRQIGAJBITKWGTDVPOIOXJRMLLCHIQGUAHALPXFSVPIGI");
    tmp_msg_2.conditions.assign("GYJPPSUOUPISBXKAGKKASRJGBLCVRVSMYEYXJWBVFQHJDGSNYVZXBKIANHM");
    msg.transitions.push_back(tmp_msg_2);
    IMC::UamTxFrame tmp_msg_3;
    tmp_msg_3.seq = 3124U;
    tmp_msg_3.sys_dst.assign("YCKVNBSDWVDRKGPTWJSVJFZUXAXCDIKNTPWYKUIHBSQKWQUNDBAALQPUGNHHJDYYHVRIBRMFCXGYOFSRBNF");
    tmp_msg_3.flags = 117U;
    const char tmp_tmp_msg_3_0[] = {-51, -52, 10, 18, -82, -81, -100, -27, -27, -2, 10, 115, -45, -70, -127, 53, -76, -20, -53, 108, -63, 105, 0, -101, -47, -73, -96, 69, -80, -98, 106, 3, 66, -33, 58, -121, 114, -17, -8, -31, 48, -28, 124, -23, -28, -79, 1, 49, 16, -6, 80, 54, -107, -19, -2, 25, -106, 26, -122, -9, -109, 45, -111, -2, -116, -27, -39, -90, 75, 12, 71, 47, -34, -120, -121};
    tmp_msg_3.data.assign(tmp_tmp_msg_3_0, tmp_tmp_msg_3_0 + sizeof(tmp_tmp_msg_3_0));
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.88960543627);
    msg.setSource(56321U);
    msg.setSourceEntity(136U);
    msg.setDestination(37622U);
    msg.setDestinationEntity(37U);
    msg.plan_id.assign("YVGZRKWBMHQRUWBFTQNQDONNXTHFHIAJSVLAAOLGOELGROTXMBACVJMKCTOKMDIMRGEXZXYYPETBFXLDQOYJWTCCOJSNWEVHGQKBHYKDCHDHZJICLRMDPRHAHWLYPYULZJPPKKNMIZAAEEYUZNPOJNXB");
    msg.description.assign("JJDMQWZCACKZLAV");
    msg.vnamespace.assign("OLMRRRMMMJLOIPFHKSVXVQGQCAAASMBBZBDGPFUHEEPJQSDDVBNWWRFOAINSTWCOYNUCGWUXZUFJYWCUKEESXJQPXUTWDMCJABNLEYTPSVJKRDSSJXFBMQAKZPDWXCLDMITUBOGJFHGBYYKVLRTGAQOGWYTVNZMPGDPLZBMN");
    msg.start_man_id.assign("LAKBIETSWQEMYMYENNXJWAYSVVRJTHQLCNZGOUBVTIHOROCJEJFBQILTYNBDSWCYRMRBEUMPAPAVAJOEDRJMOSAFRFNXSSLQWLFSZLULIZWLIVUHHKDPYDQNBUUNMHRSKIDQFBUZGKVYHQCGNTZGHGMWAEGOAGOFZZMZULZCRXOHCWNKYXKJEFEKPGVPKUKYFHW");
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 1322923025U;
    tmp_msg_0.state = 128U;
    tmp_msg_0.error.assign("XTPCQVLBEFRDXAGVQEYIIIBEUZHOCTUNMCKVXSSNQBYYLMZZMLNZKFNWQC");
    msg.start_actions.push_back(tmp_msg_0);
    IMC::ServoPosition tmp_msg_1;
    tmp_msg_1.id = 208U;
    tmp_msg_1.value = 0.900178962277;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.514539013392);
    msg.setSource(4473U);
    msg.setSourceEntity(199U);
    msg.setDestination(1577U);
    msg.setDestinationEntity(248U);
    msg.maneuver_id.assign("UBNAZOJNYAPXKDSTXLZZJLDZSFWTLEIHFIFDFQMIANXATKHMJORZBBVIUXQNEFIMLSQWCJQPNMMYUTCQBRGZQOZDIYASCKOSDKKHLLIFOWWLCPSHXWDMBUQHLYUUGCRDDWNEBJPVHUNVVKIWRYGUFHIWMLRKQPTPGCFJGSREYYGIZXGOUBEBHVCUSFMRJACVSXRXKZE");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 64438U;
    tmp_msg_0.lat = 0.137528813089;
    tmp_msg_0.lon = 0.0339820669819;
    tmp_msg_0.z = 0.339116504868;
    tmp_msg_0.z_units = 228U;
    tmp_msg_0.speed = 0.860577248322;
    tmp_msg_0.speed_units = 209U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.916399008269;
    tmp_tmp_msg_0_0.y = 0.584817588244;
    tmp_tmp_msg_0_0.z = 0.229179032519;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("UPEZFXPTOQVRLNYHCHXNPDLMPGFBYWYRZYDMVKKKRCZIASRENVGAKWOSYHOUGMCXAZVHLZNOBDYIAPCUBIXNRJJPPINCMTHJEBILGWJZUETJIWSBEYTCKETNFCMJQKEBUQIJ");
    msg.data.set(tmp_msg_0);
    IMC::DesiredPath tmp_msg_1;
    tmp_msg_1.path_ref = 4283063166U;
    tmp_msg_1.start_lat = 0.233317715564;
    tmp_msg_1.start_lon = 0.492621413412;
    tmp_msg_1.start_z = 0.0564735625302;
    tmp_msg_1.start_z_units = 52U;
    tmp_msg_1.end_lat = 0.392251112831;
    tmp_msg_1.end_lon = 0.983529964358;
    tmp_msg_1.end_z = 0.580342699799;
    tmp_msg_1.end_z_units = 248U;
    tmp_msg_1.speed = 0.419509495049;
    tmp_msg_1.speed_units = 229U;
    tmp_msg_1.lradius = 0.710532685338;
    tmp_msg_1.flags = 234U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::CameraZoom tmp_msg_2;
    tmp_msg_2.id = 36U;
    tmp_msg_2.zoom = 34U;
    tmp_msg_2.action = 211U;
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
    msg.setTimeStamp(0.294832641873);
    msg.setSource(53611U);
    msg.setSourceEntity(222U);
    msg.setDestination(62264U);
    msg.setDestinationEntity(124U);
    msg.maneuver_id.assign("IQUCYLRZAHGFITRDB");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 47851U;
    tmp_msg_0.lat = 0.335436660089;
    tmp_msg_0.lon = 0.130994303907;
    tmp_msg_0.z = 0.742622978809;
    tmp_msg_0.z_units = 50U;
    tmp_msg_0.speed = 0.102321492725;
    tmp_msg_0.speed_units = 176U;
    tmp_msg_0.roll = 0.0702622275743;
    tmp_msg_0.pitch = 0.484127184156;
    tmp_msg_0.yaw = 0.161927036645;
    tmp_msg_0.custom.assign("JGYPPHSDTMVTTGZXMCUXSJHLPNMTCHSQROEUXWOQYZWOORJVTERMTUITSLQJWYQKQCZMQEUDMYZXNPCBJFWAGOAXYKUWACSGIZOVZLKVEEHLPUGKYWIBHDUVQPYNIROEWJKFNIVOCKBZBHFMJBVXXXAJRAMFEZSWGRXRQBFOPNHIUCAPDAYSYTKVKBAIVSKVTIGFUASLNMSLXCPOBFQZHNJBUNLETWNKRDEYHQFFDLDJDEB");
    msg.data.set(tmp_msg_0);
    IMC::RestartSystem tmp_msg_1;
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
    msg.setTimeStamp(0.533052383438);
    msg.setSource(46898U);
    msg.setSourceEntity(217U);
    msg.setDestination(5190U);
    msg.setDestinationEntity(184U);
    msg.maneuver_id.assign("OQTXPCZPAHKWMZJBFASWAXRBWIMZEAEMABTOI");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 15332U;
    tmp_msg_0.flags = 14U;
    tmp_msg_0.lat = 0.120788599656;
    tmp_msg_0.lon = 0.197290317432;
    tmp_msg_0.start_z = 0.476918731655;
    tmp_msg_0.start_z_units = 238U;
    tmp_msg_0.end_z = 0.134283220448;
    tmp_msg_0.end_z_units = 204U;
    tmp_msg_0.radius = 0.443993344557;
    tmp_msg_0.speed = 0.0118066961816;
    tmp_msg_0.speed_units = 113U;
    tmp_msg_0.custom.assign("HOYZFLLVVAKEUXCCJSBOOVOABEFVIOCUBRBFNWSHDMHWPLPTISFXCIRHSFCOPCNWSHOADJVQEXAZSFKIRUOGYTRYUGEQTDXJLBWLQGXGDNOEGFYNPMWCDYYTPKNMMLBMFKPZYQUEDGCYRPQYIAXVHAJVUXGBPVFYS");
    msg.data.set(tmp_msg_0);
    IMC::VSWR tmp_msg_1;
    tmp_msg_1.value = 0.604323495059;
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
    msg.setTimeStamp(0.299720462734);
    msg.setSource(14300U);
    msg.setSourceEntity(154U);
    msg.setDestination(52156U);
    msg.setDestinationEntity(78U);
    msg.source_man.assign("GEFZCHQSMITPMVXSWSPQJYADOEDVCGBAMGSAEZJLXQESVECXPBQVDDYEXUWARBVBBILQZXFXVFGJRGBNUIMUHMRCLJGLOZXTRJGNEZVCKTRAYWPLHBIDRFNNFSYGKNHMSTYTHUUZAWMFIFBNJCTLAWWQXYJPPNLDNJDLKMICXEKPVWMQFSUPZZTYNOCHOOKIZWCPADOTSRQEHNICKWHFOVRHSLVQRTUBYWMLOYRKT");
    msg.dest_man.assign("MEDNNKYDUQKOSSARWJFDECWGARPZBTCMCFKKHQYCILMBGNTAVJBKLBZVEDJVFMGLZURLIUSVEUJDFBYPNWCEKBMFDLSAXLRUAONADVEUTPBZSQWCOGRHEPTQOCPVOTSEJWVFIZJXZXHURAGHAL");
    msg.conditions.assign("QPEONRGNGORXKKRDVIBZYXAJMWNUXKMBDUVXYSFTNIMHDNVJOGSVIEEKGFAJZEGIRPSDVRHPPKHJUILLOSVORGJXZGGPVXOAZHQYWAJTVCVWFSRYMVSWWNBIAWAWCIDLHORTMUKTFPEZBESTOTUXMQDLLTDUPBDCPZLQXEDWLLAHTFRWWYCYNPKGQYPKDMSTAEOKMUMYILCHZ");
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 32U;
    tmp_msg_0.value = 76U;
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
    msg.setTimeStamp(0.454814133638);
    msg.setSource(10411U);
    msg.setSourceEntity(52U);
    msg.setDestination(34647U);
    msg.setDestinationEntity(16U);
    msg.source_man.assign("KIRIKTMZBGYKXSNODLLNYOTCAMLKYHLAZHLKQHVCICTJTMRENFFWGYPAVOJXEJMRQPUPGFSUODHXSUJFQIXGXZNOJRZTRBPQEJTBMUDQCCSVSFFTQPPMVOWTABPHOFEMTZMYXNIDEKSXZQBGKZWHWPZVBQIYDXENWDJTHDM");
    msg.dest_man.assign("NYHUXRWYWJINETDWLZYMWOQIXDOIFEJHOGTHJSRABLFYWXFZDMJPPUKIGDFFKZJEGVEOIVAHMGBXRMFPDCNVZHUXRYQIQXZPHFIUFVHZIBTBRNLPLXWULTRMMLRNVCGDAEEDMBSAQIWROVOYNOQLSTSNCTSXZFKVQWZSOMS");
    msg.conditions.assign("JKNWGIPSNDZVURJNOQMIAFQKLZKOUUSGPRUXCTGOHRWSXEYFCTOGWFEJOSGHFDXZERDWJVVMRUBRXLTAOKGYFPIGNQELPEIHZCHNACSLXQIUDMDQVREYSKTLWTQDOJPGBYFKHYYQNPHBLXHBPMXSMABXNCTRNRMVAWLJUZMOADZVBZDVMQFYSORPQSIFALCMNWTJYJNXUJKMHWCABVJLE");

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
    msg.setTimeStamp(0.199809518779);
    msg.setSource(9912U);
    msg.setSourceEntity(88U);
    msg.setDestination(43233U);
    msg.setDestinationEntity(77U);
    msg.source_man.assign("YAOWREZUXGQSWPJIKCKOFHALZVWSXJOVGEZDMSTFKSIEZOKULCAZKOHOTSPKZPLIEGGHWZVSCDWNOBAMGUORLFWJCBBXNZDNBTGUXRPFQYEAIMBUWNRAWKFAGHYCJXIWZZCABRRPVXFNEQULYJRHHKRHCPHUOSBLBYPCUXMTNVVKICMYALQTNDSBREFYGJEY");
    msg.dest_man.assign("IJKCAXEOBVFPLGPNTUSZL");
    msg.conditions.assign("QWYOQQMGIMKESQXOQMNHUQZZFKWPPILRYLBUZUMFNADTZYCGRGQSNPIAMPSBWHCWKJPAVTHLBXRQJKHEVDNSVNDLVTHLTGBTON");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 47279U;
    tmp_msg_0.custom.assign("FVIRQGGGVXPLRGFCKR");
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.785634408803);
    msg.setSource(44962U);
    msg.setSourceEntity(16U);
    msg.setDestination(60169U);
    msg.setDestinationEntity(57U);
    msg.command = 68U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CCIRQYRGZQLTOQCOOILGQCJCHTEOVBKRPERFHZNINFMVUXSEWNDVVMDEHVNRSZUFGWXEBUKAWKVUJUHPAZGDJVBZMEVWCYQICRKJBYNLXPFJCQPHFYEDDOTGEARSGIDBFBYSQSMGJPOTPBMZQDPSXKQWIUUKCRTXSGUEZRXFGWQHLZBRNDXGAPNWOWAXAMHLHFD");
    tmp_msg_0.description.assign("ZNFSWYVDYWOEHKYIHTPBVHHCAUSFFOJHLELGIRIEQCDZLGVYACMYWJPZOKIRJQNEXMCUVZQNARTSDWVTGXFBAPQMIGYHQEMBPAWKR");
    tmp_msg_0.vnamespace.assign("XNIMWGHGYWNKBDTSOJZLZLJYWPRZXNKFCZVKGTBMQADX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VMZELCPXCKKSWIDCJELPOSHAGPKCKZVJAOWKUAPQXIGZTFNHAXGBJINQXDRYAVTDNMQVIRKILJYBUYBGVELJSMAINGYEOGDDHQWDNYHBLVXHMGZTNBETKCVRSXUZXYWVRPOBUHMAUWLUCCOJPDKSYHEBFSONGGCRQRQQWTWBMPHTSOJKALORWBDULRFFHUECBOFIKIXWMZEUYFMNDLE");
    tmp_tmp_msg_0_0.value.assign("BSOZRXSQLJXNXACNIBRSYKKGTNUIQMMVISRPJUWEUGWQYDALYTCUDJYCFSSWOHCCEZHKKXMQSJPBYDTSNBEVDJNDIUABRFDZBUQKPXQYZHMFVZTKEAYLWMWTEYRAXYNBKJLCXOEMFNFAJKMSSH");
    tmp_tmp_msg_0_0.type = 194U;
    tmp_tmp_msg_0_0.access = 227U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TAMHOCGDHPBKYYSQGLANAPAZ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("JRWMUYRAHSRRJNAKDWKGSIIVERPXSAETDNLZGCSLPVDMFLIGDPJFCKSQYEFMHOGCDLGQEQHDYTBYXHBYPPVZLPXYOZHZZZQCRMTEOWNKOWLUWBQFXUOTEJGZGVNCB");
    IMC::FollowPath tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 51175U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.812158030017;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.46162231071;
    tmp_tmp_tmp_msg_0_1_0.z = 0.0504982849247;
    tmp_tmp_tmp_msg_0_1_0.z_units = 234U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.0932195554122;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 200U;
    IMC::PathPoint tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.x = 0.75896219627;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.y = 0.18790283507;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.z = 0.0998320468007;
    tmp_tmp_tmp_msg_0_1_0.points.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.custom.assign("IHTNGKIGOCZTIPFQXNRZLHVPTBZHZUBXLZIDFVKKXATDSBKQSSTZSCWWPRJJTIJCCBMGFCOXNJYQFADKCRVVHOACGHQUREMXHDWYZPUSXNZQZUQGYDBKYJNPXLYFBNYWMYTEAIWLRGVYRDWAVXJFYRGCE");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::IndicatedSpeed tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.value = 0.387437613917;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::MessagePart tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.uid = 253U;
    tmp_tmp_tmp_msg_0_1_2.frag_number = 208U;
    tmp_tmp_tmp_msg_0_1_2.num_frags = 187U;
    const char tmp_tmp_tmp_tmp_msg_0_1_2_0[] = {-18, 55, 51, 101, -109, -106, 18, 18, 114, 22, -51, -41, 34, -84, -55, 19, 96, 35, -19, 121, -85, -90, 6, -61, -117, 39, 73, -121, -13, 59, -98, -25, 87, 123, -85, -65, -41, -8, 74, 61, -68, -85, 97, 45, 92, -55, -1, 21, 7, 35, -105, 67, 84, -34, -57, -63, -63, -23, 56, -27, 52, 41, 52, -75, -15, 111, -67, -98, 106, -61, -81, -46, -20, -74, -117, 10, -98, 95, 2, 113, 61, 89, 64, -120, -28, 52, -124, -92, -9, 53, -90, 55, -52, -59, -91, -72, 10, 119, -24, 58, 6, -120, -126, 71, -108, -105, 116, -34, -107, -41, -105, -79, -114, 11, 21, -115, -102, 30, 98, -67, 71, -112, 22, 68, -125, 26, 112, 44, -88, 72, -115, 92, 109, 123, 36, 35, 43, 46, -127, 17, -116, 15, 126, -111, -18, 91, -57, -24, 112, 66, -39, 45, 26, -98, 89, -46, -78, -64, 13, 111, 16, -19, -102, -88, -36, 84, -76, 22, 10};
    tmp_tmp_tmp_msg_0_1_2.data.assign(tmp_tmp_tmp_tmp_msg_0_1_2_0, tmp_tmp_tmp_tmp_msg_0_1_2_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_2_0));
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("KKQUCDJERKFOGKUMAARQRPYFXJCWLOXEYVGOZWMCRVSKWZTBRAIUFUZHJVFSJIDICPZBCVSMCNMISKCINGMLHHQDLNYDYFKVOGFQARLCVMCOOHWZROTTZAPUUSTAAIY");
    tmp_tmp_msg_0_2.dest_man.assign("LYNLWIJPODLVGYZZGDRDOVM");
    tmp_tmp_msg_0_2.conditions.assign("EAXPEXHIFWJHCDAQRDMXXOAPBSEQNHZH");
    IMC::ServoPosition tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.id = 3U;
    tmp_tmp_tmp_msg_0_2_0.value = 0.0147160571413;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::DevCalibrationControl tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.op = 240U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.252960078714);
    msg.setSource(38461U);
    msg.setSourceEntity(212U);
    msg.setDestination(36676U);
    msg.setDestinationEntity(234U);
    msg.command = 201U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VPAOXSBTYXKDUJMOFIMFRWSYTQPTDMDLJCJNYLQBKWNYLILDHJVPXSAJREECNMGVXMFTDRJOSTGCOVUULNJABGLTQMZQONNYZIBHROIUDPJGKFLRICKDZDPEVKKTBWIBPQPSCNKQAGVZRHWTERHYHSRQAXIZCGLUHAEHFZZXBMAIIMMFFWCXVZEKDVGPABLFGWUJUPDSNABHAZWYSOKXWVNQWREGEYOQQSRIUEZCXGOEYHHNLTB");
    tmp_msg_0.description.assign("ASDRMMBJKGRIODLGUDPRFKOIWOBVVTBDOJKLHSVFXCDYAFHKADOEHCZHLBGXCMZUTZSWGZMMMHGPXXJH");
    tmp_msg_0.vnamespace.assign("GTKQBFNEPRTIFZRNFGKCZEVIMNHYXMYVSRFRAPTCJNQXWAGECZWVOOFBLMNGKUDEYLXWMJSXRJXRSWUQYXQIRPMDWOFYADITJYFSJNWUWXAHPLPIZEUTUBLEIUPQVHYOLSAHVOUOZQJJGCRKJYTYOGNDBASSXDBCSPCUPAIMCGKJWSADUTQGMNBLRFOGVMMVAX");
    tmp_msg_0.start_man_id.assign("YZFWKGMBUUSILMYACQOTOJIJVLAAHLYHWTXOZRKAGTGNXRUUPJHGXNZQTINXSBCPXVQLKZRHFLENLHHSWDJQMWXOE");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("FOWKUSYCUPBUBNBMEVZGIWLDFTXEEXFVI");
    IMC::Dislodge tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 56050U;
    tmp_tmp_tmp_msg_0_0_0.rpm = 0.412597477487;
    tmp_tmp_tmp_msg_0_0_0.direction = 158U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("IJFAAWHCCYQSPKPACMCOZCFNYWYHWBWCDVQIWFFNRBFPLMGBHXACAHEZQUCYU");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::FineOil tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.0164998161113;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::SetLedBrightness tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.name.assign("IRBXYKLQOMWFTVHSCJAHURUDAOHTEFITAWZAJKENPDYQVFCIDHVABIDPAAFSKDSVRFJEYNVMHZFLMQPBTLXBGEYNZXHZXTVQKQJEBGJWLKEQUTSXOKUUSEILVKQXRTSPGZMYXGJFWMFXZUMXLNJVEONXGTSYFPWIPMBCDPGDNRZPYOSOOLVFTKRCINHCHMNLUYHZLUWVZWY");
    tmp_tmp_tmp_msg_0_0_2.value = 78U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("NUOMUHNULBODULQZKLRHCWSNEDOZEZGIGVKVBBWSIFMOYSDHYPZVGRBMHWHICLIWUIHQZNSEXJB");
    tmp_tmp_msg_0_1.dest_man.assign("OGIKUHWRCMWSNSBGEHLLXUJTMIKKFZHOYEDFAAKTWAFTWLDTDEBSWBAPCYQPSGOVGLPSUHYCFZEFVDDMPVJKRNDSQRFLQZVIGBEXRTJBRTFSZPHFWQTRQURBDBSYXRSHLCGYKUOUFCYCJBIIONYLVDMZSXAGUAIZRXERGMQHJOPLGJKEBOQDWTPTKJXVPXHXVPMMOAYENDXCWNEKQPMGLCZCBMVWNANACMJAIVNNUHKZHZQ");
    tmp_tmp_msg_0_1.conditions.assign("RUHGRZQNZMQSBBKLATJGNPYNBETDWFHFQMBMDVWOJMKCOEERHPOXGTXUNYKUOESXARELLCIGETYOJZYLKEBAIMONPRBFZFXHAAGRNVWXBJGDMTLGVYYXWUDAVZLRBIRJCQWDFGHKPQSDEFU");
    IMC::PWM tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.id = 160U;
    tmp_tmp_tmp_msg_0_1_0.period = 588459303U;
    tmp_tmp_tmp_msg_0_1_0.duty_cycle = 1694146993U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.x = 0.0607479394117;
    tmp_tmp_msg_0_2.y = 0.69167948298;
    tmp_tmp_msg_0_2.z = 0.294089862311;
    tmp_tmp_msg_0_2.k = 0.443981055701;
    tmp_tmp_msg_0_2.m = 0.492843141486;
    tmp_tmp_msg_0_2.n = 0.37509440106;
    tmp_tmp_msg_0_2.flags = 179U;
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
    msg.setTimeStamp(0.750792868259);
    msg.setSource(1022U);
    msg.setSourceEntity(202U);
    msg.setDestination(7358U);
    msg.setDestinationEntity(142U);
    msg.command = 149U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TCIUNHUYAULWGPVIGUXQYCZSJWQWSDBWQZMDDHBYTOQPUKJSKPFJFBTOWZYRECDGJCZLEMBTEOYMVLVNZGFRJLRKSFEWEBKHFWJRALXUYDNOZCADHAMOTWLIVSHCFXHSVFASISNMKIUPZURNRRHTQYBPUQWGAMVBPRBGUMNIEKFXMELXELLGSLQAEEMZGPNQFZXQAK");
    tmp_msg_0.description.assign("PERAIVEIELTBRWHZDGJTRXWOORUDYCYGIIPFONSJKVBGVKAONTCUUQWDTFMFISFAEQPKGMBGUSZWHIAJWXBROGLKHFOMGYS");
    tmp_msg_0.vnamespace.assign("ZYVIUNKAPQSOBDAGVBAVMQTIMLWATBFODRZFOGYJLDVIMMXIFMJQBSHYYCUJLFUHFRDELFNKXJXVPDG");
    tmp_msg_0.start_man_id.assign("QGNGPEXLFKBBQKODAKNEDOWAFALSFUCMBWRBLSYNNTCUQFUEWGRAMICMFWLXRYZQDQVEXBCTJOTKXVHILXQYSKWGGURNNLTOJNGFQSJUMWY");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("UQYCJVYOOWFYNVVCGJRUATUGJKELBFMMEDPSXWLGQAGUUVHARQTLDOSBFIXTEERASGZKSMBXDUZFYMVANSCHYPDGGHOUCTGXT");
    IMC::FollowTrajectory tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 22187U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.77636601696;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.56025274398;
    tmp_tmp_tmp_msg_0_0_0.z = 0.0523961785728;
    tmp_tmp_tmp_msg_0_0_0.z_units = 250U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.405641319793;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 80U;
    IMC::TrajectoryPoint tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.x = 0.945792983106;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.y = 0.351850875409;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.877349766846;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.t = 0.705736482487;
    tmp_tmp_tmp_msg_0_0_0.points.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.custom.assign("IUKIHLMOSKJKGKNYNSTAKIVMTELZRRTEYSWCGTROJNCVQQISGGRMSPXBRJZXSQHPVOIBKMWFADUFUDAFFUFJMPJZCEMVLRO");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("RJPJEPDWUXQGAFHXHBSHZPWKKRHHDKTXEOVAWWGNIRMFIJINYCXPYNEDFTKSXKSNRJQDXGFXJZYOPYEQSXMXMVRLINPSCGFSALVBBLOAVZNEASHGTBTLLIEHJQJLVZQWFUOKWLORULFGRKIDQCSUCWSCICGGYPFRBQ");
    tmp_tmp_msg_0_1.dest_man.assign("NRBYZALZZESNWHQCUDPD");
    tmp_tmp_msg_0_1.conditions.assign("RKDMJKBJWPIXNCMRFGGXCMAPBFBAUFICPEDOTMOLFTUQLVSXJGODXUAEZJHNFOCTXBRRUXZOMCBPBIFIYQDNTHCMKXHPYZLLHZZRQCIEZVQSWDAKQWBPNONLTMHJVSSNLCUPGAKBEIHTEYVUWNWIKUNOLEWUTWFFSGUAQSIAHSTYIAZGYKGPEEBOHQYKRPYHEXGNDMVDZTXZCOBVDUNIHQRWDMJGDRJMSR");
    IMC::Dislodge tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 52657U;
    tmp_tmp_tmp_msg_0_1_0.rpm = 0.755087671297;
    tmp_tmp_tmp_msg_0_1_0.direction = 95U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("BXEPXKTLJOUTCZEAIEXLGBAPEMLKFRFXOWGZMZQOJFGBDCHCMX");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::ManeuverControlState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.state = 246U;
    tmp_tmp_msg_0_2.eta = 34914U;
    tmp_tmp_msg_0_2.info.assign("KGCRITQSDOTKBXWAROVXTXIWGEFSDHNSWMSOTECPCLENWZYYXFJORPHYVKFJGTSRVPJNECHCLVKRCZCLJJAZNAFUQGWTBQZIECYXZRDUNFYEKZOMPI");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.00333885502667);
    msg.setSource(40487U);
    msg.setSourceEntity(240U);
    msg.setDestination(1468U);
    msg.setDestinationEntity(122U);
    msg.state = 35U;
    msg.plan_id.assign("YGSDXBHLKENKVOMONVCGHQPISQXPUCITDFDBGHSUUSZLHJZFFQSECOPEHPUDJBWVYUFJBNQLPVYAATSVWXBA");
    msg.comm_level = 201U;

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
    msg.setTimeStamp(0.044567487283);
    msg.setSource(34667U);
    msg.setSourceEntity(252U);
    msg.setDestination(54815U);
    msg.setDestinationEntity(31U);
    msg.state = 50U;
    msg.plan_id.assign("JWYHCFVJKIGSSXMWZNOLDBXRPTJFJFGZLSVKAVMSHQBHSRTTGAOXMEKYYPERDJMSHQFSAMHCPDPEOBCKGBPMBMXJPUWQENVXRINANJBTWNUCLKUFRVAIYZPYRNDQSOVVELHFKZANGDECYGQQLWHQFAQQ");
    msg.comm_level = 88U;

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
    msg.setTimeStamp(0.114152510084);
    msg.setSource(39919U);
    msg.setSourceEntity(242U);
    msg.setDestination(6375U);
    msg.setDestinationEntity(209U);
    msg.state = 126U;
    msg.plan_id.assign("MTVRWPXONQKPMDPAGXVNGZLJWRQKHNFVKEVYOSYCWTMJC");
    msg.comm_level = 107U;

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
    msg.setTimeStamp(0.921002351077);
    msg.setSource(49329U);
    msg.setSourceEntity(63U);
    msg.setDestination(62188U);
    msg.setDestinationEntity(20U);
    msg.type = 231U;
    msg.op = 36U;
    msg.request_id = 44706U;
    msg.plan_id.assign("SNDLWPYJZMVLGNQHGPIVEUIYSHRSJBGDPTKVEQQQPXZORHRMKRRYTTFCRFUVYTVXARSSELMNQQHPYLFZHXPBNGDSOLGYXZKAVTUQGLEEZNMRBEHIBMWFAOZSPWJFMKODHPIACTFIUBZDWVHTYWGXEACDVBZFQIHZOFKDJEYOXLQXUFDAWMWDVQKIABLDNSYPJLMMUJICNMEOAHVUSIKNBWLGCJAGXJXYKORFXBEBJIZAOC");
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 40232U;
    tmp_msg_0.status = 12U;
    tmp_msg_0.text.assign("DGCMPKNTRWPMQEGAJEBZIODWKGLNKCJXRFGNVIYHCODQEMAZMQFCZDKZSWKAHDAXLNBHRBIECARUTUNJLMXNSTJPAHOLRQQVWRYQBAHTDEEPYDJUTSUTXOIJUWFIPGZNTSPFTFEALRXMNSVEZIWBOYIVLTLPW");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EXMURGOHGZMJECSOTSTQCYNPIFMVIOHLGDQRBUKYPRLGWNVXVPR");

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
    msg.setTimeStamp(0.943577278867);
    msg.setSource(56416U);
    msg.setSourceEntity(46U);
    msg.setDestination(4350U);
    msg.setDestinationEntity(29U);
    msg.type = 12U;
    msg.op = 45U;
    msg.request_id = 62899U;
    msg.plan_id.assign("YKTDLWYIADVRFADATCXDPPTCKSOZBUVYLL");
    IMC::PlanControl tmp_msg_0;
    tmp_msg_0.type = 58U;
    tmp_msg_0.op = 165U;
    tmp_msg_0.request_id = 57857U;
    tmp_msg_0.plan_id.assign("GJRJMBSNNDVUETPDAQXUIUSLTAZZYCCDVBAVDMBRXJEVIKWRCRYZIQIHALHVVOWTNOBJFIGHWSCVNXCDJGMTYNRAOEWQRFGHFTOABBBKEGGYMHYKHHQKMNCOAFYODSJOHPWWKNLKBYUMJATUUFLXJQPSIGITXOZNEPQFAFZTXMTKFPODSUEGCZZBDIXQDYAVLSJHPZMQWKYLRIHCEXSWGPPPOEQNIWQYTEKEULXNKFFLCWDSZVMUSRXM");
    tmp_msg_0.flags = 34521U;
    IMC::PlanControlState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 238U;
    tmp_tmp_msg_0_0.plan_id.assign("AHHIIQSBDZDIEGGKJSBXHPZSWNQRIYENEOBVIWQCOZPPMLTSWWZGERAYHUUMAXOCLOCKJCLLHUERUCVAGKZEYIPRNHFGNXECWSGTVPFPHSXQYOQZZDBCBQKFJLTALKNNXXIJOVMUUYTMTCNIWPEPBRTRUDYDFE");
    tmp_tmp_msg_0_0.plan_eta = -391062019;
    tmp_tmp_msg_0_0.plan_progress = 0.58593934317;
    tmp_tmp_msg_0_0.man_id.assign("DMHGEODVIRKRRVHKFSCNAKSNTXNJPBTGNARXDXXQASWHBRJPACUYEPDBGWWDEFALSVFGZIPILXXOLOLFFJKVLNTMUXLEZYISNQXMZUUMEYHWHSYUFUMBCDRVTWVIOSPAAHTWYQCPFJDTZH");
    tmp_tmp_msg_0_0.man_type = 18582U;
    tmp_tmp_msg_0_0.man_eta = 520233207;
    tmp_tmp_msg_0_0.last_outcome = 44U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("CHQOCMGRHRPESRJYBFFNBTWQVKGZLOWBPQPBMTUEDKGUYOPKSULOFWWFIQRUTJGEAFXGJULSALEEQKEMSFJHVRAVPIVZKVTHXSFMIVJLNNKVPGBEYHYCJKDHBITCBYBNDMQHVRQYIEFDLIMZWSMBDCLDFAQNZZNMYHXTXZBUA");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GQXXJSYXDAGOBIMKTWEJBIHRLLXNILKRXNPFEAPLRXEYZWXQTVWAHMANVTSBCRZZJIELUSPLKYPWKPZCRMRXQUAUSWVKQAVEKXVBQFXRCJZORVGBNBLNOMGHYBDFMDPENSDOZPKYLZQUSUOGOOHADNETAWVUUJHIIICTCYMTEMOGCECKPTFSWJMZOFCITDBDYVWAUJJQTWBDTYNHHZFGSPGM");

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
    msg.setTimeStamp(0.808321426062);
    msg.setSource(11595U);
    msg.setSourceEntity(40U);
    msg.setDestination(28969U);
    msg.setDestinationEntity(19U);
    msg.type = 187U;
    msg.op = 106U;
    msg.request_id = 2059U;
    msg.plan_id.assign("YOJTLEKIVUXANHBGLCLJPBUSMPNNPPHERAOARQAGFJNCUCOQRXELBEHZOKIPCUNVZHTESWOYYZVNKUILLFFTJPDZGHFMWJAZLHDIZKKWFUSBMGCWHWYJFOMLVCXRUTWYDTJMQMIKENXICSBBDHXOFDRQJAVQTMRKOYZYRGNYPAKVUTSYUWRVJEIUSRCLQKW");
    IMC::Pulse tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JVJTDHZSDXMXCKELONLGQJSTURFCQRXN");

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
    msg.setTimeStamp(0.382803143677);
    msg.setSource(57364U);
    msg.setSourceEntity(214U);
    msg.setDestination(8443U);
    msg.setDestinationEntity(65U);
    msg.plan_count = 52588U;
    msg.plan_size = 59561309U;
    msg.change_time = 0.162442551839;
    msg.change_sid = 51075U;
    msg.change_sname.assign("CZPSBNUDRLXFZBGIWNIDXVFVJWTBIPPIQDUUGWLKHGWDLVRKYHWCLXVRIRIBLDECLQLANKMUQ");
    const char tmp_msg_0[] = {122, -122, -79, 122, 76, -5, 95, -116, 112, -35, 75, 4, -96, -23, -52, -1, 113, 124, 3, -74, -32, -87, 31, -94, -66, 113, -20, 25, 119, -80, 33, 95, -1, -118, -14, 98, -70, -84, -37, -1, 59, 121, 114, 115, 10, 120, -84, 60, -7, -37, 19, 52, 13, 34, 2, 8, -92, 90, -47, -58, -90, 101, 115, 13, 106, -81, -84, 44, 69, -103, -123, -4, -8, -5, 16, -16, 67, -8, 1, 45, -22, 116, 35, -117, -11, -109, 79, 9, 45, -82, -20, 90, 120, -69, -9, 74, 60, -57, 114, -4, -112, -106, 26, -14, -34, 124, 30, -123, 45, -27, -91, -59, 124, -4, -99, -116};
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
    msg.setTimeStamp(0.117505353777);
    msg.setSource(56140U);
    msg.setSourceEntity(32U);
    msg.setDestination(25980U);
    msg.setDestinationEntity(93U);
    msg.plan_count = 979U;
    msg.plan_size = 2986844812U;
    msg.change_time = 0.68708189776;
    msg.change_sid = 27099U;
    msg.change_sname.assign("YQFAVCPOKQEPSPUQPBBIKMEUJWNOMDVDRXBZFFNSTDCSAVYGTMQTGBNFPUUIHKFSNJVJHNKLINMIWTZRQXRGBTCUPKKFGCWEOMEOUAWZYLWOWGVLJXGAIYSOYITXHOKWSWOIVVVHBEJQMXNVEZGHFHUYDJZHXZRPTQP");
    const char tmp_msg_0[] = {-69, 114, -39, 16, 74, -13, -9, -55, -115, 27, -47, -79, -11, -127, 26, -91, 2, 120, -102, 31, -53, -24, -42, 31, 66, 53, 91, -120, 94, -12, -64, -34, 24, 53, -37, 114, 19, 111, 84, -23, 113, 19, -83, -6, 101, -65, 113, -43, -12, 53, 22, 111, 86, 16, -125, -122, 49, -55, 32, 122, 52, 107, 3, -103, 52, 14, 74, -7, -68, -8, -39, 47, -93, 86, -54, 77, 116, 62, 52, -114, -49, -63, 38, 106, 82, 50, -85, -88, 110, -87, 111, -31, -75, -86, -53, -89, 22, 53, -40, -122, 78, 12, 23, -8, 13, -114, -61, -35, 123, 12, 79, 120, 50, 74, -120, -28, -39, -32, -104, 98, -92, 64, -62, -125, -18, 46, -4, -86, -100, -90, 116, -73, 6, -115, 82, 14, -89, 7, -95, -85, -5, 112, 97, 12, -71, 24, -124, -66, 32, 6, 53, -127, -4, -79, -121, 75, -93, -1, -110, -29, -50, 63, -128, 64, -127, 36, -25, -5, 99, -119, -4, -58, 21, 90, -63, 95, 96, 10, 5, -18, 4, 116, -79, 91, 54, -55, -124, 69, -2, 71, 3, -71, 4, -50, -41, -61, 98, -5, 69, 94, -5, 87, 50, 77};
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
    msg.setTimeStamp(0.442878532915);
    msg.setSource(38370U);
    msg.setSourceEntity(98U);
    msg.setDestination(19095U);
    msg.setDestinationEntity(23U);
    msg.plan_count = 56691U;
    msg.plan_size = 2774425713U;
    msg.change_time = 0.433037435035;
    msg.change_sid = 32268U;
    msg.change_sname.assign("QEBJJPGVBQUKNIKWRTOWMOERVXSHXGQZAGOAEUDXNQQLRHNJOX");
    const char tmp_msg_0[] = {48, -81, -120, -109, -103, -17, 63, -19, -12, 124, 49, 74, 38, -60, -13, -104, -86, 61, 113, -15, 100, -80, -108, 82, 57, 99, -98, -8, -18, 46, 76, 15, 53, 44, -112, -96, -97, -128, 55, 4, 5, -119, -12, 100, 81, -87, 35, -112, -103, 53, 38, -120, -79, -72, -17, 123, -126, -92, 48, -9, 32, -49, 62, -54, 6, -99, -119, 76, 31, -115, -97, -1, -106, -31, -91, 58, -80, 12, 56, 121, -79, -16, -125, -19, 34, 76, 20, -128, 85, 9, 109, 126, 67, 81, -125, -113, -91, -23, 118, 95, -98, 31, 4, 119, 97, 82, -51, 110, 55, -121, -15, -32, -93, 112, 11, -64};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.314112905796);
    msg.setSource(12912U);
    msg.setSourceEntity(247U);
    msg.setDestination(25654U);
    msg.setDestinationEntity(54U);
    msg.plan_id.assign("YIPVZIDPEYUSZQOCMHALHURCGIKTFTOMKTWVAMCCGDJZMFZAZXQPGEYCPQXYFWHEMLYTONVWULDSHTMJLPVLFBLOFWHNAACUQNKYBDBUMNEKSPWXXFHXVLQEADKUVWFKYPATZXPBSFRUSAGQIILKDCLBTNBRVJBRMEWRJDKXYZNHXTJSDVLAQZXAJDRESWSFCHWSHCVTQONVRMJNCFGZEOYIBPDPOIJNIRORUUQSEGRU");
    msg.plan_size = 63101U;
    msg.change_time = 0.753309183825;
    msg.change_sid = 36388U;
    msg.change_sname.assign("TZGBYRIWZOELUOFDKHHCHGQQUWIXRCCPMGLIIRXVSQAFZPHYMSWZFAXDLLXHUEVRCVWDKHPZPGMXOFERUQNFPWKZNJUJVVDALKATKOAWCK");
    const char tmp_msg_0[] = {34, -12, 119, 7, -59, 11, -44, -114, -89, 79, -104, 15, -76, -103, -4, 52, -127, -117, 2, -1, -9, 5, -24, -110, 73, -72, 50, -33, -37, 47, 10, 14, 115, -66, -81, 91, -113, 26, 14, 116, 113, -13, -70, 22, -63, -87, -124, 119, 88, -127, 124, 105, 49, -55, 24, -58, -28, -70, -20, -76, 1, 17, 125, -22, 79, 30, -83, -47, -99, -41, 20, 30, -45, -113, 41, -80, -85, -5, -95, -10, 74, 114, -42, 86, 52, 17, -71, -25, -20, 30, 30, -113, -123, -3, 110, 66, -75, -94, 8, -81, 59, 81, -108, 102, 105, -115, 93, -20, -64, -44, 81, -24, 14, 24, -32, 34, -22, -61, -1, -105, 36, 18, -57, 27, -2, -84, 50, -118, 9, -97, -96, 112, 77, -105, -36, -58, 12, -125, 85, 78, -111, -78, 8, 113, -81, -18, 34, 118, -128, 10, -98, -106, -106, 97, 115, -72, 56, 36, 25, 7, -78, 76, 35, -68, -81, 69, -77, -6, -78, 106, -109, 108, -47, 33, -45, -128, -78, -73, -99, 19, -14, 105, -54, 43, 0, -27, 83, 8, 98, 92, 96, 12, 80, 65, 91, -90, -36, 121, 101, 38, 110, 67, -71, 22, -53, 77, -62, -5, 68, -20, 40, -69, -56, -57};
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
    msg.setTimeStamp(0.106559715002);
    msg.setSource(20155U);
    msg.setSourceEntity(29U);
    msg.setDestination(55201U);
    msg.setDestinationEntity(75U);
    msg.plan_id.assign("OLNVODTOXCOFBAMWVQNSDBHABNKBEULIHLZAFGLGEVKIEQCNQMBKCAMBJZL");
    msg.plan_size = 17948U;
    msg.change_time = 0.296809248677;
    msg.change_sid = 18475U;
    msg.change_sname.assign("IFISRAZZJZCHXGGAFKQITQLNVKPJDLMLDSRKJYEMAGUJIHQOOXUXZWWFBUESDDBRCXMRUKBHSGWRLZNCRJQTJPLNPKEWKMTFA");
    const char tmp_msg_0[] = {76, -41, -96, -79, 115, -121, -127, -99, 106, 74, 22, -26, 80, -23, 72, -115, 107, -47, 85, -80, 107, 105, -116, -102, -65, -97, -25, 2, -76, 91, 38, 108, 80, 87, 105, -93, -77, 89, 57, 36, 25, 114, -19, 14, 40, 106, 102, 75, -67, 42, 112, -77, 22, 44, -93, -46, -60, 68, -42, 62, -52, -94, 2, -24, -114, 113, 76, 81, 115, 104, 73, 16, -103, 0, -8, -87};
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
    msg.setTimeStamp(0.541445409176);
    msg.setSource(13019U);
    msg.setSourceEntity(96U);
    msg.setDestination(14896U);
    msg.setDestinationEntity(241U);
    msg.plan_id.assign("BGLLDSWSJRQZGWQLICOJFPJFAMGWCEBDHACZAUBKQNTGVSCYUNIVTDTQJTWDDKDOOROUTTMOMIPXVAWIOKZDESVUFAOKXQZAJSNPZCQYCKHLSRYDYVYRNLYFGYEXTBKEZFLEQRTPASZIBZQPCINZRECHHUIFXVSXXOSMXFHJNWIPKRGROJHLGQGUXPJEPANMIMKHKAEBTDWXSFGJZWEMHWQRTFYFBMPNPUCDXNBUCYLW");
    msg.plan_size = 13474U;
    msg.change_time = 0.183313431979;
    msg.change_sid = 30223U;
    msg.change_sname.assign("JYEMNBKJCGCWATOESNPERLCQINSYQOUEXVLWIGFYNCXUPOOFOTJSH");
    const char tmp_msg_0[] = {86, -40, -18, 70, -88, 82, -9, -88, 95, 93, -88, -111, -58, -57, 85, 17, 9, -110, 68, -39, -120, 32, -48, 72, 82, 15, -62, -56, 65, -54, -22, -113, -47, -93, 91, 42, 33, 16, 99, -122, -61, 60, 25, -86, -24, -90, 119, -21, 40, -37, -40, 80, -116, 112, 3, 113, -115, -103, -54, 20, -5, -46, -80, 26, -46, -29, 39, 91, -73, 24, 1, -12, 19, -104, -55, -37, 84, 47, 24, -65, 81, -122, 73, -82, -95, 123, 81, -57, -65, 69, 96, 58, -61, 84, -81};
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
    msg.setTimeStamp(0.515591689416);
    msg.setSource(4454U);
    msg.setSourceEntity(60U);
    msg.setDestination(15533U);
    msg.setDestinationEntity(148U);
    msg.type = 56U;
    msg.op = 63U;
    msg.request_id = 50102U;
    msg.plan_id.assign("HRICUWKQKATGFVQNPUTJOVJTBMOTCQAJJCQKIHHENPASDFQUEBVEIVETPKKZMYFYJRFTITLLRRQVGGHNDNNSSRIWFGMOAXVOPHJBMVBFUCLSYWJTNUCDSDGTGXNJULXHVPLPXGPWQTXDZSVSLWPNRGUMEABKLAHKDQIYYKMGBYHDSOFXRHBXDCKZAIOXICZWXEBHWXOGZCYUMULAAKZYERPNPBEULFWAWEFOJF");
    msg.flags = 55753U;
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 143U;
    tmp_msg_0.list.assign("ZCZXUNYVRASJTGKBHBLORMZUVVRLWKCVEOIQTGGDSWTMEEOWEJLUXPRAXPQHTIOUNZDVPQUBLHGPBXTLSGDLDOMFORAGMIQUEERZFPBVQJMRDWQHPYXAKLNLPKCIYMUSYDBDABFTDWDNNPQUTXENHZKZRUWOAQJJDIQ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NWRTAEZRNFYRVWRLPXIYUNKMYOPBXIWAQAQXSYHVGCOJOVLETALADKDGJHQKBZEJIQOSBFNVVPYADJZHMILQRAQVGNYPCKOVSUXIWOVPTUHMJBYMHPDGHBQGHSFOYPFFKIFMWQZZRSKRVOLTXAKDKXIYDGCCNWRCMWTPUTCWRJSSSWHZJGPDIXVPBWTCUEZCGTEGCRXTJZQMLAEKECUUDUQLNNHZFFITLBMEKXSEU");

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
    msg.setTimeStamp(0.556673428808);
    msg.setSource(30300U);
    msg.setSourceEntity(148U);
    msg.setDestination(26235U);
    msg.setDestinationEntity(160U);
    msg.type = 126U;
    msg.op = 9U;
    msg.request_id = 28192U;
    msg.plan_id.assign("HDWVDZJZOZGQFAPYWXVTNUNCXASSCGWYMJQKOFCMHNHTGOVZGYBHBEHAAQIKHXFZAJHBNVOPESRTIAZQDRRHXAPVWUUERNCULSKJULTOPJPQKZFZCCLKKRXGHPYQEROGYSRUKNGCJGDTWIMUXVQPBITKLNVXYDXPNVRMEFCUPDUJT");
    msg.flags = 8352U;
    IMC::AcousticMessage tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.833704269603;
    tmp_tmp_msg_0_0.lon = 0.851038920561;
    tmp_tmp_msg_0_0.height = 0.439476559636;
    tmp_tmp_msg_0_0.x = 0.46372139859;
    tmp_tmp_msg_0_0.y = 0.284772526329;
    tmp_tmp_msg_0_0.z = 0.709740458121;
    tmp_tmp_msg_0_0.phi = 0.201405537942;
    tmp_tmp_msg_0_0.theta = 0.631490097245;
    tmp_tmp_msg_0_0.psi = 0.64545692521;
    tmp_tmp_msg_0_0.u = 0.156599648482;
    tmp_tmp_msg_0_0.v = 0.664891460759;
    tmp_tmp_msg_0_0.w = 0.196604854326;
    tmp_tmp_msg_0_0.vx = 0.480204491958;
    tmp_tmp_msg_0_0.vy = 0.437400229565;
    tmp_tmp_msg_0_0.vz = 0.510409525144;
    tmp_tmp_msg_0_0.p = 0.731458524105;
    tmp_tmp_msg_0_0.q = 0.0214013207926;
    tmp_tmp_msg_0_0.r = 0.863930575122;
    tmp_tmp_msg_0_0.depth = 0.877805334269;
    tmp_tmp_msg_0_0.alt = 0.823270607132;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UPJWDRFMOIGQRLAIBNFKYCOKRLGHZKNHQNOHMNXSZCSRWTKYVFYMFEIOVZJXKPIYHHUODEGSITQULLQILJTDAKWOPZHAFDGHRSUUPUQPTIWYMEQZCBEVVYS");

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
    msg.setTimeStamp(0.829035782552);
    msg.setSource(38400U);
    msg.setSourceEntity(210U);
    msg.setDestination(64670U);
    msg.setDestinationEntity(91U);
    msg.type = 208U;
    msg.op = 105U;
    msg.request_id = 12681U;
    msg.plan_id.assign("JTFBXLANUEXEYRGRHGVWNWEYOYL");
    msg.flags = 17267U;
    IMC::UsblFix tmp_msg_0;
    tmp_msg_0.target = 11834U;
    tmp_msg_0.lat = 0.995476315428;
    tmp_msg_0.lon = 0.180725117392;
    tmp_msg_0.z_units = 113U;
    tmp_msg_0.z = 0.20285913881;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MPHVRKBYMPQSOWXVSMSTYTCQEZHTOHZSBSTYKKDHZEHCLEMEAJHBGENIXBDOCGGPLOFPCJWUAXLRAVGYRIGNGARFYNMCNQUWYTYCRCZFVUPWYUCJWKUJAPMQAZJGQNIBSUWPXRKBVGAKZHAJTDQBRHOLCOKKMTJLSEYOXXXKJUSCJPPGHASNIGLUIVDITMEZBUXVDHLNJTFXELARDQKVQOWN");

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
    msg.setTimeStamp(0.784661498923);
    msg.setSource(15062U);
    msg.setSourceEntity(123U);
    msg.setDestination(56515U);
    msg.setDestinationEntity(147U);
    msg.state = 154U;
    msg.plan_id.assign("ZWCDYVGJPAIKFHCC");
    msg.plan_eta = -1665781149;
    msg.plan_progress = 0.101109998182;
    msg.man_id.assign("DBSBRSBQWLHFQNIMBIJYVTDZWPJNJTTCKVRFLSSXAEIPTXIDVQULPGYJQQEDZGLLFLFXPHVWONMUYNEXJKCLXLPWONSIZDACCPFHTURCPRZJHEKGEUYZGXKZUKGNUZVEHARRTSNFHMMCQDUZVWKWOIIMYXNNBKESNAGWOEJYRQHMSGTRGIDDHJDYZLHABGBXOATVYPTZJEPCRGDBMYMAFWQAWFJVBSKYFQIOUFCXKOVBKORLIQPV");
    msg.man_type = 35587U;
    msg.man_eta = 2043375873;
    msg.last_outcome = 49U;

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
    msg.setTimeStamp(0.432782163807);
    msg.setSource(33402U);
    msg.setSourceEntity(177U);
    msg.setDestination(62425U);
    msg.setDestinationEntity(103U);
    msg.state = 10U;
    msg.plan_id.assign("TPYBYTJBLKKACQZPSOLOIGUPCRACSKPFINMLVVZSBLIEVGZBEXWVLEDFZRSCOMFXWBYDRQDUCOMYIVQYAARWJQPTVUHXHLMHFAOXGHKWANVUZTWNIZMNFDXHBOGYIQOZRVQZXJTDAVIPCSISNDBFJUMXYSJCNOEPCGLKZQHQCPAWDMWGJAENXGAKGCUYWRKWE");
    msg.plan_eta = -1236540359;
    msg.plan_progress = 0.296122706128;
    msg.man_id.assign("WJOTLIAZFNKBTAMOQXYOJGGMYWMQHKNUUTHOKEYETYQPURQCEBGOIFVPYMSHGUMPJTWYXIJQPBCWJIBGRJWDLZYMXTYZQBHRRDMWTPOZSVFQLXPADRODZZWVLNSVEFSPYXVCVVAJRMMXUPAOKJXAKGFYISLEBNCPLEREVRLGWTKAHKHUXSDSFXKAORUIK");
    msg.man_type = 30658U;
    msg.man_eta = 1767137887;
    msg.last_outcome = 90U;

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
    msg.setTimeStamp(0.659340021564);
    msg.setSource(58181U);
    msg.setSourceEntity(112U);
    msg.setDestination(30786U);
    msg.setDestinationEntity(223U);
    msg.state = 110U;
    msg.plan_id.assign("BUVSRHAZGDXDYVHBAAFGKWPOCRMOGWOIMDTPVZYOVQPFMPSCFCBYXILTQXJHRILWQYDRJJBMUEAVENGLKYZJUDQCAORESMCVWCTHHZXZPXLSYSJAXSXLWZTLLJVVQKQPET");
    msg.plan_eta = -567076517;
    msg.plan_progress = 0.0327627386079;
    msg.man_id.assign("OTOMQXNYDZHDUFWJFJMHCWMSGTICGFDODASNMFPJBO");
    msg.man_type = 55847U;
    msg.man_eta = -805392649;
    msg.last_outcome = 222U;

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
    msg.setTimeStamp(0.839067498886);
    msg.setSource(5966U);
    msg.setSourceEntity(113U);
    msg.setDestination(57343U);
    msg.setDestinationEntity(192U);
    msg.name.assign("XXWXZLUOIXBJQWWKDGRMWCDERMSRHKCZKGYZTLPIQZAAJNCESKUHCHNPTGCVWPUQFPVAYNUOTSNRTMLGIVYCVCYQJEFKGPNOOUXWBEZSVDZBMOEJTDFUWTBDETJLFQYBAIQAHDGNITBOJLDKXFHZMTZOFHOZWVZTDWHXLSSMFU");
    msg.value.assign("MRQNISXRVCYRYULNUDBLWEPMKZKCXZTEEZVOQYPHJFQJNGOKSVPBUTVUFUREGTBYWZPEJSFPJBEGUARAASVODQATZXPBCKBRSTWUNJNFXCFOINBJCYTPAGYMFLWMRTAZDNLCBEMWDYHQKIXIMPWQIHSKWQ");
    msg.type = 224U;
    msg.access = 50U;

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
    msg.setTimeStamp(0.980634162532);
    msg.setSource(62698U);
    msg.setSourceEntity(253U);
    msg.setDestination(28753U);
    msg.setDestinationEntity(4U);
    msg.name.assign("SSMHEPWHOYGMDVIBGIQKSWLJIEODKRCUNRHXVAECPEAWIQBXZBXTMWOXPOCXIRFEEKNJCRMCPJMQGPQKWOLMNVTLBTTTKZISAVLKWLXDAYNKHNTHHKIJNUJBOYFOW");
    msg.value.assign("QRDTRRUZRFXTLVGJ");
    msg.type = 107U;
    msg.access = 91U;

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
    msg.setTimeStamp(0.312893530698);
    msg.setSource(63844U);
    msg.setSourceEntity(172U);
    msg.setDestination(44438U);
    msg.setDestinationEntity(240U);
    msg.name.assign("BQQSYFSEJIALVBGYEUBVCHRHMTWZXLTDHTNUKWJMWPLJLKUWZHLMUEXJRFISIXOZOAJYNXHLMKPOBMUNZRNDRWYFDTRGCYAOHDKKMXSTBGDTAVCYYPMQSQCCQSHJONGPVASDXBKPGEGJKYRFKDTATJANZVVWWHXEJNBIIISIRMQXAAKSLQFPSJCQLDGOERGRQFWNCMOPFIVPCZWEZWDCBZKOE");
    msg.value.assign("YQKQRYHKYGWXXIVAIPHIGWMHPRFPPJWPWOHVRPLHBLALRKFGSSPQREJGBZACLWMEKUEYONLBCXXFBKNAALSNETVZHTEJTSMAYFSIJCKWIVCBKCKGZ");
    msg.type = 240U;
    msg.access = 208U;

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
    msg.setTimeStamp(0.376567246817);
    msg.setSource(43928U);
    msg.setSourceEntity(218U);
    msg.setDestination(46488U);
    msg.setDestinationEntity(156U);
    msg.cmd = 78U;
    msg.op = 163U;
    msg.plan_id.assign("RVCUNXUNPIGGYQXHOEZSGOWDVGTVMQTKBLNSAAZWDWCVDYFGAVIXKNFEEFMDQPRWEHMUYWZMACNDRANBTKQITFQGHZRZVIQDWYSWUZAFSPKLLNZRSOPSVZGTQBOYGTZPOSULVCMUEBCHXMGBGYJFPOJFAICLXIWKTIFNH");
    msg.params.assign("UUGGWQPJMXEMOMCLMCUZWSQIGALJQUAKYFTOQOZHFDA");

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
    msg.setTimeStamp(0.345689684919);
    msg.setSource(21190U);
    msg.setSourceEntity(130U);
    msg.setDestination(63097U);
    msg.setDestinationEntity(8U);
    msg.cmd = 207U;
    msg.op = 18U;
    msg.plan_id.assign("FZRWRPXVGPLCZYIQIFZMKWQAPBABLYNBVBHJUIYECFOBBCMLMZNWYGACPQANWGEKTGPTFFDJDHPCKIUNKTBSGOXQLMVDWZSOZTLRSSEWMPKDXHHJUUEDZKYSPOFDTAVNL");
    msg.params.assign("FLLBYZFOWAZVRTQVKQLGXOBGYPZRRJAMCDEHWABXQUZNMAMIUAETQZBNHZKTRLQRWVDRGAQHVGELWHEVTKCSRIJMJDSZJZBLIWGOIOIXWGJBSXUNYTNZFCYLAIHSDCKGFHDCJYXYRMYKXJNRFFNUCAMYVMPSTTKQFMECTGXCMBTEJEJTPODBIBDPOOOGIELUUXSOXGSSWFQBVPH");

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
    msg.setTimeStamp(0.413800634998);
    msg.setSource(53631U);
    msg.setSourceEntity(246U);
    msg.setDestination(45998U);
    msg.setDestinationEntity(6U);
    msg.cmd = 251U;
    msg.op = 137U;
    msg.plan_id.assign("ZDGPBHCNRWIJEHINDLJQFMWUGWOGYYQVJDKARSXPMGRMLXHAYFRBVJNQJMQSOUSROPJZWSQOADKUKMEUDTC");
    msg.params.assign("ZOLXTTMBGHLCIVUZSMVDQLOMZZRHIJNCRSCYMDXKWTHOUQXDPQYAMSGGPJIVDQLQFYFYWDJECJIAIMCFEMRMWQVKEOIHKNJUBCNDEZKFTXUXWKSUIELMJFNTNTQORLWYGNJPIKWFAEYBPUXNJHYQBAVUQLOEBSSDFRNAVBBUIKCSXGERINYXFC");

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
    msg.setTimeStamp(0.0757697822709);
    msg.setSource(19779U);
    msg.setSourceEntity(45U);
    msg.setDestination(47684U);
    msg.setDestinationEntity(160U);
    msg.group_name.assign("PQAINRABSIT");
    msg.op = 186U;
    msg.lat = 0.252038720959;
    msg.lon = 0.234293942428;
    msg.height = 0.730904104699;
    msg.x = 0.174612630085;
    msg.y = 0.727573665495;
    msg.z = 0.566746234161;
    msg.phi = 0.681969031655;
    msg.theta = 0.727592030673;
    msg.psi = 0.170710444627;
    msg.vx = 0.742853867236;
    msg.vy = 0.505388477425;
    msg.vz = 0.41868386614;
    msg.p = 0.405459955299;
    msg.q = 0.273467487606;
    msg.r = 0.872377666303;
    msg.svx = 0.150633232201;
    msg.svy = 0.851825123222;
    msg.svz = 0.827022047454;

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
    msg.setTimeStamp(0.440918296596);
    msg.setSource(29915U);
    msg.setSourceEntity(80U);
    msg.setDestination(36098U);
    msg.setDestinationEntity(181U);
    msg.group_name.assign("HKYIQBSPFZEBUOWMPODBYWOHVSNPPCIIDBWHKGQQEMXSUDRJHKVZUPDKGUBFYRLMWSHCHCQULYKGXLMOCMNNHFOWXYLCKHRUVFAJWFRAGJFSICASSTJGZEXPKTPXRCQFBIAPNDUWALOUKQAXBLAYRYJVNDLMYLSGVMZCEOBEUXRJJETJLNSKREXZFDYZQIQCLMUYMDWEZISOGAPXKCTJZENTVBTONIFIGGMAJHTWR");
    msg.op = 129U;
    msg.lat = 0.271739539687;
    msg.lon = 0.0833150038885;
    msg.height = 0.28488740835;
    msg.x = 0.100497511849;
    msg.y = 0.214807747114;
    msg.z = 0.281456671479;
    msg.phi = 0.242401309126;
    msg.theta = 0.141277279122;
    msg.psi = 0.242624440304;
    msg.vx = 0.08840962466;
    msg.vy = 0.290050741367;
    msg.vz = 0.954813259906;
    msg.p = 0.0118172037722;
    msg.q = 0.331362106725;
    msg.r = 0.60240975695;
    msg.svx = 0.432893426149;
    msg.svy = 0.912191612453;
    msg.svz = 0.129600185885;

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
    msg.setTimeStamp(0.203209855433);
    msg.setSource(21410U);
    msg.setSourceEntity(220U);
    msg.setDestination(63401U);
    msg.setDestinationEntity(82U);
    msg.group_name.assign("ZDWAKOFMDWKLVVCTZSIQDEZQTHSDEOLSKNQJQGQSTHKAATPMUMH");
    msg.op = 221U;
    msg.lat = 0.683483290645;
    msg.lon = 0.187315997342;
    msg.height = 0.226087396609;
    msg.x = 0.798131525409;
    msg.y = 0.786384793748;
    msg.z = 0.990351240607;
    msg.phi = 0.727508166461;
    msg.theta = 0.85939793013;
    msg.psi = 0.393943255801;
    msg.vx = 0.335205948486;
    msg.vy = 0.605040173002;
    msg.vz = 0.499729947772;
    msg.p = 0.92950906662;
    msg.q = 0.580839425883;
    msg.r = 0.490301317701;
    msg.svx = 0.722543238627;
    msg.svy = 0.808322994832;
    msg.svz = 0.204678887165;

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
    msg.setTimeStamp(0.227217574727);
    msg.setSource(55822U);
    msg.setSourceEntity(21U);
    msg.setDestination(63012U);
    msg.setDestinationEntity(79U);
    msg.plan_id.assign("PUXHFTMGPIUIBXWCLAJRTKBLFRYGBTNJMILANFDODFMGTTMMSZBLUBWUQEPNJIXXMRFCHAMWRDBESVQLWPW");
    msg.type = 252U;
    msg.properties = 45U;
    msg.durations.assign("OGSMGHMDWIQRUEKBJNSTBYMVFAPOZSF");
    msg.distances.assign("ATNQSORAWRLUKVLXFHGPMJVFLCKBPTPPEAZKOBTMJHYHHYEKARGQWDJEDDFXMUEVZMLTGFBRUOJCKNNFFORVHSQYLHMDPFMAIBXBGJDBLRYIIDNVVRWQEKCTCUUKEDN");
    msg.actions.assign("FLYHBAMAHKZZDVHOHGJRUNTSWKPMYNUWIYZTFZGQHOOAMKVHADTMAIUJCQSFSCLSVULNOTQFQFYKHBTNFOMUBNCRBVPDJVTQSINXBBYQEZRBC");
    msg.fuel.assign("HNPOANAJVLZHSQGDZOZVUCGYLPVPLGRXFYKRMXQHJXEUBSZDERHSRNOMQCMOYASTRJQWCPKGPRFBJGDGCDTWIRAYKRIIVFKAULFPMSNMTKEMDGEWATUTATHLZNDFSCBBLVVKYZZBXHULLUZXIZMNPHRIDTAQKHLANOFCM");

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
    msg.setTimeStamp(0.00404986307583);
    msg.setSource(6964U);
    msg.setSourceEntity(24U);
    msg.setDestination(27094U);
    msg.setDestinationEntity(86U);
    msg.plan_id.assign("QLVMNTWERLKFAJZJJLHCBXYHXMSDNZRSVCLHGWYAREHIUOACJAIKFTTIBHFBJVLAZWPKGIQVNANTXCNQSJKMEPKOGOURQJCFTLFU");
    msg.type = 184U;
    msg.properties = 61U;
    msg.durations.assign("MOTKMAFVHIMXSDE");
    msg.distances.assign("ETDVPQTSZMBSDCTZGBEJMDCNDJKMNNHQRHMIPUKC");
    msg.actions.assign("QXINLTNICVYJWEDAKECXNOYIGKAXDKYRQCHEJWQZNOGIKRGWBZBDTPEXFSSURRVGHZPKJLOJYIHENCTTODILNSECZOJJLFLAFEADVDKQUFCJBYCPYQWDZYOPOXBKUVMWUQXPSCALBUQUPL");
    msg.fuel.assign("EKUUVINZWWGRJVZUSGIFPOSZXRMDSPWNBCTIZVLQXQLVSEGHGYVEKIGMBGIINRVKJRZGFWNAZSYXTODBFPMSZPSAPGYNCPMPLXKHMATQLCSOJHYXCXSXOLFMMOCFWAUFHHQAPHDSAYQWTQKMEERTOITA");

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
    msg.setTimeStamp(0.80866426995);
    msg.setSource(20489U);
    msg.setSourceEntity(120U);
    msg.setDestination(45112U);
    msg.setDestinationEntity(80U);
    msg.plan_id.assign("GQYLDZYSMRQTGITBWBDRIFBJCMSKYBSPHWVAZVZSTQQHHAUGRCSOEFGWVUCCKYMAZOAOEANYUQQKRQDUTPHNIKPWYFDDKBXHZAGJUKOULDAFNVPONLDNHEJRSWHASPJMEXIFOKRXPJWTUDAELLBTVRWGXKKNVIVKYBFLFIUVPF");
    msg.type = 214U;
    msg.properties = 55U;
    msg.durations.assign("LTHSSKPCRVUCKFLONJEKXYDPC");
    msg.distances.assign("HLKTSSPBXCFCRAUNAMLDYSIEWTEWMOJHIJSZXIFCFOCWOEUIXMHDGSQYGHLRIHXKJZJQGIILQGLMOHAAZZRBTMPVLVXGROLLFBUKEFCOBRDZBIPJRNATNYYPPCEAXS");
    msg.actions.assign("CQTRPBGUQGXLSNESBPHABJLEABUJVARODYANIAEPFJFCJVALVPUMHTZTPVWIRAWALHXKTWOOZXXNCDIUGBSQKJESDWPTXGCLWDGELCFHZUFQDKAIURVWPKUILFMFUNSIZUMYDNIWWLOTJZXQKUNSKGXLTPBQZQIDYMZHWWCHSKQVHKCSORNMGQGRVXZRBJIXIRFMYSMPNGYEQTKOFBOPGHMJLMN");
    msg.fuel.assign("RWKTHZIIJYNKAEKDXSLWBBGKYFKCFUVTFPILZUYWXZHDWVQFSAASAHZJXGGKTFYILNFNVODGBGIXMCGTYSNATIRZMRJGKUUQSWXHZCFDQGCYT");

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
    msg.setTimeStamp(0.468815693577);
    msg.setSource(53327U);
    msg.setSourceEntity(223U);
    msg.setDestination(18808U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.997146437684;
    msg.lon = 0.215471531354;
    msg.depth = 0.78666993052;
    msg.roll = 0.987455187779;
    msg.pitch = 0.519293197978;
    msg.yaw = 0.624742499155;
    msg.rcp_time = 0.374367491502;
    msg.sid.assign("WCIETEVILNXDYBKFQBUGDWJCLMMAFAYIIGELLBITCURSNAGFDKWVRWYTQZLEOPYHUHYMUVYBHENGKVMSZCTOKOUZTZCMHQKPMHRKPEUGFHQACHPGBAMJQQTNJDOXUFJKGFWLXZJWJPDYAEFYLMBOBDVCDLSZZWRDWMGCMHJRSNSEXLWYIPSGIVXAXAFFUSKWTNRKOPCQENBOKDRDHSJPRSOYEQVZXVOTASJZOLVXVIIHTBNBGQIUPF");
    msg.s_type = 226U;

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
    msg.setTimeStamp(0.757394508852);
    msg.setSource(4944U);
    msg.setSourceEntity(167U);
    msg.setDestination(23722U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.612307384026;
    msg.lon = 0.92241239447;
    msg.depth = 0.249938912982;
    msg.roll = 0.527134134979;
    msg.pitch = 0.759133775491;
    msg.yaw = 0.329832719559;
    msg.rcp_time = 0.0709750308868;
    msg.sid.assign("SCSSSJZQIKQCQXDVBDLZNOUQDBBDMPTXESOXPNNCKVSIQFYUDKCGAKGPFRGVJYWKHWNCXZABOQUWTEJHJYIBDRFXQRPRFFGCGALIKOXVLZVFHXOXNGEHLDMRTYYKKQOKNEUFECZKINQPBGREUTMPMJOEVTDSRYZLRZLHCFFJFTABLMRURNAADLOLPSWWAETUWJWYWJPYECHOX");
    msg.s_type = 254U;

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
    msg.setTimeStamp(0.393365295022);
    msg.setSource(33160U);
    msg.setSourceEntity(53U);
    msg.setDestination(24132U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.454289828552;
    msg.lon = 0.913173494424;
    msg.depth = 0.613128023922;
    msg.roll = 0.784006125805;
    msg.pitch = 0.375980092527;
    msg.yaw = 0.100120298564;
    msg.rcp_time = 0.545888964606;
    msg.sid.assign("ZGKLXCYYNTIIMFKDAHRQAQCRXLPVBQCYIRZWNYNMLYWMZBDZRI");
    msg.s_type = 160U;

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
    msg.setTimeStamp(0.149544925233);
    msg.setSource(50402U);
    msg.setSourceEntity(166U);
    msg.setDestination(12868U);
    msg.setDestinationEntity(45U);
    msg.id.assign("HZLPGZSEQPZCFWEEXKDGKYMFSQJWUNDQAKAEXYBRFUOQGOGDIXBTWDLEEMKGHLAJOAHATSOECWSEVTSDLZLRHIEFJYTHOTBQEYYKZDJXINSILQBGIAFAZWQAJPJCAXOUBRTHHMUQRBDWPAGLYTPMHYTTGBMUONCURZVNXJLILUFNZCZRVGSINPRNVQOLJMSFCUVXPBNCHKIVXGRDNVDJUBBYTPJRWMVIKMUWKV");
    msg.sensor_class.assign("KAFVKTYHENNPRXUPTMEYMRUIXYNDHFGUXIALHOWIPEIZMHCRBVGPKDHVGUWAZUBATCSQSYENCOPUOLIYJBFLZQENLHGVBRQVZFDXHUYRBPSSFQXQQNGMMHS");
    msg.lat = 0.984505617341;
    msg.lon = 0.492039134933;
    msg.alt = 0.456262204043;
    msg.heading = 0.643613807829;
    msg.data.assign("MVKGMHHBTZFTVHZZABBXCUKOALWSERMAPUJIWALLPRIQOUALFXEGECNLXQKTXYNPYHGXDWLCODWQUMYQDEVYYUINBUUVMTKEOTFKJGKSXBPGYESGG");

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
    msg.setTimeStamp(0.0093017319108);
    msg.setSource(33763U);
    msg.setSourceEntity(122U);
    msg.setDestination(39974U);
    msg.setDestinationEntity(206U);
    msg.id.assign("CPLOKUDZGQFOBHREZFGMNVXKBHEYRJFAWVNYCRBPYWMILCSLPZJIOYJAKUCEWQVDULSVKTZNBUJPIKUDSYHXSZMYCNGQOJOLODTVNUKFNBGYAGTVSUBNRWLJAKLRQINABOLXHAZWIUBEGMRJDXXIJQGXSKSQTMQERTYHDWYWIADCQBGMCVTEEMKPRFWCVYQGFRVTPAJDSPXFHO");
    msg.sensor_class.assign("PQBVUVCKBDKVLEMHCSWDODJKDRLCOLEOUWWHIMHSDYTNQSCIXGOZDSINXNJIGCIEXJAZUZINBFHMFTQFFLRYBICMVHKOYGZUNCEMFGVARXAIMOWNYGQFQXAJEJNJGKWEKMAUEKTGRUHRVTWTTVDYAIXGTYCDLJMJPBASUPFPBQZNXQQPLYRUGVKYCBCHPFBYOUAZSPWKGXTVJETOVJHWELFRBDPASKRWSZLLQMZPPXSRYNNOUSMITRDZBAQHFE");
    msg.lat = 0.315165430628;
    msg.lon = 0.330556869392;
    msg.alt = 0.0315473335607;
    msg.heading = 0.56375593507;
    msg.data.assign("QKXHYZOFRBXJZFMWPYMDWUDYDHFDHDCWNTKHVKVRRYVPYWPMNPBLHPZIQVUVBLLTIGDIQMMMDFWCDEECLYPCNQIVOJIESIQSREWKRMQAMWAKQKRQUSSNFBSAGEKJLTBYGAQKAPULLRBGZQFXZILTHJDJJOPNKSCAZCOBVHWXNUPUUHEFBIIBXHGZTUOEACUOILJEEJSBNGWXTRXLZYWRXVOCGYVORFNSSGMCCATHJGSUZXTTGNXTJDFPFKAE");

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
    msg.setTimeStamp(0.628372945517);
    msg.setSource(36474U);
    msg.setSourceEntity(182U);
    msg.setDestination(50000U);
    msg.setDestinationEntity(44U);
    msg.id.assign("IQMEUSASABTJUWEWIYYTTWKZUFZRJGFHHHVIORGXYZPCTLKOCGHWOYWBHVFVYUQLMYMXNGTFDBGJDNZRXMOLJQROFVVALDAYXSSPGYUBPUBIXZSTMBNAMCLQOJZLNTIKHDISDUEBJHGDVEUMXFCPKCKCSOTEAWVZQCEXQQKCLNKJSXPDPLPLJBIOFKNGWGEWNGRM");
    msg.sensor_class.assign("SIKWSUTOXZUFQNOONRIJNVYLGYUNKPMHDCQRTXDBHHRLJGADLYUNTGITLMXGVOGLWOWHYZLILZVEEJWKPSXWHXPEZEEHCBXIGAVRCKNFFCGOTXTEMDEQUCNOQYRCUIRZSVBJUSKWJAVYPAUMILBMCBWKIVRVHQJCXPGYAYRNFGQJDAFSSEJZRDFJLBFCSXKBPPBAMHNIWNHTMKXFGYQUEDPPPOQAWFEBKSMMRFQZTUMOHCZIVKDTOD");
    msg.lat = 0.935261206635;
    msg.lon = 0.810189274039;
    msg.alt = 0.780458214307;
    msg.heading = 0.82098823398;
    msg.data.assign("KLKDDTGDCAZIXZCIPUKWSLSUITVQYYWYKRVYQKPMUKNGDLUFDWZIVAZEJVRAIA");

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
    msg.setTimeStamp(0.446942438796);
    msg.setSource(18836U);
    msg.setSourceEntity(43U);
    msg.setDestination(15184U);
    msg.setDestinationEntity(54U);
    msg.id.assign("UEAFCIEWGIZZJTZKXKTUYKMLNZJPCPIMXBTPMDORNGRKDVHETRLJWQMZIWRCDJSWCRTKXXNEXPYUOESVNFVBJMHCHDYVGSTFBCJXZPWQKSOCJPILBDEUSFDQGQFYAZSYXQQMFYQAEZKHAABSAV");

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
    msg.setTimeStamp(0.962370300276);
    msg.setSource(55339U);
    msg.setSourceEntity(169U);
    msg.setDestination(31715U);
    msg.setDestinationEntity(160U);
    msg.id.assign("IRXJYKHKQIOIPVFMXLNTJHDBEOBRHAMCETURKSZEEMHUNYXSTOLDZWMLXQAFVFFPWUGQTEGXHNQDERVCOFEBZJFIVBAFFBCKCTOZOMLYVGYCDJMNHJOQDGTPQSCIZPBLYRWQVYAJYALERMHXZPNKTNUKXFCVOKQBLHVGKPMZJUNSDBWKURWAXCAUGUZLB");

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
    msg.setTimeStamp(0.910850716887);
    msg.setSource(41396U);
    msg.setSourceEntity(12U);
    msg.setDestination(42320U);
    msg.setDestinationEntity(219U);
    msg.id.assign("SNQLVRNASXHWFHPQJOOBAOMCDGOYTYXESNLXCHMXIAXZIZBMKVPXLQBAYOGIWMYSUEBNZGHEENKGFLRIAI");

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
    msg.setTimeStamp(0.469880452033);
    msg.setSource(3994U);
    msg.setSourceEntity(108U);
    msg.setDestination(22213U);
    msg.setDestinationEntity(198U);
    msg.id.assign("LIITNFLSLFKTTOTDRYYEWZSYSCDRQPQYUQMCZHDWHNGJWWZGPRDEMJGJFKBCMJESCRVLZBNPNOUWHZKIZUOAYCDXAQTAKEJGNCMPLCWFSTGGXARBAAHSUHXRIBFAVVULBGROWLKPGBENYEBFWVCMJJGMEMZVRNOLIISBUODXTRIUEPCDBHHCXFXQPGVSUPHNJOMOAZTSUIYQHFVPXKRFWAQXDHI");
    msg.feature_type = 238U;
    msg.rgb_red = 46U;
    msg.rgb_green = 247U;
    msg.rgb_blue = 76U;

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
    msg.setTimeStamp(0.792286027269);
    msg.setSource(2899U);
    msg.setSourceEntity(154U);
    msg.setDestination(42301U);
    msg.setDestinationEntity(234U);
    msg.id.assign("UCSKTCBZARFEDQZGLZSEBJMXCOOYXPHFGDYBJNVLXUNEBICPCMLIPVNLELTA");
    msg.feature_type = 190U;
    msg.rgb_red = 107U;
    msg.rgb_green = 226U;
    msg.rgb_blue = 215U;

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
    msg.setTimeStamp(0.668077607456);
    msg.setSource(11691U);
    msg.setSourceEntity(60U);
    msg.setDestination(50842U);
    msg.setDestinationEntity(13U);
    msg.id.assign("QLFNXUGZEKZNXOEWXSCDVTAFMYTKGPSBBJKLUQWRIRRBRQUQWNNKNGHBOTBVYGSZOPIODIAYPPMLQADWHZHGLRQWIEYQMQCNXJPJVMCCUOXCNFECWYVEIY");
    msg.feature_type = 96U;
    msg.rgb_red = 243U;
    msg.rgb_green = 191U;
    msg.rgb_blue = 124U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.769620505201;
    tmp_msg_0.lon = 0.758160541234;
    tmp_msg_0.alt = 0.590287447942;
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
    msg.setTimeStamp(0.240783530024);
    msg.setSource(64027U);
    msg.setSourceEntity(92U);
    msg.setDestination(51510U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.980967627689;
    msg.lon = 0.574695155419;
    msg.alt = 0.887974179643;

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
    msg.setTimeStamp(0.900517048706);
    msg.setSource(31735U);
    msg.setSourceEntity(61U);
    msg.setDestination(5952U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.755942442718;
    msg.lon = 0.261680944635;
    msg.alt = 0.434912501698;

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
    msg.setTimeStamp(0.223716994029);
    msg.setSource(44471U);
    msg.setSourceEntity(219U);
    msg.setDestination(36484U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.287347126245;
    msg.lon = 0.482654657858;
    msg.alt = 0.87256892483;

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
    msg.setTimeStamp(0.571151273316);
    msg.setSource(32589U);
    msg.setSourceEntity(177U);
    msg.setDestination(26320U);
    msg.setDestinationEntity(227U);
    msg.type = 130U;
    msg.id.assign("ECTVQHBZZNOBXUTMEWLDFQBBCNUYKOVPHNCOGBZPCAHARFZIQFVIHHIOU");
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 29U;
    tmp_msg_0.file.assign("FZKHQZHRKGIXHTLWQUKOULXUETPWSRXUXZPAEWQBTAJNQJXIIKHCNGQAMOEVBUCNBMAVGNKYKJBEFTTHVLQOGUYZFWXJCCSKLSGPLLOIAQOYDQWPYGXZCKRKEVDCNNNIYFPAHJJZDLVDHQCMFSRIDV");
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
    msg.setTimeStamp(0.0169538338164);
    msg.setSource(49318U);
    msg.setSourceEntity(204U);
    msg.setDestination(37387U);
    msg.setDestinationEntity(166U);
    msg.type = 221U;
    msg.id.assign("PBCRFDWGWEUHHQJFSLYUJLSBIWJBUXTZWEYIZIVKRUONQJJJXMDQOBKKWZOSVZCBUEKDLSFYQRYSLOCKGLIGEXINACENXCIREQCVMTMVXSNWOQHJCWHMSNPYBHMMBDVHLEBAOYNKURIXBPYGGTQHPSAODTGMRWNYLBZVPOFT");
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.742148206757;
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
    msg.setTimeStamp(0.64243179842);
    msg.setSource(21856U);
    msg.setSourceEntity(107U);
    msg.setDestination(32288U);
    msg.setDestinationEntity(237U);
    msg.type = 67U;
    msg.id.assign("VVYAQAGAKOOCDLPNWOEFLNMIKRNWXHWXZUEUQXSBAHKBMBPVGIHXABDVUYJCBZTNFEPUWIKBRJKFHYUQIUWZPPJMJIDNCJMZRZKMVCTOGMGTRTALXEBLSYJOSXFFZTFNWZZDCWTTFQEHYREGYYDONDSCJJUXCGFTXSJPQEMOHCVRBWMFYDDSGRAAVJTFSLOQRSWPOEUIPGZYYILPLKQHWURKIAZTNIQHRHL");
    IMC::MsgList tmp_msg_0;
    IMC::PlanControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 196U;
    tmp_tmp_msg_0_0.op = 24U;
    tmp_tmp_msg_0_0.request_id = 59241U;
    tmp_tmp_msg_0_0.plan_id.assign("AKKRZCDSWJBQNRIHLLIVCJPHGLPQLIXDSPPOZKEVAA");
    tmp_tmp_msg_0_0.flags = 7780U;
    IMC::Salinity tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.367357864348;
    tmp_tmp_msg_0_0.arg.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.info.assign("SIWPONFVUUBJELGQWHAMPSXBZYBTTMVWMRNCDNRUAXHOYHJPNDBQWLEEUSLYIJAPYDYJOITRTMQKZEEPDCCPOTBSLAJHFOAFBFGUFXKKRWKMCZLFDGMJVOBDRUUKKHZZTWEKRLOGQQAVCSRDOFICWOALWPUYXPWXCWHYGEGSSHZNZPFHXEAIBIITVKHQUIRGPCAQSSBTVTYKYJNKQNUYLLRIINCGZVGQLZDCMDVJXFRZXBHVAJMGQSMFVMNN");
    tmp_msg_0.msgs.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.971386906507);
    msg.setSource(23969U);
    msg.setSourceEntity(222U);
    msg.setDestination(2817U);
    msg.setDestinationEntity(209U);
    msg.localname.assign("ULMTBTWHOMZYQFDGFGSAKRHSQLSOWPDPPXDAVEKATYXKLBRCSJLMQWNKZUVMZYMSSMPXTNUPMHRMVUKHEERFUBJHCRZIICBTJJBDFOPAQLYBYDLYYFGPWSXGLZRZKNUIPDYQOCCAGPVNTMNWRNBGTHDVZNEZTXGQKJITHVOORBEFQNAFOXOUIXYJSUERAELWAKLJQZFOBVUFVRXYIIHOTSFAEVCGCDXSGCDXKEKVQUB");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JOJWWMZTTLKQYVXXTJXTEPBKSPAVENUNPUJXGZQLZSSAACDILMKCBRVILYHPNZVCPXCRGRSKSUPLFNDBCVIDICJMWUUEKGIGVBTJIKEDSULLASHEGYKHFOTOFXEQ");
    tmp_msg_0.sys_type = 84U;
    tmp_msg_0.owner = 34918U;
    tmp_msg_0.lat = 0.540272079773;
    tmp_msg_0.lon = 0.957581681885;
    tmp_msg_0.height = 0.3082947942;
    tmp_msg_0.services.assign("UEMOKCRKFOQZZNUSSVBINBRJIELTOTEMFAKLJEHPRMGOHU");
    msg.links.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.146369438468);
    msg.setSource(891U);
    msg.setSourceEntity(145U);
    msg.setDestination(52577U);
    msg.setDestinationEntity(48U);
    msg.localname.assign("MSNLLJIITCGPXGLYFOXRZTQYJMXUAHHVTFPFJCMVTOAPCJMVJOOKECQBTRNNRKUXYCDROHNBFWBQJMEAFYAWSSISPNILXIKGRDZBHBPIMCHSZUXDUKOSHS");

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
    msg.setTimeStamp(0.704417545232);
    msg.setSource(62166U);
    msg.setSourceEntity(4U);
    msg.setDestination(53312U);
    msg.setDestinationEntity(46U);
    msg.localname.assign("TAOJXEFMEMUSYWLGGRXVAKBZDFTJYUZBRNECVEZFOHPVVDWVSUTKJLKEFYVGJPTWPXCZDAZZUGAASHPMXJDSBLCCNODLLJUJGYPYOFQQMFXLMPWELHEPFYNBOVBMTTWYZOCDYHKTFJIBJCWXIMIQWAEBHODAWSTVQRRXGRZTRECCUWVHXT");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("UZKMYTOGKEQPCOTTEOOXWOSLCEQXEVSTYGFMGBIYWCKWYOHJHPBTWSZSHUGEMGLRDVFIOMIRQWZVZVDTKDOJNFSECNMBIJHSGPLDBMJDZRUAUKJEAFXWFRMKQGSHXWDMXLNULPANFVBPPCKTQBQFWNAANNGYJCGPJQPAZEDLQPJNFJIWUVHKGYBBUBVYTDIVXLLXCCTIXORUZRWFBYUCILSZQZHNMFXIPYJCKDENOQRMYHRILUZK");
    tmp_msg_0.sys_type = 124U;
    tmp_msg_0.owner = 34226U;
    tmp_msg_0.lat = 0.549614597402;
    tmp_msg_0.lon = 0.291815216379;
    tmp_msg_0.height = 0.778191545173;
    tmp_msg_0.services.assign("LCMTPGPGAIMWJNJLXQMCHGNPFWBXNZUKNSQDSKOFAWPNHTDYMTBKELIEFKXLSIRPDVOXWMLHSZVFNBCJAFZTTZMWDNFHNAJJKYEGIPHFCQOCSVUDGOREAZZUSQGUERLCRJGGWDQIOJRPSYIQNHPYEHOIJKXLBCSLVIAAKBGVXYHZAZSKAOIKFVYZWAV");
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
    msg.setTimeStamp(0.0408741703751);
    msg.setSource(26211U);
    msg.setSourceEntity(137U);
    msg.setDestination(26769U);
    msg.setDestinationEntity(61U);
    msg.timeline.assign("QNHMSKGLBRCWKOVQFNLTJKTMZRQCZDMINMHERILFRDCMCLEZHJMPADMJKRJJXBMIWWBUTDSCLTHUGYDPKYIZZOVAAPFGEWLFCEWRWTCDCIIVYQGOEDDUALXXHOWBURCUUQNJHBAANUZYGXSOVUJNJOEXHKXEGXPQYETXFJEDPPZZXRMWVHPKFNFIVRSAFFUYAIOSQTLSKSHO");
    msg.predicate.assign("FNIOPUDHPJENPCJBRGWNFTIBZLDIFKSSKJTQKQNWJKJZSMSNBUCPALLYQDDOQUEPZWUXURYLHZVSZDZSEBIPXMWPQECMVTXYVGMCRDOXOLCFAEGBRLWUSBKXGYNAXTFLMCAETEPFCIGEUFURLEBXWWBBOROMKYQROCXGIHTMTBVVHXPQHAQFNTPTYWUGHJRAHSTZIVYGKDAVHLYVIRKXZEGJKQSNV");
    msg.attributes.assign("FRYKNYSENPJNWSGDZYMVRELSZIOUVHMDZHHQPBOKEHMJDNTIXCLZIWICKAYBAJFCTNVGNLAWLV");

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
    msg.setTimeStamp(0.786626855338);
    msg.setSource(49410U);
    msg.setSourceEntity(62U);
    msg.setDestination(12957U);
    msg.setDestinationEntity(55U);
    msg.timeline.assign("WQHOIZLGIJVOUDGQLMYEUBSHEAEJBXVOEVUVRKVADRERXGSLBGXHXSHMQEYSZOHWJDLSZTEITJDGFIONUZQBTZJSFOJBCNCPGNIRCYMAASNKACEOLVWLWIKUXASMCRHYNTFMDIBXOWLXLYGKDZPCWTKQCPQMHKTRROUNKGZVPBFFBMCLFKYAGIASNTJWQFZPJDDBMPCHQYQTFZQUUXCPUVNWJVUSXKOPHYEIDRKAWDNWN");
    msg.predicate.assign("IJFUFBJUQOSSGULHHKZTFMUVPTXORPLCGEHJZERUBBGSOZVIPVWWUWSDSHDEKJKSJAKVUDTRSRXOGHHEXRZTNCMPBEYNQWAHYWVFXIOGKBRVCDWQAVEZQYDAIXXXSXIQSTVOZNQTPZWQCHXHUOJMEILGSNDFTWNBAKLMMRCUBNOLJXCWFMAZPNYJTOPMPBPPYYMIZGJBFYERIJDLOQBCITAKERCAYTYGQLEFCDAFWNZVLIVRYM");
    msg.attributes.assign("APBDSTXUBUMJGZAELQYSZCLCIXVTDMMUOSJOCDNJRQBONKFEVJEPCNTJUKEDVSNNMOUPEWGGYIIXGXIEQWVADLTAKGKOFQYGHFRUDYSPTZPXRPCMIFQIFHKWZWHCSQODZOLWWCVDELRUSFLDTBQFWWEVZCQNIMILYRFTXWJTAHURUPVHUYVBBKCXFYGVIBMNXEJWGJMHEKDIROROSJLRANQLVAYZPBRZKPNCAZAFGS");

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
    msg.setTimeStamp(0.346634391213);
    msg.setSource(16527U);
    msg.setSourceEntity(6U);
    msg.setDestination(47736U);
    msg.setDestinationEntity(0U);
    msg.timeline.assign("LHVEDDGIXSZYPZVANBQYDWUSGYYRMBEQQEDQLMGWEUKBNNWVTPIMHRFXNOBSCOHKTJYAZFWGXZOOHUIJQOS");
    msg.predicate.assign("SPHUIYQGVXXYNWHILVSWSZEJJCJSVAAODENTIVUTDDRKHLTAIOGOXIYPBPJQ");
    msg.attributes.assign("BHZILQTESMWRUZXHEYPKKSNMYAFJUZHPAOFZLHVSSBFBGGVGSYZFQUEWOTJNZCDJJRGREMDKOXURBTIWOBNTFVNVAYOPHXQCAQIYKOZJKAOHCJQNCXMGLPIYBCITVKZMQKSXHLCLWWADBUTVRISRDMEOWRLMPTPCYXTPEVQIDLZSXAAEFWXDRYNXJWADBNHKKFPEXBAKWDNLMND");

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
    msg.setTimeStamp(0.0153109951309);
    msg.setSource(28738U);
    msg.setSourceEntity(116U);
    msg.setDestination(32213U);
    msg.setDestinationEntity(144U);
    msg.command = 117U;
    msg.goal_id.assign("OJGCUTEEKGFONVLDBWNQKTXNJBLCYBAJNCQDBBVVHBHLEGIOXNMYFXUMIVFKOALXTHJJWJPEIJNDFZSFZSZTVNBMSLZLAGFJRRPRWXPUXEZFTSNTDCHIEMYKJHARSRGQCLYSWRHNYDIFWCUKZVDDATMPQTZLIRMDJGERQTWUGLQBUPSSQGADPIFKMECIAYHCUZFPNAPXUKYVMEKXOZWMIHUVBCKUXYODGSEWPHHQSABYW");
    msg.goal_xml.assign("BABOQKDJZSAPAOOSLGGPHETJPQFRHGMCFMZZRNJFBPGWGJITXLQDYQMXUFKOEVIQCZEXVYOSWDYTNQULDTZGZVGJFSGUNRXJCKIOTYLNAKCNYOXIAPBOWPLIPJXNVVHGLZDLWMHATBMJAUQMWDVFIJT");

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
    msg.setTimeStamp(0.362046861198);
    msg.setSource(31909U);
    msg.setSourceEntity(143U);
    msg.setDestination(61620U);
    msg.setDestinationEntity(16U);
    msg.command = 231U;
    msg.goal_id.assign("JERXEBXZULKKVZXRCNRBYYLIINNNTOTNXSABUGSWAGOZLCQRVAJYCHZLPMCVDQFSYTUDECOEKDENMQWCBSKXXAVGSWKGXGGDLMGQDVWNUOYFOWQYUSJCFAHUUZIBWEWHELLAMCQOZGRJPIVCBPGUTPIBHZBOEMVSPOAPWJFFRPVUDKYHDWODMTFLNKTPWMPKQILQBHDPSLZCBITAY");
    msg.goal_xml.assign("EBTFGHWWRCEYZSCSLKOSIBDOUDEDMASAMZHZJGXKXFIPXMJNTYQRLOIVPVOVLJZOXHBNWALABQKXTKIIDHDITMZPBQSQPSDHXCSOERTVJZYJNEJBVQEWZNRYNKYYTHXPBFTPMRUKUCGWIOPAPKAWBZJMMBRUHFFCIGYLGVGFSLPKG");

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
    msg.setTimeStamp(0.775274680305);
    msg.setSource(38965U);
    msg.setSourceEntity(176U);
    msg.setDestination(61464U);
    msg.setDestinationEntity(250U);
    msg.command = 157U;
    msg.goal_id.assign("RSZYCQFIVEBMJSADRLIMMBNTPABWYBZFMRKARSFSJWDUOIVKMIJNHJSVVODKSLEAPJYLTGVNNIH");
    msg.goal_xml.assign("MLIYCEOFQPCXJGVFDMKEBUGQQGRGCPADFOGQRXIHDXFXYFWNMZIR");

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
    msg.setTimeStamp(0.364987564536);
    msg.setSource(62382U);
    msg.setSourceEntity(172U);
    msg.setDestination(23004U);
    msg.setDestinationEntity(174U);
    msg.op = 158U;
    msg.goal_id.assign("HNZGIRKXYNHHCFYFAHXVTTSSWTRWJWLYKNUAWSUJDJPIQANXSIOKMYQCGBWDEJBOGSXQVCNDPPASEWYDDRAVFHOCUALWHULLLUDYSVOMKVYLFUFIICMKJRJANUZYGIPRICIBXJZQFHPKTBCBVMBQEFFJKPUXKPGBQENUMEMCORPCWRHBTFWHQYJZSAJSFBLITRGQGMWXZDGBOPYORPAZCENTLLTU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YQEZZDHGCTJWV");
    tmp_msg_0.predicate.assign("KXKVGDGYHYIEJW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XNRCHQKPMIOHDZICMFCNIFEMQSYLUQWEFCKBUMEMBWDSCVQRDPVDUBIVEAKLQHVJGESILBBDSYAZHRKURULFZKPODAGCFXTXSAMRPQAYSXPU");
    tmp_tmp_msg_0_0.attr_type = 7U;
    tmp_tmp_msg_0_0.min.assign("GKOWKFITASS");
    tmp_tmp_msg_0_0.max.assign("ICBFVVZXGTLNUSZ");
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
    msg.setTimeStamp(0.772612138761);
    msg.setSource(15372U);
    msg.setSourceEntity(220U);
    msg.setDestination(38888U);
    msg.setDestinationEntity(216U);
    msg.op = 92U;
    msg.goal_id.assign("FBHJEWVIXOEZCKLUULMEZVWAIWCBGKDENCIBPTSZXPUXQLIBDQJNKIROABQUGTH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LOCZYGQDRNDJTYEAUOGXZKZVLNDHMPUEXNQHTAIBEEZGWIFTYYSEGLTKYPHRCXNRVYOQSJGXUKLISXOCGTVAJHMYSSLNUIMOKKWGNSAFRSUVZDKTEEZUTOFWVOFWQIBNBKAXMRDDJCAUPPMEZCPRVJFXBMPBKWIXEWBHHGBLPILUNLOCHAUYRJ");
    tmp_msg_0.predicate.assign("GNRJQURBHXSFWXXQAXSOLABTIVCIITQLJKPDFAHFEMWPYPNBVLLMZWRDJLLDDTRPBNQXTVXSMAYRGPVHQWHTXMSMJKSGGZQKMHYWLGMRUFEKKDSOYYZJHHEBNWDOZFEB");
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
    msg.setTimeStamp(0.0735235528054);
    msg.setSource(20241U);
    msg.setSourceEntity(202U);
    msg.setDestination(44761U);
    msg.setDestinationEntity(115U);
    msg.op = 213U;
    msg.goal_id.assign("RMNSKGAMMOWMNJGUUMZUTSXCFVRHETBPZDDLWSYQWKGYGAZFPXCBQPOUFGEGRMRCFSXRTZINY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZRLLSBBGQQYSWMWWUFDUTHWTTMWVKJAAUNPSSWKXXRHFTHYKJQDWMKRTLGELVOFLDZJKGFNSYRDECMCTGKLEAMTVNLVZUHHQTJPXXROBVCQBVPPUZGBICABJOZPRIZXQJJINGEOMCAEVHMZQNPYWNAKKFSJFRILVPSOPDRUBEFLXEIDGFMZTYZSICAWNOYDIQSOOPAVXIYOUQIN");
    tmp_msg_0.predicate.assign("WBEBLMEFQTSYDAJATDEPENNURBWDNXOADCKBXHOEKQPUHRYWLAXDTLTXSMCLRPTOZJRSOUVBZUBLHJRWRBZEGQHFYOZJMPWQTBUWXSVOPXZLLQXYQXASVEVMAARULPOHVSLYZYOMUVXMVIGDEZNMYDFKFGDFACIUTHMNDNCPBESQG");
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
    msg.setTimeStamp(0.712559397547);
    msg.setSource(8335U);
    msg.setSourceEntity(245U);
    msg.setDestination(56149U);
    msg.setDestinationEntity(211U);
    msg.name.assign("POHVGMEWYFKJYLBUDSTWSLYSRJYLYEDPUYTGNFCSDMPWKMCBQWL");
    msg.attr_type = 213U;
    msg.min.assign("OWNUOWYSKTLYOZIFRSZDMGSCVMGQGMKHITQOTRSEAFIOODPRZAXBAUHCRDTPEBDXXZYKZQYHAMCGELJEPHQVNBOGBKJJLYIHAYXNRWSLJFXOLAXBGBFBRRUMQWEIEFALKIUVDUZDLBI");
    msg.max.assign("KKNUZBEKCYWXRDXMWNXDAXAWOSACRVPQFHBGXCVOIMLFJBCVIZHJEKPREHALYZYGIREZGQNQJSPNENRHVKOXDYCNIRPEKDBW");

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
    msg.setTimeStamp(0.73065069424);
    msg.setSource(37071U);
    msg.setSourceEntity(201U);
    msg.setDestination(25781U);
    msg.setDestinationEntity(204U);
    msg.name.assign("ZBHACRNURASVBCQBTRFMAFMWDSBYJPVPIEBLNIUDKSIEFECEGRMGJSZYJAUKCQLMRZLODIWQGPVUNAPHDWYIPXGYQMTRUZOEWFSWYXLNNXTMVNHXSQLWZVGPOZBWJWXXC");
    msg.attr_type = 9U;
    msg.min.assign("KSPQEBZLASTOLFYDQNQFAIMGGBIDSFBZSJOULHKRSVNHTDVLFSAIGGIUGMQKXUFZIWXUTBAYGPFDBMRKTOCMGDKABXIGHTQOKSHJHELVBDVXXWRICWQBHAJENYOZEZYCUJKTJDWZNYFWXGABCSVMVZXOVXLNPENDLZTNMENYXXPK");
    msg.max.assign("NTWWOZTXACHYEYVHTDJKLSZFGRGLGDOUBOKOEVIBAMUANKSHVMAXPEJDTIELGODZCQJQOYQZAYRUHFBHCMPOJJLDWRBHCYYMWMYFBIDSXHHETOXPMWVPKMFIPEIWZESBKNFNPYEWNNZIPYVSVOJRGQOXTVRUIFXWWKBUXUGSCDLDSNLXQEBRLVIJTJJTQRWCHCLQASCFXKG");

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
    msg.setTimeStamp(0.940754246145);
    msg.setSource(18367U);
    msg.setSourceEntity(40U);
    msg.setDestination(5013U);
    msg.setDestinationEntity(28U);
    msg.name.assign("REPZEEZLRRCWMMTSJKCEZWFDVVXSPLLFWAMFLZDKIJDYEBXENJCFQTOVPPFBSIPQMUJVBHWUFTQLUFMDLACOGTUOUKDYQNMOHFPTHGZVQNKHHNNGUNANMBSCTNGBLYMXAIBEIYAKHJPBZRWWJDPXQYFSGRGQXQLUEOYHKURCYXIDERXTVNGYAPUJWKTKCOIXODRKAIEVOPNIXLCSSVWIJABUDOTG");
    msg.attr_type = 233U;
    msg.min.assign("ROZBKDYXSEESFPKUDRVYMZOOTMAUVPJLMNOIZSVLNNSGYJHUCDWSYZQTJPTRUVEYWNTI");
    msg.max.assign("ZDXUXYMMCMKGINUCGKQJYFGSDYFUKFXRCIERKVEYBGJDBEODKUWGSYSQZYAWAFQVFWJTZJDETVAXEFMKEKYSPWQPHFGZTNCUHHIVR");

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
    msg.setTimeStamp(0.659330774694);
    msg.setSource(41966U);
    msg.setSourceEntity(22U);
    msg.setDestination(28113U);
    msg.setDestinationEntity(93U);
    msg.timeline.assign("YMKOGODCJIAXPYAKQURHBKGHXGNUCMFJEXHYCPBIQKCDZXVTHWGCJORIYRLPVKNEFUMJYP");
    msg.predicate.assign("GORBAUNAXCMTCRHEGLFMRXNYQHLMKQWHMSGXXRSBYQJPSUZQWU");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("DVXRLQODZNABKKUCGIRIYBQAUXQEOWMOSLUXBDPDZIZFGIUZHDXRUVQPJZPNQBHZSUZYMEKQJAVKBGPTCJAYIJTNYOIEKBLDWCFWJSHIJSMOALWXCPXDMEYOVXUGBFFDQPFBKSOHNHINYRECLMOGRNJHLCREQSMMQPRBTOZFGFWNCZANOHHAMKMRPDGLJTLKRVUGWVYYTSRJFJQVKXAIWFMZGWGHWPKCPCFSTXUH");
    tmp_msg_0.attr_type = 58U;
    tmp_msg_0.min.assign("CPWJOJVHWWT");
    tmp_msg_0.max.assign("BQEKUQDBCQRVFDAQOPYUIWKKVGYCOTKHFVLRYXBHLWPZUXDYNEOGVSKPVMMUGXICTHRRPATGUHLYGAAVCGJIIJTESWYNTNLPDRSAICUAMLJLEAXVHUISXCRZXZZPTYRWLTGISJCQWRPXLXTECQHPBADJDNNIOWQMUFZGYRRWZPOKKHGKKAJZNQEDMBMMYDQVZDELXMBFNTCMGWDJHNCVHB");
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
    msg.setTimeStamp(0.166420007358);
    msg.setSource(23565U);
    msg.setSourceEntity(47U);
    msg.setDestination(54406U);
    msg.setDestinationEntity(195U);
    msg.timeline.assign("UHSPRGRSCMOZVZEFCTIJXYTWYYZVDLNCUWSEPGXUADNFZPWSIPBQRTXDNLWIGFXBSIAMIG");
    msg.predicate.assign("JXSTKQVKYMTYJZOWCOHFFKRADHLQVVJKYUPZDOSKFSKXZMNAXKGVCGIVVVUJDHNQYGESRIYEAWYTJOGMWSWARDXMRLVBBJERMEOQIXBRUSSNHYKLFIRMCLCCBMEPGOOFHZWUGQAFLNAYPGGZNXZDAQBTWDITPWGMLQZNALKCIUCTRLJKECPGVPXILSFQDM");

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
    msg.setTimeStamp(0.419144676497);
    msg.setSource(38114U);
    msg.setSourceEntity(171U);
    msg.setDestination(47326U);
    msg.setDestinationEntity(179U);
    msg.timeline.assign("TBFXRXXFFWKMPONGFLCVGISYUEQJGMDOMQBGAYIRNLVUOONICYFWHJBKDPCXNSWDCIOMASPDLGFYRE");
    msg.predicate.assign("ULTDSTHGQKDHTGTSPBVTKBSLECXJPFYZXMWVPKORFXHEXQUZPYGSUOLHPVMZASVECGOAXGLBDVAIYXYIUVQVRKCCJODZTELSXBFFMMPEITOVQFZSTHAIJANGYNOMBILUPZTQIHGWBLQQNRYWADEIPHNQRQYBEXJSKDAMAAYXEUWJTDJRJJFFCHNEVR");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("KVLZWISZFHGAPEFRHSEREIQCBFBMXUYGGWCQUOMBKQLPTJJXBKORMFALLH");
    tmp_msg_0.attr_type = 245U;
    tmp_msg_0.min.assign("DLRBVDHSWJSOVAWPJKFUPCETKXZECUKRCQKPDGTWWHVMVYCTSZITTRLVEKJUFPNRJPIXNJIKCYTHAGAMOMZSKAYIXDYMBIBZQEIRCWIPVMUSKGDNZVXNPOOGIGYWNBMGUXBYQZWHZMFGAGBLZKWQEEQSUBGYYPQXJBOOSCQOBZXADQTFEAVJOTRRENOSXNDHCJHWLLJTACHYGBLIHLPDFXVJUNUSH");
    tmp_msg_0.max.assign("JFXUNKLYXHOIDBTUMZFTNIJJOEXLSMZTPIFOIVCNJXGRRIUYMYJRACSBWFQRNBWAONPVXTSWKVYQBCAPWWQIADFHZSKPLHSBIFAVTXYGVOCNLCYJVJYZCAXMEAQZONKWEQYPCYTENRZZXSPBPHJVROMHMWEHBZQDLEMVHUUBPPUCQRDWJKRENARCGXTKILASGLMQGPZ");
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
    msg.setTimeStamp(0.324148240582);
    msg.setSource(39419U);
    msg.setSourceEntity(232U);
    msg.setDestination(34770U);
    msg.setDestinationEntity(126U);
    msg.reactor.assign("HDMSBQUQXTZFCGYZQVJQBGJQFRISCCHPEBIJRIXYMEWBNVWVIBFTOEUZDZTDODGPCMYZUODFCTFWIKLDAQSHERVJEIHOAOPDYTWJWHSKGCQVTXLYUACXAZNRKYBYAEPIPETHH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ERPXFTXEAOZAQXUTAKAZNJYEXCTFKJRFXQYOVUVFYKICTUGRPHMNCTNNLBBNPTIFGLONYMGJSPQKHSLZMUOAAMACFEYIKRWCHIFILPDZCAHVQADXUSBOYEXDYXPBKZZSHWXLCEWVOEMOKFIRRYLVRLGQZXCKWUVFPBWGDYCPYDKENDPVMMQBIKRJDULFWBUGJHDSUVICSESOSJRNBHJ");
    tmp_msg_0.predicate.assign("IUUARUJWNVKPLXEIMENGYZODGRRYTGEJEAKFWGKPLPPADFPSUHCVWIKMXHABVYLGGLWQJAYQQBCCGSRUSIINNABSWXFAOVJYRXCOQUXOKSPTYGQZIDNIPTWBFVYVAMNMOXRTAMVQ");
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
    msg.setTimeStamp(0.373291463145);
    msg.setSource(3256U);
    msg.setSourceEntity(71U);
    msg.setDestination(41235U);
    msg.setDestinationEntity(209U);
    msg.reactor.assign("OKUXGUMLHUSZMUEOQRSQJSAEULEURRXSAFLECRVQMLNHBQZICVBCYKZUIMAADKYXMSRMNSJDXPOOHKLICRGBVYEXANVYVNJBGGYFZZWHYWPCKNVLSIHFPLTXHHFXWAOFAMWOXPCHOWU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IYUXFOUHDFYTZTCHXAKFEOUQKLUQXQWZAXJKGZZZWFVDABLOYSPNSHPFFTFNKZWHSTNBYWBUXBIRRMJL");
    tmp_msg_0.predicate.assign("EDUWYJJPSBNBPJT");
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
    msg.setTimeStamp(0.191783725723);
    msg.setSource(18998U);
    msg.setSourceEntity(45U);
    msg.setDestination(35669U);
    msg.setDestinationEntity(152U);
    msg.reactor.assign("GIVKPTRIDUSSRXUMZPZDPQMZAVQVGJCJH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BPUJQMLKDKIGUGGBOVOXTYEOSHJSLDRVKZNXPSMREXXLCOPOCZSLSGJQNTTENGZAWBTSEQCLRMBWJMFOZWPZPDWTCSDGWNADRBHJXHLMUYEQZTFIJGFENVLHLAANYHUNBOTKVRRVEYRHGUJTAIOMBIDPKXEUCZNHKMKBDZWQH");
    tmp_msg_0.predicate.assign("BJOMGFTZHBJVGBRPKDIZIUXMCDUFNWBMWYGKCHUURGCCACILMNWYZFVVSQLJTDKNZDKREIZBUYENWQPSVVYJIVKSHVMZLKNKYVNSJDVBJGLI");
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
    msg.setTimeStamp(0.0366983879318);
    msg.setSource(65477U);
    msg.setSourceEntity(194U);
    msg.setDestination(55903U);
    msg.setDestinationEntity(7U);
    msg.topic.assign("HZBLUGAJCKZQIIFCGPNSIZZFPKHMFJBFHVQCWPAYJFWTWBSDYDPCRTCDCRTTLRTONWDVOJJZWFXEROUQYBOEMSYMUVQUEJVUCTWLRRVSAJDFNUXPAKKGQWAVIHSECPILRREKLBADSQZBGYVRPUONAILMUMA");
    msg.data.assign("NSNPMJFWIESWDHVRYMNKSKANZLYORJHJUOXCGHOBEDLQJNTESNAOBPPSSAKYHPAXMRCGJCBKVKETPGLKXXHDTECL");

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
    msg.setTimeStamp(0.96013045643);
    msg.setSource(49177U);
    msg.setSourceEntity(20U);
    msg.setDestination(63622U);
    msg.setDestinationEntity(155U);
    msg.topic.assign("PGWTKYHAIAFWFPRLXKZDSMRYBYHPPTOUBTZWJCIGPWJAGOVMWWMGUPQJTFMLCHNNULRUSEQNUZISGJVRLJLULNEOKQFYOEQGXXBEFAZVHDISOKXICCVQLBEYMONDTRVNERMTPJQYSGRFBEIDAKKWFKM");
    msg.data.assign("BPTXOEZXFTZUKCXCAGURVNPQSDDRFXRXHFAYDVGBJXYIWUKGHJRUORAIPQPCLYKOFFMGGLMUUNXBSCDUTIQYKILJMOXKRPJZEVMBVELSPLBXQGJBIIXFFMACCZKNWHMHWNSTURVZAZTHFARQQINBFTLNOSDEHMJDSDCKZWCMDGPLYOSJYKTHNUORBUOETBPYQAJLGINAZL");

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
    msg.setTimeStamp(0.0832119242589);
    msg.setSource(49242U);
    msg.setSourceEntity(103U);
    msg.setDestination(40680U);
    msg.setDestinationEntity(247U);
    msg.topic.assign("VMVYUNNQVHFXIGKY");
    msg.data.assign("IXQFQEEYRXKNPONTQFLKEIEYHTAGJRRZLBRAYTTQOMNBLLAJPLYIHYKASIZGOSCAFOKSJHYEUQIWBADFFQOJSDWDBZOAZWUVWPMLIZVIXCSVRSXDZQCNKWFFLGNZOJUCZYGCAPGYHVHRYK");

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
    msg.setTimeStamp(0.0749315815699);
    msg.setSource(42780U);
    msg.setSourceEntity(109U);
    msg.setDestination(25401U);
    msg.setDestinationEntity(67U);
    msg.frameid = 86U;
    const char tmp_msg_0[] = {-62, 7, 59, 69, -120, 10, 82, -80, -101, -83, 109, -63, 47, 85, 108, 97, 64, -40, 77, -38, 87, 112, 85, -86, -7, 65, 119, 17, -112, 55, -52, -29, 3, -120, -121, 102, 47, -5, 63, -5, -71, 50, -19, 32, -23, -98, 83, 70, 106, -112, -51, -52, 73, -127, -41, -84, -70, 112, 122, 97, 124, 36, -45, 53, 100, 108, 54, -68, -4, -105, -40, -77, 100, 23, -27, -41, 110, 53, -23, 54, -40, -29, 31, 74, -15, -11, 126, -19, -82, 86, -67, -92, 78, 119, 95, 0, -82, 100, 26, -2, -80, 6, 92, 76, -71, -45, 78, 75, -5, -57, -66, -21, -22, 77, -59, 23, 105, -73, -32, 52};
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
    msg.setTimeStamp(0.0952273016525);
    msg.setSource(25145U);
    msg.setSourceEntity(241U);
    msg.setDestination(11047U);
    msg.setDestinationEntity(124U);
    msg.frameid = 103U;
    const char tmp_msg_0[] = {-113, -72, -122, 36, 17, 9, 1, 7, 97, 67, 37, 43, -34, -123, 52, 72, 61, 12, 110, -97, -99, -25, -83, -86, -86, -100, -127, 50, -82, -47, -94, 67, -95, -41, 23, 47, 35, 13, -31, 48, -98, -55, 116, -78, 2, 11, 69, 50, 49, -94, 48, 86, 36, 81, -41, -64, 99, 7, 14, 71, -71, 22, -35, -83, 25, -86, -45, -3, 71, -74, 24, 68, -69, 4, 67, -15, 29, -102, 72, 6, 30, -109, -24, -52, -30, 122, -33, -88, -83, -97, 118, -93, 2, -55, -37, -41, -95, -41, -57, 86, -117, 6, 25, -3, -120, 65, -94, -40, 41, -32, 100, 27, -70, -19, 6, 13, -50, -76, -23, 90, -36, 65, -24, 6, 103, -12, -3, 29, 15, -34, 85, 102, -1, -107, 45, -88, 102, 121, -5, 109, 120, 111, -92, 65, 94, 78, 56, -36, -80, -62, -30, 92, -61, -77, -48, -88, -72, -33, -38, 39, -10, 110, 45, 99, -102, -52, 89, -43, -122, 51, -38, 63, 73, 36, -43, -24, -12, -61, -114, -35, 112, 40, -15, 13, -8, -99, 23, -124, 111, 44, -74, 53, -59, -83, -113, -115, 48, -58, 92, -57, -85, -46, -9, 7, -86, 15, 27, -16, 101, -20, -80, -57, 71, 57, -85, 63, 16, 52, -122, 13, -14, -1, -73, -53, -93, -96, 80, -32, 7, 97, 73, 119, -80, -31, -81, 39, 115, -48, -42, -51, 107, 63, 8};
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
    msg.setTimeStamp(0.455582621643);
    msg.setSource(54984U);
    msg.setSourceEntity(221U);
    msg.setDestination(45093U);
    msg.setDestinationEntity(104U);
    msg.frameid = 160U;
    const char tmp_msg_0[] = {-11, 16, -112, -57, 53, -45, 38, -20, 33, 89, 59, 41, 50, 66, -53, 38, -75, 81, -126, 102, -38, -44, 113, -28, 15, 37, -42, -52, 123, -58, -49, 114, -78, 13, -57, 104, 117, -101, -63, 106, -98, 64, -97, -119, 21, 16, -100, 67, 27, -82, -122, -73, -20, 25, 84, 59, 23, -95, 114, 84, 41, -1, -104, 99, 35, -56, -118, 50, -125, 47, 114, 73, -65, -126, -127, -117, 76, -120, 111, -7, -125, 39, 126, -34, -11, 15, -73, -46, -25, 11, 57, 81, -18, -124, -51, -118, -84, -74, 86, -51, 86, 44, -83, 86, 23, 96, 6, 102, 24, -105, 52, 84, -62, -52, 98, -67, -39, 87, -91, -43, -2, 26, 77, 0, -28, -59, -48, 118, 102, -31, -58, 70, -48, 3, -88, 107, -6, -25, -115, 112, 46, 55, 107, 43, 75, -5, -85, 122, -117, 107, -106, 103, 87, 120, 116, 46, -85, -21, 115, -128, -126, 23, 123, -94, -79, -106, -34, -109, -102, 85, -21, -114, 26, -43, 43, 31, 125, 98, 116, 80, 126, 79, 32, 86, -15, 94, -62, 119, -65, 114, 13, 82, 67, 58, -7, -29};
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
    msg.setTimeStamp(0.719030778078);
    msg.setSource(19891U);
    msg.setSourceEntity(173U);
    msg.setDestination(50292U);
    msg.setDestinationEntity(4U);
    msg.fps = 123U;
    msg.quality = 5U;
    msg.reps = 46U;
    msg.tsize = 156U;

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
    msg.setTimeStamp(0.344980772329);
    msg.setSource(5509U);
    msg.setSourceEntity(192U);
    msg.setDestination(31927U);
    msg.setDestinationEntity(91U);
    msg.fps = 237U;
    msg.quality = 148U;
    msg.reps = 87U;
    msg.tsize = 191U;

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
    msg.setTimeStamp(0.530893033727);
    msg.setSource(21366U);
    msg.setSourceEntity(41U);
    msg.setDestination(9512U);
    msg.setDestinationEntity(221U);
    msg.fps = 235U;
    msg.quality = 33U;
    msg.reps = 114U;
    msg.tsize = 125U;

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
    msg.setTimeStamp(0.286679639693);
    msg.setSource(43073U);
    msg.setSourceEntity(238U);
    msg.setDestination(1374U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.494038886241;
    msg.lon = 0.303118253037;
    msg.depth = 151U;
    msg.speed = 0.0218963342099;
    msg.psi = 0.845457501295;

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
    msg.setTimeStamp(0.41490543007);
    msg.setSource(57669U);
    msg.setSourceEntity(35U);
    msg.setDestination(3940U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.98425242085;
    msg.lon = 0.60919516334;
    msg.depth = 1U;
    msg.speed = 0.123949581112;
    msg.psi = 0.485524254211;

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
    msg.setTimeStamp(0.692310845041);
    msg.setSource(2977U);
    msg.setSourceEntity(251U);
    msg.setDestination(4963U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.0378947026323;
    msg.lon = 0.716602474533;
    msg.depth = 100U;
    msg.speed = 0.414750513539;
    msg.psi = 0.497665378339;

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
    msg.setTimeStamp(0.297507396067);
    msg.setSource(43805U);
    msg.setSourceEntity(231U);
    msg.setDestination(4808U);
    msg.setDestinationEntity(170U);
    msg.label.assign("ZWEUOVOJEU");
    msg.lat = 0.209124855237;
    msg.lon = 0.671941389903;
    msg.z = 0.864826190424;
    msg.z_units = 169U;
    msg.cog = 0.402263913826;
    msg.sog = 0.476801196388;

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
    msg.setTimeStamp(0.295969210299);
    msg.setSource(739U);
    msg.setSourceEntity(142U);
    msg.setDestination(63180U);
    msg.setDestinationEntity(94U);
    msg.label.assign("LUZZNMTBFNSYHPAOLBLAYPSKEU");
    msg.lat = 0.098997926177;
    msg.lon = 0.710541313366;
    msg.z = 0.554609559846;
    msg.z_units = 92U;
    msg.cog = 0.959361846475;
    msg.sog = 0.952019229786;

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
    msg.setTimeStamp(0.481928109618);
    msg.setSource(53308U);
    msg.setSourceEntity(123U);
    msg.setDestination(45923U);
    msg.setDestinationEntity(77U);
    msg.label.assign("JJUZUDDCJYQWFYDHQEJKWQMGNHNOVNYOXQEZMUPCEEOYGMKYTXVTFLXUVTWRECZSHLICFTRRBMPXTZUFMWHAUYCJJPRSWNQFOWAXXAXHRKCGQBWIQGKLSCVDKOVBRGIZCWISVDTRESMZKTLTKADIPBHEYPOESCAGWYDTAPYFNNPVJHXIFXUMGXNASBGKIFQO");
    msg.lat = 0.304669470892;
    msg.lon = 0.563166088143;
    msg.z = 0.0424042512343;
    msg.z_units = 94U;
    msg.cog = 0.2573867251;
    msg.sog = 0.749216936772;

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
    msg.setTimeStamp(0.432361505085);
    msg.setSource(5216U);
    msg.setSourceEntity(49U);
    msg.setDestination(54084U);
    msg.setDestinationEntity(133U);
    msg.name.assign("CEFGYVROTWUFCRFVIOZPSMXEJPXLPBDPQDIXWAPOHGQKVVUMMXQIJKTMVUBCBMTQUFHFNMQAABJZPNIKDKONYNZ");
    msg.value.assign("YCUSVGDPMJYKNWSWQORPCXVVWHTBUQPZHYWRBNLICBZHKJMOBKMRTKRTOMQTUICFAXQUXAPAWLWLIPXOWCOHETBGJVLEFFRDMDJVVKFYXFENOQAPVLVSQJUCDCYAGNKKSKFNXLOGQALRFDFUFWOESHPJZBXGTHCJINPEDZDSDVIIRYITIYJTGVAKDLPWONZGEXCEGYCUENMDPBMOSLUMB");

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
    msg.setTimeStamp(0.0827849180495);
    msg.setSource(15918U);
    msg.setSourceEntity(190U);
    msg.setDestination(62342U);
    msg.setDestinationEntity(157U);
    msg.name.assign("VKBYIBQAEBWWSIIJSCDAGQHEMPYWSWVCRTXGKCEHTRHUOUJZGKXARXBBECMWVTPPMIXICWUDJXSLYLTQDRHFXEBUQNNFNOMTGZIXWHVTVRNZLLBDAPXBUDYHNFFLNJJVMIMAOXRDOIQMFUXCOYUPSDJURJPFNOA");
    msg.value.assign("TDKPJRCRNIXBASZXAHGLDUYQIZLVKRSGQVSSHIEGFXSEKKFWWPDDBWWUOSHNDLTLQLHKXRZKFXBKADGUNEKQXPWFLBMIMYTCHPUQVNGJJDTSVINOKRMRNMYUABVDMJZOCVVNCTEGCMKJSZOYOPGGIRTTVPEPSOFPGVFMMWMVURHCLUOQWQHJZZOLFOJASEIWUWAWL");

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
    msg.setTimeStamp(0.963117933699);
    msg.setSource(36322U);
    msg.setSourceEntity(66U);
    msg.setDestination(64731U);
    msg.setDestinationEntity(225U);
    msg.name.assign("LQPCYWTTHTWNZEFCLMFXQHAPEYIXLKVDZOIOPLNZFSPVDIRLXSBBCNSCDQXZZCGHJKCYJUOIUVJJGTIBEFFEPSEKMKTBCLGHXXHXOAWVBPGDMNRMVWWENBOKKIHAJLDZAKHSRWBLUWREESTYJHNJGKZASQXXQWKJAYSFMORTVGUJMY");
    msg.value.assign("UMCOXPJIIDGUFGANJUPUYNRLCLLRQZOTPUDLYYKWTRCDZTEEQQJAOSSEBSZQTMKKMVZWAXZAVHURPVPEVOBSDQKDAGQFSRZBSETLPVKERUHUTMIBEFYMUIIDBDSRKVN");

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
    msg.setTimeStamp(0.473000793205);
    msg.setSource(11479U);
    msg.setSourceEntity(230U);
    msg.setDestination(20176U);
    msg.setDestinationEntity(133U);
    msg.name.assign("TBWDAKAQTDVEZACWBRMBOBLOVOYDXFHLHXJSYKAUPJLKFQUIWGUOJGYYRRUSHNHCFBMWMYLZSJBZCLPHXEILARDMTNRECSRQQJQPJQYBWIHIMKNNSUXPISWTZIVFGNVURTTETYNKNZUBRYKTQXJWAGGSGPMKODFFXGGVZIQACEMDEFM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MLJLDVOBRVHWGLAWOTDFVPHZBBXZAPNCQSCKMMUOSLLOZHIWHCSIAOGFMCTIUDMBGSVDENLTOAXUDRWDRZZSFYMDPUEKGHUYKXTRFXNBEIICYAUZVRVEK");
    tmp_msg_0.value.assign("PWPOIGNDFDYLYRJUQJHIYGMRGOEVMUDQUOEEGIXDCZWPPCEHCVJWHHMBIAHXHCDMZNSNTXHDOXSOSLDIPVSFGLMPYQXKEFBSBFRFUWROXENIGPQWUKBGHRCXGATKYTNUBNOALFIVJLCSMEABFKSYYEGVUSRAKBNXWAZTLKLKUIRRKORTWVMDCJYOHAQLGYTUTCZDWZAABWVZMYPJJXSINXOZQ");
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
    msg.setTimeStamp(0.189325514323);
    msg.setSource(34827U);
    msg.setSourceEntity(86U);
    msg.setDestination(23222U);
    msg.setDestinationEntity(64U);
    msg.name.assign("OQOTVSLJZUVEUHEDXHUCBFRPXDVTWHTBINWWYVQSAIORVIOGDESPUMKYKIEBXJNGITYAPYTCAESQMBASJSVEWFZLYGRWXGXXJKYRPMOFLRLYRWBDXZIHHLNNFEIJDNTMNRFEFMZHMJCTAZ");

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
    msg.setTimeStamp(0.906200934028);
    msg.setSource(50962U);
    msg.setSourceEntity(0U);
    msg.setDestination(11483U);
    msg.setDestinationEntity(143U);
    msg.name.assign("DHWLDHIYQZBSJAVK");

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
    msg.setTimeStamp(0.994137053947);
    msg.setSource(17204U);
    msg.setSourceEntity(6U);
    msg.setDestination(40700U);
    msg.setDestinationEntity(189U);
    msg.name.assign("UGLCNIRISURQODBRAGCFBXKYLNNQGZPULURFHBZDWWJNBZEEWDCVQAYTHQRFVKDQHFCVSSUEJMPZIKEYDJOPTGIEQJYPMYWRMLPUDBAWHIMQLXLSAHYJDZEFCZPPONWGOBBDDTAIFFJCJIKSOTMGELMGSXLYTGVYVVWERSOKQRSIQXHATOKUFXGUVJJKFAZEKSZOPBAYWSBYKB");
    msg.visibility.assign("CGHXTCQQCUQXIKQRWAVDCUFNICIIFAJJMIALZDGQEQURDCBONBYIGHAZDFXTMHADWFJFONQSQRSZVOTSTVAGEFJWSIEHOGBAKLQDDHRVYSKNFFVFRAYMHMJKV");
    msg.scope.assign("IYPWBMBSHHMTCKUVYXWYVJLADLAHFSDRDCNESIENLMCAZQTPSGBUANTJKERGPCAQUOQNHQQYKRTOHMXDVQVXJUZORATFWKJSPPEORMTLFWYBXUZWBGUCMYKEVTTNCEOZZVFWWYMOGFBFZIUBERZIHCASNFAKEJYQSIUGDQLFCNGXLDGZWCMHDHVRIR");

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
    msg.setTimeStamp(0.779422739877);
    msg.setSource(31812U);
    msg.setSourceEntity(233U);
    msg.setDestination(34232U);
    msg.setDestinationEntity(187U);
    msg.name.assign("QEEMYOEPSVYAHXOPFKANFLUPUTPBC");
    msg.visibility.assign("WOLLILOJWHAYUBAXVNMDWYUXFSHSGBKIKVEDTEERDCGJYPKKAHQVIUMTONFVKTYHCFNUXVSPFWFFCXGLAZJIIINTVBOXMPJZEORTXBHVCSLHBPOGJGIQPPRJPOJEMMIUFQWRTDGQOXKBWXZO");
    msg.scope.assign("YLXCIKUTODQYHNTO");

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
    msg.setTimeStamp(0.584583542206);
    msg.setSource(64821U);
    msg.setSourceEntity(30U);
    msg.setDestination(26556U);
    msg.setDestinationEntity(9U);
    msg.name.assign("FCSCALQMDNPHRINJHUNQOPRNWPJVGTNIAUBKEKTRWILVBVZMXUWTLYLGMKKDAGXQWRFASYVCTHZNFXFLBUDCWCXMCIKYZUVJMBFKBTOZQYOCEO");
    msg.visibility.assign("WPVBQRXVZCMTDFPUCMATEUCFAGPOAVJAHNJBOEKPTMNUDJIGXRWBSEKHNIFLRQLYWKVEKUGINSSZVYAJZFTUFKVOXWQHWOJGIRMBDHQXEWAXYEDOKEF");
    msg.scope.assign("YHXTEPOJZUMTBYKNHVNIPAQCQLBNYDUSCWQLGOCQNYJXQENOAKDPJAJBLNBSHBXHMBVNILMVNZKYX");

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
    msg.setTimeStamp(0.580338308216);
    msg.setSource(31818U);
    msg.setSourceEntity(249U);
    msg.setDestination(64588U);
    msg.setDestinationEntity(149U);
    msg.name.assign("OVZPXCAMQKTPZLCWEBQCRGFXTAAEIZCLBDXYYPSIUOGPDRGYNAXYJXPHBZVHINTIRWGHUMASNLRXIWEULKPICERBHFGMKRWJKDUGXCSTYMSKISPCTMNESLWJVEVRGLAYFWBBPMJNDYQEDBODUOHVIFKAVRNTDSKHQMDXVIFMTOYXVFCQBUSUUTFSFJMPLACNNEHBWAYUJOUELGFQQTJLVOJHJAZONZQRJZOEQGKINFWHVOHZ");

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
    msg.setTimeStamp(0.271587140127);
    msg.setSource(13422U);
    msg.setSourceEntity(244U);
    msg.setDestination(35756U);
    msg.setDestinationEntity(112U);
    msg.name.assign("PWRKLSJUEBGX");

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
    msg.setTimeStamp(0.35693316797);
    msg.setSource(4771U);
    msg.setSourceEntity(10U);
    msg.setDestination(39864U);
    msg.setDestinationEntity(105U);
    msg.name.assign("HLQKZZXTQWKHLFFTIVJDZVNNPMVDDQZYGIDJSLSBWTISPHIKVRCZWJLCENIIJBK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OZKHAYRWNMDNDTESAEVRLMFFLNIHVSQMCFCDUGCBWHSVTGXQZMMGKUVEJKVVLPAZBEFSQERXPNKBWAABPSUHOSFPNBCQPLFHWZOMRKJTCXHAKKEAWRQXXDWOW");
    tmp_msg_0.value.assign("GOVIIDTHFXBVJQGPNJIU");
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
    msg.setTimeStamp(0.647802017407);
    msg.setSource(50512U);
    msg.setSourceEntity(183U);
    msg.setDestination(24320U);
    msg.setDestinationEntity(119U);
    msg.name.assign("JSJDHCPGICSPUGECXVPUDUMFLTWNAWYSOWLKRJXJSCHFDTIXRRTXQQTTRUIIGPEAECKMWWNBANFJDTUEFAFSRNABARCCGENEAPHSY");

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
    msg.setTimeStamp(0.541169947437);
    msg.setSource(26685U);
    msg.setSourceEntity(59U);
    msg.setDestination(45181U);
    msg.setDestinationEntity(57U);
    msg.name.assign("VETPZOLAPSCDAIWOSGHZXSXNGSVJQRMXNJCYZUPUDKACLXKBUFZSQBGILBLDMKIHKFHBLERXGVPYQSEEPTTASWOMQFVCLZYMYKIWCBIPCWFSRNNVSBJROEGVBQYEDBXRUVJWAYILDYKQIWINAHJROOVAVQKCUZKMREDZUERQSRNMKEXZRDFGUGMMTFMDTFIJAYFNDOXMVYJPUNHGHCNPTJOXHWTANLPQT");

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
    msg.setTimeStamp(0.1681352581);
    msg.setSource(6639U);
    msg.setSourceEntity(241U);
    msg.setDestination(24442U);
    msg.setDestinationEntity(118U);
    msg.name.assign("EPLCHPBWDAQUNNAQUQKBKBECKQTGZAHTAZGKWEVMTNVTOYGQQXIGCVKRSPFNDSRWPWGOBDLSDAGMKBXMZTQRIYEUXJKONFMIYHPAVXLRLXQFZKTOMJDTROFIGINPOBDUCDTUYJCSCWHZFYIBWLWERFJYUXPBNWUXJADBZPPFNRSCONNROMZDHXAKMECRYESCWJKYIWGHYFAOJDEMQHFVJSVLHHGRFTPQSYLMAZVU");

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
    msg.setTimeStamp(0.552493496972);
    msg.setSource(49338U);
    msg.setSourceEntity(77U);
    msg.setDestination(10030U);
    msg.setDestinationEntity(227U);
    msg.timeout = 253040288U;

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
    msg.setTimeStamp(0.255776265252);
    msg.setSource(58006U);
    msg.setSourceEntity(159U);
    msg.setDestination(28006U);
    msg.setDestinationEntity(204U);
    msg.timeout = 2830872178U;

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
    msg.setTimeStamp(0.572849089481);
    msg.setSource(31345U);
    msg.setSourceEntity(218U);
    msg.setDestination(38893U);
    msg.setDestinationEntity(91U);
    msg.timeout = 2197427214U;

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
    msg.setTimeStamp(0.990623461805);
    msg.setSource(61557U);
    msg.setSourceEntity(136U);
    msg.setDestination(36961U);
    msg.setDestinationEntity(209U);
    msg.sessid = 2112548007U;

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
    msg.setTimeStamp(0.280699902126);
    msg.setSource(2416U);
    msg.setSourceEntity(249U);
    msg.setDestination(1385U);
    msg.setDestinationEntity(171U);
    msg.sessid = 4210461497U;

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
    msg.setTimeStamp(0.113965457656);
    msg.setSource(9803U);
    msg.setSourceEntity(113U);
    msg.setDestination(52753U);
    msg.setDestinationEntity(143U);
    msg.sessid = 1267044600U;

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
    msg.setTimeStamp(0.862049510837);
    msg.setSource(54324U);
    msg.setSourceEntity(221U);
    msg.setDestination(22579U);
    msg.setDestinationEntity(77U);
    msg.sessid = 3427932010U;
    msg.messages.assign("DRSPRSJVPWYDFWGCNVNRSMZUPNBTMUJKEFZUZAQFGUHBOVRXTZCKMLRIQJPFSJUOHKWVXAQXFCLWNOFAOPAHEUSPMARCZKRUIGSQHLCYWFPIYIJVCGEXVUOYWZXZHIABBNXDNVOIZZHJRXFABDNQSWLJUTPRYTLBNKKWGLE");

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
    msg.setTimeStamp(0.547433753061);
    msg.setSource(44173U);
    msg.setSourceEntity(228U);
    msg.setDestination(65042U);
    msg.setDestinationEntity(1U);
    msg.sessid = 870319732U;
    msg.messages.assign("IDBGEJDUWHNJHEHLPIVTCZCIMALWYGTVINXVANBUSQREBOCKQMXBKRWEPPUWWKNYZHUVQVIDFARPAMGWUGVQOAEYXYDJTXZRSGKUYNRHQOCSQJGKDZLPMECAZJQZWFXKRWRSGRANKZHNJDGSWGDPBWLLMTSNZIRAFMKBPHIAULLGOZTPVORCBKHXEJSSNNYFLSCXTYJFDICBCXYJAQZLEOVKOVFUFBQTMXOTPSMCJEYM");

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
    msg.setTimeStamp(0.881644563764);
    msg.setSource(27638U);
    msg.setSourceEntity(72U);
    msg.setDestination(26208U);
    msg.setDestinationEntity(155U);
    msg.sessid = 1457095355U;
    msg.messages.assign("PGLQRPFYMWOMVVDSYVFIYSIXGKWXVFGLSCZGOUYFTUAKAHECYWQNBBAWEDMKCBJUEPKDJTKFSJGHKLPXHSPZNQKDYIVIEJQBXWQRJDZSTBRCUQTOVCJHARZPDBUIWPZHXWCAPYCLA");

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
    msg.setTimeStamp(0.900008904447);
    msg.setSource(25532U);
    msg.setSourceEntity(123U);
    msg.setDestination(64054U);
    msg.setDestinationEntity(244U);
    msg.sessid = 762300102U;

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
    msg.setTimeStamp(0.631466121866);
    msg.setSource(27848U);
    msg.setSourceEntity(137U);
    msg.setDestination(5641U);
    msg.setDestinationEntity(189U);
    msg.sessid = 630281387U;

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
    msg.setTimeStamp(0.551869856121);
    msg.setSource(25507U);
    msg.setSourceEntity(132U);
    msg.setDestination(18321U);
    msg.setDestinationEntity(154U);
    msg.sessid = 2835010546U;

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
    msg.setTimeStamp(0.507166644667);
    msg.setSource(26299U);
    msg.setSourceEntity(19U);
    msg.setDestination(32654U);
    msg.setDestinationEntity(241U);
    msg.sessid = 2689814822U;
    msg.status = 219U;

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
    msg.setTimeStamp(0.905156060061);
    msg.setSource(55485U);
    msg.setSourceEntity(116U);
    msg.setDestination(64091U);
    msg.setDestinationEntity(7U);
    msg.sessid = 172439837U;
    msg.status = 222U;

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
    msg.setTimeStamp(0.481877294234);
    msg.setSource(59961U);
    msg.setSourceEntity(8U);
    msg.setDestination(48191U);
    msg.setDestinationEntity(215U);
    msg.sessid = 329305976U;
    msg.status = 200U;

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
    msg.setTimeStamp(0.494208372398);
    msg.setSource(5145U);
    msg.setSourceEntity(46U);
    msg.setDestination(20210U);
    msg.setDestinationEntity(13U);
    msg.name.assign("HEWHIGEYZGOKVRKKOERHYKDNAJFCMEDHGFJDHRKMSCTGWXNUQMPUTHVAEWZUAGTAXBOITDXOXSTZDIXAFBNCZMSDCGIPBUKUJEOBPASYQYKBCMLYLIVXZTWPYOJANEVFVDXNYREHIWZILAFJRICQGVCJNMCDLFUPKDNRTFTRNYJVOBKWQXGSFPQPLTSYXZUVFMCRUQRKWWMTRMSBZ");

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
    msg.setTimeStamp(0.20604933797);
    msg.setSource(36391U);
    msg.setSourceEntity(39U);
    msg.setDestination(36073U);
    msg.setDestinationEntity(244U);
    msg.name.assign("MIEMEXVDSHJUWKFTUAQGUZSIRMEEVTBZCDPPYCWCNBGHYOYRRIKICYPUHXDJMRZMUAPZVWBOLXJ");

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
    msg.setTimeStamp(0.676220834603);
    msg.setSource(43433U);
    msg.setSourceEntity(29U);
    msg.setDestination(33213U);
    msg.setDestinationEntity(41U);
    msg.name.assign("QHQTYBGQTFNGSMOKZPEKWELGKRGAJCKXZMBCXANEXWWSBHCIMLOCVLIZKNKJTZEFHHGPOCHXGUJVTBNIXYQSOLZVBUBRSIYRVZOHPAJJJRIZYXYBDTKHIQUMJLXQVEMXUOMLZDMHNDOVTXQOFRFAFLVRWGTFSVALAPMCWFIYEYEDTHIKGADR");

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
    msg.setTimeStamp(0.67850184574);
    msg.setSource(20016U);
    msg.setSourceEntity(31U);
    msg.setDestination(32228U);
    msg.setDestinationEntity(235U);
    msg.name.assign("UPXBELNZEWJMVRDNTJGJRASHQIDHZCXQVQLHJRFMAWQSXEKVRKKCLNOLDTUZCSMEZLBRAICTCFPBMOIZITWQFHMOIDSQHBOGEHZBKEWTYPVFGKSBQVJYYKMANAPCZOVBISWFOTEWNLUYUCJTMKVVCRWDTSVANXIRFIMRFGQCQEHHLNSUTQGGYARAEFGUMYKSPGPXXWCJUZDXIWNNTBORGFHXJMWVFKAYSPNEZHAUDUOJDDILYZBPDGLYOP");

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
    msg.setTimeStamp(0.656752680636);
    msg.setSource(58590U);
    msg.setSourceEntity(227U);
    msg.setDestination(28434U);
    msg.setDestinationEntity(252U);
    msg.name.assign("FVOMZHFERBNYXWMGILYJNHAJDRHLRBBHHYJUABUFQTZDKFXNPZJAEFVHMZWGMUTXTQSNSEKZJMKGFZKOAMSDJYAKCTXEWQOCOJHLVXKRAIBTLPWSYDCUPIGUVJTSXGILLHQWSYU");

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
    msg.setTimeStamp(0.979526109989);
    msg.setSource(40614U);
    msg.setSourceEntity(74U);
    msg.setDestination(59258U);
    msg.setDestinationEntity(117U);
    msg.name.assign("ORRJXXGSDWIGKSMDFBHNTMBMRPLVCKQEGLRIUQXODIFLCARFLGLRSGLYCQTNZBYYFHVZMHNIDIWOSEKMTCQUQPPMLOAGJAXCJEENZA");

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
    msg.setTimeStamp(0.29967704421);
    msg.setSource(10917U);
    msg.setSourceEntity(134U);
    msg.setDestination(65007U);
    msg.setDestinationEntity(16U);
    msg.type = 81U;
    msg.error.assign("NFMRCFCZVEMRZPWQLZWJFOGLKTJSTXJLSIGINIEYUVYFIANESCCLBHTVRLZYMJQFSTHJH");

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
    msg.setTimeStamp(0.255817799745);
    msg.setSource(63237U);
    msg.setSourceEntity(175U);
    msg.setDestination(54273U);
    msg.setDestinationEntity(116U);
    msg.type = 94U;
    msg.error.assign("IKWWYSBTAYASWZSJYLZPXBMXTIQJEHUDRDLNQFFUXYMABWESTRAYTNECOVDVLKIKHHZJGOJEHHBMXTVXITCNOFEMFLYQWIQQXYOIKTDOG");

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
    msg.setTimeStamp(0.910805798631);
    msg.setSource(8048U);
    msg.setSourceEntity(48U);
    msg.setDestination(19498U);
    msg.setDestinationEntity(130U);
    msg.type = 143U;
    msg.error.assign("EHOFFLMAFBFVLWZIIISPLVIXJABEZKWGSRGRAEUKUUDXGKUCNEDCBZXDJOTJKCCARYJVZGKEYTMSAQHRJHDOWTORHGXTSWCRYUWBDQONHFBMUPFENTSNHCGJYCYLZGZWFMMCVDIPYHHQVDVAKYTTICHEEWUQGMDPSPSVXFZIBBKBZUBOSSJPONJYGAUVVJRELMGFXOEXBPNFPTNIJLLKNTVYPOAMHQLZXQWLTWQSQMWUKKNII");

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
    msg.setTimeStamp(0.00823596277337);
    msg.setSource(52044U);
    msg.setSourceEntity(178U);
    msg.setDestination(287U);
    msg.setDestinationEntity(58U);
    msg.seq = 33702U;
    msg.sys_dst.assign("RFGYLEEINLOQLDPHCDRZJBMYFTQOZOBKGFWVTMIBNYXFWNWFAUYEBPCMWYUWCWIGWASJQEUHJSXTCDDIHGRFXQDURNMJCLTGVAXIYPHHJZKVCRSNWUERLLTVKDXGFALVZQJYSDMFKHHKZCCKSIMTJPPWSSFEGNHOQLZLRBYPBNJAYBNCUEVIAAMCBYIEHUSZTDEOXNRNSVOKTUKZUZVVBKKGFPORGAH");
    msg.flags = 131U;
    const char tmp_msg_0[] = {74, 82, 94, 93, -61, -49, 35, -35, 14, -57, -6, -35, -90, -10, -19, -50, -8, -39, 1, 99, -31, -26, 71, 40, -82, -75, 35, 33, -1, -70, -26, 123, 14, 122, 92, 83, -43, -26, 95, 80, 7, -110, 118, -2, -44, 112, 64, 10, 15, -44, -9, 6, 84, 68, 92, 74, 59, 92, 32, -128, 56, 106, 43};
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
    msg.setTimeStamp(0.219873095939);
    msg.setSource(51337U);
    msg.setSourceEntity(208U);
    msg.setDestination(20979U);
    msg.setDestinationEntity(135U);
    msg.seq = 64923U;
    msg.sys_dst.assign("JERDQMIGEABMPOVJWSNSGXPABZMUOJBRRSLDTICTNSENNSXQTKBPXCUTYESDJRZPHWUMXAHZTDIOQLMICNZWKRJRPEFH");
    msg.flags = 37U;
    const char tmp_msg_0[] = {-54, 44, 84, -28, -25, -17, 116, -125, 64, 1, -19, -128, -108, 27, 80, -30, -71, -84, -95, -57, 36, -41, -79, -117, 48, 5, -9, -126, -108, 85, 115, 48, -123, 78, 30, -13, 58, 45, 30, 56, -36, -38, -46, 92, 30, 96, -7, 56, 120, -49, 113, -121, 88, 124, -43, 0, -86, -118, -46, -119, 51, -47, 15, 66, 14, 88, -104, -88, -21, -25, -15, -61, 71, 126, 122, -92, 29, 12, -55, 69, -10, -18, 76, 66, -84, 33, -92, -79, -55, -61};
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
    msg.setTimeStamp(0.0962383331553);
    msg.setSource(5554U);
    msg.setSourceEntity(230U);
    msg.setDestination(3839U);
    msg.setDestinationEntity(1U);
    msg.seq = 3314U;
    msg.sys_dst.assign("VMFQROFMYHWGZGRUTKVJHCARNUIFFRVTTCWTXLYUYECWTLGZHYBOBQQXDCXAEHEEGANNWENEBCSOVVRAVYWJXPOFSTEZSKNWZBHHOPKESDYUFTIDKSMKNVXQDYUXMSJYDPBPIIJKEDXZFIOBGOJKWVGPGUMROIINPKFCPAXLQCUCJRSAQIRBZPTZKMULPCNHLBSDIMNZXBDQARLWNFWT");
    msg.flags = 62U;
    const char tmp_msg_0[] = {14, 68, 57, -89, -104, -65, -127, 13, 21, -122, -3, -55, 78, 42, 48, -98, -36, 98, -3, -6, -12, -89, -61, -8, 51, -19, 1, -81, -83, -107, 0, -25, 101, -24, -78, 65, 39, 108, 98, -24, -11, -20, 66, -25, 65, -25, -98, -115, 56, 35, 33, -86, -31, -89, -89, 13, 26, -77, -73, 117, -4, 126, -16, -70, 56, -55, -4, 73, -72, 102, -40, -41, 115, 66, -104, 15, -4, 64, 20, -58, -117, -79, 71, -49, 20, 39, 41, 86, 68, -69, -75, -69, 8, -122, 43, -54, 95, -8, -15, -24, -115, 3, 23, -55, 66, 85, 1, -52, 100, 7, -11, 26, 44, 124, 17, -6, -25, 65, -72, -50, 19, 11, -31, -13, 121, -5, -97, 1, -117, 3, 42, 79, -92, 4, 37, 73, 63, 17, -43};
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
    msg.setTimeStamp(0.293871363032);
    msg.setSource(18241U);
    msg.setSourceEntity(141U);
    msg.setDestination(58012U);
    msg.setDestinationEntity(94U);
    msg.sys_src.assign("ZIYJXHBWLZTYUTERWBAQBLKGKYORSHXZJBWSJXGYBOBDKKJNWFMZOXFBUGWCPVANJRVAEXFOZWV");
    msg.sys_dst.assign("GRSFJEJZZFENYUZZRLDCNOWKUUUQTSOVJSTXNCNSHEXDUZFGTFOGLMNTPQJSWVRVGQPGKFOAAXVTDDYQOGIUMHWHSVNCICAHIAYYKOTLBPTVPBUQMEIWZPYBMDISMCTCXDJESHFBHNQRPSOKLFUARKHID");
    msg.flags = 80U;
    const char tmp_msg_0[] = {119, -122, 66, 26, 63, 42, 39, 96, 34, 65, -4, 31, -38, -85, -84, -1, -74, 54, 120, 91, 90, -117, 113, 106, 34, 60, -11, -95, -101, 118, 110, -105, -34, 63, -110, -110, 76, 106, 54, 96, 72, -54, 97, 40, -87, 88, 14, 7, -125, 35, -56, -7, 51, -120, -65, 126, -21, -82, -76, -125, 43, 27, 78, -20, -52, -106, 23, -119, 71, 126, -6, -107, -77, -56, -98, -62, -99, -41, 78, -58, -89, 54, -82, 37, 99, 80, -20, 71, -64, 94, -123, 73, 110, -98, 4, 80, 80, -32, 104, -36, 84, -23, 114, -118, -22, -75, 18, -47, 31, -108, 76, 98, 116, 118, -45, -109, 89, -100, -48, 29, 103, 16, 30, 0, 104, 49, 47, 39, 48, 32, -11, 37, 92, -29, -44, -50, -54, 67, -4, 30, -28, 25, -39, -48, -118, 53, 35, 126, -104, 114, -53, 46, 31, -3, -35, -98, 75, -68, -76, -122, 75, -53, 117};
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
    msg.setTimeStamp(0.462315587083);
    msg.setSource(38500U);
    msg.setSourceEntity(149U);
    msg.setDestination(43364U);
    msg.setDestinationEntity(33U);
    msg.sys_src.assign("CFZPRHRDFRFOEMRGUJZSRHSGGKVNMOUCGNIECTKWXJBBINCIFZLOZNOESMUNHBVVYTWDDVROOKAPWEYWBXTYIHZQYCWKRMBZHYPLLWPZQVUSBCELHPWZGGSEFBPYFPASLSVNARNDIISRKDTQDVQMRATEDFBSXNQWBHGJKAIXOTZZLDAQ");
    msg.sys_dst.assign("WKQUGGYJANMRQGRLHMHTSQWOTTNAJNINCYNKOZPQNARYSODGRYAPSFLDXGFXKAREGJQGGRFAMZCOHZDUHLRIZLWKFPTMOOYXBVHHJPIFWTECPVAFTETHVXQDVEBDPKGYCWZJWFSKDHIMTPVWISCHEPKQEELZBEWXYJOMBXDLZNCINSULUXYLUROCIIPVSCMVFVTFSOYEBBTMIIWBXBMSSGJQUQCNDUCMWZAXJXLKNUYQFAPKOZRRJEBJULAB");
    msg.flags = 107U;
    const char tmp_msg_0[] = {86, 7, 73, 18, -124, 92, -83, -44, 48, -128, -67, -125, 23, -30, 42, 103, 116, 82, 64, 84, 80, -5, 31, -123, -28, 24, -68, -112, -123, 118, 77, 63, -106, -12, 55, 101, 88, -69, -118, 44, 80, 104, 73, -93, 117, 102, 6, 98, 47, 35, -89, 4, -117, -37, -126, 81, -61, -3, -70, -96, 27, -34, 10, -80, 76, -17, -6, -103, 113, 50, -15, -34, -1, -128, -74, -47, -10, 108, -49, 126, -41, -37, 74, -122, 21, -98, 7, 96, -106, -79, 104, -41, 123, 51, -68, 26, -4, -38, 71, 44, -101, -77, -14, 46, 76, 14, 32, 110, -107, 117, -48, 18, -104, 125, 77, 31, 24, -54, 4, -11, 53, 35, -128, -117, 60, 123, 63, 71, 82, 91, -52, -35, -48, -69, 50, 1, -68, 125, -48, 96, 64, 48, -55, 16, 33, 83, 39, -27, -101, -35, 85, 102};
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
    msg.setTimeStamp(0.37476296904);
    msg.setSource(51764U);
    msg.setSourceEntity(39U);
    msg.setDestination(41808U);
    msg.setDestinationEntity(94U);
    msg.sys_src.assign("PDQDWCTECGVRVHSVDMPZURRCUMQUTHGPGOAKYGRWBGPNQMEXWJBYLLTNRXLXVHJAPYDNBAFEIFNFCJLKZRHEITAWPHOJXGYIKMPMXJMWRVIQFDSJWHWZPESBVCICUMNIDFSBZTHOIVTSKHVIJZKMQWONTOSOJKFXMPAREYZCVSKBXTYUUQJALYLIOWBXALFKDYGFNCZRAZONBHNUEEBFCOTDXEK");
    msg.sys_dst.assign("BQNRHYMJOTBXPIVPETVCYWEACIPTEIYQSZRGAGUHYHDTZFMICPMHNVBZUQZQFQIHKNDJGNCDDFIHGWGWUKXNZKICAHWIWOHWAEUPWVUJQXXJMZSJZYOLFP");
    msg.flags = 217U;
    const char tmp_msg_0[] = {52, 77, 106, 3, 71, -123, 119, -94, 115, 0, 50, -65, 2, -110, -14, -25, 58, 106, -104, -57, -19, 124, 79, 90, -32, -67, 80, 109, 0, 14, -4, -17, 46, 74, 28, 12, -11, 59, -123, -89, 88, 13, -25, 91, 56, 52, 96, 14, 42, 71, -70, 96, -75, 0, -76, -103, 91, 63, 61, 6, -42, -31, -68, -27, 24, 24, -49, -25, 4, -100, -77, 28, 69, 56, 51, 70, -69, -96, -62, -111, 62, -53, -15, 55, 40, -95, -9, -39, -11, 92, -68, -59, 97, -66, 124, 117, -100, -113, -27, 73, 69, 83, -71, -40, -124, 122, 121, 115, 47, -128, -73, 70, -91, -113, -42, 25, -72, 66, -32, -86, 47, 8, -61, 122, 63, 119, 106, -51, 4, -75, -58, -8, 5, 101, 63, -33, -113, 70, 112, 20, 36, 126, 48, -18, -80, 114, -15, 29, -97, -114, -79, -73, -40, -18, 91, 53, 71, 27, -68, 106, 122, -39, -109, -124, 113, -27, 90, -81, 15, -91, -100, 15, 56};
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
    msg.setTimeStamp(0.720436509064);
    msg.setSource(1975U);
    msg.setSourceEntity(113U);
    msg.setDestination(64123U);
    msg.setDestinationEntity(18U);
    msg.seq = 3586U;
    msg.value = 142U;
    msg.error.assign("XIUOFFGQXLKISPRXUIRAEAWNIFMFTLWDGFWYJLAQZNAYVHHSCIULBGTGDHNPNJIGMMPKKPJAEKLZZFQMOAMGICYDJKSUPTBQORNPFCUZPFEXVQTXYRBJQTLHPMBMORTALHNTXAJBCDXYUXEHHWZUUIGBSYJOICFHJHNXESHZRTWQOK");

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
    msg.setTimeStamp(0.455536168962);
    msg.setSource(2939U);
    msg.setSourceEntity(114U);
    msg.setDestination(11912U);
    msg.setDestinationEntity(133U);
    msg.seq = 17443U;
    msg.value = 226U;
    msg.error.assign("SWDRFQDSTHYGUHZECAMEQNTKYHRVWIRBGFDLUCRMNRUQVJAHDUGPSDAMCCQZWTYOZJCFASZOXUDTOCJOKSXYBAVVTKQFTCYWEEIZLBWZYQUMPDMJRVDTKXHRNGXJIVRUDLWYPFVHPXEIA");

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
    msg.setTimeStamp(0.271491992843);
    msg.setSource(31995U);
    msg.setSourceEntity(76U);
    msg.setDestination(13638U);
    msg.setDestinationEntity(167U);
    msg.seq = 33554U;
    msg.value = 208U;
    msg.error.assign("QZHSIZCKXBTHYELVSOPQFGZMLMBQGFDAPEFKUNXKTCUQNKYGUMCDARIGTGMZTGSXZZRRKOCDNOFRDXFZYJME");

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
    msg.setTimeStamp(0.855561689281);
    msg.setSource(36686U);
    msg.setSourceEntity(151U);
    msg.setDestination(17549U);
    msg.setDestinationEntity(218U);
    msg.seq = 895U;
    msg.sys.assign("UQUSTZVAENCNJJMSPAMFQGXUXEAPRTPPSXMBWJGAHNEWKXDGMLNFHZWRVKVFXECUJHQXGOPHDJU");
    msg.value = 0.239028012998;

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
    msg.setTimeStamp(0.259857461817);
    msg.setSource(41451U);
    msg.setSourceEntity(7U);
    msg.setDestination(32586U);
    msg.setDestinationEntity(132U);
    msg.seq = 35775U;
    msg.sys.assign("RLVZFRLQJMXOXNFDZWVZHVCVKJADBIEXKQGYVNKEHQJCEWLOLAXFUSXZSLETHOITREDGLDQSMSDERHYQUEXJMVWFJPAAPAATNUNIDUWTUHSZFUWZRSCCVYIPIXOEAWRMNUFSPMDBFBKNJFCNJROCAZQADPVHVGZBCDYLGNKKTBFPLUPXTGRYKSWOUBQMOHABOLYTQYGYRUOGTCKKZSMBHCGEGOIBEL");
    msg.value = 0.177331008516;

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
    msg.setTimeStamp(0.73368719905);
    msg.setSource(52962U);
    msg.setSourceEntity(129U);
    msg.setDestination(52213U);
    msg.setDestinationEntity(141U);
    msg.seq = 7227U;
    msg.sys.assign("PVHIENHKBLUECDKZQXQUZRYQYXARBENJRWJIXRKGOPXYWSDPUSLOCFKOBSZWMUKHUSEGNCJRIGXOOINYGTAHFAHIMIXCPVLNVHPZDWWGLGZNOZQWJGJFROIVJVAEQUARCPPGBVWYMDBUJTXHMVMGSLTXDKEECKBSOZFNKZDXQJZUVZLHTYNMCQDSWVLVYFEIGEIRMDEQUJALMHYPTRDJT");
    msg.value = 0.562840132728;

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
    msg.setTimeStamp(0.621395567485);
    msg.setSource(40374U);
    msg.setSourceEntity(144U);
    msg.setDestination(18196U);
    msg.setDestinationEntity(207U);
    msg.action = 215U;
    msg.longain = 0.0771345477326;
    msg.latgain = 0.156606481688;
    msg.bondthick = 529945566U;
    msg.leadgain = 0.186572661452;
    msg.deconflgain = 0.702388149572;

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
    msg.setTimeStamp(0.248927515982);
    msg.setSource(58421U);
    msg.setSourceEntity(203U);
    msg.setDestination(37623U);
    msg.setDestinationEntity(62U);
    msg.action = 65U;
    msg.longain = 0.95852981881;
    msg.latgain = 0.637769357411;
    msg.bondthick = 3908708769U;
    msg.leadgain = 0.257613940108;
    msg.deconflgain = 0.855168994587;

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
    msg.setTimeStamp(0.441073881583);
    msg.setSource(42343U);
    msg.setSourceEntity(173U);
    msg.setDestination(19990U);
    msg.setDestinationEntity(220U);
    msg.action = 168U;
    msg.longain = 0.00927299270966;
    msg.latgain = 0.754104625054;
    msg.bondthick = 1790313267U;
    msg.leadgain = 0.661105488035;
    msg.deconflgain = 0.987148693083;

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
    msg.setTimeStamp(0.630847026412);
    msg.setSource(39193U);
    msg.setSourceEntity(24U);
    msg.setDestination(161U);
    msg.setDestinationEntity(254U);
    msg.err_mean = 0.527506347477;
    msg.dist_min_abs = 0.745336787326;
    msg.dist_min_mean = 0.664543516647;

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
    msg.setTimeStamp(0.248460955624);
    msg.setSource(48993U);
    msg.setSourceEntity(39U);
    msg.setDestination(55891U);
    msg.setDestinationEntity(170U);
    msg.err_mean = 0.99604170607;
    msg.dist_min_abs = 0.420257798626;
    msg.dist_min_mean = 0.279432529429;

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
    msg.setTimeStamp(0.416402852244);
    msg.setSource(47343U);
    msg.setSourceEntity(177U);
    msg.setDestination(64203U);
    msg.setDestinationEntity(15U);
    msg.err_mean = 0.380139622924;
    msg.dist_min_abs = 0.175933468423;
    msg.dist_min_mean = 0.146723141157;

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
    IMC::MessagePart msg;
    msg.setTimeStamp(0.181870658548);
    msg.setSource(9696U);
    msg.setSourceEntity(249U);
    msg.setDestination(23339U);
    msg.setDestinationEntity(55U);
    msg.uid = 35U;
    msg.frag_number = 93U;
    msg.num_frags = 215U;
    const char tmp_msg_0[] = {62, -126, -24, -60, -36, -5, -60, -34, 109, -40, -34, -128, -30, -5, -93, 84, 117, 21, 89, 69, 35, 47, 40, -103, -110, 66, -59, -38, 71, -48, -80, 113, 124, -42, 124, -56, -91, 59, 75, 44, -7, 0, -55, -79, -30, -24, -39, -67, 74, -45, -71, -125, -23, -100, 47, -126, -9, 27, -118, -72, -82, 17, -125, 31, -102, -91, 53, 24, -93, -51, -43, 88, 51, 100, 117, 42, -38, 83, 7, -19, -112, 1, -93, 101, -70, -26, 80, -1, 1, -71, 111};
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
    msg.setTimeStamp(0.547644444896);
    msg.setSource(738U);
    msg.setSourceEntity(40U);
    msg.setDestination(46040U);
    msg.setDestinationEntity(132U);
    msg.uid = 65U;
    msg.frag_number = 190U;
    msg.num_frags = 77U;
    const char tmp_msg_0[] = {-84, -31, -58, 2, -118, -21, -38, 65, -41, -65, 71, -118, 38, -52, -70, 69, 74, 6, 79, 8, -37, -47, 2, -31, -94, 104, -75, 62, -49, 120, 14, 72, -59, 28, -119, -87, 93, -31, -53, 95, -113, -55, 35, 85, -4, 87, 25, -38, -81, -72, -127, 13, 57, -88, 96, 20, -103, 59, 46, -108, -53, 91, -74, 6, 2, -66, -45, -54, 95, 10, 8, -45, -29, -67, 107, 93, -118, 23, -32, -116, 7, -87, 60, 91, 31, -115, 37, 30, 90, 105, -59, -96, 3, -10, 4, 1, 87, -90, 92, -10, 95, -38, -117, -61, -65, 103, 60, 100, 27, -14, 23, 90, -116, 33, -99, 101, 46, -1, 45, -62, -20, 109, -97, 18, 113, 47, 26, 4, 23, 28, -108, -54, -86, 34, 1, -20, -85, 100, 39, 44, -83, -115, -58, 98, 26, -86, 35, 92, 49, 9, 113, -47, -89, 126, -5, 121, 75, 126, -40, -93, -22, 28, 5, -69, -21, 66, -105, -74, 120, 64, 54, 8, -54, -116, -32, 18, -1, -55, 109, -79, 124, -85, -82, -89, -119, -125, 47, 15, 38, 123, -86, -42, -46, 27, 110, -122, -23, 38, -27, -61, 21, 12, -15, -39, 115, 94, 55, -35, -94, 16, 101, -51, -79, -45, -28, -90, -85, -84, 96, 97, -14, -82, -116, -45, 115, -82, -25, -113, -125, -115, 76, 28, -20, 1, -61, 92, -27, 62, 107, -112, -63, 81};
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
    msg.setTimeStamp(0.852130175848);
    msg.setSource(13854U);
    msg.setSourceEntity(71U);
    msg.setDestination(22813U);
    msg.setDestinationEntity(223U);
    msg.uid = 22U;
    msg.frag_number = 6U;
    msg.num_frags = 65U;
    const char tmp_msg_0[] = {107, 29, -123, 83, 104, -31, 28, -40, 90, 81, 4, -52, 115, 1, 115, -34, -31, 65, -14, 120, -43, 92, 33, 97, -20, 90, 0, -1, 117, 19, -100, 36, 95, 34, -103, 68, -100, 92, -123, -127, -44, -4, -44, -97, 40, -85, 62, -68, 119, -24, -33, 40, -75, 97, 123, 58, -78, 111, 57, -83, -15, 86, 46, 5, 21, 54, -57, 98, -54, 31, 8, 88, -58, -64, -70, -63, -32, -71, -21, -33, -57, -90, -75, -106, 89, 55, -78, 67, -126, 82, 27, -88, -16, 4, 11, -5, -127, -73, -53, 33, 92, 59, -40, 92, -80, -18, -107, 81, 85, -122, 88, 83, 19, -53, -109, 82, -23, 11, 23, 41, -8, -111, 70, -84, 122, -111, 23, 65, 105, 61, -109, -13, 115, 24, -117, 69, -4, -43, 4, -7, 54, 105, -128, -104, -22, -58, -103, -115, 59, -122, -88, -38, -115, 0, -85, -120};
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
    msg.setTimeStamp(0.94701980768);
    msg.setSource(9302U);
    msg.setSourceEntity(208U);
    msg.setDestination(55728U);
    msg.setDestinationEntity(76U);
    msg.content_type.assign("UQOWSNVYTADJLADLLHYMHRGQWPISJUQDZKTOFJDIFPZXXIGSNMKBFTKPNNAIOGTSXVYGMAKHMAXRWYEHWZSXMJZYIGEOPZPHLVABDICOWWURPUGRXPQRVMOAWUZLLYCSDVESBNUISNAVVXUQBTZHPFXFSIEYMKLTXWZTCBHECYYAHGRQHKLKROFKCWSQOFDCCDDY");
    const char tmp_msg_0[] = {-58, 45, -57, 126, 29, 62, 45, 58, -122, 122, 10, 56, -26, -40, 104, 52, 86, 95, 72, -58, -72, -78, -63, 14, -34, 93, 42, 105, -41, -63, -20, -35, -99, 116, -116, -36, -20, 74, 41, 40, 83, 95, -115, 2, 79, 86, 75, -16, -82, -62, -2, 90, 2, -106, 21, -63, 35, 69, 50, -39, -122, -42, -83, -10, 80, 46, -57, -80, -55, 87, 95, 99, 106, 46, 95, -77, -99, -12, 122, -99, 70, 114, -61, 107, 112, -77, -71, 4, 25, -85, 82, -17, 67, -13, -47, 117, -29, 85, -45, 97, 67, -117, 47, 22, 13, -60, -124, -55, -22, 76, 120, -11, -11, -47, -25, -123, 49, -59, -18, 115, 120, -16, 74, -84, 7, 11, 123, 33, -1, 120, -36, 62, -96, 22, 88, -48, 73, -93, -65, 88, 48, -42, 126, 14, -2, 3, -125, 12, -21, 43, 27, 59, 87, -127, -28, -1, -34, -106, -55, 73, -126, 123, -103, -118, -69, -5, -85, -9, 89, -37, 10, -82, 35, 61, -29, -97, -86, 37, -64, 78, 41, 98, 116, -128, 22, 100, -1, 0, 108, -30, -86, -89, 68, 10, 50, 38, 87};
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
    msg.setTimeStamp(0.755200956692);
    msg.setSource(21970U);
    msg.setSourceEntity(202U);
    msg.setDestination(22068U);
    msg.setDestinationEntity(6U);
    msg.content_type.assign("RHBYPSLWAUKAUQTYZSNOEOGDLXDNSRCBGFHNMEUYFSTVEWCLGMPFSIGINJVWJRXXINIHDOOBQJQPYFAGHWKCDICKZXBAQECTOCLJFVUBJNYNRGXNISRVKOLJMDKYSBILEDEDZLURAWYTAVRZKXFVABXDNOIXTQEXZTYQPVG");
    const char tmp_msg_0[] = {-71, 67, -106, 108, 7, 116, -90, 104, -67, -59, -53, 108, -43, 91, 111, -98, -97, 25, 49, -104, 81, 4, -124, 9, -58, -103, -110, -115, 67, -28, 44, -18, 53, -32, 112, 6, 124, -97, -126, 68, -71, -122, -54, 118, 26, -24, -16, -100, 63, -98, -15, 53, 37, 89, 30, 19, -94, 103, -79, 13, 38, -58, 49, -105, -95, 54, 16, -46, -123, 65, -107, -47, 109, 95, 9, 111, 74, 46, -92, -114, -36, -5, -13, -11, -96, 92, -92, -82, -63, -91, -97, 32, -111, 41, 73, 1, -123, -89, -115, -22, 119, -24, -82, 125, 42, 124, -3, -40, -101, -4, -44, -86, -90, 25, -86, -124, 43, -49, 53, 55, -113, -111, -98, -5, -37, -18, -69, 114, -20, 60, -18, 10, -76, 124, -82, -36, -95};
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
    msg.setTimeStamp(0.523007380429);
    msg.setSource(16782U);
    msg.setSourceEntity(103U);
    msg.setDestination(29019U);
    msg.setDestinationEntity(233U);
    msg.content_type.assign("DYRUGMBLRDCUSLVBOSFBDYAEATLRYIZLCZFWVOHEYHBMJMTKKPVSGKPEHOKGUWZTIWUOKGJQUFXAHFDUTMPQQQURGOFVCJBOTTZXEDRPANCJCXLXHQDFOTVTSGERIZNKEBGOGWEXVFHCJTNPBXOJLYDQDNBIYZ");
    const char tmp_msg_0[] = {71, -84, 26, -39, 51, 62, -96, -94, -54, -98, -15, -61, -87, -78, 12, 72, 80, 62, -125, 11, -59, 120, -11, 42, 123, 50, -109, 118, -28, -29, 101, 90, 42, 77, 71, -60, -66, 49, 107, -3, -24, -66, 70, -34, 95, -80, -78, -20, -28, -57, 120, -122, 5, 85, -37, 48, -33, -108, 20, 15, -38, 103, 126, 86, -92, 126, 15, 56, 89, 23, -47, -72, -23, 101, -22, -73, 24, 114, 31, 102, 33, 15, 74, -20, -55, 92, -20, -28, -123, -121, 42, -26, 28, -53, -42, 112, 92, -115, 14, -25, -121, 7, 124, -103, -37, 44, 26, 119, 24, 125, -21, 53, 102, -84, 58, 13, -77, 114, -52};
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
    msg.setTimeStamp(0.113440827605);
    msg.setSource(20941U);
    msg.setSourceEntity(58U);
    msg.setDestination(22281U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.537542771611);
    msg.setSource(30013U);
    msg.setSourceEntity(103U);
    msg.setDestination(58594U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.309735091491);
    msg.setSource(19074U);
    msg.setSourceEntity(104U);
    msg.setDestination(61850U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.563814006073);
    msg.setSource(60531U);
    msg.setSourceEntity(204U);
    msg.setDestination(46733U);
    msg.setDestinationEntity(208U);
    msg.target = 32287U;
    msg.bearing = 0.628001909461;
    msg.elevation = 0.879927415647;

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
    msg.setTimeStamp(0.444017133264);
    msg.setSource(8699U);
    msg.setSourceEntity(186U);
    msg.setDestination(24438U);
    msg.setDestinationEntity(100U);
    msg.target = 19237U;
    msg.bearing = 0.723356738029;
    msg.elevation = 0.335067313602;

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
    msg.setTimeStamp(0.676844404379);
    msg.setSource(40618U);
    msg.setSourceEntity(89U);
    msg.setDestination(29971U);
    msg.setDestinationEntity(124U);
    msg.target = 48659U;
    msg.bearing = 0.0682793752352;
    msg.elevation = 0.510836084537;

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
    msg.setTimeStamp(0.916238444939);
    msg.setSource(52654U);
    msg.setSourceEntity(73U);
    msg.setDestination(1519U);
    msg.setDestinationEntity(242U);
    msg.target = 17772U;
    msg.x = 0.332500194124;
    msg.y = 0.738321031903;
    msg.z = 0.90675002444;

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
    msg.setTimeStamp(0.762891123674);
    msg.setSource(7234U);
    msg.setSourceEntity(145U);
    msg.setDestination(52137U);
    msg.setDestinationEntity(238U);
    msg.target = 21224U;
    msg.x = 0.498089749712;
    msg.y = 0.0422760862997;
    msg.z = 0.672690374686;

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
    msg.setTimeStamp(0.619967516766);
    msg.setSource(22008U);
    msg.setSourceEntity(177U);
    msg.setDestination(29749U);
    msg.setDestinationEntity(193U);
    msg.target = 38475U;
    msg.x = 0.276140104951;
    msg.y = 0.410463216729;
    msg.z = 0.504486577353;

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
    msg.setTimeStamp(0.691491148971);
    msg.setSource(61041U);
    msg.setSourceEntity(25U);
    msg.setDestination(28927U);
    msg.setDestinationEntity(211U);
    msg.target = 63315U;
    msg.lat = 0.0673961662679;
    msg.lon = 0.707974839221;
    msg.z_units = 63U;
    msg.z = 0.252178150396;

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
    msg.setTimeStamp(0.974104267273);
    msg.setSource(41552U);
    msg.setSourceEntity(198U);
    msg.setDestination(36161U);
    msg.setDestinationEntity(20U);
    msg.target = 45472U;
    msg.lat = 0.711862380673;
    msg.lon = 0.902254289697;
    msg.z_units = 88U;
    msg.z = 0.43811172194;

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
    msg.setTimeStamp(0.0214394766908);
    msg.setSource(39327U);
    msg.setSourceEntity(124U);
    msg.setDestination(7378U);
    msg.setDestinationEntity(42U);
    msg.target = 56228U;
    msg.lat = 0.697006364734;
    msg.lon = 0.678191141579;
    msg.z_units = 196U;
    msg.z = 0.660348114755;

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

  return test.getReturnValue();
}
