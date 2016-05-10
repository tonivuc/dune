//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 8a67ab14b801b532f9b27e3381499aa6                            *
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
    msg.setTimeStamp(0.217928072774);
    msg.setSource(19227U);
    msg.setSourceEntity(39U);
    msg.setDestination(11970U);
    msg.setDestinationEntity(45U);
    msg.state = 30U;
    msg.flags = 4U;
    msg.description.assign("TMEJSYZAULXQNOSXBZHRRTMIERPWJUEUTGZCENBARXSRIHYVKDCWNFKTYUNJUPAQLDISZHDVOOOEYYTFICPGSLMYVWADDCHVFPFAZ");

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
    msg.setTimeStamp(0.455488649988);
    msg.setSource(54063U);
    msg.setSourceEntity(74U);
    msg.setDestination(36667U);
    msg.setDestinationEntity(1U);
    msg.state = 177U;
    msg.flags = 51U;
    msg.description.assign("TADWSMXCJVCKISBBBVIMOGJYUFJRHHSAWUICTFQNTGWFNSRYGKROIHNCCIYYLQZHGAQWHIFD");

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
    msg.setTimeStamp(0.945195130967);
    msg.setSource(53234U);
    msg.setSourceEntity(47U);
    msg.setDestination(26164U);
    msg.setDestinationEntity(43U);
    msg.state = 63U;
    msg.flags = 186U;
    msg.description.assign("RQLEFPIXSYMQPQZUTBUKBNDOVVEGFMSROIQKBOEJRYPAYJVUPDVSTJADJLBPHSZFYNIXZISHADDJYKHVEIWSURWNFLKKHOMQCBLGUYSMHXGGEESTIDLZWDXNDLFGPXUKSHZLJZCCNLWPAAHTKMBHDREOWFWBXOYKMKCCXXCHRJMORCLIZQGWMOLWZBZHVAPRQICNVURBQIPGGTTSRFU");

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
    msg.setTimeStamp(0.501442926581);
    msg.setSource(49976U);
    msg.setSourceEntity(117U);
    msg.setDestination(11475U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.140669873555);
    msg.setSource(16324U);
    msg.setSourceEntity(2U);
    msg.setDestination(34563U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.470834823296);
    msg.setSource(46683U);
    msg.setSourceEntity(109U);
    msg.setDestination(11967U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.0354814348365);
    msg.setSource(60117U);
    msg.setSourceEntity(180U);
    msg.setDestination(38626U);
    msg.setDestinationEntity(130U);
    msg.id = 130U;
    msg.label.assign("NGIXXYKIQMXVBNCXCDSULXALWMNNLBWXXYPRXKXNLFDMZMJZBEQPKMDRDRAGFTII");
    msg.component.assign("LNQKWDHGIAWLAKWKUFEWFFJUHFIWPROKXGCATPDRLHETTCSYGGQWBZMBMXOFJQMDCXCOJHCYPOSCKMJFUXGTDXRZBHOMJBLKU");
    msg.act_time = 45457U;
    msg.deact_time = 35766U;

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
    msg.setTimeStamp(0.0408864537216);
    msg.setSource(2472U);
    msg.setSourceEntity(223U);
    msg.setDestination(43872U);
    msg.setDestinationEntity(224U);
    msg.id = 30U;
    msg.label.assign("ODRIQUNUUNTAMGLESFOHKBLMNLFZHFMJYAVGJOBRUSVKFWMSIVZEGFAKSTQJAPOUPLIXADGGDSZORYENRHQGAKISPUBBQNNNDDKZKQREONQKMTFBXDVOKYLEEPOJMGRYCDMUJQWCXSCQUHUTWAMPEYLHYRCIWXGLVZBLEXIVGXHTPJNQCM");
    msg.component.assign("IPXUOGYMDQWKCMLZFDXNXGZKBEAVIAJZRFSAPIGNVNDENHQFBHHMXITUTVULIPYDFELSBVACVSVNTBDRVLFRAKYYORBGJMJAEKCPNBGCOWVDWBYIVPCCGAYXYTTJNZIZURZGNRDQJILEECWFCZROPHMSLPYUSZMFQOFIFKQWNDHQKTNMHWQMS");
    msg.act_time = 49682U;
    msg.deact_time = 28369U;

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
    msg.setTimeStamp(0.932367665);
    msg.setSource(42791U);
    msg.setSourceEntity(70U);
    msg.setDestination(20916U);
    msg.setDestinationEntity(122U);
    msg.id = 20U;
    msg.label.assign("APYSKDMWACEALFJFOQHHIQVVXQOPOTEWBPIAICKFTFLJOZUURUWIGDSTCNYQXJKGUZHFHLYBJYLQYUYKGUTXIRLJMAVDMTURMDWITBIDORPHARXDCVMNMSU");
    msg.component.assign("HZUSRWYHRPZVAOCWHAXGJXSGVUHPLQXNNKYSTIMLHJWMVRBWDRGZSDGUUJTAEKYQVFFOQQYYGTAUZFZRCLLPTAYNDKRTQRVTMZPVJJTLPKDEIHCCEJAAGGCQUPDQPISFEDIEJLEZKLSYNUXDHBOFWBDHXKMUVXGBOJEOIWRPCXNVEWBYZGBQTASFXJDQYLMFNTXMJMBIYZNFKZOH");
    msg.act_time = 15533U;
    msg.deact_time = 7241U;

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
    msg.setTimeStamp(0.149946481244);
    msg.setSource(35622U);
    msg.setSourceEntity(52U);
    msg.setDestination(2715U);
    msg.setDestinationEntity(132U);
    msg.id = 54U;

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
    msg.setTimeStamp(0.152272973319);
    msg.setSource(2644U);
    msg.setSourceEntity(231U);
    msg.setDestination(19269U);
    msg.setDestinationEntity(64U);
    msg.id = 52U;

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
    msg.setTimeStamp(0.522452316981);
    msg.setSource(31264U);
    msg.setSourceEntity(109U);
    msg.setDestination(52428U);
    msg.setDestinationEntity(146U);
    msg.id = 91U;

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
    msg.setTimeStamp(0.108433778398);
    msg.setSource(7955U);
    msg.setSourceEntity(97U);
    msg.setDestination(30120U);
    msg.setDestinationEntity(203U);
    msg.op = 130U;
    msg.list.assign("LOMUZNOCIDXIJIRKZJYJCADOCFZEBSXTTTNMCYVXXABEEWZPNWSQAQGHDFXUEDBDRKQPGFCPLPILSZSPDHQVELUAFSHBGVHIKNAEUYSOXHWQWHEETSBGRVNYHVVGBPMSKVXJTGQXOSLYRLJWJY");

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
    msg.setTimeStamp(0.587005923725);
    msg.setSource(44348U);
    msg.setSourceEntity(14U);
    msg.setDestination(42817U);
    msg.setDestinationEntity(253U);
    msg.op = 64U;
    msg.list.assign("DBGVVQGPIYDUZKPQLRIHMSVDWNFTMAIISNVXDXHPRNACFZPFKCOHWVKIJHHXBEFPTODSJKOXSROPFTLRTJCTNASJYQVEALVDIOVCUCKSLHEGJSTAEMUJPJNYASMZDMBMKPFWYCGBGWUZFVZYKHGMLFNNBNDQRZMTSWJCCLBKUJLXXRHFZ");

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
    msg.setTimeStamp(0.582079605411);
    msg.setSource(1909U);
    msg.setSourceEntity(88U);
    msg.setDestination(62235U);
    msg.setDestinationEntity(94U);
    msg.op = 46U;
    msg.list.assign("VIYBLRFLTYCZWDIOKEDFDEQGEIJLRMFKUNVVPIDNTIYZYBYVBPROXQKARGXUJUMBTMIURSBQFAHTOLTUWDFMHSFEMLSNQRKOOCUVZRBJDNFYTZJNWDUVFAHVYIPJRYMHIKOGOSW");

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
    msg.setTimeStamp(0.702554040941);
    msg.setSource(6333U);
    msg.setSourceEntity(193U);
    msg.setDestination(57447U);
    msg.setDestinationEntity(20U);
    msg.value = 79U;

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
    msg.setTimeStamp(0.403268021442);
    msg.setSource(55553U);
    msg.setSourceEntity(55U);
    msg.setDestination(40182U);
    msg.setDestinationEntity(204U);
    msg.value = 123U;

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
    msg.setTimeStamp(0.227020003725);
    msg.setSource(36945U);
    msg.setSourceEntity(243U);
    msg.setDestination(45904U);
    msg.setDestinationEntity(102U);
    msg.value = 241U;

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
    msg.setTimeStamp(0.69470733772);
    msg.setSource(37156U);
    msg.setSourceEntity(4U);
    msg.setDestination(4824U);
    msg.setDestinationEntity(177U);
    msg.consumer.assign("WSKKFEZMGLIDDCSJGRKAGVTXNOJBQDBSRUKQJQNBHAFRVXHIFWYPCQSRGWMGTIFEEVVIPJJYTQJAFBOXITUIKADXNRCXMFQZJKSCHEDBNEUAVOHPOZJZZWEWBTUFWCRAMLOUOUBSXSKPNJUCUMEPGAIOYXRCIYYPFNKWGPMCOTMHNJCPPGDHVVTQDSLWDLXAVTRABLQGVIKZSZBQKLCRMALLMOYUZNRH");
    msg.message_id = 38745U;

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
    msg.setTimeStamp(0.623274888524);
    msg.setSource(58346U);
    msg.setSourceEntity(51U);
    msg.setDestination(43844U);
    msg.setDestinationEntity(241U);
    msg.consumer.assign("XIOQQGKPCNLWZIYNNOGFWWOLGFZNTARBMDYQUIWLYFPGDVYNSUVVXRYURPFADXA");
    msg.message_id = 64844U;

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
    msg.setTimeStamp(0.455751569431);
    msg.setSource(20411U);
    msg.setSourceEntity(211U);
    msg.setDestination(64749U);
    msg.setDestinationEntity(20U);
    msg.consumer.assign("ESDOJPIMTXMUBFVDZBAATYVELNJQRFCRDJCZYHFZRZMLWUCJKVENSYUORXJLTFAQSXN");
    msg.message_id = 19702U;

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
    msg.setTimeStamp(0.0775569497619);
    msg.setSource(53633U);
    msg.setSourceEntity(214U);
    msg.setDestination(64536U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.399457062874);
    msg.setSource(7075U);
    msg.setSourceEntity(72U);
    msg.setDestination(8875U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.206937022229);
    msg.setSource(47128U);
    msg.setSourceEntity(150U);
    msg.setDestination(27808U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.0254245065331);
    msg.setSource(31448U);
    msg.setSourceEntity(214U);
    msg.setDestination(16109U);
    msg.setDestinationEntity(242U);
    msg.op = 252U;

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
    msg.setTimeStamp(0.0387757884346);
    msg.setSource(46039U);
    msg.setSourceEntity(242U);
    msg.setDestination(51981U);
    msg.setDestinationEntity(155U);
    msg.op = 145U;

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
    msg.setTimeStamp(0.75428848156);
    msg.setSource(35497U);
    msg.setSourceEntity(224U);
    msg.setDestination(40021U);
    msg.setDestinationEntity(174U);
    msg.op = 145U;

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
    msg.setTimeStamp(0.308359334657);
    msg.setSource(15006U);
    msg.setSourceEntity(128U);
    msg.setDestination(1852U);
    msg.setDestinationEntity(236U);
    msg.total_steps = 218U;
    msg.step_number = 90U;
    msg.step.assign("DOSGTVBJMZZAGAGYKDYDTPRPXPFOCTYVKTHBUVEIYMNZNJGYWPZPJDFWWCLKBFEIQHSYCZJZAFBULDKVCWXVZKLRLGWNBWGUAIGOHENVTNMOMSONRBFCHCGQACDAQITTHREZPLOUAQQVVKPGCSUXJPUFTAMAKVYQHYDRYQLWYPMWFVIERJBE");
    msg.flags = 63U;

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
    msg.setTimeStamp(0.235232715741);
    msg.setSource(62588U);
    msg.setSourceEntity(242U);
    msg.setDestination(38800U);
    msg.setDestinationEntity(218U);
    msg.total_steps = 125U;
    msg.step_number = 212U;
    msg.step.assign("EEZBDSWOIUIVFHMFMUJMIHYRKEWYYLUFJTEOIZPZNWNIZOSFQVNNMGQDHCPPEADSZYUOZYRNRMBQERWRIBPVBDTLPANSEKAA");
    msg.flags = 183U;

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
    msg.setTimeStamp(0.577082807752);
    msg.setSource(53026U);
    msg.setSourceEntity(169U);
    msg.setDestination(12590U);
    msg.setDestinationEntity(151U);
    msg.total_steps = 145U;
    msg.step_number = 51U;
    msg.step.assign("EAGIVWZKUAFZTHLHRBWXGKLEPDFAXWUFGOLRSZINSNCBPENVCJTIBUSIJFHNVXDQUFTZPPBETQRPSKGDEVRYSUOOOSUKQNJDERBJPRWZHKMDCKNGDHBWIIBOSHSHEHUKCCXUMAAIYJWFOQARFTUPTJJHAGSTEJDXWLVGFBVCLXXEHMXMDYQXMIJOYQ");
    msg.flags = 136U;

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
    msg.setTimeStamp(0.245402222442);
    msg.setSource(62643U);
    msg.setSourceEntity(220U);
    msg.setDestination(57677U);
    msg.setDestinationEntity(142U);
    msg.state = 9U;
    msg.error.assign("CXUGZVWAKKVTKLSXLPOMBDZPIEXJRBZXMRHRUVQX");

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
    msg.setTimeStamp(0.518981169912);
    msg.setSource(9456U);
    msg.setSourceEntity(161U);
    msg.setDestination(4133U);
    msg.setDestinationEntity(157U);
    msg.state = 165U;
    msg.error.assign("DNAHDQVCMPGHTWEPXKKBVSHWGFNIUXHDKYQSHQVZYISBPTBVJVWKHIZEUVALUTKIFDWXBRDJTMFPXGNDSHUEFEJYYCFFTYRMABOABMRGEXVLSCLJZYRHJWPZPJJXVAJWMJRYQECXKLFAZOTSDAQCCZFDQGMUAHOOZWUPMINERPLBGILZFXAOTOKLCCGMPVIGXRDQSRGIUMOBNOUNXBE");

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
    msg.setTimeStamp(0.480473291056);
    msg.setSource(34406U);
    msg.setSourceEntity(241U);
    msg.setDestination(37238U);
    msg.setDestinationEntity(16U);
    msg.state = 188U;
    msg.error.assign("VFOTCAUJLPPEIWZOGANXRJXKPBFJPGMAIZTHUEPRHEQCNWTITAFVAXKQYMRIZTGICYQKDZZCXFONEGCSLELUJEJFHWBLMJAHBJSLZRFEARCGEMSXDJVKUMIOVBRTKPZBVSYVSCAEVNDFPRDHGILAMOIDOLISXSDWDQYZBWZOGLATXQTRCFVWPXMDJDFQQMHBWSKPQIUFBGXYBTKPCGJENXNUWQRUW");

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
    msg.setTimeStamp(0.238525033146);
    msg.setSource(62760U);
    msg.setSourceEntity(145U);
    msg.setDestination(53372U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.323943522443);
    msg.setSource(10488U);
    msg.setSourceEntity(122U);
    msg.setDestination(3411U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.436894464085);
    msg.setSource(22514U);
    msg.setSourceEntity(93U);
    msg.setDestination(39533U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.278404475289);
    msg.setSource(17083U);
    msg.setSourceEntity(203U);
    msg.setDestination(63294U);
    msg.setDestinationEntity(220U);
    msg.op = 168U;
    msg.speed_min = 0.160280975349;
    msg.speed_max = 0.511876387072;
    msg.long_accel = 0.326299650965;
    msg.alt_max_msl = 0.449572123017;
    msg.dive_fraction_max = 0.757865417029;
    msg.climb_fraction_max = 0.404676313267;
    msg.bank_max = 0.247536292141;
    msg.p_max = 0.663205536545;
    msg.pitch_min = 0.108920964816;
    msg.pitch_max = 0.254380015068;
    msg.q_max = 0.631174640388;
    msg.g_min = 0.967078564031;
    msg.g_max = 0.535018818173;
    msg.g_lat_max = 0.315811429926;
    msg.rpm_min = 0.727725796566;
    msg.rpm_max = 0.248991071303;
    msg.rpm_rate_max = 0.250542350788;

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
    msg.setTimeStamp(0.259359797441);
    msg.setSource(46950U);
    msg.setSourceEntity(63U);
    msg.setDestination(63289U);
    msg.setDestinationEntity(234U);
    msg.op = 5U;
    msg.speed_min = 0.96790010113;
    msg.speed_max = 0.47510038955;
    msg.long_accel = 0.175577933813;
    msg.alt_max_msl = 0.0583999788812;
    msg.dive_fraction_max = 0.539768739497;
    msg.climb_fraction_max = 0.591350993128;
    msg.bank_max = 0.14261590035;
    msg.p_max = 0.916653483179;
    msg.pitch_min = 0.133113590145;
    msg.pitch_max = 0.852082814602;
    msg.q_max = 0.279012657902;
    msg.g_min = 0.794214687293;
    msg.g_max = 0.893579450694;
    msg.g_lat_max = 0.649942701519;
    msg.rpm_min = 0.391796752618;
    msg.rpm_max = 0.203015090795;
    msg.rpm_rate_max = 0.224512059211;

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
    msg.setTimeStamp(0.675741247406);
    msg.setSource(26827U);
    msg.setSourceEntity(13U);
    msg.setDestination(50846U);
    msg.setDestinationEntity(170U);
    msg.op = 56U;
    msg.speed_min = 0.734629284019;
    msg.speed_max = 0.206639317848;
    msg.long_accel = 0.926030055518;
    msg.alt_max_msl = 0.324857105513;
    msg.dive_fraction_max = 0.84433760467;
    msg.climb_fraction_max = 0.632563391598;
    msg.bank_max = 0.512492543009;
    msg.p_max = 0.864157283457;
    msg.pitch_min = 0.458885129276;
    msg.pitch_max = 0.36740540332;
    msg.q_max = 0.83438536418;
    msg.g_min = 0.942124579638;
    msg.g_max = 0.325462052928;
    msg.g_lat_max = 0.933141583672;
    msg.rpm_min = 0.926527312594;
    msg.rpm_max = 0.962325408875;
    msg.rpm_rate_max = 0.853382422445;

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
    msg.setTimeStamp(0.317167196087);
    msg.setSource(45078U);
    msg.setSourceEntity(218U);
    msg.setDestination(32170U);
    msg.setDestinationEntity(187U);
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("TDUCOADYEESKMVFHAWKIDTXOGYMJPQGKUIAPBXWFCVNUTKIZRJKBF");
    tmp_msg_0.value = 109U;
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
    msg.setTimeStamp(0.258748601073);
    msg.setSource(57479U);
    msg.setSourceEntity(130U);
    msg.setDestination(56559U);
    msg.setDestinationEntity(135U);
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 40725U;
    tmp_msg_0.type = 123U;
    tmp_msg_0.max_size = 20743U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.131918908493;
    tmp_tmp_msg_0_0.base_lon = 0.0169622782155;
    tmp_tmp_msg_0_0.base_time = 0.858283230741;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0473279233129);
    msg.setSource(12212U);
    msg.setSourceEntity(189U);
    msg.setDestination(38152U);
    msg.setDestinationEntity(14U);
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("KATYPZUDJU");
    IMC::Announce tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_name.assign("FWSKZGPFAJVTMUSRIUGZGAVAVHZIRDIFGFSMPAEAMYKIIQUTUTUTTQJTYVJGDCJINLXVSVZETQGXQOXUDLBOQZRSOPMHFHHNULJKJYMZNCCFISLDCEKMHMSLLWUPBDZWRIPTCWOBWEOXHBDJWOXDXJYNGBIYVLGSMDYPXBRNQHEKMWCKCEEPCHATEUBNQLVBYWPYRRHKPFYFQALFRAHZGOWXUKRSTIEAKLGA");
    tmp_tmp_msg_0_0.sys_type = 168U;
    tmp_tmp_msg_0_0.owner = 46524U;
    tmp_tmp_msg_0_0.lat = 0.225290369761;
    tmp_tmp_msg_0_0.lon = 0.879757923598;
    tmp_tmp_msg_0_0.height = 0.677141597039;
    tmp_tmp_msg_0_0.services.assign("JGIDLOPRKUCYKPXDBWCESLROTVQSSCRWCFTSYHZLRWOMMAZAMYJGKYUOFAQIDDNHLSBE");
    tmp_msg_0.links.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0674713043544);
    msg.setSource(60634U);
    msg.setSourceEntity(25U);
    msg.setDestination(24887U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.802288260355;
    msg.lon = 0.982069822277;
    msg.height = 0.138554628043;
    msg.x = 0.019336729037;
    msg.y = 0.840912203409;
    msg.z = 0.609033936079;
    msg.phi = 0.93563997674;
    msg.theta = 0.615141151964;
    msg.psi = 0.495813670681;
    msg.u = 0.219536974736;
    msg.v = 0.250109522872;
    msg.w = 0.259487986699;
    msg.p = 0.875685181394;
    msg.q = 0.0761334273889;
    msg.r = 0.201876577798;
    msg.svx = 0.13446581379;
    msg.svy = 0.602499977228;
    msg.svz = 0.476338494607;

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
    msg.setTimeStamp(0.512491968678);
    msg.setSource(66U);
    msg.setSourceEntity(222U);
    msg.setDestination(15495U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.719038435968;
    msg.lon = 0.279297001105;
    msg.height = 0.92112872847;
    msg.x = 0.414296788283;
    msg.y = 0.398843814943;
    msg.z = 0.222841019393;
    msg.phi = 0.795659989527;
    msg.theta = 0.770927015906;
    msg.psi = 0.769176632981;
    msg.u = 0.674822199226;
    msg.v = 0.982598201763;
    msg.w = 0.6752827682;
    msg.p = 0.30786011267;
    msg.q = 0.854609405198;
    msg.r = 0.631050755398;
    msg.svx = 0.0176909603982;
    msg.svy = 0.226403468232;
    msg.svz = 0.518240578307;

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
    msg.setTimeStamp(0.408106757589);
    msg.setSource(55426U);
    msg.setSourceEntity(163U);
    msg.setDestination(55741U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.0868573274466;
    msg.lon = 0.266949045934;
    msg.height = 0.850825603917;
    msg.x = 0.149830771304;
    msg.y = 0.352348281233;
    msg.z = 0.470827160808;
    msg.phi = 0.318075208974;
    msg.theta = 0.457565646552;
    msg.psi = 0.911944976107;
    msg.u = 0.816834553059;
    msg.v = 0.916808112673;
    msg.w = 0.934542076863;
    msg.p = 0.248787439356;
    msg.q = 0.519279427209;
    msg.r = 0.248772529961;
    msg.svx = 0.414240992058;
    msg.svy = 0.0218279702874;
    msg.svz = 0.899800795527;

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
    msg.setTimeStamp(0.0147045480217);
    msg.setSource(878U);
    msg.setSourceEntity(225U);
    msg.setDestination(4587U);
    msg.setDestinationEntity(40U);
    msg.op = 37U;
    msg.entities.assign("NMFTPPEIQKMJGPCTXOYINJIPTEUZZAVFQSXMSHBRHIJPFSLOJJNJWZEBKPSXWVWCLJGTTGBEMQHKNPOMAGDCIAABPIJMULNZRBVBORKJMLSZCCYAWHTDRZGWWGAXYLXLUAVLVCXVCUOFYDRBSDCUSVZNKHTQTRFQKMIRAXVSIDRUDFUECWJOFIWVRDNYSYDDBNXEQMLOPKLCQFEYYKFSHQXHZNTTQALWXGMHU");

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
    msg.setTimeStamp(0.0925437876563);
    msg.setSource(60499U);
    msg.setSourceEntity(175U);
    msg.setDestination(53502U);
    msg.setDestinationEntity(241U);
    msg.op = 86U;
    msg.entities.assign("YHYKDKIORJIZYTWDCNRSJMXSGBGMECHJIQJVOZQWYUYHWAVKH");

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
    msg.setTimeStamp(0.731784480457);
    msg.setSource(31029U);
    msg.setSourceEntity(83U);
    msg.setDestination(38228U);
    msg.setDestinationEntity(82U);
    msg.op = 58U;
    msg.entities.assign("IABJRIAYOFFUUSGVHSATDGUQHEYYTFOENZMCKPFLHCSBVXBAWYLPBNRRCYEPFSUEUES");

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
    msg.setTimeStamp(0.91901316385);
    msg.setSource(34051U);
    msg.setSourceEntity(109U);
    msg.setDestination(46160U);
    msg.setDestinationEntity(215U);
    msg.type = 164U;
    msg.speed = 8820U;
    const char tmp_msg_0[] = {-55, 48, 101, 51, 86, 83, 72, 48, 60, -85, 13, -112, -22, -23, -39, 30, -43, 1, -111, 72, 30, -80, 103, 51, 104};
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
    msg.setTimeStamp(0.934825890857);
    msg.setSource(37937U);
    msg.setSourceEntity(38U);
    msg.setDestination(12460U);
    msg.setDestinationEntity(231U);
    msg.type = 231U;
    msg.speed = 9315U;
    const char tmp_msg_0[] = {-72, -120, 38, 2, 31, -68, -63, -127, 92, 39, -5, 50, 33, 85, -22, -71, 48, 88, -41, 46, 66, -114, 88, -64, 115, -99, -70, 16, -35, -28, -29, -23, -127, -62, 97, -122, -112, 126, 29, 121, 117, 102, 28, 102, -44, -89, 71, -51, -34, -72, 17, -52, 16, -70, -104, 126, 66, 116, 89, -24, -51, -83, -75, -90, -110, 9, 43, -42, -48, -69, 106, 23, -83, -127, 18, -26, -15, 79, -60, -94, -121, -26, 81, -99, -86, 33, 97, 117, -98, 81, -53, -9, -89, 34, 16, 64, 102, 104, -31, 5, 93, -113, -4, 92, 58, 91, -126, -128, 80, 111, -23, -27, 79, 26, 84, -69, -112, -40, 50, 86, -45, 126, -32, 19, 98, 102, 30, -3, -63, -86, -75, -49, 11, -73, -16, -48, -101, 54, 6, -44, -80, 115, -104, -27, 66, 122, 56, -75, 58, -52, 75, -88, 37, -104, -40, -102, 29, -35, -28, -15, -89, -34, 26, 87, -37, 39, 91, -70, 8, 83, -78, 77, -76, 101, 126, 105, 123, 85, 72, 11, 98, -20, 108, -101, 105, 118, 102, -60, 71, 110, -115, 7, 92, -123, -1, 112, 45, -22, 113, 82, 122, 94, 111, 22, -24, 122, 60, -90, 19, -34, -20, 59, -62, -40, 26, 62, -100, 113, -119, 57, 79, 15, -87, 50, 55, 51, -124, -7, -100, 80, -80, 126, 62, 66, -33, -127, 5, 116, -78, -122, -46, 99, -75, -124, -17, -54, 90, 72, 69, -115};
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
    msg.setTimeStamp(0.883009372236);
    msg.setSource(45252U);
    msg.setSourceEntity(85U);
    msg.setDestination(38654U);
    msg.setDestinationEntity(14U);
    msg.type = 170U;
    msg.speed = 61649U;
    const char tmp_msg_0[] = {-53, -56, 93, -29, 80, 29, -96, 113, -112, 70, 118, -2, -33, -53, 125, -9, -7, 120, 6, 47, 36, 5, -32, 9, 71, 8, 7, -101, 101, 51, -37, 114, -61, 93, 39, 115, 71, 46, 65, -27, -24, 108, 106, -77, 7, 83, -61, 74, 46, 25, -2, -120, 106, -16, -100, 63, 13, -6, -123, -14, 69, 87, 91, 105, -55, -69, 88, -4, 102, 114, -25, 30, 48, -47, -64, 42, 32, -108, 121, -73, -57, -79, 92, -119, -120, 87, 57, 99, -36, 83, -37, 122, 110, 30, 45, 1, -71, -22, -88, -11, 24, 27, -34, -89, -54, -6, -115, 91, 29, -58, -32, 83, -64, 57, 8, -101, -55, -80, 51, -1, 84, -64, 88, -75, 47, 75, -19, 37, 49, -79, 96, -11, 35, 42, 90, -24, -17, 13, -90, 21, -23, -115, -53, 86, 13, -59, 1, 90, 119, 39, 54, -60, 117, 28, 29, -92, 84, -89, 41, 42, -84, -63, 109, 94, -32, -64, -36, -22, 59, 30, -20, -8, 59, 21, 83, -45, -32, 33, -119, -69, 72, 88, -23, -107, 48, -97, 29, -87, -10, 115, -84, -118, -119, -75, 31, -86, -123, -123, 44, -51, 108, 121, -120, -38, -40, -71, -3, 54};
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
    msg.setTimeStamp(0.480009062784);
    msg.setSource(40518U);
    msg.setSourceEntity(162U);
    msg.setDestination(63109U);
    msg.setDestinationEntity(214U);
    msg.op = 134U;
    msg.tas2acc_pgain = 0.447126140421;
    msg.bank2p_pgain = 0.437200257046;

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
    msg.setTimeStamp(0.653090408767);
    msg.setSource(53641U);
    msg.setSourceEntity(227U);
    msg.setDestination(45131U);
    msg.setDestinationEntity(63U);
    msg.op = 155U;
    msg.tas2acc_pgain = 0.47833450924;
    msg.bank2p_pgain = 0.656084495294;

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
    msg.setTimeStamp(0.743271676245);
    msg.setSource(15496U);
    msg.setSourceEntity(133U);
    msg.setDestination(14602U);
    msg.setDestinationEntity(160U);
    msg.op = 167U;
    msg.tas2acc_pgain = 0.362109743691;
    msg.bank2p_pgain = 0.0391449986236;

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
    msg.setTimeStamp(0.555997801199);
    msg.setSource(18337U);
    msg.setSourceEntity(166U);
    msg.setDestination(1758U);
    msg.setDestinationEntity(185U);
    msg.available = 3666167374U;
    msg.value = 42U;

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
    msg.setTimeStamp(0.282283383796);
    msg.setSource(5704U);
    msg.setSourceEntity(158U);
    msg.setDestination(61114U);
    msg.setDestinationEntity(228U);
    msg.available = 1282458796U;
    msg.value = 16U;

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
    msg.setTimeStamp(0.966515967486);
    msg.setSource(13890U);
    msg.setSourceEntity(166U);
    msg.setDestination(65073U);
    msg.setDestinationEntity(215U);
    msg.available = 2158110608U;
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
    msg.setTimeStamp(0.859377325995);
    msg.setSource(38840U);
    msg.setSourceEntity(196U);
    msg.setDestination(65259U);
    msg.setDestinationEntity(129U);
    msg.op = 221U;
    msg.snapshot.assign("TNZMSYSITPDLDBPKFKDORENCIVEFUZCQTQUP");
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.815876918121;
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
    msg.setTimeStamp(0.150868513282);
    msg.setSource(14594U);
    msg.setSourceEntity(180U);
    msg.setDestination(53145U);
    msg.setDestinationEntity(227U);
    msg.op = 75U;
    msg.snapshot.assign("UHWDMHCMFPCIEOHHAWFNTJNETFQJQQWJNQGOGLDUKTBYVQWFXFRPRDVNVVXMGHPLBLDLKOSMOZUCVWNNSEAYLXLEWYXKREICXPCCABIZJZBWHRWGYVBMUOGEHU");
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 2852932057U;
    tmp_msg_0.start_lat = 0.0308478498401;
    tmp_msg_0.start_lon = 0.00401871828201;
    tmp_msg_0.start_z = 0.385130004353;
    tmp_msg_0.start_z_units = 186U;
    tmp_msg_0.end_lat = 0.0261043154333;
    tmp_msg_0.end_lon = 0.0948690599182;
    tmp_msg_0.end_z = 0.286483089553;
    tmp_msg_0.end_z_units = 134U;
    tmp_msg_0.lradius = 0.977637245557;
    tmp_msg_0.flags = 241U;
    tmp_msg_0.x = 0.401700897506;
    tmp_msg_0.y = 0.636716406751;
    tmp_msg_0.z = 0.0249613116338;
    tmp_msg_0.vx = 0.0822817224894;
    tmp_msg_0.vy = 0.698230265671;
    tmp_msg_0.vz = 0.498746257732;
    tmp_msg_0.course_error = 0.598366246091;
    tmp_msg_0.eta = 38487U;
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
    msg.setTimeStamp(0.0589479521159);
    msg.setSource(57535U);
    msg.setSourceEntity(223U);
    msg.setDestination(29701U);
    msg.setDestinationEntity(72U);
    msg.op = 196U;
    msg.snapshot.assign("GMNJETAZLYFRSWAFUUNWKLUXQWZCRCHHHIVSTTNOHRAYUUZJBBVNQLVZEIONRMRLWNEOFGPQCKKESDUVCXYHRXJSSZNIGYLQHGZBRWXPBDMJWHRAXNZIAGPOAGUKLCLNGAZZTXQPSBVRBJHVJADXIFFEWPPOQEMEYBTJIKOCBQKDOYMCMPQ");
    IMC::NavigationUncertainty tmp_msg_0;
    tmp_msg_0.x = 0.235949933841;
    tmp_msg_0.y = 0.626397429397;
    tmp_msg_0.z = 0.373825419331;
    tmp_msg_0.phi = 0.831611755818;
    tmp_msg_0.theta = 0.439583685996;
    tmp_msg_0.psi = 0.42564012313;
    tmp_msg_0.p = 0.746573538384;
    tmp_msg_0.q = 0.775244972886;
    tmp_msg_0.r = 0.0880051992645;
    tmp_msg_0.u = 0.985401395507;
    tmp_msg_0.v = 0.48581784659;
    tmp_msg_0.w = 0.253254501562;
    tmp_msg_0.bias_psi = 0.379525663059;
    tmp_msg_0.bias_r = 0.417557670204;
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
    msg.setTimeStamp(0.351508078297);
    msg.setSource(42622U);
    msg.setSourceEntity(118U);
    msg.setDestination(54986U);
    msg.setDestinationEntity(246U);
    msg.op = 231U;
    msg.name.assign("PBEPUCHZBOICTUJSKFJGMXNVGHWUFKJAURSZGWIDTAQCEVMWESNRYGLFIWMGLHPSLVKTNZZPJZWRVEMVBVTVRGEAUDNQVETXOTQSKIHPAIDRAROATMJOLWKPWJOHFHEKXJHCYBYQPZNPUOKZEWTYYNSTJBGRVLLNOQDDNBSCAWCYHUCWIEARHDYFXVTUFFLOLDXCDJCQNKOMGAOGISHMGRXYMLYZIZDQ");

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
    msg.setTimeStamp(0.182674383726);
    msg.setSource(8704U);
    msg.setSourceEntity(54U);
    msg.setDestination(58420U);
    msg.setDestinationEntity(71U);
    msg.op = 134U;
    msg.name.assign("AOYBGKKZZYBICMRQXXJRNPNQSNFILPSGXYBBLTLNJPYHHVFIXVYCHBCVPSRLVDVRUFTQETLVVOGQVYDSWROJMXUWICDAEFANZZYLRMLGJRIJRRMHAUKPDCPYOMVDEGIZKOWSECYHKDMNTKCOHDQGCJZUTTANLESWQELHOUJUWADHXSFAEAICSHNPQPTUWMIXBZMZGMPQQFZXBVIFWPJOBAWYQAUFKFOBKGTUBUNTMTNSHDWIFK");

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
    msg.setTimeStamp(0.880905722355);
    msg.setSource(63618U);
    msg.setSourceEntity(185U);
    msg.setDestination(37447U);
    msg.setDestinationEntity(26U);
    msg.op = 248U;
    msg.name.assign("IGZUFVNOYCLJQRPACFEAFKXDRAQYNNSEUASTPNV");

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
    msg.setTimeStamp(0.340255491963);
    msg.setSource(53911U);
    msg.setSourceEntity(3U);
    msg.setDestination(42059U);
    msg.setDestinationEntity(173U);
    msg.type = 214U;
    msg.htime = 0.77973635294;
    msg.context.assign("MGUDIGEUHNHKAGZVXYTRWXFGERBVCNIZMPRNOYBOFKWMKJTVGEGOGZTKXSXRHDUZKPWGAVHSDZDNIHYIOAKSFLKVVUEUWSTUXNCUWFFUHLBMOIWQCJEPKIDSJHHKZLRQJOGYBYBWMSGQMYOPUJFNCXLBOSTYPUROJMACXTLHFLIRMVTPAPCDRFQRAIQXNFJCAKDJYPVPSQWLANCTTCVJBYDWBDI");
    msg.text.assign("NPLONQRAZBGDHSFXSMBWDXKGKCNMCQWKNWIXBXAGDDPSZSFCIGHZQIAFHBHMALOBZFIFTATMINVEGBOGKNKUDTPJZUYSLCLJVPNADFUSSJQRDLDVKKCFHGQRPTEJPKECNPWAVIWGJYYABLMLJNYXYVOTXGTL");

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
    msg.setTimeStamp(0.422459924603);
    msg.setSource(38821U);
    msg.setSourceEntity(13U);
    msg.setDestination(7837U);
    msg.setDestinationEntity(161U);
    msg.type = 66U;
    msg.htime = 0.769478831868;
    msg.context.assign("BWKSVBRQTEFNGEQGAXFADOXFMDTIBYJIJPIHRAGKJHZMNUESTOZYUUMKRDVUBUDWGKPCAIEBAZZPCEYVIJZXSWIRRCJTNPMXAXDCEKJOAJNYKCZMXNRSWEXSWVLGTVQVPDOGDYZLFTHXFBYHKOMCWSEVSMGBKTHVZLNNDF");
    msg.text.assign("EVTPZYKNUOTOVVSBBJSBQOXQCQNRXLICPEQIYCOMSACVHCEXSZLAUUOOHZLYQDAWYFHIJUGEXHRDTCTKNYPRFUNKGAERGBPPKCDLDPWQEIRDHQFFZKFZZCMUIGKHBBTBLMTAOXOYZASHWJNTDWXABVWDQQIVREPKITRQUARJJGNNVHPGRAJFLLSUSKJNTYKXEHBJRLYEMWWWGUJZCPLSGAUSMMYN");

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
    msg.setTimeStamp(0.162247839663);
    msg.setSource(63516U);
    msg.setSourceEntity(70U);
    msg.setDestination(43465U);
    msg.setDestinationEntity(192U);
    msg.type = 89U;
    msg.htime = 0.446078155482;
    msg.context.assign("UZZXNHVQTECQGKYEBORINENASTQZKSXOFXIMZIGCRGEISJMHMLCFYQNLAFXWMHSGOZOPOEOWJVJBFLHOLQKLRYQBHUAJKERYOYNVKWKBTZWXSKTVKRDCHTQXLGJWEUCPBRTUERYJSURJDFVNDGXZVHCVLDPBGWCKNSFNEL");
    msg.text.assign("COEQYXDJJKEOKUSRWWRIXLSXCWVRLZWQUJHZQTVEGJLYGPPQFIOHCWUJTWMRVMUDPFVNTHBIZVIVMAGPYUPYABOKNKNHWBMAKJLQQNAGSUQZFSTBCFSRVAEJEHGLLULCKDGKIOZZXDLWTYADFOEBORKTMIBTAGHMCPCUBPYSGJXUZKRCGSSDZ");

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
    msg.setTimeStamp(0.760672546734);
    msg.setSource(56149U);
    msg.setSourceEntity(154U);
    msg.setDestination(40398U);
    msg.setDestinationEntity(41U);
    msg.command = 234U;
    msg.htime = 0.744118075193;

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
    msg.setTimeStamp(0.270218900864);
    msg.setSource(19414U);
    msg.setSourceEntity(39U);
    msg.setDestination(47462U);
    msg.setDestinationEntity(197U);
    msg.command = 180U;
    msg.htime = 0.0888399457698;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 209U;
    tmp_msg_0.htime = 0.195886199501;
    tmp_msg_0.context.assign("DXFXPWGXZVMYQLNEXZWIRYPGBOCGZCRCNEUDQMHGKXOGAVMKVAHBFZWJXIHEIYPNEKSNAFHQRARRPEGOZSM");
    tmp_msg_0.text.assign("RVFZPOBUDDBATGZSTJKYSBYMXRFYECVNZGKGEZNHMWEOHDORBIIKGVXHOHQHXJJQQNPKZTMPENWADXVUIGIFCAYNIBSTCVKESJWKKVHILMWQTHWCOJUMNANJLLJCEGLDBJRBGJQTLXIYMBCFMRCTIZCHAOPUUHGP");
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
    msg.setTimeStamp(0.884058758059);
    msg.setSource(50681U);
    msg.setSourceEntity(120U);
    msg.setDestination(42614U);
    msg.setDestinationEntity(146U);
    msg.command = 156U;
    msg.htime = 0.802744561539;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 116U;
    tmp_msg_0.htime = 0.781582610092;
    tmp_msg_0.context.assign("RHLQCQFAMNJDTPMFBJFER");
    tmp_msg_0.text.assign("INSFGASPXYZLQWOHJEYCYAOTCZJKADVNPEDEUQDWSHBXTBVUUZMHIQRKMOAFHKCRXFUKGRCYGLLRBMUIZVGLFGGZHDZYKWKBSXKSEOLRKTFGIEDCVWFIMSPUQDTTSUBIHGAJXXPOTQNDGQUNJHSJBACQVUIOWNORPYLCRVZVXGWWRXOABBYVEMJQSHAR");
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
    msg.setTimeStamp(0.309014970548);
    msg.setSource(17932U);
    msg.setSourceEntity(34U);
    msg.setDestination(58652U);
    msg.setDestinationEntity(53U);
    msg.op = 30U;
    msg.file.assign("DKHWZVHNYXEEXNNTSEDJHDORIPZWVAORCVCUNRXTOD");

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
    msg.setTimeStamp(0.368161823196);
    msg.setSource(54173U);
    msg.setSourceEntity(160U);
    msg.setDestination(24180U);
    msg.setDestinationEntity(240U);
    msg.op = 154U;
    msg.file.assign("ACHARJUAKVKLTDXECFHHHXKZQIWBCUXKCDWLLYWRBAWWISOPEMFXJVEMMSQJLVFADWZILZJTOTGJBRNREFTCYBNAMZNOGAKSYPKTWGDPQRIFHJZRBLGGDHRUDBBPQVOXDFUOBZZLSPPFNYCUQVSLYUJGEIXVOPMNYELFURXJSNCUNDFDZYGAIKEHGSTMMZYHBUB");

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
    msg.setTimeStamp(0.129068308221);
    msg.setSource(32218U);
    msg.setSourceEntity(220U);
    msg.setDestination(32042U);
    msg.setDestinationEntity(217U);
    msg.op = 79U;
    msg.file.assign("HZDOWLXXNWTPXROVYOAXGTBAPCRHRGIVKWEDDXZNEZAHMCBFCQSURSPFWAVGQSGUQCHLTSNBKMRNCDTIJXZJFHDKRWQQZLAODSLIZYFWWIQFNYBSUZOCPCJMNYMBERBJJNBJD");

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
    msg.setTimeStamp(0.699720601547);
    msg.setSource(33992U);
    msg.setSourceEntity(176U);
    msg.setDestination(32665U);
    msg.setDestinationEntity(63U);
    msg.op = 185U;
    msg.clock = 0.427852186276;
    msg.tz = 81;

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
    msg.setTimeStamp(0.806728867704);
    msg.setSource(53977U);
    msg.setSourceEntity(69U);
    msg.setDestination(12282U);
    msg.setDestinationEntity(91U);
    msg.op = 162U;
    msg.clock = 0.719455109062;
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
    msg.setTimeStamp(0.975883016427);
    msg.setSource(58571U);
    msg.setSourceEntity(37U);
    msg.setDestination(27111U);
    msg.setDestinationEntity(202U);
    msg.op = 162U;
    msg.clock = 0.817001915825;
    msg.tz = -31;

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
    msg.setTimeStamp(0.362748369381);
    msg.setSource(2656U);
    msg.setSourceEntity(124U);
    msg.setDestination(33214U);
    msg.setDestinationEntity(174U);
    msg.conductivity = 0.199137994125;
    msg.temperature = 0.325081203669;
    msg.depth = 0.616304648902;

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
    msg.setTimeStamp(0.0912380251572);
    msg.setSource(48603U);
    msg.setSourceEntity(79U);
    msg.setDestination(16U);
    msg.setDestinationEntity(89U);
    msg.conductivity = 0.518025532181;
    msg.temperature = 0.447076924694;
    msg.depth = 0.881451356322;

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
    msg.setTimeStamp(0.643323821443);
    msg.setSource(19507U);
    msg.setSourceEntity(59U);
    msg.setDestination(660U);
    msg.setDestinationEntity(107U);
    msg.conductivity = 0.467593091693;
    msg.temperature = 0.0626471059009;
    msg.depth = 0.605958968441;

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
    msg.setTimeStamp(0.449618973964);
    msg.setSource(34127U);
    msg.setSourceEntity(238U);
    msg.setDestination(29797U);
    msg.setDestinationEntity(117U);
    msg.altitude = 0.356528499824;
    msg.roll = 30552U;
    msg.pitch = 63031U;
    msg.yaw = 40813U;
    msg.speed = -31229;

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
    msg.setTimeStamp(0.962773487826);
    msg.setSource(53940U);
    msg.setSourceEntity(26U);
    msg.setDestination(10415U);
    msg.setDestinationEntity(80U);
    msg.altitude = 0.291724049751;
    msg.roll = 61167U;
    msg.pitch = 64489U;
    msg.yaw = 42241U;
    msg.speed = -7164;

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
    msg.setTimeStamp(0.179389623387);
    msg.setSource(14635U);
    msg.setSourceEntity(223U);
    msg.setDestination(17593U);
    msg.setDestinationEntity(220U);
    msg.altitude = 0.436247257058;
    msg.roll = 25110U;
    msg.pitch = 24992U;
    msg.yaw = 19690U;
    msg.speed = 22049;

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
    msg.setTimeStamp(0.230378146066);
    msg.setSource(18903U);
    msg.setSourceEntity(55U);
    msg.setDestination(11974U);
    msg.setDestinationEntity(195U);
    msg.altitude = 0.517333702484;
    msg.width = 0.817375870666;
    msg.length = 0.172423332631;
    msg.bearing = 0.860213759346;
    msg.pxl = 22972;
    msg.encoding = 79U;
    const char tmp_msg_0[] = {-119, -72, 31, 35, 19, 24, -10, 120, -32, -109, -66, 76, 45, 34, -3, -19, -2, -95, 109, -28, 34, -115, -18, -111, -107, 76, -1, -104, 26, -12, 116, -116, 8, -59, -90, -106, -97, -97, -102, -104, -46, -73, -91, 98, -19, -106, 29, -53, 96, -42, -96, -20, -119, 114, -11, 2, -10, 97, 101, -45, -80, 31, 88, -32, 119, -113, 65, -31, -27, -60, -43, -94, 8, -84, 119, 78, -118, -58, -77, 106, 112, -14, -92, 3, -33, 60, -80, -94, 84, 103, 83, 17, 103, 104, -62, -37, 84, -13, 96, -104, -62, 78, -21, -34, 26, -94, -16, -52, 74, -77, -34, 95, -80, -4, 40, -101, 102, 38, -95, 78, 50, 113, -8, -100, -110, -73, 121, -92, 70, -98, 90, 23, 103, 78, -31, -115, -58, 85, -43, -63, -44, -18, 47, -88, 117, 27, -125, -21, -36, 119, 15, 13, -4, 60, -22, 118, -18, -28, 34, 105, 62, -118, 68, 53, 85, 114, -65, -95, -50, 65, 71, 77, -23, 76, -28, 66, 29, 80, 120, 43, 45, 94, 61, -75, 25, 43, -2, 18, 77, 86, 72, -50, -35, -88, 26, 72, 85, -127, -100, -58, -67, 115, 113, -11, 76, -116, -127, -85, -36, 18, 2, -117, -115, -73, 24, 115, 95, -118};
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
    msg.setTimeStamp(0.0511793055749);
    msg.setSource(65248U);
    msg.setSourceEntity(30U);
    msg.setDestination(52266U);
    msg.setDestinationEntity(247U);
    msg.altitude = 0.127681894236;
    msg.width = 0.189381240051;
    msg.length = 0.591129578537;
    msg.bearing = 0.136566806585;
    msg.pxl = 32507;
    msg.encoding = 151U;
    const char tmp_msg_0[] = {-15, 46, 20, 114, -104, -60, 98, -32, 79, 28, -55, -54, -36, 26, 125, 114, 5, 75, 3, -30, -117, 7, 43, -124, -99, 102, 16, 124, 86, 0, 10, -23, 123, -99, 71, 28, -38, -60, 37, 97, -52, 12, 102, 87, 115, -65, -75, -13, 106, 105, -100, 108, -66, -23, 113, 35, 95, -65, 108, 22, -119, -57, -45, -66, -62, 56, 66, 54, 94, -32, -100, -52, -104, 113, 60, -21, -102, 68, 94, -26, 6, -50, 65, -77, 104, 69, -122, 5, -58, -82, -124, 59, 42, 12, 61, -43, -115, -85, -37, -39, -67, -81, -65, 48, -104, 61, -39, -67, -25, -108, 75, -106, -102, 71, -25, -122, 108, 3, -59, -5, 68, -120, 95, 70, 89, 31, 121, -103, 62, -120, 48, 62, -85, 84, 9, -100, 94, -38, 13, 85, 98, 109, -77, 90, -12, -112, -94, 33, 2, 91, 1, 53, -73, 100, 6, -87, 47, -109, 117, 31, -3, 80, -118, -55, -67, 115, 59, -43, 0, -99, -84, -29, 24, -74, 115, 101, 81, -44, -125, 57, 24, 72, -35, -100, -98, 12, 18};
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
    msg.setTimeStamp(0.26007705486);
    msg.setSource(54287U);
    msg.setSourceEntity(139U);
    msg.setDestination(26566U);
    msg.setDestinationEntity(225U);
    msg.altitude = 0.589523434213;
    msg.width = 0.113779563186;
    msg.length = 0.790646612008;
    msg.bearing = 0.974566835869;
    msg.pxl = 13135;
    msg.encoding = 58U;
    const char tmp_msg_0[] = {-120, 98, -86, 74, 87, -106, 87, 53, -18, 85, -75, 65, -52, -89, -41, 42, -92, 45, -9, 84, -78, 52, -96, 17, 19, 28, -5, 85, -118, -78, -71, 5, 7, -43, -48, -19, -38, 101, -64, -70, -118, 9, 101, 76, 35, -15, 55, -115, -16, 52, 22, -24, 10, -124, -124, -44, 29, 26, 86, -48, -84, -25, 30, -76, 55, -59, -36, -100, 75, -86, -50, -52, 121, 49, -115, -29, -115, -121, -21, 25, 18, -61, 21, -117, 0, 38, -87, -83, -94, 81, -122, 33, -50, 122, 62, -77, 26, -50, 9, 33, -66, -88, 17, 18, -109, -62, 4, -103, 100, -58, -70, -13, 5, 120, 77, -52, 1, -28, 22, 63, -48, 30, 49, 108, 93, -104, 12, -70, -36, 31, 120, 35, 64, -121, 17, -80, -111, -22, -84, 63, -31, 13, 76, 124, 27, 9, 69, -93, 93, -64, -45, -69, -6, 12, -45, -114, -47, -35, -68, 8, -113, 1, -118, 118, 80, -118, -122, 76, -92, -46, -77, -82, -84, -74, -100, 80, -45, -91, 31, 35, 87, 88, -94, 86, -128, 113, 113, -36, -72, -43, -66, 119, -17, -76, 124, -87, 121, -53, -24, -29, -49, -99, 111, -104, 7, 123, 40, -53, 5, -96};
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
    msg.setTimeStamp(0.292603463047);
    msg.setSource(20264U);
    msg.setSourceEntity(211U);
    msg.setDestination(51134U);
    msg.setDestinationEntity(169U);
    msg.text.assign("HCCPJQKDDHVWFSODLQGEGLKUCMDQAYLAXWXTADUHBXWVAARHBFKOWLKLOQUTPRULFOQEVLWGRIUXNPXGSBXTIWXPNZKRMYKEKFXGWSKNCJJSBZYHENSTOHDTBSACGZPVPSBYGIEEYIFIAIDCNNTLIFGRDOHVZJCZGBCMJTPNVEYRTLRS");
    msg.type = 173U;

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
    msg.setTimeStamp(0.25778296949);
    msg.setSource(53087U);
    msg.setSourceEntity(5U);
    msg.setDestination(25121U);
    msg.setDestinationEntity(46U);
    msg.text.assign("ZUAXTSNHRSLQNCNKIROWRVJCOGYWYBYEWTVROPIXUMKIWDPCBYTCAILZNQVWYHFHBDXBDEAZMOANZMUGOZLJVGSOOEFCXXPWVSMEJMPDNVGDLYMJXMLTS");
    msg.type = 103U;

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
    msg.setTimeStamp(0.570229212906);
    msg.setSource(44326U);
    msg.setSourceEntity(153U);
    msg.setDestination(9819U);
    msg.setDestinationEntity(221U);
    msg.text.assign("VONPJFALUBJYUAKOZPGUHJHGTXRFSLXBCGWVSPEBYAEOBXDCZOANTTUE");
    msg.type = 0U;

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
    msg.setTimeStamp(0.760551387907);
    msg.setSource(39548U);
    msg.setSourceEntity(73U);
    msg.setDestination(37630U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.644175054472);
    msg.setSource(39613U);
    msg.setSourceEntity(138U);
    msg.setDestination(8754U);
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
    msg.setTimeStamp(0.283434410475);
    msg.setSource(7639U);
    msg.setSourceEntity(238U);
    msg.setDestination(5281U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.00245779207404);
    msg.setSource(1797U);
    msg.setSourceEntity(196U);
    msg.setDestination(20506U);
    msg.setDestinationEntity(196U);
    msg.sys_name.assign("UHPKCMXAERYFVWGDXWYRTMJ");
    msg.sys_type = 18U;
    msg.owner = 51701U;
    msg.lat = 0.519136558002;
    msg.lon = 0.59102800167;
    msg.height = 0.616837960761;
    msg.services.assign("UXGGTJKNUFRIFZWNJDLCZZRTPMTIBKWVGSCRBMLZQAXHDLCGLWOSPWZGLVOTPVVHZMODZCRPHXTJKYSJKDGEJOIXVSMNHQKNDSUBBDAGYFBHKKMEISTQEIOTCOVVOUXWWVESRJTMRIAYFBNIHMNGRUMPGAQOTTIFGBMFEIYPKYQMZLQACKSCEIPUHAHLDCPREFXULULEXAPNFXOJJCAAECVXJDKQOYYRUFPBWDYYWXWARHQQU");

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
    msg.setTimeStamp(0.134415396345);
    msg.setSource(49530U);
    msg.setSourceEntity(151U);
    msg.setDestination(36557U);
    msg.setDestinationEntity(72U);
    msg.sys_name.assign("DJLRGGALYBXTJXC");
    msg.sys_type = 176U;
    msg.owner = 33931U;
    msg.lat = 0.659521421634;
    msg.lon = 0.216383146861;
    msg.height = 0.138610985317;
    msg.services.assign("VOTQFPXYTQGCTVMUVKYLAVEDCYJBKPQSPTDWSORETRBDIUGWOEWUFGIOJLFSRA");

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
    msg.setTimeStamp(0.109345423057);
    msg.setSource(23393U);
    msg.setSourceEntity(56U);
    msg.setDestination(28084U);
    msg.setDestinationEntity(92U);
    msg.sys_name.assign("DLYAJFRHYFPAODXRBHCWQFTAYCCLZSMJUACGVWWNBXENPECMBEROYMZKNAWTCEWSVSTJXNZWHAOIKDVGPEYOFCGFDURJZQMJGRRZOIPBVTDMTYKQSRGLWVKZLNSAFUUCBLEIRLOIJGFKPUYKKEMIHBNQDTYIPNOTVRXDLOQUODHXTJH");
    msg.sys_type = 245U;
    msg.owner = 53285U;
    msg.lat = 0.0319634246608;
    msg.lon = 0.189180908927;
    msg.height = 0.112851434016;
    msg.services.assign("FUXIIFQJVXPNSYSUXXLGZNGJAOCPXFTWEKGFCUTGHNMWNDRBUZUDBCOSPQUTLETHSLJFRTQAWJXVMIZGMLQSSSKQIRRCHDBQABDNDSPRMVKDWNJQHARYKMUMNMFKTVJQVNULIVDWAZVYOGC");

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
    msg.setTimeStamp(0.167358763504);
    msg.setSource(18827U);
    msg.setSourceEntity(22U);
    msg.setDestination(38743U);
    msg.setDestinationEntity(221U);
    msg.service.assign("FNFMADYYMVVQJCWEULTYOGRVIEYOAQIQBCPMESSNXSOWEMBPZMTCQEDIHQCLKXPVCUQJYKMUOCMKQSVYGDXZRFWTDMDXAKIZGDAPJQKAAGXRLBXFXALZNOYOPUBBWHUSIVIGHUWPTQYNVNREEZXBPDGHSTFYRKRIWEPTZUNPEKBMUXGXAHNWGSFOGTMTIBSZAFTSCKTYOCRWGLKZ");
    msg.service_type = 188U;

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
    msg.setTimeStamp(0.974007989458);
    msg.setSource(28235U);
    msg.setSourceEntity(70U);
    msg.setDestination(25588U);
    msg.setDestinationEntity(251U);
    msg.service.assign("JRPHJZAJHXMIHLASABQRBGLKYUDHTIEWCIAONFLOIHRWSBGYBVJTRVRUJYDBIVMFWURIWDTKTQLACPMBWPULGQDFYQPCOYTNEIGENPNYSGZXSCINJPXVWVFDWGPSCOOZHCQLUKUFEBNEZKC");
    msg.service_type = 63U;

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
    msg.setTimeStamp(0.983531085353);
    msg.setSource(27824U);
    msg.setSourceEntity(236U);
    msg.setDestination(32964U);
    msg.setDestinationEntity(124U);
    msg.service.assign("NDVPFSRUAMRMCUTUJJJNLFYHUDERYVNVCGZQOVTEPGSZENPRFUGWKAIBWWVYCZGXTBITLEXSNOTDWFOOOCBSHEZQIWQMKCLZUVXUBNGTZKMQLWPEAEBCRRSGVWHBAPHNDFXAEQKJIBMPSOLSIPSVFHFCLRATYJPIQDLDYXPHKQUEAVAPOLMWLZOHBUGMYISXROXDFKEKRDASXZKJFNWRFOYBHZQNQM");
    msg.service_type = 151U;

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
    msg.setTimeStamp(0.943738695023);
    msg.setSource(50625U);
    msg.setSourceEntity(155U);
    msg.setDestination(50316U);
    msg.setDestinationEntity(131U);
    msg.value = 0.101899098073;

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
    msg.setTimeStamp(0.458679626732);
    msg.setSource(60762U);
    msg.setSourceEntity(51U);
    msg.setDestination(50589U);
    msg.setDestinationEntity(223U);
    msg.value = 0.165553403672;

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
    msg.setTimeStamp(0.0669865284784);
    msg.setSource(26802U);
    msg.setSourceEntity(69U);
    msg.setDestination(26961U);
    msg.setDestinationEntity(18U);
    msg.value = 0.637433059297;

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
    msg.setTimeStamp(0.233716119517);
    msg.setSource(1270U);
    msg.setSourceEntity(97U);
    msg.setDestination(60834U);
    msg.setDestinationEntity(215U);
    msg.value = 0.809597074111;

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
    msg.setTimeStamp(0.221582068072);
    msg.setSource(25778U);
    msg.setSourceEntity(98U);
    msg.setDestination(3244U);
    msg.setDestinationEntity(110U);
    msg.value = 0.268442562772;

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
    msg.setTimeStamp(0.0919716119228);
    msg.setSource(61838U);
    msg.setSourceEntity(155U);
    msg.setDestination(49654U);
    msg.setDestinationEntity(127U);
    msg.value = 0.87435357305;

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
    msg.setTimeStamp(0.245000368207);
    msg.setSource(54041U);
    msg.setSourceEntity(61U);
    msg.setDestination(5263U);
    msg.setDestinationEntity(66U);
    msg.value = 0.380562774808;

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
    msg.setTimeStamp(0.966323077446);
    msg.setSource(40439U);
    msg.setSourceEntity(19U);
    msg.setDestination(36952U);
    msg.setDestinationEntity(240U);
    msg.value = 0.260187230061;

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
    msg.setTimeStamp(0.793665994016);
    msg.setSource(23920U);
    msg.setSourceEntity(25U);
    msg.setDestination(58330U);
    msg.setDestinationEntity(75U);
    msg.value = 0.077581430863;

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
    msg.setTimeStamp(0.0466986261759);
    msg.setSource(60894U);
    msg.setSourceEntity(143U);
    msg.setDestination(18578U);
    msg.setDestinationEntity(223U);
    msg.number.assign("EIAGCLMWAYJJJXAYGXFGPD");
    msg.timeout = 59869U;
    msg.contents.assign("COJQWNOVADONIWWQPTHEBDVLTDMQULBTGIKTUOFUKEUZQASASICNVSZZYGCYKVHJLEJXBJXPRWIYRNJWJMUHMMRVZPCOKOIA");

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
    msg.setTimeStamp(0.959677960307);
    msg.setSource(65094U);
    msg.setSourceEntity(119U);
    msg.setDestination(46934U);
    msg.setDestinationEntity(60U);
    msg.number.assign("KUOMUSUAPLIWBMYIWJCNRWGUBDWKBRUXFPKBYRJQNYOUHMQKGFROFNTOFDVVXJWQVPCFTPVIJQBUUOFGEGZTIZDGCHELZYYAZMFPLFL");
    msg.timeout = 46067U;
    msg.contents.assign("GWIVNJSUGYPHKE");

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
    msg.setTimeStamp(0.526164846573);
    msg.setSource(59818U);
    msg.setSourceEntity(237U);
    msg.setDestination(27849U);
    msg.setDestinationEntity(36U);
    msg.number.assign("GEWWBWUBJJIRKJKZVMQFMWGESVVSHUFTUJAXTXZTIKLNEQYFWZDRHPE");
    msg.timeout = 49501U;
    msg.contents.assign("PISHJYLTEDSMQDPWUZDGYUMVEXRORYOEUIOWGYQNGHVLTJLMYQQVAPQXUWHLXSCDKFXMMFQLVZNCAXTFFSKBLNRBGPOKUMZT");

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
    msg.setTimeStamp(0.849237089073);
    msg.setSource(44764U);
    msg.setSourceEntity(78U);
    msg.setDestination(34865U);
    msg.setDestinationEntity(104U);
    msg.seq = 2802495899U;
    msg.destination.assign("DNCZYWTKQFCYMGJEZHRTZAYAPFGZRBUREEZDOJMOLXIJBUNWQMTTSHNVDSRBRTCVXDKVMYEPKTPVXQPVGRYVCBIQM");
    msg.timeout = 39455U;
    const char tmp_msg_0[] = {104, 43, -32, 96, 11, -43, -109, -40, 87, -126, 104, 96, 77, -3, -81, 21, 19, -76, -103, 103, 33, -27, 83, -53, 67, -51, -87, 94, -66, -67, -45, 45, 74, 54, -19, -99, 106, 66, -48, 117, -73, 14, 115, -121, -107, 16, 2, -38, -116, -21, -103, 90, 108, -120, -2, 97, 0, 21, 117, 13, 15, 21, 14, -8, 69, 32, 25, -58, 123, 94, -57, -83, -15, 46, -55, 123, 82, 44, -88, 106, -127, 124, 114, -21, -108, 50, -80, 30, -22, -23, -9, 22, 91, -45, 102, -42, -82, -37, -2, 56, -6, 73, -77, 23, 14, -91, 77, 116, -47, -53, -99, 17, -96, 6, 84, 55, -59, 61, 100, -128, -84, 84, 70, 49, 91, 103, -33, -30, -10, -39, 83, 64, -78, 97, -123, 123, -51, -79, -61, 104, -38, -5, -12, -85, -102, 80, -81, -70, 4, -16, -38, 22, -97, -17, 76, 29, 55, 85, -104, 98, 39, -113, 17, -110, -22, -52, -38, 3, -50, 43, 108, 69, -14, 68};
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
    msg.setTimeStamp(0.865432730612);
    msg.setSource(26366U);
    msg.setSourceEntity(163U);
    msg.setDestination(56572U);
    msg.setDestinationEntity(4U);
    msg.seq = 652906274U;
    msg.destination.assign("ZEQDRFCQJEDDCFYJKCIKAWCFEWTCGMKGOSPZRVPIEWVTKUUHOCLMUHCWPWHOZZUMRNEOLFIYFPUUNIRIASZZNOBKFKJHRPBXSYZQNLAFUGYIGGJQSEOOXPYHGKXYISLXLBMSQEQVUQABMMDSTLGXXTFC");
    msg.timeout = 63539U;
    const char tmp_msg_0[] = {-80, 85, 43, 59, -115, 40, 121, 18, -81, 37, 83, 37, 39, -105, -51, -69, 32, 61, -46, 94, 110, -34};
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
    msg.setTimeStamp(0.197319605806);
    msg.setSource(34951U);
    msg.setSourceEntity(209U);
    msg.setDestination(14625U);
    msg.setDestinationEntity(139U);
    msg.seq = 1609329490U;
    msg.destination.assign("QHGHWFQTSDSSCJJCHFALHGZMLTQPGTKMPRXSRABYZMNXQBUEKDJLZBUBAFKCAFNOXQOLKFSTUITTAFGJYNQKDFNEPEVMKHVDZEJVGXBMKWRCAWUIWZBLQTSYBDZPUJMMJOYUVAEYPMHQWIZIMBXXZTLRRGHSIIBONLEOSADQYQKGDLNLEFADWD");
    msg.timeout = 38014U;
    const char tmp_msg_0[] = {-90, 0, 30, -98, 66, -99, -11, -75, -3, -94, 2, -91, -92, -71, 74, -122, -111, 77, 69, -96, -29, -61, 91, 42, 50, -111, 100, -42, 31, 51, -12, 64, -9, -63, -122, 124, -103, 84, -3, -94, -2, 5, 4, 91, -5, -20, 106, -26, -27, -87, 88, -49, 32, 114, -116, -52, -48, 41, -23, -29, -21, -114, -101, 79, 63, -62, -4, -51, 3, -64, -7, 116, -100, 36, 74, 102, -2, -1, 15, -101, 35, -20, 80, 105, 57, -115, -128, -126, -128, 20, -63, 16, -100, -29, -84, -54, 8, -25, -75, 96, -96, 124, 108, -57, -122, -24, 126, -120, 104, 126, -46, 11, 119, 2, -111, -10, -80, 121, -101, 72, -15, 42, -95, 94, -40, 35, 34, -61, 13, -11, -14, 73, 45, 0, -99, 27, -86, -87, -79, 55, -4, 94, 31, 82, -26, 21, 57, -78, -126, 27, -47, -40, -120, -121, -102, 20, -58, -27, -52, 100, 50, -4, 79, 37, -72, -59, 31, -71, 88, 21, 49, 104, -64, -82, 79, -63, 51, 99, 102, -12, -76, 87, -17, 24, 109, 126, 27, -125, 103, -15, 9, 9, -32, -117, -96, 81, -62, 26, -108, 20, 102, -114, -3, 78, 108, 57, -24, 65, 27, 15, -20, 109, -24, 66, 79, -67, -17, 21, 95, -122, -106, -30, 126, 99, -125, 62, -4, 106, -55, -34, 82, -118, -32, 34, -92};
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
    msg.setTimeStamp(0.316660311364);
    msg.setSource(52535U);
    msg.setSourceEntity(175U);
    msg.setDestination(6132U);
    msg.setDestinationEntity(68U);
    msg.source.assign("YOTQGREFULBNOBUBZEXFKXHIRJXJXXSPSPGLGOVFRMUSMMKCFOGBWVKVHHZOYNLPPCVEAMCWLDBPSNPQMBEDOGYRIMUAFMLQZRZCWDYDGYVKCEMRFDUSCKDMGPDATEOXKVLHLKJIZAQRTJUVNTGIDHNZTRILBRJGZTVUJXIYQDHXYHEQLIAFS");
    const char tmp_msg_0[] = {-56, 84, 47, 98, -124, -68, 79, 125, -112, -99, -22, -36, 26, 8, -108, -81, -45, 76, -17, -55, -120, -115, -30, 99, 33, -5, 100, -120, -40, -115, 111, -114, 30, -121, 60, 117, 13, -84, 63, -60, 60, 116, 77, 107, -9, -39, 114, -121, 119, -98, 60, -22, 44, -104, 35, 38, 56, 109, 12, -26, -96, 99, -52, -68, 96, -53, -94, -128, 124, -24, 47, 39, -90, 107, 74, 65, -47, 16, 99, 108, -54, 74, 116, 48, 9, 82, 48, 115, -21, 83, -95, 6, 26, -99, -29, -96, 4, -49, 123, -125, -113, 9, 12, 11, -82, -16, -110, -73, 11, -63, -57, 44, -88, -70, -36, 104, 45, 97, -110, -106, 42, 119, -8, 8, -89, -104, -41, 42, -115, 58, -52, 10, 16, 70, -59, 79, -4, 44, 45, 118, -86, 72, -113, 39, -107, -63, 37, -18, 30, -65, -106, 110, 86, -50, -7, -20, -122, 94, 33, 55, -70, 108, -20, -86, -56, 63, 3, 98, -1, -22, -121, -40, -73, 111, -124, -95, -61, 77, 97, -56, 118, 102, 93};
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
    msg.setTimeStamp(0.859529002218);
    msg.setSource(44735U);
    msg.setSourceEntity(106U);
    msg.setDestination(35374U);
    msg.setDestinationEntity(153U);
    msg.source.assign("FTNUEDFMRUVHXAKGCWIJJAIEXOIYLZJCFFCXNWAVEMIRYSZPSFGSXONJGDSLONWKIAQHWCGPBVPTEFSVFHYNRYLMSMTWWSCKRDBYEWIERQYOTQQBYOYXPCGGUPGMMMCHXUVVQPKGKCQPTXFJSLIU");
    const char tmp_msg_0[] = {-102, 97, -34, 97, -19, -106, -37, -41, 111, 101, -92, -92, 77, 29, -66, -2, -102, 90, 37, -81, -105, 111, -2, -12, -115, 67, -97, 29, 52, -117, 1, -108, -74, -7, -6, -82, -4, 50, -57, -103, -22, -78, 43, -114, -40, -74, 27, 25, 89, 27, -112, -41, 49, 100, -55, 96, -57, 119, -49, 0, -28, -100, -86, -118, -80, -117, 119, -67, 79, 31, 25, 112, 70, 73, 53, -24, 76, -107, 14, 87, -75, -100, -26, -81, -54, 113, 23, -78, -78, 97, 12, -121, -42, -69, 77, -103, 71, 4, 31, 52, -91, 80, 6, -6, -4, 62, 51, 7, 28, 20, 97, 84, 13, -26, -108, 55, 29, -101, 108, 45, -25, -12, -89, 1, 4, -27, -79, 38, -6, 113, -6, -14, -125, -30, 119, -8, 37, 92, -124, -63, -38, 50, 66, -114, 114, 73, 92, -78, 49, 73, -6, 58, -71, 93, -20, 37, -84, 74, -113, 103, 38, 22, -123, 108, -49, 58, 108, -37, -53, -125, -97, -113, -10, -59, -92, 56, -36, 22, 13, -109, 110, 19, -111, 123, 103, 101, -85, -20, -28, 106};
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
    msg.setTimeStamp(0.152571721426);
    msg.setSource(946U);
    msg.setSourceEntity(231U);
    msg.setDestination(834U);
    msg.setDestinationEntity(153U);
    msg.source.assign("ZAMQBUHDUQEREZXBNQNGKZMIWTUFBMRPYQHTXPDQLIOTGUSZAAMUWCVNLBJYRILECNGXORPMPULSKPXEYVHHIDRYOXHIZFCCCIKVDPMRFNLTOUAPVJSBKXRLKGJEIFSUONSB");
    const char tmp_msg_0[] = {84, 122, -15, 64, 0, 9, 24, 10, -84, -7, -27, -111, -42, -22, -50, -39, 9, -6, -97, 78, 96, 85, 104, -79, -118, 55, -126, -124, 105, -53, 78, 93, -52, 63, 30, 110, 78, 77, 77, -57, 17, -7, 8, -26, -53, 108, -83, -91, -81, -43, 19, 67, 94, -105, 4, 117, 14, 73, 73, 124, 61, 102, 112, 114, -64, 104, -102, -92, -9, 53, 88, 29, -96, 102, 22, 68, 59, 54, 27, 30, -84, 115, 83, -3, -1, -77, -94, -78, 13, 125, -95, 29, 4, -91, 83, -71, -126, 112, -110, -30, 94, -20, -128, -108, 79, 14, -57, -107, 112, 10, 58, -112, -76, -116, -107, -12, -21, -21, -79, -24, 94, 49, -62, 34, -27, -64, -125, 64, 13, -78, -122, -114, 27, 8, -54, -66, -127, -30, -110, -77, 73, -116, 32, -17, 1, -4, 118, -50, 9, 60, 121, -15, -28, -98, -62, -56, -18, -26, 13, -37, 110, -8, 68, 99, 68, 49, 23, -29, 99, -72, -2, 30, 90, 51, -115, 19, -34, -23, -74, -4, 58, 115, -126, 85, -76, 125, -2, -48, 84, -24, 9, -13, -103, -119, -1, -97, 2, -16, -124, 41, 62, 85, -1, -62, 123, -9, -28, 119, 12, -45, 34, -12, 54, 72, -34, -124, 19, -26, 95, 19, 28, 101, -82, 8, 105, 70, 90, 57, 44, -86, 112, 116, -114, -93, -53, 92, -109, 103, -28, 54, 24, -32, -117, 35, -31, 111, 116};
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
    msg.setTimeStamp(0.878882576158);
    msg.setSource(33155U);
    msg.setSourceEntity(68U);
    msg.setDestination(35781U);
    msg.setDestinationEntity(60U);
    msg.seq = 3175655097U;
    msg.state = 34U;
    msg.error.assign("SAXLXMJCKPVJOYNOAVZGAYZSZQPTCJKVGFYJVAWWOMFEHZRNIKQLJLWXCXLKKMDBROZGMEOCQASTMUZASFGXBZSYCSYSEORYHCORWFQIUIBZSKDDPUHBEFVEVLKUWGINYTRNAWJEDHJZMAXMKFDWPRHUSIOXFCLWBTFGBTCSHPROBTVNQHDRWHHJRKVEYURLAPVYNTZUIULONBNJQQMFGTDMNI");

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
    msg.setTimeStamp(0.412829543484);
    msg.setSource(25477U);
    msg.setSourceEntity(212U);
    msg.setDestination(64007U);
    msg.setDestinationEntity(248U);
    msg.seq = 2990626554U;
    msg.state = 172U;
    msg.error.assign("HAOTMOOMQWKFOXXMVRLMWAGDRYURAZYRWCEBUKEPGKRTPDYNIZGMCNKLIUECDRFZQQTHBYBMTXQDHICBEAVMZCWBMNSDQCWHOPLJSCNNDHFKSPSJPGAGVCTLTAQLZZILLMUKAIDYKVZRJUYIJXZV");

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
    msg.setTimeStamp(0.459761490871);
    msg.setSource(25305U);
    msg.setSourceEntity(172U);
    msg.setDestination(3002U);
    msg.setDestinationEntity(82U);
    msg.seq = 650318825U;
    msg.state = 106U;
    msg.error.assign("SNVLRBZIUVGMAYQWJIPXDBNTRIUEPOUOVPDPDADGCBEXFSPWDQMXXCFZHZONSDLQTNVG");

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
    msg.setTimeStamp(0.164881819395);
    msg.setSource(28521U);
    msg.setSourceEntity(220U);
    msg.setDestination(35479U);
    msg.setDestinationEntity(123U);
    msg.origin.assign("NBKCNBMFWEKVJSNDPKZIOZVXUEEAFPZIUJOXQJHISJWBKCRYNGRZBQMDUOOBGFHLBSYTYTKOGZDELWLWHJJHFSWOWISBAXGMTYZQWSURMTRVPRRVEPQVCHGDLJHSWKKFMQSHCLIBMKJFTEDUPNXKEYDPQLAGNUQPJNALCHJLGYLRAGAQUKXTRFUMIVFXORDERQCTACCHSSYZDAZPVVBWDVTYGPLXMXIHTAQMUOFXYFUPWINNNMIBA");
    msg.text.assign("VOMPMAGNAEWAYNBDQHFLWLUWCPPLGNZSNRMELBICBLUOTAXONC");

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
    msg.setTimeStamp(0.267563607012);
    msg.setSource(58282U);
    msg.setSourceEntity(212U);
    msg.setDestination(3355U);
    msg.setDestinationEntity(208U);
    msg.origin.assign("LPKFBCPGKCLQSXIYDTHEAQLVGISHYSEVFQKNZYFJAWQNJZEQFPOPDXCBDTGALGPDUDOLNGAWTVYXAAZFHXJSMIQWAOCIMSNRB");
    msg.text.assign("UGEOPVIKRAFMTDLKQQKXRXQJDWGVULGIJIZPYGHTFEPZCXOYOUWYOHMSCHGWPSISFKWQECXSDLDFYSVDYFQEDSVAFRXYDMIECGLNOXRCNUMDEIWANVSZYWDYLPNBUQZTSNQJQOXILKHBTVZBVQQPRJGARJIVKJNVXFSMRMZBBRZRPXDSOWKNJLCPAHWJWPYTNTUVFUUZCZYIHFFMUBJKOGOTELCOM");

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
    msg.setTimeStamp(0.568647062747);
    msg.setSource(38127U);
    msg.setSourceEntity(84U);
    msg.setDestination(532U);
    msg.setDestinationEntity(245U);
    msg.origin.assign("MRJQULKUCOSBABUVIEDDAUZMREPWBYRCRVPKFVKIGVAZCWXTJPOSRTIZSLLTLTJOLSAABEIZCYDRSUCCUGNVGQQYHDXNDDPFVWPADUYZLTNNCQMABEQCTHTWJHYEMZAEVHLXVMPBQVESFYLDMCGQTXPXDIHBRNJAJOGITFFBZGVHWESPNLFZKRFKHJNYNJOOIWXWOUYLZHYYKWTMXXXCNXJODJSPWGIM");
    msg.text.assign("ANNYYDGIBVVRCAQBOHYT");

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
    msg.setTimeStamp(0.477419414342);
    msg.setSource(8402U);
    msg.setSourceEntity(219U);
    msg.setDestination(51883U);
    msg.setDestinationEntity(133U);
    msg.origin.assign("LBHSQHDIYVZTKTCIOMGDXKBJPOCJAKQLLSDPVPADSQGIYOLCWHVNHURCEKXGISLJAXGOSVFCERKJKFWSQGCJCNFZFEMBEQZEBCZZHLNYNFRRHURJGOWLXZYNRLWJPMAWAKFEBUBUAUEAICXUYZHTHFKCRVIJUHRSTQYMDOEMTYWPQEOFXGBHZRVSOMUXKFASVPQXPYVIZYTIWJVMXFOIZ");
    msg.htime = 0.0359936515663;
    msg.lat = 0.0566735760336;
    msg.lon = 0.903754472273;
    const char tmp_msg_0[] = {-47, -92, 61, 91, 60, 73, 95, -36, 68, -7, -125, 124, -13, -9, -56, -44, 111, 99, 28, 106, -122, 99, 62, 78, -125, 65, 67, 0, 35, 120, 51, 4, -72, -124, 60, -86, 87, 37, 95, -112, 45, -127, 69, 33, -111, -116, 50, 3, 68, 66, -73, -32, -13, 83, -92, -11, 112, -105, 69, -12, -97, 22, 121, -90, 91, 63, -114, -118, 53, 44, -49, 98, -12, 114, 48, 118, -89, -15, -2, -100, 52, 78, -93, -80, -37, -66, 15, 76, -34, 28, -8, 62, 11, 77, 39, 44, 109, -62, -11, -71, -119, 75, 39, -97, 126, 84, -59, 103, 2, 1, 48, 114, 104, -27, 69, 25, -5, 55, 124, -55, -49, -115, -26, -35, -26, -82, 79, -68, -61, 42, -29, 40, -87, -32, 85, -126, -93, -124, 106, 21, 2, 61, -62, -47, -41, 78, -117, -93, -84, -85, -107, -74, -77, 111, 100, -120, 108, 56, 120, 65, 103, -13, 83, -18, -27, 18, 81, 33, -72, -26, 101, 25, 66, 81, -55, 23, -67, -109, -38, 87, -6, -75, 123, -33, -82, 5, -54, -35, -103, 125, -84, 14, -97, -23, 27, -7, -55, -119, 11, -44, -79, -20, -11, 115, 121, 97, -115, -31, -111, 66, -102, 36, 0, 29, 85, 60, 1, 116, -59, -75, 62, -88, 13, -102, 77, 68, 26, -65, 39, -92, 23, -85, -126, 52, -84, -27, -10, -20, -81, -59, -68, 111, -77, 57};
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
    msg.setTimeStamp(0.186920128899);
    msg.setSource(25335U);
    msg.setSourceEntity(221U);
    msg.setDestination(37944U);
    msg.setDestinationEntity(206U);
    msg.origin.assign("GUFSVFJZQZTZWLGDSMWCBLSKYWRHEKGOUEKTFFXDSYBWBYPWAPIKOCDHUTFYYPVOXPUOXBVKMCIIACFQNHZDONUXSKUHMYPZBGCCWLLOLCMSTYBPLMGZOEMAQREATAHIAZXYRUFENLUIHCGTNJQNLIRPUJKRIJGBOXARDGDQQWFEIWDVVTQQFLSGBAMYRNE");
    msg.htime = 0.678557361856;
    msg.lat = 0.340618461695;
    msg.lon = 0.151132356378;
    const char tmp_msg_0[] = {-125, -127, -51, -55, 0, -92, -102, 98, 123, 35, -41, 54, 21, 69, -119, 73, 28, -124, -6, 38, -60, -58, 76, -124, 28, -29, -75, -70, 15, 23, 13, -127, 26, -77, -110, 16, -56, -39, -86, 92, -81, -113, 42, -106, -120, -37, 27, 85, -72, 77, -113, -10, 56, -114, 31, -22, -58, -81, 3, -24, -115, 71, -90, 24, 124, 87, 21, 98, -48, -64, 23, -67, -107, -27, -17, -76, -28, -32, -113, 8, -67, -8, -37, -68, -115, 81, 43, -42, 13, 36, 52, 117, -81, 122, 95, -86, 35, -61, 11, 47, -79, 107, -71, 66, 81, -15, 48, -88, -48, -25, -6, 5, 8, 11, 60, 22, -101, 83, -92, 59, -57, -48, -121, 40, -102, 10, -33, -102, 24, -92, 6};
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
    msg.setTimeStamp(0.866000099141);
    msg.setSource(23190U);
    msg.setSourceEntity(111U);
    msg.setDestination(49545U);
    msg.setDestinationEntity(88U);
    msg.origin.assign("RYOTEHICTUUBHJSIBMDMWBIXTPSCTBXXBNZEKTNYGOKDISPNQMFHTIJVDNWGEOFRNFPLWVMHLYNLQWCAOXRLPLJMOUZIFDGQBWAAUPKCJIYGYXBAQFTQZBKSVGTJGEDQWZSNMNUCVZSFQRJCREVXREIMFDXICBDUZKTNEGLFSYBCRRKAEYOAPMWHLRWCPGUHOZUSMRDHHUDLPJXKVJFJYHGXOPXVLHVOKEOUJYKDQNQSFLIYZMAZ");
    msg.htime = 0.710970862233;
    msg.lat = 0.0842161527759;
    msg.lon = 0.665419179799;
    const char tmp_msg_0[] = {-22, 63, 25, -12, 85, -50, 1, -124, 78, -11, -2, 82, 27, -75, -31, 50, -98, -40, -9, 91, -50, -108, 121, -39, -10, -26, -91, -84, -23, -38, -91, -47, -53, -65, -10, 96, -124, 21, 85, -59, -47, -123, -55, 74, 74, 87, -34, 88, -114, 90, -9, -49, -51, -93, -12, 52, 101, -13, -32, -46, 29, 110, -65, -47, -85, -53, -82, -33, -76, 119, 23, 19, -18, 56, 90, -43, -24, -107, 94, -84, 102, -73, -81, 50, 115, -59, 65, 28, -10, -62, 30, 93, -93, -44, -6, 12, 105, 53, -117, -24, -108, 63, 82, 23, -110, 113, 111, 16, 105, 26, -93, 61, 100, 95, 81, 82, 28, -2, -108, -92, 109, 78, -73, 30, -28, 54, 75, -27, -33, -38, 1, -72, -9, -63, 112, -19, -70, 57, 72, 36, 118, 123, 88, -52, 5, 30, 29, -62, 94, -104, 51, 89, 125, -123, 116, -13, 75};
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
    msg.setTimeStamp(0.832212240335);
    msg.setSource(34790U);
    msg.setSourceEntity(176U);
    msg.setDestination(31449U);
    msg.setDestinationEntity(57U);
    msg.req_id = 49907U;
    msg.ttl = 43075U;
    msg.destination.assign("LZAQPJRZSBYGLGXGCWPKMARFAPIHCMZXAXUNSCYRXCFSAHJPAUVVSTRQOHEDDJUQVRTNKEOTHHCGUDSPOKRHJGJJVIYTIMXJODYQVJBNBGNHYIAXCYDXPBSENHFTCBDWKNKWXFNKGFFUZPRKODCAYTTEQYEMQUIQFCPQFVLBIJBRWIMNEWEUIPVLOLRWVYESWMLMB");
    const char tmp_msg_0[] = {-103, -112, 110, 3, 78, 1, -127, 23, -74, -38, -5, -62, -102, -91, -73, -127, 29, -98, 22, 50, 40, -111, -77, 109, 33, 49, -105, 8, -126, -52, 73, 19, 111, 25, -19, -119, -64, 28, 109, 124, 19, -11, 53, -7, -9, -103, 22, -59, -34, -90, 68, 111, -45, -65, 23, -88, 23, 24, 115, 29, 7, -125, 20, -106, 116, 67, -12, 27, 125, -30, -108, 38, 68, 60, 73, 73, -118, 118, -70, 8, 10, -27, 99, 83, -43, -32, 76, 47, -2, 24, -25, 69, -16, 83, -15, -34, 42, -100, -128, 82, 34, -38, 70, 110, 118, -63, -48, -16, 125, -112, -4, -23, 126, 32, -8, 64, 36, 58, -89, 89, 98, 79, -11, 107, -32, -94, 105, 5, -124, -79, -66, 77, -8, 97, 52, 29, 92, -70, -82, -99, -117, -103, -73, 73, 95, 44, -116, 77, 74, 51, 39, -17, 67, 76, -14, -61, 115, -1, 81, -52, 93, 32, -90, 58, 9, 49, 103, -52, 114, 67, 37, 51, -91, -35, 93, -57, -26, 10, -117, 123, -99, 11, -32, -126, 12, -93, -95, 97, 55, 24, 13, -125, 53, 18, -55, -113, 113, -85, 20, 89, 111, 118, 34, -85, -7, 100, 125, 42, 46, 30, 40, 10, 65, -82, 22, 101, -120, -26, 88, -119, -128, 123, 13, -10, -6, 112, -76, -65, -112, 39, 22, 26, -53, 93, -46, 96};
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
    msg.setTimeStamp(0.472139457671);
    msg.setSource(21767U);
    msg.setSourceEntity(112U);
    msg.setDestination(1951U);
    msg.setDestinationEntity(124U);
    msg.req_id = 16422U;
    msg.ttl = 54054U;
    msg.destination.assign("CJOSELBLPZVSEAXIEWFJTCVUMWZMGGDLTAAXHTZOQPOXJDGVVILTQMWSOROYZVHGBKQKXEEMKFPJLCRWSWCHOAGMKPFIFNBXTICDRDOSDGAPTWPKNYYVJVVSYCBHDNQYUCAHBKBLJNNMXTMGW");
    const char tmp_msg_0[] = {4, -120, -103, -59, 93, 72, -6, 56, 103, -94, 33, -33, 12, -79, -70, -115, 55, 61, -81, -88, -1, 11, -111, 40, -35, 46, 12, -55, 120, 73, 74, 2, 32, -120, 93, 14, -87, 65, -114, 95, 33, 62, -59, 87, -44, 34, 40, 108, -120, -105, -79, -108, 0, -27, -126, 94, 24, 65, -39, 93, -49, -102, -87, -54, 110, 119, -27, -7, 90, 90, 51, -46, 112, -47, -91, 66, 29, -2, 85, -86, -10, -119, -55, 126, -61, -124, 48, -52, 94, -7, 3, 47, -126, -107, -21, 125, -81, -47, -55, -35, -120, 54, 64, 0, 124, 65, 118, 1, -83, -71, -91, -70, 101, 54, -51, 48, 9, 125, -55, 20, -69, 81, 3, 90, -94, -66, 1, 103, -108, -99, -43, -87, 77, -8, 107, -95, -83, 81, 59, 85, 120, -18, 100, -84, 121, -68, 110, 53, 8, 80, -76, 59, -50, -9, 120, 60, 14, 56, 104, 123, -96, -118, 22, 117, -117, -32, 60, 1, -119, -68, -2, 63, -26, 115, -105, 114, -8, -2, -109, -19, 109, 87, 42, 37, 50, -116, -127, 66, -82, -11, 118, -30, 103, -40, -19, -59, -55, 21, -71, -103, -43, -68, -104, 6, -72};
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
    msg.setTimeStamp(0.383061832073);
    msg.setSource(58523U);
    msg.setSourceEntity(54U);
    msg.setDestination(62321U);
    msg.setDestinationEntity(203U);
    msg.req_id = 8938U;
    msg.ttl = 4479U;
    msg.destination.assign("NIFWJFQOTCTALYWCSHVKDRMNAXNSPPRLWQHUUZOJZHHGWMKAQYGKQTHKEIZECJDVPHGYLRTIHZQAYBRWADOUYDBPXHZTNCSXJUDZORUKMEOLCWIRMMFNCBTPFXAFICAZAILVHBSBGVVGUMXWBPSEOUPJULVB");
    const char tmp_msg_0[] = {26, 76, 68, 93, -3, 44, 31, 96, 115, 47, -44, -48, 26, -94, 100, 48, -77, -96, 116, 65, 41, -50, -30, -109, 53, -66, -69, -35, 50, -35, -79, 19, 94, -43, 106, 55, 54, -57, 45, 48, 51, 29, -4, 123, 3, -8, 20, -14, 122, -52, -10, -60, -109, 112, -5, -29, 3, -66, 125, 37, -39, -55, 87, 115, 86, -70, 56, 72, -3, -18, 43, -15, -44, 33, 114, -27, 87, -89, 33, -94};
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
    msg.setTimeStamp(0.874946347362);
    msg.setSource(10979U);
    msg.setSourceEntity(176U);
    msg.setDestination(60157U);
    msg.setDestinationEntity(254U);
    msg.req_id = 845U;
    msg.status = 143U;
    msg.text.assign("ZUWQVWTURHMJEEYMHYERQZPMGGWQDOC");

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
    msg.setTimeStamp(0.623318598234);
    msg.setSource(1954U);
    msg.setSourceEntity(28U);
    msg.setDestination(60671U);
    msg.setDestinationEntity(155U);
    msg.req_id = 36473U;
    msg.status = 181U;
    msg.text.assign("QNYPSLCWAZRVMEVFDZXFWMHFJMXGXDZFRIQSWDKXOPSFIXMTDURBVDETGRGOVQCWEHUNGGMRYTKWIDUJPSCPDOVEBQAHNQWPZTSGKRVOOSRTBDPVDZHULNHAYQPJZGQWICJTFXAUMGOUFZUZYTHMRQSWUNLEYHJCBSLLOZBQBLIQKAOWIK");

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
    msg.setTimeStamp(0.259732470695);
    msg.setSource(26996U);
    msg.setSourceEntity(205U);
    msg.setDestination(19663U);
    msg.setDestinationEntity(176U);
    msg.req_id = 36532U;
    msg.status = 93U;
    msg.text.assign("VGJWWBLLJFSVPJMAPYVUIPGNMBTHBAFTRRXNEIQAZBIOOOSHIZDQZOHUVYMYRBONOWMYDJHJIUIQTVANEVXYGDB");

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
    msg.setTimeStamp(0.933658373998);
    msg.setSource(5759U);
    msg.setSourceEntity(122U);
    msg.setDestination(26870U);
    msg.setDestinationEntity(199U);
    msg.group_name.assign("CWWAQLIAXPOGFJLHEKIZAZOIQOZRTUBLUVROBOCVHWEXSNPBPLNHJFUTDCEYHNZZEBRWTVRMLQWCDYONCSYUDAWRIVJQNMGRPFYMBFXEYFCMFKDTIHLVLUSGMRGLIUEZWYAYZKFCBZSBDLXISYIGGD");
    msg.links = 765636915U;

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
    msg.setTimeStamp(0.463013893472);
    msg.setSource(11406U);
    msg.setSourceEntity(173U);
    msg.setDestination(8892U);
    msg.setDestinationEntity(23U);
    msg.group_name.assign("ROSTYFGVOHDYTNOJSOSQSPAKOCLAIHMJRDCAJURBARDPNNFGXCUMUHTQXXZBFLRMTHTFIXEXUYNCWCJVAGGEYBJVZHJMSOQTNZBMCYSIYDBKICQPSWDYEUPJURGPEBSVZXSHLRGNEOBNTRLAFUJYQTMZVALQFZBUQJDZQEIVQKIXFWPFFCRJIKVZIVCOOMPVYEEENHGRKHKMWDXHWNLBIWWVLXGQKAWANP");
    msg.links = 1314721668U;

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
    msg.setTimeStamp(0.175436259793);
    msg.setSource(63581U);
    msg.setSourceEntity(251U);
    msg.setDestination(46816U);
    msg.setDestinationEntity(81U);
    msg.group_name.assign("ZUYCENIAZQMCAWVSCYKYKOCDGBXLMMJXEGGIHFELSVNUKCUBPROJABNAWIHDOCZLZFWUXUQTYHKQXPOGMURHBSDMUGZNFXCPDHKTKRUMMXJRLLAYFVSBNZNBYSQLUWFVGBFYOWTKVSCITEPWXSZLKEZNDHPBSCYHVRRILDJDQFNGWHETVIARRTOREQNPFPMJMSITHKJUO");
    msg.links = 1668866548U;

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
    msg.setTimeStamp(0.108802613327);
    msg.setSource(35476U);
    msg.setSourceEntity(23U);
    msg.setDestination(52546U);
    msg.setDestinationEntity(55U);
    msg.groupname.assign("AYWWQADURELZQHKWPBIPHLXWZNLCQJCTTYHJLRMVAGSCVNLXYGYMRBZPZNOFCHSU");
    msg.action = 187U;
    msg.grouplist.assign("FGGITQGFIUUTQRJSADTILOWGSIKCKEQJLAZGMJUDVYTOGRTFOBCKMQVCJPYCBGARIKASCVVNNRJSHUNZDJYHLSRPDCNGYFVFOMAWNFAEXWIKINNPBUXOPMZCQSXETWGRHAS");

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
    msg.setTimeStamp(0.072626028162);
    msg.setSource(57858U);
    msg.setSourceEntity(0U);
    msg.setDestination(20005U);
    msg.setDestinationEntity(130U);
    msg.groupname.assign("TSKHRAGGEBRJYKYDPYFPAOGDERTNCOZSUNLHOKHEKNPXFNGNDCSROHFXKGKCFIMCAOTMCPUDFWQKCVLLX");
    msg.action = 134U;
    msg.grouplist.assign("SWKPAQGGRCFOABCLTHAMPFYJKLJEFQBCOKNYVNDQOGRNTVLDXVCMAACLDQPZWHEJZXVLHBEUJISIVSPCNRHBWTMZBPEYJTSKSQECLIGSIVMZQOUZZTIECDXGMAWY");

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
    msg.setTimeStamp(0.595794655836);
    msg.setSource(55793U);
    msg.setSourceEntity(222U);
    msg.setDestination(22852U);
    msg.setDestinationEntity(90U);
    msg.groupname.assign("YKXPQUPVWRAOORZFEBHUTDQICGWKBICEQLLKAXHXHPBIUKBRYRQFNBRQDSNBPBCAZNZVFCZUQSOKERMKMJHZRDEMJXSAYVXYIJLDNKLTTEFGGDKQEKWAODSXYJJLAGMMSONTVYPYHTEIYPF");
    msg.action = 254U;
    msg.grouplist.assign("HVBWDMNFKKZJRLJUZTOQLRNEBEPFKFLWHPHPYMWINVTCUXBRGOFIAFYWNDGOYJQPDNCTLHKNPVCJQTOVDFHNVOZXQTXESKBQRSZDESNTBOCQUYGSILXKCZBBQKUMAMEPVHDEYVCISYVBPY");

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
    msg.setTimeStamp(0.225914174268);
    msg.setSource(41350U);
    msg.setSourceEntity(189U);
    msg.setDestination(47149U);
    msg.setDestinationEntity(108U);
    msg.value = 0.504397487381;
    msg.sys_src = 26247U;

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
    msg.setTimeStamp(0.120485439524);
    msg.setSource(44659U);
    msg.setSourceEntity(108U);
    msg.setDestination(58103U);
    msg.setDestinationEntity(219U);
    msg.value = 0.231023414815;
    msg.sys_src = 56086U;

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
    msg.setTimeStamp(0.489295179868);
    msg.setSource(40260U);
    msg.setSourceEntity(21U);
    msg.setDestination(39370U);
    msg.setDestinationEntity(64U);
    msg.value = 0.599970746327;
    msg.sys_src = 61659U;

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
    msg.setTimeStamp(0.307600510405);
    msg.setSource(9656U);
    msg.setSourceEntity(211U);
    msg.setDestination(34318U);
    msg.setDestinationEntity(73U);
    msg.value = 0.86135972337;
    msg.units = 246U;

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
    msg.setTimeStamp(0.533722920977);
    msg.setSource(8623U);
    msg.setSourceEntity(116U);
    msg.setDestination(21771U);
    msg.setDestinationEntity(81U);
    msg.value = 0.0440524750573;
    msg.units = 58U;

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
    msg.setTimeStamp(0.746173120212);
    msg.setSource(21934U);
    msg.setSourceEntity(183U);
    msg.setDestination(8362U);
    msg.setDestinationEntity(113U);
    msg.value = 0.92248779539;
    msg.units = 63U;

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
    msg.setTimeStamp(0.410725911566);
    msg.setSource(17358U);
    msg.setSourceEntity(68U);
    msg.setDestination(4209U);
    msg.setDestinationEntity(237U);
    msg.base_lat = 0.563517416759;
    msg.base_lon = 0.271858727181;
    msg.base_time = 0.391832946177;

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
    msg.setTimeStamp(0.338783777166);
    msg.setSource(60073U);
    msg.setSourceEntity(178U);
    msg.setDestination(23160U);
    msg.setDestinationEntity(113U);
    msg.base_lat = 0.330674817661;
    msg.base_lon = 0.0594332898607;
    msg.base_time = 0.381745630458;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 16375U;
    tmp_msg_0.priority = 83;
    tmp_msg_0.x = -24001;
    tmp_msg_0.y = 17215;
    tmp_msg_0.z = -32274;
    tmp_msg_0.t = 5463;
    IMC::Temperature tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.832195908878;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.784061271813);
    msg.setSource(56577U);
    msg.setSourceEntity(27U);
    msg.setDestination(2389U);
    msg.setDestinationEntity(95U);
    msg.base_lat = 0.86865364675;
    msg.base_lon = 0.851925833333;
    msg.base_time = 0.53178879837;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 57749U;
    tmp_msg_0.destination = 42762U;
    tmp_msg_0.timeout = 0.68443316697;
    IMC::HistoricCTD tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.conductivity = 0.0250277654172;
    tmp_tmp_msg_0_0.temperature = 0.787439026129;
    tmp_tmp_msg_0_0.depth = 0.545279413504;
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
    msg.setTimeStamp(0.916810621944);
    msg.setSource(64863U);
    msg.setSourceEntity(129U);
    msg.setDestination(19785U);
    msg.setDestinationEntity(206U);
    msg.base_lat = 0.750101644392;
    msg.base_lon = 0.838862992883;
    msg.base_time = 0.362173027554;
    const char tmp_msg_0[] = {1, 118, -90, -44, 17, 31, 98, 28, 3, 41, -6, -90, 3, -43, 109, 80, 13, -66, 88, -1, 43, 50, 46, -30, 38, 11, 2, -15, 113, -14, 79, 46, -64, 31, 108, 25, 50, 65, 113, -128, 7, 105, 3, -90, -55, -125, -89, -117, -60, -61, -44, -29, -55, 29, -119, 96, 87, -56, 38, -96, 47, -110, -13, -104, -49, 29, -6, -127, 84, 98, 41, 67, -119, -116, 113, -74, -89, -80, -20, -42, 98, 32, 50, -53, 15, 88, 10, -62, -91, -15, -128, -53, 7, 30, 60, -29, 70, -93, -74, -92, -27, 31, 78, -35, -60, 63, -60, 13, 110, 86, -117, -37, -58, -4, -89};
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
    msg.setTimeStamp(0.507520478669);
    msg.setSource(19020U);
    msg.setSourceEntity(0U);
    msg.setDestination(59654U);
    msg.setDestinationEntity(44U);
    msg.base_lat = 0.891143906169;
    msg.base_lon = 0.030878599114;
    msg.base_time = 0.157277221829;
    const char tmp_msg_0[] = {39, -74, 40, -42, -74, -82, 116, -24, -71, 14, -26, -118, 109, -43, 77, 100, 86, 2, 73, 26, 125, -76};
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
    msg.setTimeStamp(0.354315829442);
    msg.setSource(65039U);
    msg.setSourceEntity(248U);
    msg.setDestination(49338U);
    msg.setDestinationEntity(56U);
    msg.base_lat = 0.00322859635725;
    msg.base_lon = 0.757735301993;
    msg.base_time = 0.11290997465;
    const char tmp_msg_0[] = {126, 60, -50, 66, -105, -101, -109, -30, -97, 72, 4, -101, -120, -94, -2, -44, 70, -72, 111, 28, 95, -20, 2, 3, -11, 35, 58, 46, 91, -127, -79, -109, 99, 104, -82, -115, 50, 71, 104, 126, -18, -122, -76, -81, -24, 88, -108, 6, -43, 77, 48, -95, 103, 124, -18, 67, 62, -110, 56, -69, -106, -11, -104, 80, 100, 50, -71, -85, -50, -106, -45, -116, -63, 29, -107, -102, 91, -44, -96, 115, -127, -79, 49, -54, -76, 37, 16, -117, -54, 6, -47, 63, 76, 89, 100, -121, -22, 17, -93, -115, 4, 86, -41, 115, 21, 79, 101, 95, -15, 106, -74, 87, 87, 104, -13, -63, 10, 38, -58, -50, -55, -13, 6, 53, 122, -66, -51, 46, -37, 46, -30, -82, -36, -34, 83, 39, 81, -98, 85, 53, -118, -11, -26, -109, 125, -95, 27, 123, -117, 9, 100, -15, -65, 81, 93, 97, -81, -80, -12, 35, 60, 65, -104, 99, 76, 70, -84, -47, 100, 113, 119, -23, -70, -101, -75, -69, 116, -46, 110, -87, 103, -76, 87, 75, 78};
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
    msg.setTimeStamp(0.440653633639);
    msg.setSource(200U);
    msg.setSourceEntity(134U);
    msg.setDestination(37571U);
    msg.setDestinationEntity(143U);
    msg.sys_id = 59014U;
    msg.priority = -105;
    msg.x = 32662;
    msg.y = -2988;
    msg.z = 2731;
    msg.t = -27377;
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("ISVDOYWBWNMULAGZNVSTHQOMYEZPJAZMDDMUUWZQNJVEGNQUBDAKSHSVSWOEBCPPEIINSIYUFSKRSKYRCAXOECNCLRZDWZLVCXIFESBKFPHHIDHHIGT");
    tmp_msg_0.sensor_class.assign("FIGGFVVKNUHPWDEXXAB");
    tmp_msg_0.lat = 0.0805733495445;
    tmp_msg_0.lon = 0.683959836348;
    tmp_msg_0.alt = 0.613582415147;
    tmp_msg_0.heading = 0.0730558726322;
    tmp_msg_0.data.assign("RAZLSZRJCHNULMEBSKXIHNXQFOMDOYYLQZJTHIOIVTNUIPWRQVPQBZMDBWVLXELPPDTAMVQVVAFHDFMJDNOXCQIIKGOICMPUHFOBAGLMEUDAWRBGJPYNRKGMGUUTLLYGTQSKXKYYGCVZBONOKVBSHCWUPZTKJWD");
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
    msg.setTimeStamp(0.98277636924);
    msg.setSource(16947U);
    msg.setSourceEntity(134U);
    msg.setDestination(62337U);
    msg.setDestinationEntity(216U);
    msg.sys_id = 28792U;
    msg.priority = 112;
    msg.x = 14545;
    msg.y = -26082;
    msg.z = 20949;
    msg.t = 17446;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.16758657734;
    tmp_msg_0.speed_units = 60U;
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
    msg.setTimeStamp(0.99875237917);
    msg.setSource(3269U);
    msg.setSourceEntity(118U);
    msg.setDestination(23541U);
    msg.setDestinationEntity(5U);
    msg.sys_id = 40971U;
    msg.priority = 52;
    msg.x = 28107;
    msg.y = -17622;
    msg.z = -19269;
    msg.t = -614;
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 135U;
    tmp_msg_0.plan_id.assign("CZZLOYTNZPWYOSHRDFFPMTWSMDYYRFGTHTIDOHEXTVPDISIKORDSGFZXGIGQHIXNNTIRBHRJDAGUVMCSJDKLAUPAAYRXHWJN");
    tmp_msg_0.plan_eta = -479333676;
    tmp_msg_0.plan_progress = 0.386213503117;
    tmp_msg_0.man_id.assign("GEHMQHVBFWOVXAXVYLTKNIKRGJHQXYIQRJWWMWUAWOHAIGFWFTCYFEBUTGYOAZAJNADKUHDKZLCLCTAWGODYFOFHEFRHZUPPVTLLNSCBINMNBDLXZFDYJMZYSCOVNJBRKSPDYMZSBWXQGWMESEH");
    tmp_msg_0.man_type = 49600U;
    tmp_msg_0.man_eta = -168045391;
    tmp_msg_0.last_outcome = 26U;
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
    msg.setTimeStamp(0.485103328772);
    msg.setSource(37042U);
    msg.setSourceEntity(61U);
    msg.setDestination(22144U);
    msg.setDestinationEntity(71U);
    msg.req_id = 16079U;
    msg.type = 222U;
    msg.max_size = 1218U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.507791325981;
    tmp_msg_0.base_lon = 0.569887029273;
    tmp_msg_0.base_time = 0.536101539295;
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
    msg.setTimeStamp(0.056403884794);
    msg.setSource(47294U);
    msg.setSourceEntity(221U);
    msg.setDestination(7420U);
    msg.setDestinationEntity(204U);
    msg.req_id = 53070U;
    msg.type = 168U;
    msg.max_size = 27433U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.639480209529;
    tmp_msg_0.base_lon = 0.708968503257;
    tmp_msg_0.base_time = 0.230235187405;
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
    msg.setTimeStamp(0.912032642492);
    msg.setSource(4490U);
    msg.setSourceEntity(148U);
    msg.setDestination(30731U);
    msg.setDestinationEntity(33U);
    msg.req_id = 18356U;
    msg.type = 14U;
    msg.max_size = 41636U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.108323369316;
    tmp_msg_0.base_lon = 0.104207358937;
    tmp_msg_0.base_time = 0.176733249121;
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
    msg.setTimeStamp(0.286660729228);
    msg.setSource(22721U);
    msg.setSourceEntity(132U);
    msg.setDestination(23115U);
    msg.setDestinationEntity(133U);
    msg.original_source = 38880U;
    msg.destination = 24966U;
    msg.timeout = 0.975561960273;
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 74U;
    tmp_msg_0.system.assign("TPMAGGIZGUXVUKMJLMQZXUVBLIWRAQFLKGOHJHRNZVXJUNZPYSDPYIDSMBDEQQRXTVNFOFIHPRIMKEZCABVHFDHQITDKFMCEXTHRVUVTYLULMDLLYCYCAJQCWQJZRHNASZOD");
    tmp_msg_0.range = 0.201680580881;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("QPDSUAERXXASZTLKPIQXASQMZXLLJJAYIPWKQKYMRNTKIVROQCYPZWRBVYQQVRAZANICIVTUNKDZRHYGADBDFFFETCEQ");
    tmp_tmp_msg_0_0.lat = 0.661416514769;
    tmp_tmp_msg_0_0.lon = 0.91823551085;
    tmp_tmp_msg_0_0.depth = 0.73188373438;
    tmp_tmp_msg_0_0.query_channel = 67U;
    tmp_tmp_msg_0_0.reply_channel = 42U;
    tmp_tmp_msg_0_0.transponder_delay = 174U;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.519002506034);
    msg.setSource(41657U);
    msg.setSourceEntity(203U);
    msg.setDestination(27280U);
    msg.setDestinationEntity(231U);
    msg.original_source = 6622U;
    msg.destination = 14348U;
    msg.timeout = 0.289786919902;
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 57039U;
    tmp_msg_0.value = 209U;
    tmp_msg_0.error.assign("CRNQBKWXAZWXHGJGMLJCWZZOVWAUHTJUDUQFNBXPOIKCOPANQNQFNKYBRPZKLCFYKXYXMZOVSBJEREMMIJHGMOIESUXARDIXSBCBTSHOLSEDDPFKULEIAVSYFFYSKWZUIVTKFCPDPOAUPGMRUNLWEILCJSDBVXQAFAAYBHZDJWV");
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
    msg.setTimeStamp(0.798115744756);
    msg.setSource(55053U);
    msg.setSourceEntity(129U);
    msg.setDestination(6399U);
    msg.setDestinationEntity(0U);
    msg.original_source = 36537U;
    msg.destination = 9361U;
    msg.timeout = 0.952105357528;
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.314654616286;
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
    msg.setTimeStamp(0.206771772012);
    msg.setSource(30932U);
    msg.setSourceEntity(155U);
    msg.setDestination(57969U);
    msg.setDestinationEntity(202U);
    msg.id = 140U;
    msg.range = 0.631230813416;

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
    msg.setTimeStamp(0.757670788596);
    msg.setSource(41034U);
    msg.setSourceEntity(221U);
    msg.setDestination(57392U);
    msg.setDestinationEntity(26U);
    msg.id = 130U;
    msg.range = 0.156843914614;

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
    msg.setTimeStamp(0.548216846933);
    msg.setSource(19555U);
    msg.setSourceEntity(143U);
    msg.setDestination(6864U);
    msg.setDestinationEntity(71U);
    msg.id = 211U;
    msg.range = 0.627246345839;

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
    msg.setTimeStamp(0.226438026069);
    msg.setSource(36123U);
    msg.setSourceEntity(28U);
    msg.setDestination(20344U);
    msg.setDestinationEntity(184U);
    msg.beacon.assign("BQUDUCMRKEOVV");
    msg.lat = 0.138048172633;
    msg.lon = 0.954440006794;
    msg.depth = 0.268735963312;
    msg.query_channel = 135U;
    msg.reply_channel = 240U;
    msg.transponder_delay = 189U;

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
    msg.setTimeStamp(0.393753344594);
    msg.setSource(11275U);
    msg.setSourceEntity(44U);
    msg.setDestination(28678U);
    msg.setDestinationEntity(4U);
    msg.beacon.assign("EHEXKUDGGRTVNSYCGAORNISTSIKNMRKOUXLSCLGLAAVZAIOJPXEYXFCEFGLDNUAQMZRQGNPMWIBSSEOALAHQZRAHWKWTBMVZTSXQLIBJLIZCUEMWXTNQVLWCEYFPLUM");
    msg.lat = 0.395264622241;
    msg.lon = 0.127388448003;
    msg.depth = 0.262321292566;
    msg.query_channel = 85U;
    msg.reply_channel = 187U;
    msg.transponder_delay = 203U;

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
    msg.setTimeStamp(0.745957419231);
    msg.setSource(7393U);
    msg.setSourceEntity(164U);
    msg.setDestination(25716U);
    msg.setDestinationEntity(22U);
    msg.beacon.assign("DZUQAWSHBKLASDYPGERGNRIXKBLVHCMUIKSMGODRUTDVRIZBFHNWQQPVKLWOXRUYBDIMSGEVBEXMLBMICMQOPKINAOYQ");
    msg.lat = 0.645435535691;
    msg.lon = 0.0611832590041;
    msg.depth = 0.396062850462;
    msg.query_channel = 1U;
    msg.reply_channel = 204U;
    msg.transponder_delay = 19U;

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
    msg.setTimeStamp(0.454970957181);
    msg.setSource(65251U);
    msg.setSourceEntity(229U);
    msg.setDestination(48931U);
    msg.setDestinationEntity(232U);
    msg.op = 10U;

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
    msg.setTimeStamp(0.33056158425);
    msg.setSource(560U);
    msg.setSourceEntity(143U);
    msg.setDestination(41558U);
    msg.setDestinationEntity(124U);
    msg.op = 49U;

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
    msg.setTimeStamp(0.730529827874);
    msg.setSource(36400U);
    msg.setSourceEntity(211U);
    msg.setDestination(54397U);
    msg.setDestinationEntity(6U);
    msg.op = 90U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WUIGEGXNZZDNJLQFSQYXCQYFYFVYHFBZNLBOHFUYMKVXONTNSHTJMIGPHWMEUHYTZJTXYAELDZPFGVCRAEAFNDSOXYTLSFHRIDCNCARCMTJJIJGSLDCPZMKIHJLRBPVADULBJVGTSXORSTMQVAAWKJKMBVKXZWHGQIHOQUZKTPPQPRLGIYNWTQHFQPILKZBUVNBODUEPEAEMFICODOEUMDBYUQCXVWKREDB");
    tmp_msg_0.lat = 0.0904245983338;
    tmp_msg_0.lon = 0.254714132594;
    tmp_msg_0.depth = 0.579716277498;
    tmp_msg_0.query_channel = 4U;
    tmp_msg_0.reply_channel = 8U;
    tmp_msg_0.transponder_delay = 196U;
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
    msg.setTimeStamp(0.863920701143);
    msg.setSource(8960U);
    msg.setSourceEntity(234U);
    msg.setDestination(38769U);
    msg.setDestinationEntity(94U);
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 148U;
    tmp_msg_0.htime = 0.738617950582;
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
    msg.setTimeStamp(0.79984891024);
    msg.setSource(34449U);
    msg.setSourceEntity(36U);
    msg.setDestination(51134U);
    msg.setDestinationEntity(237U);
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 2481625303U;
    tmp_msg_0.value = 211U;
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
    msg.setTimeStamp(0.787415429645);
    msg.setSource(22800U);
    msg.setSourceEntity(236U);
    msg.setDestination(37156U);
    msg.setDestinationEntity(185U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.948435806197;
    tmp_msg_0.z_units = 146U;
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
    msg.setTimeStamp(0.0749554729319);
    msg.setSource(51788U);
    msg.setSourceEntity(18U);
    msg.setDestination(40747U);
    msg.setDestinationEntity(109U);
    msg.op = 9U;
    msg.system.assign("OJAFHLQTMLSBDDAYBPNNSQAMDSOFINVLIKLKOXESYRUCBGVWLCJVPMEQCPOBQGTLINJIBMXIZBHGEZNWSWEJLTDEQPGKAMIISXBMVQJRAYDRMTCSJPNSRVECHGWWUBZLCDFZXROKDYZYTFGYBWXHNMFGFHOPTOVKTQFHEXDF");
    msg.range = 0.880425739132;
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.358208135752);
    msg.setSource(19688U);
    msg.setSourceEntity(187U);
    msg.setDestination(5801U);
    msg.setDestinationEntity(207U);
    msg.op = 151U;
    msg.system.assign("OXIYDAMYUIWXWPLDOGMLHGYBXUWDSHQCYJGBRTBCIBPAQSZCCXDEVFVCDFOBMTGMOTFYPEPJSWZHUSTYUXIMZNHJFRVHPKJQUKHDRUNNJZRPYTDFPJAQNTWHEMNNPRPOFLEWKUHZQBIVHOGKMRKV");
    msg.range = 0.320351246379;
    IMC::GetParametersXml tmp_msg_0;
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
    msg.setTimeStamp(0.265703334168);
    msg.setSource(49344U);
    msg.setSourceEntity(176U);
    msg.setDestination(62514U);
    msg.setDestinationEntity(220U);
    msg.op = 215U;
    msg.system.assign("WTMKDUOGSWFHQXOTVHAFPHIDUDHRKPHOJRAZXHLJ");
    msg.range = 0.475068737239;
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.879382810061;
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
    msg.setTimeStamp(0.883063823897);
    msg.setSource(15837U);
    msg.setSourceEntity(187U);
    msg.setDestination(6731U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.243594621524);
    msg.setSource(2069U);
    msg.setSourceEntity(212U);
    msg.setDestination(3516U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.00654569460359);
    msg.setSource(62278U);
    msg.setSourceEntity(109U);
    msg.setDestination(61557U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.609235951325);
    msg.setSource(36434U);
    msg.setSourceEntity(145U);
    msg.setDestination(298U);
    msg.setDestinationEntity(129U);
    msg.list.assign("PJHDFYXYXJYTQHCQSBPXLCMFUWSWGWAIQYFDCPUEQRUFMTKUCELYZLQZY");

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
    msg.setTimeStamp(0.75507705645);
    msg.setSource(45257U);
    msg.setSourceEntity(192U);
    msg.setDestination(36788U);
    msg.setDestinationEntity(122U);
    msg.list.assign("PVPPOBUGSJCIKUFHTZADMRTANWKUFYWQRIHCJEWSKVDPIGESQDLCZKBVMYPBJDVGBBGIAKYIXFHEGDRYGOCLJAATCGVTTXLYJMHDYAVMTQJXPBRBYRLXNHOSPSAVJXLKUGH");

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
    msg.setTimeStamp(0.454891179053);
    msg.setSource(44960U);
    msg.setSourceEntity(104U);
    msg.setDestination(257U);
    msg.setDestinationEntity(211U);
    msg.list.assign("CZYQIJHOSJZ");

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
    msg.setTimeStamp(0.565048164131);
    msg.setSource(57372U);
    msg.setSourceEntity(49U);
    msg.setDestination(52716U);
    msg.setDestinationEntity(33U);
    msg.peer.assign("DSWQWJCENRCEQKCZVOLMGNMTVNDWIRHHLWEGQJOQCSJUXYVSZWMBTVFIPTFZMLPPZMJKBUQGLYYATQKSEVDROPGIBKEPSLRYVZVTXENCFZZPFEXRRJFFNSCVGRNUHYNIPFYAUFWMDBMXIJHDCKCKDKBBUQKLUBAGAZAMJKPXXSOWWXQFHTSOWPGQYTFYLTSUETBAJSEJQCXMIOURJHKPWIALH");
    msg.rssi = 0.151570380748;
    msg.integrity = 16762U;

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
    msg.setTimeStamp(0.393414036725);
    msg.setSource(57209U);
    msg.setSourceEntity(245U);
    msg.setDestination(45302U);
    msg.setDestinationEntity(240U);
    msg.peer.assign("FMXIYWCZAJWYAVOLGAQTRJVGLSMXYBMSOHUXZUZIGJQUZIARKDSTCOAXBTPSXROEBOWJKHDKEYQZEJUBARGQCNOMHUMOCXQAKUHQWNIDBLGIEEMZYGCACISEBJEDCYVPVIBLVMPHMIDUTESYQFPRGRSXNPNTVNIRHNJQKQXALOHPSKHHDTAGTKFNEFWKOZFJIVMZLSWDNUZXLFUFWBWURMFCEPVVGLDNTFJBDTLZLQPSXCPRDJYFKVW");
    msg.rssi = 0.128850493958;
    msg.integrity = 41754U;

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
    msg.setTimeStamp(0.324734683103);
    msg.setSource(4854U);
    msg.setSourceEntity(147U);
    msg.setDestination(16497U);
    msg.setDestinationEntity(47U);
    msg.peer.assign("KFRYHNXDGNOEWXAWBGSOSGLCAHRMKJDJASLIIVSWUQOVQBBXLOZHTAWWDGMMLZUOXICNDBTCBCNRTNGAJMFIGVXOMKLRRDQYIQUTDCUUEZJUOHDIPPOHQTKMSDMPOYPTZLLVJVUKYXPWTZZLEYZPMJSJQWWNGXUECVPQAUBTSHFVXISSAMZENXFHOPKMFJKAZBJBTHRSFCYVNZHRUYIFEWFJTRBKFQLFNGPAXDEKDAQVRGLIQHYREEBVCY");
    msg.rssi = 0.893443235948;
    msg.integrity = 8040U;

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
    msg.setTimeStamp(0.797459359848);
    msg.setSource(18597U);
    msg.setSourceEntity(97U);
    msg.setDestination(24748U);
    msg.setDestinationEntity(154U);
    msg.value = 2522;

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
    msg.setTimeStamp(0.00264231786525);
    msg.setSource(17316U);
    msg.setSourceEntity(17U);
    msg.setDestination(42918U);
    msg.setDestinationEntity(190U);
    msg.value = 20455;

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
    msg.setTimeStamp(0.0139769123088);
    msg.setSource(36358U);
    msg.setSourceEntity(207U);
    msg.setDestination(6392U);
    msg.setDestinationEntity(2U);
    msg.value = 28650;

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
    msg.setTimeStamp(0.91130507961);
    msg.setSource(12780U);
    msg.setSourceEntity(169U);
    msg.setDestination(10873U);
    msg.setDestinationEntity(49U);
    msg.value = 0.0419442216842;

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
    msg.setTimeStamp(0.829607854443);
    msg.setSource(9054U);
    msg.setSourceEntity(218U);
    msg.setDestination(12701U);
    msg.setDestinationEntity(136U);
    msg.value = 0.597300034689;

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
    msg.setTimeStamp(0.209316847086);
    msg.setSource(55372U);
    msg.setSourceEntity(123U);
    msg.setDestination(28682U);
    msg.setDestinationEntity(242U);
    msg.value = 0.297710720573;

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
    msg.setTimeStamp(0.482631331523);
    msg.setSource(39667U);
    msg.setSourceEntity(1U);
    msg.setDestination(52538U);
    msg.setDestinationEntity(37U);
    msg.value = 0.816536741606;

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
    msg.setTimeStamp(0.576565230262);
    msg.setSource(24060U);
    msg.setSourceEntity(32U);
    msg.setDestination(29612U);
    msg.setDestinationEntity(2U);
    msg.value = 0.521982931557;

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
    msg.setTimeStamp(0.65756816044);
    msg.setSource(37438U);
    msg.setSourceEntity(83U);
    msg.setDestination(28329U);
    msg.setDestinationEntity(187U);
    msg.value = 0.417454886291;

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
    msg.setTimeStamp(0.339672843735);
    msg.setSource(23756U);
    msg.setSourceEntity(174U);
    msg.setDestination(53823U);
    msg.setDestinationEntity(87U);
    msg.validity = 10176U;
    msg.type = 92U;
    msg.utc_year = 56337U;
    msg.utc_month = 215U;
    msg.utc_day = 137U;
    msg.utc_time = 0.265024468169;
    msg.lat = 0.581963658865;
    msg.lon = 0.0773001756513;
    msg.height = 0.156676593399;
    msg.satellites = 222U;
    msg.cog = 0.506938031377;
    msg.sog = 0.553165321351;
    msg.hdop = 0.929191035849;
    msg.vdop = 0.0777478001344;
    msg.hacc = 0.929127040877;
    msg.vacc = 0.867076570087;

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
    msg.setTimeStamp(0.911384869684);
    msg.setSource(37562U);
    msg.setSourceEntity(85U);
    msg.setDestination(59829U);
    msg.setDestinationEntity(225U);
    msg.validity = 20013U;
    msg.type = 45U;
    msg.utc_year = 12388U;
    msg.utc_month = 150U;
    msg.utc_day = 131U;
    msg.utc_time = 0.871748052755;
    msg.lat = 0.292832342298;
    msg.lon = 0.653692909711;
    msg.height = 0.182358162173;
    msg.satellites = 229U;
    msg.cog = 0.881531261428;
    msg.sog = 0.346350308399;
    msg.hdop = 0.189338244896;
    msg.vdop = 0.563489413714;
    msg.hacc = 0.205016030639;
    msg.vacc = 0.895881371368;

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
    msg.setTimeStamp(0.956882243037);
    msg.setSource(7785U);
    msg.setSourceEntity(122U);
    msg.setDestination(4147U);
    msg.setDestinationEntity(50U);
    msg.validity = 18729U;
    msg.type = 199U;
    msg.utc_year = 31246U;
    msg.utc_month = 3U;
    msg.utc_day = 49U;
    msg.utc_time = 0.947487655437;
    msg.lat = 0.319930624162;
    msg.lon = 0.612748684518;
    msg.height = 0.769944027625;
    msg.satellites = 50U;
    msg.cog = 0.156412391381;
    msg.sog = 0.285063262436;
    msg.hdop = 0.331103190453;
    msg.vdop = 0.323314204786;
    msg.hacc = 0.652965827785;
    msg.vacc = 0.689877970735;

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
    msg.setTimeStamp(0.722245038954);
    msg.setSource(53467U);
    msg.setSourceEntity(70U);
    msg.setDestination(37140U);
    msg.setDestinationEntity(161U);
    msg.time = 0.265381121546;
    msg.phi = 0.00790578775539;
    msg.theta = 0.0534773251089;
    msg.psi = 0.531697464133;
    msg.psi_magnetic = 0.985988864939;

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
    msg.setTimeStamp(0.526591957515);
    msg.setSource(60267U);
    msg.setSourceEntity(55U);
    msg.setDestination(41222U);
    msg.setDestinationEntity(57U);
    msg.time = 0.262132820627;
    msg.phi = 0.637645294647;
    msg.theta = 0.629149864428;
    msg.psi = 0.0894808700544;
    msg.psi_magnetic = 0.29913475727;

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
    msg.setTimeStamp(0.965148914322);
    msg.setSource(17250U);
    msg.setSourceEntity(202U);
    msg.setDestination(26233U);
    msg.setDestinationEntity(116U);
    msg.time = 0.473787212803;
    msg.phi = 0.881564508827;
    msg.theta = 0.639885291465;
    msg.psi = 0.557603558538;
    msg.psi_magnetic = 0.300694752854;

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
    msg.setTimeStamp(0.88406159672);
    msg.setSource(5569U);
    msg.setSourceEntity(171U);
    msg.setDestination(35543U);
    msg.setDestinationEntity(206U);
    msg.time = 0.580922794695;
    msg.x = 0.787926376716;
    msg.y = 0.0605705895487;
    msg.z = 0.0110689097663;
    msg.timestep = 0.195972004811;

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
    msg.setTimeStamp(0.611122797781);
    msg.setSource(4240U);
    msg.setSourceEntity(65U);
    msg.setDestination(13040U);
    msg.setDestinationEntity(57U);
    msg.time = 0.555485652109;
    msg.x = 0.544731007517;
    msg.y = 0.800632501262;
    msg.z = 0.13594975169;
    msg.timestep = 0.814304197626;

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
    msg.setTimeStamp(0.580666333885);
    msg.setSource(51517U);
    msg.setSourceEntity(45U);
    msg.setDestination(59368U);
    msg.setDestinationEntity(213U);
    msg.time = 0.0564430597173;
    msg.x = 0.555358489867;
    msg.y = 0.760534842764;
    msg.z = 0.477480476541;
    msg.timestep = 0.930240080665;

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
    msg.setTimeStamp(0.380635868039);
    msg.setSource(20435U);
    msg.setSourceEntity(59U);
    msg.setDestination(45944U);
    msg.setDestinationEntity(37U);
    msg.time = 0.234243756051;
    msg.x = 0.32352203243;
    msg.y = 0.53591791664;
    msg.z = 0.221358009593;

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
    msg.setTimeStamp(0.103153733251);
    msg.setSource(13544U);
    msg.setSourceEntity(111U);
    msg.setDestination(10541U);
    msg.setDestinationEntity(116U);
    msg.time = 0.608437260441;
    msg.x = 0.0415557064354;
    msg.y = 0.444372063538;
    msg.z = 0.577512868701;

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
    msg.setTimeStamp(0.241405346461);
    msg.setSource(4756U);
    msg.setSourceEntity(157U);
    msg.setDestination(32944U);
    msg.setDestinationEntity(109U);
    msg.time = 0.317652508889;
    msg.x = 0.228156302238;
    msg.y = 0.668920580054;
    msg.z = 0.594935137396;

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
    msg.setTimeStamp(0.521776468839);
    msg.setSource(43618U);
    msg.setSourceEntity(209U);
    msg.setDestination(39990U);
    msg.setDestinationEntity(196U);
    msg.time = 0.212479754599;
    msg.x = 0.710660594904;
    msg.y = 0.66187299877;
    msg.z = 0.046510832974;

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
    msg.setTimeStamp(0.383262888621);
    msg.setSource(54274U);
    msg.setSourceEntity(74U);
    msg.setDestination(7247U);
    msg.setDestinationEntity(6U);
    msg.time = 0.392294446471;
    msg.x = 0.0275189741355;
    msg.y = 0.660497060625;
    msg.z = 0.506128078774;

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
    msg.setTimeStamp(0.797597239534);
    msg.setSource(26390U);
    msg.setSourceEntity(178U);
    msg.setDestination(5234U);
    msg.setDestinationEntity(76U);
    msg.time = 0.459154101009;
    msg.x = 0.305266779344;
    msg.y = 0.676552613353;
    msg.z = 0.254198961896;

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
    msg.setTimeStamp(0.360724462725);
    msg.setSource(24406U);
    msg.setSourceEntity(221U);
    msg.setDestination(38887U);
    msg.setDestinationEntity(229U);
    msg.time = 0.528687481791;
    msg.x = 0.972764905244;
    msg.y = 0.378365377796;
    msg.z = 0.270453032911;

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
    msg.setTimeStamp(0.207250742732);
    msg.setSource(17309U);
    msg.setSourceEntity(22U);
    msg.setDestination(6561U);
    msg.setDestinationEntity(23U);
    msg.time = 0.703008090244;
    msg.x = 0.803182868282;
    msg.y = 0.262867361354;
    msg.z = 0.0937768770968;

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
    msg.setTimeStamp(0.177193616133);
    msg.setSource(42460U);
    msg.setSourceEntity(23U);
    msg.setDestination(51926U);
    msg.setDestinationEntity(134U);
    msg.time = 0.014492202512;
    msg.x = 0.418505110872;
    msg.y = 0.831518338169;
    msg.z = 0.732843690243;

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
    msg.setTimeStamp(0.412043508839);
    msg.setSource(2454U);
    msg.setSourceEntity(33U);
    msg.setDestination(31509U);
    msg.setDestinationEntity(185U);
    msg.validity = 34U;
    msg.x = 0.921640481722;
    msg.y = 0.156180025912;
    msg.z = 0.480018497755;

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
    msg.setTimeStamp(0.906226128416);
    msg.setSource(12209U);
    msg.setSourceEntity(222U);
    msg.setDestination(5424U);
    msg.setDestinationEntity(60U);
    msg.validity = 250U;
    msg.x = 0.72862807785;
    msg.y = 0.836067684621;
    msg.z = 0.279457648214;

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
    msg.setTimeStamp(0.0340498580906);
    msg.setSource(30721U);
    msg.setSourceEntity(129U);
    msg.setDestination(7118U);
    msg.setDestinationEntity(52U);
    msg.validity = 56U;
    msg.x = 0.183655299537;
    msg.y = 0.754235439602;
    msg.z = 0.0984055889398;

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
    msg.setTimeStamp(0.467547594794);
    msg.setSource(44248U);
    msg.setSourceEntity(49U);
    msg.setDestination(9733U);
    msg.setDestinationEntity(205U);
    msg.validity = 159U;
    msg.x = 0.585825505275;
    msg.y = 0.501509249816;
    msg.z = 0.05195662845;

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
    msg.setTimeStamp(0.294734178637);
    msg.setSource(28044U);
    msg.setSourceEntity(178U);
    msg.setDestination(44489U);
    msg.setDestinationEntity(92U);
    msg.validity = 116U;
    msg.x = 0.269244265918;
    msg.y = 0.341337239233;
    msg.z = 0.624750871089;

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
    msg.setTimeStamp(0.752855407956);
    msg.setSource(16716U);
    msg.setSourceEntity(240U);
    msg.setDestination(52477U);
    msg.setDestinationEntity(78U);
    msg.validity = 207U;
    msg.x = 0.227113086925;
    msg.y = 0.695236350508;
    msg.z = 0.453096131584;

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
    msg.setTimeStamp(0.0428174825521);
    msg.setSource(29580U);
    msg.setSourceEntity(205U);
    msg.setDestination(9202U);
    msg.setDestinationEntity(113U);
    msg.time = 0.33678282894;
    msg.x = 0.286992491569;
    msg.y = 0.951348838399;
    msg.z = 0.804227175028;

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
    msg.setTimeStamp(0.0233551309865);
    msg.setSource(58053U);
    msg.setSourceEntity(224U);
    msg.setDestination(57272U);
    msg.setDestinationEntity(73U);
    msg.time = 0.135646567731;
    msg.x = 0.70148776411;
    msg.y = 0.974981843913;
    msg.z = 0.445792834571;

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
    msg.setTimeStamp(0.720426877165);
    msg.setSource(17433U);
    msg.setSourceEntity(92U);
    msg.setDestination(43078U);
    msg.setDestinationEntity(250U);
    msg.time = 0.869164682419;
    msg.x = 0.559995869721;
    msg.y = 0.258128956569;
    msg.z = 0.873177019643;

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
    msg.setTimeStamp(0.301877684392);
    msg.setSource(40240U);
    msg.setSourceEntity(48U);
    msg.setDestination(22910U);
    msg.setDestinationEntity(23U);
    msg.validity = 48U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.527061525868;
    tmp_msg_0.y = 0.108459441444;
    tmp_msg_0.z = 0.173057215347;
    tmp_msg_0.phi = 0.858730644992;
    tmp_msg_0.theta = 0.396626326887;
    tmp_msg_0.psi = 0.13364963986;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.137936126542;
    tmp_msg_1.beam_height = 0.290217277165;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.0339529449625;

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
    msg.setTimeStamp(0.47683466841);
    msg.setSource(15157U);
    msg.setSourceEntity(174U);
    msg.setDestination(25447U);
    msg.setDestinationEntity(225U);
    msg.validity = 135U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.784724012116;
    tmp_msg_0.y = 0.436701823096;
    tmp_msg_0.z = 0.580688140766;
    tmp_msg_0.phi = 0.68152013545;
    tmp_msg_0.theta = 0.88561777099;
    tmp_msg_0.psi = 0.90843782182;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.0514418659401;

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
    msg.setTimeStamp(0.0555448464415);
    msg.setSource(48148U);
    msg.setSourceEntity(148U);
    msg.setDestination(2618U);
    msg.setDestinationEntity(182U);
    msg.validity = 154U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.379636852443;
    tmp_msg_0.beam_height = 0.0414166539827;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.906495634128;

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
    msg.setTimeStamp(0.592308357356);
    msg.setSource(1633U);
    msg.setSourceEntity(10U);
    msg.setDestination(48428U);
    msg.setDestinationEntity(50U);
    msg.value = 0.592440279868;

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
    msg.setTimeStamp(0.957601616098);
    msg.setSource(27862U);
    msg.setSourceEntity(114U);
    msg.setDestination(8123U);
    msg.setDestinationEntity(183U);
    msg.value = 0.868869172923;

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
    msg.setTimeStamp(0.858216494429);
    msg.setSource(1608U);
    msg.setSourceEntity(114U);
    msg.setDestination(65201U);
    msg.setDestinationEntity(243U);
    msg.value = 0.00422722773686;

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
    msg.setTimeStamp(0.804703761658);
    msg.setSource(63152U);
    msg.setSourceEntity(6U);
    msg.setDestination(24318U);
    msg.setDestinationEntity(236U);
    msg.value = 0.810759198344;

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
    msg.setTimeStamp(0.227638912787);
    msg.setSource(14682U);
    msg.setSourceEntity(7U);
    msg.setDestination(23843U);
    msg.setDestinationEntity(243U);
    msg.value = 0.93611776436;

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
    msg.setTimeStamp(0.425864266822);
    msg.setSource(13896U);
    msg.setSourceEntity(219U);
    msg.setDestination(39309U);
    msg.setDestinationEntity(245U);
    msg.value = 0.90261816538;

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
    msg.setTimeStamp(0.867303988587);
    msg.setSource(31746U);
    msg.setSourceEntity(136U);
    msg.setDestination(28346U);
    msg.setDestinationEntity(105U);
    msg.value = 0.370584564176;

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
    msg.setTimeStamp(0.291816383582);
    msg.setSource(32285U);
    msg.setSourceEntity(173U);
    msg.setDestination(28834U);
    msg.setDestinationEntity(10U);
    msg.value = 0.197925896657;

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
    msg.setTimeStamp(0.594643968718);
    msg.setSource(42696U);
    msg.setSourceEntity(76U);
    msg.setDestination(63380U);
    msg.setDestinationEntity(23U);
    msg.value = 0.2257391002;

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
    msg.setTimeStamp(0.677276887786);
    msg.setSource(38484U);
    msg.setSourceEntity(155U);
    msg.setDestination(53684U);
    msg.setDestinationEntity(245U);
    msg.value = 0.276876156726;

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
    msg.setTimeStamp(0.557522304608);
    msg.setSource(28314U);
    msg.setSourceEntity(88U);
    msg.setDestination(47349U);
    msg.setDestinationEntity(137U);
    msg.value = 0.877585659252;

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
    msg.setTimeStamp(0.306614182473);
    msg.setSource(3646U);
    msg.setSourceEntity(118U);
    msg.setDestination(20358U);
    msg.setDestinationEntity(196U);
    msg.value = 0.787588459016;

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
    msg.setTimeStamp(0.671041100905);
    msg.setSource(59483U);
    msg.setSourceEntity(140U);
    msg.setDestination(53685U);
    msg.setDestinationEntity(149U);
    msg.value = 0.218694672427;

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
    msg.setTimeStamp(0.211615572536);
    msg.setSource(29765U);
    msg.setSourceEntity(43U);
    msg.setDestination(9005U);
    msg.setDestinationEntity(195U);
    msg.value = 0.436177015983;

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
    msg.setTimeStamp(0.306789898514);
    msg.setSource(13617U);
    msg.setSourceEntity(27U);
    msg.setDestination(44920U);
    msg.setDestinationEntity(232U);
    msg.value = 0.147696786365;

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
    msg.setTimeStamp(0.318540856775);
    msg.setSource(3107U);
    msg.setSourceEntity(197U);
    msg.setDestination(5248U);
    msg.setDestinationEntity(181U);
    msg.value = 0.892280785895;

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
    msg.setTimeStamp(0.982241532163);
    msg.setSource(33175U);
    msg.setSourceEntity(58U);
    msg.setDestination(20599U);
    msg.setDestinationEntity(4U);
    msg.value = 0.977496868653;

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
    msg.setTimeStamp(0.936625139566);
    msg.setSource(42575U);
    msg.setSourceEntity(49U);
    msg.setDestination(32304U);
    msg.setDestinationEntity(198U);
    msg.value = 0.463087469099;

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
    msg.setTimeStamp(0.997539614068);
    msg.setSource(57796U);
    msg.setSourceEntity(129U);
    msg.setDestination(23102U);
    msg.setDestinationEntity(77U);
    msg.value = 0.164296539364;

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
    msg.setTimeStamp(0.15154562911);
    msg.setSource(3813U);
    msg.setSourceEntity(152U);
    msg.setDestination(16097U);
    msg.setDestinationEntity(143U);
    msg.value = 0.850058256707;

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
    msg.setTimeStamp(0.890967685334);
    msg.setSource(17995U);
    msg.setSourceEntity(197U);
    msg.setDestination(35424U);
    msg.setDestinationEntity(37U);
    msg.value = 0.987011534863;

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
    msg.setTimeStamp(0.54941859884);
    msg.setSource(45542U);
    msg.setSourceEntity(238U);
    msg.setDestination(10537U);
    msg.setDestinationEntity(203U);
    msg.value = 0.87425993939;

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
    msg.setTimeStamp(0.259015027499);
    msg.setSource(3299U);
    msg.setSourceEntity(15U);
    msg.setDestination(31726U);
    msg.setDestinationEntity(240U);
    msg.value = 0.79741457708;

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
    msg.setTimeStamp(0.0113379727047);
    msg.setSource(13468U);
    msg.setSourceEntity(77U);
    msg.setDestination(3189U);
    msg.setDestinationEntity(179U);
    msg.value = 0.595640813091;

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
    msg.setTimeStamp(0.980573875342);
    msg.setSource(51759U);
    msg.setSourceEntity(8U);
    msg.setDestination(34171U);
    msg.setDestinationEntity(194U);
    msg.direction = 0.54092195639;
    msg.speed = 0.563571800093;
    msg.turbulence = 0.732761973952;

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
    msg.setTimeStamp(0.537568863143);
    msg.setSource(57509U);
    msg.setSourceEntity(17U);
    msg.setDestination(45460U);
    msg.setDestinationEntity(68U);
    msg.direction = 0.460012009256;
    msg.speed = 0.914119278464;
    msg.turbulence = 0.457903797466;

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
    msg.setTimeStamp(0.0810348794999);
    msg.setSource(26266U);
    msg.setSourceEntity(87U);
    msg.setDestination(35221U);
    msg.setDestinationEntity(163U);
    msg.direction = 0.470757568016;
    msg.speed = 0.53555704957;
    msg.turbulence = 0.0574095575519;

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
    msg.setTimeStamp(0.12809847625);
    msg.setSource(21191U);
    msg.setSourceEntity(147U);
    msg.setDestination(41738U);
    msg.setDestinationEntity(111U);
    msg.value = 0.0881179760218;

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
    msg.setTimeStamp(0.503718594486);
    msg.setSource(30117U);
    msg.setSourceEntity(207U);
    msg.setDestination(46106U);
    msg.setDestinationEntity(67U);
    msg.value = 0.827796758031;

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
    msg.setTimeStamp(0.771608829308);
    msg.setSource(52587U);
    msg.setSourceEntity(78U);
    msg.setDestination(33503U);
    msg.setDestinationEntity(77U);
    msg.value = 0.329622648482;

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
    msg.setTimeStamp(0.853090934054);
    msg.setSource(26759U);
    msg.setSourceEntity(109U);
    msg.setDestination(22398U);
    msg.setDestinationEntity(249U);
    msg.value.assign("MKJPTRLDVKGWEBXHND");

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
    msg.setTimeStamp(0.566585547841);
    msg.setSource(52572U);
    msg.setSourceEntity(89U);
    msg.setDestination(14220U);
    msg.setDestinationEntity(141U);
    msg.value.assign("SSSVNKGVXQGHQCEEMAQYCHDOLXOKCEDUHURBSAGVSURAATHJOERACLYFBSITQYBZFNSZKIUXJPHDJBNZROWGYMMNRFUWIMWPBYXPTYIXMLLMKEPTRJULRBJJGAKSPDARZBTDQDNNVVKVGIVRJDZFTTWLYIBNOFTHPWOKIEGTEOXHAFMFLCMTFQEXZE");

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
    msg.setTimeStamp(0.396786969517);
    msg.setSource(30297U);
    msg.setSourceEntity(121U);
    msg.setDestination(23271U);
    msg.setDestinationEntity(88U);
    msg.value.assign("JGYWQOIUNTFOTTDKMDRRNDBVIRIWIMAAJIFETXGLQVPENFGWTBXPSDAWDTZSXSJBFBNMBAHLZKZLYKKAMMAC");

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
    msg.setTimeStamp(0.704337160958);
    msg.setSource(50960U);
    msg.setSourceEntity(115U);
    msg.setDestination(9369U);
    msg.setDestinationEntity(154U);
    const char tmp_msg_0[] = {-18, -100, -112, 57, 32, 26, -12, 2, -34, -65, -53, 69, -37, -66, -113, -74, -118, -122, -18, -77, -14, -78, 2, -127, 33, 80, -96, 30, -95, -25, -62, 18, 44, -119, 122, 63, -128, -12, 88, 22, -44, 76, 11, -23, -72, -95, -125, -96, 106, 91, -98, -118, -35, -27, -120, 102, 72, 37, -125, 51, 39, 119, -96, 89, -119, 26, -102, -99, -4, -41, -25, 100, 60, 121, 12, 124, -57, 104, 89, 60, 7, 15, 114, -21, 118, -31, 66, -110, 3, -74, -16, -108, -18, 60, -14, -24, 7, -27, -97, -28, 103, -82, -120, -35, -72, 52, 80, 105, 114, -23, 116, -24, -123, -110, 42, -86, 103, 45, -64, 19, 12, -8, 16, 59, -51, -45, -106, -77, 103, -4, -65, -21, -122, -107, 57, -93, 89, -21, 90, 90, 54, -103, -91, -88, 2, 40, 47, 111, -124, 40, 107, 20, 63, -62, 2, -19, 74, 118, 119, 64, -28, -61, -17, -16, -112, -17, 15, -68, -14, -38, -26, -75, -43, 27, -82, 103, 27, 37, -105, -106, -45, 106, 27, -2, 64, -48, 123, -123};
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
    msg.setTimeStamp(0.184882035111);
    msg.setSource(58490U);
    msg.setSourceEntity(141U);
    msg.setDestination(4417U);
    msg.setDestinationEntity(217U);
    const char tmp_msg_0[] = {-90, -72, -55, -110, 126, 60, 24, 94, 46, -70, -103, 40, 62, 110, -14, -34, -20, 79, 93, -101, 17, 117, 118, -62, -95, -115, 53, -41, -45, 58, -28, -81, -47, 14, -88, 44, -105, 57, -128, 73, 73, 64, -42, -64, 98, 99, -74, 22, 61, 37, 2, -97, 1, 29, 24, -108, -1, -83, 120, 33, 80, -45, -51, 95, 119, -45, -86, -22, -106, -9, 74, 110, 3, -123, -42, -48, -41, -70, 91, 65, -11, 70, -33, -93, -50, -72, 47, 105, -51, 83, 49, 22};
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
    msg.setTimeStamp(0.98204460106);
    msg.setSource(37740U);
    msg.setSourceEntity(38U);
    msg.setDestination(38135U);
    msg.setDestinationEntity(218U);
    const char tmp_msg_0[] = {-46, -127, 88, 15, -98, 1, 40, -64, 38, 101, -71, -42, 67, 109, -33, -31, 84, -1, 49, 106, -59, -45, -48, 126, 12, 75, 59, 83, -115, -61, 4, -93, -16, 84, 46, 97, 60, 12, 120, -87, 23, -111, -2, 66, -49, -88, -53, -97, -106, 88, 25, 74, -95, 117, 119, -93, 7, 29, -56, 42, 91, -67, -13, -45, 22, -90, 53, 34, 51, 103, -63, -65, 95, 34, -42, -1, 17, -9, -66, 6, -83, -119, -43, -114, -89, -116, -62, -95, -109, 8, 25, -76, -101, 76, -5, 84, 23, 68, 75, -11, -89, -47, 92, -24, -125, 44, -14, -96, 110, -91, 108, 46, 79, -105, 82, 58, -8, -32, -11, 35, -73, -57, 114};
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
    msg.setTimeStamp(0.950540499058);
    msg.setSource(11737U);
    msg.setSourceEntity(204U);
    msg.setDestination(41986U);
    msg.setDestinationEntity(101U);
    msg.type = 201U;
    msg.frequency = 3173925467U;
    msg.min_range = 26967U;
    msg.max_range = 60188U;
    msg.bits_per_point = 120U;
    msg.scale_factor = 0.753865354629;
    const char tmp_msg_0[] = {-52, 51, 36, 7, -21, 16, 71, 58, -45, -21, 113, -73, 42, 103, -106, 11, -26, -34, 39, -82, -80, 59, -112, 61, 93, -33, -35, 111, 61, 108, 115, 47, -38, -111, -10, -50, -103, 52, 80, 80, 118, -13, -113, -74, 11, 68, -87, -50, 123, -41, -121, -83, 3, -83, 108, 20, -87, 110, 108, -43, 78, -57, -57, 83, 106, 53, -97, 27, -53, -112, -96, -4, -62, 19, 100, 83, 40, 39, -9, 47, 124, 56, -107, -48, 103, -95, -128, 47, -46, 96, 29, -34, -15, 39, 75, 29, -104, -52, -84, 97, -49, 5, 63, -55, -27, 36, -8, 94, -93, 35, -41, -4, 77, 53, -96, 113, 37, -32, 23, -114, 96, -31, 104, -85, 102, -78, -88, -66, 64, 51, -93, -113, -85, -41, -94, -34, 15, 49, 20, -94, 32, 19, 41, -89, -8, -27, -76, -33, 84, -52, 58, 7, 26, -103, 97, -107, -3, -73, -113, -38, -99, 81, 32, -29, -39, -52, 0, -81, -3, -74, 33, -127, 93, -36, -49, 94, 76, -103, 11, 107, 31, 57, 80, -114, -123, 61, -122, 1, -47, -107, -104, -41, 122, 114, -54, 17, 28, 66, 38, 72, -40, -104, -114, 98, -126, 26, 79, 55, 85, -40, -44, -84, 31, 99, -82, -101, -126, -60, -85, 105, 10, 61, -83, -68, 65, 56, -88, -47, 0, -76, 116, 3, 31, -21, -23, -28};
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
    msg.setTimeStamp(0.29428867518);
    msg.setSource(32246U);
    msg.setSourceEntity(129U);
    msg.setDestination(62307U);
    msg.setDestinationEntity(59U);
    msg.type = 218U;
    msg.frequency = 211606825U;
    msg.min_range = 11607U;
    msg.max_range = 50757U;
    msg.bits_per_point = 199U;
    msg.scale_factor = 0.715686091849;
    const char tmp_msg_0[] = {106, 116, -68, -84, 99, -96, 125, 6, -61, 0, 36, 34, 31, 117, 6, 45, -67, 11, 102, -115, -31, -128, -8, -6, -95, -106, -21, 61, 103, 6, -104, 83, -60, 23, -76, 69, -110, 61, 17, -94, 36, 94, -101, -6, 83, 16, -58, 67, 91, 62, 72, 122, 48, 111, -51, 39, 18, -78, 53, 92, 126, -121, 82, -119, -3, 31, -109, -18, 70, -99, 126, -117, -97, 31, -54, 48, -108, 18, 106, 27, -126, -33, 100, -9, -33, -39, 62, 116, -108, 1, 88, -6, 97, 82, 55, -75, -19, 50, -89, -128, -123, 108, -108, 108, -55, 102, -112, 22, 23, -124, 41, 104, -6, -110, -61, 5, 63, 103, 109, -85, 71, -121, 4, 124, 48, 0, -90, -91, -105, -82, 66, -29, 105, 84, 68, 39, -45, -85, -73, 22, 85, 59, 2, 109, -17, -113, -122, -105, -88, 99, -5, 109, 84, 102, -1, 119, 57, -37};
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
    msg.setTimeStamp(0.548242083203);
    msg.setSource(38443U);
    msg.setSourceEntity(152U);
    msg.setDestination(30981U);
    msg.setDestinationEntity(115U);
    msg.type = 232U;
    msg.frequency = 2904108171U;
    msg.min_range = 59285U;
    msg.max_range = 39902U;
    msg.bits_per_point = 69U;
    msg.scale_factor = 0.966454223534;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.424203528095;
    tmp_msg_0.beam_height = 0.158611354501;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-6, -74, -59, -59, 19, 38, 19, -54, -5, 15, -91, -80, -71, 20, 51, -38, -7, -73, 65, 90, 23, -96, -103, 104, -109, 22, -117, 42, 11, 33, -64, -23, -55, -82, -123, 44, -92, 124, -5, 11, -59, 14, -28, 48, -25, 68, -33, 12, -124, 47, 85, 28, 46, -1, -47, -107, -51, -79, 89, -65, 29, 51, 6, 3, 55, -60, -40, -83, 107, 90, 57, -107, 71, 16, -57, 19, -67, -60, -97, 16, 2, -116, -122, 57, 65, 89, 92, 83, -26, -88, -90, 88, -26, -38, 49, 22, -49, 35, 116, 115, 109, -113, -93, 59, 75, -110, 33, -36, 80, 90, 35, 76, 20, -27, 12, -2, 42, -124, 3, -7, -101, 108, 84, 92, -46, -15, 97, 28, 69, -95, -106, 20, 46, 110, -107, 120, 108, -60, 123, -34, -107, -48, -67, -47, 15, 18, 108, 124, 64};
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
    msg.setTimeStamp(0.00100989852164);
    msg.setSource(42729U);
    msg.setSourceEntity(176U);
    msg.setDestination(60969U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.0116129212543);
    msg.setSource(43086U);
    msg.setSourceEntity(171U);
    msg.setDestination(11163U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.340023337452);
    msg.setSource(45756U);
    msg.setSourceEntity(91U);
    msg.setDestination(49090U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.488591691305);
    msg.setSource(52543U);
    msg.setSourceEntity(57U);
    msg.setDestination(30041U);
    msg.setDestinationEntity(133U);
    msg.op = 238U;

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
    msg.setTimeStamp(0.832709771573);
    msg.setSource(32U);
    msg.setSourceEntity(124U);
    msg.setDestination(33222U);
    msg.setDestinationEntity(202U);
    msg.op = 163U;

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
    msg.setTimeStamp(0.934248688808);
    msg.setSource(59636U);
    msg.setSourceEntity(196U);
    msg.setDestination(54673U);
    msg.setDestinationEntity(232U);
    msg.op = 205U;

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
    msg.setTimeStamp(0.912678854808);
    msg.setSource(63126U);
    msg.setSourceEntity(49U);
    msg.setDestination(28070U);
    msg.setDestinationEntity(190U);
    msg.value = 0.374610348991;
    msg.confidence = 0.29267030124;
    msg.opmodes.assign("RQNTBNPYVADHCNLUSPNHLZMEPTTCLFBKYPISHBOTEKACETDJDXIIEUUSJVZ");

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
    msg.setTimeStamp(0.391090165462);
    msg.setSource(50420U);
    msg.setSourceEntity(161U);
    msg.setDestination(15667U);
    msg.setDestinationEntity(76U);
    msg.value = 0.553832688425;
    msg.confidence = 0.884808193413;
    msg.opmodes.assign("IDLLJYFATTYWMKCCAYQUUVAHQBTTEPSXWVYWEVUORBDIBVMJCZMRGJQPTBXTXXRIBXQLSECSAPCVBGOVSPNNGZAGCXISPVHOBI");

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
    msg.setTimeStamp(0.268779983692);
    msg.setSource(37596U);
    msg.setSourceEntity(61U);
    msg.setDestination(17748U);
    msg.setDestinationEntity(41U);
    msg.value = 0.92298347178;
    msg.confidence = 0.109471908251;
    msg.opmodes.assign("XEYWJDEMHELWXBTCRHFIGEDBBRKWOHHVLNEUVJSCXCHTREQQHZKZTPHGSOWSYCENAWHBXRUBZVGECTWSDDUUKSTLYFJWUOOZAIWNJIULOXJWLAVUPSQLJVMVXFITMPALNQJDVPGICNXLGQGGLUJDRHYNCKCKMYAYPDZPZOIWUYNDZIMPKCPORDJVXZQSMDGNQRYNBOJBPUTPAAFFACMZFBAVEEKIXQSQFRYGTFQVFRMBNMSA");

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
    msg.setTimeStamp(0.877802714866);
    msg.setSource(14100U);
    msg.setSourceEntity(20U);
    msg.setDestination(28933U);
    msg.setDestinationEntity(183U);
    msg.itow = 4005218136U;
    msg.lat = 0.708313187518;
    msg.lon = 0.812647780119;
    msg.height_ell = 0.101266549236;
    msg.height_sea = 0.615667271929;
    msg.hacc = 0.9331094327;
    msg.vacc = 0.0782334581337;
    msg.vel_n = 0.556048457171;
    msg.vel_e = 0.229162945834;
    msg.vel_d = 0.339603687749;
    msg.speed = 0.96228714699;
    msg.gspeed = 0.728260323587;
    msg.heading = 0.0274282318246;
    msg.sacc = 0.823436883531;
    msg.cacc = 0.112206990085;

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
    msg.setTimeStamp(0.580354151473);
    msg.setSource(52749U);
    msg.setSourceEntity(136U);
    msg.setDestination(58196U);
    msg.setDestinationEntity(46U);
    msg.itow = 2811844148U;
    msg.lat = 0.327202051422;
    msg.lon = 0.353953669005;
    msg.height_ell = 0.745770346838;
    msg.height_sea = 0.612692746992;
    msg.hacc = 0.764879210406;
    msg.vacc = 0.599112233191;
    msg.vel_n = 0.791746531889;
    msg.vel_e = 0.728088709162;
    msg.vel_d = 0.682015659394;
    msg.speed = 0.823110876517;
    msg.gspeed = 0.475909258525;
    msg.heading = 0.921108335575;
    msg.sacc = 0.68015524132;
    msg.cacc = 0.976235516855;

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
    msg.setTimeStamp(0.246887539186);
    msg.setSource(13225U);
    msg.setSourceEntity(31U);
    msg.setDestination(30064U);
    msg.setDestinationEntity(218U);
    msg.itow = 2338993106U;
    msg.lat = 0.881837783537;
    msg.lon = 0.826673004195;
    msg.height_ell = 0.512974835953;
    msg.height_sea = 0.977737258316;
    msg.hacc = 0.839616433289;
    msg.vacc = 0.515772722359;
    msg.vel_n = 0.0182870726484;
    msg.vel_e = 0.000898191867446;
    msg.vel_d = 0.35901302149;
    msg.speed = 0.277947362645;
    msg.gspeed = 0.853230985472;
    msg.heading = 0.837761037008;
    msg.sacc = 0.194138242582;
    msg.cacc = 0.202742036874;

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
    msg.setTimeStamp(0.0442785048189);
    msg.setSource(19534U);
    msg.setSourceEntity(207U);
    msg.setDestination(44552U);
    msg.setDestinationEntity(96U);
    msg.id = 187U;
    msg.value = 0.313394364395;

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
    msg.setTimeStamp(0.757737306881);
    msg.setSource(20340U);
    msg.setSourceEntity(173U);
    msg.setDestination(43923U);
    msg.setDestinationEntity(50U);
    msg.id = 174U;
    msg.value = 0.5708639242;

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
    msg.setTimeStamp(0.99198520256);
    msg.setSource(64965U);
    msg.setSourceEntity(92U);
    msg.setDestination(63568U);
    msg.setDestinationEntity(99U);
    msg.id = 29U;
    msg.value = 0.958290814093;

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
    msg.setTimeStamp(0.245353927338);
    msg.setSource(22089U);
    msg.setSourceEntity(77U);
    msg.setDestination(25163U);
    msg.setDestinationEntity(228U);
    msg.x = 0.201251195553;
    msg.y = 0.298997513255;
    msg.z = 0.839610260164;
    msg.phi = 0.835339701436;
    msg.theta = 0.338117687888;
    msg.psi = 0.717483163212;

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
    msg.setTimeStamp(0.687307956864);
    msg.setSource(18504U);
    msg.setSourceEntity(55U);
    msg.setDestination(46795U);
    msg.setDestinationEntity(166U);
    msg.x = 0.471246050036;
    msg.y = 0.756123266485;
    msg.z = 0.0458185309819;
    msg.phi = 0.138914472754;
    msg.theta = 0.103406358163;
    msg.psi = 0.60180294497;

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
    msg.setTimeStamp(0.785768201016);
    msg.setSource(56205U);
    msg.setSourceEntity(230U);
    msg.setDestination(33699U);
    msg.setDestinationEntity(79U);
    msg.x = 0.597206653447;
    msg.y = 0.135069839187;
    msg.z = 0.0509758445519;
    msg.phi = 0.88072220252;
    msg.theta = 0.381148471173;
    msg.psi = 0.527367862638;

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
    msg.setTimeStamp(0.453086637237);
    msg.setSource(41278U);
    msg.setSourceEntity(150U);
    msg.setDestination(17136U);
    msg.setDestinationEntity(32U);
    msg.beam_width = 0.381125560882;
    msg.beam_height = 0.861664040976;

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
    msg.setTimeStamp(0.97975955786);
    msg.setSource(56204U);
    msg.setSourceEntity(129U);
    msg.setDestination(7580U);
    msg.setDestinationEntity(204U);
    msg.beam_width = 0.476323160835;
    msg.beam_height = 0.485495065973;

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
    msg.setTimeStamp(0.0529008010915);
    msg.setSource(32676U);
    msg.setSourceEntity(212U);
    msg.setDestination(27731U);
    msg.setDestinationEntity(195U);
    msg.beam_width = 0.18494041043;
    msg.beam_height = 0.964915528555;

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
    msg.setTimeStamp(0.180841494345);
    msg.setSource(14046U);
    msg.setSourceEntity(71U);
    msg.setDestination(47152U);
    msg.setDestinationEntity(185U);
    msg.sane = 141U;

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
    msg.setTimeStamp(0.474215036847);
    msg.setSource(2337U);
    msg.setSourceEntity(149U);
    msg.setDestination(41630U);
    msg.setDestinationEntity(149U);
    msg.sane = 26U;

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
    msg.setTimeStamp(0.654589537948);
    msg.setSource(28901U);
    msg.setSourceEntity(57U);
    msg.setDestination(3410U);
    msg.setDestinationEntity(203U);
    msg.sane = 202U;

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
    msg.setTimeStamp(0.958125723371);
    msg.setSource(24179U);
    msg.setSourceEntity(176U);
    msg.setDestination(13874U);
    msg.setDestinationEntity(236U);
    msg.value = 0.529276441983;

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
    msg.setTimeStamp(0.553821544922);
    msg.setSource(36563U);
    msg.setSourceEntity(151U);
    msg.setDestination(11512U);
    msg.setDestinationEntity(10U);
    msg.value = 0.762683281943;

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
    msg.setTimeStamp(0.395689168272);
    msg.setSource(4197U);
    msg.setSourceEntity(6U);
    msg.setDestination(44238U);
    msg.setDestinationEntity(20U);
    msg.value = 0.525586115393;

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
    msg.setTimeStamp(0.0940906682696);
    msg.setSource(26036U);
    msg.setSourceEntity(25U);
    msg.setDestination(53083U);
    msg.setDestinationEntity(234U);
    msg.value = 0.0639359957789;

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
    msg.setTimeStamp(0.456749320243);
    msg.setSource(17608U);
    msg.setSourceEntity(113U);
    msg.setDestination(27826U);
    msg.setDestinationEntity(63U);
    msg.value = 0.884076040043;

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
    msg.setTimeStamp(0.544243916869);
    msg.setSource(20082U);
    msg.setSourceEntity(172U);
    msg.setDestination(47058U);
    msg.setDestinationEntity(114U);
    msg.value = 0.515066907886;

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
    msg.setTimeStamp(0.0443286069481);
    msg.setSource(25620U);
    msg.setSourceEntity(151U);
    msg.setDestination(38281U);
    msg.setDestinationEntity(139U);
    msg.value = 0.445248371103;

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
    msg.setTimeStamp(0.556929823546);
    msg.setSource(58613U);
    msg.setSourceEntity(16U);
    msg.setDestination(60896U);
    msg.setDestinationEntity(250U);
    msg.value = 0.763172594055;

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
    msg.setTimeStamp(0.800034026756);
    msg.setSource(63789U);
    msg.setSourceEntity(252U);
    msg.setDestination(28275U);
    msg.setDestinationEntity(224U);
    msg.value = 0.298341297247;

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
    msg.setTimeStamp(0.767006820167);
    msg.setSource(48207U);
    msg.setSourceEntity(146U);
    msg.setDestination(57584U);
    msg.setDestinationEntity(27U);
    msg.value = 0.370590281645;

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
    msg.setTimeStamp(0.316880475914);
    msg.setSource(10544U);
    msg.setSourceEntity(243U);
    msg.setDestination(15602U);
    msg.setDestinationEntity(240U);
    msg.value = 0.404755401134;

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
    msg.setTimeStamp(0.488152003562);
    msg.setSource(10108U);
    msg.setSourceEntity(110U);
    msg.setDestination(8147U);
    msg.setDestinationEntity(163U);
    msg.value = 0.0906243185119;

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
    msg.setTimeStamp(0.145365299322);
    msg.setSource(40609U);
    msg.setSourceEntity(151U);
    msg.setDestination(8826U);
    msg.setDestinationEntity(14U);
    msg.value = 0.0913692184116;

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
    msg.setTimeStamp(0.785627264971);
    msg.setSource(54441U);
    msg.setSourceEntity(157U);
    msg.setDestination(23233U);
    msg.setDestinationEntity(42U);
    msg.value = 0.531725019288;

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
    msg.setTimeStamp(0.123330192883);
    msg.setSource(9055U);
    msg.setSourceEntity(25U);
    msg.setDestination(42284U);
    msg.setDestinationEntity(85U);
    msg.value = 0.589854513125;

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
    msg.setTimeStamp(0.679074156621);
    msg.setSource(38831U);
    msg.setSourceEntity(207U);
    msg.setDestination(8590U);
    msg.setDestinationEntity(148U);
    msg.value = 0.681290357322;

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
    msg.setTimeStamp(0.297933091423);
    msg.setSource(49762U);
    msg.setSourceEntity(134U);
    msg.setDestination(54641U);
    msg.setDestinationEntity(115U);
    msg.value = 0.803861895711;

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
    msg.setTimeStamp(0.29585966487);
    msg.setSource(53044U);
    msg.setSourceEntity(121U);
    msg.setDestination(18777U);
    msg.setDestinationEntity(128U);
    msg.value = 0.604248446524;

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
    msg.setTimeStamp(0.559129095432);
    msg.setSource(37016U);
    msg.setSourceEntity(178U);
    msg.setDestination(7998U);
    msg.setDestinationEntity(185U);
    msg.value = 0.745987550537;

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
    msg.setTimeStamp(0.318619479711);
    msg.setSource(17076U);
    msg.setSourceEntity(80U);
    msg.setDestination(11078U);
    msg.setDestinationEntity(115U);
    msg.value = 0.723929752986;

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
    msg.setTimeStamp(0.205130662504);
    msg.setSource(57411U);
    msg.setSourceEntity(8U);
    msg.setDestination(2856U);
    msg.setDestinationEntity(79U);
    msg.value = 0.984083449754;

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
    msg.setTimeStamp(0.669268364884);
    msg.setSource(63634U);
    msg.setSourceEntity(168U);
    msg.setDestination(50869U);
    msg.setDestinationEntity(17U);
    msg.value = 0.778699890501;

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
    msg.setTimeStamp(0.717421112144);
    msg.setSource(59071U);
    msg.setSourceEntity(197U);
    msg.setDestination(1671U);
    msg.setDestinationEntity(240U);
    msg.value = 0.734233313045;

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
    msg.setTimeStamp(0.710839163586);
    msg.setSource(16692U);
    msg.setSourceEntity(200U);
    msg.setDestination(24899U);
    msg.setDestinationEntity(17U);
    msg.value = 0.672620009344;

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
    msg.setTimeStamp(0.227517363571);
    msg.setSource(10671U);
    msg.setSourceEntity(119U);
    msg.setDestination(7039U);
    msg.setDestinationEntity(27U);
    msg.validity = 474U;
    msg.type = 93U;
    msg.tow = 3559695527U;
    msg.base_lat = 0.574073718973;
    msg.base_lon = 0.158104897198;
    msg.base_height = 0.876945065808;
    msg.n = 0.602344048013;
    msg.e = 0.801107605003;
    msg.d = 0.142329659488;
    msg.v_n = 0.852038976954;
    msg.v_e = 0.523798038065;
    msg.v_d = 0.377825614486;
    msg.satellites = 8U;
    msg.iar_hyp = 10954U;
    msg.iar_ratio = 0.616835586484;

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
    msg.setTimeStamp(0.917748221476);
    msg.setSource(47211U);
    msg.setSourceEntity(204U);
    msg.setDestination(17721U);
    msg.setDestinationEntity(31U);
    msg.validity = 27332U;
    msg.type = 135U;
    msg.tow = 1219308705U;
    msg.base_lat = 0.555835200897;
    msg.base_lon = 0.794681617701;
    msg.base_height = 0.726328911496;
    msg.n = 0.906652166367;
    msg.e = 0.510150141785;
    msg.d = 0.325013028512;
    msg.v_n = 0.57495482904;
    msg.v_e = 0.737360325859;
    msg.v_d = 0.481241805459;
    msg.satellites = 172U;
    msg.iar_hyp = 11115U;
    msg.iar_ratio = 0.048854979283;

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
    msg.setTimeStamp(0.651090606087);
    msg.setSource(63719U);
    msg.setSourceEntity(107U);
    msg.setDestination(19910U);
    msg.setDestinationEntity(199U);
    msg.validity = 16829U;
    msg.type = 239U;
    msg.tow = 1255174957U;
    msg.base_lat = 0.938365172775;
    msg.base_lon = 0.835064686209;
    msg.base_height = 0.364469742515;
    msg.n = 0.413686206489;
    msg.e = 0.577923655431;
    msg.d = 0.507908536362;
    msg.v_n = 0.897667253657;
    msg.v_e = 0.704921819899;
    msg.v_d = 0.0231617506737;
    msg.satellites = 64U;
    msg.iar_hyp = 2933U;
    msg.iar_ratio = 0.956806100191;

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
    msg.setTimeStamp(0.882011082538);
    msg.setSource(9859U);
    msg.setSourceEntity(69U);
    msg.setDestination(1850U);
    msg.setDestinationEntity(193U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.552053071767;
    tmp_msg_0.lon = 0.794104837311;
    tmp_msg_0.height = 0.634696720391;
    tmp_msg_0.x = 0.203578766035;
    tmp_msg_0.y = 0.316415402541;
    tmp_msg_0.z = 0.93353460684;
    tmp_msg_0.phi = 0.553212778662;
    tmp_msg_0.theta = 0.426802439093;
    tmp_msg_0.psi = 0.329106337156;
    tmp_msg_0.u = 0.951748848034;
    tmp_msg_0.v = 0.732537889119;
    tmp_msg_0.w = 0.801531652613;
    tmp_msg_0.vx = 0.644241050759;
    tmp_msg_0.vy = 0.0383985949399;
    tmp_msg_0.vz = 0.154628935706;
    tmp_msg_0.p = 0.95777872556;
    tmp_msg_0.q = 0.619691159046;
    tmp_msg_0.r = 0.0722464149808;
    tmp_msg_0.depth = 0.187290750536;
    tmp_msg_0.alt = 0.940937425481;
    msg.state.set(tmp_msg_0);
    msg.type = 115U;

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
    msg.setTimeStamp(0.530662909369);
    msg.setSource(1442U);
    msg.setSourceEntity(153U);
    msg.setDestination(26546U);
    msg.setDestinationEntity(253U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0572555850921;
    tmp_msg_0.lon = 0.666625445362;
    tmp_msg_0.height = 0.472519886937;
    tmp_msg_0.x = 0.0154262439365;
    tmp_msg_0.y = 0.739377163897;
    tmp_msg_0.z = 0.986275479759;
    tmp_msg_0.phi = 0.639116664753;
    tmp_msg_0.theta = 0.349989966039;
    tmp_msg_0.psi = 0.944428408812;
    tmp_msg_0.u = 0.123264144888;
    tmp_msg_0.v = 0.856425245396;
    tmp_msg_0.w = 0.454912968522;
    tmp_msg_0.vx = 0.654078753893;
    tmp_msg_0.vy = 0.552746384017;
    tmp_msg_0.vz = 0.390907478431;
    tmp_msg_0.p = 0.267371114837;
    tmp_msg_0.q = 0.260977601155;
    tmp_msg_0.r = 0.924963572546;
    tmp_msg_0.depth = 0.416446607209;
    tmp_msg_0.alt = 0.0500646162602;
    msg.state.set(tmp_msg_0);
    msg.type = 254U;

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
    msg.setTimeStamp(0.464100781978);
    msg.setSource(1013U);
    msg.setSourceEntity(202U);
    msg.setDestination(40561U);
    msg.setDestinationEntity(226U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0388981348319;
    tmp_msg_0.lon = 0.817378188739;
    tmp_msg_0.height = 0.469870881146;
    tmp_msg_0.x = 0.242728521911;
    tmp_msg_0.y = 0.572865336956;
    tmp_msg_0.z = 0.124723115908;
    tmp_msg_0.phi = 0.829470675526;
    tmp_msg_0.theta = 0.59962633808;
    tmp_msg_0.psi = 0.993834466624;
    tmp_msg_0.u = 0.605338687078;
    tmp_msg_0.v = 0.0651366442659;
    tmp_msg_0.w = 0.841154342059;
    tmp_msg_0.vx = 0.0294992484093;
    tmp_msg_0.vy = 0.129955233543;
    tmp_msg_0.vz = 0.0868006127574;
    tmp_msg_0.p = 0.784758975434;
    tmp_msg_0.q = 0.347413295979;
    tmp_msg_0.r = 0.630013197156;
    tmp_msg_0.depth = 0.730559424014;
    tmp_msg_0.alt = 0.168775530922;
    msg.state.set(tmp_msg_0);
    msg.type = 227U;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.935970104746);
    msg.setSource(64208U);
    msg.setSourceEntity(186U);
    msg.setDestination(5672U);
    msg.setDestinationEntity(117U);
    msg.id = 147U;
    msg.zoom = 155U;
    msg.action = 116U;

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
    msg.setTimeStamp(0.700236464843);
    msg.setSource(16532U);
    msg.setSourceEntity(22U);
    msg.setDestination(4627U);
    msg.setDestinationEntity(236U);
    msg.id = 89U;
    msg.zoom = 124U;
    msg.action = 97U;

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
    msg.setTimeStamp(0.0914688682449);
    msg.setSource(8252U);
    msg.setSourceEntity(244U);
    msg.setDestination(7934U);
    msg.setDestinationEntity(221U);
    msg.id = 141U;
    msg.zoom = 173U;
    msg.action = 134U;

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
    msg.setTimeStamp(0.572599097699);
    msg.setSource(5871U);
    msg.setSourceEntity(167U);
    msg.setDestination(53471U);
    msg.setDestinationEntity(115U);
    msg.id = 138U;
    msg.value = 0.27396794163;

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
    msg.setTimeStamp(0.302470615222);
    msg.setSource(46678U);
    msg.setSourceEntity(118U);
    msg.setDestination(63349U);
    msg.setDestinationEntity(19U);
    msg.id = 118U;
    msg.value = 0.225984258531;

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
    msg.setTimeStamp(0.749138681658);
    msg.setSource(31519U);
    msg.setSourceEntity(3U);
    msg.setDestination(43104U);
    msg.setDestinationEntity(234U);
    msg.id = 55U;
    msg.value = 0.914135754058;

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
    msg.setTimeStamp(0.179149347759);
    msg.setSource(41497U);
    msg.setSourceEntity(240U);
    msg.setDestination(56816U);
    msg.setDestinationEntity(137U);
    msg.id = 181U;
    msg.value = 0.724928177579;

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
    msg.setTimeStamp(0.46756673719);
    msg.setSource(58444U);
    msg.setSourceEntity(119U);
    msg.setDestination(24725U);
    msg.setDestinationEntity(30U);
    msg.id = 155U;
    msg.value = 0.372341682963;

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
    msg.setTimeStamp(0.722492985916);
    msg.setSource(47045U);
    msg.setSourceEntity(191U);
    msg.setDestination(51244U);
    msg.setDestinationEntity(129U);
    msg.id = 48U;
    msg.value = 0.675351671267;

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
    msg.setTimeStamp(0.751090930203);
    msg.setSource(18211U);
    msg.setSourceEntity(84U);
    msg.setDestination(5084U);
    msg.setDestinationEntity(167U);
    msg.id = 251U;
    msg.angle = 0.877596946823;

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
    msg.setTimeStamp(0.334863576565);
    msg.setSource(44363U);
    msg.setSourceEntity(252U);
    msg.setDestination(1053U);
    msg.setDestinationEntity(203U);
    msg.id = 250U;
    msg.angle = 0.947463186374;

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
    msg.setTimeStamp(0.374971028599);
    msg.setSource(32837U);
    msg.setSourceEntity(57U);
    msg.setDestination(23250U);
    msg.setDestinationEntity(62U);
    msg.id = 119U;
    msg.angle = 0.857696495456;

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
    msg.setTimeStamp(0.570996617834);
    msg.setSource(56120U);
    msg.setSourceEntity(131U);
    msg.setDestination(7297U);
    msg.setDestinationEntity(120U);
    msg.op = 41U;
    msg.actions.assign("KSUWJPZRALOHDYXCKSSTMGZVNLALYUTZQFUBNRNDRRKGXVGXXUGLQFPEBWMJKGZWGYIUYDOFBZGPQHIGYJFJLIUVOTZ");

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
    msg.setTimeStamp(0.480409805112);
    msg.setSource(127U);
    msg.setSourceEntity(159U);
    msg.setDestination(30383U);
    msg.setDestinationEntity(58U);
    msg.op = 62U;
    msg.actions.assign("DPDZSETAVPCEUJPQITGHNAUISBILMFEVVCNMGWXSVAUIHWWZQGHTAZKDCVVNQMLHHEJOGYKPBJNRZLZKFODSHOXYKSHIPKYPGFAOVCQGUOACLLKKOIGFQXRXXJMPRHFBBWNFWDYWOSQMPTVUJZXYKKTLFZXSKYWFBDHASCNOPHETUBWYNCRTGEEUCOQC");

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
    msg.setTimeStamp(0.212732441581);
    msg.setSource(32923U);
    msg.setSourceEntity(143U);
    msg.setDestination(62085U);
    msg.setDestinationEntity(98U);
    msg.op = 41U;
    msg.actions.assign("AOTXPABIRJXCBYOVNJLEVGNSWKLDMEELNZZMXUHVNVKTSQUNUCUWEEBNHBYGCURBUNIIDQPPKYHAHYUWFFJVCPBLWFBYWFUFIZKWWODVVGQAHOR");

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
    msg.setTimeStamp(0.868764301645);
    msg.setSource(57897U);
    msg.setSourceEntity(92U);
    msg.setDestination(54423U);
    msg.setDestinationEntity(35U);
    msg.actions.assign("FHRXCZOBTXALIRDMLPPNIVHOMKDLJVMQIPLUVVNSGIYVVRGWFTBJKJNFPZTOUPYRNSOEDNHBHTEMXIJBKRCXPUWZLCGYBTISUTZYVHYCFHNTZZHBYNBNIFAGGSCJMTOKEO");

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
    msg.setTimeStamp(0.536261854916);
    msg.setSource(41957U);
    msg.setSourceEntity(44U);
    msg.setDestination(47835U);
    msg.setDestinationEntity(25U);
    msg.actions.assign("WASGQEZDEVBSKFAYRMHMUWUFEGDYMKVTUUYNJGIWCODVVLHZXJNLNKCFILZDCFBOUXQCJIFHQHNHCIAFOKBXYUMSEXTKRFOPIIZVRRYWXDCPAQFNURKQZBQLDWONXVWQBIAXABGOZLXOMBTFRTNBQWPVKPQYVAJSXEMHFEYEMBNJTDVIYLRPNJWGGZLMDL");

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
    msg.setTimeStamp(0.227349886079);
    msg.setSource(44160U);
    msg.setSourceEntity(162U);
    msg.setDestination(47408U);
    msg.setDestinationEntity(32U);
    msg.actions.assign("JNIKQRGICNMCSRYTTHXQLRIJYPZKYAVVQPKWQCRBAOQLVJWDEMGUXKZZMCOBIFFNHPCSOWBYNXSRTHPNDHQWDQUJZG");

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
    msg.setTimeStamp(0.563502852154);
    msg.setSource(60366U);
    msg.setSourceEntity(243U);
    msg.setDestination(63497U);
    msg.setDestinationEntity(64U);
    msg.button = 177U;
    msg.value = 103U;

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
    msg.setTimeStamp(0.548644631677);
    msg.setSource(13605U);
    msg.setSourceEntity(161U);
    msg.setDestination(16299U);
    msg.setDestinationEntity(49U);
    msg.button = 133U;
    msg.value = 31U;

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
    msg.setTimeStamp(0.855631828276);
    msg.setSource(57925U);
    msg.setSourceEntity(49U);
    msg.setDestination(31337U);
    msg.setDestinationEntity(57U);
    msg.button = 175U;
    msg.value = 92U;

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
    msg.setTimeStamp(0.102625189855);
    msg.setSource(64056U);
    msg.setSourceEntity(220U);
    msg.setDestination(60575U);
    msg.setDestinationEntity(231U);
    msg.op = 95U;
    msg.text.assign("STMFCOIKEGDOEHPCCQVREXMAJVBZDUGNITXJBBNZQFXMSNUMFXOIFUGGISWSCJSZETVWGFRKAGHWWWEYPRDF");

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
    msg.setTimeStamp(0.940480616948);
    msg.setSource(22692U);
    msg.setSourceEntity(20U);
    msg.setDestination(7025U);
    msg.setDestinationEntity(186U);
    msg.op = 55U;
    msg.text.assign("TUGXEZQRLHXGGEAXQBHHAEBJWZZFTUXTQZQIAKNGLKTXVBPNFDZMUZVOLFTWFWKMBCQVUBFOFXYOVLPNYEOSKTZJLDSYBOLBIFSGQIWAYZORZAIORRTGCDMIDFSXSRNNAMUUPCIEACWAJCIGFYNGVVHHMTDPPEDT");

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
    msg.setTimeStamp(0.134787690622);
    msg.setSource(56552U);
    msg.setSourceEntity(31U);
    msg.setDestination(29645U);
    msg.setDestinationEntity(137U);
    msg.op = 101U;
    msg.text.assign("PCCGACOJBRTZLGRWLIYNSNKZFXIIRTNUOEVCHHSEYEBWTVBYBJIFLBWQISBODGLOHUFKVADUYFNSPSQKZLGUASRODXUMEIXXOJWVNNBJRFJVMMBGRABDSWDWQMAEICBPEYHPLUFNXPRXYTEDK");

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
    msg.setTimeStamp(0.231663393693);
    msg.setSource(42887U);
    msg.setSourceEntity(161U);
    msg.setDestination(32368U);
    msg.setDestinationEntity(41U);
    msg.op = 68U;
    msg.time_remain = 0.8903283088;
    msg.sched_time = 0.413916457886;

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
    msg.setTimeStamp(0.0913592589681);
    msg.setSource(30106U);
    msg.setSourceEntity(254U);
    msg.setDestination(32344U);
    msg.setDestinationEntity(55U);
    msg.op = 220U;
    msg.time_remain = 0.904944837608;
    msg.sched_time = 0.534852175535;

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
    msg.setTimeStamp(0.428311564589);
    msg.setSource(52189U);
    msg.setSourceEntity(3U);
    msg.setDestination(50943U);
    msg.setDestinationEntity(187U);
    msg.op = 193U;
    msg.time_remain = 0.6945934577;
    msg.sched_time = 0.529609424264;

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
    msg.setTimeStamp(0.205365994701);
    msg.setSource(9748U);
    msg.setSourceEntity(37U);
    msg.setDestination(38547U);
    msg.setDestinationEntity(145U);
    msg.name.assign("JSCTVEMETLQ");
    msg.op = 231U;
    msg.sched_time = 0.015363177544;

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
    msg.setTimeStamp(0.312059897744);
    msg.setSource(16412U);
    msg.setSourceEntity(121U);
    msg.setDestination(64216U);
    msg.setDestinationEntity(12U);
    msg.name.assign("HMGMNZBEXLBYCOGQTMIYOZFAAEJBFVUDUECPYXSBLWQPXQOPADIRLRPOGFTTPZPSDHNXEKFJLJKNADTJXPTEOCZIUYMYZGGUROEEAKSK");
    msg.op = 111U;
    msg.sched_time = 0.151826338321;

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
    msg.setTimeStamp(0.538732195457);
    msg.setSource(48004U);
    msg.setSourceEntity(92U);
    msg.setDestination(40707U);
    msg.setDestinationEntity(23U);
    msg.name.assign("QOWVNCWCRUAHWZBCPGTRLSDHHOLUIXBGLGBKJJFEOUCKFFJXPTYTRBMQNGYTRDDSTCKCXDNGTGQDYZXBWA");
    msg.op = 174U;
    msg.sched_time = 0.0397506865052;

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
    msg.setTimeStamp(0.450479586424);
    msg.setSource(28241U);
    msg.setSourceEntity(210U);
    msg.setDestination(24093U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.686821262657);
    msg.setSource(60800U);
    msg.setSourceEntity(239U);
    msg.setDestination(10040U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.0883792754004);
    msg.setSource(20966U);
    msg.setSourceEntity(22U);
    msg.setDestination(42872U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.275223159002);
    msg.setSource(50392U);
    msg.setSourceEntity(51U);
    msg.setDestination(20601U);
    msg.setDestinationEntity(214U);
    msg.name.assign("ICODXTGPOGYJXJIBKSNGQKQLWMYNSETFUHHJYAGMWARUXKWSALUOSCVSCXSQIFHCLUKSQDDAQCLADRDQYTISZWTHWDACVEQPZHHPFFOIMVVBCRRDIBTERMUCKZKEBJONVJNETXPJGNYASKRWXPEJGXZBPWOIZIRYKCNLLFDDFASKWJNNRHVJEFHPIUMTFOGWYQOLBMKCYBVPBHVFZAZMLMGJBTEOXOLXPQNUGTZPRXGMILZUUWYVE");
    msg.state = 157U;

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
    msg.setTimeStamp(0.417931736494);
    msg.setSource(7831U);
    msg.setSourceEntity(160U);
    msg.setDestination(36651U);
    msg.setDestinationEntity(175U);
    msg.name.assign("LBJSWFKXRZAMJPDRTZDZGIIHYIJVSTLNAUYUBLODGBGVDYQMMOWOXXZLNVEVEGKZYW");
    msg.state = 135U;

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
    msg.setTimeStamp(0.0821492421722);
    msg.setSource(9399U);
    msg.setSourceEntity(169U);
    msg.setDestination(1765U);
    msg.setDestinationEntity(89U);
    msg.name.assign("RIVJMRPCPDCPRIXQXGHVJVQOSRYKUKDGIPWBXKENFRABMAWYEJPYVYDLZYTLTYGHSKFNRWLUGOFDPXXBFPHWRVSZUFLPIQAXDGLL");
    msg.state = 71U;

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
    msg.setTimeStamp(0.224998355904);
    msg.setSource(4264U);
    msg.setSourceEntity(15U);
    msg.setDestination(16936U);
    msg.setDestinationEntity(33U);
    msg.name.assign("EKEYDWHWWEXJJAHGSPHRJBMPTTONYPDOUCZQDMWZZJXLHBPFKLCULSPOPMNCGKHOVHNGJELNZD");
    msg.value = 110U;

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
    msg.setTimeStamp(0.361343487396);
    msg.setSource(20782U);
    msg.setSourceEntity(194U);
    msg.setDestination(63820U);
    msg.setDestinationEntity(156U);
    msg.name.assign("AIVBNJFSEKROJKWYXCDCPUSSEOFQOJYVZMOBQIAPFZLVPFTDUTNYWVTQISAMOUKQTEZMIKJNCNBFEJVHIFKZRJCVAKAHCCLDPJGWGMBYDDRDKVRCSTSXPOBPOLULEWXJYRQJADRTXKNMCISAMTMBGGHFZIFTSQXBQWYOOEEHTDAGPKCGLZFINSJXWOPATHWHMBZQUXMCUEUEWBGLGUQZMYRHXWLYYVLRHZWUANFXRVENQGLZKNI");
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
    msg.setTimeStamp(0.0648300392988);
    msg.setSource(40226U);
    msg.setSourceEntity(172U);
    msg.setDestination(62158U);
    msg.setDestinationEntity(176U);
    msg.name.assign("OXUZMVNYUOQWKWISIWCFCEARAFBVBVEETSZMCWPDUHKHUUFJBOMQ");
    msg.value = 106U;

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
    msg.setTimeStamp(0.577293246743);
    msg.setSource(29089U);
    msg.setSourceEntity(55U);
    msg.setDestination(43223U);
    msg.setDestinationEntity(23U);
    msg.name.assign("KZCDJRERUPQBVLJZXDFFYWVJEONPGCGZYEXTHNZDQTMHTEWESVWSCYUNKNVIGFXMQXHMNGQHUWULOLDRDKAVBSVQYBOPPIYLNLG");

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
    msg.setTimeStamp(0.494936528799);
    msg.setSource(59780U);
    msg.setSourceEntity(160U);
    msg.setDestination(39370U);
    msg.setDestinationEntity(0U);
    msg.name.assign("NDFXGRFZZXLCEDVJERZTBJANLVWDCZXZURTCIWVIEHFRINIGLQXFPYBMLONVJRQXUWQJSN");

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
    msg.setTimeStamp(0.619779667975);
    msg.setSource(28596U);
    msg.setSourceEntity(188U);
    msg.setDestination(18664U);
    msg.setDestinationEntity(17U);
    msg.name.assign("DXNTTLOPWJIZKSBKFHKPMNXLSDINCRRSMMBTLAJWYWERCDAVXKWFGORVRSMLGXRZZJZOMQMVMUYNTYAORZEWJSEPLCUFXTYQ");

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
    msg.setTimeStamp(0.253007587053);
    msg.setSource(40006U);
    msg.setSourceEntity(253U);
    msg.setDestination(50814U);
    msg.setDestinationEntity(243U);
    msg.name.assign("AQAKUXIRFSBNHWGEVTWMQSZOPSLMSMHGGBDSYVAKVONWIFZWLDZCFPXGAIVUPVVKLFCTQKTBEQMTYSQUFJWYU");
    msg.value = 27U;

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
    msg.setTimeStamp(0.81684687249);
    msg.setSource(11441U);
    msg.setSourceEntity(222U);
    msg.setDestination(30728U);
    msg.setDestinationEntity(115U);
    msg.name.assign("GMKDVJPLVTHJYOFSLANGFMXEZALXIMEESRQTTBXOPCSTFBYNRUWSOOOZWMHGDIJPGAKCFVRNLHQVIJQ");
    msg.value = 150U;

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
    msg.setTimeStamp(0.425078736416);
    msg.setSource(17145U);
    msg.setSourceEntity(101U);
    msg.setDestination(16979U);
    msg.setDestinationEntity(175U);
    msg.name.assign("GKGMULSCHEEDXDHKIZNAXQXMSUMZGDBRLIINUEKPCNOTMDFOXVPPQJPLMMGQTVYRBQNYTTIFOCXLKYGQAW");
    msg.value = 76U;

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
    msg.setTimeStamp(0.696036171383);
    msg.setSource(54610U);
    msg.setSourceEntity(207U);
    msg.setDestination(34175U);
    msg.setDestinationEntity(195U);
    msg.id = 129U;
    msg.period = 1763142569U;
    msg.duty_cycle = 2243143815U;

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
    msg.setTimeStamp(0.985198114293);
    msg.setSource(14836U);
    msg.setSourceEntity(188U);
    msg.setDestination(46831U);
    msg.setDestinationEntity(106U);
    msg.id = 18U;
    msg.period = 1766278421U;
    msg.duty_cycle = 2511120322U;

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
    msg.setTimeStamp(0.302569371992);
    msg.setSource(58208U);
    msg.setSourceEntity(64U);
    msg.setDestination(14411U);
    msg.setDestinationEntity(186U);
    msg.id = 43U;
    msg.period = 3046401957U;
    msg.duty_cycle = 4119142144U;

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
    msg.setTimeStamp(0.912872115717);
    msg.setSource(24499U);
    msg.setSourceEntity(155U);
    msg.setDestination(44887U);
    msg.setDestinationEntity(60U);
    msg.id = 51U;
    msg.period = 2594607718U;
    msg.duty_cycle = 2542207936U;

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
    msg.setTimeStamp(0.432650413882);
    msg.setSource(55155U);
    msg.setSourceEntity(81U);
    msg.setDestination(37312U);
    msg.setDestinationEntity(167U);
    msg.id = 204U;
    msg.period = 273257877U;
    msg.duty_cycle = 1055731542U;

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
    msg.setTimeStamp(0.449843656456);
    msg.setSource(63482U);
    msg.setSourceEntity(66U);
    msg.setDestination(21805U);
    msg.setDestinationEntity(83U);
    msg.id = 77U;
    msg.period = 3692711299U;
    msg.duty_cycle = 3718986384U;

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
    msg.setTimeStamp(0.641623123888);
    msg.setSource(43494U);
    msg.setSourceEntity(101U);
    msg.setDestination(36865U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.410329578179;
    msg.lon = 0.193031580478;
    msg.height = 0.73021552772;
    msg.x = 0.282872856065;
    msg.y = 0.478562352632;
    msg.z = 0.135938963873;
    msg.phi = 0.398277308595;
    msg.theta = 0.218450885567;
    msg.psi = 0.0858978833714;
    msg.u = 0.243913489492;
    msg.v = 0.951133449377;
    msg.w = 0.056271785342;
    msg.vx = 0.422294111275;
    msg.vy = 0.586704491764;
    msg.vz = 0.852969107301;
    msg.p = 0.82370757885;
    msg.q = 0.568157110106;
    msg.r = 0.353106329316;
    msg.depth = 0.0207266277376;
    msg.alt = 0.0867377978359;

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
    msg.setTimeStamp(0.243818321806);
    msg.setSource(52748U);
    msg.setSourceEntity(53U);
    msg.setDestination(42059U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.174944659459;
    msg.lon = 0.281510932905;
    msg.height = 0.659066090365;
    msg.x = 0.1039374805;
    msg.y = 0.0292130239549;
    msg.z = 0.0528945102021;
    msg.phi = 0.666938435122;
    msg.theta = 0.0621555789731;
    msg.psi = 0.656770003642;
    msg.u = 0.898369328286;
    msg.v = 0.189400650412;
    msg.w = 0.471970714796;
    msg.vx = 0.911974739774;
    msg.vy = 0.305218813514;
    msg.vz = 0.478496349438;
    msg.p = 0.922619464137;
    msg.q = 0.548120171201;
    msg.r = 0.393545558508;
    msg.depth = 0.150183803476;
    msg.alt = 0.128500792282;

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
    msg.setTimeStamp(0.483496411908);
    msg.setSource(51390U);
    msg.setSourceEntity(56U);
    msg.setDestination(12524U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.872241293921;
    msg.lon = 0.664838660943;
    msg.height = 0.698249207529;
    msg.x = 0.446815321197;
    msg.y = 0.724242209564;
    msg.z = 0.522027136484;
    msg.phi = 0.384185144542;
    msg.theta = 0.86196502284;
    msg.psi = 0.377531587277;
    msg.u = 0.126347570709;
    msg.v = 0.213343180844;
    msg.w = 0.294926678365;
    msg.vx = 0.496977989029;
    msg.vy = 0.804932392667;
    msg.vz = 0.0140207074462;
    msg.p = 0.858057211338;
    msg.q = 0.278538605616;
    msg.r = 0.604032910424;
    msg.depth = 0.646820114312;
    msg.alt = 0.751030539825;

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
    msg.setTimeStamp(0.907630297846);
    msg.setSource(55819U);
    msg.setSourceEntity(197U);
    msg.setDestination(6276U);
    msg.setDestinationEntity(19U);
    msg.x = 0.497349965952;
    msg.y = 0.442455554134;
    msg.z = 0.805394773136;

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
    msg.setTimeStamp(0.487243433291);
    msg.setSource(65487U);
    msg.setSourceEntity(95U);
    msg.setDestination(49802U);
    msg.setDestinationEntity(74U);
    msg.x = 0.1305502241;
    msg.y = 0.831145646027;
    msg.z = 0.44269313891;

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
    msg.setTimeStamp(0.578493679824);
    msg.setSource(47479U);
    msg.setSourceEntity(1U);
    msg.setDestination(1169U);
    msg.setDestinationEntity(93U);
    msg.x = 0.858605427065;
    msg.y = 0.795770238491;
    msg.z = 0.923091746741;

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
    msg.setTimeStamp(0.825247278028);
    msg.setSource(62755U);
    msg.setSourceEntity(95U);
    msg.setDestination(9065U);
    msg.setDestinationEntity(20U);
    msg.value = 0.0539680339561;

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
    msg.setTimeStamp(0.160717295116);
    msg.setSource(25333U);
    msg.setSourceEntity(192U);
    msg.setDestination(12217U);
    msg.setDestinationEntity(130U);
    msg.value = 0.199171276384;

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
    msg.setTimeStamp(0.370503417769);
    msg.setSource(44504U);
    msg.setSourceEntity(34U);
    msg.setDestination(35828U);
    msg.setDestinationEntity(236U);
    msg.value = 0.739272553686;

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
    msg.setTimeStamp(0.539016724213);
    msg.setSource(29903U);
    msg.setSourceEntity(139U);
    msg.setDestination(55478U);
    msg.setDestinationEntity(167U);
    msg.value = 0.760513458883;

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
    msg.setTimeStamp(0.779104725531);
    msg.setSource(24890U);
    msg.setSourceEntity(120U);
    msg.setDestination(21986U);
    msg.setDestinationEntity(40U);
    msg.value = 0.367943775368;

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
    msg.setTimeStamp(0.415610538202);
    msg.setSource(11559U);
    msg.setSourceEntity(178U);
    msg.setDestination(60650U);
    msg.setDestinationEntity(65U);
    msg.value = 0.832180563401;

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
    msg.setTimeStamp(0.944888966325);
    msg.setSource(53831U);
    msg.setSourceEntity(70U);
    msg.setDestination(2084U);
    msg.setDestinationEntity(35U);
    msg.x = 0.87803706574;
    msg.y = 0.70021412898;
    msg.z = 0.785219460493;
    msg.phi = 0.970540063339;
    msg.theta = 0.787331024583;
    msg.psi = 0.421889099739;
    msg.p = 0.102788362506;
    msg.q = 0.791745023346;
    msg.r = 0.527169840347;
    msg.u = 0.631597301832;
    msg.v = 0.883672490132;
    msg.w = 0.774380388272;
    msg.bias_psi = 0.905658768214;
    msg.bias_r = 0.159098040853;

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
    msg.setTimeStamp(0.850223131034);
    msg.setSource(3968U);
    msg.setSourceEntity(21U);
    msg.setDestination(63604U);
    msg.setDestinationEntity(142U);
    msg.x = 0.821389597598;
    msg.y = 0.613560757466;
    msg.z = 0.275697645135;
    msg.phi = 0.376699735771;
    msg.theta = 0.617654602995;
    msg.psi = 0.871303970523;
    msg.p = 0.41709487417;
    msg.q = 0.984500513575;
    msg.r = 0.876341329497;
    msg.u = 0.297213556077;
    msg.v = 0.233139647273;
    msg.w = 0.343042616374;
    msg.bias_psi = 0.430608892882;
    msg.bias_r = 0.794961486791;

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
    msg.setTimeStamp(0.440848567885);
    msg.setSource(10166U);
    msg.setSourceEntity(129U);
    msg.setDestination(17921U);
    msg.setDestinationEntity(169U);
    msg.x = 0.490673581225;
    msg.y = 0.246575400202;
    msg.z = 0.227742625341;
    msg.phi = 0.153883747586;
    msg.theta = 0.435124855425;
    msg.psi = 0.151699210175;
    msg.p = 0.0562597009065;
    msg.q = 0.789426144386;
    msg.r = 0.450699451345;
    msg.u = 0.590845698028;
    msg.v = 0.39514441126;
    msg.w = 0.734672751091;
    msg.bias_psi = 0.786241626287;
    msg.bias_r = 0.470682682591;

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
    msg.setTimeStamp(0.456389827902);
    msg.setSource(50421U);
    msg.setSourceEntity(76U);
    msg.setDestination(9293U);
    msg.setDestinationEntity(121U);
    msg.bias_psi = 0.51605020698;
    msg.bias_r = 0.580327855415;
    msg.cog = 0.329975083571;
    msg.cyaw = 0.814651766759;
    msg.lbl_rej_level = 0.884511589508;
    msg.gps_rej_level = 0.312509411679;
    msg.custom_x = 0.0215963288161;
    msg.custom_y = 0.63746024907;
    msg.custom_z = 0.676949986271;

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
    msg.setTimeStamp(0.997529882611);
    msg.setSource(12769U);
    msg.setSourceEntity(178U);
    msg.setDestination(9905U);
    msg.setDestinationEntity(171U);
    msg.bias_psi = 0.81775621363;
    msg.bias_r = 0.85159156794;
    msg.cog = 0.319125073063;
    msg.cyaw = 0.990145717797;
    msg.lbl_rej_level = 0.54130074263;
    msg.gps_rej_level = 0.330772425007;
    msg.custom_x = 0.995122062462;
    msg.custom_y = 0.273177617005;
    msg.custom_z = 0.86047613903;

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
    msg.setTimeStamp(0.1634510689);
    msg.setSource(11964U);
    msg.setSourceEntity(46U);
    msg.setDestination(65494U);
    msg.setDestinationEntity(62U);
    msg.bias_psi = 0.320531579373;
    msg.bias_r = 0.336142501508;
    msg.cog = 0.125822326811;
    msg.cyaw = 0.620262797162;
    msg.lbl_rej_level = 0.150337609136;
    msg.gps_rej_level = 0.963706241855;
    msg.custom_x = 0.861708835052;
    msg.custom_y = 0.885750853013;
    msg.custom_z = 0.46482247491;

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
    msg.setTimeStamp(0.978258504485);
    msg.setSource(61980U);
    msg.setSourceEntity(144U);
    msg.setDestination(21781U);
    msg.setDestinationEntity(230U);
    msg.utc_time = 0.0858116337154;
    msg.reason = 79U;

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
    msg.setTimeStamp(0.511546912915);
    msg.setSource(35441U);
    msg.setSourceEntity(26U);
    msg.setDestination(33058U);
    msg.setDestinationEntity(61U);
    msg.utc_time = 0.0503198420881;
    msg.reason = 155U;

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
    msg.setTimeStamp(0.0223218082347);
    msg.setSource(35833U);
    msg.setSourceEntity(75U);
    msg.setDestination(60790U);
    msg.setDestinationEntity(226U);
    msg.utc_time = 0.497456390069;
    msg.reason = 209U;

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
    msg.setTimeStamp(0.731535678397);
    msg.setSource(60248U);
    msg.setSourceEntity(92U);
    msg.setDestination(15827U);
    msg.setDestinationEntity(64U);
    msg.id = 2U;
    msg.range = 0.612892604631;
    msg.acceptance = 42U;

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
    msg.setTimeStamp(0.531280253856);
    msg.setSource(37771U);
    msg.setSourceEntity(102U);
    msg.setDestination(38410U);
    msg.setDestinationEntity(240U);
    msg.id = 108U;
    msg.range = 0.449182735643;
    msg.acceptance = 199U;

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
    msg.setTimeStamp(0.11125576461);
    msg.setSource(37601U);
    msg.setSourceEntity(228U);
    msg.setDestination(18403U);
    msg.setDestinationEntity(143U);
    msg.id = 146U;
    msg.range = 0.151155663871;
    msg.acceptance = 175U;

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
    msg.setTimeStamp(0.0964458480832);
    msg.setSource(52435U);
    msg.setSourceEntity(104U);
    msg.setDestination(49810U);
    msg.setDestinationEntity(195U);
    msg.type = 150U;
    msg.reason = 44U;
    msg.value = 0.496769941894;
    msg.timestep = 0.018715199911;

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
    msg.setTimeStamp(0.295907433999);
    msg.setSource(34370U);
    msg.setSourceEntity(94U);
    msg.setDestination(27828U);
    msg.setDestinationEntity(220U);
    msg.type = 245U;
    msg.reason = 89U;
    msg.value = 0.512333986414;
    msg.timestep = 0.146137637255;

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
    msg.setTimeStamp(0.165667642918);
    msg.setSource(27350U);
    msg.setSourceEntity(241U);
    msg.setDestination(1344U);
    msg.setDestinationEntity(159U);
    msg.type = 48U;
    msg.reason = 130U;
    msg.value = 0.927440600675;
    msg.timestep = 0.542783369221;

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
    msg.setTimeStamp(0.761142126741);
    msg.setSource(23116U);
    msg.setSourceEntity(42U);
    msg.setDestination(39616U);
    msg.setDestinationEntity(145U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZBAIFUNDQRHNJRVRJFZUXSOGDKMFEEQWRYPHRIHFJAWLDDJDEHYCTWOOQUTQMGGIIIPDSVTJGKGQFEBPZRIWGVUYCLRNOUZZSTCGJOGYNVUKVZPNNMVKHESMHAVSSWCPGOWXLQFXLLHZDBTXMMNQLTUAMUCXNOOHRBUVJAZGTTLDNYVBXMMWWIFZTSAXFPSSOJBPQKCEEMTUYVXKAQAX");
    tmp_msg_0.lat = 0.861308344668;
    tmp_msg_0.lon = 0.624770318695;
    tmp_msg_0.depth = 0.156333783124;
    tmp_msg_0.query_channel = 64U;
    tmp_msg_0.reply_channel = 229U;
    tmp_msg_0.transponder_delay = 35U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.445137842496;
    msg.y = 0.12308759382;
    msg.var_x = 0.421015240345;
    msg.var_y = 0.733021069798;
    msg.distance = 0.667779366482;

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
    msg.setTimeStamp(0.547886829766);
    msg.setSource(6197U);
    msg.setSourceEntity(53U);
    msg.setDestination(61874U);
    msg.setDestinationEntity(42U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LZZRAECDXIFGDWPTETPUBTOQFNQRAYBGQGDLURVSWABHXMAZJWILHWNBKEYKXCMHQGINIBLANGHPYHBNBMGDGNDVVAJCNJQQXTHSSDPOJJTEYOUXWLMYFPAJSVKFDFKLJQOVXEFRYIORMPCTPCFSLKIOKHCFXVXOXJYKYSGLAJFOMMWZPUYERGDWIXASCIUCKLNNUKBMRZUSALERVGWTQRYOMHDEKHUUIBCUBPVZJSZ");
    tmp_msg_0.lat = 0.405770109801;
    tmp_msg_0.lon = 0.262141306966;
    tmp_msg_0.depth = 0.882868944385;
    tmp_msg_0.query_channel = 26U;
    tmp_msg_0.reply_channel = 213U;
    tmp_msg_0.transponder_delay = 245U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.653521478102;
    msg.y = 0.792511913549;
    msg.var_x = 0.753794029944;
    msg.var_y = 0.567917254781;
    msg.distance = 0.112788863087;

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
    msg.setTimeStamp(0.338810515536);
    msg.setSource(46246U);
    msg.setSourceEntity(54U);
    msg.setDestination(54554U);
    msg.setDestinationEntity(50U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LIGONRXHLFJVCMBBHSJAKWWYHTLBNFSCKTEYGUNMXNFNVVXCHLFTNDUNHVBLSHZCKGVTIFEYYPKBDFQXEAOKYIIDVGJVBRMPCXOQTEOETQIPR");
    tmp_msg_0.lat = 0.591278530735;
    tmp_msg_0.lon = 0.122887752917;
    tmp_msg_0.depth = 0.892506391589;
    tmp_msg_0.query_channel = 26U;
    tmp_msg_0.reply_channel = 121U;
    tmp_msg_0.transponder_delay = 127U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.202113229163;
    msg.y = 0.062456609373;
    msg.var_x = 0.52197228819;
    msg.var_y = 0.0833143061614;
    msg.distance = 0.0731542242742;

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
    msg.setTimeStamp(0.4151920075);
    msg.setSource(65498U);
    msg.setSourceEntity(73U);
    msg.setDestination(5739U);
    msg.setDestinationEntity(213U);
    msg.state = 142U;

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
    msg.setTimeStamp(0.788603053061);
    msg.setSource(13154U);
    msg.setSourceEntity(119U);
    msg.setDestination(11156U);
    msg.setDestinationEntity(203U);
    msg.state = 12U;

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
    msg.setTimeStamp(0.743622869944);
    msg.setSource(19593U);
    msg.setSourceEntity(229U);
    msg.setDestination(11019U);
    msg.setDestinationEntity(97U);
    msg.state = 126U;

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
    msg.setTimeStamp(0.502653712486);
    msg.setSource(51310U);
    msg.setSourceEntity(172U);
    msg.setDestination(12874U);
    msg.setDestinationEntity(240U);
    msg.x = 0.803735526498;
    msg.y = 0.866676745295;
    msg.z = 0.254583766188;

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
    msg.setTimeStamp(0.284298140184);
    msg.setSource(44096U);
    msg.setSourceEntity(172U);
    msg.setDestination(6615U);
    msg.setDestinationEntity(54U);
    msg.x = 0.434963836808;
    msg.y = 0.146770822562;
    msg.z = 0.997673632523;

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
    msg.setTimeStamp(0.759289264349);
    msg.setSource(62824U);
    msg.setSourceEntity(235U);
    msg.setDestination(15388U);
    msg.setDestinationEntity(174U);
    msg.x = 0.498539069563;
    msg.y = 0.0851462183709;
    msg.z = 0.164391896304;

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
    msg.setTimeStamp(0.539434468198);
    msg.setSource(25972U);
    msg.setSourceEntity(83U);
    msg.setDestination(3183U);
    msg.setDestinationEntity(123U);
    msg.va = 0.775012283006;
    msg.aoa = 0.257667971243;
    msg.ssa = 0.00259754608004;

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
    msg.setTimeStamp(0.962241022323);
    msg.setSource(36262U);
    msg.setSourceEntity(51U);
    msg.setDestination(34430U);
    msg.setDestinationEntity(128U);
    msg.va = 0.315095715768;
    msg.aoa = 0.24987519571;
    msg.ssa = 0.703876920194;

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
    msg.setTimeStamp(0.36051503526);
    msg.setSource(35430U);
    msg.setSourceEntity(133U);
    msg.setDestination(50969U);
    msg.setDestinationEntity(252U);
    msg.va = 0.485170592489;
    msg.aoa = 0.149599078316;
    msg.ssa = 0.255655771135;

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
    msg.setTimeStamp(0.850255915146);
    msg.setSource(39087U);
    msg.setSourceEntity(50U);
    msg.setDestination(43422U);
    msg.setDestinationEntity(110U);
    msg.value = 0.386702965116;

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
    msg.setTimeStamp(0.912315083159);
    msg.setSource(34121U);
    msg.setSourceEntity(224U);
    msg.setDestination(47437U);
    msg.setDestinationEntity(245U);
    msg.value = 0.402392305471;

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
    msg.setTimeStamp(0.540650623875);
    msg.setSource(30158U);
    msg.setSourceEntity(156U);
    msg.setDestination(49711U);
    msg.setDestinationEntity(170U);
    msg.value = 0.24880025884;

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
    msg.setTimeStamp(0.747939258291);
    msg.setSource(19662U);
    msg.setSourceEntity(210U);
    msg.setDestination(14807U);
    msg.setDestinationEntity(125U);
    msg.value = 0.33428457623;
    msg.z_units = 21U;

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
    msg.setTimeStamp(0.11351450859);
    msg.setSource(33198U);
    msg.setSourceEntity(164U);
    msg.setDestination(30818U);
    msg.setDestinationEntity(228U);
    msg.value = 0.589383981152;
    msg.z_units = 180U;

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
    msg.setTimeStamp(0.293687388022);
    msg.setSource(61837U);
    msg.setSourceEntity(60U);
    msg.setDestination(52048U);
    msg.setDestinationEntity(225U);
    msg.value = 0.436459102156;
    msg.z_units = 63U;

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
    msg.setTimeStamp(0.0543959449142);
    msg.setSource(21879U);
    msg.setSourceEntity(168U);
    msg.setDestination(13436U);
    msg.setDestinationEntity(45U);
    msg.value = 0.03015795784;
    msg.speed_units = 95U;

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
    msg.setTimeStamp(0.519850349647);
    msg.setSource(8463U);
    msg.setSourceEntity(68U);
    msg.setDestination(45380U);
    msg.setDestinationEntity(133U);
    msg.value = 0.0697428849644;
    msg.speed_units = 12U;

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
    msg.setTimeStamp(0.781901736716);
    msg.setSource(24717U);
    msg.setSourceEntity(253U);
    msg.setDestination(39731U);
    msg.setDestinationEntity(69U);
    msg.value = 0.0270529290944;
    msg.speed_units = 238U;

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
    msg.setTimeStamp(0.379268141328);
    msg.setSource(16881U);
    msg.setSourceEntity(89U);
    msg.setDestination(9842U);
    msg.setDestinationEntity(194U);
    msg.value = 0.837279848707;

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
    msg.setTimeStamp(0.64948894141);
    msg.setSource(58088U);
    msg.setSourceEntity(26U);
    msg.setDestination(36296U);
    msg.setDestinationEntity(0U);
    msg.value = 0.0310531348409;

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
    msg.setTimeStamp(0.481238544132);
    msg.setSource(29932U);
    msg.setSourceEntity(250U);
    msg.setDestination(21088U);
    msg.setDestinationEntity(179U);
    msg.value = 0.350126166079;

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
    msg.setTimeStamp(0.720836564458);
    msg.setSource(2941U);
    msg.setSourceEntity(35U);
    msg.setDestination(13459U);
    msg.setDestinationEntity(229U);
    msg.value = 0.911174694146;

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
    msg.setTimeStamp(0.71915138674);
    msg.setSource(48928U);
    msg.setSourceEntity(125U);
    msg.setDestination(37795U);
    msg.setDestinationEntity(76U);
    msg.value = 0.96988515584;

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
    msg.setTimeStamp(0.993499927098);
    msg.setSource(41786U);
    msg.setSourceEntity(71U);
    msg.setDestination(610U);
    msg.setDestinationEntity(97U);
    msg.value = 0.250416912273;

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
    msg.setTimeStamp(0.115933243963);
    msg.setSource(21902U);
    msg.setSourceEntity(1U);
    msg.setDestination(25048U);
    msg.setDestinationEntity(209U);
    msg.value = 0.916407864384;

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
    msg.setTimeStamp(0.642975111616);
    msg.setSource(5580U);
    msg.setSourceEntity(206U);
    msg.setDestination(7987U);
    msg.setDestinationEntity(241U);
    msg.value = 0.0816783308011;

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
    msg.setTimeStamp(0.241534280389);
    msg.setSource(48008U);
    msg.setSourceEntity(145U);
    msg.setDestination(52389U);
    msg.setDestinationEntity(44U);
    msg.value = 0.992687380133;

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
    msg.setTimeStamp(0.828489130423);
    msg.setSource(34659U);
    msg.setSourceEntity(112U);
    msg.setDestination(16522U);
    msg.setDestinationEntity(143U);
    msg.path_ref = 4241630891U;
    msg.start_lat = 0.970719634173;
    msg.start_lon = 0.844470819481;
    msg.start_z = 0.984584618946;
    msg.start_z_units = 70U;
    msg.end_lat = 0.00773562968612;
    msg.end_lon = 0.131093932119;
    msg.end_z = 0.461275166302;
    msg.end_z_units = 203U;
    msg.speed = 0.490090855698;
    msg.speed_units = 106U;
    msg.lradius = 0.311354644652;
    msg.flags = 87U;

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
    msg.setTimeStamp(0.637650717461);
    msg.setSource(48225U);
    msg.setSourceEntity(92U);
    msg.setDestination(62734U);
    msg.setDestinationEntity(169U);
    msg.path_ref = 3742582302U;
    msg.start_lat = 0.492907289105;
    msg.start_lon = 0.775253835317;
    msg.start_z = 0.6080795048;
    msg.start_z_units = 181U;
    msg.end_lat = 0.422335865118;
    msg.end_lon = 0.664500974563;
    msg.end_z = 0.354688380568;
    msg.end_z_units = 222U;
    msg.speed = 0.239108416093;
    msg.speed_units = 221U;
    msg.lradius = 0.600720851958;
    msg.flags = 204U;

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
    msg.setTimeStamp(0.0969446300579);
    msg.setSource(48937U);
    msg.setSourceEntity(109U);
    msg.setDestination(3458U);
    msg.setDestinationEntity(108U);
    msg.path_ref = 1238678669U;
    msg.start_lat = 0.0489488211973;
    msg.start_lon = 0.683168365984;
    msg.start_z = 0.873878065583;
    msg.start_z_units = 221U;
    msg.end_lat = 0.65532562916;
    msg.end_lon = 0.873895287107;
    msg.end_z = 0.0238448737071;
    msg.end_z_units = 194U;
    msg.speed = 0.368103426519;
    msg.speed_units = 150U;
    msg.lradius = 0.909956914403;
    msg.flags = 143U;

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
    msg.setTimeStamp(0.0193648473859);
    msg.setSource(18458U);
    msg.setSourceEntity(142U);
    msg.setDestination(64919U);
    msg.setDestinationEntity(188U);
    msg.x = 0.793894925233;
    msg.y = 0.442429433137;
    msg.z = 0.385308981705;
    msg.k = 0.685805080468;
    msg.m = 0.115989357552;
    msg.n = 0.7815613154;
    msg.flags = 132U;

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
    msg.setTimeStamp(0.758420654875);
    msg.setSource(18077U);
    msg.setSourceEntity(201U);
    msg.setDestination(6408U);
    msg.setDestinationEntity(107U);
    msg.x = 0.756486394124;
    msg.y = 0.801563797308;
    msg.z = 0.749427356886;
    msg.k = 0.47083818114;
    msg.m = 0.755676397885;
    msg.n = 0.278309128172;
    msg.flags = 132U;

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
    msg.setTimeStamp(0.665635432893);
    msg.setSource(41682U);
    msg.setSourceEntity(110U);
    msg.setDestination(54953U);
    msg.setDestinationEntity(245U);
    msg.x = 0.438328668018;
    msg.y = 0.201615186639;
    msg.z = 0.693102385597;
    msg.k = 0.890080255223;
    msg.m = 0.840435510843;
    msg.n = 0.0451337347826;
    msg.flags = 11U;

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
    msg.setTimeStamp(0.0256022368988);
    msg.setSource(50439U);
    msg.setSourceEntity(9U);
    msg.setDestination(8040U);
    msg.setDestinationEntity(227U);
    msg.value = 0.209773068745;

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
    msg.setTimeStamp(0.0853352752627);
    msg.setSource(6069U);
    msg.setSourceEntity(120U);
    msg.setDestination(38408U);
    msg.setDestinationEntity(179U);
    msg.value = 0.173891963099;

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
    msg.setTimeStamp(0.654280045877);
    msg.setSource(43282U);
    msg.setSourceEntity(214U);
    msg.setDestination(55701U);
    msg.setDestinationEntity(50U);
    msg.value = 0.807305640653;

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
    msg.setTimeStamp(0.608545804202);
    msg.setSource(38716U);
    msg.setSourceEntity(190U);
    msg.setDestination(59606U);
    msg.setDestinationEntity(93U);
    msg.u = 0.620814858513;
    msg.v = 0.582577430247;
    msg.w = 0.964227555471;
    msg.p = 0.505919774482;
    msg.q = 0.230494049513;
    msg.r = 0.890755976555;
    msg.flags = 235U;

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
    msg.setTimeStamp(0.35337699929);
    msg.setSource(35674U);
    msg.setSourceEntity(46U);
    msg.setDestination(18845U);
    msg.setDestinationEntity(113U);
    msg.u = 0.083722282504;
    msg.v = 0.861422671559;
    msg.w = 0.14329442124;
    msg.p = 0.837175245808;
    msg.q = 0.17605079154;
    msg.r = 0.711251012636;
    msg.flags = 226U;

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
    msg.setTimeStamp(0.912668839277);
    msg.setSource(54356U);
    msg.setSourceEntity(146U);
    msg.setDestination(30565U);
    msg.setDestinationEntity(98U);
    msg.u = 0.839710238757;
    msg.v = 0.475605165163;
    msg.w = 0.737168646262;
    msg.p = 0.324897333524;
    msg.q = 0.0617563626021;
    msg.r = 0.730739685227;
    msg.flags = 241U;

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
    msg.setTimeStamp(0.0732252922332);
    msg.setSource(23694U);
    msg.setSourceEntity(30U);
    msg.setDestination(6279U);
    msg.setDestinationEntity(138U);
    msg.path_ref = 1785631558U;
    msg.start_lat = 0.805167210175;
    msg.start_lon = 0.847534170901;
    msg.start_z = 0.764296718486;
    msg.start_z_units = 175U;
    msg.end_lat = 0.494387677324;
    msg.end_lon = 0.920339081814;
    msg.end_z = 0.724156869694;
    msg.end_z_units = 138U;
    msg.lradius = 0.85257339102;
    msg.flags = 11U;
    msg.x = 0.849369905494;
    msg.y = 0.949247672214;
    msg.z = 0.599620521358;
    msg.vx = 0.333326064494;
    msg.vy = 0.789629770837;
    msg.vz = 0.214514161712;
    msg.course_error = 0.931915859856;
    msg.eta = 16675U;

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
    msg.setTimeStamp(0.30854363124);
    msg.setSource(11739U);
    msg.setSourceEntity(16U);
    msg.setDestination(37410U);
    msg.setDestinationEntity(3U);
    msg.path_ref = 1062864260U;
    msg.start_lat = 0.669551863935;
    msg.start_lon = 0.436630126887;
    msg.start_z = 0.0225566701371;
    msg.start_z_units = 104U;
    msg.end_lat = 0.380193300865;
    msg.end_lon = 0.408482973294;
    msg.end_z = 0.734417304177;
    msg.end_z_units = 212U;
    msg.lradius = 0.761876700353;
    msg.flags = 237U;
    msg.x = 0.512913938775;
    msg.y = 0.523599440517;
    msg.z = 0.444623969771;
    msg.vx = 0.0908755559412;
    msg.vy = 0.112977163901;
    msg.vz = 0.978785077154;
    msg.course_error = 0.433110597263;
    msg.eta = 45272U;

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
    msg.setTimeStamp(0.130801407707);
    msg.setSource(64547U);
    msg.setSourceEntity(73U);
    msg.setDestination(10587U);
    msg.setDestinationEntity(196U);
    msg.path_ref = 3818357492U;
    msg.start_lat = 0.459161479298;
    msg.start_lon = 0.578777150823;
    msg.start_z = 0.855056862152;
    msg.start_z_units = 189U;
    msg.end_lat = 0.693617740489;
    msg.end_lon = 0.891909800145;
    msg.end_z = 0.229761879914;
    msg.end_z_units = 151U;
    msg.lradius = 0.804304258854;
    msg.flags = 59U;
    msg.x = 0.902822732052;
    msg.y = 0.0948192333618;
    msg.z = 0.168266527936;
    msg.vx = 0.296251959062;
    msg.vy = 0.903813322849;
    msg.vz = 0.139558042337;
    msg.course_error = 0.982988214748;
    msg.eta = 40658U;

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
    msg.setTimeStamp(0.368565623931);
    msg.setSource(22019U);
    msg.setSourceEntity(199U);
    msg.setDestination(16381U);
    msg.setDestinationEntity(253U);
    msg.k = 0.0824570422819;
    msg.m = 0.482647903707;
    msg.n = 0.513452445502;

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
    msg.setTimeStamp(0.542281096293);
    msg.setSource(3003U);
    msg.setSourceEntity(28U);
    msg.setDestination(48916U);
    msg.setDestinationEntity(126U);
    msg.k = 0.208343241925;
    msg.m = 0.415897301224;
    msg.n = 0.77205016892;

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
    msg.setTimeStamp(0.447388245671);
    msg.setSource(39369U);
    msg.setSourceEntity(197U);
    msg.setDestination(54038U);
    msg.setDestinationEntity(185U);
    msg.k = 0.815908153095;
    msg.m = 0.446696522929;
    msg.n = 0.551747935762;

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
    msg.setTimeStamp(0.257425888837);
    msg.setSource(49938U);
    msg.setSourceEntity(82U);
    msg.setDestination(51286U);
    msg.setDestinationEntity(191U);
    msg.p = 0.88655837917;
    msg.i = 0.476677234165;
    msg.d = 0.610763971068;
    msg.a = 0.269834093965;

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
    msg.setTimeStamp(0.911366683307);
    msg.setSource(38375U);
    msg.setSourceEntity(74U);
    msg.setDestination(58658U);
    msg.setDestinationEntity(249U);
    msg.p = 0.754699138144;
    msg.i = 0.53449150471;
    msg.d = 0.229371280761;
    msg.a = 0.0318501435796;

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
    msg.setTimeStamp(0.133327763699);
    msg.setSource(531U);
    msg.setSourceEntity(116U);
    msg.setDestination(46869U);
    msg.setDestinationEntity(234U);
    msg.p = 0.589053221832;
    msg.i = 0.320841182274;
    msg.d = 0.151942182876;
    msg.a = 0.249020428781;

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
    msg.setTimeStamp(0.632879857777);
    msg.setSource(50928U);
    msg.setSourceEntity(241U);
    msg.setDestination(12840U);
    msg.setDestinationEntity(216U);
    msg.op = 156U;

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
    msg.setTimeStamp(0.593892133772);
    msg.setSource(36082U);
    msg.setSourceEntity(198U);
    msg.setDestination(22980U);
    msg.setDestinationEntity(191U);
    msg.op = 4U;

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
    msg.setTimeStamp(0.836178604884);
    msg.setSource(2219U);
    msg.setSourceEntity(233U);
    msg.setDestination(30873U);
    msg.setDestinationEntity(153U);
    msg.op = 157U;

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
    msg.setTimeStamp(0.891546110837);
    msg.setSource(20U);
    msg.setSourceEntity(201U);
    msg.setDestination(18276U);
    msg.setDestinationEntity(171U);
    msg.x = 0.430297570204;
    msg.y = 0.0320292216586;
    msg.z = 0.076722540345;
    msg.vx = 0.592907433033;
    msg.vy = 0.962755735746;
    msg.vz = 0.308066743853;
    msg.ax = 0.781027929828;
    msg.ay = 0.865367939119;
    msg.az = 0.506186228615;
    msg.flags = 22906U;

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
    msg.setTimeStamp(0.360405980825);
    msg.setSource(28946U);
    msg.setSourceEntity(95U);
    msg.setDestination(50539U);
    msg.setDestinationEntity(182U);
    msg.x = 0.189569064684;
    msg.y = 0.383117246903;
    msg.z = 0.860824211829;
    msg.vx = 0.958625053857;
    msg.vy = 0.434601243102;
    msg.vz = 0.733803090775;
    msg.ax = 0.722467556477;
    msg.ay = 0.314018741202;
    msg.az = 0.6774160085;
    msg.flags = 1282U;

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
    msg.setTimeStamp(0.595783108443);
    msg.setSource(64188U);
    msg.setSourceEntity(7U);
    msg.setDestination(47883U);
    msg.setDestinationEntity(41U);
    msg.x = 0.291403259189;
    msg.y = 0.976196998236;
    msg.z = 0.614204738691;
    msg.vx = 0.417608127337;
    msg.vy = 0.515245178259;
    msg.vz = 0.343758602421;
    msg.ax = 0.186541838905;
    msg.ay = 0.419905327127;
    msg.az = 0.678332371671;
    msg.flags = 16908U;

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
    msg.setTimeStamp(0.908203321663);
    msg.setSource(28731U);
    msg.setSourceEntity(125U);
    msg.setDestination(20574U);
    msg.setDestinationEntity(7U);
    msg.value = 0.0557978562853;

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
    msg.setTimeStamp(0.789133091745);
    msg.setSource(24484U);
    msg.setSourceEntity(113U);
    msg.setDestination(37565U);
    msg.setDestinationEntity(157U);
    msg.value = 0.671749130251;

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
    msg.setTimeStamp(0.665664080592);
    msg.setSource(55992U);
    msg.setSourceEntity(125U);
    msg.setDestination(33776U);
    msg.setDestinationEntity(6U);
    msg.value = 0.76179566656;

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
    msg.setTimeStamp(0.721142421561);
    msg.setSource(10835U);
    msg.setSourceEntity(19U);
    msg.setDestination(63798U);
    msg.setDestinationEntity(118U);
    msg.timeout = 51170U;
    msg.lat = 0.64630397125;
    msg.lon = 0.399730410675;
    msg.z = 0.165373950469;
    msg.z_units = 62U;
    msg.speed = 0.390253350193;
    msg.speed_units = 183U;
    msg.roll = 0.317255296401;
    msg.pitch = 0.319494562457;
    msg.yaw = 0.799548141203;
    msg.custom.assign("UGFTIMFESZRQDADXLCTRIZBJNHNFCESHBIEHKLADTFPAOLGWMVBJREIMOJNIVIPQANLDPUUYLPCUCKQDAVWJSFRPGSXLKWPYUEIMCKBKWRFRA");

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
    msg.setTimeStamp(0.764273520255);
    msg.setSource(40581U);
    msg.setSourceEntity(215U);
    msg.setDestination(18840U);
    msg.setDestinationEntity(13U);
    msg.timeout = 22851U;
    msg.lat = 0.237452764055;
    msg.lon = 0.302631549533;
    msg.z = 0.961988584574;
    msg.z_units = 66U;
    msg.speed = 0.427625378031;
    msg.speed_units = 88U;
    msg.roll = 0.236092026656;
    msg.pitch = 0.548739205099;
    msg.yaw = 0.252624274644;
    msg.custom.assign("XJPONRUMUPFXEKWVPUAYOZCIXBAURHOMDEFELQPYZFSIMERQAJDJGRMOYBGUEZFGM");

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
    msg.setTimeStamp(0.512893308951);
    msg.setSource(55221U);
    msg.setSourceEntity(243U);
    msg.setDestination(54843U);
    msg.setDestinationEntity(212U);
    msg.timeout = 54645U;
    msg.lat = 0.958377563349;
    msg.lon = 0.972427537945;
    msg.z = 0.197597495844;
    msg.z_units = 45U;
    msg.speed = 0.32928253078;
    msg.speed_units = 83U;
    msg.roll = 0.425884436925;
    msg.pitch = 0.0963269991457;
    msg.yaw = 0.756631321046;
    msg.custom.assign("CUJARDJYCZLEUNDELFQHRVBROIBOPXFVJTKFAQMNQBUATOGVDKJSSXUVVFOINYSNLVTECNDAHFEUGSALYMHMEPGBPEWOJXUGOLKYBFPG");

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
    msg.setTimeStamp(0.771528173573);
    msg.setSource(43284U);
    msg.setSourceEntity(181U);
    msg.setDestination(19093U);
    msg.setDestinationEntity(46U);
    msg.timeout = 36449U;
    msg.lat = 0.0173447148221;
    msg.lon = 0.0813199417753;
    msg.z = 0.352878674687;
    msg.z_units = 26U;
    msg.speed = 0.430120688313;
    msg.speed_units = 130U;
    msg.duration = 36069U;
    msg.radius = 0.152006269456;
    msg.flags = 74U;
    msg.custom.assign("XYDBJFVWRTYZISBRCMAFEQOQGMCLXYVTDROMLIQDTKJIQSNBSFTPJKAUPMNHGWGWHBOJYGBCPQZIMUACVLIOZENVYPGYWTFUOVNNSEWAWJUXHMLZHSLBKPGOEDYFEGTZURGWWZKXRRYWXLBYPHOKIARFTZYLZHSFBCVIFHHKURPNIUEZAIOMMCNVAC");

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
    msg.setTimeStamp(0.948579416664);
    msg.setSource(19400U);
    msg.setSourceEntity(250U);
    msg.setDestination(43322U);
    msg.setDestinationEntity(219U);
    msg.timeout = 64565U;
    msg.lat = 0.432892818479;
    msg.lon = 0.985529780164;
    msg.z = 0.183857978436;
    msg.z_units = 99U;
    msg.speed = 0.466727598883;
    msg.speed_units = 121U;
    msg.duration = 22242U;
    msg.radius = 0.619039859212;
    msg.flags = 227U;
    msg.custom.assign("ZZANXNGVSUPXHVVWCXRQNEJOMJRKQTPDNDPYGZEMLTABLSZIBPGWUZTHPDXKVEIFTOJCUBREJWHUZLIBFNBRTLHSYYUNCHQERRICMFVFLYJXHLIDQKJLWHNCRKSODHJFTPAKOGMVSFADAUMP");

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
    msg.setTimeStamp(0.596948913932);
    msg.setSource(19245U);
    msg.setSourceEntity(164U);
    msg.setDestination(1827U);
    msg.setDestinationEntity(84U);
    msg.timeout = 52993U;
    msg.lat = 0.547306907353;
    msg.lon = 0.331851410463;
    msg.z = 0.0254826747366;
    msg.z_units = 254U;
    msg.speed = 0.854878465401;
    msg.speed_units = 247U;
    msg.duration = 38029U;
    msg.radius = 0.835767252822;
    msg.flags = 250U;
    msg.custom.assign("SVUGAGGPWRXWBXNQVCZNKOXYTJCJYFXJZUHRHPAMPISUDOLWJHTQRCFHLHGJMJTVBLRAWEAVPKELNPDIZSFEODCDAOKFQLTKUNHSTXMZGQMVUFWWJUXNGNYSOJMCNZVIOEY");

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
    msg.setTimeStamp(0.307081031398);
    msg.setSource(5003U);
    msg.setSourceEntity(80U);
    msg.setDestination(65493U);
    msg.setDestinationEntity(15U);
    msg.custom.assign("WMZPIXUBUOFVNQPAXNSTQUSVFWPJMRIDPYDKWKSCCPXEQGLADTNOZGJPYBXYIGLOURMMYALNDEBHEFECAZHYGHKDXRRZJCDLPGQWJJAVVDBVHBQIIWBPRRHLFTATHKGGPTKDJQECCTQETKIIOZAYQMWCSREKXZADAUGMWJEMVZLTZKYUSLFSYFXOXQMWBTIJOWVCBFZFBMGOKMHXVFVSSNPYHN");

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
    msg.setTimeStamp(0.0273673327519);
    msg.setSource(24333U);
    msg.setSourceEntity(97U);
    msg.setDestination(20349U);
    msg.setDestinationEntity(114U);
    msg.custom.assign("KXRPLMZYIAEKHOXRPQEOSAHGOKOLDZXDJLMHSCYATAIZBFRBRXFKJEJCMHXQFGESRMFBGNUZRDRCASSBOPULIAMYSIMVNOREIBVLEUUAPQMQHJDKHQUOKIHITTNKATNGKWCDGLFOCVCQNGDQKUCTCQJFBMZDVSSEORUPWNCPPFITTUWYMXBXUDHYLWZFYBXALGYUWJAYWVJJYPVLGLFQJXWBWBCNRDZPGVTWNIZZYTDTVVVFQZHN");

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
    msg.setTimeStamp(0.0206551581393);
    msg.setSource(53529U);
    msg.setSourceEntity(105U);
    msg.setDestination(20131U);
    msg.setDestinationEntity(141U);
    msg.custom.assign("HHBMYVROURALAVAGLWDODVHZGFBZKZPFBOOR");

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
    msg.setTimeStamp(0.0181997552915);
    msg.setSource(27407U);
    msg.setSourceEntity(203U);
    msg.setDestination(50644U);
    msg.setDestinationEntity(97U);
    msg.timeout = 34294U;
    msg.lat = 0.00786524358638;
    msg.lon = 0.831588767268;
    msg.z = 0.198298118752;
    msg.z_units = 77U;
    msg.duration = 50569U;
    msg.speed = 0.305645833869;
    msg.speed_units = 169U;
    msg.type = 149U;
    msg.radius = 0.841489997825;
    msg.length = 0.584404115129;
    msg.bearing = 0.973906313881;
    msg.direction = 160U;
    msg.custom.assign("QIDQGLFJCNTAUIQLDSMRYBBADEWPADPMMKAMOITLKQEUHISPDXLKGNKTQKVCWYOICWGBXJECEIRKHASOOGMCPZGXFTTKWOTFYQYCFVYOTO");

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
    msg.setTimeStamp(0.690941521267);
    msg.setSource(9712U);
    msg.setSourceEntity(154U);
    msg.setDestination(6772U);
    msg.setDestinationEntity(93U);
    msg.timeout = 1200U;
    msg.lat = 0.0729873172762;
    msg.lon = 0.0784110399731;
    msg.z = 0.630085282552;
    msg.z_units = 210U;
    msg.duration = 62949U;
    msg.speed = 0.571489240062;
    msg.speed_units = 89U;
    msg.type = 226U;
    msg.radius = 0.199707510311;
    msg.length = 0.154306346466;
    msg.bearing = 0.453882527834;
    msg.direction = 108U;
    msg.custom.assign("TXGSDJEUQWCZEVFYVZVMARJTWWGGBSVJPZEFXDUUQYOAKTFLRKEPMBQPZWOCDUFCUNWYCHLNCDD");

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
    msg.setTimeStamp(0.947800477816);
    msg.setSource(39482U);
    msg.setSourceEntity(215U);
    msg.setDestination(57518U);
    msg.setDestinationEntity(119U);
    msg.timeout = 61960U;
    msg.lat = 0.0985128841836;
    msg.lon = 0.183269294277;
    msg.z = 0.913670465078;
    msg.z_units = 97U;
    msg.duration = 16887U;
    msg.speed = 0.201012315203;
    msg.speed_units = 8U;
    msg.type = 183U;
    msg.radius = 0.780414657145;
    msg.length = 0.14870918267;
    msg.bearing = 0.351823049625;
    msg.direction = 189U;
    msg.custom.assign("JCIBRATIMPKTRFAXDQLZCFPXMUUQBANMJESUWBITPEYXZCGOVNZQLFOWHSGNHSVAFQOJVBXHRQEXGAYSTNCUKEUTUKWCDTQPIWLYWLFYPPOIVSNENRDRNQYZOZPUROOVDNKSYVHTZLKSHHOMGEIRBHREFCWUQKVYAPAOPMWFHLKDYOWXKRMSNQDSEBIMJJIXIWVVBGLUTRAMICJPGUZTGCLMMZDFLEFBCHWA");

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
    msg.setTimeStamp(0.73560113248);
    msg.setSource(36303U);
    msg.setSourceEntity(132U);
    msg.setDestination(31625U);
    msg.setDestinationEntity(192U);
    msg.duration = 58098U;
    msg.custom.assign("BBYROLSZUDQDFKUKBIUTOSPA");

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
    msg.setTimeStamp(0.284710572074);
    msg.setSource(56494U);
    msg.setSourceEntity(59U);
    msg.setDestination(44353U);
    msg.setDestinationEntity(31U);
    msg.duration = 6198U;
    msg.custom.assign("KFOAVCUSWJIWYUKIWTWPFYVFHOPJYLQCHTBPFXOWLCMZBQREYHOCSPLNGTNVZANZRMFQIJHSBXTSQMGRASQBDUCGSVEQNWKLYJMBXBXGNYSKUDQECZUAUPOMRLFCGKGIWNZPJPRFDAOXUYFVOYITDPTKEHVIDEBUMHESXDTKMQKTJIBWUOOQTVVRDCWFSYLKMENDSTVZXZLG");

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
    msg.setTimeStamp(0.102167218423);
    msg.setSource(33211U);
    msg.setSourceEntity(57U);
    msg.setDestination(57418U);
    msg.setDestinationEntity(25U);
    msg.duration = 37503U;
    msg.custom.assign("KNGSCFETVEXFNFTVYZEILTJWPPIRTJINRIYIEBUDXCRHLGUSQHZBEMVLCQBAOGUSIHTDRZGCCXW");

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
    msg.setTimeStamp(0.465618581822);
    msg.setSource(15648U);
    msg.setSourceEntity(236U);
    msg.setDestination(3803U);
    msg.setDestinationEntity(127U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.892577031558;
    msg.control.set(tmp_msg_0);
    msg.duration = 49996U;
    msg.custom.assign("NWDIBKRHPVFHDOYGYZOCUPWIVNPCZWJWADPRMIBFGTSNQKGOCVSCDOFBZTMBLHKBKOVYUXLWUQGJFYXKS");

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
    msg.setTimeStamp(0.305450727892);
    msg.setSource(30051U);
    msg.setSourceEntity(3U);
    msg.setDestination(52725U);
    msg.setDestinationEntity(42U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 315955994U;
    tmp_msg_0.start_lat = 0.959964697363;
    tmp_msg_0.start_lon = 0.042397663621;
    tmp_msg_0.start_z = 0.0861405566681;
    tmp_msg_0.start_z_units = 190U;
    tmp_msg_0.end_lat = 0.562285306375;
    tmp_msg_0.end_lon = 0.623420094876;
    tmp_msg_0.end_z = 0.261486027405;
    tmp_msg_0.end_z_units = 151U;
    tmp_msg_0.speed = 0.706935700454;
    tmp_msg_0.speed_units = 172U;
    tmp_msg_0.lradius = 0.979091265472;
    tmp_msg_0.flags = 84U;
    msg.control.set(tmp_msg_0);
    msg.duration = 27856U;
    msg.custom.assign("VRVPSOIZBEPATIKPVGMDITQSGFPENTQOGLUMUBSXYBGBSBWKVARDEKHXTTZJBNQCRKYTNCPNZIRSLDODZAHBSMCDIHCYNTLRSLYSJUPDLGUJOMACPTCLJDUFMYCNVWFIVFNKIJBXYZWSELGZJKACWZIHXAXHWEJRQMQFWOLAFZTVOXRHXHEKUAPGRKMDWUPFJ");

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
    msg.setTimeStamp(0.99039354453);
    msg.setSource(36923U);
    msg.setSourceEntity(20U);
    msg.setDestination(33729U);
    msg.setDestinationEntity(19U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.938919769594;
    msg.control.set(tmp_msg_0);
    msg.duration = 9764U;
    msg.custom.assign("QELHPMBRVLLLMVRPOKHGIFHNUKKGQDJMAEYYZDNZWTQPOGLZWSXYBXBGFLOCGOCCBVDVKLTOSSDVEIMKDIKGNGYPDSXFNCUDJEKLIMHOZCCRHCNSPFOL");

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
    msg.setTimeStamp(0.251094018549);
    msg.setSource(18863U);
    msg.setSourceEntity(138U);
    msg.setDestination(3969U);
    msg.setDestinationEntity(68U);
    msg.timeout = 8743U;
    msg.lat = 0.813680381167;
    msg.lon = 0.937253997874;
    msg.z = 0.691992323365;
    msg.z_units = 78U;
    msg.speed = 0.269138433883;
    msg.speed_units = 197U;
    msg.bearing = 0.284265564744;
    msg.cross_angle = 0.352856827777;
    msg.width = 0.674636606917;
    msg.length = 0.733038534924;
    msg.hstep = 0.440198078081;
    msg.coff = 35U;
    msg.alternation = 222U;
    msg.flags = 31U;
    msg.custom.assign("XODBQYGZCQBVSCOFUOWZEWQZJAVSUHYWLPTFWHNPNDOTHMXKQMBRIWEXWPPBOMCRLPYSGHFKLHLGAXMIZPCEAVSSJWZMGMDAJYYBUVYXZDB");

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
    msg.setTimeStamp(0.878610322249);
    msg.setSource(57405U);
    msg.setSourceEntity(34U);
    msg.setDestination(647U);
    msg.setDestinationEntity(33U);
    msg.timeout = 35358U;
    msg.lat = 0.912339737655;
    msg.lon = 0.799388154599;
    msg.z = 0.561357998103;
    msg.z_units = 12U;
    msg.speed = 0.272800394564;
    msg.speed_units = 17U;
    msg.bearing = 0.0878417769341;
    msg.cross_angle = 0.631773011682;
    msg.width = 0.757781157954;
    msg.length = 0.123688186164;
    msg.hstep = 0.682249872434;
    msg.coff = 130U;
    msg.alternation = 86U;
    msg.flags = 99U;
    msg.custom.assign("QZVGVKTTMJHDKMEXGPHPLFUZCTJJUFXCBWYGJNHQYSFDQAQCHMPYIVPSRLIXBLGPSVBOKQXCXUTGCDIEECZQMFTUCNNBSSTDTWVYKVMQXPOIAQGGTEPDTECLZVJLBYYAJVKTJEJZDSASERCRHPYUNXEUYFEAPVZLLQFLBKZAHRWIWHRAMSDNICHRVMDDUKBRGZKXLDOZUWSKKOIUYNWP");

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
    msg.setTimeStamp(0.356134467683);
    msg.setSource(13577U);
    msg.setSourceEntity(230U);
    msg.setDestination(61861U);
    msg.setDestinationEntity(141U);
    msg.timeout = 28034U;
    msg.lat = 0.907041740928;
    msg.lon = 0.696545644658;
    msg.z = 0.62271400527;
    msg.z_units = 20U;
    msg.speed = 0.770507943094;
    msg.speed_units = 212U;
    msg.bearing = 0.522137671325;
    msg.cross_angle = 0.909150913017;
    msg.width = 0.837424801752;
    msg.length = 0.700261952817;
    msg.hstep = 0.380921269506;
    msg.coff = 120U;
    msg.alternation = 192U;
    msg.flags = 112U;
    msg.custom.assign("HQQJUZWHDSXRRSTJVVOMUCLXEZMPGMLPXHESPEUPPUUOMLUTITTCFOCAVFCTFPQYUKXJTUFLBGCTCRQBJLRLDBKOSCGEPHFVYNPFONVFAIZKWUVWZINMXSAKYWJKZSGIQADAAXPGQVIOGHHQRZOSXJQLEAEGWERKKYKDCRVSIYDZIXSKAFDVMYZNDNIYNTUTZYQWCWCMHEJZHYBIXMNEWBBJBLABHPTYLDBJVODOLFRXG");

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
    msg.setTimeStamp(0.658631500417);
    msg.setSource(57105U);
    msg.setSourceEntity(64U);
    msg.setDestination(7314U);
    msg.setDestinationEntity(234U);
    msg.timeout = 23160U;
    msg.lat = 0.148717003519;
    msg.lon = 0.341510861223;
    msg.z = 0.753337986521;
    msg.z_units = 184U;
    msg.speed = 0.25366466294;
    msg.speed_units = 148U;
    msg.custom.assign("MIEVYQLFDRMPBBTYAYVBRPFEYUIOEXCINDLYETRACNYBTDAHKQOOELOMWKWFPFPHSARXQMUNTKINRKQMCNIZDEZILKIWKWAWHGZTWYSJXKRTJJQDMSPBAAPCOVRCRYWAXSVIKEHFWUHDCWPEJLOUHIETGSPJGSHFDUQVOAZNJVUOMUVXHYTJQBJXCZZBNPKFOFSFVEQVISZGTNHGBLULWCSUGBQKXQDCNLGXDRMZXUY");

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
    msg.setTimeStamp(0.471430757279);
    msg.setSource(4570U);
    msg.setSourceEntity(105U);
    msg.setDestination(5468U);
    msg.setDestinationEntity(39U);
    msg.timeout = 29799U;
    msg.lat = 0.432736584962;
    msg.lon = 0.142277851113;
    msg.z = 0.345098218071;
    msg.z_units = 10U;
    msg.speed = 0.907409355466;
    msg.speed_units = 135U;
    msg.custom.assign("HXGOCJVGNIMERYMPALTAVMWYTMKWSHEEQOCBKGKMLJPXBQYNAZGFLKMZPNXUNGLENJGJFCUCOHEKQFBSTZSOMMN");

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
    msg.setTimeStamp(0.208464153656);
    msg.setSource(44616U);
    msg.setSourceEntity(252U);
    msg.setDestination(30477U);
    msg.setDestinationEntity(79U);
    msg.timeout = 10294U;
    msg.lat = 0.899069018687;
    msg.lon = 0.890332784615;
    msg.z = 0.804276797814;
    msg.z_units = 122U;
    msg.speed = 0.263286995831;
    msg.speed_units = 0U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.561742128977;
    tmp_msg_0.y = 0.899641170086;
    tmp_msg_0.z = 0.473275503026;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QKOZUAFBHHWTPHVGYHNVRGWYFMDJWWDOEVLNFYOZRLXANTZCQCOETWFSJYSAMHPJXXQSLGKEWUYETXPLTXAVIJVHHCWTRUMPIQRKIDYSGBYRFQMZAPCIBBTNIPEPDAGGYRLNZAPXVUIJZNCBXCZXASTOVGMDPXUOKDOMVQBEHLKNKMYJRHRIMCXKOWFUSMBQSUUINSVVZYGJEAEMQEK");

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
    msg.setTimeStamp(0.297379209423);
    msg.setSource(1129U);
    msg.setSourceEntity(69U);
    msg.setDestination(13535U);
    msg.setDestinationEntity(10U);
    msg.x = 0.0110228168649;
    msg.y = 0.623416380088;
    msg.z = 0.220905367727;

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
    msg.setTimeStamp(0.321004941103);
    msg.setSource(40115U);
    msg.setSourceEntity(98U);
    msg.setDestination(26338U);
    msg.setDestinationEntity(54U);
    msg.x = 0.196778445706;
    msg.y = 0.00380165174213;
    msg.z = 0.847983182762;

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
    msg.setTimeStamp(0.811054383631);
    msg.setSource(41551U);
    msg.setSourceEntity(226U);
    msg.setDestination(15634U);
    msg.setDestinationEntity(131U);
    msg.x = 0.598144612381;
    msg.y = 0.90970919166;
    msg.z = 0.557368548273;

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
    msg.setTimeStamp(0.15740749519);
    msg.setSource(46025U);
    msg.setSourceEntity(227U);
    msg.setDestination(39314U);
    msg.setDestinationEntity(224U);
    msg.timeout = 29386U;
    msg.lat = 0.306198839983;
    msg.lon = 0.44418312645;
    msg.z = 0.0721549136826;
    msg.z_units = 213U;
    msg.amplitude = 0.656170249856;
    msg.pitch = 0.277237864044;
    msg.speed = 0.725318349387;
    msg.speed_units = 107U;
    msg.custom.assign("SPZKDKUQKIJOZMNIUCBNANITNIJAZMYDYOAGCPZCMVCXSLTTIVPZTVEBXDYAQ");

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
    msg.setTimeStamp(0.864250127975);
    msg.setSource(36551U);
    msg.setSourceEntity(18U);
    msg.setDestination(45727U);
    msg.setDestinationEntity(177U);
    msg.timeout = 25045U;
    msg.lat = 0.153768266462;
    msg.lon = 0.631207418656;
    msg.z = 0.92903371273;
    msg.z_units = 218U;
    msg.amplitude = 0.182359914358;
    msg.pitch = 0.745357507138;
    msg.speed = 0.171690664802;
    msg.speed_units = 153U;
    msg.custom.assign("LEFQUKXHUTWPZQYMXGLLCYEVUACALBPZKNOIO");

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
    msg.setTimeStamp(0.775527068977);
    msg.setSource(43159U);
    msg.setSourceEntity(245U);
    msg.setDestination(47859U);
    msg.setDestinationEntity(71U);
    msg.timeout = 57651U;
    msg.lat = 0.0366026530141;
    msg.lon = 0.303622648771;
    msg.z = 0.211617837701;
    msg.z_units = 184U;
    msg.amplitude = 0.20474693717;
    msg.pitch = 0.0542814774521;
    msg.speed = 0.724335765284;
    msg.speed_units = 15U;
    msg.custom.assign("FSWRGHYGTXDZAIJDQSTHVNHOYZQFBQFKXIPWCSQFWMBRUHDRRGTXWJCKQYVYESKNAXZRHCGLDXYDBNAUNRKLZVKENKGFMCIXDILCVBIJNQAALGQWUFPXHSEZOPZEBGGLYSOGLSAOSILYVNKKUTDPPYANPPIUTDUZMBCPEBXNFSMWLTHHSTCTAKNETEKWCWOWFJZZUJXOJIATYUMWFDODLGRVIQJVJYFMZUVJMOEOLVOMHPMARBBXMHQREJ");

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
    msg.setTimeStamp(0.13144216183);
    msg.setSource(45909U);
    msg.setSourceEntity(140U);
    msg.setDestination(54601U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.642646157741);
    msg.setSource(51977U);
    msg.setSourceEntity(59U);
    msg.setDestination(43948U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.942304215967);
    msg.setSource(25350U);
    msg.setSourceEntity(73U);
    msg.setDestination(29212U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.312681023375);
    msg.setSource(48081U);
    msg.setSourceEntity(213U);
    msg.setDestination(14539U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.896515259397;
    msg.lon = 0.13787851822;
    msg.z = 0.898927036115;
    msg.z_units = 46U;
    msg.radius = 0.888626195692;
    msg.duration = 95U;
    msg.speed = 0.584746723972;
    msg.speed_units = 236U;
    msg.custom.assign("YHQDEURCGXFVJNZZSOPIMXVABDUDHERXWVQBOSQZGPALARPIBDAMRRBHCTHXCDGQIJOVKEMIIJBKZUKWZNXLWHMWJGSPVYBGYNGSBHMLPBTDLKFDZGCLJMQOTXNMVFOWPSUVEWWIRYIEMNLFNLSCFQSHUWGAIVSKYPCJYHBYENKHBYRZCGNTFEHC");

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
    msg.setTimeStamp(0.79943557367);
    msg.setSource(9088U);
    msg.setSourceEntity(11U);
    msg.setDestination(41049U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.453648216905;
    msg.lon = 0.281674459465;
    msg.z = 0.806190646312;
    msg.z_units = 88U;
    msg.radius = 0.413897962096;
    msg.duration = 28923U;
    msg.speed = 0.249471222435;
    msg.speed_units = 119U;
    msg.custom.assign("JDNELBPRIMEDIAXLRFUCUBFYIOPQMFQGRLTSBWAHKOVPINIAX");

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
    msg.setTimeStamp(0.635544304455);
    msg.setSource(61355U);
    msg.setSourceEntity(227U);
    msg.setDestination(10200U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.0890023489774;
    msg.lon = 0.222934100221;
    msg.z = 0.650475835628;
    msg.z_units = 63U;
    msg.radius = 0.346501905771;
    msg.duration = 26077U;
    msg.speed = 0.604603009057;
    msg.speed_units = 238U;
    msg.custom.assign("FQHEJZEALDUGSKGLEMWKPXICCZW");

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
    msg.setTimeStamp(0.708278310474);
    msg.setSource(12673U);
    msg.setSourceEntity(189U);
    msg.setDestination(10915U);
    msg.setDestinationEntity(246U);
    msg.timeout = 53569U;
    msg.flags = 82U;
    msg.lat = 0.429856944553;
    msg.lon = 0.739424940029;
    msg.start_z = 0.306910820924;
    msg.start_z_units = 173U;
    msg.end_z = 0.107318930553;
    msg.end_z_units = 31U;
    msg.radius = 0.0882181785895;
    msg.speed = 0.911669678017;
    msg.speed_units = 206U;
    msg.custom.assign("UUHFBIZJZFIKMUERTIEWLQINHNQSYPTEUUYUQAUMYXFNQGYDUZVBDMJBYBNRCAHWLSRJZLOXVDBSCVQXPFGOAJLGUPWKJGNPMXRAQBOWFBTNVSGPHWEJQRKGPOKJIYBEMHYSVSYORDSSVTLZEFGXHVDIPGZHJVJMVKQOMTADTKEIWKCRXCTNHQEOXCTCMRZZHTBYAPXKXZWIUPANSKGLKDOWXACFNCCEFIJNRFHLLLAWEDQYCRTLVGFBWZIDSP");

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
    msg.setTimeStamp(0.221146463648);
    msg.setSource(53064U);
    msg.setSourceEntity(32U);
    msg.setDestination(39963U);
    msg.setDestinationEntity(69U);
    msg.timeout = 40934U;
    msg.flags = 248U;
    msg.lat = 0.259768991894;
    msg.lon = 0.4877499191;
    msg.start_z = 0.873233326742;
    msg.start_z_units = 50U;
    msg.end_z = 0.928511969082;
    msg.end_z_units = 26U;
    msg.radius = 0.81061074065;
    msg.speed = 0.469303198379;
    msg.speed_units = 55U;
    msg.custom.assign("HOKNBYUDAZJBMVUFZ");

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
    msg.setTimeStamp(0.234131996053);
    msg.setSource(45559U);
    msg.setSourceEntity(39U);
    msg.setDestination(32337U);
    msg.setDestinationEntity(142U);
    msg.timeout = 4155U;
    msg.flags = 42U;
    msg.lat = 0.983047601154;
    msg.lon = 0.535912940394;
    msg.start_z = 0.323710511871;
    msg.start_z_units = 3U;
    msg.end_z = 0.957059807217;
    msg.end_z_units = 244U;
    msg.radius = 0.422721305815;
    msg.speed = 0.428396316481;
    msg.speed_units = 154U;
    msg.custom.assign("YBHZIGZJJINBUGIVZCQOOTECPXVLZBCUWFCEQURMERKFUHCMDWXLKYZRKJXPEYVZIJFTKQCULCW");

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
    msg.setTimeStamp(0.887539738981);
    msg.setSource(23864U);
    msg.setSourceEntity(161U);
    msg.setDestination(49189U);
    msg.setDestinationEntity(41U);
    msg.timeout = 59568U;
    msg.lat = 0.483494627684;
    msg.lon = 0.929038330231;
    msg.z = 0.000218136323246;
    msg.z_units = 209U;
    msg.speed = 0.748316119362;
    msg.speed_units = 237U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.000469591819003;
    tmp_msg_0.y = 0.020293231553;
    tmp_msg_0.z = 0.91996029744;
    tmp_msg_0.t = 0.0504444526309;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OYJNSJTWSJODKVRJDVZNMJTAJSGEMBUVTUAZVCRAUYOA");

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
    msg.setTimeStamp(0.473365204444);
    msg.setSource(60997U);
    msg.setSourceEntity(173U);
    msg.setDestination(42984U);
    msg.setDestinationEntity(192U);
    msg.timeout = 4925U;
    msg.lat = 0.0396656898549;
    msg.lon = 0.259098902905;
    msg.z = 0.505018269489;
    msg.z_units = 21U;
    msg.speed = 0.244847542438;
    msg.speed_units = 121U;
    msg.custom.assign("QVBJRQIQMUPPEVJBENLMKTMZEUBYNTIDXAWROMLLHEWFTQZCUZBCOMFQWNFSCTVGXYLGQZXGASZRHMAHYOVKZPRQVNASVRDHDWNYEBFYKVGSYIOTYQLOOFCYBHZHMARJWDEUZOUKTESPQPCIHFIMVGPMTNRSTFXDGBDXCGNUBFWRGLXUWLJKKKRDIEPDTHNRSD");

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
    msg.setTimeStamp(0.223299237404);
    msg.setSource(58492U);
    msg.setSourceEntity(238U);
    msg.setDestination(51473U);
    msg.setDestinationEntity(207U);
    msg.timeout = 56141U;
    msg.lat = 0.405197898932;
    msg.lon = 0.325678338445;
    msg.z = 0.394943671597;
    msg.z_units = 69U;
    msg.speed = 0.0765327987968;
    msg.speed_units = 184U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.967352711716;
    tmp_msg_0.y = 0.285567027011;
    tmp_msg_0.z = 0.179546925845;
    tmp_msg_0.t = 0.382317766315;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LTDHKZYPEJHAVJFBVYNPNDZMBMQFTRMTBEIUFSDHGNRQBXSJGPWYLS");

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
    msg.setTimeStamp(0.0146410989073);
    msg.setSource(35633U);
    msg.setSourceEntity(28U);
    msg.setDestination(27357U);
    msg.setDestinationEntity(79U);
    msg.x = 0.0523969568093;
    msg.y = 0.814806451168;
    msg.z = 0.989194467016;
    msg.t = 0.380907569694;

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
    msg.setTimeStamp(0.622256841971);
    msg.setSource(19853U);
    msg.setSourceEntity(144U);
    msg.setDestination(890U);
    msg.setDestinationEntity(41U);
    msg.x = 0.422136784708;
    msg.y = 0.733965100884;
    msg.z = 0.404924426325;
    msg.t = 0.51485997188;

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
    msg.setTimeStamp(0.296329211864);
    msg.setSource(61332U);
    msg.setSourceEntity(177U);
    msg.setDestination(32308U);
    msg.setDestinationEntity(164U);
    msg.x = 0.471006881582;
    msg.y = 0.577288989791;
    msg.z = 0.31618029744;
    msg.t = 0.562298790948;

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
    msg.setTimeStamp(0.274632693037);
    msg.setSource(31252U);
    msg.setSourceEntity(110U);
    msg.setDestination(12663U);
    msg.setDestinationEntity(196U);
    msg.timeout = 20498U;
    msg.name.assign("JLFEYYVHMTXFHOAVMNWBRKYSGJNWQEPKPHCDTCMWIEWSCPIEIFLXDAHULBZUXYUIBUCBVWWXQTWFRVOOHXMEWPSLLPFYHQKJJTJDAJSKIZXGDQIORZGHRKBMRRGJNNNVKUMELUTLBKGDFIUNPDRXXNMAYVONEQRVGACBYPCGFMBAZAQSTOULWAADUKEBHSZYCJKLSOTBYZOCPTCPJGDHZPQGVXKTQD");
    msg.custom.assign("KZNQHFTSJLIHOXALUICHQMPAFYLVPVECYWTHEFUKCRJJVNYDQOSKVIITHVNUGZORNOIVYEXRTSTKYPBKRLAYIFYMGSAZEGZBGNHTOBDLQLJKFYCMXOXPWAFZZBCBUVPLDCJSWJFDGKULTUUIGXUOZAXMIGUMHDILTZTTWFHRVWDIJNNQDMNPHWCAMEPNRGWXKMZSYBKEWMEQKQADBEGSORQNWHBABPEXFWXUJSQ");

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
    msg.setTimeStamp(0.607790232743);
    msg.setSource(17194U);
    msg.setSourceEntity(99U);
    msg.setDestination(3962U);
    msg.setDestinationEntity(16U);
    msg.timeout = 1735U;
    msg.name.assign("EXQDYEEFEMFGDNLQPNBNLJHRVAXFNOVLIBIQFMOAMRIDGNKYNRSPRJGSMHNLOUUKUBTGJGCYTAYJORUDBFMFXCMVSDNGTCCMZPLOXZIVHXIXQLTTGZAIJSXBLMYRA");
    msg.custom.assign("DTWLQUMYNKSDMVXQDPAQDSBVLKUSSIQNLGYLDSKIVZUFYRTGVGMZECNKVWSCFHROARBOWAKDLTHHMNSWQKZXIAVZMFJUXPTHEHNYVOVMO");

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
    msg.setTimeStamp(0.00341998793869);
    msg.setSource(51326U);
    msg.setSourceEntity(250U);
    msg.setDestination(42605U);
    msg.setDestinationEntity(81U);
    msg.timeout = 47527U;
    msg.name.assign("QWHOVMKNLXZUAPQGUZUCIBLPKHWWXSAKGDIPYGBPRQWMRAXUFP");
    msg.custom.assign("LKHLMWSBLGEIMPKMGMZORQZLWNYQSYPNFOVJURQEOWBJVMYYVWMPYXDATUMFEBXNFOHFTDGPPNTGUVXBQACPUOLOCUTCVSXTDCNFPKCZQGOYKQWFIDRCRKRJAMICFCWEHKQHRKLZTJL");

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
    msg.setTimeStamp(0.443761109565);
    msg.setSource(9207U);
    msg.setSourceEntity(129U);
    msg.setDestination(33892U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.697444546869;
    msg.lon = 0.271551695672;
    msg.z = 0.981346067981;
    msg.z_units = 240U;
    msg.speed = 0.790686474073;
    msg.speed_units = 209U;
    msg.start_time = 0.106833017249;
    msg.custom.assign("OLGZLJUGZLDVFNIWFSZAJCMKHXFFZAAYCYERGDVEWJHXMOSAIKTHQTDLSLKLBGCFQMLYXJUTTTOPPDCMFCMMIFJPKSIJWTNIMYVIONDPHFQPVTQHUWHBUXUKCZADJELJLOEGSBRWVXYZZFYQBDAPNEGDXEXWMZQNTSCZPBSCCIBOJUVRORBJAH");

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
    msg.setTimeStamp(0.648068226178);
    msg.setSource(56196U);
    msg.setSourceEntity(77U);
    msg.setDestination(20015U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.485526556024;
    msg.lon = 0.601354317754;
    msg.z = 0.742731053309;
    msg.z_units = 233U;
    msg.speed = 0.277192175587;
    msg.speed_units = 12U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0932182959472;
    tmp_msg_0.y = 0.542705306915;
    tmp_msg_0.z = 0.145127911461;
    tmp_msg_0.t = 0.882084712181;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 23772U;
    tmp_msg_1.off_x = 0.420112234957;
    tmp_msg_1.off_y = 0.326629274317;
    tmp_msg_1.off_z = 0.867811733409;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.896191766861;
    msg.custom.assign("LNXWPVEZWOGWESXGVMEYGGRJHONCOVCHNFZOJIBSYEKPFZDRWNNHZYKWTKHLIYCUUTXOFXELVHLCYZBNJMFLNLOKENXBVRCLESJIADFNOKHYIQLTDFTIJQAGTQDBLUYDQZAKBHZKOQVUMWYADXSPFSHMVJPUZMMPOPETBWRSEJCMUKRVATSZIQS");

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
    msg.setTimeStamp(0.516798275098);
    msg.setSource(58047U);
    msg.setSourceEntity(92U);
    msg.setDestination(12625U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.389271273202;
    msg.lon = 0.757840544146;
    msg.z = 0.999164635936;
    msg.z_units = 95U;
    msg.speed = 0.644611735613;
    msg.speed_units = 28U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.967584156166;
    tmp_msg_0.y = 0.94926849635;
    tmp_msg_0.z = 0.174004915377;
    tmp_msg_0.t = 0.121719960898;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 25068U;
    tmp_msg_1.off_x = 0.060259684006;
    tmp_msg_1.off_y = 0.284428790549;
    tmp_msg_1.off_z = 0.525260008379;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.460221438415;
    msg.custom.assign("JVTSJRGPCKCBXGLYNZXSJWKDMKYXNMZIPOKZBIMYJWFIIAYWQYZZTJZHUSBTNOWUSKTGDSVGMIEVPHVUVLLOHSTVOHVIEIHCLQJRDJPGIESBRPOCIAZPMADICBRNYEDHBFTSLXTHDQQYFXDWFMXPKRQPFEUOCOGOLJREPEKECQVMYTAANGXCLQFFUMRAWEHNTZAUBDHXAGXSKNFQNUJNCYLZOZAHBLERFWCKLBDFXTJ");

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
    msg.setTimeStamp(0.384164401541);
    msg.setSource(50726U);
    msg.setSourceEntity(93U);
    msg.setDestination(39629U);
    msg.setDestinationEntity(176U);
    msg.vid = 36266U;
    msg.off_x = 0.54353122158;
    msg.off_y = 0.152331945649;
    msg.off_z = 0.554637399254;

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
    msg.setTimeStamp(0.195546067683);
    msg.setSource(58069U);
    msg.setSourceEntity(79U);
    msg.setDestination(9755U);
    msg.setDestinationEntity(9U);
    msg.vid = 34014U;
    msg.off_x = 0.790368008609;
    msg.off_y = 0.803683292555;
    msg.off_z = 0.965366162414;

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
    msg.setTimeStamp(0.0332898857292);
    msg.setSource(24215U);
    msg.setSourceEntity(176U);
    msg.setDestination(61007U);
    msg.setDestinationEntity(29U);
    msg.vid = 60549U;
    msg.off_x = 0.299427551048;
    msg.off_y = 0.931954059772;
    msg.off_z = 0.980798445256;

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
    msg.setTimeStamp(0.886476802336);
    msg.setSource(36040U);
    msg.setSourceEntity(148U);
    msg.setDestination(56909U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.927382573717);
    msg.setSource(20806U);
    msg.setSourceEntity(169U);
    msg.setDestination(48062U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.585298930668);
    msg.setSource(4559U);
    msg.setSourceEntity(253U);
    msg.setDestination(44674U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.435543345248);
    msg.setSource(2011U);
    msg.setSourceEntity(71U);
    msg.setDestination(31816U);
    msg.setDestinationEntity(133U);
    msg.mid = 12849U;

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
    msg.setTimeStamp(0.509833142623);
    msg.setSource(11537U);
    msg.setSourceEntity(82U);
    msg.setDestination(25978U);
    msg.setDestinationEntity(77U);
    msg.mid = 54735U;

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
    msg.setTimeStamp(0.622050559094);
    msg.setSource(8578U);
    msg.setSourceEntity(153U);
    msg.setDestination(13950U);
    msg.setDestinationEntity(121U);
    msg.mid = 37692U;

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
    msg.setTimeStamp(0.12222355441);
    msg.setSource(33176U);
    msg.setSourceEntity(196U);
    msg.setDestination(35697U);
    msg.setDestinationEntity(205U);
    msg.state = 56U;
    msg.eta = 271U;
    msg.info.assign("NKESDJSOWUXADYLIKVCHDRJFBISLPDYJMAJGOECWKZLMTYIVLGQKFPDCWQOFADHWBONHUZHUUHHYSZCYMODHZTRHDMIXDEAKKUGPXWUFNIGAVIDRQBGVGUPGYBTC");

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
    msg.setTimeStamp(0.308572636211);
    msg.setSource(1733U);
    msg.setSourceEntity(245U);
    msg.setDestination(33614U);
    msg.setDestinationEntity(172U);
    msg.state = 146U;
    msg.eta = 35407U;
    msg.info.assign("WHHWEWQUSJSDJQWDMZBAZGSDANCAZPEFGGRJWTVLRQPUPHDLBXFYJMTLHWCYEZZAFDHIIRMBBKYUXDNUFULVGKGCQMTHPESOAQVDISWUZBIJIRPEISATTFFYLONOFWXJNVLOSSOOCBLXXVREYVKYJORZXOLBU");

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
    msg.setTimeStamp(0.506147337728);
    msg.setSource(61741U);
    msg.setSourceEntity(164U);
    msg.setDestination(55677U);
    msg.setDestinationEntity(7U);
    msg.state = 144U;
    msg.eta = 39167U;
    msg.info.assign("IBKCWRUJVWXRDEKWQZAMMHNPCTVPEAXRRDVFRROGOJLKUCXPTZHWBBXSDYMGXELGBNTHABULPRWGSJIJNKGXLSTFQQHQOAUJHXMVCEBYZPHWOFKYVSKWBFZCNKSZSLGDDZZYSPNHMFNNQJEGONDVGYEPSISBWMWOKYTSBALCBF");

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
    msg.setTimeStamp(0.811350084397);
    msg.setSource(14823U);
    msg.setSourceEntity(107U);
    msg.setDestination(42152U);
    msg.setDestinationEntity(58U);
    msg.system = 11021U;
    msg.duration = 15576U;
    msg.speed = 0.753102726376;
    msg.speed_units = 27U;
    msg.x = 0.313909401789;
    msg.y = 0.838828342392;
    msg.z = 0.554150379147;
    msg.z_units = 212U;

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
    msg.setTimeStamp(0.249941247199);
    msg.setSource(33846U);
    msg.setSourceEntity(96U);
    msg.setDestination(6569U);
    msg.setDestinationEntity(197U);
    msg.system = 16437U;
    msg.duration = 4800U;
    msg.speed = 0.828802845775;
    msg.speed_units = 186U;
    msg.x = 0.259655648009;
    msg.y = 0.229220627252;
    msg.z = 0.992420025822;
    msg.z_units = 116U;

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
    msg.setTimeStamp(0.131795405494);
    msg.setSource(21004U);
    msg.setSourceEntity(130U);
    msg.setDestination(6788U);
    msg.setDestinationEntity(91U);
    msg.system = 52592U;
    msg.duration = 35578U;
    msg.speed = 0.439821973748;
    msg.speed_units = 161U;
    msg.x = 0.244125745844;
    msg.y = 0.868742727483;
    msg.z = 0.531086973644;
    msg.z_units = 27U;

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
    msg.setTimeStamp(0.712463126502);
    msg.setSource(61902U);
    msg.setSourceEntity(181U);
    msg.setDestination(12088U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.805392665116;
    msg.lon = 0.734758031445;
    msg.speed = 0.0180975287882;
    msg.speed_units = 197U;
    msg.duration = 37285U;
    msg.sys_a = 21474U;
    msg.sys_b = 59013U;
    msg.move_threshold = 0.729585046378;

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
    msg.setTimeStamp(0.508745369228);
    msg.setSource(62355U);
    msg.setSourceEntity(224U);
    msg.setDestination(26560U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.439444680457;
    msg.lon = 0.401880853413;
    msg.speed = 0.754146475946;
    msg.speed_units = 195U;
    msg.duration = 26811U;
    msg.sys_a = 48152U;
    msg.sys_b = 34918U;
    msg.move_threshold = 0.0110565516309;

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
    msg.setTimeStamp(0.630828648603);
    msg.setSource(60015U);
    msg.setSourceEntity(251U);
    msg.setDestination(43264U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.269883211736;
    msg.lon = 0.522142762411;
    msg.speed = 0.77673952531;
    msg.speed_units = 63U;
    msg.duration = 62268U;
    msg.sys_a = 46754U;
    msg.sys_b = 6447U;
    msg.move_threshold = 0.26098696854;

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
    msg.setTimeStamp(0.368222064933);
    msg.setSource(30114U);
    msg.setSourceEntity(24U);
    msg.setDestination(63731U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.664351840605;
    msg.lon = 0.540413909089;
    msg.z = 0.48550904894;
    msg.z_units = 153U;
    msg.speed = 0.932633599532;
    msg.speed_units = 144U;
    msg.custom.assign("GKRHPTQEGPXTTMIWHHYYCVVAKBXSSANMUSEJZDYAOHBTZGMOSPVZDI");

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
    msg.setTimeStamp(0.859227098337);
    msg.setSource(16116U);
    msg.setSourceEntity(96U);
    msg.setDestination(40197U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.922860782989;
    msg.lon = 0.453232252069;
    msg.z = 0.7429428268;
    msg.z_units = 20U;
    msg.speed = 0.695125313339;
    msg.speed_units = 236U;
    msg.custom.assign("DQMZWORSVJKGIKCOEYOIZEDZDRCIBCZOIHGAHWJZPCEAJSAMZYUKYQUKZQGCSGCZVHOSYIJLODPBWDKRLLMNZJDKAWELUUCQYCCGIDNJUEBUSBXEGFELXPYVFGJSHUOJSBHQVLPFFUBXMTOBMNKWTMHAUMVPIBMOHDPVUABVMXXTTGPFGYTWNLYAQA");

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
    msg.setTimeStamp(0.844771784219);
    msg.setSource(52514U);
    msg.setSourceEntity(221U);
    msg.setDestination(6229U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.555891537928;
    msg.lon = 0.590773148093;
    msg.z = 0.459683785511;
    msg.z_units = 55U;
    msg.speed = 0.614113906486;
    msg.speed_units = 58U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.469455023886;
    tmp_msg_0.lon = 0.6294749783;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("PNLKJQVMQIWPNTGABGLNPEGKOZNLUFDZANDFTZVVGTWLJJHEACEPBHSSWDPZERMMMVHAMCXNBNXVAYXIYIIOLVETPZKDLBURLQU");

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
    msg.setTimeStamp(0.462373468163);
    msg.setSource(31566U);
    msg.setSourceEntity(89U);
    msg.setDestination(10275U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.947591187674;
    msg.lon = 0.983209030887;

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
    msg.setTimeStamp(0.124043929348);
    msg.setSource(3051U);
    msg.setSourceEntity(178U);
    msg.setDestination(53406U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.0675255602668;
    msg.lon = 0.179501913274;

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
    msg.setTimeStamp(0.583408274726);
    msg.setSource(48781U);
    msg.setSourceEntity(111U);
    msg.setDestination(13094U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.273019733225;
    msg.lon = 0.867031883152;

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
    msg.setTimeStamp(0.725712493179);
    msg.setSource(60665U);
    msg.setSourceEntity(147U);
    msg.setDestination(48192U);
    msg.setDestinationEntity(8U);
    msg.timeout = 30660U;
    msg.lat = 0.596981260716;
    msg.lon = 0.864465428086;
    msg.z = 0.837734762552;
    msg.z_units = 76U;
    msg.pitch = 0.22771813763;
    msg.amplitude = 0.090715728577;
    msg.duration = 4231U;
    msg.speed = 0.275567936573;
    msg.speed_units = 15U;
    msg.radius = 0.944171318774;
    msg.direction = 225U;
    msg.custom.assign("LNDZMLUSQODUXCCPXAWCVRKUTFCRVLOGCNGKTABVZGYBZMMOVKWMQWHZIARJCBEKXADCSWEZYBSMBDJEWNSTVSNISUTMPCDPMOTDOWWLUHUOFBJNGNFQJASPSLSKOEKFTAYALNFOZPTHUVRFBYXUGCJBTWDUDGPPIXXUYTEVHBEIJFROFYJNLIKLIYDPGEDYSRERJZFIAQVPIMZQKIOABXWYGXHQZJRVKNAQFLZGPKHHVEMXXGQTLMJHRNQRCW");

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
    msg.setTimeStamp(0.120385970202);
    msg.setSource(64921U);
    msg.setSourceEntity(167U);
    msg.setDestination(38507U);
    msg.setDestinationEntity(126U);
    msg.timeout = 44029U;
    msg.lat = 0.688184859868;
    msg.lon = 0.0592682575111;
    msg.z = 0.443210117885;
    msg.z_units = 240U;
    msg.pitch = 0.452088154725;
    msg.amplitude = 0.627583916754;
    msg.duration = 63094U;
    msg.speed = 0.287573211451;
    msg.speed_units = 184U;
    msg.radius = 0.888190950603;
    msg.direction = 189U;
    msg.custom.assign("BNEFMNENQIJGDPOVGTKBIMCDHZAYCPXPVJXACYZZLEVGMNGAFHLYTUCDVHAAJAMXEXJJKNBJOBSQJPZXUSPCBLMWFRJGWGKDTTKSRUUQELTQHBXWTKIOSNCWZFIHGDSEJEKHUSCFCQTLHDNOIQMWEWMZRQYPYPEZTBCECNYRAKKQHYIWRTRKPSHBVUWAUUWXOFFFVG");

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
    msg.setTimeStamp(0.457655398442);
    msg.setSource(8804U);
    msg.setSourceEntity(76U);
    msg.setDestination(6992U);
    msg.setDestinationEntity(244U);
    msg.timeout = 60140U;
    msg.lat = 0.596432462389;
    msg.lon = 0.749680038102;
    msg.z = 0.0405646658735;
    msg.z_units = 204U;
    msg.pitch = 0.468788224021;
    msg.amplitude = 0.337704566208;
    msg.duration = 41626U;
    msg.speed = 0.928195008664;
    msg.speed_units = 124U;
    msg.radius = 0.0412519937386;
    msg.direction = 46U;
    msg.custom.assign("BSDGTYULEMXLMMTZLOYRZBJVLWKBVVUEUMYPDDUHDRPNLHNSOZXACCFZEFZFUGYXWKUMSPXKRSSXOFHKUJFQCNVTFTEAMQKRGQOVBUGVGJYPVSDCRFKRLNJGOSRFVAXKJIGVCAOPBHQIIGCTAMLZORCEHIEBWQQCEDQQPIESBNIDGDCPWAPTZHFTSYIEHFAXDRAXTMTLABHPWWO");

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
    msg.setTimeStamp(0.106646986145);
    msg.setSource(41582U);
    msg.setSourceEntity(238U);
    msg.setDestination(2204U);
    msg.setDestinationEntity(37U);
    msg.formation_name.assign("HEYNXLFJPHRBSCEOOIWVOAOSQAMZQLCYLYNTFDRBDTXMCANQ");
    msg.reference_frame = 68U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 8749U;
    tmp_msg_0.off_x = 0.00829723207253;
    tmp_msg_0.off_y = 0.382586150586;
    tmp_msg_0.off_z = 0.911565829726;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("IDADCSOMPABXOVHRVLUNDLOMWLQXTCUJMZJLVLKIRQDTZYYUPDENNYGTCMVTCBWMAUVIRLLRJGZYYHCPTFSDWDBGFIKCHFBSRNEPCEEFAKNKGQGFBEWJPWSDLUAPXLJHVKKUYRHAPXOHDQQTQGALQEOZWFOXMYMBMNCGZGVEXTWDIOTHNFHHMJGXBFEPINSICJURAC");

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
    msg.setTimeStamp(0.637439116569);
    msg.setSource(24300U);
    msg.setSourceEntity(248U);
    msg.setDestination(48022U);
    msg.setDestinationEntity(33U);
    msg.formation_name.assign("QIFXHRKKDLLNVFOBGJARCLYSGQDFYYMYZKQZRWXQLMHISXBTJVASBEBOGNVROEGICAUKOKWFVRMGSLWFYYWVCZAWIHUJYHBJOTDFSXPRSPYPCJQFZIWQHDJZKNHUPUCPCRMGMZZXMHZQDXVBCZ");
    msg.reference_frame = 107U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 37U;
    tmp_msg_0.off_x = 0.18623421608;
    tmp_msg_0.off_y = 0.346062129262;
    tmp_msg_0.off_z = 0.380022641275;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("QGHUHEACCQNKSRIHVYZSGXAUJDQYNJTSLAHHAZVXJSFUXOTRRAOWVPMZPRPVNGECYJHQKHIUEKXPLUYQYTCILFDJDHEPGKSYOXDBPJFOCTSBSCGWBSWJ");

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
    msg.setTimeStamp(0.590548404089);
    msg.setSource(58217U);
    msg.setSourceEntity(147U);
    msg.setDestination(4601U);
    msg.setDestinationEntity(50U);
    msg.formation_name.assign("QZXXOUKBPHCMKNQQPHRMBGYELFIQZRGXKTJMQSYLVREBLBKWRPZYRFSWXDKNAARQSEDMLZEPGWYKPTAUATBOPBSKBUEZHMOLYVZNDUOJRGVOYDHKXWHRXMLFGXQUONWMBSRSHTAV");
    msg.reference_frame = 225U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 39273U;
    tmp_msg_0.off_x = 0.550396096442;
    tmp_msg_0.off_y = 0.949960614834;
    tmp_msg_0.off_z = 0.816229639823;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("DLBARSGBXIIOJSCGKACVGFKWYRPOLLZGPYJRUIDOYNOSUXBHADKUARCYSJSKONLRTPUTCMQWEXEQCFVUDXVKUENVKQGZBUFBMFIUNRB");

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
    msg.setTimeStamp(0.9623095935);
    msg.setSource(59736U);
    msg.setSourceEntity(222U);
    msg.setDestination(32943U);
    msg.setDestinationEntity(44U);
    msg.group_name.assign("CBEEUPYZDHOXUDNAAKNRYEUNEDDBUQLF");
    msg.formation_name.assign("QUTLJZUOLNUZENCEAXQMKJCTDYXERYDERVRJSREMPZPCRUKSHXTJVIBIALDAHSYBPZWYWVGFBFCF");
    msg.plan_id.assign("FGJTVLVFRFEAKTJCP");
    msg.description.assign("HEKNKQBJBWPAUDGSGRHCRUUOCYOKVCDTVWWVFHIUDQQYAQEWSUACFBUOTNJGBZRXIMUXBDPWJLQQPDIPFLPXINHZVWNETHIFICRTMNKDKOAJMDHVXXDOYAIEKYMLJKLGORMNSTZXSMABECMMCBXVZZSLUEDHTFJXAFVOUVLKTZPGFNBIFKRYWZOYBFKNLQOPZMEEGSTACZCXIYLAERHWWJSHPMYQT");
    msg.leader_speed = 0.452940801533;
    msg.leader_bank_lim = 0.849615924568;
    msg.pos_sim_err_lim = 0.634245325782;
    msg.pos_sim_err_wrn = 0.628323190091;
    msg.pos_sim_err_timeout = 25886U;
    msg.converg_max = 0.0218549354817;
    msg.converg_timeout = 27458U;
    msg.comms_timeout = 32964U;
    msg.turb_lim = 0.998766497468;
    msg.custom.assign("JUCXLOSRMKSYKPTISVDSDZLIXBXFOXUZWHYMQLTLNEEKEXBVAZWKRBMF");

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
    msg.setTimeStamp(0.758885568376);
    msg.setSource(59802U);
    msg.setSourceEntity(210U);
    msg.setDestination(55079U);
    msg.setDestinationEntity(50U);
    msg.group_name.assign("GCZBAMVMUVCMDPADKDUKXOXNCJRCDHCXPSGAXDSVHOLMYGUPMSBEBWOYZRLVYGOFXQEMDOYPTZIYQAGWALTBHRPAXYPAG");
    msg.formation_name.assign("GJDRNQMWHNJVRPGZROAHQSVVUAYEQEOIXCYTAKRDAAQBVVHOSNHMSO");
    msg.plan_id.assign("AXDYYGNJLOURWBZFVELNLBQHBNILLGYOUFHPBOB");
    msg.description.assign("MTNCOOAGPYSEPJPLEZMBWYSTDIZAEIWORBQDOAWXHNGSBMJFMGBQEVDRFHRNQFRRUHORONIXYLJTVBZLYPHSGNGVBAIEMYVNIDEAFDJDVCEHQJIPITMUCZSKAKFKSXKCEIQLYCHEYFZVUQWKBALYHODQ");
    msg.leader_speed = 0.221218443145;
    msg.leader_bank_lim = 0.738889545111;
    msg.pos_sim_err_lim = 0.819473675012;
    msg.pos_sim_err_wrn = 0.810540289984;
    msg.pos_sim_err_timeout = 63983U;
    msg.converg_max = 0.680905446317;
    msg.converg_timeout = 20957U;
    msg.comms_timeout = 6585U;
    msg.turb_lim = 0.984706467571;
    msg.custom.assign("ULVLZPNDHUJCEJYEBCTZUAGTQRVYCEJGILXIMOYKSRVJDRQNHASOTJNZWVZGHXSKSXMYQAVKMHXEVDLTF");

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
    msg.setTimeStamp(0.300354227507);
    msg.setSource(64702U);
    msg.setSourceEntity(2U);
    msg.setDestination(30409U);
    msg.setDestinationEntity(136U);
    msg.group_name.assign("YMYEBLJYKWAKMSVNDNFOEHS");
    msg.formation_name.assign("YHZOJCBTHYABIYYAIGMJWMWRBFCEIOHZXLQSUOXTAVWSXELCTRNEDHCCTRMOAYVSOBTHPRQAPHOSUNWGVGXJQTGFNSKGFFQZOHAWUGNVUUXFYFWRTDFULIKRREULYKKKUFOVIDARZPSLPNSEEMCNOSZRJDCJZRPKOLQHXVDDUDBIPZPDJGEKD");
    msg.plan_id.assign("YLOOELZMZPXBUOXTHOTACYMCXPFDWVFNHVCLPJTIGJWIBIWLKATQNEDEVPISVAPOQJURTSLBPHQWQBPNIZFGFWDPDHHM");
    msg.description.assign("IRHTCRJEVHTPHPGFOTDYTUAFNSNSAOJXNXDSDEPBHPYJKUGZHEQTQNKDYGGCMHFAQFPVBIKXVYLLS");
    msg.leader_speed = 0.254670450716;
    msg.leader_bank_lim = 0.244150584639;
    msg.pos_sim_err_lim = 0.656941453098;
    msg.pos_sim_err_wrn = 0.985089942535;
    msg.pos_sim_err_timeout = 2936U;
    msg.converg_max = 0.897961383079;
    msg.converg_timeout = 1828U;
    msg.comms_timeout = 58548U;
    msg.turb_lim = 0.218967348329;
    msg.custom.assign("REZYLJMADPOOPTNQQHROGAASIFPUOIISHOGIDARFEALGGDJJVMBV");

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
    msg.setTimeStamp(0.429411275354);
    msg.setSource(25512U);
    msg.setSourceEntity(98U);
    msg.setDestination(28505U);
    msg.setDestinationEntity(15U);
    msg.control_src = 14894U;
    msg.control_ent = 70U;
    msg.timeout = 0.439104316958;
    msg.loiter_radius = 0.876416356732;
    msg.altitude_interval = 0.924647817416;

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
    msg.setTimeStamp(0.238777898041);
    msg.setSource(50528U);
    msg.setSourceEntity(72U);
    msg.setDestination(7965U);
    msg.setDestinationEntity(134U);
    msg.control_src = 32704U;
    msg.control_ent = 154U;
    msg.timeout = 0.194192097777;
    msg.loiter_radius = 0.491790674169;
    msg.altitude_interval = 0.406017368157;

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
    msg.setTimeStamp(0.53471021867);
    msg.setSource(35683U);
    msg.setSourceEntity(20U);
    msg.setDestination(10425U);
    msg.setDestinationEntity(175U);
    msg.control_src = 31031U;
    msg.control_ent = 106U;
    msg.timeout = 0.352403431801;
    msg.loiter_radius = 0.296481476477;
    msg.altitude_interval = 0.685977155492;

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
    msg.setTimeStamp(0.879652600838);
    msg.setSource(6200U);
    msg.setSourceEntity(208U);
    msg.setDestination(28788U);
    msg.setDestinationEntity(132U);
    msg.flags = 51U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.266071144359;
    tmp_msg_0.speed_units = 129U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.041698347795;
    tmp_msg_1.z_units = 101U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.144688610601;
    msg.lon = 0.890750583404;
    msg.radius = 0.0736619343039;

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
    msg.setTimeStamp(0.78698105786);
    msg.setSource(31168U);
    msg.setSourceEntity(174U);
    msg.setDestination(4731U);
    msg.setDestinationEntity(92U);
    msg.flags = 147U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0221266673157;
    tmp_msg_0.speed_units = 174U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.207583992647;
    tmp_msg_1.z_units = 225U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.957267589161;
    msg.lon = 0.529545327151;
    msg.radius = 0.723897437;

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
    msg.setTimeStamp(0.0886463860264);
    msg.setSource(23755U);
    msg.setSourceEntity(68U);
    msg.setDestination(29351U);
    msg.setDestinationEntity(157U);
    msg.flags = 166U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.437703932228;
    tmp_msg_0.speed_units = 112U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.427505975255;
    tmp_msg_1.z_units = 249U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.968849860983;
    msg.lon = 0.809634977509;
    msg.radius = 0.214722096881;

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
    msg.setTimeStamp(0.279983150916);
    msg.setSource(40321U);
    msg.setSourceEntity(201U);
    msg.setDestination(47373U);
    msg.setDestinationEntity(167U);
    msg.control_src = 9477U;
    msg.control_ent = 198U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 172U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.633049459427;
    tmp_tmp_msg_0_0.speed_units = 175U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.794040818054;
    tmp_tmp_msg_0_1.z_units = 129U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.539278150792;
    tmp_msg_0.lon = 0.749776645683;
    tmp_msg_0.radius = 0.941466114383;
    msg.reference.set(tmp_msg_0);
    msg.state = 72U;
    msg.proximity = 153U;

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
    msg.setTimeStamp(0.0779666115398);
    msg.setSource(31990U);
    msg.setSourceEntity(190U);
    msg.setDestination(44447U);
    msg.setDestinationEntity(201U);
    msg.control_src = 21453U;
    msg.control_ent = 127U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 197U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.843917303457;
    tmp_tmp_msg_0_0.speed_units = 12U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.41060906805;
    tmp_tmp_msg_0_1.z_units = 57U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.480160139633;
    tmp_msg_0.lon = 0.785279887898;
    tmp_msg_0.radius = 0.675670038168;
    msg.reference.set(tmp_msg_0);
    msg.state = 56U;
    msg.proximity = 175U;

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
    msg.setTimeStamp(0.567957530096);
    msg.setSource(38428U);
    msg.setSourceEntity(139U);
    msg.setDestination(46058U);
    msg.setDestinationEntity(241U);
    msg.control_src = 46961U;
    msg.control_ent = 71U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 113U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.170632478668;
    tmp_tmp_msg_0_0.speed_units = 183U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.99277430794;
    tmp_tmp_msg_0_1.z_units = 188U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.938015861823;
    tmp_msg_0.lon = 0.230753789191;
    tmp_msg_0.radius = 0.557322561782;
    msg.reference.set(tmp_msg_0);
    msg.state = 13U;
    msg.proximity = 59U;

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
    msg.setTimeStamp(0.893701281669);
    msg.setSource(5924U);
    msg.setSourceEntity(173U);
    msg.setDestination(31657U);
    msg.setDestinationEntity(215U);
    msg.ax_cmd = 0.801260304653;
    msg.ay_cmd = 0.0711466962999;
    msg.az_cmd = 0.382297666817;
    msg.ax_des = 0.0775202222025;
    msg.ay_des = 0.181611349969;
    msg.az_des = 0.850485882802;
    msg.virt_err_x = 0.457305781661;
    msg.virt_err_y = 0.269048959182;
    msg.virt_err_z = 0.0888894975037;
    msg.surf_fdbk_x = 0.191324710042;
    msg.surf_fdbk_y = 0.00431841674818;
    msg.surf_fdbk_z = 0.200012523777;
    msg.surf_unkn_x = 0.331451160657;
    msg.surf_unkn_y = 0.488816253654;
    msg.surf_unkn_z = 0.764876945675;
    msg.ss_x = 0.48390102259;
    msg.ss_y = 0.725370209489;
    msg.ss_z = 0.0992155364642;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("XJNXRBUYJZVEZGKJPVBCQZYSTUSBJHAUGVSBHIZNGPHAWKQQVKNRXMFJMHKMOXGFMOSPCYLILIQLMYZYBRXISFOIMLTDQNLDEFYVHFSRWEWCATVOYKEZWGEIAJVSAIDTOYPESQOWPPZBFUUQWNCRXVIBPHIDXQXAHAOSRHPZRNDKKYTPBGIEFZDXDGCOOU");
    tmp_msg_0.dist = 0.710658063304;
    tmp_msg_0.err = 0.814615327795;
    tmp_msg_0.ctrl_imp = 0.13966809532;
    tmp_msg_0.rel_dir_x = 0.177981584861;
    tmp_msg_0.rel_dir_y = 0.277450283505;
    tmp_msg_0.rel_dir_z = 0.261277254016;
    tmp_msg_0.err_x = 0.168764755406;
    tmp_msg_0.err_y = 0.0159999399498;
    tmp_msg_0.err_z = 0.714106397811;
    tmp_msg_0.rf_err_x = 0.0896729085253;
    tmp_msg_0.rf_err_y = 0.179057445596;
    tmp_msg_0.rf_err_z = 0.783358325179;
    tmp_msg_0.rf_err_vx = 0.541824094843;
    tmp_msg_0.rf_err_vy = 0.607442439517;
    tmp_msg_0.rf_err_vz = 0.253454042546;
    tmp_msg_0.ss_x = 0.293674216943;
    tmp_msg_0.ss_y = 0.301196147544;
    tmp_msg_0.ss_z = 0.364416535975;
    tmp_msg_0.virt_err_x = 0.498389733308;
    tmp_msg_0.virt_err_y = 0.867475477365;
    tmp_msg_0.virt_err_z = 0.126191600924;
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
    msg.setTimeStamp(0.256235215692);
    msg.setSource(5870U);
    msg.setSourceEntity(36U);
    msg.setDestination(10656U);
    msg.setDestinationEntity(65U);
    msg.ax_cmd = 0.912148437618;
    msg.ay_cmd = 0.558189893619;
    msg.az_cmd = 0.524556386693;
    msg.ax_des = 0.649935802613;
    msg.ay_des = 0.806522931899;
    msg.az_des = 0.356645337765;
    msg.virt_err_x = 0.493395540155;
    msg.virt_err_y = 0.442390272052;
    msg.virt_err_z = 0.81988990757;
    msg.surf_fdbk_x = 0.0983843301858;
    msg.surf_fdbk_y = 0.17844133912;
    msg.surf_fdbk_z = 0.31451279565;
    msg.surf_unkn_x = 0.963498469576;
    msg.surf_unkn_y = 0.0719946989784;
    msg.surf_unkn_z = 0.0741415933708;
    msg.ss_x = 0.374207582932;
    msg.ss_y = 0.00749846803219;
    msg.ss_z = 0.253023230777;

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
    msg.setTimeStamp(0.89900027042);
    msg.setSource(15679U);
    msg.setSourceEntity(243U);
    msg.setDestination(47885U);
    msg.setDestinationEntity(127U);
    msg.ax_cmd = 0.0535543774259;
    msg.ay_cmd = 0.304360046646;
    msg.az_cmd = 0.436859971923;
    msg.ax_des = 0.778060985104;
    msg.ay_des = 0.160981660414;
    msg.az_des = 0.782975469337;
    msg.virt_err_x = 0.327075859953;
    msg.virt_err_y = 0.396767177301;
    msg.virt_err_z = 0.0248232848485;
    msg.surf_fdbk_x = 0.374099873144;
    msg.surf_fdbk_y = 0.799597013575;
    msg.surf_fdbk_z = 0.757774836588;
    msg.surf_unkn_x = 0.0665171112725;
    msg.surf_unkn_y = 0.72787628691;
    msg.surf_unkn_z = 0.371976084147;
    msg.ss_x = 0.136241374344;
    msg.ss_y = 0.936478106011;
    msg.ss_z = 0.741068492764;

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
    msg.setTimeStamp(0.168905549831);
    msg.setSource(56312U);
    msg.setSourceEntity(115U);
    msg.setDestination(45355U);
    msg.setDestinationEntity(213U);
    msg.s_id.assign("YWKCSCXYJLUSWYHYGVQGNRZCNKIULPTKAOLIRCFEPJMGFATMPVHRFGKUWQIRMIYGZQBQANHEFZMDBOFWTRCBKDOANWPNWXPYFUXNATYZAHAHDMIVGJJUKLAZNZXHRJFDTAWDUTXPUGSUNOM");
    msg.dist = 0.408519076381;
    msg.err = 0.617967762591;
    msg.ctrl_imp = 0.0189462223117;
    msg.rel_dir_x = 0.465699441049;
    msg.rel_dir_y = 0.5661081141;
    msg.rel_dir_z = 0.0472990215157;
    msg.err_x = 0.107481236004;
    msg.err_y = 0.438782429348;
    msg.err_z = 0.239752801183;
    msg.rf_err_x = 0.00937536405071;
    msg.rf_err_y = 0.758815143381;
    msg.rf_err_z = 0.387535996273;
    msg.rf_err_vx = 0.042952465646;
    msg.rf_err_vy = 0.86774267382;
    msg.rf_err_vz = 0.423422584742;
    msg.ss_x = 0.808776070723;
    msg.ss_y = 0.772005588011;
    msg.ss_z = 0.518361890778;
    msg.virt_err_x = 0.270611307389;
    msg.virt_err_y = 0.189772155631;
    msg.virt_err_z = 0.999748564218;

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
    msg.setTimeStamp(0.170607066077);
    msg.setSource(36514U);
    msg.setSourceEntity(17U);
    msg.setDestination(37791U);
    msg.setDestinationEntity(4U);
    msg.s_id.assign("SGKDENXLUETKAEXYWVQFOVGHY");
    msg.dist = 0.269063747384;
    msg.err = 0.52607946379;
    msg.ctrl_imp = 0.859410013413;
    msg.rel_dir_x = 0.908999194659;
    msg.rel_dir_y = 0.127536994961;
    msg.rel_dir_z = 0.960622489118;
    msg.err_x = 0.649688233492;
    msg.err_y = 0.14399422117;
    msg.err_z = 0.157915973718;
    msg.rf_err_x = 0.40374773378;
    msg.rf_err_y = 0.536768444352;
    msg.rf_err_z = 0.757699498272;
    msg.rf_err_vx = 0.384088323258;
    msg.rf_err_vy = 0.813896953758;
    msg.rf_err_vz = 0.259627759906;
    msg.ss_x = 0.669480170094;
    msg.ss_y = 0.53329956818;
    msg.ss_z = 0.791651306896;
    msg.virt_err_x = 0.548540807665;
    msg.virt_err_y = 0.0937254993581;
    msg.virt_err_z = 0.110954900668;

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
    msg.setTimeStamp(0.999147145424);
    msg.setSource(48026U);
    msg.setSourceEntity(197U);
    msg.setDestination(43769U);
    msg.setDestinationEntity(94U);
    msg.s_id.assign("XNOSVYAZNVQTYKLCCFOIHBGDCBZOEYMURPOFFTVJQPEEDZQSIZVDZJHINMEGZEDBFHUYLUGICAHWHADHYJAXMILPKUIPVYULOAMLQMMGCSPBWGMXHWBPRTTJDGZWTRCHIBSFWKDBLWUGQGJIGVXRACRECKHUNKACYYOSK");
    msg.dist = 0.620779775764;
    msg.err = 0.194146643593;
    msg.ctrl_imp = 0.0384947864846;
    msg.rel_dir_x = 0.750347419474;
    msg.rel_dir_y = 0.331597021264;
    msg.rel_dir_z = 0.304454823122;
    msg.err_x = 0.402678427484;
    msg.err_y = 0.532848073325;
    msg.err_z = 0.236970019912;
    msg.rf_err_x = 0.332357442223;
    msg.rf_err_y = 0.704110781456;
    msg.rf_err_z = 0.910665508327;
    msg.rf_err_vx = 0.888736057036;
    msg.rf_err_vy = 0.745957780334;
    msg.rf_err_vz = 0.767454163901;
    msg.ss_x = 0.888212505772;
    msg.ss_y = 0.492737295758;
    msg.ss_z = 0.802075603613;
    msg.virt_err_x = 0.688989791928;
    msg.virt_err_y = 0.373743658308;
    msg.virt_err_z = 0.364948026486;

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
    msg.setTimeStamp(0.301180953021);
    msg.setSource(37493U);
    msg.setSourceEntity(7U);
    msg.setDestination(61883U);
    msg.setDestinationEntity(38U);
    msg.timeout = 51989U;
    msg.rpm = 0.856311406648;
    msg.direction = 196U;
    msg.custom.assign("DDZFPUMYIHIAGKBVYBBMQRFFGURUAWLTKAJBPQFOVJOSHVRDVBJCUNAVEDZRIOGZLGEDSGMUTUFEDTXUFRBNQNWQWSHLDYGHRUNYJRADPXTITHTKXCSNZYCIRQXTIVZYBXDWM");

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
    msg.setTimeStamp(0.809391739792);
    msg.setSource(13742U);
    msg.setSourceEntity(107U);
    msg.setDestination(48399U);
    msg.setDestinationEntity(165U);
    msg.timeout = 23636U;
    msg.rpm = 0.215636608337;
    msg.direction = 94U;
    msg.custom.assign("LDDYUNNCOASCVKXQLPOXDNHQBTETCSJGTRYUIFKBFSQZUEEPPZFLTQAQIMRKWZLGIJMFMYDTFJZPILHBTUZGZZVXIEOTIJOZDLFFNIERQMVPMQKGNJUYNNIHNGWWGDCXGKXSTWJVVAXYHDEJQWHBDOYOBXVYAMRMADSZNKEFHPUAWXGBVGASLCJNRQOASHWLRFRLWXCMTISWHWLVRYJUUPEYHBVBXUVEUCCMYMQECH");

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
    msg.setTimeStamp(0.343706109559);
    msg.setSource(32080U);
    msg.setSourceEntity(214U);
    msg.setDestination(59253U);
    msg.setDestinationEntity(124U);
    msg.timeout = 35829U;
    msg.rpm = 0.722583597146;
    msg.direction = 247U;
    msg.custom.assign("VBYRCFZGFVNEKWCTWVCLNFQYBLPUTCXLEORUNPKYGXUTOBLSZPDNVWJKIXFRIAYXHJWTJOXIMHEJFDQTEBGHENOETCUMHOYVKHEOLWDZLHILRMKUICFNLDPSEMIKXMBBSLYGSUSPQAIDEMWWPQYRYWMFXAQYDJYNMOZCXRQWFK");

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
    msg.setTimeStamp(0.0493107000238);
    msg.setSource(27778U);
    msg.setSourceEntity(57U);
    msg.setDestination(32899U);
    msg.setDestinationEntity(26U);
    msg.formation_name.assign("ZIALBGIKXYSLHAHMRBJWPHGQHEGYCPBXBLLEASETRUEZDAURGWZFGWTYNVMKIMOAXNBDYKDOUPQZEHDOYVYTSPPMTQS");
    msg.type = 132U;
    msg.op = 73U;
    msg.group_name.assign("OGBONNKXZAEZIIKLUADFUWTPNAOZRXMPIEWZGQEQOHMBHQVEYVSYWYGULYQTYBVXIEMATUSLMPXGIUNSZBWNHYBJNSYTZHKQHKJKRCLQOEFSDQILSVLCQDHXUOACDJUJGMZPYZOKPJOVCBWCSKVFPURLUNORNMMFCFHGMOMZDFJVFLMTTVKEGDXY");
    msg.plan_id.assign("LFVFIRQIRNBSILRUMPLBZIDFJGZWQMGEGRZJOWETSHMUKPCTESKJZUANIVPFLQUAZXXLYUCPD");
    msg.description.assign("PNPXWJHTUUYDHSBLOFKQXGRFCGVLEBVZATEVEPCGVZGIRQWJDPTCDEGPOMUFRCADDXZYAJONMQWATMRKYSVZWFXZKROAQCLBSUYKJKNFTCRZKMOIQXDSVJONSTTXKRPJOPIFXIZOKVCLTMHEUXIGWPBMWHEIBWBVUISBIMAHSVLWLDAJUVSQKOGENJUTFEWFLGDFDHYOZQXLNAHRGATPYYBELLHNNNBQXHYGWND");
    msg.reference_frame = 248U;
    msg.leader_bank_lim = 0.752071518048;
    msg.leader_speed_min = 0.484774378505;
    msg.leader_speed_max = 0.99242748981;
    msg.leader_alt_min = 0.436645576158;
    msg.leader_alt_max = 0.490669119068;
    msg.pos_sim_err_lim = 0.506102035364;
    msg.pos_sim_err_wrn = 0.410530299029;
    msg.pos_sim_err_timeout = 56581U;
    msg.converg_max = 0.0382209089997;
    msg.converg_timeout = 2611U;
    msg.comms_timeout = 36154U;
    msg.turb_lim = 0.492965458741;
    msg.custom.assign("RKGMSOIZHZQXXBXUPYVWADMMNKVPGSJIPHZJITPLSDYRQIYWQFSOOSKRYBBTBUCKSOUVHEUNGFKHMZDRVFMOKUQBVQTLRIUQCGVHEEDBPEROYEJDSFYFWJWOJWNLJNLQTDOCKZHRZEMGAZEFLISXJPKHADCGTIASJDTGACVPWCAAWXDVJEFGOMXNKFTLSBTRMYPNXMPJRVLWUCCXXIZFLZHYQUGVBMTNZHDKQUCNHBXLFWRBATAWYOEENULYI");

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
    msg.setTimeStamp(0.960544441424);
    msg.setSource(23215U);
    msg.setSourceEntity(142U);
    msg.setDestination(49761U);
    msg.setDestinationEntity(253U);
    msg.formation_name.assign("ZFLTRMLOYIWOMCOULSWKRCKVNYXLAHSUDCPPKUSMFLJQTNSWAIRDCQNZRYCQOMXIYBZQBJWFTGUZSGVAMDBLSSGXLHDJFAZMQGKMQQVIPVVVPZPOURQXTKJWPHYVABPIIVXAVUDFXGOAXJTRBUZONKGNREHDZNRELYCCMPORQEETBEEHERFOIWHLDSDXFYBKGCJJTKBKFGWINHNVITOMEUJWWSHHDYBSGXENMGPZLEHPTCTYIZYAFCWQXKUAJ");
    msg.type = 186U;
    msg.op = 114U;
    msg.group_name.assign("QLKNDNTQMBTOVCFXSRFKOSIZZUKRJEFLCRFRVXJJPHKYCNGVXUYCXBKYICELSPJDGQSSWHSFCYNZNLEHQMOMHKFWPAHGXGMXBYILQAZEPOSRVAQUMIELELMCJRXGPAWJYSZBAAYEJPWOBIAKAZLIMKCBKDTHWHZTFMBDTWTGWEWHFWRDFYNJISVUNDHDUHIEZAMPQROMNBSXWRONGVPTDXEVXYATZGPBUQVIDPZRICUOTFOQJBCULUVGDVUG");
    msg.plan_id.assign("OBTRGTKVCBKIWCIOSUDBWFBGNGQHPCMCQCBSJYMQAOYXAGKFMFCQYXDNRFVKZEDAPELDRXAJWKHJAALMWLKYFONIGRFRHBSOKDUJXLEUFLWZOIHCOEHFZJLTGUTZXSYXVQPJXQJREDVGPETESHVWCKYTZBNZHLQRZYPQJEWDIIYVLPKS");
    msg.description.assign("VJWZSYIVQQOLEUTTRVZNLHGKHFNNSPGUWLZEUHQYCSXQDFQLFMXMJIKBDLYTTZXWXRNRBKPDJJPALDIURAOYASCUQGJYADTWVNUHBBAWHPGRYHBRNMBHPKZPQCNUPMCOKFQJPCVOUIURIVAEMZWRCCPGDMYEKTYSNLMSXKRFUHKSISTRXHFZCOTLIJKI");
    msg.reference_frame = 25U;
    msg.leader_bank_lim = 0.994754512288;
    msg.leader_speed_min = 0.550951608315;
    msg.leader_speed_max = 0.607342795688;
    msg.leader_alt_min = 0.024819300153;
    msg.leader_alt_max = 0.693590249896;
    msg.pos_sim_err_lim = 0.440763530237;
    msg.pos_sim_err_wrn = 0.0800902851779;
    msg.pos_sim_err_timeout = 10371U;
    msg.converg_max = 0.97518806174;
    msg.converg_timeout = 3330U;
    msg.comms_timeout = 11025U;
    msg.turb_lim = 0.425800675001;
    msg.custom.assign("KXLCYREBPISUENTJAXJJSWHFHKQWNATGRSFKO");

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
    msg.setTimeStamp(0.84784023874);
    msg.setSource(2853U);
    msg.setSourceEntity(49U);
    msg.setDestination(21760U);
    msg.setDestinationEntity(19U);
    msg.formation_name.assign("IMGDSUNJNRCXIZYDTKAIOSOAWPLZRWXLCHKGCZBYCUDSFMPJEYIGPKNZDTRHCWVDWVBORJJABMXUQPUYLXNHHTSOYMZXMQPUIFWRMVBJFIDNLQBXMBFMTECJKLPQKULBRKXVCHYGYLBHEUFDGSEXASYFXKNVPEEPQTACQNVGYEZGHDLWOTFWOAKMYUVQBARGSENLOHVIOWBQSCTWTJRXJAFDRQSZDHKVFOKHTE");
    msg.type = 207U;
    msg.op = 226U;
    msg.group_name.assign("SBQVUPXYRFLFWOUQTIGWWKYOBAHCQVUBKACEFBGAJSHUGPXTPONOARDQGKDRMSUNDZYUOFINPXMRNYTNEQMLXVWZZPIIZDZZXREVUBHRIDIRZYFMCLWYHFBJSRBLVJNVJJTCWJSERBUAEFVMXQP");
    msg.plan_id.assign("XLAZKRPQLKIFNCDWEMSEYNAKYTCGLRQSNOYICI");
    msg.description.assign("AGGBYOWYLSNMMGGQJXATYAKVMSNUUVKTMPNCUKVHUZVJTPTKLIIAIDPWRNBRDEOLHKTVYMXRWDKWJZCFSWXLUIMIBLZXCXRUEWCXJHXJ");
    msg.reference_frame = 254U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 4852U;
    tmp_msg_0.off_x = 0.0903860587055;
    tmp_msg_0.off_y = 0.902377161916;
    tmp_msg_0.off_z = 0.866043238926;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.907545868259;
    msg.leader_speed_min = 0.439810532368;
    msg.leader_speed_max = 0.652450600007;
    msg.leader_alt_min = 0.168280535674;
    msg.leader_alt_max = 0.0188763161531;
    msg.pos_sim_err_lim = 0.701824050605;
    msg.pos_sim_err_wrn = 0.571050630561;
    msg.pos_sim_err_timeout = 25122U;
    msg.converg_max = 0.980076133583;
    msg.converg_timeout = 26885U;
    msg.comms_timeout = 30950U;
    msg.turb_lim = 0.824013260829;
    msg.custom.assign("WNYTBHXPEFJRSDWNGMNKUDBYSTKRLRTPUKTXWCEKZWZAJAYCHYVOLVOUJDYSLIEHDWHLBYFMIMPAKUOWGASAUVOIFZAXSXKQFXTKBEEIW");

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
    msg.setTimeStamp(0.630527612447);
    msg.setSource(21498U);
    msg.setSourceEntity(26U);
    msg.setDestination(57445U);
    msg.setDestinationEntity(16U);
    msg.timeout = 29744U;
    msg.lat = 0.866442046642;
    msg.lon = 0.0870191291004;
    msg.z = 0.16881106454;
    msg.z_units = 206U;
    msg.speed = 0.172673390467;
    msg.speed_units = 167U;
    msg.custom.assign("LKWWNWBHAFMCULCARQSLDUEGUGCSBHJFDDWEFQVQIDSUZZJAILQVNRGWBKSCSEYFIZZGEVFAMYRPTXXUIRAOPGFKYXCXTLFGNTOHIGZASMKQKJXWHPPQZNRRMUVYZXVHTVKDVQEESHYBSKIOWNXRXZOYZPBNPDRHHOCJYJQVAUQKILBOMMGCPRYNLKTEYAPJGTYFJJZWASDOQJTTFMUUEICABWLDDFGBIPJHIHEPBMR");

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
    msg.setTimeStamp(0.786937493731);
    msg.setSource(16565U);
    msg.setSourceEntity(221U);
    msg.setDestination(42569U);
    msg.setDestinationEntity(43U);
    msg.timeout = 33541U;
    msg.lat = 0.48762012198;
    msg.lon = 0.269091269381;
    msg.z = 0.0634445288546;
    msg.z_units = 129U;
    msg.speed = 0.836552164168;
    msg.speed_units = 106U;
    msg.custom.assign("TLXAOQMRCICFHQBYYBMFGLZVFAYVZPABNWZXMYDAVLANUSYZDJEPIPWXOESXBTFLQZCAVDEPFTZUJGWTGRCZFIVWAHXLJGQSSUQWIPWMJKOJNYXWKYRMHGAPLNLCDQEKNLMLPCTMIRYBGIOZOBUHKXLTXFR");

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
    msg.setTimeStamp(0.283423616839);
    msg.setSource(56832U);
    msg.setSourceEntity(133U);
    msg.setDestination(53589U);
    msg.setDestinationEntity(35U);
    msg.timeout = 16322U;
    msg.lat = 0.881432472452;
    msg.lon = 0.0723100264736;
    msg.z = 0.188736606264;
    msg.z_units = 144U;
    msg.speed = 0.490088987489;
    msg.speed_units = 121U;
    msg.custom.assign("VQPTLLCWXVAGYYMACJQSBWBUZDKQZTDPECWILOBEJAOMEQCKWEUWZMNBBZXOMMYSWFWIRXMTTDUGHPGWXXLFRQDIVSJKRKOHGLZNHGSUHXLURBJJHGIIERSFVNOENBFPAPZH");

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
    msg.setTimeStamp(0.305216554843);
    msg.setSource(31367U);
    msg.setSourceEntity(193U);
    msg.setDestination(49154U);
    msg.setDestinationEntity(240U);
    msg.timeout = 50209U;
    msg.lat = 0.482861279707;
    msg.lon = 0.190703242538;
    msg.z = 0.951007336715;
    msg.z_units = 212U;
    msg.speed = 0.767387002679;
    msg.speed_units = 206U;
    msg.custom.assign("NWYBIXKDVBVPZVPJJXBOBDBNECGSHUXBRYNDSQBPAAVEFCMAHVCGTTZLEAVVFYOICTUYWMTHDHXOGUKGSEZSAZTUPHX");

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
    msg.setTimeStamp(0.692339727464);
    msg.setSource(15586U);
    msg.setSourceEntity(99U);
    msg.setDestination(56877U);
    msg.setDestinationEntity(97U);
    msg.timeout = 23409U;
    msg.lat = 0.69767730176;
    msg.lon = 0.470098798227;
    msg.z = 0.22502538734;
    msg.z_units = 176U;
    msg.speed = 0.879320088239;
    msg.speed_units = 119U;
    msg.custom.assign("UIXOQTKEOPWAENLNTIJVJTIIIHGGJLQXGRNFPQWMLYUAIXRQFAYADQZPWFAXRXYJBKHXWCZDTWDFEYKEOHYXUCWRUSVBSVFBZZNXMYAINGKNPBHGYSHAWTZHEMNNSADPLGMCOECIJACDMKODTBCYCFYFUKMSJBVZIGKFPJOXJUONVTEOCWOMKGMRCTHWIZLVNBUHVRLDQELUHDMUYLZQS");

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
    msg.setTimeStamp(0.968500261203);
    msg.setSource(57554U);
    msg.setSourceEntity(226U);
    msg.setDestination(9605U);
    msg.setDestinationEntity(81U);
    msg.timeout = 61514U;
    msg.lat = 0.454876453104;
    msg.lon = 0.858063544783;
    msg.z = 0.420804111398;
    msg.z_units = 253U;
    msg.speed = 0.436960335835;
    msg.speed_units = 40U;
    msg.custom.assign("JQCOZAGFTXYWDZAFQSGQISFNFEEHOSWLELLYPMBNZEGWCRMVHWDAKXERHCBGWIEPUKUBESKPFBFGAXOHSLBQRMYMUQWXVLTYDDITKVRVXAOEISQGXJMJDHBLNLKJWSUZPANWKAYYBCTZPWCCIVXRANZAJIKFZDQDDZRCMNQYSCRNIHXYTTVKDSPIXOJHMVYDHMOPQPOXFHJYTKCGABIKSUNEJMQUCBLO");

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
    msg.setTimeStamp(0.167527061448);
    msg.setSource(23323U);
    msg.setSourceEntity(208U);
    msg.setDestination(39867U);
    msg.setDestinationEntity(246U);
    msg.arrival_time = 0.918509242978;
    msg.lat = 0.339414895806;
    msg.lon = 0.887622912412;
    msg.z = 0.629502006514;
    msg.z_units = 27U;
    msg.travel_z = 0.0562961047135;
    msg.travel_z_units = 69U;
    msg.delayed = 72U;

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
    msg.setTimeStamp(0.504763577285);
    msg.setSource(27282U);
    msg.setSourceEntity(91U);
    msg.setDestination(15779U);
    msg.setDestinationEntity(64U);
    msg.arrival_time = 0.774792601599;
    msg.lat = 0.410187183155;
    msg.lon = 0.996089388481;
    msg.z = 0.290400251398;
    msg.z_units = 176U;
    msg.travel_z = 0.0462814397265;
    msg.travel_z_units = 174U;
    msg.delayed = 84U;

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
    msg.setTimeStamp(0.107255203889);
    msg.setSource(55861U);
    msg.setSourceEntity(104U);
    msg.setDestination(35735U);
    msg.setDestinationEntity(78U);
    msg.arrival_time = 0.265851484357;
    msg.lat = 0.259209272719;
    msg.lon = 0.526646977276;
    msg.z = 0.0494885529976;
    msg.z_units = 156U;
    msg.travel_z = 0.863016869926;
    msg.travel_z_units = 98U;
    msg.delayed = 20U;

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
    msg.setTimeStamp(0.134675262601);
    msg.setSource(2288U);
    msg.setSourceEntity(5U);
    msg.setDestination(2245U);
    msg.setDestinationEntity(7U);
    msg.op_mode = 198U;
    msg.error_count = 127U;
    msg.error_ents.assign("TBXGPNGGLECRSKECICUSEYQZLVZYBWLIHOWXXUFNQTNKJTDSCAYMRNEZDSOYNTRNNVFBWLKADKRVAUXPVSBBCFZXGVDAWBHYDHZBVPERIDQLCIWBGFDNKCUTYOJMHJBIAHTUQXUGEMZAAOKPZUXBTRQNOUMHWDPRDLAIYQUWCISWQRRH");
    msg.maneuver_type = 34652U;
    msg.maneuver_stime = 0.778191095023;
    msg.maneuver_eta = 27710U;
    msg.control_loops = 221614114U;
    msg.flags = 101U;
    msg.last_error.assign("QKKCIVFZBJKYAKCMGD");
    msg.last_error_time = 0.0704510334704;

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
    msg.setTimeStamp(0.532063697365);
    msg.setSource(37826U);
    msg.setSourceEntity(218U);
    msg.setDestination(30484U);
    msg.setDestinationEntity(29U);
    msg.op_mode = 122U;
    msg.error_count = 162U;
    msg.error_ents.assign("ILKVDCSWRBBNDFXVLOSKAIJABTONYYPMMMFLUVNGGDDJPHNBWPLZHSLYKMAVANPOQEGXTZQAOPUECEJTDHHYCVDLTPQAVIIKKZHHYEMDJPTRIRLMUTNFTBPYVESUDZXKWHKVUGDOWVFZCLZF");
    msg.maneuver_type = 46238U;
    msg.maneuver_stime = 0.638499595974;
    msg.maneuver_eta = 43598U;
    msg.control_loops = 538651665U;
    msg.flags = 59U;
    msg.last_error.assign("MEXIQAOVBNXKSKSUHQTUAILJAADTWTZFUAARGBVYZEGPSAKVNPJBALYXNERIZWXSQCRTRPKIJCJLXUZRBSQVDTGTWOCNKWPINHDIGMLCUMKBVGMQRNFXOTWLUHWBGGIJUKWHDVFPTYSNUAITIEHSJHYVBBVYSLKCZORO");
    msg.last_error_time = 0.418740548963;

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
    msg.setTimeStamp(0.799017351757);
    msg.setSource(22188U);
    msg.setSourceEntity(128U);
    msg.setDestination(39677U);
    msg.setDestinationEntity(239U);
    msg.op_mode = 46U;
    msg.error_count = 233U;
    msg.error_ents.assign("TPYIIEWVGZPPMAKWIHGBIKALCWEMFXGXVNEOOOKVOOVTBZOGFKUUUNHVWSPVLBOMYSGFYSEGSRQFRRSJZEDNIZZYFDELLZESWJETWMDPWESKUXTZCDSAJBJCNYNDENACHQVLR");
    msg.maneuver_type = 8375U;
    msg.maneuver_stime = 0.923422022487;
    msg.maneuver_eta = 59465U;
    msg.control_loops = 1922562181U;
    msg.flags = 43U;
    msg.last_error.assign("CEVDMQVMJDCTR");
    msg.last_error_time = 0.725616324918;

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
    msg.setTimeStamp(0.487764772315);
    msg.setSource(38199U);
    msg.setSourceEntity(88U);
    msg.setDestination(58900U);
    msg.setDestinationEntity(35U);
    msg.type = 254U;
    msg.request_id = 18387U;
    msg.command = 61U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 9730U;
    tmp_msg_0.lat = 0.861098138667;
    tmp_msg_0.lon = 0.660735553925;
    tmp_msg_0.z = 0.309070744892;
    tmp_msg_0.z_units = 181U;
    tmp_msg_0.duration = 46570U;
    tmp_msg_0.speed = 0.152332149876;
    tmp_msg_0.speed_units = 146U;
    tmp_msg_0.type = 95U;
    tmp_msg_0.radius = 0.402144333667;
    tmp_msg_0.length = 0.824148595396;
    tmp_msg_0.bearing = 0.123010205514;
    tmp_msg_0.direction = 246U;
    tmp_msg_0.custom.assign("PQGLCJNAQFYLWISHZCYRULTGMBWQSUDIOPHDHPMDSOOZKXQLRPEHF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 1582U;
    msg.info.assign("BKANUPJOCZGCOKLLNAKMAWSBKFNSSRWNDCDYRYWKIPXZTJFGRTNBCIGUFRWSYTHDOIRFHTQRUYEVCIPUQLVQERFMUPWDKMZEMF");

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
    msg.setTimeStamp(0.205489414395);
    msg.setSource(6605U);
    msg.setSourceEntity(62U);
    msg.setDestination(48884U);
    msg.setDestinationEntity(53U);
    msg.type = 254U;
    msg.request_id = 31839U;
    msg.command = 200U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 6032U;
    tmp_msg_0.lat = 0.254129595965;
    tmp_msg_0.lon = 0.040581619053;
    tmp_msg_0.z = 0.610099815022;
    tmp_msg_0.z_units = 39U;
    tmp_msg_0.amplitude = 0.885131182897;
    tmp_msg_0.pitch = 0.192901123034;
    tmp_msg_0.speed = 0.432910796418;
    tmp_msg_0.speed_units = 187U;
    tmp_msg_0.custom.assign("CFAHSTRHNSPMJGYYBBSPEPUIZLVRZDWFUEFJVXRHEDONSXALYHJFZXWLONQLKSHBUFCDXJOMJLAEIRDAOJPCEBQTIKRUXBISDOGLSEGXQYONRU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 1016U;
    msg.info.assign("BQQBWOBFRDNKORHVNBSASGJQJUJKGRTUHPQYBOQSSLGTPFDRGJJTEWODHZBIAIKVXENAAYMSVIROFIFDUZEFIKYGDIZXCYZMOCXDJNPATTAACPDHOVYXWKWJSYHBIRGEEJQGVRTXZEKINQIPMJCUSLXWZGZXWTLCFZKWNF");

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
    msg.setTimeStamp(0.527077878962);
    msg.setSource(58430U);
    msg.setSourceEntity(77U);
    msg.setDestination(8662U);
    msg.setDestinationEntity(15U);
    msg.type = 28U;
    msg.request_id = 27196U;
    msg.command = 99U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 16964U;
    tmp_msg_0.rpm = 0.107439135017;
    tmp_msg_0.direction = 221U;
    tmp_msg_0.custom.assign("DDCAVVPQVMLBFFOTAXESCHXTXLZWLHRBYGCQHPORRWKUKDNVJICETYUTBMIAXGJYSNOJEUKMVRGGAVMGLLOGQPVRIIFWXOWEZMWJYWNLYKIVZEPSQRKIXVJPQLMUISDBMUZQPGCHFBISEHNQBLKAUYDDVPLNYSNTISTKUGCUSDPOKUXRFZBXHYBZZAWRBYZBDCEFHAHLCMRSGN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 18140U;
    msg.info.assign("MJOPQOCYXTLBTYOBBFAFXDUVXZUACSIXFRVEGGGLFCUXQVPGPQCANOWZZKLNLJATWLFCPEEVEIIPALIKDE");

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
    msg.setTimeStamp(0.418881142589);
    msg.setSource(65432U);
    msg.setSourceEntity(122U);
    msg.setDestination(14615U);
    msg.setDestinationEntity(206U);
    msg.command = 74U;
    msg.entities.assign("MYMUKOBUNJHBEWNMBFYBKEWZFRHXFPBXWVOZZEGOQHDVYUIVOCDTODPAXSOJSHRNPECZCXQAMIGGPPVEPQUSJUQKGNCAADARJWLOGHNDOKYOJYBUFQLUYFKNHSDAPIRA");

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
    msg.setTimeStamp(0.620404617791);
    msg.setSource(65410U);
    msg.setSourceEntity(65U);
    msg.setDestination(39515U);
    msg.setDestinationEntity(93U);
    msg.command = 158U;
    msg.entities.assign("IBBTNOIJQGAQRGEDUKQTQFKVNZIWTIDZERMKLULCBJBJEEPFJGSRZLNHKVDHWSKQIFHVQPMODIZXGVLCCEYASEQDKEPVFRTHYWQHUPXMPMYNLAGLOEAELFBBBKZNTNAUADSWUSCPMZFHCMLVRJOGKUYSOUPVOMCULYRZNUXXFZXQYGGDJFXWXSXBTAWSVHGIAMRPSFAOYXWVSQNTRZUCEHOZYWTLIKWGO");

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
    msg.setTimeStamp(0.398699596316);
    msg.setSource(32631U);
    msg.setSourceEntity(65U);
    msg.setDestination(38338U);
    msg.setDestinationEntity(197U);
    msg.command = 160U;
    msg.entities.assign("CRXXLSYCGENSJIYRCBSJJMRBZCHVDDJRZUNW");

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
    msg.setTimeStamp(0.785538903917);
    msg.setSource(40825U);
    msg.setSourceEntity(158U);
    msg.setDestination(4659U);
    msg.setDestinationEntity(109U);
    msg.mcount = 108U;
    msg.mnames.assign("POCATKNMWQNGGZHIJVHSRIDRQUNUYHLCGAJMIVIRXOKOJVYXCUPMFTPHOZETGODXIHCNEMYCJHXNELLQPIDWGWZI");
    msg.ecount = 59U;
    msg.enames.assign("UWMCLKLNCZLLCROFECYQSQOBKFAELLAMVWMVNTOVIRRMDLVFVXDJFQUWCCVPDMJKIITOSZFHZYWGZAPNBRFHQTJPWUHPCBZIDUATJHRSBAKRX");
    msg.ccount = 27U;
    msg.cnames.assign("WTBRQOXNCVYARLZDDQXSUDDJLQOFNJPHRMFWPTUYYQISQLVMCITHBLXGDFTRSVHBEQTJAIYPCKNLYVJIWGUMUHUPNKGORVRPZMCXFBAZLEQEOAOFNMMJIGVBTRGXJKIRENTOWUXASKZPHHTUFGOLRKKPSCWEZABHFKSLENEWACDGBHIWMSCKASNCHTGGJEZUZTZPYBXFRNVQZZYEMVDUAFYXLIGMUKOYVAXDYDKL");
    msg.last_error.assign("SXVDXWYQSTNRLVEFOLRKQHEGMDSRCUHNZKTUDNYCQLMFPUHYXOMXYBGIARNPFXRJSMNBANJOHIZCEEGUOYTLZOAVJIBMKRKNUDEBOOVFSLPHSXRDLFM");
    msg.last_error_time = 0.54767429294;

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
    msg.setTimeStamp(0.696443421096);
    msg.setSource(18683U);
    msg.setSourceEntity(179U);
    msg.setDestination(33468U);
    msg.setDestinationEntity(203U);
    msg.mcount = 34U;
    msg.mnames.assign("IZQRJUQXBBRSPHSXHEVBYNFKJHVCZZOTLTMKNIUMBGCISEBXWWMQAIUYZUKKTYWVLTYNSPOWYARAUIJWQEVJLPGEBMBKXETMHTZDLRKKCWHYIMSLADSNAOSYQUDADTAFQCRJRFGDFVCLDMSETGGUPZJVWZHXDWJXUUACQOHEKDVFJVPCJLLPZNNPSGWFNFYOZLBXINQJZARSEHBEYIGONPHOROHRD");
    msg.ecount = 35U;
    msg.enames.assign("OVYUODIFEZCKQDYTWTYHIKMQHGDZQNBNIGLFRZBJCYVZJBHXMKLVEXWVHPKCIRTEQWXWIXNPUUUUZPBOXAAOLTSQJLGTJYRZDRHODCXQIVGKKFUAYLXESLLSCFSWBAXEYTPIJENJVABIBQLTIKGAFOVCRHHKPWMSIUFLJSZNJNXQWHCODHGBMUCBDUJRAEOCDEKM");
    msg.ccount = 135U;
    msg.cnames.assign("GHBPHYUIYNJKJETCGDFDZNBYRADHCPTPPDIOTGBUWKHRSVUCCOKDBWXZDXFOFEGNTVILYTZKEYBARTOTZREOLZCQYBLACXMFSBIIWALWACNYRDPSUEUJXMWSGNXKFXUMZNBIVJRVHZKQREQCXOMUVSXVWEKMSHIKJAJUSWWWX");
    msg.last_error.assign("VCIDNZEAPVYOSUNHKMIACMIVYKYZTQCBJMMOFGEHUEGWJVSDDUELZPMLTYZSFXJNLIDHJENJQKVQMHWRFTHWVCSNHUWXJLZLIAMMPFSG");
    msg.last_error_time = 0.338040963221;

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
    msg.setTimeStamp(0.936706480391);
    msg.setSource(49741U);
    msg.setSourceEntity(141U);
    msg.setDestination(57992U);
    msg.setDestinationEntity(175U);
    msg.mcount = 91U;
    msg.mnames.assign("TXBHUSAVBJZAHWETTOLKJNCXXSGXNVNKDRCHVJNOPZJMSEVHBSGDWWSZWDKISTFVBQCFFJPTTRERMDMBJFIWCF");
    msg.ecount = 195U;
    msg.enames.assign("TIUGNDAIWKQWIBFJRWEFPRTLCWVCXSELOZBRYSBMQQCANZOURVYYFQBZPVSFXXDILXVOULYZVUXWUQKLISEQHKAHJMHNDPFGDMWRPXLXYGBJTHGKFZIHBAGNIPXUDYZOARHVGEEAMUWEXMGFAANFDDVBVKCGKTYSRTCJBORNHJYIEEZJMWUFOZEVKBRJAOLSLSFTPYCQJMMKK");
    msg.ccount = 234U;
    msg.cnames.assign("FJBHHPTHUJUVHYFOKCXUADPEHUUWVZBOZHZKLBZJEYCEJUGRATDPJYUQYGXTBVGRXHJPELEETWXQCJCIPDTSVKYIXMQTFKPAFBHXACIDPFMFOLZGJERZIMNZRHCTWYNGPQWNSQBGMDOORLSNVZVQKBCSLZFQN");
    msg.last_error.assign("LIESDLKLHZHRRNRWSAKPPQBWAYRJUFVUQMSJZXJUUIVLESXTLCRCVLMDXTKETUHZNBWZTMNZWSFDZCIYROISGEBUJOLCWTHCBRGQNYIXKIEUVVGDNRHQVAQFNFHWTQEOVPMMNVQAHDZSUBIHKAUNYFXHJJLOLJBXJT");
    msg.last_error_time = 0.608000215377;

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
    msg.setTimeStamp(0.915227267449);
    msg.setSource(41194U);
    msg.setSourceEntity(203U);
    msg.setDestination(64264U);
    msg.setDestinationEntity(126U);
    msg.mask = 242U;
    msg.max_depth = 0.687484617549;
    msg.min_altitude = 0.968504886787;
    msg.max_altitude = 0.839203250507;
    msg.min_speed = 0.911772713677;
    msg.max_speed = 0.0658731756123;
    msg.max_vrate = 0.318751133439;
    msg.lat = 0.83940944773;
    msg.lon = 0.0518849789736;
    msg.orientation = 0.33526046486;
    msg.width = 0.336299974887;
    msg.length = 0.311266686661;

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
    msg.setTimeStamp(0.584060753015);
    msg.setSource(2594U);
    msg.setSourceEntity(124U);
    msg.setDestination(55687U);
    msg.setDestinationEntity(193U);
    msg.mask = 84U;
    msg.max_depth = 0.875951379658;
    msg.min_altitude = 0.69195920475;
    msg.max_altitude = 0.0367886119135;
    msg.min_speed = 0.212032858149;
    msg.max_speed = 0.678432968385;
    msg.max_vrate = 0.0213570498781;
    msg.lat = 0.666471485339;
    msg.lon = 0.304003403217;
    msg.orientation = 0.363426390288;
    msg.width = 0.411758300771;
    msg.length = 0.0208106669474;

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
    msg.setTimeStamp(0.412728982547);
    msg.setSource(64357U);
    msg.setSourceEntity(91U);
    msg.setDestination(63145U);
    msg.setDestinationEntity(239U);
    msg.mask = 85U;
    msg.max_depth = 0.481907372235;
    msg.min_altitude = 0.282101840108;
    msg.max_altitude = 0.683990489585;
    msg.min_speed = 0.904702786664;
    msg.max_speed = 0.597351774634;
    msg.max_vrate = 0.961401453383;
    msg.lat = 0.779427849337;
    msg.lon = 0.481810898072;
    msg.orientation = 0.0370376787755;
    msg.width = 0.161583941452;
    msg.length = 0.0533526800303;

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
    msg.setTimeStamp(0.807527804143);
    msg.setSource(3058U);
    msg.setSourceEntity(236U);
    msg.setDestination(44418U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.099572581844);
    msg.setSource(54899U);
    msg.setSourceEntity(12U);
    msg.setDestination(46375U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.926929654943);
    msg.setSource(9216U);
    msg.setSourceEntity(159U);
    msg.setDestination(64047U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.80465224957);
    msg.setSource(24764U);
    msg.setSourceEntity(174U);
    msg.setDestination(34550U);
    msg.setDestinationEntity(88U);
    msg.duration = 24932U;

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
    msg.setTimeStamp(0.262632439745);
    msg.setSource(61530U);
    msg.setSourceEntity(49U);
    msg.setDestination(40338U);
    msg.setDestinationEntity(158U);
    msg.duration = 4818U;

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
    msg.setTimeStamp(0.108075292137);
    msg.setSource(19092U);
    msg.setSourceEntity(199U);
    msg.setDestination(20370U);
    msg.setDestinationEntity(216U);
    msg.duration = 63794U;

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
    msg.setTimeStamp(0.56601649239);
    msg.setSource(43298U);
    msg.setSourceEntity(85U);
    msg.setDestination(39675U);
    msg.setDestinationEntity(51U);
    msg.enable = 101U;
    msg.mask = 2129274734U;
    msg.scope_ref = 1331641970U;

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
    msg.setTimeStamp(0.673367133443);
    msg.setSource(58509U);
    msg.setSourceEntity(27U);
    msg.setDestination(57009U);
    msg.setDestinationEntity(224U);
    msg.enable = 156U;
    msg.mask = 2416442829U;
    msg.scope_ref = 2539472061U;

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
    msg.setTimeStamp(0.0923500035738);
    msg.setSource(60325U);
    msg.setSourceEntity(73U);
    msg.setDestination(38387U);
    msg.setDestinationEntity(36U);
    msg.enable = 10U;
    msg.mask = 186150985U;
    msg.scope_ref = 2946569532U;

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
    msg.setTimeStamp(0.734327832579);
    msg.setSource(51071U);
    msg.setSourceEntity(205U);
    msg.setDestination(7176U);
    msg.setDestinationEntity(109U);
    msg.medium = 221U;

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
    msg.setTimeStamp(0.983681391599);
    msg.setSource(57906U);
    msg.setSourceEntity(6U);
    msg.setDestination(55314U);
    msg.setDestinationEntity(84U);
    msg.medium = 142U;

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
    msg.setTimeStamp(0.839354447426);
    msg.setSource(4723U);
    msg.setSourceEntity(176U);
    msg.setDestination(56052U);
    msg.setDestinationEntity(26U);
    msg.medium = 136U;

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
    msg.setTimeStamp(0.705630601217);
    msg.setSource(22830U);
    msg.setSourceEntity(202U);
    msg.setDestination(32198U);
    msg.setDestinationEntity(91U);
    msg.value = 0.0611823742946;
    msg.type = 116U;

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
    msg.setTimeStamp(0.694900312543);
    msg.setSource(62493U);
    msg.setSourceEntity(3U);
    msg.setDestination(7444U);
    msg.setDestinationEntity(26U);
    msg.value = 0.387393321518;
    msg.type = 86U;

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
    msg.setTimeStamp(0.326799195523);
    msg.setSource(55036U);
    msg.setSourceEntity(238U);
    msg.setDestination(45025U);
    msg.setDestinationEntity(179U);
    msg.value = 0.403212961095;
    msg.type = 185U;

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
    msg.setTimeStamp(0.697672961684);
    msg.setSource(21799U);
    msg.setSourceEntity(71U);
    msg.setDestination(35814U);
    msg.setDestinationEntity(59U);
    msg.possimerr = 0.47274131415;
    msg.converg = 0.955466566692;
    msg.turbulence = 0.0871095066442;
    msg.possimmon = 237U;
    msg.commmon = 92U;
    msg.convergmon = 16U;

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
    msg.setTimeStamp(0.983247158675);
    msg.setSource(53659U);
    msg.setSourceEntity(192U);
    msg.setDestination(12027U);
    msg.setDestinationEntity(166U);
    msg.possimerr = 0.638365207619;
    msg.converg = 0.968541947299;
    msg.turbulence = 0.601463642547;
    msg.possimmon = 242U;
    msg.commmon = 20U;
    msg.convergmon = 13U;

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
    msg.setTimeStamp(0.741201399742);
    msg.setSource(51192U);
    msg.setSourceEntity(207U);
    msg.setDestination(54706U);
    msg.setDestinationEntity(6U);
    msg.possimerr = 0.0601952395114;
    msg.converg = 0.309389940056;
    msg.turbulence = 0.901670502277;
    msg.possimmon = 8U;
    msg.commmon = 70U;
    msg.convergmon = 73U;

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
    msg.setTimeStamp(0.295923346339);
    msg.setSource(13178U);
    msg.setSourceEntity(102U);
    msg.setDestination(27135U);
    msg.setDestinationEntity(211U);
    msg.autonomy = 52U;
    msg.mode.assign("ATWMFFWSPXOTRMREETYIMQTAPPDOJJBBJHBOPISQVMMKFAOCPTYKXIKZRWUCQEUAPIFFAMJNYSDOLXBLGWDPGCAKECBYZUVKUZGTGYTNJDNHDBPDLLVGLEZBKEXCCCQDMXMQWGAIAXLOOVQEQHQYLXRREOVUGUZJQHMMNHKRHIIBSVTFDYSWRFNLJETHDWGCOSEJWYCLSGUHUVCBYKPZTNVKAVZSZFFNRFRIJUSXUZWIIONNWPJX");

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
    msg.setTimeStamp(0.440233002762);
    msg.setSource(55298U);
    msg.setSourceEntity(122U);
    msg.setDestination(1600U);
    msg.setDestinationEntity(210U);
    msg.autonomy = 183U;
    msg.mode.assign("AJZYYSVHIIPPPFRLNORQYWQGPXOYUTZIGYZCHMSCKCACEAMQTTWOEVNGQMEXGPJQUOXGUUQYBEFHBVLXJOKRSIBFNLJLCHCJXSILEZEXOOPLCDTBMKGRGDRUMFJRLGDRIYTZHCAXSRUQWAZAKWZBPFUNUZEXVNMBTKTYFDUSFKBUNLGFLJQHSIZVAMMSETVAODMHWBDBSWTIXWVOHNMEARSKWQXVDPYWFL");

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
    msg.setTimeStamp(0.879056410465);
    msg.setSource(49814U);
    msg.setSourceEntity(74U);
    msg.setDestination(61362U);
    msg.setDestinationEntity(60U);
    msg.autonomy = 10U;
    msg.mode.assign("YRAURNFOPVRKTKUHJCDYHOIPDDKEBTWRLIOFYGWPSSGGGMHQCFJBFYFFXWPNPKLXRICRLGVQDPLYHOBUHMMYNWJFKBGENVCCQCRAWSTXQNECHHNQXBZMBWGAYAMRIXALUOZGBNOWXEIMEDVZAURZIPFTJMVVJPNDCBSCBKDTKTQXVKQWLSTWXSLSJHTLVHABEZZIQDXGAONMOJYPZMOLFYZTSCGEDJHFOEURJZANEYTQAUVI");

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
    msg.setTimeStamp(0.333516301336);
    msg.setSource(10089U);
    msg.setSourceEntity(135U);
    msg.setDestination(17597U);
    msg.setDestinationEntity(56U);
    msg.type = 254U;
    msg.op = 142U;
    msg.possimerr = 0.148362723812;
    msg.converg = 0.267354205167;
    msg.turbulence = 0.479344095743;
    msg.possimmon = 46U;
    msg.commmon = 24U;
    msg.convergmon = 245U;

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
    msg.setTimeStamp(0.434805455305);
    msg.setSource(38507U);
    msg.setSourceEntity(207U);
    msg.setDestination(64990U);
    msg.setDestinationEntity(64U);
    msg.type = 77U;
    msg.op = 138U;
    msg.possimerr = 0.149742210581;
    msg.converg = 0.225204798954;
    msg.turbulence = 0.172523328166;
    msg.possimmon = 163U;
    msg.commmon = 198U;
    msg.convergmon = 204U;

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
    msg.setTimeStamp(0.572814349296);
    msg.setSource(26463U);
    msg.setSourceEntity(85U);
    msg.setDestination(40116U);
    msg.setDestinationEntity(245U);
    msg.type = 108U;
    msg.op = 175U;
    msg.possimerr = 0.412702419879;
    msg.converg = 0.413450132601;
    msg.turbulence = 0.919156025124;
    msg.possimmon = 103U;
    msg.commmon = 159U;
    msg.convergmon = 213U;

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
    msg.setTimeStamp(0.332634456291);
    msg.setSource(43598U);
    msg.setSourceEntity(151U);
    msg.setDestination(35616U);
    msg.setDestinationEntity(108U);
    msg.op = 119U;
    msg.comm_interface = 42U;
    msg.period = 34800U;
    msg.sys_dst.assign("LADQKVLHSJKXODSXPNNQCMOGZUAPTLBCATCSGFZILPYEFSDDUMQBXWQEOXPPNMOWUFCWSORQCGNVPPZUEJYQADZMIIFMF");

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
    msg.setTimeStamp(0.552932468898);
    msg.setSource(60493U);
    msg.setSourceEntity(110U);
    msg.setDestination(26301U);
    msg.setDestinationEntity(118U);
    msg.op = 98U;
    msg.comm_interface = 91U;
    msg.period = 64026U;
    msg.sys_dst.assign("TDIGDYAVZNZRPLORTKRYPWHDPTPXABAHBLKWZQYDZJKZGVJBIPGEQLXVFIMHAQEMHXZVACAWKFXQCQGWSKGIFTOZUWWJQIGSUGLRFXSFSNPNNMGUEYUOKTTFETTOAQKURCLXNJFFKHNQRESDCPO");

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
    msg.setTimeStamp(0.882725686848);
    msg.setSource(45269U);
    msg.setSourceEntity(178U);
    msg.setDestination(46984U);
    msg.setDestinationEntity(158U);
    msg.op = 51U;
    msg.comm_interface = 27U;
    msg.period = 5777U;
    msg.sys_dst.assign("TLEKDUTGURLNEKKZYFJYNIBBGGSRTXYLXUICUHRVPKXSVVAHCDSOUMXYENGBILTQYVMHKHMQCEMOYAVPFJUMOEQQHXDOTBLIXARMBVEODFEZANTZELJPJNZKFTMVQGVXZLBDDIWDIUYJXSUSZOPPZWNCHGGPLRLGXWZCFWOXGWCDMFLKRFBRWAQWEDSHACQHCUJBNHIPARISROCNJIPPYKAHOTFGTYAYVQVKWIKMSUOJBTDBFMQ");

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
    msg.setTimeStamp(0.96682824781);
    msg.setSource(32311U);
    msg.setSourceEntity(50U);
    msg.setDestination(31859U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.0405874823771);
    msg.setSource(30528U);
    msg.setSourceEntity(31U);
    msg.setDestination(20873U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.0338097392606);
    msg.setSource(12770U);
    msg.setSourceEntity(221U);
    msg.setDestination(37547U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.26533871146);
    msg.setSource(3603U);
    msg.setSourceEntity(31U);
    msg.setDestination(13593U);
    msg.setDestinationEntity(180U);
    msg.plan_id.assign("TSDCTKEDBDHTEAMJVEFLJZPVVOMTCEJWUPPMYNGPJIHVNPLBZXKZAGGMKWJXIEWUXEZBFIIXNIZFTONEABUBPRILSUCLZCSQVYFRVDPDFPVWHWXAKMFYIKNCCZAVHVKIGNYRPYUHOMRCSYRQMFGGTQJQQGXABSXQEXLQMRJDKAOLOLLTCQ");
    msg.description.assign("YSSWQJOXPTFDQYCHIOADHTXXCTTMBGYBHGLZGTKCOGLWOTTPES");
    msg.vnamespace.assign("NHLEEJRCFYBRCMFAFJCDASPLRZXBRGUPITVGNCPTTPRNNXRITIYZJEVMRUYUDNOUMSBOMMKFSUZWMNSHDPJCGFMBHATAXZYBTQPCVDVGKDRWMGNC");
    msg.start_man_id.assign("FHNQBAUKDGMRIREFSJYJZWXDPXGIUAWTTHGOZIIBVAPXLZGPWABCADAHKVCCVDJBTVP");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("DIYHTBMCGZYVB");
    IMC::FollowReference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.control_src = 54305U;
    tmp_tmp_msg_0_0.control_ent = 86U;
    tmp_tmp_msg_0_0.timeout = 0.523604390799;
    tmp_tmp_msg_0_0.loiter_radius = 0.528965747748;
    tmp_tmp_msg_0_0.altitude_interval = 0.775410646831;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::NavigationData tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.bias_psi = 0.138688376749;
    tmp_tmp_msg_0_1.bias_r = 0.475348545655;
    tmp_tmp_msg_0_1.cog = 0.0538066209278;
    tmp_tmp_msg_0_1.cyaw = 0.241338520818;
    tmp_tmp_msg_0_1.lbl_rej_level = 0.0218537309365;
    tmp_tmp_msg_0_1.gps_rej_level = 0.943467050204;
    tmp_tmp_msg_0_1.custom_x = 0.195227559125;
    tmp_tmp_msg_0_1.custom_y = 0.291664275301;
    tmp_tmp_msg_0_1.custom_z = 0.866977515953;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Fluorescein tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.8090321421;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("JMSVPRSXQGABSHGONLFYCADCWGJRODESOPLKAWWXTQKTUPZTMQZQNUEQEZABKHBBPTKFYRULIJPFKFAJACURRWSITRAIRLNJHGSPVVQZQPDMYOIBDFMCMK");
    tmp_msg_1.dest_man.assign("RDGLCADTCINKCMTRYPFIOOLKBTKWOSCWJROAOHMOBHZJIA");
    tmp_msg_1.conditions.assign("YFMOJBAJQTPWQLJBBFZEAZFATHXYHARKOEWLYYGYNSDOORPSJNJFKXXMZPNIJBFRAVQ");
    msg.transitions.push_back(tmp_msg_1);
    IMC::Sms tmp_msg_2;
    tmp_msg_2.number.assign("XZYUIKHSLPOGKQNFEZXSGAVEMUYINUQLNTDBJXQHTKMPZVAVMNPTO");
    tmp_msg_2.timeout = 13286U;
    tmp_msg_2.contents.assign("RMUDNVCPSDLLEBXMRJNRVWPKTTTICIYGQORFAXDQAPGACMJJBCHUYDOPIXKWAEQIOXZNFZNMCZCLGTYEWBFFSRGZLVGALQANFOETEYUVOPGGTEXFRXNZIICZJSSMQHDSBIDOCKCKAMVJUSTLZMNVXVOUPRGUH");
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.764123287688);
    msg.setSource(25149U);
    msg.setSourceEntity(175U);
    msg.setDestination(5138U);
    msg.setDestinationEntity(84U);
    msg.plan_id.assign("AVQXVNVIQUAFKQKOQUYNTBMZZOBLZGPFHHLVJJMMAFVNZSMEHJERWBELKGHUCQIPSEWOVSUSCTCMMOSSHC");
    msg.description.assign("JPBGPDBKNRD");
    msg.vnamespace.assign("RSDUIMBSQCLPCRJBTDAUAOKJFNIJRCJVHGZXHFCAILQGHHVBZKYTOKHWDWGYZOPMOIITZAUOKULECZYRFIXEQMZMLYJISQPZTVXHFOWJHEFHMIHCDMTUBJNMUQQIDNVWJSRXSFXRSAXEYKXDDFAUNNPATRBYP");
    msg.start_man_id.assign("MEMSQYSIEZAILEGGV");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("OWMQXDCEYCGFWTPIXCEQRGDNHJHFVXXYWHUGETEJOWILBHIPGVVRXGQJPAMPVXDFATKKSAGOZYEGPTTMEKQQSMBVCHRFUNNRKIGSBTWEIWWPJVZEANZDXXGFJABYZZSUZPCJHINSJKWRRVLMRTVWKFHLWHDUB");
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 61801U;
    tmp_tmp_msg_0_0.lat = 0.0993230066206;
    tmp_tmp_msg_0_0.lon = 0.671167229575;
    tmp_tmp_msg_0_0.z = 0.271117757976;
    tmp_tmp_msg_0_0.z_units = 53U;
    tmp_tmp_msg_0_0.amplitude = 0.168430279726;
    tmp_tmp_msg_0_0.pitch = 0.932847481317;
    tmp_tmp_msg_0_0.speed = 0.616938508949;
    tmp_tmp_msg_0_0.speed_units = 187U;
    tmp_tmp_msg_0_0.custom.assign("ANAXLRHWEDHMVICQCEOIRMGKAGNJTPNAJHTYUCTKJRSKUBKORSFAUBRMQPLWLQARXDIIVOSXNXXEJHZBGCVBXYROCPGE");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::GroupMembershipState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.group_name.assign("LDLNJGJFGTJPBUPQFCUQXEVKVLPIIVWJOEXTOGLWLDVDNOJKFMDWTCEYPTNFKPIYWLSDEYCPTFELBQXIVQOEVUKOPDFCXRBYISIPCNGZTNDKHBHCYUVMZXHWHRHZDKFMAHWJEZAJMIVFLWTQRFK");
    tmp_tmp_msg_0_1.links = 935806990U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::MagneticField tmp_msg_1;
    tmp_msg_1.time = 0.817479671833;
    tmp_msg_1.x = 0.490203240472;
    tmp_msg_1.y = 0.401321400308;
    tmp_msg_1.z = 0.620654828004;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::EntityList tmp_msg_2;
    tmp_msg_2.op = 167U;
    tmp_msg_2.list.assign("ANDIYEXFJYNGAFVEZDSCVPJVNBRBTHATHJEAHETZATOBTHFWYYCJVKHALROCWOMIDAFQNGLROPIYSEYOHSZPGXL");
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.551370581362);
    msg.setSource(32512U);
    msg.setSourceEntity(157U);
    msg.setDestination(58322U);
    msg.setDestinationEntity(21U);
    msg.plan_id.assign("UBVUUTZGDCZ");
    msg.description.assign("TMRDLTWMGRHPFQNDHPTKBFTIKLYTUVYXYIMGSJBNUCKPEWQWVJARLCAZXTZDESMFXAEOCGOVUICNEEHSSLSVJDCMVJDSDUKCNBAVJOQPGXWPCFQTUYZFNWDGIMVNYXJHLKZAIYKSZQABNPRRMJTFOWQLRFJDKZWBOCIFXJZCSPAHRBBDXIRPEYBNKBHVGHEGAQFZMQHUSYDXMVARLQOQOUZPIBNVEXUCWGURSKHENJYPOMILGYLZG");
    msg.vnamespace.assign("OXWOHYEIQRVLTIKZLJPRSNJXNINCNWUTPKVSPBKZJFSCIVYBQWRAOEQLDLQSRYCWYUCKPYGFNVKHLPNDNODQILQMCRZABDOZFVOUMFCVCXSBIKEGCBSATOHGWNVJKQCZFATWULSJBQTGMYZOVVURRAHAPRXAMUUPYHZQHUFXXBFEHMTDDGQZBSDYWGHIUG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("SHOLXOFMXCMACIPSKZVVDHJHNTLQSVDJQJISJUBMLEBQMRTPQYHHKDYEGTTMLFRAEOIRZ");
    tmp_msg_0.value.assign("YTHHNFSXQLUCCNSIMKUPKHWQUJKHPIPBMLSGUTZHWJXCFBJEACZRWOYFOBQMRCZRFANTNWVSNQHAGHJZIOYZTEKYKPBKVIMDBUUMLONLOBWTIPKRMYWDYSJVELSQBHHOQFTTWZYDWVRPSAFCXVXNBXXJCYIEPDEZTRGGJLVTODULBLXSZEVOZLAUHQMPAVGDKLRGGYSFXWTGVWKGMAGMIJEFAONEKVPCXIIIFQAENMPJCDDZRBRF");
    tmp_msg_0.type = 191U;
    tmp_msg_0.access = 123U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("IDAPMTKMEJYSFVHOULFEYQACKDELHKYYSVNVXWWFAAZJMAGWNJOJXNIXIOWSEKEILRIIXWRTTLVNAGBUAIVCPFKDTXHTJRTZCCHBQQEPW");
    IMC::PlanDB tmp_msg_1;
    tmp_msg_1.type = 215U;
    tmp_msg_1.op = 162U;
    tmp_msg_1.request_id = 34865U;
    tmp_msg_1.plan_id.assign("HVETOTJYAFKRZQRGJJZJZODHUGMWJNTUZCKJDPLOCPKVCSTXYXZAEVUWNXBLKBLEEUIQPDFBWONMRYBOTQURCWGIFXGDBLGRRXDNLYMNQCXQUHPIWRMGKWYRGAOPCYSAZQALXIRSSAEQOHKZAWSKFUYMHFHUTZCOHTBFCFUKQMITQHVNYOEJQTCKNYPSKDDSNTOGVIXISFLSBM");
    IMC::UamRxFrame tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.sys_src.assign("MUVLGXFENHAVQZAQRMBGREWBNOYRVEZFBFTLUIWFQZOQUEOITHEDSVFOPXKZNUHZKJAWCHKFCZCXWQLXYC");
    tmp_tmp_msg_1_0.sys_dst.assign("YROFCRBDRCMTRLRQKUPQXHPMOXZUBSGCCBJBEROGNHWMNXDBSTNFJHYWZLJP");
    tmp_tmp_msg_1_0.flags = 193U;
    const char tmp_tmp_tmp_msg_1_0_0[] = {-39, -14, 109, 36, 15, -81, -53, -39, -43, 65, 109, -85, -59, -43, -45, -63, -62, -26, -122, -63, 67, 19, 113};
    tmp_tmp_msg_1_0.data.assign(tmp_tmp_tmp_msg_1_0_0, tmp_tmp_tmp_msg_1_0_0 + sizeof(tmp_tmp_tmp_msg_1_0_0));
    tmp_msg_1.arg.set(tmp_tmp_msg_1_0);
    tmp_msg_1.info.assign("ILGCAELCJPFFFAIQFXDXFUBQVIQAUDNLTJMYTBCHBOHGZATXORUDSDEIRNEDALUUHUVBGYXZKVEQTYUHDBPFM");
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
    msg.setTimeStamp(0.438096376495);
    msg.setSource(41674U);
    msg.setSourceEntity(59U);
    msg.setDestination(6426U);
    msg.setDestinationEntity(137U);
    msg.maneuver_id.assign("TUNEWDKLOAICWTXPZGQPSALCTFJYLOXPH");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 31562U;
    tmp_msg_0.name.assign("XKGIGIPOVBJUACWVQB");
    tmp_msg_0.custom.assign("QYAYTIMQJEBUBLOOBZNOL");
    msg.data.set(tmp_msg_0);
    IMC::Aborted tmp_msg_1;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.48814837342);
    msg.setSource(3599U);
    msg.setSourceEntity(66U);
    msg.setDestination(30209U);
    msg.setDestinationEntity(132U);
    msg.maneuver_id.assign("KPZDKDVTNLKNSSPYWJMYMFGFWHAHUOXNEBYURAWNLVRGIMKLJXHAAHIJFUCUYZII");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 50697U;
    tmp_msg_0.lat = 0.10130032177;
    tmp_msg_0.lon = 0.082907591283;
    tmp_msg_0.z = 0.64779921706;
    tmp_msg_0.z_units = 219U;
    tmp_msg_0.speed = 0.909641337938;
    tmp_msg_0.speed_units = 105U;
    tmp_msg_0.bearing = 0.587166341424;
    tmp_msg_0.cross_angle = 0.511626321163;
    tmp_msg_0.width = 0.431306050774;
    tmp_msg_0.length = 0.452772241505;
    tmp_msg_0.hstep = 0.579526386004;
    tmp_msg_0.coff = 141U;
    tmp_msg_0.alternation = 5U;
    tmp_msg_0.flags = 199U;
    tmp_msg_0.custom.assign("ZGKFALEUQSAGJUDSZHJYFTJGXISKHSHEJEFGBKJYSYGSUBHNWERESNKKYPDQJHNWCODUZZZKNJXJTUWMXP");
    msg.data.set(tmp_msg_0);
    IMC::AnnounceService tmp_msg_1;
    tmp_msg_1.service.assign("DFIGGRCJXHQJOJLMLBIKJEHON");
    tmp_msg_1.service_type = 222U;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.485971284953);
    msg.setSource(25774U);
    msg.setSourceEntity(219U);
    msg.setDestination(976U);
    msg.setDestinationEntity(21U);
    msg.maneuver_id.assign("YKBDHMXSIOPRLJQHFNBSZNKKIZOHTVVCSEDDSKKQGCLEQSFXMELJDPYKUCTWHBPCFO");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 1256U;
    tmp_msg_0.flags = 165U;
    tmp_msg_0.lat = 0.57348954487;
    tmp_msg_0.lon = 0.388562385765;
    tmp_msg_0.start_z = 0.557503718477;
    tmp_msg_0.start_z_units = 110U;
    tmp_msg_0.end_z = 0.900635082509;
    tmp_msg_0.end_z_units = 231U;
    tmp_msg_0.radius = 0.6305612114;
    tmp_msg_0.speed = 0.962845711302;
    tmp_msg_0.speed_units = 25U;
    tmp_msg_0.custom.assign("JMGAZLXYIZXGUTDCYSSRYHDKJEZWWNCVUOVVXAZKIWNPHQQLQQFXANCITHSFVFOHBSTEELTAELNPFQGNWGYYVCYAGF");
    msg.data.set(tmp_msg_0);
    IMC::DesiredSpeed tmp_msg_1;
    tmp_msg_1.value = 0.229806083536;
    tmp_msg_1.speed_units = 146U;
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
    msg.setTimeStamp(0.0303489527196);
    msg.setSource(49206U);
    msg.setSourceEntity(85U);
    msg.setDestination(9198U);
    msg.setDestinationEntity(20U);
    msg.source_man.assign("TFVLQBMDCGDKDZTFDCGNOXICVPUZIMBHNGGIPJUQSABUGQELIWFVJRNVEVFCIPQLZRRWOHHDEZQCSQVEXEMFIAOXJTMMKLDHNXBPVPNWHZLRMZDOPEGJEDCOSYPYAXOUFHXTTEPRFODQJAJCZSFG");
    msg.dest_man.assign("PNDDNGAERCHBLOBRYIJWVCUKUMONLQRIJIRTOHAMDEVOWGXAHGSGRACZLUHNAIBSWFJPHADSORCHVMENDDXYIHNJVNRWPGAGLBBAZSWFZJXZVXKYDVZDBOFPXEFYQDTLNSLYUYXIMFCCIUTGGCOOJLJHKSQIWFNOEVSKQQMEDNBSUT");
    msg.conditions.assign("USZOECXLWVYSLYABAISXCEKPNBUPSMZZLGBIBJMKWNGFZUEUREIXQXFVHTRNWRZVVPYAIPCGKFDQOJGEENFHOOIRQGZCHCRUATUEXTWUJLRFXLIYRVJMYWZFHWD");

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
    msg.setTimeStamp(0.25746089632);
    msg.setSource(47118U);
    msg.setSourceEntity(166U);
    msg.setDestination(1298U);
    msg.setDestinationEntity(189U);
    msg.source_man.assign("POWMQOVVKESGXFJROEYICHYA");
    msg.dest_man.assign("YIUZXHILXVCEYBCQXLOHHJWXNNPQCMAXHLBSLHZUMJUAORTIIUFIFYVJSSMWW");
    msg.conditions.assign("FOPUGLVLMESSZYHLFWGWCYXODMYBUGHPSMAVNNBVBBYWTLERTEYSLQXCKHCIJMRWMKNXZYJZAQIXDKWGAMLKOGFRABJNUVSEDDBGKOJZPDLNXIIYWXACQVWVWPFQOIHTAFITMZCFYUUOATIFHLRVVDYBKEWJRNFZDAQRGXHPUPZE");

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
    msg.setTimeStamp(0.400403587182);
    msg.setSource(33998U);
    msg.setSourceEntity(238U);
    msg.setDestination(43848U);
    msg.setDestinationEntity(2U);
    msg.source_man.assign("NDRWTZFXFCSHRZNGDVIDQISFNJONUCWSQAQBBKLRDSFZJDUGIPAFUWUDFJHMMJFGCGTPHYPPUZXZTDPVAVPYILASUUEVFXBRHIJZPWREQXSMANHFLUKEAMHROEBKVVYNDLIOGRWZOJKSGCWMJKQWCHRBNXTEYVXMBEMOECKVZXGLEPPTAVQLLOJCSIOBXEHYAQCHOSWXK");
    msg.dest_man.assign("MPKTSNRBNPVBGEOOAJYLRIKRCDBOBLQQCFVCNU");
    msg.conditions.assign("WWRSEKNLZZEWOJQUXUEJGVDVFLHBJUNDIOZHOFRAG");
    IMC::HistoricSonarData tmp_msg_0;
    tmp_msg_0.altitude = 0.463310309762;
    tmp_msg_0.width = 0.654550655235;
    tmp_msg_0.length = 0.763259336268;
    tmp_msg_0.bearing = 0.944130027179;
    tmp_msg_0.pxl = -4136;
    tmp_msg_0.encoding = 179U;
    const char tmp_tmp_msg_0_0[] = {58, 126, -126, 58, 98, 22, 50, 38, 33, -28, -57, -23, 77, 109, -121, 98, 100, 98, -101, 40, 13, 9, -117, 92, 116, -37, -17, -31, -128, -79, 126, 62, 77, -107, -11, -28, -116, 111, 123, -78, 59, 67, -93, 126, -14, 2, 32, 22, 44, -96, -13, 112, -125, -8, -14, 114, -35, -39, -41, 73, -55, -1, 125, -36, -39, 93, -30, -88, 54, -79, -107, -79, 49, -70, 112, 101, -59, 29, -79, 54, -80, -83, -6, -85, 27, -91, -110, -114, -72, 24, -81, 118, 96, 27, -125, -1, 109, 109, 56, 4, 120, -25, -117, -11, 48, -112, 85, 48, 102, 68, 8, -98, -80, 48, -82, -6, 108, 52, 103, 90, -99, -124, 84, 50, -71, -118, 125, 62, 5, -53, -41, -57, -101, -100, -116, -43, -92, -1, 35, 34, -48, 65, -126, -65};
    tmp_msg_0.sonar_data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.9857139121);
    msg.setSource(19352U);
    msg.setSourceEntity(156U);
    msg.setDestination(40583U);
    msg.setDestinationEntity(96U);
    msg.command = 13U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XGUHBMNFFXSZIYXRAVEIWAGZVCFXOOXZKUERABLHITWWHBTKMPXOOUINJSGVACDDYGGTYYRBNWILOHJBNRYDVMKYSDAZWKNTYHEJXJCRGPFNIVQMPQYAHDRDFZQQNEGCPTOMLSBZTKGUBPFGSELLWUVMOBADWPEBGJOQOWCTINCLXXREUOZSWRQEFJPKMNMTKWRIULKLKDIVRAQQSJFLH");
    tmp_msg_0.description.assign("AFDNMQHGUMZRKJFUNRNEZELOXWDIQTSVOE");
    tmp_msg_0.vnamespace.assign("QABLZAUTXIDQLFTFYXOAJTWYJOKVEUKUSYMNPGQSNWBKOCSLEFZWIIBSMXWKNMNEOQPGNKCSAKWFICJMOEGBHBBBIGTLGVBSMZERWYGPJAXNUDJH");
    tmp_msg_0.start_man_id.assign("ZKOMXFBTREFPZBGBOROIMHZXFRESHISOJSJBVQUDVOAVXAKVAAHXUBNNYDYVYHDRDTZXPNMKIOUCTAFCODMBTTFLWHRFXZEGCJLDWKRALRXVIXKLSAWIMQCIQISVFVASLWJUBKHTT");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("TIZGLBCIGXDVGKDBWSZMLJHCLEMGOENWDOCAKAUIOIAVEHWCAKPLRQZNPSYNBDJCNLJMJBUWJIFQVWGUTTGTELXUKTWYYV");
    IMC::CoverArea tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.15702471574;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.100472571769;
    tmp_tmp_tmp_msg_0_0_0.z = 0.569824274346;
    tmp_tmp_tmp_msg_0_0_0.z_units = 236U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.279136393023;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 93U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("VTVEKRIBDTWUZWKRXTAMNQTCYVBKSBJAEOXUBSGMTCWXFXYLYUMEZBCUPQLZYJRPHDGOPKCIJUHFIKLTOXINFIAZGXMGMILGCXOSMSQSSH");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::QueryPowerChannelState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("JABVRRZGIWHIERPIZNXTJISBUVXHMEWQTNFHWVRWLQKYLRNAUONEKMUSRWYCYJZQUYGLXBOSGZSRVXTXZKBRKAMGUQSDWIHELBXYONHUWAKPFTFOAZBBJTPDVPOHXNFAKGYLMCLHXWYCCDIQFJFKMUABZLJ");
    tmp_tmp_msg_0_1.dest_man.assign("KZCTHPFDYHDKRAYXYNRNAERVPLVNLNOXMEAVYRTXXLJPSMSULHIUHNXUJQGNUZVIXGVBNWQDCFOBDSUMWYMOREZEBIMIDPGAJBCFZACKTROMQMFFIOOBKHNGJCJMRGSEPMTOCIJRQUIDASKTVWYKZUCYLCOVTTWQASEPJKSPYVZPEWQBAHXHGBLWQJHUEFVYXBOSGQJHZYEKTDBLWDOXQLJVXRUNTBSFP");
    tmp_tmp_msg_0_1.conditions.assign("GDXIONYXLVSQLZHSEHFLAGIVBDBKOJQVPMZOUHXGEMQSHRREWVJBQQGRYDJNPTLMULNFDVIGLYERWGWAXBFWYKCVAMKNIMDKTEXGHPCVFKJRTZCZTZEQUXRDKCXLZHFPJBRCNOLUCDUEFQMADTXNIWJYNAUYFNGQKWWOESZIJTOPUTEPOIAJRDKMOCHQPGPRAHBSBH");
    IMC::SetEntityParameters tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.name.assign("WEAZKUMNAZLOVGWHZXFFKDWIZWDMYGNTAOHLBZRJYTDIHTYNFVDJQKNKSCPVVCDYSPBOEIGAIEOXRTJBBGNGYVTXJRTJCQHPAVVKABNYDIYIFEHTQSTARXWLCQGXMMLLOLJFJCQJKFUCCARUDNDBLURIYZOTPKSJFGHMGUIJMEQXTWFYUEHUVCFSZWNFMLKOUNSOUKEWBVHYVQQPBPZCMLDAWHWKOMSE");
    IMC::EntityParameter tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.name.assign("FFMFAWONWJGJPYYVMKNIAUCTPFDMVOISIHLNOGLVUZIUPUOGVOVLIJDKIKHTTOSXTDUWCZSJMYQKWGKLTXOBDIHLASBEU");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.value.assign("KVMBTYMLXENUSICNDAXLQGQMDSXJOYMAGFGAKYITUPUDUELLDSJAZPJEUPOLELUSZOFBWFXTPXHWEBLXCOJUEMDTNIGHDGTGBJZJCOFKIPUYNZYKFVKNSOZNHOVXMGIMHGSHXQRKLHFFQNETAHVGB");
    tmp_tmp_tmp_msg_0_1_0.params.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.x = 0.927346513292;
    tmp_tmp_msg_0_2.y = 0.349065024573;
    tmp_tmp_msg_0_2.z = 0.493460506385;
    tmp_tmp_msg_0_2.k = 0.456508153595;
    tmp_tmp_msg_0_2.m = 0.17805991874;
    tmp_tmp_msg_0_2.n = 0.951075014937;
    tmp_tmp_msg_0_2.flags = 186U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::DesiredPitch tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.466048602229;
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
    msg.setTimeStamp(0.282343575021);
    msg.setSource(27403U);
    msg.setSourceEntity(152U);
    msg.setDestination(34657U);
    msg.setDestinationEntity(71U);
    msg.command = 230U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MXRBCTLZLFWILSWZUSOJTXKQONIXNPUANDUUECNHWNYFHRIDBMQRHKCDVCEBQNKBKIYSXJGGPHTSFWPPVQMMBAWNTTXGCFZHXRYODKBHJVMLWFPSJWURYWVMDJUDXQBJYAECOZSTXKTBHQOKEGSEGHMRIBR");
    tmp_msg_0.description.assign("IWULKMTDPBYXCCUOJHQDFPSKBEHVCCGEFMOIIUUYYDSFZXOKTKTORBGNPAPZTLREBAIJRPSLJLJYAQUNCLKHUVIQXRSCFZTCGVQADKDFKEAIJOSYBGRKZB");
    tmp_msg_0.vnamespace.assign("NBCUIJZZOJHOVPCGEAZNDZKGLBCHF");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ALVVHTZNPMWBOSLDYYCOFEGUPBCQGEBQFPTLVNVZIVPEPDLJVWCZFKUI");
    tmp_tmp_msg_0_0.value.assign("TAJJMBOUZVOPYCBLDTQFMPL");
    tmp_tmp_msg_0_0.type = 190U;
    tmp_tmp_msg_0_0.access = 87U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("CORZJFDWXMWEDRYXQZCZFRRZGHHU");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("KMTCQJXYONZOIUKUWIYNLDXMSQGFQZUIXYZBSDZOLJXNTEFQPJIGDGYPWJDNPPUCERYAEKVBFBVAXVPCTVYKHBRGFYTMLLWRHAMMOPYUOFUICQWQRFATCWWXGTTIPQHHSSNEZUKFHAELYDKFRKHUMDFBPWSNWXJMVEPUSMRBELRJMBQSNEKDZXCAPZRZKDTUKJVVHOJXBLEIC");
    IMC::Rows tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 64009U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.0744546846717;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.235606714881;
    tmp_tmp_tmp_msg_0_1_0.z = 0.272130364576;
    tmp_tmp_tmp_msg_0_1_0.z_units = 88U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.906023114391;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 188U;
    tmp_tmp_tmp_msg_0_1_0.bearing = 0.190666514631;
    tmp_tmp_tmp_msg_0_1_0.cross_angle = 0.535167340169;
    tmp_tmp_tmp_msg_0_1_0.width = 0.661755800725;
    tmp_tmp_tmp_msg_0_1_0.length = 0.242527335999;
    tmp_tmp_tmp_msg_0_1_0.hstep = 0.128284722103;
    tmp_tmp_tmp_msg_0_1_0.coff = 49U;
    tmp_tmp_tmp_msg_0_1_0.alternation = 186U;
    tmp_tmp_tmp_msg_0_1_0.flags = 88U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("ORQMYRGTKBJIOHATFZOFYXVSMPMCPJNSWKEQCDVPILUOLEZURVSRDFOVSQNYZ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::DeviceState tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.x = 0.275635853617;
    tmp_tmp_tmp_msg_0_1_1.y = 0.943362945955;
    tmp_tmp_tmp_msg_0_1_1.z = 0.827722783754;
    tmp_tmp_tmp_msg_0_1_1.phi = 0.863243147834;
    tmp_tmp_tmp_msg_0_1_1.theta = 0.0326817435673;
    tmp_tmp_tmp_msg_0_1_1.psi = 0.608508520597;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::QueryLedBrightness tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("SCGRUYUCWMFMZVNQTOOZAKRVUVCNHPPXLVDDMQDIHOKRELQYHADJGIUORKLLSVOIQUYUBPAYBTEKSWKBIUXZVNQNPFDWGXHRV");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.163967196776);
    msg.setSource(53366U);
    msg.setSourceEntity(195U);
    msg.setDestination(12638U);
    msg.setDestinationEntity(47U);
    msg.command = 138U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YVMRLGAFUUALCBKPQOICOQFMYUVBVTDZRUIGRQOYHKVFJCSONXAPDWVOGHZMLPEDHKAVJGJTHOFPMXRPSAJMMCDXFXRDTQA");
    tmp_msg_0.description.assign("KKYYLIWLMKMQRBVENRYCUK");
    tmp_msg_0.vnamespace.assign("QEVTGPONMAFKJCIADOYZBEKUFJBYZPJBLLLVTFCXLBZGJUHNHHWBEDARXNALOLYCQHEUSPTSIJSKSTORQSTRDIYZAIEKMGJUDMFBASUTPPMFLHGRYORAOEUUVXBDLWVMZPQFGPQXYMDADWEFVMZJZOXNNCVXEFJCSQVBQFIUMISKIHNGOEQGKFS");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZKTSFXNYPFYFIUDHELVWNMIKRHYJRKNZUTSXSODCMFRQDIAJQSQZIAEGXBORQXCSHQHCBOUSTHQJTAPXMZXCVUMEKSDOIMSEAWWGTJMSRKPAJDQPOBALFTNWVYTHRXLMLYALRZVRVNOMEZNKUFBWIOGYUINFLLROVMJTBGDJPPPGUDHUCNWBUBGGLGWZPRFHCYLDFVQETEPYHQIBWXVQFBDZOGHWCYXCIXD");
    tmp_tmp_msg_0_0.value.assign("SASSQGMXXCWBCXMFZATUQPHQPBHIFGLKGMTCGKNUTFVDRIWKEXZMSHJQYOIUOPAHDVLWPSIMRYZDFPQFNKANJQRQFDHETZTSYXTDJDRJTUIOZNULU");
    tmp_tmp_msg_0_0.type = 164U;
    tmp_tmp_msg_0_0.access = 129U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("NQSRBZCDQWCJNUEFXRVROJUXRMRXFQLVKSLEKMZREA");
    IMC::EntityParameters tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.name.assign("MQOKMXGTLSGTUFYWEGQMHFTVBZJIGRWWXUHZDWJHQQIADVYPSDXTFHNLVHUWKDMSURXWUIJFIINBACNOMBQKEIFUKOGPMYEATZCTCPNYPKPVZLUJRLFWPZNSSRMBWULLPRTKOFQACRPNTOOAOUQDENJYKMRICVYJDPSHYGGVRYEKZDENCSSAVPQFQJDBFVHLXETHYOZKWIWNGQZVKZSEOVBGBISFBCDDXRHCLXJAMUBGXCAEAYXNJLBJCIAOE");
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
    msg.setTimeStamp(0.478203395915);
    msg.setSource(34915U);
    msg.setSourceEntity(216U);
    msg.setDestination(61814U);
    msg.setDestinationEntity(95U);
    msg.state = 70U;
    msg.plan_id.assign("RCFZUYTQRFCPUWLXVLYJACUBTSFPMEOAEHSGQNWFCEWQKRKXZABPAPYEPFZLNMOWRDHIJGX");
    msg.comm_level = 127U;

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
    msg.setTimeStamp(0.491122031639);
    msg.setSource(54081U);
    msg.setSourceEntity(81U);
    msg.setDestination(37288U);
    msg.setDestinationEntity(247U);
    msg.state = 45U;
    msg.plan_id.assign("BVXXTRSTNGPJDDAXCJAFLYDSQGYCUHPREPTOVG");
    msg.comm_level = 34U;

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
    msg.setTimeStamp(0.429532191004);
    msg.setSource(17765U);
    msg.setSourceEntity(111U);
    msg.setDestination(38793U);
    msg.setDestinationEntity(19U);
    msg.state = 143U;
    msg.plan_id.assign("ZPFAUEJMFXZPGXTKWYNUXYHFFTQUOYPPOORBXCHAKZJAWVYCHLLTPMSKNGHSOLYESIRKVMDTIICXEIZOMBNDHKCJRTDVSTAFUBJBZUIAKSSQOLMJTYKZTOBJKGDQHRSGGNPPCIVWWGMUSWBHWILITRJXTVZAWKQHNNCEPKLJMAXFDQNLSLFVIOBJLHJQYMAROLWYUPVUNRQVCNYEYQFCCE");
    msg.comm_level = 17U;

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
    msg.setTimeStamp(0.662704809747);
    msg.setSource(10993U);
    msg.setSourceEntity(123U);
    msg.setDestination(22217U);
    msg.setDestinationEntity(39U);
    msg.type = 29U;
    msg.op = 79U;
    msg.request_id = 38536U;
    msg.plan_id.assign("IRTJOENONJLCCRXVEUJYWDNBTYPISRIVFUDRBVGFAPZWBRQQRTPRXKLWJJJAYWUZYHZAIUDGDGMEGNBNWKHMFXFPGPOPSESYWVYZI");
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 124U;
    tmp_msg_0.system.assign("XRKSRMJHSTUQFZUBPGZVYCWXPMBAKWAIUJPCPNJFLMOSQMHLCWEFOVGANLUMTYDVBCIPLBSVEXJSQMGIGSFOOQKTOKRQHTAQEQAHGADTCLCCUWRWMVGPJFGYZOKVONSFRTRMEITRPFKNZYUIPSGNRVCUEQLYHYNDBBBDZDTZXOYZFKWTNOMLBBJAJHWVSPKXEYRXHEEIFHUJWVEDNXHIDHKFSJMBDPXIGLAAQ");
    tmp_msg_0.range = 0.558093350951;
    IMC::DesiredZ tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.383861613944;
    tmp_tmp_msg_0_0.z_units = 240U;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DSBMFTSKPWYBKNCLCUXKWSRDLLCTQOUPPNTNJJCDWGQVDWRBLJMKNZMIKMWNINQUGX");

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
    msg.setTimeStamp(0.0198230593327);
    msg.setSource(33593U);
    msg.setSourceEntity(185U);
    msg.setDestination(15480U);
    msg.setDestinationEntity(23U);
    msg.type = 43U;
    msg.op = 4U;
    msg.request_id = 56977U;
    msg.plan_id.assign("KYWIUMTQSFOLZGQQKSWYLGXJMRKGDUBHVPDJWRNQVXKMUVGYHXIRVXQOFCZYRTFBFMBRKKIUMJETQUMALABNIVZVTMAJNWUJPN");
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.301221941239;
    tmp_msg_0.y = 0.173411901158;
    tmp_msg_0.z = 0.323804120759;
    tmp_msg_0.t = 0.998567731842;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CDWQDZERLAFKIDXLAGSBAAMMYAPHZWORAPVLKURFTWQCSNLKVAMOZINTJHPVFFXIOIMLTNGGRBUSNFCLRSDIBJPZQNDUEQSTKTLGFMHYHBHFMRCPREXMANHNVHGKQCMMDGXIKXKZHSCXAEDVEWYHUPPLBUOB");

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
    msg.setTimeStamp(0.940247934463);
    msg.setSource(17613U);
    msg.setSourceEntity(7U);
    msg.setDestination(43605U);
    msg.setDestinationEntity(8U);
    msg.type = 244U;
    msg.op = 27U;
    msg.request_id = 20347U;
    msg.plan_id.assign("ZWAFTDREDQICZKKPQXYFGFDVMPPKLPT");
    IMC::Map tmp_msg_0;
    tmp_msg_0.id.assign("XHZLWGWKVVOMDVSKTEFDAKCIXXAGYHJQBZPJIRSJZNDQQBKMNJFRTOUAHWBNKHRFECFKTZBEHBEKVHPVEXPGKZDUTEGCULYGCGTUIIFJWGWRQIPSCKMBQQZLUEBYISQ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JUMTYNRTFMGJCRPGMYFHOGJWNQIEOKAZYZXIPEXAQMKJMPVKBRXKYCSZSBFWHSMPHSJWKCLGQMIALUPLTAASMBTQPBZEGXOOSJFQZDTEIUPFULYWLHHHONQZKVDFGVHNDZHPADNVDWYEWROTBNNYCDJFQAX");

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
    msg.setTimeStamp(0.0538424605085);
    msg.setSource(46510U);
    msg.setSourceEntity(196U);
    msg.setDestination(8338U);
    msg.setDestinationEntity(97U);
    msg.plan_count = 20925U;
    msg.plan_size = 3860516774U;
    msg.change_time = 0.225803410381;
    msg.change_sid = 57456U;
    msg.change_sname.assign("XQDGVJACQZFVKUJTLBRAGHMSYOSKJNCBRHUNOHKPCMVUJFHBVOWFFEJPHXIZLYOVTKUGFFXSAQDNBEOQHSOPQHAEYXNHHJIEDCGMNDWRBCIMVEPZNZGFIAULZSYGWRUOIUYRCXYALFWZNISDSPSDKOJGCEJIZXORBMMIYNLWVNTRKSDMWDATEMTVCMQAPJTTW");
    const char tmp_msg_0[] = {-26, 107, 104, -124, 90, 23, -115, 119, 37, 8, -105, 3, -79, 94, -38, 72, 17, -37, -27, 18, 20, -70, 71, -16, -98, -67, -44, 17, 50, 84, 7, 46, -18, 57, 102, -64, -7, 124, 9, -100, -74, 62, -60, -30, 101, -41, -119, 98, -82, 21, -29, 126, -107, -87, -11, 57, 74, 24, 45, -44, -22, -75, -98, -30, 11, -126, 30, -69, 115, -79, 1, -80, -125, -122, 86, 32, -31, -69, -85, -59, -105, 82, -49, 65, -28, 43, 40, 52, -77, 77, -13, -12, -105, 58, 96, 11, 6, 53, -1, -89, 63, 0, 26, 77, -56, 75, -46, -61, 54, 113, -40, 71, 109, -28, 30, -128, -36, -65, 88, -20, -22, 117, 108, 124, 66, -62, -89, -128, -67, -34, -96, 57, 114, -63, 115, -54, 110, -64, -47, 120, -75, -102, 52, 1, 91, 101, -88, -85, 119, 62, 20, -126, 125, -40, 81, -127, -48};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("LFYEDPWIGVNCGAGBKAZABLOINLEJTMGGYQFSODSXUAKTEXZJPTQIHJWGJBQKMOETSUWRHPCFSINQIOEDDXJILIWZSWVNREZCXQWQWRWBUVCLTCSYUHCHVUATQSAYKO");
    tmp_msg_1.plan_size = 50612U;
    tmp_msg_1.change_time = 0.394965084985;
    tmp_msg_1.change_sid = 11706U;
    tmp_msg_1.change_sname.assign("GOEHJZPREVBJSSQLIJTGQIMWHIGOMMDRKQIOSFTXXLVGPUCMPULTOUYTDHPUGZINOXMAMEYJOTJPJZKC");
    const char tmp_tmp_msg_1_0[] = {95, 116, -20, -90, -97, 24, -41, -86, 54, -109, 81, 63, -86, 35, 9, -107, -17, -97, 79, 111, 30, 107, 102, -32, 76, -21, 114, -30, 121, 100, 27, -5, -103, 3, -126, 56, 108, -91, -102, 102, 112, 114, -18, 25, 97, 61, -90, 52, -76, 42, 57, -41, -29, 58, 64, 36, -63, 82, 4, -123, -106, -76, 5, 27, -89, -105, -67, 109, -125, -128, -26, -87, -17, -69, 107, -3, -6, -54, -51, -110, -115, -100, -107, -77, 30, 107, 86, 76, -93, -71, -27, 87, -92, -116, -10, -5, 110, 110, 103, -119, -81, 81, 30, -111, -2, 111, 77, 3, -91, 27, 76, 112, -50, -23, 25, -68, 49, 105, -62, -55, -47, -14, 80, -88, -44, 30, 58, -45, -25, -96, -113, -61, -92, 23, -113, -93, -92, -38, -45, 31, -86, -53, 38, 79, 44, 46, 121, -37, 102, -50, 58, -47, 27, -123, -87, 122, 72, 41, 82, 106, -93, -107, -4, -124, -46, 88, 42, -96, -69, 45, 76, 98, 63, 117, -43, -75, -59, -20};
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
    msg.setTimeStamp(0.0309611456738);
    msg.setSource(28691U);
    msg.setSourceEntity(69U);
    msg.setDestination(65000U);
    msg.setDestinationEntity(84U);
    msg.plan_count = 39788U;
    msg.plan_size = 1650361536U;
    msg.change_time = 0.9409996635;
    msg.change_sid = 5911U;
    msg.change_sname.assign("ZBDZGHLDJZZUENCNTURDOJRYRTVVTEYIWRQKYSLTJHVOKCZDINUOVCVTLXKWMMIWQYWLAGZPIFFAKNBXOAIZNUPAMRTXCLGNSAGUPMBXHSODQMFLXAMFF");
    const char tmp_msg_0[] = {-86, 105, 39, -90, -62, 50, 88, 88, 79, 97, -38, 99, -32, -94, -98, 42, 43, -116, -70, 92, 58, 48, -99, 61, -77, 44, -7, -36, 11, 29, 50, 64, -123, -125, 20, -126, -75, 104, -42, 66, 0, -71, -69, 98, 52, -24, 3, 73, -23, -106, 89, -119, -48, -93, -52, 110, -24, -16, 45, 27, -114, -78, 8, -108, -78, -102, -60, 88, -52};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("CNYLZBKNDQJUTGQLZZEXSFQYDXRWBKKHQSUKMUFNZELPACDYSIHEOBJFQMTIXTOUN");
    tmp_msg_1.plan_size = 37971U;
    tmp_msg_1.change_time = 0.645023498616;
    tmp_msg_1.change_sid = 54864U;
    tmp_msg_1.change_sname.assign("AYWWRDLLEMKGXLRITLURWVJQLFHUCVEDTCJNJXTRMPOEWQJFXCEXIKSIJHPQWLJSWAHHPFOMCHAZCSYBSFCMABUDJRRWAYWAPSCNGRVFXBXZNYHJACZNNOZUITTGHGDPKJFLTUKYTIMXBMVUEBZZIVAMDQDBSESEQONUSNNOBNBBFIQPDRQSGHNOKOOUGGELETIYGOVWQAXGZGKXZTQYYOPKIXSIUDALZMVFLJRVMFHKYE");
    const char tmp_tmp_msg_1_0[] = {-52, 72, 20, -26, 80, 58, -1, 92, -83, 9, 1, -27, 64, -126, 104, -1, 78, -123, -54, -95, 80, -64, 57, 50, -40, -32, -51, 7, -106, 8, 54, 13, 117, 47, 110, 68, 76, 43, 119, 27, 33, -101, 68, -4, -67, -35, 108, -111, 21, -38, 24, 52, 4, -21, 6, -38, 22, 55, 9, -2, -110, -3, 124, 55, -32, -58, -53, -71, -21, 32, 74, -60, 58, -58, 111, -68, -21, -18, -90, 96, 56, 22, 89, 122, -61, 58, 69, 22, 61, 115, 112, 123, -103, -79, 88, 51, -7, 18, -122, -67, 51, -34, 78, 52, -6, -44, -111, -37, -52, -30, 35, 42, 10, -62, 75, 18, 29, -47, 126, 113, 35, 57, 60, -49, 0, -66, 83, 37, 123, 12, 54, -29, 21, -121, -47, -125, 18, -39, -68, 59, -128, 100, 60, -104, 124, -47, 71, 54, -41, 125, 17, -19, -76, -86, 27, 69, 26, -97, 50, 40, 113, -31, 18, 19, -60, -27, 17, -5, -25, 98, 78, -93, 38, 126, 111, 88, -57, 16, 126, -32, -10, 69, 68, 2, -10, 84, 12, -93, -18, -122, -87, -39, 9, -7, 70, -82, -66, -35, -85, -81, -77, 26, 93, 35, -30, -27, 104, 2, -86, 48, -52, 79, 9, 92, 92, 76, -102, -34, 85, 28, 38, -55, -33, -109, -126, 119, -12, -63, 44, -87, -92, 119, 101, 82, -8, 12, -99, -39, -102, 89, -96};
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
    msg.setTimeStamp(0.532301453532);
    msg.setSource(43164U);
    msg.setSourceEntity(175U);
    msg.setDestination(13327U);
    msg.setDestinationEntity(115U);
    msg.plan_count = 24563U;
    msg.plan_size = 76828608U;
    msg.change_time = 0.55081356313;
    msg.change_sid = 58658U;
    msg.change_sname.assign("MDVONCKCWYLRDYURXJDRITIZBULMFSHGNCEQLOWOSVOTTHQYVMGDJTBJIPSAGWECPHNFBORBQNMSLXXSDJYWBKU");
    const char tmp_msg_0[] = {-105, -14, -67, 18, 70, -119, -41, 4, -116, 19, -81, 22, 58, -113, 39, 1, 39, 66, -69, 13, -13, -16, 4, -87, 44, 77, -36, 118, -64, -20, 22, -42, 2, -55, 17, 89, -17, 102, -64, -113, -99, -85, -116, -101, 26, -19, 95, -107, -112, 110, 30, 19, -3, -52, -112, -94, -88, 14, 28, 92, -19, 44, 52, 0, 86, -48, 98, 107, -37, -7, -56, 84, 102, -81, -10, 88, -65, 1, 100, 27, -122, 86, -126, 85, 79, -43, -7, 126, -34, 3, -14, 71, 93, 110, 41, -57, 66, 119, -128, 34, -1, -45, 7, 97};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("VBBWTZVKMAQEPBVGUTRIIOJAYXNZPCPPUBIQGPRIVGIFOVZYNGTFWUHBPNSDHUDUAQRYVJBSOXHZLELYLMPNMJTTCLFXCIILARCDGRHWYZDJYVTHQMUKQWKEDZCXUHSZTAWNCWRKCRSSJGEUWA");
    tmp_msg_1.plan_size = 36074U;
    tmp_msg_1.change_time = 0.320763733989;
    tmp_msg_1.change_sid = 35495U;
    tmp_msg_1.change_sname.assign("FAOZCBOAUGDQPBHBUEXSHMVENQGEQJYYQJTORDBYXSWUDRDJZGCIWXQTSMCYORNAIAUEOWNNLFNVLRQTYQZZUQIWSTBOTHCMKJKPGXBWIAVHMKYUSRWTDHIIDRNIDRLXVZBVTJKIGKSXCBJPCFYWXVACHFJSRXLHQMPASKZGOLUVCAJWFMNBREVJSDTFDZQSTPPKYFUMHNHLNLVRGZCPLYLUMEUWEHAZNLXYEPOOEGP");
    const char tmp_tmp_msg_1_0[] = {-3, 68, -55, 66, 7, -1, 0, -85, -12, 71, 72, -68, 5, -72, -79, -63, 93, 46, 108, -72, -45, -104, 46, -41, 92, 120, 16, 30, 78, 17, 71, -89, -24, -61, -86, 48, 111, -28, -113, -84, -93, -9, -110, 28, -99, 79, -44, -126, 1, -44, -76, 18, 70, -83, -118, 116, -105, 39, 101, -66, -14, -45, -75, 86, 76, 9, -125, -3, -113, -21, 123, 9, -123, -73, -38, -92, -101, 11, -117, 39, -83, 72, -120, -16, -26, -125, -81, -53, 75, 61, -72, -90, -45, 72, -110, 25, 79, 125, 37, 51, -17, 13, -11, 95, 5, 37, -11, 71};
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
    msg.setTimeStamp(0.630041452529);
    msg.setSource(5010U);
    msg.setSourceEntity(191U);
    msg.setDestination(43889U);
    msg.setDestinationEntity(205U);
    msg.plan_id.assign("USGOELNMFKTGKOZKHMPPYZPCWAYKVTRTQRLZSHRQAXNIBXHWYJWEQFELQZFGYUCXMNPL");
    msg.plan_size = 52655U;
    msg.change_time = 0.470620437433;
    msg.change_sid = 53699U;
    msg.change_sname.assign("TCCSUJGXWKRLEAMNJRNIDFOFIM");
    const char tmp_msg_0[] = {-35, 85, -26, -108, 8, -52, 54, -22, 105, 60, -48, -53, -116, 39, -40, -54, 41, -34, 47, -37, -55, -90, 72, 45, -45, 24, -120, 5, 46, 33, 83, -89, -55, 79, -70, -62, 56, 36, -9, -9, -101, -104, -91, -65, 27, 116, -81, -72, 118, 46, 55, -97, -127, -66, 122, -125, -27, -28, -112, 13, -41, -8, -41, -89, 46, -35, 45, 25, 39, -119, 35, 106, 62, -38, -115, 90, -116, 89, -23, 95, 102, -50, 55, -19, -58, 70, -56, -21, 95, 55, 118, -105, -125, 3, 109, 103, 93, -47, 43, 104, -83, -83, -15, 50, 70};
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
    msg.setTimeStamp(0.128500747071);
    msg.setSource(639U);
    msg.setSourceEntity(2U);
    msg.setDestination(56177U);
    msg.setDestinationEntity(116U);
    msg.plan_id.assign("QXCXZYAYQVGKOZBROJVBNDEOOCSCANYJMUOEZFBOAVBVZWASUECJKRALVTUQKKKLMBQKNFEEWPMGXJOREILJAXLGHGWGPUPTZSYWJUXFHBEMVRYELDMIKTFFCZHJPPPCBRISZKVQJPHCDMFLQUGUPYHMWIHNTXSIXQDPLCQGVBGSSWVINGFNQMNNRIACISWWISPHELIDDRFATYNGANHTYFCTZZYHTBXKDOLTROSMVUUXRFDZBJDMOE");
    msg.plan_size = 31643U;
    msg.change_time = 0.489880873584;
    msg.change_sid = 16709U;
    msg.change_sname.assign("CRDMEQBJXCTGEMSSFNJFEMRFABNXLCYQJKZKVNPICSFFBHVWYHTFUWOKBXNXGRIXQRLNQCESPFLTKQMAMIHOXZTJQALTESJSKVPOGUZEKIAQOHPAXXPKHYUMMFCRFVIIBDFDWUENSOVCOGGPTDQRZW");
    const char tmp_msg_0[] = {-93, -75, -36, 69, -121, 110, -6, 42, -57, 44, -42, -1, 21, 22, -76, -121, 56, -60, -22, 4, 103, 88, -1, 53, 53, 18, 33, -37, -121, -45, -30, -85, 102, -60, 109, -34, 10, 90, 124, 69, -74, -42, 36, 30, -67, -61, -91, -113, -82, 111, -123, -49, 54, -38, 114, -123, -111, -100, -39, -37, 63, 109, 74, -62, -16, 57, 115, 37, 88, 32, 40, -8, 104, 86, 58, -95, -10, 17, 41, -68, -57, -3, -114, -64, -117, 16, -99, -13, -28, -64, 10, -22, -61, 90, 83, -41, 2, 13, -70, 101, 38, -112, 82, 16, -102, 60, -27, -115, -102, 55, -120, -104, 117, 27, 2, -71, 84, -113, -6, 0, 12, -76, -3, -32, 101, -66, -20, 15, 35, -125, 2, -77, 65, 40, 61, -43, 70, 58, 114, 120, 19, 54, 117, -105, -89, -87, 62, -83};
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
    msg.setTimeStamp(0.54301163811);
    msg.setSource(41165U);
    msg.setSourceEntity(244U);
    msg.setDestination(15604U);
    msg.setDestinationEntity(103U);
    msg.plan_id.assign("JMGNYLGQBHVQCJRDKTXWVZHBFPSMKOLAUSWVMDKUYFMIIOKFEWGAGLFQJWFWEMXCSEOZMEZJHQQCAVLHIGETKTZAEPYJMSJWJTI");
    msg.plan_size = 64940U;
    msg.change_time = 0.934701211342;
    msg.change_sid = 9513U;
    msg.change_sname.assign("EOMKZELQWHNOTFVYWADYTBGMKXNRROBGPQUQNFUBLNYAMUFPFWIZCJDEMZIAWGHTQQTTIWNAPIS");
    const char tmp_msg_0[] = {50, 99, -101, 59, -113, -4, -14, -102, 30, 121, -25, -118, -90, 112, 28, 90, -71, -15, -6, 87, -99, -97, -99, 54, -100, -122, 8, -28, -122, -103, -123, -64, -109, -17, -83, 69, 33, 53, -70, 112, -22, -49, 26, -84, 89, -23, 65, 8, 107, 29, 1, 20, 54, 101};
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
    msg.setTimeStamp(0.652869703161);
    msg.setSource(33867U);
    msg.setSourceEntity(9U);
    msg.setDestination(25352U);
    msg.setDestinationEntity(158U);
    msg.type = 236U;
    msg.op = 161U;
    msg.request_id = 24054U;
    msg.plan_id.assign("ERZWZXJPCXKJPMCBUUQLQSFCHHOVJXNHSFZVBTNHGMFGTWVYWKBILUFAFPYQNBGBELZKIQLYUEMSCEALCAVPIAURHWEKUUEBNQMODDRGCPVIFRNUWQFQNJXSENWFKCNKYHMYPJMBYPDTPSVQMOBVIHFGRCVRWOWTMKLKAEDYODRQGNBRKTHHIDXROZUUDYIQGXJLBCJTNWOSDKMZMLSGOTWLAVVADZXIETXOPSAJGTZAHDZJGLZJ");
    msg.flags = 2596U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 29581U;
    tmp_msg_0.lat = 0.2169232878;
    tmp_msg_0.lon = 0.229813785209;
    tmp_msg_0.z = 0.390207057134;
    tmp_msg_0.z_units = 56U;
    tmp_msg_0.speed = 0.397075171819;
    tmp_msg_0.speed_units = 85U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.785886480041;
    tmp_tmp_msg_0_0.y = 0.461046571141;
    tmp_tmp_msg_0_0.z = 0.455346745673;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("SANFIIJEVTKJOWSZHHDVWHBGXGZHUBWRMANNOXAWPRSHEAZFHEDDDYGJRINXAXCNKKPGBXXFEPXIRAQETYPTRHKGLZIJQUOCASISMMDYMGNDWSDYAFVJCOMVZXQSYXBLKQSSUEWOPELKCWLBRLBOTDJCIGVQSYBCQLHQJZNPBEVIVNYDUCUEMKUORFCPROLZOYGMQVTT");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PJPQXYMDADCQPVJCCXDUOHBTROJNVHIQQQAYBIIXAXFTMARZLTQRJZODZFDALN");

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
    msg.setTimeStamp(0.970741277932);
    msg.setSource(35705U);
    msg.setSourceEntity(110U);
    msg.setDestination(12299U);
    msg.setDestinationEntity(35U);
    msg.type = 223U;
    msg.op = 106U;
    msg.request_id = 48067U;
    msg.plan_id.assign("TAVSHPHLRLORFSLMZRHAHQDXGEMGXDPEQDFVYWXIONKORGKDTBSAECCENOCNAFLEYBIHMQTXTPBWTUWZOXAQFUXTYWNNFFMCBYUSYEIMECULPNYXJRRZSODRHTUCBFADHPBHKVOVRWGOLABBKJJBJAZFFSAKGSJWNIQIMVZIKRCWGVZQLJNYQUAKJTYYQVCO");
    msg.flags = 31635U;
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("NXOYPVWEBHBRPXFGWPJIYXYDLCYIOBZQKABITTTDATOPEISLOTNLVULPYSJRGSEYXWWZYQNJUCTNZXKRRGAOJGCIRCMJENSWMVZZVGUQKNFHOMFFUZIOCXJGBMGHMKGHINUDTHQBIWRRSHSXFGBMGPEAAHTLBQNDFHQVYJFDFDZOUMTVBPADQYCCCXKXW");
    tmp_msg_0.type = 110U;
    tmp_msg_0.properties = 56U;
    tmp_msg_0.durations.assign("JFATDSKICHQXHIRIPUWVLPWOQZARXJGZCTDGVKIEAOKCLFMYNBNBXOZFKCIKAAGDZKRDPZNAUDXVIHVYNPYTGEGMHIPLRMRJQTYRJNPZWBC");
    tmp_msg_0.distances.assign("HAUWYSHNLXBLWURQYSNEVOFAZEMHBHERFXKDXRIJZUIEULMXZKTVYMENCDVXFZITMOKFXYPSFEVWATBRZEQYJUWAWNJQTIQSAUXSYLYJINCWBDTMIYVCDEBQGUFQUTMHKBKXBCBSQEMGLVPLAOVMDAPVZGPVSIGGWHFNHHJJSGMBJDAZSPQFJNOTNSOIPXTOUCKQBPYDIHOPFWGNIAOWROHGRU");
    tmp_msg_0.actions.assign("LXXFZETCSTDMQRXIEQAPIIOIWCHYDYTYUMYPEZGUSBTESXMJFKCWUSAIHWCBNTBVEYVQWBZJUNNOEGUHNQTQDPVZVSPIX");
    tmp_msg_0.fuel.assign("MTPYYBLTWGCHPZDJIYOVJUYYUWVHKWLKEQWPYHHPRXBSDGCNOZZIVDIQIEBGMQFZJNXUBBZNQDZVKCWWTIACLAURJUNASAMBFEHNFOJSSCXUBHSYTRCRFNSOLV");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EPFZEFARGKJCHBZOLOJYCKEMIOVYGJALLNINPXZHVDIQPPVGRLMQNLHXVMQWYJPDTZUSRSCZTDTSXUUXDPGMOGMHOKCHWSAUVUANWQJZDXSEILKVKFTTYCBCBXZUOTLKAIHSNTBBYQLFQHEFMZMPJVRKRVYBWFYNQQEAOZFJJPDUXGEHDGRWNBWGDQNMXRYDYVBZHHJFKPUICRFOCWWGLDVIEECERASSUTOWCTKL");

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
    msg.setTimeStamp(0.353634038969);
    msg.setSource(35366U);
    msg.setSourceEntity(59U);
    msg.setDestination(45625U);
    msg.setDestinationEntity(46U);
    msg.type = 194U;
    msg.op = 53U;
    msg.request_id = 3209U;
    msg.plan_id.assign("WNSKYJIRXTHDLTCXOWMRXYLTMJUSEQEMWOPGCZSTYRUBFZWATGYDGWPSHJJHKVLEQVQPAWZYKSLSLORLGCNTUPBADGDVIGEBBTZKQZVIIFOXWHMXKFLCVCXMEEKVDZDOKQUPSWMLIVQVBYAGJUUEAFJAPORAAUGNZIEHWGRSFFSBXUNIBNDYDXJQBRHAMTBUYNJIFNHOUQPDYINOQNMMPCGJKAOCZZCNKJZPVOBHYFMEPHRCTLWXX");
    msg.flags = 43039U;
    IMC::HistoricSonarData tmp_msg_0;
    tmp_msg_0.altitude = 0.119857089273;
    tmp_msg_0.width = 0.704683578605;
    tmp_msg_0.length = 0.456034969772;
    tmp_msg_0.bearing = 0.117607942328;
    tmp_msg_0.pxl = 12431;
    tmp_msg_0.encoding = 65U;
    const char tmp_tmp_msg_0_0[] = {32, 45, -69, -105, 116, -71, -29, 48, 16, -56, 34, 125, -5, 23, 92, -124, 121, 89, 105, -111, -61, -88, 104, -39, -101, 91, 74, -97, -71, 40, 50, 111, -51, -95, -35, -108, 49, 59, -121, 62, -120, -79, 20, 48, 83, -12, -54, -16, -58, 15, 124, -120, -51, -27, -82, -81, -79, 24, -67, -95, 14, -10, 79, 52, -51, -56, -125, 43, 57, 78, 50, -47, -16, 66, 24, -127, 17, -59, -17, 25, 35, -107, -126, -100, -67, -99, -107, -51, -30, -107, -48, -9, 93, -13, -80, 124, 51, 58, -50, -91, -12, -128, -122, 103, 16, 30, -56, -23, -4, -40, 92, -75, -71, -69, 119, 4, -96, -51, 30, 125};
    tmp_msg_0.sonar_data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KUIQAWIVFPIMGXKQHASBHLXUOTIWXN");

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
    msg.setTimeStamp(0.478837703635);
    msg.setSource(19647U);
    msg.setSourceEntity(236U);
    msg.setDestination(1914U);
    msg.setDestinationEntity(33U);
    msg.state = 19U;
    msg.plan_id.assign("TMVMZEVQTFQJADDCZPJQMPAFFNWJYDFQUCXLBRR");
    msg.plan_eta = 1219284604;
    msg.plan_progress = 0.864479219698;
    msg.man_id.assign("BLHHBXGKVIVKZAWPOGWHOIKJZUSQPNVFTZKPKBUBDKQCUQSESYZHSJUORTPWCQNCSDLYNCHYFQQUSMFXLLAXNAWNVYVJETUERRMLUMGTKOCWIDCHBFEKYUVMDEEWZPLOENBCTJAMQQDTZPGYKTXYHIVXDRXDGOQHFOAWNRIAQHYIAFJXSIGLBPJLSRGRPEJBAOMZBXXDENBFVMLJWZNTNTIXSSZJRTWPEYMY");
    msg.man_type = 64979U;
    msg.man_eta = -701666558;
    msg.last_outcome = 81U;

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
    msg.setTimeStamp(0.721556623873);
    msg.setSource(12411U);
    msg.setSourceEntity(58U);
    msg.setDestination(9411U);
    msg.setDestinationEntity(73U);
    msg.state = 99U;
    msg.plan_id.assign("OJGKBVRNCNMHMHUMKXSBMRMGXSZDFQEASZFLULPAPDHRVBVLGBWKJNXFJEVKXLRGMADLNXBHNZEWEOZJDJILWYZSJYDIRFVNBKVCLEAISPDQWWGUQUGGPIUBXQVURCVIQMRZKJYGYIQRSGYFLQECFOSBIWOANQTCINTTLUYQCHZPHPVUGYPHENXHFOAQTIBAOMCXTSWCRMHEBPEYSKAMKIPTOKXZUNCWFUKHYJDOWWS");
    msg.plan_eta = 1575786981;
    msg.plan_progress = 0.247070253686;
    msg.man_id.assign("MWRQPTRGRMGCFKJSBOLHUVCLZMFPQAGFBBUECWAHJFYNAYBCVQPXZLMSXTQGHWRPPUQNTKZFJOVFODUDLSEWHTFOIKROYMFHCPXDXJDIVGBCQYIVYRBBHNHLLWBVEUFZKSFJWKZNQIVZZUTSMKVCYDLQCGXJESQSD");
    msg.man_type = 56416U;
    msg.man_eta = -1250661280;
    msg.last_outcome = 31U;

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
    msg.setTimeStamp(0.0072660744472);
    msg.setSource(46399U);
    msg.setSourceEntity(12U);
    msg.setDestination(43658U);
    msg.setDestinationEntity(209U);
    msg.state = 50U;
    msg.plan_id.assign("CWBQXANXVQPRKOBFKVIVANCSKJXOYBKCBJEGWZYPEXSTIOYLUEMBERSKUBVMQUICZCHQSDZRHYMBNOHIONOLPUGOPXHLOSURUQEAJYMCZMQVGGLTNWIVIKAAGRBLYWNFKSCPWLTJHPQPXEYTGGFVIJVSDAWXAUMJNKDHOYQMXELZMIFGFRDFLRQAHOTDBIJNZSFZRUMPZXFYSJCBMNWTIHFCDAXQJKVDPRPHAWDEZ");
    msg.plan_eta = 964283483;
    msg.plan_progress = 0.0789783191624;
    msg.man_id.assign("LIAUEMOLHVLIWKYRYMAEHBKSXBYJDDCWAUTCWZSGNXAMOIVCRGXTTPFNJQPXHRDLRDHOAJSGDBKMYXOMZXEQSWPKSVEGNCWFFZHEGAOGDIBXMGSQJTUMGPBEBVIWVCJLZYOOTLQNQVDIFMHKECYJPULPVWTKGZYBNMZDXAQNOSUNUZHRRJVZKCVVXWFCFKOJZLNUTKQBYTAPUISWRJTGAJDEQPFHEL");
    msg.man_type = 18296U;
    msg.man_eta = 1376465348;
    msg.last_outcome = 144U;

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
    msg.setTimeStamp(0.791010319819);
    msg.setSource(44310U);
    msg.setSourceEntity(42U);
    msg.setDestination(62893U);
    msg.setDestinationEntity(153U);
    msg.name.assign("HVWEPMDTUSKMVZXUCLCXMAGXYBZBWQUFKIPEGFYYMKQRHIBLYBTJWGRFCCBJYXSRHZJOCKAUEFDGROFYZPYOLNONIUBWNOSDHNIVKXXULTPPIRNCLTXBWADUQPPJXVHJQZHDSLEGFSCACZUAOONFKQBNDEQVAISGJPTKMLGCEFIKHVZTATRMOTGOIDVEAFIXOVUJLPIZCN");
    msg.value.assign("JHAGRPZSBHIOSSTZVZDTIAHTVUVOJFBEYCNGWSQABFQOTWYAFLYSLHAGMJRGDWPUKUAZBJQCFNYVKCGDBONEGLJCLETIEDRKICWFLVIKKDNOFURAZMXXFLOACXUNVCLXFKRJVSBOCQIGMFBJLWWRDNDQZSXQHAGUHGEPNNTGEYSVMYCMWHXEMWLSHEPKQDIIRLBMHRNWYSPIXPQRTFZMCDHXTOKOKMUUXJRJPVYBKQNJMIZUQYXBPP");
    msg.type = 4U;
    msg.access = 161U;

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
    msg.setTimeStamp(0.896929734955);
    msg.setSource(40970U);
    msg.setSourceEntity(57U);
    msg.setDestination(7557U);
    msg.setDestinationEntity(176U);
    msg.name.assign("PPMEABHKVXCGNDWHVGJEOLNBMRIJNORPCSFYOGUTQGZZYAWSMDCXEPOKBEGFNGLWMBWHCVWFZKQBZGNJDDKDYASCTMIXBFRUYRNUP");
    msg.value.assign("PQDISJQFZGPPGMNBTNEXXKJGADVECIQVTLUIZFLEPXKSWEMWORSUWWQMVNOHOETVFJYNLAMGTBYMWKIKCGDXHAMAWCRNXNFEHRSEXSAACBDVQQICLKDIOZIKORCTOJSROYFOFTAZJERFQBVB");
    msg.type = 105U;
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
    msg.setTimeStamp(0.0646098917819);
    msg.setSource(39301U);
    msg.setSourceEntity(235U);
    msg.setDestination(49752U);
    msg.setDestinationEntity(141U);
    msg.name.assign("YWEEVPPUHJGLALJQJJKOLDTQDJOJTTMNVUVKUDKUGLASGLFCQUSMBYIFHCHZLRKOAIINXFRDMTGZDNXLNRHQVEHAASVKBHLNEOIDZQXJGFUOFBBCPQXZTAAFDWHHP");
    msg.value.assign("QLJVRHWBUXNUUUYBLXHOIWTHQLBBVOIBWQZRRHZVTSVELNMCDYFIATZDPGD");
    msg.type = 250U;
    msg.access = 97U;

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
    msg.setTimeStamp(0.920160942482);
    msg.setSource(59396U);
    msg.setSourceEntity(7U);
    msg.setDestination(55564U);
    msg.setDestinationEntity(199U);
    msg.cmd = 135U;
    msg.op = 10U;
    msg.plan_id.assign("PAJESHVDKHAFSHCBROJFWWUQGIKWXWVDPKITIJXGUFGOQZDURLTTMGOSFEZQKQYXBRXSSVOQCXPKIJMLZEBNCAGPYNIOTULDEZBQZMYJMZZHELYQBNDFNMMDWYIPCCGYJPWLLEJLTCTUXCOEGAHUDCWZSITAUJBPYDMYOIXFYKXIAPVRVNUXTHWNFVSNKTXYEBWNAUKLBHUPLJAHWFMDAAVRRNQSSONCQOCEFQ");
    msg.params.assign("XZCXHPIRUFCGOIMAOVWTEKTDJNLYQHNMEUBZDKIQGZZNSBXMLTQGYVCABIVOHWBBJEFNBYLVDDAEHYISJQWQPKOLLSDGFJGWYTNSOMTKCIUVNUUHIMCKXETOOYDRFMSGZGRFJAUJPFKVQHHRSBXSSEUBWJQRMUWIDTFFIWNAPYJVXJOZHCCPUDLTVTHYSPOGUKMRRJXAINOQABCDLPEKHDVVYXZLZMEMCZNYFEBNWXSRLAGKPKLTQZARGCW");

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
    msg.setTimeStamp(0.124270390185);
    msg.setSource(37798U);
    msg.setSourceEntity(15U);
    msg.setDestination(49781U);
    msg.setDestinationEntity(74U);
    msg.cmd = 176U;
    msg.op = 212U;
    msg.plan_id.assign("LSCBXXUKQBTEPNMDGPIIINRNRDSDASJHGQLMT");
    msg.params.assign("SXFEQOVVFIEPFEMMKLMQKDSGUGISSDFIFBIOTPDGSQDMBZQNKCUBVOBCTKLEZWUSPWWCDNRRQNAQCUZFVRYOTEFPYYBXPGYKUPFCWGZWRWYOGBEPHIXUAQWTVQMNIJDTTONRRORYMYUCMZHRPZXQJZKADFHBNGSKARQLVHLKTTPGAHJJIHZXUFKKUPCATMTWSDEAALXNVYBACHWXMSLVDXXCYVGLLIYEMJUAJNSORCV");

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
    msg.setTimeStamp(0.653454497413);
    msg.setSource(32123U);
    msg.setSourceEntity(100U);
    msg.setDestination(21935U);
    msg.setDestinationEntity(94U);
    msg.cmd = 134U;
    msg.op = 45U;
    msg.plan_id.assign("ICARJQMKZVMMNZIBZAYOPIBOYNQFYJFRHBUXHXYSYKHRCKQHDRGPOASXLDVIELQELSJTFKCUVDGJJKPRFGEFCBPOSSEROXARWBIKQPHJIYFNGFNNHJYGBKYWLEVTWGDEZKMGSBRWRFDZOZMGIMTBCQSFNIDBZLTYOOCWALWNEESVAJUXOHZHVWLNQUFDPVBUATECXZIVUEMLCNTUJSKOXGW");
    msg.params.assign("SKEZRQZFEUXXCFLDVUVEZKLEEVVVUSBSUHGUIOMSTIGHCHAMOEOXAWFPNYDDJUFIOKGDPUMCWNSXRSYMULRHPGAMCBCKZDXHBJTYOWLPXYVXQCDGAMAIAOKIQVEJNWHLPOBZKJIEIOFZMNFWVLTNTWWQSNSLHHJBWPJXDHPBNPGFV");

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
    msg.setTimeStamp(0.120301393669);
    msg.setSource(48063U);
    msg.setSourceEntity(4U);
    msg.setDestination(24954U);
    msg.setDestinationEntity(175U);
    msg.group_name.assign("SNPBWGMOFCEWGQKSFFYNQIZJGOWVRKOCIATLWHEGKYTESDCUXYLUWDEJKGHTASQLKPUIMILAAJ");
    msg.op = 175U;
    msg.lat = 0.353713502317;
    msg.lon = 0.689628352673;
    msg.height = 0.206788901517;
    msg.x = 0.927159397137;
    msg.y = 0.655616402774;
    msg.z = 0.991702306554;
    msg.phi = 0.628328788665;
    msg.theta = 0.570944606284;
    msg.psi = 0.210769064294;
    msg.vx = 0.0215516660733;
    msg.vy = 0.0334323911618;
    msg.vz = 0.0955394525548;
    msg.p = 0.0403343433542;
    msg.q = 0.330306884488;
    msg.r = 0.65148368803;
    msg.svx = 0.492267774512;
    msg.svy = 0.702417466087;
    msg.svz = 0.0134314989845;

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
    msg.setTimeStamp(0.188812089285);
    msg.setSource(48U);
    msg.setSourceEntity(219U);
    msg.setDestination(31314U);
    msg.setDestinationEntity(174U);
    msg.group_name.assign("VYDKRFGRRPLBTNTMPYXWHPCYSXOACZZUOJFQQJQLNJXCHLDANXIQBSKVNSEUANUCUDIMUZHZZQMKGDJAPWRADOHCMWINWRPHAKHHUTLVBTOZOPADUQMKFQOCFEFURAIMFWBTYPZGWUIJSXQFXYHHCCXQMKJXIMWBNSTJ");
    msg.op = 6U;
    msg.lat = 0.395759974587;
    msg.lon = 0.499128688879;
    msg.height = 0.450943930551;
    msg.x = 0.610816491533;
    msg.y = 0.737349198641;
    msg.z = 0.150197618423;
    msg.phi = 0.179245932371;
    msg.theta = 0.10264281063;
    msg.psi = 0.305773423651;
    msg.vx = 0.449251559058;
    msg.vy = 0.447647845878;
    msg.vz = 0.12324994753;
    msg.p = 0.300135300133;
    msg.q = 0.984433624366;
    msg.r = 0.669933434877;
    msg.svx = 0.173006035616;
    msg.svy = 0.59058156675;
    msg.svz = 0.0622582781262;

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
    msg.setTimeStamp(0.659812115466);
    msg.setSource(62994U);
    msg.setSourceEntity(48U);
    msg.setDestination(65119U);
    msg.setDestinationEntity(218U);
    msg.group_name.assign("JWLMEPGTUNHRCWYPXSVGZSEIZGAVCVFDRJCLTTXJCIIFAMKBKDBRLQNAYFFSMTUHAZLGPLYKAKIOKIWMGLNKWDQNHSMCBZZQLFHHZARRYSLYEEIQJNYZBUHBBNEOZJTJIZIUPNMOAPFRTQXUCKSBGHPYXXSGJEHDXPAWMXUVOWVNCOEWMFJJFGRCOQEUGSEMQUFQUDKOVJYMYLOKASGITUTZADVVBDKQBNERW");
    msg.op = 187U;
    msg.lat = 0.191383079093;
    msg.lon = 0.56445582781;
    msg.height = 0.632887745943;
    msg.x = 0.846695508859;
    msg.y = 0.228202390911;
    msg.z = 0.45504207225;
    msg.phi = 0.230105251848;
    msg.theta = 0.412831139549;
    msg.psi = 0.6788865175;
    msg.vx = 0.915305132096;
    msg.vy = 0.55251452685;
    msg.vz = 0.191716660384;
    msg.p = 0.161736412747;
    msg.q = 0.35303137453;
    msg.r = 0.943059103182;
    msg.svx = 0.868853879831;
    msg.svy = 0.196247368721;
    msg.svz = 0.870796627429;

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
    msg.setTimeStamp(0.291734158486);
    msg.setSource(41916U);
    msg.setSourceEntity(152U);
    msg.setDestination(29930U);
    msg.setDestinationEntity(65U);
    msg.plan_id.assign("TJEUKXZLOWZSDQWJACSQRMZAVPTCRGMVABASKMFLUBWMDISMCXLWMCGGKKXYKGGKWSVVGCSOWSEHNOYZSNMJXIGPFPKHOSQOIHIXPJKYBRMIXMWQPJNEABFECTCHFZUABIVAXYOIVETYATBNDZQTFLXDEGZLIDTQCXUXHQHBVRULZVAEFJPJURPOFDJBHROMKHVNUGDPTCDJNPYYOYONRYLYDNLLRUSPVIQDUKZEAFWRZBHEHETFJGLNRW");
    msg.type = 126U;
    msg.properties = 103U;
    msg.durations.assign("SUNRTKHHEGPEPZZJHWVWINBDCZFXTYKQXDFYNVYYIZYFTQLBLJDWMEWVIGQXQLYVUJSWVHPIAGDGBNJRIFMZVXOQTTLIKJYUYHZ");
    msg.distances.assign("IYWSLNHBDCAFUIOJONZXQ");
    msg.actions.assign("AQVEHMZWAITYUGCMWZDBFENGBXUWLWPVFRIXMLTOPQACLFVXNUPAYDOFVZKLGUILHKXSSIARMQEBWSJKMFUXMIOTJUODTLHUNZQGTAYZOJYJSZEJIOWNJSSGHYBCXAECBDEDUDV");
    msg.fuel.assign("NZMHXOYSVOQRLNTMKBXQFE");

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
    msg.setTimeStamp(0.769280680474);
    msg.setSource(48438U);
    msg.setSourceEntity(209U);
    msg.setDestination(59702U);
    msg.setDestinationEntity(97U);
    msg.plan_id.assign("EJNXVHCAURPBAFSBMPCUJXVZQFNSCWMHOSZFQYGVEOHWIXESBRBQATFWJGLUKMTDMIROQAVRGDBQDVLMIRHOGZSQJMYXQLJOIDNYQLSJPURDLGJPFPXOLCWIYAFFQBITPHCGCNEFDBILYSTKRCTWNZOULXSHKZWAWUTXDERWOXGXFKYOBUKNEGHKQSYZUTMDMAEKTMLZVHOAVRKLEUFHGPVDIXTWDKBJNZZRKGVWBIZAHCUPYNPT");
    msg.type = 158U;
    msg.properties = 207U;
    msg.durations.assign("TFUMSQXTWUUEBIQZXYJLHEFPHLLRTCWAVANIGWZQOXPKVCYJDYLKPMFGVXOENBDNMCTVGBWCVZPNMRZKPWZHDUSOKKRWCHSLYLUALIJJMOZGBDUEZBNQHDXZWSEGRSMO");
    msg.distances.assign("GFIPXYZHSEHJVVRTYYOZOLISGVPFVKVAUNFDADTFAWQUJNPTRUQOUWEBXHQWPBLPVDWAOMRBODQQBUCAWFAJAXID");
    msg.actions.assign("RZCUZIMNINDSSBAQVUHNTPOXKMRITUGBGVDDLAGFDBKHBCPJMXVWHXSRPVNXEFALOTYTHZDJCYLJOEWXATDFLAEEHIUEPQTRZZUUFBZSXUKYMBKIIYHGHMXF");
    msg.fuel.assign("BYNJIDAHZAOHIVCQCFWXMOPTDEMBEXWXFIUMUBPYMFESMNOZVZDIUYLBLGNIGPHLGOZFSOYNDOHWZTGBJOFPKJFWMJNWATMTKLQAGLVVIRRZCHSRJNYKZUAZPQUHRTRROJGTYTXAKLTCKSBLDLDDWNCVIEMXTBRQGBPPVEKSQQPUVLZFHPBADICMESNIKRVSXDEU");

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
    msg.setTimeStamp(0.914034699583);
    msg.setSource(29793U);
    msg.setSourceEntity(88U);
    msg.setDestination(16537U);
    msg.setDestinationEntity(142U);
    msg.plan_id.assign("PEEOWATJDDDIVLNWYIEHJKPIWUDHFSZSLEFNMXBQXJRMNMTKTLOTLUJHFCTRTCTKEUIXAFTNQPOIXGGJGJHUCUQWKTAPACRQGPRSKUKSVXNXYBLUDLPSDZSWLVIFFSSBVQSIDPNYMENXUVISMKFXDQKCARIVHQZWACFQBJPWYNMOAHRZKIPZLOCUCDMMHMCYBFRFDBVGWTAQCMNUYGVKEHBBJOEYLOZGVZJHGHN");
    msg.type = 200U;
    msg.properties = 168U;
    msg.durations.assign("JIEYHVDSDVPWGVVYJRYRMXPXTOZLQKXCNMEDLMIYOLNLZTPIAXKGKXDRITMQOVJOKAUGSBDSMSOCRSJT");
    msg.distances.assign("AOMDKXVPIXPUJYFTRHACSFGELKWZDGEVRBDCNPTEWMYENNGZVRGHWQTVYHXVKAIZQISLJPYNDTKOGQUFMCTMRGVRETHVCSDWDWNPCVAKYAOOFIKAUZMFUTCOFXNGHOUWIZ");
    msg.actions.assign("QFTASLGMIQYZEWIMHSWWBDBXLDYOPHZXIVVTYFTIUGRRUOYXOHSTXRGATTPIVNEVCNYSLSRYALYEATJJCLKKXNAWMRKUZHFCGJCCOIRMBEPJMQAWPTEGZWXNPHANVVFQWCIDSJOFPNBGKBFRDYHXNZVUFBDLFSXDMKQQOLZBCGUSYZBHPAEJJJJEIUMCPQSFDHWHDZNREHMA");
    msg.fuel.assign("VPYIVPDYGKEWAWGXSHCSIPNCNSMPPOHHMJQIFNJZNZFAEDRSTLSHQGCIXKFJJBYGKEMFJROZBUYYDTMKHWGBLIZNSFCDMKKJVVCSYOKTZLHVEZOAIGCBSYXCZXABBQSRZRQRJOTUKWPYPKNERJRDWELECCFR");

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
    msg.setTimeStamp(0.77877183656);
    msg.setSource(60804U);
    msg.setSourceEntity(132U);
    msg.setDestination(59704U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.23485222695;
    msg.lon = 0.603839845187;
    msg.depth = 0.237218678585;
    msg.roll = 0.0716947586928;
    msg.pitch = 0.631345336784;
    msg.yaw = 0.346889494268;
    msg.rcp_time = 0.590090978044;
    msg.sid.assign("XINTRZXBFLSALWJZQYZEHEHRNHJSHPNVONRIMEYDVYNMKEVSPGPEXORGRBMKGPFIUJYACMUIEANFECLUVSGWXYJJKUELASZXJVQTTEZLKFWDFIYWFNDATDBIXGKCXUDBGZKOVKGQOWBTGIMTMWWFHRJDNSLQUUMCYPAQYBPTSDVFODZTUH");
    msg.s_type = 216U;

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
    msg.setTimeStamp(0.929130502068);
    msg.setSource(29997U);
    msg.setSourceEntity(236U);
    msg.setDestination(28696U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.420287817658;
    msg.lon = 0.171974336783;
    msg.depth = 0.193527780562;
    msg.roll = 0.124905756734;
    msg.pitch = 0.818557215599;
    msg.yaw = 0.888979863372;
    msg.rcp_time = 0.773964919647;
    msg.sid.assign("KHFEFCYUDKCCUDFDGEJPLGJGXUNNFULCTGXKCNBYATZSIKOBTSQEPMHIVVFPMWIJFTZJHBUETHUWZOOJNDYJOGSFMVFQAQYHGRJZXPXQLPWONCMBMPSIYFHXWUIAGLLRNRHXUGSKZYRAQOJADQLZEVUIWWKLMWXVBQXPQOGPZCXJSNFRCDBRTVPELWWVDDMICLKWZMTNSOBYSDQIOYEANVTZIURMKBYRELTAOQYXTPHBHKEAASZGISNDKV");
    msg.s_type = 73U;

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
    msg.setTimeStamp(0.507715894496);
    msg.setSource(59027U);
    msg.setSourceEntity(157U);
    msg.setDestination(48058U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.372778526682;
    msg.lon = 0.640884445781;
    msg.depth = 0.241827798331;
    msg.roll = 0.630194653378;
    msg.pitch = 0.420088195961;
    msg.yaw = 0.840394211346;
    msg.rcp_time = 0.430492360195;
    msg.sid.assign("TZLCNRNAYRQBTXTFBGXCRWXUMUMAHEABZTFCIYCRHBVLOGRKDCVHIGKGFHPFQXYEZFWJUHWVYXNPVNPPIQEQFFHLPWTEORMJASGWTABHWJKOFQQGLNNYOWOUGZPODSDDUBIJOOKSAMQAKJRXIBSDWZYJMUVFSPDYZSIEDOUMPJVXZIYYUMVOXZHJCNMKSITAGCXKFBYVNBKCLEEDVPALZGWLGKIJVHLBNSCDER");
    msg.s_type = 242U;

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
    msg.setTimeStamp(0.272930062343);
    msg.setSource(60540U);
    msg.setSourceEntity(69U);
    msg.setDestination(1387U);
    msg.setDestinationEntity(54U);
    msg.id.assign("WEVDIPTNXYZFKJXKVZWRMLVTXXRYQCYQDNZDJQWCVLHIRBMTQDCBLJJFUWQGAIBYFOLAZSSAPCCURKSLIPUZSDVHXUKXMWHTCCFOVEIFELNYUZMLWDSTGDAZITKPRAHLZSHGQCUHZYKEPGUOHOSXY");
    msg.sensor_class.assign("HWZRWAUMGAOBEMVIADYLVFHIWTEMJIZAYMARUQYPVUXDUFRTHKJJWYDKRXNLKSLPYSCHBEXPMVIXCHBTODPQLNPTBRMCINWFUCQXLIVMLZDGKLAGAVCTSDFFGTXPSUGGYNJ");
    msg.lat = 0.528376333107;
    msg.lon = 0.987140609384;
    msg.alt = 0.153781540961;
    msg.heading = 0.206472097099;
    msg.data.assign("TQKDAGGFQECKELMZXKMDXJHQEGFIDXEUMRIEISWNVNYFBXHVEHXNGOOLMITJVDVISBPOHGEWCNQADJSYFOMYRAWXYHWLYLCZDBGYHTQCWBXREETRGOTUIDPLZTYYHJBCPWFYIBQMUKPUABSSUPTIZAMAAMWQVPVLRJJZNLPZNOLVLNGPBAQCOUHFUXSSUQOGW");

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
    msg.setTimeStamp(0.0763700563452);
    msg.setSource(13246U);
    msg.setSourceEntity(186U);
    msg.setDestination(12268U);
    msg.setDestinationEntity(136U);
    msg.id.assign("EFGJITSPAUFVOYZWMSFGCYOVZNINOUIQRD");
    msg.sensor_class.assign("MJEVCFHMMZMEUPDTQTDLASMHRJNZHQMKPWCFINCPRJRXIPQZETZRKAPRKTYHEVSVUHJIAUXKLOECZYBLBGDUXEQPZKEBAJILENFSMRCAGFLUDWVQAYSFDKNOHCOUBVPGMOGLXTNFDWFCWXWVZGISDJTLZYPABIFYIBDTNWOQWXVASLUKNIYBPN");
    msg.lat = 0.0446849720089;
    msg.lon = 0.261553022474;
    msg.alt = 0.654696464635;
    msg.heading = 0.136547296735;
    msg.data.assign("TTGPLTZRRCLIXGYEZCMSNSMEMKZRPENVH");

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
    msg.setTimeStamp(0.287723664886);
    msg.setSource(52996U);
    msg.setSourceEntity(112U);
    msg.setDestination(51867U);
    msg.setDestinationEntity(176U);
    msg.id.assign("EPTDQSHCJHGNXUOIOPORMJCBTELMWDVVPYNKNGCWYDAWIEEULROIPIZSCWXCGCJSCMIDMEQBZPWTODMJMURVTDCQNWNHRGMYEGIYPKFVTEBHZQOAYKBLNWNZXTBRKPOZWVXFORRJZAUAVAZKPRYKUSX");
    msg.sensor_class.assign("IFUJUFJHZCPYDQLAEDWGAQDLXLHYNGBPZUOFRXXBYXXMPEJABHEULGMYAERPYMGVNWRVQXNSKYBRCKQYMMZDZQOCCKUHCJEBIZDFAKFAWTEDUCHORWPMWWLWNVIKITFJODWZPIVHBLESTZYNKV");
    msg.lat = 0.123956178017;
    msg.lon = 0.979603951336;
    msg.alt = 0.450030334712;
    msg.heading = 0.462720808064;
    msg.data.assign("TTFRBVQAPRASACJDY");

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
    msg.setTimeStamp(0.284144138994);
    msg.setSource(42386U);
    msg.setSourceEntity(246U);
    msg.setDestination(9931U);
    msg.setDestinationEntity(220U);
    msg.id.assign("IMHSDDSAQWDLLJJZCNHKOEYMHEMIFMWLZZMXHSIEXGUFJDLBXIOKSTASZNLVQWBEDNTADWSQQURYMWWBBKPZNBVGFOKQAUVNUEJTNBFTFNZUKDHCEJPAPXIIXZQFCKGPCEOCWXXJKAGJYRPFCUGDTI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("AXBNYVQCGEEBWLZJHOXQAXBHQQJWUXZXIKOOYFUECNEGSNPWGULDAHCMPDUEFRAPXVIZRLDDGFMVDXKJJRNYJTHWTMILVKFVGLMNOZSSKMVDRZAYXPIGRKGBPNOHTMDTHXCKJRSPOKOWZEWPATNTSTXENNPUIVCJ");
    tmp_msg_0.feature_type = 116U;
    tmp_msg_0.rgb_red = 71U;
    tmp_msg_0.rgb_green = 67U;
    tmp_msg_0.rgb_blue = 149U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.131934463124;
    tmp_tmp_msg_0_0.lon = 0.757307903816;
    tmp_tmp_msg_0_0.alt = 0.151878717547;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.316349953124);
    msg.setSource(52698U);
    msg.setSourceEntity(88U);
    msg.setDestination(23454U);
    msg.setDestinationEntity(217U);
    msg.id.assign("FYUMGNOJKKDOISUSVNJANFPEQJZRQFTFADCQLJAGWMOQOPDJRNCAXILWUPLZUPJBORETSEGAQTDXKDBRVMDTJAXWWVXBUGNQBFFWUEHYSIZUBHYDFWBPQOIGOHZULANXNPKSLHLIJPTDAVCCTFKTXLBYYCKHFOSHVMVVDGHZKTXDZRWYQMMZENGZEIMVSVTRLGYHXXGIBKUCMZCYXMKUMLJRZSWRVBWANIENGLKFE");

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
    msg.setTimeStamp(0.653100427365);
    msg.setSource(59274U);
    msg.setSourceEntity(80U);
    msg.setDestination(63040U);
    msg.setDestinationEntity(225U);
    msg.id.assign("OMKNMTSXVFIWWLZTGCSUGDWDEAEUCRCRKPPXSZAAJJGECYEWMDMULNEJXHHVNQKKGXBOKVXKQZIASZWTUKDLOGEPPETHIIHUZYZQTJGIKANZJXALZJOTVIUJBYBWKDMFXIDCNJQAHOLWOVWDSNGSZSEHIYRUVLFRABKCYNYFOJHVPRRLURNVNITMFSQFNHVYBRFISUFWVRCYQQWBTBBSGTMLMQHJCPDDZOYMGMCXFURTQLLEXPBPEAO");

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
    msg.setTimeStamp(0.156819312);
    msg.setSource(10624U);
    msg.setSourceEntity(148U);
    msg.setDestination(12621U);
    msg.setDestinationEntity(20U);
    msg.id.assign("MJTOLHVQIVFWEUNRWIBHKBGJPNUNHFLXBSALNCLWXDTXRIAMQYADDNZGOSJZSAISUVVYFRJIMUQFWXJVFEKKADUMMKSHMGRJOGNEGOQDYRNLKTBCYIKSCF");
    msg.feature_type = 235U;
    msg.rgb_red = 99U;
    msg.rgb_green = 136U;
    msg.rgb_blue = 182U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.351037793874;
    tmp_msg_0.lon = 0.027381476524;
    tmp_msg_0.alt = 0.423688711458;
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
    msg.setTimeStamp(0.333976711474);
    msg.setSource(38716U);
    msg.setSourceEntity(8U);
    msg.setDestination(23808U);
    msg.setDestinationEntity(230U);
    msg.id.assign("JANBOCLUIRHKBLROPTCAROOURNXGMUOZUWDCOPYFXSIPXQGLHFGMGGMHQIPRTVJSQFLFUICZBEKTIMBXNFFFHHEQXWJDLNUIJCEUZIHLYPUNDNYDZKXHJFSLZDBWAEUADSIVKPCBJWWLCCVLAMJQWPQTTUEE");
    msg.feature_type = 138U;
    msg.rgb_red = 45U;
    msg.rgb_green = 77U;
    msg.rgb_blue = 225U;

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
    msg.setTimeStamp(0.725718063262);
    msg.setSource(3894U);
    msg.setSourceEntity(158U);
    msg.setDestination(53573U);
    msg.setDestinationEntity(188U);
    msg.id.assign("NBDBOAYTOIWLRKJSHFUGFXGYZPRJKUXBFKCSXGZDRFAWELCWNVVRUDNUCAEBQZEVVMCEIGMWMTZHPSOUYRQWQBOIYPKJZPPFYJHBQJNKIILVCKXNMISQOC");
    msg.feature_type = 44U;
    msg.rgb_red = 63U;
    msg.rgb_green = 84U;
    msg.rgb_blue = 122U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.767750347986;
    tmp_msg_0.lon = 0.466717444273;
    tmp_msg_0.alt = 0.847878642857;
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
    msg.setTimeStamp(0.850443558425);
    msg.setSource(49944U);
    msg.setSourceEntity(92U);
    msg.setDestination(21446U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.0550965869116;
    msg.lon = 0.234267073915;
    msg.alt = 0.786042585479;

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
    msg.setTimeStamp(0.797082950306);
    msg.setSource(23237U);
    msg.setSourceEntity(100U);
    msg.setDestination(8568U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.198155414384;
    msg.lon = 0.268021717995;
    msg.alt = 0.0916731824798;

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
    msg.setTimeStamp(0.528397203718);
    msg.setSource(36573U);
    msg.setSourceEntity(139U);
    msg.setDestination(2776U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.756073979305;
    msg.lon = 0.633560523227;
    msg.alt = 0.716479405013;

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
    msg.setTimeStamp(0.320215489801);
    msg.setSource(14422U);
    msg.setSourceEntity(250U);
    msg.setDestination(49813U);
    msg.setDestinationEntity(131U);
    msg.type = 127U;
    msg.id.assign("ZYGKLXKIXJFHXJLVPRHIHECTAWOVOIBVADZFSBLDMOCQOFPBMFCJEEXVYDJBDE");
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 80U;
    tmp_msg_0.x = 15217U;
    tmp_msg_0.y = 57636U;
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
    msg.setTimeStamp(0.855634968335);
    msg.setSource(629U);
    msg.setSourceEntity(142U);
    msg.setDestination(4133U);
    msg.setDestinationEntity(193U);
    msg.type = 62U;
    msg.id.assign("WQOXYLDAWEPYRDCPIZPBTYBKAXHGQEBAJATRKYKHBMSLQTDWMRFOAIEMRELDNAYOJXJSXSXUDCNZKQWOIVCUVIWOWJFBHBUYUUATZVNZFXMDQKWFGZHWXAKKPCUSODNKSBTMZOHXUVQSYHFRGLKKTIENGFQCURGVVOVMJMDVTTEWDUBEPLCGCZOIDSZVGNFCYIHFSVJNHHGLTRENLIYPOINFLPZMRLAUQESWHSQBLCPJQIZPRTXMJCBMXFRAEG");
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 216U;
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
    msg.setTimeStamp(0.176635589349);
    msg.setSource(19275U);
    msg.setSourceEntity(231U);
    msg.setDestination(10851U);
    msg.setDestinationEntity(219U);
    msg.type = 81U;
    msg.id.assign("ZYQBIQCCEQLIYTLDQSKXFJTNHGFETWBRADOMFLDKSCZUJTKIKQNGDSQIJJALGRMFVFACIWMGAAERDGEEXVHMKHEYJKWBTILSGXRJAFFHILUFMWWBHEPMCOGLOAMUZPNIYXSZDXPPGUGONZNPMEULOQNQXNBWCSRHTAKBTDEOUCKWSLHWDGSYQDVIZVZYNCRVMSJJPYPMKXPR");
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.814760602033;
    tmp_msg_0.temperature = 0.481167175326;
    tmp_msg_0.depth = 0.614343229575;
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
    msg.setTimeStamp(0.248199928411);
    msg.setSource(2543U);
    msg.setSourceEntity(225U);
    msg.setDestination(28758U);
    msg.setDestinationEntity(51U);
    msg.localname.assign("EOGDGADYQWPZANKHBCBZNUEYYJIVUAWUIFWBWQSDXKARLSYOTDXUJPYEUDGPFGBDZVNVDOMWJTCXWUTVAEBRFVZPWMPTWYSUJKACOLJOJALRXJFQOBTGUILZOCTLBIEDVMFNKTXORFZSJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("QITQYGKOURUBNZPYZVLBJFGSGMOWVUSPTIZLFGVZZVZSEPJCBYGPNTJKXXFCEAOIYQEMUKNLJZVHYTWCSRIQWENOXHKRMZABYDNATDGTERSGIOJUTOQBMDMMEFOQQEFKUOMARKIQWWYOXYALVQUXADFGIXDXDHBJHSDEVCHHHVSRLBMFLHAHJULLUCWPTYWNNSXCRPPOKLDBRVIJVIQAICCSFRZJWPKXPGBDYMEWDCACZN");
    tmp_msg_0.sys_type = 221U;
    tmp_msg_0.owner = 12648U;
    tmp_msg_0.lat = 0.256394307086;
    tmp_msg_0.lon = 0.0917083015299;
    tmp_msg_0.height = 0.448624298921;
    tmp_msg_0.services.assign("MGCVEBMKKTMTYTECWUOQVNDSOHABHYDNUYSUJHTJPQHPIPXYZLWHKOUTKNETPJMADVBVOXSNLLXJKNFRBVGVOMLKVKLZWGRCSEXWXHGQCORMDXVFZIZNIDQYTDOSYLQJHJRAXNBFBSDBAKESLGDTZC");
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
    msg.setTimeStamp(0.190481170876);
    msg.setSource(42933U);
    msg.setSourceEntity(174U);
    msg.setDestination(58060U);
    msg.setDestinationEntity(71U);
    msg.localname.assign("ABLGJABUCQDCRXAQDIEPFFNVURBKJDHEXDEMOVHSIKAVZSZPOZVRHFYUTXLLOFYXJPIGULVLXWQRBODDUVSVHUHUBXTVVSJGDAEMKSLMEOAMXJWPZFWHYGSUCQEGCGPEKTLOWKRPWZCOKRIGGRPAWHAQBIWY");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("RXLHIARDCPDOJELWQCYEDDACJQHMQKEDFRZITBNXKSWAYPPOTNIWKZXESLKIIRTTQXWFTQGSSCHTKVGJNYAYHSEFXJJJIEAHUCGSIPQYXZHCITCWGJBTSFEBOEMKQOZPBQGMXMNOWWSYVNKQLGFOKRRDVGYLFVLKDTVZGWJUSBISIUDXNCAUNMOBCUEMLCVRB");
    tmp_msg_0.sys_type = 116U;
    tmp_msg_0.owner = 4563U;
    tmp_msg_0.lat = 0.688665077083;
    tmp_msg_0.lon = 0.753686090441;
    tmp_msg_0.height = 0.806372791829;
    tmp_msg_0.services.assign("BZQLHKUGVYTIDINNLYQHPRVEXMDSOHUCPJWXVZGYGZTWAFZFVGAKMFNAIQOCVCSUJORYKWXCWQIAESFERJXCSTAEWLLWGBWMMLHHKYE");
    msg.links.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.276053022673);
    msg.setSource(10486U);
    msg.setSourceEntity(75U);
    msg.setDestination(53493U);
    msg.setDestinationEntity(199U);
    msg.localname.assign("BERKPDCQOYCGXUJMKUEGNSAIXFJLTQQVXVSMCQCQPTTTVRHEDMDQRINVTVQKUKAOMMZAJLNKSMWRRIUFNDVLPYBGRHPCMMFYXTXWURIPXIAV");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("XZWYBQMUIEIXTARRNLVIZVKKSWMEKONRRVPEKSOWOGIIIUYTTMXGCFRVDZNVKTJGDYBEOULWYGMESWAYAUCEBYKSTGZJJJVQMSHJATQDB");
    tmp_msg_0.sys_type = 245U;
    tmp_msg_0.owner = 57273U;
    tmp_msg_0.lat = 0.563394159949;
    tmp_msg_0.lon = 0.868128431452;
    tmp_msg_0.height = 0.707818630078;
    tmp_msg_0.services.assign("OKTHBAWQYLHKXMWZIJGNXWCNPQRESRFVPRDEOPPTKXTRSLENYPNMYHWIZKRUWUTPSMDSAMBGLOTLYJFNMGKZIBZONADJRABVCMJUGYKSDHUQKLRSWPCTAQPUZUIMVXQOHDDF");
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
    msg.setTimeStamp(0.953334356583);
    msg.setSource(21204U);
    msg.setSourceEntity(166U);
    msg.setDestination(4122U);
    msg.setDestinationEntity(81U);
    msg.timeline.assign("SYFLKMQVRRZESPLBMKGQOTHUKQYGWUOJHXPDQXUFVLDMYPZJZPOUPSDFPXYJFNFTJNWVEXWIAEMXDXLWAMBYILVBAZVLHNRUVFXBEITWMTOHZBBGECCCOQNGUSPVYEZDIIKFOFMVJRHDNATQHSRGUJXEJOGBJCNWBWASDKGISARMUIZQJBBRAPDTYEDTZLXIUTCFQHCOCSRKIPRZTCCNGMVWWNVZLYLWCUHQHEAKKRKGKNMHYJOQYLAODA");
    msg.predicate.assign("MEGDVMQIDYCMYNLLTKNFGRHLKXYCKMWYSFLTJGGHLJAKLJWFEKFTKVBCRAPQZPUMCXDCZXOJICYNXXPOTQOELLMOIBYFANWHRRPSKQXZAFSZXBIVAGOVJCONAEUTQCIMDDGDLFGPODPIHPSOMUPRJDVOJDIJFSVWGEZMCWPHUMZYZEEVESGABVHUZGRRUNBNRUHJLKZBANPFKWHTWYQJFZRYWQUEBNBSKNDBUQQVVTTRHSW");
    msg.attributes.assign("QAIEMPWIRLVGVJXFHQNVCMYTFDFHQOZKAOYJURXWZPUZWURMHDXAUAMYI");

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
    msg.setTimeStamp(0.605649382217);
    msg.setSource(62997U);
    msg.setSourceEntity(176U);
    msg.setDestination(35749U);
    msg.setDestinationEntity(142U);
    msg.timeline.assign("KQLWUEQHWJMXPSHLFFGTNSBXOKJNWEHIWMMVHTSHJINPRSMVDKBJEJUNYKKZAYNLRERCTQVUSWQOVRLETNHLBFKGDCVUFXYOCDVGGFTCISUMRDOADQXIGWAOCMPXIEFPIGIALBNFTIRCXHBLVPNTYDURQZEOXKQKIJSYUVLBUPCYTORWQYIQAPPMWBMEFJSGFTZZLXDGDZXAOCMCHTZGJYOV");
    msg.predicate.assign("PITVJEBXAAQLUTVINYQTPBJBUONSXPUMGNFJFCIIIHUFFSZAJOARGXTGXLCTONEGDZYFBBEUIOJZJZOGNCZDLROTNJASRWXVLECGBADFCYHLKTYWCQJMEKSQ");
    msg.attributes.assign("JZHKWODKDCQKCQVYORJXURYDEHHYIOJBTOMMSPXLEYEGFXFMCMYDBCQ");

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
    msg.setTimeStamp(0.341942484636);
    msg.setSource(46168U);
    msg.setSourceEntity(180U);
    msg.setDestination(19369U);
    msg.setDestinationEntity(6U);
    msg.timeline.assign("JISSMDUZWDKENXXLQTHLUSNZECHFCRMQWABJNXEASPJUFXGYXQCQENBIYPNYCXOOTONDHUQTAGGGXYPOEKYWANKVGJABPAVDQARMVPJBFTDGWIWROMFQTPRYXHDZGRZMGOMRCMSJZTXHHQTTZAUVDYDEPULSNQPVLLIMBCIXUZWJBKJUFZCFWBRLKEODLKRIYBZYVFKSIWMNQEHZLGFNVKIIFPVOYRTKEPIHJHWBCALRKOABDM");
    msg.predicate.assign("FXMXDYSBPNNWIGMIZCTGXQTWFNXMYMLHQWZSBSREVVJLVAXIRNBRUFTBLGIQRKFKGQAVDOXUWFOISMVTLBNXALAMMEDCJRNOLYPLPOGJTIUYRDZHEKHWDCIFEQCSEBWBCXUOZUWYPLNKCASRTUZFVHBDSQAXFQIUYKOTYDHPYHJMVZNOZAJRCJZQTEAOBPKPGSLBQIYJEWNVYTRDFGUSJKEUPK");
    msg.attributes.assign("LHNQLRSROI");

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
    msg.setTimeStamp(0.898888070349);
    msg.setSource(51305U);
    msg.setSourceEntity(248U);
    msg.setDestination(58865U);
    msg.setDestinationEntity(173U);
    msg.command = 172U;
    msg.goal_id.assign("LLDNZYGOTINUCUOSWKNNNOYGOOVUKBIYRDEFXZKXYGSWEOTJXTHMHKTVDFYSRRWNXFGAPPBADQWVFMHCTDKZHVCYFKZYHVIUVMLJXYUSEJZGSFQMBNAGWIQRJLMCWETGUUXUJVKRACAWPEHXMFISOPFBCNXNLEUJSDHQFQCEZXPBLCIQWFRQJSPNBPHTKGVPCHOSBE");
    msg.goal_xml.assign("SFPYNQCFMFDDIWPBJMRSVQCPMEQITQRXSGNDBUSGFBHQJKRKJBFALPLRDOUWGUJVYXDQLNAEFOOTGKTIEVGUTLBYWFXJSMMZVGUTMFCLSCAWLIDNVSRZYKBISEBTNERWEEMTGPRKFQXHZJGWZNKYZHUAIAPEWVGOWCIMXOTTKPQOIZXYBNOHYFUWBKRSAXUCLLCNTJDBNKGXQZWXLYAZLSOAIUZVMZJOPJMPEHCPVHRRHHACOVN");

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
    msg.setTimeStamp(0.568503697897);
    msg.setSource(60004U);
    msg.setSourceEntity(15U);
    msg.setDestination(64838U);
    msg.setDestinationEntity(48U);
    msg.command = 6U;
    msg.goal_id.assign("GQUQZWYTDDOKRRVLDILKDWSCHKALZUKCJFXJDZPYBSYATOWMPNZQTFVUTNITJJJFFAWAOOU");
    msg.goal_xml.assign("QWXQQMRFUYHZYPMENPSYIEECZQUBKETYUBVYPMWALFYHZESVGTXEWFTRPDSVQGLASRIDAUQXJNBNRDDWJKDKIHCCXUALIZUFSWOXJCWJCMVEZKYJULJWBTFFSDFVIMMRJKUGXCAGPLNIPHKZSGHWSQNDXMCMYAIGEBIAHHORO");

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
    msg.setTimeStamp(0.234894690853);
    msg.setSource(25504U);
    msg.setSourceEntity(182U);
    msg.setDestination(4573U);
    msg.setDestinationEntity(246U);
    msg.command = 195U;
    msg.goal_id.assign("VDPERROAYSCGMETPKZYUVMINCVHIHBQJIPGDLDZNKRWVPLXTEPCBFWLWFAIAOJDUBDTXIFKEVVRLQCGBIZLWXYEVWJSNYQUBIGRIMXFNBSWUQXCHDGEQCKKFTDUASMUMNOGNO");
    msg.goal_xml.assign("OMTHUHAFWUVCMYAPDYUTSYEAPYJURITHKEJLHYKZFFPYCRIJDZKNOIEFGKXEAEQOROHKGKKSMPLYPELRGAEQDWLZCQDWDGWBZVUWFUXZMJBGPSDVBJCIKPNSNABQTUGOVQGCSTLSJRUDDO");

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
    msg.setTimeStamp(0.600073971176);
    msg.setSource(36139U);
    msg.setSourceEntity(105U);
    msg.setDestination(21327U);
    msg.setDestinationEntity(134U);
    msg.op = 139U;
    msg.goal_id.assign("KFXDWWDZCUZGPZBHTGQKICTEHPPCRMOMTIAHPCYGXVMUEPJDKGFUQHBLDFXIZRVWUOWMPSJJIRLRBTISXWWHVBYEVVOAPFQCETRAZOLLQCNCXLDEXZXFUFHTSRSRRIEMWYCVDLSUZVERZKHUEQLTBMROKJJPNMWUSNAWQKJOBYIDGNYLMFNGAQHYYPDJHFYFITJSWXNVNETTAMOAAKBQBANKOVOMCDSZNUQJFGNY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CEQSQXBLCRYTWAAXMJYQKHGDAESIWWLWORSHZXBWKDEDTBHXHLULYAPYSDRYPPDLGUJGZUKEUJKGEGMJCAIWNJGTHHQCTGBOQSPGEQXPLUTFOYRVCQOXIZQQKLNDZPAAJOBJIEIVIZZFVPBUPGXSFMWSMNTZECNZCOTMBEMLDFBNNZIKGYVVFNSRSWNKVEFAFOJDIKBYRYRKTRMTCUAVPDUIFUICXHNDLORVHSQCYTA");
    tmp_msg_0.predicate.assign("HWBGUNOWJEDKWFIMPXASFEQHJFLDYDMRWOVUEYDPLPYGGAUIRKTRYRIIFXIRGXBHSNWCZKSAEOFMJMWNLMQXTGTZNIAXTQHEUNKNJGC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("REQKTKMTLSZIHNDMKQYHGSWCJKJHKJSEPTMJWSMMZVLWRYDFTPUWPVHMMWYCVKXEPIJNRYEZAIBBXUQFTNOYZBVRJQSLXMBYVQVVUAOGHVYNCGGBVJQFFIILWENOFTKRXQZZSESUDMOFDZAQFILIBCROHCJSPGWLANTUYXLHUCTDDIZDBRUREXBWIZCGWAYLNCIAXUYKH");
    tmp_tmp_msg_0_0.attr_type = 169U;
    tmp_tmp_msg_0_0.min.assign("KNLJTWFBUCLJNGPYCBWTVZAQONIOXDFIKFXCJEVQYTCXKEJCDSWYDFBVAERBPQRBFYHGSURIWNTJPARCPVIQNAGUYQERSBMHHIWHMYZWFJGEOIITUTXNQNWDMMAOZLVUZKSDZGSLNSOZYWVVOBEIDHMAHFDEXSRBROTGCVPFBUSYMPGXMLUMXSHH");
    tmp_tmp_msg_0_0.max.assign("RFPUJSEEEFQLJGETIBKUSRSJRVZHBLFRLLIHPZWGKNTBQRNXITOWSVWCRAGVGBTHSZYFUWDAMOMKTVDF");
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
    msg.setTimeStamp(0.505696225581);
    msg.setSource(7522U);
    msg.setSourceEntity(188U);
    msg.setDestination(44547U);
    msg.setDestinationEntity(160U);
    msg.op = 29U;
    msg.goal_id.assign("OBKWKYFTQMFNZILIRDOUTMCPELLKVUMXLYJEUGZPQNAJKMJTJTQWFEHQKCMPHEVIXSNDEYTLVPYFIOSTMHDPXXPBPRUAAVGXGGP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NARORQXRYPNSIUTHIISHTWJBWVHUFKLEYPNUFKWDQKXJOSXLAAJFAWZTFIQPOHEYLN");
    tmp_msg_0.predicate.assign("HJLHPKFHAGLVPBNEHCKRMSCZFEJXPQBEQSRWDOWEDDEXGPMUIUXXWICBRLVAIFEGLAXNJSROJDWGAULIUADQDHYPLKYMOLTCQNYPGQJFTBEKVJWFVFBKSNDMAUBUVUMDOSNXETLBWJNMALGJMHIMNZHRZYYQOCZBGZJZYPOCVMOCHRZTD");
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
    msg.setTimeStamp(0.686976572835);
    msg.setSource(17016U);
    msg.setSourceEntity(21U);
    msg.setDestination(44609U);
    msg.setDestinationEntity(95U);
    msg.op = 32U;
    msg.goal_id.assign("LJINWOVOJHDXXVODLPVFYKOAFTQZEKIUZRQUTYUKJHSIFDLRKANCPBBMBEZJURNBCNOPZNHYVBJEJOPBZGCRSRKOYFKSTMYMPAIAEUUZINXLCIWECUAOMLSLFHXUNHQHXMMQVDPFWGTFHQRBCSPSNFSCGCEKXHHGEQWGRTPLWIDAWWVWALWETBYYQNGBQVGKVVZZQDAXNFQTPWDTOXAYTIUDEXLTGCCAUPRMDKMHS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LCURAPHSELTMASDKUHVKXTXOIYKSLDHFREF");
    tmp_msg_0.predicate.assign("ZSQCMHNFLPCBUCCIQPTWOWURVXWEBUQJKEYDVOERMCZZNFKEOASWKQVRFIOJYXPUPSBIVZPVDDTAEXJULLKIFLUVOKOMJKLTLLEFQWFFJMVQYZNHGMVEANREYTCUNIXGXTHWKNOZHYYZFBQHJMMHALSTAKJLPISSOIPRNFGRWWAABWZXJWRSDPTSUGICXUMIHCJDXA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CGXVLLPERZSOAZOFNZWQOEQXABEISXLGGVSBKXNMJWOKSURAWVNOLZHJLBDBVKFTIVHHPDZKDLRNMHSZABQMBONKTAGDDSYCFRVZZDMMIQTKKTHWNJQEYVMSCUBPWPCVECHPLPJHEHJDGKEXXGNZASECACBUGIRBLXFXXLUUUKMTYPUICIVQTYFFYNASXWIFFYJWARLDJRGTBJINGNEPVYCOHMQCIGWZUTKQQQPDTA");
    tmp_tmp_msg_0_0.attr_type = 200U;
    tmp_tmp_msg_0_0.min.assign("YAMSZZOHZMXOJFBVOYBNARCELHKNKTFCHYUIPXRDOLCKDKQAGSAFQTGJIKVERZAMAKDUGTBLRULLBWPYMUKHYVNITIQZSRSQJLDMSXEEGJMPWZLUGWYTPMSNUJDWCRTJVUDIGNYXTQVNAWPMTQSTQFEZLBNZ");
    tmp_tmp_msg_0_0.max.assign("QDBMKVCDOSUCGIJEEANSYZNKUXANLPPTPFOLZENHZLXSTGWBOIEAXHFOJIKHCUUJTNAUSALRWMRPYDLZODDEJCSIKSAZQEXWMDXIWQHKWQVCUTQVKRTOIRNNWQASYHJLMVLGFCQWEXUZDKVHWVCXHFG");
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
    msg.setTimeStamp(0.182247801102);
    msg.setSource(59624U);
    msg.setSourceEntity(224U);
    msg.setDestination(29391U);
    msg.setDestinationEntity(253U);
    msg.name.assign("OYSTIDGLWLRIUXAFJQSDXIYDRRRBLLFGIXMLPOOZTEIAINMNWXNCZHAQJVZKSBFUYUG");
    msg.attr_type = 83U;
    msg.min.assign("BOHDEPFTGWVNODBIVQEWIYIFBUPFRAWBWJSKXMMPJCGJRHJXERCBVLMXXULWCDHGCGZEKYSKRLFKGFXQHSVTQFAEBACCGEHDCBNTCUDUBRQHEPIDBVDUENWAPXRKVVNOJOZHOGYILKKPZUFPLZRTTJZSZQRAYDQM");
    msg.max.assign("WLQGNYDPAKQESRNGSRNLPHCNSTIYIBUOKDXTEZULAEWMTIHWJNBJLOXPQFYVCZUDDQNPNRUVTCKPFWFSKMHCHYZUFRXESQACHRSFWZAKEJKEORPOSBGJZYRLDWRMOOOHEYDUTQBMXKDDADQHFPOLVYQCXWYDBPBJGVLEZIWGGXBI");

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
    msg.setTimeStamp(0.499614962233);
    msg.setSource(39274U);
    msg.setSourceEntity(62U);
    msg.setDestination(3855U);
    msg.setDestinationEntity(3U);
    msg.name.assign("GFHRJXABOGKLZQAMRJLYONVFRSWREAETJISOEGAACBOSYJHMDQGUUQEIIYGFMDCSQEDFBNYXVOLOWYUXXGPNIEPPBXTUZXAFVLJXDDFVPKUHEWEQDZVCKRALKTQONZYXKBWCULGBV");
    msg.attr_type = 126U;
    msg.min.assign("BTAIAYOQJNNVWUJAQNCRRUUJDSDCTHXYIFWWKZCJMRFOQCEDBQELLNABORKKMUOCHFENAIKXVIDXBLYNWQYDPIZTEODBPRPWSCHJZWCQLYHDVWABFGCLXTVGGSOEMNVAFTGVMKMKDRAZURMJEPNUSKKNPGPPUJMXKOBXSZOUMMGZZYJLYWRTQHYCDRPSLFISF");
    msg.max.assign("EGCASFQJSTCOPEUBEVLGZSNLLNZGDZERTXFEYYMMD");

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
    msg.setTimeStamp(0.398139737348);
    msg.setSource(21197U);
    msg.setSourceEntity(145U);
    msg.setDestination(20976U);
    msg.setDestinationEntity(130U);
    msg.name.assign("FDYVEMNJZPCAQEVEDCCTYJXNGDOOPOESIIRHBTZNHVMBHBICDLSWHSVCJSAYXUQRUAVTVXFSBAYHKWUFKAQP");
    msg.attr_type = 139U;
    msg.min.assign("NAUCQLDJPKQLNCRWNSUHWXGRFMSKYMETVVOAEZBQVSGJXNFVGFMKFYVEFNCHDVBJWCZPTJQXBTTCIZPQZMZKQRKEQKIBMEFNYTGD");
    msg.max.assign("YRSUQYOAEIWEP");

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
    msg.setTimeStamp(0.00286306586932);
    msg.setSource(15709U);
    msg.setSourceEntity(104U);
    msg.setDestination(9746U);
    msg.setDestinationEntity(168U);
    msg.timeline.assign("ITGNCNNOYZXEMWULAGYZOBKJXBHUMLAHZYFYQAGXREDLORASPPEEUVLDVWDJSESHHEMXKOFGDFZYXSQOQQSTIMCTNEIKWTOVFVBWJMFRYZOOUINBQDJMFKLVEPFRQVHLBISCTACUIKXCJXZQLBSHPQWKJQHIZAROPDBMBMFGYJLVRMUO");
    msg.predicate.assign("CEUJUWCCTAQLYBGMHPOKTMOAPDJSLMRTCYQVQWNSLENJZGIPURXGAOIFCERVOITTBSZPASQCVWFBKHHDEYZYRVDKMBEXCAGCZKZDRFMPVRFJJRJKQFVFRSAIBWMFAHJWSOGENVJMLOFKANYIIIOLZUQMNNFEDVVPXKGYDBSTGQWFPSGYSPCBTDDCXKIJHIXTYAPXDUEBYGMHLZWVZRGISUUQKLWLKXZNLRUBQEQHXHOWUUX");

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
    msg.setTimeStamp(0.369596291135);
    msg.setSource(56821U);
    msg.setSourceEntity(226U);
    msg.setDestination(39328U);
    msg.setDestinationEntity(129U);
    msg.timeline.assign("EGJMYOAUDLDDMDJRLLLVXGICBECJEHFKNYKCNEUSENTMQVKVYZNIMXYANBTHYGWZMTZFIBYESISXMCYQRICBKHNVXUMRVUTEVUCGGZFPOVLRSWBDBNJLQJWSLWDFMPPDSXHIOTGKOCFTQUOWAJBHKKZSWXEQZAGLFCEPFYRVSULIFXAOXZOQNZYZPDGFKRTWKHDJF");
    msg.predicate.assign("AVQQVJVWIZHJWXFCFHYKLLISMPSCDJORCNZGTIOZUKWNCWTEKNAMYGLBKEHAQNYFRHKRQUFGQWICNMTCXDPTXEESYNVJUPBZBV");

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
    msg.setTimeStamp(0.139175036031);
    msg.setSource(21989U);
    msg.setSourceEntity(175U);
    msg.setDestination(50775U);
    msg.setDestinationEntity(139U);
    msg.timeline.assign("YHAQRGYBTAJUHWSSYYILQNHIJNFCMAYYMXPLQTBDDDQGHFFIGHBULHFKBSNNQKF");
    msg.predicate.assign("AHGVYSMSYZHVDCZEOPZLJIUERWZQPWURHWGMMYBRSARPTNFHXVKKCJLWXNBLLTWASXVRVYZKGSJACMYSXJOTTHTLDIEIJQFMAXCCGPKNGZZHOLCNOZ");

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
    msg.setTimeStamp(0.388099415984);
    msg.setSource(36029U);
    msg.setSourceEntity(125U);
    msg.setDestination(27717U);
    msg.setDestinationEntity(203U);
    msg.reactor.assign("PRKDWWVURVIASMIAGIZICXZXLRJQPRQBORUTIMFZVNWCOTISSMSHIWQRVXEDMLBTYOQUVDYAPDPJDWLLEQZUWQYHHUQMXEFTYCGKUBJHKQYGGFSZXBSDXADFVSVJHTUTMBISTOOMWAFKGVUOHXEAYRYCJNYENBVKWGPAROEGHCPOEWFAPTCMBLHLQNPNL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GYRDNULRXKKUNOCOOIKUOCCHYOPGWNQKRXGWFYV");
    tmp_msg_0.predicate.assign("FUGUGSJFKGZNNVMDZRAQPCXNEVKPUZESRBDPHFADILWHTKYZVDKWJUQDFHOXLEUECVBCPRMVYWWFYSAOLKWXIDLNUTTHBHPHJG");
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
    msg.setTimeStamp(0.270781138825);
    msg.setSource(18691U);
    msg.setSourceEntity(152U);
    msg.setDestination(46335U);
    msg.setDestinationEntity(3U);
    msg.reactor.assign("DBMJZAQGCLBZXDZESOZNWUPWFOEYLRJWDXZUPZSANUDYMCFJVHTPSFRQKHNOUTJINFPIEXFDGYNGJTQJUBWQFEQOLZAKGWAYVHODWNAEYXOMCICUKLMXXJK");

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
    msg.setTimeStamp(0.145485722089);
    msg.setSource(16354U);
    msg.setSourceEntity(74U);
    msg.setDestination(48217U);
    msg.setDestinationEntity(112U);
    msg.reactor.assign("NHVFMBOLZGYVKYHIZWLOFLVKKDQMNEZRTQNNSA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GRDKLLCYRGP");
    tmp_msg_0.predicate.assign("ISXWJRMQTGOZUHGOHVHGAUKQDABHPGTNVYZAZUTFSVHXASSMEXMEZDSFMWACCUFRCDLICMGJXVBUSXHQNYISKNLNBQVNYKPQCLBTJFKLWFEOWLDWQRENZAGXNPTCYBRVXLJMMYDHPFZABCUKTHVKITPEPIWYBLAQFDDKOLQJRSILCHEPKQZUIBADPMZTEYOIRHFICPRJXTOXZRXALONDNORQVMEGEVGFKZU");
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
    msg.setTimeStamp(0.755514877183);
    msg.setSource(41191U);
    msg.setSourceEntity(39U);
    msg.setDestination(6303U);
    msg.setDestinationEntity(213U);
    msg.topic.assign("LCBEAWJAOQCEHAZTXMCMVCPYZBFKLLPQBXGENHJWYAJBDTOYRYKWGCKTLKKFDSWQRMRNYLXQKWUSOMQWDULHGVB");
    msg.data.assign("GLAPHYKIXCIUVNYOIQEHBZRWWVQAUCGYDOFKMRPJZBROJLCZJBZTUDMDEGFSNRPNOHHXMIILHDZTNHJPXLUMDJTFKOBDQNWESYKAPRZSKEMYWSPKWFQAPCHMTJNZGNALTMDBQSPXYSKLFXQXKBXULVIEFAFNHAJCQEARLDROHZPEOVIVEIDVCTIXYYWRSCGHSW");

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
    msg.setTimeStamp(0.451826001854);
    msg.setSource(59013U);
    msg.setSourceEntity(248U);
    msg.setDestination(62556U);
    msg.setDestinationEntity(233U);
    msg.topic.assign("TKCLGVAORQGIEBUVEQNPYZZXGDOKUOEARXAMLESMRJXAJPZDXMKEVROPUQYQLSKNGYLTJFWXYVANTGMLYEYNZWTSIGYWKNYBBMDQFTHHNDLRLBTJTMFGBFGDTFYSPMKHHIPMIUWFCWFN");
    msg.data.assign("GIOATSPGTTWRBFUFKKYOYCIKSYUUMMJTDUKKXCSYVNWWXSGOIHDIFJUOHNLMCFLTLWQBZVYSHDBCZAIZKIXAPVQQLCEJGAALBDDQEBGMPTOPHVQAWXCUNVXAGLKQFMELZQSDNOPTXT");

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
    msg.setTimeStamp(0.871750828119);
    msg.setSource(61038U);
    msg.setSourceEntity(125U);
    msg.setDestination(14895U);
    msg.setDestinationEntity(178U);
    msg.topic.assign("UBDISRESOGJLTZNGVFFGJXJWXTFWOIEZEMCMCAPQJISRRWKHIMQFLMLSJEVBKNKHBCDPCMXOEJVRAQEOGBGXPMCEOASVLNHXUTSRHJBZWNXHHIUUKUUPIYNLPE");
    msg.data.assign("UOHYLISUWGVUXPVHWZAMQDKEXWLDCLTKNMYIGWFJVNNRKXBVLACAQCMHOEJRFTLHFQICQTBZBFMFDIRHFREZLYPJNMYX");

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
    msg.setTimeStamp(0.603148080887);
    msg.setSource(19135U);
    msg.setSourceEntity(236U);
    msg.setDestination(59947U);
    msg.setDestinationEntity(4U);
    msg.frameid = 20U;
    const char tmp_msg_0[] = {-126, -63, -65, -99, 54, 114, 15, -55, 120, -14, -44, -82, 22, -8, -65, 126, -91, -42, 43, -14, 29, 52, 42, 89, -10, 34, -113, 60, 11, 14, 30, 32, 58, -12, -101, 87, 19, 122, -104, -6, 7, -128, -12, 9, 82, -65, -46, -24, 115, 6, 126, 123, 21, 53, 61, 89, -115, 123, 81, 79, 50, 63, -56, -15, -121, -36, -57, -104, -97, -29, -86, -67, -115, -108, 91, -1, 96, -37, -79, 49, -10, -110, -50, -74, -83, -95, -100, 91, 1, 102, -78, 30, 4, -84, 63, -105, -102, -43, 51, 106, -20};
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
    msg.setTimeStamp(0.185968071188);
    msg.setSource(51466U);
    msg.setSourceEntity(96U);
    msg.setDestination(17420U);
    msg.setDestinationEntity(64U);
    msg.frameid = 233U;
    const char tmp_msg_0[] = {-111, 93, 122, 19, 10, 21, 91, 23, -57, 104, -122, 64, -14, 34, -110, 70, 97, -121, -126, -24, -55, 90, 28, -15, 57, -108, 33, 51, 48, 17, -93, 9, 115, 41, 76, -37, -67, -47, -57, 44, -96, 10, 75, 110, 103, -104, -78, 39, -38, -16, 19, 98, -18, 106, -56, 103, -2, -56, -23, 113, 31, 100, -23, -22, 18, -65, 15, -56, -40, 117, 92, 42, 20, -33, 99, 46, -121, 41, -125, 91, 52, 21, -112, -39, 98, 15, 83, -2, 85, -81, 44, -74, -84, -101, 65, -20, -92, 123, -15, 106, 12, -120, -1, 54, 41, -70, 117, 55, 27, 113, -18, 55, -115, 43, -40, 38, 65, -55, 83, -81, 41, 117, 118, 40, -13, -25, -53, -121, 76, -117, -41, 23, 82};
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
    msg.setTimeStamp(0.599808371363);
    msg.setSource(55938U);
    msg.setSourceEntity(11U);
    msg.setDestination(2539U);
    msg.setDestinationEntity(47U);
    msg.frameid = 226U;
    const char tmp_msg_0[] = {-80, 124, 32, -98, -72, 89, -24, 74, -11, 52, 87, 94, -38, -79, -120, -15, -126, 37, 15, -90, -92, 56, 83, -87, -115, -56, -7, 52, -5, 110, -54, -103, -44, -84, -56, 78, -114, 105, 78, 46, -16, -44, -8, -104, -4, -17, -50, -34, 75, -56, 99, 51, 8, -1, 19, 33, -88, 10, -45, 75, 68, 87, 48, -10, 120, -118, -80, -3, 83, 65, 105, -73, -6, -105, -97, 100, 53, 66, -49, 81, -14, 34, 77, 29, -81, -101, -85, -118, -50, -61, -48, 25, -30, -54, -13, 71, -26, -72, -111, 90, 106, 58, 4, 25, 19, -47, -29, -82, -35, 53, 119, 86, 100, 98, 52, 50, 69, 67, -65, -48, -127, 62, 86, -67, -119, -126, 30, -29, 112, -72, -126, -22, 33, -55, -13, -128, 86, 111, 6, 71, -17, -111, -31, 105, 53, -79, -59, 85, -42, -95, 32, 18, -22, 24, -65, -104, 97, 105, -53, 91, 35, 120, -16, 64, -56, 62, -6, 71, -106, 57, -73, 10, 28, -63, -62, -97, 116, -113, -42, 23, -90, 121, -104, 15, 100, 105, 61, 124, 49, 49, -57, 80, -118, -102, -101, -112, -80, -64, 60, -76, 20, 106, -118, 58, -64, -53, -93, -118, 46, 80, 72, 15, -68, -55, 12, 32, 27, -111, -125, 107, 117, 14, -58, 31, 110, -4, -87, 17, -3, -37, -90, 66, -9, 31, -86, -85, 45, -68, -54, 58, -99, -112, 29, -74, -48, -127, -108, 65, -55, 93, -105, 76, -35};
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
    msg.setTimeStamp(0.471936475467);
    msg.setSource(58050U);
    msg.setSourceEntity(142U);
    msg.setDestination(7118U);
    msg.setDestinationEntity(189U);
    msg.fps = 189U;
    msg.quality = 73U;
    msg.reps = 84U;
    msg.tsize = 61U;

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
    msg.setTimeStamp(0.993487982112);
    msg.setSource(8318U);
    msg.setSourceEntity(3U);
    msg.setDestination(4011U);
    msg.setDestinationEntity(108U);
    msg.fps = 68U;
    msg.quality = 215U;
    msg.reps = 204U;
    msg.tsize = 7U;

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
    msg.setTimeStamp(0.960310414824);
    msg.setSource(35656U);
    msg.setSourceEntity(213U);
    msg.setDestination(28811U);
    msg.setDestinationEntity(6U);
    msg.fps = 169U;
    msg.quality = 57U;
    msg.reps = 196U;
    msg.tsize = 177U;

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
    msg.setTimeStamp(0.612122234242);
    msg.setSource(33578U);
    msg.setSourceEntity(77U);
    msg.setDestination(53196U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.307888760078;
    msg.lon = 0.331121210399;
    msg.depth = 198U;
    msg.speed = 0.729809748491;
    msg.psi = 0.773613571482;

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
    msg.setTimeStamp(0.575131276134);
    msg.setSource(12035U);
    msg.setSourceEntity(220U);
    msg.setDestination(41707U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.752894744033;
    msg.lon = 0.658367708296;
    msg.depth = 87U;
    msg.speed = 0.00309121733794;
    msg.psi = 0.154224374135;

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
    msg.setTimeStamp(0.144485276962);
    msg.setSource(48550U);
    msg.setSourceEntity(205U);
    msg.setDestination(37820U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.138285187423;
    msg.lon = 0.344736545197;
    msg.depth = 164U;
    msg.speed = 0.310849394607;
    msg.psi = 0.525714559025;

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
    msg.setTimeStamp(0.820022448429);
    msg.setSource(2265U);
    msg.setSourceEntity(103U);
    msg.setDestination(52660U);
    msg.setDestinationEntity(155U);
    msg.label.assign("WSMZZCQURULBOLOCAKDTRDYMJGOKQNXHQNKHCZXSKNNBTGNAMWMDVJBBXBJHJKDCLGAIQIWYYYHEEFHHRFIPBVEXRRFOKNTQJXFGMEBYFIQLDSIFIVSCAAENAXFJORKTRYTZUSTKY");
    msg.lat = 0.163512169823;
    msg.lon = 0.476061243173;
    msg.z = 0.684505602303;
    msg.z_units = 154U;
    msg.cog = 0.735051679142;
    msg.sog = 0.44845682703;

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
    msg.setTimeStamp(0.621379529694);
    msg.setSource(27582U);
    msg.setSourceEntity(167U);
    msg.setDestination(30774U);
    msg.setDestinationEntity(249U);
    msg.label.assign("JRURIEIPBDDXPNLGJSOZOVKUZRXUDUOFSXKEDJKZDQXKQRHNWAAWVBTVYROELAYNXEBTTZUNXCZEPTVNCKMYDLEJHHTSXHSWHYPZACGJFQGAZHGYLFZKIVDAWJOCFTXWMQBLKCINTAOPVRETVPUPIQGCWKXBMLNUZADBBJAGHWUYMSKHMBMMYONVNCTOHXILWCAPEYIFPDNFQGMJFFBYULSQKGQSIRRDYJBIUC");
    msg.lat = 0.749041310115;
    msg.lon = 0.729392126956;
    msg.z = 0.0526328098523;
    msg.z_units = 83U;
    msg.cog = 0.552237254248;
    msg.sog = 0.761175133669;

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
    msg.setTimeStamp(0.780811307677);
    msg.setSource(48255U);
    msg.setSourceEntity(116U);
    msg.setDestination(24913U);
    msg.setDestinationEntity(94U);
    msg.label.assign("RMQQGHQUNMSGEJJRMUCNHNFTAXOWJNQFIYABDRAZGIRJFOWKLXXDEKFRIHPGYCZPICOIJDQYPHASDXMQULLLQTXEECBAZASSXVAPLVFFCUCWUHBSQTITCFBWOOJHBALWOQSRMSDMETZDMJWPTXVMVMQKEDHUGGCPCWUPCSUJZZIGXJEGYEMYWHTIBBWHKULZKTLEIKBTNNUXYFRTHNOBZGLRGSP");
    msg.lat = 0.364052296266;
    msg.lon = 0.969679512629;
    msg.z = 0.868206648359;
    msg.z_units = 130U;
    msg.cog = 0.347252264766;
    msg.sog = 0.223721733943;

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
    msg.setTimeStamp(0.222410417482);
    msg.setSource(42488U);
    msg.setSourceEntity(76U);
    msg.setDestination(39293U);
    msg.setDestinationEntity(107U);
    msg.name.assign("CQPZKWFKVOIZALLPGGOHGTRAIDGNOKRCCAYALHDMPDAQYYMRKCREQINLE");
    msg.value.assign("DOBEIXHYARGHCYHGNPNMJDETZNDCWGMUGTOUVWHPSCFYKIFJADCRAZIKTMUPOCUTWRIBLQKFBQSFRZCYSLNUXXWQVTNOJWWKRXASFHPPBGUUZIVAKNQJMNRTZZEFDSOXBLDXMNHJGJJKAXNIZGVPCEQELIGMSHJZCYOEDUWEKAPFWYEBIUZDTVBHPEJQGYCQPSJLOQXEWLTPF");

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
    msg.setTimeStamp(0.782464536196);
    msg.setSource(27115U);
    msg.setSourceEntity(240U);
    msg.setDestination(43319U);
    msg.setDestinationEntity(64U);
    msg.name.assign("VRFSNJSVCYJVUXYPKGXHPAZUMLUBAZKBSYJHGHINJCJRHIHGFSPIPDNGVHYPZNNUJGTAQWDKVLOQBUEDMNFOKVBFVTKFOXUUGHAQEFRMRPEBZYXSCASAC");
    msg.value.assign("KPOBESLXGXOMKRVENYIOUFFSUHAZNKVIFHARPOGDYEBLWQONJJPJXPLDRSLJQTDPWDVIQHLOHUDDETLXZNPIDHGVVXVNMCEBC");

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
    msg.setTimeStamp(0.993432540253);
    msg.setSource(39195U);
    msg.setSourceEntity(180U);
    msg.setDestination(30094U);
    msg.setDestinationEntity(206U);
    msg.name.assign("XKRSYJCVDTYAOLOGPVSDLXYLDZANJPRUFOHZAVYBZDRAMVZRIRASSZQTBQPQMMHJNUXVCPTFPHLSBKORMJUWRXWQNEFBCDOIEKNRTTKIUBPVMCIHLECLENNMWPWUCMZUOYDNQOXBFQYWJKHFKIKKHEXTHVDACJSTAEJGZGJLTBAKFFDSOLUUWIDVEPHPUYLGIWJKOSZQHQNBEBZPEWIZMNAEWFSYGRTMMQWXXVCBVXGGDO");
    msg.value.assign("XGPGIQNXTPBVLFVRFSIWWBXFPSNNMBISRIXDEYOMJPDOLMHAKJAETSHWNDUYUBHKZPHHCCKWVQOTKNPZQVZLMYAUFZGFBUTIDRRLQLVHLCRDREBTBKQTRYCXDZMBCUUHVW");

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
    msg.setTimeStamp(0.573266806815);
    msg.setSource(35064U);
    msg.setSourceEntity(45U);
    msg.setDestination(1041U);
    msg.setDestinationEntity(213U);
    msg.name.assign("UVWRRJGAJYJUQWUMOGINODHEJYBIKXAOBNHXCWKDRQCUBKJMSAHQQZSUMPXUXYMQLUACDVCMPFGAQLIELRTSLLNELKXGFYWUHSOZMZHGJECCEFNNVMPOIZTPIDYHNBKYKHITYXTPSZEPDTBSIOFVDPYVUXWZRWNNGRSDFERBBVLFBSZQBLVAGQFJRTTIFFXGY");

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
    msg.setTimeStamp(0.416648189913);
    msg.setSource(29969U);
    msg.setSourceEntity(198U);
    msg.setDestination(40598U);
    msg.setDestinationEntity(253U);
    msg.name.assign("IXNODGIBKZJMRJUAUJCCZBBCFMDGYRWGDNKYDYBRPXFEKFHDLBHIDUIMQTXLCOWSEYALSVICYENLHGZGHVAEHFPRRHRSVJCUROQYBJCDBTHOTVETXFOTMVEWMYMVXDGAGIDMEALZQOKPZALLUJJEMKFPYVIERYIHXQMPWOKJFUQZFCXBNTLPSBSONGWKTPQCT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MLNKCWOZCNVQQVXLETKXWJPEHQWTLWKHRKIGTPZTLIBBHEVYRTDUGQGNPAZLMCLQCYIDJUUGTFHTXMSXYYKAIZJPUOXXDHBKQDVMOLVCDRTFWCOIUIMHQXUNEIDAFRWXSNYLRYBEJSZFSMDOWGYIXVKMBZQOOPVZSGMAFLMSRFDVQL");
    tmp_msg_0.value.assign("KBWUGUCGKVLJWZDNAFFWEKAHRLEKILYXKUCERIIGTJDHJSTESMIYFIBXCHCGIVCNZODBMTRKPZJUUHJQJXXVAQFPKRMJPIMCEOQIDQRBTNENORJRKZYJOPAWQZDHXNQOAHULWHVBACQEXZHSEDUSXBCQSJYSDUYBDSYGFPZMYANXQPCGCDTOWIRSPOYMHWNQSFFAMUUEZKAFXGNEAGLPOWVLFMYONVTBVTRPFDGLGTVTXHVMOZVSZPMBL");
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
    msg.setTimeStamp(0.594430794688);
    msg.setSource(40740U);
    msg.setSourceEntity(86U);
    msg.setDestination(16901U);
    msg.setDestinationEntity(143U);
    msg.name.assign("QJQVDCFXSNEJNPCKPCKOOUXMFVPGALEHHLBZDIAHUFXDCPOZDFVEPJLKIASMJVZHWRCRLYDKGUCJRSTLNOYYEPQHPIHWMURIQLJTFIQSVAXQRXCJAEFPXYOMVQGYNWGBHNEKBARTALHYKJGCBMVABKAJQGREPZTGDQRYVWBWGOFRMZPBITEKVUFYMOOQZM");

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
    msg.setTimeStamp(0.804085600622);
    msg.setSource(8470U);
    msg.setSourceEntity(121U);
    msg.setDestination(5682U);
    msg.setDestinationEntity(71U);
    msg.name.assign("PDDCIRJQRTNCKGTECFDXJHCWIPUUIBYVHRTAFUMWONFFOAEXPWOYXETMOKZXHJBIZSQLJNLRCRHKTYJVNIAKMUCGUPBHYGOFPWLSKFNNWDVQWZYJJFJQDRQYDTZBBGAZYCTMGAIUUABM");
    msg.visibility.assign("HINQLOKASEFBHZUTMKSKJMTVIGMVFGIDPDWXDPDTQRGJGDVAXXYBSKBRQMIWYCXPOEFOATGHCECFIHMFWMURDIYTQTYRHCGKCCJLLEEOBZKZQYNVVSCSKJNGSWJPENUAVPEFMWTOIEQUVRMWAFATOBWKWXUJSXVKIRBZUTKRGYWZRYGXNHGIUBFJTDLBLCZVLMZQNXAHNHVHSHADEPSOYAPPFBZZLZQCJJCAOSLDRONXLLR");
    msg.scope.assign("LWFMECYJNHBTYSWCHCPYKKSBKUKPMFAMFQFKCUKIOOBUQXVAIGNRGKUQMVJYORUXDDTOGUDLXFTPOZEZWMUVNLXJUIJSQJUQYEMDKQPNEEGAZCIBLSQAPGAABJZNFYBXOFUWNSVTSGXTXCRDDYCRZVYIROLLVHLTHMBLWJGQQDAXPEZXEJVMPHQP");

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
    msg.setTimeStamp(0.00775438902369);
    msg.setSource(8690U);
    msg.setSourceEntity(95U);
    msg.setDestination(45474U);
    msg.setDestinationEntity(108U);
    msg.name.assign("NMRSGFROLWBZOVIMKVTSBSSFYTRXSAHJWOJEUCNFOIHJKL");
    msg.visibility.assign("SHAXDCUUBIEBZLGDHKEIGKUYBCOKQUGTIDXFIKQGJKLOYGULVFPHMGAFNKREYHOVQCEALJMRRYFTBUENLBAPRHHOFUEMPAUFICPMZZQWVVYSNTJHOVKJMGAWTFJXKESWBRPFIDCWVTPZGCWZDXPNEZMOSISWYYADQRWJBQTVHPGJOCRONSBXRDNVWXLCFDHZMLBQYKTNRSXGOZPAVMXLAJSNYNISLTNQDOCAJZTXYMCE");
    msg.scope.assign("YDXJNIXZHJMJMZ");

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
    msg.setTimeStamp(0.640478845458);
    msg.setSource(8378U);
    msg.setSourceEntity(3U);
    msg.setDestination(31741U);
    msg.setDestinationEntity(107U);
    msg.name.assign("RPYIMDNYZSYYM");
    msg.visibility.assign("VEJCJEYKWHQVCYNFRQRWTSQRHFHUEQYTNIWEANIOZTYEREGKDIXAUDMAFQDKJGYISGDDYBZAMZKHPQBBXRROSJLWGIFNUFPWAJYL");
    msg.scope.assign("QSUQIRRURYEHETECWJPLMKBPMJJPLXOYRPEYCCKDYXUAITSTTBUVSAZHKIYIHJTMQWRGCVAOUWMSVBBZFZFCOEXGVSWJLMLQNKZQAPYDTDOFWNUKGXPBPRAOVDUDVHRWBIEOXFVDGMUDQGLHSHBTGONKKXTLCAAWBKGVFWSNSZFOVYFEPFXDNAQYTBLIONGEKXIXSNDATUFSMJIZUCBQAQMCHEYZIDMXJYKPWHNZHLGJCCNPNZGVJMFJRZHW");

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
    msg.setTimeStamp(0.934616472207);
    msg.setSource(22453U);
    msg.setSourceEntity(236U);
    msg.setDestination(63800U);
    msg.setDestinationEntity(170U);
    msg.name.assign("LJRVGDJXVJPUPSMEYULBLTYEHHIFAEIZQXBWJVRBTLFRORQCHGCWOPPZX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RENIULURNDGCYHBAGKOYVYZPQUGOEIEZ");
    tmp_msg_0.value.assign("VTKEUNCMBCBQED");
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
    msg.setTimeStamp(0.408449654301);
    msg.setSource(28177U);
    msg.setSourceEntity(55U);
    msg.setDestination(13232U);
    msg.setDestinationEntity(17U);
    msg.name.assign("ZZGISOVMXZFMHBUAWSGRLQDQPIZXWSJGELAGRDFUQXPCTOHHPXGBOTTPWSWZSIPNFYOVOUVYROMBCHRVJPKCOYDLESHMSAYXYWCXTTPZISGTCOYONLPQENZUUQBQENREYJIIODXRKKYDFQCHMAGVGAXJYCWLBVEYKXWLNFRDJHTHPIVNCJDJKMVWNTIMPWUNRQFRBHI");

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
    msg.setTimeStamp(0.94763711582);
    msg.setSource(57082U);
    msg.setSourceEntity(61U);
    msg.setDestination(14072U);
    msg.setDestinationEntity(142U);
    msg.name.assign("RKVZWKFYYNXZOIMAQZESNTUXODDRLNGKKNCHYDFA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TSTHKZUPKVBQIKPYUETJBFWIIBOIBDKORKUUECGASSDBIXHKTXZHJEBDJFXAAINFGRDMSCXXKVQGJHYTFOSVMYBQQRBRPCXEXANMIQYD");
    tmp_msg_0.value.assign("LLEPUTATVYHFDJSIACROEWZXQNUTYOVFHWUOUNDCMUTGQJDXBNSBEJATLBELBXYHMTQUVCPSXGGVWNWGSPTQSMACWOFMKWAKFJDTCOKOMZQJMWGVDPIAJEGPDNZWHYANXDLZVHYAX");
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
    msg.setTimeStamp(0.00680243189993);
    msg.setSource(12904U);
    msg.setSourceEntity(6U);
    msg.setDestination(20397U);
    msg.setDestinationEntity(238U);
    msg.name.assign("QQMFRHDDGUHXLEUPSSWCIXIASJGFRTLAFVCBSONKNYAUKSGCEWAYMGYIDPIKASZEBHQHLSENLKYTCNCFVGLDGDLIHJUXZRWVHPPABHFCRTENFYBYKTLOQISUZVCZDWUABOGYNVEYPWZZEXWAXGHKVMWXMZUCMPDXDNBLJJIJOTJVVQBEVWFCQTIQKKMJRZTULJJPORDXHJOGOVYZNFNQPDYPLRHIMBB");

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
    msg.setTimeStamp(0.00399238981947);
    msg.setSource(738U);
    msg.setSourceEntity(163U);
    msg.setDestination(1562U);
    msg.setDestinationEntity(37U);
    msg.name.assign("UAKVYEJFJCQWVLUTNVHWVBIJAISHZDGONISQQJHSWMFOTAQUGCNUQIIRTDEGYSVIERYOBPAOHAYUPJGYCVWYEBBWKRJTFYABXJYDNSAFVVNWBTKFTRZUKOKJTBHLTXPXMGTFRJCQPNMCXKRGDMELPQNOOEMCZIUMXZSHLOHMODEIZRFEPICQXDDGXQVZNSDSIRUZCUBALMFLKLNNXZQHPCTFX");

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
    msg.setTimeStamp(0.415958657542);
    msg.setSource(54606U);
    msg.setSourceEntity(205U);
    msg.setDestination(16059U);
    msg.setDestinationEntity(38U);
    msg.name.assign("DINEIMMVFINUEITWWWULFEOCOCK");

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
    msg.setTimeStamp(0.822786333407);
    msg.setSource(14619U);
    msg.setSourceEntity(7U);
    msg.setDestination(1651U);
    msg.setDestinationEntity(207U);
    msg.timeout = 760917364U;

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
    msg.setTimeStamp(0.411444645871);
    msg.setSource(58646U);
    msg.setSourceEntity(182U);
    msg.setDestination(62249U);
    msg.setDestinationEntity(249U);
    msg.timeout = 893268947U;

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
    msg.setTimeStamp(0.933563107903);
    msg.setSource(61748U);
    msg.setSourceEntity(253U);
    msg.setDestination(18110U);
    msg.setDestinationEntity(242U);
    msg.timeout = 3032104854U;

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
    msg.setTimeStamp(0.13480977851);
    msg.setSource(29117U);
    msg.setSourceEntity(62U);
    msg.setDestination(20634U);
    msg.setDestinationEntity(84U);
    msg.sessid = 3481729298U;

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
    msg.setTimeStamp(0.867072813061);
    msg.setSource(31991U);
    msg.setSourceEntity(73U);
    msg.setDestination(16840U);
    msg.setDestinationEntity(100U);
    msg.sessid = 3527422723U;

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
    msg.setTimeStamp(0.698393947302);
    msg.setSource(40325U);
    msg.setSourceEntity(57U);
    msg.setDestination(45448U);
    msg.setDestinationEntity(32U);
    msg.sessid = 766241065U;

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
    msg.setTimeStamp(0.338665761577);
    msg.setSource(58098U);
    msg.setSourceEntity(46U);
    msg.setDestination(65380U);
    msg.setDestinationEntity(85U);
    msg.sessid = 277141088U;
    msg.messages.assign("HMIBMJKDPNSODWYGJSZBOCWNCHRXCOPEEPQASHHSKDVEFHKYNLPKYYWTRUZRIZOPSJQUQUFQVHMLYIRDLAGNOSGNMFMDZOKPAVIEDGVRWPLVXJZXUZTSFJNGFXTEZ");

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
    msg.setTimeStamp(0.302242524078);
    msg.setSource(64505U);
    msg.setSourceEntity(53U);
    msg.setDestination(65252U);
    msg.setDestinationEntity(14U);
    msg.sessid = 1714014498U;
    msg.messages.assign("MOMRGLFSIIDPXVMBZMSPFCJKHAYRRYNLVGCRXAKHZOKTWUESSTLZWIYYVHRLGATJJ");

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
    msg.setTimeStamp(0.632254932194);
    msg.setSource(30035U);
    msg.setSourceEntity(28U);
    msg.setDestination(42067U);
    msg.setDestinationEntity(234U);
    msg.sessid = 974703627U;
    msg.messages.assign("BVNXKLDNAKUHGVOULYTYIGRVNCNRCSAXEKBRYAAQPJYFYGLSZOXKDBZAHXUMZFMMPFVZFMWNXODCUWUAALHRVGNEFQPSICQOTULRXLRMJCHOQBOCMGJZPATWWKCYGTNGIZEVEYXWIHCIPUSEXSVJQLZRJHJOCDIJITHHFNLDEXKALYBCQIMBKHMFEHTZTOWGDUJQUGBDWAWTSTPWESOKMVIFSPRDBOPPMUZKBEQDGQJYVDVNEPXY");

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
    msg.setTimeStamp(0.513146787987);
    msg.setSource(41261U);
    msg.setSourceEntity(210U);
    msg.setDestination(49579U);
    msg.setDestinationEntity(212U);
    msg.sessid = 4235195605U;

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
    msg.setTimeStamp(0.975064275421);
    msg.setSource(29697U);
    msg.setSourceEntity(148U);
    msg.setDestination(460U);
    msg.setDestinationEntity(60U);
    msg.sessid = 1053263226U;

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
    msg.setTimeStamp(0.921818806638);
    msg.setSource(49597U);
    msg.setSourceEntity(182U);
    msg.setDestination(551U);
    msg.setDestinationEntity(201U);
    msg.sessid = 907405979U;

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
    msg.setTimeStamp(0.149335396064);
    msg.setSource(43160U);
    msg.setSourceEntity(182U);
    msg.setDestination(42797U);
    msg.setDestinationEntity(60U);
    msg.sessid = 3667276640U;
    msg.status = 175U;

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
    msg.setTimeStamp(0.195998062211);
    msg.setSource(34885U);
    msg.setSourceEntity(7U);
    msg.setDestination(10902U);
    msg.setDestinationEntity(137U);
    msg.sessid = 4080317243U;
    msg.status = 167U;

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
    msg.setTimeStamp(0.69729704644);
    msg.setSource(14109U);
    msg.setSourceEntity(183U);
    msg.setDestination(51902U);
    msg.setDestinationEntity(58U);
    msg.sessid = 603437480U;
    msg.status = 161U;

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
    msg.setTimeStamp(0.509071299724);
    msg.setSource(40341U);
    msg.setSourceEntity(167U);
    msg.setDestination(58332U);
    msg.setDestinationEntity(11U);
    msg.name.assign("MGPFIDBTNOWJDEMONQPNLCJKURWPUZGKWHMUMOFAPKFGDOQVHQMRCBFQOHGNASMUOJZNVJJYYJLMVZDJHDOWTJZYCPZRASWVBUJIEUSISRSGDARAIBODXVAGEXEPJOBXCNTYREIZIYPEUXMTTPBYVXFSINLFWWDGUKHTPXBHFLFYHSSLQPAOLIVUEXHZDTLILGFCTRLIGQHBKUCXGDBNNKSRRYQMQZZVWY");

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
    msg.setTimeStamp(0.663300095023);
    msg.setSource(43502U);
    msg.setSourceEntity(131U);
    msg.setDestination(63228U);
    msg.setDestinationEntity(94U);
    msg.name.assign("AVOEWRDTCAZPHTXWRCSQXZPJLXTNLMHXJYNBQMPKIQMRSVFZGUDLNTNLWXIQUBEKITKGFFEDXLCYOINBYZKSYIHDYUODAJHJPRVSKCKVHXUGFZAOVWRINDDSWPAWFBFAMOXYMNZDRNHJOEFYAJKFGGMWTQVGSLKTJOZTMKIGXQEFZABHURBPGVCSCBECNVIAMUTTWLJSUQPKGPGDEZIERYOFNOLMBJYXQWQEIQHA");

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
    msg.setTimeStamp(0.301846119849);
    msg.setSource(440U);
    msg.setSourceEntity(119U);
    msg.setDestination(27029U);
    msg.setDestinationEntity(152U);
    msg.name.assign("NHVQLXPQOEURXWQDDNSNJZUUSDIJWTUOASRVLUNIYHXPUSKVVESNRLYIWOQJCYBINUCJTMPEZHAKMLXSWAYMCTSJKGCKLYGKFGFBAFAHSENSQACLRRTNXXJYISWBVZGOZOUHKCEKCTEFQJBZPHIMCWEZJELKGLGMFQTXQYZFAHIRHUGDDIHZBFDAPZCIQBD");

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
    msg.setTimeStamp(0.743592995352);
    msg.setSource(45193U);
    msg.setSourceEntity(190U);
    msg.setDestination(15630U);
    msg.setDestinationEntity(23U);
    msg.name.assign("NNIPMZNHTFNHEXYSJNSXPUDQOWEGIKGLKOVGYAUWBAPEIOWSQTUGQWWXIXJEUIDZHPFQOFVRQQOMAW");

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
    msg.setTimeStamp(0.426364997733);
    msg.setSource(21911U);
    msg.setSourceEntity(125U);
    msg.setDestination(23739U);
    msg.setDestinationEntity(170U);
    msg.name.assign("TZYBISRLYGPWGXOUNLDFRZGKNCBCYDKMAQJYJLDPRICKHJFOGLVXGAWWUDXMKRFJRBVTVWSAYSGRHKLTDONVJNZBEIUUCYCNLPBMIZOQEPCTMPLGMWGBLHNIDYFZSYUUPPGCVETHMASARQBIAJWXSNEHIRINTREIOPEYZRFLACPZSJDUINHFDMUAXG");

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
    msg.setTimeStamp(0.318088945042);
    msg.setSource(39797U);
    msg.setSourceEntity(150U);
    msg.setDestination(51392U);
    msg.setDestinationEntity(31U);
    msg.name.assign("JEXGNSCOWTOQQIDNUBXTBDBYQDPZZPFKSHEDA");

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
    msg.setTimeStamp(0.562389053778);
    msg.setSource(43800U);
    msg.setSourceEntity(107U);
    msg.setDestination(257U);
    msg.setDestinationEntity(133U);
    msg.type = 212U;
    msg.error.assign("RPTVTUEJAIJKGTWKGLYYPDRJFKEALGMRCQZFENSJKBIMGFMNTMTYAXCVPURYSEKTVFAJQSULMGSPGNWZGQUWH");

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
    msg.setTimeStamp(0.467961821934);
    msg.setSource(38472U);
    msg.setSourceEntity(112U);
    msg.setDestination(38519U);
    msg.setDestinationEntity(157U);
    msg.type = 160U;
    msg.error.assign("AXUUUWGRVJQAECEYPQJJVTQRGPPRU");

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
    msg.setTimeStamp(0.313516408876);
    msg.setSource(5506U);
    msg.setSourceEntity(33U);
    msg.setDestination(23688U);
    msg.setDestinationEntity(11U);
    msg.type = 46U;
    msg.error.assign("JLDSXDYVKEEGCBQLUPHUTQCXSNCNFMCKDXJJDBCNGCIJRJEFWNTRWLEUYJZKTIYGIOCAZBAONBVBMMHFMPRCUSQLCAVLHUQKLHLLPOYVEORFMRRRAXYVUZPXAOSASMWGYWTDBFQKTDMSORVGFKOQWEAVKMJIQLFE");

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
    msg.setTimeStamp(0.534962267637);
    msg.setSource(58089U);
    msg.setSourceEntity(232U);
    msg.setDestination(7009U);
    msg.setDestinationEntity(10U);
    msg.seq = 59208U;
    msg.sys_dst.assign("WKTIGAAXYFDMHLDQIUAZWXYQGOBSDQGLRFSVHIBVJNKQWICDGUOYJVGAHRXAIKGWFG");
    msg.flags = 1U;
    const char tmp_msg_0[] = {81, 124, 47, -95, 8, 106, 37, 19, -85, -31, 80, -119, 126, 8, 117, -104, -89, 9, -88, -124, 82, 124, -77, 74, 30, 10, 55, -78, -121, 36, -38, 22, -12, 43, 18, -21, -128, -5, -98, -51, -40, 67, 23, -115, 80, -92, -91, -69, -46, -110, 124, -112, -104, -80, -53, -38, -9, 56, -49, 106, -87, -112, -106, 49, -90, -118, 14, 117, -19, 10, -86, -45, 73, -79, -45, 8, -24, 21, 22, -27, 99, 41, 83, 68, 117, 117, 95, 123, 3, -119, 92, -123, 90, -67, -91, -46, -65, 81, 54, -5, -80, -123, -80, -102, 8, -85, 90, -40, 68, 26, -53, 59, 97, 55, -89, 94, -69, -61, 60, -48, 8, -112, -116, -49, 19, -114, -5, 58, -42, -13, 106, -99, 101, 123, -75, 103, 16, -37, 103, 57, 84, 6, 117, 47, -41, 125, 53, 62, -82, 55, -13, 46, 118, 122, -11, 1, -111, -100, -43, -111, -78, 120, 89, -76, 124, 61, -44, -28, -116, 79, -6, 93, -3, -38, 58, -25, -36, 13, 70, 108, -50, 52, 20, -66, 94, 95, -17, -25, 66, -106, 88, 60, -32, 54, 26, 21, 82, 113, 97, -111, -24, 2, -118, 83, 37, 28, -112, -3, -9, 115, -110, -22, 102};
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
    msg.setTimeStamp(0.375600411319);
    msg.setSource(44076U);
    msg.setSourceEntity(115U);
    msg.setDestination(53601U);
    msg.setDestinationEntity(59U);
    msg.seq = 45646U;
    msg.sys_dst.assign("GKPILOZXZZMMQQNGPNABPRZQBKLJDSORFFBBWYHURMJSXWPTAPEZNHBZFNILMXKMIWGYICAVANEHQUQACBWCSBLIUKKPYTLRVLEPESMXJVNFVWCSRBJIGESPCDZUCTCYNVNUTVCYTDIZFHJJQWQQDFPSOESOZILWVUAY");
    msg.flags = 140U;
    const char tmp_msg_0[] = {-81, 110, 95, -93, 73, 37, -65, 2, -26, 120, -11, -36, -79, -121, 89, -41, -27, 107, -103, -83, -93, 33, 94, -26, -123, -26, -118};
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
    msg.setTimeStamp(0.353178538083);
    msg.setSource(37153U);
    msg.setSourceEntity(147U);
    msg.setDestination(48421U);
    msg.setDestinationEntity(187U);
    msg.seq = 27163U;
    msg.sys_dst.assign("RJSZLJBASQXZKWWSXQKNXMMTJFRVPTQGDKPWLZEFOCRAINELRTSZALVRSTHLWDDDCINKYCUZJDALYBSWUKWSPLSLQBOFHMAUJKNDULXMBVGZTJCRCFIMVUTDOGCWNFIMBOAXMHHAJDNVFVVFNZQCOBFZKYYPECIEMRYCATXGYOQQYSYQJXROPRUTUZJOABEBRINMHFVYOLHVEHWGETPNEMU");
    msg.flags = 238U;
    const char tmp_msg_0[] = {12, -116, -83, 113, -73, -98, -125, 9, -52, -122, 9, 87, 14, -25, -112, 94, -91, 41, 18, -64, -105, -58, -43, -112, 61, 63, 80, 55, -39, 95, 70, 17, -41, 89, 96, -93, -126, 79, 68, 113, -38, -64, -66, -76, -78, 117, -39, 67, 82, -36, 122, 37, 10, -18, 7, -55, 56, 100, -77, 31, -48, -52, 57, -73, 76, 100, 73, -11, -33, 98, -56, -10, 80, -4, -6, -74, -77, 39, -87, 109, -27, -54, 81, 122};
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
    msg.setTimeStamp(0.640135993407);
    msg.setSource(52310U);
    msg.setSourceEntity(245U);
    msg.setDestination(14223U);
    msg.setDestinationEntity(60U);
    msg.sys_src.assign("VRMZKQQFDHOESBGLZRNZOMFQICYILIBWFGWMVJGMYMVLPFKTAXLSSUHJZVEEJGVIXCOJZENJPISVDLXUNFOPKXTGASSXUMUWGORPYQDVFSNLRQJBSMDORNNUJPKLNCTHGNIWFPUREVTWEHEHORTDHAGCKWWMTTYVWUPBALEFAHAXCWRBCROVGT");
    msg.sys_dst.assign("MAIZTWBKAEGNIIJSYSQDYGMGCCGHOLEUBSJISIDYGONUDPNPMTEKEOAOFKOMWWBPZRKADMBJUXPPTPZHIRCNSFHJCSEUMUXWOVNWDWVWLRJOWWUAZYDKNIYMVNGWHATCKSHCYZXDVBZJJYMQLAEUUNRQVXLJEYFTJEXXBDSCAQLNLPLPEGYGTTCKXDTHUMFCCZBFRLFBYQQTVRARQHZGRIQRXPHHIKZQIFTBEOXNOS");
    msg.flags = 94U;
    const char tmp_msg_0[] = {-60, -87, 41, -91, 32, -31, -21, 60, -89, 96, -29, 73, 32, 23, -128, 89, 30, -118, -104, -42, -128, -34, -21, 95, 42, 64, -28, -82, -12, -46, 55, -56, -74, -25, 4, -55, -27, 11, -83, -120, -85, -118, -54, -40, 28, 11, 95, -103, -104, -25, -95, 0, -22, -120, -30, -72, -65, -69, -113, -80, -19, -126, 86, -20, -70, 44, -67, 70, -5, -83, 57, 38, 100, -92, -35, 87, -41, 1, 123, 71, 21, -101, -72, -47, 116, -89, -81, 38, 36, 89, -35, 78, -110, -104, 104, 6, -74, -25, 106, -7, 40, 74, 49, -24, -55, -51, -79, -103, 89, 50, 23, 106, -86, 107, -35, 126, 113, 56, 51, 33, -88, -92, 88, -36, 49, -84, 15, 19, -82, 113, 87, -35, 75, 118, -37, 32, 32, 55, -15, 10, 88, -78, 11, -106, 56, -53, 122, 123, -102, 94, 7};
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
    msg.setTimeStamp(0.542516560644);
    msg.setSource(58595U);
    msg.setSourceEntity(223U);
    msg.setDestination(22621U);
    msg.setDestinationEntity(166U);
    msg.sys_src.assign("INZACBQTTMDRDVXOSNRJIQVCCGBKHL");
    msg.sys_dst.assign("QEOFPKTYDGMYHKRRU");
    msg.flags = 55U;
    const char tmp_msg_0[] = {-58, -81, -122, 63, 49, -122, 8, -113, -34, 30, 23, 22, 99, 101, 58, 95, -85, -122, -102, -49, 48, -24, -32, 12, 105, -70, -67, 62, 47, 123, 51, -9, -4, -102, 25, -40, 124, 48, 111, 11, 77, -119, -42, 105, -119, -40, 98, -31, 113, -39, -50, -23, 87, -37, 113, -106, 110, -45, 84, -123, -38, -47, -73, -75, -62, -33, 70, -4, -5, 41, 103, 61, -51, -58, -74, 73, -44, -128, -108, 58, 26, 86, 12};
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
    msg.setTimeStamp(0.791171901904);
    msg.setSource(18914U);
    msg.setSourceEntity(203U);
    msg.setDestination(38247U);
    msg.setDestinationEntity(59U);
    msg.sys_src.assign("ANIMTIOZCXFLEXTFOIPIYJIWNHRFAWJTFMDQOOEPQBJP");
    msg.sys_dst.assign("JNJPDTUBZTARDVGWBULUQGFFDAGZFLMCOVNSJRBSGAYMCHKJSTDJYYXIVXKAEVEJIZGCCWIHNZUKWGYUKDAITNYOATCHOTPWXGAMSQHFHPIRQOCNZFXGROSJUEWDMUMWAKTDHXNBGWEBBTQWLHEJLXPFOU");
    msg.flags = 77U;
    const char tmp_msg_0[] = {80, 56, 75, 21, 110, 20, 60, 85, -10, -71, -2, -123, 1, 57, -126, 36, 101, -95, -5, -54, -86, -107, 53, -1, -14, -31, -80, 104, -70, -58, -12, 82, -36, 11, 39, -75, 103, 106, 122, -120, 54, -35, 49, 95, -51, 75, 58, 85, 27, -75, -107, 61, 114, -18, -46, -38, 64, -124, 40, -61, -86, -79, -76, -8, 69, -48, -38, 72, 61, 101, 4, 101, 77, -27, -9, 48, 114, 89, 59, 113, -30, -66, -119, 104, 26, -53, -29, -5, 76, 24, 70, 69, 88, -7, -60, 72, -44, 0, -74, -14, 4, 62, 90, -61, 2, 45, -96, 28, 89, -37, -74, 30, 52, -8, -25, -29, 51, -69, 58};
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
    msg.setTimeStamp(0.480864535887);
    msg.setSource(7965U);
    msg.setSourceEntity(219U);
    msg.setDestination(19962U);
    msg.setDestinationEntity(109U);
    msg.seq = 7174U;
    msg.value = 211U;
    msg.error.assign("TGPAGVSNJSDBWDVXMWONQMZCCNGFETLEQIJXKYSLFSAXTCJGFREWTDFHDBLXXEWCYRSFSQJQACKSMNKTBHYDXYDYLOBLOYVHEJPDYHPANECMRYZFBZMLQUEGCPIARSCJJAUNLAPVRRDERRIUVPLIOURGAGVKORPWSNDOJFVZZN");

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
    msg.setTimeStamp(0.206706059575);
    msg.setSource(28892U);
    msg.setSourceEntity(202U);
    msg.setDestination(16472U);
    msg.setDestinationEntity(102U);
    msg.seq = 28813U;
    msg.value = 38U;
    msg.error.assign("ZRHVALBEOGIBOHSWSQJADRAKYIXMFFJZHNPLBYDXNKCTHULAXDEUKMLSUMOUVYDCWRDCKXERABEHFHYBBYIGYWFPSWPCWJNHVTTMRZMBFKKBQGNWTRKBAZRQODUYICOPPYMCZNSXVYSZXZLETECCNHADTDNWSVUJQHVOCFWQXAOREMLTGYISXMHAUIGFGXQKIKVUQ");

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
    msg.setTimeStamp(0.902992877008);
    msg.setSource(34359U);
    msg.setSourceEntity(26U);
    msg.setDestination(62501U);
    msg.setDestinationEntity(87U);
    msg.seq = 6433U;
    msg.value = 18U;
    msg.error.assign("YIZCCPMFSKOYPXAQTRHOCRHAOSIGFKMQDBCZMENPBAHTSTIJQHNDFABCHIILWCHRDGCVAIHBRPCILKBDGEXGOYUBPZACNEALDGOPVMSDOJETVJWINUFRKSXMJKRNGJVLZUUEGOJTTYQTISEVULPBZL");

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
    msg.setTimeStamp(0.240314924722);
    msg.setSource(29911U);
    msg.setSourceEntity(188U);
    msg.setDestination(1416U);
    msg.setDestinationEntity(159U);
    msg.seq = 37012U;
    msg.sys.assign("IQNOFDQGMPDZWAWIEYVDMSPYWBFACPNIQUWREORKJOTCFWEGQSZJYOXEJGVHLGCXIKOQDUNPCVFDWAFYKAZXSWUJDBWTXRHSZPCMLPEATLXWEPTQVGNSUISUMXUNCRKVJBALHTKMSWMNKBRBTREHYAXCZGQYSHTOMAQJUQVDRSTTEXHCRADDZENFUJZJONRBLHFHCLMPFYSMNGGVIIBYYBKXOBHIOXLIVFNJKMQGKUTZLZK");
    msg.value = 0.256869303786;

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
    msg.setTimeStamp(0.982793118456);
    msg.setSource(17895U);
    msg.setSourceEntity(118U);
    msg.setDestination(9042U);
    msg.setDestinationEntity(207U);
    msg.seq = 20431U;
    msg.sys.assign("WEBQNIHJMMNHTTUOIGJSWRYHMBDPDKMLWTECLANQCBDXUGYOGPSRTOWSTYNGOSOFLYKAVIAFUZJZCKGKBXIAMASBWNMJCHCLVXIEFJWXNFGJPDPMVRZDOKUTPIIYYJAAEPMHOILDFQUUKNGSWBHLKOTKXQFJ");
    msg.value = 0.610133040292;

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
    msg.setTimeStamp(0.62890909134);
    msg.setSource(9855U);
    msg.setSourceEntity(109U);
    msg.setDestination(44155U);
    msg.setDestinationEntity(18U);
    msg.seq = 5592U;
    msg.sys.assign("DSHDLVZGZMJBIHGVGYYYHUDERRJTIZAXOMNISQFRSIQNKXAQMYNWEOHYCVOUTXDLAGUKBBBFZITSEPVWEVDSFMNJYVYVNSCOCQGKFKRHMXUDLFYUNKYJIPBNRALHLKQFHOCJUPHZTAIRCTCLIZIGEBNCAEHWJGFRTTXKPXBXBPWLSJSBTFJFADRLXRYVVOGFOEKUWMOIPPMXVDMDKMUQESWLZATWONAG");
    msg.value = 0.341665951524;

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
    msg.setTimeStamp(0.26633525328);
    msg.setSource(37982U);
    msg.setSourceEntity(229U);
    msg.setDestination(59970U);
    msg.setDestinationEntity(19U);
    msg.action = 195U;
    msg.longain = 0.777416874582;
    msg.latgain = 0.672603616924;
    msg.bondthick = 4269478314U;
    msg.leadgain = 0.28425523709;
    msg.deconflgain = 0.784952783107;

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
    msg.setTimeStamp(0.776441374381);
    msg.setSource(44629U);
    msg.setSourceEntity(90U);
    msg.setDestination(33963U);
    msg.setDestinationEntity(229U);
    msg.action = 79U;
    msg.longain = 0.263479460328;
    msg.latgain = 0.913617011522;
    msg.bondthick = 1135253505U;
    msg.leadgain = 0.143935297131;
    msg.deconflgain = 0.636293859435;

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
    msg.setTimeStamp(0.86222154569);
    msg.setSource(7030U);
    msg.setSourceEntity(2U);
    msg.setDestination(47438U);
    msg.setDestinationEntity(149U);
    msg.action = 191U;
    msg.longain = 0.648684905897;
    msg.latgain = 0.509441606552;
    msg.bondthick = 3239941873U;
    msg.leadgain = 0.103809537986;
    msg.deconflgain = 0.730589899993;

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
    msg.setTimeStamp(0.488968072866);
    msg.setSource(19369U);
    msg.setSourceEntity(133U);
    msg.setDestination(50341U);
    msg.setDestinationEntity(157U);
    msg.err_mean = 0.841988158302;
    msg.dist_min_abs = 0.292751619827;
    msg.dist_min_mean = 0.848498075099;

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
    msg.setTimeStamp(0.822723015533);
    msg.setSource(23997U);
    msg.setSourceEntity(80U);
    msg.setDestination(11024U);
    msg.setDestinationEntity(238U);
    msg.err_mean = 0.205389881244;
    msg.dist_min_abs = 0.131930219963;
    msg.dist_min_mean = 0.565894999084;

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
    msg.setTimeStamp(0.94547114078);
    msg.setSource(61676U);
    msg.setSourceEntity(238U);
    msg.setDestination(52666U);
    msg.setDestinationEntity(84U);
    msg.err_mean = 0.184343381919;
    msg.dist_min_abs = 0.188594306486;
    msg.dist_min_mean = 0.469133903792;

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
    msg.setTimeStamp(0.457168715216);
    msg.setSource(12751U);
    msg.setSourceEntity(144U);
    msg.setDestination(64601U);
    msg.setDestinationEntity(21U);
    msg.action = 154U;
    msg.lon_gain = 0.964902238151;
    msg.lat_gain = 0.150332500391;
    msg.bond_thick = 0.407262985631;
    msg.lead_gain = 0.594451369606;
    msg.deconfl_gain = 0.32244612912;
    msg.accel_switch_gain = 0.869686612454;
    msg.safe_dist = 0.642537795276;
    msg.deconflict_offset = 0.0868384505782;
    msg.accel_safe_margin = 0.482472964659;
    msg.accel_lim_x = 0.424102349712;

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
    msg.setTimeStamp(0.642403322067);
    msg.setSource(34665U);
    msg.setSourceEntity(18U);
    msg.setDestination(13420U);
    msg.setDestinationEntity(4U);
    msg.action = 83U;
    msg.lon_gain = 0.456026643682;
    msg.lat_gain = 0.876055508502;
    msg.bond_thick = 0.695038235437;
    msg.lead_gain = 0.728390081347;
    msg.deconfl_gain = 0.473047591625;
    msg.accel_switch_gain = 0.604631985906;
    msg.safe_dist = 0.624652066469;
    msg.deconflict_offset = 0.0409693087818;
    msg.accel_safe_margin = 0.443310362043;
    msg.accel_lim_x = 0.530449487173;

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
    msg.setTimeStamp(0.755921996403);
    msg.setSource(19786U);
    msg.setSourceEntity(130U);
    msg.setDestination(36932U);
    msg.setDestinationEntity(16U);
    msg.action = 122U;
    msg.lon_gain = 0.94672917161;
    msg.lat_gain = 0.00726876084355;
    msg.bond_thick = 0.349228422191;
    msg.lead_gain = 0.437831682813;
    msg.deconfl_gain = 0.0452539509345;
    msg.accel_switch_gain = 0.054584694918;
    msg.safe_dist = 0.463203434416;
    msg.deconflict_offset = 0.990589221969;
    msg.accel_safe_margin = 0.488653019328;
    msg.accel_lim_x = 0.978285386063;

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
    msg.setTimeStamp(0.80910493836);
    msg.setSource(47591U);
    msg.setSourceEntity(158U);
    msg.setDestination(62296U);
    msg.setDestinationEntity(58U);
    msg.type = 227U;
    msg.op = 122U;
    msg.err_mean = 0.954118635927;
    msg.dist_min_abs = 0.747365889294;
    msg.dist_min_mean = 0.973112562941;
    msg.roll_rate_mean = 0.230285076132;
    msg.time = 0.0626220521753;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 169U;
    tmp_msg_0.lon_gain = 0.696902218984;
    tmp_msg_0.lat_gain = 0.48920589163;
    tmp_msg_0.bond_thick = 0.893328483667;
    tmp_msg_0.lead_gain = 0.937173254568;
    tmp_msg_0.deconfl_gain = 0.127671599197;
    tmp_msg_0.accel_switch_gain = 0.315239518326;
    tmp_msg_0.safe_dist = 0.0797535843269;
    tmp_msg_0.deconflict_offset = 0.383905031506;
    tmp_msg_0.accel_safe_margin = 0.941724569234;
    tmp_msg_0.accel_lim_x = 0.570341932608;
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
    msg.setTimeStamp(0.583722711307);
    msg.setSource(40064U);
    msg.setSourceEntity(249U);
    msg.setDestination(28128U);
    msg.setDestinationEntity(66U);
    msg.type = 115U;
    msg.op = 188U;
    msg.err_mean = 0.785470595382;
    msg.dist_min_abs = 0.0951255999265;
    msg.dist_min_mean = 0.824308886978;
    msg.roll_rate_mean = 0.415264152517;
    msg.time = 0.416541788603;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 118U;
    tmp_msg_0.lon_gain = 0.606146261687;
    tmp_msg_0.lat_gain = 0.908036317864;
    tmp_msg_0.bond_thick = 0.949530179895;
    tmp_msg_0.lead_gain = 0.862005637846;
    tmp_msg_0.deconfl_gain = 0.164230789914;
    tmp_msg_0.accel_switch_gain = 0.750544042883;
    tmp_msg_0.safe_dist = 0.629532142964;
    tmp_msg_0.deconflict_offset = 0.404438422886;
    tmp_msg_0.accel_safe_margin = 0.292115635765;
    tmp_msg_0.accel_lim_x = 0.715484755958;
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
    msg.setTimeStamp(0.682158173472);
    msg.setSource(64669U);
    msg.setSourceEntity(12U);
    msg.setDestination(22352U);
    msg.setDestinationEntity(194U);
    msg.type = 175U;
    msg.op = 204U;
    msg.err_mean = 0.13218573435;
    msg.dist_min_abs = 0.300675009611;
    msg.dist_min_mean = 0.625811305594;
    msg.roll_rate_mean = 0.812601961461;
    msg.time = 0.293200558152;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 139U;
    tmp_msg_0.lon_gain = 0.779650246174;
    tmp_msg_0.lat_gain = 0.205324691563;
    tmp_msg_0.bond_thick = 0.571476173179;
    tmp_msg_0.lead_gain = 0.48692665551;
    tmp_msg_0.deconfl_gain = 0.676425720915;
    tmp_msg_0.accel_switch_gain = 0.75260829312;
    tmp_msg_0.safe_dist = 0.861272337711;
    tmp_msg_0.deconflict_offset = 0.0447490758682;
    tmp_msg_0.accel_safe_margin = 0.638802881246;
    tmp_msg_0.accel_lim_x = 0.904448169872;
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
    msg.setTimeStamp(0.169536768144);
    msg.setSource(41964U);
    msg.setSourceEntity(242U);
    msg.setDestination(42687U);
    msg.setDestinationEntity(202U);
    msg.uid = 51U;
    msg.frag_number = 250U;
    msg.num_frags = 223U;
    const char tmp_msg_0[] = {-34, -108, 92, 86, 73, 1, -76, -117, 40, 88, -47, -11, -50, 19, 82, 52, -32, -67, -68, -96, -124, 92, 2, -95, 60, 104, 29, 53, 12, 90, -72, -65, -124, 82, -38, 17, 30, -98, -65, -120, 34, 37, -26, -36, -102, 88, -6, 19, -56, -16, -16, -22, -70, -96, -94, -46, 123, -48, 18, -122, -118, 60, 71, 17, 14, 116, 117, 0, 84, -124, -30, 98, 114, -27, -56, -106, 55, -74, -108, -95, -65, -107, -52, 32, -104, -120, -58, 89, 72, 60, 114, -14, -18, 49, -28, -102, 52, -110, 72, -3, 107, 70, -24, -47, -122};
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
    msg.setTimeStamp(0.752120458102);
    msg.setSource(63732U);
    msg.setSourceEntity(185U);
    msg.setDestination(60443U);
    msg.setDestinationEntity(207U);
    msg.uid = 12U;
    msg.frag_number = 103U;
    msg.num_frags = 75U;
    const char tmp_msg_0[] = {46, -115, -118, -90, 125, -25, 24, -23, 58, 94, -17, -33, 40, 112, -22, 44, 100, 122, 58, -61, -21, -81, -105, 40, 58, 112, -85, 101, -38, -4, -49, 12, -48, 65, -65, -71, -53, -94, 74, -29, 44, 20, 4, -116, -17, -125, -96, -78, 25, -102, 52, -4, -45, 16, -60, 61, -88, 5, 88, 114, -19, -49, -25, -93, 49, 111, -4, 54, -57, -126, 15, 22, 36, -15, 52, -68, -125, 10, -85, 85, -80, 28, 101, 91, 73, -18, 124, 95, -69, -59, 18, -32, -20, -1, 95, -42, -54, 99, 64, -82, -83, -60, -45, -26, 63, -40, 48, -111, -119, -85, -47, 11, -9, 55, -75, -115, 31, -109, 28, 103, 104, -52, -63, -76, 54, 125, 28, -24, -81, -75, 80, -23, 49, -84, -94, 19, 43, 46, 126, -77, 126, -13, 112, -102, 96, 31, -29, 6, -27, -60, 40, 53, 0, 61, -98, 7, 117, 52, 52, 32, 89, -46, 27, 105, -115, 36, -23, 118, -1, -20, -11, 36, 108, -37, -28, 93, 16, 57, 27, 106, -78, -101, -46, 45, -125, 69, 71, 42, 3, -92, 7, -103, -8, 45, 64, -107, -54, -75, -126, 63, 64, -74, 44, -31, 98, 91, 114, -76, 56, -106, 121, 104, 99, -40, 16, 11, 27, 9, -10, 112, -8, -89, 71, 113, -55, 59, -85, 41, 120};
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
    msg.setTimeStamp(0.0435065594691);
    msg.setSource(1646U);
    msg.setSourceEntity(159U);
    msg.setDestination(24865U);
    msg.setDestinationEntity(69U);
    msg.uid = 113U;
    msg.frag_number = 184U;
    msg.num_frags = 123U;
    const char tmp_msg_0[] = {-122, -104, 81, 66, -33, 73, -88, 56, 50, -34, -33, -8, -86, -26, -95, 115, 5, 78, 5, 5, 116, 73, 20, -125, 12, 120, -29, -109, 0};
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
    msg.setTimeStamp(0.695851617337);
    msg.setSource(1529U);
    msg.setSourceEntity(209U);
    msg.setDestination(24740U);
    msg.setDestinationEntity(46U);
    msg.content_type.assign("SDPHHENIHYNUSETCTVXEAOJJZLCOIBMKARXSMWVXFMRCDUBYNXBZKTYXCJJWRYUVYFLLQZXGHKPVRWDAHNZLGJUEEQISHMZSPWFNNYRCPOXIX");
    const char tmp_msg_0[] = {-92, 116, -24, -60, 108, -16, 5, 72, -27, -8, 119, -97, 126, 100, 29, 123, -117, 40, 63, -36, 63, -8, -3, -97, 80, 16, 15, -48, -23, -50, 78, -37, 60, 23, 27, -81, 33, 23, -58, 117, -52, -115, 19, 29, 120, -89, 20, 76, 2, 45, -45, -39, 23, -36, 47, -102, 112, 105, 32, 12, 113, 5, 59, -86, -7, 33, -14, 53, -18, -111, -50, 11, -36, 110, 56, 59, 101, -39, -127, 114, -37, -98, -76, 89, -121, 1, 93, -29, -112, -30, 84, -15, -108, -66, 88, 67, 72, 97, -4, 119, 19, 87, 116, -8, 27, 102, 57, -82, 126, -40, -104, -77, -23, -126, 124, 7, 91, -65, 75, -124, -15, 74, 86, 106, -37, 116, 38, -87, -41, 19, 11, -74, -125, -71, -24, 56, -114, 97, -67, -73, 74, 82, -96, -74, 114, -50, 101, -121, 4, -87, -68, 60, -44, 102, -28, -11, 123, -107, 111, -123, -48, 112, -110, -74, -84, 98, 98, -28, 14, 126, -109, -4, -65, 15, 93};
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
    msg.setTimeStamp(0.0187212570996);
    msg.setSource(61898U);
    msg.setSourceEntity(241U);
    msg.setDestination(45095U);
    msg.setDestinationEntity(72U);
    msg.content_type.assign("WHFLGKRITQIELUHXUKWSEBBNMPLHOHOOAYBURVLOSKXSXDHFXCTMRSEMZOUGBAJFWGNFYYNABRQEKYTJWHEUJOPSDXTDSOJJSFPRCWLLQZKRUVYMXUYVWGIQMQKXGQEGEDHABFVVPTGMCBHANKN");
    const char tmp_msg_0[] = {100, 98, 119, 109, 120, -43, 107, -68, 7, 45, 52, 80, 51, 121, -101, 19, -41, 56, -71, -13, -39, -45, -38, 96, -126, -49, 70, -33, -87, 88, 125, 0, 110, -108, -76, 72, -5, -6, -39, -13, -115};
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
    msg.setTimeStamp(0.211967736493);
    msg.setSource(44978U);
    msg.setSourceEntity(201U);
    msg.setDestination(6856U);
    msg.setDestinationEntity(222U);
    msg.content_type.assign("JXICZIQZVNQEJIBOKFGKKQPRXGFQEUMIAGTLUBDZWMPJNZLXLCGTUVTZJLYVVMXGDQFANKTSLEGUMNOUKONQPVWLSOQJYCFRQHFBSBRTNRVNABHVTWTZWLWEPEAFWDWKPBTYRIDAKCEYUOCKPHUBXCAS");
    const char tmp_msg_0[] = {-124, 113, 113, -80, -11, -65, -29, 10, 70, 100, 71, -86, 90, -35, 55, 59, -112, -107, -20, 66, -100, -87, -112, 37, -83, 84, 38, 124, -48};
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
    msg.setTimeStamp(0.145520182683);
    msg.setSource(12928U);
    msg.setSourceEntity(94U);
    msg.setDestination(5669U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.81268734322);
    msg.setSource(17809U);
    msg.setSourceEntity(31U);
    msg.setDestination(64070U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.790896935725);
    msg.setSource(21634U);
    msg.setSourceEntity(210U);
    msg.setDestination(61078U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.349356393381);
    msg.setSource(22793U);
    msg.setSourceEntity(16U);
    msg.setDestination(16566U);
    msg.setDestinationEntity(204U);
    msg.target = 23556U;
    msg.bearing = 0.785894198;
    msg.elevation = 0.748828320899;

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
    msg.setTimeStamp(0.277715885542);
    msg.setSource(63682U);
    msg.setSourceEntity(47U);
    msg.setDestination(10452U);
    msg.setDestinationEntity(172U);
    msg.target = 36455U;
    msg.bearing = 0.55491261239;
    msg.elevation = 0.704341690409;

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
    msg.setTimeStamp(0.608239698703);
    msg.setSource(36946U);
    msg.setSourceEntity(42U);
    msg.setDestination(16619U);
    msg.setDestinationEntity(213U);
    msg.target = 164U;
    msg.bearing = 0.329087883427;
    msg.elevation = 0.294388263143;

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
    msg.setTimeStamp(0.387992807191);
    msg.setSource(49459U);
    msg.setSourceEntity(209U);
    msg.setDestination(12099U);
    msg.setDestinationEntity(128U);
    msg.target = 33536U;
    msg.x = 0.394746179491;
    msg.y = 0.530556987529;
    msg.z = 0.336366013996;

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
    msg.setTimeStamp(0.569759527165);
    msg.setSource(32210U);
    msg.setSourceEntity(45U);
    msg.setDestination(20280U);
    msg.setDestinationEntity(250U);
    msg.target = 34407U;
    msg.x = 0.932118662061;
    msg.y = 0.197305627242;
    msg.z = 0.322248405966;

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
    msg.setTimeStamp(0.622074275616);
    msg.setSource(40314U);
    msg.setSourceEntity(247U);
    msg.setDestination(49805U);
    msg.setDestinationEntity(74U);
    msg.target = 28363U;
    msg.x = 0.34982427761;
    msg.y = 0.0849173495218;
    msg.z = 0.436405101125;

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
    msg.setTimeStamp(0.0983867780153);
    msg.setSource(22479U);
    msg.setSourceEntity(100U);
    msg.setDestination(43979U);
    msg.setDestinationEntity(49U);
    msg.target = 43759U;
    msg.lat = 0.376720207237;
    msg.lon = 0.346783069267;
    msg.z_units = 152U;
    msg.z = 0.944298244918;

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
    msg.setTimeStamp(0.741291283139);
    msg.setSource(24220U);
    msg.setSourceEntity(235U);
    msg.setDestination(56177U);
    msg.setDestinationEntity(204U);
    msg.target = 2274U;
    msg.lat = 0.716872970498;
    msg.lon = 0.633883551072;
    msg.z_units = 20U;
    msg.z = 0.390478059247;

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
    msg.setTimeStamp(0.910503902175);
    msg.setSource(54609U);
    msg.setSourceEntity(134U);
    msg.setDestination(19089U);
    msg.setDestinationEntity(247U);
    msg.target = 38144U;
    msg.lat = 0.100373931744;
    msg.lon = 0.0598305152112;
    msg.z_units = 189U;
    msg.z = 0.318467680169;

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
    msg.setTimeStamp(0.506235134315);
    msg.setSource(2U);
    msg.setSourceEntity(90U);
    msg.setDestination(52283U);
    msg.setDestinationEntity(135U);
    msg.locale.assign("HGZTHFWVDMSSXQUUVNCYUAMYRNDITGYTCUYKKPULDGYVTBKCLXNXNEBKDFLWLPNEQFYBCTCUHTGSYSMWANWAOIEZXFAXOHOFSCCUATHDJKPJAZSBHNWRBWHNRHQVDBMJURBCOJZQVEFVLMLZEFHGJMOFWDRUQFQDREALOFPXKWMRTBDVEQIVIGIJIIMHRPEX");
    const char tmp_msg_0[] = {-82, -39, -104, -33, 91, 18, 82, -50, -80, -1, 94, -84, 90, -77, 84, 87, 116, 113, 123, 2, -115, 117, -40, -25, -67, 92, -82, 61, -40, 60, 106, 61, -59, -74, -107, 95, 11, -118, -36, -9, -59, 30, 27, 55, 76, -22, 17, -3, -75, -109, -11, -37, 84, -121, -11, -22, 70, 66, 109, -9, 88, 17, -46, 3, 114, -79, -101, 116, 41, 89, -55, 73, 72, -22, -8, 11, 103, -14, -21, 71, 101, -103, -16, -80, -37, 76, -6, -60, 64, 25, 82, 89, 111, 85, 95, -103, -128, 123, -11, -122, -128, -105, 17, -31, 14, -38, -88, -97, 109, -93, -46, 90, -71, 72, 91, 96, 36, -126, 115, -39, -49, -113, -34, -30, -86, 14, 94, 5, 80, 71, 103, 48, 77, 22, 66, 31, -61, 63, 18, 0, 21, -56, -79, 86, 68, -35, 77, -8, 31, 94, -31, 97, -106, -126, 46, -61, -65, -118, -44, 37, -48, -45, -109, 21, -39, 67, 97, 80, 80, 26, -84, 68, 50, -35, 52, 91, -93, 115, -71, 22, 96, 79, -104, 14, 37, -24, -51, 52, 63, 108, -26, 114, -120, -32, 83, -87, 109, 72, 124, -104, 20, 23, -6, -76, 36, -24, -19, -119, -5, 84, 113, 48, -106, -105, 93, 33};
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
    msg.setTimeStamp(0.242387432884);
    msg.setSource(41800U);
    msg.setSourceEntity(56U);
    msg.setDestination(17379U);
    msg.setDestinationEntity(161U);
    msg.locale.assign("BECNBVQXWKSRMYIKEOJWBMKRSJVASFDHGEXVZKEBIDIIXHTNEVZWMKFFYHUBUVTCBEDDPCXWUIHDEQQQOBXRTXSG");
    const char tmp_msg_0[] = {76, 43, 82, -91, 1, -26, -4, -58, -97, -102, 23, 13, -40, 8, -45, 28, -32, -82, 20, 41, -87, 125, -46, -115, -81, 92, 94, 28, -43, 90, -124, 94, 88, 124, 32, 10, -10, 37, 120, 92, 42, -64, 118, -57, -91, 45, 110, -37, -50, 13, 20, 113, -28, 31, -103, 30, -89, -122, 125, -119, -128, 90, -72, 0, 26, 29, 24, 91, -108, -19, -72, 49, -48, -61, 70, 10, -128, 119, 122, -22, 83, 115, 96, 23, -37, -13, -85, 13, -3, 63, -44, 51, 90, -117, 60, -22, -72, 71, 39, -51, 62, -91, 73, -43, 38, 87, 63, 108, -52, -32, -83, 57, -123, 49, 5, -4, -67, -40, 101, 33, -13, 81, 110, 107, 48, -122, -21, -78, -92, -9, 47, 36, 76, -9, -13, 87, 58, 35, -71, -85, -90, 32, 77, -95, 52, -101, -119, 70, -96, -97, -12, 18, 5, 121, -100, 35, 31, 57, -23, -62, -3, 105, -76, -11, -16, -9, -123, -34, 84, -67, -53, 38, 48, -87, -78, 55, 2, 0, -119, 117, 33, -94, 38, -9, 96, 49, -41, -33, 87, 125};
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
    msg.setTimeStamp(0.90553388718);
    msg.setSource(13766U);
    msg.setSourceEntity(86U);
    msg.setDestination(34242U);
    msg.setDestinationEntity(132U);
    msg.locale.assign("UQHZDPGRKJFILKTPAWHHOHMWKFJLQPCBUTROBXMRIVBEPJGTWNOXFFARXSPKJVFEKMTRGDYKIOVRTLQXYXQNVABLIGFDOALUARJAYSYKWUOHBZRZSTCJFDMMOW");
    const char tmp_msg_0[] = {-24, 9, -96, 89, 110, 104, -54, -31, -111, 23, -34, -128, -97, -9, 25, -99, 92, 12, -15, -55, 24, 41, 48, -23, -49, -49, 118, -58, -73, 97, -44, 81, -40, 41, 65, 77, -15, -67, -74, 26, -5, -15, 31, 13, 15, -54, -117, -4, 86, 51, -59, 117, -105, 95, -102, 53, 62, -17, 86, -61, 68, 41, -72, 65, 37, -1, -2, -52, 37, 89, -109, -100, -48, -27, -86, 34, -69, -2, -46, 48, -115, -26, 29, 70, -115, -46, -118, -86, -88, -56, 30, -88, -119, -112, 104, 18, 46, -93, 56, 16, 11, 74, -34, -83, 43, 68, -72, -88, -74, 64, -119, -118, 91, 45, -81, 62, 85, -25, 0, -77, -123, -42, 105, -16, -125, -27, -98, -126, -94, 71, 16, -69, -116, 63, -70, -11, -127, -56, 79, 107, -116, -4, -111, 123, -30, 13, -58, 101, -80, -50, 6, 63, -9, -57, 2, 107, -24, 46, 15, 31, 74, 29, 50, 66, 29, -8, 119, 123, -124, -73, 26, 58, 0, 39, 62, 34, -107, -73, 23, 8, -92, 35, -123, -98, -87, 96, 59, 13, -20, 88, -31, 20, -62, 125, -50, 89, 42, -120, 105, 60, -111, 108, 41, 39, 48, -67, -87, -79, 99, -113, 109, 35, 84, -22, 15};
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
    msg.setTimeStamp(0.641887438221);
    msg.setSource(12699U);
    msg.setSourceEntity(149U);
    msg.setDestination(20213U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.318932915233);
    msg.setSource(29356U);
    msg.setSourceEntity(119U);
    msg.setDestination(33776U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.169143654675);
    msg.setSource(13662U);
    msg.setSourceEntity(80U);
    msg.setDestination(61932U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.849074357645);
    msg.setSource(48306U);
    msg.setSourceEntity(14U);
    msg.setDestination(53473U);
    msg.setDestinationEntity(81U);
    msg.camid = 44U;
    msg.x = 41413U;
    msg.y = 46837U;

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
    msg.setTimeStamp(0.549948747133);
    msg.setSource(32397U);
    msg.setSourceEntity(74U);
    msg.setDestination(9469U);
    msg.setDestinationEntity(163U);
    msg.camid = 128U;
    msg.x = 2188U;
    msg.y = 24590U;

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
    msg.setTimeStamp(0.106976994255);
    msg.setSource(27296U);
    msg.setSourceEntity(29U);
    msg.setDestination(2809U);
    msg.setDestinationEntity(40U);
    msg.camid = 140U;
    msg.x = 14101U;
    msg.y = 7943U;

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
    msg.setTimeStamp(0.591956526689);
    msg.setSource(58611U);
    msg.setSourceEntity(37U);
    msg.setDestination(51110U);
    msg.setDestinationEntity(40U);
    msg.camid = 225U;
    msg.x = 10432U;
    msg.y = 46950U;

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
    msg.setTimeStamp(0.304329763906);
    msg.setSource(21374U);
    msg.setSourceEntity(230U);
    msg.setDestination(47185U);
    msg.setDestinationEntity(161U);
    msg.camid = 154U;
    msg.x = 59755U;
    msg.y = 15323U;

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
    msg.setTimeStamp(0.35913768249);
    msg.setSource(13987U);
    msg.setSourceEntity(235U);
    msg.setDestination(6194U);
    msg.setDestinationEntity(89U);
    msg.camid = 122U;
    msg.x = 23729U;
    msg.y = 23321U;

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
    msg.setTimeStamp(0.953171338911);
    msg.setSource(13408U);
    msg.setSourceEntity(3U);
    msg.setDestination(33391U);
    msg.setDestinationEntity(134U);
    msg.tracking = 171U;
    msg.lat = 0.0756082276068;
    msg.lon = 0.0324519267964;
    msg.x = 0.516344200587;
    msg.y = 0.978257289241;
    msg.z = 0.883200605991;

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
    msg.setTimeStamp(0.347217664563);
    msg.setSource(49209U);
    msg.setSourceEntity(63U);
    msg.setDestination(40923U);
    msg.setDestinationEntity(216U);
    msg.tracking = 196U;
    msg.lat = 0.536294141728;
    msg.lon = 0.388958745312;
    msg.x = 0.906646113506;
    msg.y = 0.851008235131;
    msg.z = 0.557300569974;

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
    msg.setTimeStamp(0.490913021666);
    msg.setSource(1803U);
    msg.setSourceEntity(180U);
    msg.setDestination(50637U);
    msg.setDestinationEntity(81U);
    msg.tracking = 19U;
    msg.lat = 0.351399393826;
    msg.lon = 0.64054550337;
    msg.x = 0.649178843689;
    msg.y = 0.802481646574;
    msg.z = 0.31027418921;

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

  return test.getReturnValue();
}
