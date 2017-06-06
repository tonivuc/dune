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
// IMC XML MD5: 1fea102982a7b159f5ecc8e021e68e7c                            *
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
    msg.setTimeStamp(0.920294842824);
    msg.setSource(49576U);
    msg.setSourceEntity(34U);
    msg.setDestination(17854U);
    msg.setDestinationEntity(245U);
    msg.state = 152U;
    msg.flags = 115U;
    msg.description.assign("OYWKMXQGBYNPAHZKWCXMNIDQXAITNJRDTKQBZWNSEQZIKSPHOAEXLWBEUFDRLTGAHEYKLZPDMRPYGMPMBZUBDRNVJBWXWPXBVJHOBCCGAYWHMUCOEGWDLOZHTWKVSUKPTTGGUSYJKFVIVDFUDTCIRBZSJC");

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
    msg.setTimeStamp(0.948462029599);
    msg.setSource(45514U);
    msg.setSourceEntity(234U);
    msg.setDestination(39063U);
    msg.setDestinationEntity(167U);
    msg.state = 196U;
    msg.flags = 237U;
    msg.description.assign("PKFVAVSKGULRNECYOBETTKFMVPJACIJVOWOXDFFRNAYYSUCDPARMBHLOHGMMIGDQKXSQUMIJQPERWEKTMHQZSZIDUQRLHKRWHMZNFCVMNFWCATPQBJSDZEGNVSQBWTAMPTRJIBWUGWSUXBXVNIXLGRLCTFUZATBLKHOPXTYGLWCZRQWTNUHOZDABIGPJZXXBFNKP");

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
    msg.setTimeStamp(0.175324438793);
    msg.setSource(20887U);
    msg.setSourceEntity(180U);
    msg.setDestination(5292U);
    msg.setDestinationEntity(74U);
    msg.state = 216U;
    msg.flags = 214U;
    msg.description.assign("SFNDWAAUAACAIABNBCEJHUIMLCPSIKQXTGYPXJXOFSXEVSGHWQVMVHTUFRHSYZHREPONWVATYRNTKKBCLOBWCHTWDLJZMLWHZDAGMIGZAYEOKNLPKJRZRVQFDNNRRDDJMPPLEXUKPTEDUSWRVQIUQXGBNTOOONIYJMMFAQHQYOGBQ");

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
    msg.setTimeStamp(0.444374597863);
    msg.setSource(13631U);
    msg.setSourceEntity(109U);
    msg.setDestination(34037U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.667225091658);
    msg.setSource(25164U);
    msg.setSourceEntity(150U);
    msg.setDestination(55528U);
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
    msg.setTimeStamp(0.278255466573);
    msg.setSource(39543U);
    msg.setSourceEntity(159U);
    msg.setDestination(48622U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.972241043586);
    msg.setSource(45985U);
    msg.setSourceEntity(72U);
    msg.setDestination(36047U);
    msg.setDestinationEntity(197U);
    msg.id = 19U;
    msg.label.assign("UIDCVMCRLNRTHQVKEXGZAFICTPJCOKRTHMNEHBFUKBEALWNWNOTLZWWYMYJJEBOOSUPACFBLKPUKSEYIDAAFLRHOZNFZUBSZF");
    msg.component.assign("GMFXISLXKTQKVACSIZKWNKNTPLTDPDNVRQT");
    msg.act_time = 50298U;
    msg.deact_time = 18359U;

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
    msg.setTimeStamp(0.361629669526);
    msg.setSource(59006U);
    msg.setSourceEntity(241U);
    msg.setDestination(35875U);
    msg.setDestinationEntity(38U);
    msg.id = 31U;
    msg.label.assign("GQGJYYXUBIZQZCUAVWCEVFUOBOOLPDNOKXXBHCMWAJIMWYECGBKYAEJKWLPZYHGSMILLJEVFAANSKNALCUIDQAMLDWFCMRPETFLMUKRRSRGSGFZBMBXNFZMBXOLGAOORDHNZFGJHCXWTHPBZKUWVVBWICQCIZPYDXDYTWOQHGSFZYRNXREHOWUHDQMYNTPRFVJTIPZPESSAJTKRUNBULIJVMXLQCHTHSDSDQJPEQATUVTYEVISJKINRFKQXKT");
    msg.component.assign("HWVTJPWBMDNPIJEK");
    msg.act_time = 12404U;
    msg.deact_time = 48169U;

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
    msg.setTimeStamp(0.387742245299);
    msg.setSource(24158U);
    msg.setSourceEntity(85U);
    msg.setDestination(39632U);
    msg.setDestinationEntity(174U);
    msg.id = 72U;
    msg.label.assign("YXZHUSJFKLXYYWSWBFITOYUTUTQYVRYKNFDABLDVVNLCFQWHXKEGLKHMIUJBBAKYFIOHELERFUTIZIJIDZSDUZQOODDTUXIMBZNQRNXEDTCMKLWPWPYVQRCKWGONVOURUNNPSAITLTJZUQMVZWJOLRWHSACGWTQACSEBZMWSFHANREMCYIKNKPZHXOXZJNPPACHKPOBTHHPFLGGGYDOGDJREJ");
    msg.component.assign("FPJPFITYKMSRUYCEOLQWQSYCRQTXYVRFBPDEHVGNPLVWNZBSEASFRGBJKAVAVAUFNFOZPKDMTWWIJKMHZPYKWOHWSMDBUYTXHZBVGZEKXJVHXORJVCALRHKPFJPNZIYTYWMDCCXNNYJTIGATHUPWVBVIEPLCEGYANKGDUTILROAEOJCRFZEMLGRKZXDIHUUIOQIXCWDLDSJOBIHBFUDAQZOOHSWMQBAQNXLMSGSBNZXEEMLCTUDGFLKCMRUSG");
    msg.act_time = 45457U;
    msg.deact_time = 63156U;

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
    msg.setTimeStamp(0.884962403367);
    msg.setSource(63378U);
    msg.setSourceEntity(145U);
    msg.setDestination(20205U);
    msg.setDestinationEntity(30U);
    msg.id = 108U;

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
    msg.setTimeStamp(0.284122953793);
    msg.setSource(25896U);
    msg.setSourceEntity(223U);
    msg.setDestination(28381U);
    msg.setDestinationEntity(130U);
    msg.id = 211U;

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
    msg.setTimeStamp(0.863340426991);
    msg.setSource(30359U);
    msg.setSourceEntity(181U);
    msg.setDestination(43817U);
    msg.setDestinationEntity(101U);
    msg.id = 208U;

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
    msg.setTimeStamp(0.102231645703);
    msg.setSource(46964U);
    msg.setSourceEntity(156U);
    msg.setDestination(55472U);
    msg.setDestinationEntity(226U);
    msg.op = 8U;
    msg.list.assign("LPDOQIFZFXGZRDGME");

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
    msg.setTimeStamp(0.183419799322);
    msg.setSource(39870U);
    msg.setSourceEntity(155U);
    msg.setDestination(56663U);
    msg.setDestinationEntity(55U);
    msg.op = 73U;
    msg.list.assign("MTEKDSKKOZUNCOIDHNVFWRMSTNYXWLOJQNYRBHGWXITNGCUVMLBJXPFDPCBIAILAFGWPBWSYOLELAHIYSWJTZDKPDBHEZEIRQLEQCZGBSPMPTZOCESQRURKJVMOGTMHRKUOIXTSXUNDXNVWEQUUCRUKYPQGIFWHOVFXVCNFWCAAGKZMKXBGXOAOMNTFHRYXPGHVYZVUAEGL");

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
    msg.setTimeStamp(0.7677083762);
    msg.setSource(22239U);
    msg.setSourceEntity(154U);
    msg.setDestination(17317U);
    msg.setDestinationEntity(91U);
    msg.op = 195U;
    msg.list.assign("XLRTOSEGQGPVLNCOMBXJBITJHLQOIVFFARMLULWZCFYOHCDSDCQSYINPAQFBEGYHAEVNBRSQRZWYJKQZVHMVOFUPXMBPDXREKLZJGWVPQVNRVSBLUYADOKWUWAOIXRPJPGQKILFWGSEFRCEPWMAQZZIUJWSSGG");

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
    msg.setTimeStamp(0.25586559608);
    msg.setSource(61344U);
    msg.setSourceEntity(117U);
    msg.setDestination(16690U);
    msg.setDestinationEntity(87U);
    msg.value = 63U;

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
    msg.setTimeStamp(0.745569320171);
    msg.setSource(55322U);
    msg.setSourceEntity(72U);
    msg.setDestination(35557U);
    msg.setDestinationEntity(115U);
    msg.value = 231U;

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
    msg.setTimeStamp(0.468218283687);
    msg.setSource(2283U);
    msg.setSourceEntity(142U);
    msg.setDestination(32445U);
    msg.setDestinationEntity(137U);
    msg.value = 106U;

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
    msg.setTimeStamp(0.31917946507);
    msg.setSource(15898U);
    msg.setSourceEntity(176U);
    msg.setDestination(14589U);
    msg.setDestinationEntity(190U);
    msg.consumer.assign("CZTITVZQCXSFNMWBPYOEIBVVXSSIXOCDYWBUUIYZPYNXRXJABOZANLAJQMSVYUIRWGAMSIOMRETLTNRGBEUXFJQKASTPWJOFDTOYOEWWDCGVE");
    msg.message_id = 4400U;

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
    msg.setTimeStamp(0.263672153663);
    msg.setSource(28572U);
    msg.setSourceEntity(56U);
    msg.setDestination(48094U);
    msg.setDestinationEntity(109U);
    msg.consumer.assign("IKOGLYNXYBLLUODCOHAJRNIWPLBGMEIDFFHJTFRQSKQGNVZAQRBPXYIMLOATZDSPOHIHRUHAQNKMKCNFOLRHUECXEUBGSGYVIDUSLJAEZTLGARDUCRZIBAMOVJWFBPDYBJWTMVHXXKJEZMXGAPIRSNKJDZJQPDVENZOFPKQWQKCBXIXYXVGSYUHWSTEQHCPRHNNAMMWVW");
    msg.message_id = 62898U;

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
    msg.setTimeStamp(0.445064564733);
    msg.setSource(15069U);
    msg.setSourceEntity(132U);
    msg.setDestination(56909U);
    msg.setDestinationEntity(42U);
    msg.consumer.assign("HPBQRFBCTSVOMVTWIJORQGAAMS");
    msg.message_id = 14053U;

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
    msg.setTimeStamp(0.990540833065);
    msg.setSource(49714U);
    msg.setSourceEntity(232U);
    msg.setDestination(60151U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.788785247245);
    msg.setSource(16703U);
    msg.setSourceEntity(220U);
    msg.setDestination(15218U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.788229608791);
    msg.setSource(8536U);
    msg.setSourceEntity(184U);
    msg.setDestination(8401U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.415875528748);
    msg.setSource(54651U);
    msg.setSourceEntity(145U);
    msg.setDestination(40533U);
    msg.setDestinationEntity(116U);
    msg.op = 244U;

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
    msg.setTimeStamp(0.651710307438);
    msg.setSource(51701U);
    msg.setSourceEntity(12U);
    msg.setDestination(31323U);
    msg.setDestinationEntity(114U);
    msg.op = 31U;

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
    msg.setTimeStamp(0.628184549173);
    msg.setSource(51776U);
    msg.setSourceEntity(168U);
    msg.setDestination(58795U);
    msg.setDestinationEntity(215U);
    msg.op = 45U;

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
    msg.setTimeStamp(0.530611851007);
    msg.setSource(45623U);
    msg.setSourceEntity(189U);
    msg.setDestination(38116U);
    msg.setDestinationEntity(78U);
    msg.total_steps = 21U;
    msg.step_number = 147U;
    msg.step.assign("AKAFTAXMIKQKUSHXDKDORMYWZTJVRMOCCHSEGPIUHSRUYXUSDYAJZDKQSMZZSNMQJUOCIPLKNQCSOBDZFNLIFEHYWLDPOCRWEUJZLEKQIONTVXCGWDTCZDYPUYFJSJHYGJGPQXEBGRAMBVICGCWMFRWYTSEKHXDXHBFPQNOCMATIHRF");
    msg.flags = 149U;

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
    msg.setTimeStamp(0.139664247133);
    msg.setSource(43907U);
    msg.setSourceEntity(97U);
    msg.setDestination(57019U);
    msg.setDestinationEntity(193U);
    msg.total_steps = 198U;
    msg.step_number = 85U;
    msg.step.assign("EAPIVHTJRGRKWPQVDZJSKBEUUVSWAIIATZVCDDEFKKDQDEXOZATYYRQHIWQZOBSACJJHONNOKCWPYVALAVFMWGDCXKXFYXSRBCGPGRUJYAGMCEUIJQSOHFIIUODCOTTZFMRHLAFPEUMXTKPEMETIBFOXMBNYLBHRNHGKYOIEXYMQSPCXVLURZQUBGQHGFGZBJHDCCKJBPDWWFNWLJHNYUKQLPVLFRLMTNZLZITQGWUZBNRPNSYOMNLD");
    msg.flags = 5U;

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
    msg.setTimeStamp(0.896112579442);
    msg.setSource(28251U);
    msg.setSourceEntity(68U);
    msg.setDestination(62007U);
    msg.setDestinationEntity(186U);
    msg.total_steps = 162U;
    msg.step_number = 23U;
    msg.step.assign("OBWHXMNJVNIFUFRGHSWTKGZHAJWDEDBMARQWBHILTQQKSDSGMVFPVFX");
    msg.flags = 83U;

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
    msg.setTimeStamp(0.987477708518);
    msg.setSource(148U);
    msg.setSourceEntity(152U);
    msg.setDestination(45019U);
    msg.setDestinationEntity(16U);
    msg.state = 31U;
    msg.error.assign("PJWQQRNHDMFNFXJIVYXEOCIDBDMLEGAOKLPFTYUCCQHAXTQGLDRRCQHKRYJ");

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
    msg.setTimeStamp(0.487495926729);
    msg.setSource(48346U);
    msg.setSourceEntity(154U);
    msg.setDestination(53807U);
    msg.setDestinationEntity(228U);
    msg.state = 61U;
    msg.error.assign("ZUURTNQAWZJXYJCTLFNKNPOOXNXEVYHYOQQPHCKUIUKFNGKVUHTANYRHHWFOIBICUYWIAPGDSESOVRWJTJOIBGWJTEIQSIYBRGDVEZYGKEJXSDXMZRLAVEZQWOTKGIBVXIMPNPTJSQLFBKBCVYLOFQADPYDCWCGEMARMKMGAMRBMNUDBEZSFSZGJWPHEQHTFRPOEXZHRUGLDJHDJXLCUDANLMSNXU");

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
    msg.setTimeStamp(0.921685600291);
    msg.setSource(12912U);
    msg.setSourceEntity(125U);
    msg.setDestination(36922U);
    msg.setDestinationEntity(125U);
    msg.state = 167U;
    msg.error.assign("VAMQASAFNAGEAYWHNYVLB");

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
    msg.setTimeStamp(0.0436656897731);
    msg.setSource(21475U);
    msg.setSourceEntity(53U);
    msg.setDestination(10900U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.113286570265);
    msg.setSource(24920U);
    msg.setSourceEntity(159U);
    msg.setDestination(56967U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.698762858781);
    msg.setSource(34618U);
    msg.setSourceEntity(234U);
    msg.setDestination(32296U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.497731773288);
    msg.setSource(47340U);
    msg.setSourceEntity(89U);
    msg.setDestination(18505U);
    msg.setDestinationEntity(12U);
    msg.op = 38U;
    msg.speed_min = 0.2500002263;
    msg.speed_max = 0.867156155625;
    msg.long_accel = 0.144914074025;
    msg.alt_max_msl = 0.922341438039;
    msg.dive_fraction_max = 0.0572506166937;
    msg.climb_fraction_max = 0.308544647085;
    msg.bank_max = 0.0502245015184;
    msg.p_max = 0.581472107334;
    msg.pitch_min = 0.0821035772152;
    msg.pitch_max = 0.301852208492;
    msg.q_max = 0.845616749536;
    msg.g_min = 0.872470199139;
    msg.g_max = 0.0835403928152;
    msg.g_lat_max = 0.109930822156;
    msg.rpm_min = 0.231390579389;
    msg.rpm_max = 0.0647988723865;
    msg.rpm_rate_max = 0.781137362212;

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
    msg.setTimeStamp(0.0508447982373);
    msg.setSource(53219U);
    msg.setSourceEntity(52U);
    msg.setDestination(61069U);
    msg.setDestinationEntity(67U);
    msg.op = 25U;
    msg.speed_min = 0.526029942565;
    msg.speed_max = 0.19626075092;
    msg.long_accel = 0.250537752719;
    msg.alt_max_msl = 0.515267718917;
    msg.dive_fraction_max = 0.213896984321;
    msg.climb_fraction_max = 0.074272275592;
    msg.bank_max = 0.802207451706;
    msg.p_max = 0.409795267632;
    msg.pitch_min = 0.979448729575;
    msg.pitch_max = 0.629806482705;
    msg.q_max = 0.220496214069;
    msg.g_min = 0.242994202483;
    msg.g_max = 0.934986774781;
    msg.g_lat_max = 0.219116296994;
    msg.rpm_min = 0.746941208663;
    msg.rpm_max = 0.69046397154;
    msg.rpm_rate_max = 0.915387071495;

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
    msg.setTimeStamp(0.834600531926);
    msg.setSource(25480U);
    msg.setSourceEntity(190U);
    msg.setDestination(29256U);
    msg.setDestinationEntity(77U);
    msg.op = 202U;
    msg.speed_min = 0.574894281281;
    msg.speed_max = 0.24102565032;
    msg.long_accel = 0.314850189209;
    msg.alt_max_msl = 0.0945565353914;
    msg.dive_fraction_max = 0.740124613858;
    msg.climb_fraction_max = 0.130832111543;
    msg.bank_max = 0.174575142318;
    msg.p_max = 0.503956558213;
    msg.pitch_min = 0.87647012601;
    msg.pitch_max = 0.00186003583442;
    msg.q_max = 0.237111514083;
    msg.g_min = 0.210389186612;
    msg.g_max = 0.0226620724672;
    msg.g_lat_max = 0.826778619928;
    msg.rpm_min = 0.407340132953;
    msg.rpm_max = 0.206152124497;
    msg.rpm_rate_max = 0.817687327382;

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
    msg.setTimeStamp(0.121829458022);
    msg.setSource(19982U);
    msg.setSourceEntity(213U);
    msg.setDestination(36528U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.436601974447);
    msg.setSource(36793U);
    msg.setSourceEntity(244U);
    msg.setDestination(34620U);
    msg.setDestinationEntity(231U);
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 77U;
    tmp_msg_0.system.assign("KUSMZCRDHKKQFBFTHLZZXXFXYBRWTBRKAJCFDUIBMOYQHMCUZVVPAQKEGOGCKZAIWCUNUWGMGXIANDEJDNQTAXMNZLHHOXGOCUTELPJIJVZUDNEWUWQWOOGPVLVLYMDXRDRYFJYFSJJLTSYQOBKVPCVCTRVGSNQSNSGSKQJGBTNPHXGETZROIBCOLSZUZEQLDRHIMLDEW");
    tmp_msg_0.range = 0.588253143096;
    IMC::RSSI tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.292922820041;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.12332684613);
    msg.setSource(6749U);
    msg.setSourceEntity(107U);
    msg.setDestination(44423U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.0291023872297);
    msg.setSource(55479U);
    msg.setSourceEntity(213U);
    msg.setDestination(20521U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.0272964486468;
    msg.lon = 0.0583116549075;
    msg.height = 0.236096002805;
    msg.x = 0.197758161345;
    msg.y = 0.720838169878;
    msg.z = 0.709446694375;
    msg.phi = 0.436724088424;
    msg.theta = 0.217067772123;
    msg.psi = 0.725336799894;
    msg.u = 0.874748777827;
    msg.v = 0.614183110096;
    msg.w = 0.106546754685;
    msg.p = 0.0615794162482;
    msg.q = 0.224982242086;
    msg.r = 0.0224136695025;
    msg.svx = 0.197897115938;
    msg.svy = 0.229467223046;
    msg.svz = 0.946837136358;

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
    msg.setTimeStamp(0.341933208141);
    msg.setSource(6319U);
    msg.setSourceEntity(99U);
    msg.setDestination(23344U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.490518676747;
    msg.lon = 0.574051421863;
    msg.height = 0.511714134631;
    msg.x = 0.595470874822;
    msg.y = 0.880305928327;
    msg.z = 0.00876863858524;
    msg.phi = 0.97209534656;
    msg.theta = 0.10663075361;
    msg.psi = 0.745106502204;
    msg.u = 0.434953477471;
    msg.v = 0.408037684994;
    msg.w = 0.475848034507;
    msg.p = 0.300098376789;
    msg.q = 0.543425357455;
    msg.r = 0.0934721276754;
    msg.svx = 0.995094002153;
    msg.svy = 0.277722422751;
    msg.svz = 0.287311463867;

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
    msg.setTimeStamp(0.283331365714);
    msg.setSource(9739U);
    msg.setSourceEntity(105U);
    msg.setDestination(30837U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.710081393221;
    msg.lon = 0.541737403764;
    msg.height = 0.0791420646202;
    msg.x = 0.0739075581266;
    msg.y = 0.830474463354;
    msg.z = 0.854137784174;
    msg.phi = 0.127429981136;
    msg.theta = 0.520567462358;
    msg.psi = 0.240871161607;
    msg.u = 0.371378290225;
    msg.v = 0.417501161254;
    msg.w = 0.907916123194;
    msg.p = 0.0465024051591;
    msg.q = 0.306406712246;
    msg.r = 0.549769541743;
    msg.svx = 0.506103921517;
    msg.svy = 0.671322833994;
    msg.svz = 0.525561496806;

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
    msg.setTimeStamp(0.214845716179);
    msg.setSource(10037U);
    msg.setSourceEntity(65U);
    msg.setDestination(17583U);
    msg.setDestinationEntity(74U);
    msg.op = 209U;
    msg.entities.assign("BXGUYJQVMRLUFFOPWELCKDMANKPGDARTBTCLAKVBSHQZJRWSDXCVPOISIHYSRVOHAFXYQKJCSVEEWXLDAVSMQHWCGFFQBPUVYCHCNDEJWHDEPUCDZJXXMAIBPYKQRHV");

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
    msg.setTimeStamp(0.354581766874);
    msg.setSource(9452U);
    msg.setSourceEntity(253U);
    msg.setDestination(57926U);
    msg.setDestinationEntity(100U);
    msg.op = 180U;
    msg.entities.assign("NTAMVVSGQHGQTWQWBTJUCKCHPCNEFXJBMHIBRXREOEAVBLAJBXFUYTKUNKCWBEMLGAIKESUMLESVOOQYGTIPRACMGZNYLVXUFLFDMTNVBKBUKDZZXZ");

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
    msg.setTimeStamp(0.508229013402);
    msg.setSource(7964U);
    msg.setSourceEntity(248U);
    msg.setDestination(65439U);
    msg.setDestinationEntity(116U);
    msg.op = 20U;
    msg.entities.assign("MZBUWOTUDSWGKUKPJDIHGLOBEHCDMOSRTMHMTEGVGWYRQXAUEKOBFRFWPNZNYIWLGHHQWTEAOSKABHKYEVPOPSXWTYEGWARCQDVSTUYXGRNFNLQFZCFQXCLVSDGRNILQPVTCRXMCLFTFODNNJTAVVBKAAUHBXFBHPKXQUIIIILLJZCDMQJPXILEDCACHKGBEOFFOGJVYRVVZZAMMZRIPYLIUUJTZOBYQSAKJYPWJHZPXEYMNDS");

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
    msg.setTimeStamp(0.516265625812);
    msg.setSource(2502U);
    msg.setSourceEntity(85U);
    msg.setDestination(56942U);
    msg.setDestinationEntity(190U);
    msg.type = 149U;
    msg.speed = 34723U;
    const char tmp_msg_0[] = {15, -115, -35, 28, -85, -55, -16, 66, 86, 50, -63, -38, 25, -39, -57, -76, -34, -48, 98, -51, 95, 14, -26, -64, 105, -16, 109, 31, -5, 54, -49, -37, -112, -44, 41, 119, 11, 115, 57, -1, 60, -110, -6, -100, 107, 88, -11, -71, -78, -38, 60, 84, -100, -92, 25, 94, 71, -64, -112, -46};
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
    msg.setTimeStamp(0.00684499718636);
    msg.setSource(48583U);
    msg.setSourceEntity(100U);
    msg.setDestination(61637U);
    msg.setDestinationEntity(156U);
    msg.type = 46U;
    msg.speed = 11607U;
    const char tmp_msg_0[] = {113, -8, -66, -3, -116, -99, -43, 4, -62, -119, -76, 29, -63, -81, 52, -20, 22, -102, 107, 125, 88, -17, -98, -33, 43, 44, -52, -60, 99, -39, 102, -32, -26, 51, 93, -24, -58, 3, 18, -88, 104, -31, 118, 69, -57, 72, -117, 32, 113, 30, 11, 89, 65, -97, 107, 78, -82, 16, 114, -14, 59, -121, 82, 15, -8, -104, -23, -124, -71, -98, 37, 99, 66, 5, 71, 120, 51, 67, -30, 86, 37, 34, 120, 25, 53, -112, -114, 45, -63, 34, -57, -86, 121, 91, 16, 31, 32, -2, -13, -45, 51, 62, -92, 115, 95, -52, 58, -70, -9, -19, -14, 18, 50, 45, 111, -53, -10, -90, -100, 12, 35, -37, 78, -98, 54, -79, -48, -33, 47, -27, -79, 81, 64, -31, 104, 19, 53, -116, 108, -89, -93, -2, 27, -20, -16, -54, -51, -80, -20, -44, -23, 57, 51, -80, -95, -35, -91, 122, 79, 99, -88, -46, 16, -41, 57, 49, 103, -47, -56, 10, -68, -68, 106, 103, -87, -12, 6, -68, -24, 8, -115, -51, 108, -31, -83, 45, -97, -97, -28, -88, -41, -41, -119, -44, 83, -100, -43, 67, -128, -7, -100, -29, -45, -88, 46, 9, 26, -110, -117, -40, 62, -26, -46, -110, 39, -91, 105, 106, 49};
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
    msg.setTimeStamp(0.82700416967);
    msg.setSource(12665U);
    msg.setSourceEntity(46U);
    msg.setDestination(60845U);
    msg.setDestinationEntity(227U);
    msg.type = 222U;
    msg.speed = 13698U;
    const char tmp_msg_0[] = {-118, -15, -61, 116, -106, 50, 106, -59, -106, 41, -22, -85};
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
    msg.setTimeStamp(0.308790079445);
    msg.setSource(35437U);
    msg.setSourceEntity(81U);
    msg.setDestination(29033U);
    msg.setDestinationEntity(46U);
    msg.op = 89U;
    msg.tas2acc_pgain = 0.699937425819;
    msg.bank2p_pgain = 0.576547875246;

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
    msg.setTimeStamp(0.436894626749);
    msg.setSource(35694U);
    msg.setSourceEntity(232U);
    msg.setDestination(41557U);
    msg.setDestinationEntity(172U);
    msg.op = 25U;
    msg.tas2acc_pgain = 0.132289063333;
    msg.bank2p_pgain = 0.266279952801;

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
    msg.setTimeStamp(0.23286116485);
    msg.setSource(14405U);
    msg.setSourceEntity(203U);
    msg.setDestination(28111U);
    msg.setDestinationEntity(243U);
    msg.op = 226U;
    msg.tas2acc_pgain = 0.101139508929;
    msg.bank2p_pgain = 0.673934101952;

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
    msg.setTimeStamp(0.83772924948);
    msg.setSource(4546U);
    msg.setSourceEntity(88U);
    msg.setDestination(32965U);
    msg.setDestinationEntity(13U);
    msg.available = 1894461139U;
    msg.value = 118U;

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
    msg.setTimeStamp(0.856200808691);
    msg.setSource(27127U);
    msg.setSourceEntity(235U);
    msg.setDestination(41067U);
    msg.setDestinationEntity(208U);
    msg.available = 536264101U;
    msg.value = 202U;

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
    msg.setTimeStamp(0.183215948285);
    msg.setSource(35086U);
    msg.setSourceEntity(217U);
    msg.setDestination(23394U);
    msg.setDestinationEntity(74U);
    msg.available = 3308301355U;
    msg.value = 147U;

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
    msg.setTimeStamp(0.688471450647);
    msg.setSource(36150U);
    msg.setSourceEntity(216U);
    msg.setDestination(23464U);
    msg.setDestinationEntity(244U);
    msg.op = 121U;
    msg.snapshot.assign("GNIREIDJVCHOQEITMPUSWAJSBLMEYPTTPURVJJAPHZKXEKZGQORYBZU");
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 90U;
    tmp_msg_0.longain = 0.0993154720033;
    tmp_msg_0.latgain = 0.352247249906;
    tmp_msg_0.bondthick = 3387362402U;
    tmp_msg_0.leadgain = 0.756121767025;
    tmp_msg_0.deconflgain = 0.412486339312;
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
    msg.setTimeStamp(0.376189756328);
    msg.setSource(35127U);
    msg.setSourceEntity(155U);
    msg.setDestination(1162U);
    msg.setDestinationEntity(86U);
    msg.op = 44U;
    msg.snapshot.assign("MRVEHOVNBZHWJPTHWCTNARRBSSPLEGKQYEVFOLEPVLQDTZKDTLFUYIOSPFNJNBPFQLSZABRNDRQGKPWWZHUOACOIIOVZDXDIFLIEAUZYJFUZMXJKXCXJGG");
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.406569909337;
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
    msg.setTimeStamp(0.667413236953);
    msg.setSource(5756U);
    msg.setSourceEntity(220U);
    msg.setDestination(45633U);
    msg.setDestinationEntity(166U);
    msg.op = 63U;
    msg.snapshot.assign("MCCHQSVPNLGCRPBFYEHTTJBTXVHGDDWRCQMRUUOBZQOJQIYADCHGAOTGEPTBDENMFJKI");
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 238U;
    tmp_msg_0.frag_number = 124U;
    tmp_msg_0.num_frags = 155U;
    const char tmp_tmp_msg_0_0[] = {-65, -53, -93, -99, -96, -54, -2, 66, 107, -95, 50, -118, 99, -108, 51, -69, 30, 72, 124, 27, 84, 113, -61, -47, -57, 80, 122, 38, 16, 87, 75, -85, -69, -75, 113, -119, 31, 43, 84, -54, -84, 69, 22, -58, -109, 46, 101, -21, -50, -19, 68, 14, -11, 8, 112, -93, 72, -24, -9, 110, 34, -72, 3, -72, 89, -94, 70, -6, 101, -104, -54, -5, 10, 77, -120, 89, -40, -103, 78, 108, -77, 84, -36, 84, 50, 42, 49, -45, 123, 125, 79, 91, 114, 20, -38, 112, 121, 118, 124, 120, -119, -36, 101, 58, 6, -6, -30, 118, 124, -6, 79, -19, -119, -13, 87, -60, 125, 42, 0, 93, -15, -53, 107, 7, 33, -120, -96, 76, 53, 32};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.720919756863);
    msg.setSource(32400U);
    msg.setSourceEntity(113U);
    msg.setDestination(30610U);
    msg.setDestinationEntity(5U);
    msg.op = 83U;
    msg.name.assign("LJUUYZECZTPJJWQOKCFKKJESSQJXXIESGDLAOCMXPEPZTETECVZASIQXXYZUWOFMDTWSKDIG");

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
    msg.setTimeStamp(0.0582038582731);
    msg.setSource(35910U);
    msg.setSourceEntity(25U);
    msg.setDestination(21139U);
    msg.setDestinationEntity(17U);
    msg.op = 231U;
    msg.name.assign("PBZOJSYLJLFMGELOGZYTMNBXBZDQLLHSETZASAE");

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
    msg.setTimeStamp(0.512188259959);
    msg.setSource(31370U);
    msg.setSourceEntity(222U);
    msg.setDestination(56844U);
    msg.setDestinationEntity(122U);
    msg.op = 83U;
    msg.name.assign("EMEHBEJESEWTXKDUSTONBYYHWBLPCIPSJPPCEVKOCFITHGQLSMSYRJWAAHLDHHXTISPDTVAZUBIOFYLOQJTMRSUUNFKAUZBHVDQKXWIBJZWOZNYLSINLATENQNRFRSRLHOBOLVQRQGLZQWUYGBCPKJIFZYGFKTBTFWIKMMKEZNUUYXEGAADMPWDRHVJOLGVNOCJYCZFIJHYVXDQVDFKCIXBRMNCFGRQPPJUGKGDECZPO");

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
    msg.setTimeStamp(0.0274221666665);
    msg.setSource(21594U);
    msg.setSourceEntity(230U);
    msg.setDestination(22529U);
    msg.setDestinationEntity(213U);
    msg.type = 246U;
    msg.htime = 0.20243986481;
    msg.context.assign("XRTBUBEZVFGDKUMPDNSPGVHGGMQWEELKZIMZSAAHGYVOFEHVUWCJWHBVIJRHDDYPFSNWFTQFERNADKBOMAOUVUOPY");
    msg.text.assign("ZJSXGOQBMQRFLGAHPGUCSHSNVOMOWAOUSRWEBAUCNEVRXPIRAIEQIEGHFYKKPOUAQIIQLYOYLSVGJURUROANJCHLSVSAKWPMNHBLVEMNDKOTXDDXIKMYOHKCTZPZMWLUQFJNTEGBJFRDJNDYTPBVGLBEZF");

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
    msg.setTimeStamp(0.548776447233);
    msg.setSource(27094U);
    msg.setSourceEntity(121U);
    msg.setDestination(12913U);
    msg.setDestinationEntity(198U);
    msg.type = 159U;
    msg.htime = 0.658957415968;
    msg.context.assign("CWMYVFDIOSQGMPGJVKXYVYCTXRCUJEVRNESTQFWIICXSFPPURNYPTHVXYHAFZTNIBDKCXZNXJNJJUCQFLIYEZAXCXRHMWRJMGCNNVMUZFZHHSMJLKLROBKBKYVKJQJZGSFSOHPDUBEDTLWYWLIRUFQIBAGDNUUEXQWZCOBTPQBLZDDQZZ");
    msg.text.assign("OZDTPGCENNIVOYUKGZGIAHTQQTKRVWUBXSHFGEMEMGPADKNCOUMQYSTZNWHPEFBSDGWYZNJJBWICOYVVPZZQXQFHHLEG");

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
    msg.setTimeStamp(0.606167075379);
    msg.setSource(64651U);
    msg.setSourceEntity(111U);
    msg.setDestination(38363U);
    msg.setDestinationEntity(174U);
    msg.type = 87U;
    msg.htime = 0.585323453136;
    msg.context.assign("IAQFQDHCBNWTLKYIVUXDBJKIJYEIJOBXEZGZPDDYJCURDYPKUYJOWKQNTQNVQDXJYMREXOVDDRQXJXNONBGDMLMONCVQCMPWNCFWUKUAXBLFMWJDX");
    msg.text.assign("OAEGFSCCFZHXZULZJSQOIYBFPSPELIMOFTMWYRDUWC");

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
    msg.setTimeStamp(0.35574083578);
    msg.setSource(49453U);
    msg.setSourceEntity(144U);
    msg.setDestination(15195U);
    msg.setDestinationEntity(165U);
    msg.command = 185U;
    msg.htime = 0.460929633258;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 19U;
    tmp_msg_0.htime = 0.817184822104;
    tmp_msg_0.context.assign("KDJAWKXEXKDDHAGIYVDIZNONQTFPPGDFCLBIQZSHNHYLSNQF");
    tmp_msg_0.text.assign("FMZIHRTHXVHZWYDBELDVKXRRLDSRMCUMDPYYZGTZEUDFJQQPOEHVPQMGOOGGLONKAYXTQXTBPPNGZHECFWSTDSZWAMFLTHXFMFFPIMGWBRNEOUEPSGCZCVUEGVPKNOAWXBWJTAOJSXJVQVFIKKWBOLAYLORNMRG");
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
    msg.setTimeStamp(0.629250362472);
    msg.setSource(4796U);
    msg.setSourceEntity(37U);
    msg.setDestination(44147U);
    msg.setDestinationEntity(165U);
    msg.command = 159U;
    msg.htime = 0.0974220036411;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 83U;
    tmp_msg_0.htime = 0.974612736897;
    tmp_msg_0.context.assign("ECDUFDGRKKWADGVDLRGXJBRMSUXUKGBVISWSZPXMWUBZBDESHEHONY");
    tmp_msg_0.text.assign("HRDTSFORDWTNVERAHFJATCXJOGNLHMKPQDZTYYJNZNWQXSKCOVPIIKLSOOBEPNVUPLWFUVLKLFYGYQNSMESFEKKREBMWAYCCGSBIQZTJILBFCLZIDVOAOPOCVQQOI");
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
    msg.setTimeStamp(0.948801092247);
    msg.setSource(61202U);
    msg.setSourceEntity(150U);
    msg.setDestination(37039U);
    msg.setDestinationEntity(161U);
    msg.command = 246U;
    msg.htime = 0.749672586583;

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
    msg.setTimeStamp(0.589094799572);
    msg.setSource(24969U);
    msg.setSourceEntity(135U);
    msg.setDestination(43072U);
    msg.setDestinationEntity(63U);
    msg.op = 174U;
    msg.file.assign("PFNYDRSJMVXMKVNFJNAVXEOYXJUOWVOVYQDYZEKAYQNAWZBBADJVAANKQXHXJXFOCBSVGKGKLNKHHAHLEQUEUMUSUZBJHPDFAWSEYMOIEZ");

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
    msg.setTimeStamp(0.336437578101);
    msg.setSource(52883U);
    msg.setSourceEntity(216U);
    msg.setDestination(9837U);
    msg.setDestinationEntity(133U);
    msg.op = 170U;
    msg.file.assign("VNFQQPTULLSSKIRRKNLIUZGARCNKMRIWMJGHXBIEXUJDQOWPMGZFLVLOSCVPFDDKQTLFWTJODPQIKZQZDMDHAOEPKONZMFEMQJYCXMTNACULUEZECXROKPBIFNIYWFSLRVZRWYVPTEQHXJSFMWOZEWGBAQCBJFXYSVJUPTBAGBBHUXHECGYXTVOHDCOBINRCNWSEWTBYTIMXAWUHVOGLPATJHQHSUZLVSEPFAUDG");

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
    msg.setTimeStamp(0.970458789314);
    msg.setSource(34440U);
    msg.setSourceEntity(112U);
    msg.setDestination(16726U);
    msg.setDestinationEntity(219U);
    msg.op = 195U;
    msg.file.assign("YXMSHXSXOWICKUZLVXDHKODEVNZNEUNGEBYECZMENMYJOWTVFAILYRCASLPQGFUYMTFCJWWRPJGOGCHOUSVFBKFCNKWWJPQDPCQSOBIZBRDUYIPVH");

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
    msg.setTimeStamp(0.92473343136);
    msg.setSource(19113U);
    msg.setSourceEntity(67U);
    msg.setDestination(37318U);
    msg.setDestinationEntity(170U);
    msg.op = 109U;
    msg.clock = 0.357679812658;
    msg.tz = -87;

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
    msg.setTimeStamp(0.773244685664);
    msg.setSource(58353U);
    msg.setSourceEntity(132U);
    msg.setDestination(50254U);
    msg.setDestinationEntity(65U);
    msg.op = 129U;
    msg.clock = 0.508179892864;
    msg.tz = -9;

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
    msg.setTimeStamp(0.7233267161);
    msg.setSource(34842U);
    msg.setSourceEntity(13U);
    msg.setDestination(43338U);
    msg.setDestinationEntity(245U);
    msg.op = 20U;
    msg.clock = 0.958545138064;
    msg.tz = 35;

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
    msg.setTimeStamp(0.559896377296);
    msg.setSource(32345U);
    msg.setSourceEntity(229U);
    msg.setDestination(17035U);
    msg.setDestinationEntity(99U);
    msg.conductivity = 0.226544561925;
    msg.temperature = 0.438499696759;
    msg.depth = 0.479383055096;

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
    msg.setTimeStamp(0.908968789836);
    msg.setSource(41514U);
    msg.setSourceEntity(171U);
    msg.setDestination(54198U);
    msg.setDestinationEntity(190U);
    msg.conductivity = 0.421441151479;
    msg.temperature = 0.0792550288073;
    msg.depth = 0.763164334892;

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
    msg.setTimeStamp(0.874666723298);
    msg.setSource(23069U);
    msg.setSourceEntity(69U);
    msg.setDestination(6060U);
    msg.setDestinationEntity(33U);
    msg.conductivity = 0.112318165341;
    msg.temperature = 0.621156783998;
    msg.depth = 0.901501853516;

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
    msg.setTimeStamp(0.0719068996096);
    msg.setSource(7375U);
    msg.setSourceEntity(22U);
    msg.setDestination(62426U);
    msg.setDestinationEntity(86U);
    msg.altitude = 0.0341962738301;
    msg.roll = 45871U;
    msg.pitch = 32124U;
    msg.yaw = 4843U;
    msg.speed = 9938;

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
    msg.setTimeStamp(0.558052739623);
    msg.setSource(34083U);
    msg.setSourceEntity(54U);
    msg.setDestination(48850U);
    msg.setDestinationEntity(61U);
    msg.altitude = 0.538210830956;
    msg.roll = 19093U;
    msg.pitch = 9770U;
    msg.yaw = 61126U;
    msg.speed = 25093;

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
    msg.setTimeStamp(0.946980310278);
    msg.setSource(49561U);
    msg.setSourceEntity(230U);
    msg.setDestination(64585U);
    msg.setDestinationEntity(49U);
    msg.altitude = 0.641049127795;
    msg.roll = 21427U;
    msg.pitch = 63667U;
    msg.yaw = 63413U;
    msg.speed = 13931;

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
    msg.setTimeStamp(0.923104994536);
    msg.setSource(64987U);
    msg.setSourceEntity(199U);
    msg.setDestination(7591U);
    msg.setDestinationEntity(119U);
    msg.altitude = 0.385103262224;
    msg.width = 0.241557143351;
    msg.length = 0.945808003992;
    msg.bearing = 0.0427541591155;
    msg.pxl = 6335;
    msg.encoding = 216U;
    const char tmp_msg_0[] = {65, 112, -90, -27, -37, -119, 14, -90, -2, 97, -105, -19, -110, 106, -7, -120, -58, 17, 57, 106, 96, -58, 12, -19, -4, 28, 66, -63, -14, 79, 32, -29, -24, -9, 73, -75};
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
    msg.setTimeStamp(0.612588902828);
    msg.setSource(51233U);
    msg.setSourceEntity(157U);
    msg.setDestination(60376U);
    msg.setDestinationEntity(115U);
    msg.altitude = 0.468650672074;
    msg.width = 0.162489185388;
    msg.length = 0.953764727786;
    msg.bearing = 0.172634531763;
    msg.pxl = -7387;
    msg.encoding = 94U;
    const char tmp_msg_0[] = {-3, -76, -118, 92, -22, -62, 121, 38, -10, 78, -95, -1, -5, -53, 64, 101, -126, 95, 100, -41, -33, 89, 17, -90, 46, -37, -45, 51, 21, -32, 18, -62, -22, -66, 25, 74, -123, 82, -123, 110, 101, 52, -97, -25, -2, 12, 77, -2, 26, 54, 45, 123, 28, 25, -52, -80, -102, 52, -128, 102, 7, -45, 119, -123, -64, 110, -80, -110, 34, 111, 79, -126, -117, -12, -34, 116, -66, 32, 98, -69, 45, -58, 92, -29, 55, -122, -33, -61, 1, -92, 115, 36, 38, -15, 117, -39, 57, 123, 100, -75, 29, -94, -41, -120, -42, 40, 50, -14, 93, -101, -43, -65, -108, -118, 62, -18, 74, -25, 100, -53, -10, -126};
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
    msg.setTimeStamp(0.800819319777);
    msg.setSource(24996U);
    msg.setSourceEntity(85U);
    msg.setDestination(6246U);
    msg.setDestinationEntity(238U);
    msg.altitude = 0.421829174903;
    msg.width = 0.772918604964;
    msg.length = 0.324867422735;
    msg.bearing = 0.894681143047;
    msg.pxl = 17427;
    msg.encoding = 168U;
    const char tmp_msg_0[] = {-7, 114, -101, -86, -57, 84, 96, -72, -34, -71, 65, 11, 14, 95, 82, -44, -29, 63, 6, 49, -24, -125, -97, 106, -36, 67, 100, -121, -50, 40, -88, 45, 61, -3, -94, 16, -44, -7, 125, -128, 119, -99, 83, -59, -24, 4, -123, 94, 76, -126, 61, -62, -86, 4, 110, 126, -104, 43, -28, -60, -25, -42, 31, 122, -83, -69, 125, -13, 84, -22, 17, -127, 64, 68, 10, -72, -92, -18, -69, -29, 23, 105, 114, 83, -57, -61, -39, 83, -108, -67, 120, 97, 13, 83, 20, -17, -99, 25, -55, 125, 91, 1, 47, 83, 94, 87, -58, 120, -83, -111, 94, -126, -47, 5, 24, 67, 49, -32, -88, 99, 103, 20, -21, 113, -107, -128, 92, 101, 115, 121, 42, -64, 71, 31, 32, 61, -98, 45, -24, -8, 6, -23, 85, -71, 77, 56, 73, -69, 87, -90, -104, 38, -85, 44, -29, 40, 94, -101, 18, 100, -77, -29, 17, -103, -31, 106, 101, -119, 99, 35, 96, -113, -92, -6, -8, 83, -68, 34, -45, 88, 0, 46, -127, 105, 103, -57, 29, 89, -7, 38, -59, 53, -57, -54, 48, -59, 43, 94, 80, -29, 26, -53, 45, 31, 40, 79, 21, 61, 1, -78, 33, -97, 104, -124, -127, -106, 53, 78, -76, 37, -125};
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
    msg.setTimeStamp(0.471096031393);
    msg.setSource(53982U);
    msg.setSourceEntity(47U);
    msg.setDestination(30228U);
    msg.setDestinationEntity(210U);
    msg.text.assign("OKYKYNUISQWXTDIQGAJDUMOLDRZGJUTZMVFDRTNFSWFZMWPKVBKARJRBXNPSHADHRDZDZSZHSKLEYXIACHCQCRHHYSXVQINWFVIKCJRSGDSQQONITUEQAXLORZVCAWJLFPJXJUBIUHNLHWOEPCTIFDMPMQNWEHVCEBFZEZGGGPTTPAXBMTURQGYGFYJKCEBPQOLBOKUXBUTSMIAXUOYFGZNNEYJENLKVPV");
    msg.type = 40U;

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
    msg.setTimeStamp(0.550652137862);
    msg.setSource(19062U);
    msg.setSourceEntity(12U);
    msg.setDestination(62164U);
    msg.setDestinationEntity(119U);
    msg.text.assign("LBSJPNAMEYJLSRUYCRDNOKRAPMTVPDFFHWAQXRXTUDHFCBRPGLHJACJHAWKTTQWXBLSUMKKYAGDBYIAWDSQZPSEDRQAGODVQEYDXIGKRUWLVOEUILJEUZZZRVFXEMMVIQINMONGQKPYTZBYENVFCCEJIXCOUCOBPSVPWQRMLHMGRCSWIWNIMOTCHVIBINHUAAUBS");
    msg.type = 151U;

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
    msg.setTimeStamp(0.850244631362);
    msg.setSource(56313U);
    msg.setSourceEntity(129U);
    msg.setDestination(53836U);
    msg.setDestinationEntity(181U);
    msg.text.assign("ZLUGFOCZKLSQUARDSCNGJBSIBFDTRMLVYJPCTIPLVJEPNHFVOANNBOIVHWBLSWANWCTQSCTNOQKELPGFXKGCRYDZYBQEJSPOLTVTYZJXAXUNLUIXUSTEHEFSUMZNCYQKWAWWYRUEEKZAP");
    msg.type = 160U;

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
    msg.setTimeStamp(0.0102967359239);
    msg.setSource(11023U);
    msg.setSourceEntity(42U);
    msg.setDestination(35516U);
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
    msg.setTimeStamp(0.335112561859);
    msg.setSource(59495U);
    msg.setSourceEntity(128U);
    msg.setDestination(46151U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.306238410592);
    msg.setSource(63621U);
    msg.setSourceEntity(93U);
    msg.setDestination(43061U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.637101499096);
    msg.setSource(36887U);
    msg.setSourceEntity(89U);
    msg.setDestination(7405U);
    msg.setDestinationEntity(82U);
    msg.sys_name.assign("RGCXPFDGIJLSPQCHPKYVUPVGZHDNDPRNQTFLJYELEJTKKHNEXJUJOZQCQHWSMYEFMZASBW");
    msg.sys_type = 61U;
    msg.owner = 63372U;
    msg.lat = 0.218123537987;
    msg.lon = 0.55767285972;
    msg.height = 0.466974960889;
    msg.services.assign("SXSNCXXWYURNHTVSZWZJDCHYQKFLCGXFCOJAQDKDTXSDNSLDFEERGTARMLBOXNSRLKLDUEWOGANBOZPPQIOVRDYANEIGLHVKYAETXOPYZZZBJHJEUVMIHPAPQSWMJZHFPMMUKYTJCMQQBJTRRGAZWKHDLRTJKVZMCQFNJYAOYYVBBTWMOTEWVFQNLRWFKCQUKBSBU");

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
    msg.setTimeStamp(0.711277747204);
    msg.setSource(63746U);
    msg.setSourceEntity(199U);
    msg.setDestination(47440U);
    msg.setDestinationEntity(2U);
    msg.sys_name.assign("OCGLQYQXDYVSQFTTXWKRODBONJWUNJKMGBWQFVUFMFAQJHFBXUGCGPOKTIIEHQUPGZKOCZUQUHVTTGHJCHPFVGZTYGRFNLAYIEWXBIMOEHRMLDLBRRUYKVBADROUBUMEQWNOSKHDSPADHQSZMNQUWMKVNFJAZMYLGSEYPZCIIJDV");
    msg.sys_type = 181U;
    msg.owner = 61792U;
    msg.lat = 0.225683194817;
    msg.lon = 0.633398046952;
    msg.height = 0.446522430143;
    msg.services.assign("FZCZZEBJMHSBGHMSNBVPIDKVTQUDWLCNOMMCJJSHTOSKXUGINCYNSKTZKUZHHWZLASWQTXACEOMLORBAYENUFTVGYVYDWWJUGGFDTCLCIVQTYWF");

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
    msg.setTimeStamp(0.524901485765);
    msg.setSource(52455U);
    msg.setSourceEntity(143U);
    msg.setDestination(11756U);
    msg.setDestinationEntity(68U);
    msg.sys_name.assign("EIJJLFIWZWENZBBKQDLSKRDGUJMTYLCDIUHDGIUGVEQSGMSMTJLFYDXJPOKCFLPNAEVXZQNWFRPAPNMEQGDHUSNHPFAWEFXVPCUTOWQKPCCHRVTXYQS");
    msg.sys_type = 18U;
    msg.owner = 12745U;
    msg.lat = 0.146958452542;
    msg.lon = 0.361691861463;
    msg.height = 0.21735925042;
    msg.services.assign("BYHIUZUHWCQYWUGHLNWLTBAQJQNMF");

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
    msg.setTimeStamp(0.44446429832);
    msg.setSource(4764U);
    msg.setSourceEntity(211U);
    msg.setDestination(7160U);
    msg.setDestinationEntity(113U);
    msg.service.assign("BFJOQZATXQXEZFOQGIRBPTAZNVYYDGUNFJBPSWOCJFRBICKOXOGDRVNKWBQHKCJMSKJYCZRTKUGPPOGZZHXJEUEA");
    msg.service_type = 66U;

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
    msg.setTimeStamp(0.494687062261);
    msg.setSource(6868U);
    msg.setSourceEntity(160U);
    msg.setDestination(64522U);
    msg.setDestinationEntity(174U);
    msg.service.assign("PEOPYRQAEUKJUMHGPCTOGAIUZASKEQXFQGQAJCANDPWPGUFBBVIXOXVLTNORMGZHXTIWZODXHTHLAIMIEWJFNLESXOBLRRKWRWDTXOHGYFSNMVIFFWEZVCYDNAKIYQ");
    msg.service_type = 182U;

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
    msg.setTimeStamp(0.240397410635);
    msg.setSource(55539U);
    msg.setSourceEntity(127U);
    msg.setDestination(14713U);
    msg.setDestinationEntity(155U);
    msg.service.assign("CAUHNNXCIWLIWUSSOFWTZKTUPDPBBLOMURYADADPETRWNTUBJZYVEDXCPMNLQHDKBISMGAMAIBYSJTCGQXSQTWRKZVGEKBTVUBX");
    msg.service_type = 173U;

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
    msg.setTimeStamp(0.778801656542);
    msg.setSource(27654U);
    msg.setSourceEntity(41U);
    msg.setDestination(22308U);
    msg.setDestinationEntity(226U);
    msg.value = 0.973374640802;

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
    msg.setTimeStamp(0.78046731356);
    msg.setSource(41701U);
    msg.setSourceEntity(166U);
    msg.setDestination(16372U);
    msg.setDestinationEntity(223U);
    msg.value = 0.182905812299;

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
    msg.setTimeStamp(0.333484368806);
    msg.setSource(29628U);
    msg.setSourceEntity(141U);
    msg.setDestination(12124U);
    msg.setDestinationEntity(248U);
    msg.value = 0.156457112292;

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
    msg.setTimeStamp(0.854378608558);
    msg.setSource(61968U);
    msg.setSourceEntity(67U);
    msg.setDestination(61636U);
    msg.setDestinationEntity(29U);
    msg.value = 0.47425113467;

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
    msg.setTimeStamp(0.696632494098);
    msg.setSource(12405U);
    msg.setSourceEntity(107U);
    msg.setDestination(45432U);
    msg.setDestinationEntity(1U);
    msg.value = 0.3649263982;

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
    msg.setTimeStamp(0.95184493826);
    msg.setSource(29565U);
    msg.setSourceEntity(207U);
    msg.setDestination(26251U);
    msg.setDestinationEntity(147U);
    msg.value = 0.130526665853;

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
    msg.setTimeStamp(0.440550238679);
    msg.setSource(56196U);
    msg.setSourceEntity(251U);
    msg.setDestination(13821U);
    msg.setDestinationEntity(107U);
    msg.value = 0.458754795328;

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
    msg.setTimeStamp(0.990081973886);
    msg.setSource(18932U);
    msg.setSourceEntity(141U);
    msg.setDestination(36378U);
    msg.setDestinationEntity(150U);
    msg.value = 0.769863820321;

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
    msg.setTimeStamp(0.112585764945);
    msg.setSource(57964U);
    msg.setSourceEntity(243U);
    msg.setDestination(16641U);
    msg.setDestinationEntity(226U);
    msg.value = 0.849465835157;

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
    msg.setTimeStamp(0.423378635297);
    msg.setSource(22103U);
    msg.setSourceEntity(99U);
    msg.setDestination(881U);
    msg.setDestinationEntity(73U);
    msg.number.assign("JVGFZDKPFQQLVNTWDAOKRNBDTXDCIRASVKBDVNPFBULZCFZRMLEZJTXPLSCDRYPLXKHJIGLNLPAQUUSWGYWHVCSUEGQUUJHHWOCGGJXTYADBMXYRHPOBTDXMMQKNWZIURKXPRGYTUTWKSBSXHJNRMBVGMOCIOEEEAMTJRBIYFHDVSKSCKNPFLUYZIOOWFJFLDSGHOSZTZIFMAIJNWQWGKRBQEABAVZXIEMY");
    msg.timeout = 49908U;
    msg.contents.assign("HLIXXQPXAJMMMDDSBUDJCUOBXCNEQQZDQOKVHWUELIRCZZPHKRJLEJQQOACDENZQGGSWJBOCOFYLBCSQQPTYLFIMLOOUKFGTFESHMDIYTBKFYHL");

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
    msg.setTimeStamp(0.156721580336);
    msg.setSource(45717U);
    msg.setSourceEntity(4U);
    msg.setDestination(20263U);
    msg.setDestinationEntity(119U);
    msg.number.assign("TBJPHAOFKVCOZQNLKAIQMAUSVBLPEGROZDWNTVWRPXLMFKIGONJTL");
    msg.timeout = 14356U;
    msg.contents.assign("QTGWNGDIEVOFADSQGSHTWZKCJXCKITCSNACXSQYDPWRPAUNOGVRSACEUEHABUBTNAQGXGRDIBIEVBKRQMFFJDKMIJPFWXPLPXRFGZDMAURSMZELHUVLNTWSZHOYFVOVFLMJQPGBPZITGXEBOCWYLJVRQJIHOHLQCOZUNZYZXTLFATKKPYOXFMMAMURMWVJTGRXRCKUYUYFWYVEEDIPTMKIDENKLHHUPBZLSJDJEWQAQ");

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
    msg.setTimeStamp(0.616226164987);
    msg.setSource(55809U);
    msg.setSourceEntity(67U);
    msg.setDestination(32030U);
    msg.setDestinationEntity(245U);
    msg.number.assign("OVVQAOGGQFXHNGTKJVYBRZLIKBBKSECDAGCOYWWGSRKIQEXMXTVHBRARJFPWJGUSXDINIKFYQLAMA");
    msg.timeout = 19729U;
    msg.contents.assign("HDBPSEJKBWWNSQIKCZEAFINXCUHAICTGQKSHDVRFGPWQTQAYQMWWVCOZTSNAVAXKHTYOJEOTCLUHBZAGHIOYUCRCWCJXBROGSONSILXSTATUBPEQVRPXXZQMKTZLEFZVAPVLMJIGRVHLZUBDFWFYYLKLVCKGHGYSEGZMUILOVMMNEYLRFDXRRUKVJUJDMNQBUDIRFGMPWDGDTRNSQJXMFAAWLPHNBZJCEFSW");

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
    msg.setTimeStamp(0.645457272583);
    msg.setSource(38862U);
    msg.setSourceEntity(250U);
    msg.setDestination(9187U);
    msg.setDestinationEntity(25U);
    msg.seq = 1117958615U;
    msg.destination.assign("PDTFMFLVSGZBAGWFFZERPMSJCHXTCQXWSLDBSXKBFJOYCOLLVIIMWXOBNVBSUUWIOSPWBAKVYOYUEFPZFOCMNKYJUILXGKMRRHTRZPJJXXECTSRKRZNDCOCNGUAGTHDYUQHSZPBBYEEOHLOQLDXVPHZNUIVCCMENAGAQHQMISBVNNHXUWVNCOUWIQZFXKAJIGKDQRQLAIKHWPEYZFPJNZQGMJKDD");
    msg.timeout = 30250U;
    const char tmp_msg_0[] = {50, 77, 29, 109, 83, 52, 103, -82, -86, -96, -115, -98, -52, -91, -8, -75, 92, -79, -63, 103, -113, -45, 50, 60, 20, -89, -14, -107, -101, 92, -85, 17, -94, -13, -9, -16, 11, -50, 19, -91, 18, 95, -40, -19, 73, -24, 62, -95, -26, -68, -124, 120, -93, -66, -93, -56, -88, 10, -103, 72, 61, -117, 75, 107, 85, -101, 89, -120, 50, 90, -88, 55, 107, -49, -68, 71, 24, 57, -117, 36, -128, -25, 35, -35, -109, 73};
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
    msg.setTimeStamp(0.196017227181);
    msg.setSource(26251U);
    msg.setSourceEntity(163U);
    msg.setDestination(63166U);
    msg.setDestinationEntity(5U);
    msg.seq = 503602336U;
    msg.destination.assign("KVBYCAQKDC");
    msg.timeout = 42499U;
    const char tmp_msg_0[] = {24, 105, -50, 94, -126, 40, 31, -123, -125, 10, -119, 67, -53, 14, 41, -40, 109, 5, 121, -48, 1, 38, -98, -83, -81, -86, 90, 43, -67, 51, 17, -25, -127, 2, -57, -11, -30, 102, 20, 34, -122, 97, -43, 48, -56, -27, 92, -54, 56, 10, 74, 64, 24};
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
    msg.setTimeStamp(0.934025724718);
    msg.setSource(58182U);
    msg.setSourceEntity(60U);
    msg.setDestination(54364U);
    msg.setDestinationEntity(72U);
    msg.seq = 705680117U;
    msg.destination.assign("YGLZCKGEVOKFKSHEFMKBUURDQFRNPDPJYCUVRBXXC");
    msg.timeout = 14823U;
    const char tmp_msg_0[] = {27, 44, 39, 91, -37, 106, 97, 97, -56, 107, 39, 51, 80, 8, 41, -1, 72, -2, -83, 41, -10, -34, 83, 47, -94, -118, 101, 17, 90, -22, 68, -117, 112, -80, 18, 101, -79, -74, 113, -90, 30, 53, -93, -15, -78, -104, -34, 49, -33, 119, -92, -111, 76, -6, -103, 72, -117, 24, 72, 122, 71, 69, 9, -5, -124, 80, -57, 87, 16, -8, 28, 74, -110, 90, 55, 64, 101, 73, 6, 115, 37, -55, 99, -30, 28, 3, -45, 121, -72, 65, -12, -16, 124, -13, -115, 44};
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
    msg.setTimeStamp(0.643019304016);
    msg.setSource(5287U);
    msg.setSourceEntity(150U);
    msg.setDestination(22606U);
    msg.setDestinationEntity(121U);
    msg.source.assign("LRWYVEDPMXZFCQQEGJPYYNVTSMFDNALRTFJZHXVFFQHVMGVLMNQZIRQTHZSEZZTKMWWUIVIOYKWOMGFGWXZOQTUSHZTBSPAMOFJEYUWXSDKBAHMRIYEKLAEPVAYGBNPYDERGPHABVYRXDSKPEBJOOALHEMONLJZBRIBXACGRBLPUIOKNDUXUSNLIKCFFXHKAUIEFTVHTPGXJJBYLHQCCDQOPOGTXAJCSTWDUKISGKVJQBURNI");
    const char tmp_msg_0[] = {37, -113, -66, -21, 118, 17, -99, -116, -63, -74, -31, 110, -82, 50, 54, 28, -41, 22, -9, 45, 54, 14, 39, 3, -35, 104, -19, -19, 73, -51, 49, 44, -109, -21, 95, -54, -22, -88, 100, -68, -54, 30, 117, 119, 42, -102, 121, -19, 123, -18, -112, 67, -7, -71, -26, -102, -45, 51, 28, 101, 14, 68, 7, -51, 44, 104, 98, 23, -25, -33, -28, -15, 118, 57, 22, 63, 75, 20, -36, 84, -38, -106, -35, 90, 35, 18, 1, 90, 91, -113, -14, 96, -82, -119, -13, 119, 119, -63, -39, 59, 99, 26, -21, 72, -58, 85, 88, 9, 64, -90, 66};
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
    msg.setTimeStamp(0.388524030792);
    msg.setSource(47362U);
    msg.setSourceEntity(207U);
    msg.setDestination(12050U);
    msg.setDestinationEntity(178U);
    msg.source.assign("KASKDOHTTSNHCWPAFOEOGEHUJRZBKRAVYZYBDKMBEFZQFBSTRXQJWLMDRZUKFWOQMXIZTZIIFEQEKUCZYNHQPLSZNWPNHIWGMPYPIWUOUYNGPXLFCPASAVFPBWLJUGBCIVILMIDJXTPACDXTYVRIRFDREPWOIOBXEMYDESFJVCBNCMSVGAROYCNLLAHOKQEHJJEZJVGQKRJTCGDXRUVTALOKMLVKMHZ");
    const char tmp_msg_0[] = {-22, -9, -112, 5, -48, -80, -41, -43, 9, 0, -47, -18, 120, -21, -23};
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
    msg.setTimeStamp(0.0449643774675);
    msg.setSource(36474U);
    msg.setSourceEntity(179U);
    msg.setDestination(795U);
    msg.setDestinationEntity(51U);
    msg.source.assign("NQYSTRSPSTIBEEUROOANYDTDMCQADNQUNSNMFKXFHLVPKNMBQDAIIJHTEHAFXWCUMQMDIFZFGZNLBKTASEEUVLWGJJDAXZLXGZMNRPRPWMWPQHHLOPEJVCVCDLABEKJBFKLPSWWPROVMRGYUZXKQOIFFDYSMZBAWROYZW");
    const char tmp_msg_0[] = {-53, 67, 2, 85, 108, 101, -70, 110, -72, -45, -3, -108, 80, 83, 118, -31, -45, -114, -99, -123, -115, 117, -67, -30, 124, -10, -36, -2, 30, -67, 90, -6, -77, 44, -38, -2, -87, -71, -83, 107, -73, -67, -25, 113, 82, -98, 91, 61, -92, 99, -62, 76, 12, -25, -59, -78, 21, 34, 109, 32, 95, -79, -91, -93, 4, -28, 94, 107, 69, 59, -64, 113, -7, 57, 65, 78, -123, 53, 120, 5, -4, 7, 89, 40, -84, 99, -126, 21, -8, 31, -2, -120, 10, -46, 17, -13, -31, 33, -46, 26, -24, -110, -36, -121, -79, -21, 6, 21, 95, -103, -109, 98, -34, 5, -29, 68, 9, -32, 25, 8, -28, 23, -83, 81, -70, -1, -83, -82, 63, 124, -82, 75, -82, 79, 26, 32, -64, -110, -33, 37, -128, -60, 125, -71, 52, 121, 66, -115, 61, -14, -110, -47, 69, 66, 89, 32, 29, -30, -122, -35, -59, -111, -51, 53, -46, 1, -112, -44, 64, -5, -28, -124, -86, -82, -109, -100, 7, -70, 1, -33, -57, -100, -17, -93, -46, -71, 120, 111, 28, 31, -30, 65, 100, 54, 26, -97};
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
    msg.setTimeStamp(0.533918607241);
    msg.setSource(23719U);
    msg.setSourceEntity(144U);
    msg.setDestination(49345U);
    msg.setDestinationEntity(184U);
    msg.seq = 4205563507U;
    msg.state = 16U;
    msg.error.assign("LVMYRCJUXISYYZPQVWFDUJWPZNMQGEOGBMYRRHBTJVIRETCESNUOMVDBRZIJPYISBGOHDPSELMRQPKYKFRSHJXPASHJHCEHNQLDTHCDQSQFWACKEENHUDDK");

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
    msg.setTimeStamp(0.177533454493);
    msg.setSource(15458U);
    msg.setSourceEntity(28U);
    msg.setDestination(29681U);
    msg.setDestinationEntity(172U);
    msg.seq = 2953173825U;
    msg.state = 41U;
    msg.error.assign("BYEBNZIYPUWXGOCJCQPLSTIFFZAGWHTXCVMEWPTYYXTHONNKNBJLHSOMKHRPRZMASUVRMSIKQXACUMNHRZKHOUVXOGBSWIZIQDGVGTGWFVQZJRLLHZJZFBEKXEOLGMRCSFWKDCKFDC");

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
    msg.setTimeStamp(0.906650083809);
    msg.setSource(29809U);
    msg.setSourceEntity(160U);
    msg.setDestination(21588U);
    msg.setDestinationEntity(53U);
    msg.seq = 316800617U;
    msg.state = 118U;
    msg.error.assign("VYXSOUDHXZZOIPWCRUTZKQOMHMITLKOHINXONKHPVMODAJBLUYWFBTMAQFIEMQGGREWUVAZAZQJ");

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
    msg.setTimeStamp(0.419288644875);
    msg.setSource(48209U);
    msg.setSourceEntity(242U);
    msg.setDestination(50305U);
    msg.setDestinationEntity(194U);
    msg.origin.assign("GGVZMWNQWCQHGVMULUXGOLWATJRTTYBJXHGHLNSBEVMVSNAUHSPSPKHTBPANMHBLXHQSRCKKZEPOZ");
    msg.text.assign("YSVZZBKKOGDUCP");

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
    msg.setTimeStamp(0.961786078533);
    msg.setSource(45339U);
    msg.setSourceEntity(174U);
    msg.setDestination(57918U);
    msg.setDestinationEntity(194U);
    msg.origin.assign("QPUYWXHTTZCBGQILXEKZMKDASJXWQBVPVTSRONFZFRDXHWRAAMQLFIZONHABCADGJHWVHULGPTKGEVENEDYCFDTMZKEZWQVOIQJWSUXIXHAXVELRDYGB");
    msg.text.assign("XKIETFWJNHRNQJBOPXSUZGULIJSXBTOQKHORWMBTFRGJQNAWNQYRUIBCKXMEWMJWKYHQRPEQXTCBLOUEVLSURVCZTKPEKFNYOGIUWPLQWLDYYGAGTDHVPIZYQTVZJMVDTBMFEBIAKXSFLMGZBVSAUMSZBCSVWUGETECQKSNOHOCUNHOLITEPSZMOAQZFPRNJUFDIJFOYAIGCRLDZLHRDADEKZAPXNHPAYDFXGXDJNFVWCHIBVADWM");

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
    msg.setTimeStamp(0.654413435214);
    msg.setSource(50136U);
    msg.setSourceEntity(120U);
    msg.setDestination(18181U);
    msg.setDestinationEntity(149U);
    msg.origin.assign("MWEOEIFFKUUMXWGXEOTPRGTQIMPCQPNMGLXEQIKBEDKJAXIMELBRUEOSEXSCBOBLJIRDNYZCJBNOVUNHAFN");
    msg.text.assign("GSPRUIJOSLHDOOJSEXGXPDKEEULGAOFJZHNJIHIQTBEOPESVTUZRBH");

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
    msg.setTimeStamp(0.282936626687);
    msg.setSource(857U);
    msg.setSourceEntity(155U);
    msg.setDestination(42587U);
    msg.setDestinationEntity(34U);
    msg.origin.assign("XIZJQBLJCYQITWGZTAUMGTXBCLHVJMWYHOIFEOQXBQBBDBVCABXIFVTEWLJQQTXMJCEEWMRCTFLGPFOUUEUIRUODMHY");
    msg.htime = 0.953345300327;
    msg.lat = 0.558566910036;
    msg.lon = 0.158634021366;
    const char tmp_msg_0[] = {52, 25, 69, 124, -8, 19, 44, -100, 0, 54, 26, -65, 42, 69, -91, 42, -113, 24, -87, -121, -53, 12, -121, -128, 79, 16, -8, 26, -25, 104, -48, 12, 45, 63, -58, 43, -9, 71, 120, 110, 83, 120, -109, -11, -32, -80, 74, -101, -59, -2, 39, 56, 120, -80, -58, 6, -84, 17, 73, 121, -102, 101, -104, 39, 111, 50, 31, 47, -109, -3, 49, 113, -11, -76, 23, -1, -10, -2, 51, -47, -22, 5, -25, -38, 55, -72, 103, -1, -43, -109, 16, 119, 10, -37, -2, -84, -125, 58, 55, -88, -128, -88, -54, -74, -2, -103, 119, -35, 78, 91, -83, 55, 86, -77, 39, 90, 106, 119, 86, 21, 87, 79, 43, 65, 102, 13, 107, 82, 70, 109, -105, 55, -46, -19, -15, 125, -89, 30, 51, -80, -7, 111, 121, -24, -123, 96, -127, -47, 3, -41, 64, -51, -74, -74, 73, 54, -25, -31, 73, -127, -87, -98, 57, -49, 41, 73, 24, -95, -104, 48, 124, 31, -96, -69, 87, 55, 97, 106, 81, -78, 34, 88, -18, -101, 126, 65, -91, 16, 119, 126, -103, -96, 64, -25, 54, 114, -35, -84, -1, 118, -67, 126, 6, 83, 118, 23, -26, 114, -49, 24, 120, 57, 72, -68, 25, -44, -51, 28, -21, -103, 123, 124, 90, 14, -92, -114, -94, -44, 34, 25, 27, -128, 75, -109, 33, -78, -4, 97, -19, -23, 100, 110, -85};
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
    msg.setTimeStamp(0.712880345262);
    msg.setSource(39462U);
    msg.setSourceEntity(219U);
    msg.setDestination(18769U);
    msg.setDestinationEntity(229U);
    msg.origin.assign("LHDTEKERAYKLICMWTUHAWHTBBDKMFKIAXKTRDPNSPNTQNTLUVEQMEDMUMIRLAPVHQTLGZSGZPXKIVGIUADFTGVHZNSGFWVQABWJURXAV");
    msg.htime = 0.8657065056;
    msg.lat = 0.787018529266;
    msg.lon = 0.0611660755548;
    const char tmp_msg_0[] = {-79, -111, 24, 8, -66, 32, -52, -4, 43, -107, 31, -14, 58, -60, 44, -45, -82, -96, 52, 77, 46, 67, 61, -34, 117, 77, 104, 12, 69, 53, 84, -2, 49, -90, -66, 97, -45, 29, -1, -66, -95, -100, -58, 7, -112, 22, -116, 66, 23, 14, -19, -15, -109, -105, 52, -100, 24, 69, -11, 41, 25, 29, -81, -44, -67, 7, 88, -68, -125, 86, -28, -49, 10, 52, -13, 67, -37, -5, 97, 113, 46, -31, 48, 39, 36, 104, 103, -69, 50, -82, -46, 30};
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
    msg.setTimeStamp(0.144343899513);
    msg.setSource(41099U);
    msg.setSourceEntity(45U);
    msg.setDestination(21552U);
    msg.setDestinationEntity(52U);
    msg.origin.assign("HVQWOJKPCLTZNLRJMTJTSUDAXJNZPPSZ");
    msg.htime = 0.480081081564;
    msg.lat = 0.545187815621;
    msg.lon = 0.888635789092;
    const char tmp_msg_0[] = {-109, 125, -15, -97, 84, -120, 24, 11, -93, 63, -94, 121, 107, -36, -52, -102, 61, -106, 28, 79, -118, 2, 66, 22, -30, 104, -58, 72, -24, -104, -88, 7, -98, 3, 9, -3, 117, 52, -101, 56};
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
    msg.setTimeStamp(0.656793606104);
    msg.setSource(6172U);
    msg.setSourceEntity(231U);
    msg.setDestination(6748U);
    msg.setDestinationEntity(127U);
    msg.req_id = 32808U;
    msg.ttl = 9904U;
    msg.destination.assign("BQFFUBOZURTPOBMNLHOSWSGAPVGIEPWAOGCLMBRUZFCSRAAXOWLUXEZYKDQ");
    const char tmp_msg_0[] = {-113, 95, 102, -45, -39, 65, 77, 37, 89, 53, -91, -92, -30, -41, -107, -22, -71, -19, -111, 19, 52, 41, 12, -87, -11, -128, -96, -39, 108, 125, -122, -72, -70, 43, -58, -31, 110, -19, -110, 29, -93, -67, -49, -75, -93, 41, 94, 50, 75, -89, -13, -94, 39, -35, 124, -99, -5, -12, -117, 26, -122, 40, 53, -65, 116, 114, 30, -37, 9, -46, -5, -36, -53, -65, 125, -70, 19, 112, -55, -83, -56, -35, 64, 116, -41, -110, -11, -82, -111, -128, -55, -39, 48, 23, -102, -28, -73, -29, -100, -92, 35, 17, -17, -35, 35, 40, -73, -31, 0, -13, -13, -28, 85, 124, 95, -10, 51, -28, -77, 59, 22, 33, 82, 43, 52, 19, 92, -30, -40, 23, 56, 94, 117, -68, 44, 32, -82, -19, 36, -63, -125, 37, 19, 25, 21, -24, -5, -78, -28, 109, 49, -110, 13, -77, 105, 49, -42, 99, -62, -116};
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
    msg.setTimeStamp(0.342603974835);
    msg.setSource(61320U);
    msg.setSourceEntity(193U);
    msg.setDestination(40576U);
    msg.setDestinationEntity(143U);
    msg.req_id = 8122U;
    msg.ttl = 11691U;
    msg.destination.assign("AXMBGQRJWXEYBDNAPIDEJCMKLUGJJLOQDZDQECK");
    const char tmp_msg_0[] = {93, -53, 58, 50, 78, -65, 86, -25, -25, 112, 23, -27, -107, 52, -127, -108, -117, -6, -4, -54, 30, -72, -114, -128, 120, -83, 7, 26, 46, -91, 35, 59, -45, 37, -55, -59, -62, -80, 97, 88, -35, 4, -65, -61, -58, 31, -111, -124, 55, 43, -83, 89, -84, 84, -91, 20, 62, -9, -38, 126, 69, -36, -50, -81, -96, 48, -9, 84, -73, -105, 120, -61, -81, -106, -72, -9, 24, 102, -81, -106, 24, 52, -70, -121, -121, 38, -66, 111, 46, -120, -100, -88, -40, -70, -66, -89, -26, -57, -52, 33, 126, -77, -28, 11, -9, -39, 28, 17, 9, 15, -121, -47, -8, 8, 3, 95, -32, -111, -50, -9, -85, 98, 80, -40, -122, 107, 21, 26, -95, -1, 72, -112, -33, -4, 93, 95, 1, -18, -19, -48, -29, -114, -3, 59, -74, -57, -43, -2, -120, 23, -120, -84, -48, 55, -94, -23, 5, 117, 108, -30, 28, -10, 114, 108, -112, -99, -31, 67, -14, 55, -24, 80, -44, -103, 59, 99, 85, -19, 66, -105, 87, 9, 107, 83, 26, -50, -76, -17, -7, 92, -126, -67, 12, 96, 24, 42, 15, 82, 18, 93, 23, -73, 19, 69, -85, 113, 79, 82};
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
    msg.setTimeStamp(0.75836762816);
    msg.setSource(9523U);
    msg.setSourceEntity(32U);
    msg.setDestination(33138U);
    msg.setDestinationEntity(104U);
    msg.req_id = 34827U;
    msg.ttl = 55342U;
    msg.destination.assign("TEJXSVAAUEUXFJQYJGKAQGJHNNNBPCIMZYMBQNHGXSIQAWXWKDZTPOWSQPDVREWQHSNNYOIVUMITARPZIGYGBFWRKUHFSLOHTPMAEWZAJTCFVDPCEJMZGGJNTY");
    const char tmp_msg_0[] = {87, 37, 97, 27, 101, -108, -31, 70, -81, -40, -66, -22, -59, 82, 24, 75, 60, 62, 25, -90, -70, 24, -84, 90, -95, 126, 87, -101, -51, -53, -128, 113, -49, 27, 77, 109, -46, -41, -33, -36, -30, 33, -127, -105, -119, -26, 60, -111, -81, -61, -117, 19, -18, 86, -95, -83, 125, -50, 28, 81, -7, -15, 81, 62, 124, -72, -56, -79, 23, -89, 16, 74, -28, -112, -57, -62, 55, 32, 39, -89, 108, 43, -99, -43, 108, -48, -52, 8, 48, -52, 17, -44, 77, 44, 40, -22, -43, 91, 112, 51, 100, -30, 65, 122, -34, -94, 49, 51, 10, -127, -98, 37, -34, 87, 0, 51, 122, -82, -84, 34, -62};
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
    msg.setTimeStamp(0.754024044877);
    msg.setSource(33912U);
    msg.setSourceEntity(82U);
    msg.setDestination(18987U);
    msg.setDestinationEntity(143U);
    msg.req_id = 65463U;
    msg.status = 103U;
    msg.text.assign("MGTXSUKXYSKYSFNFOYC");

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
    msg.setTimeStamp(0.979550530885);
    msg.setSource(29714U);
    msg.setSourceEntity(175U);
    msg.setDestination(28072U);
    msg.setDestinationEntity(239U);
    msg.req_id = 32052U;
    msg.status = 247U;
    msg.text.assign("LPMOTJXNIIMJC");

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
    msg.setTimeStamp(0.0120344647955);
    msg.setSource(37164U);
    msg.setSourceEntity(205U);
    msg.setDestination(46492U);
    msg.setDestinationEntity(239U);
    msg.req_id = 7442U;
    msg.status = 156U;
    msg.text.assign("ZQFPOUMCIEFAZJYVEVBDYUBHUOLRVKBIXUWSRCOEELYQVEYZR");

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
    msg.setTimeStamp(0.874005320814);
    msg.setSource(13931U);
    msg.setSourceEntity(173U);
    msg.setDestination(23822U);
    msg.setDestinationEntity(146U);
    msg.group_name.assign("NVBGOUNDXFTWNNHPUYCIKNCYGKHPGGHREWFRCFCEVXIIDMDXOJKQPHDGSSVQDOVTRNFAZGLTALOFASWANPGMVAPDGZVHXAJZUQBXMCDEZU");
    msg.links = 3097922788U;

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
    msg.setTimeStamp(0.75270804632);
    msg.setSource(4663U);
    msg.setSourceEntity(42U);
    msg.setDestination(41836U);
    msg.setDestinationEntity(189U);
    msg.group_name.assign("NLCNNDHTKSWQPJMGYZNJKERJDSDBPIIHHLQNJHPOGLEOXOYFECAIMIHEIBFYMTNCVSLYRLOSUZUEREDUTXDTBYYWNVUESBCTILRURPTGOHVHSJZSWUKYFCQFDXGOBMDOQQGRXXCELFMJKAXCXZVRLLYBPEQPAUVTBDVVZDXQFCKBAYKWKF");
    msg.links = 3417092414U;

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
    msg.setTimeStamp(0.85436649217);
    msg.setSource(54973U);
    msg.setSourceEntity(73U);
    msg.setDestination(23631U);
    msg.setDestinationEntity(55U);
    msg.group_name.assign("ULYRDBVKHVKGALLHBTBBIGOVWNHNBCQMRYTLVTCCQZCDIIJVYQMAEXDWHTOEPJEJQFOZATIBUPRFNUMDRDWYIJPQONIKETBSALHJFGRYXLOZAVSUWTDJLUMGYSPAEGKSHXKCHZETMMXWMNFSYRALUVFFUGGOQPGWZXDWSAOHMOINCCTOVQGGMUIAJROBQWJSYCDPLUCJYXRKDBBUHQENHAMSKDQWNKXZKXRVXSPYRNLPZFSFJPEECPTVZ");
    msg.links = 2437213825U;

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
    msg.setTimeStamp(0.772645354248);
    msg.setSource(50621U);
    msg.setSourceEntity(234U);
    msg.setDestination(59354U);
    msg.setDestinationEntity(59U);
    msg.groupname.assign("BERRGADGPZQBUPYLFOFAQBNQFWHNWAQHHXYXUFEYIFVVHDU");
    msg.action = 154U;
    msg.grouplist.assign("QLMJEDOVCAXJGZMMYESYOCRNDOAYWKJPJXZAXRWHOWOCBWCISRFXLBZTMBBAAWALIKVHEHELIXFGQQOIJGHZMEWKUKHSBZNNFAPDQLHUTGPREGJGZITSEKQRXLLYPTHRKJDAFKYEYLDITJBIVQUVTPQGVWNXFUWVHJXPNRBZIZUXMZMSGAQ");

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
    msg.setTimeStamp(0.692518855468);
    msg.setSource(36721U);
    msg.setSourceEntity(95U);
    msg.setDestination(6308U);
    msg.setDestinationEntity(195U);
    msg.groupname.assign("JDYEJQWCTJVJAMHDVUGWKCMXMJWUPEZBPRSOZDJLILGHRMHAYYZCGKZRFSESNITXMFGPRSUSNNZMTSTHOSPDTNAHOSEQOBBPVAFYRRXOCOAUNFRUXXCUKNTKOVTHVML");
    msg.action = 83U;
    msg.grouplist.assign("FZUUHAHMUAMFGLVGFHDEBLJDJXOGAVPPOCFWEWIQBLVOLEYRNMHSBBIVCZCEPSPLWUIJHJPZZNWTFENIPOIZFMYMMSRCQZTUXIBOAYYCMXNTUDUCTDLQKEWRWXVSBAQQMBCXFQVTHOAFYKFQLIEYCNXVKCUGJTNSDJNMHHCLWXSRSTGYNWDMREYRRGSVGOIONQIPB");

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
    msg.setTimeStamp(0.854917137591);
    msg.setSource(22570U);
    msg.setSourceEntity(27U);
    msg.setDestination(14575U);
    msg.setDestinationEntity(32U);
    msg.groupname.assign("MUHUKEMTYGJIYJMZVFSTLHHQXZWAUAVHXAI");
    msg.action = 12U;
    msg.grouplist.assign("PMONHLRIGZQIGUSHKNNJSLTNPLXNSFBHEUZYWFZOLECHTUJNWLJSQVTATBFOXPEUAVNFYPUOLYQJYUJLKTGKCDVXCWXTLMBWVINJEKFISNRTELZMOQIDQIDPFBYMKOBPCDRIQYPUHCFZDHZWBDMWEBX");

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
    msg.setTimeStamp(0.702364300952);
    msg.setSource(3282U);
    msg.setSourceEntity(33U);
    msg.setDestination(34906U);
    msg.setDestinationEntity(63U);
    msg.value = 0.0547871186519;
    msg.sys_src = 4348U;

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
    msg.setTimeStamp(0.543154218739);
    msg.setSource(65529U);
    msg.setSourceEntity(11U);
    msg.setDestination(46859U);
    msg.setDestinationEntity(6U);
    msg.value = 0.0156524694475;
    msg.sys_src = 28557U;

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
    msg.setTimeStamp(0.644548627796);
    msg.setSource(55959U);
    msg.setSourceEntity(22U);
    msg.setDestination(8443U);
    msg.setDestinationEntity(174U);
    msg.value = 0.864994264733;
    msg.sys_src = 30754U;

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
    msg.setTimeStamp(0.761383097508);
    msg.setSource(36545U);
    msg.setSourceEntity(46U);
    msg.setDestination(55849U);
    msg.setDestinationEntity(198U);
    msg.value = 0.512271082762;
    msg.units = 57U;

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
    msg.setTimeStamp(0.43091785995);
    msg.setSource(13818U);
    msg.setSourceEntity(11U);
    msg.setDestination(25431U);
    msg.setDestinationEntity(86U);
    msg.value = 0.722252173607;
    msg.units = 158U;

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
    msg.setTimeStamp(0.386751975384);
    msg.setSource(4179U);
    msg.setSourceEntity(40U);
    msg.setDestination(50496U);
    msg.setDestinationEntity(234U);
    msg.value = 0.0207986848115;
    msg.units = 243U;

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
    msg.setTimeStamp(0.219240305832);
    msg.setSource(43066U);
    msg.setSourceEntity(0U);
    msg.setDestination(55410U);
    msg.setDestinationEntity(136U);
    msg.base_lat = 0.567675720519;
    msg.base_lon = 0.888406316413;
    msg.base_time = 0.659095928963;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 50175U;
    tmp_msg_0.priority = -125;
    tmp_msg_0.x = 22725;
    tmp_msg_0.y = -15759;
    tmp_msg_0.z = -9144;
    tmp_msg_0.t = 18433;
    IMC::Depth tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.900692362947;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.172168919364);
    msg.setSource(37271U);
    msg.setSourceEntity(112U);
    msg.setDestination(10711U);
    msg.setDestinationEntity(4U);
    msg.base_lat = 0.968988858887;
    msg.base_lon = 0.973898116863;
    msg.base_time = 0.269091359028;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 54305U;
    tmp_msg_0.priority = 83;
    tmp_msg_0.x = 31908;
    tmp_msg_0.y = 7538;
    tmp_msg_0.z = 3957;
    tmp_msg_0.t = -21067;
    IMC::PushEntityParameters tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AUTFVYAQQPZWJLUKLTGWKXCDLIDDSYVKXQSSNBFTUWTXSFSUFGGRZEJJLLUQAHDPNYJIOZCAHGUGPAHOECNTMGNBRRPVSNEQLVNMYVOPQOZWMRPXDOJYCPMUOTYRIAWZBKTRACPHRFZMETZGHNNBDORHRJKCUOXIKQYHLHICHDWYEIEJMCVNMBKOWQPNSJEPWMUTBQFFDRTFLVZXGXMFKOGEBDHCIDYALZUAYSWFJSMIXVJQBKCS");
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
    msg.setTimeStamp(0.619096566089);
    msg.setSource(21898U);
    msg.setSourceEntity(171U);
    msg.setDestination(20438U);
    msg.setDestinationEntity(216U);
    msg.base_lat = 0.52410585306;
    msg.base_lon = 0.487692284218;
    msg.base_time = 0.462601493884;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 25090U;
    tmp_msg_0.destination = 36386U;
    tmp_msg_0.timeout = 0.341963806345;
    IMC::CloseSession tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sessid = 2693252272U;
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
    msg.setTimeStamp(0.700948023001);
    msg.setSource(6927U);
    msg.setSourceEntity(253U);
    msg.setDestination(60884U);
    msg.setDestinationEntity(239U);
    msg.base_lat = 0.927763833124;
    msg.base_lon = 0.227935491001;
    msg.base_time = 0.375519118994;
    const char tmp_msg_0[] = {-128, -52, -32, 92, -43, -38, -30, -68, 100, 35, 14, 89, 13, 11, 58, -9, -99, -30, 113, -43, 8, -36, 50, 38, 76, 94, -104, -118, 37, -123, -110, -54, 99, -29, 25, -101, -52, -112, -69, -84, -121, 123, 41, -100, -39, -60, -125, 112, -123, -55, -59, -106, -12, -91, -19, -51, -34, -41, -29, -16, 50, -29, 64, 72, -65, 111, 70, -11, 93, -74, -45, 44, 57, -75, 123, -113, 9, 92, 30, 61, -42, -122, 16, -82, -103, -76, -4, 56, -7, -96, -106, 108, 86, 66, 55, 59, 54, -54, -79, -110, 96, 111, 124, 9, 27, -87, -28, -38, -72, -23, -60, 73, -121, -77, 96, -16, 60, -22, -106, 109, -82, 23};
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
    msg.setTimeStamp(0.22303164312);
    msg.setSource(5490U);
    msg.setSourceEntity(14U);
    msg.setDestination(42420U);
    msg.setDestinationEntity(71U);
    msg.base_lat = 0.666012838565;
    msg.base_lon = 0.839602656199;
    msg.base_time = 0.979476819174;
    const char tmp_msg_0[] = {33, -98, -83, 54, 11, -12, 109, 121, -10, -79, 22, -114, 30, -30, 19, -70, 110, 113, -32, 14, -62, -86, -4, -78, 27, 39, -36, 57, -33, 101, 45, -10, 90, -13, -64, 57, 1, -83, -46, 18, 35, 69, -100, 92, 80, -46, 78, 3, -128, 98, -119, -107, 7, -119, 117, -119, -76, -17, 91, 57, 106, -106, 78, 45, 107, -123, 120, -93, 23, -50, 99, -99};
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
    msg.setTimeStamp(0.127474806199);
    msg.setSource(61527U);
    msg.setSourceEntity(250U);
    msg.setDestination(35114U);
    msg.setDestinationEntity(176U);
    msg.base_lat = 0.913505072083;
    msg.base_lon = 0.702887421445;
    msg.base_time = 0.819073720001;
    const char tmp_msg_0[] = {121, -96, -58, 101, -75, -54, -29, -53, -13, 24, -82, 43, 69, 83, -38, 95, -7, 1, -37, -75, 41, -106, -109, -46, -105, -128, -82, -94, 31, 92, -49, -62, -33, 126, 114, 48, -71, 103, 23, -70, 22, 95, -60, -60, 21, 115, 5, -2, -54, -6, 109, 18, -2, -52, -120, -85, 82, 114, 41, -6, -126, 42, -10, -49, -122, -128, -14, 56, -78, -90, 82, 73, -81, 4, 83, 94, 32, -23, -67};
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
    msg.setTimeStamp(0.245084585887);
    msg.setSource(60219U);
    msg.setSourceEntity(244U);
    msg.setDestination(54363U);
    msg.setDestinationEntity(160U);
    msg.sys_id = 50797U;
    msg.priority = -43;
    msg.x = 14995;
    msg.y = -18156;
    msg.z = -32446;
    msg.t = -3919;
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.314406853651;
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
    msg.setTimeStamp(0.329099012101);
    msg.setSource(59157U);
    msg.setSourceEntity(64U);
    msg.setDestination(17068U);
    msg.setDestinationEntity(126U);
    msg.sys_id = 51755U;
    msg.priority = -64;
    msg.x = 6181;
    msg.y = -5275;
    msg.z = 27022;
    msg.t = -14274;
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.259602270184;
    tmp_msg_0.m = 0.17626142706;
    tmp_msg_0.n = 0.0508376004644;
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
    msg.setTimeStamp(0.997284586231);
    msg.setSource(51729U);
    msg.setSourceEntity(243U);
    msg.setDestination(55009U);
    msg.setDestinationEntity(46U);
    msg.sys_id = 7970U;
    msg.priority = 82;
    msg.x = -30462;
    msg.y = -2909;
    msg.z = -17488;
    msg.t = 17457;
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 50883U;
    tmp_msg_0.sys.assign("RAUTVVHTXKNXMPHBUIXYKJDCFYEDRKSARBEONGDOXLSTSWHSGABCJUDZDVEOWMKKMZCQOKJLGLITDFSLCEFKVUA");
    tmp_msg_0.value = 0.807553724442;
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
    msg.setTimeStamp(0.824115094077);
    msg.setSource(36095U);
    msg.setSourceEntity(32U);
    msg.setDestination(65185U);
    msg.setDestinationEntity(8U);
    msg.req_id = 37135U;
    msg.type = 155U;
    msg.max_size = 16876U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.311609692271;
    tmp_msg_0.base_lon = 0.161015086337;
    tmp_msg_0.base_time = 0.93645933321;
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
    msg.setTimeStamp(0.575200801876);
    msg.setSource(39357U);
    msg.setSourceEntity(15U);
    msg.setDestination(30249U);
    msg.setDestinationEntity(207U);
    msg.req_id = 35048U;
    msg.type = 2U;
    msg.max_size = 8929U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.00763775444584;
    tmp_msg_0.base_lon = 0.72574906456;
    tmp_msg_0.base_time = 0.292367071279;
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
    msg.setTimeStamp(0.666262687057);
    msg.setSource(20387U);
    msg.setSourceEntity(109U);
    msg.setDestination(42462U);
    msg.setDestinationEntity(35U);
    msg.req_id = 58833U;
    msg.type = 144U;
    msg.max_size = 55954U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.986296007728;
    tmp_msg_0.base_lon = 0.524871889252;
    tmp_msg_0.base_time = 0.125767378777;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 7280U;
    tmp_tmp_msg_0_0.priority = 37;
    tmp_tmp_msg_0_0.x = -7821;
    tmp_tmp_msg_0_0.y = -3915;
    tmp_tmp_msg_0_0.z = 9909;
    tmp_tmp_msg_0_0.t = 17702;
    IMC::EntityParameters tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("HTSKJHLTCGLJCDOMBFSSQZDOQLIYZGNJTGLJNNDPHYMPFXBEUVRNJVCFMPBEWRCIQLPUBWLYMJMSASSDXRAZTVWEYZINRLRHEWBFGFVAQNYNVKSOLVOHVQUMUAPXBTBUDWIFARAGPYAKTFOQCXCYXGELPQEZDWGBOTSYQVQXWEGMDNTVIOYMIX");
    IMC::EntityParameter tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.name.assign("GUZXECSTFOHSVWUSEYSPDTPYJFFTYJNXHARXECHQVYLCCSFWQDNTFIWUGJRPPDOLHQWBDYXKIJIFKKKCRGIQHRGBGCGVGJKVHPMWVYAKYBEQRWZAZLEMRXLMQLCEDRSYJDOYUKZXJLNAD");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.value.assign("LMRMRXAIBVVGFQIYRYFNAJHPDMAEJTRBWXCSYIDJSORHXGINOKXDSPGJKZWVORVJZQNHVJZCNPSKNTXKAFYRELWODUJJIIGZAIKNMTTELUTOXYXNKBPAMEBSQUTCUPBXZLUPSGOEBYXYYFAHFULAWPKQBAUO");
    tmp_tmp_tmp_msg_0_0_0.params.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.632064808611);
    msg.setSource(47788U);
    msg.setSourceEntity(28U);
    msg.setDestination(49181U);
    msg.setDestinationEntity(120U);
    msg.original_source = 8662U;
    msg.destination = 41356U;
    msg.timeout = 0.524294374926;
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.230083939215;
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
    msg.setTimeStamp(0.275959864368);
    msg.setSource(6213U);
    msg.setSourceEntity(7U);
    msg.setDestination(57007U);
    msg.setDestinationEntity(223U);
    msg.original_source = 44841U;
    msg.destination = 24563U;
    msg.timeout = 0.172711714714;
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 183U;
    tmp_msg_0.actions.assign("GHAROGTIHQJVJTTAPMEKCEKFCZWMLEWQFJXBGUDQRXDSZWUSGVFFRWPKRWNKIBYQSWRXGCHPOMVYGXEFKOIQYPXKLWIUUQVBBFTAMIT");
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
    msg.setTimeStamp(0.514659871653);
    msg.setSource(6156U);
    msg.setSourceEntity(151U);
    msg.setDestination(30417U);
    msg.setDestinationEntity(139U);
    msg.original_source = 13490U;
    msg.destination = 62823U;
    msg.timeout = 0.429153839354;
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 145U;
    tmp_msg_0.x = 471U;
    tmp_msg_0.y = 21178U;
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
    msg.setTimeStamp(0.0958546131743);
    msg.setSource(20466U);
    msg.setSourceEntity(219U);
    msg.setDestination(28613U);
    msg.setDestinationEntity(104U);
    msg.id = 111U;
    msg.range = 0.460429575089;

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
    msg.setTimeStamp(0.718821705078);
    msg.setSource(55612U);
    msg.setSourceEntity(46U);
    msg.setDestination(16577U);
    msg.setDestinationEntity(13U);
    msg.id = 43U;
    msg.range = 0.999301142314;

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
    msg.setTimeStamp(0.326825664826);
    msg.setSource(28194U);
    msg.setSourceEntity(83U);
    msg.setDestination(41499U);
    msg.setDestinationEntity(74U);
    msg.id = 124U;
    msg.range = 0.57225797021;

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
    msg.setTimeStamp(0.952366287855);
    msg.setSource(11204U);
    msg.setSourceEntity(65U);
    msg.setDestination(30256U);
    msg.setDestinationEntity(219U);
    msg.beacon.assign("BKXOLCHHOLSGWWMNBPCDGKOXH");
    msg.lat = 0.223718946013;
    msg.lon = 0.0445147958366;
    msg.depth = 0.0440716926343;
    msg.query_channel = 241U;
    msg.reply_channel = 111U;
    msg.transponder_delay = 53U;

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
    msg.setTimeStamp(0.0915009313714);
    msg.setSource(14332U);
    msg.setSourceEntity(159U);
    msg.setDestination(33907U);
    msg.setDestinationEntity(88U);
    msg.beacon.assign("WLASCFYGSRBSDLDOYMKCONAWHUJFRIEOMOUGGXVQTHMZKPNFUEJTMGEULPWSVOBAGIWXDNNVEGLIQOYJLUPGFZNZIJKAUZIOIJOPBUWSQCTDLJRYAMGZKNRNWBZKX");
    msg.lat = 0.11939938955;
    msg.lon = 0.264320199053;
    msg.depth = 0.991920281524;
    msg.query_channel = 82U;
    msg.reply_channel = 236U;
    msg.transponder_delay = 141U;

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
    msg.setTimeStamp(0.542619101751);
    msg.setSource(29408U);
    msg.setSourceEntity(67U);
    msg.setDestination(4638U);
    msg.setDestinationEntity(109U);
    msg.beacon.assign("NQUZYGPLVTOHGJJROKWMNOGRUZRMGLDIOCHIBYJ");
    msg.lat = 0.0776937000463;
    msg.lon = 0.729710549069;
    msg.depth = 0.298496669647;
    msg.query_channel = 78U;
    msg.reply_channel = 114U;
    msg.transponder_delay = 126U;

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
    msg.setTimeStamp(0.475012698121);
    msg.setSource(43998U);
    msg.setSourceEntity(94U);
    msg.setDestination(18036U);
    msg.setDestinationEntity(226U);
    msg.op = 104U;

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
    msg.setTimeStamp(0.957973467143);
    msg.setSource(35965U);
    msg.setSourceEntity(196U);
    msg.setDestination(4616U);
    msg.setDestinationEntity(152U);
    msg.op = 230U;

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
    msg.setTimeStamp(0.822786006515);
    msg.setSource(9906U);
    msg.setSourceEntity(193U);
    msg.setDestination(51442U);
    msg.setDestinationEntity(169U);
    msg.op = 112U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LSSFNEMUEQWIHDYDVPBVAFVIGXDLZYOVWIUVOTQWKEIVBOFHRUXLZHXWIWUCVUDGYGNNJLIZRCNNVOOICTJHBXCPJXUJYKCAMUGXKHTBGYGPFLYOKAKMGZLNJGLCMHDMQTAQCFMYHQHWFOZFZTJNKELSQGZVDEHBMESJPDEKQSEPRRCUPJWSKFHARBKZDBAAYLTNXYVMPKAFYPCEOWDAXBTN");
    tmp_msg_0.lat = 0.0542356341057;
    tmp_msg_0.lon = 0.515744334761;
    tmp_msg_0.depth = 0.457825765524;
    tmp_msg_0.query_channel = 165U;
    tmp_msg_0.reply_channel = 197U;
    tmp_msg_0.transponder_delay = 143U;
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
    msg.setTimeStamp(0.899395931782);
    msg.setSource(42590U);
    msg.setSourceEntity(200U);
    msg.setDestination(8051U);
    msg.setDestinationEntity(1U);
    IMC::GroupStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.618365790529;
    tmp_msg_0.y = 0.637733591334;
    tmp_msg_0.z = 0.0867864527893;
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
    msg.setTimeStamp(0.215930820923);
    msg.setSource(56219U);
    msg.setSourceEntity(168U);
    msg.setDestination(26944U);
    msg.setDestinationEntity(183U);
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.244711623936;
    tmp_msg_0.y = 0.860653006836;
    tmp_msg_0.z = 0.0977537542718;
    tmp_msg_0.t = 0.781002859424;
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
    msg.setTimeStamp(0.315393931734);
    msg.setSource(337U);
    msg.setSourceEntity(47U);
    msg.setDestination(46160U);
    msg.setDestinationEntity(69U);
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.940497963099;
    tmp_msg_0.x = 0.117834727616;
    tmp_msg_0.y = 0.0664586131345;
    tmp_msg_0.z = 0.170313372065;
    tmp_msg_0.timestep = 0.82193079204;
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
    msg.setTimeStamp(0.224320756648);
    msg.setSource(61948U);
    msg.setSourceEntity(34U);
    msg.setDestination(25953U);
    msg.setDestinationEntity(87U);
    msg.op = 115U;
    msg.system.assign("RDSHVUWRNWZUXUEIZECCLTUADTZBKVH");
    msg.range = 0.420414052249;
    IMC::UsblAnglesExtended tmp_msg_0;
    tmp_msg_0.target.assign("DXJWSISAMLQEXYEXRGLIABPWUARPQAWPNCKXNFEFPHYOVBTMPANJSIEOEOWRYBZSHWDMHKVR");
    tmp_msg_0.lbearing = 0.603131978925;
    tmp_msg_0.lelevation = 0.84419982772;
    tmp_msg_0.bearing = 0.769832105508;
    tmp_msg_0.elevation = 0.887303048108;
    tmp_msg_0.phi = 0.830477995023;
    tmp_msg_0.theta = 0.635208637401;
    tmp_msg_0.psi = 0.259671096024;
    tmp_msg_0.accuracy = 0.128455385687;
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
    msg.setTimeStamp(0.292565405416);
    msg.setSource(34628U);
    msg.setSourceEntity(243U);
    msg.setDestination(19103U);
    msg.setDestinationEntity(251U);
    msg.op = 94U;
    msg.system.assign("JGPDDYRMIKBGOOBFLHHRNUARMIQKLSUUKYPQWWZKTIGVVDTENUZWYCXZRBEUUMRVPWBKYYJFKXYSLVDBMLCKIMLONJXBNOMABJEZCEVGJCVKEZTTIDFJXBAIGECQDOIHSIBUWTKMBHGDZFHZEJPZHALUUXTUSAHTXPJQAPNLWWFTFVOTHDSQXCNZJTZR");
    msg.range = 0.224712720075;
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("NOFMRMQBKXRAXRIBONFFG");
    const char tmp_tmp_msg_0_0[] = {-57, 9, -17, -69, -48, 79, -34, 124, 75, -52, 36, 111, -60, -63, -112, 98, 88, -51, 25, 89, -21, 37, 105, -89, -30, 45, 63, -122, 109, 103, 5, -105, 1, -48, 51, 102, 111, 1, 16, -102, -41, 56, -15, -27, -5, 7, 3, -67, -76, -61, 46, -30, -61, -72, -107, -126, 36, 51, -12, -30, -94, 74, -80, 2, 42, 51, 43, 62, 34, -63, -117, 50, -113, -63, -40, 8, -49, -12, 109, 23, -26, 11, -72, -76, -68, 90, 50, 11, -72, -21, -110, 107, 55, -32, 37, -58, 90, 72, 18, -74, -109, -113, -102, 10, 55, 46, 14, -62, 89, 75, -61, -124, 66, -10, -44, 83, 120, 92, 16, 40, 34, 77, -70, -38, -118, 108, -84, 40, -85, -33, 125, 108, 9, -119};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.62082894029);
    msg.setSource(22476U);
    msg.setSourceEntity(135U);
    msg.setDestination(2708U);
    msg.setDestinationEntity(104U);
    msg.op = 3U;
    msg.system.assign("LUTJDSZJTFSBHSOIWWVIBDNFLACPXFQTRMTBFBYEGKIWSHBWNDARNKXTMP");
    msg.range = 0.0639361456355;
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("RQBCOIOUCRWEJCDKBMYBTVIJFZOQFLQNZXVTCWOWEHXLLWTRIXZZGZTVMAAWBNXOHEQPBOOUKOTXMHUXWYBYGSTZHPLJJXHH");
    tmp_msg_0.dest_man.assign("CWVXMONGEIJGCDFZSRWLVILKONIBXKXKQTWVPETSFCQEKJSIRIWKDXAATNHJZQDBSUOBJIKSIKPZQSWCPUONLBWHYPCWTRQZ");
    tmp_msg_0.conditions.assign("VHVAYOOMAEVIXCEDPRQHPBDXQWSCHDWUGPZOZPNWYPUZDIXFTRFOSEZDGPTBGGKHBUXXWIGJSNEFXHEMJPMAQROGAXNKUKMQLOASODDGTVAFEPCNCMYABIHNWRORLJBJCSABZAGVZGRKALKETPQEJSLTLW");
    IMC::PlanDBInformation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("HQZIZJIUNSMBGYDXYQUWSIXCGBANPIDDXTLNWUCIZAWEKPOWQPDRJYEHPYROGJFXJULVMXLOTMPAFJQBFUAUBHTLOLQQHNVKECXHSOKFNIEG");
    tmp_tmp_msg_0_0.plan_size = 47781U;
    tmp_tmp_msg_0_0.change_time = 0.441180341309;
    tmp_tmp_msg_0_0.change_sid = 35219U;
    tmp_tmp_msg_0_0.change_sname.assign("PBEWQTWGQFAKQLVMYHSYJWJLCZKWCRRKGCCFFNHSPCCXCGUWUOLMHSTLZFJOAO");
    const char tmp_tmp_tmp_msg_0_0_0[] = {-17, 84, -75, -33, -3, -43, 21, 95, 99, -64, 124, -64, -82, -95, 69, 29, 13, -95, 126, -43, -80, 107, 72, -36, -126, 86, -6, 74, 120, 52, 118, 105, -106, 96, -107, 26, 122, 48, -86, 74, -29, 54, -40, -14, 71, -53, -41, 7, -23, -110, 45, -7, -121, 106, 28, 92, 121, 41, -11, -19, -68, -47, -113, 75, 68, -40, -76, -64, 89, 41, -96, 77, 120, -57, -110, 44, -11, 25, 118, -70, -25, -7, -120, -14, -88, 14, 117, -7, 36, -56, -108, -11, 25, -39, -11, -33, 65, 88, 126, -33, 103, 102, -42, -19, -95, 98, -52, -109, 110, 73, -6, -111, -20, 92, -110, 83, -102, 34, -60, -64, 126, -2, 103, 71, 53, -24, -75, 122, -121, 15, 102, 14, 81, 15, 119, 94, 86, -84, -3, 71, -98, -99, -87, -92, 62, 13, -88, -96, 106, 54, -100, -52, 55, 92, 54, -64, -6, 18, -58, 109, 40, -60, -43, 58, -77, 116, -2, -3, -70, -70, -34, -75, -1, -15, 114, 91, -105};
    tmp_tmp_msg_0_0.md5.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.382283953022);
    msg.setSource(39748U);
    msg.setSourceEntity(143U);
    msg.setDestination(44976U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.979750019882);
    msg.setSource(28679U);
    msg.setSourceEntity(47U);
    msg.setDestination(863U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.210284499347);
    msg.setSource(11933U);
    msg.setSourceEntity(137U);
    msg.setDestination(32088U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.110697709438);
    msg.setSource(11324U);
    msg.setSourceEntity(209U);
    msg.setDestination(8198U);
    msg.setDestinationEntity(74U);
    msg.list.assign("QVKSETXNTRXIJPAJRDGQMSIBNQN");

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
    msg.setTimeStamp(0.897645697405);
    msg.setSource(23478U);
    msg.setSourceEntity(162U);
    msg.setDestination(52805U);
    msg.setDestinationEntity(196U);
    msg.list.assign("UNXXEZROWUTJMHJEIHIGQLVAIPSVFDFLUVBQLLGCXBFTYMNLTBZBSGDFYGQAVHICTMWUTSKLVUHZSKZTTXOIMIVUTCRSWREOYLOHPADWECNBWRQKAZCOIVXJIHURGQAYJDENZZPQGRXURHYGNIMNEFPPA");

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
    msg.setTimeStamp(0.502098101465);
    msg.setSource(8614U);
    msg.setSourceEntity(245U);
    msg.setDestination(45491U);
    msg.setDestinationEntity(70U);
    msg.list.assign("SJJQMEPEVTUATOHMNXFBNYZMGVZXFFIFHBPJHRRHAPCKLAFQPUJPDTICHZASIXWYPDXERANONTLLKBFSWQOAIYSCIYQXUSSPAGVIUTAAOWWDNIGSLHVDOCHERVQUXQLJKYGKKZFBDGGUMKGPNJLTPCLEMZRNXWNIGEYEORTWDGKBRXVRSMEHMJZHLJWGUIRWUNZCDTBCHBMOXRX");

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
    msg.setTimeStamp(0.157913570399);
    msg.setSource(28888U);
    msg.setSourceEntity(107U);
    msg.setDestination(24026U);
    msg.setDestinationEntity(25U);
    msg.peer.assign("XSPYLGFAQJHSJ");
    msg.rssi = 0.664595544586;
    msg.integrity = 21588U;

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
    msg.setTimeStamp(0.35752546982);
    msg.setSource(46378U);
    msg.setSourceEntity(208U);
    msg.setDestination(57183U);
    msg.setDestinationEntity(236U);
    msg.peer.assign("PQPIQBGQQSNWIAJCGMKMSHWKGCYKPBHQUOMCMIVZXYKVYZJEUXZFTURFTGMMNWTFLKOXCPGZTTVQUEDRSUNJXCEBVSPSOBADEFIFLDVVHWTPIWMICLAATVCUTFAODGQXACCEQHYBDFHYILJQXKRWZRVJRZLGVLBONSLJUXEBSLDHYOLIPAKUZPJOKEJZSXNDLJABNRMZUIHDANVZXMBMRUPGFXYRYRJFSPYDQTHENKHOFHONSYGWCDEWNK");
    msg.rssi = 0.0611256747959;
    msg.integrity = 49365U;

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
    msg.setTimeStamp(0.795598688327);
    msg.setSource(43566U);
    msg.setSourceEntity(87U);
    msg.setDestination(1996U);
    msg.setDestinationEntity(152U);
    msg.peer.assign("LMKASTSFPAURISRCPLESZTWEICVVHJHMCQVBGRTCJLYYRBFJYIOARVDLNNAOTJSKJELOWDUDZMYSKWOMAMMYCTABNCNQPFGXAXJVGUQVENGQZDTUZPIHFJMNCVRIOXHBEUWMWVWUEXQHQKXPZNZYBFZWMBQYJTKGMWZOBVIUIGEXXTOPIOSBJXNPURDXWPDRWFAOBNPTYBSHQHDGLSLFOPHLCIZQSHILKJGRFCFAHXCEKEZGULGKTY");
    msg.rssi = 0.100430678604;
    msg.integrity = 6798U;

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
    msg.setTimeStamp(0.0824208682885);
    msg.setSource(23633U);
    msg.setSourceEntity(127U);
    msg.setDestination(28978U);
    msg.setDestinationEntity(253U);
    msg.value = 16544;

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
    msg.setTimeStamp(0.405146622329);
    msg.setSource(45625U);
    msg.setSourceEntity(79U);
    msg.setDestination(16157U);
    msg.setDestinationEntity(232U);
    msg.value = -15827;

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
    msg.setTimeStamp(0.371814646882);
    msg.setSource(40817U);
    msg.setSourceEntity(93U);
    msg.setDestination(61411U);
    msg.setDestinationEntity(107U);
    msg.value = 9398;

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
    msg.setTimeStamp(0.92442575001);
    msg.setSource(58470U);
    msg.setSourceEntity(142U);
    msg.setDestination(10767U);
    msg.setDestinationEntity(114U);
    msg.value = 0.730956691611;

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
    msg.setTimeStamp(0.943830931183);
    msg.setSource(64533U);
    msg.setSourceEntity(48U);
    msg.setDestination(6788U);
    msg.setDestinationEntity(71U);
    msg.value = 0.221316060774;

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
    msg.setTimeStamp(0.317737014568);
    msg.setSource(51977U);
    msg.setSourceEntity(199U);
    msg.setDestination(15038U);
    msg.setDestinationEntity(6U);
    msg.value = 0.0570106538662;

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
    msg.setTimeStamp(0.92853518548);
    msg.setSource(46735U);
    msg.setSourceEntity(151U);
    msg.setDestination(1525U);
    msg.setDestinationEntity(181U);
    msg.value = 0.486159342319;

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
    msg.setTimeStamp(0.756147509493);
    msg.setSource(12553U);
    msg.setSourceEntity(74U);
    msg.setDestination(1626U);
    msg.setDestinationEntity(98U);
    msg.value = 0.716187943447;

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
    msg.setTimeStamp(0.638343315803);
    msg.setSource(1263U);
    msg.setSourceEntity(15U);
    msg.setDestination(46210U);
    msg.setDestinationEntity(183U);
    msg.value = 0.725893369284;

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
    msg.setTimeStamp(0.673450102934);
    msg.setSource(6197U);
    msg.setSourceEntity(143U);
    msg.setDestination(58217U);
    msg.setDestinationEntity(35U);
    msg.validity = 51947U;
    msg.type = 27U;
    msg.utc_year = 37821U;
    msg.utc_month = 127U;
    msg.utc_day = 178U;
    msg.utc_time = 0.721700150991;
    msg.lat = 0.542867102875;
    msg.lon = 0.222221478473;
    msg.height = 0.148459477361;
    msg.satellites = 72U;
    msg.cog = 0.259248447213;
    msg.sog = 0.385390474401;
    msg.hdop = 0.137516852626;
    msg.vdop = 0.0626788788615;
    msg.hacc = 0.907382365836;
    msg.vacc = 0.855462909562;

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
    msg.setTimeStamp(0.0111907589603);
    msg.setSource(63915U);
    msg.setSourceEntity(91U);
    msg.setDestination(54863U);
    msg.setDestinationEntity(201U);
    msg.validity = 9753U;
    msg.type = 29U;
    msg.utc_year = 55924U;
    msg.utc_month = 129U;
    msg.utc_day = 38U;
    msg.utc_time = 0.322635877534;
    msg.lat = 0.732495244519;
    msg.lon = 0.293001970537;
    msg.height = 0.623978276465;
    msg.satellites = 36U;
    msg.cog = 0.687322225443;
    msg.sog = 0.859576764988;
    msg.hdop = 0.840656084501;
    msg.vdop = 0.0455819143026;
    msg.hacc = 0.177741132728;
    msg.vacc = 0.172727070299;

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
    msg.setTimeStamp(0.0381440450099);
    msg.setSource(58536U);
    msg.setSourceEntity(11U);
    msg.setDestination(25129U);
    msg.setDestinationEntity(221U);
    msg.validity = 33650U;
    msg.type = 4U;
    msg.utc_year = 5435U;
    msg.utc_month = 206U;
    msg.utc_day = 166U;
    msg.utc_time = 0.403471634871;
    msg.lat = 0.739082026118;
    msg.lon = 0.146077570042;
    msg.height = 0.0509813758331;
    msg.satellites = 195U;
    msg.cog = 0.776344161894;
    msg.sog = 0.893359596639;
    msg.hdop = 0.830546278845;
    msg.vdop = 0.725108008413;
    msg.hacc = 0.785148135447;
    msg.vacc = 0.871063722471;

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
    msg.setTimeStamp(0.0623817666968);
    msg.setSource(12009U);
    msg.setSourceEntity(110U);
    msg.setDestination(41981U);
    msg.setDestinationEntity(231U);
    msg.time = 0.194773842509;
    msg.phi = 0.401229699011;
    msg.theta = 0.275966752695;
    msg.psi = 0.97056849238;
    msg.psi_magnetic = 0.830301883947;

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
    msg.setTimeStamp(0.951002945732);
    msg.setSource(48875U);
    msg.setSourceEntity(242U);
    msg.setDestination(39536U);
    msg.setDestinationEntity(174U);
    msg.time = 0.779280529947;
    msg.phi = 0.315173308007;
    msg.theta = 0.498665730228;
    msg.psi = 0.493350742088;
    msg.psi_magnetic = 0.313154895382;

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
    msg.setTimeStamp(0.80121123452);
    msg.setSource(40820U);
    msg.setSourceEntity(186U);
    msg.setDestination(7414U);
    msg.setDestinationEntity(174U);
    msg.time = 0.232586080742;
    msg.phi = 0.846332169181;
    msg.theta = 0.979538962681;
    msg.psi = 0.615312386575;
    msg.psi_magnetic = 0.58729042432;

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
    msg.setTimeStamp(0.636036902529);
    msg.setSource(57741U);
    msg.setSourceEntity(218U);
    msg.setDestination(3336U);
    msg.setDestinationEntity(187U);
    msg.time = 0.441702577977;
    msg.x = 0.259426496688;
    msg.y = 0.763185626179;
    msg.z = 0.045608231744;
    msg.timestep = 0.222933467455;

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
    msg.setTimeStamp(0.432085781512);
    msg.setSource(3473U);
    msg.setSourceEntity(168U);
    msg.setDestination(45428U);
    msg.setDestinationEntity(204U);
    msg.time = 0.861436661183;
    msg.x = 0.552491384747;
    msg.y = 0.530218454414;
    msg.z = 0.680856476259;
    msg.timestep = 0.626338517185;

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
    msg.setTimeStamp(0.330342510245);
    msg.setSource(2675U);
    msg.setSourceEntity(231U);
    msg.setDestination(21705U);
    msg.setDestinationEntity(13U);
    msg.time = 0.451991944954;
    msg.x = 0.811907217969;
    msg.y = 0.159212589945;
    msg.z = 0.157624746657;
    msg.timestep = 0.360571984472;

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
    msg.setTimeStamp(0.218285404943);
    msg.setSource(53020U);
    msg.setSourceEntity(34U);
    msg.setDestination(56890U);
    msg.setDestinationEntity(70U);
    msg.time = 0.843355431059;
    msg.x = 0.891242634064;
    msg.y = 0.416436942434;
    msg.z = 0.682448523808;

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
    msg.setTimeStamp(0.440398335459);
    msg.setSource(58602U);
    msg.setSourceEntity(98U);
    msg.setDestination(53207U);
    msg.setDestinationEntity(133U);
    msg.time = 0.780334472643;
    msg.x = 0.89540260531;
    msg.y = 0.74775374209;
    msg.z = 0.879137093303;

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
    msg.setTimeStamp(0.0638084911593);
    msg.setSource(54707U);
    msg.setSourceEntity(250U);
    msg.setDestination(1733U);
    msg.setDestinationEntity(248U);
    msg.time = 0.304247813301;
    msg.x = 0.441423911196;
    msg.y = 0.229897670517;
    msg.z = 0.138616846119;

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
    msg.setTimeStamp(0.435389729889);
    msg.setSource(47217U);
    msg.setSourceEntity(40U);
    msg.setDestination(40290U);
    msg.setDestinationEntity(27U);
    msg.time = 0.167281032018;
    msg.x = 0.700153286685;
    msg.y = 0.914048981526;
    msg.z = 0.227306102384;

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
    msg.setTimeStamp(0.676257976056);
    msg.setSource(1345U);
    msg.setSourceEntity(81U);
    msg.setDestination(35112U);
    msg.setDestinationEntity(145U);
    msg.time = 0.876952173108;
    msg.x = 0.867714412519;
    msg.y = 0.387680145361;
    msg.z = 0.993414195808;

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
    msg.setTimeStamp(0.675215295108);
    msg.setSource(36390U);
    msg.setSourceEntity(220U);
    msg.setDestination(53251U);
    msg.setDestinationEntity(187U);
    msg.time = 0.880306120693;
    msg.x = 0.0926635736672;
    msg.y = 0.953600598217;
    msg.z = 0.758619772152;

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
    msg.setTimeStamp(0.0259514177252);
    msg.setSource(11125U);
    msg.setSourceEntity(48U);
    msg.setDestination(20170U);
    msg.setDestinationEntity(105U);
    msg.time = 0.436873140555;
    msg.x = 0.620622773367;
    msg.y = 0.27124522979;
    msg.z = 0.251691042949;

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
    msg.setTimeStamp(0.052984194081);
    msg.setSource(45135U);
    msg.setSourceEntity(212U);
    msg.setDestination(13151U);
    msg.setDestinationEntity(156U);
    msg.time = 0.955601129306;
    msg.x = 0.43510485818;
    msg.y = 0.0943156355136;
    msg.z = 0.49718784821;

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
    msg.setTimeStamp(0.76154997708);
    msg.setSource(29480U);
    msg.setSourceEntity(228U);
    msg.setDestination(26203U);
    msg.setDestinationEntity(229U);
    msg.time = 0.270189390753;
    msg.x = 0.884160295574;
    msg.y = 0.216179406278;
    msg.z = 0.216322042629;

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
    msg.setTimeStamp(0.371356543904);
    msg.setSource(3176U);
    msg.setSourceEntity(87U);
    msg.setDestination(1606U);
    msg.setDestinationEntity(228U);
    msg.validity = 122U;
    msg.x = 0.0768058451813;
    msg.y = 0.675856175513;
    msg.z = 0.229191605068;

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
    msg.setTimeStamp(0.307025458206);
    msg.setSource(41510U);
    msg.setSourceEntity(14U);
    msg.setDestination(19440U);
    msg.setDestinationEntity(74U);
    msg.validity = 17U;
    msg.x = 0.575221618321;
    msg.y = 0.822034776553;
    msg.z = 0.254089919668;

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
    msg.setTimeStamp(0.837678901673);
    msg.setSource(43207U);
    msg.setSourceEntity(37U);
    msg.setDestination(23029U);
    msg.setDestinationEntity(186U);
    msg.validity = 154U;
    msg.x = 0.409570315737;
    msg.y = 0.142665632884;
    msg.z = 0.454428323502;

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
    msg.setTimeStamp(0.928591713425);
    msg.setSource(32722U);
    msg.setSourceEntity(253U);
    msg.setDestination(37701U);
    msg.setDestinationEntity(121U);
    msg.validity = 36U;
    msg.x = 0.115896191466;
    msg.y = 0.706818071433;
    msg.z = 0.526083290067;

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
    msg.setTimeStamp(0.454117725215);
    msg.setSource(47868U);
    msg.setSourceEntity(204U);
    msg.setDestination(60002U);
    msg.setDestinationEntity(106U);
    msg.validity = 194U;
    msg.x = 0.141364946913;
    msg.y = 0.565666984097;
    msg.z = 0.752106504771;

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
    msg.setTimeStamp(0.298574224466);
    msg.setSource(21431U);
    msg.setSourceEntity(7U);
    msg.setDestination(33673U);
    msg.setDestinationEntity(163U);
    msg.validity = 165U;
    msg.x = 0.756924255747;
    msg.y = 0.796926518405;
    msg.z = 0.537197761633;

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
    msg.setTimeStamp(0.291231031101);
    msg.setSource(929U);
    msg.setSourceEntity(148U);
    msg.setDestination(59116U);
    msg.setDestinationEntity(188U);
    msg.time = 0.636855128016;
    msg.x = 0.961649541739;
    msg.y = 0.327543993806;
    msg.z = 0.269939565934;

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
    msg.setTimeStamp(0.140589993528);
    msg.setSource(33722U);
    msg.setSourceEntity(14U);
    msg.setDestination(12829U);
    msg.setDestinationEntity(21U);
    msg.time = 0.891892544291;
    msg.x = 0.0498201521661;
    msg.y = 0.360207171653;
    msg.z = 0.243032520156;

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
    msg.setTimeStamp(0.577460614423);
    msg.setSource(58598U);
    msg.setSourceEntity(135U);
    msg.setDestination(40519U);
    msg.setDestinationEntity(169U);
    msg.time = 0.235202492446;
    msg.x = 0.854103536831;
    msg.y = 0.288004925962;
    msg.z = 0.964118232113;

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
    msg.setTimeStamp(0.89077441627);
    msg.setSource(36815U);
    msg.setSourceEntity(170U);
    msg.setDestination(27896U);
    msg.setDestinationEntity(150U);
    msg.validity = 192U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8887576735;
    tmp_msg_0.y = 0.570570764852;
    tmp_msg_0.z = 0.12857372682;
    tmp_msg_0.phi = 0.19796419613;
    tmp_msg_0.theta = 0.783429939085;
    tmp_msg_0.psi = 0.630185876927;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.839055380722;

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
    msg.setTimeStamp(0.0993411491971);
    msg.setSource(26792U);
    msg.setSourceEntity(38U);
    msg.setDestination(25316U);
    msg.setDestinationEntity(164U);
    msg.validity = 113U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.801326272466;
    tmp_msg_0.y = 0.898823735228;
    tmp_msg_0.z = 0.897099647485;
    tmp_msg_0.phi = 0.574074202739;
    tmp_msg_0.theta = 0.0564592928689;
    tmp_msg_0.psi = 0.405443868565;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.215552174924;

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
    msg.setTimeStamp(0.700048402161);
    msg.setSource(9460U);
    msg.setSourceEntity(155U);
    msg.setDestination(37803U);
    msg.setDestinationEntity(99U);
    msg.validity = 23U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.152674253926;
    tmp_msg_0.y = 0.920565666212;
    tmp_msg_0.z = 0.575682289985;
    tmp_msg_0.phi = 0.431667859908;
    tmp_msg_0.theta = 0.638345270747;
    tmp_msg_0.psi = 0.556530588745;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.392150835641;

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
    msg.setTimeStamp(0.316370213115);
    msg.setSource(51U);
    msg.setSourceEntity(164U);
    msg.setDestination(18918U);
    msg.setDestinationEntity(86U);
    msg.value = 0.19690952127;

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
    msg.setTimeStamp(0.555140357488);
    msg.setSource(13325U);
    msg.setSourceEntity(117U);
    msg.setDestination(47550U);
    msg.setDestinationEntity(197U);
    msg.value = 0.320976478646;

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
    msg.setTimeStamp(0.677559734955);
    msg.setSource(48015U);
    msg.setSourceEntity(79U);
    msg.setDestination(64066U);
    msg.setDestinationEntity(60U);
    msg.value = 0.942233326711;

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
    msg.setTimeStamp(0.922530451993);
    msg.setSource(19323U);
    msg.setSourceEntity(27U);
    msg.setDestination(841U);
    msg.setDestinationEntity(112U);
    msg.value = 0.768437917843;

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
    msg.setTimeStamp(0.123415549041);
    msg.setSource(40356U);
    msg.setSourceEntity(252U);
    msg.setDestination(55509U);
    msg.setDestinationEntity(144U);
    msg.value = 0.126806488052;

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
    msg.setTimeStamp(0.646546458381);
    msg.setSource(13193U);
    msg.setSourceEntity(223U);
    msg.setDestination(54073U);
    msg.setDestinationEntity(201U);
    msg.value = 0.756010318637;

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
    msg.setTimeStamp(0.342711752089);
    msg.setSource(29594U);
    msg.setSourceEntity(129U);
    msg.setDestination(57612U);
    msg.setDestinationEntity(192U);
    msg.value = 0.22169050527;

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
    msg.setTimeStamp(0.517358780812);
    msg.setSource(36724U);
    msg.setSourceEntity(132U);
    msg.setDestination(45U);
    msg.setDestinationEntity(224U);
    msg.value = 0.547686776735;

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
    msg.setTimeStamp(0.472688686221);
    msg.setSource(37287U);
    msg.setSourceEntity(64U);
    msg.setDestination(48799U);
    msg.setDestinationEntity(177U);
    msg.value = 0.296631164525;

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
    msg.setTimeStamp(0.772817500575);
    msg.setSource(5421U);
    msg.setSourceEntity(223U);
    msg.setDestination(1590U);
    msg.setDestinationEntity(233U);
    msg.value = 0.807910352552;

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
    msg.setTimeStamp(0.293658571772);
    msg.setSource(48542U);
    msg.setSourceEntity(254U);
    msg.setDestination(31912U);
    msg.setDestinationEntity(60U);
    msg.value = 0.592531024462;

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
    msg.setTimeStamp(0.675473857813);
    msg.setSource(2536U);
    msg.setSourceEntity(234U);
    msg.setDestination(20800U);
    msg.setDestinationEntity(228U);
    msg.value = 0.0166413474601;

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
    msg.setTimeStamp(0.468092531401);
    msg.setSource(41282U);
    msg.setSourceEntity(147U);
    msg.setDestination(46863U);
    msg.setDestinationEntity(133U);
    msg.value = 0.421699563492;

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
    msg.setTimeStamp(0.236687682164);
    msg.setSource(30710U);
    msg.setSourceEntity(145U);
    msg.setDestination(47756U);
    msg.setDestinationEntity(10U);
    msg.value = 0.40075803895;

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
    msg.setTimeStamp(0.962900505307);
    msg.setSource(36246U);
    msg.setSourceEntity(250U);
    msg.setDestination(43455U);
    msg.setDestinationEntity(113U);
    msg.value = 0.720722405527;

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
    msg.setTimeStamp(0.442037459227);
    msg.setSource(43754U);
    msg.setSourceEntity(178U);
    msg.setDestination(64223U);
    msg.setDestinationEntity(153U);
    msg.value = 0.493859719932;

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
    msg.setTimeStamp(0.848280801829);
    msg.setSource(30221U);
    msg.setSourceEntity(87U);
    msg.setDestination(23385U);
    msg.setDestinationEntity(112U);
    msg.value = 0.562808001307;

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
    msg.setTimeStamp(0.12658601851);
    msg.setSource(9303U);
    msg.setSourceEntity(64U);
    msg.setDestination(18879U);
    msg.setDestinationEntity(84U);
    msg.value = 0.589302492607;

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
    msg.setTimeStamp(0.386654251341);
    msg.setSource(11657U);
    msg.setSourceEntity(225U);
    msg.setDestination(12377U);
    msg.setDestinationEntity(50U);
    msg.value = 0.459090161386;

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
    msg.setTimeStamp(0.571043801575);
    msg.setSource(4956U);
    msg.setSourceEntity(106U);
    msg.setDestination(57895U);
    msg.setDestinationEntity(124U);
    msg.value = 0.372178542565;

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
    msg.setTimeStamp(0.067332212291);
    msg.setSource(41583U);
    msg.setSourceEntity(233U);
    msg.setDestination(18266U);
    msg.setDestinationEntity(250U);
    msg.value = 0.89850015861;

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
    msg.setTimeStamp(0.646322030497);
    msg.setSource(22182U);
    msg.setSourceEntity(16U);
    msg.setDestination(35203U);
    msg.setDestinationEntity(141U);
    msg.value = 0.121641413796;

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
    msg.setTimeStamp(0.0142468042417);
    msg.setSource(55627U);
    msg.setSourceEntity(167U);
    msg.setDestination(3619U);
    msg.setDestinationEntity(0U);
    msg.value = 0.153824240846;

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
    msg.setTimeStamp(0.0689170270549);
    msg.setSource(10315U);
    msg.setSourceEntity(225U);
    msg.setDestination(18085U);
    msg.setDestinationEntity(43U);
    msg.value = 0.836562647957;

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
    msg.setTimeStamp(0.674474505141);
    msg.setSource(34600U);
    msg.setSourceEntity(69U);
    msg.setDestination(43392U);
    msg.setDestinationEntity(253U);
    msg.direction = 0.0509240098844;
    msg.speed = 0.0478302277816;
    msg.turbulence = 0.385269558748;

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
    msg.setTimeStamp(0.92272702699);
    msg.setSource(21202U);
    msg.setSourceEntity(94U);
    msg.setDestination(23057U);
    msg.setDestinationEntity(198U);
    msg.direction = 0.883429111177;
    msg.speed = 0.98875503995;
    msg.turbulence = 0.992684007064;

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
    msg.setTimeStamp(0.159411997232);
    msg.setSource(17261U);
    msg.setSourceEntity(77U);
    msg.setDestination(49656U);
    msg.setDestinationEntity(24U);
    msg.direction = 0.807086926805;
    msg.speed = 0.385840436289;
    msg.turbulence = 0.819779111785;

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
    msg.setTimeStamp(0.149166418256);
    msg.setSource(52554U);
    msg.setSourceEntity(131U);
    msg.setDestination(48912U);
    msg.setDestinationEntity(6U);
    msg.value = 0.000200188096381;

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
    msg.setTimeStamp(0.904622844764);
    msg.setSource(60777U);
    msg.setSourceEntity(81U);
    msg.setDestination(52374U);
    msg.setDestinationEntity(43U);
    msg.value = 0.204312965673;

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
    msg.setTimeStamp(0.680967255866);
    msg.setSource(7223U);
    msg.setSourceEntity(6U);
    msg.setDestination(54836U);
    msg.setDestinationEntity(217U);
    msg.value = 0.678946629801;

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
    msg.setTimeStamp(0.570116571217);
    msg.setSource(13533U);
    msg.setSourceEntity(111U);
    msg.setDestination(4053U);
    msg.setDestinationEntity(221U);
    msg.value.assign("RJBGXOEOUAQPJRTXYWCPDIHPRNUCXCVOFSFWWTOMQXWBYPSHMMYAHBNQZTSFKXEXOWDGLT");

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
    msg.setTimeStamp(0.385140246012);
    msg.setSource(41393U);
    msg.setSourceEntity(173U);
    msg.setDestination(27208U);
    msg.setDestinationEntity(200U);
    msg.value.assign("XWHANMFVEPEHWNXKZINCLMJDESIZQRYOJAYARQTANGIBDFORLIVMRQIPLUUBTFXSXVBKJCCGDQHPXNKWQJMPMGTCGTUZHEGGYOARPCEHSWBSPOKENDBIVNLTNDGFGZIPOFHVVAVCYIJERPYYTZRZZJLFBGLGJESXAWXCTBQJMLLTOHVUUDKKFRRSCNED");

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
    msg.setTimeStamp(0.740431753686);
    msg.setSource(27951U);
    msg.setSourceEntity(115U);
    msg.setDestination(42946U);
    msg.setDestinationEntity(52U);
    msg.value.assign("BBCLMALXPGYDDOZHAWRVMIFBPKHRUTWZXCYVCCIGTGPUPWNFPGEVMJJMYEBDFDSUHXKXEJQNGWXYWASAEZIMVYCHEFRTUOIXQBROSDKYSNISWZBYFPFGDHUIANCVSKQLJHFKEUSAFLVDKAJQZNGWNBDGVOLMZQWKEXZCTBSKKRJCEDILRZRQFAQHOAVAMJFMGOZLPHQBTXXTIUEIURY");

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
    msg.setTimeStamp(0.548581951641);
    msg.setSource(22323U);
    msg.setSourceEntity(229U);
    msg.setDestination(53872U);
    msg.setDestinationEntity(198U);
    const char tmp_msg_0[] = {-77, 15, -12, -38, 43, -101, 79, 112, -74, -45, 58, 23, 19, 74, -5, -33, 78, -61, -118, -82, -46, 126, -106, -91, -82, -54, -89, -77, -46, 7, -48, -76, 94, -52, 17, 115, -79, 92, -91, -66, 78, 106, 84, 97, 20, -102, -97, 26, -19, 78, 113, -93, -79, 86, 25, 24, 93, -90, 7, -98, 48, 104, -31, 68, 11, -16, 11, 52, 106, 7, 29, 9, 59, 40, 116, 100, -14, 7, 51, 39, -78, 47, 27, 34, 48, -125, 100, 85, 14, 97, -100, 58, 119, -120, -52, 34, 40, -30, 54, -37, 68, 82, -41, -115, -1, 53, 34, 94, 113, 16, 85, 44, 75, -30, 98, -17, 92, 111, -63, -127, -5, -55, 113, 50, 114, 86, 73, 104, 39, -2, 56, 37, -116, -59, 50, -21, -105, 55, 88, -48, -113, -106, 55, 68, -29, 46, -76, -115, 100, -116, -61, -85, -23, -13, 65, -63, 75, 17, 4, 18, -47, 77, -49, -21, -64, -104, -51, 79, -23, -106, -113, -32, -102, -4, 108, 44, 27, 51, 126, 89, 69, 48, 20, -65, -22, 105, 10, -11, -81, 16, -42, -93, -106, 24, 26, -106, 52, -19, 22, 77, 98, 90, -1, -45, -14, 4, -101, 103, 33, 88, 3, 109, -113, -57, -66, 115, -13, -118, 0, -85, -44, 0, -109, -37, 113, 41, 100, 100, -74, -62, -106, 97, 17, 60, -57, 110, -117, -59, 4, -43, -124, -67, 119, -57, 16};
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
    msg.setTimeStamp(0.338394314485);
    msg.setSource(31103U);
    msg.setSourceEntity(227U);
    msg.setDestination(12655U);
    msg.setDestinationEntity(159U);
    const char tmp_msg_0[] = {-21, -20, -38, 18, 35, 81, -60, -92, 97, 65, 100, 83, -125, -4, -117, 46, 69, 21, 48, 89, 67, -41, -105, 31, -116, 81, 118, 78, 112, 103, -124, 80, 116, 26, -92, -93, 94, 53, -118, -122, 31, 24, 105, 117, 23, 23, 5, -33, -65, 38, 57, -108, -66, 92, 61, 75, 108, -38, -114, -18, -5, 110, 98, -15, 98, 90, -46, -64, 123, 4, 15, 5, -86, 111, -127, 126, -3, -7, -7, 7, 26, -2, 66, -72, 6, -107, -115, 18, 27, -78, -72, 96, 49, -82, -21, 44, -98, 101, 19, -12, 117, -11, -89, 64, 103, 63, -65, -88, 6, -100, -15, -70, 103, 113, 89, -33, -76, 109, -80, 43, 107, 104, -32, 126, -22, -72, 120, -107, 14, 47, -100, 94, 46, -73, 120, 74, -14, -34, 102, 7, 52, -77, -14, 46, -24, -45, 4, 86, 85, 73, -119, 111, 59, -68, -68, -44, -3, 109, -100, -95, -72, 34, -126, -98, 28, -12, -17, -74, 23, -83, 13, -123, -45, 55, 43, -2, 65, -93, 38, 73, 108, 109, -5, -44, 54, -49, -16, 86, -69, 9, -30, 52, 70, 76, -45, -61, -83, 33, -119, -122, 76, -37, -102, 18, -121, 11, -82, -120, -39, 57, 92, 69, 118, -60, 106, -26, -99, -33, -11, 103, -34, -71, 109, -122, 13, -23, -110, 88, 116, 19, -126, 82, 11, 32, 51, -11, -53, 74, 4, -87, -82, -81};
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
    msg.setTimeStamp(0.592924412845);
    msg.setSource(29670U);
    msg.setSourceEntity(43U);
    msg.setDestination(55103U);
    msg.setDestinationEntity(24U);
    const char tmp_msg_0[] = {97, 70, -56, -74, 37, -15, -117, 15, -79, -85, -20, -95, -21, -2, -109, 97, -101, -94, 35, 26, -42, -120, 60, 36, 80, 45, 121, 57, 78, -77, 56, -122, -4, -79, 105, 112, 23, -80, 36, 80, 109, 60, 46, -92, -111};
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
    msg.setTimeStamp(0.849290500435);
    msg.setSource(9724U);
    msg.setSourceEntity(18U);
    msg.setDestination(35643U);
    msg.setDestinationEntity(23U);
    msg.type = 202U;
    msg.frequency = 1215723401U;
    msg.min_range = 6838U;
    msg.max_range = 44880U;
    msg.bits_per_point = 122U;
    msg.scale_factor = 0.873096620628;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.811449227129;
    tmp_msg_0.beam_height = 0.415779630002;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {123, -85, 93, 88, 69, 74, 126, -72, 28, 3, 76, -92, -112, 112, 121, -65, -76, -63, 63, -59, -97, 9, 77, -115, -59, 63, 39, -66, -1, -80, 35, -113, 47, -26, -63, -48, -23, -116, -44, 111, 43, -125, 77, 119, -107, 10, -21, -127, 90, -23, 4, -66, -81, 49, -68, 15, -31, 30, -92, 86, -66, -61, -24, -56, 60, 50, -104, 40, 80, -5, 14, -50};
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
    msg.setTimeStamp(0.0188012836311);
    msg.setSource(5068U);
    msg.setSourceEntity(164U);
    msg.setDestination(40516U);
    msg.setDestinationEntity(125U);
    msg.type = 55U;
    msg.frequency = 1072050470U;
    msg.min_range = 32537U;
    msg.max_range = 64456U;
    msg.bits_per_point = 33U;
    msg.scale_factor = 0.416856712886;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.603780313294;
    tmp_msg_0.beam_height = 0.504414869938;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {28, -14, -104, -22, -24, -30, -48, -34, 94, 81, 106, -82, -30, -74, 53, -95, 47, -13, 95, 66, -44, -29, 15, -52, 109, 15, 88, -108, -121, 95, 38, -121, 80, -38, -30, -93, -114, -105, 98, 14, -59, -105, -80, -10, -75, 9, 42, -44, -104, -81, -56, 121, 7, -6, -26, -35, -118, -34, -127, -33, 63, -2, 94, 84, -63, 24, -97, 0, -83, -73, 72, -19, 85};
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
    msg.setTimeStamp(0.29654698392);
    msg.setSource(51582U);
    msg.setSourceEntity(63U);
    msg.setDestination(60648U);
    msg.setDestinationEntity(155U);
    msg.type = 37U;
    msg.frequency = 1035265894U;
    msg.min_range = 3735U;
    msg.max_range = 48285U;
    msg.bits_per_point = 92U;
    msg.scale_factor = 0.303603201127;
    const char tmp_msg_0[] = {-54, -128, -23, 96, -58, 31, -65, -72, 117, 87, -80, 27, 76, -19, -44, 43, -108, 88, -82, -22, -87, 105, 118, 106, 8, -69, 57, -62, 18, -105, 26, 13, -98, 45, 51, -2, 5, 25, 17, 56, 65, 47, 31, 54, 11, -34, 39, 30, -57, -17, 46, -124, -119, 106, -85, -76, -105, 92, -72, 101, 17};
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
    msg.setTimeStamp(0.035201903805);
    msg.setSource(43019U);
    msg.setSourceEntity(246U);
    msg.setDestination(3012U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.494175478408);
    msg.setSource(10837U);
    msg.setSourceEntity(5U);
    msg.setDestination(48617U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.519549518269);
    msg.setSource(51302U);
    msg.setSourceEntity(226U);
    msg.setDestination(33644U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.0123886258064);
    msg.setSource(5312U);
    msg.setSourceEntity(189U);
    msg.setDestination(48112U);
    msg.setDestinationEntity(195U);
    msg.op = 101U;

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
    msg.setTimeStamp(0.795856814953);
    msg.setSource(38893U);
    msg.setSourceEntity(110U);
    msg.setDestination(12064U);
    msg.setDestinationEntity(227U);
    msg.op = 34U;

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
    msg.setTimeStamp(0.441897474356);
    msg.setSource(3732U);
    msg.setSourceEntity(145U);
    msg.setDestination(27599U);
    msg.setDestinationEntity(170U);
    msg.op = 176U;

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
    msg.setTimeStamp(0.659762167012);
    msg.setSource(23497U);
    msg.setSourceEntity(62U);
    msg.setDestination(38920U);
    msg.setDestinationEntity(199U);
    msg.value = 0.880156929143;
    msg.confidence = 0.492606847076;
    msg.opmodes.assign("TOLNRGVXXSGQIHFRJMGCJEXYPCDZMAKLVBVDBYBBPZQASVIVVKEFZRMKHZSQELDPHOYDGFOCMGETWFILEKUQTTHTPZFJWXYWUYZMWFKALXOOOOIXZJHSUDTCLNRJDNDBNWNXKOAZBEXBACTNLCGFGUUAHTUJBQCUAEMELU");

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
    msg.setTimeStamp(0.433296320503);
    msg.setSource(26745U);
    msg.setSourceEntity(106U);
    msg.setDestination(62594U);
    msg.setDestinationEntity(176U);
    msg.value = 0.858167012581;
    msg.confidence = 0.206217284092;
    msg.opmodes.assign("YAULITQHLDTTDXMSUMRPBGHFSRBLVLNWDFKLEALXJZNVAJXYMNKOFQXHZNPYCPYBLQKSVUMBODINVZZYGKQLGCJAUWHJARHQFERKPOIURXOBXYBONOHZPIVGWAFSAGPGCVUGCONZJRBWTVOHYEDAETFSTWWUFJCWPYCEQMICIOLEKYNKJPGHBENDUDMIJMCXSAFQJMZFSISZEKVMZRIOXRFDHKBDGHLRWVZQTVRKSQYCPWXT");

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
    msg.setTimeStamp(0.734252334766);
    msg.setSource(40187U);
    msg.setSourceEntity(79U);
    msg.setDestination(26601U);
    msg.setDestinationEntity(35U);
    msg.value = 0.958757760902;
    msg.confidence = 0.524285646991;
    msg.opmodes.assign("NPNWOKTBKDYWBJAKJHZTDGOKRVOUUYDEPZMWIZFXHGXFGEKVXRAKMECPYCKSXUEFDLMSHWBCBJGFQDDJTLEWASLIOYFDLQWHGVBURTZRQACRXGQWUVSBNMSJQTJWZPONG");

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
    msg.setTimeStamp(0.0114435701611);
    msg.setSource(6372U);
    msg.setSourceEntity(46U);
    msg.setDestination(52445U);
    msg.setDestinationEntity(169U);
    msg.itow = 3832049566U;
    msg.lat = 0.510530992725;
    msg.lon = 0.42176193685;
    msg.height_ell = 0.194567163197;
    msg.height_sea = 0.20829345997;
    msg.hacc = 0.347671644554;
    msg.vacc = 0.421103380111;
    msg.vel_n = 0.753463890038;
    msg.vel_e = 0.926768027687;
    msg.vel_d = 0.413992000353;
    msg.speed = 0.936465306246;
    msg.gspeed = 0.574577761483;
    msg.heading = 0.352794935462;
    msg.sacc = 0.325049097835;
    msg.cacc = 0.727355283388;

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
    msg.setTimeStamp(0.121952198986);
    msg.setSource(2798U);
    msg.setSourceEntity(201U);
    msg.setDestination(64827U);
    msg.setDestinationEntity(18U);
    msg.itow = 1658483085U;
    msg.lat = 0.121860697971;
    msg.lon = 0.730491188465;
    msg.height_ell = 0.712631354743;
    msg.height_sea = 0.135513791913;
    msg.hacc = 0.492793186698;
    msg.vacc = 0.216460637606;
    msg.vel_n = 0.371179948663;
    msg.vel_e = 0.301100212724;
    msg.vel_d = 0.83091476968;
    msg.speed = 0.589017383771;
    msg.gspeed = 0.0206410343558;
    msg.heading = 0.371299791676;
    msg.sacc = 0.474868468783;
    msg.cacc = 0.636407428556;

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
    msg.setTimeStamp(0.854432288706);
    msg.setSource(19598U);
    msg.setSourceEntity(220U);
    msg.setDestination(32034U);
    msg.setDestinationEntity(95U);
    msg.itow = 1567443774U;
    msg.lat = 0.942034251294;
    msg.lon = 0.658908818136;
    msg.height_ell = 0.733070778573;
    msg.height_sea = 0.953856736948;
    msg.hacc = 0.0184197932146;
    msg.vacc = 0.767676788387;
    msg.vel_n = 0.279029674598;
    msg.vel_e = 0.35839914088;
    msg.vel_d = 0.291863340645;
    msg.speed = 0.855194892549;
    msg.gspeed = 0.407489069165;
    msg.heading = 0.68118712524;
    msg.sacc = 0.0472562729848;
    msg.cacc = 0.389281943368;

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
    msg.setTimeStamp(0.986469859045);
    msg.setSource(26602U);
    msg.setSourceEntity(222U);
    msg.setDestination(19424U);
    msg.setDestinationEntity(190U);
    msg.id = 211U;
    msg.value = 0.161052485909;

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
    msg.setTimeStamp(0.281634375224);
    msg.setSource(48840U);
    msg.setSourceEntity(72U);
    msg.setDestination(5468U);
    msg.setDestinationEntity(41U);
    msg.id = 69U;
    msg.value = 0.0276082172361;

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
    msg.setTimeStamp(0.833262076951);
    msg.setSource(14633U);
    msg.setSourceEntity(156U);
    msg.setDestination(12932U);
    msg.setDestinationEntity(126U);
    msg.id = 250U;
    msg.value = 0.616429861661;

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
    msg.setTimeStamp(0.7649843353);
    msg.setSource(19328U);
    msg.setSourceEntity(229U);
    msg.setDestination(27507U);
    msg.setDestinationEntity(33U);
    msg.x = 0.332540401219;
    msg.y = 0.102941413344;
    msg.z = 0.898602530645;
    msg.phi = 0.808643043735;
    msg.theta = 0.107582249057;
    msg.psi = 0.720483035194;

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
    msg.setTimeStamp(0.352122914707);
    msg.setSource(15916U);
    msg.setSourceEntity(126U);
    msg.setDestination(48124U);
    msg.setDestinationEntity(253U);
    msg.x = 0.957742323787;
    msg.y = 0.080142674935;
    msg.z = 0.313037027283;
    msg.phi = 0.141742048325;
    msg.theta = 0.463937602235;
    msg.psi = 0.258661683683;

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
    msg.setTimeStamp(0.710746289466);
    msg.setSource(13349U);
    msg.setSourceEntity(139U);
    msg.setDestination(25512U);
    msg.setDestinationEntity(79U);
    msg.x = 0.39373794449;
    msg.y = 0.00505318026834;
    msg.z = 0.449133905122;
    msg.phi = 0.111452216965;
    msg.theta = 0.114906009702;
    msg.psi = 0.952534749821;

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
    msg.setTimeStamp(0.922155236233);
    msg.setSource(22994U);
    msg.setSourceEntity(233U);
    msg.setDestination(42094U);
    msg.setDestinationEntity(81U);
    msg.beam_width = 0.72281896961;
    msg.beam_height = 0.113266673823;

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
    msg.setTimeStamp(0.332542378929);
    msg.setSource(3997U);
    msg.setSourceEntity(239U);
    msg.setDestination(538U);
    msg.setDestinationEntity(239U);
    msg.beam_width = 0.183104675102;
    msg.beam_height = 0.352333030406;

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
    msg.setTimeStamp(0.775010619389);
    msg.setSource(18327U);
    msg.setSourceEntity(54U);
    msg.setDestination(12879U);
    msg.setDestinationEntity(33U);
    msg.beam_width = 0.281443359139;
    msg.beam_height = 0.729460855881;

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
    msg.setTimeStamp(0.938569564456);
    msg.setSource(27951U);
    msg.setSourceEntity(214U);
    msg.setDestination(49181U);
    msg.setDestinationEntity(42U);
    msg.sane = 64U;

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
    msg.setTimeStamp(0.0605769164971);
    msg.setSource(14771U);
    msg.setSourceEntity(193U);
    msg.setDestination(18610U);
    msg.setDestinationEntity(234U);
    msg.sane = 35U;

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
    msg.setTimeStamp(0.945661024111);
    msg.setSource(62026U);
    msg.setSourceEntity(129U);
    msg.setDestination(48431U);
    msg.setDestinationEntity(111U);
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
    msg.setTimeStamp(0.982595227969);
    msg.setSource(30504U);
    msg.setSourceEntity(248U);
    msg.setDestination(18866U);
    msg.setDestinationEntity(214U);
    msg.value = 0.817097947474;

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
    msg.setTimeStamp(0.342134320347);
    msg.setSource(3770U);
    msg.setSourceEntity(12U);
    msg.setDestination(38155U);
    msg.setDestinationEntity(199U);
    msg.value = 0.242769446927;

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
    msg.setTimeStamp(0.55630427908);
    msg.setSource(48047U);
    msg.setSourceEntity(190U);
    msg.setDestination(42987U);
    msg.setDestinationEntity(23U);
    msg.value = 0.727423194945;

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
    msg.setTimeStamp(0.279232893627);
    msg.setSource(32093U);
    msg.setSourceEntity(143U);
    msg.setDestination(2091U);
    msg.setDestinationEntity(53U);
    msg.value = 0.0756088178533;

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
    msg.setTimeStamp(0.401331737211);
    msg.setSource(22652U);
    msg.setSourceEntity(185U);
    msg.setDestination(22987U);
    msg.setDestinationEntity(230U);
    msg.value = 0.297331522818;

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
    msg.setTimeStamp(0.439887440879);
    msg.setSource(60654U);
    msg.setSourceEntity(77U);
    msg.setDestination(51715U);
    msg.setDestinationEntity(41U);
    msg.value = 0.0755169974823;

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
    msg.setTimeStamp(0.15692802334);
    msg.setSource(40775U);
    msg.setSourceEntity(33U);
    msg.setDestination(21618U);
    msg.setDestinationEntity(115U);
    msg.value = 0.282959521285;

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
    msg.setTimeStamp(0.96716348011);
    msg.setSource(51341U);
    msg.setSourceEntity(214U);
    msg.setDestination(65387U);
    msg.setDestinationEntity(51U);
    msg.value = 0.806794619748;

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
    msg.setTimeStamp(0.819357217773);
    msg.setSource(11162U);
    msg.setSourceEntity(205U);
    msg.setDestination(21709U);
    msg.setDestinationEntity(12U);
    msg.value = 0.69602904744;

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
    msg.setTimeStamp(0.551903006529);
    msg.setSource(23014U);
    msg.setSourceEntity(175U);
    msg.setDestination(20830U);
    msg.setDestinationEntity(98U);
    msg.value = 0.946358159298;

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
    msg.setTimeStamp(0.521947604815);
    msg.setSource(57365U);
    msg.setSourceEntity(59U);
    msg.setDestination(10027U);
    msg.setDestinationEntity(137U);
    msg.value = 0.704981331665;

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
    msg.setTimeStamp(0.141904324113);
    msg.setSource(6381U);
    msg.setSourceEntity(210U);
    msg.setDestination(41195U);
    msg.setDestinationEntity(141U);
    msg.value = 0.705331460155;

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
    msg.setTimeStamp(0.597720245086);
    msg.setSource(6191U);
    msg.setSourceEntity(167U);
    msg.setDestination(37201U);
    msg.setDestinationEntity(7U);
    msg.value = 0.156730212678;

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
    msg.setTimeStamp(0.252560305288);
    msg.setSource(11032U);
    msg.setSourceEntity(183U);
    msg.setDestination(46087U);
    msg.setDestinationEntity(171U);
    msg.value = 0.503180404024;

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
    msg.setTimeStamp(0.134335337927);
    msg.setSource(34784U);
    msg.setSourceEntity(156U);
    msg.setDestination(5711U);
    msg.setDestinationEntity(238U);
    msg.value = 0.2683884079;

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
    msg.setTimeStamp(0.0179717735005);
    msg.setSource(2059U);
    msg.setSourceEntity(114U);
    msg.setDestination(60082U);
    msg.setDestinationEntity(18U);
    msg.value = 0.565157548464;

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
    msg.setTimeStamp(0.243022268926);
    msg.setSource(4915U);
    msg.setSourceEntity(4U);
    msg.setDestination(48464U);
    msg.setDestinationEntity(176U);
    msg.value = 0.859064724874;

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
    msg.setTimeStamp(0.250219227766);
    msg.setSource(7157U);
    msg.setSourceEntity(65U);
    msg.setDestination(17721U);
    msg.setDestinationEntity(132U);
    msg.value = 0.727201203295;

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
    msg.setTimeStamp(0.517498097655);
    msg.setSource(65082U);
    msg.setSourceEntity(116U);
    msg.setDestination(12426U);
    msg.setDestinationEntity(34U);
    msg.value = 0.237495379432;

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
    msg.setTimeStamp(0.299259610907);
    msg.setSource(44914U);
    msg.setSourceEntity(232U);
    msg.setDestination(46608U);
    msg.setDestinationEntity(239U);
    msg.value = 0.82799759449;

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
    msg.setTimeStamp(0.529185708045);
    msg.setSource(50414U);
    msg.setSourceEntity(104U);
    msg.setDestination(56423U);
    msg.setDestinationEntity(28U);
    msg.value = 0.981556448032;

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
    msg.setTimeStamp(0.0599697459172);
    msg.setSource(46759U);
    msg.setSourceEntity(101U);
    msg.setDestination(61542U);
    msg.setDestinationEntity(52U);
    msg.value = 0.382684728411;

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
    msg.setTimeStamp(0.175327194843);
    msg.setSource(48468U);
    msg.setSourceEntity(242U);
    msg.setDestination(22275U);
    msg.setDestinationEntity(208U);
    msg.value = 0.0573037456578;

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
    msg.setTimeStamp(0.534038993111);
    msg.setSource(41422U);
    msg.setSourceEntity(176U);
    msg.setDestination(20896U);
    msg.setDestinationEntity(81U);
    msg.value = 0.0431780035593;

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
    msg.setTimeStamp(0.377140107108);
    msg.setSource(36332U);
    msg.setSourceEntity(39U);
    msg.setDestination(33717U);
    msg.setDestinationEntity(171U);
    msg.validity = 22483U;
    msg.type = 35U;
    msg.tow = 1998304737U;
    msg.base_lat = 0.674701167159;
    msg.base_lon = 0.876252480288;
    msg.base_height = 0.312392857896;
    msg.n = 0.148897619869;
    msg.e = 0.771139437765;
    msg.d = 0.790491479456;
    msg.v_n = 0.939155481722;
    msg.v_e = 0.901483085826;
    msg.v_d = 0.468346106387;
    msg.satellites = 100U;
    msg.iar_hyp = 9545U;
    msg.iar_ratio = 0.264693183284;

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
    msg.setTimeStamp(0.696243098502);
    msg.setSource(508U);
    msg.setSourceEntity(166U);
    msg.setDestination(17734U);
    msg.setDestinationEntity(42U);
    msg.validity = 1828U;
    msg.type = 49U;
    msg.tow = 3900533231U;
    msg.base_lat = 0.138795004354;
    msg.base_lon = 0.39935005722;
    msg.base_height = 0.399494976717;
    msg.n = 0.634862453738;
    msg.e = 0.389431924195;
    msg.d = 0.158155109604;
    msg.v_n = 0.0373209368732;
    msg.v_e = 0.565988577035;
    msg.v_d = 0.8264750866;
    msg.satellites = 177U;
    msg.iar_hyp = 10874U;
    msg.iar_ratio = 0.687357917955;

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
    msg.setTimeStamp(0.796608863389);
    msg.setSource(3137U);
    msg.setSourceEntity(166U);
    msg.setDestination(15891U);
    msg.setDestinationEntity(176U);
    msg.validity = 54470U;
    msg.type = 47U;
    msg.tow = 289286952U;
    msg.base_lat = 0.949616039698;
    msg.base_lon = 0.988551331503;
    msg.base_height = 0.0467194774904;
    msg.n = 0.995337667962;
    msg.e = 0.256635299231;
    msg.d = 0.356146390328;
    msg.v_n = 0.330400339562;
    msg.v_e = 0.95257375939;
    msg.v_d = 0.277217527144;
    msg.satellites = 154U;
    msg.iar_hyp = 50188U;
    msg.iar_ratio = 0.8842304118;

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
    msg.setTimeStamp(0.566743325285);
    msg.setSource(35592U);
    msg.setSourceEntity(26U);
    msg.setDestination(22940U);
    msg.setDestinationEntity(163U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.8009844057;
    tmp_msg_0.lon = 0.649279409273;
    tmp_msg_0.height = 0.0803553405956;
    tmp_msg_0.x = 0.946040237263;
    tmp_msg_0.y = 0.766592248853;
    tmp_msg_0.z = 0.540156749228;
    tmp_msg_0.phi = 0.827127710369;
    tmp_msg_0.theta = 0.540496716954;
    tmp_msg_0.psi = 0.251666394915;
    tmp_msg_0.u = 0.725778930803;
    tmp_msg_0.v = 0.63863268986;
    tmp_msg_0.w = 0.487728519347;
    tmp_msg_0.vx = 0.0358594198777;
    tmp_msg_0.vy = 0.369132270265;
    tmp_msg_0.vz = 0.616877239699;
    tmp_msg_0.p = 0.748744170371;
    tmp_msg_0.q = 0.793009765374;
    tmp_msg_0.r = 0.0891299623041;
    tmp_msg_0.depth = 0.258136296053;
    tmp_msg_0.alt = 0.62512176028;
    msg.state.set(tmp_msg_0);
    msg.type = 243U;

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
    msg.setTimeStamp(0.477933903996);
    msg.setSource(11229U);
    msg.setSourceEntity(14U);
    msg.setDestination(31260U);
    msg.setDestinationEntity(168U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.631549717416;
    tmp_msg_0.lon = 0.679507600379;
    tmp_msg_0.height = 0.258604010524;
    tmp_msg_0.x = 0.876719804596;
    tmp_msg_0.y = 0.664820886102;
    tmp_msg_0.z = 0.377793604648;
    tmp_msg_0.phi = 0.944989168553;
    tmp_msg_0.theta = 0.808834707828;
    tmp_msg_0.psi = 0.0729217418919;
    tmp_msg_0.u = 0.373758822467;
    tmp_msg_0.v = 0.0772645738838;
    tmp_msg_0.w = 0.616720893024;
    tmp_msg_0.vx = 0.80036948506;
    tmp_msg_0.vy = 0.252232283285;
    tmp_msg_0.vz = 0.125967085789;
    tmp_msg_0.p = 0.481674970548;
    tmp_msg_0.q = 0.486025791101;
    tmp_msg_0.r = 0.383665961172;
    tmp_msg_0.depth = 0.373872641709;
    tmp_msg_0.alt = 0.71100795058;
    msg.state.set(tmp_msg_0);
    msg.type = 192U;

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
    msg.setTimeStamp(0.646402999886);
    msg.setSource(24865U);
    msg.setSourceEntity(162U);
    msg.setDestination(32497U);
    msg.setDestinationEntity(231U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.897226643076;
    tmp_msg_0.lon = 0.935991952319;
    tmp_msg_0.height = 0.71563736132;
    tmp_msg_0.x = 0.841370853888;
    tmp_msg_0.y = 0.999781527141;
    tmp_msg_0.z = 0.5827490342;
    tmp_msg_0.phi = 0.994255751141;
    tmp_msg_0.theta = 0.0858961157851;
    tmp_msg_0.psi = 0.954330447332;
    tmp_msg_0.u = 0.75986152136;
    tmp_msg_0.v = 0.607973973703;
    tmp_msg_0.w = 0.105495595896;
    tmp_msg_0.vx = 0.836229507222;
    tmp_msg_0.vy = 0.393184895466;
    tmp_msg_0.vz = 0.240214724771;
    tmp_msg_0.p = 0.448410517075;
    tmp_msg_0.q = 0.32347161375;
    tmp_msg_0.r = 0.908568003321;
    tmp_msg_0.depth = 0.463908801439;
    tmp_msg_0.alt = 0.571782595628;
    msg.state.set(tmp_msg_0);
    msg.type = 28U;

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
    msg.setTimeStamp(0.0336614021638);
    msg.setSource(49031U);
    msg.setSourceEntity(100U);
    msg.setDestination(59700U);
    msg.setDestinationEntity(200U);
    msg.value = 0.0921370181249;

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
    msg.setTimeStamp(0.662800922195);
    msg.setSource(60784U);
    msg.setSourceEntity(180U);
    msg.setDestination(47586U);
    msg.setDestinationEntity(182U);
    msg.value = 0.512217221625;

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
    msg.setTimeStamp(0.6091556977);
    msg.setSource(45981U);
    msg.setSourceEntity(25U);
    msg.setDestination(53406U);
    msg.setDestinationEntity(135U);
    msg.value = 0.485243662773;

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
    msg.setTimeStamp(0.512551593049);
    msg.setSource(47674U);
    msg.setSourceEntity(206U);
    msg.setDestination(35089U);
    msg.setDestinationEntity(220U);
    msg.value = 0.31761792953;

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
    msg.setTimeStamp(0.592654047419);
    msg.setSource(36132U);
    msg.setSourceEntity(206U);
    msg.setDestination(35326U);
    msg.setDestinationEntity(121U);
    msg.value = 0.757136469414;

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
    msg.setTimeStamp(0.151178348003);
    msg.setSource(646U);
    msg.setSourceEntity(190U);
    msg.setDestination(22904U);
    msg.setDestinationEntity(135U);
    msg.value = 0.876603656591;

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
    msg.setTimeStamp(0.538083863869);
    msg.setSource(13444U);
    msg.setSourceEntity(18U);
    msg.setDestination(24300U);
    msg.setDestinationEntity(95U);
    msg.value = 0.342551809768;

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
    msg.setTimeStamp(0.425911107783);
    msg.setSource(12226U);
    msg.setSourceEntity(24U);
    msg.setDestination(25654U);
    msg.setDestinationEntity(210U);
    msg.value = 0.152611383362;

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
    msg.setTimeStamp(0.341257677891);
    msg.setSource(61457U);
    msg.setSourceEntity(132U);
    msg.setDestination(45372U);
    msg.setDestinationEntity(122U);
    msg.value = 0.676978936513;

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
    msg.setTimeStamp(0.293362439883);
    msg.setSource(34436U);
    msg.setSourceEntity(204U);
    msg.setDestination(6168U);
    msg.setDestinationEntity(123U);
    msg.value = 0.422334215673;

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
    msg.setTimeStamp(0.773035082589);
    msg.setSource(13399U);
    msg.setSourceEntity(79U);
    msg.setDestination(50972U);
    msg.setDestinationEntity(65U);
    msg.value = 0.733262543818;

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
    msg.setTimeStamp(0.501462022137);
    msg.setSource(40837U);
    msg.setSourceEntity(119U);
    msg.setDestination(25261U);
    msg.setDestinationEntity(48U);
    msg.value = 0.0976551702975;

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
    msg.setTimeStamp(0.234416252816);
    msg.setSource(17688U);
    msg.setSourceEntity(155U);
    msg.setDestination(24335U);
    msg.setDestinationEntity(164U);
    msg.value = 0.018964891549;

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
    msg.setTimeStamp(0.771100614191);
    msg.setSource(55222U);
    msg.setSourceEntity(1U);
    msg.setDestination(5788U);
    msg.setDestinationEntity(86U);
    msg.value = 0.806876004295;

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
    msg.setTimeStamp(0.883751501596);
    msg.setSource(36027U);
    msg.setSourceEntity(129U);
    msg.setDestination(34428U);
    msg.setDestinationEntity(239U);
    msg.value = 0.533939863087;

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
    msg.setTimeStamp(0.21785697859);
    msg.setSource(46663U);
    msg.setSourceEntity(166U);
    msg.setDestination(61541U);
    msg.setDestinationEntity(147U);
    msg.id = 183U;
    msg.zoom = 143U;
    msg.action = 191U;

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
    msg.setTimeStamp(0.581428205947);
    msg.setSource(56034U);
    msg.setSourceEntity(29U);
    msg.setDestination(30456U);
    msg.setDestinationEntity(205U);
    msg.id = 177U;
    msg.zoom = 3U;
    msg.action = 146U;

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
    msg.setTimeStamp(0.517150071028);
    msg.setSource(23992U);
    msg.setSourceEntity(166U);
    msg.setDestination(56629U);
    msg.setDestinationEntity(194U);
    msg.id = 21U;
    msg.zoom = 152U;
    msg.action = 253U;

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
    msg.setTimeStamp(0.145751364393);
    msg.setSource(27693U);
    msg.setSourceEntity(126U);
    msg.setDestination(58762U);
    msg.setDestinationEntity(174U);
    msg.id = 79U;
    msg.value = 0.610627246798;

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
    msg.setTimeStamp(0.644001142619);
    msg.setSource(30707U);
    msg.setSourceEntity(108U);
    msg.setDestination(48462U);
    msg.setDestinationEntity(25U);
    msg.id = 200U;
    msg.value = 0.422085173712;

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
    msg.setTimeStamp(0.23348848813);
    msg.setSource(39335U);
    msg.setSourceEntity(58U);
    msg.setDestination(29678U);
    msg.setDestinationEntity(60U);
    msg.id = 239U;
    msg.value = 0.0353350419249;

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
    msg.setTimeStamp(0.508548829046);
    msg.setSource(52709U);
    msg.setSourceEntity(92U);
    msg.setDestination(59259U);
    msg.setDestinationEntity(241U);
    msg.id = 218U;
    msg.value = 0.586226572389;

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
    msg.setTimeStamp(0.894783690938);
    msg.setSource(47581U);
    msg.setSourceEntity(108U);
    msg.setDestination(46009U);
    msg.setDestinationEntity(33U);
    msg.id = 188U;
    msg.value = 0.769513166853;

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
    msg.setTimeStamp(0.56547526972);
    msg.setSource(42042U);
    msg.setSourceEntity(47U);
    msg.setDestination(46059U);
    msg.setDestinationEntity(96U);
    msg.id = 230U;
    msg.value = 0.803506620379;

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
    msg.setTimeStamp(0.0639524773078);
    msg.setSource(50429U);
    msg.setSourceEntity(189U);
    msg.setDestination(16977U);
    msg.setDestinationEntity(220U);
    msg.id = 220U;
    msg.angle = 0.0473573256745;

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
    msg.setTimeStamp(0.674639180087);
    msg.setSource(11511U);
    msg.setSourceEntity(212U);
    msg.setDestination(5421U);
    msg.setDestinationEntity(78U);
    msg.id = 105U;
    msg.angle = 0.282153842594;

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
    msg.setTimeStamp(0.994618476452);
    msg.setSource(49364U);
    msg.setSourceEntity(9U);
    msg.setDestination(47721U);
    msg.setDestinationEntity(222U);
    msg.id = 83U;
    msg.angle = 0.196086431195;

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
    msg.setTimeStamp(0.667467436201);
    msg.setSource(16954U);
    msg.setSourceEntity(114U);
    msg.setDestination(50798U);
    msg.setDestinationEntity(162U);
    msg.op = 223U;
    msg.actions.assign("GIEMTWAMZLSXHNVUYZEHHJCORZNIDAWLYFPFBAIPUUTRXRLKQCCVQXERYHHVBAXFDTWANBXOUBPZOKPVQA");

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
    msg.setTimeStamp(0.285283326754);
    msg.setSource(11060U);
    msg.setSourceEntity(116U);
    msg.setDestination(28286U);
    msg.setDestinationEntity(5U);
    msg.op = 161U;
    msg.actions.assign("DACOWGSKAJJABHVRVUDOHGYEXHNFPTZOEWVMOJDJUNMNBIXDEMHRDYQAUTTLXLCMBYGZI");

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
    msg.setTimeStamp(0.710429145822);
    msg.setSource(14802U);
    msg.setSourceEntity(233U);
    msg.setDestination(49537U);
    msg.setDestinationEntity(104U);
    msg.op = 233U;
    msg.actions.assign("OIXBLIFKWDSALNRFAGXEBNTQJOSFCBUFKZLYMGFHZLAVUDPAGBQYACPFJSOCXJUTOEKREGZJQVCMIQHOHTTDTZRZSUKVCHPCUWWVIJGWWDUPCWUKTEBLVSXEXNYZLSVIDVPHBHMTDIMULOIYGNEHSDQEMPAAMONFVDJGNPOYTECSYRZGQREATHLAJXMIIKNSDDRJUXCGMBKXLYRMFEQPQIV");

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
    msg.setTimeStamp(0.118209120493);
    msg.setSource(59353U);
    msg.setSourceEntity(181U);
    msg.setDestination(32622U);
    msg.setDestinationEntity(118U);
    msg.actions.assign("DPZYHGMAQLCNVUHVHCVTGWEWVROLISCPUUUEQ");

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
    msg.setTimeStamp(0.335154251245);
    msg.setSource(26867U);
    msg.setSourceEntity(69U);
    msg.setDestination(42198U);
    msg.setDestinationEntity(16U);
    msg.actions.assign("UZKIYNSCVNOEUNMEEVGTDHDIASMOMLVDYXZCVJVBRMRBQWRGMBYGXEXZWZDKVGTIHPOIAJHNZPYAEKOROMZFXSWFSMWCQKHFGQAMWTJZPSGJZJGFGSVHPGOAHZTDRWWKRAENBRTCCFIFDYEHMIUTVLEFIOUNHODYEUJGALARQMPJLAJKUNYFKCZXQPTQKNPLSIXUBLCARQBDBLQOFDUEHS");

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
    msg.setTimeStamp(0.163412114584);
    msg.setSource(55978U);
    msg.setSourceEntity(1U);
    msg.setDestination(38594U);
    msg.setDestinationEntity(51U);
    msg.actions.assign("KXWNADWNRQLUDXBGIGQFSNISEKMHLZCPPWFZLIRWATVRTLNJSUUACZDGZWBWMMTPYWSETOHXTRCIOAFVPQBEOLUOFVFEBNSOFKXKIDAEJUHLRKRAKZSBSVWVYYQXIPJJYNPUQZXFBFYTICGUHGRGXCGCJVALNLOUNNOQGJXBMBYCZTYUEMKVPEMFDZDADJDPVRYPHMKQCEZVHYCGZONWRHQBU");

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
    msg.setTimeStamp(0.692551668514);
    msg.setSource(29568U);
    msg.setSourceEntity(122U);
    msg.setDestination(38881U);
    msg.setDestinationEntity(122U);
    msg.button = 184U;
    msg.value = 142U;

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
    msg.setTimeStamp(0.752866440078);
    msg.setSource(55900U);
    msg.setSourceEntity(39U);
    msg.setDestination(45731U);
    msg.setDestinationEntity(195U);
    msg.button = 38U;
    msg.value = 18U;

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
    msg.setTimeStamp(0.928927973665);
    msg.setSource(4754U);
    msg.setSourceEntity(72U);
    msg.setDestination(18977U);
    msg.setDestinationEntity(59U);
    msg.button = 223U;
    msg.value = 8U;

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
    msg.setTimeStamp(0.394028379168);
    msg.setSource(32238U);
    msg.setSourceEntity(82U);
    msg.setDestination(39123U);
    msg.setDestinationEntity(140U);
    msg.op = 47U;
    msg.text.assign("ABNCYLATYRV");

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
    msg.setTimeStamp(0.201999141896);
    msg.setSource(41922U);
    msg.setSourceEntity(177U);
    msg.setDestination(40511U);
    msg.setDestinationEntity(202U);
    msg.op = 178U;
    msg.text.assign("RUSNUBBIBRDBFFQKOIYXEXWIHDLYKAFVLFZHOPSWSYJMJPQARWECAPPZKBHYLQQXUIPSLUEQLPMJTAKXTNVZUDGAXVNZFKEARXFULTCDJTVOIIZMVXCDABBJPTCWEVNUVGRJHFZXBGLCZECPYOQGJIGXSDSJMTVGZROEMTXAQHDWYTKFSCKFMNLRGJHLUVLNMUCKYDHAUVDIM");

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
    msg.setTimeStamp(0.69409790376);
    msg.setSource(26410U);
    msg.setSourceEntity(40U);
    msg.setDestination(39320U);
    msg.setDestinationEntity(58U);
    msg.op = 235U;
    msg.text.assign("DQRMWEATERPAJQWAAREXLPXFTUNCZTFIHMCFHPNSGHBZATPUCAKYLOCXDRYBYROIONFOLFGGSJFEZKXSVMUNXNOEJTXOMJAZDVCUULKJZZYNWMJEBOHYASVEWHDXKEYGFOKTUGMWTIYKQVVLGSZPJLLVIRIKUIANMJIJQMVHSZOFURYWSFXWYPBIMTSPQIZSEQCHDMVRDNQWPFJSCUNQXYDLBGDUGOLKZPBCNQPHTICG");

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
    msg.setTimeStamp(0.24602381895);
    msg.setSource(60661U);
    msg.setSourceEntity(7U);
    msg.setDestination(48832U);
    msg.setDestinationEntity(57U);
    msg.op = 213U;
    msg.time_remain = 0.392504055665;
    msg.sched_time = 0.50229551043;

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
    msg.setTimeStamp(0.877180457776);
    msg.setSource(2536U);
    msg.setSourceEntity(249U);
    msg.setDestination(44671U);
    msg.setDestinationEntity(63U);
    msg.op = 99U;
    msg.time_remain = 0.227389141434;
    msg.sched_time = 0.818242153584;

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
    msg.setTimeStamp(0.222088941352);
    msg.setSource(23300U);
    msg.setSourceEntity(98U);
    msg.setDestination(31308U);
    msg.setDestinationEntity(51U);
    msg.op = 189U;
    msg.time_remain = 0.0983994845358;
    msg.sched_time = 0.937574167404;

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
    msg.setTimeStamp(0.183197673893);
    msg.setSource(36930U);
    msg.setSourceEntity(17U);
    msg.setDestination(27500U);
    msg.setDestinationEntity(104U);
    msg.name.assign("DRGOQQIGBQMDXTVKOXWFJCZYEKPZRKYUYMOFYKQCZATEHNTJ");
    msg.op = 49U;
    msg.sched_time = 0.30574279898;

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
    msg.setTimeStamp(0.808644949466);
    msg.setSource(13473U);
    msg.setSourceEntity(149U);
    msg.setDestination(22505U);
    msg.setDestinationEntity(165U);
    msg.name.assign("TUNRKIKHIIRMGKPOJLYOJZCOIBYYDVFXFKMUBSVQ");
    msg.op = 213U;
    msg.sched_time = 0.20300409485;

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
    msg.setTimeStamp(0.938493721075);
    msg.setSource(1037U);
    msg.setSourceEntity(65U);
    msg.setDestination(46926U);
    msg.setDestinationEntity(210U);
    msg.name.assign("LUDSMBTMNYWAXITCBGKOXPDKLTZQEKIPAARNZFRXGSHYUJBDAYOGEIXLRKDXIOJXQNRANPVYTZF");
    msg.op = 191U;
    msg.sched_time = 0.735494831835;

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
    msg.setTimeStamp(0.549724480187);
    msg.setSource(34889U);
    msg.setSourceEntity(216U);
    msg.setDestination(45179U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.097750316419);
    msg.setSource(3428U);
    msg.setSourceEntity(211U);
    msg.setDestination(4691U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.00471591094635);
    msg.setSource(30531U);
    msg.setSourceEntity(220U);
    msg.setDestination(17650U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.541992070712);
    msg.setSource(33943U);
    msg.setSourceEntity(124U);
    msg.setDestination(48108U);
    msg.setDestinationEntity(124U);
    msg.name.assign("ZYYVNGGZDZHGG");
    msg.state = 152U;

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
    msg.setTimeStamp(0.728417752668);
    msg.setSource(64461U);
    msg.setSourceEntity(181U);
    msg.setDestination(6783U);
    msg.setDestinationEntity(163U);
    msg.name.assign("DRAYMUXEZAVZPMAHMDUCWPWWWGYJKSXIJGFIEVVVKUNTFGDSJXLHOJFMXZIJBDPWDPBVOXRVYX");
    msg.state = 4U;

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
    msg.setTimeStamp(0.70443267626);
    msg.setSource(57750U);
    msg.setSourceEntity(155U);
    msg.setDestination(20991U);
    msg.setDestinationEntity(112U);
    msg.name.assign("OLNQWNWNTBNFCRLNASEUMXEJPVDBZWPTUXGKQMHLTYL");
    msg.state = 238U;

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
    msg.setTimeStamp(0.143050645505);
    msg.setSource(11701U);
    msg.setSourceEntity(123U);
    msg.setDestination(45301U);
    msg.setDestinationEntity(147U);
    msg.name.assign("BQELMUDGPYGJRQVDCZPWIUZLJJNOQBPKQMDGNNSWSLNYTNFGAFMTDFYUBPIQYBEBWVIULVHKDXLIDSMPNBCPQRZOZWEIJRZRSHCZVRKSOTXEHMEZKXGYNQHNTCQTIQDPAADKYVVWJZRHCXXRYUWSUGGLVAMJDCFAIAPAMWUXFBEGYNYHMMGJLLZESCVJNUITHRXC");
    msg.value = 106U;

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
    msg.setTimeStamp(0.728168171132);
    msg.setSource(8953U);
    msg.setSourceEntity(157U);
    msg.setDestination(37279U);
    msg.setDestinationEntity(201U);
    msg.name.assign("JABOJYPDGAOZVRCVVGFSQLZILLGYKUHJMXHNEDACQUVGXOVZCAIHWOTYJFSBCVNNICBVQPEUILRNRHQMMWXFFGEXLXDRZFHPSTRNPQVWGPTYGTCHAYWTUJKVFEWKDJXMABPDZZNKWYCLSGJILOMUWTZDYEEEQKJCOWSBUNBKBFFNPVHZRUSCLTQDHFRLQSRUPAANIIOCKSDSXEZAXMP");
    msg.value = 235U;

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
    msg.setTimeStamp(0.700509556032);
    msg.setSource(45839U);
    msg.setSourceEntity(127U);
    msg.setDestination(15437U);
    msg.setDestinationEntity(209U);
    msg.name.assign("OVWSTWIMIBDYSACHTMERBGOGBCUQCFNWFIKNYREJLLEJPLEBBWJNICTIYNVHHHEZPRLXKLXPWQMUXUDTVQESGMWBBHLKSQOWMAKLVLXGCTRHEGVFDMSOQIIJTVOAYNZODGICRFRVPCXCBWGQYFSLHPSXPJUZBCIZILDUNPPWAAYJZNOSHGNSMVTYBXJJWUEHSQDXDRDUNCXPNKKUAVQEKRJMZT");
    msg.value = 19U;

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
    msg.setTimeStamp(0.153822706261);
    msg.setSource(18213U);
    msg.setSourceEntity(217U);
    msg.setDestination(13887U);
    msg.setDestinationEntity(54U);
    msg.name.assign("JSDSBGORRYGRPWNIKDLVUSVDWJDVMLKEYHKPCWFRGXYXCAMXZYSQTPPQVODHGWFZAFCRIUIQFNKIOZJBOIDKOBPCXQNOEOHBCBONXBPSMVBEFUHYNFTRNMWZUYZZMBA");

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
    msg.setTimeStamp(0.886759996736);
    msg.setSource(31677U);
    msg.setSourceEntity(207U);
    msg.setDestination(43366U);
    msg.setDestinationEntity(164U);
    msg.name.assign("ZVJATRYDZLRABKVQAUIVHUWPBWHAGIOGKXERJCLZFXCDCJURVRRQDWDXDPGHUHPMEEFHINVNSZVSFCOTZLYSFRRPKXKLKWEGISVAXQXPGKNTUSQBQOTGVCOKGOBLLCJREJZTCENPZYKOMBOANWMDSLFQKUHBJIQYMLWFUTDFMTJINTBBQUGSZU");

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
    msg.setTimeStamp(0.281881389028);
    msg.setSource(52516U);
    msg.setSourceEntity(59U);
    msg.setDestination(12147U);
    msg.setDestinationEntity(137U);
    msg.name.assign("ISDUXOETDJHCWJVGWNSFFMALBSCCBRYLAXJTPITKNQMWAVFOLOALMHIYWKZASDZRCRQLSGZPTHLIZGFKCCPYRRGRCKQQUQMPOHJCEWWVKTIEDZDBBNNJYIRGUNJHBDHXAXFFWMMOIZKZCNPQPQJNULJWMTGFOUCBYJLIUQZSHXPTMSJUVEMWEYKOYG");

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
    msg.setTimeStamp(0.516632128746);
    msg.setSource(48549U);
    msg.setSourceEntity(147U);
    msg.setDestination(1702U);
    msg.setDestinationEntity(156U);
    msg.name.assign("ACRBBKLCUYCCBJYDOSISXHDMFMDVUDWXNUIYVOKPYKHKUEFUGKACZQWLCXXHLJYLBTXBIXNNBFMADCQXVDRGZXPNZTWWPJORAQAHPIFRMZVZJMGGZKOQZHDLIIILOLSSFODSTIDGXTEVQTMQSDNWSFQLYQKBSKPUEHIGOWWVGZAWJZVYRKOSUP");
    msg.value = 48U;

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
    msg.setTimeStamp(0.595535304035);
    msg.setSource(48289U);
    msg.setSourceEntity(73U);
    msg.setDestination(30668U);
    msg.setDestinationEntity(227U);
    msg.name.assign("VKTEYNHGQTKHFVQQPBODMPGVMTKXRSEMSZZBWTOHMSVSVHVNXTWIIIZVPJCMEJFRVOXUYMXXOIEAELYFAWQZOIYTCBPMENUVWANGJZIHSQTIAWAIXUDYGMBBWAPWNFQGUPSFPLDXRKGCUYLFLLYCUZTOXOPJUSGJDOLCIYFAJ");
    msg.value = 191U;

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
    msg.setTimeStamp(0.997573680741);
    msg.setSource(12708U);
    msg.setSourceEntity(95U);
    msg.setDestination(45353U);
    msg.setDestinationEntity(199U);
    msg.name.assign("PTFVEPMIVMAEOUWPJMQVWGXXKGACVJNZARUVUJYUXICIRWDVOETGQUOXGIQRCHMSJCDHWDCXKSQABSNMRCYQNRXMTEASAUJIZQLDVOPCJJTYBRFZUODHGTETTSPYSYHHZWFLDWLVMKGNEDKCFFJNERAKXENAPFPLKLRWWUHLKHBZMZOVKQKOLTHXMWPF");
    msg.value = 91U;

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
    msg.setTimeStamp(0.0442667680395);
    msg.setSource(65348U);
    msg.setSourceEntity(119U);
    msg.setDestination(65271U);
    msg.setDestinationEntity(119U);
    msg.id = 136U;
    msg.period = 2590270180U;
    msg.duty_cycle = 4052823006U;

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
    msg.setTimeStamp(0.107387004233);
    msg.setSource(10965U);
    msg.setSourceEntity(81U);
    msg.setDestination(3581U);
    msg.setDestinationEntity(171U);
    msg.id = 100U;
    msg.period = 1796259214U;
    msg.duty_cycle = 388734005U;

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
    msg.setTimeStamp(0.372816733559);
    msg.setSource(21411U);
    msg.setSourceEntity(7U);
    msg.setDestination(50938U);
    msg.setDestinationEntity(206U);
    msg.id = 209U;
    msg.period = 1808639015U;
    msg.duty_cycle = 4199052602U;

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
    msg.setTimeStamp(0.623704689258);
    msg.setSource(11904U);
    msg.setSourceEntity(5U);
    msg.setDestination(13109U);
    msg.setDestinationEntity(54U);
    msg.id = 33U;
    msg.period = 3571886963U;
    msg.duty_cycle = 3430725564U;

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
    msg.setTimeStamp(0.0591535158253);
    msg.setSource(22633U);
    msg.setSourceEntity(117U);
    msg.setDestination(48956U);
    msg.setDestinationEntity(231U);
    msg.id = 4U;
    msg.period = 2228693955U;
    msg.duty_cycle = 2960996775U;

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
    msg.setTimeStamp(0.820804339182);
    msg.setSource(1235U);
    msg.setSourceEntity(238U);
    msg.setDestination(58483U);
    msg.setDestinationEntity(252U);
    msg.id = 240U;
    msg.period = 331347562U;
    msg.duty_cycle = 1918054811U;

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
    msg.setTimeStamp(0.187774558227);
    msg.setSource(979U);
    msg.setSourceEntity(0U);
    msg.setDestination(33131U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.304311272072;
    msg.lon = 0.749373128268;
    msg.height = 0.94449725966;
    msg.x = 0.527860944124;
    msg.y = 0.928202467595;
    msg.z = 0.30007344347;
    msg.phi = 0.940610447658;
    msg.theta = 0.992312618209;
    msg.psi = 0.504584782299;
    msg.u = 0.867583700969;
    msg.v = 0.64808871276;
    msg.w = 0.183711174905;
    msg.vx = 0.318532834868;
    msg.vy = 0.314731229231;
    msg.vz = 0.191324186177;
    msg.p = 0.457604390436;
    msg.q = 0.295065103434;
    msg.r = 0.98760247741;
    msg.depth = 0.120373628673;
    msg.alt = 0.372177488408;

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
    msg.setTimeStamp(0.463360393214);
    msg.setSource(34232U);
    msg.setSourceEntity(119U);
    msg.setDestination(13502U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.444776807909;
    msg.lon = 0.760111213468;
    msg.height = 0.239889994712;
    msg.x = 0.0958183873502;
    msg.y = 0.99478886736;
    msg.z = 0.0200127288072;
    msg.phi = 0.735200765564;
    msg.theta = 0.562248356231;
    msg.psi = 0.243475006011;
    msg.u = 0.0202957947755;
    msg.v = 0.948273426702;
    msg.w = 0.0683664961283;
    msg.vx = 0.202899274131;
    msg.vy = 0.423846178244;
    msg.vz = 0.980856656721;
    msg.p = 0.188322195035;
    msg.q = 0.899049318324;
    msg.r = 0.353506524058;
    msg.depth = 0.219590140192;
    msg.alt = 0.313197318445;

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
    msg.setTimeStamp(0.94407408151);
    msg.setSource(46980U);
    msg.setSourceEntity(214U);
    msg.setDestination(58257U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.88569377392;
    msg.lon = 0.913943724504;
    msg.height = 0.720253300742;
    msg.x = 0.755629917247;
    msg.y = 0.390541555668;
    msg.z = 0.994223891025;
    msg.phi = 0.551680135628;
    msg.theta = 0.988439158261;
    msg.psi = 0.314002872236;
    msg.u = 0.967872352418;
    msg.v = 0.063999736292;
    msg.w = 0.662577473515;
    msg.vx = 0.112502830879;
    msg.vy = 0.638707610728;
    msg.vz = 0.319113762011;
    msg.p = 0.463541840211;
    msg.q = 0.929486109002;
    msg.r = 0.245426727706;
    msg.depth = 0.31331784127;
    msg.alt = 0.193073519642;

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
    msg.setTimeStamp(0.437714080105);
    msg.setSource(48529U);
    msg.setSourceEntity(121U);
    msg.setDestination(37312U);
    msg.setDestinationEntity(72U);
    msg.x = 0.361134220157;
    msg.y = 0.845049026142;
    msg.z = 0.430583752114;

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
    msg.setTimeStamp(0.251380334643);
    msg.setSource(30399U);
    msg.setSourceEntity(79U);
    msg.setDestination(47076U);
    msg.setDestinationEntity(125U);
    msg.x = 0.863987950279;
    msg.y = 0.617343210354;
    msg.z = 0.0876421158786;

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
    msg.setTimeStamp(0.889360215805);
    msg.setSource(1192U);
    msg.setSourceEntity(228U);
    msg.setDestination(50660U);
    msg.setDestinationEntity(216U);
    msg.x = 0.329336366023;
    msg.y = 0.746548679805;
    msg.z = 0.840304260749;

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
    msg.setTimeStamp(0.790240960433);
    msg.setSource(15898U);
    msg.setSourceEntity(197U);
    msg.setDestination(16698U);
    msg.setDestinationEntity(213U);
    msg.value = 0.977169617979;

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
    msg.setTimeStamp(0.74740483045);
    msg.setSource(3581U);
    msg.setSourceEntity(125U);
    msg.setDestination(57654U);
    msg.setDestinationEntity(54U);
    msg.value = 0.490176572732;

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
    msg.setTimeStamp(0.545430677415);
    msg.setSource(12616U);
    msg.setSourceEntity(234U);
    msg.setDestination(39966U);
    msg.setDestinationEntity(17U);
    msg.value = 0.247395937543;

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
    msg.setTimeStamp(0.621512278865);
    msg.setSource(46241U);
    msg.setSourceEntity(150U);
    msg.setDestination(58286U);
    msg.setDestinationEntity(1U);
    msg.value = 0.980670624561;

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
    msg.setTimeStamp(0.184854319429);
    msg.setSource(2152U);
    msg.setSourceEntity(214U);
    msg.setDestination(59370U);
    msg.setDestinationEntity(123U);
    msg.value = 0.472875380411;

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
    msg.setTimeStamp(0.039779798499);
    msg.setSource(34970U);
    msg.setSourceEntity(100U);
    msg.setDestination(64412U);
    msg.setDestinationEntity(192U);
    msg.value = 0.0374065902518;

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
    msg.setTimeStamp(0.176217949075);
    msg.setSource(4630U);
    msg.setSourceEntity(131U);
    msg.setDestination(20881U);
    msg.setDestinationEntity(99U);
    msg.x = 0.260333611222;
    msg.y = 0.639078829777;
    msg.z = 0.796870471037;
    msg.phi = 0.439652761052;
    msg.theta = 0.43741468038;
    msg.psi = 0.769397546102;
    msg.p = 0.185900788299;
    msg.q = 0.563211703423;
    msg.r = 0.89289581821;
    msg.u = 0.268154103125;
    msg.v = 0.158370151843;
    msg.w = 0.823334280635;
    msg.bias_psi = 0.326566528876;
    msg.bias_r = 0.161074413521;

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
    msg.setTimeStamp(0.702809370608);
    msg.setSource(25212U);
    msg.setSourceEntity(218U);
    msg.setDestination(5850U);
    msg.setDestinationEntity(245U);
    msg.x = 0.0409852596173;
    msg.y = 0.1660736344;
    msg.z = 0.449601792561;
    msg.phi = 0.691964304693;
    msg.theta = 0.954585819626;
    msg.psi = 0.902490643139;
    msg.p = 0.780289209488;
    msg.q = 0.613127260567;
    msg.r = 0.922097478573;
    msg.u = 0.823296212894;
    msg.v = 0.0137587059718;
    msg.w = 0.574431044707;
    msg.bias_psi = 0.847044752573;
    msg.bias_r = 0.522780593538;

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
    msg.setTimeStamp(0.197138746634);
    msg.setSource(34621U);
    msg.setSourceEntity(195U);
    msg.setDestination(23609U);
    msg.setDestinationEntity(80U);
    msg.x = 0.774372175007;
    msg.y = 0.179040082521;
    msg.z = 0.689859689398;
    msg.phi = 0.201333319512;
    msg.theta = 0.985685189115;
    msg.psi = 0.650190587676;
    msg.p = 0.635446644282;
    msg.q = 0.234854279292;
    msg.r = 0.959277716384;
    msg.u = 0.526085264131;
    msg.v = 0.861873534323;
    msg.w = 0.907611184591;
    msg.bias_psi = 0.747393607341;
    msg.bias_r = 0.582259688361;

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
    msg.setTimeStamp(0.596195893875);
    msg.setSource(32296U);
    msg.setSourceEntity(66U);
    msg.setDestination(38774U);
    msg.setDestinationEntity(53U);
    msg.bias_psi = 0.924738366505;
    msg.bias_r = 0.354548268978;
    msg.cog = 0.215585666675;
    msg.cyaw = 0.23681979788;
    msg.lbl_rej_level = 0.0864260403901;
    msg.gps_rej_level = 0.84386339669;
    msg.custom_x = 0.934929635752;
    msg.custom_y = 0.637942397639;
    msg.custom_z = 0.0911670676683;

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
    msg.setTimeStamp(0.634692553002);
    msg.setSource(28055U);
    msg.setSourceEntity(110U);
    msg.setDestination(7182U);
    msg.setDestinationEntity(185U);
    msg.bias_psi = 0.203984020639;
    msg.bias_r = 0.424212442046;
    msg.cog = 0.628675920056;
    msg.cyaw = 0.537049119123;
    msg.lbl_rej_level = 0.0877424376086;
    msg.gps_rej_level = 0.908478933243;
    msg.custom_x = 0.874196100415;
    msg.custom_y = 0.187237996651;
    msg.custom_z = 0.0103048001099;

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
    msg.setTimeStamp(0.428671874087);
    msg.setSource(60732U);
    msg.setSourceEntity(133U);
    msg.setDestination(28865U);
    msg.setDestinationEntity(16U);
    msg.bias_psi = 0.137033492402;
    msg.bias_r = 0.153008184454;
    msg.cog = 0.984508164266;
    msg.cyaw = 0.663886006388;
    msg.lbl_rej_level = 0.356930365363;
    msg.gps_rej_level = 0.89994072916;
    msg.custom_x = 0.701347286032;
    msg.custom_y = 0.175409115113;
    msg.custom_z = 0.945577501888;

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
    msg.setTimeStamp(0.954719874799);
    msg.setSource(19084U);
    msg.setSourceEntity(18U);
    msg.setDestination(47870U);
    msg.setDestinationEntity(68U);
    msg.utc_time = 0.947783577168;
    msg.reason = 113U;

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
    msg.setTimeStamp(0.656099793813);
    msg.setSource(31843U);
    msg.setSourceEntity(101U);
    msg.setDestination(44525U);
    msg.setDestinationEntity(141U);
    msg.utc_time = 0.0112797619635;
    msg.reason = 193U;

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
    msg.setTimeStamp(0.859033845675);
    msg.setSource(10850U);
    msg.setSourceEntity(36U);
    msg.setDestination(46153U);
    msg.setDestinationEntity(114U);
    msg.utc_time = 0.0633905355846;
    msg.reason = 29U;

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
    msg.setTimeStamp(0.70070235459);
    msg.setSource(29383U);
    msg.setSourceEntity(148U);
    msg.setDestination(21439U);
    msg.setDestinationEntity(186U);
    msg.id = 110U;
    msg.range = 0.191486498528;
    msg.acceptance = 46U;

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
    msg.setTimeStamp(0.306415718044);
    msg.setSource(55595U);
    msg.setSourceEntity(64U);
    msg.setDestination(44895U);
    msg.setDestinationEntity(240U);
    msg.id = 69U;
    msg.range = 0.643120302912;
    msg.acceptance = 247U;

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
    msg.setTimeStamp(0.818199890573);
    msg.setSource(63681U);
    msg.setSourceEntity(154U);
    msg.setDestination(11011U);
    msg.setDestinationEntity(156U);
    msg.id = 158U;
    msg.range = 0.73108935954;
    msg.acceptance = 237U;

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
    msg.setTimeStamp(0.618700585109);
    msg.setSource(2858U);
    msg.setSourceEntity(41U);
    msg.setDestination(6865U);
    msg.setDestinationEntity(112U);
    msg.type = 229U;
    msg.reason = 134U;
    msg.value = 0.754159970236;
    msg.timestep = 0.695426457062;

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
    msg.setTimeStamp(0.192267156859);
    msg.setSource(23950U);
    msg.setSourceEntity(192U);
    msg.setDestination(7734U);
    msg.setDestinationEntity(123U);
    msg.type = 5U;
    msg.reason = 249U;
    msg.value = 0.257548445096;
    msg.timestep = 0.501314530125;

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
    msg.setTimeStamp(0.380756525309);
    msg.setSource(34196U);
    msg.setSourceEntity(94U);
    msg.setDestination(57934U);
    msg.setDestinationEntity(74U);
    msg.type = 94U;
    msg.reason = 80U;
    msg.value = 0.903822456891;
    msg.timestep = 0.969467010188;

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
    msg.setTimeStamp(0.974858601676);
    msg.setSource(37976U);
    msg.setSourceEntity(194U);
    msg.setDestination(19575U);
    msg.setDestinationEntity(98U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QSVOJEAAEYXJMPHXCOWNMEYPNPNINZHDKCUXDCBWVNPFKTROHQPKPTHRDLZWZTQDKMIFOFIILVQIRJSGKJEVYJVSHNRYKZYAUBCLGZVBNLGZUDRFQUCTRDWLXXXEIKIULGCF");
    tmp_msg_0.lat = 0.765332680094;
    tmp_msg_0.lon = 0.810861028781;
    tmp_msg_0.depth = 0.262281030093;
    tmp_msg_0.query_channel = 65U;
    tmp_msg_0.reply_channel = 206U;
    tmp_msg_0.transponder_delay = 79U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.977079283131;
    msg.y = 0.741790113696;
    msg.var_x = 0.303908828417;
    msg.var_y = 0.688217928357;
    msg.distance = 0.697168176841;

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
    msg.setTimeStamp(0.7009115818);
    msg.setSource(53914U);
    msg.setSourceEntity(80U);
    msg.setDestination(57772U);
    msg.setDestinationEntity(159U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LWPFUNMFZIVMUOWEHNJPGCCBJHRIBZHGQWRXENBXSPLSJSQRXKMTXPZXEBHVKMOIGLYHVTCHUFJEJCJDWTPLYWFMWAYTKRWTEHCKAUDLNYBVVEQVGDNQYEKPNXIQHDNBZJYCMKROYAYGCSRTSRIUCQSRLPNZZAUGBEUOSWNMJDXZXIUIBAGKOZTKLOFFJTDIJHNXOBQGIKOQP");
    tmp_msg_0.lat = 0.457157021498;
    tmp_msg_0.lon = 0.174874080234;
    tmp_msg_0.depth = 0.870187031566;
    tmp_msg_0.query_channel = 193U;
    tmp_msg_0.reply_channel = 83U;
    tmp_msg_0.transponder_delay = 95U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.978669279822;
    msg.y = 0.61935067426;
    msg.var_x = 0.147762958688;
    msg.var_y = 0.955372504211;
    msg.distance = 0.790996408586;

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
    msg.setTimeStamp(0.592318142837);
    msg.setSource(27159U);
    msg.setSourceEntity(96U);
    msg.setDestination(52285U);
    msg.setDestinationEntity(172U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NOTIALPEVIZZVPYNIORHVGDSNJMBJWYWCQTLYUBAJMRBQLCXFJDXGBISAJMXDBGLFSXALLYENYUNAKZMTHVUYFEHAFHSZAVHFKMEVSJBHCWPRSXPOFAJZXKTERUHPMTAEVWLIZKRNZQXLCZQBPDGTOQWDRTYIWYREZDGGDYIKGMLHXWFJCUVXOURZTNONMSCEKIVHOFWCABYHOUQGJGSSIPQFLPCQWETRUFVKUJDNBDKBIE");
    tmp_msg_0.lat = 0.5370832427;
    tmp_msg_0.lon = 0.327539084696;
    tmp_msg_0.depth = 0.958753018042;
    tmp_msg_0.query_channel = 250U;
    tmp_msg_0.reply_channel = 102U;
    tmp_msg_0.transponder_delay = 12U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.493337192296;
    msg.y = 0.10951526603;
    msg.var_x = 0.167307223149;
    msg.var_y = 0.844889320646;
    msg.distance = 0.824434433859;

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
    msg.setTimeStamp(0.546016732006);
    msg.setSource(26496U);
    msg.setSourceEntity(60U);
    msg.setDestination(8205U);
    msg.setDestinationEntity(134U);
    msg.state = 76U;

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
    msg.setTimeStamp(0.894322028899);
    msg.setSource(31105U);
    msg.setSourceEntity(152U);
    msg.setDestination(56772U);
    msg.setDestinationEntity(19U);
    msg.state = 115U;

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
    msg.setTimeStamp(0.412830222245);
    msg.setSource(51288U);
    msg.setSourceEntity(254U);
    msg.setDestination(1069U);
    msg.setDestinationEntity(163U);
    msg.state = 249U;

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
    msg.setTimeStamp(0.495285619416);
    msg.setSource(22413U);
    msg.setSourceEntity(102U);
    msg.setDestination(45379U);
    msg.setDestinationEntity(28U);
    msg.x = 0.00536169881115;
    msg.y = 0.738723878705;
    msg.z = 0.107208742678;

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
    msg.setTimeStamp(0.37773514424);
    msg.setSource(54222U);
    msg.setSourceEntity(127U);
    msg.setDestination(16424U);
    msg.setDestinationEntity(48U);
    msg.x = 0.779808740263;
    msg.y = 0.807521412607;
    msg.z = 0.228406027854;

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
    msg.setTimeStamp(0.046525212575);
    msg.setSource(11949U);
    msg.setSourceEntity(54U);
    msg.setDestination(19797U);
    msg.setDestinationEntity(13U);
    msg.x = 0.600403189346;
    msg.y = 0.543364731043;
    msg.z = 0.627941049146;

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
    msg.setTimeStamp(0.420498633572);
    msg.setSource(28746U);
    msg.setSourceEntity(74U);
    msg.setDestination(36735U);
    msg.setDestinationEntity(165U);
    msg.va = 0.24313680496;
    msg.aoa = 0.105560917765;
    msg.ssa = 0.230499832213;

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
    msg.setTimeStamp(0.24740399904);
    msg.setSource(39690U);
    msg.setSourceEntity(187U);
    msg.setDestination(40731U);
    msg.setDestinationEntity(130U);
    msg.va = 0.797363719683;
    msg.aoa = 0.200848547482;
    msg.ssa = 0.785739269252;

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
    msg.setTimeStamp(0.209629140439);
    msg.setSource(13035U);
    msg.setSourceEntity(143U);
    msg.setDestination(14414U);
    msg.setDestinationEntity(25U);
    msg.va = 0.00162575101493;
    msg.aoa = 0.631857286634;
    msg.ssa = 0.0763856191615;

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
    msg.setTimeStamp(0.831942065266);
    msg.setSource(62022U);
    msg.setSourceEntity(196U);
    msg.setDestination(39139U);
    msg.setDestinationEntity(234U);
    msg.value = 0.604115173391;

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
    msg.setTimeStamp(0.963317725562);
    msg.setSource(55199U);
    msg.setSourceEntity(231U);
    msg.setDestination(50911U);
    msg.setDestinationEntity(109U);
    msg.value = 0.30919285251;

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
    msg.setTimeStamp(0.115829821096);
    msg.setSource(25694U);
    msg.setSourceEntity(145U);
    msg.setDestination(10723U);
    msg.setDestinationEntity(41U);
    msg.value = 0.972318792545;

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
    msg.setTimeStamp(0.823783814434);
    msg.setSource(53396U);
    msg.setSourceEntity(30U);
    msg.setDestination(33729U);
    msg.setDestinationEntity(207U);
    msg.value = 0.524016225979;
    msg.z_units = 127U;

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
    msg.setTimeStamp(0.836324238009);
    msg.setSource(62072U);
    msg.setSourceEntity(10U);
    msg.setDestination(20938U);
    msg.setDestinationEntity(1U);
    msg.value = 0.844474434951;
    msg.z_units = 24U;

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
    msg.setTimeStamp(0.962803535188);
    msg.setSource(17729U);
    msg.setSourceEntity(102U);
    msg.setDestination(56573U);
    msg.setDestinationEntity(61U);
    msg.value = 0.0155987278092;
    msg.z_units = 11U;

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
    msg.setTimeStamp(0.370170522314);
    msg.setSource(55327U);
    msg.setSourceEntity(157U);
    msg.setDestination(17723U);
    msg.setDestinationEntity(150U);
    msg.value = 0.652028999531;
    msg.speed_units = 88U;

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
    msg.setTimeStamp(0.0483373271252);
    msg.setSource(18009U);
    msg.setSourceEntity(239U);
    msg.setDestination(55123U);
    msg.setDestinationEntity(231U);
    msg.value = 0.510373618784;
    msg.speed_units = 227U;

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
    msg.setTimeStamp(0.455976822124);
    msg.setSource(7184U);
    msg.setSourceEntity(105U);
    msg.setDestination(34417U);
    msg.setDestinationEntity(94U);
    msg.value = 0.803220329553;
    msg.speed_units = 81U;

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
    msg.setTimeStamp(0.732776090937);
    msg.setSource(11979U);
    msg.setSourceEntity(212U);
    msg.setDestination(23368U);
    msg.setDestinationEntity(58U);
    msg.value = 0.667129401969;

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
    msg.setTimeStamp(0.827457205349);
    msg.setSource(27968U);
    msg.setSourceEntity(70U);
    msg.setDestination(46410U);
    msg.setDestinationEntity(142U);
    msg.value = 0.999321804422;

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
    msg.setTimeStamp(0.187106406369);
    msg.setSource(4799U);
    msg.setSourceEntity(118U);
    msg.setDestination(22826U);
    msg.setDestinationEntity(88U);
    msg.value = 0.147368445074;

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
    msg.setTimeStamp(0.908153715556);
    msg.setSource(3786U);
    msg.setSourceEntity(6U);
    msg.setDestination(59569U);
    msg.setDestinationEntity(157U);
    msg.value = 0.659679528244;

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
    msg.setTimeStamp(0.412290144539);
    msg.setSource(6871U);
    msg.setSourceEntity(18U);
    msg.setDestination(53772U);
    msg.setDestinationEntity(72U);
    msg.value = 0.591172803746;

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
    msg.setTimeStamp(0.443421679108);
    msg.setSource(47123U);
    msg.setSourceEntity(11U);
    msg.setDestination(37309U);
    msg.setDestinationEntity(63U);
    msg.value = 0.466189970909;

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
    msg.setTimeStamp(0.704200350137);
    msg.setSource(12156U);
    msg.setSourceEntity(37U);
    msg.setDestination(17201U);
    msg.setDestinationEntity(182U);
    msg.value = 0.861876741783;

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
    msg.setTimeStamp(0.54546330156);
    msg.setSource(5342U);
    msg.setSourceEntity(17U);
    msg.setDestination(49465U);
    msg.setDestinationEntity(132U);
    msg.value = 0.731686518697;

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
    msg.setTimeStamp(0.235755885161);
    msg.setSource(56889U);
    msg.setSourceEntity(160U);
    msg.setDestination(47650U);
    msg.setDestinationEntity(192U);
    msg.value = 0.909573511352;

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
    msg.setTimeStamp(0.805990878941);
    msg.setSource(63995U);
    msg.setSourceEntity(13U);
    msg.setDestination(24626U);
    msg.setDestinationEntity(186U);
    msg.path_ref = 316311618U;
    msg.start_lat = 0.263848302855;
    msg.start_lon = 0.100099776437;
    msg.start_z = 0.413601306858;
    msg.start_z_units = 74U;
    msg.end_lat = 0.0778797704927;
    msg.end_lon = 0.903461316904;
    msg.end_z = 0.863965539934;
    msg.end_z_units = 233U;
    msg.speed = 0.180391027752;
    msg.speed_units = 180U;
    msg.lradius = 0.706451912796;
    msg.flags = 85U;

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
    msg.setTimeStamp(0.0587215040569);
    msg.setSource(37188U);
    msg.setSourceEntity(99U);
    msg.setDestination(1336U);
    msg.setDestinationEntity(52U);
    msg.path_ref = 3049064167U;
    msg.start_lat = 0.658533507641;
    msg.start_lon = 0.97616291102;
    msg.start_z = 0.535723157366;
    msg.start_z_units = 226U;
    msg.end_lat = 0.600387828649;
    msg.end_lon = 0.163291198969;
    msg.end_z = 0.69729191147;
    msg.end_z_units = 168U;
    msg.speed = 0.486679090548;
    msg.speed_units = 86U;
    msg.lradius = 0.518823788868;
    msg.flags = 146U;

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
    msg.setTimeStamp(0.29610160527);
    msg.setSource(40854U);
    msg.setSourceEntity(161U);
    msg.setDestination(21219U);
    msg.setDestinationEntity(120U);
    msg.path_ref = 3222843148U;
    msg.start_lat = 0.790210063363;
    msg.start_lon = 0.622700717077;
    msg.start_z = 0.69809334089;
    msg.start_z_units = 248U;
    msg.end_lat = 0.418838426811;
    msg.end_lon = 0.230503050021;
    msg.end_z = 0.294772723121;
    msg.end_z_units = 203U;
    msg.speed = 0.520374008635;
    msg.speed_units = 27U;
    msg.lradius = 0.640097872906;
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
    msg.setTimeStamp(0.562898272675);
    msg.setSource(36310U);
    msg.setSourceEntity(41U);
    msg.setDestination(59563U);
    msg.setDestinationEntity(13U);
    msg.x = 0.85263492068;
    msg.y = 0.0796824288105;
    msg.z = 0.847979161928;
    msg.k = 0.771127000945;
    msg.m = 0.585122766998;
    msg.n = 0.953451481742;
    msg.flags = 48U;

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
    msg.setTimeStamp(0.973415209521);
    msg.setSource(27113U);
    msg.setSourceEntity(216U);
    msg.setDestination(18776U);
    msg.setDestinationEntity(230U);
    msg.x = 0.35135055726;
    msg.y = 0.951623959104;
    msg.z = 0.171453541184;
    msg.k = 0.245565747116;
    msg.m = 0.488344911966;
    msg.n = 0.78873534124;
    msg.flags = 152U;

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
    msg.setTimeStamp(0.202968883647);
    msg.setSource(37805U);
    msg.setSourceEntity(81U);
    msg.setDestination(26002U);
    msg.setDestinationEntity(198U);
    msg.x = 0.239883304469;
    msg.y = 0.952287493551;
    msg.z = 0.198033256087;
    msg.k = 0.813410695356;
    msg.m = 0.0500087727798;
    msg.n = 0.973476905168;
    msg.flags = 183U;

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
    msg.setTimeStamp(0.818848080827);
    msg.setSource(30582U);
    msg.setSourceEntity(223U);
    msg.setDestination(38910U);
    msg.setDestinationEntity(179U);
    msg.value = 0.633186932195;

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
    msg.setTimeStamp(0.307075802199);
    msg.setSource(25948U);
    msg.setSourceEntity(9U);
    msg.setDestination(53284U);
    msg.setDestinationEntity(97U);
    msg.value = 0.149261945951;

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
    msg.setTimeStamp(0.683257953326);
    msg.setSource(24357U);
    msg.setSourceEntity(98U);
    msg.setDestination(15594U);
    msg.setDestinationEntity(132U);
    msg.value = 0.677126094775;

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
    msg.setTimeStamp(0.481543400638);
    msg.setSource(58369U);
    msg.setSourceEntity(243U);
    msg.setDestination(227U);
    msg.setDestinationEntity(18U);
    msg.u = 0.160520536066;
    msg.v = 0.00974746717676;
    msg.w = 0.734713483369;
    msg.p = 0.43065996825;
    msg.q = 0.842236805636;
    msg.r = 0.852397413371;
    msg.flags = 204U;

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
    msg.setTimeStamp(0.759150294089);
    msg.setSource(58821U);
    msg.setSourceEntity(71U);
    msg.setDestination(56811U);
    msg.setDestinationEntity(215U);
    msg.u = 0.340559023037;
    msg.v = 0.909966170479;
    msg.w = 0.94230849206;
    msg.p = 0.225000892066;
    msg.q = 0.957044194561;
    msg.r = 0.139996895993;
    msg.flags = 55U;

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
    msg.setTimeStamp(0.23146499274);
    msg.setSource(50531U);
    msg.setSourceEntity(204U);
    msg.setDestination(13882U);
    msg.setDestinationEntity(32U);
    msg.u = 0.256921101603;
    msg.v = 0.705240459757;
    msg.w = 0.579994419727;
    msg.p = 0.33056082016;
    msg.q = 0.136721350288;
    msg.r = 0.985401963002;
    msg.flags = 113U;

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
    msg.setTimeStamp(0.332940703401);
    msg.setSource(41915U);
    msg.setSourceEntity(44U);
    msg.setDestination(3242U);
    msg.setDestinationEntity(252U);
    msg.path_ref = 1102560338U;
    msg.start_lat = 0.510634573803;
    msg.start_lon = 0.0804482674849;
    msg.start_z = 0.95098236936;
    msg.start_z_units = 244U;
    msg.end_lat = 0.981749382196;
    msg.end_lon = 0.685882104288;
    msg.end_z = 0.430426369398;
    msg.end_z_units = 114U;
    msg.lradius = 0.715343893668;
    msg.flags = 109U;
    msg.x = 0.505393310225;
    msg.y = 0.037981265066;
    msg.z = 0.639786903475;
    msg.vx = 0.897698005376;
    msg.vy = 0.926162710365;
    msg.vz = 0.318909417139;
    msg.course_error = 0.923035192228;
    msg.eta = 5286U;

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
    msg.setTimeStamp(0.05259942217);
    msg.setSource(14521U);
    msg.setSourceEntity(68U);
    msg.setDestination(63698U);
    msg.setDestinationEntity(30U);
    msg.path_ref = 342897051U;
    msg.start_lat = 0.0925020949551;
    msg.start_lon = 0.135375324532;
    msg.start_z = 0.79907579515;
    msg.start_z_units = 97U;
    msg.end_lat = 0.0358237362291;
    msg.end_lon = 0.0273281234551;
    msg.end_z = 0.908357042733;
    msg.end_z_units = 66U;
    msg.lradius = 0.819983594456;
    msg.flags = 136U;
    msg.x = 0.949563838634;
    msg.y = 0.823595705758;
    msg.z = 0.939311479813;
    msg.vx = 0.498644684003;
    msg.vy = 0.686295578056;
    msg.vz = 0.662964809612;
    msg.course_error = 0.96799353599;
    msg.eta = 14685U;

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
    msg.setTimeStamp(0.532182965768);
    msg.setSource(43637U);
    msg.setSourceEntity(253U);
    msg.setDestination(557U);
    msg.setDestinationEntity(31U);
    msg.path_ref = 2741865188U;
    msg.start_lat = 0.356364622316;
    msg.start_lon = 0.678902905417;
    msg.start_z = 0.0140385745442;
    msg.start_z_units = 13U;
    msg.end_lat = 0.553192992422;
    msg.end_lon = 0.411612905448;
    msg.end_z = 0.273445608785;
    msg.end_z_units = 4U;
    msg.lradius = 0.027132765339;
    msg.flags = 53U;
    msg.x = 0.748548867114;
    msg.y = 0.553414254744;
    msg.z = 0.0956161623092;
    msg.vx = 0.319799882712;
    msg.vy = 0.599059697729;
    msg.vz = 0.608283306274;
    msg.course_error = 0.718268763921;
    msg.eta = 37714U;

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
    msg.setTimeStamp(0.675159613954);
    msg.setSource(24401U);
    msg.setSourceEntity(234U);
    msg.setDestination(8445U);
    msg.setDestinationEntity(153U);
    msg.k = 0.282291732027;
    msg.m = 0.890103358081;
    msg.n = 0.491405678;

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
    msg.setTimeStamp(0.517429183555);
    msg.setSource(46476U);
    msg.setSourceEntity(96U);
    msg.setDestination(4036U);
    msg.setDestinationEntity(65U);
    msg.k = 0.727329837538;
    msg.m = 0.425644278072;
    msg.n = 0.505754380662;

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
    msg.setTimeStamp(0.907323814343);
    msg.setSource(22550U);
    msg.setSourceEntity(175U);
    msg.setDestination(10379U);
    msg.setDestinationEntity(248U);
    msg.k = 0.93799306187;
    msg.m = 0.79474477862;
    msg.n = 0.0539265910756;

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
    msg.setTimeStamp(0.0758684462647);
    msg.setSource(28289U);
    msg.setSourceEntity(192U);
    msg.setDestination(52220U);
    msg.setDestinationEntity(198U);
    msg.p = 0.900499753045;
    msg.i = 0.160721451348;
    msg.d = 0.849362012353;
    msg.a = 0.488397522222;

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
    msg.setTimeStamp(0.503680491725);
    msg.setSource(56761U);
    msg.setSourceEntity(22U);
    msg.setDestination(31551U);
    msg.setDestinationEntity(19U);
    msg.p = 0.310258431173;
    msg.i = 0.387035213093;
    msg.d = 0.88401928478;
    msg.a = 0.376163969054;

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
    msg.setTimeStamp(0.062780262185);
    msg.setSource(13740U);
    msg.setSourceEntity(125U);
    msg.setDestination(30916U);
    msg.setDestinationEntity(43U);
    msg.p = 0.573995295315;
    msg.i = 0.286497789729;
    msg.d = 0.994398536322;
    msg.a = 0.301697864594;

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
    msg.setTimeStamp(0.30082196711);
    msg.setSource(14183U);
    msg.setSourceEntity(15U);
    msg.setDestination(43051U);
    msg.setDestinationEntity(152U);
    msg.op = 9U;

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
    msg.setTimeStamp(0.317250221875);
    msg.setSource(14622U);
    msg.setSourceEntity(47U);
    msg.setDestination(8115U);
    msg.setDestinationEntity(51U);
    msg.op = 215U;

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
    msg.setTimeStamp(0.325538244662);
    msg.setSource(32894U);
    msg.setSourceEntity(156U);
    msg.setDestination(11206U);
    msg.setDestinationEntity(169U);
    msg.op = 166U;

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
    msg.setTimeStamp(0.00900558640149);
    msg.setSource(10754U);
    msg.setSourceEntity(62U);
    msg.setDestination(3477U);
    msg.setDestinationEntity(200U);
    msg.x = 0.359241323994;
    msg.y = 0.712015967106;
    msg.z = 0.821640535316;
    msg.vx = 0.803794221935;
    msg.vy = 0.747782799475;
    msg.vz = 0.41447331578;
    msg.ax = 0.196400564539;
    msg.ay = 0.880178662863;
    msg.az = 0.839242966976;
    msg.flags = 49865U;

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
    msg.setTimeStamp(0.901699895302);
    msg.setSource(20688U);
    msg.setSourceEntity(149U);
    msg.setDestination(12626U);
    msg.setDestinationEntity(30U);
    msg.x = 0.986492512264;
    msg.y = 0.0427208730013;
    msg.z = 0.322956416206;
    msg.vx = 0.307515195833;
    msg.vy = 0.354507859865;
    msg.vz = 0.347714434936;
    msg.ax = 0.0551090868293;
    msg.ay = 0.0788226621624;
    msg.az = 0.451772835132;
    msg.flags = 43244U;

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
    msg.setTimeStamp(0.905580564918);
    msg.setSource(1684U);
    msg.setSourceEntity(36U);
    msg.setDestination(57970U);
    msg.setDestinationEntity(79U);
    msg.x = 0.858867972499;
    msg.y = 0.760720880132;
    msg.z = 0.262612300965;
    msg.vx = 0.825100223004;
    msg.vy = 0.186436131979;
    msg.vz = 0.373781815897;
    msg.ax = 0.966679191437;
    msg.ay = 0.652129051496;
    msg.az = 0.929854572833;
    msg.flags = 41587U;

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
    msg.setTimeStamp(0.728911818681);
    msg.setSource(48731U);
    msg.setSourceEntity(26U);
    msg.setDestination(53197U);
    msg.setDestinationEntity(2U);
    msg.value = 0.219140893409;

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
    msg.setTimeStamp(0.940547811079);
    msg.setSource(452U);
    msg.setSourceEntity(181U);
    msg.setDestination(56283U);
    msg.setDestinationEntity(200U);
    msg.value = 0.80438648475;

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
    msg.setTimeStamp(0.604864792568);
    msg.setSource(4664U);
    msg.setSourceEntity(181U);
    msg.setDestination(45847U);
    msg.setDestinationEntity(70U);
    msg.value = 0.931569603266;

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
    msg.setTimeStamp(0.370216872284);
    msg.setSource(31929U);
    msg.setSourceEntity(156U);
    msg.setDestination(63294U);
    msg.setDestinationEntity(57U);
    msg.timeout = 30553U;
    msg.lat = 0.498748742957;
    msg.lon = 0.929464661933;
    msg.z = 0.600623084528;
    msg.z_units = 11U;
    msg.speed = 0.204310022095;
    msg.speed_units = 112U;
    msg.roll = 0.600306298442;
    msg.pitch = 0.0870230137456;
    msg.yaw = 0.831571842453;
    msg.custom.assign("PEYOXMXATOFIEFWYPNZZDKRJKPOWWJTGMZQLPYETKINHX");

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
    msg.setTimeStamp(0.0590637701639);
    msg.setSource(24032U);
    msg.setSourceEntity(13U);
    msg.setDestination(22972U);
    msg.setDestinationEntity(12U);
    msg.timeout = 54734U;
    msg.lat = 0.58085875163;
    msg.lon = 0.5876286849;
    msg.z = 0.379334233338;
    msg.z_units = 35U;
    msg.speed = 0.36784818642;
    msg.speed_units = 195U;
    msg.roll = 0.958568594781;
    msg.pitch = 0.445670392364;
    msg.yaw = 0.723002165851;
    msg.custom.assign("NMIJZKYBCPLUCGGNYHKGX");

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
    msg.setTimeStamp(0.724277920344);
    msg.setSource(24000U);
    msg.setSourceEntity(178U);
    msg.setDestination(62540U);
    msg.setDestinationEntity(37U);
    msg.timeout = 64058U;
    msg.lat = 0.432331125495;
    msg.lon = 0.344196483947;
    msg.z = 0.698794103386;
    msg.z_units = 217U;
    msg.speed = 0.968843409112;
    msg.speed_units = 233U;
    msg.roll = 0.217929400237;
    msg.pitch = 0.594869086486;
    msg.yaw = 0.53722245275;
    msg.custom.assign("LFGYMOXTHSCYKDWFTCQXTQSYMHGQYOFKNTFVMELIYKWQTGSBNMVSLRVXJHYAOQPEZJRPYKGOFJSCDRICZUPAHKPTEZCNKLMJJEJIFOQBQRCKNKQWDOUGOYEUXPMNLCSWTDRBFDRAGSZIRHDHILWEHCLMNVAEULZSGAJTPMOXVWPICHVPXWMZZWCHJAFXAZPPZBIRQIXQEUMKENSODZGJHYNBXBWTUL");

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
    msg.setTimeStamp(0.172089312987);
    msg.setSource(58469U);
    msg.setSourceEntity(219U);
    msg.setDestination(3868U);
    msg.setDestinationEntity(64U);
    msg.timeout = 37923U;
    msg.lat = 0.72950189713;
    msg.lon = 0.135377042587;
    msg.z = 0.493916127583;
    msg.z_units = 225U;
    msg.speed = 0.915502052931;
    msg.speed_units = 193U;
    msg.duration = 18257U;
    msg.radius = 0.202839020533;
    msg.flags = 29U;
    msg.custom.assign("CKOXYKSBVBMOTIVOGZVWHVTCGJENMXBDEDLFLPVCVNOFWTQCFJXHRURQTRHPRLAZVGWMPLSUEYTXPEKVUFXQBJTEHIDKIJWBJJHYUURZFQANMZZKADLWKAAODTHLMIXBAQZKCOGBDQSKOBXSDWWVKRUQGPCNHSIPEZTQMDGEH");

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
    msg.setTimeStamp(0.611551632001);
    msg.setSource(7665U);
    msg.setSourceEntity(96U);
    msg.setDestination(40373U);
    msg.setDestinationEntity(21U);
    msg.timeout = 27162U;
    msg.lat = 0.751794611219;
    msg.lon = 0.431869684611;
    msg.z = 0.440361553507;
    msg.z_units = 141U;
    msg.speed = 0.324163263905;
    msg.speed_units = 244U;
    msg.duration = 22919U;
    msg.radius = 0.551292475755;
    msg.flags = 86U;
    msg.custom.assign("BFRGYEEBYFSLWHZVEYLKLXDUOSCPIWBVIWIRPFOPUFJKBQRUZIOCHPTTOREDARRFMLVHTOJWLFCRXJOAVQAYMZGCATAVNRAXEJOFCTEZLDILBURIAZJMMLXULJGJPUTXS");

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
    msg.setTimeStamp(0.0267568288736);
    msg.setSource(4980U);
    msg.setSourceEntity(87U);
    msg.setDestination(65381U);
    msg.setDestinationEntity(121U);
    msg.timeout = 14034U;
    msg.lat = 0.523915289416;
    msg.lon = 0.106904266687;
    msg.z = 0.689295083118;
    msg.z_units = 48U;
    msg.speed = 0.824042477649;
    msg.speed_units = 39U;
    msg.duration = 22757U;
    msg.radius = 0.10908758503;
    msg.flags = 89U;
    msg.custom.assign("BDWEMVVDPVAPYRGXVXGSJISQSRUCODKOYKGOQUEVWOZAVCMWI");

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
    msg.setTimeStamp(0.480545494586);
    msg.setSource(25209U);
    msg.setSourceEntity(68U);
    msg.setDestination(31167U);
    msg.setDestinationEntity(169U);
    msg.custom.assign("GBZWNGEZIBOCKFNWENJLSQXYJLUCUNTLAVMMQDOCGNDZRCJOASZMVGZCOGVTUAXBQXXBGYYMOTZS");

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
    msg.setTimeStamp(0.549224644553);
    msg.setSource(65199U);
    msg.setSourceEntity(127U);
    msg.setDestination(42994U);
    msg.setDestinationEntity(3U);
    msg.custom.assign("YUEECSHNPHHVQXYGTKLEPNFOBUKDHVCGDSSTWTLUKVLJTQADMXQJHWKLWGIVROLQEOCUOANBYSRNLZDURHNAFYIXQQSABUSRLAPMLDOCMJZIUYJHMUYZVEWQBESEIHOARGFKQZXVKVQOZYRGTWMJVXXYZLJFCPFVQOHJRCSCPYXGVDTSBRTMMRNCCDMNBFBWTNGDUK");

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
    msg.setTimeStamp(0.341597966291);
    msg.setSource(22882U);
    msg.setSourceEntity(253U);
    msg.setDestination(3188U);
    msg.setDestinationEntity(86U);
    msg.custom.assign("GOAMHXFORPKABGVWXYEPZCTBGJRSZFZXXVNBYWSKJTYDTWBLWQWVELAQFNQLYVRPULOVLFRFNSDLPRBNKUGMCHOHJASSCRIHGZYGEIXDZYXNUPUBMKUACUWRCKVAGWEPCIIJVECLGAFXOZJNDQUITCQPDLHLKFTHQZYXGMUHNZCYJAOOTEPSHKDQINRPTHFRUJEEYASQIMDFJVWOZMUKOHIBDGFBVXSQWIMRWJCMQYMNTKDEKIJT");

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
    msg.setTimeStamp(0.244490064906);
    msg.setSource(54137U);
    msg.setSourceEntity(116U);
    msg.setDestination(48189U);
    msg.setDestinationEntity(108U);
    msg.timeout = 4907U;
    msg.lat = 0.288875477102;
    msg.lon = 0.228951165299;
    msg.z = 0.516376791075;
    msg.z_units = 124U;
    msg.duration = 46859U;
    msg.speed = 0.991543680788;
    msg.speed_units = 238U;
    msg.type = 170U;
    msg.radius = 0.888957069724;
    msg.length = 0.0259718196175;
    msg.bearing = 0.854052196923;
    msg.direction = 153U;
    msg.custom.assign("GRDIXFSAJCNLYJMID");

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
    msg.setTimeStamp(0.291325066077);
    msg.setSource(26614U);
    msg.setSourceEntity(88U);
    msg.setDestination(8431U);
    msg.setDestinationEntity(19U);
    msg.timeout = 19165U;
    msg.lat = 0.563268353472;
    msg.lon = 0.0786142676752;
    msg.z = 0.111395407773;
    msg.z_units = 74U;
    msg.duration = 50701U;
    msg.speed = 0.572633692069;
    msg.speed_units = 54U;
    msg.type = 188U;
    msg.radius = 0.0890431597938;
    msg.length = 0.961817677199;
    msg.bearing = 0.750208435993;
    msg.direction = 214U;
    msg.custom.assign("JTPGTXHMEHLUONQGLZECZDEJWEKWVELBQAUAXUFYDXKHDFGFCKCRRVFQIBQEFUKXHYWDTZCCKHZXPQHPLDSOFIWMLWPBSZOMXZQOXVJSBVWJTEAULNBTJRCTREPQVTGIMNZKPGPEHWKITVSTIXRSAPMGNIZSBWYDIQALWFUTUBLNFAMYMYRONKGBUQRJHRJKSLJKJQHNAAXSYVSNDIDAGHOIDBZW");

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
    msg.setTimeStamp(0.831333690938);
    msg.setSource(15562U);
    msg.setSourceEntity(206U);
    msg.setDestination(24183U);
    msg.setDestinationEntity(136U);
    msg.timeout = 17256U;
    msg.lat = 0.526755062423;
    msg.lon = 0.0303181591448;
    msg.z = 0.906709778868;
    msg.z_units = 26U;
    msg.duration = 53223U;
    msg.speed = 0.641715420463;
    msg.speed_units = 43U;
    msg.type = 90U;
    msg.radius = 0.197740926708;
    msg.length = 0.671529910631;
    msg.bearing = 0.229390130769;
    msg.direction = 90U;
    msg.custom.assign("PBQYVDUEXCSZD");

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
    msg.setTimeStamp(0.478223050076);
    msg.setSource(46879U);
    msg.setSourceEntity(43U);
    msg.setDestination(59553U);
    msg.setDestinationEntity(253U);
    msg.duration = 38756U;
    msg.custom.assign("WAFAWLMELQCBPXSZIJFCKWGIKLPDUQOCFFTKFRAEBLBFQBFZGZPASGDENVGLHDURHBUJRZBTXLSHPVUSVRPHQGTWWPZXYCWXPADKMNRSHUDVJIQVMLAFIAMTESGUVCPSCDKBSDZQRNTJNJSCXYOEXVFMLBJYCKJIRMOFNPHAHXTIUJAHOAYMTEKSDQQUKDBMYOVVIYNIJHRWWLDWQCZNZNOLHRYBUTEQTOJGOZVEGIR");

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
    msg.setTimeStamp(0.982382887526);
    msg.setSource(15307U);
    msg.setSourceEntity(131U);
    msg.setDestination(59320U);
    msg.setDestinationEntity(19U);
    msg.duration = 31624U;
    msg.custom.assign("GDLYIUCYCOMOFDXFLQDHOPAURKGPTLEPWDYGB");

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
    msg.setTimeStamp(0.18572831443);
    msg.setSource(62285U);
    msg.setSourceEntity(250U);
    msg.setDestination(45382U);
    msg.setDestinationEntity(253U);
    msg.duration = 36622U;
    msg.custom.assign("OMUYLIMPGZUETMANUTAYECFFD");

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
    msg.setTimeStamp(0.592079104684);
    msg.setSource(54515U);
    msg.setSourceEntity(118U);
    msg.setDestination(60966U);
    msg.setDestinationEntity(168U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.646204216607;
    tmp_msg_0.z_units = 254U;
    msg.control.set(tmp_msg_0);
    msg.duration = 26372U;
    msg.custom.assign("JVUVAZLLQRTPKNPWGLJDMZVCAWWDXCSCHLOUGHKALGLXIXEGRJZWIBIAERSMHNJQRJYPLIFOFUFZJOMVLGBGDYPMEPYLEWECEEREVIYPBFDXRBQZJSBDSYYCWTTOTNTFYQYQSPMKFQXEHMKZBPNWZMXINDTOGNMNNUQFUZDONOATVRZKBRHJHMGKGWPJCFASVCUXFRBXIUTSITWWAQCNCEKKASGUHHZCA");

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
    msg.setTimeStamp(0.893280869806);
    msg.setSource(60980U);
    msg.setSourceEntity(96U);
    msg.setDestination(52378U);
    msg.setDestinationEntity(172U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.385463409401;
    msg.control.set(tmp_msg_0);
    msg.duration = 36506U;
    msg.custom.assign("ESTFJXJRCUHTJMRYWIUWSBYKONUMLHYNEBYZJBQWHAKASUWHEGJESOJFIWSGUOFOGOFIBMCDRPGDKNZEVVGXNHDTCRPPOLIPEQLKOYSWBFBSFWKVSPGZBRDXRVVJBRMRJXVKFYKHDIQDQDYACTMZUVAAFKEDHAMBIPXUNNRXLCUYVBNRYVLCDEZZGHCWQSLNXTOMQIVTUAKAJ");

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
    msg.setTimeStamp(0.428627619976);
    msg.setSource(54215U);
    msg.setSourceEntity(62U);
    msg.setDestination(1365U);
    msg.setDestinationEntity(8U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 921246883U;
    tmp_msg_0.start_lat = 0.431073214895;
    tmp_msg_0.start_lon = 0.0241331170902;
    tmp_msg_0.start_z = 0.276197971338;
    tmp_msg_0.start_z_units = 9U;
    tmp_msg_0.end_lat = 0.404125128225;
    tmp_msg_0.end_lon = 0.537747819004;
    tmp_msg_0.end_z = 0.261613612395;
    tmp_msg_0.end_z_units = 123U;
    tmp_msg_0.speed = 0.0101248509463;
    tmp_msg_0.speed_units = 24U;
    tmp_msg_0.lradius = 0.872401152923;
    tmp_msg_0.flags = 57U;
    msg.control.set(tmp_msg_0);
    msg.duration = 7925U;
    msg.custom.assign("KXLPFXAQQCZVFAYTNBWBHYOIEDNIKPJNZDHKASXMUOOSSSCUGDJHDKYQVNWJZHCMTUMUYTQQOTKWRELBWBQUCOWULMVAYUFCHHTIMRGPLLKVGARBHNSWXIZJDUKQTQIPIEQFCYNSOSFBJMJVPCIJGHBZH");

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
    msg.setTimeStamp(0.361590060459);
    msg.setSource(49177U);
    msg.setSourceEntity(27U);
    msg.setDestination(32908U);
    msg.setDestinationEntity(15U);
    msg.timeout = 10160U;
    msg.lat = 0.894471699927;
    msg.lon = 0.0371658473545;
    msg.z = 0.0158451879257;
    msg.z_units = 85U;
    msg.speed = 0.625369899053;
    msg.speed_units = 91U;
    msg.bearing = 0.522308145877;
    msg.cross_angle = 0.662547151958;
    msg.width = 0.231282599825;
    msg.length = 0.272378976554;
    msg.hstep = 0.0438048473336;
    msg.coff = 93U;
    msg.alternation = 87U;
    msg.flags = 115U;
    msg.custom.assign("LOAMVDHLIMNFWHNASRHNRSSRMNPFGFHYDXXKCOWLVJGKEEDJKODXHHUZRJZOKNBCAJBVXELALGKU");

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
    msg.setTimeStamp(0.212380672658);
    msg.setSource(45570U);
    msg.setSourceEntity(217U);
    msg.setDestination(14046U);
    msg.setDestinationEntity(52U);
    msg.timeout = 42821U;
    msg.lat = 0.714714621981;
    msg.lon = 0.789683781691;
    msg.z = 0.952619919047;
    msg.z_units = 195U;
    msg.speed = 0.245382087097;
    msg.speed_units = 32U;
    msg.bearing = 0.571904319757;
    msg.cross_angle = 0.704172073889;
    msg.width = 0.781018673308;
    msg.length = 0.0595969985952;
    msg.hstep = 0.399254833073;
    msg.coff = 245U;
    msg.alternation = 253U;
    msg.flags = 231U;
    msg.custom.assign("HXPVHWLMPHIFWRTSGVWDYYQYNHPUWWZQUFDICQERTCSZXZHVDZSXAZRMPBARTFXBGFKJPAJIREYRTOXONAPUWDLULEBTDVSGDBCQFFCKCOGAZYRNKSSNTQOLIFBFVDHEJLWIMBYZOQLTMOJUEABKHBMPTONTRMAIGSDYSQVZTKX");

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
    msg.setTimeStamp(0.455635020563);
    msg.setSource(1000U);
    msg.setSourceEntity(114U);
    msg.setDestination(17289U);
    msg.setDestinationEntity(33U);
    msg.timeout = 50463U;
    msg.lat = 0.329442037319;
    msg.lon = 0.391799666011;
    msg.z = 0.608824313529;
    msg.z_units = 238U;
    msg.speed = 0.263562108341;
    msg.speed_units = 84U;
    msg.bearing = 0.826156528086;
    msg.cross_angle = 0.852380863056;
    msg.width = 0.712862550929;
    msg.length = 0.647774697333;
    msg.hstep = 0.657048473945;
    msg.coff = 174U;
    msg.alternation = 82U;
    msg.flags = 43U;
    msg.custom.assign("DSBHMWBKGZURFJWYLJLRGHBZENAFAUNVOHMVXZZLVPRMAAXCRYFYLZMUPNHHQWHGTBMDRQBPDVKOOKYVZHWAJAPXPCOCLSRLNUDOCEFIGKNISPGLDJJ");

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
    msg.setTimeStamp(0.849045412044);
    msg.setSource(60080U);
    msg.setSourceEntity(33U);
    msg.setDestination(33167U);
    msg.setDestinationEntity(0U);
    msg.timeout = 24081U;
    msg.lat = 0.203924989311;
    msg.lon = 0.966935166738;
    msg.z = 0.578379053885;
    msg.z_units = 163U;
    msg.speed = 0.98184026707;
    msg.speed_units = 20U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.475564546151;
    tmp_msg_0.y = 0.58692298571;
    tmp_msg_0.z = 0.182630120131;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KBXECHRNHQVCDFPXOIAAAJGJYPMXGW");

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
    msg.setTimeStamp(0.51793856572);
    msg.setSource(32401U);
    msg.setSourceEntity(204U);
    msg.setDestination(22408U);
    msg.setDestinationEntity(39U);
    msg.timeout = 14799U;
    msg.lat = 0.975181823158;
    msg.lon = 0.639632282798;
    msg.z = 0.232995058728;
    msg.z_units = 202U;
    msg.speed = 0.797212015441;
    msg.speed_units = 37U;
    msg.custom.assign("CTASKYEPIHVVHMLIFRXWJNHAYKIQEWKOEUFAZUZXAUF");

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
    msg.setTimeStamp(0.774567005076);
    msg.setSource(9789U);
    msg.setSourceEntity(162U);
    msg.setDestination(917U);
    msg.setDestinationEntity(103U);
    msg.timeout = 25845U;
    msg.lat = 0.979383038487;
    msg.lon = 0.73031354517;
    msg.z = 0.813335860664;
    msg.z_units = 177U;
    msg.speed = 0.096486626822;
    msg.speed_units = 14U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.866876651167;
    tmp_msg_0.y = 0.714982045593;
    tmp_msg_0.z = 0.831933766456;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RUZPISVZTZHKEKVMAQJNXKEMRMGVFGOAHBBGPEDOGUWDYIGJUCDEGNMMNXMDPALZFQWJDNLURTHZLHKBSHQFFLBHVIWLWJPWTCTSQSDXABHXFRRZDVYYTLOLLGCXZCOBTVKBAUTWYDJKOXSYVPQELJXFCANBACPKOYSENGSFXQLKMFHQFKUDOJQEZNCYTJISPSNQUOXERVKYPBFOYBIAEUTUWMGTAZWIMJOCYUVRERDIIWRAGV");

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
    msg.setTimeStamp(0.820201922774);
    msg.setSource(32467U);
    msg.setSourceEntity(240U);
    msg.setDestination(13067U);
    msg.setDestinationEntity(172U);
    msg.x = 0.700556235611;
    msg.y = 0.776562525724;
    msg.z = 0.139253710769;

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
    msg.setTimeStamp(0.263542760075);
    msg.setSource(38605U);
    msg.setSourceEntity(65U);
    msg.setDestination(63937U);
    msg.setDestinationEntity(210U);
    msg.x = 0.276475143933;
    msg.y = 0.762514658091;
    msg.z = 0.440122992326;

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
    msg.setTimeStamp(0.496944225783);
    msg.setSource(43771U);
    msg.setSourceEntity(27U);
    msg.setDestination(54055U);
    msg.setDestinationEntity(36U);
    msg.x = 0.503057312783;
    msg.y = 0.0166163766661;
    msg.z = 0.9860221915;

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
    msg.setTimeStamp(0.373780822407);
    msg.setSource(21746U);
    msg.setSourceEntity(15U);
    msg.setDestination(5846U);
    msg.setDestinationEntity(203U);
    msg.timeout = 15742U;
    msg.lat = 0.71088433833;
    msg.lon = 0.698164618591;
    msg.z = 0.0914099663358;
    msg.z_units = 212U;
    msg.amplitude = 0.192315037896;
    msg.pitch = 0.174855610357;
    msg.speed = 0.139188305931;
    msg.speed_units = 193U;
    msg.custom.assign("RMEIXLPHLFWAGPRNDXNZAZWVPLAAWUTYDOCKBIHTABRWJTXYNKYEHSVXKFXPJTRVJIDHHUZBSQVCZWUKNMYZGQRSGFQWQKEAONHWPSUJCYYSFZFEAGRTOBMRVPCM");

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
    msg.setTimeStamp(0.388477780365);
    msg.setSource(18486U);
    msg.setSourceEntity(175U);
    msg.setDestination(28832U);
    msg.setDestinationEntity(180U);
    msg.timeout = 34316U;
    msg.lat = 0.909752369519;
    msg.lon = 0.518520768105;
    msg.z = 0.30706119484;
    msg.z_units = 89U;
    msg.amplitude = 0.943435983804;
    msg.pitch = 0.8486316751;
    msg.speed = 0.223780427077;
    msg.speed_units = 249U;
    msg.custom.assign("XHAGAILPKWHQPDYXJRMYHSFMBIRGPDBFAKLEJRIMNVOBAHIFFOUXEIPKZMTPOTPJXHOGLQNUGWBVMWQDIZFPNEGVZGGRNCPCYZAUALUJJUQKRYIQYEZCBPRORYEXCXVAWHTTCMBWSKCCGEHBISOAXYBEKSJDLVQALV");

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
    msg.setTimeStamp(0.0771397723701);
    msg.setSource(62056U);
    msg.setSourceEntity(185U);
    msg.setDestination(18509U);
    msg.setDestinationEntity(203U);
    msg.timeout = 43989U;
    msg.lat = 0.667525315228;
    msg.lon = 0.829696038223;
    msg.z = 0.303573466532;
    msg.z_units = 189U;
    msg.amplitude = 0.427854590821;
    msg.pitch = 0.859332850009;
    msg.speed = 0.994821518103;
    msg.speed_units = 239U;
    msg.custom.assign("TIGRFVZPDWSQMOIDGIKHPUBCKUFROANSZFRWNEEKNTNMDVXQZWQAVABHONHMZXORXESBCCLJLCMEGWRARQVTAOWFSCONUIQYGDBFVPKFBIETQCVXQLLWXLJUVIDAYXKGPGXVZUDEJDIRKUYUJRFKJGJPOGJXJYPZZSIMOPTBGWZNQSWKPHPCCHM");

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
    msg.setTimeStamp(0.119024811524);
    msg.setSource(4951U);
    msg.setSourceEntity(35U);
    msg.setDestination(1818U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.597481596984);
    msg.setSource(19872U);
    msg.setSourceEntity(224U);
    msg.setDestination(14358U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.269080184128);
    msg.setSource(11730U);
    msg.setSourceEntity(149U);
    msg.setDestination(4332U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.577937977183);
    msg.setSource(29854U);
    msg.setSourceEntity(88U);
    msg.setDestination(9596U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.69671092861;
    msg.lon = 0.683521769716;
    msg.z = 0.712506104773;
    msg.z_units = 74U;
    msg.radius = 0.681738104812;
    msg.duration = 45656U;
    msg.speed = 0.341237549191;
    msg.speed_units = 242U;
    msg.custom.assign("BBPJDEHKRNUKDOSCXAOWRYAUWXOZUXDMYBIKIQFFZCCFLWEXQPWYVMLYDNEAIKGBMQNTHENPFLTGKZTEDZUBXIRJYPZQQLOPOMTJWGHMJRVWFOVVNGJRGSOSWGVMKFTRSHLLHIUIVJAOTMYEBEU");

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
    msg.setTimeStamp(0.333733210764);
    msg.setSource(58494U);
    msg.setSourceEntity(73U);
    msg.setDestination(25374U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.165054733298;
    msg.lon = 0.123417881158;
    msg.z = 0.138404355113;
    msg.z_units = 108U;
    msg.radius = 0.528331838667;
    msg.duration = 64021U;
    msg.speed = 0.487234104622;
    msg.speed_units = 243U;
    msg.custom.assign("DQWVQSVMZGECYXAUITFQSBOXBQMPGKGBDAREAMVBZWZNZGFITYQKHURBUQIAGUKVYQTRIPXLWUWLJODNBRTRNIQNDUVHTISSQLLGNC");

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
    msg.setTimeStamp(0.0947817544062);
    msg.setSource(34334U);
    msg.setSourceEntity(172U);
    msg.setDestination(44279U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.689661920304;
    msg.lon = 0.436384157455;
    msg.z = 0.237297755672;
    msg.z_units = 173U;
    msg.radius = 0.529552785022;
    msg.duration = 32480U;
    msg.speed = 0.764990958652;
    msg.speed_units = 58U;
    msg.custom.assign("HFOPYSZGNJAZEUSRLOYHVUTKMVADKFMSITYVJGZOYWLJULXYKBCCJVSQHXYMLQLGNNFBJZSZTUUFTOTHWFCRPJPZLBSKCPEVQOAMNWSYRAEJRJPOIKCISXAWFDKIJRZCMHLXPXPVWCBMWQRBYRUEVTNLRWPNQQIMHIVHGOGXPFXAGDIUODDUTFNCRVIBTENFD");

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
    msg.setTimeStamp(0.861737541521);
    msg.setSource(4577U);
    msg.setSourceEntity(223U);
    msg.setDestination(39827U);
    msg.setDestinationEntity(92U);
    msg.timeout = 23102U;
    msg.flags = 119U;
    msg.lat = 0.664302794054;
    msg.lon = 0.667619124354;
    msg.start_z = 0.0906680785054;
    msg.start_z_units = 131U;
    msg.end_z = 0.872489099879;
    msg.end_z_units = 203U;
    msg.radius = 0.392055417015;
    msg.speed = 0.70069860326;
    msg.speed_units = 220U;
    msg.custom.assign("KWGDZOFKFZOAOKISHCUBMJYGHLWJCNWPFRQTXJXXGQIUDUPMKIPSCENTWKCWILHVEXZJLVZWGQRLUZOYRMTWDOQDVSTHWYEENLRSSDTRRTHJCNXTOAJAIKVVMVMSMAEKKIIZDUBJBYERZACLCXUPBELNXVULXBSJFQXCHVFDFRPDEAUQPWHMGUYFRLBLNNBIESZGODXEGYAIQYOSGFYGGWAOBHDMY");

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
    msg.setTimeStamp(0.641324860956);
    msg.setSource(46379U);
    msg.setSourceEntity(205U);
    msg.setDestination(46546U);
    msg.setDestinationEntity(39U);
    msg.timeout = 22720U;
    msg.flags = 1U;
    msg.lat = 0.724381617054;
    msg.lon = 0.392938219523;
    msg.start_z = 0.394946935117;
    msg.start_z_units = 2U;
    msg.end_z = 0.302209115649;
    msg.end_z_units = 24U;
    msg.radius = 0.509629965085;
    msg.speed = 0.554998357111;
    msg.speed_units = 252U;
    msg.custom.assign("YKMGTQZIMGKWDDIKGVEYFCXIIRTHBUPLGHRTEFYXUYQAOFUEVUYFLSJENCSYFONHHDBVPZNHSSJUSZZQPCRLSBTQMOJQKLGZUNHJIAZOLAENJLADETJRGAUKJLDFVOPHKXRXXFOKCIVOTVRBPRCYOXQYOMIMANJG");

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
    msg.setTimeStamp(0.849101379049);
    msg.setSource(27588U);
    msg.setSourceEntity(151U);
    msg.setDestination(64730U);
    msg.setDestinationEntity(144U);
    msg.timeout = 28324U;
    msg.flags = 130U;
    msg.lat = 0.100224328891;
    msg.lon = 0.506849086963;
    msg.start_z = 0.0222328547617;
    msg.start_z_units = 186U;
    msg.end_z = 0.104868477372;
    msg.end_z_units = 163U;
    msg.radius = 0.321071677472;
    msg.speed = 0.27120417278;
    msg.speed_units = 203U;
    msg.custom.assign("VKTIJTIRKTB");

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
    msg.setTimeStamp(0.992073607674);
    msg.setSource(5063U);
    msg.setSourceEntity(196U);
    msg.setDestination(20832U);
    msg.setDestinationEntity(45U);
    msg.timeout = 16333U;
    msg.lat = 0.110580580654;
    msg.lon = 0.0198986569539;
    msg.z = 0.842761051763;
    msg.z_units = 82U;
    msg.speed = 0.354161470772;
    msg.speed_units = 216U;
    msg.custom.assign("JZTQGRUPCGCBOYTMZVNYWNGJ");

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
    msg.setTimeStamp(0.933246821085);
    msg.setSource(25621U);
    msg.setSourceEntity(85U);
    msg.setDestination(46624U);
    msg.setDestinationEntity(49U);
    msg.timeout = 44223U;
    msg.lat = 0.241559028019;
    msg.lon = 0.222271126946;
    msg.z = 0.956819813723;
    msg.z_units = 174U;
    msg.speed = 0.643623744977;
    msg.speed_units = 232U;
    msg.custom.assign("MQFDMEKHMLTXUMGOVOHJAXXFQITIKV");

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
    msg.setTimeStamp(0.00652066372421);
    msg.setSource(61158U);
    msg.setSourceEntity(203U);
    msg.setDestination(53094U);
    msg.setDestinationEntity(37U);
    msg.timeout = 3338U;
    msg.lat = 0.590942647616;
    msg.lon = 0.46967850468;
    msg.z = 0.481968455047;
    msg.z_units = 83U;
    msg.speed = 0.990125220944;
    msg.speed_units = 231U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.543005137863;
    tmp_msg_0.y = 0.68609770782;
    tmp_msg_0.z = 0.793110185626;
    tmp_msg_0.t = 0.573598686882;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZNWKJHITALGEFKWPQFMNTPXDGUZBROLUMGMYBMVPNMRZIAXENEHUYDYPYIJUXWVOQKPGBRNZCPVBMYJECYAQTYIGKSDYSFXHZFDRUDOHUYWDXIELFPKVTTZQ");

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
    msg.setTimeStamp(0.873820727015);
    msg.setSource(10556U);
    msg.setSourceEntity(98U);
    msg.setDestination(30472U);
    msg.setDestinationEntity(135U);
    msg.x = 0.249843865894;
    msg.y = 0.719809054893;
    msg.z = 0.717994784888;
    msg.t = 0.715840490835;

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
    msg.setTimeStamp(0.765205914044);
    msg.setSource(45721U);
    msg.setSourceEntity(191U);
    msg.setDestination(2977U);
    msg.setDestinationEntity(52U);
    msg.x = 0.7107636707;
    msg.y = 0.309761305584;
    msg.z = 0.650649829322;
    msg.t = 0.399732671832;

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
    msg.setTimeStamp(0.940987940728);
    msg.setSource(28819U);
    msg.setSourceEntity(117U);
    msg.setDestination(14793U);
    msg.setDestinationEntity(181U);
    msg.x = 0.367214895508;
    msg.y = 0.719692362986;
    msg.z = 0.706606520885;
    msg.t = 0.458159324599;

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
    msg.setTimeStamp(0.504407443723);
    msg.setSource(30468U);
    msg.setSourceEntity(152U);
    msg.setDestination(20342U);
    msg.setDestinationEntity(196U);
    msg.timeout = 27921U;
    msg.name.assign("OVARBTJUROWVASLRJOGQZJMNPPZAIBMCMFOJOVNKOXYSNXHUSZDZTJCMECSDKBIUULNEPRFGILUWMWDLHZKVSNQQCVGTLFDFYXMXLSHIBUXSDAWIDQDOPBFDJAKWRZIMEZAGHTLCYXKKPRIVIGNXQTJYUVXHHEWCYIFYEUTASDZQ");
    msg.custom.assign("XPLVRRKNFYSSKKAMBTDCLJODTXKERXMMKWHLVLXBTEHMIXIOGQJBUYKVSMOCLQFZSREWFNINCHKVBCYATHJXPQZUDQWUAGAZUEFJBWAXTPRABVQCGWFEUDFNNGIIJMEMIUQVDBDODPHYFKUZJWELAPWHVJOMBFNQBSOGJYZWOQUXSSCTWOYQPUDDAVLUNCGBKZNKTZHMOYPTPELYRNWMSXZZ");

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
    msg.setTimeStamp(0.798112956665);
    msg.setSource(54015U);
    msg.setSourceEntity(239U);
    msg.setDestination(35588U);
    msg.setDestinationEntity(86U);
    msg.timeout = 65263U;
    msg.name.assign("LOYMSDTBPQSWLUJJNSBQDSRHGITAAKPEFOQ");
    msg.custom.assign("ICOVEGEBHFFYIXZLAQUSJGKRHLBJXSLVACRRQJWQPDNMAULDXZBVWPKPMOBXJWSLZVYXITTJWFSUMOLXHBFKFHDBIBOGFUVPGTBVRDSJPUDFHVZOOBJPKXRIRZRUOGTJTEWQWZCKSAGGKVJCHZOTRNNQNPYZGKHUCMWAEWDSVYAOODVPQDIL");

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
    msg.setTimeStamp(0.48922421544);
    msg.setSource(50584U);
    msg.setSourceEntity(223U);
    msg.setDestination(64539U);
    msg.setDestinationEntity(240U);
    msg.timeout = 5008U;
    msg.name.assign("PDQQXTWSVJQNUCZWMKNPNJNIXEQCLDVYIDVRAAITWYUFFEBYJZGHLCMNGTYVYRWOXLMHQVRJLSBRRUQKDJXEEXFDMHSFGOYOPJZAYKNCVRIEXYZIDTUGCBQTIZCEKPIKGFUVWJODOQLJDGWJZNAFFMBBKMYPBLHGXEYWXASBTVHKLOZWMXKHJPHURXNTVMPATSAVDLPMLIHRSZNKHNCOOFSWCGIFH");
    msg.custom.assign("FENCRXCFYGCHQGZGETNPMVNSJBEKVBNYTPJWVRRODCGQISPZDYDIKUCWJLINOYZUWLTIHYQYSBJQSCRMSPLYZEFWRXXNKZZEDLZAQLLBBJHPHTODBKEHTEMQGNGRHYORGOVTKCUHLYFMQMUUAWXRAATPGCDMIUMIFOJJJWHKKVACKJBKAFOWEVIOSFKGTTWMQVSLAXPPUYASMG");

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
    msg.setTimeStamp(0.448685739216);
    msg.setSource(25386U);
    msg.setSourceEntity(1U);
    msg.setDestination(18221U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.23353107165;
    msg.lon = 0.726035303427;
    msg.z = 0.197193021142;
    msg.z_units = 140U;
    msg.speed = 0.00274559320199;
    msg.speed_units = 18U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 37417U;
    tmp_msg_0.off_x = 0.247401752049;
    tmp_msg_0.off_y = 0.342249811093;
    tmp_msg_0.off_z = 0.542340441937;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.460714983732;
    msg.custom.assign("MRBODABULJZGXQTZIZDJGGASECEJIHAGYRPDBUVVUFAKRRLFXJMBPVHXOKMHWO");

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
    msg.setTimeStamp(0.878730549177);
    msg.setSource(61596U);
    msg.setSourceEntity(175U);
    msg.setDestination(38022U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.360863429984;
    msg.lon = 0.547361843028;
    msg.z = 0.755941629001;
    msg.z_units = 0U;
    msg.speed = 0.0948831280194;
    msg.speed_units = 12U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0451128714084;
    tmp_msg_0.y = 0.296332278097;
    tmp_msg_0.z = 0.695204402769;
    tmp_msg_0.t = 0.871550338247;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.762522616235;
    msg.custom.assign("MAXQHIGGCDVYWPKGXNQYUGWADJKPFTNOLMUXIOORTKFCBCMANLWIIYVKIOGUVWPXTKZFIDEWZAHHGHNKHBCZSEEUQFJYBLFJBRTGWSVVNRQLWCKRYOTSMMXNBDDONPTPLRVQLEPERXDUFSNTFZXMZKTROUIMFBPAQJWQPXCKVZEHRDOQYQLLUSXGHQJSJLINZHABLMKEJYDWYACPAUCITSVAOJXZDFOMWYJHTZS");

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
    msg.setTimeStamp(0.220506863422);
    msg.setSource(2069U);
    msg.setSourceEntity(239U);
    msg.setDestination(21816U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.793621046734;
    msg.lon = 0.741014394081;
    msg.z = 0.448040790121;
    msg.z_units = 169U;
    msg.speed = 0.974818479635;
    msg.speed_units = 111U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 5999U;
    tmp_msg_0.off_x = 0.505093023142;
    tmp_msg_0.off_y = 0.799754771148;
    tmp_msg_0.off_z = 0.92074534281;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.671344648186;
    msg.custom.assign("ETFPFAGWVLAUJYMQJZKPCXADNWICRQDBFBHFERUCBHXUGORAROGOKGDQUPWTXHTRPHXCWJUMDDNDAGWRI");

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
    msg.setTimeStamp(0.0671539118973);
    msg.setSource(452U);
    msg.setSourceEntity(204U);
    msg.setDestination(39977U);
    msg.setDestinationEntity(135U);
    msg.vid = 35001U;
    msg.off_x = 0.535053314187;
    msg.off_y = 0.640492408356;
    msg.off_z = 0.28921936811;

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
    msg.setTimeStamp(0.803465458335);
    msg.setSource(40083U);
    msg.setSourceEntity(84U);
    msg.setDestination(38212U);
    msg.setDestinationEntity(240U);
    msg.vid = 22097U;
    msg.off_x = 0.669247640335;
    msg.off_y = 0.901853289898;
    msg.off_z = 0.258379910774;

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
    msg.setTimeStamp(0.67311417426);
    msg.setSource(26867U);
    msg.setSourceEntity(158U);
    msg.setDestination(41874U);
    msg.setDestinationEntity(189U);
    msg.vid = 54961U;
    msg.off_x = 0.0608124525481;
    msg.off_y = 0.395621620079;
    msg.off_z = 0.229357302355;

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
    msg.setTimeStamp(0.475583283895);
    msg.setSource(29172U);
    msg.setSourceEntity(60U);
    msg.setDestination(2083U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.0781055735818);
    msg.setSource(37915U);
    msg.setSourceEntity(176U);
    msg.setDestination(58258U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.28091760249);
    msg.setSource(58739U);
    msg.setSourceEntity(53U);
    msg.setDestination(60340U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.529141325217);
    msg.setSource(40966U);
    msg.setSourceEntity(121U);
    msg.setDestination(63493U);
    msg.setDestinationEntity(226U);
    msg.mid = 7215U;

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
    msg.setTimeStamp(0.327670183953);
    msg.setSource(33202U);
    msg.setSourceEntity(16U);
    msg.setDestination(49362U);
    msg.setDestinationEntity(135U);
    msg.mid = 58684U;

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
    msg.setTimeStamp(0.941736909782);
    msg.setSource(42608U);
    msg.setSourceEntity(230U);
    msg.setDestination(51820U);
    msg.setDestinationEntity(208U);
    msg.mid = 22622U;

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
    msg.setTimeStamp(0.561924253756);
    msg.setSource(46267U);
    msg.setSourceEntity(133U);
    msg.setDestination(57429U);
    msg.setDestinationEntity(78U);
    msg.state = 171U;
    msg.eta = 55898U;
    msg.info.assign("JBGAHCHVMKHUBAGHKCUYWEXXSSRJYZHHANFHEWXVYLOBYVGNXBJNDCKJUDAKMRJDYSLCWYMCIUUTUIRDFWQLNBCTZOKKTOZPVTPMQZGYIQFBFIGKAPSAZHNLFOOEXEVVVSPSGWNENOIGSYQBRPHDAFMBFCEFQSGBZWZJEQLEWTLJRXAQHIQOEIIPRJXVLCPR");

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
    msg.setTimeStamp(0.415657300677);
    msg.setSource(30059U);
    msg.setSourceEntity(231U);
    msg.setDestination(64627U);
    msg.setDestinationEntity(156U);
    msg.state = 195U;
    msg.eta = 11243U;
    msg.info.assign("KPEEBGMLFTDINDJIEDAFUCUQPNMAYEGEOBKGWYRVKGDPTXYNBSULCQWYTIUFDTHJEZIPGHFZAOWOZYXXOMBWQKQ");

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
    msg.setTimeStamp(0.966882509903);
    msg.setSource(59919U);
    msg.setSourceEntity(123U);
    msg.setDestination(14157U);
    msg.setDestinationEntity(145U);
    msg.state = 59U;
    msg.eta = 55130U;
    msg.info.assign("PNZTONCXFDCILYHMVYOGJCIOHFWARIYGIVRXOGBRAMZPQUTUJQRFRAQIQCSMQFHRZXWKDTBTGFKBIDAOOESTTHSULTBABRMWBVGBQKCPLVKDYKGAFHDNPXIZJVFKQNZNDIYPZIJLCYAEFYHPQGZCMHEBSKUDRZXEHMZWWPLPXEATCSDPVUJXMTKWNJWNWSFT");

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
    msg.setTimeStamp(0.912169110617);
    msg.setSource(5019U);
    msg.setSourceEntity(136U);
    msg.setDestination(44086U);
    msg.setDestinationEntity(40U);
    msg.system = 31548U;
    msg.duration = 45309U;
    msg.speed = 0.9174116031;
    msg.speed_units = 193U;
    msg.x = 0.531750845857;
    msg.y = 0.920744072145;
    msg.z = 0.72645785102;
    msg.z_units = 70U;

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
    msg.setTimeStamp(0.509399707659);
    msg.setSource(1007U);
    msg.setSourceEntity(35U);
    msg.setDestination(62705U);
    msg.setDestinationEntity(215U);
    msg.system = 30994U;
    msg.duration = 16530U;
    msg.speed = 0.0868033540295;
    msg.speed_units = 34U;
    msg.x = 0.730737503098;
    msg.y = 0.586351965896;
    msg.z = 0.65629339648;
    msg.z_units = 180U;

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
    msg.setTimeStamp(0.979543725319);
    msg.setSource(25825U);
    msg.setSourceEntity(108U);
    msg.setDestination(44925U);
    msg.setDestinationEntity(116U);
    msg.system = 742U;
    msg.duration = 52728U;
    msg.speed = 0.685407782191;
    msg.speed_units = 131U;
    msg.x = 0.279917362513;
    msg.y = 0.436706649527;
    msg.z = 0.00236506667669;
    msg.z_units = 224U;

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
    msg.setTimeStamp(0.630832218124);
    msg.setSource(47985U);
    msg.setSourceEntity(103U);
    msg.setDestination(49009U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.398886640208;
    msg.lon = 0.314245956592;
    msg.speed = 0.7534434456;
    msg.speed_units = 245U;
    msg.duration = 11072U;
    msg.sys_a = 27120U;
    msg.sys_b = 25243U;
    msg.move_threshold = 0.0221444681363;

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
    msg.setTimeStamp(0.417558841457);
    msg.setSource(20392U);
    msg.setSourceEntity(142U);
    msg.setDestination(58912U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.126527671501;
    msg.lon = 0.469447164606;
    msg.speed = 0.573971314049;
    msg.speed_units = 155U;
    msg.duration = 58821U;
    msg.sys_a = 39686U;
    msg.sys_b = 12419U;
    msg.move_threshold = 0.162474108348;

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
    msg.setTimeStamp(0.253445336971);
    msg.setSource(19349U);
    msg.setSourceEntity(170U);
    msg.setDestination(33347U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.193336001419;
    msg.lon = 0.927038225632;
    msg.speed = 0.63138358813;
    msg.speed_units = 0U;
    msg.duration = 40275U;
    msg.sys_a = 28524U;
    msg.sys_b = 42053U;
    msg.move_threshold = 0.663725210052;

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
    msg.setTimeStamp(0.317846141561);
    msg.setSource(1372U);
    msg.setSourceEntity(145U);
    msg.setDestination(38135U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.879335550573;
    msg.lon = 0.202892418224;
    msg.z = 0.941926074713;
    msg.z_units = 110U;
    msg.speed = 0.948232384812;
    msg.speed_units = 119U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.278754569312;
    tmp_msg_0.lon = 0.222446927366;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("GIKKZJRHOCPAFCBBTEVYCAFTBUUNQZTEMBNHUTSFZQSXARMJUZGYJGZRKDJOPBGFMVLXOQEDCGJFLXBYRRQVNMSPKPWJDIGTSEMWYVVNYIAWUGEXWFGJLODSZHNOCWBIIOXQUIXFPAOSTSAAYYQGRPQKCFZXSHYBXZKCZVCNVQYHDNLHVUPZOKALLMKXLIMWVAYNECUOCHDRQMMWKMDTITLGRLITLNXJFWWPNREDSFHJDTUQHPJBE");

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
    msg.setTimeStamp(0.0147779867609);
    msg.setSource(11077U);
    msg.setSourceEntity(229U);
    msg.setDestination(46024U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.241372098431;
    msg.lon = 0.0994851158705;
    msg.z = 0.196352185629;
    msg.z_units = 31U;
    msg.speed = 0.768685703381;
    msg.speed_units = 220U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0570979106022;
    tmp_msg_0.lon = 0.818682667979;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("VTMOEUCCDDHTEMUBXTGZKVPELQFQKFEIRSRLMYCPZVZBIZCCAZLNFOXZVEQUXTFCVRBUEAXLSNLRBBAAHWNJWQYXWZIKSKIVNYZTIJJDPPQYCNDBHUWVYSCNJWMMNPGIBKFXJPFWIXUMPSPRRNEHADWOTMSSFBXEESVVNKJIHFQGJXO");

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
    msg.setTimeStamp(0.277277615413);
    msg.setSource(42163U);
    msg.setSourceEntity(39U);
    msg.setDestination(56575U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.451799327771;
    msg.lon = 0.158918899786;
    msg.z = 0.492402650923;
    msg.z_units = 112U;
    msg.speed = 0.883259618146;
    msg.speed_units = 143U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.448853896821;
    tmp_msg_0.lon = 0.524519535371;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("LJFIWFTGILJTEOCIHUPJJIAKVDWHTXNZKMFRMBDSRRYDWFNOUMTMVLWQTCBZGXRISZAUFMUDNPNILJCOZKGLODZDJHAVLYUMBFXOMQCUYVCEZRKXAKOTTKJFXYNSSHDZPEE");

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
    msg.setTimeStamp(0.431801627546);
    msg.setSource(10892U);
    msg.setSourceEntity(182U);
    msg.setDestination(23436U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.96504283721;
    msg.lon = 0.0164622621602;

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
    msg.setTimeStamp(0.28705824539);
    msg.setSource(8783U);
    msg.setSourceEntity(52U);
    msg.setDestination(47372U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.629084597077;
    msg.lon = 0.703410162935;

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
    msg.setTimeStamp(0.0962934769192);
    msg.setSource(34619U);
    msg.setSourceEntity(135U);
    msg.setDestination(25349U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.922193604497;
    msg.lon = 0.802836890895;

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
    msg.setTimeStamp(0.33964683353);
    msg.setSource(44360U);
    msg.setSourceEntity(9U);
    msg.setDestination(36453U);
    msg.setDestinationEntity(85U);
    msg.timeout = 27457U;
    msg.lat = 0.597242275749;
    msg.lon = 0.992833556062;
    msg.z = 0.854986292457;
    msg.z_units = 149U;
    msg.pitch = 0.722202661755;
    msg.amplitude = 0.267203882094;
    msg.duration = 24050U;
    msg.speed = 0.665198239076;
    msg.speed_units = 203U;
    msg.radius = 0.937185041388;
    msg.direction = 43U;
    msg.custom.assign("VMVJOUUFHWYKJEDSNLAUSVGGXUHGJYWGAMFXLYBIQZYNTKETOOWIXQYTVYGGPATILWKRESKURHVQBPVQ");

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
    msg.setTimeStamp(0.566033993201);
    msg.setSource(536U);
    msg.setSourceEntity(140U);
    msg.setDestination(36410U);
    msg.setDestinationEntity(155U);
    msg.timeout = 63643U;
    msg.lat = 0.628841159811;
    msg.lon = 0.877223624214;
    msg.z = 0.655424135255;
    msg.z_units = 171U;
    msg.pitch = 0.825575510697;
    msg.amplitude = 0.208760237499;
    msg.duration = 47892U;
    msg.speed = 0.666373040208;
    msg.speed_units = 200U;
    msg.radius = 0.0167167664629;
    msg.direction = 67U;
    msg.custom.assign("HIVIQTFRMWXHAIXPCXMJCOUMNECIWFDQDLLVKUXJNRMNVCWUFLCCMGGLYUJPYXDJCKWJLVSPLPQSZBMCDAGHCUGVXGIXJNJSZARJHLQYNPLEFWONWUAFGBTURTQHTDTHEZZQJUYBBNSWHRYKKGWRHBGYZTFOLSIMVRTI");

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
    msg.setTimeStamp(0.686998147941);
    msg.setSource(4541U);
    msg.setSourceEntity(181U);
    msg.setDestination(59306U);
    msg.setDestinationEntity(4U);
    msg.timeout = 8775U;
    msg.lat = 0.0177723001414;
    msg.lon = 0.573393664927;
    msg.z = 0.622827149817;
    msg.z_units = 85U;
    msg.pitch = 0.121711855925;
    msg.amplitude = 0.554675475939;
    msg.duration = 61772U;
    msg.speed = 0.638638936605;
    msg.speed_units = 221U;
    msg.radius = 0.802164788235;
    msg.direction = 200U;
    msg.custom.assign("VBNNTUCHOAXJFRSCCQCNHTOVFWRDEMSKPYAWIYMLYZAAKTIEUFXMJCXHAZTVRCIZSWQDFOJNWKUAVSWACJZQNBTFEKG");

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
    msg.setTimeStamp(0.84710293424);
    msg.setSource(48487U);
    msg.setSourceEntity(85U);
    msg.setDestination(4687U);
    msg.setDestinationEntity(236U);
    msg.formation_name.assign("OINAOPCPYWGOSTGCJKWPDSXWKDHQDDQVNXCUHLJWMGTMGQFE");
    msg.reference_frame = 233U;
    msg.custom.assign("ZDDLRQZHEFTTJAQKZMRGAKXWILMCNNXGTLSYHUVHEODPDFFOVGGSJRZUQZJXKMNYIWCUEUIPRRXLTVRLMCTPJRXKEUMGEUINZYJOFLCYZINVHAQHDSIPJONBFQBTQYWESRSLWXGIKVCCIBEAWYOODYNSAHVNBEZKYGTTZMUUFBPCNUGFVLBVDWLFEYVFIVJSAWFPAPHOXWMDPSTKWAQBGLQWRCHKCXJAYHIMUEX");

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
    msg.setTimeStamp(0.0569107876443);
    msg.setSource(30182U);
    msg.setSourceEntity(223U);
    msg.setDestination(64206U);
    msg.setDestinationEntity(164U);
    msg.formation_name.assign("DGINAKKKTGYWRWSEVPOQWVVZPY");
    msg.reference_frame = 210U;
    msg.custom.assign("ZHZZBCQOUDQHIEXLJMZVXFSTRIIHWYZBCALXLUQSPMYKDENHSBXLABSWCONAHAAMMNEINWFLFIIGUIESPWVUWQZKXROWDTEOUDZVORWYBXZNWHJASCVCYTFRPGBYPYJEXRMADZCLLBQVCJHKWDUBFDTJRNYGFEGBUADLWTTOUJSPGMODNKGFQMPOQEYKVQVPPSHACYFROPT");

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
    msg.setTimeStamp(0.0158100909364);
    msg.setSource(59317U);
    msg.setSourceEntity(205U);
    msg.setDestination(36105U);
    msg.setDestinationEntity(109U);
    msg.formation_name.assign("QPPJQPGERBIWZRHFDZGJYDOMSNNZWYVZTRAZOUSDLFNMTGNKJVTHYZFQRANBDCLDKGVXSCJVVOOFMGVJHEXPKBIUDMGSRRXYUAMGOHFIXTPKEQQULRMCQBKMN");
    msg.reference_frame = 174U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 9797U;
    tmp_msg_0.off_x = 0.142897490628;
    tmp_msg_0.off_y = 0.116062228033;
    tmp_msg_0.off_z = 0.267857507575;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ESHHJIKVBQRKBFLYDPMSGXDUWAMXJDXTZKTDWJGEYJNZCTBHQBLEQSXICZBXETDHQEDPZICJOOYZNWVCEWAKHAAWXPPSGOZBYARMOPCAHNRWOVKTGQFLVVDJLZUI");

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
    msg.setTimeStamp(0.515322810962);
    msg.setSource(37376U);
    msg.setSourceEntity(74U);
    msg.setDestination(31892U);
    msg.setDestinationEntity(37U);
    msg.group_name.assign("CBESUQDUYOIAPMHNLJXBXWIDBAXJUZBEQPZMYGZZOLXMJNOEWWNGXAHKXVWEKMISPMBYSDCCLWHYEHRTCEMDHOQZQFYNTGBTHQHRGRRINRAMAQQFEJJTTPSFFDKZLJJCXDFNAUONQGECKIGOZHNWULLRMVSVKHPVUJAXAFTCGLRMDYDKKPSYYVGIILBVOSMSZVEKCUHWTPKCVGPQPSVYJBAXEKVORTOSOIRFFTWBAFLDBZ");
    msg.formation_name.assign("HSDFVNZNCBLBYTVWYJKBHYXJADMGEELFZLRXIOJYOBOSVXUXCGEIBJMFDTPN");
    msg.plan_id.assign("JFOLPWSTJSQTYIWNTBPDDADJQHJPKMAIEGVYJLNSBDKLTUMCADKIDFZQEEHSIZNXUPLFHRASMWZFYQCJGEOZSKVL");
    msg.description.assign("VFIEZJNXMXBOFNRLCNBYQPKZMKKENHASQZCHWBQSHBLJEXPPDDKZCJGWECTYWVDISGKKSRBRBXGOXOJFDPVHHOFUVPYINRYFNTGFIAGWKIOCWONMIYFBMOEXHTWGHRIUNUIWXLJVJLXZAZNROPADIYLMCPEUCDSRTGOLRYSKMMUZZKUKZGPPTPGTSLBMTDFVVGRBOUC");
    msg.leader_speed = 0.0439114832218;
    msg.leader_bank_lim = 0.410032156549;
    msg.pos_sim_err_lim = 0.629363754275;
    msg.pos_sim_err_wrn = 0.224798104381;
    msg.pos_sim_err_timeout = 8974U;
    msg.converg_max = 0.667029908064;
    msg.converg_timeout = 2142U;
    msg.comms_timeout = 48655U;
    msg.turb_lim = 0.416696013063;
    msg.custom.assign("LWWIKNLCLHROMCFUNASXJCGVHWUONNATPREIIMIXAHFOOBNJGMQNOKUWRRVBZRFAFFHR");

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
    msg.setTimeStamp(0.71753447567);
    msg.setSource(50517U);
    msg.setSourceEntity(74U);
    msg.setDestination(19946U);
    msg.setDestinationEntity(159U);
    msg.group_name.assign("QDJGUVQPAOPXBFKTHJYGNHCQSZGMEYBSKLANAFEXEKSPIICUMNTLNRYYFRGCKUAQXGTVJMSXJBCIHMFWKCDEQXEXWMUFWLMYBXHQJYYZQINNTRGZGFDRVOSPFVPJOMDNWTFUOALDYGGLRBIBRKNYGSARIMPVIOEZVWZRSLZDRZBLBBEPWHZEHUTVWPKVOUJOTJLPTLIXQPWNKQXHVWTSVQAOHEUCICKYOFCBEZ");
    msg.formation_name.assign("HJNABHPZECQSDXQLQGCLIPUAVEGLZOKGEBHJCNZCMALYUNJFCHFJYCYILCDFFJVUMSTUYMIBZVKQSATEEXRXJPYXZCYOJZCODXIRMTKUIDFOFNGFVSGPPKKUTVBDMOWKKGSOVAFXZYAQTXNUWLHSWRFPHBGNEONRBKDKKBYWSHGBRGUQWJRLPWALNEORNWIMWWMAYQEHVAURZXIITIBJZEBOCTV");
    msg.plan_id.assign("SUTXAPVRDQVBICOWJGGXHIAMZW");
    msg.description.assign("JIZEYKQAOOCVQKPHHDSTRQPOBULWNBOWXZUDZRJHYZ");
    msg.leader_speed = 0.0274236493256;
    msg.leader_bank_lim = 0.705707421147;
    msg.pos_sim_err_lim = 0.701742944618;
    msg.pos_sim_err_wrn = 0.414967113593;
    msg.pos_sim_err_timeout = 53913U;
    msg.converg_max = 0.457794121925;
    msg.converg_timeout = 53826U;
    msg.comms_timeout = 27451U;
    msg.turb_lim = 0.512686478141;
    msg.custom.assign("IHBTUJPHBYOANJTPTUAJVPEKNNZKSGEYIWMMDAHRRQIFOAXMUYBZRXXGGDEQRDSCZ");

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
    msg.setTimeStamp(0.827631800259);
    msg.setSource(28091U);
    msg.setSourceEntity(204U);
    msg.setDestination(58886U);
    msg.setDestinationEntity(208U);
    msg.group_name.assign("OFJIGFKJNZRXHBMQEVBGPNQLHRWKBKYZKRAEBUJIUVTOYAOQBYPNNIAGQMWUKFDZLBWSVQ");
    msg.formation_name.assign("TVNEDJTAUUBNWDJOWSCBSQGICWHAHBZMTMLOSYEYYEBKMMNWFQZOSQJSVJOFEWPIRRIGUXSEZARZNVWDNHVIGCJLMGDGXIKBFODXMOIPTPDRKITQYSXHPIRRQVBBVDYCTJTUSOFVFTHLPHCXN");
    msg.plan_id.assign("NMSHNEDQMVIZDAINJDIUMFUMONQDBOUBHXEZOXQNXUUEDKBXMLXLHWREVYGKECBNFZCDILRKTYOVXYBFSHZZNTENROJRBJHRPGTUISPUPEUWFAJBKWVJXQFJQLAZRWHYUZAYBIRSHJVCJ");
    msg.description.assign("GYCIWDMKGLVUJZUWNRHXBPBNKVZUASOODSHVDEIQIRQOVXHAZMWZWLKFAHLYXKMYFZUIJGQVQNPJKHFCTWMPKJWNYBFTCEXCTFZSGRJRIIEZJAVALSZULKXAOPKQITYMDCVILTHFSBOOXADMEUPBRWLSVKSUSEDHRBYBAGETWMWHBDLBXEUTUFYJPIQPCC");
    msg.leader_speed = 0.491510354574;
    msg.leader_bank_lim = 0.436409933745;
    msg.pos_sim_err_lim = 0.45770923396;
    msg.pos_sim_err_wrn = 0.0984582892844;
    msg.pos_sim_err_timeout = 60267U;
    msg.converg_max = 0.763115083464;
    msg.converg_timeout = 60853U;
    msg.comms_timeout = 21586U;
    msg.turb_lim = 0.2974492695;
    msg.custom.assign("RSHYYVVDCKHZAVXXTWUQBWMIPKZKBPKFHAWCGEVMOAGYXBTQNNSFBTZBIVKDLJLAIRUMAEAIRZUCJPQUBOZTLONGSTFZJPKJTBRWVEUWMZYBHWEWGHLNICIYJEPOHVBQLNSUNHENFTGDGGGSJZORRQSMCKQYDPWPKFOAMQDIPQLFOJLVRXSTDI");

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
    msg.setTimeStamp(0.0940394404);
    msg.setSource(15779U);
    msg.setSourceEntity(95U);
    msg.setDestination(57416U);
    msg.setDestinationEntity(247U);
    msg.control_src = 13401U;
    msg.control_ent = 44U;
    msg.timeout = 0.996536301364;
    msg.loiter_radius = 0.694030315205;
    msg.altitude_interval = 0.036582243294;

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
    msg.setTimeStamp(0.97373141773);
    msg.setSource(38001U);
    msg.setSourceEntity(193U);
    msg.setDestination(36142U);
    msg.setDestinationEntity(229U);
    msg.control_src = 28063U;
    msg.control_ent = 38U;
    msg.timeout = 0.484722802606;
    msg.loiter_radius = 0.226498996835;
    msg.altitude_interval = 0.880217286118;

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
    msg.setTimeStamp(0.942418555035);
    msg.setSource(59823U);
    msg.setSourceEntity(83U);
    msg.setDestination(21533U);
    msg.setDestinationEntity(113U);
    msg.control_src = 16042U;
    msg.control_ent = 74U;
    msg.timeout = 0.996671979825;
    msg.loiter_radius = 0.19736218538;
    msg.altitude_interval = 0.17533221112;

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
    msg.setTimeStamp(0.497220670329);
    msg.setSource(42307U);
    msg.setSourceEntity(92U);
    msg.setDestination(16777U);
    msg.setDestinationEntity(136U);
    msg.flags = 174U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.660743330505;
    tmp_msg_0.speed_units = 221U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.320132217064;
    tmp_msg_1.z_units = 163U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.547281790488;
    msg.lon = 0.427745486959;
    msg.radius = 0.29065047674;

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
    msg.setTimeStamp(0.0852531431596);
    msg.setSource(5821U);
    msg.setSourceEntity(83U);
    msg.setDestination(2411U);
    msg.setDestinationEntity(55U);
    msg.flags = 115U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.76273613735;
    tmp_msg_0.speed_units = 84U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0586834451627;
    tmp_msg_1.z_units = 55U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.52983988745;
    msg.lon = 0.865819770905;
    msg.radius = 0.203187461834;

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
    msg.setTimeStamp(0.722733902001);
    msg.setSource(10763U);
    msg.setSourceEntity(125U);
    msg.setDestination(22468U);
    msg.setDestinationEntity(78U);
    msg.flags = 132U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.997788373863;
    tmp_msg_0.speed_units = 189U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 2.01402879584e-05;
    tmp_msg_1.z_units = 160U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0147503575742;
    msg.lon = 0.530443104017;
    msg.radius = 0.862871378851;

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
    msg.setTimeStamp(0.200018897443);
    msg.setSource(32047U);
    msg.setSourceEntity(147U);
    msg.setDestination(27242U);
    msg.setDestinationEntity(106U);
    msg.control_src = 56706U;
    msg.control_ent = 44U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 95U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.813415435927;
    tmp_tmp_msg_0_0.speed_units = 165U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.512530965491;
    tmp_tmp_msg_0_1.z_units = 11U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.215000328059;
    tmp_msg_0.lon = 0.244514056435;
    tmp_msg_0.radius = 0.115110942187;
    msg.reference.set(tmp_msg_0);
    msg.state = 157U;
    msg.proximity = 107U;

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
    msg.setTimeStamp(0.337640479906);
    msg.setSource(33739U);
    msg.setSourceEntity(75U);
    msg.setDestination(65388U);
    msg.setDestinationEntity(130U);
    msg.control_src = 2294U;
    msg.control_ent = 239U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 239U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.48636833296;
    tmp_tmp_msg_0_0.speed_units = 9U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.144683906072;
    tmp_tmp_msg_0_1.z_units = 8U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.845796516552;
    tmp_msg_0.lon = 0.553529465908;
    tmp_msg_0.radius = 0.164486477372;
    msg.reference.set(tmp_msg_0);
    msg.state = 135U;
    msg.proximity = 131U;

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
    msg.setTimeStamp(0.864264752704);
    msg.setSource(56332U);
    msg.setSourceEntity(36U);
    msg.setDestination(65172U);
    msg.setDestinationEntity(243U);
    msg.control_src = 58029U;
    msg.control_ent = 248U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 67U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.72874245243;
    tmp_tmp_msg_0_0.speed_units = 224U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.539991522761;
    tmp_tmp_msg_0_1.z_units = 180U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.421910726112;
    tmp_msg_0.lon = 0.454931939674;
    tmp_msg_0.radius = 0.981881270792;
    msg.reference.set(tmp_msg_0);
    msg.state = 238U;
    msg.proximity = 223U;

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
    msg.setTimeStamp(0.758351340515);
    msg.setSource(37173U);
    msg.setSourceEntity(146U);
    msg.setDestination(54496U);
    msg.setDestinationEntity(158U);
    msg.ax_cmd = 0.265358694507;
    msg.ay_cmd = 0.450657677572;
    msg.az_cmd = 0.488229068639;
    msg.ax_des = 0.535980851412;
    msg.ay_des = 0.846584276351;
    msg.az_des = 0.952644123988;
    msg.virt_err_x = 0.656724944751;
    msg.virt_err_y = 0.880146913704;
    msg.virt_err_z = 0.0090476264456;
    msg.surf_fdbk_x = 0.662625386603;
    msg.surf_fdbk_y = 0.344707836107;
    msg.surf_fdbk_z = 0.500817036169;
    msg.surf_unkn_x = 0.734686856398;
    msg.surf_unkn_y = 0.149387540705;
    msg.surf_unkn_z = 0.558446098408;
    msg.ss_x = 0.201802856759;
    msg.ss_y = 0.811561517074;
    msg.ss_z = 0.0194249813767;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("PGTNMRFCYBNQIDEHSYVFUQMXCIETZUJBYCADTKPKDANMNPDIMCEQGCKEIFYQNACWJL");
    tmp_msg_0.dist = 0.521547241141;
    tmp_msg_0.err = 0.409288072135;
    tmp_msg_0.ctrl_imp = 0.368576115513;
    tmp_msg_0.rel_dir_x = 0.727571649817;
    tmp_msg_0.rel_dir_y = 0.586089914451;
    tmp_msg_0.rel_dir_z = 0.0422432548872;
    tmp_msg_0.err_x = 0.624106348118;
    tmp_msg_0.err_y = 0.183229610961;
    tmp_msg_0.err_z = 0.322075252163;
    tmp_msg_0.rf_err_x = 0.924024585855;
    tmp_msg_0.rf_err_y = 0.595918182278;
    tmp_msg_0.rf_err_z = 0.937720751214;
    tmp_msg_0.rf_err_vx = 0.447553443948;
    tmp_msg_0.rf_err_vy = 0.389371574185;
    tmp_msg_0.rf_err_vz = 0.0459384984915;
    tmp_msg_0.ss_x = 0.799480784553;
    tmp_msg_0.ss_y = 0.0325318287701;
    tmp_msg_0.ss_z = 0.981164549362;
    tmp_msg_0.virt_err_x = 0.495354239371;
    tmp_msg_0.virt_err_y = 0.758004894994;
    tmp_msg_0.virt_err_z = 0.085727760075;
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
    msg.setTimeStamp(0.695610243215);
    msg.setSource(3963U);
    msg.setSourceEntity(86U);
    msg.setDestination(12514U);
    msg.setDestinationEntity(108U);
    msg.ax_cmd = 0.370216767543;
    msg.ay_cmd = 0.480957632213;
    msg.az_cmd = 0.931831474107;
    msg.ax_des = 0.493820672027;
    msg.ay_des = 0.753986052012;
    msg.az_des = 0.990657017392;
    msg.virt_err_x = 0.976509323055;
    msg.virt_err_y = 0.32628059072;
    msg.virt_err_z = 0.700631921282;
    msg.surf_fdbk_x = 0.395608665372;
    msg.surf_fdbk_y = 0.99860822676;
    msg.surf_fdbk_z = 0.249808992267;
    msg.surf_unkn_x = 0.264209220258;
    msg.surf_unkn_y = 0.135180808468;
    msg.surf_unkn_z = 0.873304466401;
    msg.ss_x = 0.0512676628566;
    msg.ss_y = 0.401779726653;
    msg.ss_z = 0.961430236294;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("EJIWNITXQUFDLSHXGWZMHVWIQOKRVMWKAYJNVZCLKMNUDCLOMBFUOKUEXZAITTRCSJJXFGEKKKVRWFZXJNEVTHQYLTLSMLQOSMINCYFKPYEELXQWWSOLYUTMMBBSFBYQDBQOFNCYAGHCAZDFKMPGHCHABWZQNPDEGFZADFMRCATOUPLQBANVIBTVEAJCHVUXRGSRTIWJGSDKYJYDRIRUNDXIJABLSBCU");
    tmp_msg_0.dist = 0.733800154397;
    tmp_msg_0.err = 0.297211246441;
    tmp_msg_0.ctrl_imp = 0.583128778446;
    tmp_msg_0.rel_dir_x = 0.814030943149;
    tmp_msg_0.rel_dir_y = 0.911074474125;
    tmp_msg_0.rel_dir_z = 0.135840943228;
    tmp_msg_0.err_x = 0.742278854479;
    tmp_msg_0.err_y = 0.338972322978;
    tmp_msg_0.err_z = 0.829923375013;
    tmp_msg_0.rf_err_x = 0.576967445116;
    tmp_msg_0.rf_err_y = 0.861915555933;
    tmp_msg_0.rf_err_z = 0.454610958525;
    tmp_msg_0.rf_err_vx = 0.963579147468;
    tmp_msg_0.rf_err_vy = 0.510028866604;
    tmp_msg_0.rf_err_vz = 0.6186033184;
    tmp_msg_0.ss_x = 0.789733642231;
    tmp_msg_0.ss_y = 0.683280836391;
    tmp_msg_0.ss_z = 0.354114697253;
    tmp_msg_0.virt_err_x = 0.0236114538361;
    tmp_msg_0.virt_err_y = 0.358992809416;
    tmp_msg_0.virt_err_z = 0.680592942406;
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
    msg.setTimeStamp(0.0857663256629);
    msg.setSource(24456U);
    msg.setSourceEntity(147U);
    msg.setDestination(34545U);
    msg.setDestinationEntity(243U);
    msg.ax_cmd = 0.245266838136;
    msg.ay_cmd = 0.259696245884;
    msg.az_cmd = 0.524731198075;
    msg.ax_des = 0.542077982127;
    msg.ay_des = 0.504667241312;
    msg.az_des = 0.347197313736;
    msg.virt_err_x = 0.731932872132;
    msg.virt_err_y = 0.39208746913;
    msg.virt_err_z = 0.616163123413;
    msg.surf_fdbk_x = 0.452035903822;
    msg.surf_fdbk_y = 0.224636415633;
    msg.surf_fdbk_z = 0.26685045122;
    msg.surf_unkn_x = 0.187022995458;
    msg.surf_unkn_y = 0.24935701349;
    msg.surf_unkn_z = 0.630902410238;
    msg.ss_x = 0.0440912427321;
    msg.ss_y = 0.257279834677;
    msg.ss_z = 0.822306927059;

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
    msg.setTimeStamp(0.876720842995);
    msg.setSource(38114U);
    msg.setSourceEntity(103U);
    msg.setDestination(8999U);
    msg.setDestinationEntity(94U);
    msg.s_id.assign("KPYFOWEUIJGFWJWFUPBQRPEPZULMUUKQYGQVQDYMMAGEEJVBLBXJNBSYYCZAKOZZOZICORZIDDKXFLKCDGAMAWBFTJIRETVTVSHXRYANLENWLEPRFRYXPSSIYFGAHXTMJRBRNGQDLUHKSNUTXBIEVDKUBKWWFWHHWMCONQHCJPMCVXNRAOYVGCBVZAIZHSXNPPYELOTUOSHDSAQNNDZLEGJMTFUORLJMHJCZXHQQGIGTWCVLVICIABOFSDKQX");
    msg.dist = 0.632916325558;
    msg.err = 0.0191436638942;
    msg.ctrl_imp = 0.831789509489;
    msg.rel_dir_x = 0.01582776307;
    msg.rel_dir_y = 0.376822053411;
    msg.rel_dir_z = 0.693436811015;
    msg.err_x = 0.0976398091302;
    msg.err_y = 0.785514783258;
    msg.err_z = 0.320692643622;
    msg.rf_err_x = 0.405528912735;
    msg.rf_err_y = 0.949112077278;
    msg.rf_err_z = 0.887011721386;
    msg.rf_err_vx = 0.736677467736;
    msg.rf_err_vy = 0.955643891854;
    msg.rf_err_vz = 0.721192171743;
    msg.ss_x = 0.845578429905;
    msg.ss_y = 0.742779390632;
    msg.ss_z = 0.834042352596;
    msg.virt_err_x = 0.00490294206217;
    msg.virt_err_y = 0.224943672853;
    msg.virt_err_z = 0.101470611856;

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
    msg.setTimeStamp(0.881218664504);
    msg.setSource(5036U);
    msg.setSourceEntity(190U);
    msg.setDestination(36730U);
    msg.setDestinationEntity(58U);
    msg.s_id.assign("BSKGJBYTHRZZBLEKSJCQYVMGMKHCDDUADDFAYFHFGPLVWKLIKGWRCBUZJEQCGZPJSSYARXRFTTSQYMHUSAAZFWJEHUAUTTLARZEWWLAOVCFPLYEJVRGOPMHLWNOOEKQGNVFUTIZCMWXLMQKDCOVDIXP");
    msg.dist = 0.714671521983;
    msg.err = 0.0793802408586;
    msg.ctrl_imp = 0.311529855788;
    msg.rel_dir_x = 0.328408524009;
    msg.rel_dir_y = 0.229111737091;
    msg.rel_dir_z = 0.475848466317;
    msg.err_x = 0.0748838206163;
    msg.err_y = 0.934572752148;
    msg.err_z = 0.653874330174;
    msg.rf_err_x = 0.683610310791;
    msg.rf_err_y = 0.777198623699;
    msg.rf_err_z = 0.939458091375;
    msg.rf_err_vx = 0.274736995996;
    msg.rf_err_vy = 0.744987229225;
    msg.rf_err_vz = 0.187620705997;
    msg.ss_x = 0.473641122468;
    msg.ss_y = 0.687044035499;
    msg.ss_z = 0.24899638828;
    msg.virt_err_x = 0.771492256327;
    msg.virt_err_y = 0.667950707482;
    msg.virt_err_z = 0.0808510573395;

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
    msg.setTimeStamp(0.969002063259);
    msg.setSource(35011U);
    msg.setSourceEntity(167U);
    msg.setDestination(54125U);
    msg.setDestinationEntity(204U);
    msg.s_id.assign("FROYSGWIMACACEEPMMTKQWYGJOXUFZHPVLWZKYVOSRRVDQOASUWQQLLFFD");
    msg.dist = 0.546598024414;
    msg.err = 0.209211901753;
    msg.ctrl_imp = 0.465141744434;
    msg.rel_dir_x = 0.899114727834;
    msg.rel_dir_y = 0.408915071121;
    msg.rel_dir_z = 0.427848173778;
    msg.err_x = 0.571358971131;
    msg.err_y = 0.497276267847;
    msg.err_z = 0.459786731546;
    msg.rf_err_x = 0.816650675501;
    msg.rf_err_y = 0.48650025559;
    msg.rf_err_z = 0.534895518318;
    msg.rf_err_vx = 0.51251034286;
    msg.rf_err_vy = 0.649567558127;
    msg.rf_err_vz = 0.824509429075;
    msg.ss_x = 0.809150015164;
    msg.ss_y = 0.196189153598;
    msg.ss_z = 0.142559283097;
    msg.virt_err_x = 0.294840122089;
    msg.virt_err_y = 0.596539603264;
    msg.virt_err_z = 0.0516323123625;

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
    msg.setTimeStamp(0.462460818535);
    msg.setSource(52453U);
    msg.setSourceEntity(202U);
    msg.setDestination(13198U);
    msg.setDestinationEntity(104U);
    msg.timeout = 6405U;
    msg.rpm = 0.946333900311;
    msg.direction = 206U;
    msg.custom.assign("KWHJMZIIVNNVBCEJSONUXMJVPEEGUEEXLRRHFBZQKPEAUDKEQXHNFGLQQAKPLOFSQIJSUJTQBHLBAHNSIWPGMTDRTKMRIBFIOYKTOZSNUCZTRXEUKWVSKANOCSIRTGDYFGNYZCGCJLDACHRPBPZHVEUMPNRJMWBDNCDXUWMTXQQBTUBDZ");

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
    msg.setTimeStamp(0.741026710685);
    msg.setSource(53078U);
    msg.setSourceEntity(48U);
    msg.setDestination(23572U);
    msg.setDestinationEntity(214U);
    msg.timeout = 8519U;
    msg.rpm = 0.387436969352;
    msg.direction = 186U;
    msg.custom.assign("IVMDXLYCMSHABOJJRKNHNFDCTLBHMMXZTAJCEJADYQLHEKQXHGBUPOUNQKFOGXVKBHLBLOUCUZRHWFSINLOVUMDSXXSWUSUFVGLDJZBTADWYEPNJOPENCRMRGCYZRTTUSJWZWB");

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
    msg.setTimeStamp(0.639444903338);
    msg.setSource(33785U);
    msg.setSourceEntity(63U);
    msg.setDestination(2899U);
    msg.setDestinationEntity(125U);
    msg.timeout = 65394U;
    msg.rpm = 0.547455252326;
    msg.direction = 206U;
    msg.custom.assign("NUOEBESXXJCFMDHXXVLMNMFOVFNSDGHXOTTLNCKTEDORNEMSIDDHCTBQVKHUYQZSGQIWBSPFAQFUNLLNZMLAHLYOJEOAPYRHOAVURKQRQUCJVJZGJKPZBOEWMWIIXGEL");

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
    msg.setTimeStamp(0.307784347475);
    msg.setSource(55386U);
    msg.setSourceEntity(112U);
    msg.setDestination(50548U);
    msg.setDestinationEntity(82U);
    msg.formation_name.assign("RTQOTJPLHWDAXOQEWXSBOINASHSCJRZNRCXYGMTOCIMERWXPZDQJFUFVRYAJNAKVPEFJVZTXYBADCLLHUYRRTWWCFODKXOGDBLMKFZVPJVEAVBYFNKZXVBWPIZULUJIESLTBBOMXCHFYSLLZLGBBZDFWNQSMMTDQGGQASKKVBIS");
    msg.type = 67U;
    msg.op = 228U;
    msg.group_name.assign("HYNNJBJOKDRPMBUBPQMNEQRXVGQLBFTZKWNCGHJEXGTKXZUWHVLIZFYBIVOQE");
    msg.plan_id.assign("BYPOUNSFDRLMIFGSRKRGRDTBDNVQFWERLAXXQCRWHDWOFJZETUUSZKONVHKWINPHKOULEEPXGJUWTZZGDKYAPMFWTOEYRTLKWMKBTFYHCPLPZCGONHCAIKINCXJWZHBHQCQFDDJYMJMJLVFYOFVYHPCZNRPVJQETJIJJPARQDVGENOOTIO");
    msg.description.assign("HNYZVZKTNLGPHSNVRMTWUXWUSHIZVGYFLSRDEKLZVLQMJUNDZKKZNVOSNSXYLKCXHWVFPECDXHPAHVIGTMWQFJLPBJYJEOYUGOPRSEVQMIOGOEXMRSWCMCQQCURZPOTAEYRZHBGTAAWCGRKLIDLZGMRBLBEEFVUDQWDQFTRTOEUJJS");
    msg.reference_frame = 65U;
    msg.leader_bank_lim = 0.850714631927;
    msg.leader_speed_min = 0.0995371574022;
    msg.leader_speed_max = 0.562150969944;
    msg.leader_alt_min = 0.573819789243;
    msg.leader_alt_max = 0.115840289926;
    msg.pos_sim_err_lim = 0.0759942945434;
    msg.pos_sim_err_wrn = 0.25440334536;
    msg.pos_sim_err_timeout = 45588U;
    msg.converg_max = 0.814566562029;
    msg.converg_timeout = 59168U;
    msg.comms_timeout = 17049U;
    msg.turb_lim = 0.921945417766;
    msg.custom.assign("TTNAHLOPBVIKXCXYNIULALDMYSXNWKYJIXIBPVBHGLJTNMNFOBCNUUJYOJIFPSEQWECCWICWEIOUPWHITEBYFZZFJRZBIYLRRLUNXHJCWJBMQADQFXEONM");

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
    msg.setTimeStamp(0.548636873357);
    msg.setSource(35496U);
    msg.setSourceEntity(171U);
    msg.setDestination(64342U);
    msg.setDestinationEntity(209U);
    msg.formation_name.assign("HFIWYJZWNPNWLZOXAGNLSKARKPFOSXODTXWPFDNVGHHBYPFLBWSOTQOKBPXIOLWQCEWKPTUCWLADKUTINJJYBCICTIC");
    msg.type = 25U;
    msg.op = 95U;
    msg.group_name.assign("INPKRKLNHSUGPDPBHIVOCUTLDSTFTFABXINIAUHQKJVXGAWSMQJDXEGJZPFYULDNPOCVRWTQMYRDYYHMGKSFVHYZMAXQWBCSFXZCKAODERSMYJGZEZZQDKAIBDBWXFXFMAPBSZAJREULBNPVAFOWKROIBOCUJEPUEEWMGJTLGHVNKUQQBCWSZORNWVIPQCUVCJZGJGMNTYRISFORWREWNVECHZKOSJKIDHHAFNMQ");
    msg.plan_id.assign("CMWJBYKGSQBGTWOMPOZYNIHHYNGNNCJPLJWQUMWDNBPVGQJVACTLWHYZALMFUETOYGTTNLEPJZBHMHEWTQUOSCD");
    msg.description.assign("ZSGLQRYHNYHKKRVZFELUYOGDPJDRXXCTYUSICADVYOQOOBWWUHCPKMFERCMMLWOGMQXMHGLPHIUSWIYODEQMDQUFUYTQFBJNTACXLZZZAUEKFSDWCIBOJULFCZAZPHQIKEGUFSVUPBKHFBQJYTTIWPBOGDBRCNDLVLXNNWNQFAJPXATGJGATVLHOKBXXRJDVRHETNIMSEYKWSEZC");
    msg.reference_frame = 172U;
    msg.leader_bank_lim = 0.407274723071;
    msg.leader_speed_min = 0.427055423332;
    msg.leader_speed_max = 0.787064303803;
    msg.leader_alt_min = 0.331693588503;
    msg.leader_alt_max = 0.695545464163;
    msg.pos_sim_err_lim = 0.181359893877;
    msg.pos_sim_err_wrn = 0.660690267024;
    msg.pos_sim_err_timeout = 14373U;
    msg.converg_max = 0.0123184118447;
    msg.converg_timeout = 10558U;
    msg.comms_timeout = 52946U;
    msg.turb_lim = 0.858873611342;
    msg.custom.assign("NHPBXSYWYGJFCVPOTPPZABADINBVGRSBOVKFAJLOQLMUDABTQRBHGVVGGPOWKTZRZYPVBCUXHYQLTHMXAQCEREDZXWNLNLBTPFMYDIXKEDXSGRNUHJAMVCJFFLUORGILYHRTIIWPZUOIXEMSALNYCOIDE");

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
    msg.setTimeStamp(0.290574271765);
    msg.setSource(40060U);
    msg.setSourceEntity(51U);
    msg.setDestination(22692U);
    msg.setDestinationEntity(138U);
    msg.formation_name.assign("OGATNSBNYVKPQFPWRZHQOMUCUEHEQPBFTWSDHGUJXWVQIHZJIGDKEVUWDFJRBXUNQCLYFNQMJDTZEUZBXUSHQWELVEXDRVRCDDSYOZNIEGLAKKYJPWLHVFSAAWBIXVATGLNACRNKMZYYYUNRTVOHMJVBXLICXMLTGBBFCSSXBITMNOUJTMRCOJBPXITZGEJJCQEKPMVTDFKLLIMSAAOQYFSDCIICZWZHPOXDNEAQOFPWRAP");
    msg.type = 136U;
    msg.op = 154U;
    msg.group_name.assign("YIDFESKYRZRBOIVYSEJZWJEMRISVZXMVTDUYJJEQHRENKQVBDICCHCBEAGVKWGTYLPHRUCASYHCETTEIUUGOKHTDJOTASILVGGTDCP");
    msg.plan_id.assign("BTJDEDCROUGKXWZWRABIAWDQVVUCZCWYIZOEFVFAFDZYLXTLKMGIECRNRCQQUOBCPBSQAXQMAEVHRSLQSSHBFVLTHBURPTWTNJMZAFTMMHDKPXMHUODKIYUL");
    msg.description.assign("IILQDSVAUNJXIUPQOOPARLXFEWZZRKBJMHCMNLAYBVX");
    msg.reference_frame = 107U;
    msg.leader_bank_lim = 0.244742404257;
    msg.leader_speed_min = 0.349647909001;
    msg.leader_speed_max = 0.651223223707;
    msg.leader_alt_min = 0.199863842004;
    msg.leader_alt_max = 0.0932475973406;
    msg.pos_sim_err_lim = 0.902742607612;
    msg.pos_sim_err_wrn = 0.458452702377;
    msg.pos_sim_err_timeout = 64950U;
    msg.converg_max = 0.802760018116;
    msg.converg_timeout = 22654U;
    msg.comms_timeout = 3395U;
    msg.turb_lim = 0.988553793516;
    msg.custom.assign("CITMIYZNMOLTFRXTEBJXITUQXBSDBGXOESQZNSUSDEOAYWQYMFCQFRDVHNKCVHJBDNWCYPLMXNILOUMWHLGMUUFRRKVWNKBAIKVSZPGZUIULZXAWJHBDJZOQXVGMUYIRPGALEXYMLDEJQXPUCJTLRPNDXJJBBAYEVYTSHGGISHYKPTPTCONQWWHCZTVKNMHFVRAWPFZZCIOWWDJE");

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
    msg.setTimeStamp(0.33178950425);
    msg.setSource(43311U);
    msg.setSourceEntity(210U);
    msg.setDestination(45616U);
    msg.setDestinationEntity(135U);
    msg.timeout = 2081U;
    msg.lat = 0.118369564407;
    msg.lon = 0.830209571464;
    msg.z = 0.0878214383041;
    msg.z_units = 180U;
    msg.speed = 0.28244995817;
    msg.speed_units = 29U;
    msg.custom.assign("HWCTBWVAYMFUEEPIOXDXEHEIISFGVZGZPFQTYJOBLKMNLYQWXOVZYNQSO");

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
    msg.setTimeStamp(0.537456172042);
    msg.setSource(9229U);
    msg.setSourceEntity(225U);
    msg.setDestination(23438U);
    msg.setDestinationEntity(211U);
    msg.timeout = 52596U;
    msg.lat = 0.106220726198;
    msg.lon = 0.283727509277;
    msg.z = 0.621940768171;
    msg.z_units = 205U;
    msg.speed = 0.575633461466;
    msg.speed_units = 3U;
    msg.custom.assign("PPNDJJHMJVTFVVWNVJDIBBGYWHJPUBWOSSEEDOSSUTTAJCFNSRQCOEMPMQIZBIGGVFCCZQZAKAYIUBKWAWOXVPELXIFUPTYEFYWHOPFDCHANJMIFGGWRYXHQHZQYCDTAXTPGRIKHTRXZOODVKVLLSJDRUMYHESXKZXFQZTSBSWPIFLZMVNLGEZRNXRTLBDHPYHNBBAWLOXRCOVGRWBGCGUEMQZDUUMQTRLJINLCUDAYQ");

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
    msg.setTimeStamp(0.63352046263);
    msg.setSource(51624U);
    msg.setSourceEntity(188U);
    msg.setDestination(55046U);
    msg.setDestinationEntity(1U);
    msg.timeout = 49468U;
    msg.lat = 0.743654999638;
    msg.lon = 0.242736507326;
    msg.z = 0.774632885455;
    msg.z_units = 45U;
    msg.speed = 0.188778188683;
    msg.speed_units = 18U;
    msg.custom.assign("QZJNPUXAELTPPXDBIUFTZRAHQXLBAANEZSEIZUGWEOVCLWSFLCVGYDVWNYOQYDFXHDZSFHGKNJGCOWVAMHGOYVUTGTJAHXFADWYDVTVQKYAJHZGHTUXPMQGHRKNFCKMTSQOKZKDLRBJSDMCMJMHOVRLKISPGPSTUFLPNDRJBZXQQIUXLUGEOCDPCMKZOBQBXBICNLANWSIWEFJYIJIY");

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
    msg.setTimeStamp(0.781861420364);
    msg.setSource(14999U);
    msg.setSourceEntity(22U);
    msg.setDestination(28688U);
    msg.setDestinationEntity(95U);
    msg.timeout = 38933U;
    msg.lat = 0.608074188503;
    msg.lon = 0.554498504185;
    msg.z = 0.953633908175;
    msg.z_units = 133U;
    msg.speed = 0.301509177563;
    msg.speed_units = 204U;
    msg.custom.assign("WTBFZNQHOCIRIAOXVBDLNBUKDBMCAMECLJPOWTEHFNYXTKYOIJFISSSH");

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
    msg.setTimeStamp(0.582150169262);
    msg.setSource(36763U);
    msg.setSourceEntity(222U);
    msg.setDestination(63912U);
    msg.setDestinationEntity(159U);
    msg.timeout = 50966U;
    msg.lat = 0.812069112755;
    msg.lon = 0.899720692375;
    msg.z = 0.15965078194;
    msg.z_units = 82U;
    msg.speed = 0.454663597511;
    msg.speed_units = 8U;
    msg.custom.assign("XUVHOJECNXGKNBMPAFZQLAHTZBQCZVUMDJTNHADSEBEQSKWIZVWVSUUFNKSQMNRMIVKGRPXDWIYGDWEPTHAUKFOYZWALICAYXOXDKSTIBAFSETDWUCLYYRKRIQIWMXOFFVCUTQOLOCAYLJ");

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
    msg.setTimeStamp(0.278525966905);
    msg.setSource(5367U);
    msg.setSourceEntity(1U);
    msg.setDestination(38363U);
    msg.setDestinationEntity(226U);
    msg.timeout = 58830U;
    msg.lat = 0.659768840768;
    msg.lon = 0.0388524544711;
    msg.z = 0.131875136234;
    msg.z_units = 189U;
    msg.speed = 0.866741060753;
    msg.speed_units = 66U;
    msg.custom.assign("UZSJVDPSSHMFOOAPTOVRCGJTHZOCMVOEPCAVQQLYHWMKUYDHLVPZHBGHPABNGNVFDIUIUVFLOGGBRJWRMZZDWRUQETPAYTMMAFMLWJKOWBGUOYTQBKXTCSJGXLOAKELRXGRCIAHLKINJEPBEZAMEFKDFZAWB");

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
    msg.setTimeStamp(0.884184470924);
    msg.setSource(50427U);
    msg.setSourceEntity(170U);
    msg.setDestination(51368U);
    msg.setDestinationEntity(111U);
    msg.arrival_time = 0.844956808084;
    msg.lat = 0.0012888188644;
    msg.lon = 0.105237312623;
    msg.z = 0.513466915638;
    msg.z_units = 142U;
    msg.travel_z = 0.739251144895;
    msg.travel_z_units = 68U;
    msg.delayed = 22U;

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
    msg.setTimeStamp(0.237602308455);
    msg.setSource(64607U);
    msg.setSourceEntity(205U);
    msg.setDestination(27857U);
    msg.setDestinationEntity(111U);
    msg.arrival_time = 0.996498605652;
    msg.lat = 0.914562442321;
    msg.lon = 0.776856957086;
    msg.z = 0.568528896445;
    msg.z_units = 193U;
    msg.travel_z = 0.294578066245;
    msg.travel_z_units = 1U;
    msg.delayed = 97U;

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
    msg.setTimeStamp(0.0990673189486);
    msg.setSource(26456U);
    msg.setSourceEntity(111U);
    msg.setDestination(57112U);
    msg.setDestinationEntity(4U);
    msg.arrival_time = 0.994331469039;
    msg.lat = 0.679908402036;
    msg.lon = 0.504261116342;
    msg.z = 0.452059907196;
    msg.z_units = 114U;
    msg.travel_z = 0.478166293278;
    msg.travel_z_units = 242U;
    msg.delayed = 240U;

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
    msg.setTimeStamp(0.809125579524);
    msg.setSource(390U);
    msg.setSourceEntity(226U);
    msg.setDestination(6271U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.113607996929;
    msg.lon = 0.848486122827;
    msg.z = 0.413967536258;
    msg.z_units = 215U;
    msg.speed = 0.0390452822317;
    msg.speed_units = 191U;
    msg.bearing = 0.993991677273;
    msg.cross_angle = 0.742416781263;
    msg.width = 0.0625822471061;
    msg.length = 0.207227178337;
    msg.coff = 161U;
    msg.angaperture = 0.0396543703385;
    msg.range = 8211U;
    msg.overlap = 213U;
    msg.flags = 69U;
    msg.custom.assign("KIYQHKRGMDVVHCNHEMJMLCBJFNRRNQOJFZIOQPPGNNUIAECATRUIXQJWCELQFRLZZVIQNVQCJOBPILFZXKVWWTYXIKAXDMHZWADSERTICHNXBAUPKSTPOYZXOAKQHVSSABDBSIBBARWZTFEUFXMDAILDWDJVUHOLOVXGYYGYBVTCPEOSFEUCKNPEGPTNMBLYSCYUKUDQG");

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
    msg.setTimeStamp(0.231781031945);
    msg.setSource(7072U);
    msg.setSourceEntity(8U);
    msg.setDestination(24020U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.923059386311;
    msg.lon = 0.194955716916;
    msg.z = 0.399351918349;
    msg.z_units = 9U;
    msg.speed = 0.0562914217425;
    msg.speed_units = 49U;
    msg.bearing = 0.322861545134;
    msg.cross_angle = 0.417028910988;
    msg.width = 0.081859254542;
    msg.length = 0.898149382046;
    msg.coff = 226U;
    msg.angaperture = 0.0188378542278;
    msg.range = 34371U;
    msg.overlap = 35U;
    msg.flags = 179U;
    msg.custom.assign("QBAHWKNOIZLCDFNVEVUAOFIHGGONVXJIQJTDKQZYQPWT");

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
    msg.setTimeStamp(0.00780176257035);
    msg.setSource(18956U);
    msg.setSourceEntity(180U);
    msg.setDestination(25809U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.447494310276;
    msg.lon = 0.062773499407;
    msg.z = 0.0579725380715;
    msg.z_units = 247U;
    msg.speed = 0.597681443916;
    msg.speed_units = 92U;
    msg.bearing = 0.209165425923;
    msg.cross_angle = 0.317020401663;
    msg.width = 0.551911342606;
    msg.length = 0.894492360613;
    msg.coff = 223U;
    msg.angaperture = 0.925794102029;
    msg.range = 21356U;
    msg.overlap = 221U;
    msg.flags = 13U;
    msg.custom.assign("XRDQGJOMQFNDVHLEIDKTPMMNVIDCDZGJOZHDBULNAJSFBMWACVIVWWNORHHKVPZBAWYLIWSPRIG");

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
    msg.setTimeStamp(0.642670836617);
    msg.setSource(57404U);
    msg.setSourceEntity(51U);
    msg.setDestination(56754U);
    msg.setDestinationEntity(89U);
    msg.timeout = 45693U;
    msg.lat = 0.264566828356;
    msg.lon = 0.747511619323;
    msg.z = 0.446837612539;
    msg.z_units = 105U;
    msg.speed = 0.356916858498;
    msg.speed_units = 87U;
    msg.syringe0 = 65U;
    msg.syringe1 = 111U;
    msg.syringe2 = 207U;
    msg.custom.assign("IGNRDBURMJJADZPLBWKIDMTNZODIWSADVWLAKMSXEQTGVQBGTJNJYRJNYOPCZETVJMYCPMNBDJZRLWGQMEFHCYLGDSIFMZXHLXAAHOKEOMMYFQAWKHSGITAPUVCNAHFETYBKEPEHXBANIQCGKPJHUUIWOFSBOBSZKPYRLPSZDWLVIUKLELRZQQCJTNCIXLHQCOUUGFDHROZWKOEXWFFVFSIUV");

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
    msg.setTimeStamp(0.0781845688051);
    msg.setSource(32445U);
    msg.setSourceEntity(220U);
    msg.setDestination(62604U);
    msg.setDestinationEntity(239U);
    msg.timeout = 52792U;
    msg.lat = 0.91031050667;
    msg.lon = 0.722498218076;
    msg.z = 0.936749402685;
    msg.z_units = 34U;
    msg.speed = 0.624930646206;
    msg.speed_units = 117U;
    msg.syringe0 = 75U;
    msg.syringe1 = 248U;
    msg.syringe2 = 60U;
    msg.custom.assign("SWBPFJASXMEXEUWRKUQFVGJKGNRYGJAOCLUFYZLFNDHSQWPHWARDIIJXKHOFINCBDQQVAEZPKIWUBGEAKZPHNXZVSPPHABWOYZOBXJNSSODWKADOZULHLYKTEFQDRSPDUELBQTOJAVREPNIYVNJQIKMHUYZRWMICRATGFPGSCBVNMCLYDFKXTBZXLDSXINZWLJABHGYSQVTTQX");

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
    msg.setTimeStamp(0.291411365152);
    msg.setSource(7389U);
    msg.setSourceEntity(240U);
    msg.setDestination(43856U);
    msg.setDestinationEntity(55U);
    msg.timeout = 60739U;
    msg.lat = 0.724774274382;
    msg.lon = 0.311876483281;
    msg.z = 0.0423813156758;
    msg.z_units = 170U;
    msg.speed = 0.404788595815;
    msg.speed_units = 80U;
    msg.syringe0 = 252U;
    msg.syringe1 = 143U;
    msg.syringe2 = 126U;
    msg.custom.assign("PECOVYWFTEXAISBRATHDCUBGVNBWMGNRYZISDRKDONVOHRFFIRHXBTTWONFBLZNVYWXUIQKADILUOJOMAKEJPFSXVDBPQRFGDVTOTLBPQLKERCHCJGTEVWLEXDSUCJK");

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
    msg.setTimeStamp(0.638417649168);
    msg.setSource(15879U);
    msg.setSourceEntity(118U);
    msg.setDestination(36116U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.761187985636);
    msg.setSource(64975U);
    msg.setSourceEntity(6U);
    msg.setDestination(40385U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.850978010619);
    msg.setSource(61970U);
    msg.setSourceEntity(8U);
    msg.setDestination(51254U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.728412207333);
    msg.setSource(37557U);
    msg.setSourceEntity(108U);
    msg.setDestination(8554U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.849947854742;
    msg.lon = 0.0563186305091;
    msg.z = 0.764567990038;
    msg.z_units = 156U;
    msg.speed = 0.208583877838;
    msg.speed_units = 124U;
    msg.takeoff_pitch = 0.962153977574;
    msg.custom.assign("MQUAOFZGZNBVROXYRNMYXLHIDSEUPYZFPEVWUCWELWDWBLHYOVRSOOYKKTRGNKJGOTRXMVBRGNICACNLCUQLXTTPSZMDIDUMMEPBWJDXHAGPQGJJIQKXSQJLGGUPIHRAJGAXBLTRPENFM");

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
    msg.setTimeStamp(0.66140393868);
    msg.setSource(16919U);
    msg.setSourceEntity(39U);
    msg.setDestination(48932U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.797166446163;
    msg.lon = 0.938632146098;
    msg.z = 0.888566401881;
    msg.z_units = 18U;
    msg.speed = 0.0980946127296;
    msg.speed_units = 42U;
    msg.takeoff_pitch = 0.519077747323;
    msg.custom.assign("PUQVRRMBEFQUYFKUACZ");

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
    msg.setTimeStamp(0.183562182009);
    msg.setSource(60158U);
    msg.setSourceEntity(93U);
    msg.setDestination(26161U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.537427905159;
    msg.lon = 0.874676339545;
    msg.z = 0.0557070121538;
    msg.z_units = 231U;
    msg.speed = 0.455901657139;
    msg.speed_units = 36U;
    msg.takeoff_pitch = 0.778243541599;
    msg.custom.assign("DIHUKRXYPENYKDICLLGAFCTRQLTQYPOSWTVEUYAKWIACGNQEQMAROAFFIXFHLVPGXZVUJOGVPLPZQCVGSAWYXQDBMPQH");

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
    msg.setTimeStamp(0.119322599695);
    msg.setSource(8321U);
    msg.setSourceEntity(108U);
    msg.setDestination(39894U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.275001436421;
    msg.lon = 0.781036909604;
    msg.z = 0.760624729328;
    msg.z_units = 117U;
    msg.speed = 0.904121552766;
    msg.speed_units = 159U;
    msg.abort_z = 0.589034095973;
    msg.bearing = 0.695444528578;
    msg.glide_slope = 19U;
    msg.glide_slope_alt = 0.204698655492;
    msg.custom.assign("TVYVLDNPYMSMKDLIQVVSXPBAZQHYEWZMRWUZDROXTBIRKMRVOKJNBOHEKJHUYTJCZRJFBIDWFOPBZWYRNRYSYNEFJCCUJLXDBILLGSHWKNHGCQYTEFRPUSVGXOWDOGLDOAECICPTDGREYQKNUKN");

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
    msg.setTimeStamp(0.0893388628441);
    msg.setSource(47263U);
    msg.setSourceEntity(9U);
    msg.setDestination(31414U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.033722666504;
    msg.lon = 0.226950526543;
    msg.z = 0.95447656987;
    msg.z_units = 6U;
    msg.speed = 0.687619904738;
    msg.speed_units = 48U;
    msg.abort_z = 0.839847254093;
    msg.bearing = 0.859561122422;
    msg.glide_slope = 57U;
    msg.glide_slope_alt = 0.638512665045;
    msg.custom.assign("WRLDUOCFLPEXNRZOQLKCJGFDDGZXPXVGESGRMXRQWQEXNUPVXUGGBHNJGRDMHTQUTMTVYFFHKWMKQQXRKZVJFBDYTBLVYXIMJHMARZYCKAWUANFVCUSOBCLYMMICLHNQGOWHDNZCJOGPZELEQTIYWMZCFQAZEARFJAOKVN");

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
    msg.setTimeStamp(0.52315144067);
    msg.setSource(49819U);
    msg.setSourceEntity(85U);
    msg.setDestination(20296U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.449490177904;
    msg.lon = 0.758121912341;
    msg.z = 0.765056262442;
    msg.z_units = 4U;
    msg.speed = 0.219257563559;
    msg.speed_units = 134U;
    msg.abort_z = 0.372498185085;
    msg.bearing = 0.827255670543;
    msg.glide_slope = 51U;
    msg.glide_slope_alt = 0.243548438713;
    msg.custom.assign("RJIQXXWUFZHKLFVGRHKIMKMCJRRMOAMTCFSXNFLUWNPSOSPTLWZYSVYGROBTGBIFOQTSEWOBKZUAVGLVKTQYTVRIHOGRBQNRHLPIJAYDVEOJHZJLOCYTWDCHXBIMZHPNFUGIEPZEFMLDTLJWKQULFXAYQDPQWCEXYUNPMXJDPZYVNOBAAHGNUCWBCDHKBINIEAEMSGKYIUSFOFSCMVZKBPTTDCAACKJGDREEQSMNNVRJQJ");

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
    msg.setTimeStamp(0.855299998582);
    msg.setSource(1769U);
    msg.setSourceEntity(151U);
    msg.setDestination(63771U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.037408743924;
    msg.lon = 0.239994003802;
    msg.speed = 0.373860401566;
    msg.speed_units = 166U;
    msg.limits = 113U;
    msg.max_depth = 0.0898357517613;
    msg.min_alt = 0.293398443175;
    msg.time_limit = 0.554531467562;
    msg.controller.assign("TDATIIXZUQPVQVPZOLNHKOEYQXVUJSCIBYGRJLELKXIDFWWROFUXSMFKBKEHTUSROFRJZGSJTIOOHOCRIRVYTHEUDJWZSCZLTLDRNIUXBBKFDECGVWZHWBNBBHLAPVELNAGGKPFEGASCLGNSORICVQUYCZIYWJLSOMXRYZEGTJFGDAWM");
    msg.custom.assign("DALFVXQNLVOZDERXMWGLRQHBYL");

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
    msg.setTimeStamp(0.109719522978);
    msg.setSource(22033U);
    msg.setSourceEntity(115U);
    msg.setDestination(482U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.369002197758;
    msg.lon = 0.161970263769;
    msg.speed = 0.0787021761855;
    msg.speed_units = 136U;
    msg.limits = 77U;
    msg.max_depth = 0.972004068067;
    msg.min_alt = 0.924502337092;
    msg.time_limit = 0.0769639466686;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.685958018719;
    tmp_msg_0.lon = 0.171202706462;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("USMQKYOZIYGPVDRDULTDAHLEUCLYXTWOHOOIBNTQIXCDUPBQXZDLSGLDKLJRPMBAYMXHACLFCGSQWIAAXOLIZWWFKJCEJNAKZKXRZUMVKWESSFQDPRZENBHIUTRVKMVCIMPYWRGGEJ");
    msg.custom.assign("SONKXUMBCLXPVWZNESUTFLXAVFCHVMPJJRIDAVOPWGELECVQUBXAIGXXFZMDFTMVJMTRASEQZUWPHCGMYOYTHQGARXZOMIOTRIOQMBKNDOUSKZWDGSPADDWCBYYLSFZOJISSFVYNWQAPUVDFJMBQIISFRCB");

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
    msg.setTimeStamp(0.380461886982);
    msg.setSource(12359U);
    msg.setSourceEntity(60U);
    msg.setDestination(32747U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.624181271577;
    msg.lon = 0.356085834988;
    msg.speed = 0.950240727806;
    msg.speed_units = 81U;
    msg.limits = 139U;
    msg.max_depth = 0.705807034489;
    msg.min_alt = 0.869285611646;
    msg.time_limit = 0.137531230262;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.610951445773;
    tmp_msg_0.lon = 0.719796842502;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("BSTQBFMIQHAJCHDYFXLKATVKEQTCMIGVNVNKZNAYYUOXXNBQDCRHIDMNBHYYKXUNBHXRLFEGCOCECRPJAGGBWQESZZP");
    msg.custom.assign("CFIETKSRYHXLQTPAWPKWBSYELDPVPPSNOKJECOPCYOHXFCRULHDJRQNHWMHIMTOSSIVXIUOOXOVDINFKKVLHXIQKXELYMQCZUMOFSJGGBVGXZCMFAZWRPDMBEBPDBICRDZUYYZTQFUISDAYLKNTNQGAJTXLMLGKFARRBJPZOTHG");

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
    msg.setTimeStamp(0.160655082204);
    msg.setSource(2441U);
    msg.setSourceEntity(220U);
    msg.setDestination(2896U);
    msg.setDestinationEntity(140U);
    msg.target.assign("VAWJPUZQLWYQIINKCEYKFPJRSAVPRXXAVZZTTAPPJFVMGARWRGTRLBONEBXUZLBIYNCJWKKEHHJCVACXQBBQMSPVXZXPBDJGPVQHCHTTIQKGMMFDSIDDIKJJAQGWOGOWRWNDLRT");
    msg.max_speed = 0.564088095435;
    msg.speed_units = 195U;
    msg.lat = 0.728962010451;
    msg.lon = 0.981721359516;
    msg.z = 0.25624996672;
    msg.z_units = 167U;
    msg.custom.assign("WHJXCDMDBQGNDZFUTWTZCJNGFIAYYHVBJKHLEKZVEOFPTRQSCAKQTQJYLZWEOIYUBAFONEPWUUPWOUVHZVODP");

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
    msg.setTimeStamp(0.484032324933);
    msg.setSource(6149U);
    msg.setSourceEntity(25U);
    msg.setDestination(52855U);
    msg.setDestinationEntity(191U);
    msg.target.assign("PQWFELDVVBJHDYSARWUMVTYXSJMMHIKDQBMPJGTPZQMEQAZXENACNSKNRWYICWDGDMKHBZNCFZZDJPCXSXROELT");
    msg.max_speed = 0.432982764709;
    msg.speed_units = 94U;
    msg.lat = 0.719786662668;
    msg.lon = 0.910149448534;
    msg.z = 0.447570974312;
    msg.z_units = 155U;
    msg.custom.assign("WJRBUQOGLAPVMKHUJNTOCVWQSPSKWMVASCTYYPBASVJEVLELHTLJZCBPXUQPNUGIKOTETFZHDKINBTQQGDABUMQLDLHTDYSGMOEYHIMFCNEUKMFKC");

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
    msg.setTimeStamp(0.178833073915);
    msg.setSource(60949U);
    msg.setSourceEntity(99U);
    msg.setDestination(5225U);
    msg.setDestinationEntity(142U);
    msg.target.assign("OZXWBXUCHQMELZUAAIQYRFU");
    msg.max_speed = 0.88955282123;
    msg.speed_units = 9U;
    msg.lat = 0.38856895546;
    msg.lon = 0.927806246006;
    msg.z = 0.683533051759;
    msg.z_units = 31U;
    msg.custom.assign("DFYVIYOLYZGNEXOCIYWJTNQDXSUTUVFWNRUFWCF");

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
    msg.setTimeStamp(0.988095642476);
    msg.setSource(27729U);
    msg.setSourceEntity(69U);
    msg.setDestination(56428U);
    msg.setDestinationEntity(45U);
    msg.op_mode = 58U;
    msg.error_count = 166U;
    msg.error_ents.assign("EORLKNXVKDSHMZSOJIUIAVPBBXPSYHUXRNGPKENUYZLGDWOQICFTPCLKFAKDNMLXJ");
    msg.maneuver_type = 59469U;
    msg.maneuver_stime = 0.286204888109;
    msg.maneuver_eta = 37659U;
    msg.control_loops = 2240369187U;
    msg.flags = 84U;
    msg.last_error.assign("LQCMPXYYIHFVWHMKSUKSFJXBERMWSPFXCOJNPUAPZNBMQZKQIBCTOULTVCRDFXPTVKJAGXZBXRZZYKFZJWADTYEEEIDPKMRDIJFDLPQOGEIXALZLGIDNGJSABHEWERBT");
    msg.last_error_time = 0.301103516912;

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
    msg.setTimeStamp(0.580007230765);
    msg.setSource(59726U);
    msg.setSourceEntity(200U);
    msg.setDestination(42858U);
    msg.setDestinationEntity(11U);
    msg.op_mode = 68U;
    msg.error_count = 185U;
    msg.error_ents.assign("FTGUIYKVAKRUOAXTWUHDJLGMQJHNQUWSYPIRVPESFILLXYTIFRZOOABQOQFNJLLBBXGGFVBNIQDCUMHYBC");
    msg.maneuver_type = 55119U;
    msg.maneuver_stime = 0.189888611078;
    msg.maneuver_eta = 13570U;
    msg.control_loops = 3361394611U;
    msg.flags = 96U;
    msg.last_error.assign("VMYYIYTUOBRSFUYAALCIUULMVJKJCBOGMPCPBGJJPFSLZMINBTVDGSOSWCJBKVKASQKCLKZKRDJNLJDUJGTFTUPVHWAYKXDWGEIBRBKXUCZBBAQHVSTVHZZOZQPAAKDWITCQMATNRDMWRHQWPLEHMGFEFIOHXLHRFFLYZPDGWOEDOENTPGHVAYNUIQQCWZOCHXMHOTAYXIERNTSXYGFIXRXKEZSFZPQ");
    msg.last_error_time = 0.707601353601;

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
    msg.setTimeStamp(0.17688163028);
    msg.setSource(36U);
    msg.setSourceEntity(147U);
    msg.setDestination(17144U);
    msg.setDestinationEntity(104U);
    msg.op_mode = 115U;
    msg.error_count = 197U;
    msg.error_ents.assign("XTTVKFSYPCQUZWDRKDTIVNSVOXMQHUSLJXAOUBGPOJMSDRJBLMSGSQZHXFCVCDCWFWJQSRMZKOKGNIWLVQKWVTJEHGYTXBZKZGUWDOQDNQTPTZLPGGOSBEXWMGVMQYCAICAOBYZFJYBUIBNTHWRSTRANFFJHEYIDTCFUIPEAHNGNNPRKXKIOSVHPPUFLCLDANDCLVUEMHQEPMBLMHEWORBNKZYZPYVXJXFYHIARDJLKFXELUCZMAA");
    msg.maneuver_type = 41927U;
    msg.maneuver_stime = 0.447599752674;
    msg.maneuver_eta = 48164U;
    msg.control_loops = 3050822612U;
    msg.flags = 110U;
    msg.last_error.assign("BFOBWYQMCRPDEOKEVDCCZMHANTIFKNBXFCREXQYKHDEJVENGVKWJQFYODHJXSOEFKKLWPSLDWRVPFJAGSPMBWGOFIQYRUBGAKLQXXRRCSUCTZXQHJXQKUCFNPGJVTDEOTWRYXGPWLBIRNAOATWIWDMPVRLHRQVPHJBZJMVTFZTUAISZIYLSZUDOZGDZEEZIDIEGCKHIMZTSCHGIUMXMNUNJPCYYXQBVSUGLPLUBLHMYSAQMNLAYAKTBSOV");
    msg.last_error_time = 0.921713343177;

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
    msg.setTimeStamp(0.659256261564);
    msg.setSource(20876U);
    msg.setSourceEntity(242U);
    msg.setDestination(48034U);
    msg.setDestinationEntity(45U);
    msg.type = 197U;
    msg.request_id = 31234U;
    msg.command = 252U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 10690U;
    tmp_msg_0.lat = 0.715231151574;
    tmp_msg_0.lon = 0.757275448574;
    tmp_msg_0.z = 0.367438129867;
    tmp_msg_0.z_units = 144U;
    tmp_msg_0.amplitude = 0.280741269063;
    tmp_msg_0.pitch = 0.356351453623;
    tmp_msg_0.speed = 0.748908529343;
    tmp_msg_0.speed_units = 178U;
    tmp_msg_0.custom.assign("GJWZMXXXJDZYDVYKZWKTCHBNNIPMBJRRHFEBMXHLERLVBBQSCAFDOFODBTYGZLADGHAOOCWGSANJRKGQIGUQDYZIOISZOCPVNNAQQPCLGONNMRDOAUTSACGHPDWQEMHQERYHTWQKSHPGEKLU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 6328U;
    msg.info.assign("WNCZRWGTCAFMMLEBPPSNGBVAEPUYHNXGMKGQGDFWGVOTRXLWJUSQQOOKHZMGGEJVJOIEWLAUOBLSVIJTKDWSQLCBKQAPEJBCFVOQLCYNUUDDRDZBFHSPIKYZKIVXAIRXDPRDAYFBAHJTZCVOIGWBYWTHJFHXXRVTEBEMSZFCYEIZSRYAMCYZUOTKRPNSLCNEKSVTWLOKQXQSEBUPLGMFUTNDHJCTIFIDXFPYURAMHWNZXAJM");

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
    msg.setTimeStamp(0.146625025901);
    msg.setSource(24030U);
    msg.setSourceEntity(161U);
    msg.setDestination(59102U);
    msg.setDestinationEntity(138U);
    msg.type = 18U;
    msg.request_id = 8941U;
    msg.command = 184U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.122028635345;
    tmp_msg_0.lon = 0.988280252012;
    tmp_msg_0.z = 0.128814809308;
    tmp_msg_0.z_units = 42U;
    tmp_msg_0.speed = 0.148868254558;
    tmp_msg_0.speed_units = 139U;
    tmp_msg_0.takeoff_pitch = 0.236860130787;
    tmp_msg_0.custom.assign("ONNVMIHWZQJLFPVTQMODKQDWVKCCDHEPXAFZTPLMXXBYQSVYRGXQXSJALLGMUHBSPKAIYJRVEIOHEGQYETPGODZVTDJABZMFTHPQLAJVVYUCFBACR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 21363U;
    msg.info.assign("TSCZEPFTOUCHPYLOSFLXBPAEMQJAWWRXVYTBYEDZNTMOQNEOITLTGBLTEUEUHYDMHZWXCZITGKPSCVOBVWWGEKXGGSIDNGQPANCAZOMVQUADDSQBXTBFLTDOFXCHPAWJGZGLEMRRREEQYVXPKIAIXURJZCMAFYYMDVVWPPIRGHFQBMSKBLHCJQUIFQUSBHUQOVNKUCXRDYF");

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
    msg.setTimeStamp(0.786577890668);
    msg.setSource(34890U);
    msg.setSourceEntity(205U);
    msg.setDestination(319U);
    msg.setDestinationEntity(234U);
    msg.type = 47U;
    msg.request_id = 54230U;
    msg.command = 193U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 43189U;
    tmp_msg_0.lat = 0.961562344365;
    tmp_msg_0.lon = 0.64501380975;
    tmp_msg_0.z = 0.317694259872;
    tmp_msg_0.z_units = 55U;
    tmp_msg_0.duration = 2737U;
    tmp_msg_0.speed = 0.198461413508;
    tmp_msg_0.speed_units = 175U;
    tmp_msg_0.type = 86U;
    tmp_msg_0.radius = 0.000688085927443;
    tmp_msg_0.length = 0.927758460295;
    tmp_msg_0.bearing = 0.675922728799;
    tmp_msg_0.direction = 49U;
    tmp_msg_0.custom.assign("YKIJNDONLIUWXGMVXYGDMEYNPKLVYWSNSUITKLXMRSVSQPFLBEETGEAEWIVGFTBIGJUEDTYQCHTRDMPBHVJCFTOKMIHWW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 17373U;
    msg.info.assign("CJJYBEXTVXAWBFUIETNYKHWGTAHDMYSBLBEKKEWKCIHOIASES");

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
    msg.setTimeStamp(0.825793682889);
    msg.setSource(20738U);
    msg.setSourceEntity(77U);
    msg.setDestination(6408U);
    msg.setDestinationEntity(71U);
    msg.command = 184U;
    msg.entities.assign("OFBVYZIHJRAEYDPYJVORKOQGIRHBLXLKDPQPLHGKIGFHCRKPVXLMNMAXZTJOPCJVGKMGFQATCSXDUOXAFBJQFVELIPMFTWOQECREZZWBWGENYLNLGHWEODWQAUSKSVLJUZSXAMMWEKPNNDFUFSHZMTVNYNITCTQSITCPBJAZNCMRIOQYYDBHPVQAGXSHJKRLLVCDYEUKROXYAUSFCI");

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
    msg.setTimeStamp(0.558897197533);
    msg.setSource(5733U);
    msg.setSourceEntity(157U);
    msg.setDestination(988U);
    msg.setDestinationEntity(24U);
    msg.command = 238U;
    msg.entities.assign("UFQFAGDCPBTQUITOELNWMQKCGITCPRZFZFNUSGBWPWMSSUXHJOSCAFOOQPJQVAUIJOPIKGMGKZQWLYOERRICNXXVJFRSWDPWJLBFXJIXKGMOLD");

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
    msg.setTimeStamp(0.0907517152506);
    msg.setSource(63192U);
    msg.setSourceEntity(173U);
    msg.setDestination(47025U);
    msg.setDestinationEntity(117U);
    msg.command = 188U;
    msg.entities.assign("NYYOUQDJIMNETQOGBJHYJIQMUUFNWJDZJZFECSYELJSFWOKRCXFBCTGITGIUJLPGTWRU");

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
    msg.setTimeStamp(0.280053552431);
    msg.setSource(24500U);
    msg.setSourceEntity(170U);
    msg.setDestination(33064U);
    msg.setDestinationEntity(93U);
    msg.mcount = 99U;
    msg.mnames.assign("TJGACGGNCQZBVYULBMNYQOKTIRZUJAIAGGQFAAIKTPHWDBWEUJMOLSMGFJEZGBVLLRGKNCRUQVTIVXVSWDAMQCZQPHDXFXKSHIYPJWXRKFOXQSSVUBAKWMZHDLMNPCRDJROHMPZIAOOXLBPSMBCGLVWGNLACBKXZPNXSQBXIQMOOYKUTEQDOSPFAREXWFDCEHPYILDNHE");
    msg.ecount = 80U;
    msg.enames.assign("UWJRGEIDCPJUSTHQCMTYJFZKOBRNXRFABVHAEZMALPSYIHGEADHNWKAICITYHSKDTIIMYLWBDNYABWMLTAFYWPCVFZJYUIHSSVVFNGOELTZVBJBNNPDDQQHKSGINBJVZQKEMQNOMXDTAZWMOPGK");
    msg.ccount = 108U;
    msg.cnames.assign("KOAJZODBSDSZHN");
    msg.last_error.assign("RKEPTXBUMYKQYAMDUUROUEABDRQZLUFQLLPCOVMXDPHOJHOHIGUTSVYSQWJJWLOPYBSNILZBMATGWVDCKFTGACKTPNWNAYXYPGRUWIZPEMTOXAFZZTEUSLGHBVCSASCYQIKWFRZWIYFHIHNJNRMSJXSQJAGARZQOVVTDKHXJRZBUXYFXRYOGMWBKGAOJTCCHFDEGEKKIMBNDUDKBLZPZDERQNWXJFHLSPTEQ");
    msg.last_error_time = 0.476894223559;

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
    msg.setTimeStamp(0.0364726472942);
    msg.setSource(55238U);
    msg.setSourceEntity(222U);
    msg.setDestination(53842U);
    msg.setDestinationEntity(184U);
    msg.mcount = 0U;
    msg.mnames.assign("LPYIPYWSMDUDHJCLHOUQWXDYYLFNMKCOTRNJEABSCQWVZGYBNSTPRVMLQOBGJMJAHGBDFFJWQAFOJKPEAAUTPBELBEXJOKTBJGANVECFOPKYAEDSRZQBUXQLHV");
    msg.ecount = 207U;
    msg.enames.assign("SSKUVGQMMKZNPTJIVEOSQXLZSXPADCSOYMJFOQGBLGJTHIBSUSOJMRFOXCNDXHWLXCARFPDBWUEJNTTKFWYQQRENKDPPZTKNVAERZLJNVOMQOQ");
    msg.ccount = 116U;
    msg.cnames.assign("IFWNEBEYXBIFOQAULXMIVMZHQKHXPJITEDAFUNRJBUQAWZSFCYPRYCKLLLDTXZWOAMEFNQHRYBJDWPLGBXDVKZMKOVRBXYJWVDOGAHYRJKHGIBPJZYQ");
    msg.last_error.assign("RCMDUFBBDVRMHGQZYEPUPQAYBXAFSKOANNJUZBC");
    msg.last_error_time = 0.960144438064;

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
    msg.setTimeStamp(0.205542641558);
    msg.setSource(54722U);
    msg.setSourceEntity(155U);
    msg.setDestination(63699U);
    msg.setDestinationEntity(147U);
    msg.mcount = 76U;
    msg.mnames.assign("JUPYGEINOTDLBUPUAQJRHFGNRYPLKSOEZEMLXYLWOJGLJKMOAFCHHDCKMBHPXQOGPPQJCGKXSDZKRZDNPNJVQPRXFMXWURDYZJTBIWQIVGVCLAOFROSQHNENYMISHJWFHVTACVODCVEQXBZVWUIXWUYESRNSEWDUMDCQIKPLKNAIYI");
    msg.ecount = 151U;
    msg.enames.assign("YNHCRKORCQLTRPVBDALNVAQLCDAYPFRUMUHOTLSBTNQWOXPZVZYCNZVPIHDYMZBHSSUIWCTAUFBIV");
    msg.ccount = 56U;
    msg.cnames.assign("NTWTXEUQSOOYIWCPQZBWUXARCLAOBXNHIRABCZWEUIAYRPLKZBISDADUJWFNK");
    msg.last_error.assign("PMCXQDNJNCFDQHVIHRUFKDYZSYZBECOLMDJHBUDULUELFXWVMIPKH");
    msg.last_error_time = 0.810405630493;

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
    msg.setTimeStamp(0.620823988311);
    msg.setSource(48590U);
    msg.setSourceEntity(108U);
    msg.setDestination(5597U);
    msg.setDestinationEntity(178U);
    msg.mask = 97U;
    msg.max_depth = 0.922165243506;
    msg.min_altitude = 0.444840977405;
    msg.max_altitude = 0.95670204343;
    msg.min_speed = 0.423876078456;
    msg.max_speed = 0.644083463371;
    msg.max_vrate = 0.102212840667;
    msg.lat = 0.321082662921;
    msg.lon = 0.00959956075745;
    msg.orientation = 0.770528916637;
    msg.width = 0.861168678309;
    msg.length = 0.574053297792;

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
    msg.setTimeStamp(0.684910514467);
    msg.setSource(9374U);
    msg.setSourceEntity(2U);
    msg.setDestination(35130U);
    msg.setDestinationEntity(41U);
    msg.mask = 252U;
    msg.max_depth = 0.00971838597408;
    msg.min_altitude = 0.0618198320254;
    msg.max_altitude = 0.832957963483;
    msg.min_speed = 0.0884826841779;
    msg.max_speed = 0.410073041604;
    msg.max_vrate = 0.0926777611547;
    msg.lat = 0.0846082657616;
    msg.lon = 0.711636206617;
    msg.orientation = 0.360526642343;
    msg.width = 0.568846749586;
    msg.length = 0.99092615681;

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
    msg.setTimeStamp(0.908267080764);
    msg.setSource(6517U);
    msg.setSourceEntity(46U);
    msg.setDestination(17964U);
    msg.setDestinationEntity(101U);
    msg.mask = 185U;
    msg.max_depth = 0.0368308647424;
    msg.min_altitude = 0.52742038911;
    msg.max_altitude = 0.437750961371;
    msg.min_speed = 0.385501106878;
    msg.max_speed = 0.208365270987;
    msg.max_vrate = 4.77859070858e-06;
    msg.lat = 0.0421953760036;
    msg.lon = 0.193519948321;
    msg.orientation = 0.258393066041;
    msg.width = 0.220768648009;
    msg.length = 0.673952922249;

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
    msg.setTimeStamp(0.302769067751);
    msg.setSource(48498U);
    msg.setSourceEntity(147U);
    msg.setDestination(57740U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.135281661448);
    msg.setSource(51357U);
    msg.setSourceEntity(34U);
    msg.setDestination(51967U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.109804807782);
    msg.setSource(54805U);
    msg.setSourceEntity(135U);
    msg.setDestination(59992U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.137656388823);
    msg.setSource(65060U);
    msg.setSourceEntity(55U);
    msg.setDestination(44365U);
    msg.setDestinationEntity(86U);
    msg.duration = 33135U;

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
    msg.setTimeStamp(0.545485537185);
    msg.setSource(56373U);
    msg.setSourceEntity(159U);
    msg.setDestination(62190U);
    msg.setDestinationEntity(232U);
    msg.duration = 24676U;

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
    msg.setTimeStamp(0.140945009289);
    msg.setSource(24918U);
    msg.setSourceEntity(54U);
    msg.setDestination(14400U);
    msg.setDestinationEntity(105U);
    msg.duration = 26866U;

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
    msg.setTimeStamp(0.975488020138);
    msg.setSource(38623U);
    msg.setSourceEntity(113U);
    msg.setDestination(65503U);
    msg.setDestinationEntity(193U);
    msg.enable = 49U;
    msg.mask = 4285660846U;
    msg.scope_ref = 3137950357U;

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
    msg.setTimeStamp(0.829221035491);
    msg.setSource(38899U);
    msg.setSourceEntity(127U);
    msg.setDestination(38036U);
    msg.setDestinationEntity(22U);
    msg.enable = 36U;
    msg.mask = 1701825061U;
    msg.scope_ref = 255642963U;

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
    msg.setTimeStamp(0.971968779515);
    msg.setSource(20527U);
    msg.setSourceEntity(251U);
    msg.setDestination(2113U);
    msg.setDestinationEntity(21U);
    msg.enable = 239U;
    msg.mask = 3400387557U;
    msg.scope_ref = 2511544850U;

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
    msg.setTimeStamp(0.133085744231);
    msg.setSource(61909U);
    msg.setSourceEntity(48U);
    msg.setDestination(16363U);
    msg.setDestinationEntity(74U);
    msg.medium = 91U;

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
    msg.setTimeStamp(0.803387073517);
    msg.setSource(64096U);
    msg.setSourceEntity(27U);
    msg.setDestination(32249U);
    msg.setDestinationEntity(128U);
    msg.medium = 193U;

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
    msg.setTimeStamp(0.636918804442);
    msg.setSource(40436U);
    msg.setSourceEntity(243U);
    msg.setDestination(18357U);
    msg.setDestinationEntity(62U);
    msg.medium = 16U;

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
    msg.setTimeStamp(0.371070905445);
    msg.setSource(57787U);
    msg.setSourceEntity(238U);
    msg.setDestination(35274U);
    msg.setDestinationEntity(130U);
    msg.value = 0.71936069321;
    msg.type = 76U;

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
    msg.setTimeStamp(0.61868497769);
    msg.setSource(52696U);
    msg.setSourceEntity(160U);
    msg.setDestination(54379U);
    msg.setDestinationEntity(80U);
    msg.value = 0.227190140547;
    msg.type = 122U;

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
    msg.setTimeStamp(0.470513003705);
    msg.setSource(61273U);
    msg.setSourceEntity(58U);
    msg.setDestination(52047U);
    msg.setDestinationEntity(223U);
    msg.value = 0.232000124371;
    msg.type = 132U;

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
    msg.setTimeStamp(0.711739067951);
    msg.setSource(824U);
    msg.setSourceEntity(119U);
    msg.setDestination(36060U);
    msg.setDestinationEntity(243U);
    msg.possimerr = 0.743182140608;
    msg.converg = 0.0447413646242;
    msg.turbulence = 0.554082725418;
    msg.possimmon = 102U;
    msg.commmon = 123U;
    msg.convergmon = 61U;

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
    msg.setTimeStamp(0.582456913829);
    msg.setSource(43253U);
    msg.setSourceEntity(223U);
    msg.setDestination(26463U);
    msg.setDestinationEntity(85U);
    msg.possimerr = 0.0391499783952;
    msg.converg = 0.456826558302;
    msg.turbulence = 0.498207546823;
    msg.possimmon = 26U;
    msg.commmon = 13U;
    msg.convergmon = 117U;

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
    msg.setTimeStamp(0.960113356553);
    msg.setSource(24860U);
    msg.setSourceEntity(182U);
    msg.setDestination(64997U);
    msg.setDestinationEntity(231U);
    msg.possimerr = 0.0478304255375;
    msg.converg = 0.58478074203;
    msg.turbulence = 0.864186087326;
    msg.possimmon = 149U;
    msg.commmon = 96U;
    msg.convergmon = 129U;

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
    msg.setTimeStamp(0.138003002369);
    msg.setSource(1843U);
    msg.setSourceEntity(213U);
    msg.setDestination(13673U);
    msg.setDestinationEntity(216U);
    msg.autonomy = 207U;
    msg.mode.assign("OZYXFCPZYNUPSAWCQBOTCHQUREHDQCTBOXIUXKKGVCIFYXVDIHKZCUAEBXEVTLWTUERLGUYSMDYOYXLBUIRDIHPGNJPFCNJMAFRMFQWJPVLSUKGOQERVVIJCSSWBFJLINZACRKAYHIXOLLIQVRZABHZDOGMHWEYVMRXPTPXGDGGMKKDNSQKFLABJSWXKVPSOJHJMNTMW");

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
    msg.setTimeStamp(0.677945996177);
    msg.setSource(26730U);
    msg.setSourceEntity(209U);
    msg.setDestination(7348U);
    msg.setDestinationEntity(94U);
    msg.autonomy = 92U;
    msg.mode.assign("OIOAVQRVCNZXYWDQDLKPHNWAFJOCXDXWTLPWTITKTPZZHECQYEXINTDPBXUDUFQLZQCSBULXDVAJPFEAZHQOGFWIWVBBARFTVBMSYADZGKWXQBSKGZEGREDCTFWZMGOMRPRUYJGTNWCHU");

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
    msg.setTimeStamp(0.767692915883);
    msg.setSource(32532U);
    msg.setSourceEntity(145U);
    msg.setDestination(20230U);
    msg.setDestinationEntity(97U);
    msg.autonomy = 229U;
    msg.mode.assign("VABIYDTCVEDWZUNFPIMQPHLYWHYFRCKUHXNJTEXXGCBJLMDNJAQCGIZZVTPSEKIYNFHIOAYNKIRCWFSDLQPSQKAARSDEDIZRUYTFXEMFPJESGQQMGZQMEZOVUIAOGNYKHRITZSJAWRHYGBGXAURHOYNCXQZBLH");

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
    msg.setTimeStamp(0.17313914945);
    msg.setSource(12037U);
    msg.setSourceEntity(46U);
    msg.setDestination(52968U);
    msg.setDestinationEntity(192U);
    msg.type = 240U;
    msg.op = 78U;
    msg.possimerr = 0.365196029289;
    msg.converg = 0.283601966532;
    msg.turbulence = 0.197549195578;
    msg.possimmon = 155U;
    msg.commmon = 184U;
    msg.convergmon = 250U;

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
    msg.setTimeStamp(0.323608303959);
    msg.setSource(39456U);
    msg.setSourceEntity(199U);
    msg.setDestination(24868U);
    msg.setDestinationEntity(235U);
    msg.type = 121U;
    msg.op = 142U;
    msg.possimerr = 0.38951735953;
    msg.converg = 0.26946134755;
    msg.turbulence = 0.102022165297;
    msg.possimmon = 104U;
    msg.commmon = 115U;
    msg.convergmon = 246U;

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
    msg.setTimeStamp(0.846548756685);
    msg.setSource(48350U);
    msg.setSourceEntity(100U);
    msg.setDestination(44669U);
    msg.setDestinationEntity(45U);
    msg.type = 1U;
    msg.op = 243U;
    msg.possimerr = 0.565585023553;
    msg.converg = 0.613994248879;
    msg.turbulence = 0.546025187815;
    msg.possimmon = 114U;
    msg.commmon = 7U;
    msg.convergmon = 240U;

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
    msg.setTimeStamp(0.417036126919);
    msg.setSource(42511U);
    msg.setSourceEntity(148U);
    msg.setDestination(65050U);
    msg.setDestinationEntity(50U);
    msg.op = 142U;
    msg.comm_interface = 244U;
    msg.period = 47180U;
    msg.sys_dst.assign("VPCEJIONWHGJXFRWMEYKEENYBRKYLMOHUAMLHBZQDVEFTIRQIBCAOZSHGWRBFAWJWPOIGNRRWGDMYNVJBXPMNACNLJQGJYQZXIOPSXKJETHBFBVWORYDTCVRDKCTLSEBTDVDMCLUWHTIAKIPRFUKFUSWHUPKWKOJYZUAKNEZYGAXXBXZTLZJYSALSSDOGZPGTLNSQMAQRKTEITCZHXDXQODQLUECVGUSSBCCMAUFVPZNVPIQLV");

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
    msg.setTimeStamp(0.420592809924);
    msg.setSource(31567U);
    msg.setSourceEntity(125U);
    msg.setDestination(53528U);
    msg.setDestinationEntity(11U);
    msg.op = 53U;
    msg.comm_interface = 161U;
    msg.period = 20771U;
    msg.sys_dst.assign("OAJPQUAOGKIMEMZAJVVSKNHINSFDVHIWNWMXREVGDSPPTP");

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
    msg.setTimeStamp(0.202566078723);
    msg.setSource(47178U);
    msg.setSourceEntity(74U);
    msg.setDestination(60612U);
    msg.setDestinationEntity(38U);
    msg.op = 52U;
    msg.comm_interface = 39U;
    msg.period = 8705U;
    msg.sys_dst.assign("IPQATEMSCDRBTKEBPNVPNWZLUNXTCVSJODJNUCAJIFWXMAIKHZZMMBBDVWBDGXGIKPQFPYSCNYRXOHYYNABOVJWTQUOLLFWNDEKZFHCLTLTEREYQHLCMBJKPQYZGLOVKIGEAEETPBFANBVKVXKSIYAXAFTXCEMSHHGZSUQMYJOSTZWVMIRURXUEOGDLKRGZIRWYDHXOJCQRQVNLXNOGMMFCGI");

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
    msg.setTimeStamp(0.968721428871);
    msg.setSource(25276U);
    msg.setSourceEntity(117U);
    msg.setDestination(54939U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.0274513645884);
    msg.setSource(42234U);
    msg.setSourceEntity(32U);
    msg.setDestination(52767U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.794915016638);
    msg.setSource(520U);
    msg.setSourceEntity(44U);
    msg.setDestination(30628U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.537760364885);
    msg.setSource(20360U);
    msg.setSourceEntity(246U);
    msg.setDestination(35591U);
    msg.setDestinationEntity(162U);
    msg.plan_id.assign("ZPSJDJQLJAVXYDYASVJDAHMEELEMVLPYWMJOONDXQMLTZLNCHIEPAPVRBGKWJZUGUOQOQVGECRRTYCXXIXGPMQSFHCVCBGRXDKMZJQVNLJWQZHZCMUBNEBJBIIUCIDWFKIGHAARVSOQUXTHRWWSMFPZUTNSQXEISWKKSXOVNFWRHSCAZROBTXAGYHYRTMK");
    msg.description.assign("PQQHIZDTPVZCTYICYPCJSQIJISYHQWQGRRUJZOWSLXKQDBDNENKUYSKGZWFCVOOFUGZJXOADWEXJLGPYFLSCKHCYVVJXIABEYKTVTMCIXCUTZSLXXJUHWHNJZBEDVLKGKQZABVEGAWWBUUFADBMOEUQMITIGFXHZYMQXESLRVMWLYNNRIADPGQBBMDATVOOEPAMFKALTBPRLGMRSCAFOXWJTRPRKE");
    msg.vnamespace.assign("BNAQJCGBSSIJWPHXMHTDTBSOFRQSDXTIZDUIXMYJCGVEVHYXTKFLPLHOAFRNKTCXJOJUEFVMWEJ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("SVRIAMYXPDEQTFFJTAHJHCUOLHSWKKJOGYEQEBQMNOLYUIWHTVGRLJWRHUDQOPHNYULFMJVUYDSSMAQEBUZXEZNIHPDERZGUYXGAKTX");
    tmp_msg_0.value.assign("ZNPRHUWEXSJHHJW");
    tmp_msg_0.type = 25U;
    tmp_msg_0.access = 15U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("DZUXYKPAIGLHCPSZBLKRPZAORVMZTBGTDTLVPXKVQZFMBGHEYNTENCGRIWWSEYXBYIDDGAFRMBOVXIUTCONINMKSSPHJDAUPXVAWONFDVYOJBMXHCGJMTQMDDCEQXNSXJJEJVOHQSWAUAIKQBROALQWIUYWIBIGHPYYFFSNWWHAVQFJPZ");

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
    msg.setTimeStamp(0.197115406195);
    msg.setSource(46801U);
    msg.setSourceEntity(16U);
    msg.setDestination(894U);
    msg.setDestinationEntity(189U);
    msg.plan_id.assign("WPRBZIKZXYBIFQNNGBTHAIFSMQUUGKXRGLYGLTKLYCTDDHNJPTMZNZYAEHKEVYLSYKJUTSOFVMSEAXLBWUG");
    msg.description.assign("ASQBZCLMGJCWTRRUGHIGJESQGTQJEAFRXIVFMUZRFQNOJZKEXSMDDLOCAZKFZIYMAPSETRNPJKPQHQLKXAAULPGGYIAXUDUAKOPPZOVVVCYBLHCPVVMLJWNNDECPXHZXBQAXBXOCKMETR");
    msg.vnamespace.assign("WRHPTEKAFENNQXZBCKTUIUAQDGQSSLLNANNTETNFDWODOROUELHYTIPCZXZNSWMIDTGVMUHBJTEHLLLCVDOWOSAXBBSAQJMXLFSDFUBXACVWOZTIKPYCEMMYTPRVBGWHPOMBGUROHWLKFLCPSKWIHQURHXQMJEJIYKAWIFWBYJFEOVBSJRUZQHFRCYTMPCNRDQICDSRYMKJAFKVGUKUGXVLYGVEYIGZXJGIBRNCGZJPNPAPZFJQAVZK");
    msg.start_man_id.assign("NNCXEVTYCFKCBPPRBQNGZGCHFOTPSTKKQPKJVVWSTUMKADYCXLIWZNJAFZKSAELRAMRPQIHHZVCAROOTYQVOBPFIRCCJGEEGOVAFVOOJDJCWZLYRUNZZWOGXLUJWHFKGBENMDXDSKAGVATPRIJT");
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 6645U;
    tmp_msg_0.sys.assign("QZAWHCRJMIOYZKUACKIVJHQFFINYHBPPCHLSXLWQOMRUBFTMWCYMDKUZRNZJDBJEMFMRXKZVIGODCECWDFNISTNJBYGPUCJURERLSLADJEISOHAUEVAURZAQNUBFTRYSTWXDFZHPVDBOGPEQSGGSNVPPMQACHMYESAYCRXBNQWDXIVZWSGMBFCQJORVSTGLYDVZPMLTYLQQWTUOEXANWOGUJXDTAFLHNILNFEBYPHTOIZELVKKXTKJ");
    tmp_msg_0.value = 0.581869194751;
    msg.start_actions.push_back(tmp_msg_0);
    IMC::FollowTrajectory tmp_msg_1;
    tmp_msg_1.timeout = 54157U;
    tmp_msg_1.lat = 0.927546630114;
    tmp_msg_1.lon = 0.484061705925;
    tmp_msg_1.z = 0.0760839129878;
    tmp_msg_1.z_units = 66U;
    tmp_msg_1.speed = 0.325092221258;
    tmp_msg_1.speed_units = 57U;
    IMC::TrajectoryPoint tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.x = 0.853514517797;
    tmp_tmp_msg_1_0.y = 0.516267371247;
    tmp_tmp_msg_1_0.z = 0.589367453125;
    tmp_tmp_msg_1_0.t = 0.677353827732;
    tmp_msg_1.points.push_back(tmp_tmp_msg_1_0);
    tmp_msg_1.custom.assign("YONVLDBAPVMWEDLRQSHVZBAGHZUZ");
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.515536307599);
    msg.setSource(63419U);
    msg.setSourceEntity(48U);
    msg.setDestination(2771U);
    msg.setDestinationEntity(202U);
    msg.plan_id.assign("LZMUQJZRAXPWVRIPWDDMMYIHS");
    msg.description.assign("JAIPSKEFWTSNPVXBSCDBIVXPRUMNTSIHGLCWYQ");
    msg.vnamespace.assign("DDWSEXLYYNBVKEWYAEBVFGUHTZTHPLYTUBCWRTGHYPKJZCDHIJLRIQGUOMVWROTBYQBPSHVNVRNQDWOVNSXZDPRHTOLYGSJLVMIBDZHOACLDIEKQCENANLPLXBEIGOBFFGSTUMKPZUAMSUXXSJFTAWZXCIKYXRLGTCXYCFAOKLNGVJQRIZHFEATBAQNJNERWIPQSRGWXHSIPJJUB");
    msg.start_man_id.assign("YTHESLKURREWOWRZAMPJVCSGHVTTJQJLAFDQJCZNUXTYFAIXIIEVKDNHQDLCAOOOIVCCRTPXZFDLISWORMPWCOYZKFKEUXRTRDEQVMXKFVSPEIDNRVUJFDUCNHUBFNLSYGTBLWFOHBTUIGXGHSXWWAQPBZAQWJHHUZLYMEFETPQCTDEIXCNBZDYMLIGFBMGKRJSZXPVBPYMNBKHSZKYIYMJHSQXGSAWPQLNVMJGWNOZJPLAROYUQMEGKBGAUA");

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
    msg.setTimeStamp(0.170961743935);
    msg.setSource(14872U);
    msg.setSourceEntity(12U);
    msg.setDestination(38861U);
    msg.setDestinationEntity(170U);
    msg.maneuver_id.assign("MZOOXODNVBFSEEWLCTQBEUUJTDKICHZHGQAFDMAQKTZPILLWSESLJUDBFMDSISZAJXVPOVXKCUJKYERRQHHEAXEVCMNSWHLJSRQFGYPBOCRGBEDRGRNWCCMCRVDMRMYBPPYGIOTXTZNPGWJGFWIDWUYDVZEUWHUQHUDFLRJHEWIYVXKFNAANIBTJZQIZMXOVBSQLNPYVTWBAUJYXQTXKNPKHFLVAALOQFKCRSUOLTJ");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 14334U;
    tmp_msg_0.custom.assign("TQNVNVVBENJJZXDDJUIFDYFKDSAMYREFTJOBEREGLXTPHYHOEXBYSPJJFLZBHRDCRGVCWNCKYOQSCHCBVEWTZVOYULECANTQQWFYATCBCNEPKZHKQMVSW");
    msg.data.set(tmp_msg_0);
    IMC::EntityMonitoringState tmp_msg_1;
    tmp_msg_1.mcount = 99U;
    tmp_msg_1.mnames.assign("FENPXXSIJEDMFMBZNEYMSRYPYQDIDSENHRQYKOAPBJLGLWVPUVRXWKXJQMVODFLWGKGGUJCIRHZABCYGLOBNXUHXTLTOWDESWUQHMVZVMETDYZZVPLPQKCUFGSTXSCTQCEPCICAOKARPUZAYSONASJBQZHRKWIVIVCVFXYWOTQTDLRDVZFBEGPAUNRTJAFGNZMGBXHCWFNKM");
    tmp_msg_1.ecount = 221U;
    tmp_msg_1.enames.assign("VTDRYRPVZDNYJHWQHLYTQTCVLSQECHTUYORMMMMIISBGHGZZYSFIZZVGKXUXXKRKJPLSBOMQJCAVFNCSHXAFBXXLWYUNHWMQHOUZDDOJOZZBNATHSTBMMAPGCLIWZQELGFHADOFLKFVJTFBKZJUQTRW");
    tmp_msg_1.ccount = 189U;
    tmp_msg_1.cnames.assign("DLQBTDHVFXWCXAGEOPTPNNBODRKOBMQYRMYFEEQLBPEJYSDCJFGXXJVZWLAZVVUEYGXXNORGOHMBIEPVG");
    tmp_msg_1.last_error.assign("ETWBOLPJFCFUYZBGHLSGQGCQKDCDTMJQRFZYCCWZKNVUWORUBQSMWAAFTJECTMIYPPUVXUNDKIAZKODLOBLHEHYZIIXJR");
    tmp_msg_1.last_error_time = 0.9214358495;
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
    msg.setTimeStamp(0.707622318513);
    msg.setSource(8244U);
    msg.setSourceEntity(43U);
    msg.setDestination(49689U);
    msg.setDestinationEntity(234U);
    msg.maneuver_id.assign("EGXTRTGTKAKANOBPICDBZSUAMEHNHBPRFFEGBQNKHIGJFYCKYEVIXOEWHPMOGVCDWVJDREFNOOKEPGCGDRMQCOLUGJCSMCUNVWTKROOTOXSUUMOTVYJLIUSTTFQCFNDZWXFRRZYDYWBLVXUYAAGIXAQHHPFSZNHDUKWZZSYHELVJZIJDBCMCRZPJSEYQNBFJBVXEVPQJLPHYKXJQUWKKFSHPQQUXLMYXMTLPQBGWIILISNBVARZLARIADS");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 28994U;
    tmp_msg_0.lat = 0.314644000158;
    tmp_msg_0.lon = 0.0469390196469;
    tmp_msg_0.z = 0.200267002377;
    tmp_msg_0.z_units = 124U;
    tmp_msg_0.speed = 0.782642635991;
    tmp_msg_0.speed_units = 153U;
    tmp_msg_0.syringe0 = 72U;
    tmp_msg_0.syringe1 = 101U;
    tmp_msg_0.syringe2 = 63U;
    tmp_msg_0.custom.assign("AZOINASOGVLYNLXUFTWFJNHFOROZEGDZMAIJPLPEKULDNAJDKTVBVZCTTVFGWUSBGDXALICGDLPRBHJCXPYRYOFBSRIMTJSPMMEWMIHENPOFWQABHFKNEDKTYSHVSXLIRBNPMRZGQKKUYGTZUFXBQNWPYSJPQAICTCOVIHOVHWQCAYQXLEDBLFDPYEZAQJUQCOXVXCVWRDNDKLVUHBNMMGCRFTJ");
    msg.data.set(tmp_msg_0);
    IMC::FollowPath tmp_msg_1;
    tmp_msg_1.timeout = 39295U;
    tmp_msg_1.lat = 0.960479321293;
    tmp_msg_1.lon = 0.536720501215;
    tmp_msg_1.z = 0.926764517851;
    tmp_msg_1.z_units = 136U;
    tmp_msg_1.speed = 0.379533300809;
    tmp_msg_1.speed_units = 117U;
    tmp_msg_1.custom.assign("LDDKRWBOYZLNUKLJWDJGJXYUEZIWZPTRKGQBMDUKZIVSHPIGLNEJMPWKWKYKOMRNGBYZRCJAWVYOCFCMECDLTKMBAAEBOYPKCKSYWMCBMEZXPFHJLTSJFUIVZTTXYDUTHSFQVQBUHPNRFILJYPSPHBDA");
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
    msg.setTimeStamp(0.71696622727);
    msg.setSource(20552U);
    msg.setSourceEntity(230U);
    msg.setDestination(56391U);
    msg.setDestinationEntity(254U);
    msg.maneuver_id.assign("BSPKLVEMOFRQEKLZVDARBAGXHGSMDCNTMMGLJUKRTBAETZNFCXBXCQZKO");
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.306886379026;
    tmp_msg_0.lon = 0.345458573741;
    tmp_msg_0.speed = 0.11242673161;
    tmp_msg_0.speed_units = 104U;
    tmp_msg_0.limits = 212U;
    tmp_msg_0.max_depth = 0.150773156303;
    tmp_msg_0.min_alt = 0.869153618048;
    tmp_msg_0.time_limit = 0.709765946449;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.980088055441;
    tmp_tmp_msg_0_0.lon = 0.944090326716;
    tmp_msg_0.area_limits.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.controller.assign("AKTPEIHVHGRALPNBCWSMRLAUAZQRZYXJCKWHUODDYEKAONOLJH");
    tmp_msg_0.custom.assign("HEKLKKERDPDONFIKQTKZQCZJUHIMSJLTSXFQAIWYVBHTUIWHBZIWEFAYJVMROJZOLBVOKJSHYGRCPICKDMXBHXWJPRWHHZDLRAUFSGDRPDGSWWEXLMWZPNTAPQUANOFPTLSGOVEEQDROFBEQKYYCFSMKUNTNYBMZMLYXLZVSLQLFVTBBIPJPDXMPNVARAVNBZNCUXTUSOGXCUOXKGGHMUWQVYCHNFXYITVEOGMRS");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.837652508998);
    msg.setSource(58304U);
    msg.setSourceEntity(193U);
    msg.setDestination(24241U);
    msg.setDestinationEntity(38U);
    msg.source_man.assign("PBVVGCZWHCFZPQIXFERKNBPIKQAANQLBKASSOWMRIBTZGUVDWYMGJGMWCPIHASJBUNKAEJSCTCDNEVNDSYDDZKUYTMUDLHHFPVRSZLAZHDFIUVIRZUOJN");
    msg.dest_man.assign("LBVNOJOYNFCBWABWILCQ");
    msg.conditions.assign("TVMWTSIHLHNWKBUZHOGWEPKNLPPOUINNARTNXVCQAEAXZVHGFKJLRSAWGPCDKVTYCRLUSTJXLIRDABJEAZNOHGROQCFPSWBEYFFKXGMBTRBZYCVCDVTXGPQGXMAXGQFZIYTZDOTOJWVYELRUKJUDHQPYHILMCXWPEMSMVQFUOAEISAPYJGWDZIXQEJZEJNQFMNKEWJUVCWHBYYHUUS");
    IMC::SadcReadings tmp_msg_0;
    tmp_msg_0.channel = 96;
    tmp_msg_0.value = -1451683548;
    tmp_msg_0.gain = 102U;
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
    msg.setTimeStamp(0.176111639399);
    msg.setSource(27566U);
    msg.setSourceEntity(155U);
    msg.setDestination(23326U);
    msg.setDestinationEntity(211U);
    msg.source_man.assign("AVIIZCXTDWTCPVXTSDPZTQOOQFIFERAZDCKOABPCWHMQZKSVFXJTPIXHPYMSLZDNFBFBVDCQWRSEGODUDMVMMBXLBKYOLQHEJLGLNCEVMZZCJUOQETYNIH");
    msg.dest_man.assign("EQGBGVQANGHXCIKNBFRLTZGINKDNCPVOCXLFITRCYQTSPFYVROBMEAZLJNSROZEFUMANWCWSON");
    msg.conditions.assign("FAHXQLXZDNYDOYVOFIXUNAWZBGERRLQUPKCEZAIMEJADBXYUPT");

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
    msg.setTimeStamp(0.155530713697);
    msg.setSource(5085U);
    msg.setSourceEntity(68U);
    msg.setDestination(63233U);
    msg.setDestinationEntity(167U);
    msg.source_man.assign("QFTUHNOMSGZOECJZUJCBMSJEXHFSHBKPMAYWURHQNWRKUSYNDIKIFDLTRGCXLJCFNYOARSAUFVUVDBLTVMVFNDKATACGOBSTRYYTBQWJZDAYVMHPZOGPY");
    msg.dest_man.assign("BJCZFTWWIYRLAFISBJGRUNEGGAAJCXUEOWDVAYVZPJLZYOYEKYTPGKCRWALRHQDGNQQVEILGMTPXDZCWNQJJMKOEOWIFMAPCJGFKDVUQRPBHTOXBKCCR");
    msg.conditions.assign("RHOBHCFFOAKTNQIRUDZKHOVBQMOMSSUMPBKBTCWUOCFXSPRTMDJEESARZWQOWVCKZQGFFQPLHSNJLKBVYAJNDYJSLMCALJSXLOGICPZKHHEUXXVTOUEINSKNUFAQZITKUTIJXNJWCNENMCRDZEDGCBELLAVVQUKR");
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.80945770777;
    tmp_msg_0.lon = 0.976353537878;
    tmp_msg_0.speed = 0.000445824253888;
    tmp_msg_0.speed_units = 62U;
    tmp_msg_0.limits = 222U;
    tmp_msg_0.max_depth = 0.226982625359;
    tmp_msg_0.min_alt = 0.893256992698;
    tmp_msg_0.time_limit = 0.440138487483;
    tmp_msg_0.controller.assign("MZQLOGAGPMMLDPWRUAJYYDAHZYNMZYIFPPGRXSAPKQCHUWYIBAWBHTMZVAQEQKZVDDWWFAIVTFOKTJCQPKNIZROPJNYEOHNILZEQTBCXVAXTOVUVTNXMOQXICFYUKYJHTPVJREBCAXCCSPWDQWXNGJZNDMLKRZMEUBGFKXDIZFLOCTEKUIQTYNCGROESHSI");
    tmp_msg_0.custom.assign("KFPIKGBPPDRWQFSTYOJXVCSQNCSWKUXPXCUI");
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
    msg.setTimeStamp(0.818604515223);
    msg.setSource(42104U);
    msg.setSourceEntity(109U);
    msg.setDestination(26386U);
    msg.setDestinationEntity(218U);
    msg.command = 183U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IOMATHKTQRACVDFQPUHNSYWOMGWIXJMCSKHWGRQGKGOFPOEEABXURPYAKFPYFCKRFGPBTHKYYHVCXRFLNPEVZFOIIZLUUGESLSIRDXSDLNEGRGOCHXAWQZXORQLXBHQQISONCEZZVWZNBMJTJYVMHDJBJLVDSAKUXIMMYLPJLJBUYGNNMFCFQJPHDODJABWEGTOPASMUSWDIYWCVEHAPNZWDELKKCEQBFRUVZTLDYTXXIUZCUTBBNTAVZNT");
    tmp_msg_0.description.assign("CNXRIIEEKDYMFFUJQVHFFGEAIHCZXBMCSCTYMGMVQOSYTWBHPAEVQQGXKCGOKDCEFDDASIJUYUUDOEWYBQDDRUOEPHPCXFWRS");
    tmp_msg_0.vnamespace.assign("XHKCKVYTQURSGHGVOTPJSYZTHDREKJSAKRFLLZSDIPGQVRTRHRXNHMVWGGJHPEEEYASCINXQCAFNQETRASALUMNUZLFMQCXZTAPBIWWEQTKYADEOIGHBLRBVLJTJKDWZWYUSWPMOGMBWOEGCDCCYMMFBFBIAIOKCPFFUCYTLVHIRGMPIIKVYNUXDPPSLWNLNJEUNOK");
    tmp_msg_0.start_man_id.assign("CUXGUJDNFIXEXIQWOVFLALVLWNSCERAPMHGWNODQRIHYZBKEYZMAJZNPSSEVWEXTSUIAGYKDPPLBZWYGAOCTFCTGXULKOCCTIJJKRZFSROMEGAVQZETCHDMKNFBXOANKPIDXTEYSPRBLWHMQYIVVMDWXULGHBSQSUWU");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("CXBWPEVIBNQXTKOHJPDMOULDYHDDNMWVQZLZWJMSJCPIALGOMVPRBXPMNXWUHEKCTTMFLEJJPTGERFXAEQWATYBSIFRMYFBNXQSPFMLULQRTUXLLOUHVDJXNTVGNCIDGZVGFAHSJKUFVQKJWSAIGHCKOAJQFHYMNEOCSRKN");
    IMC::Land tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.0198161082183;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.703007780765;
    tmp_tmp_tmp_msg_0_0_0.z = 0.571500467555;
    tmp_tmp_tmp_msg_0_0_0.z_units = 169U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.0658361034731;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 84U;
    tmp_tmp_tmp_msg_0_0_0.abort_z = 0.175753741998;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.760052488767;
    tmp_tmp_tmp_msg_0_0_0.glide_slope = 48U;
    tmp_tmp_tmp_msg_0_0_0.glide_slope_alt = 0.425268393746;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("LBHDZRWIURRQIYNAWXQNEAYFYIILPDVNTKULBVWCIAGCPJVHCXRGFMHRVEEXPGGQOPMWWXPSKTVEYSKYGNGLEWASV");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::Airflow tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.va = 0.456210210142;
    tmp_tmp_msg_0_1.aoa = 0.33243385053;
    tmp_tmp_msg_0_1.ssa = 0.56517340824;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::AirSaturation tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.769664072606;
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
    msg.setTimeStamp(0.795654630697);
    msg.setSource(19302U);
    msg.setSourceEntity(144U);
    msg.setDestination(7958U);
    msg.setDestinationEntity(135U);
    msg.command = 17U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZPOOXGBHIHALADAPHSNTSFKQXQSXMUAPXOVLCGSFZJCVQEDLIINJBGYMYRDKJKVUFFGTZKYFLXODFWUPTLVXUIFWUZBHCOQAAPFVLORQTUHIXGTJVKMYDWSVDCYLCGCNPMYIPZWCMZYMHXHZZMNOICHCAUVWEJBEZNORNQRYBERSSRKLUIMNOKKVMWTLRWGLRGJQHFJJSEYQDN");
    tmp_msg_0.description.assign("PNOMQCBRVQBKAIBGZXRJZJSLKYGJORY");
    tmp_msg_0.vnamespace.assign("RUAWLGIJLRFEBALGPVZBASWDKORCMFXOZKVDFPSZQIJBLGJMLXYMYVKYRZUNJWQI");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VAGZBLEYRKGEJRDGFTXFDVNQADXVTRQIXXJWSKVJQGTLLNZMHUSMBQXU");
    tmp_tmp_msg_0_0.value.assign("IACHYKJTVNCYIQMIVWPRLDWYJKFAKJENTWREFUCRBEMGCBABWGCMNKXTPGYZMONVENHGIEMXLXUGDOHQKUSBDLPZZPZCIXRUMYTXZVRHVFDOLJSTQMKGHGYATBOAALQDDIBWJUSRDSXZHVTPSCLYCPINIQFOMISFKSOWKOXLNGNJHVGQKPUSVXXBOJGIUWBUEPANTQZCJTAQRVJLDPUKB");
    tmp_tmp_msg_0_0.type = 228U;
    tmp_tmp_msg_0_0.access = 22U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("EPLTLLDXWVKKXRBRPKTWKNQCHFVIDREADYDAJUXODGCZGRCVOGYMLPQXHSXZIUCFXHBYCJJJSEJQBVLMFHWCBOMCSFGOTALFJFHXZAQHHSRKDSMRXEMIEKQWDAWBUNSLUNZGTUUXYZAGLTTABEPLMDCWUYTYNBBZSRJQAKWDYDPIVJNUMINYFHQIPLMOOOOVWNNGYQFIHVPZNI");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("PTMVKHOWXZVQNHMRZMLUVPXEKAQJNOFHXEGYBROZSYOKLXFPCQPTUEHMGDCOUDKXRKDSTXFQBVPVLTJBESLNSNIYWSEUBIJRARYYFUNCBAJLCHJLVISBEIVTMVJIOXYDFIGKWLMDZGGUCPWWOCHNNFQZTMNWBRLAALFWHEXYPKUUJJBVKNSIJSEADXODJQAFHIBIORTRZYCRUCEXBQSDCZK");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.865512335683;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.25607438658;
    tmp_tmp_tmp_msg_0_1_0.z = 0.128089040543;
    tmp_tmp_tmp_msg_0_1_0.z_units = 160U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.0177575136233;
    tmp_tmp_tmp_msg_0_1_0.duration = 55011U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.770905848575;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 153U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("JZYKYTAZLNLESBPKCHDRJPIWJGRBFUZFJYWGCJDBSUQYPRADHBCXMA");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::LedBrightness tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.name.assign("KMOIKZWLOJUESQBCMLQEJNOWNYBJTFIPXKVRDCPISHSCFBWBFLQEQMFKRFRCNGBGJEDRGOVJXLLWIUNAMWYCKGBPGHDVMMYOQDUSRDSAWVTEQZISRDJGPRUNMQIHAIZFNDSYWBRANAXRXBXYXYCXZQJFGVWCHXZHQZTHUENJAGUSTSLWAAQZYTUELOSETTPYTVTEVBYYLDDOHCMUJPGWNEKILFCOMGKUHZKPPOHBMRFAKCTAVVJ");
    tmp_tmp_tmp_msg_0_1_1.value = 182U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.value = 0.263770096717;
    tmp_tmp_tmp_msg_0_1_2.z_units = 45U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("TUJYSSAXOFIDEYJASUKZTMTIGXBWUOYIJACPXVNFTKNVIKRGEGSJVNFGCEIOQDQYXBOPPHCULEMMTDMMKFPZCKZAEJPSNLWKGRTRJLSHJTBFOAUNUDWTMKHPOXHXEVBEURDGYBPSWXXWJGGAGRNYWIVQNZOIDDLLPIYPHJEWEOOQEQUBALLCIWWYZDFSGFOQZLYMMCCDLBVF");
    tmp_tmp_msg_0_2.dest_man.assign("DNOTQPHMBEXPVKFHCOLJRJVMTAIYBNWPRRZWSRGPAQGUHVYTYAVGSEIKEVYZKNWXJYKXDXOKFBTLNZWTEORCOWOQRSHNQUGILLSEUMJGFTMFEVHIMBAFNZJUFUXWAIELPGWYRPKWZIRYPYSDMWTZCFCJGGFCPXCOVLDRH");
    tmp_tmp_msg_0_2.conditions.assign("YKIOOQRHZJCMZRAJSKUHUCEFLTNDZSUJV");
    IMC::CacheControl tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.op = 71U;
    tmp_tmp_tmp_msg_0_2_0.snapshot.assign("NIGZYCOEFEOSQHGBOAZZWMEJXUYROAZFNJFCHQJKRFZTEYNRMBLPQCVGHUSKDYSCUILXYLGUPUHXGRMAEBDAWTMBXVCGBQBPTDPOIRKAPEZIECHHYUWSQAFZRSTPGELNSONYOSRVKKUMULEKATJFQFBQLYGXMEPHOGVVWXJWBRQLJYJVIPWWDCVTIXDWMSRSDDCFTANZIVNATIXOCVNDXMNFJMSBVDOIBPKNUJTLTKZZY");
    IMC::Fluorescein tmp_tmp_tmp_tmp_msg_0_2_0_0;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.value = 0.262118185606;
    tmp_tmp_tmp_msg_0_2_0.message.set(tmp_tmp_tmp_tmp_msg_0_2_0_0);
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::PlanDB tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.type = 40U;
    tmp_tmp_msg_0_3.op = 68U;
    tmp_tmp_msg_0_3.request_id = 18315U;
    tmp_tmp_msg_0_3.plan_id.assign("VZSJCZQIGZDBPTICIKGTFWCRZHSMLXJZVXUGPQQIURYYYDASNXMROEUCWLJJTPOFPXPSQFEDSGXUKMZZSZTLTSNRIMDAGUOJLUGKCWOQGTRARHHRVUVLEEQKIUAZJCBQOFZLWKKAJNOIRIVAONXHAFNACLDMINLJNXFDVFWDWEKBFQGSVHGMUPBMWBBFEEAIUEHNKYRCTQPPGKMKSPEDDXCYLBBXFDBAROWNYMWTYYHOYVTXYTHESV");
    IMC::GpsFix tmp_tmp_tmp_msg_0_3_0;
    tmp_tmp_tmp_msg_0_3_0.validity = 47649U;
    tmp_tmp_tmp_msg_0_3_0.type = 55U;
    tmp_tmp_tmp_msg_0_3_0.utc_year = 2909U;
    tmp_tmp_tmp_msg_0_3_0.utc_month = 116U;
    tmp_tmp_tmp_msg_0_3_0.utc_day = 38U;
    tmp_tmp_tmp_msg_0_3_0.utc_time = 0.388806933245;
    tmp_tmp_tmp_msg_0_3_0.lat = 0.501418181215;
    tmp_tmp_tmp_msg_0_3_0.lon = 0.236295387718;
    tmp_tmp_tmp_msg_0_3_0.height = 0.643428012599;
    tmp_tmp_tmp_msg_0_3_0.satellites = 12U;
    tmp_tmp_tmp_msg_0_3_0.cog = 0.237529896529;
    tmp_tmp_tmp_msg_0_3_0.sog = 0.40090937996;
    tmp_tmp_tmp_msg_0_3_0.hdop = 0.863213967643;
    tmp_tmp_tmp_msg_0_3_0.vdop = 0.649029349611;
    tmp_tmp_tmp_msg_0_3_0.hacc = 0.429069552569;
    tmp_tmp_tmp_msg_0_3_0.vacc = 0.751796879319;
    tmp_tmp_msg_0_3.arg.set(tmp_tmp_tmp_msg_0_3_0);
    tmp_tmp_msg_0_3.info.assign("WGXRKUBYTUJBKMNFKHGFCZFZVMRHHIPMGREDGBZGLFCTDQULXILMDVPDGIRGWXWANEKXEQOXJIZMHSXBAQVHHUCBETKORBVFNDVFSXZWCAQIJGVPWSLPSTPQBHR");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.261745958845);
    msg.setSource(57531U);
    msg.setSourceEntity(113U);
    msg.setDestination(3678U);
    msg.setDestinationEntity(146U);
    msg.command = 166U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PNFLTKBBUVWHLKLMJDIESCCNDQZWSZSYLWBWGTFJKIYXDVMTMLYHVEOHNYPPRDAXVPAEBSIEGUHHQEOYLRKWTQEHKAKOUCUQOXQJBFZQOVVZCSYFRVRMZGGWFCFHLYZNUYZAEUOHVDJUMEFNXTOLARKNBOMQXWCPNFRIEMBDQWMTIAKTZYIGZRGJRFIJILRGSSPJSQIAWSLPPCXWIKYHJDVOBP");
    tmp_msg_0.description.assign("CVQNVEOTIIGQBPFNSLTSJTYGHICDKUESCUWXDHBAPWMLXBQEKYJVZXGAIICKOLIOUNHEOWYAHBLULFWNRGKVHYVERJYPTXSOWVZDKNXFRJBQDBRMZRY");
    tmp_msg_0.vnamespace.assign("LJHCZFSBPIVJOWJKLGBWFVQIXTPLQMSDSKFBCCBSUHPNDPPEHMGBKZGXZKVGXULGICLEBWONXUCTNENUWQIRPZNCZOETSEYWFAAJ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TQVLVEJHNKKLKZATEYJEAOULQFMHLZDNPPPFPCPVCOVRDITRWRWYJLJHINPIQMWECPZPRNAQVOWAVSYNELTBCGEOLURXBVSIYKSGYOWBWBUSLH");
    tmp_tmp_msg_0_0.value.assign("KNLKTWVSGZHBQXLNYHNIUAMZJMCWENNDTQUKOPPGPCRYEOJOLYAFVBWPFWMIBHWRKMETYKIBJZPGIVXXDAIRYRENSZZHEKPQCFXUPGBW");
    tmp_tmp_msg_0_0.type = 71U;
    tmp_tmp_msg_0_0.access = 209U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("EWKUTVQFGVWMQGMLADEJAGQMVXZSYAZCPCLCAMOSZLXEZDYXBTFHXNRWSSFZAEKJSZHWENYCHGKKFJRMOIQUMEUJHVZUYVSYTQIOODZNPWVUOVONOYARFBKOHLCRBLGVSCNFXPTFERKJQIKOXMQYSPWPQNWURNBGYDLLDNIPTRGIUTMJASEGGJEKVZYVJHCOGLIBPFRBTHTPWDAJJAHMCSDCTXBKURXXBFQPUIZIQRLWUBK");
    IMC::LinkLatency tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.191003922145;
    tmp_tmp_msg_0_1.sys_src = 55671U;
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
    msg.setTimeStamp(0.230562431398);
    msg.setSource(35971U);
    msg.setSourceEntity(196U);
    msg.setDestination(10330U);
    msg.setDestinationEntity(70U);
    msg.state = 224U;
    msg.plan_id.assign("XRRSHDSWKJWRAENWHEGKWLPJPOIBATCXVFXYPMDSUZCUDMAFUBFMDNQIWWEOOTLKSBEFLEJDG");
    msg.comm_level = 146U;

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
    msg.setTimeStamp(0.229214342367);
    msg.setSource(25223U);
    msg.setSourceEntity(31U);
    msg.setDestination(16940U);
    msg.setDestinationEntity(191U);
    msg.state = 117U;
    msg.plan_id.assign("MWDIBSPPPLJMXJWCXKGZQFQMQBIPBLHHVLEHKCMIIVWEXTZTZUHCGVLIARJCAVZYIHUEGHWSCWSTCDCAGAMQJONTLYXBXOJUDZPFMNGNAKGZBPYVREOQGORDNXONRQJKJADNTFARPMIKRXWNSVUOBLQKLNRHYYLUGDY");
    msg.comm_level = 107U;

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
    msg.setTimeStamp(0.85511788423);
    msg.setSource(30781U);
    msg.setSourceEntity(55U);
    msg.setDestination(26152U);
    msg.setDestinationEntity(131U);
    msg.state = 230U;
    msg.plan_id.assign("LECYJKPWSFCQNLETTUOCKDZBJFRAHBZPWMUOJJDVREHQRVKANIMZGBTWUZHXVZRMRZCAMZPEJXJHAQVDURULTKPRIFUWBCOETYNOQFWXHFIIPGXYSQEESYZNPALHLLSUYGJQSCSGGNNKLX");
    msg.comm_level = 229U;

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
    msg.setTimeStamp(0.0521613649587);
    msg.setSource(34996U);
    msg.setSourceEntity(124U);
    msg.setDestination(64263U);
    msg.setDestinationEntity(112U);
    msg.type = 2U;
    msg.op = 208U;
    msg.request_id = 52085U;
    msg.plan_id.assign("IXNEKXRGUISTPDDXBNGSPTUWKYXEIKTVPKZNZLSRKDPLSOVSUWCEFURB");
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.983668113412;
    tmp_msg_0.reason = 132U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OBQXLZSGEUXTLOACDCSXNAEKVBEUJZHPKTEEJAFKFWNTPPBAQFSBZMHYENHORHGXZCSYGHSLCJFOQJGQXSGWZRCEFBBLLCMPDUUWAMIXVYLAMYPJUOTJRCBZCHYZDPVMSMWINKJYSNREKQHNOUQHRTXDTFOKTRNJVXUOTGSAAMDYPIZBZYDQSQFWCDBVAPGYKQUCJRLWAFLRDHONDRTNEVGVFVIU");

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
    msg.setTimeStamp(0.531053372689);
    msg.setSource(21504U);
    msg.setSourceEntity(132U);
    msg.setDestination(46621U);
    msg.setDestinationEntity(54U);
    msg.type = 231U;
    msg.op = 119U;
    msg.request_id = 29409U;
    msg.plan_id.assign("GIOAQAUJVDOUHVUPPNYIOMFQDSCYZSAXFLPWIEYKNUUWONJRLHSJKKHBXZSLVRPFYMSHVRVDWDMQXRVFQOCMKARPREDTHEIBPLTKYWNJZXOLZTMYWPGEGEHAYIJOGPVBYVUNWPFRJEJXFTFLRLQCAYLDFEGUSXTZNMKKJTOHBBENITWIXKIZAQCSEQMCXMWCOJUXVINBCSZZQAGRVPLXDKQNHWCBDBSJNTFC");
    IMC::UsblAnglesExtended tmp_msg_0;
    tmp_msg_0.target.assign("QMAQPHFVELJYFTWPJYGOEBBJSNAUYGLMOSRYSIPSDOCMPMOTFCPAZJYEEZFCBIYKXGDXKZKFVVOFXZADRLGWUNNJHIWZUYNCXVZQATRKTDEWLDXGTOLEKBHPKCLVUSMCDMCJRUVZTITGNDWKFMHUARNQWJPMDQLFOIIKQOHNPEEU");
    tmp_msg_0.lbearing = 0.572543673703;
    tmp_msg_0.lelevation = 0.358406201887;
    tmp_msg_0.bearing = 0.252730244574;
    tmp_msg_0.elevation = 0.553968442443;
    tmp_msg_0.phi = 0.751273527533;
    tmp_msg_0.theta = 0.0696208756708;
    tmp_msg_0.psi = 0.238882331309;
    tmp_msg_0.accuracy = 0.0741719030698;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AEQVUHXFZJLHPQASJXCOLHWZSDDBWGMXKZKGSXORPDCZBPRANNFYCWCTHGVXXSETJTZKOOWVMELDTEJHKHCGQLPRXCZIWALRKYOPILPBHQSYTUMIYIJNIBUURVQTPYMFNVGQISVMASVTUYIYGJFNFFGODKBGYDZWRYMKBJUQVXMBEEPODZQIVXPAHTCAUHWFDAHEQINEBAUPVCLRSDCZUNERSFGGENBAYLFQRDKNKXLOOJWFMZOBKCMJTIJ");

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
    msg.setTimeStamp(0.387555953224);
    msg.setSource(5542U);
    msg.setSourceEntity(241U);
    msg.setDestination(22633U);
    msg.setDestinationEntity(233U);
    msg.type = 212U;
    msg.op = 86U;
    msg.request_id = 16601U;
    msg.plan_id.assign("JELRCICPCDQLEVLRVCGPYDANJDMVCKGHXIRBEGAKTUHWTEHKRHZAOAZGGQCQYUUDQQSXTKXMWPZTGTSHWYLTNDIFOJAVIRQMYEMJUTSHIRNOBKVUMCTWZSHHEVSZAWJBLPSWJNUBDVWSFOPKZMAOHZJOEKZIZFSFCMFFNMTOWLQJXJBNNDAGSXXRVPNWDGPDYIZPYYBLVEVCXOIJQSGCYNQEOUPFLHKBRLBDFLK");
    IMC::AcousticSystemsQuery tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CQUFEQEAAEUPZKBZDDQWCODNDXYSFGNJPLHKEWGQEBSVZRSOGZKSFHATTBJPPJXTQQWNTFIYFAXKMDMRIDCNPPRFEIW");

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
    msg.setTimeStamp(0.818527025511);
    msg.setSource(49112U);
    msg.setSourceEntity(143U);
    msg.setDestination(53070U);
    msg.setDestinationEntity(3U);
    msg.plan_count = 53419U;
    msg.plan_size = 1561124159U;
    msg.change_time = 0.667291029551;
    msg.change_sid = 49975U;
    msg.change_sname.assign("GSSMERCPQDQPUDLVYHFFQYOMIBURALQCSZJGBXHNFXKMINEDCOEYCGTJLWVQMYFZRPGAQLUSHXLOWSWNHRNPJTSFPJXOMPUDAYKCKRZZPRETREJMQLUNDFMKVUIAMIKWDWAHCABQLUEXE");
    const char tmp_msg_0[] = {-128, 100, 13, -21, -125, -14, -99, -120, -19, 36, -61, 1, 48, -12, 116, 0, 53, -111, -7, -56, -7, 48, -124, 19, -51, -121, 77, 54, -122, 1, 62, -85, -34, -82, -49, 91, -91, 79, -112, -82, 28, -118, 121, -62, -2, 79, -123, -43, -70, -99, -108, -80, 63, -84, 126, 83, -84, 123, 91, 72, 42, -91, 4, 13, 64, 21, 85, 68, 121, 57, -50, 119, -56, -53, -26, -78, 111, 27, 54, 33, -114, -87, -104, 7, 95, 37, -92, -45, -121, 87, -83, 68, -113, 93, 4, 106, 107, 99, -109, -22, 74, -114, -30, 124, 80, 26, -92, 109, -53, -112, -120, 103, -52, -51, -106, -52, -99, -118, -106, -36, 58, -17, 116, 61, -17, 36, 112, 15, -3, -122, 11, 29, -128, 38, 21, -95, -31, -91, 57, 122, 116, 19, -103, -124, 87, 113, -101, -126, 86, -88, -35, -112, -101, -91, 77, 109, -118, 111, -40, 50, -123, -100, 35, 63, 94, 8, 82, -9, 82, 105, 21, -18, 78, -56, -32, 30, -82, -5, -39, 0, -124, -28, -100, 70, -120, -126, 46, -76, -13, -25, -50, -75, 123, -86, 13, -24, 113, 12, 96, -98, 113, 89, 101, 103, -36, -52, -75, -128, 110, -75, -34, -67, -113, -4, -9, -29, -39, 9, 33, -1, 6, 47, -28, -22, -43, 35, 88, 10, 56, 66, -46, -52, -77, 68, 73, -32, 61, -107, -76, -95, 95};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("RKTSAOHYZFRKCFMYXIJIAACIBZWTVSOFMVGTOJRVSLFGZMUCGGUGWXWUKTNOYROKBNJXFSDWT");
    tmp_msg_1.plan_size = 10281U;
    tmp_msg_1.change_time = 0.69507678262;
    tmp_msg_1.change_sid = 37801U;
    tmp_msg_1.change_sname.assign("VWGBODLXVEXHRMTHQQNHNLFNKMEKAGYZZCFOKUKWWAEQIXAOOVCLOBCUPSDZWGAAGQIRQXIWYBDDXQSLBYWFRPJJSHEECWSVEPPVHMJHYAMGIUIJPMMYXIPIQNCPJ");
    const char tmp_tmp_msg_1_0[] = {36, -18, -106, 93, -16, -105, 33, -52, -72, 12, 4, 50, -13, 29, 8, -79, 23, -77, -21, -92, -22, -40, -22, 35, -8, -120, -28, 39, 124, -21, -98, 120, 74, -22, 3, -42, 124, 32, -61, 5, 59, -71, -12, 55, 67, -25, -119, -125, 103, -63, -9, 16, 12, -115, -27, -103, -56, -53, 80, 122, 100, -63, 122};
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
    msg.setTimeStamp(0.0849004669437);
    msg.setSource(2132U);
    msg.setSourceEntity(158U);
    msg.setDestination(64697U);
    msg.setDestinationEntity(83U);
    msg.plan_count = 55021U;
    msg.plan_size = 3161571210U;
    msg.change_time = 0.546570791731;
    msg.change_sid = 19329U;
    msg.change_sname.assign("QCHDUCVKQIJUIYBGTWTAFDOZDNWSOCLRHSCMYCGLKWXDMKLRVZHEJYXNZEMVFRJZONYFVWKIYFAIHWKQTCUVNEPOQLOVMECUUJVBPQIPPISSQHGBRIQBFPHKPWYNGJGKRKCIKJXEXBURPPLLNTQRAJXAWGYDZRANHUXMSDADUQDWNXTBOSLLVFSZWOJGYHWRUFTTZAMFMJOUXLDEMGTMKHVQPMBFARLDYTAZOYZ");
    const char tmp_msg_0[] = {-46, -68, 23, -13, 47, -123, 30, -87, -52, 76, -80, 19, 108, -7, 121, 61, 27, -50, -100, 104, -48, 99, -91, -122, 4, 71, 6, -30, -27, 97, -100, -12, 99, 80, -125, 4, -125, 101, -122, 10, 21, -78, 46, 122, 88, 25, 19, -109, -38, -22, 8, -14, -43, 47, -63, -86, -5, -124, 113, -62, 16, -37, 26, -123, -25, 30, -85, -109, -127, -81, -6, 46, -48, 18, -20, -38, -21, -74, 16, -82, 74, -104, 40, 52, -98, -75, 53, -128, -2, -96, -105, -39, -12, 67, -67, 102, 31, -74, 54, -60, 68, 123, -103, -72, -17, 62, -94, -127, -22, -68, -126, 87, 54, -91, -28, 66, 56, -38, 108, 122, -98, 43, 41, -39, -33};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("MSUQGJCIBGOGTCVNEEDDSEBRGWKXJRBZMSOOMAYIJXNMSAOYOHPAJVOAXYFHUKCKRNXNKVOHNSYWBVRFTZLEDWBIVNULFBSVTHLEVKZSGMMOAXQWPQDVLELMUPFHLXDUYKAFEZBPI");
    tmp_msg_1.plan_size = 65293U;
    tmp_msg_1.change_time = 0.60298533448;
    tmp_msg_1.change_sid = 30605U;
    tmp_msg_1.change_sname.assign("EZVEDAKODNQYBOMLVPVIPIHHZGFFAJVHISLGLCGNFFXBWPQFTDUGMPZTLOYPMQNQHDKKUCAWAOPYRJDWENBUEDMMBJJIZQBZRVLWSUGRRKQIASQATINDYZVXZBTRNUXENYRURXVCJEKJNEZBHOVCJTQJCPFXWMFQSDHIUIUGOETPBYOSJKMGCLASXFRLIUSJXGTKLFRDPWDKEW");
    const char tmp_tmp_msg_1_0[] = {107, -121, -15, 93, 126, -61, -91, 33, -11, -12, -55, 23, -107, 41, 49, 122, -45, -126, -42, 55, 21, 92, 18, 113, 107, 12, -120, 71, -88, -38, 126, 24, -51, 76, 60, 115, -109, 11, 36, 84, -58, -82, 57, 51, 120, -108, -73, -81, -71, -6, -77, 37, -16, 65, 31, 119, -116, -126, -73, 31, 88, 89, 40, 54, -8, 59, 114, 38, 119, -7, 23, -87, 11, -23, 124, 126, 113, 10, -14, -54, 28, -29, -84, -121, 95, -47, -113, -48, -126, 107, -11, 84, 98, 102, -116, -17, -78, -34, -98, -11, 12, 64, 103, -92, 76, -118, 106, 13, 67, -113, 54, 124, 13, 2, -36, -10, -86, -36, -53, -66, -8, -92, -105, -19, -116, -108, -47, 35, 88, -61, 42, 113, 119, 24, 15, -20, 20, -66, 97, 25, 50, 15, -75, -27, -52, 26, -21, 97, -30, -29, 119, 57, -57, -6, 84, 90, 36, -123, -54, -43, 117, 91, 55, -103, 60, 88, 2, -14, 106, 13, 81, 69, -67, 59, 62, 42, 12, 43, -61, 49, 8, -75, 35, 111, 9, 97, 32, -34, -59, 120, -6, 92, -6, 83, 116, -122, -108, -66, -85, 51, 35, -8, 52, -77, 112, 35, -2, 124, 120, 97, 35, 114, -92, 90, -71, -8, 40, -68, -114, -86, -86, 100, -81, 119, -100, -9, -117, 87, 82, 25, 36};
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
    msg.setTimeStamp(0.42653974894);
    msg.setSource(39849U);
    msg.setSourceEntity(25U);
    msg.setDestination(18975U);
    msg.setDestinationEntity(201U);
    msg.plan_count = 28923U;
    msg.plan_size = 687696563U;
    msg.change_time = 0.495077895061;
    msg.change_sid = 44470U;
    msg.change_sname.assign("TYASNJTDNRGXWSEACXVRFHSKXGOESKHCSLIHTIO");
    const char tmp_msg_0[] = {80, 16, -15, -86, -31, -47, 60, -19, 12, 9, 11, -88, -94, -112};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("KBTCABZZZEOGLXTGPSYGWDDYAXKQGSPFXNSBDWHANYMIAGLTBQFVIUGKKOHTFSHTGWJMDJZWIDXLCDUOPWNUPEETXMYYRVMBZKXQYTPWKEWVCPJUMSKJRTLPGJELMQAASQFEQNRPNIJVOKRSJENVUFHCDRMOHHCDVIXEUNAFGALREOMWOBUPCKUJTOJVNNVEFBJYLXKRZOMXUWGDFQIFDXQFVB");
    tmp_msg_1.plan_size = 46113U;
    tmp_msg_1.change_time = 0.676491674149;
    tmp_msg_1.change_sid = 17398U;
    tmp_msg_1.change_sname.assign("LPQERENXNZZLILSUJBLTDVNCVDRPHPJALHWYONKVUEMEPQUAODTXFJRPWYIWMTQ");
    const char tmp_tmp_msg_1_0[] = {-23, 79, 104, 59, -85, 52, 67, 80, 93, -41, 107, -25, -126, 59, -5, 74, -87, 8, -47, -61, -8, -101, -110, 88, 61, 105, -107, -47, -6, -14, 121, -66, 125, 9, 68, -19, 94, 52, -51, -95, 121, -65, -59, -107, 95, -40, -123, 30, -118, 122, -92, 86, -127, -126, 120, -77, 10, -67, -116, 46, 19, -115, 40, 47, 44, 6, -47, 47, 29, -48, 110, -95, 57, -110, -4, 95, -123, -56, -10, -80, -124, 65, 57, 59, -53, 78, 48, -36, -107, -44, -101, 89, -85, 106, -10, 38, 34, 9, -4, 79, -56, 42, -127, 77, -8, -95, -45, 24, -15, -31, -81};
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
    msg.setTimeStamp(0.430000846481);
    msg.setSource(25460U);
    msg.setSourceEntity(78U);
    msg.setDestination(16637U);
    msg.setDestinationEntity(79U);
    msg.plan_id.assign("JFHDYFVBTGJJKZFXWADALDZTIMWEIZHGUPOYNYGMPRFNFIUIMWGEUQFQINXVCMNYRPSEKAHPTPJXGICFUAJBSAMQZNSPTDAYDVWQAJEYKNRIYZRBJPBCOTOGXWRANXJZKWDPJIQORPULUZQETDCLMHLMODTCJHUVESGRRIOFFCMLTXSCXHHHVUESVU");
    msg.plan_size = 4661U;
    msg.change_time = 0.355700659452;
    msg.change_sid = 13269U;
    msg.change_sname.assign("QERQVHFDBUIOSINRZJJJVFQCBNSUMJCDIUZRPUQZEABHGZDFXHMHLYMREBLIJLPHHPFDVGRRXCRNKNUDTETCOKMPEWWVFSAWCIHCYKKMWTXSLCLGLPMYMIDWURSKPIPFFNAWVQIFYYUVQAFLJDNOYRDJXNHOJPBZZGSRSAKFHKXASWTZONQXCVVSUKMOAOCWS");
    const char tmp_msg_0[] = {-83, -89, -75, -26, -73, -111, 120, 10, 76, 89, 7, -125, -33, -18, 108, -33, -101, 50, 89, 17, 50, 22, 39, 5, -115, 19, -10, -120, 59, 64, -107, -106, -65, -93, -30, -75, -101, 4, 84, -1, 43, -81, -30, -48, -80, 23, -98, -92, 80, 66, 48, 70, 28, -72, 100, 41, 109, 95, -80, 77, -97, -28, 51, 109, -7, 101, -104, -107, -112, 73, -70, -118, 53, -82, -97, -66, 99, -40, -123, 2, 94, 2, -28, -87, -68, -42, 107, -27, -26, 61, -30, -7, -6, 101, -78, 7, 5, -54, -73, 114, -84, -30, 106, -45, -90, -96, -24, -107, -33, 59, -12, -123, 48, 102, 96, 122, 23, -10, 84, -21, -101, 47, -97, 123, 56, 23, 57, 45, -30, -1, -50, -111};
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
    msg.setTimeStamp(0.516598648413);
    msg.setSource(29525U);
    msg.setSourceEntity(59U);
    msg.setDestination(21053U);
    msg.setDestinationEntity(153U);
    msg.plan_id.assign("OWKHCKNOYPTRZWJFOOJZUIWAJGNBGCALYLRBXJCFRGFHQPZDIXPEXXMVGLA");
    msg.plan_size = 15705U;
    msg.change_time = 0.16559467202;
    msg.change_sid = 1766U;
    msg.change_sname.assign("SWFOUVYUGMJRSWPHSIMYKFFTQOLOPKIQGPBCSNZRJMKPVRSTCUAPEKFMKOPLCLRZGXXCZOIOPJWWHFITLYGINEBGNHHARJHAFWGIMDVIJS");
    const char tmp_msg_0[] = {-45, -75, 103, 123, 61, -59, -78, -88, -2, 100, 109, -18, -14, -77, -29, -97, -52, 126, -66, -36, -42, -22, -8, -26, 58, -41, 110, 37, -13, -44, 26, -107, 81, -41, 48, 65, -14, 109, 37, 37, -49, 13, -101, -50, 124, -19, -110, -114, 43, -15, -61, 124, 102, 22, -72, -118, -57, -55, -50, 113, 38, -98, 71, 55, 76, 83, 88, -109, 69, 56, -78, -53, -41, 42, -43, 103, -62, -108, 2, 90, -125, 70, -21, -99, 5, -118, -40, 68, -14, 82, -91, -106, 26, 57, -127, -35, 92, 25, -79, 78, 84, 94, -63, 35, -36, -81, -102, 97, 8, 8, -39, 16, -98, -7, 93, -62, -99, -109, -49, -101, 58, 23, 58, 92, 12, -36, -89, -11, 94, 96, -51, 18, -112, -124, -94, 96, 96, -88, -35, -25, 17, -103, 66, 36, -110, 27, -122};
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
    msg.setTimeStamp(0.875112442039);
    msg.setSource(27424U);
    msg.setSourceEntity(55U);
    msg.setDestination(42056U);
    msg.setDestinationEntity(165U);
    msg.plan_id.assign("RWCEOGLEZHOVZMXTQRVOSWAHTISWRXCXUZNYGIQWEBJMUZVDTPMLKJAVZYREFPGEGJVEYAJIHRUSOFWTSFKODAJBIQNUUXOINSXRBITDCVFLGFPIMVPCLPGZZXAQOAPYGOPPKBKEYCDLCTKBYTPPLFVWHBSIMYLSOBRIVWQTEQSCHZFZ");
    msg.plan_size = 12804U;
    msg.change_time = 0.45247951927;
    msg.change_sid = 55274U;
    msg.change_sname.assign("JXSEWSOFCAITOERDFXIZRKAYLFALXTAPTWVS");
    const char tmp_msg_0[] = {107, 44, 95, 30, -66, -29, 18, -123, -73, 94, 52, -68, 91, -12, 53, 74, -89, 69, 34, 32, 55, -104, 7, -103, 70, -26, 35, 27, 100, 52, 68, -94, 55, 70, -34, 1, -109, -76, 92, 55, 24, 7, 3, -86, 6, 47, 32, 86, -63, -33, -73, 110, 110, 93, 100, 89, -99, -2, 54, 105, -14, -37, 81, -36, 9, 24, -55, -121, 94, -70, -22, 79, 77, 122, 120, -62, 121, -37, 25, 97, 113, -108, -4, -109, 68, 18, -18, -40, -119, 15, -20, 22, -44, 116, -24, -68, -60, 10, 77, -40, -105, -103, 118, -15, -99, 11, -26, -35, 34, -117, -50, -63, 97, 123, -51, -102, 74, -91, 62, 97, -33, 26, 39, 57, 60, 15, 116, 16, 50, 58, -42, -49, -24, -88, -24, 86, 74, -8, 69, 54, -113, -67, -61, 27, -111, 112, 42, 14, -70, 89, 19, -117, -49, -84, -90, -48, -45, 23, 121, 63, 123, 26, -84, -85, -124, -127, -1, 71, -26, 35, -42, 87, 77, 99, -41, 48, 81, -23, -4, 113, 104, 2, -12, 82, -67, 56, 64, -13, 17, 79, 41, -14, 117, -49, -14, 109, 114, 95, -118};
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
    msg.setTimeStamp(0.801389577375);
    msg.setSource(13752U);
    msg.setSourceEntity(9U);
    msg.setDestination(12419U);
    msg.setDestinationEntity(88U);
    msg.type = 33U;
    msg.op = 59U;
    msg.request_id = 53000U;
    msg.plan_id.assign("EALGTQWFBJJUZYRGKNCEOAXGKORQBLBDZIJGOMKXOTCHKUJNPGQVEDTRQYBVQAMDWRIFTZLASWDZMDKUYCCTSKEHXPVGQVSCLHYMLQNMLZMTTBSEVMYHHPGPCAUBRYYVMPPYWCUKGOSFEOGLNYPN");
    msg.flags = 13484U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 21809U;
    tmp_msg_0.lat = 0.955810511225;
    tmp_msg_0.lon = 0.371057895345;
    tmp_msg_0.z = 0.945633240485;
    tmp_msg_0.z_units = 201U;
    tmp_msg_0.speed = 0.649371460347;
    tmp_msg_0.speed_units = 20U;
    tmp_msg_0.duration = 14393U;
    tmp_msg_0.radius = 0.904601477915;
    tmp_msg_0.flags = 173U;
    tmp_msg_0.custom.assign("HSUJVSVDVPQDGMQMVODJFPVQUHIMHSVIMKBFJAJWZXAFCANDNJODKXFYEQQBYUUTPTQXXQRJTOLOWCECGNIXXQOXLDVWWRJBHGAPVRXJPNTIHEMSEYUMBQWDBLKGRMTKGOAGZHLRWPVFZRZJTIEBLKBBYIUKBPGJSZUFIGRZSLPCOMLTPAGCZLBWQTSUCECFKANOYIENEYNLSMATSFHUDZCDCZKZGWWENHLKKRHOYHFXVIWMCTYANXSPEFNDUI");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IEXUHBKCJLQCVUQIATZDLRKUZBJDKXACAUAPXYGSUTJFBAQPAJXWHMSYUEHTLOMVEFWKHLXMNAMPNKLJOMAFPTDSDGFVQZGTOZBOXNVNDSWZYSSAJYJVVNBFQOBYZPFWGHWEVRJWWIYMUNEMOKOIEPNMLPQKKHRWVZPQIQMVSZTOEBRNTSWZQXBXJSVFKTDNRZMRLRLPLYRPHDGHWOYEAEHQBHEXIIGTGRFFCYCJLUD");

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
    msg.setTimeStamp(0.397926493028);
    msg.setSource(44793U);
    msg.setSourceEntity(35U);
    msg.setDestination(8886U);
    msg.setDestinationEntity(31U);
    msg.type = 160U;
    msg.op = 130U;
    msg.request_id = 16401U;
    msg.plan_id.assign("ZQPDWBYKZUGFCOKLBUJIECRDMLOIWBXUTUVBRJOYLLFFEKPPWONITAR");
    msg.flags = 15842U;
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ZGDJVXMOFCWCQBIZMCTENICNFDKCMEIKPDLHJFUUQVLLHWIROC");
    IMC::Dislodge tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 63339U;
    tmp_tmp_msg_0_0.rpm = 0.416224322066;
    tmp_tmp_msg_0_0.direction = 109U;
    tmp_tmp_msg_0_0.custom.assign("GPWTXLZUGBJGAIHQWNMXCWSKIUVDNXZIOAGZPRXDEHLQWSLZJQFRUEJXRBKVCALZISQUTYQJYFUESOEKLXANAHMENXCEGBMFIWPRDIOPKGBFVSGDRZJKHNPYFYYDLHGKHAMRZBLATSOGQUFPQASWTAJFGNCVIYXUMWODPLORTMTJTMNSKVCHJWNYVTCIVECCPSHOUMETKJELBVTPDAZMFDBCFUKXBRM");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZMRAVSAVTIIQWQBGVGEJEPHZORXYLNKCWOTFZMZKLRDKTJQNPVNYCARKRHISTYP");

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
    msg.setTimeStamp(0.444801775694);
    msg.setSource(50564U);
    msg.setSourceEntity(95U);
    msg.setDestination(42616U);
    msg.setDestinationEntity(102U);
    msg.type = 197U;
    msg.op = 13U;
    msg.request_id = 62100U;
    msg.plan_id.assign("KADGDEBGIYSNNMKBBJAZWYXECRWCXETIYWQKYTSQQBDQLVFJEOMVNVLJSSJNQCXB");
    msg.flags = 1310U;
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("OJIOJYOMTHQACUWXJBWQDGBXCYKISNMAGJTBYAYPVZFMRXJDEKBCQWHGGCTDFFYFNNHKWYVISEQ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KZQTXSHJAORVTXVJXEXOEYZHRMOLI");

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
    msg.setTimeStamp(0.835211369543);
    msg.setSource(37671U);
    msg.setSourceEntity(135U);
    msg.setDestination(58646U);
    msg.setDestinationEntity(138U);
    msg.state = 8U;
    msg.plan_id.assign("CEISENUMXREEFRGRHGYFICXNKDBUFOPKNUHCQJJALXAYEMJHTINTPQWWGZANKLSMLFDNQBCOTZIUWUBCW");
    msg.plan_eta = 414007499;
    msg.plan_progress = 0.589693831814;
    msg.man_id.assign("ECMBGPZEYXQGIFZZNCDXJFTHILTORYNSRXVBFKKQMYOZZDOPABBZKKLREWWNYXBIFFYPPZJMDQRRNFUWPIAVHGIDZTI");
    msg.man_type = 59543U;
    msg.man_eta = -297699194;
    msg.last_outcome = 116U;

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
    msg.setTimeStamp(0.440355337399);
    msg.setSource(5859U);
    msg.setSourceEntity(213U);
    msg.setDestination(60555U);
    msg.setDestinationEntity(45U);
    msg.state = 162U;
    msg.plan_id.assign("SSDLXQMUNZJZUWLGIJNKELQPXKRSZQKZIRPMFPLPOYKGWRTMEYFBVXUNJYTJCQEBLCFCEEYBUVTYORBJSICIKNERNDCCFLNCUPXYQTOTIALPATDMUWZDVRKAGFSSKMNCUYHXLBMCZPVPGDWFFKOADZV");
    msg.plan_eta = -1948214217;
    msg.plan_progress = 0.902512706471;
    msg.man_id.assign("AFBGFTNIZEVSHEHDDOGXCLLNBTHEMYMGGWPGFTMVDMUIXHBURICKJFKVTYYHZSPCYEVKAQLPWEXVGNUKXKJYFOQXRG");
    msg.man_type = 30441U;
    msg.man_eta = 1450831107;
    msg.last_outcome = 22U;

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
    msg.setTimeStamp(0.459391360684);
    msg.setSource(59746U);
    msg.setSourceEntity(120U);
    msg.setDestination(29688U);
    msg.setDestinationEntity(156U);
    msg.state = 8U;
    msg.plan_id.assign("DQJRISBLFDBECOJRZHDEKFVODQWNHELNOHAZSYZPPVFIZBHAQNXTJKKUFVQTSUUSPCYSBWPEGJAVQCWVRMWMRRMFVTBCQHEZUROSOUJGWQKEXSMGVXGUBFZMWPNYAXQCIBGPMKTOFGOEGJALJEMWBCIUKNPCJLALUXDCNCHONAPULBDWTGMVBZRMFAYAOCQZKPFGWOIKHIDYMYKLZFRNYRTIUDJXPSVHXDNXSGJYYLYZISDQT");
    msg.plan_eta = -945396983;
    msg.plan_progress = 0.127626993481;
    msg.man_id.assign("CGXWRNUOZJKLESLXUAKRBJHYLGNPWZNAREGGXCQAKWIDNDQJQPODDNKZLLPU");
    msg.man_type = 63372U;
    msg.man_eta = -123887633;
    msg.last_outcome = 99U;

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
    msg.setTimeStamp(0.645140711136);
    msg.setSource(3227U);
    msg.setSourceEntity(236U);
    msg.setDestination(64230U);
    msg.setDestinationEntity(65U);
    msg.name.assign("XYEYXQFUVTKWTAGWNPBOTPLQESPLFFOKCDFHWFHZHVMWAYVIGEKORYXVXKZIHFCG");
    msg.value.assign("NUYLMNPSMCTGEZY");
    msg.type = 56U;
    msg.access = 37U;

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
    msg.setTimeStamp(0.631336297044);
    msg.setSource(38660U);
    msg.setSourceEntity(205U);
    msg.setDestination(12152U);
    msg.setDestinationEntity(15U);
    msg.name.assign("TMWQWUXDPJTBQVVFDIMTGYVIPOMESJHEAZUEZALCONBDOHXNPVYHVYZEUWULWRAPTZYNMAJSDKAPVQZNCSRCBRLLFDDBGMTQFIDDCLBANRLYSMJKUXUGCYPUGOAZLNSLWPPZXXEYRQEVRFIKLMMSKX");
    msg.value.assign("BZILYIKDYRAHQSGAXYGOGXRCVWMRRUJCOGCPHXOJFY");
    msg.type = 117U;
    msg.access = 56U;

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
    msg.setTimeStamp(0.391167363923);
    msg.setSource(55177U);
    msg.setSourceEntity(19U);
    msg.setDestination(15607U);
    msg.setDestinationEntity(252U);
    msg.name.assign("AAWNPUANKDERJZAXIRCQZNETXJQDYLRLXKHPTIZHTOLGIZTYDUGJKQCWIOSDSZOZWHZRCGOHBVHEMMODMOPVNMPWYEXKDFSKSJMEVPUGHLV");
    msg.value.assign("FYVEHLIXBMBHIKSOJTFIORARRIQIODBUFBHRLCKBQHHCNQEWBDNNCXGVAMVPIXPJSMXPCMDVAVLLDATUXXSEUFPIKVMVYUHYHZGQBXSR");
    msg.type = 77U;
    msg.access = 17U;

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
    msg.setTimeStamp(0.515389111007);
    msg.setSource(22338U);
    msg.setSourceEntity(168U);
    msg.setDestination(19603U);
    msg.setDestinationEntity(47U);
    msg.cmd = 50U;
    msg.op = 2U;
    msg.plan_id.assign("REIPVWNBJOHUDOPSCMWPVBTTLELJISSSYJFEZPIZFQ");
    msg.params.assign("XBMKDFUFUEUYBAFHQUERWJZGPHYWAWNUYGSZQCVCDMBESXQYIZMYQIVPGNHTMOUVEXGUVFDVAPUUWAZLIXPZNIHMTDFODNWMBELSGLBLATWNKBSNILBHQXSZIIQDXSOP");

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
    msg.setTimeStamp(0.969260681541);
    msg.setSource(55284U);
    msg.setSourceEntity(206U);
    msg.setDestination(46484U);
    msg.setDestinationEntity(199U);
    msg.cmd = 4U;
    msg.op = 21U;
    msg.plan_id.assign("IBXPJXNSBWHGQJPFVNGUDILRBMXHYXAQJORJUZCKFBDIGUWMOIIADHEZWTJPLJYFPKLMQJEQLGVSCMIHOTBGBASYDORQLQGKSTYTZNDENGLWIPOIWNBQQEPZKVLYHHMTAGAXEPKUNKXSEOZXHAFTUVRVKXERSAWHRTUKFWSLCDWIQZZMGOFGCFPZZAXVBOLMSTKFYVSDPLMFBWDYQUDUEAJRYDVNWEYNCEIVBZXTMOSCJTNRCORHRH");
    msg.params.assign("DKDJMSWSFPGHCKBYBIGAJLPMGMBZSAWEBQVOCFRNSEWBETTONRSVZUHQIFPWPQAMLRZEAQTIGLQHESZUSRKNLASYROYITSIPJULHQHBINGETUUODXVVKGYVKNDVENLKBYEZEFHDLFPTHLVXYXKJXDDIJFRQJFWCNXYGRZXBHIWXWU");

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
    msg.setTimeStamp(0.0592136755803);
    msg.setSource(7049U);
    msg.setSourceEntity(117U);
    msg.setDestination(30809U);
    msg.setDestinationEntity(213U);
    msg.cmd = 227U;
    msg.op = 70U;
    msg.plan_id.assign("MFEBETAVKYRPVSADRXJWUIHPBIWQXONWFAKKUTLEQVBFMFVDTKHGVICVKDYOMPXOFGGYUXEHXGSJIBVJRYOFZCEFMSUDSHPLTNHCDOYYRUTWLQENGZRYCNDDLONTJGGKONSYIQNLDSPZKRZLXUCBWSAXMBJZGBEYQWJPMLAPLTMVJIHZRTBUTLQZYFSINBME");
    msg.params.assign("GOHWULWOHFVTXQUXYOJHNQHFGPJQWQEKDECPLGRFIIQAZJJCYWIOBCGVJBAQTTVNPTUATNSHEBEWPCPNUDZXDRZTDYVMHPYYKCEXSAHUKXFZMZTVYDWOCLKRSKIVTGFPAXZEEMRSMYQJJTNNAUJAMDMR");

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
    msg.setTimeStamp(0.864492108555);
    msg.setSource(12613U);
    msg.setSourceEntity(153U);
    msg.setDestination(15850U);
    msg.setDestinationEntity(55U);
    msg.group_name.assign("QRRELWGWJBQIQOVJHJOTORENYUSOSFAPDKFLXIGXYHPZDTBUTXLJHPKCZVAIKUOSDGDAWHYQOCBGKCRAXSGOKTUIEBQPZIIIKKCLXLMWJSDMUGXERSFFDEJUFFXPUMMATSATWVEVZWNCLRRDLUVAYXJVJPQXNRBFMPBHHILOCESLNBBJHZLJPPMHEGYTZZSPWNZBWACKQVNMQGMYHKMTICFERSYQTTY");
    msg.op = 87U;
    msg.lat = 0.985920854619;
    msg.lon = 0.862127702647;
    msg.height = 0.256683676875;
    msg.x = 0.779151976127;
    msg.y = 0.892995141428;
    msg.z = 0.862440894737;
    msg.phi = 0.975447050707;
    msg.theta = 0.152860589392;
    msg.psi = 0.135664338043;
    msg.vx = 0.252513222056;
    msg.vy = 0.617353462608;
    msg.vz = 0.164490868553;
    msg.p = 0.979893331551;
    msg.q = 0.433646980613;
    msg.r = 0.279049128626;
    msg.svx = 0.829314990644;
    msg.svy = 0.63688197318;
    msg.svz = 0.114857371684;

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
    msg.setTimeStamp(0.0211862035339);
    msg.setSource(49129U);
    msg.setSourceEntity(98U);
    msg.setDestination(54085U);
    msg.setDestinationEntity(140U);
    msg.group_name.assign("SVEDLCKEVIPIDBMGRRJYPNFRSAZWKTTDLMALHGAOTIZWJELUQNHYTCODUDWNPUYUBSROJKESMJKMRDKUUMFCGCAEPCZTLTLO");
    msg.op = 181U;
    msg.lat = 0.494443556727;
    msg.lon = 0.288954048315;
    msg.height = 0.990712631517;
    msg.x = 0.263865955206;
    msg.y = 0.304665378844;
    msg.z = 0.0315339083657;
    msg.phi = 0.903282454137;
    msg.theta = 0.427322683015;
    msg.psi = 0.111035839718;
    msg.vx = 0.839234136438;
    msg.vy = 0.0535367084807;
    msg.vz = 0.854335418654;
    msg.p = 0.524519640684;
    msg.q = 0.908488930229;
    msg.r = 0.511812363738;
    msg.svx = 0.197154178639;
    msg.svy = 0.500856768691;
    msg.svz = 0.833531094175;

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
    msg.setTimeStamp(0.232165813854);
    msg.setSource(33950U);
    msg.setSourceEntity(125U);
    msg.setDestination(18059U);
    msg.setDestinationEntity(202U);
    msg.group_name.assign("PZAYKLZEHVCXHTYSLXAVHZFNHFYCQXCDYUDQMUFOBTFYZVHXYMVHOWLGPMUIJIFDTJASKLCUOPITEOJQJLEFURGBDNVCOSJZWEWIXJGYPUNXWXWDPHLYAMWSTCTSPQRBQDSFIAIHATKSKVDYREHZSRVOREQNBAENQGLJGNRAKSIUDETCJGPDFMGEBKPNLIWVPKICZOVRUOALMHXRLSWBJKGVE");
    msg.op = 78U;
    msg.lat = 0.547929642092;
    msg.lon = 0.820846615737;
    msg.height = 0.0745922594155;
    msg.x = 0.177725330256;
    msg.y = 0.928100153769;
    msg.z = 0.968252707201;
    msg.phi = 0.564172373508;
    msg.theta = 0.338308377425;
    msg.psi = 0.48937606084;
    msg.vx = 0.203329830617;
    msg.vy = 0.00866772323264;
    msg.vz = 0.486027450209;
    msg.p = 0.543252422052;
    msg.q = 0.359229467835;
    msg.r = 0.496547898399;
    msg.svx = 0.0154998179756;
    msg.svy = 0.978859336381;
    msg.svz = 0.755421572342;

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
    msg.setTimeStamp(0.198186721986);
    msg.setSource(48060U);
    msg.setSourceEntity(135U);
    msg.setDestination(5570U);
    msg.setDestinationEntity(238U);
    msg.plan_id.assign("WZQXBKTBUEIMTCIWGQDMOHLWCHMDFYTMJNZALFQAVOIFUMOVYSVM");
    msg.type = 207U;
    msg.properties = 45U;
    msg.durations.assign("SJLGXCRPLGBTSDYZQAQNEIOWDLIGVCBXNUXJNLODLBOWYMKKRTQVKVDXMVHCYFZIHAAURNYSEPJIFUUSXRENCWLFDXSJMOTQZXBYCASWVAWGLYJPSMMMZWMHBAEAIPKVZBUFGIIJQORPWCAJEWNPCUFMNWHUCKCBNITEPTRSHZVOGVXHZJZGHBFTPRDKDLEDRDRFTBLWKHKCOEIOFXSYVPNQY");
    msg.distances.assign("OWHDGYLVEDLJDRFIVLZHXUIHUJOWYUJXRKKUPGXBMGRPTQUHPYLHAUKCQANSBLMZJATWRQOQVPMFIDHHMAMGEVENBOTNGLFCFJIZCXXITYYZVYGIPJOTLQCNTVWKLCPVSEKAFKADWERHYGAFNQSJSWCIXZDERKP");
    msg.actions.assign("FWPKRNWJORRPWGDSYCKIDNTUEVIXOQFEBETQIYNPIGSSJNHLQBHYXURGIIYMSFGMLHWPSCBDEOJCCWJJTIQADFRTFSFMXYGBROAFCJZKLXTZWZSZEQLGMYYOPPCKAOBMLBDOWOCJHNHSNQSLJXAPIXKHZACVVTQFERUIVOMFDDXERSPHNUEATUQVMRCTJAAUKDVUZBTOFDXUUVGGVZMVWQNGHBPNYCVBHPWLMJGAWUDHXELTZAKKIBNLEZLKX");
    msg.fuel.assign("YIWRJDETVKRBKNJPTEXAVOOCBUJFCGIRUEBXSZJ");

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
    msg.setTimeStamp(0.487412566748);
    msg.setSource(38460U);
    msg.setSourceEntity(236U);
    msg.setDestination(18449U);
    msg.setDestinationEntity(187U);
    msg.plan_id.assign("NIWBZLXLWTTONBDXAFLYWKXBEOKCLCLMPMSSHWWLDJWRZPJOSXXBMSFGTVFLGCNICQFYBDWQHNOUBSBDYVPYJJAAKVIHBTRMSZTEOIBTUYAHRYEACNRAUHVRSGRWIOKWZFMHAVBGCXIRFSKWKMVJRFEZMVQDJETGQCUDOEJKUAGPINP");
    msg.type = 68U;
    msg.properties = 222U;
    msg.durations.assign("FLZBIQGBGYWVVYXTKMMXGHHAORQPMWHBXNQHXCGYUTXBKTIVUQVWIZRIHEEZAAPTFIDFYNRIVYJNKDOHAFJZGOVKCYSOGFKZBROAONDPBQUFAAMSWOGIWAJBPDNKXTSUQNVSFHVKUQEMTOPPS");
    msg.distances.assign("WSDPHYZPULBYGNRQLKLKSJUFFXDWNGEUNWKTEQBSGKMEMPISJHJAYGJXXOCSWKRJAPETCCSWILSWWHNTPVORLPQBRHRVZDOKFQXPP");
    msg.actions.assign("WBKCLBXKNGEAYHHUQNGYAZISDDJTMADMKF");
    msg.fuel.assign("QICTBQEFGOFZQTVSXWDNZNQORXEXKGDILLUJLMLSNNWGYFMJWMTCOMJHPJLAXMJYWIWUBYGOGARTHPMCCVVEDOIKFRDPZYOZDIGREKBOSJKDFQJYSYPAVMBJSZGHIFLKJCVUZTHVODGXSXYHWQCVXP");

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
    msg.setTimeStamp(0.567073975164);
    msg.setSource(16699U);
    msg.setSourceEntity(243U);
    msg.setDestination(53364U);
    msg.setDestinationEntity(183U);
    msg.plan_id.assign("EUEYLTVSZWUXYYEJNPXZCMHXHXKYGDOTOICJMDDFWYAKDNSKWAVQRMMVRBREXQQDURDOKHXZFGCFPCIKZLOVJLWHSDSRFYILPRAZRSQJNJNOYSCZXVUUJONZWSTBCMPKZITHWBYLQEUFHTITBQWFRHATGMPVQMGFOGPCMHXX");
    msg.type = 8U;
    msg.properties = 237U;
    msg.durations.assign("STUOTEZHIHHTFMAKDCFWOXWXMJSDZOPXIRHJCAMQWKSFCPUDBGQPTBOOYWBIGD");
    msg.distances.assign("ENTIGHOAYRVSLKGTZTBKXXSJRMNDOXFKACLDWJLKXXZVBFCFCEVXBCRTDYDFJLPMDEWHOLGJGUOIUUXFRESUBRLUFPPNYIJPJMKTYTQVCTVYSORSKMBW");
    msg.actions.assign("WWUFHDCBHJNBUOHPRZRFDODVXSJBATRSBYGVZAZUKZGRAPYVTYAPAVKUCGLDNOFHTUDGLKCQRQLXSYIWERNKJFEUREBXOTFEDDRMEPTLWMSVXZNDZPWJKUTQHCDMVKEFWSZYUQGVAJEYOBKEBKLTIWQCHWNUNIQGFXQLOIKPBCQIMPDBTGJALYMLACPUGFVVNLZXSGHSLTYYMJCIORGCQZYOZWSAQJWRH");
    msg.fuel.assign("HXIAOOTEBQYZATZLPPQCAEMJEWTFCHGJOWJVSUTFZUEDORQBVYSYPZNVQPMCEBLRZAGXVRXKDFWLKOZMLBKFYGHWDISZZKAHXRUNCAUARKBOAXKKEJBPDJTIURGFXHXDKUBHEFSLUM");

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
    msg.setTimeStamp(0.772829793329);
    msg.setSource(7913U);
    msg.setSourceEntity(173U);
    msg.setDestination(36017U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.88651832242;
    msg.lon = 0.521662662178;
    msg.depth = 0.155202601459;
    msg.roll = 0.0663937526391;
    msg.pitch = 0.457337134126;
    msg.yaw = 0.960622485672;
    msg.rcp_time = 0.8972567504;
    msg.sid.assign("VQQROBOEHCQUYCAMNPWJJKVYYCJZWWOTIMUGLSNAIXIBRAZCQYZVYJNREQSIDAHVCYYXBNGLLBTLKKUXLMTHKHSUIGHECCLFNDVJWTBUZGVAMVFQLWLUZZLAJMTNBNGMWPCNKBAAXJDDYIHBIYWFOSRRAJEDPQRI");
    msg.s_type = 123U;

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
    msg.setTimeStamp(0.0365550261806);
    msg.setSource(46639U);
    msg.setSourceEntity(191U);
    msg.setDestination(51935U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.709466578049;
    msg.lon = 0.262426416581;
    msg.depth = 0.2925696069;
    msg.roll = 0.498110049457;
    msg.pitch = 0.662082309936;
    msg.yaw = 0.470608610156;
    msg.rcp_time = 0.954219843685;
    msg.sid.assign("OQLYJSTQOXAEYNMSJDVNB");
    msg.s_type = 83U;

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
    msg.setTimeStamp(0.250733335993);
    msg.setSource(60408U);
    msg.setSourceEntity(198U);
    msg.setDestination(49942U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.503160918657;
    msg.lon = 0.532561205455;
    msg.depth = 0.910827764467;
    msg.roll = 0.102171123988;
    msg.pitch = 0.895894029542;
    msg.yaw = 0.425312750461;
    msg.rcp_time = 0.829486607914;
    msg.sid.assign("BDPEWZBUUZLMWRMXOEICEFBJQFNXQGNAJFPKZMLIEDYVOWGHPANDAHTTDVSAAZMASVMYNWYEQBFHXMVLXEXFNQLRWIHUXZZUBTPBTYSGQSWHFTIMDRVQJKKKYYLTEPBWZPQQFZRGUCUXKCCGAXCJRCCRVTTLVMNBILSGBKOCRDOWUJCJPPUYRKESHJYELKHGBFHIIRDTWWGAEJAXDUCOPRMNVPXADQITUSMIYSOJGNLZONFOKILQY");
    msg.s_type = 93U;

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
    msg.setTimeStamp(0.422323006295);
    msg.setSource(13883U);
    msg.setSourceEntity(168U);
    msg.setDestination(24398U);
    msg.setDestinationEntity(205U);
    msg.id.assign("RAEXMALJNZHCGWKFVPPBIMVFLIQDJUFBABVJGKJDHSW");
    msg.sensor_class.assign("ZFFYNOURXLTIWEFVOVMQBMMFDCFNDEQIIXQUWCWNUOCRQZYYTZDSPQRVLFZEBYHKSWQCXYEQKCUGMRMPPAHJGCUKRBZBJHSJCDDNRRDGSNVQIMQJYYODKXPKMPVZHADIKKXPATKBTGGKWHKEWPBHBSVTVEWRNSGYSBECPZXOVTACIO");
    msg.lat = 0.439730727896;
    msg.lon = 0.0452846649798;
    msg.alt = 0.431202121095;
    msg.heading = 0.267640952288;
    msg.data.assign("PKXPKXVUMJJAMRXTWXEFLZPMUWYDEYEQNYETXJCWKBECDALZZIIPCQFTDLXUJQFWMOKSTBQYEVWXCGZGDIOUHARMHBNQFLAOWBEFHSCITIEOZIRDLKFGSADUNWUQRJCSIOYRVTOJPFVQLSXOMHAGOLUFKVUVPLUTXEDBGNSMHTYNZHCBRBSDUXVGKNKLWGPQQVBYPNKACGZYHRWPOMIADGQHYHDBMZJJNOMWANHJIRFJ");

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
    msg.setTimeStamp(0.465671867994);
    msg.setSource(44094U);
    msg.setSourceEntity(235U);
    msg.setDestination(31861U);
    msg.setDestinationEntity(179U);
    msg.id.assign("SPJFEWSEUVDFFVAVPLBKCIOULIOXBNMTEVWJ");
    msg.sensor_class.assign("EPDUBLILWJFPIHXKGKXZTJEDOETLRMJBFVLMVVNPZVGAWEWIHUAPIKDRYXLLRNHXSUOPWADYOJIKJORKBLVBHRCIOPWMFDPNHGZFQKUENKGZZAXEAMFQUHQGSOVUBZSAOLDJRSTFRATEKVUABFJXYGXQRUYENFLBGCSBKEMWYAQJ");
    msg.lat = 0.999866268891;
    msg.lon = 0.548935339952;
    msg.alt = 0.674213892035;
    msg.heading = 0.309527762759;
    msg.data.assign("SEVHWCZIMXCQMPNZCVWSIDYXRNPODZFDXKSRWWCZFFICAGVPHBOGERPAKBJNSUDWPAZAIDYPROQFBYSQBCZXYUNTEWIGDLHBGWNGPKTUQHEMRNSILATCELKPGOCJXFBSXLJTQKFUVYAEKHLEEQBUJHLTIVZNROTIAHPYGSHUFNMDWYUDIMUNRYUFEGTAMOJBNQOOHLYRXOBELFKJXZVCVKAIMVTJTSDZLWVMJOXDKQSC");

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
    msg.setTimeStamp(0.469197848965);
    msg.setSource(60966U);
    msg.setSourceEntity(211U);
    msg.setDestination(13642U);
    msg.setDestinationEntity(99U);
    msg.id.assign("AMKPECMXZJGWMOVIADHIOYGIYHOLILOZKPZZEFCISXDTDZUVFEWVQJYFLHKGCMMLBYMMCHTQXUQAULDRGHBV");
    msg.sensor_class.assign("CAJPXQDDZSHPATHFSGEFWZYNLDCARPRGXOZEMOSIBAIDEOQFQPTRGIITAYLNXXLYPXXQOGJYSJRIVNCHYTKDREUKOZWFDNOGCDNNONYRVPUVNKMOUINMLMSHQQLABDXKLDVTESWMWPBUQWMKLKJWTWGGVBHCFZPSUUVWETYHZMSWVMRTJIVQQBOOCKAFNYURAFEUZZBLDCXKIXPFKIGYVJZEEVCHUBT");
    msg.lat = 0.653552367661;
    msg.lon = 0.953556713114;
    msg.alt = 0.555528824818;
    msg.heading = 0.599094261102;
    msg.data.assign("CZNXJCYLDLPREAJOXVPHDKSCSZFNMQNMHEOAKNFRFGQJBBTIQTOSGUSBXPJLMTHFJKWPLAXSUXKGOWHGXQTHSBZHJGLXNGKMTVIHBCWXOQUQKERZXAPJ");

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
    msg.setTimeStamp(0.477763957364);
    msg.setSource(37531U);
    msg.setSourceEntity(104U);
    msg.setDestination(33580U);
    msg.setDestinationEntity(178U);
    msg.id.assign("VDDAWZCFGMFBGABHKRPLMGZYRIMSSJSQUNTOXTJZRECZYPRCXIIOFQJFHPNMJMFBFGEJDDHQPLXSAGGRZHNXAOEURVTURY");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DAEIXDDSDNPTCXQRJNWYBGSVRXEGVEXLFOLKJMLUTCKDPHTLHGIHIZUOFGCZAUEARYJRJ");
    tmp_msg_0.feature_type = 204U;
    tmp_msg_0.rgb_red = 176U;
    tmp_msg_0.rgb_green = 121U;
    tmp_msg_0.rgb_blue = 145U;
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
    msg.setTimeStamp(0.457204390098);
    msg.setSource(64804U);
    msg.setSourceEntity(130U);
    msg.setDestination(16872U);
    msg.setDestinationEntity(224U);
    msg.id.assign("EHZZHJQTDXTTFNAYEPRVCHJRWQVIVIMJOQVUZYBTSIYCMKCXOVLOATJKGIKXTMUOIFRKARFDNNBQHGNQQYSPDAADKTESCDHLSULWJZIZJMHOSWFEXFZKQTXUBUYXIPRRVCOKDRFPMQHGUSJECHOUTYHGVMNKMXIGSSDGXXSCNVEGFBZGUFWCMLJANAWZIDYNKIQQTRULEL");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NXCYNPYXAMQA");
    tmp_msg_0.feature_type = 238U;
    tmp_msg_0.rgb_red = 141U;
    tmp_msg_0.rgb_green = 246U;
    tmp_msg_0.rgb_blue = 12U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.998557825734;
    tmp_tmp_msg_0_0.lon = 0.408230355991;
    tmp_tmp_msg_0_0.alt = 0.804180433001;
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
    msg.setTimeStamp(0.197575042005);
    msg.setSource(4499U);
    msg.setSourceEntity(234U);
    msg.setDestination(59713U);
    msg.setDestinationEntity(57U);
    msg.id.assign("JDKBSZEXPJWPUTHDFHRQWRLKTYGJBIQKSBJXXMZINUTUUFFCNRQGFOHYMXUKZLGPIBAZAXDDNSCYRJMBLSWXUVVDYVGBYRCWLGZH");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("UCBSVDVQBNYWEPXRAQTXSSTZRORZCZYJQAVMMDCZRJUCJQWICZRNDUQGJGWXMKXUAJAKOLBWJPTMESIZRJYTHOPGDICIFULFADQGKMMYKIFWKQKTLWCUXGAHBSREBBELDOESHAGJNXTQNOQHLTRGMNHHZLNZYCPWOTIVNEAUORICFKJFFLSBGVDLEQWWOUYNYKKVMCUKHYVXWPVHEDSGDIJBEIPZTP");
    tmp_msg_0.feature_type = 85U;
    tmp_msg_0.rgb_red = 31U;
    tmp_msg_0.rgb_green = 135U;
    tmp_msg_0.rgb_blue = 116U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.524962501961;
    tmp_tmp_msg_0_0.lon = 0.914125984025;
    tmp_tmp_msg_0_0.alt = 0.139600658011;
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
    msg.setTimeStamp(0.926635987006);
    msg.setSource(7629U);
    msg.setSourceEntity(137U);
    msg.setDestination(54308U);
    msg.setDestinationEntity(46U);
    msg.id.assign("IWVBJQBIORBKUAYWFNQXLLBKFLEWCCUXWQLJLDMETNFCOZMUQAEKMSHCGHTOLMZKHEURPIAFKYMVSSZIVSTYSXDVPCGJVVJZYHEZQGWDRAGBCAJVFSNNAKHNXZPIFGJHBPCGPYWKFRDMMVOIAX");
    msg.feature_type = 159U;
    msg.rgb_red = 17U;
    msg.rgb_green = 232U;
    msg.rgb_blue = 250U;

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
    msg.setTimeStamp(0.892205974822);
    msg.setSource(44163U);
    msg.setSourceEntity(71U);
    msg.setDestination(52060U);
    msg.setDestinationEntity(32U);
    msg.id.assign("BONZWXDWBGJUKKVEANUVPKQLYRXIIJQDRHUKCAXAFZUZWZUQZPWFRJJQWSANHGACSNRSWUEMBPHAJXUYOCNIFPMDDWISSEXGOFDCGMDVTYGLAEJBENOYVRODEDSTYXQCZAMBORYNMTYOKTETWSNMHQRCRTKJVKGZJAPRIGPWESHDBEIXKZFUTVQXIWCJOBOYTLAGVCLPFPIPQTBLDEKRVLKXQYNXFNZIHTLPSLLLHUSCFFMJQUHIHGOFMM");
    msg.feature_type = 55U;
    msg.rgb_red = 167U;
    msg.rgb_green = 224U;
    msg.rgb_blue = 208U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.658207925294;
    tmp_msg_0.lon = 0.53267942887;
    tmp_msg_0.alt = 0.980591624824;
    msg.feature.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.895370131045);
    msg.setSource(24774U);
    msg.setSourceEntity(235U);
    msg.setDestination(32391U);
    msg.setDestinationEntity(33U);
    msg.id.assign("PRSAYGWBMBISMFSWEEWIMUQBNDAXMYXPPOJEIVJORIVESEFJVCGZPIVMDXALGMJBQZXSWDHTANYQTLCKZNMTHKZUERVFKJUNRWDKZUDCGFGCPFUPSRYXFYZXAMNUFZHQCXTRIVAZOROJTSAEWNALKLDCN");
    msg.feature_type = 33U;
    msg.rgb_red = 151U;
    msg.rgb_green = 54U;
    msg.rgb_blue = 199U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.259775038832;
    tmp_msg_0.lon = 0.547561603233;
    tmp_msg_0.alt = 0.923696547211;
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
    msg.setTimeStamp(0.691293040418);
    msg.setSource(56765U);
    msg.setSourceEntity(167U);
    msg.setDestination(35578U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.408093280985;
    msg.lon = 0.803872860051;
    msg.alt = 0.351902564739;

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
    msg.setTimeStamp(0.246266085117);
    msg.setSource(46872U);
    msg.setSourceEntity(208U);
    msg.setDestination(36472U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.346412983316;
    msg.lon = 0.267972484676;
    msg.alt = 0.222516099881;

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
    msg.setTimeStamp(0.457055595201);
    msg.setSource(40032U);
    msg.setSourceEntity(136U);
    msg.setDestination(12981U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.288782173727;
    msg.lon = 0.980931435636;
    msg.alt = 0.230636749456;

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
    msg.setTimeStamp(0.877871946417);
    msg.setSource(30228U);
    msg.setSourceEntity(97U);
    msg.setDestination(6478U);
    msg.setDestinationEntity(253U);
    msg.type = 70U;
    msg.id.assign("UDVKVBWONPVKDQLGWRGAIQAPKNSCYFLLRPSEFHNJFLTCMRKYFDJTRERWLSITFIXJQCPPFDLYQHWQSZEBPIUVMIZVGUHIQCXCEYJYMDFRMAFGIBSROMEBTQSZEYXHCSCODNDJUKKHCDMVOHWTJKTWBKGPUTTJDALWAMETBXOO");
    IMC::TemporalPlanStatus tmp_msg_0;
    tmp_msg_0.plan_id.assign("VWXGSFPFVFBYZEDVAOOLAJMSSCGAVLXPXSFVQTBWWKXJBLMKGDRRRNGCUNJIQCBFRWWSIQAHAPBHSZDDPJBCYMQWBQDMUEHNYLHMSIEGZRGKUKZEQTNLPCZQUETOCVTHLHUWWROLPAYKJPXBXOEYIMIKBYDNXWGZFZNMAOSAKGIUOENERGNSPF");
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
    msg.setTimeStamp(0.711791246274);
    msg.setSource(64223U);
    msg.setSourceEntity(85U);
    msg.setDestination(44264U);
    msg.setDestinationEntity(47U);
    msg.type = 48U;
    msg.id.assign("HDSSWXLTATDG");
    IMC::SetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 48U;
    tmp_msg_0.x = 27878U;
    tmp_msg_0.y = 8900U;
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
    msg.setTimeStamp(0.358740406123);
    msg.setSource(4083U);
    msg.setSourceEntity(200U);
    msg.setDestination(15877U);
    msg.setDestinationEntity(140U);
    msg.type = 137U;
    msg.id.assign("LHKWDDAPSZPVKYFDZQXCYPIWBLEWUMCGBVLDBBGOMAOSMFITK");
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("HVBATNKZGHSNDEHWBATDUCMMGEJARYLTVCRZQVGCWVWWUPOOYOVFPYSCHZGRBLFKOUDPILKNEWLJDWWNIQVVZCEGFISQTPFGIKLISJJFHBCGONTTUHMARFNWYXFTSRBDMTXEXQYUTIARKCZIGYAOMJRXYNUQKIZCBNMVCYEXZBXSPUISYGFHMSZLORBGXLQEWEUK");
    tmp_msg_0.action = 126U;
    tmp_msg_0.grouplist.assign("WIHPEKVTALYGAAAZSBUHTQLTMFTNBNPRKPWQJYOUOTMBFRLBKCZDBFDNETKYMNGQQWUWFDGMJZENUULBZCNPUUHRSCQEDANKRXSVVABWYIRFLLTCDZHICSBJBAZPIMEYOKOZFKWUJVILHZGXOJENMWRTYFHWROQSWSFXFVEHRYHPKHXDIZGSXYWRABFJQDTPOVXGSGJCNDVEQ");
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
    msg.setTimeStamp(0.423620140051);
    msg.setSource(30858U);
    msg.setSourceEntity(224U);
    msg.setDestination(50692U);
    msg.setDestinationEntity(243U);
    msg.localname.assign("RUBFPCWNOFEDYAMBYSTOIHVGQVMACZUSBKPWLKOPJBDAMTIVZLSIJYLEXQGGCFYRORIHHMLHALZQTOGXEWWFXTXAXVCBRRUWBCNYDUIFGLKUDCZPAP");

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
    msg.setTimeStamp(0.275733265038);
    msg.setSource(14698U);
    msg.setSourceEntity(17U);
    msg.setDestination(44602U);
    msg.setDestinationEntity(109U);
    msg.localname.assign("JMLWQXMITWLEXRYTAREONZWVRBROSEXMRFFUEPGCHZAWJXKLJMAYDLKASDGSSMUGEGVJZPNOJOIFKXLPBSKUOTZAGTQANVZBDSCAHVECNQMCCMTIAXPQYYHBKTLJBDTYGUHYZKNDKYKUC");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DQLOOIPCCVPTAWTYBIFYWGEWBLNJQHFIZDPAOBKJQZISXMSAMORRLPC");
    tmp_msg_0.sys_type = 17U;
    tmp_msg_0.owner = 6201U;
    tmp_msg_0.lat = 0.662242396969;
    tmp_msg_0.lon = 0.550568074497;
    tmp_msg_0.height = 0.378386089818;
    tmp_msg_0.services.assign("LSIBUAGHVTIOQWFKOWEXESFJYAKBDIZPDEGZQXXDHBSRUCMDLJTIZLGLNDWWXAZANGDVUMICDSIKEGOBUYEXGYACBYKRNREMPTVPRLKCHEJYXZM");
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
    msg.setTimeStamp(0.122167623795);
    msg.setSource(32176U);
    msg.setSourceEntity(154U);
    msg.setDestination(12511U);
    msg.setDestinationEntity(151U);
    msg.localname.assign("RNQDPXNBCWSANVQIUZSPPSJQGWROILZCSGQDOXAPUTZHETEMSUSQZIDRMWHHRFOAQJITOLTNHAAZNAURUMPIZMJREMNRBDKUKHYSECJXDKBCPEPQKCEUFSXVOTEBMECBXVULXGSTLHWLGIWMDTLTBGYFADUGGJYDBCGHIXXVYMWZVQNHK");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("SHGMEOLOSJACXLEPZVCMDMXIUEXMQXIULKIFBFJBXPTDQCWSAHJRSSKCGPKRAENLFKTZEUPQRNUHTBVARNJHJDYTJQKWFHAXNZMUCSBKWYQOVYWRTTQKGHZNGQXAZHVAFLVMSVOKYRBLTFWZLZGEDPOBUYWFYWVIZNZKTIDHGPVRHYTBOZLDMW");
    tmp_msg_0.sys_type = 185U;
    tmp_msg_0.owner = 8117U;
    tmp_msg_0.lat = 0.683232953795;
    tmp_msg_0.lon = 0.234079371433;
    tmp_msg_0.height = 0.717211772311;
    tmp_msg_0.services.assign("JKEKCKZNYTXESVGRAJOICMMJUWNPCTJLVQELGNUZASFQYESHSOUPTKPXYMCOHPQTANHINJASUJWXOQWNMXUCRRKHRKXDEWWYBDBKTCLZEJGRWCBELYXRMDRGZKBLDFNUIMUWFAZTLTMKHIRBGQEDFYNFAPMCVGSYQSGZBHLXDIE");
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
    msg.setTimeStamp(0.602030411859);
    msg.setSource(44778U);
    msg.setSourceEntity(206U);
    msg.setDestination(18201U);
    msg.setDestinationEntity(68U);
    msg.timeline.assign("LIGYRXEIFKMTDGQRCCWJIJJXFKVPXSWYDXOXZJIGLIYRWWKSUFEUVUQXQBBSYHRTFJQOTUDDPZVE");
    msg.predicate.assign("CZZDUVWSCVPWGKWCXFFDUBBKEIMOAFBIRIPJCMTUANYVTHHLCGMYGXXJZVSUVQHKUSVCZPZDUIFBBEJRJESNUYFBGUGFTRBMAJOOXGGOOEPDRSJNFIQAQCKDYWLXTTLNMAQNSALSIEHUK");
    msg.attributes.assign("VMBFCBCDUJEZPCOURIIZLPNJCEYLKKEVTUKOJKVZYBNGYHOAXDQPISKPEOOTGEIVJFUBHDUXHKXCYLLNXPFXRDCFMJNAYOMFQMJKHXWVZSGBKVTNATMGHJQABZEPLCXB");

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
    msg.setTimeStamp(0.970620717967);
    msg.setSource(65235U);
    msg.setSourceEntity(78U);
    msg.setDestination(57148U);
    msg.setDestinationEntity(14U);
    msg.timeline.assign("TNUAAOVLTIGIDEIUQXJZMZLJFSODKBONNBAKIPBDDUVXIQCHTZKJZIRTJLYOMTYQJPBXGCJKAPKCGHAOUNLMWGMERWKTWHFHB");
    msg.predicate.assign("QDDRZMLBFSCODLNKCILBOJVJUHAVZGIFVBXCWPDNWQPSKWBQNOPWY");
    msg.attributes.assign("KQXBCCUWPHYACZHPXJDHEOAKKQHYPDWZMXZNVUZW");

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
    msg.setTimeStamp(0.391367940959);
    msg.setSource(15604U);
    msg.setSourceEntity(78U);
    msg.setDestination(48597U);
    msg.setDestinationEntity(223U);
    msg.timeline.assign("QCZLDWTWFURKKLFIZXMPPYDCTSIUEGAIJNVLISFOHJSDUDOYNANYHXJOWHGRTKHUOIJKRCDLWMECFAUAYXNCSZVKOYQMMQRJAKAIVPBFQQJLWEQFYUTTILCRPIBPVTM");
    msg.predicate.assign("LADDIXSQKVFOFNNEEFQMZYVBNIWCPSZJXIIMDVVOTXKDPRGSKDXYJRWREGTAJSMULVCFRGTNUVQGSLJWVKBICZNMGOPLBKPTGJWOWVOXYIUOUDIHJOZMCYWQDBMLQKLAZPCAHMSYMQTZSDLKIBNCHZJZXBYSAGRIENTLQXYUOZEIDBTXUPGCNQNMGBVFCKRTSPTJKAJLLQHAFDOPEYCWACP");
    msg.attributes.assign("LDZEBHNHWNCBWPLYHREKPZAXWJYYFIGLUDNZIQIKQEXIOVNCKJAHTJMQOHXRQUGGZJUFPVXDLVEMHJIVKWIHGCFSNHXTSAZUIMHAEVOBAFSOOVZAORRMQCGPIEZUBKQAKGAQXXPGBYUNFLOTVCKDCRJNNEBTTSWGERFJK");

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
    msg.setTimeStamp(0.120553963291);
    msg.setSource(9570U);
    msg.setSourceEntity(58U);
    msg.setDestination(23423U);
    msg.setDestinationEntity(187U);
    msg.command = 109U;
    msg.goal_id.assign("SBLMUOEPCQENWQJAWENFLZXBCIUQSCSAHYQZKRDPAWMQRFSWVNLBQFLWWRQMRXKQ");
    msg.goal_xml.assign("OZHYRAXQYMYLDBRKAPWAYFCQVEXVPYBFZVXYVTGLBOZUPZLMISLCDKCTTUNOWGUOTNUPORBDNAMIMPKLVONSJCGGLEVJGYUTLMAFGZCFQNJEUQNWHZYKJUYRAMTBUCRHHHWFKKXIKIKFPPOJOTRME");

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
    msg.setTimeStamp(0.448138163775);
    msg.setSource(20808U);
    msg.setSourceEntity(2U);
    msg.setDestination(11156U);
    msg.setDestinationEntity(101U);
    msg.command = 99U;
    msg.goal_id.assign("NGMMGRKWFFRKMZYBIWDTJACAMWZCUPMGVDCEZCNWRGHGPTOJXLHUMKQEPSLQPOROPOTKUDHVCLNVNYWAFYJLQOTAOINMTIEQYRHIOTBYIHEJVYACDRWUOHYZDPTGIKULQBSXRGEBZPLENPESXBBBNMADY");
    msg.goal_xml.assign("AQAYAYOKXIQZKVIOFGJSLBTRWMXJNSZAQRDKLTFREQCAPUPFAWMRKCYHUGZETUWERLSHYNIVYUXPVOXHUASJZEVJHIZOBDXHJBGGQZEVJDHAJHNRKNDJNFCLEKUOIGCRIZWBGBMDTBLXWNKGEOTTPZQANYGENPYKWDYJXUEEUJKVIVWPCSVZTPFYDRLBOHSIRX");

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
    msg.setTimeStamp(0.770554000506);
    msg.setSource(24401U);
    msg.setSourceEntity(183U);
    msg.setDestination(14781U);
    msg.setDestinationEntity(60U);
    msg.command = 63U;
    msg.goal_id.assign("PCGZYOCOUKLSYJDIVNFXQVPWULPMQYUNYJLAFDPIWSIFURKBDZTWAQVTLOSSSLYKEMZXZAEGXYLXWAJOQXOEUPRIMNDZBUJHMITZMRJXIYNXTCBSKEYFHHCGMNGCOMAABNWHSUEXFRHGOTBTQHNGVTJCQYISOVKRUGBMIFVUJIPXPJAEZCPBURDNQDDBKMQVVWKELDFVAAWSLIAZTRRTJQWKKLBMRG");
    msg.goal_xml.assign("GRDDTSKJTKRDKNQPFXWYFSBCNGQVMOFIGGGTGFWIICNASCKZAEKVQZOSELKFXPOHJD");

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
    msg.setTimeStamp(0.752422328383);
    msg.setSource(49158U);
    msg.setSourceEntity(82U);
    msg.setDestination(17934U);
    msg.setDestinationEntity(43U);
    msg.op = 186U;
    msg.goal_id.assign("WKIQJAIDPDWYHXFHYPXIDSLVVEHHXRXSBMLLJUKZXMEKSMNQDWUFYAVUMHEIRTDWSNROLNKKGOOEKILKLOCGICGGNOYEHPPMNRFJUWFVZSODJUPAOVEHTTTFBVKFQJVPRTXDHMHJTUYAOMJYDMSGZZXREIFPDCQRTIAEBLJGXQVIUQRBXQMEAAOTYCGANNZZCKNCJAMTQXGHCLYSYWBBJFRBBSSPOWVZBCLFLCZQWD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AXALTIHTXSJRGXSZHMWBCDGKQKGJBWVZXESPFIQRNUCHZQKJEXDGCGCZTHLJAYMKTNMUEQPVFBCYBFRMOTONNOYBNGHVRLPETQYYIOEDZNZ");
    tmp_msg_0.predicate.assign("KSFBLVXFDSRRHKNQULLNYBNNPNQCZJZJICLHKTGMDJEGHSWXPZMCLSVEQGOXKDGYXIVFTGZIJRBIBJTVBHXHIOEEQWFQOVBHEROLFGDUOCKNRPVEYXAATO");
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
    msg.setTimeStamp(0.515517374242);
    msg.setSource(17834U);
    msg.setSourceEntity(114U);
    msg.setDestination(32377U);
    msg.setDestinationEntity(59U);
    msg.op = 181U;
    msg.goal_id.assign("JKEFKEGNZAYVQMAXWHPMHFSEHEOSCPBCSGKONLMDLIEGVEAHYHGFAJLJSLOJAPHVSZUGXRSSKNBINYGXZTRBQSK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UQMAYWMCUHLKXOVDUJCIIGKNABOYOIHEXWZRPNGMHAVLVJZETTQFHXFQSYRHV");
    tmp_msg_0.predicate.assign("MODFUGQVHJIRNWVPAWTVEMJCKHAYHNVCODZAHYULKGPGBRUFZPZTBNKYGGDJGESPJZSDJYERBKBBDUJIXCNATTOONOWLADEFFIQIJMTSLRSDBRHMMHXZCIKUEXFLWGQZTXZWSRIKDLUOAHKGEYQFSSWBURQMMGWV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WEAITHRVVMLUNEZGHZACTXXLDRWYUYMYIWLUSVTGCCXAEBEEVALWLGICOVMUSJZCUFOHKZODARPOCNWNXTTUGQHQSZDNTHQS");
    tmp_tmp_msg_0_0.attr_type = 238U;
    tmp_tmp_msg_0_0.min.assign("VCAFPCINYVULQJXHEMLHTYOBFRJQYRRKXGGMKPYEXUMFDCVCGWASAXCRXL");
    tmp_tmp_msg_0_0.max.assign("HBYGNCXASNDKPNPOYJIIJIQOXLCTDSWKOVYNERYIINPVCXWETCTDDWPQFQFSPOOFFXBBNGZITUWQAQVUEDTZLENDEBUHUFKRSIFBMGEVDSUXXGECUYRZCYRKKILNDLMRABIKFIYMVGMMHUZNJJLGBEJUHRM");
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
    msg.setTimeStamp(0.512552088697);
    msg.setSource(44786U);
    msg.setSourceEntity(183U);
    msg.setDestination(10544U);
    msg.setDestinationEntity(49U);
    msg.op = 70U;
    msg.goal_id.assign("UMDMBPISWPROBZAQKAMVHLLTMNWFXZDBFSKHTZFQDMRZTRXJRORFDVWIUAKZJGVPGPJQOUEYGXCFEIDSQRDODTVNETXIITWYPDVCHWYUCCGQWMFQOFXPYSBJXYYFJKHKMUDUHZBVCEPAAZEMNQCLIUXNTOHOBNHY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QZMPPFIXLAOWMTIEHLZPEPCROOASYVPWNZUKLTZQLKZHJYTJFGYKZVWCEEMWRQVVGYCMVJZODPXRVSYKNIOAXKUEFHGTTJBBCZGNLHRQGAQUXYSMBT");
    tmp_msg_0.predicate.assign("AYRLJHJIGDACLMWQBZOKPZZQNILVMQCCZBWVBYBRKHDDVYNJSITVFAWOETUPNRLPMFHCXNOQBRJPDAPFRBZMIMMKVUHRSYOLESDBFELXXHJKOQQUTKECIZSZASAGSPLEMYVIMHGWUEUYXD");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KWTFEIKXGGJAATFWYDRDWKZFWXCVAXMQUBQWMZXPLHNUGYFCJUUETPDFSLPQDBJSVOUTPWFSEFCMURKIITXOAPREDTGMVEJAQIYLCYHCOXZYAOHPMONJVJ");
    tmp_tmp_msg_0_0.attr_type = 70U;
    tmp_tmp_msg_0_0.min.assign("URPTOXZGSLGGPTDCABNZDYUYIBHWIUJQPEWVXCWCWFLYOVEJIMYUDHELTFAMTQFFBBOHKCOGTXXZIKHEHSMJRRQIMXCNMHZSKRAEPFWYIKSZRXVJZVFAJENAFSCZMMRJUKWGBQOPTLAGLJDLSBLPOYQGAEVSLRYUVIAAWMSUDXARDCQHBJWHYDVFZLDNPBFUCEXNWNDUQQXNG");
    tmp_tmp_msg_0_0.max.assign("IPDSMKVWTDXZESMGBQABADFEEGAPLOZSJJMKLSHVZHCGJKNXWHROFWSLVPDUTCLFOA");
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
    msg.setTimeStamp(0.591267062906);
    msg.setSource(6186U);
    msg.setSourceEntity(170U);
    msg.setDestination(43898U);
    msg.setDestinationEntity(48U);
    msg.name.assign("SXWFQUSLAUNDZBBKOPYVIJSGEUYBYGGKTJDCLTNGZTNIIFMFIPQBTFOBEHRFQHDKVBUQXVWSYMWQZWEJPFRIBQPDWGKKVAYXNMNVJPTQVUHNVOXEXWYLVGZOTCRPHLIVWISNQCBCHRQNLUHGNJXTMRRKAEELZSODCQEGDOJXIXMJDBHOAPSWYCPLCSWHEMKKRUZLRDNALAUIKOJDHTLFIMYZZXCTOACVUMGAFJMZWKMOJFR");
    msg.attr_type = 11U;
    msg.min.assign("PNTMMYWENZGDWVBDMXBHHKZJNXCIIUIEOUOZOLCQUUAZQZWQEGPDKYQREMLGWAMJQWPSLOKDPBUURXXHRCLKAHEGIIFWPCWZ");
    msg.max.assign("SUTUCMJMBINYAGLGUMDQGYBJWKTRODFRQLQXWQWMVSYUKXVBRNMPZJECSOGPBMVUGXKRPNDCJTYKYMJFTQAS");

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
    msg.setTimeStamp(0.13285563368);
    msg.setSource(33342U);
    msg.setSourceEntity(248U);
    msg.setDestination(10869U);
    msg.setDestinationEntity(40U);
    msg.name.assign("JSFSPUEWIRGDEOYTJADUAV");
    msg.attr_type = 46U;
    msg.min.assign("CSPAGRYOIOJTAXOFGRUQZIVPINTLRETTIVTZJIKWCGMSAJEGCTBXRFBKEANEOKADHQVMZYWARVGWVCWOQLLKAQQXOAEFWWZUFDTXPULUIEKFZMBXXKFUQSSCLWOQCJANESUDYSVLTOQBZDWMVMEJRYGZKBHHHLBRXDDSTIJWBUY");
    msg.max.assign("XOTPIJULIZRJGLXDVADXEWDAYDQGJUSCVEMHDGEKOPVHYLVMZBKJXDWIZCBRMWIWZQHUFWBHLDOBIEZHJVJEPWPAUQFSRNYBGUVOPPATCWNXVRXQHLTGEWLOGOCKTYCSQQCHMBKNAAQHKXIRKCCNUEOSRCVJSFZXNAKMBURMTHNTKPSSCMWOVDABHADEPFUADJVGISKRFIFTPYQNZTSZQXRSZYNTWYFGNYLUFQZFYROOFUGBYLJLIGXP");

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
    msg.setTimeStamp(0.472255815923);
    msg.setSource(26955U);
    msg.setSourceEntity(146U);
    msg.setDestination(53571U);
    msg.setDestinationEntity(25U);
    msg.name.assign("JXKRCSNXAFQEGKYYQTYFJMQAHKCIWRUD");
    msg.attr_type = 98U;
    msg.min.assign("OMEADZKUHSHFTYQAVXCXRWXEATNAGCYRYQRIUOWPTELMBPWDPEGAJKXALGRKNSDOQOJGKVEJIFYVOBHLQWGOJBJRJUVHFGODUOMFVGVZDUSTLXNKPCDUQIKRLGQZSVGMBUXQZXVYWLWKMQMYYNJVFDHTTPOBWPLPEPSUFSPXQRSZRYIKIZRMCBKYSTHZJCETASLTTGBZNI");
    msg.max.assign("UMORQCJDMSZGGLAVEGCJUSAFBWGVWSIWKUPBDYQAESIOBGDPDFIPBOAMYFODCH");

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
    msg.setTimeStamp(0.948307808991);
    msg.setSource(41630U);
    msg.setSourceEntity(193U);
    msg.setDestination(60754U);
    msg.setDestinationEntity(0U);
    msg.timeline.assign("LWEEKVGBKKUJUIPRJRNFJSBGNXLOONOMTAHCJQCWXFMMYUYOBSOMVZVVVGCTKHYKDFUPBOQHBISXAIPSTXRWAEKVIWZSUQDYNQOGICJZRTIHGYHEPQGRCLKFIQSCNGQEEUWAHFDKJTDGNDWAODOMDFLULZEVWCPIXZCYWKZTEINSXBFCMTSIEXGWTFJLVRRZQJQPMUYJTRARXSVQBPYBADZPMSYJABBTLZHXVKMDNH");
    msg.predicate.assign("YSWDATHJTXLMFCIJAZXWNHREHBUKAXBPOKADOYZBUGMTNUJQWSWIOKULQVHUNFADOIQWSLMFDPWSHCMZQ");

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
    msg.setTimeStamp(0.186327991017);
    msg.setSource(48081U);
    msg.setSourceEntity(13U);
    msg.setDestination(33031U);
    msg.setDestinationEntity(222U);
    msg.timeline.assign("DKBDIPVLLRSNFXESSUMWYESCNODAIUXVFQIHZJANVBVADZ");
    msg.predicate.assign("KWBOIDYXDAMVNJHPGRPIFQGHRUEXGJUWQCAKDNSVYQMFXJDFWTLAFQRZGXSYMYCRMESLVAZQMDJVNLOYZCXGCIIVKJGIBUGYLBYZWNTPOCXZAIRSSFHZKXPRUSFELWWMDTLNUFYFKQCBZQCZDVHVGLZJACDSPSFTWQHAATKGHQSD");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("GPOTFPDGAZFQRAWIDXTBFGSRHVYWWNOLUGOWWTCRRPA");
    tmp_msg_0.attr_type = 154U;
    tmp_msg_0.min.assign("RSGAIQBPWJHFFFLSYKBSMFCUCCJGKDDIPYZNURCLVYOBUCSYWIKZAOBRCENRUJGAVCYGWNVQOEYHRMIWDMGYGTHICQAPMXZFZUTNEDTABUEZDELMSWAQUJYIKNMJJF");
    tmp_msg_0.max.assign("TKMYKJOJEAAOWSVVHHNSFXMLMVTVBTQOZSTAJPBXFCUPAJXVSLNEIVNUUNTFWPKXXFEOIILKBNTLZWJPHHYLCARBFOTCFZBSEMHAOYEGGYRQBXUQLUDPFDQCXVNUXMOHUSPIMCFANIMYARDEPDFGJTHORRFWDEJW");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.854746932059);
    msg.setSource(12453U);
    msg.setSourceEntity(76U);
    msg.setDestination(49675U);
    msg.setDestinationEntity(149U);
    msg.timeline.assign("PLFOCJYYNETQTYFHWWMGDVECMXKOSQSNCAUFJUQJUALARNJFDGOVWOJSAEJBMKZPKNCICYECQTZHWRZRQKDGMTTKIALZSWGNYLCPKSHEYNUURDHWRGVHFBBMJQMZCEEHOQXJBIUPYLXOXGETWNYZMGDLTJ");
    msg.predicate.assign("DJQONWHBJLJD");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ONBCXMQBXAIZSICQNHSOFIBNWEWPUCVKLRFMJLKDHTFAVGEBPPYFJYGYCLLBKAWLQWKUICSUXJALRQVGWYSCQZRZTNKOEEZD");
    tmp_msg_0.attr_type = 211U;
    tmp_msg_0.min.assign("JQNJSERODUTXUDPABVNBJJRZOPHIHZDLDTOMYTSMXYUCWIVFZWUZVTIGTKFBMAVYDEMGKWFUPAPCLGCKGVPRBWLGCTDDPSAKULDKQOMQOLTBHQYDFKOJQURTVPENIKM");
    tmp_msg_0.max.assign("PTNYYAUOLDGELYVATWDKCAWGUHCDTTHYNYEVHNZPWKOBZBKCOP");
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
    msg.setTimeStamp(0.259148287504);
    msg.setSource(42632U);
    msg.setSourceEntity(154U);
    msg.setDestination(21919U);
    msg.setDestinationEntity(3U);
    msg.reactor.assign("QZHPPGVIYPYKGZUFPPFYHANKRVETYCKOGADOOJHOPLCXFRGIRJBQRDMQEQUWARCGSCSJXNDMDPSLUWRVDLIQUQBLPYXETZXIHGIBFHAMRMKYLVGDUWRAWENVFTICIJSOATZCUBMNNAABLQJKXTZFIWSJAYVZFHOUXBWHCLOBSQZCEFVDRXZZTXNKFYTNGOTWMTWGIXWSJLOUMOEZHMLBWBIQMRVTFXESNDSKKNKCQDHJJEYYEAPUM");

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
    msg.setTimeStamp(0.420944731971);
    msg.setSource(44978U);
    msg.setSourceEntity(43U);
    msg.setDestination(46408U);
    msg.setDestinationEntity(23U);
    msg.reactor.assign("MQPYGJZEZOFCJGEYJKUKKETBSQNWOJVGZWGNWEENFCNJIUTLIBVHYZGRYSMCUFUPDSDGNNWOIZLVXVNOPFPYDWSLDWVNPKOKMJSXMOUHSEUUDTWVRMAVVUZKIBPDITPQIYBMCXIXXQHXRIB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WQGUEHELCVDOWPAAYXVIVRSALMKXVCIXLMAPPYXOVMOXHIMCDPKKFVZWTJBXUSGJBOHEFZBJEQKDGBPQGPHZYVYJCKRFPUIUKSGIWAXVRMBPZGYMOUMOHLQGYWJPECRPELTSJNQKTXLRLWNLLHU");
    tmp_msg_0.predicate.assign("ZWTXSJMRYJICAFCZIKXLQVYJFNTLDNHETUWPKESEMUDWOLDZMWQNZDERSVPONBDCRLICASGNYIGKTYEOSUBAWNMUQPLQGEPOWNFA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BEEQXYMZSWGNIXRXYEKPEWFFEYUSWOTNVPNJQKCZGYUKLHCYBDXWRFODBWLDZEADQUJQCLTCJPIXSHUBZVCLYYOQGCDHGDVEASBONS");
    tmp_tmp_msg_0_0.attr_type = 233U;
    tmp_tmp_msg_0_0.min.assign("SGSAOJDTHANTQWADOQHMEWNMBDOBZORDFDTWSRLLTPOUGCQQZWYXJABPLWEMMWVU");
    tmp_tmp_msg_0_0.max.assign("DZNFVCYFFHLZSMRGJAGWNQXUGWALADOKDEHYSPNNGKSNTICVHUABEAWKHQQOYCNVXZZYBTPYWHOVXHDEJQMDYEBBLUEXOXVCIIDUWAISIOELY");
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
    msg.setTimeStamp(0.542463277394);
    msg.setSource(32153U);
    msg.setSourceEntity(140U);
    msg.setDestination(7034U);
    msg.setDestinationEntity(217U);
    msg.reactor.assign("SDENTJUPWSGDEEYJHWLJT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VWSSFYRXZVBPVEUPQAJQTCHIEWSAFNUPAMAZWQZDDRXDNGHYKOSAUTXEZRJXYHKTRLYGGQTIFADIVNHLPKFMX");
    tmp_msg_0.predicate.assign("PFTXNDXSJU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FCRDPAXVSVJEFOHNYVHDDZZMXHGOHAYKBZPHKEPFPOCAITKTIJECAMGUIMTJXPBLAESXNNQJMHFAJEDMWUTRJPBHQZOZZSUBJQWRPTQQVNWLWCCFRJKCZAJGLHDHKWBZANUIEQDKYZSXAFYLNSISFZKPOFGWENFIIVUBXIOTLMMSVEPVHTESDODQXVORXQLBGYAYIXUUKCFNMLXYPCYCKWWRQDKWTTBUCGIOGSMRQRWUYDSVLLMY");
    tmp_tmp_msg_0_0.attr_type = 36U;
    tmp_tmp_msg_0_0.min.assign("XDBGDDJZSSZEJGQOOOVFGLSPCUZBRWEACVPORPBCIZMICDXTQSAFJASHKRYGPWFYELOZLRMNHGDFLROLYJPUIWEXUNVABFQWBDMNFCBELIXMZZYQHVPJYFHDKEBTTHOMXKJVDHEISPDXGUOANNBYZNTCRSIFLSTVWANMXHVKVUWTNKPALHZWH");
    tmp_tmp_msg_0_0.max.assign("YCCDABWIHKSXOQVOCVRWYLBJLOSHXCGBPPHMQVQAEKHCQHYIZFGSZUXDSEJJMPLBJWWCONIPXGZYHTNXLMYZGKLJNVPNKXFWTDDXOQNJRTPJSLMDOYRHOBXTDVJUSYADMEGMQKKMDWZEIEPNNULFFVSPQSFEGYCHBOTAFIGCZYZKIQAOIZAURMWXJKRLNFBEORGPPKZIZUKFWDVVANGITUWHSBJWULTQX");
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
    msg.setTimeStamp(0.459790966255);
    msg.setSource(40646U);
    msg.setSourceEntity(25U);
    msg.setDestination(56480U);
    msg.setDestinationEntity(160U);
    msg.topic.assign("UFUNNTBKVFKLAIXUSFGSCCGHAUFEMBZECPGPRWUOQHBLDQPYRJHQHHBSCSRKTORTFOECWMGHLITFSVXGDUBZNIPQMUYZFJLEQXHAYGZPKKAKJUANQVFKSWKJRUSOMWPRVPDSJNCSJPSEIDLTBHNLQQWJXLGCNZZXTWLEMDGPCBZVCCYAMDIVEOIYTODWTL");
    msg.data.assign("GCHMEBHUVNJZYXLBKDITLTZLGDANKHPQGSRXORKUZDABCDUEVJBRCIYWAPHRXNDMFTZNQZTAJIMCMOJ");

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
    msg.setTimeStamp(0.510379166229);
    msg.setSource(41879U);
    msg.setSourceEntity(23U);
    msg.setDestination(10823U);
    msg.setDestinationEntity(233U);
    msg.topic.assign("TGYWNZUZHMUASAWOBUVZWUAKGEVQMJYFHUOFLLJJDTDCRKGFRXSVFKBFHYOXHVKSETAANSLMOOSGZOZMBHODJAMPXIRLQNCCPERUNBURWTFTRCKDHWIIVKLQADVUFZGMIMDEDYXNQPHQVSUBHHYWSJXPXRWMEJNZSXPMPIARITSEDQZYQDJCOCKNYXCEWZBSPHWETFCGUIWFIYAQJLCTNPKOJEPEIBZNVRRBGBLAMVYJI");
    msg.data.assign("RKOTPKNCOVGATMERAGUBQJPTYZAKRUXOEHBYUKQRPHLDAMOXXXXRYJOLDSWPQITRBUWZGSKHRWXTFPLEPWTNOGCJCHBZGPJWSBNSECBSAXWBKEOYSHWDYNQLDDFVSHJLFLFLAYZONGFIPGFKFIRSMUQAGLWJXVHPUDKIMNLNQIMQFJZZCNWADQBFQCTX");

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
    msg.setTimeStamp(0.403273410282);
    msg.setSource(487U);
    msg.setSourceEntity(47U);
    msg.setDestination(31161U);
    msg.setDestinationEntity(37U);
    msg.topic.assign("EPQCWVWSBZXLRMPJQSPLXTSUVZISWAWUICWYUJAKLIFNLDZPFGWHCLXZHCDMQRLAFTLUBCBVEOBJNOGMQNBIYOCQHDGSZNIUFCAHQJZNJOIMOFADODYVVAYHRPGYPUFFXOTVIPQJRVTKZQJVQNYKZDCETBMQEHCNWHBMEXKRVUWKGSFIFRM");
    msg.data.assign("KBEPLNGNRSKPHESSLJCUMQTWAIMFHPHEPUTTKKAACGUODOUHCFNRWFBWLAUQAYONRYPRGCKPJRRDDYCUEDDQBCTXOIZLHOYCMOPZKLFMKNNZSGJPLMQQQVQIJNJVVELNWDMHNFVZJWSHRJCHBWSXLMEYGVHGIMQZLBYJPTYMUYDVKEOIWLRFFPXCVTFJMQKZEESITAQBWDYSTNEWGZWUXA");

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
    msg.setTimeStamp(0.088144636492);
    msg.setSource(52782U);
    msg.setSourceEntity(17U);
    msg.setDestination(439U);
    msg.setDestinationEntity(18U);
    msg.frameid = 215U;
    const char tmp_msg_0[] = {-126, 98, 68, -33, 38, -31, -24, 49, 96, -91, 102, 106, 19, 86, -124, -111, -52, -75, 47, -51, 70, -114, 31, -124, 11, 62, 108, -72, 89, 110, -14, -119, 48, -122, 113, 70, -126, -62, 10, 4, -43, 86, 47, 47, 115, 48, 81, 36, -38, -114, 112, 15, -19, -2, 4, -60, -104, 106, 6, -56, 42, -3, 67, 58, -46, -73, 35, 65, -60};
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
    msg.setTimeStamp(0.501280122702);
    msg.setSource(43067U);
    msg.setSourceEntity(226U);
    msg.setDestination(55797U);
    msg.setDestinationEntity(156U);
    msg.frameid = 115U;
    const char tmp_msg_0[] = {22, 77, 47, 83, 40, -19, -109, -65, -22, -58, -30, 87, -12, -118, -12, -124, -51, -66, 89, 36, 72, -48, -10, -50, -54, 6, -37, 97, -95, -46, -38, 64, 18, -20, 44, 30, 44, -105, 59, -14, -114, 69, 120, -15, 87, 26, -59, 83, -113, 46, 65, 87, 28, -10, -51, -120, -51, -49, -27, -85, 44, -69, 40, 41, -92, 11, -66, -38, 9, -11, 80, 104, 41, 7, 31, -117, 56, 114, -70, 93, -121, 98, -58, -111, -106, -109, -28, 87, 116, 53, 43, -35, -31, 16, -101, 62, 60, -71};
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
    msg.setTimeStamp(0.451571434578);
    msg.setSource(62138U);
    msg.setSourceEntity(145U);
    msg.setDestination(17716U);
    msg.setDestinationEntity(51U);
    msg.frameid = 162U;
    const char tmp_msg_0[] = {-112, 19, -44, 20, 3, -63, 35, -10, 23, 48, 75, -123, 89, 40, 70, -35, -116, -97, 28, 50, -104, -125, 121, 79, -57, -22, -54, -34, -7, 35, 58, -92, -7, -26, -35, 14, 44, 43, -14, -66, -121, 46, -3};
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
    msg.setTimeStamp(0.532207724235);
    msg.setSource(5761U);
    msg.setSourceEntity(119U);
    msg.setDestination(5143U);
    msg.setDestinationEntity(162U);
    msg.fps = 137U;
    msg.quality = 230U;
    msg.reps = 81U;
    msg.tsize = 144U;

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
    msg.setTimeStamp(0.833128063582);
    msg.setSource(51177U);
    msg.setSourceEntity(110U);
    msg.setDestination(44484U);
    msg.setDestinationEntity(170U);
    msg.fps = 123U;
    msg.quality = 120U;
    msg.reps = 229U;
    msg.tsize = 181U;

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
    msg.setTimeStamp(0.770166600099);
    msg.setSource(57740U);
    msg.setSourceEntity(252U);
    msg.setDestination(58906U);
    msg.setDestinationEntity(240U);
    msg.fps = 166U;
    msg.quality = 143U;
    msg.reps = 17U;
    msg.tsize = 108U;

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
    msg.setTimeStamp(0.276210599391);
    msg.setSource(18579U);
    msg.setSourceEntity(241U);
    msg.setDestination(17214U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.411899753199;
    msg.lon = 0.0171153597309;
    msg.depth = 83U;
    msg.speed = 0.926235346713;
    msg.psi = 0.167760027053;

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
    msg.setTimeStamp(0.475633974314);
    msg.setSource(29768U);
    msg.setSourceEntity(44U);
    msg.setDestination(25597U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.538098844008;
    msg.lon = 0.44242797582;
    msg.depth = 206U;
    msg.speed = 0.815216586892;
    msg.psi = 0.0158054441006;

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
    msg.setTimeStamp(0.829920488646);
    msg.setSource(44260U);
    msg.setSourceEntity(149U);
    msg.setDestination(43770U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.812191825536;
    msg.lon = 0.221471626229;
    msg.depth = 188U;
    msg.speed = 0.387677745615;
    msg.psi = 0.0368590530759;

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
    msg.setTimeStamp(0.933550036708);
    msg.setSource(65272U);
    msg.setSourceEntity(144U);
    msg.setDestination(58732U);
    msg.setDestinationEntity(62U);
    msg.label.assign("NZIGJHMREIOJFUWUCXHENJDXTKXIGRPEWXE");
    msg.lat = 0.717539302566;
    msg.lon = 0.170931347756;
    msg.z = 0.337021948994;
    msg.z_units = 13U;
    msg.cog = 0.957186372939;
    msg.sog = 0.546246036052;

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
    msg.setTimeStamp(0.227526834534);
    msg.setSource(10470U);
    msg.setSourceEntity(93U);
    msg.setDestination(32683U);
    msg.setDestinationEntity(208U);
    msg.label.assign("PSPNHAHSUSGPMQHHAUFGMOTZYKMVILYARKNOYJCEPQXFNTMWPXIRNPTWIIZSTFSHQIXCCJDQMCCTLSREZKXDKN");
    msg.lat = 0.0722104901254;
    msg.lon = 0.788710860179;
    msg.z = 0.725656163065;
    msg.z_units = 25U;
    msg.cog = 0.638596057655;
    msg.sog = 0.0749716152872;

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
    msg.setTimeStamp(0.992999877321);
    msg.setSource(1369U);
    msg.setSourceEntity(89U);
    msg.setDestination(29324U);
    msg.setDestinationEntity(96U);
    msg.label.assign("LUDMRBFGKSUYMKJLYLEESDAHMTLWKZXBGMQBVIOPLJTVKAMEPUSXWACZZBAFKSJUNNSYCXHDEBJKQIMEIJOOHPYGQCPHZPCJHICRAQAXWVUERZGWNXANFSROEQFFTQCVUYMGIRXPTVAWVSTCIXICLJLMTRHLLNKKFEOTFCFPBNNKWPZDZUSHQHDOVNVZGDNEDIYMOBTZUYWPRISHWYRBZERJPGUOJKHLGBSXDDQWXFOOWXTAQTVNGAFYMRCD");
    msg.lat = 0.48684704457;
    msg.lon = 0.295417435946;
    msg.z = 0.201877054296;
    msg.z_units = 216U;
    msg.cog = 0.629787024435;
    msg.sog = 0.15890069828;

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
    msg.setTimeStamp(0.975535338576);
    msg.setSource(65350U);
    msg.setSourceEntity(226U);
    msg.setDestination(5775U);
    msg.setDestinationEntity(243U);
    msg.name.assign("SKFXTGMNVEFRRDWTISJLNLDETBPTCEHGULNZAIWLVBZTDZXMZQPXRSCEGOMOURNXAPFNKHCZLUGSBBYLVYMPVCEKDSJUCPQPGDPUYNMFERPGOKAUUCKHAHDWIJXHORGMYPXBZVNWZQANAVYJHIMCO");
    msg.value.assign("VHLEIYYWLYBKJZNDNNMKFVLUBTIVGIVAHLQTUMWZBCRNYHYXDSPPZJUJQSFHCCUDBZKPVWORQJQKUPJATSOEGNXRIWYSMGMFSWDOKYTAMVMYWEDPNQEKAYEERUDCXWKXAZSRVQKZFPZFROJNGPSHIUQZJHPCFCHRMRPRGHBSWOLNCKJFXKMTCDITUVMHEVZMNXSAWPO");

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
    msg.setTimeStamp(0.945706081988);
    msg.setSource(771U);
    msg.setSourceEntity(174U);
    msg.setDestination(49136U);
    msg.setDestinationEntity(67U);
    msg.name.assign("YRBXQUMRNONAUKQYZGTMDAXZMJPUVOOPLLOGMQWMLCHXBYLPHVAIJAJZXFCJFBYDAOFDJPQYEHKTPXGNDDGTHWPMTFHNLERDDRUGUNWWMMCLAAILUYKWVKSMIIEGSURVGZWCGSELNMFSTBSKNOHYQFVWFOQIEQTIEFENORBFIHQPHKTZOAORFRKSPLZBCIKSDJNUYTKSBZXYKVCUQGBBTWXUCVIJEHBVGVWAEDPZXZSCXHESAXYJN");
    msg.value.assign("VFZRMRMBIXTNXSTUFFXCDPXYLWUZKWVAWYGLMCVEODRMZMQCECFJHTQNEBKNVBOAMWWQQACLAZSJCROQSKA");

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
    msg.setTimeStamp(0.570674751009);
    msg.setSource(355U);
    msg.setSourceEntity(105U);
    msg.setDestination(22069U);
    msg.setDestinationEntity(135U);
    msg.name.assign("GRUECYUAPLFJFDEJDNIYSPUPBAXQKNLEOYRDXGLACPHFIKKRVGHJTEUJWPEVINMBQOWRBXIAOMRZGZCONGCJQICATSSTVQEDCVZXWMBGYFHKQAQNZPTAKVVXPPNFFGCBIAWDSYOOFYYGTUWHHWRVMYL");
    msg.value.assign("PKKAJEVUZLMRVYPMJIIMHXWYCMLWNWQNSSXPGREUAOZQKQFXCHYIEVRTTRBBWLQFEXYCWCXSGRNNDKZMDFUTHIOXZJVDVHFSDUKWXGRZYAOAOBPSOGPEZJLEBHLNLCYINHINGQOEJDVIBGUVTPAPOUCRGAAOSKEFFTXJPQTNCEGIHBABLLQJBTWVBDWRYISMJURFNHZFMDKP");

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
    msg.setTimeStamp(0.418511533897);
    msg.setSource(3051U);
    msg.setSourceEntity(80U);
    msg.setDestination(42519U);
    msg.setDestinationEntity(241U);
    msg.name.assign("WREXFJSYFNISJQTWKINOGMUMPILKJJULF");

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
    msg.setTimeStamp(0.639408411914);
    msg.setSource(53245U);
    msg.setSourceEntity(152U);
    msg.setDestination(59295U);
    msg.setDestinationEntity(227U);
    msg.name.assign("OIJYUOSGDALNGMEGTI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LTFRKWSZPSXMPCDDGBTGHCTSGPXNVUWWO");
    tmp_msg_0.value.assign("VCKYAOZOLIWGSXKJUKWXADMMNWFGCERIPOEPBSHDGMKNZILTZUJRCCSFCPIPSHKSSXRDBFWBSDVMGFGDQZWEAPMBQPTQJKHCUMCWIJZQXRUELANEVWXRRUTDNQCFPFHTGBETANNYLIAANAQZTCGVHHKZQRPMYBTVYELFUIHKVPOHIFQXWKLAFDGYOJTURSCIKDUQSYONAZQHG");
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
    msg.setTimeStamp(0.734914443282);
    msg.setSource(11134U);
    msg.setSourceEntity(28U);
    msg.setDestination(31475U);
    msg.setDestinationEntity(98U);
    msg.name.assign("DEJMPNRYIKJUMCARPVGKOZRNLDMPNYCOCRINQRAZOWHASDOTJWCBFCEUIZLELPQSNWUUIFBVXRVCKWFTELYQSVZJTGZJGGBEJUZCRTUPVUAGKCLNXDVMHBJFHXPBWFPWLOIFSDXGFIGOQEERYHYXXVYKCIIBDAIPEABRDTHSMIANFASHHWKQKQGLZWLJLXMNMTAQOEBJFVTNPXXBDKSMSYLHQDWJHTFYVKSOYNE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZZVMFXCFQBQBKSBYPWUZTAEQJXGOWHEDLXRKCWODCLUAHNSIFEGUTYQXEVITEJQHLKEKHHMBMUWYGZRWDMARRMBMGKAZOJRNLCIBAIIENJHVPSAGOSSLNG");
    tmp_msg_0.value.assign("TJTIKDTXTDYCFYGQMVCYBBWULWVBDXCADMMPMSVWHPKXZUUFGZOKRNNOZJKSQAPPIGIHDYECLBSZAUERWZXNWIRETYRYJMISSFJEVIIGMLANDJARONXCNJVMJYAOFOAAWSLSQWVQFCPVTPRQZBHVHBHDVPTPKBODSGTQQZXAEGOHZFKEPOGLCXOZXFYFKBKNHIALUYRERDBNCEYXSHWGKFUUIEZP");
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
    msg.setTimeStamp(0.693958097573);
    msg.setSource(43929U);
    msg.setSourceEntity(12U);
    msg.setDestination(53322U);
    msg.setDestinationEntity(223U);
    msg.name.assign("FDAWCFKCIIXPFDOMLJUKVUGUPQDRNAAEVVTIKWWSKPWIKEZQCSNOAVRPFTAHQTZSRTHONCJLABYGPNWFKOXJLUJOIBMQJJBOCKQVYGNYAREHVKYPFNMXENUOALRAM");
    msg.visibility.assign("QTQBZLAXDWUYC");
    msg.scope.assign("KIRDPCLMNXFSSUWOITTHABNYWMMUGXKFHIQNBBCQBSGBPZBXDSPUHWLPLOPQNSYKMTAKKWJBFCECYPRGRFMIDUWVGQRZEVHVAULOSGYCGHPIGJZWEOWNSEKVPEITBQXAHLZUKUTFZOKQNCIJZLWRKAXDEPVREWCELSZYYQDHRXMOOGZDFCFTXJJQDVYRCUTTAJSONBPIAUOTLOJVWMEHAYLXEKIRJYFGIMNXGUXMDVMRBCZJJQDNNDVYFAQZVS");

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
    msg.setTimeStamp(0.723547246865);
    msg.setSource(56851U);
    msg.setSourceEntity(6U);
    msg.setDestination(56276U);
    msg.setDestinationEntity(147U);
    msg.name.assign("KLYMTSQKSTQDYBZZEMA");
    msg.visibility.assign("DYGJHQZNFRZJFPABMWXHELVJPTSSUBATTEKVFYPBBHGMRYOVTOQVKXNMODXUGYLHZADULFSKTWZLLWQDRHVUWMKATQKQFGETQOFJFXWVCMYIGSVSYMWYZCAPZIJXKUXBSSBLAVSTYNJOR");
    msg.scope.assign("AQYQBMEPIQNFBUWRQXTCTGIUAQBCBDOYPZUNTBFBOVQLEOZNRMSPLPXNAHGEJMCCTRSEXFGMCWPXZTQZWMMRVNWGSYXYRINWPFJIXNXPUQNCVJZRLOFCLLOBXSZMVBAGMVUUFEEZJADDOWRHYAJDIGYYXKOE");

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
    msg.setTimeStamp(0.692977739911);
    msg.setSource(7758U);
    msg.setSourceEntity(91U);
    msg.setDestination(26737U);
    msg.setDestinationEntity(140U);
    msg.name.assign("SMACQGKITRHSTXQWDYOIUTVPIZQYLXTJRGPYHBCGEJWYVKCXTQQGSCAULLTQEMTRPSMJFXKHQZUMORRKMIXE");
    msg.visibility.assign("KKEDQGLEHNAFRNIDOMFHCCBOKIWECTXQQWHUNGERSVYXOEUAFYGVOGHSZUJUZXWTGYFCPABNCJEMUNAAMFMMSQGYYPIUDLPEYMLSLWSXIZBGWTLJQPOOCFYIKVOUERWWILYHRJXTZQTDBXGNQTOFJTQRKULUJUCKLFKETXRJBDFIEQYSDJAHGSZATVWWABHNSDFJP");
    msg.scope.assign("HITWKAXSXCJBPAKRCUGREVWGEVDRDZDMIXLWNPHIRCPVTAOLXIFSGQWKWTMHZOREWWCLMCZJVLKJIHZLHMKQVYMQZUHQEDOXJLGPBXNGVYATXFCHHNMNTCRMIYUZQFGLFWPNNUFQDYSAEKYVTUPIVFFETBDNPJJDNZGSEIISOUNDSDYYAZJXJPSYUOLABEBRUZGCHOSUVJPACKJBXL");

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
    msg.setTimeStamp(0.595380020578);
    msg.setSource(5057U);
    msg.setSourceEntity(67U);
    msg.setDestination(42835U);
    msg.setDestinationEntity(240U);
    msg.name.assign("GWCRFRWTDXJRIUEOYPQCXYSGSIJBUMNCGMENXZTEVIFJQDAPQVVOFRAXVGFFMLKGAOUMTOAHTIFWSWJYJIDYJIWPQJUXMCORAJLBESXUCRTKZXDFSQS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FXFRSFDCDMVAARSHGIFUYDXMIGZVRUQKNBEJDECNIHMGWQCBOYTOXBUCMPICUSYSJNHYLMQVLPBDEKJNWZKPERFKFBUBQOPTYHIHZVARGWRWNZCSMWSMQ");
    tmp_msg_0.value.assign("VAHKOCXALKUDJFORMLRPZODASTHBFHKTBYEKFHSMYHSOFMAZCNALMZGQNOWDLQBHLNIEDPMYSFUNNWAYUAXJMLUTUFNACSYWQMXV");
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
    msg.setTimeStamp(0.757924099188);
    msg.setSource(1520U);
    msg.setSourceEntity(109U);
    msg.setDestination(7796U);
    msg.setDestinationEntity(27U);
    msg.name.assign("KYYCUHMCSOJXBSVHLHGNMAPIAFFUNUGFOUZTAKJUCBADVQDGRXFSKPKEXGIMVGYDZYDNNHHTTMJAOUJCMQWYRLUHWZEMDTEZZKBIVOHDZWVBASZITLYIQKXHNUXVPJKZRZXBTUGEBSIQFQZLXCRGKSFRBIRTDAQQVINMWSMWIJSGXCRECAOLPHEFDRTWTX");

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
    msg.setTimeStamp(0.094264908055);
    msg.setSource(5859U);
    msg.setSourceEntity(234U);
    msg.setDestination(54786U);
    msg.setDestinationEntity(246U);
    msg.name.assign("ICPMEOZSAANWMMFFNHEPRPIPMVUVTQUVYTYFVPIVHZKDRGKLUGGWAUFDTLOFORUQABLSJSLCPIPXNREQCOKFISZ");

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
    msg.setTimeStamp(0.274182036146);
    msg.setSource(48889U);
    msg.setSourceEntity(7U);
    msg.setDestination(38969U);
    msg.setDestinationEntity(197U);
    msg.name.assign("DFRUNHNSGSSZWZVVTVVNVBWBJPQOUBKDBANNRSHJWKRAULXPIAEBGIWVWQZZZSOYCTCURFCGQDFZPSWTMGAPKRSNTGLYDHRPZPJMWODQQNTDRUOLYFKLGMGJVFHVJYFU");

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
    msg.setTimeStamp(0.650989174381);
    msg.setSource(36293U);
    msg.setSourceEntity(2U);
    msg.setDestination(8815U);
    msg.setDestinationEntity(152U);
    msg.name.assign("FLNZDBGRBSMEPVKPELVNTBJKXAIWTLHJIYQMMTMUWNDAOFIZDWNLPADXJCYDSTBAKYAGBUFTLJCHBAEJUGUOSMZMODVKUZMZIXBUBQGDGJLQGOVHGLXMYPEZNHVFQHYTYVMVQXSIZOOZNRGNCIUGEUWTXHEEOYFFDHGWWIPBVOEPLVLRJRAORPFKBHISCHTRCPCSJPVXLIJKQJRAAWWKYXXYISZORAHQZQKECCWWRSDFCPETYQMNXFUR");

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
    msg.setTimeStamp(0.150749594257);
    msg.setSource(33948U);
    msg.setSourceEntity(213U);
    msg.setDestination(55105U);
    msg.setDestinationEntity(145U);
    msg.name.assign("QPFQRJUIGLCHAMIGOZVAD");

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
    msg.setTimeStamp(0.21748023867);
    msg.setSource(50288U);
    msg.setSourceEntity(43U);
    msg.setDestination(31382U);
    msg.setDestinationEntity(205U);
    msg.timeout = 181526960U;

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
    msg.setTimeStamp(0.390828947287);
    msg.setSource(41264U);
    msg.setSourceEntity(151U);
    msg.setDestination(32956U);
    msg.setDestinationEntity(212U);
    msg.timeout = 770467057U;

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
    msg.setTimeStamp(0.0808092114627);
    msg.setSource(37357U);
    msg.setSourceEntity(101U);
    msg.setDestination(25360U);
    msg.setDestinationEntity(206U);
    msg.timeout = 2736383359U;

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
    msg.setTimeStamp(0.249651330799);
    msg.setSource(10383U);
    msg.setSourceEntity(55U);
    msg.setDestination(4997U);
    msg.setDestinationEntity(87U);
    msg.sessid = 1275078723U;

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
    msg.setTimeStamp(0.0840416320293);
    msg.setSource(31289U);
    msg.setSourceEntity(69U);
    msg.setDestination(44253U);
    msg.setDestinationEntity(176U);
    msg.sessid = 3523753509U;

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
    msg.setTimeStamp(0.911185340066);
    msg.setSource(9178U);
    msg.setSourceEntity(36U);
    msg.setDestination(56650U);
    msg.setDestinationEntity(123U);
    msg.sessid = 512916546U;

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
    msg.setTimeStamp(0.397940445314);
    msg.setSource(35104U);
    msg.setSourceEntity(154U);
    msg.setDestination(23438U);
    msg.setDestinationEntity(232U);
    msg.sessid = 2995707919U;
    msg.messages.assign("LGOCGMGHAODQWJCOPDUVWKJURDKGWPAKQXIHXOZOPDUSOUGYIEBKNXFOHYZPCLHNADEEAFPDIKSCTXCXVHMJSIHQTVKLJBGTMEURQKDARPEPPQWPAHZIXLJMAGEZMWRALEVKNMVSUFBIUNZUHDCKYKQGMGCNUBLTYAFJERJMYOFBTMLENVMJBX");

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
    msg.setTimeStamp(0.218365340468);
    msg.setSource(10388U);
    msg.setSourceEntity(120U);
    msg.setDestination(1396U);
    msg.setDestinationEntity(207U);
    msg.sessid = 3235888061U;
    msg.messages.assign("RXLNOZJOFLLITR");

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
    msg.setTimeStamp(0.967341046626);
    msg.setSource(4188U);
    msg.setSourceEntity(253U);
    msg.setDestination(22969U);
    msg.setDestinationEntity(232U);
    msg.sessid = 3704733062U;
    msg.messages.assign("AIFYKMCDFILXBFGBTGKBCUASJHHGELXVBEVXQDQSZIPUNPQSAIAOHNO");

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
    msg.setTimeStamp(0.156325528854);
    msg.setSource(55216U);
    msg.setSourceEntity(124U);
    msg.setDestination(47814U);
    msg.setDestinationEntity(17U);
    msg.sessid = 2422992195U;

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
    msg.setTimeStamp(0.952538458622);
    msg.setSource(25273U);
    msg.setSourceEntity(236U);
    msg.setDestination(31644U);
    msg.setDestinationEntity(25U);
    msg.sessid = 434120950U;

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
    msg.setTimeStamp(0.0652270571733);
    msg.setSource(20074U);
    msg.setSourceEntity(174U);
    msg.setDestination(56938U);
    msg.setDestinationEntity(248U);
    msg.sessid = 2405659092U;

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
    msg.setTimeStamp(0.692843236625);
    msg.setSource(15958U);
    msg.setSourceEntity(63U);
    msg.setDestination(30131U);
    msg.setDestinationEntity(171U);
    msg.sessid = 2071654233U;
    msg.status = 16U;

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
    msg.setTimeStamp(0.689839385124);
    msg.setSource(25114U);
    msg.setSourceEntity(168U);
    msg.setDestination(4695U);
    msg.setDestinationEntity(238U);
    msg.sessid = 2082238652U;
    msg.status = 198U;

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
    msg.setTimeStamp(0.768518714847);
    msg.setSource(5375U);
    msg.setSourceEntity(228U);
    msg.setDestination(26405U);
    msg.setDestinationEntity(65U);
    msg.sessid = 3311464682U;
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
    msg.setTimeStamp(0.162059867065);
    msg.setSource(12540U);
    msg.setSourceEntity(187U);
    msg.setDestination(42586U);
    msg.setDestinationEntity(246U);
    msg.name.assign("VSORYSCMZNORKGKFFCXBTXCKBLIQVDQJGSGHQYOAAGNXRJPQXWSRZOOHUUWBGIDRSVEVBNSVNXLARLCOYWDCYQNTEIIHUZYUYLDKUENAZOJTSEPHYVTKEUEPJNJPUIALGMPWPLQFD");

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
    msg.setTimeStamp(0.187585751856);
    msg.setSource(10273U);
    msg.setSourceEntity(177U);
    msg.setDestination(56745U);
    msg.setDestinationEntity(25U);
    msg.name.assign("TUNZQIVNPWMTAFLWH");

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
    msg.setTimeStamp(0.489442616352);
    msg.setSource(65497U);
    msg.setSourceEntity(167U);
    msg.setDestination(40015U);
    msg.setDestinationEntity(18U);
    msg.name.assign("MATHFLQJDPORJRVUIYBWVPJIXYGBMFREUMEWIVFUOAJLRRGDNYBCLANECOZADWSFXNWDIKBGZAUZVFGLQLXYBQZRSTOEICOJFPGXVKQAQEUSKSQNZEWRAIVZZSYKLVMNGBBALYCSWKHTJWWZNTXJCMOHJTFMPSKHAKSQIGHDYPGXIYUPNSCPOEKYCLXMZFUQPXGPAGXTVIWUFBNJDFHHUTIYOKUECEQHWOTRM");

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
    msg.setTimeStamp(0.383310598604);
    msg.setSource(22564U);
    msg.setSourceEntity(146U);
    msg.setDestination(6188U);
    msg.setDestinationEntity(19U);
    msg.name.assign("JPIFLJHHHMEOABUDNXVQBYGICVZXAQDURWDFDNFSEWMCNZGFMKNCSSOGLV");

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
    msg.setTimeStamp(0.625265250937);
    msg.setSource(29910U);
    msg.setSourceEntity(109U);
    msg.setDestination(7100U);
    msg.setDestinationEntity(177U);
    msg.name.assign("ACLSJMEZLSONTUSPLIEYDMPQEIWFYZMKANUHKBGZHYEWXTOBTGWISNADVOVEKBVXRWVDLMDHKKPYZRYUBOWCDWHXZLCNFMOUREDXHNKHJOTGSCCHZFXWLYHXVIFPGJCTEMZVCHJJSLUGDFNZOKQCUIFUKPDXMKPNXADNP");

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
    msg.setTimeStamp(0.566218186547);
    msg.setSource(4175U);
    msg.setSourceEntity(208U);
    msg.setDestination(42501U);
    msg.setDestinationEntity(58U);
    msg.name.assign("MHKAMHOGKEJNOQFTCVDPXEBPJOWCWBFWFWICDBNIVPWFUHDMTTOMQNIMDQGLODBIHNYVHUSAGLZJQSVRWKYRX");

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
    msg.setTimeStamp(0.383808610363);
    msg.setSource(33858U);
    msg.setSourceEntity(54U);
    msg.setDestination(867U);
    msg.setDestinationEntity(176U);
    msg.type = 100U;
    msg.error.assign("GTPQXMVVXXYSPRUGZTTQZHEGYVDBOEDWPVBWIMXBICNTDTFBTLJENRWUAMTHK");

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
    msg.setTimeStamp(0.506243260577);
    msg.setSource(17039U);
    msg.setSourceEntity(221U);
    msg.setDestination(37319U);
    msg.setDestinationEntity(88U);
    msg.type = 250U;
    msg.error.assign("EEPORNPFBPIMPCXWARIULXHBXVVXGSQUCZQHEQTUDCHCNNJUBFZJZKEWGOPGDNNDAYRTVBZEWJAHTYOCQMBZKUXGGSRFYFIIUKXRXQALDHAULEPWMROKDYJEMRDMGVTQWQAIOWHGALNCBYKLOFIFYETTYMIVKSPSXDWLLDOPUTZPVNHIJQWSPQSCJYLKTRFSAMORJVEALSMCKUWFN");

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
    msg.setTimeStamp(0.466492796299);
    msg.setSource(49099U);
    msg.setSourceEntity(168U);
    msg.setDestination(59995U);
    msg.setDestinationEntity(90U);
    msg.type = 79U;
    msg.error.assign("BEBVVMULTTCFSWOOGOWSLHVTBFHY");

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
    msg.setTimeStamp(0.243206503396);
    msg.setSource(19706U);
    msg.setSourceEntity(169U);
    msg.setDestination(46617U);
    msg.setDestinationEntity(175U);
    msg.seq = 52759U;
    msg.sys_dst.assign("AYNRYSEKKCFCNSBBXTHPGADKPAEWEKUJCVFJKHLECROWCNDMVBWLFHVMMOILKTJOZQOCVDWDQDTIOV");
    msg.flags = 71U;
    const char tmp_msg_0[] = {-115, -23, 55, 53, -40, 79, 11, 97, 78, 6, 21, 69, 63, -29, 20, -31, -29, -28, 104, 59, 77, 116, 44, 8, 22, 98, -28, 30, 18, 122, -71, 9, 66, -96, 106, 92, -25, -108, -70, -64, -7, 53, 56, -47, 89, -121, 125, -48, 116, 1, -4, 65, 56, -103, 75, 43, 74, 112, 74, 115, -98, 55, -108, 92, 114, -26, -41, -103, -47, -16, -6, 71, -111, 57, -68, 27, 38, -86, -73, -45, -90, -19, 77, -5, 4, 11, -93, -117, 7, 87, 92, 49, 99, 47, -122, 16, -110, 114, 92, 14, -92, 95, -15, -68, -122, 79, -63, -95, -124, -62, 25, 113, 0, -96, -94, 6, 64, -115, 48, -46, 89, 10, 27, 47, 21, 101, -94, 111, 29, 111, 75, 118, -93, -5, 29, 96, -117, 47, -119, -90, 45, -77, 103, -94, 86, 56, -46, 64, -66};
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
    msg.setTimeStamp(0.864202148244);
    msg.setSource(49044U);
    msg.setSourceEntity(243U);
    msg.setDestination(17154U);
    msg.setDestinationEntity(217U);
    msg.seq = 64273U;
    msg.sys_dst.assign("YDGKQTSQWHAWEUIMFVISTVHNMCSJJWEVWYFBKISCBXUATRDQXPEHXWPEBBYFGLEKNJJMMSVGZRYNCJZXLLEXOOLURLAVPVDLXWZMQDSAOKIFEYFYTICPZHMFPUMZSCBROFHAVDQGGNR");
    msg.flags = 183U;
    const char tmp_msg_0[] = {-108, 83, 20, 65, -40, -120, 3, 23, -54, -97, -112, 10, -50, -105, 3, 51, 14, 94, -27, 33, 19, -20, -21, 49, 95, -10, -86, -14, 77, -65, 102, -96, 49, 109, 53, 41, -108, 52, -60, 40, 26, -34, -47, 41, -13, -32, 8, 75, 119, -127, -71, -49, -25, -2, 41, -69, -44, 59, -93, 40, 3, 79, -103, 21, 24};
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
    msg.setTimeStamp(0.41824808934);
    msg.setSource(9046U);
    msg.setSourceEntity(198U);
    msg.setDestination(45867U);
    msg.setDestinationEntity(222U);
    msg.seq = 12335U;
    msg.sys_dst.assign("MFFJKRUHQEINDBNLTDDJPHPXUUJQFBOWIOCENDZGYZCHPFGAGPNPLAERSYAGSYWEVPWDNXDRUHJAKVMVHZKIXKZTEMOTROEWBXRLKMXZTSIGCNGHBWOVPARDYDWXEBALEOXFIEVWXCKMGYKALNPSOWQYZBACNI");
    msg.flags = 58U;
    const char tmp_msg_0[] = {76, 96, 30, -73, 57, 112, 12, -34, -42, 87, -93, -44, -118, 119, -11, 116, -17, 14, 2, -95, -96, 99, 74, 97, 126, 124, -72, -83, -116, 60, 36, -101, 110, 82, -102, 83, -33, 91, 65, 16};
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
    msg.setTimeStamp(0.473081932469);
    msg.setSource(43310U);
    msg.setSourceEntity(74U);
    msg.setDestination(10226U);
    msg.setDestinationEntity(187U);
    msg.sys_src.assign("QYNPBIAAEIXKHAQEERZQNRXEGHVJHVEIG");
    msg.sys_dst.assign("LXJSYQMPZKASJTBWTCSJQUEXVIUWATFWQVCYMZMRHUNMMXNYRRFETQRBXOBSHYHYSXYDIHJAGZQSLLDVWOLDQJRWFBHFMEARAOCHAPKNIUFHZONGTDCQPBDKVNRGNZGKCPLNEOTPEWAHWJLUTMBETAKDJJJDCWEGNGOSNZFLXQVTXIOVURAHBZYKGVGLFIVBOCXZCFKZZKLQRMYCIXSLPKPVUPMCIUFIGEIHSVE");
    msg.flags = 151U;
    const char tmp_msg_0[] = {-85, -86, 39, -99, 97, -31, 104, -126, -127, -47, -56, -112, 53, -84, 22, 92, -54, 118, 116, -10, -109, 70, -31, 84, -76, 88, -74, -98, -18, 78, -86, -88, 96, -31, -10, 32, 76, -79, 99, -40, -106, -61, -107, -15, 45, 125, -70, 42, -91, -99, -99, -26, -32, -21, 63, 109, 46, 115, -112, 98, -64, 7, 100, 61, 31, -40, 16, -9, -78, -56, -85, -25, -21, 113, -47, -25, -92, 28, 38, 34, 106, 81, 73, 59, 72, -67, -62, 95, -26, 114, 90, 2, -22, -80, 102, -32, 122, -19, 115, 83, 25, -62, -3, 9, -36, -1, -34, -106, -39, 19, 73, -125, -61, 108, 5, 93, -98, -48, 5, 59, 52, -67, -57, -71, -100, 61, -127, -52, -70, 43, -15, 116, -47, 109, -48, 110, -5, 114, 57, 61, -70, 104, 92, 84, 61, -28, -119, -72, -119, -109, -98, 78, 110, 84, 30, -115, 30, -124, -20, 109, -53, -47, 72, 104, 96, 17, -115, -83, -75, 83, 90, -80, 55, 38, 22, 86, 86, -32, 77, 24, 2, 21, 105, 112, -88, 123, -69, -102, -98};
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
    msg.setTimeStamp(0.841345100406);
    msg.setSource(30191U);
    msg.setSourceEntity(171U);
    msg.setDestination(56044U);
    msg.setDestinationEntity(147U);
    msg.sys_src.assign("CDRODXTPCERAVCZHBBWPPKERXXBODHRBTVTYNYAWHAZXLRJJTRYSZUKQJTVNYQLNOWCMAPAVTBHVYXSDEKNZEXMKVPVELYMNJGGRVMRKJEUIZCSBVWHAHRDAWNEYSKAXIFRENKFZBYJCFGQCYM");
    msg.sys_dst.assign("CRVJUJTAYPIISUPEYKXORWGUPQLAFYNSSZDRNIYBDIJNYJDWKUBYQLRBFYPJSWGCMVSZNINAGDSZIXZBCLNRMOZAMXMWWBQQHLVHTASZWXZGMPAKTEDTYTKTQBDOMFUXHOS");
    msg.flags = 7U;
    const char tmp_msg_0[] = {77, -103, 121, 79, -103, 32, -64, 2, -28, -44, -74, 91, 94, -84, 51, -15, 11, 34, -18, 11, -35, -95, -79, -54, -55, -127, 15, 62, 33, 20, 27, -57, -12, 100, 107, 58, -30, -30, -7, -43, -11, 106, -13, -51, -47, 121, 79, 10, -65, 65, 121, -1, -56, 67, 59, -121, -59, -88, 57, 113, -75, -112, -5, -95, -41, 70, 123, 76, 26, 111, 90, -82, -87, -91, -47, -42, 80, 82, 122, 94, 13, -94, -123, 23, -75, -8, 6, 36, 87, -110, -72, -11, -111, -15, -63, -74, -40, -128, -40, -67, -121, 63, 35, 6, 65, 115, -6, -65, 76, 2, 73, 86, 107, 19, -72, 92, -34, -88, 113, -2, -66, 32, -107, -30, -78, -27, 87, -27, 81, -71, 18, -116, 10, 97, -46, 5, -79, -21, 102, 23, 90, -72, 67, -57, 125, -112, 123, 17, -107, -69, -123, -83, -72, 56, 45, -77, 49, -119, -1, 50, 39, -23, -38, 15, -2, -36, 8, -117, 74, 49, 92, 106, 54, 66, -124, -72, 72, -63, -1, -20, -22, -24, -46};
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
    msg.setTimeStamp(0.938068336283);
    msg.setSource(45610U);
    msg.setSourceEntity(103U);
    msg.setDestination(33641U);
    msg.setDestinationEntity(117U);
    msg.sys_src.assign("HJPFOMWTSKFDQORUQZJBARIWKREPVMKZPTFFISXEIGFLUJNXYGPQGHTAEHAKSWGAOIRLKVJOLYEIBCNWXATGWVKQPAGZTIBXOSEWHZMVNOQNNDROCLYCXHRWJUJGDTZSYDUIDACHMHNJRNMNBZFJAYQQWPDQIDSXULIVKMKVSEUFFLNMCWESPQXZ");
    msg.sys_dst.assign("NXUIPAQEBGJVKMQLKTRLYFOQICCCHWAPMMSVWONXYQXVYUQTALIJCNZDSJYGH");
    msg.flags = 249U;
    const char tmp_msg_0[] = {46, 51, -74, -67, -74, 76, -93, -90, 59, -106, -111, 4, 11, 45, -35, 59, 76, 126, -47, 38, 110, -21, 95, -119, -32, 111, -128, -62, -31, -119, 10, 41, -118, 100, 5, 40, 91, -124, -118, -27, -28, -4, -62, 38, -35, 71, -37, -12, -104, -32, 18, -92, 34, -125, -80, -72, 119, 54, -55, 60, 68, -70, 73, -90, -122, -34, -50, 90, 63, -119, 39, 12, 13, 58, 68, 119, -56, 65, 88, 112, -68, -5, 88, 123, 35, 63, -100, 41, -6, -32, -53, 40, 105, 11, 31, 106, -107, -93, -92, -45, -5, 47, -109, -73, 87, 126, -31, 91, -31, 89, -114, 96, 30, 53, 26, -43, 8, -6, -105, -45, -28, -33, -124, -30, 118, 71, 3, -72, -113, 48, 10, -123, 38, 19, -98, 74, 98, 51, 47, 71, 67, 67, 35, -43, 60, -36, 26, -109, 7, -30, -84, -8, 7, 26, 50, 125, -61, -97, 71, -128, 40, -76, -13, -124, -91, 102, 103};
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
    msg.setTimeStamp(0.463870168455);
    msg.setSource(62334U);
    msg.setSourceEntity(59U);
    msg.setDestination(60854U);
    msg.setDestinationEntity(18U);
    msg.seq = 51672U;
    msg.value = 217U;
    msg.error.assign("XNYXYBTVCCLWAHFAZDRVFRNNBUSJTLOUZCLIIXGMYTBWRHMVZFGTFWHMKXIEA");

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
    msg.setTimeStamp(0.443393558114);
    msg.setSource(41203U);
    msg.setSourceEntity(130U);
    msg.setDestination(10141U);
    msg.setDestinationEntity(194U);
    msg.seq = 59869U;
    msg.value = 221U;
    msg.error.assign("NMCCCAIKFBAYWZMQEWAFTCJTISRWUJCXKHIKNOLPLKJLOSFZQUQUKKWVDEPSFTUFKLYIUIROXRHAAJJDRFQNGMRCJOZXEGTMZCSTIPKUREZRQ");

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
    msg.setTimeStamp(0.903691833742);
    msg.setSource(54739U);
    msg.setSourceEntity(102U);
    msg.setDestination(8774U);
    msg.setDestinationEntity(103U);
    msg.seq = 16501U;
    msg.value = 239U;
    msg.error.assign("NEPZKHINTOYSEUQONTRVCRNJBXBKVZHWRCARUEXQOYAMZSMLTTMAFZHSEPJVOLYVFAZAISCJSCPAFPJMGLDJXBFRXGFMTKABGPLDVKWXLKKZCDZMIVOLDEWEHJQOTRAPYQQTQMLXIGBAWVBSQUOJUGFUSRUMCDVTNLSFYWNRGNWYDDQCGBCFIULUYKIJNWZRHYJK");

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
    msg.setTimeStamp(0.942194081758);
    msg.setSource(33760U);
    msg.setSourceEntity(116U);
    msg.setDestination(29740U);
    msg.setDestinationEntity(132U);
    msg.seq = 14246U;
    msg.sys.assign("TEZYAVZFHOHDQYXCHQYFMNDDRHPKIDJJCJQSRAYJMEPUWBAGFCZHNMBZXZITSIRMERBSNCRZGEIBTRIKBAQPFDUSQINXKXKOILVODPDXCOLKBPSWULMTPLJXNGXUJFHEKGKUWFMSUQBRUBGJKAOGLEVTLPWAOCGWNYXFNVTQCTNOPWMTLLSRVDHTHKLVBBYJOLHI");
    msg.value = 0.254389002798;

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
    msg.setTimeStamp(0.040937709898);
    msg.setSource(45338U);
    msg.setSourceEntity(117U);
    msg.setDestination(63770U);
    msg.setDestinationEntity(250U);
    msg.seq = 48637U;
    msg.sys.assign("MORWWNCYWUNLWWUZMJIKDLMCUOZFSOSJTDLPUMPVAISFFAEMSZMBFCUVECNLFBHGGLNTZMYFUYEACZJOXIZKAQIRSVYDXDFHTHPNAVHHORYSGRSWGIUTPJKLKKDULQUJDXQYITXNIWHJXTTDMRCTBPZKAQCVLGQOAYQKLYRZDDBPCRQSXQZSEVI");
    msg.value = 0.583220915072;

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
    msg.setTimeStamp(0.670843119604);
    msg.setSource(12674U);
    msg.setSourceEntity(86U);
    msg.setDestination(64515U);
    msg.setDestinationEntity(198U);
    msg.seq = 63684U;
    msg.sys.assign("ITFNLYUJOKPXGHVQWTNJKWCSDKUELYYXBUQCOQGZWMEEQRJBNSFZVIZAIOKAUVBBDQFAZUSLTCVSRFGBLHLYHAKEZMJSAQEROV");
    msg.value = 0.27245610021;

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
    msg.setTimeStamp(0.803081106515);
    msg.setSource(39430U);
    msg.setSourceEntity(220U);
    msg.setDestination(17219U);
    msg.setDestinationEntity(9U);
    msg.action = 180U;
    msg.longain = 0.783128499085;
    msg.latgain = 0.705945921954;
    msg.bondthick = 3777663644U;
    msg.leadgain = 0.466667027975;
    msg.deconflgain = 0.965465442879;

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
    msg.setTimeStamp(0.965840849148);
    msg.setSource(1783U);
    msg.setSourceEntity(207U);
    msg.setDestination(895U);
    msg.setDestinationEntity(174U);
    msg.action = 173U;
    msg.longain = 0.74205481729;
    msg.latgain = 0.0638014467468;
    msg.bondthick = 1776767362U;
    msg.leadgain = 0.702942337759;
    msg.deconflgain = 0.913869265265;

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
    msg.setTimeStamp(0.783386757717);
    msg.setSource(15366U);
    msg.setSourceEntity(186U);
    msg.setDestination(6776U);
    msg.setDestinationEntity(52U);
    msg.action = 207U;
    msg.longain = 0.932167382838;
    msg.latgain = 0.607199950521;
    msg.bondthick = 2235103914U;
    msg.leadgain = 0.00507028812537;
    msg.deconflgain = 0.35651667141;

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
    msg.setTimeStamp(0.159306233116);
    msg.setSource(13388U);
    msg.setSourceEntity(15U);
    msg.setDestination(6321U);
    msg.setDestinationEntity(180U);
    msg.err_mean = 0.133203803697;
    msg.dist_min_abs = 0.634486244169;
    msg.dist_min_mean = 0.135096307209;

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
    msg.setTimeStamp(0.262548677694);
    msg.setSource(46011U);
    msg.setSourceEntity(228U);
    msg.setDestination(1433U);
    msg.setDestinationEntity(12U);
    msg.err_mean = 0.711376088949;
    msg.dist_min_abs = 0.553317501882;
    msg.dist_min_mean = 0.244921469258;

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
    msg.setTimeStamp(0.638880975128);
    msg.setSource(8143U);
    msg.setSourceEntity(111U);
    msg.setDestination(45439U);
    msg.setDestinationEntity(234U);
    msg.err_mean = 0.0319877198403;
    msg.dist_min_abs = 0.328760247884;
    msg.dist_min_mean = 0.103001923901;

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
    msg.setTimeStamp(0.435318244128);
    msg.setSource(47534U);
    msg.setSourceEntity(89U);
    msg.setDestination(45459U);
    msg.setDestinationEntity(248U);
    msg.action = 149U;
    msg.lon_gain = 0.822401149497;
    msg.lat_gain = 0.309479393936;
    msg.bond_thick = 0.79400376094;
    msg.lead_gain = 0.71206526927;
    msg.deconfl_gain = 0.430959453156;
    msg.accel_switch_gain = 0.254153870989;
    msg.safe_dist = 0.527357716444;
    msg.deconflict_offset = 0.626648373695;
    msg.accel_safe_margin = 0.389732483888;
    msg.accel_lim_x = 0.722960642898;

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
    msg.setTimeStamp(0.329614633006);
    msg.setSource(33549U);
    msg.setSourceEntity(94U);
    msg.setDestination(7275U);
    msg.setDestinationEntity(89U);
    msg.action = 218U;
    msg.lon_gain = 0.721931477178;
    msg.lat_gain = 0.195257581033;
    msg.bond_thick = 0.417714382682;
    msg.lead_gain = 0.814717941689;
    msg.deconfl_gain = 0.998693889331;
    msg.accel_switch_gain = 0.85875919012;
    msg.safe_dist = 0.653305006329;
    msg.deconflict_offset = 0.731111043198;
    msg.accel_safe_margin = 0.850726909405;
    msg.accel_lim_x = 0.489929224543;

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
    msg.setTimeStamp(0.373459965918);
    msg.setSource(45812U);
    msg.setSourceEntity(77U);
    msg.setDestination(61223U);
    msg.setDestinationEntity(48U);
    msg.action = 226U;
    msg.lon_gain = 0.826937889691;
    msg.lat_gain = 0.0970642327219;
    msg.bond_thick = 0.423725054903;
    msg.lead_gain = 0.999855924503;
    msg.deconfl_gain = 0.377683194145;
    msg.accel_switch_gain = 0.35613165657;
    msg.safe_dist = 0.73789099341;
    msg.deconflict_offset = 0.277209800591;
    msg.accel_safe_margin = 0.87329891753;
    msg.accel_lim_x = 0.879547497928;

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
    msg.setTimeStamp(0.631349569336);
    msg.setSource(171U);
    msg.setSourceEntity(219U);
    msg.setDestination(30102U);
    msg.setDestinationEntity(65U);
    msg.type = 200U;
    msg.op = 238U;
    msg.err_mean = 0.264612775392;
    msg.dist_min_abs = 0.735525656351;
    msg.dist_min_mean = 0.665202195379;
    msg.roll_rate_mean = 0.0509939404143;
    msg.time = 0.778061813782;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 187U;
    tmp_msg_0.lon_gain = 0.169264333755;
    tmp_msg_0.lat_gain = 0.77784036963;
    tmp_msg_0.bond_thick = 0.437264512678;
    tmp_msg_0.lead_gain = 0.638930081863;
    tmp_msg_0.deconfl_gain = 0.265392642465;
    tmp_msg_0.accel_switch_gain = 0.449225504496;
    tmp_msg_0.safe_dist = 0.496485276061;
    tmp_msg_0.deconflict_offset = 0.14794540415;
    tmp_msg_0.accel_safe_margin = 0.0722992644536;
    tmp_msg_0.accel_lim_x = 0.948442574522;
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
    msg.setTimeStamp(0.544392477332);
    msg.setSource(59396U);
    msg.setSourceEntity(15U);
    msg.setDestination(31274U);
    msg.setDestinationEntity(39U);
    msg.type = 31U;
    msg.op = 8U;
    msg.err_mean = 0.929251885969;
    msg.dist_min_abs = 0.393098818494;
    msg.dist_min_mean = 0.35551071998;
    msg.roll_rate_mean = 0.110275495121;
    msg.time = 0.708697484128;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 202U;
    tmp_msg_0.lon_gain = 0.507311777102;
    tmp_msg_0.lat_gain = 0.198164198391;
    tmp_msg_0.bond_thick = 0.10925360137;
    tmp_msg_0.lead_gain = 0.204205868657;
    tmp_msg_0.deconfl_gain = 0.388441291165;
    tmp_msg_0.accel_switch_gain = 0.212567373863;
    tmp_msg_0.safe_dist = 0.455171598118;
    tmp_msg_0.deconflict_offset = 0.78870672222;
    tmp_msg_0.accel_safe_margin = 0.304495648048;
    tmp_msg_0.accel_lim_x = 0.784891927699;
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
    msg.setTimeStamp(0.500535880362);
    msg.setSource(22528U);
    msg.setSourceEntity(20U);
    msg.setDestination(38529U);
    msg.setDestinationEntity(98U);
    msg.type = 115U;
    msg.op = 179U;
    msg.err_mean = 0.0706370568061;
    msg.dist_min_abs = 0.547369471777;
    msg.dist_min_mean = 0.445496416542;
    msg.roll_rate_mean = 0.645916896655;
    msg.time = 0.900545437001;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 8U;
    tmp_msg_0.lon_gain = 0.753377992863;
    tmp_msg_0.lat_gain = 0.41729275917;
    tmp_msg_0.bond_thick = 0.371830332526;
    tmp_msg_0.lead_gain = 0.0507805995717;
    tmp_msg_0.deconfl_gain = 0.500801596003;
    tmp_msg_0.accel_switch_gain = 0.901951579752;
    tmp_msg_0.safe_dist = 0.988395511314;
    tmp_msg_0.deconflict_offset = 0.399157589983;
    tmp_msg_0.accel_safe_margin = 0.575897447722;
    tmp_msg_0.accel_lim_x = 0.212327729825;
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
    msg.setTimeStamp(0.156423153396);
    msg.setSource(18900U);
    msg.setSourceEntity(38U);
    msg.setDestination(38470U);
    msg.setDestinationEntity(64U);
    msg.uid = 198U;
    msg.frag_number = 177U;
    msg.num_frags = 84U;
    const char tmp_msg_0[] = {52, -118, -108, -114, -100, 76, -13, 48, -55, 8, -32, 85, 48, -108, 61, -95, -119, 39, -79, -93, 116, -65, 77, -25, 34, 102, -49, -25, 106, 108, 125, -86, -125, 117, 71, 5, 14, 32, 56, -16, 70, 78, -91, 16, -121, -80, 28, -95, 6, -34, 94, 5, -76, 124, -40, -43, -123, 114, -83, -23, -22, -63, 21, 66, -32, -118, -11, -123, -11, 6, 49, -113, -119, 78, 100, 38, -84, -7, -82, -80, 24, -57, 37, 88, -18, -34, -85, 117, 123, 65, 16, -31, 77, 125, 46, 30, 83, 95, 77, -32, 120, -16, -124, -107, -118, 33, -103, -110, -47, 88, -54, 116, -85, 106, -64, 64, 7, 59, -75, -35, -71, -50, -8, 63, -54, -125, -37, -32, -40, -65, 36, 3, 29, -66, -91, 86, 8, 83, 5, -57, 102, 123, -107, -51, 122, -5, 115, 10, -26, -38, 37, 34, 18, 9, -62};
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
    msg.setTimeStamp(0.949861997321);
    msg.setSource(901U);
    msg.setSourceEntity(64U);
    msg.setDestination(1265U);
    msg.setDestinationEntity(72U);
    msg.uid = 235U;
    msg.frag_number = 123U;
    msg.num_frags = 79U;
    const char tmp_msg_0[] = {-16, 18, 59, 65, 7, -35, -1, -72, -71, 91, -121, 42, -78, 61, -43, 120, 55, -73, -128, -27, -16, 71, -121, 21, 45, 63, 12, 76, 29, -83, 95, 19, 121, 105, 9, 27, 8, -31, -123, 40, -63, 37, -60, -106, -61, -70, -18, 106, -108, 112, 71, 98, 49, -89, -9, 111, 55, -126, -81, -87, 121, 45, 113, -13, 0, -100, -54, 33, 71, -79, 50, -128, -10, 107, -23, -119, -86, -77, 49, 38, -92, 22, -11, 97, 6, 61, -98, 2, 54, 111, 89, 73, 95, 98, -12, -48, -5, -122, 24, -34, -58, -86, -124, 72, -1, -98, -76, -77, -99, 48, -68, -123, -27, 53, 17, -30, 58, -49, -28, 58, 24, 95, 13, -115, 46, 43, -79, -89, 26, -50, -89, 72, -52, -105, -51, -74, 106, -85, -1, -110, 27, -53, 88, 59, -100, 104, -5, -111, 56, 97, 49, 2, -25, -13, -121, 10};
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
    msg.setTimeStamp(0.415832958543);
    msg.setSource(21597U);
    msg.setSourceEntity(109U);
    msg.setDestination(60745U);
    msg.setDestinationEntity(164U);
    msg.uid = 107U;
    msg.frag_number = 11U;
    msg.num_frags = 212U;
    const char tmp_msg_0[] = {-60, -83, 97, 125, -33, 26, 53, -66, -106, -30, -1, 25, 3, -109, 48, -93, -67, -16, 76, 32, 34, 2, 93, -72, 112, -61, 36, -26, 82, -24, 48, 39, 31, -103};
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
    msg.setTimeStamp(0.745435891574);
    msg.setSource(49524U);
    msg.setSourceEntity(202U);
    msg.setDestination(56653U);
    msg.setDestinationEntity(144U);
    msg.content_type.assign("IMWXDDRTWWQCIKUICAJYHGUIOUNSLVQDRAAIMDWRTYFEBZLJQUZMNPASLLYWDBEFHTVLTJWRCMATHBLKCXOZNGEXEBVNJKGGMSOUVSEFYSHUVTQTPJWGWKZKCXCTUFVKOXEIOGINBBLMJGDJLUNNBNAXXQJZRVYEVPLZWGRFHQWECNKSCPJSYLAMFFYOYIUGXIZBXZQOYPXPTKDSNPPIDRQDVEUJMBGAHF");
    const char tmp_msg_0[] = {123, -29, -24, -123, -102, 65, -75, -2, -76, 60, -5, -22, 101, -109, -107, 74, 109, 18, 5, 79, -61, 27, 32, 99, 43, 95, 39, 60, -58, 115, -59, -24, -72, -75, -45, 22, -113, 72, 62, 124, -89, 15, -51, 107, 103, 20, -38, -16, 85, -16};
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
    msg.setTimeStamp(0.682229632447);
    msg.setSource(51111U);
    msg.setSourceEntity(11U);
    msg.setDestination(46323U);
    msg.setDestinationEntity(242U);
    msg.content_type.assign("ZFIVJTCLVDWYTFUVEMLIYOESFXCCAMGQSSMGBNMXJAXYCJCXBQQPPWXHSLADZETICXLYKMHOBQSGBUFRRZXWEBZTQOPWNPOKBTDPRTOAHMFKEHMQGHPLADUGKWG");
    const char tmp_msg_0[] = {7, 27, -27, -122, -15, 28, -43, -30, 118, 66, 92, -2, 37, -121, -113, -95, -126, 119, 51, 91, 90, 7, 82, 14, 7, 125, 46, 74, 75, 78, -17, 70, 40, 91, 37, 87, 94, -127, -4, -42, -124, -58, -98, -67, 120, 70, 68, -38, 82, 17, -48, -123, 106, -117, -119, 19, -38, 89, -111, 68, 69, 37, 3, 58, -87, 118, -78, -5, -41, -118, 33, 85, -89, 45, 48, 28, 91, 10, -30, -127, 97, 64, -114, 30, -77, -3, 95, -59, -110, 119, -79, -45, -44, 82, -103, 34, 83, 110, -95, 36, -100, -119, 93, 77, -33, -118, 15, -49, -50, -66, 36, 32, 89, 86, 120, -2, -54, -115, 5, 83, 1, -2, -27, 98, 40, 48, 96, 121, 49, -128, 90, 10, -72, 19, 51, -93, 79, -71, -88, -106, 40, -46, -7, -60, 71, -88, 112};
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
    msg.setTimeStamp(0.271153830218);
    msg.setSource(8838U);
    msg.setSourceEntity(150U);
    msg.setDestination(23559U);
    msg.setDestinationEntity(240U);
    msg.content_type.assign("BIHZVTDXWFPPVBPBSBCPBLSGBZVSNDIRMEWNFKACJRTXYGASNVYVRGYXQSIPDEXFHBNKHVZCDPQNLWAQOMHOSLYJBEWKANVWYJXDEQLLAFGDSIIJJUMTXDUEIHRFHNZFAVXWYUKEUOZEOZMVKGAHLCTETCJMDCOYKFXTUKFHYASKRNOBUICQJHWTQYQOPPGIWZGZEZUNQLVEYWSISGWCPCQFARJPKRX");
    const char tmp_msg_0[] = {-75, 21, -9, -107, 74, -116, 47, -117, -49, -22, -23, -38, 120, -27, -86, 87, -99, 114, 123, 26, 95, -105, 113, 110, 5, -1, -57, -39, -56, 26, 120, 13, -38, -52, -5, 45, -59, 28, 24, 46, 36, -105, -33, 121, -100, -14, -46, 21, 88, -97, -51, -69, -3, -30, -93, 43, 106, -39, -59, -34, -11, 42, -36, -106, -32, 30, -111, -51, -81, 82, -71, -75, 60, -110, -78, 68, -61, -27, 47, -39, -22, 79, -89, -79, -78, 117};
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
    msg.setTimeStamp(0.170958158339);
    msg.setSource(27728U);
    msg.setSourceEntity(17U);
    msg.setDestination(64518U);
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
    msg.setTimeStamp(0.791558475782);
    msg.setSource(15305U);
    msg.setSourceEntity(112U);
    msg.setDestination(65449U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.79933638397);
    msg.setSource(62717U);
    msg.setSourceEntity(129U);
    msg.setDestination(26895U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.696128457538);
    msg.setSource(22073U);
    msg.setSourceEntity(67U);
    msg.setDestination(27074U);
    msg.setDestinationEntity(64U);
    msg.target = 17913U;
    msg.bearing = 0.979032733147;
    msg.elevation = 0.263925170878;

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
    msg.setTimeStamp(0.373472317443);
    msg.setSource(38362U);
    msg.setSourceEntity(157U);
    msg.setDestination(56293U);
    msg.setDestinationEntity(3U);
    msg.target = 61203U;
    msg.bearing = 0.979759500212;
    msg.elevation = 0.128327875009;

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
    msg.setTimeStamp(0.615150979572);
    msg.setSource(26766U);
    msg.setSourceEntity(53U);
    msg.setDestination(13684U);
    msg.setDestinationEntity(6U);
    msg.target = 22412U;
    msg.bearing = 0.980785320935;
    msg.elevation = 0.259773062343;

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
    msg.setTimeStamp(0.118917468549);
    msg.setSource(17003U);
    msg.setSourceEntity(145U);
    msg.setDestination(30669U);
    msg.setDestinationEntity(1U);
    msg.target = 44905U;
    msg.x = 0.303819954052;
    msg.y = 0.127025358699;
    msg.z = 0.0727880401309;

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
    msg.setTimeStamp(0.106773327538);
    msg.setSource(44357U);
    msg.setSourceEntity(140U);
    msg.setDestination(26274U);
    msg.setDestinationEntity(217U);
    msg.target = 65373U;
    msg.x = 0.387792194885;
    msg.y = 0.284881186458;
    msg.z = 0.770190730211;

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
    msg.setTimeStamp(0.217054735713);
    msg.setSource(33818U);
    msg.setSourceEntity(169U);
    msg.setDestination(4084U);
    msg.setDestinationEntity(166U);
    msg.target = 57581U;
    msg.x = 0.633493432998;
    msg.y = 0.217351453887;
    msg.z = 0.560504645195;

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
    msg.setTimeStamp(0.607475797057);
    msg.setSource(9409U);
    msg.setSourceEntity(162U);
    msg.setDestination(10416U);
    msg.setDestinationEntity(198U);
    msg.target = 17211U;
    msg.lat = 0.0105426609838;
    msg.lon = 0.945038138837;
    msg.z_units = 222U;
    msg.z = 0.998392572217;

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
    msg.setTimeStamp(0.566992766835);
    msg.setSource(6221U);
    msg.setSourceEntity(88U);
    msg.setDestination(35329U);
    msg.setDestinationEntity(212U);
    msg.target = 45556U;
    msg.lat = 0.0596256132735;
    msg.lon = 0.943383401818;
    msg.z_units = 220U;
    msg.z = 0.887316996542;

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
    msg.setTimeStamp(0.667099479788);
    msg.setSource(13578U);
    msg.setSourceEntity(13U);
    msg.setDestination(15224U);
    msg.setDestinationEntity(30U);
    msg.target = 39026U;
    msg.lat = 0.595708676851;
    msg.lon = 0.839992846111;
    msg.z_units = 78U;
    msg.z = 0.0191156939918;

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
    msg.setTimeStamp(0.486309020574);
    msg.setSource(56655U);
    msg.setSourceEntity(68U);
    msg.setDestination(53185U);
    msg.setDestinationEntity(200U);
    msg.locale.assign("JWBACZXZLVGMYQSXFHDWLUZPYLYVEHBWCOBNSJIFCZMZBPTCBTEOGOKDYSBZIFLNUCXBBQNKUZTHZVNUHPWXTOHQIJJKJWBSMXOVAKMGYIPAGLOMGJPURQVNVSIKQYVGSIJNQFIQTTNUVERYNRGKMUXCIXKJMNSKZDZQDXHUELYWRLWRFYXIBDMCEDEHSDFCOVWKKLPEEAOQSJFHRXPPYMRENCCRTDTAGQFDAWIAWPATFGUFEGMRUVAA");
    const char tmp_msg_0[] = {-110, 41, 121, 46, -65, -78, -55, -19, 21, -2, -41, -125, 62, 38, 22, 81, 120, -48, 24, 56, -75, -69, 58, 110, -31, 15, 3, 64, -36, 102, 96, -94, -79, 49, -36, -50, 2, 65, 3, -20, -103, -122, -8, 0, -102, -70, -127, -103, -22, -58, -50, -19, -113, -125, 75, 73, -112, -110, 55, -98, 116, 29, -47, 30, 103, -9, -15, 122, -104, 46, 109, -65, 126, -25, -38, 123, -68, -102, 58, 35, 105, -114, 2, -101, -70, -116, -58, 70, -36, -55, 3, 55, 117, 121, 106, 84, 13, -85, -37, 116, -91, -64, 90, -109, 12, 104, -57, -103, 117, -71, -55, -78, 126, -76, -111, 2, -124, 60, -120, 8, -24, -6, -58, 0, 53, 34, -28, 120, 52, 99, -80, 42, -19, 31, 88, -124, -107, -48, -111, 51, 1, 25, 30, -12};
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
    msg.setTimeStamp(0.87749051646);
    msg.setSource(50003U);
    msg.setSourceEntity(47U);
    msg.setDestination(311U);
    msg.setDestinationEntity(122U);
    msg.locale.assign("MTYYEMCRFWMEJTYXILFASIPGYSXRPVXMIDRGNLEOYSSUAIRQWUQPUKZYSDEFKTZHEHVPAPRLY");
    const char tmp_msg_0[] = {-57, 60, -77, 64, 20, 17, -32, 111, 111, 25, -126, 82, -126, -77, -60, 15, -10, -98, -127, 113, -54, -91, -41, -30, -24, 114, 64, 93, -45};
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
    msg.setTimeStamp(0.389110490483);
    msg.setSource(42442U);
    msg.setSourceEntity(144U);
    msg.setDestination(42580U);
    msg.setDestinationEntity(26U);
    msg.locale.assign("LNVBFZAEQVCISBWLRDRCYBZOTRNHAWRDMZQIAKFFNYWMBKQPIFCZLAXHJFKEXKXXJGRDDALWWWMLTUNITQEKUTTRXXAEMDQPYGUANBLVPGUTJAPZILORUEHVSKOBTJHRRKCJCKVMGDEFYHEMJHSPLFCLYCQGTISOBGLPVIDNUKHUDVJOIHORMOUKCSVZOXYYHOSIWPFBYFMADBQNPZZVSMCZJPGNAEUZEBGSXTHTNWJDNM");
    const char tmp_msg_0[] = {-57, 27, 63, 120, -8, 71, -89, 17, 55, -73, 32, 46, 28, -37, -91, -5, -56, 18, 114, 49, 14, 112, -8, 86, -123, 84, -36, -7, 53, 51, -63, 52, 66, 8, 36, 75, 41, -1, -75, 55, -71, -55, -112, 93, -125, -73, 85, 68, 100, 73, -66, -107, -71, -51, 89, -95, -63, -13, 51, 97, 27, 49, 29, -80, -110, 49, -103, 61, -104, -111, -44, -41, 31, 114, -5, -64, 123, -106};
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
    msg.setTimeStamp(0.371670577466);
    msg.setSource(29041U);
    msg.setSourceEntity(34U);
    msg.setDestination(48251U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.109028439501);
    msg.setSource(6493U);
    msg.setSourceEntity(182U);
    msg.setDestination(31483U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.213076832167);
    msg.setSource(61449U);
    msg.setSourceEntity(165U);
    msg.setDestination(10593U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.254192508139);
    msg.setSource(39866U);
    msg.setSourceEntity(100U);
    msg.setDestination(8011U);
    msg.setDestinationEntity(178U);
    msg.camid = 201U;
    msg.x = 37575U;
    msg.y = 35564U;

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
    msg.setTimeStamp(0.487330232824);
    msg.setSource(35893U);
    msg.setSourceEntity(64U);
    msg.setDestination(6855U);
    msg.setDestinationEntity(241U);
    msg.camid = 2U;
    msg.x = 55984U;
    msg.y = 16051U;

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
    msg.setTimeStamp(0.736934559601);
    msg.setSource(32881U);
    msg.setSourceEntity(179U);
    msg.setDestination(59487U);
    msg.setDestinationEntity(194U);
    msg.camid = 158U;
    msg.x = 64448U;
    msg.y = 4662U;

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
    msg.setTimeStamp(0.241360501545);
    msg.setSource(47341U);
    msg.setSourceEntity(87U);
    msg.setDestination(42723U);
    msg.setDestinationEntity(2U);
    msg.camid = 48U;
    msg.x = 61641U;
    msg.y = 48285U;

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
    msg.setTimeStamp(0.462363005739);
    msg.setSource(32699U);
    msg.setSourceEntity(28U);
    msg.setDestination(13421U);
    msg.setDestinationEntity(35U);
    msg.camid = 240U;
    msg.x = 17875U;
    msg.y = 4380U;

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
    msg.setTimeStamp(0.367920254879);
    msg.setSource(19860U);
    msg.setSourceEntity(19U);
    msg.setDestination(55062U);
    msg.setDestinationEntity(164U);
    msg.camid = 248U;
    msg.x = 35383U;
    msg.y = 21956U;

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
    msg.setTimeStamp(0.719095868006);
    msg.setSource(36263U);
    msg.setSourceEntity(251U);
    msg.setDestination(5307U);
    msg.setDestinationEntity(90U);
    msg.tracking = 117U;
    msg.lat = 0.990725848419;
    msg.lon = 0.236479085382;
    msg.x = 0.306153476537;
    msg.y = 0.334895843032;
    msg.z = 0.878110878813;

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
    msg.setTimeStamp(0.488920911123);
    msg.setSource(10860U);
    msg.setSourceEntity(160U);
    msg.setDestination(61054U);
    msg.setDestinationEntity(161U);
    msg.tracking = 70U;
    msg.lat = 0.286746231265;
    msg.lon = 0.626701601883;
    msg.x = 0.34855778721;
    msg.y = 0.540635860745;
    msg.z = 0.285425671106;

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
    msg.setTimeStamp(0.960690034052);
    msg.setSource(52315U);
    msg.setSourceEntity(181U);
    msg.setDestination(26830U);
    msg.setDestinationEntity(116U);
    msg.tracking = 158U;
    msg.lat = 0.189841802715;
    msg.lon = 0.826991877951;
    msg.x = 0.738626902594;
    msg.y = 0.972414002083;
    msg.z = 0.0497915679324;

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
    msg.setTimeStamp(0.362146610696);
    msg.setSource(52396U);
    msg.setSourceEntity(144U);
    msg.setDestination(22343U);
    msg.setDestinationEntity(251U);
    msg.target.assign("MYQTNXABMMSH");
    msg.lbearing = 0.591498729911;
    msg.lelevation = 0.697236924538;
    msg.bearing = 0.446991735809;
    msg.elevation = 0.100973890362;
    msg.phi = 0.0184064630155;
    msg.theta = 0.550096432638;
    msg.psi = 0.955316089974;
    msg.accuracy = 0.197690167039;

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
    msg.setTimeStamp(0.620148036944);
    msg.setSource(37870U);
    msg.setSourceEntity(16U);
    msg.setDestination(21651U);
    msg.setDestinationEntity(226U);
    msg.target.assign("ZNFVLJTPJDIKHCSMBBTCSTJUKQWWHXFSVUFKHXMSFZERKOKDVHOCUNMGSTVYZOQRODMAPMBEBFKZUEJYGFNAZNFXSYNHRSUUZJGOVAHKRWIIQBREPJJAINQVVBKEDJYIRGGXDGZTVRGLUNDDDNCPOTXTGYUUWAXQWLNMACLRYQTHAXWRAPLBYNOPMILWMCWP");
    msg.lbearing = 0.489441031946;
    msg.lelevation = 0.515273289958;
    msg.bearing = 0.909490660179;
    msg.elevation = 0.524293268295;
    msg.phi = 0.387838885563;
    msg.theta = 0.57914460073;
    msg.psi = 0.49122407264;
    msg.accuracy = 0.260092942046;

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
    msg.setTimeStamp(0.487956200729);
    msg.setSource(4552U);
    msg.setSourceEntity(66U);
    msg.setDestination(43216U);
    msg.setDestinationEntity(248U);
    msg.target.assign("FZTKBFJMXMSOFIQKIYVCDAMLEAPECJQGYEPDFVVUIYIVWDJNKVQTLOWNQZLDASSTAGEKJBCVEFBHOIVPQIMUXXUZALOFPOOMRRSGOENGEJSRCTXKUSJKYRHJCNCRJBSUDOXTYWTXIZINDWXCTKJLZSYGFQPWWNQDUMFELXXJNTRHFYTU");
    msg.lbearing = 0.165057798978;
    msg.lelevation = 0.658500867642;
    msg.bearing = 0.90125447237;
    msg.elevation = 0.274568573148;
    msg.phi = 0.0350722116136;
    msg.theta = 0.703746724824;
    msg.psi = 0.372733596543;
    msg.accuracy = 0.571232096947;

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
    msg.setTimeStamp(0.243276925557);
    msg.setSource(52063U);
    msg.setSourceEntity(21U);
    msg.setDestination(51527U);
    msg.setDestinationEntity(96U);
    msg.target.assign("VXLDOYCCZWQNZYGDIVSGMVEGXRTBAZKJVFOMHMQXEXGWCJIKLRETDCAUFESBISDNISBYSXEGLWTM");
    msg.x = 0.0637487292468;
    msg.y = 0.138735563656;
    msg.z = 0.310388469897;
    msg.n = 0.824729312777;
    msg.e = 0.699813408678;
    msg.d = 0.591252826818;
    msg.phi = 0.0674883576679;
    msg.theta = 0.735649267681;
    msg.psi = 0.630524025839;
    msg.accuracy = 0.595346425117;

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
    msg.setTimeStamp(0.62015455838);
    msg.setSource(64256U);
    msg.setSourceEntity(195U);
    msg.setDestination(50299U);
    msg.setDestinationEntity(179U);
    msg.target.assign("MGNKTFWTVPRCELTNMXWXYSQIFVFDZRGUHFNQQOBQCXXPNDILAAAGVWZQLOOBPVLWUNYLHZFCFLWLIJJDZYHSGTCTMISZOPLDWMHAJECIVVVBSYDRZAOUDVQKYATWKOHSDJFUXUOPMBGBYKQZRJVJBSIPRCAKR");
    msg.x = 0.911662794278;
    msg.y = 0.465895513003;
    msg.z = 0.849762971608;
    msg.n = 0.614879203484;
    msg.e = 0.0147896173024;
    msg.d = 0.484957486072;
    msg.phi = 0.198849493335;
    msg.theta = 0.333778828447;
    msg.psi = 0.554344694711;
    msg.accuracy = 0.0496918032484;

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
    msg.setTimeStamp(0.722121003545);
    msg.setSource(26311U);
    msg.setSourceEntity(122U);
    msg.setDestination(31672U);
    msg.setDestinationEntity(137U);
    msg.target.assign("SQKAFBDCKOIFZMPPUVUTUOWRMNSPXIDSLUUIKXHBGQYJERTTFCJRGIGUMDXYVVDQTYHIFVYOQNXPASVDNZAMZJHRBBZNXBIXBCHXMXVMHJTRMAQXDZO");
    msg.x = 0.77816039899;
    msg.y = 0.849704916087;
    msg.z = 0.0895674456682;
    msg.n = 0.553272705509;
    msg.e = 0.867986071807;
    msg.d = 0.626078317909;
    msg.phi = 0.435786704146;
    msg.theta = 0.719227625604;
    msg.psi = 0.0532509621442;
    msg.accuracy = 0.406408996472;

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
    msg.setTimeStamp(0.283696829839);
    msg.setSource(19953U);
    msg.setSourceEntity(107U);
    msg.setDestination(60120U);
    msg.setDestinationEntity(68U);
    msg.target.assign("VJYXXYSUXGZOCYUCUWWTLDCCVHTVEAZSLFORDHKMTJPRZBFFHNKRQBDVPJLJAHCGOQQQGIIPMCXFMEWOKIEANDXWUUURKMBUTTBXBHWRKWQZQFAFIPDESGNHTRYZNHIRVTWTYDBWEGACLYASGBILUZAKKQZLEENPNQYJMEMJFBFMXIVOMGGPLMKLJOFLTOWNJOAYYNVDSQGRMOCJOAZVIVENSPLNPE");
    msg.lat = 0.644131257959;
    msg.lon = 0.921780409466;
    msg.z_units = 40U;
    msg.z = 0.137884931294;
    msg.accuracy = 0.0258654761047;

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
    msg.setTimeStamp(0.155848862122);
    msg.setSource(34423U);
    msg.setSourceEntity(182U);
    msg.setDestination(47279U);
    msg.setDestinationEntity(42U);
    msg.target.assign("LMAYWLJRPTNXUGZBUAUGTQUVKTZTJONNU");
    msg.lat = 0.215018903327;
    msg.lon = 0.328192479086;
    msg.z_units = 139U;
    msg.z = 0.92661671779;
    msg.accuracy = 0.0415269733338;

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
    msg.setTimeStamp(0.934538377663);
    msg.setSource(54844U);
    msg.setSourceEntity(162U);
    msg.setDestination(24863U);
    msg.setDestinationEntity(130U);
    msg.target.assign("TGFNARUDFLMKZURPWSCVVKFBKAPKQARIXKJSFVOHGVXDLPVCMOEKJIGYMLUNYMHWZWNZEBAQTUISMZCOGCCLTRMTCGOGBHJQLIMDCCQFLJSZOQWOGRBTHWWUKJTBNYUTATVYZJUFZNIUBFSOQITYYDEDUNPOOBPXJXXMWDKNYRDHQLPNADVTSJYHUFQHPAWPHPFSYARC");
    msg.lat = 0.532803321284;
    msg.lon = 0.704851368932;
    msg.z_units = 153U;
    msg.z = 0.693260959565;
    msg.accuracy = 0.253148449693;

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
    msg.setTimeStamp(0.444927602549);
    msg.setSource(54759U);
    msg.setSourceEntity(28U);
    msg.setDestination(64305U);
    msg.setDestinationEntity(111U);
    msg.name.assign("ULPWVOILYNULDBVNIWDKFTJIPFSUOCSFATCVZEINACPHKYMFDQDRUCVMLMZWZCUJNXIHVQHGXXSKFEBNBDPIRDWRXJZZGMQMQSEJEDIPKQHUMTBATWRVHTGFTLRKGKUHQBPERXRFXPUGLKPDGYWAPXKCMXCVVJBDRAZKIVBASJQYRTJCLZSQHSZ");
    msg.lat = 0.0788991904166;
    msg.lon = 0.0726818127369;
    msg.z = 0.165834403182;
    msg.z_units = 163U;

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
    msg.setTimeStamp(0.176870097092);
    msg.setSource(43806U);
    msg.setSourceEntity(71U);
    msg.setDestination(63521U);
    msg.setDestinationEntity(90U);
    msg.name.assign("NOLIYXHSQGLPNWMALTMNKLGYUCKTEIEUQYFWGWOCKVKEUCOEKYRYBLEXGKVRGSDROAFVNHIBXCAVWOFMPGSBJVTVKZZRHTUBPIMWYZRKZTQPSEWYUOHXAXASBDFMCTHRGPJNPJJLFSHDDGWOKECZCHLNYVMPOHSRXVUNTPUWMUI");
    msg.lat = 0.384203779828;
    msg.lon = 0.560109014605;
    msg.z = 0.931758199414;
    msg.z_units = 93U;

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
    msg.setTimeStamp(0.102931785719);
    msg.setSource(62478U);
    msg.setSourceEntity(215U);
    msg.setDestination(50512U);
    msg.setDestinationEntity(34U);
    msg.name.assign("QGNDMCEVPITQDEVMFSJHXVZQCFJKOWQDINYPVZJXUMPZWQYABSNDDRDKLGPBKNBMEWDTXCMFJWEULRZOOVLSZKFNDPQVLQMQXGLJAZWHTEFCRYIRUXHSIRLRHLYUPSMJHBUNNONYOOAAFARHEVTSHHRPLFTWYGXEIZNNQEPMUOYFGBGHEXGUBKARXMIPUFX");
    msg.lat = 0.620268805565;
    msg.lon = 0.965961922688;
    msg.z = 0.292229564622;
    msg.z_units = 45U;

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
    msg.setTimeStamp(0.0642024645537);
    msg.setSource(47133U);
    msg.setSourceEntity(197U);
    msg.setDestination(28387U);
    msg.setDestinationEntity(10U);
    msg.op = 45U;

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
    msg.setTimeStamp(0.409830025944);
    msg.setSource(23109U);
    msg.setSourceEntity(78U);
    msg.setDestination(49083U);
    msg.setDestinationEntity(101U);
    msg.op = 26U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("RYUXXBDEWGEFJLRBMPFBFQXUSLGBBFVGMTISL");
    tmp_msg_0.lat = 0.199659357012;
    tmp_msg_0.lon = 0.00366999144735;
    tmp_msg_0.z = 0.769401303486;
    tmp_msg_0.z_units = 190U;
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
    msg.setTimeStamp(0.505995816601);
    msg.setSource(47203U);
    msg.setSourceEntity(218U);
    msg.setDestination(64515U);
    msg.setDestinationEntity(85U);
    msg.op = 80U;

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
    msg.setTimeStamp(0.284284106226);
    msg.setSource(55673U);
    msg.setSourceEntity(26U);
    msg.setDestination(13668U);
    msg.setDestinationEntity(134U);
    msg.value = 0.0524964332209;
    msg.type = 83U;

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
    msg.setTimeStamp(0.427338635597);
    msg.setSource(38796U);
    msg.setSourceEntity(141U);
    msg.setDestination(42289U);
    msg.setDestinationEntity(202U);
    msg.value = 0.844399845499;
    msg.type = 140U;

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
    msg.setTimeStamp(0.895375160252);
    msg.setSource(13328U);
    msg.setSourceEntity(57U);
    msg.setDestination(8940U);
    msg.setDestinationEntity(210U);
    msg.value = 0.542719758158;
    msg.type = 71U;

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
    msg.setTimeStamp(0.890976806715);
    msg.setSource(25011U);
    msg.setSourceEntity(57U);
    msg.setDestination(16126U);
    msg.setDestinationEntity(132U);
    msg.value = 0.741185743528;

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
    msg.setTimeStamp(0.491373447732);
    msg.setSource(16958U);
    msg.setSourceEntity(56U);
    msg.setDestination(22583U);
    msg.setDestinationEntity(121U);
    msg.value = 0.988290573918;

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
    msg.setTimeStamp(0.197812122979);
    msg.setSource(2521U);
    msg.setSourceEntity(244U);
    msg.setDestination(24452U);
    msg.setDestinationEntity(110U);
    msg.value = 0.974529035456;

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
    msg.setTimeStamp(0.588279853378);
    msg.setSource(17875U);
    msg.setSourceEntity(186U);
    msg.setDestination(43327U);
    msg.setDestinationEntity(121U);
    msg.timestamp_last_service = 0.881134780891;
    msg.time_next_service = 0.921435948855;
    msg.time_motor_next_service = 0.406981435182;
    msg.time_idle_ground = 0.167508064721;
    msg.time_idle_air = 0.50534880189;
    msg.time_idle_water = 0.158856929468;
    msg.time_idle_underwater = 0.957407699831;
    msg.time_idle_unknown = 0.337097697832;
    msg.time_motor_ground = 0.171225845928;
    msg.time_motor_air = 0.869478386547;
    msg.time_motor_water = 0.584656508259;
    msg.time_motor_underwater = 0.660759464972;
    msg.time_motor_unknown = 0.768216715063;
    msg.rpm_min = -29135;
    msg.rpm_max = -18357;
    msg.depth_max = 0.243156398032;

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
    msg.setTimeStamp(0.435880305419);
    msg.setSource(56833U);
    msg.setSourceEntity(145U);
    msg.setDestination(35496U);
    msg.setDestinationEntity(244U);
    msg.timestamp_last_service = 0.0711927510718;
    msg.time_next_service = 0.519832882829;
    msg.time_motor_next_service = 0.468849516588;
    msg.time_idle_ground = 0.412959996837;
    msg.time_idle_air = 0.247971339763;
    msg.time_idle_water = 0.217262022132;
    msg.time_idle_underwater = 0.395121788187;
    msg.time_idle_unknown = 0.450651105673;
    msg.time_motor_ground = 0.232140939457;
    msg.time_motor_air = 0.207371428871;
    msg.time_motor_water = 0.24601308949;
    msg.time_motor_underwater = 0.716013384477;
    msg.time_motor_unknown = 0.704734800307;
    msg.rpm_min = -1668;
    msg.rpm_max = 17900;
    msg.depth_max = 0.977786390517;

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
    msg.setTimeStamp(0.688837485254);
    msg.setSource(35656U);
    msg.setSourceEntity(247U);
    msg.setDestination(31447U);
    msg.setDestinationEntity(100U);
    msg.timestamp_last_service = 0.646694922733;
    msg.time_next_service = 0.0208902394652;
    msg.time_motor_next_service = 0.771785422677;
    msg.time_idle_ground = 0.0642414921439;
    msg.time_idle_air = 0.124513705368;
    msg.time_idle_water = 0.518461679591;
    msg.time_idle_underwater = 0.765594224549;
    msg.time_idle_unknown = 0.0380190374848;
    msg.time_motor_ground = 0.686358092135;
    msg.time_motor_air = 0.659977406411;
    msg.time_motor_water = 0.254437797821;
    msg.time_motor_underwater = 0.140157675751;
    msg.time_motor_unknown = 0.626603295698;
    msg.rpm_min = -18811;
    msg.rpm_max = 7373;
    msg.depth_max = 0.806121745108;

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
    msg.setTimeStamp(0.172501645151);
    msg.setSource(11675U);
    msg.setSourceEntity(204U);
    msg.setDestination(38815U);
    msg.setDestinationEntity(141U);
    msg.severity = 6U;
    msg.text.assign("PCNJOJBJISFGEFKRWDBPXKGKTXABGYIHGTFQMZQOSXYMIVGMPZAEVPPODYLZHTVRKTYQZWEZFLLEBRXPFBVTMSMKWLEONXVYZSWHUERHMAGSRKUSQOJMD");

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
    msg.setTimeStamp(0.584176542695);
    msg.setSource(52309U);
    msg.setSourceEntity(65U);
    msg.setDestination(21110U);
    msg.setDestinationEntity(239U);
    msg.severity = 107U;
    msg.text.assign("FUGGXGXJOEMFJQOKPPMSIQOQXIZQSCNRZUNKIGFAWBAQVLJPFDVULSENPYYOXGWHMDVSYLTCECQBIDETRFZTBMKHVFFAKMLNXXNWAJTEDMRIJIDOOVTFCYCTZCOHAWPZLKLHZOTGHOJUACEXQAPWABZGEZTZEDBKRUHBTJENLPHINALSCUPVXYTBWKNID");

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
    msg.setTimeStamp(0.567910175336);
    msg.setSource(25186U);
    msg.setSourceEntity(6U);
    msg.setDestination(3538U);
    msg.setDestinationEntity(31U);
    msg.severity = 149U;
    msg.text.assign("XSREMTWCRLMLAONVCIJQIRVGZYEHPQEJJQPXCMKUXHNJTYGNPETWOFTKYDMAEZEAIFVKPBYLFGNPZJIHIESQNUZEOFHRVUNOADRXNITKFMCRKEBVGDC");

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
    msg.setTimeStamp(0.791093528622);
    msg.setSource(8386U);
    msg.setSourceEntity(175U);
    msg.setDestination(26859U);
    msg.setDestinationEntity(162U);
    msg.channel = 120;
    msg.value = -1831944924;
    msg.gain = 115U;

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
    msg.setTimeStamp(0.271465531244);
    msg.setSource(63116U);
    msg.setSourceEntity(219U);
    msg.setDestination(45711U);
    msg.setDestinationEntity(168U);
    msg.channel = 48;
    msg.value = 718204239;
    msg.gain = 16U;

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
    msg.setTimeStamp(0.874497138519);
    msg.setSource(7854U);
    msg.setSourceEntity(146U);
    msg.setDestination(46509U);
    msg.setDestinationEntity(188U);
    msg.channel = 71;
    msg.value = -1923751235;
    msg.gain = 131U;

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
    msg.setTimeStamp(0.416339578045);
    msg.setSource(64543U);
    msg.setSourceEntity(195U);
    msg.setDestination(10684U);
    msg.setDestinationEntity(61U);
    msg.plan_id.assign("XBTOGVVHKOCKJBXGNAXJFNVBZDSDGXBDKRBBQAMFUOGPCLOYSYSSBXUFMRMMOTIVJHGAVLIRPSWPEPJFLSXAEUJZLOTHUVWZENCXIFVI");
    IMC::TemporalAction tmp_msg_0;
    tmp_msg_0.action_id.assign("NALJRGHMVALPDAUPJWSGIKGZFJIURKBNSHEZYVZRMWVFUSQTVCEKDYTHNSVQFQTMTDQSHHWDYOULGPXDLYKJCIGMTGYLRUXCTNZDJNSXBOWQGQIVBHCBCCGBIVWYMAWNJPRPUHRBJAWSKUEIRGXHYOXJKZRTAIOXQCLMVBQCEJPTBYEOVNMRFFXDLWVYKDXMYPAFZKZBNDXOFFAPFSPFOOIOEACZEOEXMASKHGPEDUWN");
    tmp_msg_0.system_id = 20647U;
    tmp_msg_0.status = 120U;
    tmp_msg_0.start_time = 0.648391640113;
    tmp_msg_0.duration = 0.440599470665;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("CTARNGOZMVZXGHGPMTLNUTHQLMWPKXFEOZBWKINIZPSGACAUBFHKVSGDAQCGIUNWXKJYAHKURXQZQTUIAFYQWIUROUQJSWZLVYWGMKKKSNKMEJZMMIISSCERJOUIFYFVBYHDPPMNSJONWBTQKYLEPUCDHDGZJHORV");
    tmp_tmp_msg_0_0.description.assign("JXXKBBGJOZLOMKZGOFVTTIPYLCMYJFWBGJYXSEYCEFEQZGUCIODZQLRYAXVCPEGJHWNHRAICLSBGYEAKQYREUKIUABWARJPYFJKVXJLSQOEAQLDHKHAQSIRZDWQDOWMDJONWHTSTMGFSTNOQFEDUXWSTPXRVUFGBGCPMNULWLZFQIYENMTIKDNXSVUETZHNMCHCQYHKCJDRTFRVUVDLXWKSMZAONINOMPPBPTM");
    tmp_tmp_msg_0_0.vnamespace.assign("HNIHWZFCBUGFBEZEBEJWUIAIMKHHCMOTPQXEBOZXTLEVFCPJUUAOAFXVCUOBNMHDKADXDLVGSJSFPUUYFCYIVDXBBKAVWFAWKQXZWNRUPEHDNRQJHJZGVPQKPLMVOSTLKISMRLMQETWXQQZMYGSVNMIWPSYZIKPGARLKXLTOOIHNDHFMSYTCUDYSGJCYLUMSAIJRZQKEDIDZJCQARPFNJDOWW");
    tmp_tmp_msg_0_0.start_man_id.assign("IMLOBNNAELHYRWVDCCVBRLYDZVQJZVLHDSBBMIRZAROJANOADHGKXYEXIMQFRBAUJTYQKPUZGKDOTFIVBGLCXONGBEVZXZANVSDKIZUQPWACQMXFSAEKMXQFTUSVXWYTJWLIDWWQPLQETGPOXKMTWIJFNXUVKIPMVGGLNSWKUBKJQCRFTPNNRSFZHQFKUNSSTZJAODMYCTEFRCOHIBCCJEWMEJRHCUU");
    IMC::PlanTransition tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.source_man.assign("ALGIKVBMVTHWCEZFMSTBEAGPHMEWDGLRGHQQGCYXFGFLOKMXUKNIYDNPDWWXDYFNYAPVBSQUCZURKZMEYIVOCD");
    tmp_tmp_tmp_msg_0_0_0.dest_man.assign("BUVJLSSGLASXIRHIOXPYVTQYSLOMMLTJSDWRYYCCIONEWJVKFCGDIBDRHPJZOCELXQKQJEZWBMFKMPOEAWPZKLDFLCTERMNMKWH");
    tmp_tmp_tmp_msg_0_0_0.conditions.assign("WUVREDIRWEHQMYKCFPUBGQSDCMZQWJTAXRJKRSYAGFHRWOSYESAUWVVOBXJTGRHVLAFWXFDMUEMRHSCFYYYPUFNOOPKPB");
    IMC::RemoteSensorInfo tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.id.assign("TPGTLOXYGMHZFOLCEWWWMUIIQQOVOSPTJAADBWYIOEREQIBRADMEDNZCBWGAUGSQYLLCHLBVDNTUKCGWZEJSJZHOWQNWDOYSOXCMLXPCIGUYQNWHKHVFDFPPJSEHYQLFSXXYOHVYPSSJVRPNUMEGJUPAFDGVZSZFNXR");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.sensor_class.assign("HUVRYOLKFDINREJVYMMWISQMKNWCHESDVSTEEXBRQFYXWUCHVGJVWNKFYCJXLBESWGPTIRARWDWLMDJRNWAJUVPZNFOPHQBJYYJSUBEAHFGNQQTYKYIZGUFGAMODCTCKPXAJZMXFWIXVBXODXSZLPDEZKLABGIFKYZAGGDZSQNCOOATBVJXBUITGPOPBOLNQMIQKOKQHKDDTFCPRVFLHWAYHZBJUPU");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.505153979787;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.57797253575;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.alt = 0.122606569839;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.heading = 0.697367110301;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.data.assign("EMQHALIOSJABCSDLUOSPBDQUXPCKLGMPNZOFZMQBGCWWVZOJZWPEXMPFLZGXYFAOICUVVWXUNOIGUZWFVFMJASVNXOMEYCKRFCNCRTINGAURNDRBYJNJIKGYQAUEZWIGJVFZWTDWLTKXDXQEJNLQZLIHKVMUTXCKDDTCDEIVUTOHJWQSSPE");
    tmp_tmp_tmp_msg_0_0_0.actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.transitions.push_back(tmp_tmp_tmp_msg_0_0_0);
    IMC::SetControlSurfaceDeflection tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.id = 214U;
    tmp_tmp_tmp_msg_0_0_1.angle = 0.140624753389;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.action.set(tmp_tmp_msg_0_0);
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.369719947655);
    msg.setSource(14494U);
    msg.setSourceEntity(110U);
    msg.setDestination(54829U);
    msg.setDestinationEntity(48U);
    msg.plan_id.assign("SMMFKBDZVBCJDEVZPJZWBXYYQXKGEMXGXSFSILBYQFFFRDAOYLMOSWUCCTRGLSAHGOUVOAVBIVYPCIUPEFABBHQNLSARNYFVGQKCRQHTSPCAHEGKWRATRQEMIGETDDUGUWZHVXUPZLQCGIOYKJENCVEJQDZPMULZTKHW");

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
    msg.setTimeStamp(0.983160319655);
    msg.setSource(46447U);
    msg.setSourceEntity(210U);
    msg.setDestination(26089U);
    msg.setDestinationEntity(88U);
    msg.plan_id.assign("WASDSKLSRRYRLPPKBSEAUJYSSXZZMKNTNJJCCPTUZDQOJYEPZRTYJIUBKFGXGCOAZTABSSEDLHYQADPYXXYEVRRRLUNFAFVBUUAKEOUGCN");
    IMC::TemporalAction tmp_msg_0;
    tmp_msg_0.action_id.assign("IKIVNHKJUSEYBOGSUKOMLNQJKUJLRUCAQRDTORNPZRGWPCXBQJPACPZFYZDDVAFLYJEQPMAQYOTVOJALTMRMCZESQNDHLWPPVHGMWVWQOCYLSXWJATNBWSPIXXXNBILHNDDRQFKBHFEODEKKCGNWFMNBUZYRCIZEOAIVSCSCBQBDWYYFXIMAWYUMXUIIFNQHCUVDPUFRAHGETZLXTHXAPZMBRIKLJVTJ");
    tmp_msg_0.system_id = 17061U;
    tmp_msg_0.status = 190U;
    tmp_msg_0.start_time = 0.954965129869;
    tmp_msg_0.duration = 0.157014331869;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("TZPTKUSOWOOCHXQOMOZCPAMXSSDXNUERMBITLBULQEBJJRIYNFVDPWFDTVIYEOXJMKIXXCHSJGUAVWQVSEDTLWPGPHCCUMIMEHIHOWUXWXCHSBCQYRGATGZANWZJGIUQZMGVLZWVATKVRYUJRENHQKAKKBQIIWPDFHPDSOGLZHBKPNDZYAFUWOLAYEQFRDFKYVBVRSENMADNCPFSLLFTEGXFRIOCGYUDEQAKHBNYLJZXPMTCJL");
    tmp_tmp_msg_0_0.description.assign("XAKHBCGOBOUF");
    tmp_tmp_msg_0_0.vnamespace.assign("MWKAPHJBCLZJQSAWBQMWCSVAVYZDBCHKTHINUWUTNPAGNHCPWXIJEBFVRNFTUWRDBBGYEIYKOOJKUEZRRAOXIALABZVHKYFSWJRJLDODNMDYDBKDIGSRPXESTZURDUJHKFSJWMRXHE");
    IMC::PlanVariable tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("LZJMXSJOIKFCTPZTFUYNSKFSHNMVLQMVKVP");
    tmp_tmp_tmp_msg_0_0_0.value.assign("SPLVQHHNXGTPVSIMOWTBZCHXGOVSELOYREYTCDTTYGNVMQZBQLPKEDBUNIOKFDRKAYUJJSADQCZZNAS");
    tmp_tmp_tmp_msg_0_0_0.type = 125U;
    tmp_tmp_tmp_msg_0_0_0.access = 165U;
    tmp_tmp_msg_0_0.variables.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_man_id.assign("SNMYVKAUUBWPPOHPFOSSFZJRLTWBIVBSSGNDIRTJTFGILYZLEVTKUUDDWOWVNFCCCLABWRRDLFDCYIBHSVBMFJMMQYQAENUYPQMEZQXYROAEZYEBYZGJOZSHKJKJIKAEPNHUKOTGIQWXBGYVXLTPCT");
    tmp_msg_0.action.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.633355774164);
    msg.setSource(33780U);
    msg.setSourceEntity(5U);
    msg.setDestination(30469U);
    msg.setDestinationEntity(79U);
    msg.action_id.assign("GBKULTWTRBPULZGTQEEFPYFTLIKGCVFQNZGXTATICGJJGTWEKZAEVHRFFJCGKAUNDYDNZZJPWNMRSHQYTYSKIIBHLRCSBQJOYVJIFEQDSASCREMRFKG");
    msg.system_id = 39208U;
    msg.status = 82U;
    msg.start_time = 0.980559620694;
    msg.duration = 0.63629182914;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FVLBKOIZFLMHRGABZZZMMRGJE");
    tmp_msg_0.description.assign("ZIQCDAHFCAETBJXZCVKJVQBHMSRZQDTPEQDHMOCHKPTBXNGSLQNUGJSBXTOPIIYLWKTRPAPNGULJVYHIENIDTDBAVIUOSSWRWILRZSUQKBJQERXGFZYDFOLGCYFKBPKMNGXJUBYYJROZIEQDMCPJVKONWHEOYZVHDDZWAVRRBEGSCAALWXFAOQUMLTAEHHCZPNVSIEXRGYMPGXZWUXFSTLGJFEOYKK");
    tmp_msg_0.vnamespace.assign("ZVVZLIABUNTVNNGMZCYBRGILNIWZHADHRAANKCPOPCPDJMYEJBJONIODTWZWAUNECIKLMFNYBESSXOYOFAPQZDGXSTHFVLKWECQMWVVVMFJKBXQIXGKGUDEGGWKSEMSRWDXUELLQHUFFWMURODJYHVUKIZHSLXBBOEMLQTJYXQLEPYNZQHODVJCJPCSRBTCDU");
    tmp_msg_0.start_man_id.assign("ZZDDAJSQDOJSBWPVIODJWCMJATTRPPCWPVGLIKPOQAKUZIQGDGHWSFUWCVUPQBJVWCPXKQNCIUWEONJRZRSFZDGBCSRYULWOVKIRKEDOEAVZYEIYDMHPMOXNMGSFJKAZKKXTMQZVCTHMMNUZHLFXMXKHTYIEHRICBFGBNBLXQLRGSASLDQXIUHXWUWBZMHYAPEFVVFLTXEODOISKFMGFETNQANXNJAYHEPYRENCBVOARJLLGYRTFHSBJ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("XUDHVQBJLWJGMEOZBSRGTLFQJRAKAPWSPRLPUHGMUNSKNFZARVI");
    IMC::ScheduledGoto tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.arrival_time = 0.086383545151;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.141388834696;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.168715921554;
    tmp_tmp_tmp_msg_0_0_0.z = 0.904637241682;
    tmp_tmp_tmp_msg_0_0_0.z_units = 71U;
    tmp_tmp_tmp_msg_0_0_0.travel_z = 0.625855875377;
    tmp_tmp_tmp_msg_0_0_0.travel_z_units = 45U;
    tmp_tmp_tmp_msg_0_0_0.delayed = 206U;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::AlignmentState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.state = 31U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::GetParametersXml tmp_tmp_msg_0_1;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::EntityMonitoringState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.mcount = 123U;
    tmp_tmp_msg_0_2.mnames.assign("EHLOTXYSVPFGYRBBLMVKTEXASEQILJSJBDOAIVVYSNWMCKQKLYYADMKFXPINWSDYIOQCGUAZQSPGQFSOSODQWHMOEIXBGLFKQNEQHUMLVGBNNRDVNHIPIDXEYFRMSORFZKLWAMCBUXDPHKWCEGZVWTUPHLCZTVYPCTFTBZCUJFHQNVXMXZBDAROHCIJSZXPWUAFRUNJUPBRHYQATJELNDIUPAKCGGUZZFWGVIWJKRLXMENHTRKRBJCEA");
    tmp_tmp_msg_0_2.ecount = 209U;
    tmp_tmp_msg_0_2.enames.assign("BXZWOUMCPTAABKISVFMZZOFJKLJMRPOPBAORFLGOGIFYJXLPQLCHTDEOHSULXATUTJJQQBVGXHUAEECPDKLZXKXTDEDBSRYYVSILDWDNNLWIACZCESRYGPHVUIVFCQNHWIBNJUDMKGQIYGEHMZVLKVWMFBOSTFNQFVBARZYNUSADPRCXDPHJGCYAGXJSRIGOPK");
    tmp_tmp_msg_0_2.ccount = 151U;
    tmp_tmp_msg_0_2.cnames.assign("QKPZXLJAPIRPAUTNBIFBVKWBHEODQYIUASGRDZPRKIQHVFPILDUYTAXTJPVVPZVNDMSSDIGWJHUZLESKGBVXXOCKIXGQRHLFCQYTSXLLASGNYCPDXFKJNHFVQOZUTPWCMNERBCCWDNXKRNHCVQQUQEAKZRAWMFMMBETYEMXJPSBLRCFAWJNFEQOEJWOMG");
    tmp_tmp_msg_0_2.last_error.assign("BSQMHJVRSUIFEJRYGMKAAZABTCCZSCLRRTRJYQDZQXNAPXNCTUPJZNNXGCAILLJDQEBPDBNOCQCNWVPMGELPVKWADSAIXWKYFUSFBXILRNEKWFURORXPOLHDDSVVYMOHTVLXZBYGEFTNPDTMUORAPPJTVLBCOHZHKYUDIOFQEQUEZKIZGSJGLGFLDQI");
    tmp_tmp_msg_0_2.last_error_time = 0.885799036199;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.action.set(tmp_msg_0);

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
    msg.setTimeStamp(0.902706548058);
    msg.setSource(6343U);
    msg.setSourceEntity(102U);
    msg.setDestination(14222U);
    msg.setDestinationEntity(151U);
    msg.action_id.assign("DZLEMXMKAXRODGRVBYDYBJQFWUEGTFQJKRXUWOECMCFKOVMOFPVVLDAVPOSTXHTIHOZBAQYEHGSIKSWCPMILPVZCORBETVBJABJUQLIYAKDZKQUYYFDWYSARLUADTXZSMZQFPSAQKDGNIUUHKCHPLFMIIZMWBUFUXHRGTSEBBWKDVNEQYNPJWOXEXTNILHVMTZWFRSCHVHTZLFSNCXCYJG");
    msg.system_id = 34433U;
    msg.status = 130U;
    msg.start_time = 0.343791146333;
    msg.duration = 0.667179479046;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WZBZBTMERZUBHUHYVWRKRPOZRHPXUFZDTHCKYALWETHOVOOIXLRVGQKPYBHSONITKEZWJSUNZQVAHACAGYTNXIGXYVVBCTGUNDLMKBEKPQS");
    tmp_msg_0.description.assign("DWSVHHQQDXUJJEOYGFULVUPEBCDSERWGQSDKRNOCEVKVJRTTOLQRTZFQCYHWPWWCYDXMQTJNJCBVHMVLFBKKTGEJXHKDLZBJQANXYLZMKANUOSZUTKHGLMAMTTIYPOIGBPRATFMNDNNYZARPNXOVMH");
    tmp_msg_0.vnamespace.assign("CESRAIPHTVTHTKQYMRVEFTXNDVJKEDHXPBPPYISCBQNMWGMHXURBTZYROOIKXHYUAELTDEYPKUGUTJKKWCOEEAKWXNUAQPFZLIXEOXTKGGQJZSMVMLGRVMIJKNQYBRSJCKOWJMLGVVZOZBSYFAGGQHIQBVFAISFBDLODNIXUEPVAJMFWNQJOCPTNPTSFVFQFLHMRSFORGSZ");
    tmp_msg_0.start_man_id.assign("HVALQRQETIMSSSFZAWQSGHMEFCBGZGIGNXAYYNGQUFJNKEMUHLGWMBKPZJTOOPPDQTCNNVVRJOMZTDFHHHVBDGMSCHQXHXYKKRWGPWOLTBXDFQIACREJBDEVAKZORPPABRNLUKHJZEGRUIUOZBTFTAFKWCYMWUIUPZQYXRZNNRKCVWPXIQVSGVTMKWONYCWBCOLMJMJFYTVEXSBULCLSK");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("LYIVGRGNADSFAICRYTHYKUTXAZRMURIMKEXYUPWIDJVNCYKRPOHFALWMNLPCUTODCULVVHFAWPPRQYIGESTRM");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.35810231133;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.934844999993;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.555699278195;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 223U;
    tmp_tmp_tmp_msg_0_0_0.duration = 39319U;
    tmp_tmp_tmp_msg_0_0_0.sys_a = 40174U;
    tmp_tmp_tmp_msg_0_0_0.sys_b = 47826U;
    tmp_tmp_tmp_msg_0_0_0.move_threshold = 0.209894233185;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("RHXZVMMCAJQREOBHYDHQMCQPUYQGRGPOMUGVMLVHUININWCTVORZNSLOAFPFPNFZZWXAJZWJSFASCESUDFTGXDDWSJHAWVTSCVHOXJBIJSZLDNEOAXKXBDIKMJTPKKQXSMKKZJVQCYHBGBVHDESDTAITJGYZWQLQUIRZMBHSBPLYECFGNCTWTAZUYJFYIIPBAXUFKWVARTPVOOGUEMLNDYHFYL");
    tmp_tmp_msg_0_1.dest_man.assign("HFYNPHGDJKHCGKRS");
    tmp_tmp_msg_0_1.conditions.assign("HIMULZJTQRMAIMJCRNWSKOZHFIWMJYQWYUSIXTGJYOWCGFGSNFXDAEIUQVRGKXAOHWDS");
    IMC::DesiredPitch tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.value = 0.159699144537;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::MapPoint tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.447831431079;
    tmp_tmp_msg_0_2.lon = 0.618491829566;
    tmp_tmp_msg_0_2.alt = 0.456406334163;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::DesiredThrottle tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.546426266848;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
    msg.action.set(tmp_msg_0);

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
    msg.setTimeStamp(0.856982115035);
    msg.setSource(57530U);
    msg.setSourceEntity(14U);
    msg.setDestination(56945U);
    msg.setDestinationEntity(162U);
    msg.action_id.assign("VPHULMCNDQBRUJJIFIIKSEBTENGJHAGFTEHWUSNHPZXZZWBNCPLVQGMSKCZOINXYCMIEEAWCFRVQGWUFYXOJVUEZUGLFRYBVSUNZONKGTYOESJDDPKGMNOWTKHKBLCXQFTPCAAHFVDIMPYWOWOYPAWSLZAIJESGORYXUCEHIDRRMRGKYHRUQZAVTQJRTTKILXCKQBHFSLOQPZDFEJXXLNCDNSLBGWBPJFKPAMMX");
    msg.system_id = 30056U;
    msg.status = 163U;
    msg.start_time = 0.790554610251;
    msg.duration = 0.587941254856;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BQXZXZGPWCHZRORZEEUCIIKRALWXMIONTDWBITXOKUOMDKNMWSNKSQTXMDJCEFAVOVESLPQDQRRSQQNJSFDUVJLTUCHGAYWQOTEHVCXBKECLMYF");
    tmp_msg_0.description.assign("EPSHYLFNIKRFWAJZRHDMMDMDFSVCNUFQDRJFTYLLHICTVGUTHDMVZCIKPUOVOWUZXNHBHUSUKPHJFVEYNECFJONXYQKELGLMQUETNIIOZZMRDSDDPZHGGATCKVBMYEBQPRAKQBHESYRGJCXIQWAMTBOLAFXSXRLGKGBVSKYKSWENXZWXJSQOVQGNOAPGYNRNTIPAYJJEBPBOVEGIIOBZMXFRPARQBQLUDTTXJFIOZUSDAWAHCVKUXWC");
    tmp_msg_0.vnamespace.assign("YDNQXGFQAPEMIRVYNCSTHCYVTIZZAJVTKEHZQMEPBLNBKWJIMFYCRALRJN");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EPJOJPWJUTZJZOTJYZLFIMDJURSFSMTNJQXBVKMEVTIXALUDRUUQFXSIHYMBKDKNDEWPAPHDSSYDRBTCZGGHWHOGYNSNMFMRCNEVLVWBSGZANAKIQPQQFRBIZMGTEEBZLVGIOPSIHIKQNWCUVCCRLKFPXHONLQYLZEQFTKPCXGZPRRVAZLHFXWHWXNOBQTEVAYQJTLCDDVAWUCBKOJD");
    tmp_tmp_msg_0_0.value.assign("CYJYEIMPBODCXKTSWTIWFMTOOVHGAIBUVZWLPNFDDDGTMBRUOJKGRWPZHIJQMWQTJZCBSRFFXUKNAPQNEHZAGSIOAMCXLEAATSQPBOJTMPYMVZPVLHNOSLXVQBEISKNKZBLMRQSOJDPEKNLGRQHCNIWKUBQCDYXNNVZRLRDIZDVLUARYTGSYXSFXPDGIVYWKUGJKACFBLWJJMU");
    tmp_tmp_msg_0_0.type = 155U;
    tmp_tmp_msg_0_0.access = 219U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("JAKOWAOUHEXEYBVTKZAVBNWHIKYYZDMUGRQOWWDKCBLYXDBLKVSRUOXZQVZYIXAMCKYUWYFAHKATBTNMJCSPAHVJMCZUUFTWEQSCPHNQVNOXRPBUTMNCLMOIWJTIQVXJNAQBGETEPCYGWDKZSLFGLZNEFPWRIEYVFFZBGCLNHRRGTSDLQHYJIEQSHDFQPOLCJPBIRDGJA");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("MIEVWHLKKMVJQLTYTRQYSSRPZFSBVLZKQSBWRHUGGDINACWNFPXQPUJQAQIEEANHFBGFXJAKUIKVDUEEHFAXWWHRUAVBSGRPLTUZOZBJWYJMDTZNTMCLBSANWPEQKJZNEIUOHKZMLOIADRTRDMA");
    tmp_tmp_msg_0_1.dest_man.assign("AKOWEPPZGRSTOUQAXTAYRUBDGZQXXIBLVPIXMBRYLTLAUTYKNQTSWHQXGWSINDZFXLMMKIDPAUGJCNFCABYJPZZZBGBMSGMQQRGMWCYIZJRVDRSQADVETVHBSJKEWFZAEAJUVDNPZADYDKJNHOPIXFXQHXDNCUMBESXKJWHWNONLOKYYEOVJYKGREIGPHOVSRCCIHHJHRFCU");
    tmp_tmp_msg_0_1.conditions.assign("WGQZUBJIMGQNYWKVPORABYLTWPNEMLRGLHDQMSMPRONIYFNBKUISLFVXBHHWNZIGHJKUBLRASEZDOWDPMJGVIZPEAGJPBVGMDROPNIDLCHVXWFSDCIRNCCAZK");
    IMC::Current tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.value = 0.0757574282271;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::TrajectoryPoint tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.x = 0.596406314006;
    tmp_tmp_msg_0_2.y = 0.820337622186;
    tmp_tmp_msg_0_2.z = 0.852592412286;
    tmp_tmp_msg_0_2.t = 0.742660529168;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.action.set(tmp_msg_0);

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
    msg.setTimeStamp(0.929006138326);
    msg.setSource(56074U);
    msg.setSourceEntity(169U);
    msg.setDestination(8245U);
    msg.setDestinationEntity(197U);
    msg.plan_id.assign("VJOAMYHLTQRWUSMTCRSWNKDNZUIYOAUSCVYBDNJGXYFMQRIODTLNLWJHZWXORUWMGLHXFCMQCRAIFZFGQZHKSAFMEKSMUAGJNTPGFRCQCVRFGATSMYZFOTJHLEWQXVBGKWEFBILBKKBCTSPYVFIBSURWDVHHILZJXPPGVGBKNYIDEULOZXD");

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
    msg.setTimeStamp(0.592558066606);
    msg.setSource(42604U);
    msg.setSourceEntity(196U);
    msg.setDestination(21879U);
    msg.setDestinationEntity(129U);
    msg.plan_id.assign("FKCYBXRDNRZEPABTTLMUEMRDSXYGPPGDNJEAKMKHBDRDPBGZZGHALLTXFXA");

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
    msg.setTimeStamp(0.277877241824);
    msg.setSource(11797U);
    msg.setSourceEntity(198U);
    msg.setDestination(61055U);
    msg.setDestinationEntity(86U);
    msg.plan_id.assign("VKTOWYAHRPWLV");

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

  return test.getReturnValue();
}
