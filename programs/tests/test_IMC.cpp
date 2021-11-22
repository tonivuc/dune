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
// IMC XML MD5: 9ae866339171f93f5a8942d40d26086a                            *
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
    msg.setTimeStamp(0.691176221893);
    msg.setSource(28842U);
    msg.setSourceEntity(229U);
    msg.setDestination(45298U);
    msg.setDestinationEntity(197U);
    msg.state = 213U;
    msg.flags = 76U;
    msg.description.assign("GNUGAKBJRFFROUDPZPJUKGWHFHXVIXCLEKZLVOAODWRTSPAYZDUORLMSCZKQBIGMNCNXYRQCMRKJENLGYSNEMWEQAOMBKTTFEFMTZYBPQGYSHMRDMQXKPBOXLYXQKQCBTDIFHFSQWNNIWNXFJXFVUGUTJC");

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
    msg.setTimeStamp(0.327589486611);
    msg.setSource(37901U);
    msg.setSourceEntity(131U);
    msg.setDestination(23471U);
    msg.setDestinationEntity(33U);
    msg.state = 14U;
    msg.flags = 137U;
    msg.description.assign("CUVOSJJHSVEWQCWLGLKYKUHAVTNQVXUKPXTDBTFIWGDZPHOEIFFDBSNFSWBWDMPLJPKHMUYQIPEVNVAQYJMPPZARZXNHZRSAYPLDWKNXYDCBEOCSAELYVLUQ");

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
    msg.setTimeStamp(0.177047419482);
    msg.setSource(37608U);
    msg.setSourceEntity(242U);
    msg.setDestination(8159U);
    msg.setDestinationEntity(213U);
    msg.state = 15U;
    msg.flags = 34U;
    msg.description.assign("BVWSUSUSSWQMPRUZJTPRRDWWELRIACTRZTSPXBVABYXWHVNVSQMTEPUJJEAATKVXEZXMOUSNMZXAPJGWCTFOVOOKQIKFUPB");

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
    msg.setTimeStamp(0.517455751444);
    msg.setSource(24629U);
    msg.setSourceEntity(167U);
    msg.setDestination(56343U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.706419841636);
    msg.setSource(8905U);
    msg.setSourceEntity(192U);
    msg.setDestination(2404U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.549031412758);
    msg.setSource(20366U);
    msg.setSourceEntity(211U);
    msg.setDestination(22430U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.251225810349);
    msg.setSource(22581U);
    msg.setSourceEntity(236U);
    msg.setDestination(8216U);
    msg.setDestinationEntity(132U);
    msg.id = 3U;
    msg.label.assign("WOYRVCPVJTPYNYOZOYMVZNOLQAGNWV");
    msg.component.assign("IKDBVNFTQNYSQRHPCCKACXOQLIFFFYJAIEMWDXBPWUVUQGMJOUJYPBZGANCZJKQSRHRONSTLRSUQGIMVEYNSXCFZGUFHBEOXXTOSIYLXVEGFTBAPRJZAQIWLJGYDWOLCKCECVRHHINXTZVEEVSRMXSOMISUDDWBKALXFHDRQEJUKZDEPTCWMFOQMKIDGWPPOZHLFQPRMWBALYDNUYYPBEKDIUNMVZZHKAJ");
    msg.act_time = 14988U;
    msg.deact_time = 28897U;

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
    msg.setTimeStamp(0.950902879993);
    msg.setSource(55184U);
    msg.setSourceEntity(148U);
    msg.setDestination(53854U);
    msg.setDestinationEntity(72U);
    msg.id = 6U;
    msg.label.assign("XUQQWMBFBLEUQQCSJDOKPRZCERDUJZWYNYUMQFRIWXCGEDVRNVYTDSDUHVZNNIMQPXUHOQDACGAKHWWHNHBUODFKVMOXYJBEMUGKAOCFULTBWUPDHJZNGOBFFAXISEEYHGSJICCPVLATJDWTHTFGYYLCEZDLJPWKMRMBITRROIVXKTPJJKPEV");
    msg.component.assign("KXMTICLQKLJUNDPBOXICZHGLMQDBYYNLDFZMSUTNKHZOTLHUYPOGQUHRBESEPWBNESRUGOWSZSUVJDAZDGICFTZPYCXVTZHEKAZQITGMFBCXE");
    msg.act_time = 55427U;
    msg.deact_time = 61928U;

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
    msg.setTimeStamp(0.150884992028);
    msg.setSource(9592U);
    msg.setSourceEntity(24U);
    msg.setDestination(21991U);
    msg.setDestinationEntity(15U);
    msg.id = 174U;
    msg.label.assign("HADPRISLKXERCFHKWHALZHEXDXKNZMQJJZLUFZHPQXQMDUYUQSPTMPVUGCCZGBYNIYZSGPJHOGRSCNWWDMCNHUYUKPWRGYAXKAJ");
    msg.component.assign("XZUQZXOYRSDCZYDUHFKRKWIUHAKYIOLFESKTGHMZSVRNIVBOTPAXGDCANHHEGOQUPNJRACDDPARIVPSXTHCLQNMQYAFLKJPTNOVUGUMTLWZCHBGTOIPERTXJBUXDGDFMJEKXBKEYFPYQZMQIXBAVYSBSMFCWNNTWVOFWQMDXMKNKJHJVDITQZUUNZQLASCVIOVFTWECOWSLJEYXSBMGVFWRRUWFRYHRIPBLEI");
    msg.act_time = 9870U;
    msg.deact_time = 31233U;

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
    msg.setTimeStamp(0.255621433731);
    msg.setSource(57120U);
    msg.setSourceEntity(35U);
    msg.setDestination(1678U);
    msg.setDestinationEntity(141U);
    msg.id = 84U;

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
    msg.setTimeStamp(0.653484053225);
    msg.setSource(52746U);
    msg.setSourceEntity(177U);
    msg.setDestination(18838U);
    msg.setDestinationEntity(93U);
    msg.id = 104U;

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
    msg.setTimeStamp(0.385964249942);
    msg.setSource(15472U);
    msg.setSourceEntity(189U);
    msg.setDestination(32189U);
    msg.setDestinationEntity(90U);
    msg.id = 245U;

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
    msg.setTimeStamp(0.592764538581);
    msg.setSource(22504U);
    msg.setSourceEntity(81U);
    msg.setDestination(46066U);
    msg.setDestinationEntity(123U);
    msg.op = 121U;
    msg.list.assign("EKBTLFCBRRMFMZOZCNUQJZLQQKTOJLIGHTANAAIXAITZDHNWFNAJLJKXVXEIKRICBGNCOKYUQXDWICGGMMHYVIUPPLJIGCSEMGKBFDGXVIDNOPUWBVCRFLHYZLZRBXAUUFPZSOHPRUSFNAKUTVRDYJTDTBYHSFJVWTOEEHTCWFGSXQBNOZPWSJAZIKSBMYVVSYVOHMPEMOJSYVCKQT");

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
    msg.setTimeStamp(0.532063887832);
    msg.setSource(17959U);
    msg.setSourceEntity(55U);
    msg.setDestination(48347U);
    msg.setDestinationEntity(195U);
    msg.op = 217U;
    msg.list.assign("KZLTHQINQNJHXIOGXFCMVSEQHNJLDVQKGOMZKPANDMZVBDYRFYKZCKCSSSJGBDGIEQZOWORPAAGUHIJYTHFHFJP");

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
    msg.setTimeStamp(0.874486571258);
    msg.setSource(40409U);
    msg.setSourceEntity(164U);
    msg.setDestination(63996U);
    msg.setDestinationEntity(203U);
    msg.op = 2U;
    msg.list.assign("NHBXHWIGDUTYOQKOGXXLDZPCEVCWEYUCZALKAKKPBHPCNLPGVUOPCGUFJYYNLEXTVSOENPVPTFTSJFSFMAABZJNCSOSZCJZQPUKBWBIMLAWCLUJDBEBWOTDGGSFAVX");

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
    msg.setTimeStamp(0.264780597048);
    msg.setSource(14726U);
    msg.setSourceEntity(31U);
    msg.setDestination(31482U);
    msg.setDestinationEntity(35U);
    msg.value = 234U;

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
    msg.setTimeStamp(0.282026389469);
    msg.setSource(15834U);
    msg.setSourceEntity(29U);
    msg.setDestination(41025U);
    msg.setDestinationEntity(72U);
    msg.value = 224U;

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
    msg.setTimeStamp(0.0622017863744);
    msg.setSource(59863U);
    msg.setSourceEntity(68U);
    msg.setDestination(4578U);
    msg.setDestinationEntity(69U);
    msg.value = 38U;

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
    msg.setTimeStamp(0.385210931243);
    msg.setSource(54787U);
    msg.setSourceEntity(85U);
    msg.setDestination(25470U);
    msg.setDestinationEntity(136U);
    msg.consumer.assign("UGTDJQBCORBRFRJZSUCLRF");
    msg.message_id = 4594U;

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
    msg.setTimeStamp(0.603208185911);
    msg.setSource(64027U);
    msg.setSourceEntity(103U);
    msg.setDestination(33381U);
    msg.setDestinationEntity(243U);
    msg.consumer.assign("JJHUECYDVPESOFNLTCBRULGGKKWKUWRHZTMHRRDYJVIFCUMLCUSMMJWLLIJQZZPZRACQDKUEVCGPOGAVVHBCYTFKYAKGFRYNJNSTERYCMZWFOBZEIFMGDFOIJPCZESIS");
    msg.message_id = 55022U;

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
    msg.setTimeStamp(0.299342707845);
    msg.setSource(30040U);
    msg.setSourceEntity(91U);
    msg.setDestination(26490U);
    msg.setDestinationEntity(106U);
    msg.consumer.assign("NDAULSUNWHOVCZQUVYPZUWXKYQVJDGXMEBFYGRREFDOTTRDGCPFSFFEXOGJOXNDAWHIJSBHMLAMSBPLVKQFIJRLJUINSCBITXFWKBPSZBZMKOJVCTIQROKPHEALAZOPLWWXSPBSIHJIJDICIDNEMWVLFUEGESTCDATHWXYMYEAUKRRUXHJUKYLNKZTBAOYNGOIGYQVNQNZZEVPCXSAJNRWMT");
    msg.message_id = 23471U;

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
    msg.setTimeStamp(0.149318617343);
    msg.setSource(5306U);
    msg.setSourceEntity(201U);
    msg.setDestination(13166U);
    msg.setDestinationEntity(190U);
    msg.type = 111U;

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
    msg.setTimeStamp(0.486867492471);
    msg.setSource(11227U);
    msg.setSourceEntity(107U);
    msg.setDestination(27762U);
    msg.setDestinationEntity(5U);
    msg.type = 210U;

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
    msg.setTimeStamp(0.857109085988);
    msg.setSource(65005U);
    msg.setSourceEntity(204U);
    msg.setDestination(42551U);
    msg.setDestinationEntity(6U);
    msg.type = 154U;

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
    msg.setTimeStamp(0.324355087846);
    msg.setSource(20777U);
    msg.setSourceEntity(159U);
    msg.setDestination(58169U);
    msg.setDestinationEntity(223U);
    msg.op = 193U;

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
    msg.setTimeStamp(0.599378005719);
    msg.setSource(61580U);
    msg.setSourceEntity(228U);
    msg.setDestination(23753U);
    msg.setDestinationEntity(129U);
    msg.op = 229U;

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
    msg.setTimeStamp(0.604401939891);
    msg.setSource(40686U);
    msg.setSourceEntity(25U);
    msg.setDestination(61625U);
    msg.setDestinationEntity(254U);
    msg.op = 56U;

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
    msg.setTimeStamp(0.0207388953111);
    msg.setSource(29917U);
    msg.setSourceEntity(86U);
    msg.setDestination(37438U);
    msg.setDestinationEntity(8U);
    msg.total_steps = 172U;
    msg.step_number = 162U;
    msg.step.assign("QJLLBXWPEBWQPCIGDRXFXVDCMDDLPVNKFNJKOBVSQHAUNZZOKYSUXRWITDLLXRGBSNNAWHHDORQSNUCTANJUSMJDFZRGTXBYOOYFPM");
    msg.flags = 218U;

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
    msg.setTimeStamp(0.820186587986);
    msg.setSource(3761U);
    msg.setSourceEntity(48U);
    msg.setDestination(15698U);
    msg.setDestinationEntity(253U);
    msg.total_steps = 154U;
    msg.step_number = 241U;
    msg.step.assign("JKXSRLSQXHMNQZFQWRBYMAAMNOHPWNRJENYDTONKZOFJFWRNANQTRPUGVCBETDJKHVZTCYQSRJNURWBVUXPJJUQAEZFLLYHVGQYADQHQXGZSDVLTSKMHGPACJEKJICMIRAPUXUKOWXLFFWLKFCBMOVDLLN");
    msg.flags = 157U;

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
    msg.setTimeStamp(0.519598368454);
    msg.setSource(7339U);
    msg.setSourceEntity(230U);
    msg.setDestination(23264U);
    msg.setDestinationEntity(186U);
    msg.total_steps = 225U;
    msg.step_number = 173U;
    msg.step.assign("HOMAQTJFDHLITTQZJLNRWRUEBCGWZJGLDRYAXBJQQGOSCBHKIZOMAVFJXLVKKRTUTTDVCZNMNFMYITH");
    msg.flags = 79U;

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
    msg.setTimeStamp(0.315921943928);
    msg.setSource(2655U);
    msg.setSourceEntity(67U);
    msg.setDestination(35211U);
    msg.setDestinationEntity(68U);
    msg.state = 69U;
    msg.error.assign("BMTPQVOCCKSFTZVROMQVTIJGJ");

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
    msg.setTimeStamp(0.924299544265);
    msg.setSource(30757U);
    msg.setSourceEntity(249U);
    msg.setDestination(57892U);
    msg.setDestinationEntity(90U);
    msg.state = 115U;
    msg.error.assign("ESOFVUMKKSLUAOGIPCTJORDQZFFWUSMABCFBZKYROAFMBNDYYQNUSFBHEOGEYFIWOXRMQYCXWTKVWRMNGCXHLWITXXNEICFMIGLTQLJLHZPOWJVKDYWGHKJEZADSQIKLVSLXBBXPHVVAXNREWWNJZIYHDFTHGTQWXKKJQCOQUIVLLYFBNVMSIU");

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
    msg.setTimeStamp(0.133729431629);
    msg.setSource(10690U);
    msg.setSourceEntity(151U);
    msg.setDestination(56850U);
    msg.setDestinationEntity(140U);
    msg.state = 156U;
    msg.error.assign("LPHTJOTEOFFANLPOMNNALBUSDVIZKHXKFBJJKSNEYWYUNBBKHBQJWEXSTOVTUQINJVYDCMKLTAAKKGDRERPUXHGC");

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
    msg.setTimeStamp(0.0407177323438);
    msg.setSource(31504U);
    msg.setSourceEntity(71U);
    msg.setDestination(35235U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.15837688046);
    msg.setSource(56297U);
    msg.setSourceEntity(37U);
    msg.setDestination(6386U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.613101830421);
    msg.setSource(63930U);
    msg.setSourceEntity(174U);
    msg.setDestination(35263U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.374627003291);
    msg.setSource(15885U);
    msg.setSourceEntity(230U);
    msg.setDestination(43645U);
    msg.setDestinationEntity(212U);
    msg.op = 99U;
    msg.speed_min = 0.30472402211;
    msg.speed_max = 0.480965589417;
    msg.long_accel = 0.750480604498;
    msg.alt_max_msl = 0.193586590748;
    msg.dive_fraction_max = 0.655083273378;
    msg.climb_fraction_max = 0.579702224952;
    msg.bank_max = 0.543300050525;
    msg.p_max = 0.541574571318;
    msg.pitch_min = 0.81566372529;
    msg.pitch_max = 0.957571594342;
    msg.q_max = 0.983002260106;
    msg.g_min = 0.624186480012;
    msg.g_max = 0.638394417597;
    msg.g_lat_max = 0.201357985804;
    msg.rpm_min = 0.830922982637;
    msg.rpm_max = 0.495365501177;
    msg.rpm_rate_max = 0.770215889115;

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
    msg.setTimeStamp(0.374472337543);
    msg.setSource(19406U);
    msg.setSourceEntity(203U);
    msg.setDestination(54461U);
    msg.setDestinationEntity(139U);
    msg.op = 163U;
    msg.speed_min = 0.611564875347;
    msg.speed_max = 0.57505602106;
    msg.long_accel = 0.481364977582;
    msg.alt_max_msl = 0.58112452607;
    msg.dive_fraction_max = 0.356006549213;
    msg.climb_fraction_max = 0.399886663262;
    msg.bank_max = 0.983067434929;
    msg.p_max = 0.766564649575;
    msg.pitch_min = 0.962991550948;
    msg.pitch_max = 0.426718311071;
    msg.q_max = 0.964853326758;
    msg.g_min = 0.696583332808;
    msg.g_max = 0.613724895022;
    msg.g_lat_max = 0.454258539774;
    msg.rpm_min = 0.387696490289;
    msg.rpm_max = 0.902311416403;
    msg.rpm_rate_max = 0.336418450291;

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
    msg.setTimeStamp(0.57135761755);
    msg.setSource(47870U);
    msg.setSourceEntity(214U);
    msg.setDestination(45800U);
    msg.setDestinationEntity(50U);
    msg.op = 98U;
    msg.speed_min = 0.830745946984;
    msg.speed_max = 0.872260321523;
    msg.long_accel = 0.462640388201;
    msg.alt_max_msl = 0.997397146852;
    msg.dive_fraction_max = 0.121888703096;
    msg.climb_fraction_max = 0.0419978591308;
    msg.bank_max = 0.95842855524;
    msg.p_max = 0.88232899348;
    msg.pitch_min = 0.101444532405;
    msg.pitch_max = 0.802548372299;
    msg.q_max = 0.86642968139;
    msg.g_min = 0.283302697469;
    msg.g_max = 0.95656043186;
    msg.g_lat_max = 0.552234823113;
    msg.rpm_min = 0.549851352683;
    msg.rpm_max = 0.653936705326;
    msg.rpm_rate_max = 0.56574955657;

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
    msg.setTimeStamp(0.828563187212);
    msg.setSource(38328U);
    msg.setSourceEntity(86U);
    msg.setDestination(41415U);
    msg.setDestinationEntity(204U);
    IMC::TransmissionRequest tmp_msg_0;
    tmp_msg_0.req_id = 46967U;
    tmp_msg_0.comm_mean = 158U;
    tmp_msg_0.destination.assign("TXOSVGHSLHAENRGBADJZZITROFCATDZQKUNMOIAZEXCQKSTMNFNZPFWJEDNWOQCQRJENJEYAMYYWUTGFKPRPBSTXCFIDSGJUVNDFCOOYLKRLBEEGOJWKHHTUTRF");
    tmp_msg_0.deadline = 0.869135796337;
    tmp_msg_0.range = 0.89126734831;
    tmp_msg_0.data_mode = 67U;
    IMC::CompassCalibration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 25867U;
    tmp_tmp_msg_0_0.lat = 0.494275640457;
    tmp_tmp_msg_0_0.lon = 0.62316126659;
    tmp_tmp_msg_0_0.z = 0.617819578106;
    tmp_tmp_msg_0_0.z_units = 37U;
    tmp_tmp_msg_0_0.pitch = 0.850733787636;
    tmp_tmp_msg_0_0.amplitude = 0.575698153792;
    tmp_tmp_msg_0_0.duration = 35260U;
    tmp_tmp_msg_0_0.speed = 0.0238439247716;
    tmp_tmp_msg_0_0.speed_units = 100U;
    tmp_tmp_msg_0_0.radius = 0.191507060227;
    tmp_tmp_msg_0_0.direction = 41U;
    tmp_tmp_msg_0_0.custom.assign("GYYQJRYNZYLQMTEHCBICJRLZUFHKEASSOLYHJVHCAGQAKYMXYXRTTVSZJEWMHOUAAIPXOHKDQQFPOQJXJIADPTGVWUJBXKQKQZSRXIRJWEDWTUSUVMRBISHWBUNPVXTKOBCOFGBGSLDHRVYAFSPTFOKUVEZGFCKULKRXFNJDECZOINMMLCAUAIBLHCEBTACNFMZ");
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
    tmp_msg_0.txt_data.assign("YLUYQTFGLXYAVHBBLLHHNWPBICIHUBTVIVLBWKRYTIWOJZWHDWNVCSOXHUWYOBUUVPDZQDZUXHMLAMBFWIMKNYZMTAPQGFXRFOBCLKFBQF");
    const char tmp_tmp_msg_0_1[] = {10, 43, 23, 12, -45, -22, 22, -39, -48, 69, 24, 38, -95, 9, 126, -6, -75, -109, 98, -126, -88, 8, 124, -85, -90, 109, 114, 75, -62, 12, 96, 83, 119, -1, -123, -66, -127, -48, 30, 120, -17, 43, -51, 102, 69, -47, 75, 54, -61, -47, -36, 17, -27, 81, -127, -100, -105, 83, -75, 119, 71, -126, 62, 46, -82, 101, -24, 9, 80, -31, 52, -110, -79, 111, 2, -103, -97, -40, -89, -95, -125, -77, -82, 110, -41, 125, 110, -120, -84, -98, 104, 112, -10, -68, 47, -101, 121, 80, -105, 69, -91, 1, 77, -86};
    tmp_msg_0.raw_data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
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
    msg.setTimeStamp(0.714987225748);
    msg.setSource(47747U);
    msg.setSourceEntity(48U);
    msg.setDestination(10700U);
    msg.setDestinationEntity(6U);
    IMC::SetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 223U;
    tmp_msg_0.x = 29108U;
    tmp_msg_0.y = 38855U;
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
    msg.setTimeStamp(0.234633172968);
    msg.setSource(60774U);
    msg.setSourceEntity(36U);
    msg.setDestination(12098U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.557884116552);
    msg.setSource(21740U);
    msg.setSourceEntity(129U);
    msg.setDestination(31073U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.2493939469;
    msg.lon = 0.448096913445;
    msg.height = 0.22656400404;
    msg.x = 0.340618229656;
    msg.y = 0.30002778115;
    msg.z = 0.733018529225;
    msg.phi = 0.690184083361;
    msg.theta = 0.163937984421;
    msg.psi = 0.845863574598;
    msg.u = 0.334240435262;
    msg.v = 0.608551444046;
    msg.w = 0.62296575462;
    msg.p = 0.955206789228;
    msg.q = 0.16937948836;
    msg.r = 0.643715835411;
    msg.svx = 0.23791777349;
    msg.svy = 0.789325928465;
    msg.svz = 0.942275050146;

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
    msg.setTimeStamp(0.320961258477);
    msg.setSource(57925U);
    msg.setSourceEntity(21U);
    msg.setDestination(41111U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.954462340606;
    msg.lon = 0.748270785472;
    msg.height = 0.833502565264;
    msg.x = 0.791073212123;
    msg.y = 0.0495880361982;
    msg.z = 0.210117518594;
    msg.phi = 0.396774070758;
    msg.theta = 0.418291838877;
    msg.psi = 0.169923046843;
    msg.u = 0.567059456286;
    msg.v = 0.287302581975;
    msg.w = 0.325907523955;
    msg.p = 0.200962443056;
    msg.q = 0.785605273198;
    msg.r = 0.492246074258;
    msg.svx = 0.297641793736;
    msg.svy = 0.58560224078;
    msg.svz = 0.045109231225;

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
    msg.setTimeStamp(0.662057501391);
    msg.setSource(40181U);
    msg.setSourceEntity(58U);
    msg.setDestination(64503U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.306879585994;
    msg.lon = 0.562890573749;
    msg.height = 0.356871517488;
    msg.x = 0.0561611004546;
    msg.y = 0.314514705256;
    msg.z = 0.00788392017665;
    msg.phi = 0.592384182002;
    msg.theta = 0.14299878177;
    msg.psi = 0.209618106274;
    msg.u = 0.712072333097;
    msg.v = 0.254991148586;
    msg.w = 0.669191194583;
    msg.p = 0.403785259579;
    msg.q = 0.835769029737;
    msg.r = 0.922987596594;
    msg.svx = 0.0941681463661;
    msg.svy = 0.424295632262;
    msg.svz = 0.417476405777;

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
    msg.setTimeStamp(0.525299866625);
    msg.setSource(28663U);
    msg.setSourceEntity(130U);
    msg.setDestination(217U);
    msg.setDestinationEntity(88U);
    msg.op = 124U;
    msg.entities.assign("TUIGMAZHCOARQCVCGTXZKYSSUKJDDHKJEYCZMZV");

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
    msg.setTimeStamp(0.0383782838437);
    msg.setSource(25477U);
    msg.setSourceEntity(189U);
    msg.setDestination(27160U);
    msg.setDestinationEntity(185U);
    msg.op = 6U;
    msg.entities.assign("XROLQYCUOFNMIMMMPDGQIZMIEAQHWSDVDXZTUSSVHMCAJQFAFRZOVASLNTHBSPAKKTTUYFXUTYYRRZRNVEKDYLAKHTZRIXIYZGUANYQCBCBSCW");

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
    msg.setTimeStamp(0.478403797904);
    msg.setSource(30252U);
    msg.setSourceEntity(248U);
    msg.setDestination(28658U);
    msg.setDestinationEntity(121U);
    msg.op = 174U;
    msg.entities.assign("TLLPJVPRRUMIXCRIKGAQDJONYWNCWIWLRKOFXQVESSNPXFSGGVHZZQKLYDWNESGRZACZSVHEXCQOVOZTERBIBCHXLSKUINIULOGZJCPXNDNWUDSMOODTEAKGHGABPIAAHZIHCVTULJMSUTTBXCPHOQYXKTCZIRDYTFMKFRQJGXAYHNLKUBOVAALPFLMWPWMDRNEJZDWCYQBMEJBNWVMJYHQZ");

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
    msg.setTimeStamp(0.0410503330842);
    msg.setSource(17294U);
    msg.setSourceEntity(149U);
    msg.setDestination(54928U);
    msg.setDestinationEntity(9U);
    msg.type = 139U;
    msg.speed = 14255U;
    const char tmp_msg_0[] = {-10, 45, 80, 88, -64, 18, 4, 86, -54, 59, -38, -21, -125, 108, -108, -21, 23, -24, 107, 114, -123, -40, -123, -74, -30, 18, -2, 90, -126, -121, -96, 105, -21, 56, 34, -90, 30, -46, 86, 116, -61, -17, -100, 64, 122, -12, -86, 92};
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
    msg.setTimeStamp(0.116349030349);
    msg.setSource(19366U);
    msg.setSourceEntity(31U);
    msg.setDestination(38896U);
    msg.setDestinationEntity(199U);
    msg.type = 184U;
    msg.speed = 37971U;
    const char tmp_msg_0[] = {22, -82, 71, -87, 98, 61, -51, -47, 55, 21, 82, 48, 14, -76, 80, 121, -73, -94, -61, -120, -78, -116, -18, 47, -37, 105, -58, 32, 50, 116, 81, -118, -3, 2, 10, -56, 110, -113, 65, -19, 70, 102, -126, 16, 81, -61, 117, -88, -68, 116, 15, -65, 62, -78, -77, 13, 74, 85, -95, -10, 92, -70, -110, -116, 46, 38, 109, 76, -36, 24, 16, 55, 100, 115, -74, 29, 78, -78, -31, 4, -46, -44, 119, 67, -57, -10, -22, -38, -41, -117, 105, 7, 105, -32, 1, -109, -17, -104, 51, 107, 75, -113, 67, -57, 11, -28, 52, -127, 85, 87, 19, 116, -109, 33, 6, -110, -29, 25, 0, -113, 69, -84};
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
    msg.setTimeStamp(0.618780460746);
    msg.setSource(21131U);
    msg.setSourceEntity(203U);
    msg.setDestination(24266U);
    msg.setDestinationEntity(33U);
    msg.type = 33U;
    msg.speed = 17092U;
    const char tmp_msg_0[] = {79, -29, -3, 30, 50, 84, 96, 35, -93, -7, -44, 0, 38, 68, 89, 62, 14, 111, 78, 69, -17, -34, -46, 25, -55, -10, -112, 55, 23, -48, -95, 68, 93, 22, -82, 46, 73, 78, 89, -2, 12, 52, -81, -45, -68, -17, 23, 8, 4, -110, 14, -61, 67, 15, -11, -4, -32, 10, 33, 24, 3, -36, 63, 28, -121, 71, 28, 0, 116, -95, 0};
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
    msg.setTimeStamp(0.191709051016);
    msg.setSource(14757U);
    msg.setSourceEntity(136U);
    msg.setDestination(25537U);
    msg.setDestinationEntity(111U);
    msg.op = 75U;
    msg.tas2acc_pgain = 0.760564311229;
    msg.bank2p_pgain = 0.000324387305096;

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
    msg.setTimeStamp(0.827550078139);
    msg.setSource(47665U);
    msg.setSourceEntity(187U);
    msg.setDestination(55523U);
    msg.setDestinationEntity(72U);
    msg.op = 46U;
    msg.tas2acc_pgain = 0.0728983515948;
    msg.bank2p_pgain = 0.665059565032;

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
    msg.setTimeStamp(0.0965749347959);
    msg.setSource(28297U);
    msg.setSourceEntity(55U);
    msg.setDestination(24436U);
    msg.setDestinationEntity(249U);
    msg.op = 127U;
    msg.tas2acc_pgain = 0.00644296124367;
    msg.bank2p_pgain = 0.243566438637;

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
    msg.setTimeStamp(0.183026878546);
    msg.setSource(19254U);
    msg.setSourceEntity(60U);
    msg.setDestination(22036U);
    msg.setDestinationEntity(212U);
    msg.available = 3509374579U;
    msg.value = 224U;

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
    msg.setTimeStamp(0.293252810856);
    msg.setSource(434U);
    msg.setSourceEntity(241U);
    msg.setDestination(36555U);
    msg.setDestinationEntity(81U);
    msg.available = 817180555U;
    msg.value = 134U;

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
    msg.setTimeStamp(0.852661358443);
    msg.setSource(47151U);
    msg.setSourceEntity(194U);
    msg.setDestination(8904U);
    msg.setDestinationEntity(86U);
    msg.available = 2845838830U;
    msg.value = 46U;

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
    msg.setTimeStamp(0.729763760867);
    msg.setSource(23785U);
    msg.setSourceEntity(233U);
    msg.setDestination(32716U);
    msg.setDestinationEntity(88U);
    msg.op = 229U;
    msg.snapshot.assign("LYQHVMMLFPZGTBOSYPCYLSDRVGVSDVZKHWJLEEVVDTASMZSUIDAWUCEDSKATIRTBQFQOPRSCXCOWUVNNDMGRYIBHPNHZOREZFUVB");
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("WWRKUJMTPGTXAXAZBFQOQZYZVPAFNRUJRVNWWTZLVLRHJJZNNDXUSDUKWCKURYNYJNSRSYOIGFYBIFUQFGCATMFSPMWEQVLUBKAPCPDFCNKPBVIQNHTBLDDGLEWACOSXXHXEKSGLKCQERKMAWMYRQMGHFJSEEKOTZTEYTCCRADXIXRZFODAQOHISIKFVIHBQPLJBBHSGWMQLGYJ");
    tmp_msg_0.visibility.assign("RPJQRTLWFZVTBFVIUOLDKKJPIZPRLHSCXTDDODNHMCJYLVXKJFNUSERHIEMZFXZROGGFXRZHXAPUPGYIPKMAWCHWO");
    tmp_msg_0.scope.assign("CAJKRPAIPDNSGRZCVWVQGWCHVPBXYWOVYMQTQWYMNXITRFYOVWITEESLHGVXGUOWMOQZOFDGQZTPNRLKIZUHYMMEWAZHZLPBIBJGDQHQTFWLYAKJNIIDGJFGZJZILTJFONUFONFDBFDPSEXQHYJUESERSJMVOA");
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
    msg.setTimeStamp(0.266429263887);
    msg.setSource(2488U);
    msg.setSourceEntity(77U);
    msg.setDestination(61386U);
    msg.setDestinationEntity(75U);
    msg.op = 210U;
    msg.snapshot.assign("DMHNWVNEPJFCPASBRKHMWGFEQHMTREUQJAGEBMPCSUNAJLRIFZTAFTCBXLQIZTYLBIURDKLPVWXXFNKTZZBKQWDEEALELPMGVPSFYLSFIMVCVKSSFVURRMIVXXZZWBXAXQVFJCDCTOGCGOUMVJWHALDHZOYJCJWEGVYBLXENRQOIUORNNSYORUK");
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.315401776653;
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
    msg.setTimeStamp(0.449219026163);
    msg.setSource(28319U);
    msg.setSourceEntity(7U);
    msg.setDestination(51410U);
    msg.setDestinationEntity(29U);
    msg.op = 199U;
    msg.snapshot.assign("POPBTSWYDRHPQKKYFLUEIBUGWMULBQRDQWPBZKJMKRYWUIEAPSJUMQSSDTAVTFIZZKGVMSEKIXINGEBVFHDPEEAGJWBBLIIWXMJPVWONCROVQCOCXFPGIQMJSDDUCPYCTXFBNZHLNHFJFKGXTAJOUFRGDFTRDYQAMINXVANXACLKTCNUORHZTGLAZZKVQHORHUKXEYJLHEALDICSPEOS");
    IMC::Aborted tmp_msg_0;
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
    msg.setTimeStamp(0.0370519573749);
    msg.setSource(9660U);
    msg.setSourceEntity(106U);
    msg.setDestination(19625U);
    msg.setDestinationEntity(62U);
    msg.op = 190U;
    msg.name.assign("GZYIFROXTCTHTNXTLFTKUPGNIPSALTNMFBPLZLVHCBQPZAZCANMFHWULIYDJNEZOCICIQYMWBUQYBYSUBDLQQJGFOWUXQXNFXEADAAJKSPGAOTRFHUDRAROWNZOGJEUKBFECBRLLKDPXTGPWEHPHSXBWQVXFJMI");

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
    msg.setTimeStamp(0.963094946401);
    msg.setSource(4070U);
    msg.setSourceEntity(232U);
    msg.setDestination(64371U);
    msg.setDestinationEntity(30U);
    msg.op = 63U;
    msg.name.assign("FCAZQYZWBNSWSMKFFQPXIAADWJIZMLQNPFOFDV");

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
    msg.setTimeStamp(0.651071327573);
    msg.setSource(24870U);
    msg.setSourceEntity(252U);
    msg.setDestination(10805U);
    msg.setDestinationEntity(199U);
    msg.op = 132U;
    msg.name.assign("ZBUNCFKGUYGVVPLPCWDRQOZTUWPARKJEYVOBSAXFESMONAOIMENOIPTMCBBRLQOXEPLRMZNHJDYFFGBDJHUYVHCZTWHZSOYFTLXHQIGJMTNIEVTDYTVFXVOBQDSTEGOHJUJNWCSUIAJFXDSUDQBKJWXKLXFXAKPXEYWZMIAQBVGAHIRRQHUIOWNSYAQSTXPNBWPCFZQMCDHSLAAJKQZGCTMECV");

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
    msg.setTimeStamp(0.690045155363);
    msg.setSource(45271U);
    msg.setSourceEntity(142U);
    msg.setDestination(24109U);
    msg.setDestinationEntity(57U);
    msg.type = 143U;
    msg.htime = 0.499159010858;
    msg.context.assign("ICHASQCOPOFLUAULLAIYGFNNUYYKWYFAJGPJDSUHRDOLGWFVLYQWFYYQRUKCMHEPBMKRGCLDFNXSIBBJEKKVTGGWUXDZCMZKXIDFHHELROBRQAVXTQDWCTEZUEHYENJYODASWIJNYPAOQPVVLTABMVCVXBZNPIJFZCMWCUNSPQISPRHIMVOXSTGDVQEWHRQZZTZEXNOJJKKWKLJICATBJMPZTLXGDAOHBSQKMEUUTNRMRHDZEBFSM");
    msg.text.assign("HQAIXFYXSEZFAEKVMOOWIPYZRBYPSVJGINFYUNIKUKUEWMDVNXSLORCGOFYWTBXDWGMLQCOYXFSLEAQUIRKWNCTTMDBGJDFJDITVDCTVWQSHLLDCRMVHSRGOISGFEZKJAEALBBHTZHAYGMUBYIKTSQEFICJKBNBNERQZJNZAOX");

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
    msg.setTimeStamp(0.770485571015);
    msg.setSource(26345U);
    msg.setSourceEntity(62U);
    msg.setDestination(49183U);
    msg.setDestinationEntity(179U);
    msg.type = 139U;
    msg.htime = 0.055004862187;
    msg.context.assign("QAZTPIYFVSXYBCSIDVCVJVFJVAMATNJLPRRPHIDYHSGGORMCMBNKAEXNNMXTUXWRGUHQUMNEFSSJSZCFQFMVTZXMHJFOKYOBWGUUJZTLZXGVKIUAWILFOBRMUOCBUTRZSFKEQGOEADFPDDLFXIS");
    msg.text.assign("TUWEPFAGNOUZHRAPPIDEFJQRDPUHQLGLHOZZEYFKBYSIJCDGNTYOMDICBRFLLSNFCAVGSFTRYLNQZELBTZZQTTSDCTGXK");

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
    msg.setTimeStamp(0.928939772088);
    msg.setSource(28290U);
    msg.setSourceEntity(126U);
    msg.setDestination(16459U);
    msg.setDestinationEntity(47U);
    msg.type = 68U;
    msg.htime = 0.80731167224;
    msg.context.assign("ZHCRWNWSQDBSOPMQVACGMSWQIVMMZLXTBCKYBBPBPCGJKLQPHYDSACDFSYROFVXRBBDKQFVLICFJZTLGTNWOFKEIANCJYWQJPOPPUKDXNVAXIGZUEXNHOUKJTNOTZUHCXRYJWPHTMUBEYUWMPLKSAYYMEUHNTJTSLQQJAZHOOKNTFGIEXCSMWEMUQNCVGIIFSJDGIIEYLDVDXPRUREJZRFRBRE");
    msg.text.assign("XGTVNPOLXCGZWTFEYWLCLYOYTHNZTQFMHMISFCRXTFQJLTASPQMUHMVGYJLBWUGNYARPPCETAEADDEUYUJVULUZAGBQDLZZBEJLOKWZOWIIPAKHLXSPQRCJIDCQGUSEVBPICXVIRSQPEMTSMFZGXHARXDHDIQIMCYNMSPHZVROVGUCYNXXLHJNREUNWFBWKNRKNAJ");

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
    msg.setTimeStamp(0.844649228408);
    msg.setSource(65452U);
    msg.setSourceEntity(135U);
    msg.setDestination(56914U);
    msg.setDestinationEntity(227U);
    msg.command = 196U;
    msg.htime = 0.350233490915;

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
    msg.setTimeStamp(0.616906609053);
    msg.setSource(57412U);
    msg.setSourceEntity(242U);
    msg.setDestination(65313U);
    msg.setDestinationEntity(37U);
    msg.command = 125U;
    msg.htime = 0.344022581312;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 198U;
    tmp_msg_0.htime = 0.184690736216;
    tmp_msg_0.context.assign("XXWEBIBKVGAHTXGRTNANUBLILHLDYDRJPUSTHXPEKVXNFKJEFZLVQCPGOYHYCUZRFPJLSIUOKJMGXELPEMOOVWHWZIDEFARSCQCWGZKYSDCVSA");
    tmp_msg_0.text.assign("DBIWLCKIRKJLSOWWUKDVNUWNPCVTJJIGGJXNLNIOFKQXHVXHKLTLYGUWJNLRKHWMRYMMAMIXBEZKDPTLSFCGOCSJYNHVRQSKVQNXAFKSSVODWGSFZMTMCAXBHPXSKATDPFQWMXOHMQHFGWZBJLJYCCPAQLEIUMYSZRZZB");
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
    msg.setTimeStamp(0.471929370087);
    msg.setSource(15418U);
    msg.setSourceEntity(144U);
    msg.setDestination(3203U);
    msg.setDestinationEntity(34U);
    msg.command = 168U;
    msg.htime = 0.531965786752;

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
    msg.setTimeStamp(0.0898288721271);
    msg.setSource(34307U);
    msg.setSourceEntity(170U);
    msg.setDestination(50224U);
    msg.setDestinationEntity(201U);
    msg.op = 156U;
    msg.file.assign("REUTDRFCMLWHQKEMIPDSACWPUZOXYSGVKUBDXMUAYYILCUEXFTHQLYTIBUZTPNCTCSZARJTXIKWEDPCENKIGQVDBXDZHDLEPUACCSGVPPKXWHPJKLFMELYMNGMAMBTOBTNDRMPFWLRQETDGJSCYHI");

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
    msg.setTimeStamp(0.989570948641);
    msg.setSource(14989U);
    msg.setSourceEntity(189U);
    msg.setDestination(44999U);
    msg.setDestinationEntity(70U);
    msg.op = 16U;
    msg.file.assign("VHOTCJTLOSJKPSHCZIOCEYNIXZQKQPDWWKJQMLEXAJPCBZXQYKBNGJ");

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
    msg.setTimeStamp(0.997244683025);
    msg.setSource(35626U);
    msg.setSourceEntity(238U);
    msg.setDestination(39120U);
    msg.setDestinationEntity(6U);
    msg.op = 95U;
    msg.file.assign("QDEHRUEUDJITWMYOCXDXBLOTEDLHJKLWM");

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
    msg.setTimeStamp(0.122857079626);
    msg.setSource(63765U);
    msg.setSourceEntity(242U);
    msg.setDestination(41500U);
    msg.setDestinationEntity(143U);
    msg.op = 161U;
    msg.clock = 0.652730710984;
    msg.tz = 104;

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
    msg.setTimeStamp(0.211500800027);
    msg.setSource(18428U);
    msg.setSourceEntity(177U);
    msg.setDestination(16737U);
    msg.setDestinationEntity(161U);
    msg.op = 40U;
    msg.clock = 0.483257458691;
    msg.tz = -16;

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
    msg.setTimeStamp(0.636334541963);
    msg.setSource(37787U);
    msg.setSourceEntity(6U);
    msg.setDestination(27395U);
    msg.setDestinationEntity(238U);
    msg.op = 230U;
    msg.clock = 0.63320000681;
    msg.tz = 81;

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
    msg.setTimeStamp(0.238349360999);
    msg.setSource(41672U);
    msg.setSourceEntity(152U);
    msg.setDestination(42956U);
    msg.setDestinationEntity(84U);
    msg.conductivity = 0.763386571164;
    msg.temperature = 0.495412723364;
    msg.depth = 0.519955569574;

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
    msg.setTimeStamp(0.356847104305);
    msg.setSource(25683U);
    msg.setSourceEntity(152U);
    msg.setDestination(19877U);
    msg.setDestinationEntity(161U);
    msg.conductivity = 0.558326461953;
    msg.temperature = 0.312481381477;
    msg.depth = 0.506951567495;

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
    msg.setTimeStamp(0.759803449365);
    msg.setSource(24500U);
    msg.setSourceEntity(194U);
    msg.setDestination(9726U);
    msg.setDestinationEntity(96U);
    msg.conductivity = 0.324281529327;
    msg.temperature = 0.101278833993;
    msg.depth = 0.0751287332577;

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
    msg.setTimeStamp(0.601134671139);
    msg.setSource(13319U);
    msg.setSourceEntity(128U);
    msg.setDestination(10963U);
    msg.setDestinationEntity(114U);
    msg.altitude = 0.474397607872;
    msg.roll = 62037U;
    msg.pitch = 3474U;
    msg.yaw = 31997U;
    msg.speed = 2205;

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
    msg.setTimeStamp(0.953244941668);
    msg.setSource(27822U);
    msg.setSourceEntity(0U);
    msg.setDestination(53682U);
    msg.setDestinationEntity(148U);
    msg.altitude = 0.176385857596;
    msg.roll = 55129U;
    msg.pitch = 44219U;
    msg.yaw = 21631U;
    msg.speed = 3227;

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
    msg.setTimeStamp(0.988397645277);
    msg.setSource(31388U);
    msg.setSourceEntity(121U);
    msg.setDestination(134U);
    msg.setDestinationEntity(19U);
    msg.altitude = 0.322809494013;
    msg.roll = 57230U;
    msg.pitch = 13614U;
    msg.yaw = 31546U;
    msg.speed = -21413;

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
    msg.setTimeStamp(0.0251671367991);
    msg.setSource(37119U);
    msg.setSourceEntity(13U);
    msg.setDestination(20629U);
    msg.setDestinationEntity(201U);
    msg.altitude = 0.994089183041;
    msg.width = 0.896596596415;
    msg.length = 0.290894486372;
    msg.bearing = 0.227645462972;
    msg.pxl = 5870;
    msg.encoding = 135U;
    const char tmp_msg_0[] = {22, -80, -68, -80, -19, -32, 15, 55, -47, -71, 20, -29, 122, -46, -61, -81, -113, 117, -95, -90, 84, 88, 12, -16, 106, 51, 103, -30, -21, 11, -67, -45, 51, 10, 86, -57, -65, 10, 10, 76, -71, 3, -120, -44, 105, 114, 84, -85, 81, -123, -93, 112, -80, -88, 33, -96, 49, -30, -128, -97, 100, -82, -72, -65, 17, 10, 120, 117, 0, 51, 25, -100, 23, 11, -64, -117, -97, -44, -34, -30, -127, 78, 91, 65, -81, -53, 47, 83, 65, -20, 59, 78, 24, 84, 74, -127, 49, 12, 95, -29, -77, 96, 72, -99, -3, 62, -107, 92, -16, 65, 8, -8, -61, 43, 94, 84, 38, 28, 26, -23, 58, -48, -107, 103, -71, 122, -122, -60, -127, 79, 79, 29, -113, 103, 66, -108, -112, 9, -102, -114, -63, 12, -10, -124, -54, 12, -70, -30, 65, -85, -82, -28, 67, 11, 3, -117, 67, -37, 69, 69, 45, -43, -101, -86, 92, -34, 68, 61, -64, 53, -60, 87, 97, 85, 13, -29, -61, -106, -92, 100, -97, -119};
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
    msg.setTimeStamp(0.542505442961);
    msg.setSource(40167U);
    msg.setSourceEntity(136U);
    msg.setDestination(56227U);
    msg.setDestinationEntity(134U);
    msg.altitude = 0.488068864762;
    msg.width = 0.777614795785;
    msg.length = 0.74081592206;
    msg.bearing = 0.807232754146;
    msg.pxl = -16714;
    msg.encoding = 147U;
    const char tmp_msg_0[] = {115, -41, 112, -17, 102, -111, -19, 124, 69, -27, -124, -82, -106, 78, 113, 64, -30, -106, -43, 101, 62, 10, -40, 86, 104, -30, -22, 73, 19, 76, 97, 53, 84, -66, -30, -90, 90, 25, -51, -38, -28, 80, -5, -66, 52, 94, -26, 48, 85, 43, -97, -128, 112, -28, 43, 90, -46, -55, 65, 37, 61, -82, 28, 50, 81, -1, -62, 30, 49, 88, 50, -54, 58, 60, 15, 25, 17, 100, -59, -119, 42, -56, 91, -125, 90, -8, -101, -41, -16, -72, 35, 18, -14, 54, 124, -114, 98, 50, 24, -83, 118, 122, -77, 99, -67, 113, -77, 98, -83, 87, -96, -15, 40, 118, 70, -7, -66, -35, -94, 115, 18, -70, 91, 62, 46, -9, -104, 89, 83, -28, 52, 61, 101, 111, 13, -23, 100, 31, -24, -8, 86, -108, -105, 70, 30, -78, -2, -36, 40, 117, -58, -23, -18, -103, -116, -44, 32, -120, -32, -84, -33, 61, 17, -128, 28, -3};
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
    msg.setTimeStamp(0.190449225363);
    msg.setSource(55687U);
    msg.setSourceEntity(160U);
    msg.setDestination(6680U);
    msg.setDestinationEntity(29U);
    msg.altitude = 0.143899116392;
    msg.width = 0.0667694726785;
    msg.length = 0.58486362421;
    msg.bearing = 0.496851845126;
    msg.pxl = -22435;
    msg.encoding = 164U;
    const char tmp_msg_0[] = {-62, 42, 102, -24, 41, 117, 47, 5, -76, 14, -106, -4, 56, 11, 85, 119, 88, 103, 27, 10, -42, 19, -121, -37, -71, 81, 12, -51, -14, 63, 31, 70, -30, -123, -85, 36, 68, 37, -48, 58, 76, -12, 116, 42, 97, 11, 126, -103, 55, 52, 104, 12, -101, -46, 23, 8, -100, 16, 91, 76, -125, -60, -5, 121, 4, 46, 85, 96, 13, -53, -50, -99, -9, 61, 75, -22, 15, 8, 117, 72, 97, -109, -74, -35, 14, -14, 14, -33, -80, -98, 62, -101, -94, 71, 49, 22, -100, -86, 118, -45, 70, -42, -4, -59, -5, -35, -99, 93, 80, -74, -111, 2, -119, -40, 108, -1, -80, 59, 53, 68, 29, -128, -60, -12, -98, -47, -6, -10, 22, 86, 70, 120, -63, -61, -13, 54, 0, -86, 37, -117, 31, -76, 85, -107, 52, 41, 0, -59, -7, 51, -14, -107, -69, -28, 81, 120, 115, -86, -26, 17, 17, -75, 89, 125, 52, -53, -43, 79, -47, -123, -22, -103, 73, 120, -63, -92, 120, -72, -44, 111, 14, -69, 69, -123, -51, 22, -10, 109, -112, 116, 14, 74, 82, 2, -57, -63, -42, -57, -106, -6, 120, 14, 87, -49, -116, 55, 30, -110, -127, -50, -110, 50, -117, 95, -90, -5, -70, 29, -23, -127, -112, 78, -21, -68, -35, -7, 84, 78, -111, -86, 56, 124, 42, -96, 9, 24, 28, -75, 19, -112, 88, -83, -117, 100};
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
    msg.setTimeStamp(0.514337783993);
    msg.setSource(62177U);
    msg.setSourceEntity(198U);
    msg.setDestination(22661U);
    msg.setDestinationEntity(113U);
    msg.text.assign("TUSVAXLJWNGKXQFYVGZTARGRDSFOSKFEZCOFPUDOGGQVNCWZWRHELBGTQKOBXHYHCMJQJZDPBITUZKAWHLSNZIPNCRTYTSVZAPTZHR");
    msg.type = 131U;

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
    msg.setTimeStamp(0.765525520063);
    msg.setSource(26566U);
    msg.setSourceEntity(6U);
    msg.setDestination(24048U);
    msg.setDestinationEntity(48U);
    msg.text.assign("OACFFWOILLZZSZISOUSUBBKFAZJWOGCWMISZTLYPIZLVQPVXBCKHYKSUUAZEDYPORVVICUGQJGYXKUFEBXMNXTFEHAJDKANYNKDQWRVUOAUDHKCFTUBRGVSQLNUEQRSGJYYNOWPQJRTJRYQVIDLZIESBGXYLWJICVTBEAOTMXLMGEB");
    msg.type = 171U;

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
    msg.setTimeStamp(0.4833598844);
    msg.setSource(57598U);
    msg.setSourceEntity(222U);
    msg.setDestination(33117U);
    msg.setDestinationEntity(190U);
    msg.text.assign("VRULLSPLITEULBYSSSCTTKUWNABOPCWZLZTFDCRJWBASAHLHMHNQKOYGEZZSADUHBPNKJCIPBYJGHXXHIBVJMAYORRDYCVDRWLAMQJNXTUQIZFGF");
    msg.type = 108U;

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
    msg.setTimeStamp(0.858467596379);
    msg.setSource(49833U);
    msg.setSourceEntity(148U);
    msg.setDestination(16083U);
    msg.setDestinationEntity(74U);
    msg.parameter = 97U;
    msg.numsamples = 152U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 3085U;
    tmp_msg_0.avg = 0.0239361148008;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.459195496038;
    msg.lon = 0.509906894403;

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
    msg.setTimeStamp(0.228743552328);
    msg.setSource(29031U);
    msg.setSourceEntity(111U);
    msg.setDestination(14690U);
    msg.setDestinationEntity(15U);
    msg.parameter = 137U;
    msg.numsamples = 169U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 59073U;
    tmp_msg_0.avg = 0.853913346466;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.883423601119;
    msg.lon = 0.860163219621;

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
    msg.setTimeStamp(0.300480912406);
    msg.setSource(57867U);
    msg.setSourceEntity(15U);
    msg.setDestination(40330U);
    msg.setDestinationEntity(0U);
    msg.parameter = 64U;
    msg.numsamples = 181U;
    msg.lat = 0.955908089253;
    msg.lon = 0.0991365376937;

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
    msg.setTimeStamp(0.439006247219);
    msg.setSource(21049U);
    msg.setSourceEntity(153U);
    msg.setDestination(58460U);
    msg.setDestinationEntity(214U);
    msg.depth = 5379U;
    msg.avg = 0.291773384394;

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
    msg.setTimeStamp(0.7978123806);
    msg.setSource(24634U);
    msg.setSourceEntity(251U);
    msg.setDestination(8330U);
    msg.setDestinationEntity(123U);
    msg.depth = 27828U;
    msg.avg = 0.646241341923;

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
    msg.setTimeStamp(0.708240379496);
    msg.setSource(8874U);
    msg.setSourceEntity(153U);
    msg.setDestination(52546U);
    msg.setDestinationEntity(242U);
    msg.depth = 51763U;
    msg.avg = 0.247429293902;

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
    msg.setTimeStamp(0.157723706399);
    msg.setSource(35256U);
    msg.setSourceEntity(203U);
    msg.setDestination(61606U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.352410475574);
    msg.setSource(6489U);
    msg.setSourceEntity(227U);
    msg.setDestination(24376U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.990831810807);
    msg.setSource(44501U);
    msg.setSourceEntity(85U);
    msg.setDestination(53359U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.516220120014);
    msg.setSource(32687U);
    msg.setSourceEntity(130U);
    msg.setDestination(15144U);
    msg.setDestinationEntity(50U);
    msg.sys_name.assign("XKQBIZOVOREDAEJYKGNHWIMYAMRHCWCTJPIGIYCBHTBJNITOFZEODIUCSCPQJNPEVXXXOCVCREBDGNNUHMKMMUJFJQCARXUONRDGZDBWZKATTCZQORDLLFOXQHBXFMDYWQVZSKRHGTKKFQUZIPAAGTNHRAKUTWOIBZJVPYVEQOFUGVVRHGDSFGUBLKSZWMWSCIUPRESTJEYSQFYLLLYPKMMDQHPEESSW");
    msg.sys_type = 162U;
    msg.owner = 2980U;
    msg.lat = 0.540393398105;
    msg.lon = 0.891459230862;
    msg.height = 0.821995950101;
    msg.services.assign("MSNJSPSNMCYDOIYDNHUUWGWHCZBRXOXLBBGAKRMDTDKTGCNRPIXNFJHOTVIJFPWGWQMFAVLECXAELEYQGOLFTIORMOIKJQFAPKQVJVYYPZCDUNCMQEPLWHPWVOTPBZWIDEZOKJFSHBBVJYYUZCTJXQHRNVXTRAQNHEBQWGIFMISHF");

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
    msg.setTimeStamp(0.00598565727027);
    msg.setSource(32137U);
    msg.setSourceEntity(199U);
    msg.setDestination(59796U);
    msg.setDestinationEntity(229U);
    msg.sys_name.assign("JBGLOUGTIAKOWHASDVHMZOLKVSRNIQEJRHFKAOIAOGYOCZAUNSMJMEYPUFCNEPJEDCOETZWKVHADNMBQAYCYZHTZZSQDXCDPWPBDGQSTGGRBYHFJDXYAROGCXWYMEFKZSHBZPUMLRJPVISXLNOUNUBNNUGSXINLXEFQBTBLIKPKFWJTMRRZFUGIWKMJVFIPEUHDJHWLRMRXMRITCXVOHVWCXEPYQFBWVZACUVYKVKLQ");
    msg.sys_type = 199U;
    msg.owner = 214U;
    msg.lat = 0.722986642815;
    msg.lon = 0.869571624337;
    msg.height = 0.522852147962;
    msg.services.assign("PBGEEZUEIYFLNQSUIGIUDXYWBRULHGGZJWHLRCVJANZQPKJIZHMYULJSRIVOJWXPOUXFYBYDTBNYWJBQOQZMRXGML");

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
    msg.setTimeStamp(0.36117182106);
    msg.setSource(10288U);
    msg.setSourceEntity(76U);
    msg.setDestination(6074U);
    msg.setDestinationEntity(56U);
    msg.sys_name.assign("UTTMUWPCONLJOODBMLNYYKLSQJXARCXXJEHZGRGDWBXFCJAWMODQBVJVCEHTCZBUALVHWSMKRXFKCBYASLQHVZOAKAPZVCUEYGHKSPYKBTDGGWGTDHOOQIMUGNZPSEHIQHYVNHVZVUWIOLFYPJNEDRCBQLNATDBRBDWTFCGANZSFFEXIZRLXWBINP");
    msg.sys_type = 79U;
    msg.owner = 21041U;
    msg.lat = 0.0795909405038;
    msg.lon = 0.907979107808;
    msg.height = 0.866981645654;
    msg.services.assign("MUNVSCCEEZPEFSMOGNQBODKRSEZHYWXYZNAZCJKLTRUAAYKJPKJSUSFQFVNWVQJZTXJDLNSYQVJVEIWGQONGRKCWSBXANPLYDBXHJAHBZBHKITVOBLGYEKFYUDXIVHCGNGRDCDWFGIZISTMIQHOPMWFPUCRUMWEOOVTCGDRXCBTAZKBMTCIMAINPLELLJOFUEQAZAUUMJXRZNXRPSJMDKQVPEKLBFVDWTOYIRAFQLWQSTHPYGLXBYHWTH");

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
    msg.setTimeStamp(0.468941354588);
    msg.setSource(53150U);
    msg.setSourceEntity(201U);
    msg.setDestination(48674U);
    msg.setDestinationEntity(79U);
    msg.service.assign("CVZYVIQBILNZINOBDPIAUNDEHMCXFYZBJOZPYEKSVJMQDAFMAMDXOJBMIIFTELKGOTXLJVMRWWSLCWXREKTFDANSPULHFIPDVNKHTERCTK");
    msg.service_type = 198U;

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
    msg.setTimeStamp(0.34062385571);
    msg.setSource(1995U);
    msg.setSourceEntity(134U);
    msg.setDestination(55185U);
    msg.setDestinationEntity(135U);
    msg.service.assign("CTWILIQHIFJPWSYVSDNRLKSWFOTRANLLOCDFGVGRNPGVZPAPDOIHYEXYEEUCORAJKEHGAHYMDDXWZQVMWLUQPPRESIJMUGBQQWFBCHHFFTDZXNKHYUILHJCBNTSNGBIRIRCTBFJLOBXEJGAUXPDJJYJQAWZGMDLXACXEZED");
    msg.service_type = 203U;

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
    msg.setTimeStamp(0.0221926579278);
    msg.setSource(23305U);
    msg.setSourceEntity(55U);
    msg.setDestination(54115U);
    msg.setDestinationEntity(83U);
    msg.service.assign("FQOKIWOEXUGCFMDDLGFKHMTMLTYRKSRXNWCJOEYYBNKDAHGARCDTUVLSYIQRZXROGPZJPAEIWQQRHAPIPVXISSVWDACEAFFKLPINVQHVIMODWCSXNNBGXRYIBKNTTBOP");
    msg.service_type = 105U;

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
    msg.setTimeStamp(0.951309321846);
    msg.setSource(6243U);
    msg.setSourceEntity(66U);
    msg.setDestination(32489U);
    msg.setDestinationEntity(33U);
    msg.value = 0.549608812723;

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
    msg.setTimeStamp(0.449038218552);
    msg.setSource(62541U);
    msg.setSourceEntity(184U);
    msg.setDestination(41778U);
    msg.setDestinationEntity(176U);
    msg.value = 0.558589719465;

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
    msg.setTimeStamp(0.305249327204);
    msg.setSource(51894U);
    msg.setSourceEntity(234U);
    msg.setDestination(58455U);
    msg.setDestinationEntity(232U);
    msg.value = 0.852090514895;

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
    msg.setTimeStamp(0.47257762612);
    msg.setSource(11748U);
    msg.setSourceEntity(26U);
    msg.setDestination(28347U);
    msg.setDestinationEntity(24U);
    msg.value = 0.646312202969;

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
    msg.setTimeStamp(0.0167238745988);
    msg.setSource(12756U);
    msg.setSourceEntity(140U);
    msg.setDestination(11816U);
    msg.setDestinationEntity(89U);
    msg.value = 0.613183878434;

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
    msg.setTimeStamp(0.522577969177);
    msg.setSource(52419U);
    msg.setSourceEntity(51U);
    msg.setDestination(41835U);
    msg.setDestinationEntity(192U);
    msg.value = 0.59806035098;

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
    msg.setTimeStamp(0.554399095141);
    msg.setSource(31420U);
    msg.setSourceEntity(159U);
    msg.setDestination(65117U);
    msg.setDestinationEntity(204U);
    msg.value = 0.0364858431347;

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
    msg.setTimeStamp(0.197906057466);
    msg.setSource(40523U);
    msg.setSourceEntity(33U);
    msg.setDestination(44656U);
    msg.setDestinationEntity(176U);
    msg.value = 0.29088105886;

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
    msg.setTimeStamp(0.351920578436);
    msg.setSource(26725U);
    msg.setSourceEntity(100U);
    msg.setDestination(33241U);
    msg.setDestinationEntity(102U);
    msg.value = 0.913316583615;

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
    msg.setTimeStamp(0.746626730608);
    msg.setSource(15277U);
    msg.setSourceEntity(50U);
    msg.setDestination(46590U);
    msg.setDestinationEntity(14U);
    msg.number.assign("OFOTPWUZOKOVFTTBYELBRBOPSYUETDQFSJFRIZBXJGWHDAJIFHRZMARZEYQBOTJUUUVCMZALNDQVXQOINBLOQZHGJXATPDXODEWXLQAIGAGDXRHCKGUNIMKLMDCEVQYQDVSXPURSKHPYMY");
    msg.timeout = 28863U;
    msg.contents.assign("SPMLXGZSPNNMTSCDGAYZVVUKDFDHIOOCDPSWP");

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
    msg.setTimeStamp(0.286133314492);
    msg.setSource(55616U);
    msg.setSourceEntity(81U);
    msg.setDestination(65114U);
    msg.setDestinationEntity(100U);
    msg.number.assign("TKVJBWVMZKXDEYYGOIGZOWGNYCTGEGCCTFSMZEXBQYJNAWRPYMJQFSNXHNQGADARCNVBFLNWATDPTRWPJPJURIXJIVNSVOQDFDBGIBRDWKEEJEHHFLNRPSKZOZAHQONUMAMULPZHXKFTPIYKBEBA");
    msg.timeout = 43656U;
    msg.contents.assign("EYRZTVPKFBSWCMTIXKAQGBWKRIGVPHYOWSVGDLIIFHYWRSGGCLDXQSCWMW");

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
    msg.setTimeStamp(0.744297899523);
    msg.setSource(17607U);
    msg.setSourceEntity(26U);
    msg.setDestination(59362U);
    msg.setDestinationEntity(217U);
    msg.number.assign("DBTDDSBWOBMRXQQKCZXWUSBKKFZGZG");
    msg.timeout = 8762U;
    msg.contents.assign("ZNTKVJBPOEVOXWMLRAMIXHVIIFZPUYYGFLTBWQTFGEEUVMPQBAGCQXNUNEVMRSNPSXBQGXUBWAVZEJOSXGWGDZQZUDNYQLOMOCWTLXHJUBFSARNAUABXPHTSYJTTMJFIRYWBFCMHRDIHDEOADXNPHQSIKJJZFDBIQKOLLCPAFDOLUCJCRHZGKVQHDSFGDTWRANWYTACPMVRZEVSSCKFOEZNTULECGZHGJYKLBRNEKPIPYYWRVSMKJYU");

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
    msg.setTimeStamp(0.292834900186);
    msg.setSource(64605U);
    msg.setSourceEntity(192U);
    msg.setDestination(62215U);
    msg.setDestinationEntity(77U);
    msg.seq = 109350977U;
    msg.destination.assign("APYDXHELBHQFACBXKYKGRQZZEHIJMPGJPPNRJEWPOGUXLBUQMFCGVGNMLIGMVCWANUSQPMLRRJYRIDXLRBLXWYVDORVNSYBCJEHDNJHZOHQZTIKKOXVDKLCUSSMXOCEKFTTHICFWRDPNBKTRNQCLZGGIFVFDHZASVJQSINJWEFPTHWEWCNKIQYBVUFZTOSXBLIZAMGHUJDWTYOWMUZQMTXXEGEOSYWFBOUCJUTKDOYAVUYPTAIDAZEFAPNLQMB");
    msg.timeout = 12927U;
    const char tmp_msg_0[] = {63, 107, 3, 71, 103, -90, 14, 110, 63, -58, -43, 107, -109, -73, 44, 102, 54, -110, 41, 13, -29, 40, -85, 78, 13, 102, 35, 73, -73, -113, 97, 31, 51, -63, 21, 13, -63, -2, -105, -46, -48, -38, -113, 74, 71, 16, -10, -7, -90, 108, 49, -40, 45, 13, -52, -117, -51, -72, 9, 35, 87, -54, 81, -97, 83, -128, -115, -128, -37, -111, -116, -96, 6, -62, 78, -71, -75, 23, -84, -79, 107, 111, 80, -120, 71, 16, 88, -52, 105, -125, 91, 87, -126, -128, 71, -97, 67, -125, -11, 34, 41, 48, -122, -101, 100, 103, -64, -12, -64, -72, -117, -35, -92, -7, 8, -83, -38, -31, -47, 2, 76, -19, -33, -112, -18, 1, -53, -126, 110, -110, -57, 16, 47, -103, 104, -115, 108, 70, -98, 7, 31, -63, 16, -95, 107, -123, 43, -128, 34, -31, 65, 61, 39, -61, 64, 108, 53, 101, 45, 40, 103, 104, -49, -55, -117, 24, 51, 94, 119, -74, 70, 21, 29, 70, 20, -46, -44, 32, 51, -22, -1, 49, -127, -84, -90, -119, 89, 14, -54, -28, -51, -67, 107, -127, 10, 1, 41, -127, -38, -30, -99, -24, -89, -60, -101, 60, -16, -47, 6, 5, -30, 56, -30, -103, 95, 53, 16, -33, -61, -22, -1, 61, 93, -51, 37, -56, 126, 45, -90, 50, 42, -43, 85, 2, 63, 53, 98};
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
    msg.setTimeStamp(0.592231499782);
    msg.setSource(51694U);
    msg.setSourceEntity(143U);
    msg.setDestination(6821U);
    msg.setDestinationEntity(189U);
    msg.seq = 2857887879U;
    msg.destination.assign("GUHUGJILFLONYQABPLKHVWJHGYIGVAWTTYNDRWLQPYNVNEGAUPRRLOEXOKIUDRFYDCMFRMGPUIZIMUASPHF");
    msg.timeout = 24198U;
    const char tmp_msg_0[] = {-91, 9, 44, -81, 97, -125, 45, -102, -15, 17, 103, -75, 47, 25, -72, -32, 94, -122, 0, 110, -45, -32, 1, 114, -39, -70, -111, 41, 29, 87, 44, 59, -71, 24, 79, -96, -40, -22, 61, -102, -27, 21, -123, -24, 34, 0, 60, 110, 46, -36, 3, -70, -36, 25, 111, 32, -107, 32, -124, 16, -83, -79, 113, -29, 73, -26, -10, 124, -44, 90, 86, 56, -2, 26, -70, -125, 76, -69, 25, 37, 71, 99, 23, 122, -62, -116};
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
    msg.setTimeStamp(0.547195820766);
    msg.setSource(50874U);
    msg.setSourceEntity(35U);
    msg.setDestination(966U);
    msg.setDestinationEntity(183U);
    msg.seq = 2561948031U;
    msg.destination.assign("RHMGUFXXUKBVITEGECVMCCXIEHEUIMRUQKOADMGTSREIFVJZDWISDAADVOISWATTFQYMBKWNNPZJWFUQHWGBLIHQVRWFGTKTIXMNRPWYZCCZHKAAIMEVBFJ");
    msg.timeout = 18991U;
    const char tmp_msg_0[] = {34, -127, -5, 25, -89, 54, -50, 50, -40, -46, 24, 116, -114, 67, 75, 65, 104, -83, 119, -62, 107, -107, 96, 78, -20, 18, 23, -35, -37, 64, 64, 110, -51, -115, 84, 43, 36, 5, 38, -38, 86, -112, -122, -37, -90, -7, -83, 106, -122, 113, -30, 6, 72, -94, -27, -25, -8, -66, 17, -109, -17, -68, -95, -60, 65, 16, -64, -101, 11, 32, 98, 26, 37, -28, 0, -73, -52, 29, 20, -105, 15, 18, 73, 42, -99, -128, 90, 23, 80, 96, 18, -4, -105, 50, 100, 110, -50, 84, -56, -27, -47, -9, 21, 10, 102, 69, 87, -106, 65, -26, 66, -46, -123, 124, 126, 117, 10, -108, 17, 24, 64, -16, 91, 117, 37, -15, -118, -83, 116, 85, -70, 65, 31, 15, -25, -99, 57, 62, 89, 24, 62, 71, -59, -111, -84, 110, -2, -65, -101, 31, -36, 109, -107, 44, -31, 55, 81, 74, 55, 69, 26, -57, -124, 114, 52, -36, -106, 79, -11, -124, -123, 87, 48, 27, 39, -96, -24, -121, 104, -110, 124, -20, -77, 50, 94, -128, -48, 25, -119, -77, 57, 71, 120, 18, 52, -53, 9, 56};
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
    msg.setTimeStamp(0.580839672758);
    msg.setSource(32468U);
    msg.setSourceEntity(55U);
    msg.setDestination(24059U);
    msg.setDestinationEntity(187U);
    msg.source.assign("BGLVTTYMTBEUKBRGKPOBOTECIDNIXZFEDRIHLSGKXFHEXXAVDQTMRBWZUHWVTJLDFGKEGNUKYVVROHUCUMZMHQAFQCXCVKPRQVJYMCOVPUPIEAKNWDSLFNDBXOFHPGXGSURIHJVFLYTLRSOPFZVIWMUCRYOJAYOWFSQHCLYSAICZCJCUWNPLJIZZGNXEXDNYWDJZPOYSQJJWBMKPNAMLSDMFNIXZYTHASMQGDEOIPAQUBJZGBTWLASQ");
    const char tmp_msg_0[] = {-29, -66, -62, -59, -124, 25, -43, -87, -14, -90, -36, 60, 7, -81, -106, -67, 77, -7, -72, 54, -92, 2, -85, 28, 49, -39, 21, -123, 57, -90, 57, -22, -122, -89, 51, -37, 98, 23, 84, -20, -90, 1, -53, 62, -11, -19, 26, -117, -77, -64, 58, 13, 22, -29, 20, 81, 86, 35, -84, -95, 126, -25, -37, 16, -111, 11, 23, 95, 106, 46, 91, 79, -65, 53, 83, 18, -123, -53, 6, -53, -28, 73, 126, 106, 8, -48, -6, 70, -16, 61, -53, -86, 58, -98, 52, 44, 81, -51, -86, -113, 38, 36, 15, -60, 11, -43, 21, -59, -55, 120, -91, -69, -42, -17, 84, -29, -99, -20, -107, 31, 96, 41, 115, 22, -69, -7, -86, -7, -67, 58, 51, -61, -119, 101, -97, 99, -25, 13, -45, -122, -62, 24, 14, -57, 121, -67, 55, -20, 9, -74, -82, 89, -126, -91, 113, 26, -81, -68, 58, -31, 45, -41, 110, -79, -92, -101, 4, 75, 52, 56, 70, -120, 82, 76, -106, 22, -114, -26, -53, -27, 11, -117, -102, 37, -25, -28, 122, -54, 4, -2, 15, -103, 21, 70, -15, 23, -74, -3, -13, 18, 57, 51, 9, 48, 62, 69, 81, -83, 75, -43, 89, 32, -89, 65, 125, -93, -45, 97, 94, 14};
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
    msg.setTimeStamp(0.787615119675);
    msg.setSource(60850U);
    msg.setSourceEntity(194U);
    msg.setDestination(47488U);
    msg.setDestinationEntity(215U);
    msg.source.assign("INTVMBSLAXVZGSPACOMTQQWNCQITVRUVMVLURWFFQDOBMYJQKZHROQZTNXRZCQPV");
    const char tmp_msg_0[] = {49, 72, 112, -66, -61, -3, -126, 51, 126, -11, 121, -57, 69, 95, -54, -4, 95, 82, 98, 62, -13, -29, 13, 74, 46, -80, -62, -22, -112, 102, -44, 76, -69, -54, -119, -7, 76, -7, 53, 88, -112, 51, -112, -99, 44, 13, -121, -119, -39, 111, 53, 92, -101, 8, 22, 20, 23, -3, 90, 11, 11, -95, -82, 121, 55, 119, -100, 64, 35, 106, -11, -35, -20, 114, 26, 40, -34, -55, -111, -98, -15, 2, -97, -111, 60, -111, 124, 43, -10, 11, -100, 12, 12, -123, -69, 74, 47, 41, -53, -27, 72, 69, -55, 51, -26, 97, -84, 3, 60, -94, -78, -11, 8, -9, -11, 30, 17, 4, 50, 107, -6, -17, -79, -16, -59, -43, -106, -120, -111, 24, -2, 46, 107, 57, -12, 87, 30, -15, 43, 89, -53, -90, -35, 65, 17, -38, 68, -84, 74, -50, 71, -44, 13, 7, 91, 73, -68, -97, 89, -78, 48, -92, 70, 97, -65};
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
    msg.setTimeStamp(0.00534190385781);
    msg.setSource(43034U);
    msg.setSourceEntity(150U);
    msg.setDestination(28353U);
    msg.setDestinationEntity(190U);
    msg.source.assign("YFVXMYTAHVABOKFVPKBWRMDSZIUNZSCGRFXTYSJWKLAUDJMQPNNIAZCHKIPFRPVHNUVIRRMZJGPMXELTEUWEOEZHPFRKKBSEVBRNKMBXCCSDYGGCGEEOQEJOCUZWTLPLXQFYXHLZUUDKHYMZFFHSHWJIJLOQWNQQFCTNNDVQENWZSDOVAUWOVUSKOAXRMXCCOGSQLLBVQGIJ");
    const char tmp_msg_0[] = {-26, 62, -10, 65, -14, -71, -78, 57, 54, -115, -99, -104, -34, -81, -59, -82, -103, 117, 49, -35, 67, -86, -26, -99, 62, 3, -68, 30, 22, -3, -108, 65, -94, -104, -55, 21, 121, -7, -1, -87, -64, -118, -36, 67, -126, 76, 64, 19, 56, -65, 97, -19, -107, 56, -109, 46, 83, 47, 104, 19, 67, 28, 120, 37, 5, 51, -95, 81, 75, -15, 7, 74, 77, -112, 22, -98, -30, 39, -80, -101, -70, -79, 105, -126, 50, 64, -91, -9, 103, -108, 75, 37, -20, -77, 5, -32, 121, -45, -52, -111, -4, -93, 49, 3, 11, 102, 30, -127, -19, 46, -80, 114, 64, -3, -126, 23, -18, 117, 46, 76, 93, -84, 15, -120, -52, 123, 104, -110, -62, 88, 67, -115, 69, 82, 8, -57, -72, 103, -110, -1, 74, 103, 61, 71, -39, -75, 7, -122, 20, 90, -32, 7, 82, 33, -9, 126, 41, 27, 126, -119, -72, -110, 48, 8, -77, 96, -115, 46, 37, 95, 110, -64, -50, -58, 68, 28, -32, 109, -83, -29, -58, -110, -127, 115, -28, -90, -39, -105, 72, -85, -62, 113, -46, 94, 16, 45, 102, 20, 25, 104, 21, -70, -21, -69, -101, -119, -12, 22, 102, 103, 93, -70, 26, 108, 94, 6, -59, 60, 19, 80, -76, 11, 65, -4, 21, 92, 20, -35, -111, 7, -28, 57, 34, 89, -103, 37, -88, -50, -115, -33, -13, 89, -78, -69, 49, -36, 102, 111, 14, 104, 48, -28, 65};
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
    msg.setTimeStamp(0.131632146222);
    msg.setSource(42769U);
    msg.setSourceEntity(191U);
    msg.setDestination(38237U);
    msg.setDestinationEntity(236U);
    msg.seq = 1096956766U;
    msg.state = 84U;
    msg.error.assign("HGHEBFZJAJDDRXPLQKYGIGTJWOIUCVMEOKKJLEPSUOOUIHKTXHNEMRAHUXZDVBELEKPCQLGZTZTWOOWXCAZYAIREFBRTULGYBLVQMPAELOHWQYAA");

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
    msg.setTimeStamp(0.380443915696);
    msg.setSource(12646U);
    msg.setSourceEntity(227U);
    msg.setDestination(23943U);
    msg.setDestinationEntity(201U);
    msg.seq = 4123207087U;
    msg.state = 193U;
    msg.error.assign("IBNDDMHHZQUWYSJSIJCMBZWISILCBWKQRNUEBJZAEVLGVUQXJQXFNOLFKSFYHBSEOOCWXYEGRYATDNZYCETFEKEDAJBLBVDICKAVPMSMGDLMHBVZNQRQXZCXFUTFHJTFJIOZRKERTIVYVYSTMIAMWPZXCKWHGOQYXFCNGPSGOFVSRLPVUHRIQWHTRGNLEXKMWMPAGOWOKLDFZMPNUULZWUSHCTKUVKHAECJTJOB");

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
    msg.setTimeStamp(0.420405407742);
    msg.setSource(2105U);
    msg.setSourceEntity(123U);
    msg.setDestination(4886U);
    msg.setDestinationEntity(163U);
    msg.seq = 2002476371U;
    msg.state = 60U;
    msg.error.assign("SRTKVMKQHXYNAPWRFQJGQHRPEBJKNNDFYOMKBEDJFPQFQZMHSEJXUJTUZFNZBHDOBYCTGGUFODIRQSWNTJCTVZVZLDALSOGCRLRXCULUOXILOAPJEGCSTAWDXZUJTIXQDNTPMYRCUWSDVKKRMEQIDVEIRYTYXUKSBFIAHGHCAWAPZGMIKAWOGAQRPHUYNFWBIMGVSBLNWZHYBCPZLPLD");

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
    msg.setTimeStamp(0.117888002914);
    msg.setSource(21353U);
    msg.setSourceEntity(70U);
    msg.setDestination(29715U);
    msg.setDestinationEntity(6U);
    msg.origin.assign("WWKSTNWXXTAWNRSKYOMARSRYTDMMYQQFYYGITOLHNHYUAZZLVKUTENLBGGODHZHSCCIXVUWOOAWSBCYMQQLIOFVUVZCJTRBSNBRFNEUSQGIOEBPFDPAXDKPFDCGIDGQDLMVQNTZMWTBKAGZCVSVNXQAZRTBEOQIPYDPEPAAUVFMZSEZXCBULWIRFNDQZPJKIXJHHJJMHGDMGXKJINARLROJGVJOEKPELLHPFRKHXLEVBS");
    msg.text.assign("HPUKLFTMOPRJMANRDWNPOLXSGTPYVSRRZMTHKWKZIL");

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
    msg.setTimeStamp(0.125262706136);
    msg.setSource(60573U);
    msg.setSourceEntity(112U);
    msg.setDestination(44790U);
    msg.setDestinationEntity(72U);
    msg.origin.assign("YKJCKNYOGLHVUKIRGDBLFRIOOLCYVURRWJAJFFALQVMQVHIIADBXUTOTMKPSOWOGSPVLMQQEUEZJHKMLVUEEQYPCTDMQLVTSJOGRZWXVUMWNHYSZPJGYE");
    msg.text.assign("MJCPJRJUKIMQXIWPHOJPAGNLBSLOSWNDFBPSFFREINCNZHBVYGOQBMTAHEGWNTIGZDVUPBGNDBAUCIORJWAEFTVXAK");

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
    msg.setTimeStamp(0.636538784056);
    msg.setSource(62533U);
    msg.setSourceEntity(124U);
    msg.setDestination(3909U);
    msg.setDestinationEntity(128U);
    msg.origin.assign("UJKNLRKHJHFRPWESBPVHMNNQSWGCOCLYRMPOGNSIPLLLAHSLMGDYHTYFBWGLCLD");
    msg.text.assign("RMLODTBQMSWSLSQYNLMUTZJYFRKXOMUKAITYJHLLDPYUFFGQPTWGGUPIGWCOJHDUUEITHCAKXHNWEDGTXY");

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
    msg.setTimeStamp(0.878857317233);
    msg.setSource(32816U);
    msg.setSourceEntity(118U);
    msg.setDestination(62609U);
    msg.setDestinationEntity(208U);
    msg.origin.assign("CJPUDXWJXMVZQRTIDZLNGOSCFQXUJSBIDWIWIGOCYFIXGQVLRQNNCCDEGBYECMYGKHFQFSZQZIBVAGBZCRWKAJOUNFNHYEUELVUVBTDXRDJPGKXDVSYYAQZHWLFOFHHQGNOKBPEFTNMEQANWAANZPNLDYLRTPFMKPXCKCXWYAMTTBYPUPEKSPLHTMVULCQWHGXMUKWHRMIARBAL");
    msg.htime = 0.0076617227601;
    msg.lat = 0.330832084422;
    msg.lon = 0.571192950533;
    const char tmp_msg_0[] = {47, -89, 21, -33, 24, -48, 81, 3, -18, -84, 107, -37, -13, -101, 125, 2, -108, 114, 30, -4, 42, -50, -74, -75, 71, -94, 79, -50, -68, -69, 116, 88, -125, -86, -64, -63, -125, -127, 58, 123, 96, 100, -32, -27, 113, -87, -58, -25, 15, -12, 43, -49, 22, -124, -107, 43, -121, -48, 15, -34, 88, -64, -10, -80, -111, 112, -105, 18, 13, 29, -40, 25, 65, 89, 38, 73, -59, 11, 69, -101, -56, 26, 124, 91, 92, -50, 103, -18, 85, -7, 55, -101, -103, 16, -15};
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
    msg.setTimeStamp(0.962800047522);
    msg.setSource(47115U);
    msg.setSourceEntity(141U);
    msg.setDestination(46010U);
    msg.setDestinationEntity(173U);
    msg.origin.assign("BNIBVEIWVAVUSNHAJXLDIUYRHDCKGIGMTQECDIHNMMNTXTVEGDEXNBXHTFKOPMQOJHUELQXZPVAYFSRAOIARKETQYOYZZPMOHFWHAMPUSQCBKPDXBLRGOAKQSJCWGLWMBAQWCQUSPQIKNJXCJUVYGOYMLZPFMBFVRYGNZVS");
    msg.htime = 0.528510780606;
    msg.lat = 0.53470777674;
    msg.lon = 0.522875663052;
    const char tmp_msg_0[] = {103, -84, -6, -94, 84, 36, -63, 93, 42, 32, -29, -72, 84, -64, -113, 43, 114, -66, -87, 78, -65, 45, -84};
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
    msg.setTimeStamp(0.850671038188);
    msg.setSource(23725U);
    msg.setSourceEntity(78U);
    msg.setDestination(11746U);
    msg.setDestinationEntity(250U);
    msg.origin.assign("LTBGQPMIKWYUJZXXEXBUWAIJVDHNAFYKSCCXFPRZHNCSYYZCLXLIFPPIUGVUVAUFJJINWAWHQCMQKLZTYEZXKHRRTOONFSBNIQIALVKQWVNEGTTUXWTGPQVWMXOQJOSVUDEZTUAEAYTNNDJGPAVMFFPMQOTNPCWGMACBDSZDWLUIHBRVYEMKFGTKQBR");
    msg.htime = 0.202682368808;
    msg.lat = 0.511206312357;
    msg.lon = 0.776729483837;
    const char tmp_msg_0[] = {-61, -18, -18, 52, -83, 69, 3, 97, -125, -16, -82, 15, 17, 99, -43, -119, 22, 61, -69, -65, -55, -36, 36, 81, 9, 12, 28, -35, 103, -82, 96, -60, 119, -52, -95, -112, 66, -12, -114, 22, -34, -104, 43, -15, 22, 65, -117, 76, 62, 111, 92, 50, 49, 34, -101, 119, -68, 31, -29, 51, 2, -94, 123, -68, 95, 107, -103, 71, 79, -79, -38, -42, 37, 29, 57, 13, 34, 47, -85, 60, 73, 66, -60, -58, -65, 33, 90, -106, 114, 16, -73, 38, 90, 64, 124, 96, -10, 91, 37, 58, 2, 29, -73, -112, 117, -95, 64, -13, -43, 73, 101, -66, 7, 82, 18, 42, -70};
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
    msg.setTimeStamp(0.396209032964);
    msg.setSource(45753U);
    msg.setSourceEntity(117U);
    msg.setDestination(31668U);
    msg.setDestinationEntity(39U);
    msg.req_id = 37813U;
    msg.ttl = 22990U;
    msg.destination.assign("XNHOKWTWMGBRZDOGYJFCPXIJHDGAUTVOLYQFKUJUSBYTOTDCPUVPWHBSIJBCFKHMLERIUZDXVPKZVVPQHKQKDQOWBESXFYUJSIJBNQEURKTFLPUEDCMWYQAZCSZCKWBALQMOISTFYWAEDCAEZTKSPVJOAMZHDMEQVNYNGIFPGZLZTQXNRJMRBLMXRIEICNDHAIYORPLGBEQPSLAYIGXWSYOVRGOWTJ");
    const char tmp_msg_0[] = {99, -60, 109, -37, -90, 13, -25, 89, 28, 15, 82, -102, -72, -112, -39, 32, -108, -47, -3, -32, 120, -77, -52, -88, 116, -18, -30, 77, -76, 52, 61, -64, -64, 76, 96, 100, -85, 64, 4, 18, -101, 114, -81, 74, 88, -46, -14, 108, 8, 43, -7, -75, 31, 4, -97, -101, -44, -6, -53, 17, 89, 78, 55, -95, -12, 99, -33, -32, -21, 45, -110, -111, 14, -114, -70, 25, 41, 11, 10, -101, -18, -109, -108, -124, 25, -81, 77, -39, 79, -93, -71, 70, -34, -1, 71, 12, 23, 51, 63, -99, -88, 87, 34, -97, -90, 80, 55, 45, -90, 119, -34, 125, 97, -33, -2, -14, -110, 23, -25, 23, -38, -14, 94, 26, -69, 24, -17, -111, -54, 35, -104, -114, -105, 56, -77, 117, 54, 19, -102, 123, -3, 39, -97, 124, -62, -53, 67, -89, 16, -87, -69, -67, -16, -122, -67, 7, 93, 92, -4, -33, 106, -65, 9, -83, 5, -82, 52, -11, 60, -62, -76, 67, -22, 55, 46, 23, 19, -38, 123, 32, 119, -113, -60, -55, 96, -122, 108, -1, 119, 86, 15, 53, 9, 5, -37, 96, -52, 91, 28, -25, 64, 93, -106, -35, 51, 72, 12};
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
    msg.setTimeStamp(0.357806913468);
    msg.setSource(14497U);
    msg.setSourceEntity(164U);
    msg.setDestination(46016U);
    msg.setDestinationEntity(235U);
    msg.req_id = 47544U;
    msg.ttl = 34950U;
    msg.destination.assign("TSMNWBMOHQYSRUZENBGQGDYOVIHRVNQCACAZCTFDUKEMZKBRIUGEUWSQOYOBWH");
    const char tmp_msg_0[] = {-87, -11, 110, -104, 115, -80, 104, -79, 108, -28, -68, -98, 51, -72, 74, -21, -60, 41, -8, 113, -66, 113, 102, 98, 3, 4, 46, -113, -128, 82, -52, 74, 50, -115, 55, -5, 101, -73, 21, 87, -38, 41};
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
    msg.setTimeStamp(0.601282922546);
    msg.setSource(15189U);
    msg.setSourceEntity(231U);
    msg.setDestination(59475U);
    msg.setDestinationEntity(11U);
    msg.req_id = 33832U;
    msg.ttl = 44660U;
    msg.destination.assign("RCORNFPISHCUBFAOYXLVVJPVBWRPLIHBHFCTIRCOXQVQDMJBAZGGZJGNEPYKLUOOXKUNGRXCPVWTFIURMIPWYLEMJNBQEQLRJKJSMNTPNMEHFHZHMWEDEOOXKVHSVPBWUXWHIZFWLBDGZCUHKSQNVSJTDZAGYEJYSYRAMCKGULUKXEZAQTA");
    const char tmp_msg_0[] = {108, -49, -101, 6, -27, 88, 63, 65, -86, 72, -9, 72, 21, 26, -35, 15, 39, 70, 18, 0, 51, -6, -71, -20, -88, 124, 41, 99, 20, 82, 46, -116, 43, -15, -42, -44, -85, -94, 66, 99, -6, 73, -26, -25, 53, 78, -69, -69, -63, 10, -72, -9, -124, 51, 37};
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
    msg.setTimeStamp(0.0843338502106);
    msg.setSource(58842U);
    msg.setSourceEntity(2U);
    msg.setDestination(14519U);
    msg.setDestinationEntity(4U);
    msg.req_id = 12853U;
    msg.status = 84U;
    msg.text.assign("AIGXBCLDTUINVXAHYRTOWUDBLLHEAMDPYXCFKGQMYBZMAQTXFTMULSDWOUFXWWKVFJTSNDNTNZFSVDQWIHRMYZHZGRIKETOQGIOCSMPGHZKAREJOCEDHUEMFVVPJLVXBGCKCRIMNIRWBVQEZBXITLUCOCFUQHJLQOYBWFBTPYZIT");

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
    msg.setTimeStamp(0.844762738071);
    msg.setSource(45256U);
    msg.setSourceEntity(207U);
    msg.setDestination(55774U);
    msg.setDestinationEntity(98U);
    msg.req_id = 32562U;
    msg.status = 251U;
    msg.text.assign("MZNMXPTHTKOMIUDARKGHSZWRFODGACPDANXXIANKTJUAFRFVGSIECBVPUCQWFHUKWZSYPGVWGYNJMKEICQQWQAIRWOKTVGQHLJMDOTTFLVHXJXIHGZYKA");

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
    msg.setTimeStamp(0.412319483593);
    msg.setSource(3587U);
    msg.setSourceEntity(86U);
    msg.setDestination(17967U);
    msg.setDestinationEntity(30U);
    msg.req_id = 8305U;
    msg.status = 25U;
    msg.text.assign("NBUTTNCYWVLRAJHJRQBTCCAFTWSXPIANHGSGCYGKMMLHABBPZDOKJVMYIXYMSOWSBIPYZLBOSRGXTEDPJYHDQRNZINETTCXQZOPYPOEMHXABVKNUVLXQLMSUCLEBWWWOZOSZAIUKXNUWMECHAVXVUPQZWNOSDHHGTYUIRGEKKQYQTVVKDAPCDWGCIPVF");

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
    msg.setTimeStamp(0.435722415405);
    msg.setSource(44008U);
    msg.setSourceEntity(143U);
    msg.setDestination(18326U);
    msg.setDestinationEntity(78U);
    msg.group_name.assign("AXJVYYRYQKOQPKWLSTRQWBJXBNIBEDUTPEDFRAFUNGBCMTGRTWGCFUCVGHELMLLMNMIHVTHBOKWSENCYWKPRKNNPEHKQWJQMCJGXGFEGEQBLHAZZSXHZZTRGAJCDXSOWYAADHRZFFUJMDIEMSVQQCHVBDKQKFPUIWDDDYVNJXMAALHQWJZSONTPXVPKBOLAEZSXUJNUEOSFZSLYYUIIRXIBBGLPTPKFOYLUOZD");
    msg.links = 4093525115U;

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
    msg.setTimeStamp(0.13365483531);
    msg.setSource(19755U);
    msg.setSourceEntity(101U);
    msg.setDestination(20648U);
    msg.setDestinationEntity(208U);
    msg.group_name.assign("JGJPDWOTMFIOUDWXJAVUJFLOYIXWBLLWLWIGHOFIRZCFIDTYBYKTMORYFY");
    msg.links = 920793037U;

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
    msg.setTimeStamp(0.267353095204);
    msg.setSource(49948U);
    msg.setSourceEntity(74U);
    msg.setDestination(2357U);
    msg.setDestinationEntity(16U);
    msg.group_name.assign("HULSBOYYMEFQHIVODAITVYBJKRYTJPRGSMVNTHOUDRRHIORKYEWJXZCQLNIFPGCULTCEOMOABJQICWUZFOKQTWHZVAMDDWGNGDURAVCUKFDABRSLGVDUNWXQYPDYNSCEYWZLCFMAMXGEXWYCLGDQTMJNMZKETFBBXMQWJIVPSAEMRAQTFQUACZPDQEHWKIEOOPJGTPLRLBSKNACXVFNT");
    msg.links = 3331311900U;

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
    msg.setTimeStamp(0.653535841536);
    msg.setSource(13765U);
    msg.setSourceEntity(77U);
    msg.setDestination(42633U);
    msg.setDestinationEntity(252U);
    msg.groupname.assign("UYPKAXFZTIDYWOJKSTOIFLMLQGVKIBVFYVJSYBWCBDJJBFHQWUYLLFZYELGAOQHJEDHDJSKOOAQYAPQVRWTPGZMXTKEXKOYIKHOHWGNSCUIONKUMSRULCAVURTAZEKFMGNWLLCWBPGVLMZNALFFXEMJWDXCOHIGPVGIBZVRRUXRTNMMABRNEAIMYXUAISEHTQCEDRPSPVCHQZRSYENBTFGPNJDCICMQBJBUHTD");
    msg.action = 105U;
    msg.grouplist.assign("DQPVJHPTNTUWYWCFRUWRPPMQFOABHPNAMRTLPGTUAYJGBFXAJNBVCYCSRZVYPXAGHHSJNHKJSSPZKWSNIYRZILGZXOOLZFMKOSKUCNSRODFNZWLVEHURRFVQKAFIBZIIPGOXFTMDCEGXYMTUCWVGHBTJXROMUATYDXBQXGLLLKEIHBQQVTCYIAVIBUWWZLTPNOYZFDEIJXCHHYFVCDMWQVDDQBJSUQNOZDOSKLGEIEWC");

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
    msg.setTimeStamp(0.804862013268);
    msg.setSource(60130U);
    msg.setSourceEntity(61U);
    msg.setDestination(46328U);
    msg.setDestinationEntity(244U);
    msg.groupname.assign("OUVHZSLADGJHRGTSSHJDYEFWTFYSBWANCGQRXXIECWPKWCTDAQBNUBLNUDMNZKGOHYEWFGHYOLIRYWNLPEOJTUGDCFIVSFPEDPPMVQVZNBICYHLMPIDKRSSCYMYTWUWZTTLZSPCEZRNZRYHVAQBXJAMLLUSFCBOAHEWQGUZO");
    msg.action = 42U;
    msg.grouplist.assign("AAFVYUUDOUUOQKTQYWDDYEENKNEEKOAYPHOPUAZCRFQBMHCZKVNNMSIMCRKLUVAMLVHJTNXONYZZZKJV");

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
    msg.setTimeStamp(0.123813673601);
    msg.setSource(36420U);
    msg.setSourceEntity(104U);
    msg.setDestination(15295U);
    msg.setDestinationEntity(79U);
    msg.groupname.assign("ROZHYFKJDEDJPOXDBHTTYKTVUDTHPZWEVNQTDWWBQBLEZAEOGCUZFJZIXNOFVLVLDHYEOICKYLJBVVGXHZWAVPAQKLAMDKDSNSQDROLPTPQBRSOUBKGINJMXMZYNMXTQALICWACMHGJIXSXWUCZPIURYTFYPNPRUG");
    msg.action = 74U;
    msg.grouplist.assign("UNNVDYZTJRIFHVLHBUZKWYQVOMQHFVBIQGATBTXWELDBSYQCYIXUAMZQFXPAKWVLLDRXILZXEUHKWLSJ");

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
    msg.setTimeStamp(0.389074765283);
    msg.setSource(57186U);
    msg.setSourceEntity(175U);
    msg.setDestination(29128U);
    msg.setDestinationEntity(211U);
    msg.value = 0.0975246230123;
    msg.sys_src = 33027U;

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
    msg.setTimeStamp(0.516721817933);
    msg.setSource(1912U);
    msg.setSourceEntity(90U);
    msg.setDestination(30499U);
    msg.setDestinationEntity(95U);
    msg.value = 0.531157928953;
    msg.sys_src = 4431U;

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
    msg.setTimeStamp(0.51804337619);
    msg.setSource(23403U);
    msg.setSourceEntity(246U);
    msg.setDestination(33556U);
    msg.setDestinationEntity(146U);
    msg.value = 0.629505102392;
    msg.sys_src = 23809U;

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
    msg.setTimeStamp(0.720841127106);
    msg.setSource(715U);
    msg.setSourceEntity(101U);
    msg.setDestination(55230U);
    msg.setDestinationEntity(106U);
    msg.value = 0.35869317305;
    msg.units = 134U;

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
    msg.setTimeStamp(0.0272922588204);
    msg.setSource(41288U);
    msg.setSourceEntity(45U);
    msg.setDestination(60038U);
    msg.setDestinationEntity(179U);
    msg.value = 0.619876835668;
    msg.units = 113U;

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
    msg.setTimeStamp(0.744900080304);
    msg.setSource(34924U);
    msg.setSourceEntity(198U);
    msg.setDestination(34562U);
    msg.setDestinationEntity(211U);
    msg.value = 0.383305373257;
    msg.units = 201U;

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
    msg.setTimeStamp(0.180876594387);
    msg.setSource(17825U);
    msg.setSourceEntity(106U);
    msg.setDestination(58781U);
    msg.setDestinationEntity(101U);
    msg.base_lat = 0.573905082658;
    msg.base_lon = 0.897310461186;
    msg.base_time = 0.85033673901;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 63409U;
    tmp_msg_0.destination = 50336U;
    tmp_msg_0.timeout = 0.767587350086;
    IMC::EntityState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 59U;
    tmp_tmp_msg_0_0.flags = 67U;
    tmp_tmp_msg_0_0.description.assign("VNUDQTMCLUPGYVSIGZURQB");
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
    msg.setTimeStamp(0.0163887394803);
    msg.setSource(10183U);
    msg.setSourceEntity(237U);
    msg.setDestination(16824U);
    msg.setDestinationEntity(78U);
    msg.base_lat = 0.78570857084;
    msg.base_lon = 0.74941820634;
    msg.base_time = 0.0963749519956;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 63776U;
    tmp_msg_0.destination = 40149U;
    tmp_msg_0.timeout = 0.627618236019;
    IMC::VehicleState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op_mode = 53U;
    tmp_tmp_msg_0_0.error_count = 250U;
    tmp_tmp_msg_0_0.error_ents.assign("XDFVHQBWHZIPTEIEKOMURPFHLNEJVDTGDNLXVTCWJYHAKVJDZVEZRHCNYEGUYBSGDRQKDASMBXJVIAQOAISBIDWENUODQFCFETAQGZNQLIVODPLXISJLKOZGSCBZJTSGFTLGLICSHUBAPYJAPNQARJMEXFQG");
    tmp_tmp_msg_0_0.maneuver_type = 42988U;
    tmp_tmp_msg_0_0.maneuver_stime = 0.340597667542;
    tmp_tmp_msg_0_0.maneuver_eta = 39762U;
    tmp_tmp_msg_0_0.control_loops = 169377467U;
    tmp_tmp_msg_0_0.flags = 50U;
    tmp_tmp_msg_0_0.last_error.assign("DQGQYQXUXKLRCBODYOMIRFAIIZWQVFPTQSXEGVHTLPHWLIYHNSJXHTTQWRMDWQEFZHNPOSAUFHNMVSOHSRYUKJECSJMCWZMUMSUUJDVLZKRVCPTPVYRJUSKJCAWMBILUOYBBXYCMBBZEUAKDXBZBACVGNXEDHGOECYOYGGPQTEVIBCNYNANOPKWZZLAWOKRFLFLSPWFKT");
    tmp_tmp_msg_0_0.last_error_time = 0.210830592345;
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
    msg.setTimeStamp(0.221264632658);
    msg.setSource(44638U);
    msg.setSourceEntity(131U);
    msg.setDestination(49288U);
    msg.setDestinationEntity(63U);
    msg.base_lat = 0.322382245482;
    msg.base_lon = 0.67187084924;
    msg.base_time = 0.169330677605;

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
    msg.setTimeStamp(0.580860180068);
    msg.setSource(49325U);
    msg.setSourceEntity(187U);
    msg.setDestination(35399U);
    msg.setDestinationEntity(225U);
    msg.base_lat = 0.204479314298;
    msg.base_lon = 0.261595945014;
    msg.base_time = 0.900028652528;
    const char tmp_msg_0[] = {38, -89, -55, -103, -52, -78, -11, 31, -98, 65, 101, 27, 18, 73, 28, 39, -55, 42, -43, 35, 101, 16, -50, 45, 114, -102, 118, 27, -50, 37, -113, -95, 30, -76, -6, -43, -88, -66, -75, -85, 5, 79, 115, -2, 64, -82, -55, 0, -70, 25, 62, 32, -29, -17, 84, -6, 47, -77, 31, -1, -28, -11, 53, -82, 4, -112, -128, 56, -78, 125, 53, -124, 77, -49, -119, 97, -81, -82, -50, 125, 102, -42, 85, 9, 89, 91, 41, -89, -101, 75, 29, -128, 58, 57, 58, -38, -53, 82, -122, -87, -4, 53, 46, 97, -71, -76, 118, -92, 52, 74, 23, -43, 115, 19, -105, -113, -124, -64, -86, -79, -32, -31, 71, 21, -21, 118, -1, -38, 109, 15, -18, 122, -88, 25, 40, -39, 1, 37, 96, 98, 50, 95, -121, -39, 7, 74, 54, -40, 126, -76, 32, 59, 27, 93, -42, -18, -41, 79, -102, -98, -118, -8, -90, -91, -2, -43, -54, -10, 29, 35, 57, -105, 41, -74, -57, 4, -99, -67, -15, -110, 12, 83, 86, 85, 50, 9, 50, 69, 116, 98, 24, -82, -41, 84, 113, -1, -97, 57, -24, -78, 45, 53, -105, 121, 76, 54, 90, -119, -110, -46, -35, -29, 59};
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
    msg.setTimeStamp(0.684713558498);
    msg.setSource(56184U);
    msg.setSourceEntity(188U);
    msg.setDestination(43235U);
    msg.setDestinationEntity(33U);
    msg.base_lat = 0.135817922146;
    msg.base_lon = 0.390553149316;
    msg.base_time = 0.82959272016;
    const char tmp_msg_0[] = {-83, 62, -97, 69, 55, -33, 90, -98, -46, 20, -36, -47, -104, 105, -3, 19, -106, 82, -53, 72, -107, -15, -37, -96, -101, -104, 32, -41, -128, 43, -114, 105, 49, 40, -59, 6, 11, -102, 105, -88, -11, -29, -101, -15, 70, -18, -27, 29, -28, -39, -112, 0, -110, 89, -12, -114, -75, -51, 91, -54, 124, 100, -64, 68, 111, -20, -55, 14, 57, -1, -47, -40, -51, 41, 81, 11, -6, -25, 22, 59, 109, 18, 40, -16, 57, -120, -80, -50, -125, 70, 25, -64, -58, 77, -36, -97, -122, -1, -76, 123, 122, -108, -31, 66, 59, 43, 32, 76, 58, 6, 92, -22, -51, 43, -117, -2, 35, -31, 119, 116, 93, -5, 95, -13, -93, -97, 91, 99, -13, -78};
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
    msg.setTimeStamp(0.23136930517);
    msg.setSource(5017U);
    msg.setSourceEntity(14U);
    msg.setDestination(55803U);
    msg.setDestinationEntity(79U);
    msg.base_lat = 0.519006335595;
    msg.base_lon = 0.303541909601;
    msg.base_time = 0.323566218543;
    const char tmp_msg_0[] = {23, -99, 46, 117, 42, 98, -2, -55, -103, -94, 125, 56, 90, 67, 87, -29, -125, 12, -39, -5, -47, -32, -49, -16, -46, 95, -2, -17, -7, -123, -23, 74, 126, -33, 86, -49, -127, 9, 108, 40, -32, 35, -83, 20, -116};
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
    msg.setTimeStamp(0.102353894523);
    msg.setSource(7174U);
    msg.setSourceEntity(245U);
    msg.setDestination(55555U);
    msg.setDestinationEntity(162U);
    msg.sys_id = 3544U;
    msg.priority = -108;
    msg.x = 27441;
    msg.y = -5491;
    msg.z = 14406;
    msg.t = 9752;
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 183U;
    tmp_msg_0.actions.assign("GIDHUFSRKTM");
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
    msg.setTimeStamp(0.5576349425);
    msg.setSource(7774U);
    msg.setSourceEntity(191U);
    msg.setDestination(64729U);
    msg.setDestinationEntity(14U);
    msg.sys_id = 45054U;
    msg.priority = -68;
    msg.x = -23688;
    msg.y = 21193;
    msg.z = 4547;
    msg.t = 19011;
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 213U;
    tmp_msg_0.speed = 41615U;
    const char tmp_tmp_msg_0_0[] = {-45, 122, -26, 112, 98, 81, -27, 11, 65, -100, 84, 95, -77, 44, -24, -31, 23, 73, 101, 37, -61, 42, 49, 28, 71, 111, -21, 106, 39, -14, -97, 81, 41, -32, -78, 123, -87, 52, 123, -128, 35, 1, -1, -86, 0, -69, 91, -81, 26, 8, 88, -89, 54, -42, -68, 106, -79, 118, -119, 86, -9, -44, 34, -108, -51, -33, -42, -98, -95, 4, -90, 121, -106, -113, -82, 64, -115, 63, -80, 44, -109, -106, -91, -109, -41, -42, 56, 112, 90, -116, 1, -50, -116, 84, -23, 95, -22, -83, 110, 61, 8, 55, 39, -44, 41, -1, 40, 92, -123, -127, 74, 8, -115, -66, -113, 126, 92, 65, -46, 69, -113, 35, -26, -56, -49, -53, -38, -128, 8, 62, -1, -57, 34, -76, 89, 98, -53, 16, -93, -34, 3, -54, 126, 60, 80, 50, -53, -76, -65, 120, -102, 78, 110, -69, -30, -91, 82, -83, 14, -45, -125, -101, 95, 77, 122, -99, 16, -97, -114, -48, -35, -14, 11, -76, 79, 27, -16, 104, -114, -20, -104, 37, -71, -22, -4, -100, -21, 17, 87, -78, 32, 6, -92, 6, 80, 31, 38, 86, -44, 21, 95, -56, 35, 93, 27, -24, 61, 118};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.248880687993);
    msg.setSource(36845U);
    msg.setSourceEntity(105U);
    msg.setDestination(19773U);
    msg.setDestinationEntity(51U);
    msg.sys_id = 42136U;
    msg.priority = -114;
    msg.x = -30651;
    msg.y = -8950;
    msg.z = -3801;
    msg.t = -9019;
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 26U;
    tmp_msg_0.error.assign("YXTXFDKJWLTEZSHAHLYFPIMTWABIOBBDUNZDOKDRFDKYXTLUVIQWOPTCNJXQEPLAPFEONMLTOIWVHZYYPVHIEZZWQCSSHHABGZWFVVMYCQXRLKUUNPZQSMEJGNOCCVJKNGREOIXRIYVXDQRMMVWTSBASYTQCICCBJIHNHGGXKBJUEMYCLRZBBZKDEJAHJFVPFYOURQLFLOICNVEMGBPGTUUFKFSRRSUQSLQJGWAHKAMANWNGMKPZXESPADD");
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
    msg.setTimeStamp(0.34312627215);
    msg.setSource(62693U);
    msg.setSourceEntity(148U);
    msg.setDestination(48970U);
    msg.setDestinationEntity(42U);
    msg.req_id = 16192U;
    msg.type = 84U;
    msg.max_size = 9042U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.849205919901;
    tmp_msg_0.base_lon = 0.110636603056;
    tmp_msg_0.base_time = 0.732738930867;
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
    msg.setTimeStamp(0.958824879619);
    msg.setSource(27371U);
    msg.setSourceEntity(181U);
    msg.setDestination(15175U);
    msg.setDestinationEntity(230U);
    msg.req_id = 9500U;
    msg.type = 199U;
    msg.max_size = 64245U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.772358327489;
    tmp_msg_0.base_lon = 0.0986587515366;
    tmp_msg_0.base_time = 0.344255546618;
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
    msg.setTimeStamp(0.559985919173);
    msg.setSource(25568U);
    msg.setSourceEntity(230U);
    msg.setDestination(59763U);
    msg.setDestinationEntity(246U);
    msg.req_id = 8687U;
    msg.type = 174U;
    msg.max_size = 20533U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.229641472415;
    tmp_msg_0.base_lon = 0.274847713162;
    tmp_msg_0.base_time = 0.638135742054;
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
    msg.setTimeStamp(0.753728329346);
    msg.setSource(36501U);
    msg.setSourceEntity(60U);
    msg.setDestination(29713U);
    msg.setDestinationEntity(118U);
    msg.original_source = 51367U;
    msg.destination = 23540U;
    msg.timeout = 0.328657855427;
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 206U;
    tmp_msg_0.entities.assign("CTQFAZIGDXOJFGSOJPVAZWTFDERVXHXKOLVGSRTOIWNQMSGRDPYLEYBPBOCYOCAHXZJWGNMHQCIJMRFAUWL");
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
    msg.setTimeStamp(0.331127763501);
    msg.setSource(28126U);
    msg.setSourceEntity(246U);
    msg.setDestination(13702U);
    msg.setDestinationEntity(87U);
    msg.original_source = 32834U;
    msg.destination = 3912U;
    msg.timeout = 0.0445828123605;
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.921328793237;
    tmp_msg_0.lat = 0.130917650896;
    tmp_msg_0.lon = 0.565687849759;
    tmp_msg_0.z = 0.470318388055;
    tmp_msg_0.z_units = 167U;
    tmp_msg_0.travel_z = 0.57168858724;
    tmp_msg_0.travel_z_units = 68U;
    tmp_msg_0.delayed = 30U;
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
    msg.setTimeStamp(0.615255621199);
    msg.setSource(50979U);
    msg.setSourceEntity(51U);
    msg.setDestination(29878U);
    msg.setDestinationEntity(229U);
    msg.original_source = 27146U;
    msg.destination = 10245U;
    msg.timeout = 0.224422792781;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 57064U;
    tmp_msg_0.lat = 0.330921993301;
    tmp_msg_0.lon = 0.960481146868;
    tmp_msg_0.z = 0.989687273189;
    tmp_msg_0.z_units = 51U;
    tmp_msg_0.duration = 46897U;
    tmp_msg_0.speed = 0.46470403596;
    tmp_msg_0.speed_units = 87U;
    tmp_msg_0.type = 23U;
    tmp_msg_0.radius = 0.0933264430063;
    tmp_msg_0.length = 0.0568975180024;
    tmp_msg_0.bearing = 0.253189919179;
    tmp_msg_0.direction = 53U;
    tmp_msg_0.custom.assign("SAMTXIGWYJHMDZTXTGTKKDZUXUWFOAPFOCBDNRJMQGDCQHTNQLLV");
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
    msg.setTimeStamp(0.721313729024);
    msg.setSource(12135U);
    msg.setSourceEntity(165U);
    msg.setDestination(6506U);
    msg.setDestinationEntity(182U);
    msg.type = 78U;
    msg.comm_interface = 51067U;
    msg.model = 42766U;
    msg.list.assign("NLQBRXLBKWNQPVMQHLIBVGRCUMIXWXCYIDDQLOHTJPKXSH");

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
    msg.setTimeStamp(0.065381290389);
    msg.setSource(56893U);
    msg.setSourceEntity(155U);
    msg.setDestination(34813U);
    msg.setDestinationEntity(106U);
    msg.type = 99U;
    msg.comm_interface = 48296U;
    msg.model = 51597U;
    msg.list.assign("PDFRLEJRRE");

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
    msg.setTimeStamp(0.821850647151);
    msg.setSource(20527U);
    msg.setSourceEntity(77U);
    msg.setDestination(59182U);
    msg.setDestinationEntity(59U);
    msg.type = 160U;
    msg.comm_interface = 26890U;
    msg.model = 48401U;
    msg.list.assign("UYQJDBTDULEPFHNVYCHFQWEFQNPCCTBIGIIATGZQDKAT");

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
    msg.setTimeStamp(0.594502862766);
    msg.setSource(32018U);
    msg.setSourceEntity(193U);
    msg.setDestination(11483U);
    msg.setDestinationEntity(63U);
    msg.type = 4U;
    msg.req_id = 1334515287U;
    msg.ttl = 35885U;
    msg.code = 171U;
    msg.destination.assign("XUDOKJCIQXVKCHFPJDEDSDDQZDDYMHKPZOVRNJQRM");
    msg.source.assign("CJDXLTBTQEORYQAGYRVYMIWUUVDBNWQOHHANKFIFNJAJGTBJLWOQNMKCHQTRZYBILDZOTRKTALEHWKVTSEMPANAFNSYZMEMKFNXEWATFKCDDGXHIAHTNXUFWYHSBXOL");
    msg.acknowledge = 237U;
    msg.status = 29U;
    const char tmp_msg_0[] = {83, 67, 114, 88, 96, -69, -70, -70, -107, 35, -27, -122, -69, 30, -81, -18, 56, -66, -54, 105, 13, -105, -27, -105, 32, 78, 126, 123, -52, 5, 68, -23, 93, 81, 126, 60, 101, -92, 35, 1, -99, -35, 18, 7, 110, -24, -90, 82, -111, 16, 31, 2, -63, -85, 53, -45, -102, 43, 6, -121, 7, -1, 81, 16, -23, 45, 75, -106, -105, -38, 14, 105, -92, -15, 50, -91, 35, 125, 14, -46, 46, -121, 79, 0, -84, -78, 18, 95, 107, -22, 85, -95, -79, -119, 44, -117, 11, 3, 16, -79, -93, -60, 70, 46, 80, 105, 90, -101, -78, 71, -38, -47, -14, 56, 66, -56, -37, -128, 68, -6, 76, -44, 47, -24, 81, -82, -102, -62, -123, 8, -31, -88, 64, 35, -112, -126, 22, -52, -106, 77, -16, -29, -118, -26, 68, -50, 30, -61, 25, 42, -38, -54, 102, 113, -84};
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
    msg.setTimeStamp(0.185775722567);
    msg.setSource(59871U);
    msg.setSourceEntity(105U);
    msg.setDestination(61949U);
    msg.setDestinationEntity(37U);
    msg.type = 243U;
    msg.req_id = 2604589190U;
    msg.ttl = 2565U;
    msg.code = 35U;
    msg.destination.assign("OWNHOWHNIUACCIWGXZEUEGXGOBMFHJQEJAIHNKUEUNYKASDALEEIJMCMXFRVIMUWVLMOGGXHOJBRVVZBQPJJKYXYQSLMPVNTQQTWREQXKHTQHDUWSTPZTXOCDVDMRGCZKPXHASPLPUYGAAZYFLCKIKFKISR");
    msg.source.assign("FMKSWTHWZKGULVMIJSFYGUWPLOIDCEEBPYLNOQCGWLBVMRNVDPOFUJBZZDJIXVCUPAHSDSGJJFBZMWHEASYCQRNRSXGBZSLJHGA");
    msg.acknowledge = 222U;
    msg.status = 111U;
    const char tmp_msg_0[] = {73, -28, -95, 40, 105, -62, 100, 102, -57, 122, 26, -123, 61, 20, 30, 9, -28, 9, 82, 115, 12, -76, 30, -39, -114, 33, -127, 20, 7, -66, -59, -68, -113, 76, 0, 38, -99, 31, 63, -80, -44, -1, -128, -87, 85, -15, 53, 94, -113, 44, 75, 104, 44, -80, 45, -10, -43, 2, 25, 70, -31, -31, 89, -126, -117, 87, -85, -122, -69, -125, -87, 76, 31, 38, -115, -49, -27, 32, -54, -67, -72, 54, 15, 121, -105, 25, 18, -84, -61, 100, -26, 15, 31, -122, -20, 38, -121, -22, -56, -31, 95, 126, -64, -106, -63, -108, -31, 4, 107, 26, 28, 53, -31, -32, -110, -76, 33, 72, -121, -70, -8, 91, -113, -113, -79, -41, -1, -60, 120, -82, -78, -43, -62, 31, -42, 10, 37, -24, -89, -85, -126, 41, -120, 30, -115, -97, -112, -105, -66, -11, 102, 82, 20, 100, -18, 124, 37, -92, -53, -23, 106, -39, -65, -19, 17, -21, 43, 13, 57, 107, -46, -100, 71, -78};
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
    msg.setTimeStamp(0.177505173281);
    msg.setSource(60288U);
    msg.setSourceEntity(179U);
    msg.setDestination(56244U);
    msg.setDestinationEntity(218U);
    msg.type = 146U;
    msg.req_id = 477411419U;
    msg.ttl = 3338U;
    msg.code = 186U;
    msg.destination.assign("QHBTEDOHPBBSQBSKUHPZGIEEGVTIAZNANVUMRJOZYDGANPBNLXCXSBJIHLQIGXATUMGIJXCPGXSYYVKNMARPNWQFJATTCILJFYPRYUDWWHYECKFWZVHSRGFQLNOLAYKCDBUZYUDDKSOWZISXLPLSFWJHMCVJEEOPQEVOBQKCMUXNVDYVLMFCVSKXAQGYGWKTFEWLZRVBIJARDQQLUXKONRZZHC");
    msg.source.assign("NGGWCFXQHXXGLBJYAQOVUMIZJFWHMKOMJPQJCHQTJOIOORYQAMXNAXACF");
    msg.acknowledge = 254U;
    msg.status = 73U;
    const char tmp_msg_0[] = {2, -100, 112, 71, 19, -118, -113, 44, 101, 74, -59, 57, -57, 55, 7, 50, -71, 81, 72, -35, -97, 122, 97, -121, -98, 48, -95, -24, -21, -69, -41, 50, -18, 100, -106, -65, -34, 101, 122, 105, -22, -95, 116, -27, -21, 105, -39, 3, -23, -13, -70, -116, 62, 7, 73, 94, 97, -113, -15, 95, 52, -49, 113, 3, 25, 68, -117, -32, -44, -27, -45, -9, -119, 14, 70, -86, -82, -46, -124, -17, -13, -42, 86, 68, 120, 55, -126, 37, -98, -67, 56, -97, 54, -70, -9, -34, -17, -96, 14, 116, -3, 72, -106, -51, -77, -10, 61, 2, -13, -101, 79, -73, -80, -86, -35, 96, -17, -109, 60, 44};
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
    msg.setTimeStamp(0.214761587593);
    msg.setSource(35518U);
    msg.setSourceEntity(30U);
    msg.setDestination(59246U);
    msg.setDestinationEntity(172U);
    msg.id = 183U;
    msg.range = 0.398956217863;

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
    msg.setTimeStamp(0.612367111192);
    msg.setSource(23105U);
    msg.setSourceEntity(81U);
    msg.setDestination(34715U);
    msg.setDestinationEntity(229U);
    msg.id = 164U;
    msg.range = 0.227156087357;

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
    msg.setTimeStamp(0.0273410410704);
    msg.setSource(48618U);
    msg.setSourceEntity(55U);
    msg.setDestination(20601U);
    msg.setDestinationEntity(253U);
    msg.id = 22U;
    msg.range = 0.300385143388;

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
    msg.setTimeStamp(0.136292946078);
    msg.setSource(50137U);
    msg.setSourceEntity(91U);
    msg.setDestination(44097U);
    msg.setDestinationEntity(23U);
    msg.beacon.assign("BOMBMENOAARTBITEPQRJDLFZWNUEIEAHGZIHCNNRWKMOKDJYFSIJLVTNFOGRBMVEPWQIFFUSTYPJWRQHFGPJSPXNZQMCTAXVKNDUNVOCSVBZYXURFYIXOJDDKAMTGMSFGLEHMLJAYIWOPCVBSLDGWXQMQNZGZUUDEHXSOC");
    msg.lat = 0.400888163485;
    msg.lon = 0.154241135122;
    msg.depth = 0.868455864574;
    msg.query_channel = 152U;
    msg.reply_channel = 186U;
    msg.transponder_delay = 252U;

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
    msg.setTimeStamp(0.0900478812728);
    msg.setSource(59895U);
    msg.setSourceEntity(80U);
    msg.setDestination(37493U);
    msg.setDestinationEntity(87U);
    msg.beacon.assign("IIIFJAYFZBVAXOCXUOZPXIIDOKSQFT");
    msg.lat = 0.961545569386;
    msg.lon = 0.828462414866;
    msg.depth = 0.818351330135;
    msg.query_channel = 30U;
    msg.reply_channel = 18U;
    msg.transponder_delay = 131U;

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
    msg.setTimeStamp(0.771168270805);
    msg.setSource(19426U);
    msg.setSourceEntity(50U);
    msg.setDestination(53870U);
    msg.setDestinationEntity(207U);
    msg.beacon.assign("VBLYWEUGDAORGGYXQSJCHPFECOHZTV");
    msg.lat = 0.875437564688;
    msg.lon = 0.202389043352;
    msg.depth = 0.730590436831;
    msg.query_channel = 173U;
    msg.reply_channel = 222U;
    msg.transponder_delay = 32U;

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
    msg.setTimeStamp(0.541740792635);
    msg.setSource(43329U);
    msg.setSourceEntity(157U);
    msg.setDestination(27625U);
    msg.setDestinationEntity(216U);
    msg.op = 44U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TZEDDBVIDDVZXLYMZJSEVJKBNPMDQPDXSEMSWAWFSEWGAEAQMXLPHYOORKTLULULIKKNANVWOHIJOFRAPWGKGKMVZSJYOUWRRXPMCHVVEMGCLYXRMHPCZBJURJYSMLFOJBWKHRVFHXAPUNOQEVCCUSPXHFCNUETBGZQNVRYJGUAKPQQDBFMIURSKIOYNCWBNKTSBXWDTYADZJGGWQTCCHNZFZTQFGBTJFLYITIGLCEHRXXAEDYOZFISQUTLH");
    tmp_msg_0.lat = 0.220169681312;
    tmp_msg_0.lon = 0.279736494892;
    tmp_msg_0.depth = 0.955574540221;
    tmp_msg_0.query_channel = 147U;
    tmp_msg_0.reply_channel = 101U;
    tmp_msg_0.transponder_delay = 248U;
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
    msg.setTimeStamp(0.587989429094);
    msg.setSource(25302U);
    msg.setSourceEntity(213U);
    msg.setDestination(35721U);
    msg.setDestinationEntity(161U);
    msg.op = 17U;

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
    msg.setTimeStamp(0.80221029031);
    msg.setSource(59290U);
    msg.setSourceEntity(25U);
    msg.setDestination(27818U);
    msg.setDestinationEntity(21U);
    msg.op = 3U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BUAQPMZXHLDMJTJAQZOOCGIEFPIJBZGXFOH");
    tmp_msg_0.lat = 0.344016067923;
    tmp_msg_0.lon = 0.839259348255;
    tmp_msg_0.depth = 0.699297340332;
    tmp_msg_0.query_channel = 30U;
    tmp_msg_0.reply_channel = 157U;
    tmp_msg_0.transponder_delay = 98U;
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
    msg.setTimeStamp(0.77944979257);
    msg.setSource(46984U);
    msg.setSourceEntity(133U);
    msg.setDestination(42203U);
    msg.setDestinationEntity(177U);
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 42768U;
    tmp_msg_0.plan_size = 2083845750U;
    tmp_msg_0.change_time = 0.640082540192;
    tmp_msg_0.change_sid = 53795U;
    tmp_msg_0.change_sname.assign("MVNYDZXEPSOMCHIZDLXKHKIUNYEBVJQSYLSMUXQITFBDMAXTKTCPBIOVGSSCTKPPHUQBPOUDFKIIQYAKJZWMJUYGAGZGFOHANSAKLA");
    const char tmp_tmp_msg_0_0[] = {-22, 96, 94, -70, 66, -59, 68, -58, -8, 1, -50, -85, -30, 83, -60, 89, -98, -113, -40, 2, 24, -75, -106, 61, -38, 108, -41, 75, 57, 99, -29, 113, -86, 115, -41, -39, -19, -35, -121, -99, 73, -55, -18, 38, -68, 108, 9, 113, 105, -3, 74, -72, -68, -22, -62, -79, -81, 1, 20, 66, -7, 74, -97, -29, -32, -124, -40, 58, -79, 82, 46, -113, -124, 83, -33, 118, -58, -19, 100, 103, 14, -60, -90, 6, -55, 88, 78, -19, -104, -71, -67, 126, -85, 3, -39, 97, -105, -23, -29, 94, 46, -60, -101, 33, 67, -78, 19, -20, -123, 8, -77, -34, 64, 72, -89, -90, -120, -74, 59, 0, -80, 75, -9, 4, -25, 38, -28, 100, -98, 0, -100, -29, -67, -42, -114, -112, -22, 51, 79, -31, 77, 63, 39, -85, 67, -99, -89, 51, 46, -90, -18, -49, 100, -40, 90, 42, 67, 33, 7, 46, 31, 113, 125, -87, 28, -96, -81, -122, -96};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    IMC::PlanDBInformation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.plan_id.assign("AHSUFSGKCVTBDLRPGOQLKRVTSUZRHMYWVIWMQIXEJEAPUOBJYJPIUIIDNVEKNKHCQIHMYOZHSYXGCANXWTYOQMFCAPTFJEUEVFCQXAZXEBOLSBLNIHWJZRTTRXQRWSMYIKLZACBYCXLNBWNVDKDMRUGRGZBTIPRSJFKTLFBADVE");
    tmp_tmp_msg_0_1.plan_size = 37419U;
    tmp_tmp_msg_0_1.change_time = 0.0722087319648;
    tmp_tmp_msg_0_1.change_sid = 14887U;
    tmp_tmp_msg_0_1.change_sname.assign("KZBEUXPEULPVNONUFVACFFWCCXXQQHFGZYKODJGWGUVNIIIVCUAVCEMDUKBXFBGWTYDHOROCGOJQHZVZGCNWQMKERDEAUWSOGEQIYLQVVWRYTXHSMDLEONTXKJOSPINVITJDYGEATLXUXKIRNANPPFQSMDRPLMHOQKFQYJYZNKHETPFHESSTVFJJXBAHRCRAQZGDPWJY");
    const char tmp_tmp_tmp_msg_0_1_0[] = {78, -2, -10, -95, -125, -127, -70, -34, 33, 122, -30, -120, 45, 43, 98, 9, -55, 126, -62, 109, -77, 103, -75, 45, -89, -59, 72, 35, 97, -34, -29, -14, 12, -36, -99, 66, -93, -47, 3, 75, 30, -128, 116, 16, 107, 58, -128, 41, 91, 52, 52, -10, 21, -30, 114, 35, -99, 55, -97, -77, 49, -2, 18, -104, 126, -60, 25, -31, -23, 115, 47, 33, -41, -59, -16, -109, -44, 70, -38, 119, 14, -55, -128, -1, -92, 46, -116, 20, -112, -45, -59, 44, 61, -32, 43, 2, -120, 12, -88, -125, -29, -109, 58, -12, -104, -47, -48, -99, 5, 26, 12, 103, -43, -121, 53, -112, 65, -109, -85, -38, -21, -125, 72, 121, -82, 100, -125, 72, 94, -46, -58, 11, 87, 88, 111, -102, -79, -37, -62, 75, -31, 43, -98, -92, -11, 39, 0, -60, -111, 76, -49, 82, 41, -88, -119, -117, 34, 63, -67, 101, -111, -24, -63, -109, 67, 111, -69, 21, -8, -103, 29, 57, 87, -70, -46, -4, -90, -41, 103, -90, -112, 77, -87, -89, -42, -19, 96, -57, -38, -40, 74, 70, 88, -71, 22, 108, 2, -25, -34, -115, 97, 117, -16, -118, -91, 1, -54, 81, -87, -67, 21, 49, 86, 48, -39, -32, -113, -61, -97};
    tmp_tmp_msg_0_1.md5.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.plans_info.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.950605797386);
    msg.setSource(49592U);
    msg.setSourceEntity(96U);
    msg.setDestination(5678U);
    msg.setDestinationEntity(97U);
    IMC::StateReport tmp_msg_0;
    tmp_msg_0.stime = 3099952957U;
    tmp_msg_0.latitude = 0.715054833354;
    tmp_msg_0.longitude = 0.86039493285;
    tmp_msg_0.altitude = 34481U;
    tmp_msg_0.depth = 18681U;
    tmp_msg_0.heading = 35079U;
    tmp_msg_0.speed = 9583;
    tmp_msg_0.fuel = -29;
    tmp_msg_0.exec_state = 23;
    tmp_msg_0.plan_checksum = 43176U;
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
    msg.setTimeStamp(0.259663588747);
    msg.setSource(6964U);
    msg.setSourceEntity(254U);
    msg.setDestination(39379U);
    msg.setDestinationEntity(29U);
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 186U;
    tmp_msg_0.period = 3761529293U;
    tmp_msg_0.duty_cycle = 1097027869U;
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
    msg.setTimeStamp(0.774279148673);
    msg.setSource(9499U);
    msg.setSourceEntity(22U);
    msg.setDestination(47254U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.341167342494;
    msg.lon = 0.293442638895;
    msg.depth = 0.992510860368;
    msg.sentence.assign("CFGWUNJQGDAOESYYCTZBYOTTAOZFRLWKQWJTVGFHDNWVCCMQDLZMBBTHYIEIBDJRUDPQCFHDBXLCSRPAMGNKCJQVHXWMWWAKCQXZFRLSPRETZUFANVXJEJLRYLJKXUBZHAHIMOKPENHSKNFSETYPISEDSIBCFXJESPTVNZXMHMBKOVAZMROUYVUXPIKUOGMQNZHARPIUAKXLIUBGOSGWHOJWJZGESGNKWVLUXYPILYTDVGNFDPTQIDRAYE");
    msg.txtime = 0.242620703487;
    msg.modem_type.assign("ZEIAEAVQMZIBDSHUSYEADTPJVKEIFRMTYWAOZXHNQYUVVJXFCNZJFYIJYWPDITDEOYJFNRVMOYXKSQ");
    msg.sys_src.assign("EVRQSYDXWNWPZSXFAPCCSKOJMDICSOYCIPTIGHUYJLLFVMZNCUCUUBBKKBAXWTQJKWIHGPZLJLVWAGAYEEDSFPMRVDQVAPBGBJSFNYHFGVYYMWHPQTCHTHBLIWGXHKFNLXXSQORNUQUMREKKAYZTNMGHKKIQIRGVVESUFNBPDCJAXMZBLDNOJZEHTQIUITMLFWFDZOEJTMBWWAUQBDPASXYTCTORDDEVGFEPRJJZRGQVROUOOEXACK");
    msg.seq = 59671U;
    msg.sys_dst.assign("GBQUDSTZWNHCIQXUJXRGQVJNDXFZOADLUXNMKCFQWFZVEHMRTJHAYWVBXMCRSHAGLBORKOSRFCXJUBZTJIJDMFLCJPNJHWEDRTCIS");
    msg.flags = 210U;
    const char tmp_msg_0[] = {48, -42, -108, 18, -94, 63, 96, 79, -113, 38, 50, 52, 22, -73, 38, -126, -122, 49, -4, 57, -61, 81, -18, -5, 126, 68, 28, 22, 10, 41, -103, -41, -99, -40, -7, -105, -42, -120, -7, -109, 122, 75, -88, 78, -44, -25, -37, 66, 125, -31, -78, -70, -43, 42, -84, -36, -24, 50, 124, 52, 115, 86, -57, 47, -124, -35, -79, -104, -58, -97, -95, 16, 39, 118, -68, 70, -99, 6, -17, -73, 96, 57, -121, 27, 65, 60, 48, -107, 25, -14, -45, 87, 32, 20, 92, -59, 81, -98, 33, -42, 74, 63, 90, 106, -8, 121, 28, 5, -118, 54, 17, -115, 56, 80, -82, 89, 77, 74, 51, 122, -86, 105, -75, -78, 125, 63, -116, 117, -35, 94, 57, -112, -72, 31, 120, 53, -88, 98, 112, 60, -26, 99, 61, -32, -48, -103, 89, -95, 61, -11, -102, -40, -16, 46, 3, -96, -101, -59, -35, 84, -125, 123, 1, 125, -14, 125, 58, 79, -113, 121, -113, 15, -48, -89, 109, -87, -66, 48, 32, 73, -12, -31, -71, 108, 111, 55, 111, 36, 6, 11, 84, 3, 55, 96, -74, -29, 77, 82, -26, 8, 52, 55, 122, 26, -43, -94, 124, 15, -35, -32, 51, -112, -29, -88, 109, -116, 125, -2, 40, -11, -107, 121, 29, -24, -108, -78, 52, -74, -54, -76, -74, -63, 74, -80, -64, -84, 114, 21, -21, -98, -117, 2, 92, -65, -121, 68, 122, -83};
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
    msg.setTimeStamp(0.927139753519);
    msg.setSource(24045U);
    msg.setSourceEntity(60U);
    msg.setDestination(46119U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.264974296062;
    msg.lon = 0.260141456764;
    msg.depth = 0.876193825948;
    msg.sentence.assign("CNIFUEQMDOWXPVKYTICGNUUMPNOWLIPQOTYNOGGXBRESIFSMMABZRBUTEYOAVEHHHHBDOWAWURHRJYGZFRJQCZYSCVTAJZTXAGDURSBUFOATXKPPZEKFCHKBWBWOCQYJWJRQZITVYQVCDLWUKAFCELSDFPYQN");
    msg.txtime = 0.504031860996;
    msg.modem_type.assign("TJYXSMCCUIZZSIYQTDMBOPFGKTOFGCHMZKVVLQXZQYCECPJCDXTYQMDIJLFTTYNJEBLXSDRXBYBKQEJBSDLJVAWJGNOLSELXXZGEBLURWIFPRAHQXHBENZOIHRQZCFZMZDARJABGBBKHTWWPEEAKXPVAMFKWEJROUIRYNKWPUVNSVYGUDKPQKQTITCD");
    msg.sys_src.assign("UHXLCKEOWGZBFGCLCDSXUXUEFRJQISRMGJJDSKHHHVSQUENQTCUDVYHOTDCNBUKNXJDAKCXRPISQAUWCWRIQVYSHDROVZWDDPZJLJBFBIVGAYTATAKZEQRUXJYCEIPRFJQQBZFDZFJPHGIMBAEEHEVJZITIMPGYPPCGNWMKYLEPDEMPCZNSVVNMNIAIFGXBXLOSNPLTHFTNQNFTOVRXOL");
    msg.seq = 4761U;
    msg.sys_dst.assign("VDWHLPADKGIMXITYHHSRYCXQNKPIEVVZRBQXKMZTOJHURMMZJMHCXGZHSLHOKOPOYQIQMIRRSLSBFFDSTMCUOAQCDWNHKGYDUBEYMAYNEPGJQZDSLWALIFYOAROELEGJZCEIRTNFWEBSVPZPOUXNXJHWDCDAEBRSCFZJNEVUPYTKFVJITGAUKNJBVFXGJTBRZALNSXBDNLMXVABUWYUPCWKDQUQWFIY");
    msg.flags = 65U;
    const char tmp_msg_0[] = {-34, 90, -122, -7, 84, -122, 61, -104, 9, 26, -128, -84, -1, 76, -105, -127, -66, -127, 63, 4, 31, -40, -62, 126, -103, 97, 113, 39, 62, 61, 37, -12, 75, -27, -122, 52, -41, 62, 56, -113, -71, -40, -90, -23, -91, -11, 102, 85, 23, -40, 70, -17, 75, 108, 60, -102, 74, 8, -100, -26, 102, -1, 41, -81, 15, 109, 17, -53, -8, -25, 28, -102, -111, 49, 36, -64, -42, 19, 85, -51, -26, -24, 118, 43, 30, 57, 81, 36, -10, -93, 30, -105, -45, -64, 41, -65, -87, -36, -112, 85, -120, 23, 51, 126, -72, -93, 16, -39, -28, 104, -21, -1, -88, -1, 84, -111, -25, 73, 21, 108, -125, 107, -80, -117, 69, 125, -123, -50, -11, -10, -27, 58, 30, -54, 98, -22, 91, 94, 57, 26, -103, 6, -103, 72, 13, 76, 73, -36, 106, -35, 11, -107, -82, -112, -59, -114, 40, 78, 107, 90, -97, -102, -51, 1, -38, -123, 5, 43, 96, 116, -76, -16, 66, -80, 81, 121, -104, -25, -106, -49, -3, -112, 105, 117, 75, -108, 77, -3, -15, 6, 103, 82, -77, 116};
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
    msg.setTimeStamp(0.869538430911);
    msg.setSource(15648U);
    msg.setSourceEntity(20U);
    msg.setDestination(32058U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.719373671691;
    msg.lon = 0.572645437437;
    msg.depth = 0.160016249486;
    msg.sentence.assign("SHQSBNMVJCYFJUWMLSAWWOPZZPAGDDJGJBZWYQKSBXBACTPXLEFDARZMFQMSRRTWTRNXBKSGUHBJRTIVVDQWYVACOAKHHERUNQMVNLQOUSZVKCZYJXMNDNYJZQUIUOBVUENTOBLJXGVUHILWDNFYOYIEATIEIJEPIXOAFPGBHKCZDAQJGULEFEXTBCVDLERFSPKTKOCYAGPTOWHIKPCQMSKTUIZXMGLNWEXFRCKQIXGZHSLYM");
    msg.txtime = 0.648384803749;
    msg.modem_type.assign("KSGTWDRBLUJQQWLJJAZTXTCXCTMSXFHJIFPJFODCHLRXFNLQXOOHWMQOQPGEZBWKDKUVGIWUSWVIOVNEAZVENFDQHEPRHUAKAPGBTKRBPZSOFNEVDCLGYZTCUPUYSGHEEYYSGAP");
    msg.sys_src.assign("ERSSSLCDXOTYKITFUIEKPEKUNSNBXJAGUYHDRQABICIXRDZZIURCTHBVHSYDPWCEQQGGVOVVKTLUZEQXNSMYMDPBTIGKGIRYZAPZBJRXGMWHCISJJIWWLRSRVPISFKKQYUTYMONPYHNAZUFKEDLWMGOAWALGTQEEKCZLPX");
    msg.seq = 11477U;
    msg.sys_dst.assign("PWFHGOTDMVCVYCNOADHKATUVBDXLKLOIJAOYQBRXKYMHLLTIIMUHRAERUGOTUHSUKGZWJGASHLKPBTWFOGJGSBHIRCCXXLDSMFWCLNAQFJBWTPHBANZXUSROVKYGWANXTEKIMZDRRFNEUYNQPYNPJTIZQVCJMSGMEJRMWLVMQIYIGYEBAFTNFHPOXRPNNCDEXEPYFUFZLDUQFQJSCBTKSQUEGPBJW");
    msg.flags = 73U;
    const char tmp_msg_0[] = {-24, -93, 45, 0, -108, 54, 16, -71, -88, -117, -101, -105, 46, 109, -15, 62, 60, -85, -10, -128, 36, 42, -102, -93, 35, 38, -53, 65, 102, 12, -116, -47, 111, -15, -11, -25, 40, 117, -11, 60, -75, 38, -9, -80, -40, -78, -125, -85, 50, 82, -109, -116, 74, -122, -91, 10, 8, -35, 113, 18, -11, 56, 104, 121, -46, -43, 89, 5, -2, 89, -48, -86, 50, 85, -15, 59, 64, -60, -61, -96, -63, 25, 84, -62, 0, 5, 92, -65, 56, 79, 64, 117, 115, -37, -57, -4, -50, -101, 113, 1, -53, 85, 112, 0, -37, -29, -55, 69, 30, 102, 94, 59, -71, 2, 12, 63, -54, -45, -67, -39, 102, 47, 17, 70, 44, -112, -78, -91, -95, 112, 122, -33, 74, 106, -90, 105, -81, -20, 105, -110, -65, 113, 110, 55, -77, -35, -72, -109, -3, -92, 109, -96, 104, 68, -26, 90, -110, 92, 108, -122, 36, 64, -112, -97, -88, 90, -91, -105, -58, 39, 71, 9, 72, 80, 42, 121, -114, 126, 104, -71, -50, -111, 63, 85, 80, 57, -67, -40, -82, 18, 63, -4, 72, -12, -65, 28, 96, 48, 5, -80, -85, 92, -112, -119, -50, 93, -54, -103, 60, 48, 54, 56, 27, -17, 89, 97, 7, 64, -92, 122, 13, -17, 26, 78, 119, -22, 13, 101, -40, 103, 95, 22, 94, -97, -116, 6, 85};
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
    msg.setTimeStamp(0.261439465078);
    msg.setSource(6802U);
    msg.setSourceEntity(61U);
    msg.setDestination(6689U);
    msg.setDestinationEntity(216U);
    msg.op = 87U;
    msg.system.assign("DSICOHIHBMHKILDVBGCUHOMLFINXIQAWPFDXDUNYOFJEFKRFJUQCOOSWLCGTLJSMWYUDTTLYVERUNNAWVEHQGGSLYGHXGUNXFDPRZBQPZEWKRSTWXJJIKAPEZVAKXCSGPBTIZAPALPLASUVZRCEFGNFKTVSLDQSMPCAMVB");
    msg.range = 0.318144357918;
    IMC::CompressedHistory tmp_msg_0;
    tmp_msg_0.base_lat = 0.903182553932;
    tmp_msg_0.base_lon = 0.635689156174;
    tmp_msg_0.base_time = 0.0585350336694;
    const char tmp_tmp_msg_0_0[] = {81, 39, 32, 71, -63, -2, -28, -72, -46, -101, 3, 43, -104, 52, -13, -111, 84, 64, -69, 67, -31, -60, -106, -89, -31, 109, 120, 80, 69, -44, -126, -3, -46, 108, 80, -6, -104, 9, 117, -98, 92, -55, -45, -87, -3, -71, 115, -62, -13, 34, -53, 122, -5, 102, 61, -77, -64, 52, 63, 9, 97, 103, 83, -42, 73, 96, -121, -79, -47, -15, -69, 43, -42, 60, 7, 89, 36, -40, 13, 103, 34, 119, 35, 111, 69, 68, -86, -3, -63, -66, 77, -54, -85, -17, -16, 89, -41, 39, -40, -35, -127, 126, 55, -100, -13, 2, 35, 79, 114, -48, 34, -85, 114, -112, 1, 101, -92, 30, 63, 117, 24, 86};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.541962133721);
    msg.setSource(53162U);
    msg.setSourceEntity(227U);
    msg.setDestination(36676U);
    msg.setDestinationEntity(8U);
    msg.op = 52U;
    msg.system.assign("RKTYSQKKZALWTTILHSJYIRG");
    msg.range = 0.000771818994686;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 13163U;
    tmp_msg_0.avg = 0.0263043202301;
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
    msg.setTimeStamp(0.459081819704);
    msg.setSource(23788U);
    msg.setSourceEntity(72U);
    msg.setDestination(17565U);
    msg.setDestinationEntity(90U);
    msg.op = 54U;
    msg.system.assign("FVRPRQGMIIRXDMXYQUBLWEOYWLBWVOYMANNBELSARRSFHNXZKDNAPDKDOYEHSZYXQHKIIDNEVFMBTHBJWMZEPFKZTGTEWKNOOHGTTKVBPVUAIJCKFYBSZROJWLDWVRGGXXSLPOCCMUXYSJNAGXFPULPPLUUCJVDQGUODJLAOGCNVCBKTRZZVJAHZFKCTRSTMSBIEIAUAHJ");
    msg.range = 0.231757854129;
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.470429451061;
    tmp_msg_0.time_next_service = 0.609038672155;
    tmp_msg_0.time_motor_next_service = 0.61161217681;
    tmp_msg_0.time_idle_ground = 0.449774160164;
    tmp_msg_0.time_idle_air = 0.530470582386;
    tmp_msg_0.time_idle_water = 0.808945477901;
    tmp_msg_0.time_idle_underwater = 0.244533116889;
    tmp_msg_0.time_idle_unknown = 0.924234832773;
    tmp_msg_0.time_motor_ground = 0.641227189751;
    tmp_msg_0.time_motor_air = 0.628981279641;
    tmp_msg_0.time_motor_water = 0.735015612149;
    tmp_msg_0.time_motor_underwater = 0.396263160353;
    tmp_msg_0.time_motor_unknown = 0.0111046244263;
    tmp_msg_0.rpm_min = 1082;
    tmp_msg_0.rpm_max = -2503;
    tmp_msg_0.depth_max = 0.532961665434;
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
    msg.setTimeStamp(0.786921150174);
    msg.setSource(1647U);
    msg.setSourceEntity(128U);
    msg.setDestination(44179U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.468143755035);
    msg.setSource(43611U);
    msg.setSourceEntity(80U);
    msg.setDestination(55300U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.761971020214);
    msg.setSource(2727U);
    msg.setSourceEntity(184U);
    msg.setDestination(16824U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.509855993902);
    msg.setSource(28252U);
    msg.setSourceEntity(137U);
    msg.setDestination(20235U);
    msg.setDestinationEntity(194U);
    msg.list.assign("TIOKCHJCASYVXTBHPOOIPENQKEMCYZKWLWCPNVURXIHZVRUSJLCAJC");

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
    msg.setTimeStamp(0.040415602607);
    msg.setSource(10835U);
    msg.setSourceEntity(108U);
    msg.setDestination(50335U);
    msg.setDestinationEntity(38U);
    msg.list.assign("AGDKYSZUMSKJYBHVCYBQOHYNSKAJRBSRGQIEWQUIOIVLZRXVLZFJTAVMTGPURIQWRXALOTPKCNBCXXXDXWJDRNXOHSEVBYGRDDIEFCUPYAENTKPXJCCTZJNUTJGMUKMZIBYOWPRJSKTAEFUOLVZHYDFHFIGWALNOYMSQPZLQOPGFQNKMQBXJNGCVSUXLWHEWZEV");

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
    msg.setTimeStamp(0.663257789131);
    msg.setSource(1354U);
    msg.setSourceEntity(141U);
    msg.setDestination(39148U);
    msg.setDestinationEntity(229U);
    msg.list.assign("GSSHHOTIOGGAKRWXQYUBXKLFCMXYQVVRHCDIBQRKPDUDHRPBYQCNLTGPIJIWRCUYZRWUHNEBZPLSBDFPTWRPVACCIFEDWQSUZNNTOZNZNORJUMSJOMSKVQFGEZDCQDWPUOYBOKAJTGWTOEPULCVLAYLXMLYEEKNLGYMDMWGFJNZ");

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
    msg.setTimeStamp(0.332743440486);
    msg.setSource(59755U);
    msg.setSourceEntity(179U);
    msg.setDestination(25145U);
    msg.setDestinationEntity(69U);
    msg.peer.assign("MHGWODGLCZIPUILNHCIF");
    msg.rssi = 0.735500485604;
    msg.integrity = 60033U;

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
    msg.setTimeStamp(0.0982578808728);
    msg.setSource(44034U);
    msg.setSourceEntity(204U);
    msg.setDestination(6239U);
    msg.setDestinationEntity(87U);
    msg.peer.assign("PMSVVRSOAAKZJXREUGRFXTTYAFBSIUVLXQZFEZTJWJSRACIFXZCTWGMDMHUBRUZIBHENGCWMNYJKZXUJ");
    msg.rssi = 0.400626903424;
    msg.integrity = 37639U;

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
    msg.setTimeStamp(0.945180739394);
    msg.setSource(13478U);
    msg.setSourceEntity(3U);
    msg.setDestination(53423U);
    msg.setDestinationEntity(248U);
    msg.peer.assign("GBHIWKCFEMRBHDFKEUDCEDHKPYPRJQUUNFKQYPSOHWWIOUYBNDBWAXLRGQVWGRVJQMDLNLTJTUDKCSHQECVOALYABNQQXKFYSZEZDUVTMEPOYSAQZNWEIKADPVWYOBUOLG");
    msg.rssi = 0.49205577739;
    msg.integrity = 45122U;

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
    msg.setTimeStamp(0.952149739744);
    msg.setSource(16187U);
    msg.setSourceEntity(134U);
    msg.setDestination(42099U);
    msg.setDestinationEntity(47U);
    msg.req_id = 1434U;
    msg.destination.assign("SEKLPYDKUXUZAZQDBFISC");
    msg.timeout = 0.823975700035;
    msg.range = 0.912327400108;
    msg.type = 1U;
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 65U;
    tmp_msg_0.actions.assign("NYBBZBEHCJRCMCZQAOUDZDUWVSZGQXJAHRFKALRSYOEEXKUVABNOUOOZZAQMFGJBSJKRYZWEUKTPEPTPMLDADFOCNJURIHFVYYUIVVIZQGAXWR");
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
    msg.setTimeStamp(0.551768205213);
    msg.setSource(52857U);
    msg.setSourceEntity(168U);
    msg.setDestination(31700U);
    msg.setDestinationEntity(241U);
    msg.req_id = 61779U;
    msg.destination.assign("COILCQXSFWTXFFKGEPQYBWMRAFVLYHONXLDQASHIMNKJHFDDRGIHPDOETTOWKDGEAJCPDWYEROJVIHLBIGJYTYZDZTPZTVNTWFKR");
    msg.timeout = 0.707473474938;
    msg.range = 0.323229223154;
    msg.type = 16U;
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("WNYWFNJXINNDBVZCCQEDTBKODFULKBMYZQURZCJYYEQWOVVTMGKGUSOIXYZHHWQHNZLXMWPTWOCVHMVBLXVUDXIITHKOHNQULXEVMAWJDXFOWHZCRMIMPSOBIKEGGIAHBIYSYRIWPDAQJXVPQSPMFCZFXBZOTYEQDWAAFGELOELKDYF");
    tmp_msg_0.value = 197U;
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
    msg.setTimeStamp(0.236387669543);
    msg.setSource(39088U);
    msg.setSourceEntity(39U);
    msg.setDestination(6135U);
    msg.setDestinationEntity(156U);
    msg.req_id = 9730U;
    msg.destination.assign("RBTXCNNGBBPECAWDDYXTGSOELXFJHFJVKHPMQTCHWFAQRNCLHOEQZJOPDVXYUGYNNZLSKQMGWOQYCRMUTDSATCMISNYMEFYZGFRULDVBJEMQNIKFKPWWEBBGHRKYOZLCPMLIDLVCOSYEPVUHKZKRFDTHUGOFUINORNAQBAHKTEIOZZPTOKXBVIFMW");
    msg.timeout = 0.752342383237;
    msg.range = 0.648246192259;
    msg.type = 144U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("MMTMBHXIJDZWLKFGPRZPUATGXRSOHTYJYPXHBIVDCERQNDHLYKRQLYRGEPCQYANKBZCLNNAQIDYBEDQTVXFNFMNTFCXGJWBXETHTON");
    tmp_msg_0.formation_name.assign("XPEYYREEGQTLOVHZVSRQRWLWOUHTNUYJWODSLZPPTAPRSPTBUDRASMGPWMUVGEJZA");
    tmp_msg_0.plan_id.assign("REBLFCEBMAJWKMWGITFZBECWNOBODYAHZVHSNORULOGAXHYZMXFJBYVCZJGHQVUXKNWNIGLKPVCCDGPDTIKYCFHCZYQVSOQQIC");
    tmp_msg_0.description.assign("BQYJNKVPHPQG");
    tmp_msg_0.leader_speed = 0.298990424589;
    tmp_msg_0.leader_bank_lim = 0.648409289626;
    tmp_msg_0.pos_sim_err_lim = 0.29724037945;
    tmp_msg_0.pos_sim_err_wrn = 0.858247098746;
    tmp_msg_0.pos_sim_err_timeout = 28585U;
    tmp_msg_0.converg_max = 0.804327022371;
    tmp_msg_0.converg_timeout = 37757U;
    tmp_msg_0.comms_timeout = 14123U;
    tmp_msg_0.turb_lim = 0.932503577535;
    tmp_msg_0.custom.assign("WCQHUEAHDFVSJKUPDCBKMNGOIHKFVPIYPWPGPYXTIYGRARGOHBICDBJNJAUGNBKSIPMJSRMTQTSFAUAFNFZCZWEDJGZTSHHTCCYFLQBLNDIVMFPDJGVOPNVDWBCQHIOCFTFJEDEMXX");
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
    msg.setTimeStamp(0.468044840343);
    msg.setSource(36408U);
    msg.setSourceEntity(112U);
    msg.setDestination(24140U);
    msg.setDestinationEntity(34U);
    msg.req_id = 425U;
    msg.type = 113U;
    msg.status = 39U;
    msg.info.assign("CPNKKUTXFVAQVWFDEJZZSGXKJZBMNDQTLKIXHUTRWLHOEZIYCZSSVOQINWVLZVWZRZRSAQSMEFMGOSIKKFXGIPPABYOXCLMEXYLGMRUQCYV");
    msg.range = 0.768684698857;

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
    msg.setTimeStamp(0.060112698258);
    msg.setSource(31028U);
    msg.setSourceEntity(125U);
    msg.setDestination(43879U);
    msg.setDestinationEntity(144U);
    msg.req_id = 65223U;
    msg.type = 67U;
    msg.status = 1U;
    msg.info.assign("NAROQDXSLJNYTBUAHJNUAMZINHCUOIJETRAWVGKQGLWOHBDYXFFOXLSEDWVKWCHQMCPDKORKZLBMWLAMSRRQKGTAFQCPHGFVUYTMYZPMERJDPVTPGEVQLAYSVPLCQOBJEQCYHXCILUKMNSFOBOKPJYPWNTRNIODDIRUWZMEIZHWZGTPUIFGOVSYNQUIYMAWEWBFJXBZNHB");
    msg.range = 0.57644728426;

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
    msg.setTimeStamp(0.924315491198);
    msg.setSource(9081U);
    msg.setSourceEntity(137U);
    msg.setDestination(19832U);
    msg.setDestinationEntity(227U);
    msg.req_id = 39668U;
    msg.type = 85U;
    msg.status = 131U;
    msg.info.assign("VDQQEZFBXDDOTYZKPGFSFUWCQLXPBS");
    msg.range = 0.84214044845;

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
    msg.setTimeStamp(0.673007301439);
    msg.setSource(42496U);
    msg.setSourceEntity(147U);
    msg.setDestination(22826U);
    msg.setDestinationEntity(2U);
    msg.value = 6627;

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
    msg.setTimeStamp(0.857917541924);
    msg.setSource(54721U);
    msg.setSourceEntity(251U);
    msg.setDestination(34903U);
    msg.setDestinationEntity(5U);
    msg.value = -23042;

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
    msg.setTimeStamp(0.844397995915);
    msg.setSource(6901U);
    msg.setSourceEntity(62U);
    msg.setDestination(25518U);
    msg.setDestinationEntity(30U);
    msg.value = -23385;

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
    msg.setTimeStamp(0.648155048887);
    msg.setSource(2546U);
    msg.setSourceEntity(226U);
    msg.setDestination(33778U);
    msg.setDestinationEntity(156U);
    msg.value = 0.581776781466;

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
    msg.setTimeStamp(0.623264552685);
    msg.setSource(46553U);
    msg.setSourceEntity(101U);
    msg.setDestination(941U);
    msg.setDestinationEntity(148U);
    msg.value = 0.149611961026;

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
    msg.setTimeStamp(0.312579842984);
    msg.setSource(63946U);
    msg.setSourceEntity(84U);
    msg.setDestination(12192U);
    msg.setDestinationEntity(201U);
    msg.value = 0.249432984132;

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
    msg.setTimeStamp(0.342402784347);
    msg.setSource(38759U);
    msg.setSourceEntity(147U);
    msg.setDestination(27661U);
    msg.setDestinationEntity(227U);
    msg.value = 0.396276124314;

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
    msg.setTimeStamp(0.000626235670418);
    msg.setSource(28150U);
    msg.setSourceEntity(199U);
    msg.setDestination(39469U);
    msg.setDestinationEntity(226U);
    msg.value = 0.955419735368;

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
    msg.setTimeStamp(0.548170986225);
    msg.setSource(37375U);
    msg.setSourceEntity(244U);
    msg.setDestination(64156U);
    msg.setDestinationEntity(204U);
    msg.value = 0.169823601372;

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
    msg.setTimeStamp(0.99381198205);
    msg.setSource(20506U);
    msg.setSourceEntity(29U);
    msg.setDestination(61453U);
    msg.setDestinationEntity(160U);
    msg.validity = 27819U;
    msg.type = 212U;
    msg.utc_year = 64445U;
    msg.utc_month = 85U;
    msg.utc_day = 249U;
    msg.utc_time = 0.225160450455;
    msg.lat = 0.979740561;
    msg.lon = 0.747301814374;
    msg.height = 0.622390192057;
    msg.satellites = 186U;
    msg.cog = 0.035403725183;
    msg.sog = 0.225925165749;
    msg.hdop = 0.734978894952;
    msg.vdop = 0.732065109726;
    msg.hacc = 0.542925434769;
    msg.vacc = 0.160359790557;

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
    msg.setTimeStamp(0.526078622933);
    msg.setSource(44296U);
    msg.setSourceEntity(222U);
    msg.setDestination(16368U);
    msg.setDestinationEntity(203U);
    msg.validity = 41546U;
    msg.type = 153U;
    msg.utc_year = 35682U;
    msg.utc_month = 182U;
    msg.utc_day = 137U;
    msg.utc_time = 0.571052340343;
    msg.lat = 0.140420373224;
    msg.lon = 0.175116443218;
    msg.height = 0.805206652738;
    msg.satellites = 23U;
    msg.cog = 0.00797692661988;
    msg.sog = 0.37137358546;
    msg.hdop = 0.800728300718;
    msg.vdop = 0.8129172107;
    msg.hacc = 0.412490842568;
    msg.vacc = 0.152350429865;

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
    msg.setTimeStamp(0.520185461107);
    msg.setSource(50340U);
    msg.setSourceEntity(171U);
    msg.setDestination(19914U);
    msg.setDestinationEntity(47U);
    msg.validity = 15015U;
    msg.type = 163U;
    msg.utc_year = 61786U;
    msg.utc_month = 224U;
    msg.utc_day = 139U;
    msg.utc_time = 0.0665258356899;
    msg.lat = 0.688595581882;
    msg.lon = 0.826871013325;
    msg.height = 0.0783981401886;
    msg.satellites = 109U;
    msg.cog = 0.899364468753;
    msg.sog = 0.0625141813451;
    msg.hdop = 0.0568987522866;
    msg.vdop = 0.101908665388;
    msg.hacc = 0.846759913038;
    msg.vacc = 0.390400365853;

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
    msg.setTimeStamp(0.917576184881);
    msg.setSource(17201U);
    msg.setSourceEntity(55U);
    msg.setDestination(43968U);
    msg.setDestinationEntity(49U);
    msg.time = 0.296987057327;
    msg.phi = 0.333332147184;
    msg.theta = 0.0258150253179;
    msg.psi = 0.0781866020822;
    msg.psi_magnetic = 0.0368446011925;

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
    msg.setTimeStamp(0.694321091843);
    msg.setSource(62881U);
    msg.setSourceEntity(86U);
    msg.setDestination(6930U);
    msg.setDestinationEntity(66U);
    msg.time = 0.836362590425;
    msg.phi = 0.541593310299;
    msg.theta = 0.609232562651;
    msg.psi = 0.807990283668;
    msg.psi_magnetic = 0.280089195393;

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
    msg.setTimeStamp(0.691201939388);
    msg.setSource(36453U);
    msg.setSourceEntity(165U);
    msg.setDestination(48716U);
    msg.setDestinationEntity(236U);
    msg.time = 0.291967232567;
    msg.phi = 0.224615164937;
    msg.theta = 0.914023214299;
    msg.psi = 0.490873475399;
    msg.psi_magnetic = 0.864345951749;

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
    msg.setTimeStamp(0.197719166811);
    msg.setSource(8920U);
    msg.setSourceEntity(222U);
    msg.setDestination(16475U);
    msg.setDestinationEntity(115U);
    msg.time = 0.407067572174;
    msg.x = 0.242710431341;
    msg.y = 0.387234516153;
    msg.z = 0.334303841227;
    msg.timestep = 0.686018363582;

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
    msg.setTimeStamp(0.927450861336);
    msg.setSource(15790U);
    msg.setSourceEntity(102U);
    msg.setDestination(55824U);
    msg.setDestinationEntity(2U);
    msg.time = 0.91542404594;
    msg.x = 0.544239361382;
    msg.y = 0.010986199386;
    msg.z = 0.405738009543;
    msg.timestep = 0.73104996534;

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
    msg.setTimeStamp(0.576160250534);
    msg.setSource(62799U);
    msg.setSourceEntity(3U);
    msg.setDestination(50077U);
    msg.setDestinationEntity(218U);
    msg.time = 0.929481291894;
    msg.x = 0.192625244894;
    msg.y = 0.55176924144;
    msg.z = 0.197707018341;
    msg.timestep = 0.840882772607;

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
    msg.setTimeStamp(0.780461361728);
    msg.setSource(24414U);
    msg.setSourceEntity(77U);
    msg.setDestination(23193U);
    msg.setDestinationEntity(149U);
    msg.time = 0.741422236473;
    msg.x = 0.992872106634;
    msg.y = 0.930982586406;
    msg.z = 0.0454630683204;

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
    msg.setTimeStamp(0.583825282382);
    msg.setSource(50320U);
    msg.setSourceEntity(237U);
    msg.setDestination(51827U);
    msg.setDestinationEntity(117U);
    msg.time = 0.613794032187;
    msg.x = 0.339613673925;
    msg.y = 0.298206899243;
    msg.z = 0.76530519365;

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
    msg.setTimeStamp(0.678044315451);
    msg.setSource(43990U);
    msg.setSourceEntity(55U);
    msg.setDestination(54072U);
    msg.setDestinationEntity(213U);
    msg.time = 0.151844361088;
    msg.x = 0.07375569035;
    msg.y = 0.0529647814519;
    msg.z = 0.0713838510461;

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
    msg.setTimeStamp(0.383174925762);
    msg.setSource(39732U);
    msg.setSourceEntity(15U);
    msg.setDestination(34944U);
    msg.setDestinationEntity(251U);
    msg.time = 0.864789198232;
    msg.x = 0.673493889822;
    msg.y = 0.499079320553;
    msg.z = 0.203926677778;

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
    msg.setTimeStamp(0.387594115943);
    msg.setSource(40898U);
    msg.setSourceEntity(130U);
    msg.setDestination(47298U);
    msg.setDestinationEntity(80U);
    msg.time = 0.0688768500559;
    msg.x = 0.111950432473;
    msg.y = 0.413111241033;
    msg.z = 0.609801690577;

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
    msg.setTimeStamp(0.617060206211);
    msg.setSource(36508U);
    msg.setSourceEntity(173U);
    msg.setDestination(46689U);
    msg.setDestinationEntity(146U);
    msg.time = 0.905264058769;
    msg.x = 0.938703602154;
    msg.y = 0.665395627399;
    msg.z = 0.372700687633;

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
    msg.setTimeStamp(0.295499187448);
    msg.setSource(9333U);
    msg.setSourceEntity(188U);
    msg.setDestination(25619U);
    msg.setDestinationEntity(244U);
    msg.time = 0.982478362041;
    msg.x = 0.589945925257;
    msg.y = 0.066000372326;
    msg.z = 0.237364631128;

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
    msg.setTimeStamp(0.20619802961);
    msg.setSource(27898U);
    msg.setSourceEntity(188U);
    msg.setDestination(64710U);
    msg.setDestinationEntity(202U);
    msg.time = 0.0628055986137;
    msg.x = 0.16910803195;
    msg.y = 0.604388187652;
    msg.z = 0.723312846445;

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
    msg.setTimeStamp(0.413528679789);
    msg.setSource(57741U);
    msg.setSourceEntity(190U);
    msg.setDestination(38700U);
    msg.setDestinationEntity(121U);
    msg.time = 0.263661101497;
    msg.x = 0.215915000317;
    msg.y = 0.736457796779;
    msg.z = 0.728375764098;

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
    msg.setTimeStamp(0.605400733629);
    msg.setSource(62047U);
    msg.setSourceEntity(128U);
    msg.setDestination(48728U);
    msg.setDestinationEntity(32U);
    msg.validity = 50U;
    msg.x = 0.8788456191;
    msg.y = 0.508417992702;
    msg.z = 0.269101750174;

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
    msg.setTimeStamp(0.149857853895);
    msg.setSource(13727U);
    msg.setSourceEntity(232U);
    msg.setDestination(38831U);
    msg.setDestinationEntity(248U);
    msg.validity = 112U;
    msg.x = 0.696920358241;
    msg.y = 0.972088307908;
    msg.z = 0.164401430028;

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
    msg.setTimeStamp(0.336870242259);
    msg.setSource(46525U);
    msg.setSourceEntity(65U);
    msg.setDestination(46518U);
    msg.setDestinationEntity(217U);
    msg.validity = 16U;
    msg.x = 0.997677033358;
    msg.y = 0.7550354257;
    msg.z = 0.0257219658034;

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
    msg.setTimeStamp(0.34845126994);
    msg.setSource(60512U);
    msg.setSourceEntity(30U);
    msg.setDestination(45480U);
    msg.setDestinationEntity(17U);
    msg.validity = 25U;
    msg.x = 0.268091550052;
    msg.y = 0.434858108004;
    msg.z = 0.709474120173;

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
    msg.setTimeStamp(0.366706984347);
    msg.setSource(39497U);
    msg.setSourceEntity(102U);
    msg.setDestination(8137U);
    msg.setDestinationEntity(26U);
    msg.validity = 64U;
    msg.x = 0.212689567956;
    msg.y = 0.374051911457;
    msg.z = 0.547046812442;

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
    msg.setTimeStamp(0.433298319609);
    msg.setSource(43229U);
    msg.setSourceEntity(23U);
    msg.setDestination(59929U);
    msg.setDestinationEntity(140U);
    msg.validity = 51U;
    msg.x = 0.0873914513089;
    msg.y = 0.467606054036;
    msg.z = 0.758309127085;

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
    msg.setTimeStamp(0.0990216012693);
    msg.setSource(19660U);
    msg.setSourceEntity(88U);
    msg.setDestination(45204U);
    msg.setDestinationEntity(208U);
    msg.time = 0.371758127644;
    msg.x = 0.255038929786;
    msg.y = 0.586054550059;
    msg.z = 0.703824655112;

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
    msg.setTimeStamp(0.818319477834);
    msg.setSource(61312U);
    msg.setSourceEntity(62U);
    msg.setDestination(56733U);
    msg.setDestinationEntity(12U);
    msg.time = 0.264812199116;
    msg.x = 0.623613522987;
    msg.y = 0.148469592442;
    msg.z = 0.924261844359;

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
    msg.setTimeStamp(0.679584143775);
    msg.setSource(16777U);
    msg.setSourceEntity(189U);
    msg.setDestination(50363U);
    msg.setDestinationEntity(62U);
    msg.time = 0.378193309946;
    msg.x = 0.0846169732861;
    msg.y = 0.452790422041;
    msg.z = 0.825884551078;

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
    msg.setTimeStamp(0.430442624236);
    msg.setSource(60528U);
    msg.setSourceEntity(131U);
    msg.setDestination(46240U);
    msg.setDestinationEntity(17U);
    msg.validity = 222U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.291868309229;
    tmp_msg_0.y = 0.387807288956;
    tmp_msg_0.z = 0.781988767645;
    tmp_msg_0.phi = 0.061303087708;
    tmp_msg_0.theta = 0.129355201642;
    tmp_msg_0.psi = 0.272737550322;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.568206491744;

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
    msg.setTimeStamp(0.892593185752);
    msg.setSource(28527U);
    msg.setSourceEntity(220U);
    msg.setDestination(58122U);
    msg.setDestinationEntity(31U);
    msg.validity = 240U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.123870988866;
    tmp_msg_0.y = 0.974891571217;
    tmp_msg_0.z = 0.425993521288;
    tmp_msg_0.phi = 0.14159097221;
    tmp_msg_0.theta = 0.532838470696;
    tmp_msg_0.psi = 0.315482975408;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.517886793095;

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
    msg.setTimeStamp(0.781685993302);
    msg.setSource(54502U);
    msg.setSourceEntity(85U);
    msg.setDestination(1571U);
    msg.setDestinationEntity(210U);
    msg.validity = 193U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.287251538611;
    tmp_msg_0.beam_height = 0.0694530991143;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.104385424871;

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
    msg.setTimeStamp(0.756859822186);
    msg.setSource(21909U);
    msg.setSourceEntity(42U);
    msg.setDestination(16952U);
    msg.setDestinationEntity(200U);
    msg.value = 0.0147971559719;

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
    msg.setTimeStamp(0.201157351014);
    msg.setSource(63337U);
    msg.setSourceEntity(103U);
    msg.setDestination(8255U);
    msg.setDestinationEntity(217U);
    msg.value = 0.385489717222;

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
    msg.setTimeStamp(0.835596651529);
    msg.setSource(41393U);
    msg.setSourceEntity(77U);
    msg.setDestination(24995U);
    msg.setDestinationEntity(176U);
    msg.value = 0.737841001092;

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
    msg.setTimeStamp(0.326037811926);
    msg.setSource(57375U);
    msg.setSourceEntity(102U);
    msg.setDestination(1012U);
    msg.setDestinationEntity(149U);
    msg.value = 0.0682399776787;

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
    msg.setTimeStamp(0.0623282367883);
    msg.setSource(28116U);
    msg.setSourceEntity(14U);
    msg.setDestination(49754U);
    msg.setDestinationEntity(111U);
    msg.value = 0.42998707202;

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
    msg.setTimeStamp(0.601767701696);
    msg.setSource(31858U);
    msg.setSourceEntity(200U);
    msg.setDestination(26456U);
    msg.setDestinationEntity(104U);
    msg.value = 0.912418269878;

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
    msg.setTimeStamp(0.516213650269);
    msg.setSource(31037U);
    msg.setSourceEntity(240U);
    msg.setDestination(17916U);
    msg.setDestinationEntity(58U);
    msg.value = 0.835816263957;

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
    msg.setTimeStamp(0.23088848945);
    msg.setSource(6067U);
    msg.setSourceEntity(98U);
    msg.setDestination(62109U);
    msg.setDestinationEntity(5U);
    msg.value = 0.367686590755;

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
    msg.setTimeStamp(0.190569022298);
    msg.setSource(58279U);
    msg.setSourceEntity(86U);
    msg.setDestination(46157U);
    msg.setDestinationEntity(84U);
    msg.value = 0.44201179336;

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
    msg.setTimeStamp(0.829573954971);
    msg.setSource(27692U);
    msg.setSourceEntity(6U);
    msg.setDestination(47575U);
    msg.setDestinationEntity(136U);
    msg.value = 0.826731627512;

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
    msg.setTimeStamp(0.231376276718);
    msg.setSource(2981U);
    msg.setSourceEntity(14U);
    msg.setDestination(32737U);
    msg.setDestinationEntity(162U);
    msg.value = 0.301813841756;

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
    msg.setTimeStamp(0.289832013923);
    msg.setSource(10494U);
    msg.setSourceEntity(185U);
    msg.setDestination(261U);
    msg.setDestinationEntity(63U);
    msg.value = 0.602220367032;

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
    msg.setTimeStamp(0.971183353451);
    msg.setSource(5190U);
    msg.setSourceEntity(59U);
    msg.setDestination(51818U);
    msg.setDestinationEntity(188U);
    msg.value = 0.896344674157;

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
    msg.setTimeStamp(0.844256443383);
    msg.setSource(49978U);
    msg.setSourceEntity(238U);
    msg.setDestination(12642U);
    msg.setDestinationEntity(212U);
    msg.value = 0.247151973618;

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
    msg.setTimeStamp(0.146820179338);
    msg.setSource(34703U);
    msg.setSourceEntity(149U);
    msg.setDestination(50891U);
    msg.setDestinationEntity(96U);
    msg.value = 0.757320886385;

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
    msg.setTimeStamp(0.629909560785);
    msg.setSource(53314U);
    msg.setSourceEntity(207U);
    msg.setDestination(14981U);
    msg.setDestinationEntity(41U);
    msg.value = 0.760041600492;

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
    msg.setTimeStamp(0.515459488159);
    msg.setSource(35916U);
    msg.setSourceEntity(164U);
    msg.setDestination(40360U);
    msg.setDestinationEntity(116U);
    msg.value = 0.0334672200638;

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
    msg.setTimeStamp(0.126141619949);
    msg.setSource(45407U);
    msg.setSourceEntity(31U);
    msg.setDestination(22290U);
    msg.setDestinationEntity(34U);
    msg.value = 0.653642149341;

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
    msg.setTimeStamp(0.0798163589705);
    msg.setSource(53712U);
    msg.setSourceEntity(179U);
    msg.setDestination(25958U);
    msg.setDestinationEntity(26U);
    msg.value = 0.130073154609;

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
    msg.setTimeStamp(0.60030324717);
    msg.setSource(28204U);
    msg.setSourceEntity(50U);
    msg.setDestination(59436U);
    msg.setDestinationEntity(188U);
    msg.value = 0.859229508687;

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
    msg.setTimeStamp(0.8664490052);
    msg.setSource(31274U);
    msg.setSourceEntity(69U);
    msg.setDestination(54197U);
    msg.setDestinationEntity(4U);
    msg.value = 0.765248716975;

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
    msg.setTimeStamp(0.138729119801);
    msg.setSource(52704U);
    msg.setSourceEntity(148U);
    msg.setDestination(9295U);
    msg.setDestinationEntity(80U);
    msg.value = 0.425735358867;

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
    msg.setTimeStamp(0.0224309124133);
    msg.setSource(33938U);
    msg.setSourceEntity(183U);
    msg.setDestination(30290U);
    msg.setDestinationEntity(137U);
    msg.value = 0.979204988992;

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
    msg.setTimeStamp(0.94502421061);
    msg.setSource(39443U);
    msg.setSourceEntity(32U);
    msg.setDestination(61428U);
    msg.setDestinationEntity(161U);
    msg.value = 0.0691383443199;

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
    msg.setTimeStamp(0.880164009896);
    msg.setSource(5945U);
    msg.setSourceEntity(180U);
    msg.setDestination(57567U);
    msg.setDestinationEntity(165U);
    msg.direction = 0.0983137650395;
    msg.speed = 0.837348928826;
    msg.turbulence = 0.1849358675;

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
    msg.setTimeStamp(0.712310907961);
    msg.setSource(34481U);
    msg.setSourceEntity(254U);
    msg.setDestination(40673U);
    msg.setDestinationEntity(27U);
    msg.direction = 0.27369053044;
    msg.speed = 0.00658371030882;
    msg.turbulence = 0.00493694020693;

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
    msg.setTimeStamp(0.728681683233);
    msg.setSource(18393U);
    msg.setSourceEntity(253U);
    msg.setDestination(7068U);
    msg.setDestinationEntity(111U);
    msg.direction = 0.703985595148;
    msg.speed = 0.833538035773;
    msg.turbulence = 0.0564779812693;

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
    msg.setTimeStamp(0.0221103334898);
    msg.setSource(28060U);
    msg.setSourceEntity(139U);
    msg.setDestination(5833U);
    msg.setDestinationEntity(249U);
    msg.value = 0.362507448226;

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
    msg.setTimeStamp(0.856509777768);
    msg.setSource(4926U);
    msg.setSourceEntity(233U);
    msg.setDestination(25515U);
    msg.setDestinationEntity(4U);
    msg.value = 0.663432503381;

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
    msg.setTimeStamp(0.55206812314);
    msg.setSource(27143U);
    msg.setSourceEntity(140U);
    msg.setDestination(28047U);
    msg.setDestinationEntity(111U);
    msg.value = 0.617212766507;

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
    msg.setTimeStamp(0.357204072435);
    msg.setSource(47292U);
    msg.setSourceEntity(86U);
    msg.setDestination(19991U);
    msg.setDestinationEntity(87U);
    msg.value.assign("RHIKPQRVLXYTCVDSCUGAVPYSTKCKKSIEZCUSWAKBRKQFSQDHWXRFNORMONGHPCYMRUWDCYKITNXBJDAZOUUWOLWBZLDAWYLELZTJGXLQQGPXWNGMJODARFTFETVGNFQQEEFAFJBIANNZHXTNXVVJEMSIBRYMNFOELRERHMOZMXHSITUOMBHLAABWOKCKXOSCHVQKPDIYPVJYPBWZQEEMDBJZSTZUUPFNIFI");

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
    msg.setTimeStamp(0.32809680345);
    msg.setSource(39612U);
    msg.setSourceEntity(42U);
    msg.setDestination(62302U);
    msg.setDestinationEntity(141U);
    msg.value.assign("TRZTWUXKFLFWMJYLUSGDBLKQPKACPJPPXMUEREWJNHLUAGSGKEMVN");

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
    msg.setTimeStamp(0.859083940214);
    msg.setSource(38745U);
    msg.setSourceEntity(53U);
    msg.setDestination(51821U);
    msg.setDestinationEntity(232U);
    msg.value.assign("UBAYNCHOGMZJQFVLCUEPPTTDDRNSGPTIEJTNFORBHSETYSNZDHMSGRCZHCWLHVFSGJODFKKYLGKQJWIXIATWLCYXVOOPEBNBUIPUCAMZPNPBJMAUMSXJNDZQKKBDGZYBZIYSYFQIRUQFWGHURUVVIZFOOEKCSPEMOVXJNLGYLQRHJECQWJRFAQVEMJMWIHMTWRPKVWFEGODTXACQQDSLSAVVXBUXTIAZWDDKNLIZBUMTHAX");

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
    msg.setTimeStamp(0.812952773954);
    msg.setSource(26441U);
    msg.setSourceEntity(37U);
    msg.setDestination(3180U);
    msg.setDestinationEntity(121U);
    const char tmp_msg_0[] = {7, 62, 112, 104, -54, 37, 74, 61, -14, -41, 91, -42, 62, 65, -80, 16, 120, 63, 107, 22, -106, -63, 5, 4, -82, 54, 16, 84, 62, 94, -52, 32, -89, -104, -27, -33, -79, 97, -99, 26, 93, -125, -37, 17, 22, -90, -82, -84};
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
    msg.setTimeStamp(0.466010329629);
    msg.setSource(64096U);
    msg.setSourceEntity(209U);
    msg.setDestination(25164U);
    msg.setDestinationEntity(213U);
    const char tmp_msg_0[] = {-26, -125, 16, -62, -110, 47, -52, 125, 60, 53, -111, 9, 116, -79, 33, 109, 80, 50, 63, 84, -30, 104, -95, 124, -48, 103, 49, 120, -53, 59, -103, -52, -127, 69, 96, 77, 81, -99, 44, -87, -78, -108, -123, 8, 4, 83, -18, 111, 123, -124, 77, -95, -16, 8, 83, 119, -58, 14, -73, 108, -43, -90, -82, 1, -39, 37, 32, -52, 125, -56, 38, 82, -61, -43, -45, 16, 123, -106, -18};
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
    msg.setTimeStamp(0.995139412488);
    msg.setSource(52976U);
    msg.setSourceEntity(115U);
    msg.setDestination(62010U);
    msg.setDestinationEntity(162U);
    const char tmp_msg_0[] = {-123, 52, -90, 104, 69, -46, -113, 0, 7, -8, -109, 118, -21, -101, -122, 0, 115, -42, 52, 69, -79, 66, 88, -89, -11, -30, 52, -81, -82, 32, 69, -110, -115, -126, -86, -68, 89, -78, -69, 111, 29, -35, -73, 87, 50, -38, 6, -23, 17, -52, -115, 83, -43, -104, 56, 58, -88, -35, 117, -82, -54, -120, -58, -6, -73, -44, -3, -112, -81, 115, -94, -78, -59, -63, 81, 57, 104, 116, 123, 124, -21, -21, 106, 8, -127, 78, 6, 15, 88, 108, 54, -58, -17, 89, 50, 107, 78, 88, 89, 44, -17, -104, -16, 104, 29, 32, 88, 7, 33, 9, 28, -45, -23, 93, -116, 90, 13, 41, 111, -95, -78, -96, 102, 5, 106, -83, 99, 109};
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
    msg.setTimeStamp(0.0465262009191);
    msg.setSource(17383U);
    msg.setSourceEntity(91U);
    msg.setDestination(48188U);
    msg.setDestinationEntity(170U);
    msg.value = 0.627681909531;

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
    msg.setTimeStamp(0.050627732678);
    msg.setSource(3214U);
    msg.setSourceEntity(48U);
    msg.setDestination(48279U);
    msg.setDestinationEntity(205U);
    msg.value = 0.428180679663;

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
    msg.setTimeStamp(0.391523442406);
    msg.setSource(10013U);
    msg.setSourceEntity(60U);
    msg.setDestination(7786U);
    msg.setDestinationEntity(172U);
    msg.value = 0.670822007876;

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
    msg.setTimeStamp(0.882610815796);
    msg.setSource(29893U);
    msg.setSourceEntity(111U);
    msg.setDestination(55835U);
    msg.setDestinationEntity(198U);
    msg.type = 92U;
    msg.frequency = 771089501U;
    msg.min_range = 33210U;
    msg.max_range = 30952U;
    msg.bits_per_point = 138U;
    msg.scale_factor = 0.266026022626;
    const char tmp_msg_0[] = {-55, -29, 45, -3, 48, -55, -108, -115, 17, -56, -35, -124, 102, -73, -34, 106, -52, -52, -47, 49, 68, -48, -68, -112, -105, -114, -21, -96, -98, 120, 91, 70, 78, 16, 89, -69, 50, 45, 77, 96, 97, 111, -36, 107, -53, 48, -85, 93, -33, 35, -102, -76, 29, -72, -110, -97, -66, 61, -18, -125, -18, 26, 42, 65, -66, 33, 110, -57, -116, 3, 49, -53, -29, -111, 80, 3, 3, -68, 69, 20, -50, 48, -128, -97, -116, -43, -48, 24, 107, 110, 57, -21, -61, 76, 13, -65, 110, -15, -91, -58, 84, 72, -88, 57, 82, 38, -71, -83, -12, 111, -17, -120, 28, 81, 109, -7, 75, -101, 54, -65, 18};
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
    msg.setTimeStamp(0.0817036336099);
    msg.setSource(64640U);
    msg.setSourceEntity(52U);
    msg.setDestination(13534U);
    msg.setDestinationEntity(235U);
    msg.type = 213U;
    msg.frequency = 4019123817U;
    msg.min_range = 19527U;
    msg.max_range = 35345U;
    msg.bits_per_point = 99U;
    msg.scale_factor = 0.391317808436;
    const char tmp_msg_0[] = {80, -121, 52, 102, -5, 95, -76, 87, 53, -54, 31, 21, 45, 51, 77, -68, -107, 54, 41, 0, -11, -103, 82, -66, -36, -99, -74, 27, -32, -102, -55, -103, -110, -99, -116, -52, 104, -79, -95, -17, -93, 82, -81, 99, 61, 23, 70, -68, -21, 97, -67, -54, -15, 81, 107, -33, 26, 76, 59, -91, -66, -43, 80, -62, 101, 55, 18, 117, 67, -62, -25, 116, -76, -92, 6};
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
    msg.setTimeStamp(0.993156587452);
    msg.setSource(55082U);
    msg.setSourceEntity(121U);
    msg.setDestination(18697U);
    msg.setDestinationEntity(28U);
    msg.type = 72U;
    msg.frequency = 3644068412U;
    msg.min_range = 8047U;
    msg.max_range = 41822U;
    msg.bits_per_point = 85U;
    msg.scale_factor = 0.935217610879;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.667117120938;
    tmp_msg_0.beam_height = 0.648168862535;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-120, 99, 18, 65, 34, 37, -9, 54, -74, 100, -84, 105, -7, -58, -47, -33, -18, 111, 29, -19, -49, 112, -126, -18, -84, 68, 114, -118, -40, -69, -89, 60, 122, 88, 62, -78, -18, 113, 74, 44, -117, -22, 69, 63, 40, -114, 25, 52, -42, 4, 92, -86, 113, -8, -91, 71, 66, -81, 36, -44, 111};
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
    msg.setTimeStamp(0.273112785526);
    msg.setSource(32665U);
    msg.setSourceEntity(202U);
    msg.setDestination(1859U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.276220855447);
    msg.setSource(6264U);
    msg.setSourceEntity(216U);
    msg.setDestination(60524U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.943628264766);
    msg.setSource(1242U);
    msg.setSourceEntity(120U);
    msg.setDestination(45953U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.803361204021);
    msg.setSource(64573U);
    msg.setSourceEntity(6U);
    msg.setDestination(34868U);
    msg.setDestinationEntity(46U);
    msg.op = 76U;

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
    msg.setTimeStamp(0.130388819093);
    msg.setSource(9099U);
    msg.setSourceEntity(247U);
    msg.setDestination(22147U);
    msg.setDestinationEntity(50U);
    msg.op = 107U;

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
    msg.setTimeStamp(0.60129368475);
    msg.setSource(13443U);
    msg.setSourceEntity(52U);
    msg.setDestination(13371U);
    msg.setDestinationEntity(188U);
    msg.op = 192U;

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
    msg.setTimeStamp(0.477154311531);
    msg.setSource(56332U);
    msg.setSourceEntity(128U);
    msg.setDestination(30233U);
    msg.setDestinationEntity(209U);
    msg.value = 0.673928438623;
    msg.confidence = 0.079037240044;
    msg.opmodes.assign("ILRDFWELFOHEJQZPKBWAKTAXMXYAPXUHSIBQWYGTSBDRIARMFDJZ");

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
    msg.setTimeStamp(0.0459221966733);
    msg.setSource(336U);
    msg.setSourceEntity(56U);
    msg.setDestination(58535U);
    msg.setDestinationEntity(86U);
    msg.value = 0.579888440345;
    msg.confidence = 0.954589088675;
    msg.opmodes.assign("QPZVYZEHEFDFXYJLWALGBLHIGSECYRJMPSWKKWQGP");

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
    msg.setTimeStamp(0.27988280088);
    msg.setSource(30888U);
    msg.setSourceEntity(50U);
    msg.setDestination(13550U);
    msg.setDestinationEntity(232U);
    msg.value = 0.60671315662;
    msg.confidence = 0.288622320708;
    msg.opmodes.assign("JJGQISNIEVCHUXLMPADKGKQPWFTTSMYWXCZUYINKCLVVRQJWDKXJSPLKAMZYPVKEXAROQWWSYDZYISGSAMCZUQXMMNEHTSGGCAUQQOBVTBMIFBYCZWPHDJXTEAUZOMOZSGLRFDCFRSVRHDCFPHNLZBWTHTNUHBKMCLNTIHRLBRYOBUOKPKVDOBNNAGRDXCAALJWVFMWHUDNPPLETI");

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
    msg.setTimeStamp(0.812997745053);
    msg.setSource(57851U);
    msg.setSourceEntity(92U);
    msg.setDestination(9824U);
    msg.setDestinationEntity(73U);
    msg.itow = 396579787U;
    msg.lat = 0.730438131773;
    msg.lon = 0.425369201449;
    msg.height_ell = 0.720937594828;
    msg.height_sea = 0.531384806232;
    msg.hacc = 0.717502649473;
    msg.vacc = 0.238843967136;
    msg.vel_n = 0.995011974231;
    msg.vel_e = 0.856483643601;
    msg.vel_d = 0.64995502497;
    msg.speed = 0.769930317724;
    msg.gspeed = 0.830894095692;
    msg.heading = 0.0942574685597;
    msg.sacc = 0.913133137044;
    msg.cacc = 0.101826451708;

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
    msg.setTimeStamp(0.00511011473668);
    msg.setSource(56402U);
    msg.setSourceEntity(49U);
    msg.setDestination(30052U);
    msg.setDestinationEntity(85U);
    msg.itow = 3759477415U;
    msg.lat = 0.655488691148;
    msg.lon = 0.716059811408;
    msg.height_ell = 0.0188769335973;
    msg.height_sea = 0.661183600152;
    msg.hacc = 0.632115631977;
    msg.vacc = 0.0367280769428;
    msg.vel_n = 0.304004936802;
    msg.vel_e = 0.0713833530399;
    msg.vel_d = 0.787000222371;
    msg.speed = 0.147859558018;
    msg.gspeed = 0.831190855264;
    msg.heading = 0.435755256005;
    msg.sacc = 0.521890642843;
    msg.cacc = 0.476241526781;

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
    msg.setTimeStamp(0.865198986206);
    msg.setSource(5896U);
    msg.setSourceEntity(14U);
    msg.setDestination(54424U);
    msg.setDestinationEntity(102U);
    msg.itow = 3101886323U;
    msg.lat = 0.901487241657;
    msg.lon = 0.783073046865;
    msg.height_ell = 0.255115921547;
    msg.height_sea = 0.832809374972;
    msg.hacc = 0.94124515609;
    msg.vacc = 0.616435264985;
    msg.vel_n = 0.876010066751;
    msg.vel_e = 0.852487984555;
    msg.vel_d = 0.551118943936;
    msg.speed = 0.753073172924;
    msg.gspeed = 0.77188662856;
    msg.heading = 0.326494820183;
    msg.sacc = 0.00676510871407;
    msg.cacc = 0.98119480811;

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
    msg.setTimeStamp(0.942007365117);
    msg.setSource(11428U);
    msg.setSourceEntity(81U);
    msg.setDestination(27659U);
    msg.setDestinationEntity(152U);
    msg.id = 6U;
    msg.value = 0.514652543542;

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
    msg.setTimeStamp(0.988275346239);
    msg.setSource(56397U);
    msg.setSourceEntity(141U);
    msg.setDestination(15167U);
    msg.setDestinationEntity(128U);
    msg.id = 246U;
    msg.value = 0.116191719201;

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
    msg.setTimeStamp(0.00243896132876);
    msg.setSource(46652U);
    msg.setSourceEntity(85U);
    msg.setDestination(24159U);
    msg.setDestinationEntity(23U);
    msg.id = 208U;
    msg.value = 0.709111446563;

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
    msg.setTimeStamp(0.686751039827);
    msg.setSource(2585U);
    msg.setSourceEntity(71U);
    msg.setDestination(63449U);
    msg.setDestinationEntity(237U);
    msg.x = 0.421934926049;
    msg.y = 0.07472521768;
    msg.z = 0.779056100479;
    msg.phi = 0.548261345061;
    msg.theta = 0.810467232853;
    msg.psi = 0.812919507716;

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
    msg.setTimeStamp(0.834487318507);
    msg.setSource(20863U);
    msg.setSourceEntity(191U);
    msg.setDestination(20157U);
    msg.setDestinationEntity(66U);
    msg.x = 0.078228735696;
    msg.y = 0.0109475965432;
    msg.z = 0.117597625648;
    msg.phi = 0.54649287602;
    msg.theta = 0.693962131402;
    msg.psi = 0.0393878236937;

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
    msg.setTimeStamp(0.484352544676);
    msg.setSource(25194U);
    msg.setSourceEntity(104U);
    msg.setDestination(51304U);
    msg.setDestinationEntity(246U);
    msg.x = 0.667194917833;
    msg.y = 0.0584796065342;
    msg.z = 0.583666998337;
    msg.phi = 0.881940290599;
    msg.theta = 0.69010584585;
    msg.psi = 0.975062025527;

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
    msg.setTimeStamp(0.376245141823);
    msg.setSource(27396U);
    msg.setSourceEntity(210U);
    msg.setDestination(35165U);
    msg.setDestinationEntity(145U);
    msg.beam_width = 0.455234249638;
    msg.beam_height = 0.0434466385449;

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
    msg.setTimeStamp(0.983539316841);
    msg.setSource(39658U);
    msg.setSourceEntity(49U);
    msg.setDestination(25710U);
    msg.setDestinationEntity(199U);
    msg.beam_width = 0.675069360748;
    msg.beam_height = 0.59174541786;

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
    msg.setTimeStamp(0.268083694936);
    msg.setSource(46278U);
    msg.setSourceEntity(228U);
    msg.setDestination(39788U);
    msg.setDestinationEntity(230U);
    msg.beam_width = 0.147910177369;
    msg.beam_height = 0.0973058809302;

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
    msg.setTimeStamp(0.218594558406);
    msg.setSource(32465U);
    msg.setSourceEntity(97U);
    msg.setDestination(13923U);
    msg.setDestinationEntity(1U);
    msg.sane = 20U;

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
    msg.setTimeStamp(0.570785957252);
    msg.setSource(29898U);
    msg.setSourceEntity(57U);
    msg.setDestination(4022U);
    msg.setDestinationEntity(48U);
    msg.sane = 181U;

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
    msg.setTimeStamp(0.469821910289);
    msg.setSource(13845U);
    msg.setSourceEntity(53U);
    msg.setDestination(51367U);
    msg.setDestinationEntity(126U);
    msg.sane = 222U;

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
    msg.setTimeStamp(0.536637497578);
    msg.setSource(33426U);
    msg.setSourceEntity(67U);
    msg.setDestination(17525U);
    msg.setDestinationEntity(221U);
    msg.value = 0.260525594712;

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
    msg.setTimeStamp(0.424303573545);
    msg.setSource(29954U);
    msg.setSourceEntity(247U);
    msg.setDestination(25398U);
    msg.setDestinationEntity(75U);
    msg.value = 0.868777805142;

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
    msg.setTimeStamp(0.200715340383);
    msg.setSource(18294U);
    msg.setSourceEntity(22U);
    msg.setDestination(29276U);
    msg.setDestinationEntity(157U);
    msg.value = 0.0912884947065;

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
    msg.setTimeStamp(0.928692268822);
    msg.setSource(39299U);
    msg.setSourceEntity(2U);
    msg.setDestination(10386U);
    msg.setDestinationEntity(172U);
    msg.value = 0.137316514749;

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
    msg.setTimeStamp(0.646483238588);
    msg.setSource(50031U);
    msg.setSourceEntity(66U);
    msg.setDestination(26351U);
    msg.setDestinationEntity(248U);
    msg.value = 0.913633770567;

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
    msg.setTimeStamp(0.0711779255866);
    msg.setSource(12375U);
    msg.setSourceEntity(88U);
    msg.setDestination(60182U);
    msg.setDestinationEntity(206U);
    msg.value = 0.742177953178;

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
    msg.setTimeStamp(0.693497552529);
    msg.setSource(62447U);
    msg.setSourceEntity(216U);
    msg.setDestination(41888U);
    msg.setDestinationEntity(183U);
    msg.value = 0.357413794512;

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
    msg.setTimeStamp(0.331688346948);
    msg.setSource(15054U);
    msg.setSourceEntity(143U);
    msg.setDestination(63083U);
    msg.setDestinationEntity(66U);
    msg.value = 0.118503529504;

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
    msg.setTimeStamp(0.319270903672);
    msg.setSource(1310U);
    msg.setSourceEntity(224U);
    msg.setDestination(9346U);
    msg.setDestinationEntity(4U);
    msg.value = 0.520828862707;

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
    msg.setTimeStamp(0.0441071500614);
    msg.setSource(33550U);
    msg.setSourceEntity(248U);
    msg.setDestination(61837U);
    msg.setDestinationEntity(149U);
    msg.value = 0.808854639812;

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
    msg.setTimeStamp(0.392446835094);
    msg.setSource(33261U);
    msg.setSourceEntity(188U);
    msg.setDestination(28597U);
    msg.setDestinationEntity(225U);
    msg.value = 0.816751916831;

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
    msg.setTimeStamp(0.171205740351);
    msg.setSource(62536U);
    msg.setSourceEntity(15U);
    msg.setDestination(18575U);
    msg.setDestinationEntity(235U);
    msg.value = 0.316771702722;

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
    msg.setTimeStamp(0.145220897275);
    msg.setSource(6331U);
    msg.setSourceEntity(22U);
    msg.setDestination(4476U);
    msg.setDestinationEntity(161U);
    msg.value = 0.324892239241;

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
    msg.setTimeStamp(0.0742901626331);
    msg.setSource(40106U);
    msg.setSourceEntity(224U);
    msg.setDestination(34634U);
    msg.setDestinationEntity(209U);
    msg.value = 0.663314985863;

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
    msg.setTimeStamp(0.316233725734);
    msg.setSource(49021U);
    msg.setSourceEntity(232U);
    msg.setDestination(50828U);
    msg.setDestinationEntity(252U);
    msg.value = 0.453693274188;

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
    msg.setTimeStamp(0.873654134733);
    msg.setSource(31034U);
    msg.setSourceEntity(53U);
    msg.setDestination(15956U);
    msg.setDestinationEntity(38U);
    msg.value = 0.510347586763;

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
    msg.setTimeStamp(0.57468190903);
    msg.setSource(14859U);
    msg.setSourceEntity(5U);
    msg.setDestination(21210U);
    msg.setDestinationEntity(7U);
    msg.value = 0.207502396998;

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
    msg.setTimeStamp(0.134319607908);
    msg.setSource(9184U);
    msg.setSourceEntity(187U);
    msg.setDestination(30518U);
    msg.setDestinationEntity(215U);
    msg.value = 0.707933148906;

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
    msg.setTimeStamp(0.514054945359);
    msg.setSource(21940U);
    msg.setSourceEntity(218U);
    msg.setDestination(64512U);
    msg.setDestinationEntity(59U);
    msg.value = 0.736062445753;

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
    msg.setTimeStamp(0.402377739515);
    msg.setSource(12133U);
    msg.setSourceEntity(3U);
    msg.setDestination(54393U);
    msg.setDestinationEntity(139U);
    msg.value = 0.753645584913;

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
    msg.setTimeStamp(0.519769285589);
    msg.setSource(17331U);
    msg.setSourceEntity(2U);
    msg.setDestination(26650U);
    msg.setDestinationEntity(148U);
    msg.value = 0.368651921667;

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
    msg.setTimeStamp(0.946883996111);
    msg.setSource(6665U);
    msg.setSourceEntity(86U);
    msg.setDestination(18639U);
    msg.setDestinationEntity(173U);
    msg.value = 0.0237721935388;

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
    msg.setTimeStamp(0.683501140478);
    msg.setSource(20440U);
    msg.setSourceEntity(224U);
    msg.setDestination(9365U);
    msg.setDestinationEntity(15U);
    msg.value = 0.926097810778;

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
    msg.setTimeStamp(0.968897761116);
    msg.setSource(5559U);
    msg.setSourceEntity(194U);
    msg.setDestination(4882U);
    msg.setDestinationEntity(61U);
    msg.value = 0.469988784881;

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
    msg.setTimeStamp(0.188933899072);
    msg.setSource(4750U);
    msg.setSourceEntity(167U);
    msg.setDestination(55561U);
    msg.setDestinationEntity(184U);
    msg.validity = 15994U;
    msg.type = 189U;
    msg.tow = 770246223U;
    msg.base_lat = 0.142196520394;
    msg.base_lon = 0.239998699107;
    msg.base_height = 0.651096829105;
    msg.n = 0.740234403001;
    msg.e = 0.375686600956;
    msg.d = 0.764015294185;
    msg.v_n = 0.993239828906;
    msg.v_e = 0.468317900803;
    msg.v_d = 0.734143555733;
    msg.satellites = 74U;
    msg.iar_hyp = 23158U;
    msg.iar_ratio = 0.818351073296;

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
    msg.setTimeStamp(0.717029864986);
    msg.setSource(541U);
    msg.setSourceEntity(130U);
    msg.setDestination(54981U);
    msg.setDestinationEntity(224U);
    msg.validity = 14943U;
    msg.type = 203U;
    msg.tow = 2112284396U;
    msg.base_lat = 0.322550821364;
    msg.base_lon = 0.346855438837;
    msg.base_height = 0.924808423379;
    msg.n = 0.457067913594;
    msg.e = 0.251594042769;
    msg.d = 0.586495677956;
    msg.v_n = 0.93879487544;
    msg.v_e = 0.971644120911;
    msg.v_d = 0.749758464867;
    msg.satellites = 53U;
    msg.iar_hyp = 51573U;
    msg.iar_ratio = 0.87943458565;

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
    msg.setTimeStamp(0.765408588894);
    msg.setSource(6169U);
    msg.setSourceEntity(110U);
    msg.setDestination(56402U);
    msg.setDestinationEntity(18U);
    msg.validity = 56255U;
    msg.type = 60U;
    msg.tow = 2273985250U;
    msg.base_lat = 0.281741536631;
    msg.base_lon = 0.870521157937;
    msg.base_height = 0.814284915984;
    msg.n = 0.683186859548;
    msg.e = 0.369597069895;
    msg.d = 0.97887667682;
    msg.v_n = 0.409593380199;
    msg.v_e = 0.981616216035;
    msg.v_d = 0.900415031063;
    msg.satellites = 40U;
    msg.iar_hyp = 24148U;
    msg.iar_ratio = 0.218639136971;

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
    msg.setTimeStamp(0.0565069613396);
    msg.setSource(57592U);
    msg.setSourceEntity(158U);
    msg.setDestination(61265U);
    msg.setDestinationEntity(108U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.485103272685;
    tmp_msg_0.lon = 0.811604679715;
    tmp_msg_0.height = 0.903161430993;
    tmp_msg_0.x = 0.321255238972;
    tmp_msg_0.y = 0.455907248389;
    tmp_msg_0.z = 0.134801496929;
    tmp_msg_0.phi = 0.516763638278;
    tmp_msg_0.theta = 0.142353830497;
    tmp_msg_0.psi = 0.585681333678;
    tmp_msg_0.u = 0.798900895919;
    tmp_msg_0.v = 0.188479763926;
    tmp_msg_0.w = 0.83117621185;
    tmp_msg_0.vx = 0.891063782535;
    tmp_msg_0.vy = 0.831043814527;
    tmp_msg_0.vz = 0.64593638152;
    tmp_msg_0.p = 0.2968729017;
    tmp_msg_0.q = 0.475620486822;
    tmp_msg_0.r = 0.538166298228;
    tmp_msg_0.depth = 0.71093696976;
    tmp_msg_0.alt = 0.116979349614;
    msg.state.set(tmp_msg_0);
    msg.type = 159U;

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
    msg.setTimeStamp(0.890085772944);
    msg.setSource(46396U);
    msg.setSourceEntity(93U);
    msg.setDestination(42057U);
    msg.setDestinationEntity(9U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0884158672484;
    tmp_msg_0.lon = 0.0160928384059;
    tmp_msg_0.height = 0.93058866049;
    tmp_msg_0.x = 0.672489252694;
    tmp_msg_0.y = 0.70933304545;
    tmp_msg_0.z = 0.903108061121;
    tmp_msg_0.phi = 0.268978176507;
    tmp_msg_0.theta = 0.152676745148;
    tmp_msg_0.psi = 0.858304266382;
    tmp_msg_0.u = 0.263300749991;
    tmp_msg_0.v = 0.389100996225;
    tmp_msg_0.w = 0.709188513174;
    tmp_msg_0.vx = 0.608368741646;
    tmp_msg_0.vy = 0.657262215219;
    tmp_msg_0.vz = 0.226958973285;
    tmp_msg_0.p = 0.506305481229;
    tmp_msg_0.q = 0.497541040712;
    tmp_msg_0.r = 0.350676449813;
    tmp_msg_0.depth = 0.272831735702;
    tmp_msg_0.alt = 0.809518079479;
    msg.state.set(tmp_msg_0);
    msg.type = 175U;

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
    msg.setTimeStamp(0.846862477504);
    msg.setSource(14835U);
    msg.setSourceEntity(138U);
    msg.setDestination(59636U);
    msg.setDestinationEntity(179U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.157007312135;
    tmp_msg_0.lon = 0.272535150714;
    tmp_msg_0.height = 0.756349533096;
    tmp_msg_0.x = 0.515834783194;
    tmp_msg_0.y = 0.64181396658;
    tmp_msg_0.z = 0.357002487023;
    tmp_msg_0.phi = 0.112553178378;
    tmp_msg_0.theta = 0.512272125565;
    tmp_msg_0.psi = 0.883426234766;
    tmp_msg_0.u = 0.316127833372;
    tmp_msg_0.v = 0.70259297514;
    tmp_msg_0.w = 0.807786691318;
    tmp_msg_0.vx = 0.435705110441;
    tmp_msg_0.vy = 0.848893578761;
    tmp_msg_0.vz = 0.23513054489;
    tmp_msg_0.p = 0.657978601553;
    tmp_msg_0.q = 0.928266242637;
    tmp_msg_0.r = 0.0223437106825;
    tmp_msg_0.depth = 0.758315962355;
    tmp_msg_0.alt = 0.144426192762;
    msg.state.set(tmp_msg_0);
    msg.type = 157U;

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
    msg.setTimeStamp(0.845415477818);
    msg.setSource(33445U);
    msg.setSourceEntity(9U);
    msg.setDestination(32480U);
    msg.setDestinationEntity(112U);
    msg.value = 0.31767279351;

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
    msg.setTimeStamp(0.15138916582);
    msg.setSource(32062U);
    msg.setSourceEntity(63U);
    msg.setDestination(5158U);
    msg.setDestinationEntity(76U);
    msg.value = 0.375826017568;

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
    msg.setTimeStamp(0.173048938266);
    msg.setSource(1617U);
    msg.setSourceEntity(34U);
    msg.setDestination(10353U);
    msg.setDestinationEntity(194U);
    msg.value = 0.569744854149;

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
    msg.setTimeStamp(0.430719343256);
    msg.setSource(2861U);
    msg.setSourceEntity(65U);
    msg.setDestination(44030U);
    msg.setDestinationEntity(53U);
    msg.value = 0.218626049512;

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
    msg.setTimeStamp(0.895412879172);
    msg.setSource(25445U);
    msg.setSourceEntity(114U);
    msg.setDestination(18775U);
    msg.setDestinationEntity(80U);
    msg.value = 0.231038984601;

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
    msg.setTimeStamp(0.19271920278);
    msg.setSource(12889U);
    msg.setSourceEntity(229U);
    msg.setDestination(28026U);
    msg.setDestinationEntity(16U);
    msg.value = 0.51634059185;

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
    msg.setTimeStamp(0.668311399506);
    msg.setSource(34515U);
    msg.setSourceEntity(217U);
    msg.setDestination(42825U);
    msg.setDestinationEntity(156U);
    msg.value = 0.161047882174;

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
    msg.setTimeStamp(0.901944068181);
    msg.setSource(2133U);
    msg.setSourceEntity(251U);
    msg.setDestination(37310U);
    msg.setDestinationEntity(235U);
    msg.value = 0.299431054892;

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
    msg.setTimeStamp(0.358928231198);
    msg.setSource(8153U);
    msg.setSourceEntity(147U);
    msg.setDestination(31010U);
    msg.setDestinationEntity(127U);
    msg.value = 0.800985975042;

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
    msg.setTimeStamp(0.700224073732);
    msg.setSource(16820U);
    msg.setSourceEntity(41U);
    msg.setDestination(34158U);
    msg.setDestinationEntity(39U);
    msg.value = 0.20350447407;

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
    msg.setTimeStamp(0.429492648188);
    msg.setSource(44064U);
    msg.setSourceEntity(179U);
    msg.setDestination(14259U);
    msg.setDestinationEntity(112U);
    msg.value = 0.572250506826;

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
    msg.setTimeStamp(0.868120510489);
    msg.setSource(53854U);
    msg.setSourceEntity(48U);
    msg.setDestination(37550U);
    msg.setDestinationEntity(179U);
    msg.value = 0.469213134626;

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
    msg.setTimeStamp(0.479850178232);
    msg.setSource(55494U);
    msg.setSourceEntity(105U);
    msg.setDestination(52627U);
    msg.setDestinationEntity(77U);
    msg.value = 0.123955238106;

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
    msg.setTimeStamp(0.205334272919);
    msg.setSource(56273U);
    msg.setSourceEntity(139U);
    msg.setDestination(58452U);
    msg.setDestinationEntity(45U);
    msg.value = 0.932487726819;

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
    msg.setTimeStamp(0.823341942754);
    msg.setSource(22710U);
    msg.setSourceEntity(139U);
    msg.setDestination(19670U);
    msg.setDestinationEntity(47U);
    msg.value = 0.672631151305;

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
    msg.setTimeStamp(0.0631755552622);
    msg.setSource(60356U);
    msg.setSourceEntity(158U);
    msg.setDestination(44844U);
    msg.setDestinationEntity(88U);
    msg.id = 139U;
    msg.zoom = 123U;
    msg.action = 16U;

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
    msg.setTimeStamp(0.776413018824);
    msg.setSource(45504U);
    msg.setSourceEntity(213U);
    msg.setDestination(37634U);
    msg.setDestinationEntity(145U);
    msg.id = 93U;
    msg.zoom = 38U;
    msg.action = 238U;

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
    msg.setTimeStamp(0.166078348348);
    msg.setSource(35099U);
    msg.setSourceEntity(150U);
    msg.setDestination(27647U);
    msg.setDestinationEntity(35U);
    msg.id = 17U;
    msg.zoom = 226U;
    msg.action = 175U;

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
    msg.setTimeStamp(0.364465026995);
    msg.setSource(40253U);
    msg.setSourceEntity(120U);
    msg.setDestination(50751U);
    msg.setDestinationEntity(127U);
    msg.id = 125U;
    msg.value = 0.824184279634;

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
    msg.setTimeStamp(0.825983607407);
    msg.setSource(8737U);
    msg.setSourceEntity(41U);
    msg.setDestination(64726U);
    msg.setDestinationEntity(110U);
    msg.id = 167U;
    msg.value = 0.550457273711;

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
    msg.setTimeStamp(0.00359016141372);
    msg.setSource(9525U);
    msg.setSourceEntity(187U);
    msg.setDestination(61201U);
    msg.setDestinationEntity(157U);
    msg.id = 109U;
    msg.value = 0.963207836115;

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
    msg.setTimeStamp(0.114987074961);
    msg.setSource(29485U);
    msg.setSourceEntity(214U);
    msg.setDestination(17656U);
    msg.setDestinationEntity(88U);
    msg.id = 160U;
    msg.value = 0.108075592595;

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
    msg.setTimeStamp(0.876277814054);
    msg.setSource(56334U);
    msg.setSourceEntity(133U);
    msg.setDestination(16006U);
    msg.setDestinationEntity(39U);
    msg.id = 230U;
    msg.value = 0.482456126977;

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
    msg.setTimeStamp(0.516787899156);
    msg.setSource(12990U);
    msg.setSourceEntity(149U);
    msg.setDestination(9729U);
    msg.setDestinationEntity(210U);
    msg.id = 207U;
    msg.value = 0.826528247926;

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
    msg.setTimeStamp(0.431450220708);
    msg.setSource(57738U);
    msg.setSourceEntity(211U);
    msg.setDestination(16703U);
    msg.setDestinationEntity(68U);
    msg.id = 125U;
    msg.angle = 0.449915560815;

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
    msg.setTimeStamp(0.0747425587836);
    msg.setSource(28000U);
    msg.setSourceEntity(246U);
    msg.setDestination(62844U);
    msg.setDestinationEntity(104U);
    msg.id = 116U;
    msg.angle = 0.933769889948;

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
    msg.setTimeStamp(0.572153558679);
    msg.setSource(12556U);
    msg.setSourceEntity(9U);
    msg.setDestination(2700U);
    msg.setDestinationEntity(136U);
    msg.id = 90U;
    msg.angle = 0.872023251774;

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
    msg.setTimeStamp(0.770656754707);
    msg.setSource(25457U);
    msg.setSourceEntity(13U);
    msg.setDestination(34736U);
    msg.setDestinationEntity(58U);
    msg.op = 244U;
    msg.actions.assign("DYWFVOVECCKYCYFUDAPPWTNMCYOPJUXCEMHCNRZTCAFXQVKIRLDLSCTRAPBDRXURVXMWFQTKNFKXSZJHKHWQMESZQPLWTAKOVLQSTAYNDSDSZOVWIAFJWMPFTXRXASPIQJ");

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
    msg.setTimeStamp(0.164758901626);
    msg.setSource(9839U);
    msg.setSourceEntity(26U);
    msg.setDestination(15305U);
    msg.setDestinationEntity(26U);
    msg.op = 156U;
    msg.actions.assign("OGYLQXDDPADAXZFKYIQURKJUTPCQJQBHOXTESUWSDRHCUOZNNWPDIOZEQPSJENYKJXTGYOZNPDQPVMWYJXUAFHAMSNSPQBDXECVJYCRVUKWSEWIIKFEAHLLVLVFQEACLJWWGMECIRBZGNSPBRLQZAZIOESGTOURIKYDAUAHJFMKMFITHBBLYKDVUIMTMFIGRFCCXKNZETTMKSGAVX");

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
    msg.setTimeStamp(0.724687344379);
    msg.setSource(45852U);
    msg.setSourceEntity(141U);
    msg.setDestination(42413U);
    msg.setDestinationEntity(99U);
    msg.op = 39U;
    msg.actions.assign("QDKJBZFUIAEJUAMWERXSKUFFZYJDTSHXOCCRONDGLZXXDDHDCKNHAFWVTBCIJTMOQNTCETVEBXTEPKMLJYXODTNKIWRAMRPHFPUQCTPQJJIKZSTZQWOAPPUYFVNJELWWSZBCAIUWYSMJLLVBYNSOFPLAQAISVVVGQMUTHDFIGGKIFZQPUQRGBKWRDVGHACZBQBYNORHBEPCLZLOMYYBICMZVDS");

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
    msg.setTimeStamp(0.97897360664);
    msg.setSource(20068U);
    msg.setSourceEntity(156U);
    msg.setDestination(36715U);
    msg.setDestinationEntity(43U);
    msg.actions.assign("HCUGWIBIEMVPDZRSTADMBFPQYPKFCIHJIEAURQAQKPNGFLCQMWMDBGBAQZJXXNBVWWKM");

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
    msg.setTimeStamp(0.302541074304);
    msg.setSource(27867U);
    msg.setSourceEntity(233U);
    msg.setDestination(20930U);
    msg.setDestinationEntity(10U);
    msg.actions.assign("HPIJUZADNDOICKYJGXV");

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
    msg.setTimeStamp(0.527560635426);
    msg.setSource(34100U);
    msg.setSourceEntity(139U);
    msg.setDestination(57798U);
    msg.setDestinationEntity(71U);
    msg.actions.assign("NYWHGMRPRREXNZUYJTSZTDGKPYVSQTRVJDMEEFGIWODCLMWOCFFXNBOTFSMAKPRGXRLLSIWMUJHXHWKYACFOOZXDSLCOMLANTJQPDAEMUASDWYNVYFHYTWZNQPJBYHDCXZQKIOZNALTPIXXSKKBQGVUKGMJXQCFQGRCNMWCVALVHHTNIXUKBBJERLJKTMIEUWPGFHQRDQ");

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
    msg.setTimeStamp(0.188423818395);
    msg.setSource(45059U);
    msg.setSourceEntity(250U);
    msg.setDestination(56739U);
    msg.setDestinationEntity(113U);
    msg.button = 142U;
    msg.value = 95U;

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
    msg.setTimeStamp(0.96366030788);
    msg.setSource(49616U);
    msg.setSourceEntity(233U);
    msg.setDestination(10576U);
    msg.setDestinationEntity(244U);
    msg.button = 160U;
    msg.value = 95U;

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
    msg.setTimeStamp(0.575345296325);
    msg.setSource(38221U);
    msg.setSourceEntity(199U);
    msg.setDestination(9135U);
    msg.setDestinationEntity(9U);
    msg.button = 159U;
    msg.value = 197U;

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
    msg.setTimeStamp(0.372077642141);
    msg.setSource(5240U);
    msg.setSourceEntity(115U);
    msg.setDestination(58487U);
    msg.setDestinationEntity(144U);
    msg.op = 115U;
    msg.text.assign("VNHDMZFLPYSUSFXKETOHTWLJUGSGJOWNJCWENJTHJXPKGCNUMBYBFDZTMLHEXEEYKQZQSVXODFJWRQPRDIAXRVPFJQMPJPOVWMOTMUXBQGRVAMFAIUBTLIZYWUZVTIQPCOJHCJDWPXVSGECKEMREKVZILQXIIFPGYBDYFGYHHLABAWHRZNWDCWORZAFKTVUATHUYKLFLSXBSLIKBNTBGAABREDOPKCQSCGHZZOQOMNUN");

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
    msg.setTimeStamp(0.735689907627);
    msg.setSource(31241U);
    msg.setSourceEntity(114U);
    msg.setDestination(20153U);
    msg.setDestinationEntity(88U);
    msg.op = 5U;
    msg.text.assign("ECLEEMUTSVHTDJOPNROCJVNSBDUIENBUZHFKUHJGRGMNKIRPXAYKCLOAFWVF");

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
    msg.setTimeStamp(0.00730912675202);
    msg.setSource(10258U);
    msg.setSourceEntity(106U);
    msg.setDestination(902U);
    msg.setDestinationEntity(245U);
    msg.op = 247U;
    msg.text.assign("FRGDFCMQAJSJJLYONGXBQIHYZBQWAEKXBNNGSXPZMATDNXKYNRZLDKSMLMHRTUKCUZKFLJEOCVUOWYYVQYPBIVHIJSCASANIPMCVEPLXBXHQJFBXVHVMMOUHAMONGO");

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
    msg.setTimeStamp(0.51364110495);
    msg.setSource(47638U);
    msg.setSourceEntity(129U);
    msg.setDestination(8754U);
    msg.setDestinationEntity(143U);
    msg.op = 37U;
    msg.time_remain = 0.452649907394;
    msg.sched_time = 0.940216879728;

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
    msg.setTimeStamp(0.0147136655318);
    msg.setSource(11061U);
    msg.setSourceEntity(73U);
    msg.setDestination(45613U);
    msg.setDestinationEntity(1U);
    msg.op = 25U;
    msg.time_remain = 0.420026744272;
    msg.sched_time = 0.794543239275;

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
    msg.setTimeStamp(0.52300311999);
    msg.setSource(53173U);
    msg.setSourceEntity(9U);
    msg.setDestination(27893U);
    msg.setDestinationEntity(12U);
    msg.op = 223U;
    msg.time_remain = 0.648521951664;
    msg.sched_time = 0.833178147809;

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
    msg.setTimeStamp(0.0190814295934);
    msg.setSource(13059U);
    msg.setSourceEntity(17U);
    msg.setDestination(27486U);
    msg.setDestinationEntity(99U);
    msg.name.assign("NYLJBSGIFHKTFATVXQKYGDDOKCPMCCZBBWMEUTOMWDDPABAVACKJAWPSLLFKIDVUGGHUVELRSUYZJXIMKHZMIZVRHYSXTEFUIYHFIMGPPLEOUNKJSHP");
    msg.op = 67U;
    msg.sched_time = 0.203260688228;

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
    msg.setTimeStamp(0.566793991544);
    msg.setSource(22006U);
    msg.setSourceEntity(202U);
    msg.setDestination(20630U);
    msg.setDestinationEntity(181U);
    msg.name.assign("OJSAQRCHDGRKUQUZVYSLDMJMFNHJCEDIQVMYCBXNJVAIOEMUZKJWUQFHRYPWJTQEMNMIXTKXFRVBIBOEEFLRZBSWARLEKOLSMYDCPQJLJSXYEPVYZTQLDIHXLUOQDGEPVOPNNOZTERKTULQGLPQHOKFPRBVSNUOUEYUSFBAWHAMAWTCSWRIAJYYXBKCKDDIGIWPGWZUZTCHFZVZNGF");
    msg.op = 79U;
    msg.sched_time = 0.149569360727;

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
    msg.setTimeStamp(0.0134704008247);
    msg.setSource(35420U);
    msg.setSourceEntity(76U);
    msg.setDestination(8190U);
    msg.setDestinationEntity(14U);
    msg.name.assign("QBOWWRSUIDDMBFZTVLQNTSJCYJWAIIYRIUQXI");
    msg.op = 179U;
    msg.sched_time = 0.806316544625;

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
    msg.setTimeStamp(0.121658676682);
    msg.setSource(22144U);
    msg.setSourceEntity(98U);
    msg.setDestination(8291U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.78407607176);
    msg.setSource(31342U);
    msg.setSourceEntity(51U);
    msg.setDestination(34408U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.986885052058);
    msg.setSource(21257U);
    msg.setSourceEntity(131U);
    msg.setDestination(19759U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.452231089274);
    msg.setSource(20815U);
    msg.setSourceEntity(97U);
    msg.setDestination(64528U);
    msg.setDestinationEntity(194U);
    msg.name.assign("OVBWLGHRFXJUIAENTLSENRPSUFQHEMZRDYHCMJQVYCBOGLZSZVSAPTQQSJOMTJNEGEWGKLHTQTLUWOYFIAIWFOWXCFCYNUEDIKAAVCZQFHGSZVUOIWJWJXV");
    msg.state = 78U;

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
    msg.setTimeStamp(0.67095982087);
    msg.setSource(17700U);
    msg.setSourceEntity(240U);
    msg.setDestination(17562U);
    msg.setDestinationEntity(42U);
    msg.name.assign("MUIZXPGXTICGXWUQEMORZTKHVRLPMODHCNPJEAOADKFDPPITEATWIAVBPRYGYBYMNERGOEHTDCVTCGFIPJKZFCHKJYFNZNSBLTZWXLGVEYDXBSACMPLIQAKVOEGCNOZOLIUTFUDJWRIIQRNUJBMWKXEVXUQURAXNFSHAODTOJEPQQBWYBGMKGRBJZLQYLYUBKUSKUSW");
    msg.state = 224U;

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
    msg.setTimeStamp(0.660894114517);
    msg.setSource(20538U);
    msg.setSourceEntity(0U);
    msg.setDestination(55877U);
    msg.setDestinationEntity(107U);
    msg.name.assign("BQUJQAUXUEHEYMIMJWRVQRNSXQFEFQLMOPLGCNGSOMYLBOIOQSPZXPTCRYTNISDOSIMQNCDVRTWGZYFZNKPIIGZCVRVRUXVMPJCFWNJZWJVGCXFXODUKECHCWOAABYBKBQERJTDPYIEDFDANHWTOUXZLHVLNLDKHZZKEPHEKZYMNOAIVMUWLJSHUTSVGBAPNSUIHMJADFRYXEQFQRAGC");
    msg.state = 189U;

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
    msg.setTimeStamp(0.613202290203);
    msg.setSource(61084U);
    msg.setSourceEntity(68U);
    msg.setDestination(58604U);
    msg.setDestinationEntity(187U);
    msg.name.assign("QEYRVYJHLJHTXMGYNIUAWIGVMKMIWDPGKASIOEUJWFWJTHPHYTOOPKALRSDEFIYSWZJDKCRGZGQXRJORQRAGOXBLQBBBHBYHOGSQPQBJBTPSLUEVDXTFNPCQUZAVBTLMSLCUSCZFTNSCZEMSKJHMVPLOZFVRCIDVHAOTGDQZNYBIHDYFPXXLUMEKSOFCNHFCDXIKFQWVAWMQLUPDTNYWKCJEXMIURXEKZIGTVVONZUJWWCPURXFMNLKREYEA");
    msg.value = 15U;

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
    msg.setTimeStamp(0.25958644356);
    msg.setSource(29116U);
    msg.setSourceEntity(140U);
    msg.setDestination(3304U);
    msg.setDestinationEntity(69U);
    msg.name.assign("LRZOKNNYGUNMGABHIIXIDIMLBZRUQSUUJNZJGAXIXRYANZJTSRZHQPEGPFQNXCNYUERPOCAOYFREIBFWBBZJFJHDMWFSGFVPBCTXBPCYNGSPKOCUQTDEYKLSWRDAXHVQYCUSTTLQFVZGFFEHHLQPUYKAMORVEWOPUVADALEOSYXJOTKCZKWEJKGLS");
    msg.value = 231U;

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
    msg.setTimeStamp(0.0944133632677);
    msg.setSource(56373U);
    msg.setSourceEntity(15U);
    msg.setDestination(44329U);
    msg.setDestinationEntity(218U);
    msg.name.assign("ZWQZJPTGFOLKDQQFHZLEFYUQTTKVWYMVKPVR");
    msg.value = 139U;

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
    msg.setTimeStamp(0.347315605874);
    msg.setSource(36179U);
    msg.setSourceEntity(20U);
    msg.setDestination(43784U);
    msg.setDestinationEntity(159U);
    msg.name.assign("GYSZQZPWVYFPFEVLKVBIPQRFGMQKBBXXHXBZRTSBIUDHEUIEZHQYTEOOKGGSCPKD");

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
    msg.setTimeStamp(0.584708207576);
    msg.setSource(64566U);
    msg.setSourceEntity(34U);
    msg.setDestination(14889U);
    msg.setDestinationEntity(203U);
    msg.name.assign("RIEVKVAXIUHTTQFUWHZTNJEWBUOR");

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
    msg.setTimeStamp(0.426950966058);
    msg.setSource(7817U);
    msg.setSourceEntity(121U);
    msg.setDestination(46949U);
    msg.setDestinationEntity(245U);
    msg.name.assign("YVMZURXYQYOPRUTSFGBCFAWBOLRJDHBCGQUKFNWEDEUBMSAHCRPMXBFFIIKHEYNDQSIMKDQMEEGBZGPUHWKPQOQVUGKAJIBHJDGESTVTLHATWYWAUJWYPGCXYLETADINFOBCSVJSLJHAKTKVAPOAEELZGPSKIBDJUDPZZXCJJNNWKFRNTGODSZXTNVH");

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
    msg.setTimeStamp(0.292671754192);
    msg.setSource(63348U);
    msg.setSourceEntity(66U);
    msg.setDestination(47692U);
    msg.setDestinationEntity(23U);
    msg.name.assign("ECKZBIIVQMFHRFCVLTZFDPZEZIUUDHSGNHVASVGWESCXPGOYHKCXWMMJMNBDGTHCLLAYHZKEMJZNUBPIOOKKHTHAYAZBRWYNBJYSLRAVODFRQVG");
    msg.value = 93U;

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
    msg.setTimeStamp(0.987308761001);
    msg.setSource(64704U);
    msg.setSourceEntity(157U);
    msg.setDestination(47247U);
    msg.setDestinationEntity(244U);
    msg.name.assign("WTUFKLQRAWSHMTLRHICINPEFMOZUEJCOOVKEKEJQRAAWWUMCUPOFONJUKKZKZFBWPXZSYYWRGOUQWQYOCNXBBJXXFLEMMDMLPUPKFRSIGXHJBLLNDVHKQIUAZVMCBINEQTZGIDJPZAYSLMVTVYDYPTVCIMBNVQRIVVBAGPHADJMGUEGNZGECPAXF");
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
    msg.setTimeStamp(0.903652155538);
    msg.setSource(49105U);
    msg.setSourceEntity(194U);
    msg.setDestination(24611U);
    msg.setDestinationEntity(40U);
    msg.name.assign("QYFYNUACRIJZHSJGLOKZNELTAGOCQFGSBOPWRXQBWTIGEZYODJGEBJWAOFBKNTMHBJGGWICIGKDGUCBAHZWIHSIURDHUJZCVMLQNIPDNTKMFLTUCBWPSDVXNSOXEUKYDWJHYPMEQMFWMABHDOEGAVCKVLSIYHMPVS");
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
    msg.setTimeStamp(0.283121936904);
    msg.setSource(24591U);
    msg.setSourceEntity(1U);
    msg.setDestination(26777U);
    msg.setDestinationEntity(76U);
    msg.id = 158U;
    msg.period = 2371557779U;
    msg.duty_cycle = 3519844191U;

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
    msg.setTimeStamp(0.213378838761);
    msg.setSource(12247U);
    msg.setSourceEntity(158U);
    msg.setDestination(63214U);
    msg.setDestinationEntity(189U);
    msg.id = 96U;
    msg.period = 3326624336U;
    msg.duty_cycle = 3859184363U;

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
    msg.setTimeStamp(0.98970179744);
    msg.setSource(7241U);
    msg.setSourceEntity(18U);
    msg.setDestination(39778U);
    msg.setDestinationEntity(208U);
    msg.id = 206U;
    msg.period = 375403825U;
    msg.duty_cycle = 1470845542U;

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
    msg.setTimeStamp(0.374026276483);
    msg.setSource(52223U);
    msg.setSourceEntity(44U);
    msg.setDestination(27874U);
    msg.setDestinationEntity(224U);
    msg.id = 125U;
    msg.period = 152010574U;
    msg.duty_cycle = 3058761894U;

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
    msg.setTimeStamp(0.64023893112);
    msg.setSource(48701U);
    msg.setSourceEntity(102U);
    msg.setDestination(49770U);
    msg.setDestinationEntity(8U);
    msg.id = 96U;
    msg.period = 3778289921U;
    msg.duty_cycle = 2235760900U;

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
    msg.setTimeStamp(0.920187968173);
    msg.setSource(41936U);
    msg.setSourceEntity(144U);
    msg.setDestination(49775U);
    msg.setDestinationEntity(239U);
    msg.id = 111U;
    msg.period = 2835304097U;
    msg.duty_cycle = 2949270198U;

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
    msg.setTimeStamp(0.340307725589);
    msg.setSource(16960U);
    msg.setSourceEntity(60U);
    msg.setDestination(13489U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.560790896404;
    msg.lon = 0.399969271473;
    msg.height = 0.0153237845364;
    msg.x = 0.402950761352;
    msg.y = 0.844202582453;
    msg.z = 0.445247345094;
    msg.phi = 0.256424498147;
    msg.theta = 0.776455230038;
    msg.psi = 0.762351631326;
    msg.u = 0.868231516737;
    msg.v = 0.942621479154;
    msg.w = 0.1357017463;
    msg.vx = 0.441412560486;
    msg.vy = 0.167097054039;
    msg.vz = 0.239768470421;
    msg.p = 0.848873786381;
    msg.q = 0.581130910322;
    msg.r = 0.0715410771764;
    msg.depth = 0.050274251176;
    msg.alt = 0.526695192113;

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
    msg.setTimeStamp(0.258445978509);
    msg.setSource(41229U);
    msg.setSourceEntity(173U);
    msg.setDestination(15112U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.389790470682;
    msg.lon = 0.974690449714;
    msg.height = 0.725959747833;
    msg.x = 0.962873029713;
    msg.y = 0.85963762298;
    msg.z = 0.978000907173;
    msg.phi = 0.574681417256;
    msg.theta = 0.322402027861;
    msg.psi = 0.643987774896;
    msg.u = 0.843723127843;
    msg.v = 0.92419336066;
    msg.w = 0.326986215186;
    msg.vx = 0.782347266726;
    msg.vy = 0.593046035769;
    msg.vz = 0.158634417588;
    msg.p = 0.236257685722;
    msg.q = 0.927621142226;
    msg.r = 0.313920545061;
    msg.depth = 0.0713200209144;
    msg.alt = 0.95634455119;

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
    msg.setTimeStamp(0.734952586518);
    msg.setSource(44677U);
    msg.setSourceEntity(93U);
    msg.setDestination(22296U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.958305429285;
    msg.lon = 0.761047625852;
    msg.height = 0.786125037714;
    msg.x = 0.0700805677389;
    msg.y = 0.0377991631555;
    msg.z = 0.9089121496;
    msg.phi = 0.776631112301;
    msg.theta = 0.71828362382;
    msg.psi = 0.955562133258;
    msg.u = 0.930459551148;
    msg.v = 0.962458781765;
    msg.w = 0.0622572770464;
    msg.vx = 0.467019227275;
    msg.vy = 0.450664457628;
    msg.vz = 0.58986625794;
    msg.p = 0.108768706853;
    msg.q = 0.602067594654;
    msg.r = 0.743383936276;
    msg.depth = 0.564124203718;
    msg.alt = 0.891801005019;

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
    msg.setTimeStamp(0.888546961442);
    msg.setSource(5026U);
    msg.setSourceEntity(0U);
    msg.setDestination(12216U);
    msg.setDestinationEntity(87U);
    msg.x = 0.952377248368;
    msg.y = 0.977710241255;
    msg.z = 0.574807429572;

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
    msg.setTimeStamp(0.955793039698);
    msg.setSource(15068U);
    msg.setSourceEntity(161U);
    msg.setDestination(34450U);
    msg.setDestinationEntity(27U);
    msg.x = 0.468229384583;
    msg.y = 0.311091065444;
    msg.z = 0.113283802109;

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
    msg.setTimeStamp(0.939469524354);
    msg.setSource(52994U);
    msg.setSourceEntity(127U);
    msg.setDestination(6210U);
    msg.setDestinationEntity(16U);
    msg.x = 0.728966617339;
    msg.y = 0.621998685312;
    msg.z = 0.53606728423;

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
    msg.setTimeStamp(0.761536926975);
    msg.setSource(30101U);
    msg.setSourceEntity(162U);
    msg.setDestination(48629U);
    msg.setDestinationEntity(117U);
    msg.value = 0.138875014131;

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
    msg.setTimeStamp(0.895080955689);
    msg.setSource(54861U);
    msg.setSourceEntity(149U);
    msg.setDestination(49969U);
    msg.setDestinationEntity(246U);
    msg.value = 0.0386324949942;

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
    msg.setTimeStamp(0.871446563665);
    msg.setSource(57592U);
    msg.setSourceEntity(105U);
    msg.setDestination(9084U);
    msg.setDestinationEntity(219U);
    msg.value = 0.0888565762222;

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
    msg.setTimeStamp(0.0555352689248);
    msg.setSource(55167U);
    msg.setSourceEntity(141U);
    msg.setDestination(62077U);
    msg.setDestinationEntity(119U);
    msg.value = 0.920605468071;

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
    msg.setTimeStamp(0.749644546743);
    msg.setSource(9377U);
    msg.setSourceEntity(81U);
    msg.setDestination(32256U);
    msg.setDestinationEntity(129U);
    msg.value = 0.817396997049;

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
    msg.setTimeStamp(0.230116950023);
    msg.setSource(12877U);
    msg.setSourceEntity(245U);
    msg.setDestination(50733U);
    msg.setDestinationEntity(226U);
    msg.value = 0.809883975542;

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
    msg.setTimeStamp(0.512414206947);
    msg.setSource(9951U);
    msg.setSourceEntity(177U);
    msg.setDestination(38498U);
    msg.setDestinationEntity(34U);
    msg.x = 0.602916983093;
    msg.y = 0.875949318429;
    msg.z = 0.330592119517;
    msg.phi = 0.187386808182;
    msg.theta = 0.704816741786;
    msg.psi = 0.680716760456;
    msg.p = 0.600724164283;
    msg.q = 0.853209136927;
    msg.r = 0.834362026653;
    msg.u = 0.0324190183338;
    msg.v = 0.655460863705;
    msg.w = 0.918544928697;
    msg.bias_psi = 0.0762783906374;
    msg.bias_r = 0.374740664244;

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
    msg.setTimeStamp(0.186805243728);
    msg.setSource(46412U);
    msg.setSourceEntity(153U);
    msg.setDestination(1623U);
    msg.setDestinationEntity(101U);
    msg.x = 0.366454549129;
    msg.y = 0.885968264115;
    msg.z = 0.510750914261;
    msg.phi = 0.0454329372843;
    msg.theta = 0.309116640549;
    msg.psi = 0.0535490401991;
    msg.p = 0.152758824692;
    msg.q = 0.383235949812;
    msg.r = 0.639544300319;
    msg.u = 0.0937648606246;
    msg.v = 0.0305178721141;
    msg.w = 0.797405044652;
    msg.bias_psi = 0.925962051015;
    msg.bias_r = 0.573688421569;

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
    msg.setTimeStamp(0.893933258489);
    msg.setSource(52149U);
    msg.setSourceEntity(61U);
    msg.setDestination(2715U);
    msg.setDestinationEntity(128U);
    msg.x = 0.568853099617;
    msg.y = 0.117455397222;
    msg.z = 0.232100084378;
    msg.phi = 0.6767254042;
    msg.theta = 0.863120440396;
    msg.psi = 0.134751481536;
    msg.p = 0.460148098637;
    msg.q = 0.776348532495;
    msg.r = 0.863773615061;
    msg.u = 0.0309617348192;
    msg.v = 0.144434440688;
    msg.w = 0.9949712204;
    msg.bias_psi = 0.17666521793;
    msg.bias_r = 0.701034998981;

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
    msg.setTimeStamp(0.949470248763);
    msg.setSource(21693U);
    msg.setSourceEntity(209U);
    msg.setDestination(33128U);
    msg.setDestinationEntity(143U);
    msg.bias_psi = 0.209156057511;
    msg.bias_r = 0.339862544873;
    msg.cog = 0.77361189048;
    msg.cyaw = 0.0299306362109;
    msg.lbl_rej_level = 0.371541801084;
    msg.gps_rej_level = 0.416604740513;
    msg.custom_x = 0.143778615123;
    msg.custom_y = 0.27429736655;
    msg.custom_z = 0.411827316212;

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
    msg.setTimeStamp(0.633455898609);
    msg.setSource(5047U);
    msg.setSourceEntity(224U);
    msg.setDestination(11979U);
    msg.setDestinationEntity(16U);
    msg.bias_psi = 0.318274365938;
    msg.bias_r = 0.267647173147;
    msg.cog = 0.248722082141;
    msg.cyaw = 0.898804510344;
    msg.lbl_rej_level = 0.910188765781;
    msg.gps_rej_level = 0.0755559002154;
    msg.custom_x = 0.625561042918;
    msg.custom_y = 0.53212263531;
    msg.custom_z = 0.236873317913;

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
    msg.setTimeStamp(0.100070514326);
    msg.setSource(56824U);
    msg.setSourceEntity(105U);
    msg.setDestination(51480U);
    msg.setDestinationEntity(127U);
    msg.bias_psi = 0.406040797692;
    msg.bias_r = 0.760480046447;
    msg.cog = 0.248461290902;
    msg.cyaw = 0.396091647205;
    msg.lbl_rej_level = 0.943520474382;
    msg.gps_rej_level = 0.335139946705;
    msg.custom_x = 0.192862752608;
    msg.custom_y = 0.860355251122;
    msg.custom_z = 0.118680075287;

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
    msg.setTimeStamp(0.823208438886);
    msg.setSource(49686U);
    msg.setSourceEntity(184U);
    msg.setDestination(25035U);
    msg.setDestinationEntity(99U);
    msg.utc_time = 0.798079551489;
    msg.reason = 246U;

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
    msg.setTimeStamp(0.680737177155);
    msg.setSource(60587U);
    msg.setSourceEntity(186U);
    msg.setDestination(58224U);
    msg.setDestinationEntity(160U);
    msg.utc_time = 0.279852047839;
    msg.reason = 60U;

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
    msg.setTimeStamp(0.482393859069);
    msg.setSource(62330U);
    msg.setSourceEntity(109U);
    msg.setDestination(42268U);
    msg.setDestinationEntity(84U);
    msg.utc_time = 0.00224257521486;
    msg.reason = 140U;

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
    msg.setTimeStamp(0.455012074976);
    msg.setSource(37249U);
    msg.setSourceEntity(203U);
    msg.setDestination(3243U);
    msg.setDestinationEntity(222U);
    msg.id = 117U;
    msg.range = 0.683419112888;
    msg.acceptance = 79U;

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
    msg.setTimeStamp(0.687690763835);
    msg.setSource(61192U);
    msg.setSourceEntity(210U);
    msg.setDestination(10876U);
    msg.setDestinationEntity(171U);
    msg.id = 147U;
    msg.range = 0.416163665424;
    msg.acceptance = 196U;

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
    msg.setTimeStamp(0.0274007316887);
    msg.setSource(57586U);
    msg.setSourceEntity(206U);
    msg.setDestination(49133U);
    msg.setDestinationEntity(244U);
    msg.id = 83U;
    msg.range = 0.304816638082;
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
    msg.setTimeStamp(0.901992540568);
    msg.setSource(42809U);
    msg.setSourceEntity(215U);
    msg.setDestination(26878U);
    msg.setDestinationEntity(15U);
    msg.type = 41U;
    msg.reason = 155U;
    msg.value = 0.35387036261;
    msg.timestep = 0.655457406985;

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
    msg.setTimeStamp(0.363890228107);
    msg.setSource(53735U);
    msg.setSourceEntity(99U);
    msg.setDestination(64841U);
    msg.setDestinationEntity(131U);
    msg.type = 154U;
    msg.reason = 148U;
    msg.value = 0.443977675244;
    msg.timestep = 0.301518180556;

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
    msg.setTimeStamp(0.370883495259);
    msg.setSource(55405U);
    msg.setSourceEntity(45U);
    msg.setDestination(5161U);
    msg.setDestinationEntity(160U);
    msg.type = 186U;
    msg.reason = 147U;
    msg.value = 0.1488230501;
    msg.timestep = 0.674743864655;

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
    msg.setTimeStamp(0.993498093949);
    msg.setSource(15390U);
    msg.setSourceEntity(189U);
    msg.setDestination(30394U);
    msg.setDestinationEntity(119U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ONXCKACLUMKYCTKHVPTFEXBWVXPRZEFMQNNJTPAVIDBJYNNJMUHDAMZZUDQYSLOPBHXDAEQLOSCYLZIDOAZKQXGSYJGTBERNVFFMBEDIIMOJOUHSCDUWMFVWGYPVXZNUEGRSPLVGRBINKFUVKAW");
    tmp_msg_0.lat = 0.441628068115;
    tmp_msg_0.lon = 0.257065597063;
    tmp_msg_0.depth = 0.198421238502;
    tmp_msg_0.query_channel = 84U;
    tmp_msg_0.reply_channel = 173U;
    tmp_msg_0.transponder_delay = 154U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.135788227209;
    msg.y = 0.793850583984;
    msg.var_x = 0.523755302217;
    msg.var_y = 0.822759494713;
    msg.distance = 0.152001938271;

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
    msg.setTimeStamp(0.313914213443);
    msg.setSource(56820U);
    msg.setSourceEntity(98U);
    msg.setDestination(45262U);
    msg.setDestinationEntity(228U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QIEFWHLEWFQMNTCCZRXNZGSWXMDJLQRKOPCNUNDGQFKDVVYVSLXKITRPEVJXZYRTCTAABVXPDMWPGEGDSOXCDMJQPZBDILHVGGFEKNHKZSWUZYGRZTQVTIUASZOFZLQLKCBAPUWREQPODFMHURJSALDZVKPYUQWOLWTEUVNHJNARHKHPFEYJSJGRFNCILFBXSOPYBYMOIT");
    tmp_msg_0.lat = 0.0113388650728;
    tmp_msg_0.lon = 0.199497858881;
    tmp_msg_0.depth = 0.091287960601;
    tmp_msg_0.query_channel = 130U;
    tmp_msg_0.reply_channel = 208U;
    tmp_msg_0.transponder_delay = 161U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.702742761318;
    msg.y = 0.447108518165;
    msg.var_x = 0.167510543107;
    msg.var_y = 0.187476670352;
    msg.distance = 0.320016336953;

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
    msg.setTimeStamp(0.0354717267804);
    msg.setSource(57305U);
    msg.setSourceEntity(245U);
    msg.setDestination(17639U);
    msg.setDestinationEntity(137U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BPHQOMUSDVWINCXIBWGATHTPJWICABHPTTOBTLRVZYGKWMQPCXZFSCCIMVLYWRSA");
    tmp_msg_0.lat = 0.161892380221;
    tmp_msg_0.lon = 0.97264461765;
    tmp_msg_0.depth = 0.543195416804;
    tmp_msg_0.query_channel = 212U;
    tmp_msg_0.reply_channel = 185U;
    tmp_msg_0.transponder_delay = 43U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.610442123542;
    msg.y = 0.480505637593;
    msg.var_x = 0.766695775536;
    msg.var_y = 0.132934490651;
    msg.distance = 0.176481830319;

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
    msg.setTimeStamp(0.903973766214);
    msg.setSource(408U);
    msg.setSourceEntity(204U);
    msg.setDestination(38907U);
    msg.setDestinationEntity(228U);
    msg.state = 253U;

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
    msg.setTimeStamp(0.33617901478);
    msg.setSource(5749U);
    msg.setSourceEntity(92U);
    msg.setDestination(63054U);
    msg.setDestinationEntity(210U);
    msg.state = 91U;

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
    msg.setTimeStamp(0.509868156476);
    msg.setSource(64842U);
    msg.setSourceEntity(99U);
    msg.setDestination(33305U);
    msg.setDestinationEntity(176U);
    msg.state = 248U;

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
    msg.setTimeStamp(0.83340034816);
    msg.setSource(46965U);
    msg.setSourceEntity(95U);
    msg.setDestination(36329U);
    msg.setDestinationEntity(180U);
    msg.x = 0.90121791354;
    msg.y = 0.308802843634;
    msg.z = 0.545434885801;

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
    msg.setTimeStamp(0.87492496372);
    msg.setSource(51828U);
    msg.setSourceEntity(49U);
    msg.setDestination(34718U);
    msg.setDestinationEntity(42U);
    msg.x = 0.776890032345;
    msg.y = 0.0920228797944;
    msg.z = 0.287479624438;

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
    msg.setTimeStamp(0.653410672041);
    msg.setSource(25194U);
    msg.setSourceEntity(121U);
    msg.setDestination(15068U);
    msg.setDestinationEntity(146U);
    msg.x = 0.85312585869;
    msg.y = 0.489907452254;
    msg.z = 0.97928896091;

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
    msg.setTimeStamp(0.573428590119);
    msg.setSource(19169U);
    msg.setSourceEntity(247U);
    msg.setDestination(51382U);
    msg.setDestinationEntity(168U);
    msg.va = 0.311050027263;
    msg.aoa = 0.0640303917568;
    msg.ssa = 0.997467328681;

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
    msg.setTimeStamp(0.0856097557504);
    msg.setSource(62638U);
    msg.setSourceEntity(52U);
    msg.setDestination(3240U);
    msg.setDestinationEntity(107U);
    msg.va = 0.54693383129;
    msg.aoa = 0.238033012946;
    msg.ssa = 0.392104859251;

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
    msg.setTimeStamp(0.195595253382);
    msg.setSource(52852U);
    msg.setSourceEntity(237U);
    msg.setDestination(43288U);
    msg.setDestinationEntity(40U);
    msg.va = 0.514052752437;
    msg.aoa = 0.384912410029;
    msg.ssa = 0.620281373231;

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
    msg.setTimeStamp(0.962352974035);
    msg.setSource(51680U);
    msg.setSourceEntity(192U);
    msg.setDestination(1213U);
    msg.setDestinationEntity(210U);
    msg.value = 0.399989068492;

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
    msg.setTimeStamp(0.49794350111);
    msg.setSource(60852U);
    msg.setSourceEntity(134U);
    msg.setDestination(57909U);
    msg.setDestinationEntity(99U);
    msg.value = 0.362371662901;

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
    msg.setTimeStamp(0.478970229215);
    msg.setSource(5328U);
    msg.setSourceEntity(76U);
    msg.setDestination(3072U);
    msg.setDestinationEntity(129U);
    msg.value = 0.791590160534;

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
    msg.setTimeStamp(0.251656724857);
    msg.setSource(9347U);
    msg.setSourceEntity(145U);
    msg.setDestination(37775U);
    msg.setDestinationEntity(161U);
    msg.value = 0.877314414559;
    msg.z_units = 40U;

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
    msg.setTimeStamp(0.456385525211);
    msg.setSource(8064U);
    msg.setSourceEntity(159U);
    msg.setDestination(64252U);
    msg.setDestinationEntity(251U);
    msg.value = 0.440945055561;
    msg.z_units = 249U;

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
    msg.setTimeStamp(0.0482788275303);
    msg.setSource(40232U);
    msg.setSourceEntity(61U);
    msg.setDestination(24350U);
    msg.setDestinationEntity(48U);
    msg.value = 0.00310315833235;
    msg.z_units = 222U;

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
    msg.setTimeStamp(0.428670523074);
    msg.setSource(20401U);
    msg.setSourceEntity(227U);
    msg.setDestination(33807U);
    msg.setDestinationEntity(130U);
    msg.value = 0.879875209927;
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
    msg.setTimeStamp(0.954836781132);
    msg.setSource(28146U);
    msg.setSourceEntity(110U);
    msg.setDestination(26130U);
    msg.setDestinationEntity(87U);
    msg.value = 0.012932781185;
    msg.speed_units = 148U;

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
    msg.setTimeStamp(0.26014756161);
    msg.setSource(27370U);
    msg.setSourceEntity(105U);
    msg.setDestination(23454U);
    msg.setDestinationEntity(112U);
    msg.value = 0.0625032158955;
    msg.speed_units = 0U;

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
    msg.setTimeStamp(0.879647489382);
    msg.setSource(23931U);
    msg.setSourceEntity(243U);
    msg.setDestination(20576U);
    msg.setDestinationEntity(176U);
    msg.value = 0.970075536945;

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
    msg.setTimeStamp(0.177397485907);
    msg.setSource(26042U);
    msg.setSourceEntity(42U);
    msg.setDestination(31433U);
    msg.setDestinationEntity(219U);
    msg.value = 0.941115464866;

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
    msg.setTimeStamp(0.955395585368);
    msg.setSource(60954U);
    msg.setSourceEntity(40U);
    msg.setDestination(56251U);
    msg.setDestinationEntity(27U);
    msg.value = 0.908948702999;

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
    msg.setTimeStamp(0.120553853817);
    msg.setSource(15240U);
    msg.setSourceEntity(7U);
    msg.setDestination(35665U);
    msg.setDestinationEntity(217U);
    msg.value = 0.248260677758;

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
    msg.setTimeStamp(0.761719667996);
    msg.setSource(1830U);
    msg.setSourceEntity(146U);
    msg.setDestination(15869U);
    msg.setDestinationEntity(211U);
    msg.value = 0.176147794485;

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
    msg.setTimeStamp(0.872674886797);
    msg.setSource(5542U);
    msg.setSourceEntity(30U);
    msg.setDestination(32203U);
    msg.setDestinationEntity(13U);
    msg.value = 0.238426273212;

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
    msg.setTimeStamp(0.449196775603);
    msg.setSource(44486U);
    msg.setSourceEntity(44U);
    msg.setDestination(39170U);
    msg.setDestinationEntity(30U);
    msg.value = 0.128850278949;

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
    msg.setTimeStamp(0.515290106593);
    msg.setSource(55215U);
    msg.setSourceEntity(218U);
    msg.setDestination(28349U);
    msg.setDestinationEntity(209U);
    msg.value = 0.184210127799;

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
    msg.setTimeStamp(0.553546013694);
    msg.setSource(46534U);
    msg.setSourceEntity(244U);
    msg.setDestination(10782U);
    msg.setDestinationEntity(175U);
    msg.value = 0.709390928734;

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
    msg.setTimeStamp(0.00788640947666);
    msg.setSource(19150U);
    msg.setSourceEntity(230U);
    msg.setDestination(43917U);
    msg.setDestinationEntity(59U);
    msg.path_ref = 2423733016U;
    msg.start_lat = 0.192291639367;
    msg.start_lon = 0.363843120188;
    msg.start_z = 0.146922748056;
    msg.start_z_units = 90U;
    msg.end_lat = 0.188072487234;
    msg.end_lon = 0.0320256798878;
    msg.end_z = 0.474491061621;
    msg.end_z_units = 40U;
    msg.speed = 0.995438537781;
    msg.speed_units = 170U;
    msg.lradius = 0.393155715186;
    msg.flags = 178U;

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
    msg.setTimeStamp(0.776482869656);
    msg.setSource(33997U);
    msg.setSourceEntity(186U);
    msg.setDestination(26505U);
    msg.setDestinationEntity(163U);
    msg.path_ref = 307024858U;
    msg.start_lat = 0.430386741935;
    msg.start_lon = 0.616295700336;
    msg.start_z = 0.731614994411;
    msg.start_z_units = 113U;
    msg.end_lat = 0.687035111353;
    msg.end_lon = 0.180410238027;
    msg.end_z = 0.0274201520435;
    msg.end_z_units = 211U;
    msg.speed = 0.796259532659;
    msg.speed_units = 93U;
    msg.lradius = 0.476865951352;
    msg.flags = 34U;

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
    msg.setTimeStamp(0.481581265457);
    msg.setSource(5398U);
    msg.setSourceEntity(40U);
    msg.setDestination(35964U);
    msg.setDestinationEntity(48U);
    msg.path_ref = 1096461508U;
    msg.start_lat = 0.520046851278;
    msg.start_lon = 0.763501003329;
    msg.start_z = 0.96885409973;
    msg.start_z_units = 151U;
    msg.end_lat = 0.473774930169;
    msg.end_lon = 0.831355084535;
    msg.end_z = 0.979558963083;
    msg.end_z_units = 68U;
    msg.speed = 0.263699027064;
    msg.speed_units = 75U;
    msg.lradius = 0.150644751798;
    msg.flags = 21U;

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
    msg.setTimeStamp(0.897799510215);
    msg.setSource(35294U);
    msg.setSourceEntity(113U);
    msg.setDestination(60606U);
    msg.setDestinationEntity(64U);
    msg.x = 0.818404429955;
    msg.y = 0.841588633823;
    msg.z = 0.890985558543;
    msg.k = 0.947681101239;
    msg.m = 0.995534864755;
    msg.n = 0.728047319166;
    msg.flags = 95U;

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
    msg.setTimeStamp(0.414363416658);
    msg.setSource(15307U);
    msg.setSourceEntity(201U);
    msg.setDestination(7035U);
    msg.setDestinationEntity(158U);
    msg.x = 0.435603611508;
    msg.y = 0.567589220065;
    msg.z = 0.208096797201;
    msg.k = 0.455196638007;
    msg.m = 0.969032355047;
    msg.n = 0.204871751626;
    msg.flags = 154U;

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
    msg.setTimeStamp(0.0359577236489);
    msg.setSource(7634U);
    msg.setSourceEntity(59U);
    msg.setDestination(5702U);
    msg.setDestinationEntity(89U);
    msg.x = 0.103900259573;
    msg.y = 0.00564553636177;
    msg.z = 0.343291713694;
    msg.k = 0.587509007848;
    msg.m = 0.121514435877;
    msg.n = 0.751027043351;
    msg.flags = 85U;

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
    msg.setTimeStamp(0.654137437794);
    msg.setSource(28499U);
    msg.setSourceEntity(79U);
    msg.setDestination(27730U);
    msg.setDestinationEntity(45U);
    msg.value = 0.157931034142;

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
    msg.setTimeStamp(0.583647112639);
    msg.setSource(20865U);
    msg.setSourceEntity(53U);
    msg.setDestination(61606U);
    msg.setDestinationEntity(153U);
    msg.value = 0.546876205759;

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
    msg.setTimeStamp(0.857974028574);
    msg.setSource(35391U);
    msg.setSourceEntity(19U);
    msg.setDestination(28344U);
    msg.setDestinationEntity(226U);
    msg.value = 0.917258498265;

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
    msg.setTimeStamp(0.606611675418);
    msg.setSource(1340U);
    msg.setSourceEntity(123U);
    msg.setDestination(29942U);
    msg.setDestinationEntity(104U);
    msg.u = 0.667397504859;
    msg.v = 0.446124582796;
    msg.w = 0.479740876864;
    msg.p = 0.486186716215;
    msg.q = 0.391714658485;
    msg.r = 0.37850214033;
    msg.flags = 125U;

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
    msg.setTimeStamp(0.997112494527);
    msg.setSource(7140U);
    msg.setSourceEntity(167U);
    msg.setDestination(40547U);
    msg.setDestinationEntity(95U);
    msg.u = 0.743224070222;
    msg.v = 0.7559801477;
    msg.w = 0.906485038658;
    msg.p = 0.860755840863;
    msg.q = 0.205412420796;
    msg.r = 0.281524165189;
    msg.flags = 124U;

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
    msg.setTimeStamp(0.309803011053);
    msg.setSource(9216U);
    msg.setSourceEntity(108U);
    msg.setDestination(58065U);
    msg.setDestinationEntity(251U);
    msg.u = 0.548456211605;
    msg.v = 0.361447293594;
    msg.w = 0.416524324817;
    msg.p = 0.413442610161;
    msg.q = 0.902555035463;
    msg.r = 0.963171678916;
    msg.flags = 144U;

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
    msg.setTimeStamp(0.316243011391);
    msg.setSource(25778U);
    msg.setSourceEntity(81U);
    msg.setDestination(41993U);
    msg.setDestinationEntity(150U);
    msg.path_ref = 3303859107U;
    msg.start_lat = 0.178101269064;
    msg.start_lon = 0.171344148135;
    msg.start_z = 0.0656936222814;
    msg.start_z_units = 129U;
    msg.end_lat = 0.662818923974;
    msg.end_lon = 0.5689412287;
    msg.end_z = 0.419656067632;
    msg.end_z_units = 200U;
    msg.lradius = 0.948191309918;
    msg.flags = 164U;
    msg.x = 0.211937886714;
    msg.y = 0.632424245507;
    msg.z = 0.977694540454;
    msg.vx = 0.182146665369;
    msg.vy = 0.884770305396;
    msg.vz = 0.537855532365;
    msg.course_error = 0.651039400619;
    msg.eta = 36727U;

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
    msg.setTimeStamp(0.51325228119);
    msg.setSource(52993U);
    msg.setSourceEntity(130U);
    msg.setDestination(37031U);
    msg.setDestinationEntity(4U);
    msg.path_ref = 3531427817U;
    msg.start_lat = 0.3274021122;
    msg.start_lon = 0.704077836888;
    msg.start_z = 0.0959286781596;
    msg.start_z_units = 0U;
    msg.end_lat = 0.61551623267;
    msg.end_lon = 0.121182822196;
    msg.end_z = 0.619696721374;
    msg.end_z_units = 15U;
    msg.lradius = 0.254023613568;
    msg.flags = 29U;
    msg.x = 0.837428514238;
    msg.y = 0.835583448853;
    msg.z = 0.133732098472;
    msg.vx = 0.361110709551;
    msg.vy = 0.555674961598;
    msg.vz = 0.573322940538;
    msg.course_error = 0.934557220565;
    msg.eta = 22228U;

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
    msg.setTimeStamp(0.484884109541);
    msg.setSource(25957U);
    msg.setSourceEntity(48U);
    msg.setDestination(12448U);
    msg.setDestinationEntity(155U);
    msg.path_ref = 68300433U;
    msg.start_lat = 0.891230214985;
    msg.start_lon = 0.793258468144;
    msg.start_z = 0.327306874358;
    msg.start_z_units = 90U;
    msg.end_lat = 0.318972747103;
    msg.end_lon = 0.449308035439;
    msg.end_z = 0.498503547347;
    msg.end_z_units = 138U;
    msg.lradius = 0.0328700369764;
    msg.flags = 185U;
    msg.x = 0.460961279376;
    msg.y = 0.374805048424;
    msg.z = 0.538685569597;
    msg.vx = 0.348688618543;
    msg.vy = 0.294391841268;
    msg.vz = 0.25248297737;
    msg.course_error = 0.299106157278;
    msg.eta = 32699U;

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
    msg.setTimeStamp(0.475390048289);
    msg.setSource(13083U);
    msg.setSourceEntity(114U);
    msg.setDestination(49717U);
    msg.setDestinationEntity(60U);
    msg.k = 0.873244016885;
    msg.m = 0.817275755697;
    msg.n = 0.781945706137;

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
    msg.setTimeStamp(0.860886265788);
    msg.setSource(7739U);
    msg.setSourceEntity(83U);
    msg.setDestination(33338U);
    msg.setDestinationEntity(9U);
    msg.k = 0.557774357594;
    msg.m = 0.901409227593;
    msg.n = 0.548594000059;

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
    msg.setTimeStamp(0.988251798692);
    msg.setSource(30852U);
    msg.setSourceEntity(243U);
    msg.setDestination(285U);
    msg.setDestinationEntity(47U);
    msg.k = 0.271729272846;
    msg.m = 0.38426353929;
    msg.n = 0.534313522896;

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
    msg.setTimeStamp(0.0703231981842);
    msg.setSource(59958U);
    msg.setSourceEntity(207U);
    msg.setDestination(41063U);
    msg.setDestinationEntity(34U);
    msg.p = 0.438519709499;
    msg.i = 0.800545268186;
    msg.d = 0.175637211974;
    msg.a = 0.978911670483;

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
    msg.setTimeStamp(0.267458712293);
    msg.setSource(22200U);
    msg.setSourceEntity(32U);
    msg.setDestination(16909U);
    msg.setDestinationEntity(40U);
    msg.p = 0.558784339081;
    msg.i = 0.195335469885;
    msg.d = 0.992923178955;
    msg.a = 0.153383404932;

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
    msg.setTimeStamp(0.37513451539);
    msg.setSource(27823U);
    msg.setSourceEntity(65U);
    msg.setDestination(23351U);
    msg.setDestinationEntity(8U);
    msg.p = 0.187399425607;
    msg.i = 0.21374548575;
    msg.d = 0.666619046819;
    msg.a = 0.744438401064;

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
    msg.setTimeStamp(0.298051169668);
    msg.setSource(62953U);
    msg.setSourceEntity(154U);
    msg.setDestination(34175U);
    msg.setDestinationEntity(23U);
    msg.op = 24U;

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
    msg.setTimeStamp(0.624666421983);
    msg.setSource(43471U);
    msg.setSourceEntity(245U);
    msg.setDestination(2421U);
    msg.setDestinationEntity(131U);
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
    msg.setTimeStamp(0.72446753515);
    msg.setSource(19494U);
    msg.setSourceEntity(146U);
    msg.setDestination(3682U);
    msg.setDestinationEntity(179U);
    msg.op = 3U;

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
    msg.setTimeStamp(0.290816818605);
    msg.setSource(65501U);
    msg.setSourceEntity(211U);
    msg.setDestination(26934U);
    msg.setDestinationEntity(48U);
    msg.x = 0.362830378947;
    msg.y = 0.680686811414;
    msg.z = 0.578787597215;
    msg.vx = 0.410525088833;
    msg.vy = 0.877382564945;
    msg.vz = 0.71942641305;
    msg.ax = 0.434769934542;
    msg.ay = 0.15545423187;
    msg.az = 0.520266111005;
    msg.flags = 55756U;

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
    msg.setTimeStamp(0.869606091512);
    msg.setSource(64687U);
    msg.setSourceEntity(50U);
    msg.setDestination(15793U);
    msg.setDestinationEntity(28U);
    msg.x = 0.969275297335;
    msg.y = 0.556247236841;
    msg.z = 0.529684864784;
    msg.vx = 0.257310413056;
    msg.vy = 0.635231288828;
    msg.vz = 0.742050068933;
    msg.ax = 0.469671073226;
    msg.ay = 0.333739089341;
    msg.az = 0.850528975876;
    msg.flags = 52628U;

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
    msg.setTimeStamp(0.279403987784);
    msg.setSource(42862U);
    msg.setSourceEntity(0U);
    msg.setDestination(45062U);
    msg.setDestinationEntity(33U);
    msg.x = 0.95436850043;
    msg.y = 0.448439242457;
    msg.z = 0.53532577287;
    msg.vx = 0.0592510812293;
    msg.vy = 0.723117350796;
    msg.vz = 0.143816128025;
    msg.ax = 0.776456079513;
    msg.ay = 0.555001888562;
    msg.az = 0.229124134204;
    msg.flags = 15081U;

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
    msg.setTimeStamp(0.0583346080942);
    msg.setSource(52106U);
    msg.setSourceEntity(69U);
    msg.setDestination(20839U);
    msg.setDestinationEntity(147U);
    msg.value = 0.555125371252;

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
    msg.setTimeStamp(0.972256327293);
    msg.setSource(7801U);
    msg.setSourceEntity(78U);
    msg.setDestination(7898U);
    msg.setDestinationEntity(10U);
    msg.value = 0.461661186476;

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
    msg.setTimeStamp(0.690732367717);
    msg.setSource(1234U);
    msg.setSourceEntity(91U);
    msg.setDestination(60845U);
    msg.setDestinationEntity(140U);
    msg.value = 0.912840260392;

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
    msg.setTimeStamp(0.0376314782802);
    msg.setSource(13926U);
    msg.setSourceEntity(197U);
    msg.setDestination(43564U);
    msg.setDestinationEntity(191U);
    msg.timeout = 36374U;
    msg.lat = 0.831463662997;
    msg.lon = 0.582783007251;
    msg.z = 0.213601312201;
    msg.z_units = 61U;
    msg.speed = 0.747151615794;
    msg.speed_units = 45U;
    msg.roll = 0.702264540921;
    msg.pitch = 0.940618458106;
    msg.yaw = 0.252401179734;
    msg.custom.assign("CEYNNROISBTNNERPSCFXRETOJAMORGJYBLIREVBFGFAIQZ");

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
    msg.setTimeStamp(0.709007254623);
    msg.setSource(62416U);
    msg.setSourceEntity(2U);
    msg.setDestination(30888U);
    msg.setDestinationEntity(75U);
    msg.timeout = 54707U;
    msg.lat = 0.795652293218;
    msg.lon = 0.116591806958;
    msg.z = 0.899785612719;
    msg.z_units = 24U;
    msg.speed = 0.480611900587;
    msg.speed_units = 121U;
    msg.roll = 0.337823406137;
    msg.pitch = 0.78407785025;
    msg.yaw = 0.237000399374;
    msg.custom.assign("YZETBPJNSPIDREU");

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
    msg.setTimeStamp(0.828064587266);
    msg.setSource(11247U);
    msg.setSourceEntity(84U);
    msg.setDestination(14945U);
    msg.setDestinationEntity(178U);
    msg.timeout = 36130U;
    msg.lat = 0.485290485954;
    msg.lon = 0.816178546913;
    msg.z = 0.596890477549;
    msg.z_units = 161U;
    msg.speed = 0.450630325232;
    msg.speed_units = 142U;
    msg.roll = 0.544530668928;
    msg.pitch = 0.381102032551;
    msg.yaw = 0.795892176015;
    msg.custom.assign("UNNOHMTRKXYPSKUJRADKLPSRFXJCLDOXWDKSG");

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
    msg.setTimeStamp(0.653236693552);
    msg.setSource(9539U);
    msg.setSourceEntity(68U);
    msg.setDestination(47892U);
    msg.setDestinationEntity(125U);
    msg.timeout = 2425U;
    msg.lat = 0.637103924305;
    msg.lon = 0.197887776955;
    msg.z = 0.278240295286;
    msg.z_units = 97U;
    msg.speed = 0.595314298187;
    msg.speed_units = 72U;
    msg.duration = 11025U;
    msg.radius = 0.0861917353211;
    msg.flags = 204U;
    msg.custom.assign("MLHEKUDESOJELTUGMDBWCLNWLJAXPCXFAMZJFBRPUZMDNQDQGXSUOBQCRWZGLEXVGXZZKIH");

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
    msg.setTimeStamp(0.189132567234);
    msg.setSource(20103U);
    msg.setSourceEntity(70U);
    msg.setDestination(56647U);
    msg.setDestinationEntity(165U);
    msg.timeout = 7259U;
    msg.lat = 0.13316802712;
    msg.lon = 0.234540464207;
    msg.z = 0.088312124139;
    msg.z_units = 252U;
    msg.speed = 0.140149992326;
    msg.speed_units = 196U;
    msg.duration = 22633U;
    msg.radius = 0.75589779499;
    msg.flags = 226U;
    msg.custom.assign("JRAOEVFOSSGFXYHOPAQMVYBJCXUTJ");

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
    msg.setTimeStamp(0.0525645717432);
    msg.setSource(29486U);
    msg.setSourceEntity(183U);
    msg.setDestination(17458U);
    msg.setDestinationEntity(46U);
    msg.timeout = 40339U;
    msg.lat = 0.864425043283;
    msg.lon = 0.992506858959;
    msg.z = 0.293162158251;
    msg.z_units = 200U;
    msg.speed = 0.758163110318;
    msg.speed_units = 88U;
    msg.duration = 12187U;
    msg.radius = 0.747381454488;
    msg.flags = 225U;
    msg.custom.assign("EDKBUSUCYCPIQPRGVKUMWPGW");

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
    msg.setTimeStamp(0.740787017985);
    msg.setSource(17118U);
    msg.setSourceEntity(68U);
    msg.setDestination(48365U);
    msg.setDestinationEntity(33U);
    msg.custom.assign("LAOHDFIFGMLIIFNIZVUNIGYPPIZYBDPUTUEFQQYQEBYCRNCNOXBSLKNKBODCOZWWRCXNQGLEDPTWYABLDNRFJWEVVSTBVJKUMHLVDUJXECVGJHEBQSAHLMGBFOQATZVDAHYKRPIOFDYSMZTXWGEKQFUIK");

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
    msg.setTimeStamp(0.889209380316);
    msg.setSource(45590U);
    msg.setSourceEntity(21U);
    msg.setDestination(24674U);
    msg.setDestinationEntity(91U);
    msg.custom.assign("ZSPBQUHHGBACAZCXQVKEGQHXAJXYBBRBMYUDLOXDONODFLKHMKJZJXISUQCWMGSFRSKGEUALAISPPBTTIFWIXQIQERISYVEWWJTNYSKSACCKNCZBJROLHMDPPDYDEZXWIQBNLVJEGQLUWGHTYWZVYDRATHUEVPFWVNUSKNHODAVOOLAVNKQIZPXLCRFPXEDBNJMMR");

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
    msg.setTimeStamp(0.657394463579);
    msg.setSource(20699U);
    msg.setSourceEntity(88U);
    msg.setDestination(53686U);
    msg.setDestinationEntity(80U);
    msg.custom.assign("CHDWLAOAJOSWKEYZUFIRARPBSPVVVVUXCVEZERPLY");

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
    msg.setTimeStamp(0.629108850296);
    msg.setSource(54836U);
    msg.setSourceEntity(245U);
    msg.setDestination(56706U);
    msg.setDestinationEntity(254U);
    msg.timeout = 13787U;
    msg.lat = 0.0305040833111;
    msg.lon = 0.981238964221;
    msg.z = 0.628299671071;
    msg.z_units = 155U;
    msg.duration = 39008U;
    msg.speed = 0.934040972232;
    msg.speed_units = 153U;
    msg.type = 102U;
    msg.radius = 0.878127986669;
    msg.length = 0.365831352231;
    msg.bearing = 0.72100665693;
    msg.direction = 224U;
    msg.custom.assign("HVTVXFZKQPLRDCRPDBCGHLCVBZLZOWKIIRDSYZKNCCCDWULXPEXOPVPGKWLMFFXQWEKYUWSHFKZ");

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
    msg.setTimeStamp(0.43898093874);
    msg.setSource(43216U);
    msg.setSourceEntity(6U);
    msg.setDestination(23090U);
    msg.setDestinationEntity(42U);
    msg.timeout = 63321U;
    msg.lat = 0.00698911073344;
    msg.lon = 0.295939431098;
    msg.z = 0.977190185985;
    msg.z_units = 240U;
    msg.duration = 17720U;
    msg.speed = 0.949126920995;
    msg.speed_units = 2U;
    msg.type = 175U;
    msg.radius = 0.965542017926;
    msg.length = 0.578744178604;
    msg.bearing = 0.915924334878;
    msg.direction = 209U;
    msg.custom.assign("GGRDXYYIGTXYYQJOGPEMMHJANKAVVPSJFQZAICWFOEYROMMCAVLKWQVLFPXSKCQGUZDLURHSLBCBNEOWUUNFIUGDPOPANEJJLDLBUMWVDZRQQISBIYBNAKWGVKZPSWNEZXRUFCAUHHTIPZRCETSSAWJNOHE");

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
    msg.setTimeStamp(0.582614966954);
    msg.setSource(12159U);
    msg.setSourceEntity(59U);
    msg.setDestination(23134U);
    msg.setDestinationEntity(52U);
    msg.timeout = 53670U;
    msg.lat = 0.0583788376325;
    msg.lon = 0.85810127472;
    msg.z = 0.706608966453;
    msg.z_units = 134U;
    msg.duration = 58822U;
    msg.speed = 0.717334022007;
    msg.speed_units = 63U;
    msg.type = 196U;
    msg.radius = 0.208571979167;
    msg.length = 0.0380874735535;
    msg.bearing = 0.0988595266947;
    msg.direction = 58U;
    msg.custom.assign("KUIUPGKVUZCJXBDBBJVLLWDGUEJJZZATZRRZTEFXKSMHLFADOZBZKOPPXRCXCSBDPMNHNHSYDAFKCUSNZRNM");

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
    msg.setTimeStamp(0.839318545062);
    msg.setSource(56329U);
    msg.setSourceEntity(194U);
    msg.setDestination(7291U);
    msg.setDestinationEntity(231U);
    msg.duration = 39398U;
    msg.custom.assign("UYLVEQKEKHYIUBBJIFBZGILRDUSFSMIOBKXDPOLNPDRFJTXLSNVOJAAKWTFSMPDBHECXQATOTNKXVKZZDWECRXUULKWLKFJAGQBXTYEXAGVGHNPJDVONGKODMXRWQVZAAGQVYOWOCBVIUFOGNZ");

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
    msg.setTimeStamp(0.971107697581);
    msg.setSource(32986U);
    msg.setSourceEntity(133U);
    msg.setDestination(51262U);
    msg.setDestinationEntity(97U);
    msg.duration = 5870U;
    msg.custom.assign("NWIUQFBFDPHNLOIVJJGXILAOREDULWTPBBNRWSENKLISKXDCNNODKDYUXHKUBHNYJTPPGDYSEZKFWCVAHRNBEAVDYOMUVQAPVZOULHHJBGCLSQKDFYMVAAFRGFZTXBXKWTJRPZYWSCAXSZCHQHVQQQGCPWGDKYZTMLEEWXSUMPLHGXGMJIZMHBGAECOUPYBNJA");

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
    msg.setTimeStamp(0.850070136319);
    msg.setSource(7623U);
    msg.setSourceEntity(119U);
    msg.setDestination(59866U);
    msg.setDestinationEntity(56U);
    msg.duration = 21666U;
    msg.custom.assign("QAAIADTJTFSIHPQMXRQSEMTKAEBPGOETORLCZBZWSHDKIFHTNIAHMXWQZBYYWDCLFMWIWHNSBGWCVJFSVIXNDJWZFAJUJOQWNYPNXNTEGOXJKGVIDRABZGBSPKCPWCWUKVEDTYLLRULVJEMTCYVUPFCLCBZNCKEJOZMRSIREBAUNXXQKIUZHQJEKBANMUTDVAKZLVDOQ");

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
    msg.setTimeStamp(0.434530194753);
    msg.setSource(32212U);
    msg.setSourceEntity(126U);
    msg.setDestination(56683U);
    msg.setDestinationEntity(208U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.748086169096;
    msg.control.set(tmp_msg_0);
    msg.duration = 7860U;
    msg.custom.assign("HSVKHTUHCGSLULKZBSYUMTWFXIDZHNNYPAURFLKFEWSGTTDBPFLKFKQXWNFYJEELMZRRDGTOHKSGSGXOYOJDYTJOKOVAFEKUNMDZPWSHMRFWEMVFVUBINNBOSQAOGORFBNBOEVRYPSOMCAWVUMASJQZCPWYWZQIRWHXPVPAM");

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
    msg.setTimeStamp(0.0484922050625);
    msg.setSource(11264U);
    msg.setSourceEntity(220U);
    msg.setDestination(48889U);
    msg.setDestinationEntity(136U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.709668103557;
    tmp_msg_0.speed_units = 212U;
    msg.control.set(tmp_msg_0);
    msg.duration = 33753U;
    msg.custom.assign("LKWTBJCGBBERZPYCHRXOJMMFULYNUJEENVSBOQOQTDMMYELLXJHRHAKRLPJHDSXFOMYETSTQNWNMKBOPFPXYQATLYGAEPFNRSWNH");

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
    msg.setTimeStamp(0.91511928735);
    msg.setSource(49533U);
    msg.setSourceEntity(129U);
    msg.setDestination(30339U);
    msg.setDestinationEntity(165U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.411912349785;
    msg.control.set(tmp_msg_0);
    msg.duration = 2470U;
    msg.custom.assign("PJEFTQQZMTRJHHXOELXESEBTMKXUDDMMFWDPEDCOUSVZNVSRQXGTYQUQKOBIMVBOHFXNSEKRAUJVAMCJJRBZPSOMCKMZZWRWPAGPSQMYEICHGTLVHMCDCLGUPYGCAWWCPLQYWFIDVNLFPANGZPYFUQJIVVXKRZNGDHSEGOLAHATFBYTWQULLXUWKRRJZ");

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
    msg.setTimeStamp(0.486817576477);
    msg.setSource(11906U);
    msg.setSourceEntity(184U);
    msg.setDestination(37737U);
    msg.setDestinationEntity(247U);
    msg.timeout = 46435U;
    msg.lat = 0.03247227943;
    msg.lon = 0.652714440456;
    msg.z = 0.916331198091;
    msg.z_units = 209U;
    msg.speed = 0.337678223198;
    msg.speed_units = 156U;
    msg.bearing = 0.321835580485;
    msg.cross_angle = 0.714707734723;
    msg.width = 0.357976901747;
    msg.length = 0.848414448082;
    msg.hstep = 0.779354234176;
    msg.coff = 236U;
    msg.alternation = 240U;
    msg.flags = 217U;
    msg.custom.assign("EWHKPLLLLKXIRHTBMLQFIFYVTNCRGBJQFXA");

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
    msg.setTimeStamp(0.646000301498);
    msg.setSource(28553U);
    msg.setSourceEntity(144U);
    msg.setDestination(22069U);
    msg.setDestinationEntity(127U);
    msg.timeout = 58233U;
    msg.lat = 0.954203508937;
    msg.lon = 0.538378170128;
    msg.z = 0.30186337687;
    msg.z_units = 224U;
    msg.speed = 0.273576762546;
    msg.speed_units = 140U;
    msg.bearing = 0.383159390418;
    msg.cross_angle = 0.442924745985;
    msg.width = 0.842852051874;
    msg.length = 0.0864356292639;
    msg.hstep = 0.969469812575;
    msg.coff = 21U;
    msg.alternation = 149U;
    msg.flags = 122U;
    msg.custom.assign("VXAARJBEANJSEYGVHQTSQMUYXGLKKZGCLIVNFFYUPWKZDBDFRQTSTZEUFESZXQRZVOUESBYAPYZNAOMQIOQBGEAPIWKPDIBELJHMUKWKNHOTSWQFAXRTMLFRVRAOPXJFCPBHCZTOUNJFWWSECNEWVLHSSQHDRRUGYCNYBXLMHUZAVNRUWTXVK");

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
    msg.setTimeStamp(0.395712946161);
    msg.setSource(64521U);
    msg.setSourceEntity(113U);
    msg.setDestination(17394U);
    msg.setDestinationEntity(201U);
    msg.timeout = 33122U;
    msg.lat = 0.630536644397;
    msg.lon = 0.301294401918;
    msg.z = 0.692977048595;
    msg.z_units = 210U;
    msg.speed = 0.87040732801;
    msg.speed_units = 245U;
    msg.bearing = 0.987193916537;
    msg.cross_angle = 0.630462295896;
    msg.width = 0.933576767179;
    msg.length = 0.328629380107;
    msg.hstep = 0.527182892777;
    msg.coff = 233U;
    msg.alternation = 41U;
    msg.flags = 184U;
    msg.custom.assign("DOKRTVWUCBNKDUPUGMUFPNIYGPDGKBVZVTDHSSRTFDTWEXRGCJXIPYEYBWVMXKZIFXZMBWXXIRBNQVEQPJAPBTLFKWGYAIINTEIOHZIYAOAWLENQCUJHMOIBUCIZRUAFSRCOLHZACUGBYJTSAOHTHYZGGAJNXMPXVWLFVHZS");

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
    msg.setTimeStamp(0.227860115314);
    msg.setSource(27322U);
    msg.setSourceEntity(156U);
    msg.setDestination(4404U);
    msg.setDestinationEntity(191U);
    msg.timeout = 55146U;
    msg.lat = 0.473248383789;
    msg.lon = 0.301501141529;
    msg.z = 0.306919268879;
    msg.z_units = 58U;
    msg.speed = 0.459922230446;
    msg.speed_units = 222U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.00363264410815;
    tmp_msg_0.y = 0.330357037194;
    tmp_msg_0.z = 0.463571048326;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PSQQDCAWIABTZRZVBWCBCMMUSKEYNXHCYANPITINNSEJIRORUJLSIBXCIBFMWQDVAGTPYRCCXVQRKVZKMHJSAQFWPRHEJUZOBLMDIXRNNTOSWBZAOBEXZLWKZDOJGXFMNCUSPYGEJFENHXYBFXDTGFDVNEGGOPDWFTVKMMVUGXWRRLDYYNEUFPTJOCTKBPSHWAZEGUHULYUQOGSLZEFOAXIPDQGYULMJVPLKSLWKLDQQJHY");

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
    msg.setTimeStamp(0.595515101065);
    msg.setSource(35196U);
    msg.setSourceEntity(44U);
    msg.setDestination(3297U);
    msg.setDestinationEntity(242U);
    msg.timeout = 47443U;
    msg.lat = 0.508310170468;
    msg.lon = 0.491985830294;
    msg.z = 0.875090324274;
    msg.z_units = 109U;
    msg.speed = 0.0890490222429;
    msg.speed_units = 232U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0672601359049;
    tmp_msg_0.y = 0.80868644684;
    tmp_msg_0.z = 0.700657173128;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GOJJZGBZLTGFDVEZXZFGRFKVZUJCCBITASVABNFNLVRROICIHGG");

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
    msg.setTimeStamp(0.606057733313);
    msg.setSource(25073U);
    msg.setSourceEntity(91U);
    msg.setDestination(55688U);
    msg.setDestinationEntity(48U);
    msg.timeout = 5211U;
    msg.lat = 0.406443732857;
    msg.lon = 0.723238868939;
    msg.z = 0.512193173067;
    msg.z_units = 169U;
    msg.speed = 0.485021049488;
    msg.speed_units = 227U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.517056242331;
    tmp_msg_0.y = 0.898758385171;
    tmp_msg_0.z = 0.869794574689;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AXWYLTVPMLETIIFPTYBTMAHYRCCBXSFQUYZTUPUUAXGJNRVIOEBQTLEZCJZHRCMUMJYYMQDGOUNGQGEDHSERKNSAVNCNOPIULUXRNWHLTNWBGFUOGYWXVSJHDSOCQRAOIKWPDSLWSJPLBDIZJBMLHEAOFKGZEDFSKMAGAQVYZKKXRCVHDMXOMCZ");

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
    msg.setTimeStamp(0.10799411406);
    msg.setSource(30170U);
    msg.setSourceEntity(144U);
    msg.setDestination(65168U);
    msg.setDestinationEntity(127U);
    msg.x = 0.168398723677;
    msg.y = 0.955484702428;
    msg.z = 0.98247012766;

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
    msg.setTimeStamp(0.374085504122);
    msg.setSource(61556U);
    msg.setSourceEntity(30U);
    msg.setDestination(43034U);
    msg.setDestinationEntity(113U);
    msg.x = 0.768552834152;
    msg.y = 0.847455739309;
    msg.z = 0.769434831269;

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
    msg.setTimeStamp(0.175153238287);
    msg.setSource(15506U);
    msg.setSourceEntity(38U);
    msg.setDestination(51548U);
    msg.setDestinationEntity(231U);
    msg.x = 0.0435169908462;
    msg.y = 0.410926050906;
    msg.z = 0.859140445899;

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
    msg.setTimeStamp(0.904284353862);
    msg.setSource(3935U);
    msg.setSourceEntity(213U);
    msg.setDestination(14285U);
    msg.setDestinationEntity(122U);
    msg.timeout = 24529U;
    msg.lat = 0.497970821836;
    msg.lon = 0.459677032219;
    msg.z = 0.459246619527;
    msg.z_units = 49U;
    msg.amplitude = 0.478467785902;
    msg.pitch = 0.664281076574;
    msg.speed = 0.199197139106;
    msg.speed_units = 114U;
    msg.custom.assign("RUNBLJSNLFCTBYRUGUJCXGTQIJHNDDLPZWFPXBWMLDOVJYBMNABWUOWQZMXAWCGKJNXLTEZKGTLDKZEMSCTUSICFUPHLZJJUFXTQQPVSQKGEDRVMEKHKPOKHIBWEHVDJCSRHHRRXXHFCTI");

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
    msg.setTimeStamp(0.660377167345);
    msg.setSource(55999U);
    msg.setSourceEntity(62U);
    msg.setDestination(64394U);
    msg.setDestinationEntity(21U);
    msg.timeout = 30946U;
    msg.lat = 0.828544960645;
    msg.lon = 0.869722347299;
    msg.z = 0.221806322494;
    msg.z_units = 17U;
    msg.amplitude = 0.152414213035;
    msg.pitch = 0.462031081408;
    msg.speed = 0.298961830424;
    msg.speed_units = 1U;
    msg.custom.assign("GIGSSLKDVKIPMXXRUSZBONIESJTGJOFRNHVJNPBTFKVTPWHWPFWZUIZTVYJVRLTWRHQBJHMBVQAHUEUDOMSCIFQRVEYWBAXXXMBWOWDPWYUTCDEGJTRKMHZXHYOBFMRAIQIOMSKACJWDCESGAMDNYLOGBDFQLMNVPCEJYAXHBRKYILXVMYQOCYDNSPKUQTXGSCKUEZNLSQPAZEZZNOLZKUJOCXF");

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
    msg.setTimeStamp(0.73378049241);
    msg.setSource(17142U);
    msg.setSourceEntity(34U);
    msg.setDestination(7096U);
    msg.setDestinationEntity(149U);
    msg.timeout = 1660U;
    msg.lat = 0.710488688243;
    msg.lon = 0.364217943602;
    msg.z = 0.075211477613;
    msg.z_units = 124U;
    msg.amplitude = 0.977857804745;
    msg.pitch = 0.986437143463;
    msg.speed = 0.575377057164;
    msg.speed_units = 236U;
    msg.custom.assign("BFUSLQBBMDXJTMOCIHJEXAEMUPDOWOPQHDJIFDRBYUASGXQZBRJHMLZRTYVKSPRQMOGNUVREKXWUJICYLFCGPIFVWJTRNIBDFLVYDQRMZNKAHGEXTHFZUOXGVNZCKWUAFUQKQGTDCESJHYNYNGCNICXOATJGAHLB");

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
    msg.setTimeStamp(0.776089477499);
    msg.setSource(17872U);
    msg.setSourceEntity(191U);
    msg.setDestination(21042U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.02855252575);
    msg.setSource(28259U);
    msg.setSourceEntity(148U);
    msg.setDestination(34538U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.555019127479);
    msg.setSource(1618U);
    msg.setSourceEntity(58U);
    msg.setDestination(27735U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.0466972904686);
    msg.setSource(22905U);
    msg.setSourceEntity(110U);
    msg.setDestination(46723U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.29868504561;
    msg.lon = 0.301673872176;
    msg.z = 0.392987492822;
    msg.z_units = 134U;
    msg.radius = 0.965616518512;
    msg.duration = 59918U;
    msg.speed = 0.929851381742;
    msg.speed_units = 157U;
    msg.custom.assign("RCOQRZSAANNOLKWHNYKKSIOBHJXOBZUMNWOYPMDI");

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
    msg.setTimeStamp(0.738243446206);
    msg.setSource(30065U);
    msg.setSourceEntity(242U);
    msg.setDestination(31443U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.271332364774;
    msg.lon = 0.577759593542;
    msg.z = 0.482563154506;
    msg.z_units = 120U;
    msg.radius = 0.238141058962;
    msg.duration = 63772U;
    msg.speed = 0.0859498230118;
    msg.speed_units = 167U;
    msg.custom.assign("WZEPFDNLTJSOKVSESCXBARUBCABMGRKMRWAMFMTPYJYQJBVATBKGZAMDKUJJZHRDWPDFZPUQGSLMSRYYUWRQVIXDGWTZXOBCIMWKOITUACLCDOPVIUUPNSKGCTDTYNSAOVIXGIMLZXNSEFELQIIJOEFHKYOJFGECHNKMLRXHASFOXWPGQZBKWLGHOTDETRXVCYTBBELNXVMQLPPLHKZNNAUVWUZYFQJHWYIGFCHQBDQEJAOVVINRFRHCHXQN");

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
    msg.setTimeStamp(0.561226653353);
    msg.setSource(53771U);
    msg.setSourceEntity(235U);
    msg.setDestination(31258U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.704310544216;
    msg.lon = 0.922383370331;
    msg.z = 0.782442794153;
    msg.z_units = 129U;
    msg.radius = 0.342529019065;
    msg.duration = 8623U;
    msg.speed = 0.391541521039;
    msg.speed_units = 77U;
    msg.custom.assign("UNJGGJILHFLWZHTMRNEPHTKFZHAGYIJMUARVCXSN");

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
    msg.setTimeStamp(0.716295733322);
    msg.setSource(52153U);
    msg.setSourceEntity(13U);
    msg.setDestination(24458U);
    msg.setDestinationEntity(215U);
    msg.timeout = 3268U;
    msg.flags = 108U;
    msg.lat = 0.894497959947;
    msg.lon = 0.740098474812;
    msg.start_z = 0.960374287753;
    msg.start_z_units = 47U;
    msg.end_z = 0.583861365583;
    msg.end_z_units = 144U;
    msg.radius = 0.198508210063;
    msg.speed = 0.942046013305;
    msg.speed_units = 198U;
    msg.custom.assign("QQWHOTPWEEUFVXLIFTVSXCVIATIWJFWUZPRGMEUCAJNJOWQZONKRNPNDXG");

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
    msg.setTimeStamp(0.162862480203);
    msg.setSource(42274U);
    msg.setSourceEntity(139U);
    msg.setDestination(54670U);
    msg.setDestinationEntity(201U);
    msg.timeout = 39425U;
    msg.flags = 39U;
    msg.lat = 0.132488658087;
    msg.lon = 0.983514211364;
    msg.start_z = 0.867196589919;
    msg.start_z_units = 175U;
    msg.end_z = 0.0963407287414;
    msg.end_z_units = 213U;
    msg.radius = 0.227355752565;
    msg.speed = 0.725195416073;
    msg.speed_units = 119U;
    msg.custom.assign("YQQXYEVCLNUCHJZPTVRSPQCXOMJWHCVPXOKWKFOZYDBOIXCKDSYTMNVOKMSLSASRCUJAVQKXYGIURETHYVDYNFNRTDFHGXUOGQVTVPZLTADAJERMRDBUNFIOTEFKIALMDBFPSELNCUEKHQMJQARTAXOEPQXZMZIBGSKFOJGSGNVDIHIHWBUGKZWBWZABMUSGKPDCYMTHBJZNFULEICRWYSOW");

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
    msg.setTimeStamp(0.331971419883);
    msg.setSource(32803U);
    msg.setSourceEntity(38U);
    msg.setDestination(29737U);
    msg.setDestinationEntity(97U);
    msg.timeout = 37384U;
    msg.flags = 118U;
    msg.lat = 0.0537948852661;
    msg.lon = 0.258324618356;
    msg.start_z = 0.923463492685;
    msg.start_z_units = 213U;
    msg.end_z = 0.117334463609;
    msg.end_z_units = 53U;
    msg.radius = 0.831229556597;
    msg.speed = 0.520237398279;
    msg.speed_units = 179U;
    msg.custom.assign("HLYRUBLXEKGCGDNVFBGCFHQYRAWHANRILJTILRNUHUKXAZMZWCKWHBAYFEQXHGVJYPKCMOEUWVOQZJXJYRQDQNUWTJECCKDDOQPIFIBKVWSLGGHFIMSABVMGYZJZOPKZTZCODENRCTIOHQPDLNDOFVUWVPLSNEKAQMNSAIEKDSAPOBWPIXFFPQMTFZAXCTEUGSXFEJUS");

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
    msg.setTimeStamp(0.423036473222);
    msg.setSource(18587U);
    msg.setSourceEntity(20U);
    msg.setDestination(21596U);
    msg.setDestinationEntity(87U);
    msg.timeout = 21882U;
    msg.lat = 0.711656578059;
    msg.lon = 0.230902090538;
    msg.z = 0.419835671974;
    msg.z_units = 121U;
    msg.speed = 0.849690744277;
    msg.speed_units = 241U;
    msg.custom.assign("PRWSGIHGTZZAJGMYUEDFXPDTTNHQVGWYPVMVYDCDHQRENQMJXVDOBNQKIPVEIRSMGDSKRYFCHBPCBSQWQFLLGUNBRXLAPRHMLIOBWCAFYWXBJVLQJATAMOLPYWZLFHUEXSQWEOJKXNOISADEJTFMUHD");

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
    msg.setTimeStamp(0.273131673154);
    msg.setSource(53287U);
    msg.setSourceEntity(67U);
    msg.setDestination(35496U);
    msg.setDestinationEntity(214U);
    msg.timeout = 9880U;
    msg.lat = 0.198520761117;
    msg.lon = 0.247065395;
    msg.z = 0.780811299972;
    msg.z_units = 113U;
    msg.speed = 0.628349454575;
    msg.speed_units = 247U;
    msg.custom.assign("GHMEKEKYWSMHNSHXLBVIRAXGWHWZANNOHSKGOKBGFCRTYBXFHWJIRSTUYWEPOQFTUNFVSUDTMAFMBLHWKRPCZSQUYMQZZPCIQCSUJVVQEDMNHTQJIPOFACOYNCJOGVFWEPJRXXOTIISZKIGNAMQLEUCXMDDJYTWOCY");

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
    msg.setTimeStamp(0.886225171323);
    msg.setSource(4066U);
    msg.setSourceEntity(62U);
    msg.setDestination(31575U);
    msg.setDestinationEntity(112U);
    msg.timeout = 40946U;
    msg.lat = 0.655531215793;
    msg.lon = 0.113660992747;
    msg.z = 0.773388489935;
    msg.z_units = 103U;
    msg.speed = 0.216744709795;
    msg.speed_units = 88U;
    msg.custom.assign("QVDDACCKHHFBBUBPARIRRKXZYVQRPYLSVDESGYMMESZINABGSCRLCXOLGLSWW");

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
    msg.setTimeStamp(0.433566842314);
    msg.setSource(27210U);
    msg.setSourceEntity(162U);
    msg.setDestination(15419U);
    msg.setDestinationEntity(27U);
    msg.x = 0.528747944291;
    msg.y = 0.126735030232;
    msg.z = 0.0643253310408;
    msg.t = 0.447640914695;

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
    msg.setTimeStamp(0.755261091451);
    msg.setSource(45468U);
    msg.setSourceEntity(83U);
    msg.setDestination(38952U);
    msg.setDestinationEntity(102U);
    msg.x = 0.807161189439;
    msg.y = 0.085404548538;
    msg.z = 0.382121246283;
    msg.t = 0.582124890369;

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
    msg.setTimeStamp(0.87351665153);
    msg.setSource(58117U);
    msg.setSourceEntity(72U);
    msg.setDestination(36472U);
    msg.setDestinationEntity(92U);
    msg.x = 0.546777524954;
    msg.y = 0.406364775588;
    msg.z = 0.12998510714;
    msg.t = 0.691545207877;

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
    msg.setTimeStamp(0.340757503336);
    msg.setSource(3271U);
    msg.setSourceEntity(15U);
    msg.setDestination(4150U);
    msg.setDestinationEntity(193U);
    msg.timeout = 51962U;
    msg.name.assign("AJXERTSXONLVOCIQYEDBUNZNVZFVYEWKIYJIXXTCUDZSYPDTVMKGQHSYZQRLKMCJUFVIBUL");
    msg.custom.assign("CMMZWDMBLIQIJOYHNGBXRIEXUXYOGWPDVVDVIDGQYZRFQLAYKHHFJSLHAWVFCTIRXANLCZPIBNEKENJQYCJPIUIXSHDWVDRKERVUOCJPDHYYTXYWBFPURCGGJHVRAQOPBZFKPAWPOXSHNKJMHTRCZYQNLPEPSURMMSSDCMZMKAHAVBTJUIVWGEFZBXTQNSSSMGAWQWCOTBETFUT");

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
    msg.setTimeStamp(0.7018598041);
    msg.setSource(37184U);
    msg.setSourceEntity(143U);
    msg.setDestination(53144U);
    msg.setDestinationEntity(61U);
    msg.timeout = 58580U;
    msg.name.assign("QFMGWUXRNENYLPBCUKQSJXASNSEGDIDDXQYHQLMSTYKMIKNLZUSEMAOPDDCWJCCQFGPKSELHOKVOVKULEOVBAWHPWJGMJQGBRWAIGNUTCEMBBMFOXRRKAVTCLJZAXPWRYUTSJFVGOBIWEVPKUH");
    msg.custom.assign("JDBUXGYQDRBRWDLMNATPDZAYXOISSUMDVPRYKRGAWKZMDNRQPTYUZIMHHTMASHRLLDOZMCFLVTKJNINRUEQNEVATQAAULJDPHZIBWTOWIGIEBVLVHGELXFZTBTCJMQVXPAKCOOLSIXNAQNJPGJELFFUIZQSGPCFKKZGJESCYJDONRKBWSYAYXXEKSWHVCDWINUXFB");

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
    msg.setTimeStamp(0.66023211289);
    msg.setSource(31587U);
    msg.setSourceEntity(172U);
    msg.setDestination(1571U);
    msg.setDestinationEntity(96U);
    msg.timeout = 1981U;
    msg.name.assign("MTEWCLWUQTYIMPUKLHWZYOXTZBODTFJUFGSBKARSGFSSBKGIEPPGHSTYIDSYRKWNBJNDKADQEWWIQSLRNIRAQ");
    msg.custom.assign("UEAUAFQTTSUBMNKRTJVBEQMIIVTXRWCPSGWBDJMPDHSOHXZLNBOQFZYZUXKLVXKGKENHXUGROKWABGDDTJBJONHFGCDQMAYGSXAYVNLBKFDOYYEPEPMQ");

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
    msg.setTimeStamp(0.779623025599);
    msg.setSource(4087U);
    msg.setSourceEntity(242U);
    msg.setDestination(48808U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.192992082111;
    msg.lon = 0.420155397453;
    msg.z = 0.595899245416;
    msg.z_units = 216U;
    msg.speed = 0.344829253256;
    msg.speed_units = 222U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.368606542824;
    tmp_msg_0.y = 0.627640270755;
    tmp_msg_0.z = 0.689429461025;
    tmp_msg_0.t = 0.926349174054;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 30673U;
    tmp_msg_1.off_x = 0.34636080322;
    tmp_msg_1.off_y = 0.0679250248565;
    tmp_msg_1.off_z = 0.835328244438;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.990896569405;
    msg.custom.assign("DXEMEASXOVRBJNCUZULAHHPYBLCEERXTMLJZGXFLLZPIUJINRUPNNJULNGVCGHVTMZZIIFQCAEITCDWIBHOQJQOZYKJUMZUAPYSDHARQXBKWXMVMCSFQDTBWNDAWISRTRXRNIHKIFVPWEMEUONGYPPHSZEYSVWVFJMECJEFGOKORSLYYGAZQBYBXSNKUPKDRFD");

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
    msg.setTimeStamp(0.130080532921);
    msg.setSource(25833U);
    msg.setSourceEntity(234U);
    msg.setDestination(22751U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.691050911262;
    msg.lon = 0.687948892813;
    msg.z = 0.563737919567;
    msg.z_units = 58U;
    msg.speed = 0.663837584582;
    msg.speed_units = 157U;
    msg.start_time = 0.98205471879;
    msg.custom.assign("CJSRCSUPWOUUMBXGUPONVNQYJEENDFYBPQKEFRDGYQU");

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
    msg.setTimeStamp(0.377554611235);
    msg.setSource(25031U);
    msg.setSourceEntity(125U);
    msg.setDestination(28874U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.945164070474;
    msg.lon = 0.237691800829;
    msg.z = 0.972397471446;
    msg.z_units = 180U;
    msg.speed = 0.227267751353;
    msg.speed_units = 203U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.554927092675;
    tmp_msg_0.y = 0.400742340789;
    tmp_msg_0.z = 0.549803693592;
    tmp_msg_0.t = 0.34933976111;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.310647797094;
    msg.custom.assign("LLTZIUNOVFVMSEQDUPQGLAIUQUXJKADNEWCXDTHFVZFXNZEQNEOCLFYANYKAT");

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
    msg.setTimeStamp(0.771655246765);
    msg.setSource(34055U);
    msg.setSourceEntity(61U);
    msg.setDestination(14720U);
    msg.setDestinationEntity(10U);
    msg.vid = 18243U;
    msg.off_x = 0.0893603267355;
    msg.off_y = 0.986062312883;
    msg.off_z = 0.448384637182;

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
    msg.setTimeStamp(0.440924976386);
    msg.setSource(5485U);
    msg.setSourceEntity(243U);
    msg.setDestination(26780U);
    msg.setDestinationEntity(96U);
    msg.vid = 9949U;
    msg.off_x = 0.2267273994;
    msg.off_y = 0.0700425005352;
    msg.off_z = 0.138778425443;

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
    msg.setTimeStamp(0.64999313108);
    msg.setSource(22326U);
    msg.setSourceEntity(157U);
    msg.setDestination(43155U);
    msg.setDestinationEntity(37U);
    msg.vid = 26045U;
    msg.off_x = 0.550204934048;
    msg.off_y = 0.557112627437;
    msg.off_z = 0.480250894473;

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
    msg.setTimeStamp(0.323725421051);
    msg.setSource(49504U);
    msg.setSourceEntity(147U);
    msg.setDestination(50001U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.134851945906);
    msg.setSource(10202U);
    msg.setSourceEntity(66U);
    msg.setDestination(8720U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.184163423091);
    msg.setSource(65154U);
    msg.setSourceEntity(143U);
    msg.setDestination(17262U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.576669127533);
    msg.setSource(63953U);
    msg.setSourceEntity(224U);
    msg.setDestination(33784U);
    msg.setDestinationEntity(134U);
    msg.mid = 1768U;

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
    msg.setTimeStamp(0.0257245323468);
    msg.setSource(44188U);
    msg.setSourceEntity(87U);
    msg.setDestination(64874U);
    msg.setDestinationEntity(99U);
    msg.mid = 13461U;

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
    msg.setTimeStamp(0.934467428845);
    msg.setSource(3753U);
    msg.setSourceEntity(111U);
    msg.setDestination(21142U);
    msg.setDestinationEntity(232U);
    msg.mid = 7543U;

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
    msg.setTimeStamp(0.190572936048);
    msg.setSource(65000U);
    msg.setSourceEntity(48U);
    msg.setDestination(19220U);
    msg.setDestinationEntity(42U);
    msg.state = 187U;
    msg.eta = 30404U;
    msg.info.assign("AMEKRIIYDTMXPUXPWDKMMYJQOEUNDDYIGFDOWPPRJBKKZYCILYEAA");

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
    msg.setTimeStamp(0.0475075184321);
    msg.setSource(29499U);
    msg.setSourceEntity(199U);
    msg.setDestination(1999U);
    msg.setDestinationEntity(73U);
    msg.state = 113U;
    msg.eta = 1360U;
    msg.info.assign("UQWHODMISYUFWUXIGVVRFGCSGISQXKOATQONIPQCEXBNSASEKUJZTOJFYNDAIAOCILMUQRKRBLRNWAYWCCJFACQHDQPMYNGTWPVXDUHMLRNHOZFNJMKBZBAWEYJLTKT");

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
    msg.setTimeStamp(0.737948980286);
    msg.setSource(30012U);
    msg.setSourceEntity(196U);
    msg.setDestination(2381U);
    msg.setDestinationEntity(195U);
    msg.state = 202U;
    msg.eta = 937U;
    msg.info.assign("MWTLBPMCFSDWEFODILLIKRYKSFSLQEPHYZLMTBUPUGDAZAUZNHPKSFHCOVQTXHDWSUCRTHCIJMVVXZPIYVQORIMMOANXNMGPHSJCVVBYARDFPSONGHKIYJGJDDIDCNDRTPBYWBFKZKKQPGVNIFELDYOMEWNCC");

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
    msg.setTimeStamp(0.724323451211);
    msg.setSource(29862U);
    msg.setSourceEntity(12U);
    msg.setDestination(22906U);
    msg.setDestinationEntity(201U);
    msg.system = 23937U;
    msg.duration = 35718U;
    msg.speed = 0.775039551266;
    msg.speed_units = 160U;
    msg.x = 0.065832217991;
    msg.y = 0.206720206821;
    msg.z = 0.133026137032;
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
    msg.setTimeStamp(0.908193554292);
    msg.setSource(53837U);
    msg.setSourceEntity(253U);
    msg.setDestination(64017U);
    msg.setDestinationEntity(110U);
    msg.system = 33055U;
    msg.duration = 42845U;
    msg.speed = 0.405685894605;
    msg.speed_units = 182U;
    msg.x = 0.256471652168;
    msg.y = 0.0823326564147;
    msg.z = 0.190745568717;
    msg.z_units = 22U;

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
    msg.setTimeStamp(0.507053781332);
    msg.setSource(41103U);
    msg.setSourceEntity(16U);
    msg.setDestination(63513U);
    msg.setDestinationEntity(153U);
    msg.system = 29936U;
    msg.duration = 43645U;
    msg.speed = 0.705064376985;
    msg.speed_units = 177U;
    msg.x = 0.260200338083;
    msg.y = 0.931979330361;
    msg.z = 0.113845925888;
    msg.z_units = 45U;

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
    msg.setTimeStamp(0.0744994701795);
    msg.setSource(52392U);
    msg.setSourceEntity(122U);
    msg.setDestination(32253U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.769390552939;
    msg.lon = 0.116867008179;
    msg.speed = 0.011362386391;
    msg.speed_units = 84U;
    msg.duration = 19345U;
    msg.sys_a = 27777U;
    msg.sys_b = 18582U;
    msg.move_threshold = 0.737512997591;

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
    msg.setTimeStamp(0.525362549969);
    msg.setSource(24450U);
    msg.setSourceEntity(245U);
    msg.setDestination(16716U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.497081286754;
    msg.lon = 0.184226402453;
    msg.speed = 0.634499309815;
    msg.speed_units = 178U;
    msg.duration = 33369U;
    msg.sys_a = 16420U;
    msg.sys_b = 4365U;
    msg.move_threshold = 0.569699127459;

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
    msg.setTimeStamp(0.17230050304);
    msg.setSource(3819U);
    msg.setSourceEntity(180U);
    msg.setDestination(41594U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.115540232849;
    msg.lon = 0.667922279088;
    msg.speed = 0.89879664611;
    msg.speed_units = 114U;
    msg.duration = 51244U;
    msg.sys_a = 6892U;
    msg.sys_b = 24179U;
    msg.move_threshold = 0.212419460171;

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
    msg.setTimeStamp(0.138052482309);
    msg.setSource(7708U);
    msg.setSourceEntity(167U);
    msg.setDestination(8232U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.524967389848;
    msg.lon = 0.50523542841;
    msg.z = 0.813374734361;
    msg.z_units = 206U;
    msg.speed = 0.730207453226;
    msg.speed_units = 169U;
    msg.custom.assign("BTTNBIYVAVMLHISRJWZWYGDOJBPXCSVY");

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
    msg.setTimeStamp(0.355202112743);
    msg.setSource(47937U);
    msg.setSourceEntity(92U);
    msg.setDestination(18693U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.171243810131;
    msg.lon = 0.644005120307;
    msg.z = 0.0895728210219;
    msg.z_units = 187U;
    msg.speed = 0.863401451228;
    msg.speed_units = 209U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.702197918872;
    tmp_msg_0.lon = 0.0763586354523;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("CNNOZGZWWPFQOUCQXIUODJXQLVHJZFBKKYSNEYB");

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
    msg.setTimeStamp(0.929235407039);
    msg.setSource(32515U);
    msg.setSourceEntity(246U);
    msg.setDestination(60555U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.97460462014;
    msg.lon = 0.548946187979;
    msg.z = 0.78289747631;
    msg.z_units = 144U;
    msg.speed = 0.68272227642;
    msg.speed_units = 1U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.82245423201;
    tmp_msg_0.lon = 0.442126639407;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("UPQCJCSBEEQHWDVXMMBSJTAQIXFMHMCDUXISVXZPIIAUNRHMEWTYATNKKFKWNFQJIZLVTSQTTJFQNGLUGSPUFOLPPACGRKYIMRUPHGMJDCHNKTEEAQLMVFQYDEBRTE");

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
    msg.setTimeStamp(0.582633512684);
    msg.setSource(56054U);
    msg.setSourceEntity(138U);
    msg.setDestination(21559U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.428518014814;
    msg.lon = 0.441264946046;

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
    msg.setTimeStamp(0.669650786499);
    msg.setSource(49103U);
    msg.setSourceEntity(162U);
    msg.setDestination(37141U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.56380838107;
    msg.lon = 0.371070613221;

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
    msg.setTimeStamp(0.235639040381);
    msg.setSource(20271U);
    msg.setSourceEntity(225U);
    msg.setDestination(22898U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.417633769606;
    msg.lon = 0.609960818993;

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
    msg.setTimeStamp(0.153683807383);
    msg.setSource(39760U);
    msg.setSourceEntity(205U);
    msg.setDestination(26925U);
    msg.setDestinationEntity(213U);
    msg.timeout = 26801U;
    msg.lat = 0.887954210281;
    msg.lon = 0.438514180023;
    msg.z = 0.775998878468;
    msg.z_units = 100U;
    msg.pitch = 0.766534618927;
    msg.amplitude = 0.119751186437;
    msg.duration = 38680U;
    msg.speed = 0.986283333516;
    msg.speed_units = 0U;
    msg.radius = 0.88766899468;
    msg.direction = 37U;
    msg.custom.assign("CYHNKZQDVEQPBGJEKLGZNIRSDYTTSZNFFNVQGHKP");

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
    msg.setTimeStamp(0.291347483168);
    msg.setSource(7810U);
    msg.setSourceEntity(223U);
    msg.setDestination(30568U);
    msg.setDestinationEntity(123U);
    msg.timeout = 14487U;
    msg.lat = 0.691058139892;
    msg.lon = 0.2376020088;
    msg.z = 0.448313206125;
    msg.z_units = 46U;
    msg.pitch = 0.231392633915;
    msg.amplitude = 0.0803172115238;
    msg.duration = 2051U;
    msg.speed = 0.489142865442;
    msg.speed_units = 54U;
    msg.radius = 0.516519877399;
    msg.direction = 230U;
    msg.custom.assign("OMUURXFBBUVKDNYNYAHLCYMQOFVMAJQAHLELBVTRNESPIMBWRVZBDKAJBVDIQRUVDWTLKJKJYUOIRAUVPAMGLAWPJZGFBKPYGVFMLTZRDQZBPCNPYAUTLNQCCPDEIIN");

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
    msg.setTimeStamp(0.0696858604115);
    msg.setSource(29417U);
    msg.setSourceEntity(168U);
    msg.setDestination(57052U);
    msg.setDestinationEntity(30U);
    msg.timeout = 63317U;
    msg.lat = 0.396355029773;
    msg.lon = 0.0828526862528;
    msg.z = 0.972662256999;
    msg.z_units = 205U;
    msg.pitch = 0.0550023027705;
    msg.amplitude = 0.478410272603;
    msg.duration = 29165U;
    msg.speed = 0.987742175801;
    msg.speed_units = 83U;
    msg.radius = 0.676031748132;
    msg.direction = 82U;
    msg.custom.assign("SSMIVTEYEHSPOBVUGKNCTYOANWKLQOQFITAXGAGPRCWABTYUDRCPZMHYXKXTRGALZKGHWFSRKQRMIDCEICCKVBOGJPTTZHYEEZNUQLNMVAGRWPPDHKVWCJLBRBPZYBSDQFSAVVTWJJUUFDWKWDRHNDPMZXWEIPCFROXTO");

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
    msg.setTimeStamp(0.612362598112);
    msg.setSource(14207U);
    msg.setSourceEntity(75U);
    msg.setDestination(14918U);
    msg.setDestinationEntity(215U);
    msg.formation_name.assign("STEBHAYRIVDDRPTOSCPVQBKRBVBGCELLVRZILFJQRMENUXMQQUYZYYMNRXKHTWSFXPGLKJQOTMIHXTFWHADKEONHHPTDGSYOOQCCEHWUPDUNXASUFPMZO");
    msg.reference_frame = 239U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 65266U;
    tmp_msg_0.off_x = 0.776067830293;
    tmp_msg_0.off_y = 0.429089118958;
    tmp_msg_0.off_z = 0.988318393413;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("OGXMSKCJOFQNHMCPCRPNVRQTWGORBOVNMEZGYSHYIVHLDNKSSPTAUFJETWMWUKJRLAZACLOP");

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
    msg.setTimeStamp(0.910055841288);
    msg.setSource(10273U);
    msg.setSourceEntity(180U);
    msg.setDestination(28423U);
    msg.setDestinationEntity(89U);
    msg.formation_name.assign("FRGICLUPGLOVCBUHAVPHBPVFMKZHKZNNPSADJRWZENKBFMAHJTXJMUUOQTFUKQXQGVPXJWYBLEEDQDTKTGUIZNMNESCHTIZHYCFGFKRUDYTDLYQGVZYKEWGLXLVLROOSKTNHRZPHUEQACDQNHZIFIQGJEYZMDDSDCMHEULCOSOJASBATRQMFFDONWRFGLJNRPTIAVEONY");
    msg.reference_frame = 156U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 40140U;
    tmp_msg_0.off_x = 0.176428768509;
    tmp_msg_0.off_y = 0.445697168111;
    tmp_msg_0.off_z = 0.330478375025;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("KXCHMJLYYTSLLZQECMPCHANWGQRFXMLDKICAAWLXSEHJTOPTCCAVVMVJKSNUSXRVBIGZZHWTFKLWXFKOYURRNWHQGYUIYEZFLESALMUMQQAMRXUGTBQHNNDGZIVCVOAGROX");

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
    msg.setTimeStamp(0.827702263603);
    msg.setSource(36161U);
    msg.setSourceEntity(205U);
    msg.setDestination(56467U);
    msg.setDestinationEntity(243U);
    msg.formation_name.assign("WASTWLJRPJWEEKVHQJGTVISDUGZOOLLCUZNIUYKSCJGRHZHYRGYMSOPAFMK");
    msg.reference_frame = 9U;
    msg.custom.assign("VRLIPASNADRKTWRIVPEQIFEFHXDIXNWOMLWIFFOHSSDIKTDCLUTNZJSVTILPQEFUPFRMKJCUBMVVZAPKEDBLMNGULBRZBSMZGIGOMOTDMADYUSGUPYKYWAAVBJEOJSXEVZXLPYLV");

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
    msg.setTimeStamp(0.33916823637);
    msg.setSource(7939U);
    msg.setSourceEntity(134U);
    msg.setDestination(48268U);
    msg.setDestinationEntity(8U);
    msg.group_name.assign("WEHOQSYWUTHGEACPNXYUWDTVNHXHRSSKZFUCFOO");
    msg.formation_name.assign("JSQZNEHVUMEZDQFJTAXOHFJETRCUYFDOUOCSHIMNYYJNMAEGHRXDCTHSBGNWZAU");
    msg.plan_id.assign("DQZNNXYXOZTVWKUFPTSUKAXIKPLLJRQIWHGBDDDNROQIRVPHYLZSVJQOMTIVAHXWYBFL");
    msg.description.assign("HCBBLLZIKRTFYFWWUDBINYFPRXDXDPEYISQBHULEVEGANCKYZBDLZAPXOXRGPOMAMQWNQJUREYMHNCWQVIQKFOOSISTGJCVATRMXYYZVGPYFFJOPJJBNNECHJWJAVGJWPCUDXZSETNZUKOUCKONHHHTWTCNEFRSLKMZDHGLTBEPDIVUYESMZMOTZXRFLSUUFKD");
    msg.leader_speed = 0.884571087886;
    msg.leader_bank_lim = 0.538414918609;
    msg.pos_sim_err_lim = 0.465032149448;
    msg.pos_sim_err_wrn = 0.460193210837;
    msg.pos_sim_err_timeout = 38227U;
    msg.converg_max = 0.454316345936;
    msg.converg_timeout = 55350U;
    msg.comms_timeout = 11092U;
    msg.turb_lim = 0.686611561836;
    msg.custom.assign("SAHKWPFCZMFGJNTVUNICDLKLXUTQGHIFWVNQMJMNGUADLEHMOMICEFZVISZXERYUNQFOKDDLZOFIDPOHHCHEMHTSLUBDWRCSVHMJOSJBASNQTFKLYAHRVYAGOUGDPPJIKJDZPRXATDFWYPBVOJVAVFTYGUBMVQSUTZEETXLEZWDKBKRNNEBW");

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
    msg.setTimeStamp(0.68497916392);
    msg.setSource(24904U);
    msg.setSourceEntity(109U);
    msg.setDestination(63216U);
    msg.setDestinationEntity(180U);
    msg.group_name.assign("IHCLZQOTWTISEUJYEFVBUZZFDDJRWIHVPCINFVQBSCKUDQHSRIMJKRO");
    msg.formation_name.assign("MKIHISMKOKLXVVPZEHPSARAMNTQUHEFZSKYWYFTQMFCIJEDODSAXKIAKHSWJLYGDJXGWDUFCJPBJFZONHDBNFWRHWYUGQBWZJRWCTTBUXPGIOMNCORFCEORXRCWOLVPFKEVSD");
    msg.plan_id.assign("SLWERFMPIVLXJKZIWGJMEQTWYJWGGSKUFOWXITBYDZBVRBPIEVNHZYMKLDCTXVJNFQXIYKYAMGLONUWKDHKYQNBQGLHIPQJXQDJEHDLTBHWDYBRRPGNOSBFAETESSBBOFNCMDSSNYNHRXKFKARXQZONOEUVPOJFGZSSINCAEEHZPCFMCRXEVPAHACQZIGGAUBKLFH");
    msg.description.assign("DZTXNYOUBLNIFZVLPTAZLACYJGYEYXQFKJUSGVQEBRXIUOQHKCCMIDVZDRELMSFAZUWAVOTKEOBHWHMVRVIYIQMOEFOANNRBSXEMIUTPUQGBJDJRXD");
    msg.leader_speed = 0.896532236504;
    msg.leader_bank_lim = 0.0574910204943;
    msg.pos_sim_err_lim = 0.755139212966;
    msg.pos_sim_err_wrn = 0.600705943454;
    msg.pos_sim_err_timeout = 20842U;
    msg.converg_max = 0.893334874795;
    msg.converg_timeout = 43275U;
    msg.comms_timeout = 36736U;
    msg.turb_lim = 0.0474258287936;
    msg.custom.assign("CPWDDJRJVRRGCZILXIQQORWYTPZUCHKSOYDSWGDANDVXWJLXCUHKCGYSELUAKMAKXXNPABYOFQNIQCZELNSJUPHXSBSEIQRMUMDQPSLJKAMMOEIHTIUPGNCRHWTDWKAGZFZEKTJJIXLKVTGNRTFMZNGPBQYZYDIP");

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
    msg.setTimeStamp(0.307971009481);
    msg.setSource(33912U);
    msg.setSourceEntity(51U);
    msg.setDestination(49333U);
    msg.setDestinationEntity(206U);
    msg.group_name.assign("HPZWFWIWGSRSVMECZQARXUDGRIGOGKDTAPEOUUBNCMLKSZGVCXAWVLECYXJLFFEJMYODUWXPMKIHJLONXPZKIESRZIGHUUYBRQMJVJYGEJKZIODFMYAOABTDTNWAUOGLTGCVVZTJHPDDSJNSCCKRABWUUNQYHNEPQXMMOWSIY");
    msg.formation_name.assign("DORBXPJDXKGUDBLKQGGRXENMFKJJWLYQMSSDTQOWBPVCFSAEMOVTFYTDKIIANFTILFBNOJYUUTNJCFUKGEMJRKHCZJRNUDVOZZINEWIIEFRJDEMVUHSUOYQZQVTELVOHGPSCOHILLHEJZPADBVJZLWHUCSRAXRPHETIIYLWVMHKYGZZMTAZXQNPLSHCKRKGWBQFAWVXOMTXUQHQTACKAG");
    msg.plan_id.assign("UIOXGGJNPMJCWTPWYOSPD");
    msg.description.assign("OQFAGFFZOZFXLEECMDQGPCQIJWRVPDHISDXMVZLCQMBGCSIUDPFXGPSLHRQVODRAJDTZWEIAWGYRYULNRHMYGPWCFKTIWSZNUIHJKSLUVENUZKHYMWHWBTHOQPBYSTSQBTFZTNJRYFBAGNIVUAEZOAYFAVKIBZQKDYPBKRSTLLNGOAEODUUCDWRJCCNEXIBSLCMYPTEOGEHXKJHDKUTXVYNPOGXQHMOJ");
    msg.leader_speed = 0.65818975299;
    msg.leader_bank_lim = 0.00820003456679;
    msg.pos_sim_err_lim = 0.163300695991;
    msg.pos_sim_err_wrn = 0.259900831836;
    msg.pos_sim_err_timeout = 2439U;
    msg.converg_max = 0.346154478574;
    msg.converg_timeout = 57305U;
    msg.comms_timeout = 2742U;
    msg.turb_lim = 0.681012252817;
    msg.custom.assign("PUMAAHFSMGJXEQJDHZPEHAIXZBHMDIDDISOWAFCMOERUUOOJATNFDVIDSZXBWFTELKEZBYXJCRVXQYULVGZDMHFAZHPHYIL");

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
    msg.setTimeStamp(0.194166595632);
    msg.setSource(17327U);
    msg.setSourceEntity(4U);
    msg.setDestination(60249U);
    msg.setDestinationEntity(190U);
    msg.control_src = 26513U;
    msg.control_ent = 39U;
    msg.timeout = 0.466304069275;
    msg.loiter_radius = 0.093026901272;
    msg.altitude_interval = 0.662970852029;

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
    msg.setTimeStamp(0.0208669152238);
    msg.setSource(10237U);
    msg.setSourceEntity(39U);
    msg.setDestination(15962U);
    msg.setDestinationEntity(164U);
    msg.control_src = 64303U;
    msg.control_ent = 232U;
    msg.timeout = 0.767372177194;
    msg.loiter_radius = 0.621360932681;
    msg.altitude_interval = 0.277557931662;

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
    msg.setTimeStamp(0.83903147546);
    msg.setSource(4545U);
    msg.setSourceEntity(86U);
    msg.setDestination(27151U);
    msg.setDestinationEntity(240U);
    msg.control_src = 31977U;
    msg.control_ent = 134U;
    msg.timeout = 0.855811729787;
    msg.loiter_radius = 0.792140914251;
    msg.altitude_interval = 0.172373275299;

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
    msg.setTimeStamp(0.727750604506);
    msg.setSource(27040U);
    msg.setSourceEntity(129U);
    msg.setDestination(46018U);
    msg.setDestinationEntity(89U);
    msg.flags = 113U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0166447327459;
    tmp_msg_0.speed_units = 201U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.680739996426;
    tmp_msg_1.z_units = 113U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.829050072045;
    msg.lon = 0.33803174725;
    msg.radius = 0.799924048617;

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
    msg.setTimeStamp(0.626880815649);
    msg.setSource(18238U);
    msg.setSourceEntity(174U);
    msg.setDestination(29945U);
    msg.setDestinationEntity(36U);
    msg.flags = 199U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.522429458234;
    tmp_msg_0.speed_units = 132U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.267720929333;
    tmp_msg_1.z_units = 244U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.476939877254;
    msg.lon = 0.8763326161;
    msg.radius = 0.155008041402;

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
    msg.setTimeStamp(0.248897191041);
    msg.setSource(51977U);
    msg.setSourceEntity(131U);
    msg.setDestination(37482U);
    msg.setDestinationEntity(114U);
    msg.flags = 212U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.559043433859;
    tmp_msg_0.speed_units = 13U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0730382195952;
    tmp_msg_1.z_units = 42U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.735093760128;
    msg.lon = 0.977038190971;
    msg.radius = 0.141559294211;

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
    msg.setTimeStamp(0.260100857097);
    msg.setSource(28028U);
    msg.setSourceEntity(75U);
    msg.setDestination(46531U);
    msg.setDestinationEntity(170U);
    msg.control_src = 58114U;
    msg.control_ent = 161U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 87U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.42466706344;
    tmp_tmp_msg_0_0.speed_units = 67U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.27417441618;
    tmp_tmp_msg_0_1.z_units = 4U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.223193452177;
    tmp_msg_0.lon = 0.0713577586797;
    tmp_msg_0.radius = 0.287701842636;
    msg.reference.set(tmp_msg_0);
    msg.state = 132U;
    msg.proximity = 169U;

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
    msg.setTimeStamp(0.646432984729);
    msg.setSource(46176U);
    msg.setSourceEntity(125U);
    msg.setDestination(25355U);
    msg.setDestinationEntity(119U);
    msg.control_src = 17910U;
    msg.control_ent = 1U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 253U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.702144252286;
    tmp_tmp_msg_0_0.speed_units = 66U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.55069068013;
    tmp_tmp_msg_0_1.z_units = 89U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.277158911467;
    tmp_msg_0.lon = 0.104541300529;
    tmp_msg_0.radius = 0.559447948406;
    msg.reference.set(tmp_msg_0);
    msg.state = 247U;
    msg.proximity = 120U;

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
    msg.setTimeStamp(0.558689212971);
    msg.setSource(37531U);
    msg.setSourceEntity(162U);
    msg.setDestination(34866U);
    msg.setDestinationEntity(236U);
    msg.control_src = 58597U;
    msg.control_ent = 139U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 252U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.176994935072;
    tmp_tmp_msg_0_0.speed_units = 116U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.735363622943;
    tmp_tmp_msg_0_1.z_units = 72U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.667411773204;
    tmp_msg_0.lon = 0.553394759905;
    tmp_msg_0.radius = 0.946454044241;
    msg.reference.set(tmp_msg_0);
    msg.state = 78U;
    msg.proximity = 76U;

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
    msg.setTimeStamp(0.840336345599);
    msg.setSource(1383U);
    msg.setSourceEntity(254U);
    msg.setDestination(15482U);
    msg.setDestinationEntity(231U);
    msg.ax_cmd = 0.702163592587;
    msg.ay_cmd = 0.537936361552;
    msg.az_cmd = 0.772258476506;
    msg.ax_des = 0.769249305653;
    msg.ay_des = 0.914613760979;
    msg.az_des = 0.0524822400351;
    msg.virt_err_x = 0.848559730169;
    msg.virt_err_y = 0.612788480555;
    msg.virt_err_z = 0.751946052261;
    msg.surf_fdbk_x = 0.886248370994;
    msg.surf_fdbk_y = 0.206627328864;
    msg.surf_fdbk_z = 0.68456013925;
    msg.surf_unkn_x = 0.190361420431;
    msg.surf_unkn_y = 0.470488014159;
    msg.surf_unkn_z = 0.314227425814;
    msg.ss_x = 0.0259127533024;
    msg.ss_y = 0.740915528641;
    msg.ss_z = 0.923038397883;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("QOXGHUGVYHSJUGKXJDULYPXJBQBHLFIEMXCICVSSZQWDRFUCEUNDWIATABQBOJSGYWOGKAUIYQFLHTSNWBTEQOHPMSEQWMYADPJCZKIMZTGNRPJYYBNHJGODUF");
    tmp_msg_0.dist = 0.474451573235;
    tmp_msg_0.err = 0.459341631786;
    tmp_msg_0.ctrl_imp = 0.0819187265267;
    tmp_msg_0.rel_dir_x = 0.333277096516;
    tmp_msg_0.rel_dir_y = 0.154180099417;
    tmp_msg_0.rel_dir_z = 0.283794645157;
    tmp_msg_0.err_x = 0.712193536603;
    tmp_msg_0.err_y = 0.60238144838;
    tmp_msg_0.err_z = 0.364404945566;
    tmp_msg_0.rf_err_x = 0.412387490963;
    tmp_msg_0.rf_err_y = 0.84819128954;
    tmp_msg_0.rf_err_z = 0.67249515999;
    tmp_msg_0.rf_err_vx = 0.520321456087;
    tmp_msg_0.rf_err_vy = 0.270605626725;
    tmp_msg_0.rf_err_vz = 0.723001529264;
    tmp_msg_0.ss_x = 0.186493555338;
    tmp_msg_0.ss_y = 0.60956978447;
    tmp_msg_0.ss_z = 0.131139043936;
    tmp_msg_0.virt_err_x = 0.591995828185;
    tmp_msg_0.virt_err_y = 0.582448602983;
    tmp_msg_0.virt_err_z = 0.803320496829;
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
    msg.setTimeStamp(0.0416856747929);
    msg.setSource(64136U);
    msg.setSourceEntity(177U);
    msg.setDestination(11276U);
    msg.setDestinationEntity(183U);
    msg.ax_cmd = 0.0487252719602;
    msg.ay_cmd = 0.946534110133;
    msg.az_cmd = 0.0185477476346;
    msg.ax_des = 0.091517982586;
    msg.ay_des = 0.224151480288;
    msg.az_des = 0.790219107388;
    msg.virt_err_x = 0.960436588386;
    msg.virt_err_y = 0.423701810037;
    msg.virt_err_z = 0.387101177982;
    msg.surf_fdbk_x = 0.982846862095;
    msg.surf_fdbk_y = 0.658672293404;
    msg.surf_fdbk_z = 0.645539509119;
    msg.surf_unkn_x = 0.438488839524;
    msg.surf_unkn_y = 0.495330410286;
    msg.surf_unkn_z = 0.0601208826712;
    msg.ss_x = 0.813846405071;
    msg.ss_y = 0.15994090226;
    msg.ss_z = 0.718868647838;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("MPDZYBYVDWITNKCJLCPBYPSVFCIWPLTKJXNKAEBADJHKQRXGWMMXAYOPOMANCWZYOXOUGXBTQJIXERRGMJIHPMNXRYHUHUEZFSKYNCVEREQRFVQLKZUNFQFJVZZMHQMCGUHSSEBBINTAWCFLWLJSAQPMLEFGDZGXBPGCOOXEPTBOSRDILMTVZWNLLQJISJCWWHQVOINKUYDQSYVZGZOTCOKIITAUAFVAKJUTRG");
    tmp_msg_0.dist = 0.456944091074;
    tmp_msg_0.err = 0.395239864787;
    tmp_msg_0.ctrl_imp = 0.830379651166;
    tmp_msg_0.rel_dir_x = 0.642693713879;
    tmp_msg_0.rel_dir_y = 0.0914585451882;
    tmp_msg_0.rel_dir_z = 0.773314144568;
    tmp_msg_0.err_x = 0.388326377505;
    tmp_msg_0.err_y = 0.019352038836;
    tmp_msg_0.err_z = 0.975988105436;
    tmp_msg_0.rf_err_x = 0.698258661409;
    tmp_msg_0.rf_err_y = 0.936204962643;
    tmp_msg_0.rf_err_z = 0.432896464346;
    tmp_msg_0.rf_err_vx = 0.150665563214;
    tmp_msg_0.rf_err_vy = 0.0319983350739;
    tmp_msg_0.rf_err_vz = 0.0235066504654;
    tmp_msg_0.ss_x = 0.538442927143;
    tmp_msg_0.ss_y = 0.672098381842;
    tmp_msg_0.ss_z = 0.0136476761049;
    tmp_msg_0.virt_err_x = 0.233371763362;
    tmp_msg_0.virt_err_y = 0.603873201515;
    tmp_msg_0.virt_err_z = 0.716107966058;
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
    msg.setTimeStamp(0.137604999039);
    msg.setSource(12554U);
    msg.setSourceEntity(250U);
    msg.setDestination(11990U);
    msg.setDestinationEntity(131U);
    msg.ax_cmd = 0.618338081265;
    msg.ay_cmd = 0.379458364828;
    msg.az_cmd = 0.494276933914;
    msg.ax_des = 0.42690970482;
    msg.ay_des = 0.880081733036;
    msg.az_des = 0.490624322609;
    msg.virt_err_x = 0.398645549328;
    msg.virt_err_y = 0.192086661513;
    msg.virt_err_z = 0.318294038308;
    msg.surf_fdbk_x = 0.513872656433;
    msg.surf_fdbk_y = 0.57056820776;
    msg.surf_fdbk_z = 0.891261615227;
    msg.surf_unkn_x = 0.870567379914;
    msg.surf_unkn_y = 0.991620468088;
    msg.surf_unkn_z = 0.178058202527;
    msg.ss_x = 0.526177946542;
    msg.ss_y = 0.800095789064;
    msg.ss_z = 0.838846405567;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("DORKJGFOXDQPSIVQVYDZETYZPZKPYIGIQOCVEHKZNXPOMIHUBBQLMTHJRRLPMHMWIMXOBNUQVPWJFTEVLATAOTCCTABLDDSPLAXYDEIPWYANVKFIZCQXBSS");
    tmp_msg_0.dist = 0.220222835325;
    tmp_msg_0.err = 0.522127517215;
    tmp_msg_0.ctrl_imp = 0.324658945476;
    tmp_msg_0.rel_dir_x = 0.166061999055;
    tmp_msg_0.rel_dir_y = 0.383300224246;
    tmp_msg_0.rel_dir_z = 0.889345211342;
    tmp_msg_0.err_x = 0.6541315863;
    tmp_msg_0.err_y = 0.812601923049;
    tmp_msg_0.err_z = 0.501747196066;
    tmp_msg_0.rf_err_x = 0.296425781048;
    tmp_msg_0.rf_err_y = 0.318286962716;
    tmp_msg_0.rf_err_z = 0.168994410681;
    tmp_msg_0.rf_err_vx = 0.046081792767;
    tmp_msg_0.rf_err_vy = 0.595761127588;
    tmp_msg_0.rf_err_vz = 0.52384162317;
    tmp_msg_0.ss_x = 0.745507447026;
    tmp_msg_0.ss_y = 0.76811123529;
    tmp_msg_0.ss_z = 0.99094006695;
    tmp_msg_0.virt_err_x = 0.795891904627;
    tmp_msg_0.virt_err_y = 0.840698821448;
    tmp_msg_0.virt_err_z = 0.386482086713;
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
    msg.setTimeStamp(0.756458178033);
    msg.setSource(10555U);
    msg.setSourceEntity(47U);
    msg.setDestination(30023U);
    msg.setDestinationEntity(60U);
    msg.s_id.assign("TLCVFNQYQHZNWJTNRVVCQZCLFVKSPWZAYZFKIWUUTEZRYGOXVGBOEBRPENYXAUURLXDKJJOBOOWRIHTQHEAFBHKKMGTRKLP");
    msg.dist = 0.147748545154;
    msg.err = 0.236723457969;
    msg.ctrl_imp = 0.335706683922;
    msg.rel_dir_x = 0.0202236059803;
    msg.rel_dir_y = 0.868926973314;
    msg.rel_dir_z = 0.356315392059;
    msg.err_x = 0.601271285896;
    msg.err_y = 0.0164805286049;
    msg.err_z = 0.0551293479723;
    msg.rf_err_x = 0.453378832424;
    msg.rf_err_y = 0.0865000429996;
    msg.rf_err_z = 0.0398440025037;
    msg.rf_err_vx = 0.235157829311;
    msg.rf_err_vy = 0.494581512881;
    msg.rf_err_vz = 0.330331323268;
    msg.ss_x = 0.062084640448;
    msg.ss_y = 0.803094795383;
    msg.ss_z = 0.976282268943;
    msg.virt_err_x = 0.632696470703;
    msg.virt_err_y = 0.178494914062;
    msg.virt_err_z = 0.0520900587304;

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
    msg.setTimeStamp(0.044533117371);
    msg.setSource(19602U);
    msg.setSourceEntity(208U);
    msg.setDestination(3023U);
    msg.setDestinationEntity(60U);
    msg.s_id.assign("WKZFWRQTDIDFOGICYJCMGAMXPBYHSELZEOCELFYRYVIQFFCXNFMCVDMLTGHSVMKDTAZPZJRGADYPOSRSQUWTJAJZQYJXUGCPJSQZBTRATBOSTNPJLAMWHNJEUNFBLGRBDQCYUBPYELHNBWMDU");
    msg.dist = 0.305088147988;
    msg.err = 0.539728548014;
    msg.ctrl_imp = 0.437004572802;
    msg.rel_dir_x = 0.0768073726364;
    msg.rel_dir_y = 0.87464566413;
    msg.rel_dir_z = 0.535718514298;
    msg.err_x = 0.758791816368;
    msg.err_y = 0.964804639427;
    msg.err_z = 0.78261112669;
    msg.rf_err_x = 0.816180977876;
    msg.rf_err_y = 0.577297391163;
    msg.rf_err_z = 0.785515160041;
    msg.rf_err_vx = 0.270281684895;
    msg.rf_err_vy = 0.434787948119;
    msg.rf_err_vz = 0.515812419538;
    msg.ss_x = 0.764114121576;
    msg.ss_y = 0.946071948279;
    msg.ss_z = 0.898309268736;
    msg.virt_err_x = 0.0636255154468;
    msg.virt_err_y = 0.875773044795;
    msg.virt_err_z = 0.374660204075;

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
    msg.setTimeStamp(0.833419718251);
    msg.setSource(62980U);
    msg.setSourceEntity(228U);
    msg.setDestination(37511U);
    msg.setDestinationEntity(143U);
    msg.s_id.assign("ANGUSHFPEGMJPGICWACXJSJRCBYZBZIBEXSJXKMKRGZOCGPTNYOFENAOXQFOLUQHTFLVZVLHDHQETXIGZHYKQJL");
    msg.dist = 0.593217962965;
    msg.err = 0.182434629605;
    msg.ctrl_imp = 0.70550836508;
    msg.rel_dir_x = 0.495767893842;
    msg.rel_dir_y = 0.530737212815;
    msg.rel_dir_z = 0.0441781774914;
    msg.err_x = 0.389007881062;
    msg.err_y = 0.376219911149;
    msg.err_z = 0.101039056609;
    msg.rf_err_x = 0.507247812962;
    msg.rf_err_y = 0.141794789825;
    msg.rf_err_z = 0.524520102416;
    msg.rf_err_vx = 0.235100463779;
    msg.rf_err_vy = 0.126990152211;
    msg.rf_err_vz = 0.527037423511;
    msg.ss_x = 0.515194953016;
    msg.ss_y = 0.0519835357162;
    msg.ss_z = 0.477261311365;
    msg.virt_err_x = 0.407886214777;
    msg.virt_err_y = 0.792313807984;
    msg.virt_err_z = 0.393885856387;

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
    msg.setTimeStamp(0.804729749865);
    msg.setSource(17029U);
    msg.setSourceEntity(226U);
    msg.setDestination(26006U);
    msg.setDestinationEntity(90U);
    msg.timeout = 49432U;
    msg.rpm = 0.688160395329;
    msg.direction = 250U;
    msg.custom.assign("VSDUZLJOCTRXJTPTWCBQDXXIGZJESSTYXASWLHZTNIRGVVFZYMTAPIKVYJNBGAWASHJYZVCIWWYBQQGMGTQQCCIFNHGMUAYZLENUNBFAWELCFGMMVQXKVDPGELWIITJOPUKQFZIYTQLDUORXMUNKUFPPOBWMYCHOORRJTBFDFKXVIEKOYROPWRXLDZSEENDLHFCHDHNKZPKZRGJWLHUHMXAQSCISPEHD");

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
    msg.setTimeStamp(0.22129557207);
    msg.setSource(31319U);
    msg.setSourceEntity(193U);
    msg.setDestination(56600U);
    msg.setDestinationEntity(234U);
    msg.timeout = 48712U;
    msg.rpm = 0.151928105661;
    msg.direction = 138U;
    msg.custom.assign("JXEZNHBKEDSODVAKVIHXNZSZESCZFTYMBRJMIBWDLVKBCOE");

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
    msg.setTimeStamp(0.699893608566);
    msg.setSource(24831U);
    msg.setSourceEntity(152U);
    msg.setDestination(58711U);
    msg.setDestinationEntity(31U);
    msg.timeout = 25404U;
    msg.rpm = 0.0115849729176;
    msg.direction = 63U;
    msg.custom.assign("YQNLMXJSTPILMCIXTRLCQWDQTOZWIRDAFDEVFZWSXQHNMWIZVOKXWMZWJBACVUJDBFKUKEMBCJQEHGLGTEVXJITZHZCDCYNAFQLULNSXFGPFQGRARJNPROVYDFUGAUEYAYSKZENGKEYACOTBPCUMPOPHJTMBKWPBQGRSDZTHIUVOOMEVNEGWYWMJTORUHFRAWDKADBCLHYFVLSOXPGKNLYVNUZJXFZQAXXSYGQ");

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
    msg.setTimeStamp(0.942896467843);
    msg.setSource(4209U);
    msg.setSourceEntity(220U);
    msg.setDestination(43224U);
    msg.setDestinationEntity(53U);
    msg.formation_name.assign("XKYHYJOIVBYJLGJTMXXPEZBUZQPAIDXQXCHEJVKQEKNUENTFUVUFVGFHOEQGLWFKCVARHQMPSNPOBAZQDSQGYOGKGLNATCPNDSQWWWDDOBRJGOJCEGBJUXMAIZMLSMVVWOZINJHVBYWTEPDLXYRL");
    msg.type = 242U;
    msg.op = 51U;
    msg.group_name.assign("CVTUCFFWJOFIRYWUOHUYHTZRACTXVWMDMRUTSBCFIMLEBXJCXDATGYSIDPBCKVFBVOMGYQONXLMFWDRSZUSDNJHSSPYWLDXNKYLQJYEKUFBDTLVBGSXOHUPUANZIKXEZILHINUGIRANNWZOVYKMXRQQAHLTAKTMUYKTPWGXPRWAPVLOQI");
    msg.plan_id.assign("WFBSPFRWFRJPERCFWXJESGGCLYLMUBUAZAJCMWZGMEYIZBBFIPMRWYYLGCSZLPHGILZKQIYGDNHEPEZRYSTPMRABFKQNFVYVXADVXJYTDQXQAZOTXTIUHJPKVHWDJNZILMPLXNBDQMEEDWBJQNAMANHOWCSQWGCVMVZTATHSNYKLYEIJFUSHQRNOHXOIOEUNMQUUASVOVTRGEKKITUKWODXIBDCAOOCRVJFKTPXPGXKDHQH");
    msg.description.assign("MYASUKOSSESWDAGULCQSOOMRUJHYYIICCYMOVCZDBKSBQNPBAHUNTWXTLSTKNAPZJYCXVNDFIQAUDVQBYRWALFHTOUQXWWNIFSBRINXGEJCLNEJDZMFQEMRXONMPIDYWHCXPJXZVVFVKYKJPBUOBGGEIKFADFBMGCJLAUMKOTAOURZKTRHWIHEURLGVVIDTQBGMFNHNJZRHMOEZPKDSWXWESZERHLGGPFHKCAQJJXLYZXRLQZVBLPYVDIWFTTG");
    msg.reference_frame = 234U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 42422U;
    tmp_msg_0.off_x = 0.394354088748;
    tmp_msg_0.off_y = 0.283819795954;
    tmp_msg_0.off_z = 0.741837153234;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.783598089385;
    msg.leader_speed_min = 0.735609628112;
    msg.leader_speed_max = 0.595489218149;
    msg.leader_alt_min = 0.0670305784085;
    msg.leader_alt_max = 0.337923191059;
    msg.pos_sim_err_lim = 0.832811427976;
    msg.pos_sim_err_wrn = 0.913105183537;
    msg.pos_sim_err_timeout = 19618U;
    msg.converg_max = 0.682669519783;
    msg.converg_timeout = 62744U;
    msg.comms_timeout = 14862U;
    msg.turb_lim = 0.0799261555848;
    msg.custom.assign("FTVZCTXGVJDMGYEWHALQDJQHKNXZBFZCPLAWTJLBWKEITAJUSEGLWRNUULSMXARPFZHUKUJORVJYEINVBOBRIPYSTDEDHBCROPAVBZDXXGQOIGIYTSJCWHFTDOOOPCUWXLVETQDNNNBUXXMWJNVSMQOBSCOQIKAAQRUPXEHZQIYCIWFREZAMCZYKKJGXPINVMGPLGLSKBRNLSFQUGMTSTAVFHRACUZZKKSLFWYYOBDYIEEKFGJR");

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
    msg.setTimeStamp(0.183024405885);
    msg.setSource(1681U);
    msg.setSourceEntity(202U);
    msg.setDestination(2400U);
    msg.setDestinationEntity(122U);
    msg.formation_name.assign("SLGQRTIJAHCYIFDCZPJQKWBRWUBGYJDCUQUGJKQIIKWBXBKJBZWOFJBSK");
    msg.type = 20U;
    msg.op = 46U;
    msg.group_name.assign("IONDNPZZTAHVKVILTFJCIHXPLUKGDFLTBDJQYDJZNXFBUWKPMCYNGYROPZKWPQOGHOCVXRVWUWWZUTFRKMPXEGNYVLEFZXSIXBQOVZXMYYWBLKSIKHRYMEQGNYBMOUPQMVESAQUOZKNGAVQEEHHEVWJETDIRUWLCDPFMBMTVQHRBMNDALTDUJOCJLJCCUCXFKIRCXTKOSAZGUGBSQAZSCTWYTSRIHAEJRQANLROSJJPPBH");
    msg.plan_id.assign("YQVTMPIUTWDXEZWVVAPNELCBYSWNCDRIUKTFRGAYRRUCLOIODEDFUKOSMKPEQHBLBGMVZRHROFNWSFECGORDKRPAPNUVDWYIFNFKSCQAOYPASYADTMSMHZPIOKIWNXQYMKUFIBKJCJKVLFHSZLZHLVSVAGNTAMKXRBHJZGZXDDVPOLXCYZAQTPMDQITFLJXGHUGFHUQQZCGWMEXOJEXHJQUJCWCMJSNIHBLBYPGBEYZTJSJ");
    msg.description.assign("YNKTQTUIAIPDDQUADTPUSUSBELZBWLREDFBWKOVHQARKASFKLSYNVRTVDFOFQHFUYLLIJKDTHEQCVDEFCRGNVPMRLOSSXKACYJIOHUHRLRWPNCXOKBMJWZYLHTZCPAVVBXBTGCCJJDZ");
    msg.reference_frame = 179U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 2873U;
    tmp_msg_0.off_x = 0.878134722027;
    tmp_msg_0.off_y = 0.711901363729;
    tmp_msg_0.off_z = 0.494743393054;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.798429466999;
    msg.leader_speed_min = 0.218426176451;
    msg.leader_speed_max = 0.827077345763;
    msg.leader_alt_min = 0.34220582732;
    msg.leader_alt_max = 0.0447248744217;
    msg.pos_sim_err_lim = 0.763855834342;
    msg.pos_sim_err_wrn = 0.215063218956;
    msg.pos_sim_err_timeout = 39128U;
    msg.converg_max = 0.58631489725;
    msg.converg_timeout = 7313U;
    msg.comms_timeout = 54551U;
    msg.turb_lim = 0.961400447459;
    msg.custom.assign("GOJKLFFZZCSWSUTUIEDENXROHWVFYDKQJJBPMCAHHDQWMMZCWVSNGVTQPXLMKCDEHKTVKEYHQTPPDILAXAWQXFXESLLIDGEWIZTIBBPKRRYOFSOVFUUZAZLCUMA");

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
    msg.setTimeStamp(0.679093876826);
    msg.setSource(28968U);
    msg.setSourceEntity(88U);
    msg.setDestination(56032U);
    msg.setDestinationEntity(107U);
    msg.formation_name.assign("ZFGYBCLFVJGGPQSYPXOQSGYJCDECHZCVFTBVHLHVOFBOEAXOYGSKQYPZULWJOYAABWBINRIDHCJRUDW");
    msg.type = 140U;
    msg.op = 155U;
    msg.group_name.assign("OIIYXKSZDQHLDNIFQPBTMJFXTQBENTRHGCTTSQCDJEYMAXFNUUZWCQUTUOOGBOYVASDZERKJGHHLAFHEGVNLTWMAIKBTVWDEMAFEUKDZIXRNRHQPJWPTRFGZSDCSGPNQSBNMPKRKIKALYICOVXYYXDZXYFZPZPADOVVAWGROPBOAVRNUEGCJVLEVJMSUZACSYYWJLEXRTMFHLWNJWBSIELGDQHBWXFCFBNCKUVUZQYWUQSKXMJMPP");
    msg.plan_id.assign("BBBNHIADBMOSPVORIKAAEMQXCZPOLYHSHYNJSEVUDWGPMSJHYVHCJYXHIGMGALXUQMDATUSFWVEYIWKSSBTKMBSNHDBZJPAXVWLMQYXLWTAABXQCFTXIVNGZFCTHNTJKCXEKCTPAUOGYPVZINLQLNRHOGKDRQUHKXZJRGDLWFOEQQRFUPEDKUFMZIYD");
    msg.description.assign("ZUZYWWUXUOAJDLHSDFBSQDKWNABMBJVWCYNBENRLKDHWCHSBLPPURVGDYZNHRXRPOJMZIYOGIBZCEYKZTCENPCPAQTTFXEYAJDLXCGHYEBZTBVGYLQTSAZRRRGFKJIQECLGDMNXS");
    msg.reference_frame = 127U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 60373U;
    tmp_msg_0.off_x = 0.437733690692;
    tmp_msg_0.off_y = 0.224608445462;
    tmp_msg_0.off_z = 0.575008218971;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.306457335604;
    msg.leader_speed_min = 0.578151934923;
    msg.leader_speed_max = 0.491806186258;
    msg.leader_alt_min = 0.415249339779;
    msg.leader_alt_max = 0.679973860794;
    msg.pos_sim_err_lim = 0.63422758556;
    msg.pos_sim_err_wrn = 0.96598167076;
    msg.pos_sim_err_timeout = 57441U;
    msg.converg_max = 0.227710033675;
    msg.converg_timeout = 6641U;
    msg.comms_timeout = 39175U;
    msg.turb_lim = 0.577134440546;
    msg.custom.assign("XNOTQVXMXYTKWWFMZEUPDTVCXJDYIGPQFOFVPPNLBXSRBFENZPNBQGXBSYKFZBZIMYHSDKJVHVSOUANMTUUYRRMQADKHBCVHCIMEHLWOSVYIEJICLJLGYKF");

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
    msg.setTimeStamp(0.169270080635);
    msg.setSource(39343U);
    msg.setSourceEntity(65U);
    msg.setDestination(36848U);
    msg.setDestinationEntity(9U);
    msg.timeout = 34865U;
    msg.lat = 0.447503251168;
    msg.lon = 0.522187578848;
    msg.z = 0.606632029808;
    msg.z_units = 223U;
    msg.speed = 0.0933889462906;
    msg.speed_units = 83U;
    msg.custom.assign("GBQNZXPJBIZVRVIVQBEGXKFUOOLHKLKYWRQJOEDARHVBCEZIHULFDRLXJNOCDFAWHQIUUNTWJKICZVXOACZZQWGHKLECWMQUFYPVXHINVLTZGONFRTSXDAMIANAAUJEDKGJPKEDONJEVOCRPMPYQMSWQSLGSFKPWUBYPBTGCTJNLLHOXSMPVAIDHDENRASNTYXFFFMZFBQIBXKYCMDEHUSUTWW");

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
    msg.setTimeStamp(0.0025973171073);
    msg.setSource(22262U);
    msg.setSourceEntity(11U);
    msg.setDestination(52651U);
    msg.setDestinationEntity(80U);
    msg.timeout = 4014U;
    msg.lat = 0.702045687113;
    msg.lon = 0.0303948469879;
    msg.z = 0.520242844514;
    msg.z_units = 31U;
    msg.speed = 0.783526828856;
    msg.speed_units = 106U;
    msg.custom.assign("VEZQXDFQJXTTLBFHSGMIQYQIGZSIABGDJKWAZZAVXXOXAZAMBCRMHWBPCONOWJLSYHPMLDJDBIVTOKQOBSUGKIZFWYUWKMJWMPQJUVXSVFFEWUSVAEPHUYVVVNEOFMQRDTBPJKYOQL");

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
    msg.setTimeStamp(0.345203319081);
    msg.setSource(64955U);
    msg.setSourceEntity(96U);
    msg.setDestination(27265U);
    msg.setDestinationEntity(0U);
    msg.timeout = 64370U;
    msg.lat = 0.283315175273;
    msg.lon = 0.268061404298;
    msg.z = 0.775305957916;
    msg.z_units = 65U;
    msg.speed = 0.899851424682;
    msg.speed_units = 193U;
    msg.custom.assign("QPKYJHSUARTFQGEZQSBADUQOAUEQQLWWZSBDYIWHZNMPIUVLHCFPSFZXOZRNBPGNXELTFXLZDRVEWLGBZIDVZKGMCSTJPBJIDSNOABAGUNUXTQOEPUQVPZRJBFMQOHMMKDVTYFMMVOEGKSRUEAFAYTRIKVVFIKXNCEIRWHOBRFIRARWETJS");

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
    msg.setTimeStamp(0.38993288932);
    msg.setSource(63811U);
    msg.setSourceEntity(219U);
    msg.setDestination(55129U);
    msg.setDestinationEntity(104U);
    msg.timeout = 39093U;
    msg.lat = 0.962440369104;
    msg.lon = 0.228248557539;
    msg.z = 0.561823282594;
    msg.z_units = 161U;
    msg.speed = 0.629193405585;
    msg.speed_units = 193U;
    msg.custom.assign("APTMPOCFSCFGWSCPVEZNZQUHAJEONKW");

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
    msg.setTimeStamp(0.731929796171);
    msg.setSource(64721U);
    msg.setSourceEntity(197U);
    msg.setDestination(21296U);
    msg.setDestinationEntity(204U);
    msg.timeout = 14391U;
    msg.lat = 0.659506701286;
    msg.lon = 0.825118450386;
    msg.z = 0.681138142002;
    msg.z_units = 183U;
    msg.speed = 0.264995045966;
    msg.speed_units = 199U;
    msg.custom.assign("ZUICZZGXTTIRDHFKRJWYZUUEFHNQIMKXKNYJOMABBOYPXLPTIBCVWXLKRRLWURLPCFIXLMNYSVHEUVEFCINFNKQWAVNGGMWRGGQQRIEQPPOZQOVJZNSIYBSMWHJBHCGSAUTHDAZKALUMYSFQFYMADETNQKQICESODKNCYQKDYPZOLCCPLLAZAEBWPWHIXOW");

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
    msg.setTimeStamp(0.645990358832);
    msg.setSource(24272U);
    msg.setSourceEntity(248U);
    msg.setDestination(42286U);
    msg.setDestinationEntity(61U);
    msg.timeout = 7280U;
    msg.lat = 0.705022047801;
    msg.lon = 0.807408698839;
    msg.z = 0.672695381509;
    msg.z_units = 228U;
    msg.speed = 0.358306043451;
    msg.speed_units = 234U;
    msg.custom.assign("YQIUFPTYDBVRAJFXNTPTVULIQMZCKXELHSWVYZZOADRIKODRCQAXIWVJBIM");

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
    msg.setTimeStamp(0.3807373636);
    msg.setSource(54505U);
    msg.setSourceEntity(49U);
    msg.setDestination(362U);
    msg.setDestinationEntity(107U);
    msg.arrival_time = 0.229780877478;
    msg.lat = 0.0390727001666;
    msg.lon = 0.848007982473;
    msg.z = 0.994772560617;
    msg.z_units = 95U;
    msg.travel_z = 0.891784614572;
    msg.travel_z_units = 28U;
    msg.delayed = 149U;

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
    msg.setTimeStamp(0.683459297523);
    msg.setSource(16061U);
    msg.setSourceEntity(217U);
    msg.setDestination(8768U);
    msg.setDestinationEntity(168U);
    msg.arrival_time = 0.406169383949;
    msg.lat = 0.253384927244;
    msg.lon = 0.380989099372;
    msg.z = 0.966298008473;
    msg.z_units = 121U;
    msg.travel_z = 0.491389551506;
    msg.travel_z_units = 175U;
    msg.delayed = 161U;

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
    msg.setTimeStamp(0.0550507606759);
    msg.setSource(52699U);
    msg.setSourceEntity(31U);
    msg.setDestination(62882U);
    msg.setDestinationEntity(76U);
    msg.arrival_time = 0.215675628604;
    msg.lat = 0.868795666388;
    msg.lon = 0.297855542874;
    msg.z = 0.970529259861;
    msg.z_units = 47U;
    msg.travel_z = 0.877717821715;
    msg.travel_z_units = 65U;
    msg.delayed = 117U;

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
    msg.setTimeStamp(0.409228361979);
    msg.setSource(61674U);
    msg.setSourceEntity(113U);
    msg.setDestination(969U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.200229458509;
    msg.lon = 0.37127430343;
    msg.z = 0.126786068756;
    msg.z_units = 216U;
    msg.speed = 0.0834159129008;
    msg.speed_units = 168U;
    msg.bearing = 0.306788359983;
    msg.cross_angle = 0.246606780283;
    msg.width = 0.290749418334;
    msg.length = 0.976219035514;
    msg.coff = 248U;
    msg.angaperture = 0.176276535124;
    msg.range = 9179U;
    msg.overlap = 228U;
    msg.flags = 70U;
    msg.custom.assign("WCEDGDZBYFSHZLDWNAKACFLLOLJJYUDFSVKMZZHQXBGTREFZIUDVHFKDQLODAVMHMQCGVLVRXRQZRXDJXKBPMIBJBEPCQNNHKYWPDUVCXAQNQMJERVQIRHIYXFZNCWASPSCGKESUAITBOKZWSXUGW");

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
    msg.setTimeStamp(0.707016076893);
    msg.setSource(39695U);
    msg.setSourceEntity(243U);
    msg.setDestination(26085U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.324488860377;
    msg.lon = 0.967850813655;
    msg.z = 0.336841728916;
    msg.z_units = 89U;
    msg.speed = 0.34806114557;
    msg.speed_units = 27U;
    msg.bearing = 0.693891459563;
    msg.cross_angle = 0.529918697074;
    msg.width = 0.290527208835;
    msg.length = 0.623905920317;
    msg.coff = 196U;
    msg.angaperture = 0.264865381999;
    msg.range = 48177U;
    msg.overlap = 96U;
    msg.flags = 15U;
    msg.custom.assign("EZONKPEICHSHUHIKDOWLJDJPQGPQIRNVMXMQNPEDDULFHTZAFCGBUTHSLLQFFFZBVXSEEMMOFJTSRGUBQTUDVBCNYRYWAMOCLKBMWNXVZTYVETJQKZGZREUPPCZNIYKFBGXAAJHSUXBAQGSIVBUHSWWVOXNMOSYLRRWZWHTKTBACIDPQAJDOGFAFKBLRLHMZYWAJVJEGPTZGYFKKXXRIMWSICLVLDIJYYNXOQPPINCAENURDSEHCUJCYWO");

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
    msg.setTimeStamp(0.6872909635);
    msg.setSource(55722U);
    msg.setSourceEntity(103U);
    msg.setDestination(39050U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.535717657717;
    msg.lon = 0.423019598832;
    msg.z = 0.633307343693;
    msg.z_units = 100U;
    msg.speed = 0.998853633291;
    msg.speed_units = 89U;
    msg.bearing = 0.865149783457;
    msg.cross_angle = 0.0748641524511;
    msg.width = 0.533351385804;
    msg.length = 0.760485330594;
    msg.coff = 22U;
    msg.angaperture = 0.699014463992;
    msg.range = 47368U;
    msg.overlap = 185U;
    msg.flags = 231U;
    msg.custom.assign("IDHOEKCJXVBJJMBTBLMTVIADRFTQLYEOJYFZHVSUGBHCYYG");

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
    msg.setTimeStamp(0.183221734937);
    msg.setSource(12490U);
    msg.setSourceEntity(204U);
    msg.setDestination(9470U);
    msg.setDestinationEntity(193U);
    msg.timeout = 36783U;
    msg.lat = 0.733752504712;
    msg.lon = 0.774810857713;
    msg.z = 0.489421296099;
    msg.z_units = 110U;
    msg.speed = 0.557564044382;
    msg.speed_units = 45U;
    msg.syringe0 = 250U;
    msg.syringe1 = 11U;
    msg.syringe2 = 230U;
    msg.custom.assign("AKMCZQVLJEKDDBUFMVZWAYDRKXWEAKTSQTYAHIPKJTGQVHGBFSJCRXESZXBEUPJZXVCSFGGWVDAOCCFMFDKLGWXEHFEEXULNAGMCTXYVSC");

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
    msg.setTimeStamp(0.909957487263);
    msg.setSource(8453U);
    msg.setSourceEntity(76U);
    msg.setDestination(46543U);
    msg.setDestinationEntity(75U);
    msg.timeout = 31917U;
    msg.lat = 0.341058328458;
    msg.lon = 0.987318099087;
    msg.z = 0.700875046514;
    msg.z_units = 164U;
    msg.speed = 0.469466658445;
    msg.speed_units = 40U;
    msg.syringe0 = 156U;
    msg.syringe1 = 8U;
    msg.syringe2 = 252U;
    msg.custom.assign("NSIOJFOQOCYWTXZMMUCQILCXSTTOANKMDASUOYBFMVYUPANQTKALFDACUQPHJFVGYNRIEVWLEIJDBPPEUDTVMKSVUWFJDCEJHBGPTPUALMYZRJMWJYRQOQIYZWNXPOXLZHIBRCKTSUKZTYCFHMIAEBASQROWFQZCKVHDQSNNYHYGAZVLEIFXRZDFF");

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
    msg.setTimeStamp(0.94406501183);
    msg.setSource(28795U);
    msg.setSourceEntity(217U);
    msg.setDestination(34949U);
    msg.setDestinationEntity(135U);
    msg.timeout = 63303U;
    msg.lat = 0.568998536227;
    msg.lon = 0.301311172357;
    msg.z = 0.131921026086;
    msg.z_units = 211U;
    msg.speed = 0.20384678917;
    msg.speed_units = 111U;
    msg.syringe0 = 102U;
    msg.syringe1 = 127U;
    msg.syringe2 = 183U;
    msg.custom.assign("WJONSFDVRDQBJSIKFXAARSJGGQHVRFNUUBJXGQOZAZTYERL");

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
    msg.setTimeStamp(0.438236900893);
    msg.setSource(19759U);
    msg.setSourceEntity(76U);
    msg.setDestination(35374U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.365911990619);
    msg.setSource(11971U);
    msg.setSourceEntity(189U);
    msg.setDestination(45274U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.464051751677);
    msg.setSource(63006U);
    msg.setSourceEntity(144U);
    msg.setDestination(51774U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.29830497838);
    msg.setSource(55371U);
    msg.setSourceEntity(34U);
    msg.setDestination(14963U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.974237676518;
    msg.lon = 0.962175980009;
    msg.z = 0.758770232097;
    msg.z_units = 39U;
    msg.speed = 0.476776646946;
    msg.speed_units = 74U;
    msg.takeoff_pitch = 0.720502051853;
    msg.custom.assign("PJEROSVVRFHTDTBULEDHODHBWLMNGEMDVNOEMVBKVJZWZKH");

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
    msg.setTimeStamp(0.14714398127);
    msg.setSource(44211U);
    msg.setSourceEntity(61U);
    msg.setDestination(17026U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.584595723026;
    msg.lon = 0.966401308841;
    msg.z = 0.268398933864;
    msg.z_units = 44U;
    msg.speed = 0.50903873091;
    msg.speed_units = 239U;
    msg.takeoff_pitch = 0.515071519127;
    msg.custom.assign("JSSIOOKLETLNFMEQFWWZXOXPCTGDGNLZRLJNCDJUAPCGPXNXIVNZZWOSYGKDOUJPYKPTELRPNPIIWKKTBCWEFBQRRUXVOGSXPIEQDRJMFVAQBKKVLTVZUHZVCAIYHOGAFUVCHDWYDDWLJYMOJHTTKJHSMJSEPINYSHMWAXQMGAHCZCMXGBZJURFWNEUCSAYGBKQADUBTFTELFECBTZOLYBBUGZFVBONQVQ");

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
    msg.setTimeStamp(0.597404490106);
    msg.setSource(33806U);
    msg.setSourceEntity(116U);
    msg.setDestination(45531U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.650940622589;
    msg.lon = 0.261889121931;
    msg.z = 0.80555664307;
    msg.z_units = 54U;
    msg.speed = 0.634126372819;
    msg.speed_units = 48U;
    msg.takeoff_pitch = 0.731513765495;
    msg.custom.assign("ULNRSXQUJSHVYMIOKBDFDHSKIDPSKGWEMEGBPYVDFWHOADLJRILPW");

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
    msg.setTimeStamp(0.262947121602);
    msg.setSource(4757U);
    msg.setSourceEntity(222U);
    msg.setDestination(50914U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.92890673582;
    msg.lon = 0.835485076116;
    msg.z = 0.761855969111;
    msg.z_units = 91U;
    msg.speed = 0.244642896848;
    msg.speed_units = 85U;
    msg.abort_z = 0.931095504933;
    msg.bearing = 0.826245437069;
    msg.glide_slope = 135U;
    msg.glide_slope_alt = 0.600066211405;
    msg.custom.assign("PWLSLBKIGJXJFKYOVVQETLFUFPZDKWMWNIUDCLMMQDRSAABFCFVOGIHPWDDCNZAEUYPYSCFAQSOTTMTJSZAQAUNCQHYOBYEYSVUHVZVZLMKYWGHEIWLBJSYMLOQLVDVBDFGWWHOVGRCNBEJYXJXAWKCIVNDRXUBGNCGXSGCKMPKXXJBEONJERQPSYEQZKDIGQXFFTIURBPEKHARNNRPTZZQSUHLWEIRLAFOJRXMU");

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
    msg.setTimeStamp(0.893293288338);
    msg.setSource(3567U);
    msg.setSourceEntity(205U);
    msg.setDestination(5561U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.00173591467857;
    msg.lon = 0.320241058104;
    msg.z = 0.340081784839;
    msg.z_units = 91U;
    msg.speed = 0.954393940349;
    msg.speed_units = 229U;
    msg.abort_z = 0.407301752497;
    msg.bearing = 0.276177327985;
    msg.glide_slope = 249U;
    msg.glide_slope_alt = 0.716237351923;
    msg.custom.assign("NVJDCXXSFKWARQHBBDYZWMLVYLVJQLOJSTMCRTQVPZQRTBM");

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
    msg.setTimeStamp(0.336486497839);
    msg.setSource(35514U);
    msg.setSourceEntity(231U);
    msg.setDestination(64436U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.655165895536;
    msg.lon = 0.254438265058;
    msg.z = 0.1559229203;
    msg.z_units = 203U;
    msg.speed = 0.635215780424;
    msg.speed_units = 123U;
    msg.abort_z = 0.277224344999;
    msg.bearing = 0.806722788142;
    msg.glide_slope = 162U;
    msg.glide_slope_alt = 0.956874724684;
    msg.custom.assign("UTMLXPPGIVMTDCXEERFDKKZKJCKTESICAMCNVGHNGTFZUFZIMPHZYEZNLQWYKLNXVOGCLYERTJDNQMQQDSLOIWXDKQKWDSFVANEWUCOVHGLK");

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
    msg.setTimeStamp(0.478407089679);
    msg.setSource(62451U);
    msg.setSourceEntity(205U);
    msg.setDestination(39029U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.44287044872;
    msg.lon = 0.828761787868;
    msg.speed = 0.713276996832;
    msg.speed_units = 10U;
    msg.limits = 144U;
    msg.max_depth = 0.0317228218207;
    msg.min_alt = 0.586183586436;
    msg.time_limit = 0.337358591853;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.561643000218;
    tmp_msg_0.lon = 0.685328671113;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("IHSHRAAUVAGERIDMUQBZPVRKETNVCJKBAKNWWPMFBVLFRMJS");
    msg.custom.assign("DNRLYXBZJSRMBKKHXCILZXOXNYMJUGWNEFVVAMWHRNFGMALKWUTJICYRMVHDQOFUOKBUIUWOWUJBCIDYEZDNUCLMWBHPAXLBVAJPWUGGLNSPAFMLGAKVLWQJVSEQXCPAIMGYROTTYBXIRJZKDOGXASCBZRWZOFYIFTKZGPDBKWDIEGQHRVIHPYBFPIPQQN");

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
    msg.setTimeStamp(0.19184465271);
    msg.setSource(6284U);
    msg.setSourceEntity(11U);
    msg.setDestination(2521U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.743173171823;
    msg.lon = 0.254220797028;
    msg.speed = 0.0817751478613;
    msg.speed_units = 28U;
    msg.limits = 150U;
    msg.max_depth = 0.649688591411;
    msg.min_alt = 0.90274589279;
    msg.time_limit = 0.0320001097093;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.157292614322;
    tmp_msg_0.lon = 0.597805756444;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("JRKVXDBTBKJCUKKKOYRGQAAJULJXCRCTHHGLNSWWHQAIRVYMNWIOHQNPTDQFEUDHPMNASOWUQCNKDKXVEDWJMTTMRINAGOYYXVIYBWAVMTFPZBYPHGLUMQFLLCDMIQWJOQGOFNCJXKLFFZNTVYVZSLSWCWPSESGFZMBUNEGYIESCLXMBQXUGLDCITTFUFXPSUJAMOLZEVPAJZZDPATRZIHOUWEGEZHI");
    msg.custom.assign("MQVGMOUNLCHNWSRGPMOHXEDEGCEYYASTJGWQIVAWDWLIXSWKWFMUAXSEYERAAUDCAYLKTQZDNUGTZFCPTONXWTMVBPVSQLE");

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
    msg.setTimeStamp(0.55548706869);
    msg.setSource(59370U);
    msg.setSourceEntity(195U);
    msg.setDestination(55021U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.360411865718;
    msg.lon = 0.76486359261;
    msg.speed = 0.402765144527;
    msg.speed_units = 186U;
    msg.limits = 126U;
    msg.max_depth = 0.834678685686;
    msg.min_alt = 0.849446846296;
    msg.time_limit = 0.505948566409;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.390091861027;
    tmp_msg_0.lon = 0.528024284824;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("XVNTLDOYUURPLOTGOXBCSBHEACZUYUUHVUTMPGWPXOFWEKWEFBFMNGVHHDCJNLWJBWXZNARDUILFLFSSANZLVOTKQTICDVJQKKVJNAUZREGDSWRSKPMBCQVODLNYLFQQBDCIKMJVKEYJQBYYJUYZCESEXIZYMNXOHGKHDGJSGETASBAPW");
    msg.custom.assign("GRCLIIUGBADDLEFIFDNLNASBMCERWUKTOZHICKSQJFQDSDHFIGJUBYHPKHHQBJJLSUTFRZWHRLQEYNGDLMXXVNWCZXT");

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
    msg.setTimeStamp(0.566488022792);
    msg.setSource(50890U);
    msg.setSourceEntity(44U);
    msg.setDestination(8939U);
    msg.setDestinationEntity(11U);
    msg.target.assign("IVBIEFLPJTVMFSAYQNVDAQJEPLVYPGWWKNPWEXHJCQFDPYASWPJEVYCOSIHXLBGSIKRPLFGOOKZYHORRTKRYEROARHZIOBBNVZZJNBSYFGXRVQDHBVMZJAOMTZNBSEQFFULEECYHQUPSIXNWIARCQBGMQUMEOCLZWMHTDJECJUQTNCKWSIZDFGIRMDDLNZTLHKGGBXWMXDAAJ");
    msg.max_speed = 0.269125282912;
    msg.speed_units = 23U;
    msg.lat = 0.720767089309;
    msg.lon = 0.461470353078;
    msg.z = 0.501086585261;
    msg.z_units = 200U;
    msg.custom.assign("XEBLSLNTBBLITKMOZVFJDDZPXZWAUJWIQN");

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
    msg.setTimeStamp(0.176214132307);
    msg.setSource(13556U);
    msg.setSourceEntity(216U);
    msg.setDestination(1538U);
    msg.setDestinationEntity(57U);
    msg.target.assign("VJEIQZIEGEQXPFFQYLZHVIBMJOSFXZKLKJFGNQNLAFAAXKYRUYHAEHUUDPMBUWWJRANXOYFXCYFQRCARRCVDWDVWPIUCAMGUSPNTLTSSRIHGOBVFADTXYOBUZVZQIQRQIHMHVSLSEKKNMNELPFATGZMGTBQSJDLWDCNOZTPIJVSHBUORIU");
    msg.max_speed = 0.699829727041;
    msg.speed_units = 246U;
    msg.lat = 0.48735140731;
    msg.lon = 0.00674064813166;
    msg.z = 0.835274706188;
    msg.z_units = 232U;
    msg.custom.assign("RYQRFLCPPTJASMZLCLXLXGEHZQYYSOKBEADVTDHVURGJTPELBCCNERXNYGHZLAKUPVMBHTLGPDFMFPIKBAVJPRBQUUYUKIRHVQVSIWSJONOIUBTBVPKIHTDEHJZNLGAYEXSIGKGCWMHFMAIAKUQUCSMKJODLWNVPOJYRSEWNPOJQABTGUQKIDEBYENXZAMFTWOLZCIERDZMTYWYK");

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
    msg.setTimeStamp(0.110449617863);
    msg.setSource(15727U);
    msg.setSourceEntity(242U);
    msg.setDestination(22726U);
    msg.setDestinationEntity(221U);
    msg.target.assign("HRDEJRYYGWXEHKNFRZTQESYAFPDIVMAGCBFXQDLPVURPTNBIGYSTPQZGEJEOMLWFWUVUMESDBSRKKOTMRCRYWXQLRYLNPHCYUAVWLDQLMTJKJLKSFOXGPBAIGZVAIJRYTQZIHQTOIFVSEOOUHMCDCNFQOBJMFOVXRNLNKXICZSBZPXGPDUKMCAJPWIWEJUFZLDWOIZXSAKVGULUQJZAXBU");
    msg.max_speed = 0.667381548641;
    msg.speed_units = 134U;
    msg.lat = 0.206341947056;
    msg.lon = 0.114884931736;
    msg.z = 0.716373575244;
    msg.z_units = 155U;
    msg.custom.assign("WUDNWOYIVEWTARFXMQSMERLJAWYEZDXZZWGBMZGNSGZOCPTLZHDKOLVJMFIQVNXJEKXHCVZNEBQXLPMTSVDWQKRPCRZLKNPLSXALPYAIKOZRFHBCFGRHIACEEORQYAGNCWBFJVAUVVGHBBMCYMSMKTXFPNYQXQMTBMTHVIHUDOEJHKECRPYOSQRKTOWEWLZOGDUTGSJBNISURBICGYJSYFQXICYUPVUOA");

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
    msg.setTimeStamp(0.539860433277);
    msg.setSource(2443U);
    msg.setSourceEntity(14U);
    msg.setDestination(49074U);
    msg.setDestinationEntity(190U);
    msg.timeout = 616U;
    msg.lat = 0.0616272453809;
    msg.lon = 0.388333209821;
    msg.speed = 0.100942104371;
    msg.speed_units = 135U;
    msg.custom.assign("IPHJXOLBICNFOAFFYFEYALHKCGMKGZZIPEEQFWBQOQITJALJNJLMTWUXPEMUJNBGHJMJUQOMDKYLTFDVXDSCYYMVCEOROLINBTIHDKUSYATSFHVQUAKTICPNRMUDQSXHIWBJNHJUEXZYXKCWPIVYRWNMAPGDGMWDUXVFAWRCOZWIEJGFKBFDSKPYRSUERCGVVCRWLKPDXQCLSPZAZNOTBHMZRBVBQVERGZYQQNBNWXTKZPROXLAVZGSTHAULSH");

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
    msg.setTimeStamp(0.233070005308);
    msg.setSource(15124U);
    msg.setSourceEntity(130U);
    msg.setDestination(49956U);
    msg.setDestinationEntity(235U);
    msg.timeout = 35835U;
    msg.lat = 0.338791007806;
    msg.lon = 0.661643192499;
    msg.speed = 0.0718288371816;
    msg.speed_units = 201U;
    msg.custom.assign("SDVAGMOKLROJZCIRTWGNPUNOOJXZ");

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
    msg.setTimeStamp(0.969572476292);
    msg.setSource(19261U);
    msg.setSourceEntity(167U);
    msg.setDestination(15441U);
    msg.setDestinationEntity(42U);
    msg.timeout = 52977U;
    msg.lat = 0.294570494116;
    msg.lon = 0.937079794755;
    msg.speed = 0.514205312257;
    msg.speed_units = 209U;
    msg.custom.assign("XHWNRYEVOITFOAHJFEZUDJZETWZHIFMYXCSHBPQBGZWMVRJIHTZPCTPBBRRJGPCOLMXTCAOSQNPAKVQGYVJQEAUTUEAXYTBMMDARVSAHSEXDSZCYRMFBRPQXUFHNGQGKGLVIKWCMSFFGETUNYRWBZJMYUNLRIHJSKMSJNIILUXDKCONLFPKCGKBCDKEFQQULPEYOWGGKRNXPSAZNIXDTALLUFKPIHLHVYBXWIVMQL");

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
    msg.setTimeStamp(0.809502753067);
    msg.setSource(51824U);
    msg.setSourceEntity(2U);
    msg.setDestination(22084U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.534202220919;
    msg.lon = 0.672208411404;
    msg.z = 0.820410457302;
    msg.z_units = 83U;
    msg.radius = 0.537251723269;
    msg.duration = 43896U;
    msg.speed = 0.928041915033;
    msg.speed_units = 155U;
    msg.popup_period = 14776U;
    msg.popup_duration = 5339U;
    msg.flags = 227U;
    msg.custom.assign("FDVELJTVYOQELGDBUDYPJDMEHWCAMXOREAONPRDIKAYGHIQTEMWHKYWTGTRUZSPYDUSIQQXZSBIOICZMUCALVFUTOCGQMBJWTBHSINZWV");

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
    msg.setTimeStamp(0.167110761779);
    msg.setSource(14488U);
    msg.setSourceEntity(42U);
    msg.setDestination(47787U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.78323189753;
    msg.lon = 0.0592027563869;
    msg.z = 0.55434403335;
    msg.z_units = 68U;
    msg.radius = 0.44385356437;
    msg.duration = 31374U;
    msg.speed = 0.837241304146;
    msg.speed_units = 167U;
    msg.popup_period = 43939U;
    msg.popup_duration = 34753U;
    msg.flags = 86U;
    msg.custom.assign("JCLVCQXNKVULFMNJICEFTQFUAIJSMJZPJGQHYSACZWITZAGOLUEXVOHOXWGHNBURYOWJKWLOIUKJXHYMPQHLSKTXMRWLMBORVEBSMFEDBQIYMDSYJXNPURGLJUTPIZVWYTWHPGCDVEKNPPMBZAESFZIELTKCIEGQJDOFBSNMTDUYZQGBRNDRKYHSLBCAKHBUSMFZAPCKDQERSVOTTDGCRAHADZWQPGVN");

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
    msg.setTimeStamp(0.951246392179);
    msg.setSource(19045U);
    msg.setSourceEntity(4U);
    msg.setDestination(44759U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.174326066591;
    msg.lon = 0.813143857169;
    msg.z = 0.894134506109;
    msg.z_units = 164U;
    msg.radius = 0.548476354226;
    msg.duration = 6493U;
    msg.speed = 0.667744519467;
    msg.speed_units = 64U;
    msg.popup_period = 32324U;
    msg.popup_duration = 31372U;
    msg.flags = 75U;
    msg.custom.assign("JLSQNWEHDHANMQMMRYCHOKUZGCWKOKGZJHUJZRYDHFEXBYJZVZSSTXFAIWANYVIFAYEJGWHGDFALKTNOBKQYPFBAQIVCSPBMWUIOQNSKLDLQHOPSUUDZZDCKVXHMTIVYABMRPWOBMLCRSDAEITBDPLVPQGSGJRIRZCPYRHPTHEBOTAXTEXYISSRBVWFKEVXYERZRCCMFGVJDOFTJNLCUXIGUJDUITQXQZGEXGWXMJUBKAUOKLOQVMLLFWWNCET");

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
    msg.setTimeStamp(0.994301616929);
    msg.setSource(36230U);
    msg.setSourceEntity(100U);
    msg.setDestination(36214U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.703227674805);
    msg.setSource(31624U);
    msg.setSourceEntity(182U);
    msg.setDestination(51139U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.420625967181);
    msg.setSource(17315U);
    msg.setSourceEntity(164U);
    msg.setDestination(22326U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.0539106716878);
    msg.setSource(7095U);
    msg.setSourceEntity(185U);
    msg.setDestination(46497U);
    msg.setDestinationEntity(102U);
    msg.timeout = 1759U;
    msg.lat = 0.871701676211;
    msg.lon = 0.512798096922;
    msg.z = 0.142064968898;
    msg.z_units = 192U;
    msg.speed = 0.804219793449;
    msg.speed_units = 66U;
    msg.bearing = 0.276969329885;
    msg.width = 0.39675745905;
    msg.direction = 109U;
    msg.custom.assign("IAKZFDYLUWUGHKQYTTRULMZVEQLUBMDXVSGNARMIFFFMZSQUQVBIKZQSREOJXSULTWLBODBNOEIMFGZHCYICJGANQOERUOYHSKXOZZOHMSVGPCZAP");

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
    msg.setTimeStamp(0.679281700313);
    msg.setSource(47247U);
    msg.setSourceEntity(19U);
    msg.setDestination(36947U);
    msg.setDestinationEntity(248U);
    msg.timeout = 18601U;
    msg.lat = 0.132253350185;
    msg.lon = 0.950002982183;
    msg.z = 0.861073365721;
    msg.z_units = 144U;
    msg.speed = 0.367973240972;
    msg.speed_units = 83U;
    msg.bearing = 0.482418762777;
    msg.width = 0.273354247874;
    msg.direction = 227U;
    msg.custom.assign("OMRDFVGDVCDSOGYIVO");

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
    msg.setTimeStamp(0.00916951622109);
    msg.setSource(52386U);
    msg.setSourceEntity(130U);
    msg.setDestination(11095U);
    msg.setDestinationEntity(166U);
    msg.timeout = 6716U;
    msg.lat = 0.852862598988;
    msg.lon = 0.730559132609;
    msg.z = 0.488126610738;
    msg.z_units = 97U;
    msg.speed = 0.826357959477;
    msg.speed_units = 121U;
    msg.bearing = 0.686982801719;
    msg.width = 0.0179377052803;
    msg.direction = 219U;
    msg.custom.assign("JSUMUQYUCDRKNUYAEHXUBXPLCKFETQAVONTXQGEMVHIPTIWSTZKOPCNNVGPSIHMPHVDGCODQRXNOQFWVZFEHRPRLJWBKNXQALIBMTLXDOZLSTWIFDAYDUAJVJBEZQXSLORKMGGQATSBMYBFFCYDWNWGZWUCVGVIREZGZMESUOKLBIEXYBIKWDKGQNRIJJREOPPZ");

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
    msg.setTimeStamp(0.73350899997);
    msg.setSource(12186U);
    msg.setSourceEntity(172U);
    msg.setDestination(49551U);
    msg.setDestinationEntity(49U);
    msg.op_mode = 145U;
    msg.error_count = 59U;
    msg.error_ents.assign("PIXTDJBBBOINLQVOHHVWZKZDCRXLLBBDVISJHUQXAMACPHDLUPLSCRWKUNAIIENDKKVYASYHDFMURDECKRDOYTFWZRLTUPEEJNZCPRKVGOJYLEOTAGUMXJDJAYVZKHRQTCBWQUTQCBGZMINYUOYJHAUNTAIFZEHYXXANKQMVTSFKWGQGETWISURQJHBGESPLLDOGXC");
    msg.maneuver_type = 61183U;
    msg.maneuver_stime = 0.154168911301;
    msg.maneuver_eta = 45973U;
    msg.control_loops = 3315294251U;
    msg.flags = 147U;
    msg.last_error.assign("OPPMPRQGNKLCSOEVIIWACZACMAVQCXBCLKFEROJNBDCILZRCPMGDUBOZUWLEMYGNXVODPXLHOKBELXRKHTNOZQPVXXNDHWXSFU");
    msg.last_error_time = 0.821396579557;

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
    msg.setTimeStamp(0.356860097734);
    msg.setSource(57360U);
    msg.setSourceEntity(36U);
    msg.setDestination(43600U);
    msg.setDestinationEntity(66U);
    msg.op_mode = 13U;
    msg.error_count = 157U;
    msg.error_ents.assign("KZWLRGFSKZOXPUROTNQMMATUYIKVRDMNNLYYJHMPAXFGJYWPFCRBJOLDSEJNSXAQPQSLIDATJWAZBBOHURCNZUWIVQYWRAJAPLYNHZVWJXFFEZFAKSBYXGTLWCHTYXZGIBEMPQSQQVHZCSLISWFNETCMVHGMYJKNLBVBJUMMSENYDLUIWFITEDQNRMQKLDIB");
    msg.maneuver_type = 35039U;
    msg.maneuver_stime = 0.856907641058;
    msg.maneuver_eta = 31529U;
    msg.control_loops = 1159216094U;
    msg.flags = 248U;
    msg.last_error.assign("VIVOWGPWLSQRSFGVYKZUUKTEILPZDMMKQRWEIBXUIFPRYFZPCYTNCFQMYNUENORRVUTZNFYJCQVWJHJAPKLRGKRREQLGNCEHAIGDZHRNFAOWPVMADJCOMUXMTHUOWLBXAIBIHOZUGSCQIBBNYOJVWZTSKIZRQUYCXLBZMBDOCSPTDUDGVXXDNAOJJMZLSOWWJQVEKMFNDXFMTWHJSQILXYCASDCSGLFVHGP");
    msg.last_error_time = 0.299676708209;

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
    msg.setTimeStamp(0.0490448002565);
    msg.setSource(20694U);
    msg.setSourceEntity(189U);
    msg.setDestination(53296U);
    msg.setDestinationEntity(195U);
    msg.op_mode = 246U;
    msg.error_count = 20U;
    msg.error_ents.assign("VXZOWYEKBJLYHXUDTWLMGQACSK");
    msg.maneuver_type = 56266U;
    msg.maneuver_stime = 0.682653039215;
    msg.maneuver_eta = 37654U;
    msg.control_loops = 3267010009U;
    msg.flags = 46U;
    msg.last_error.assign("OJCJRUEAQCVLVGDQQMATAEPWXYKMKNT");
    msg.last_error_time = 0.503592711615;

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
    msg.setTimeStamp(0.703550285507);
    msg.setSource(21077U);
    msg.setSourceEntity(158U);
    msg.setDestination(6940U);
    msg.setDestinationEntity(222U);
    msg.type = 39U;
    msg.request_id = 12835U;
    msg.command = 19U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 38817U;
    tmp_msg_0.flags = 8U;
    tmp_msg_0.lat = 0.252903967036;
    tmp_msg_0.lon = 0.224757465714;
    tmp_msg_0.start_z = 0.466531909452;
    tmp_msg_0.start_z_units = 5U;
    tmp_msg_0.end_z = 0.26177485272;
    tmp_msg_0.end_z_units = 210U;
    tmp_msg_0.radius = 0.506049015874;
    tmp_msg_0.speed = 0.00902736093292;
    tmp_msg_0.speed_units = 125U;
    tmp_msg_0.custom.assign("PHGDQKXLVLQWSJWPIIMIHYMTQVYBHVEASXLYKJXFMSXBUTKMDYNNOBLITUBGGAXGPDAFVCSKLJHCYRNKOREMGCQUKZVSPTQEMARBILOEURHSMXEFKOGFNBIRPKGZBPCKXNPIRUOLZFSDWCCOODJLP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 41326U;
    msg.info.assign("HWYIIXKFPRAVXWNPDYVKAXAZUCGDGJVKMWJLDKOBLBWOUCYNYEALBSTEYLZYQGIINJPPUEZTBQMEQ");

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
    msg.setTimeStamp(0.394661436374);
    msg.setSource(13091U);
    msg.setSourceEntity(149U);
    msg.setDestination(42286U);
    msg.setDestinationEntity(220U);
    msg.type = 182U;
    msg.request_id = 21365U;
    msg.command = 246U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.447653788005;
    tmp_msg_0.lon = 0.157866256211;
    tmp_msg_0.speed = 0.0260761080848;
    tmp_msg_0.speed_units = 231U;
    tmp_msg_0.duration = 49432U;
    tmp_msg_0.sys_a = 1345U;
    tmp_msg_0.sys_b = 54750U;
    tmp_msg_0.move_threshold = 0.72015445974;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 27752U;
    msg.info.assign("NPKNKFVOJIDHNJQZVEFIAZEVHXEHW");

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
    msg.setTimeStamp(0.347220007933);
    msg.setSource(50616U);
    msg.setSourceEntity(12U);
    msg.setDestination(29343U);
    msg.setDestinationEntity(34U);
    msg.type = 191U;
    msg.request_id = 48215U;
    msg.command = 179U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 26821U;
    tmp_msg_0.name.assign("PPYSTMZLVLKTBENZEKHMXXXOILHSYKINATXCJDHJFLAUICWQEXQVKGYOMKXEMKNOCBTFIBDQWCHQFXFMUTTNJNICOPWPSOUTAGCMQKKTLRZCAJEUBCPJQOYATZLUGEMGSESZUNBPRQDSVOQZSVZBADIIXWTYVWSWCGHZAFRIGJFVLDBPSJZMNOULBNKLFVBYCPHJRFH");
    tmp_msg_0.custom.assign("ZHHJQTBMURJAFFYMBSVKEFBMKMLCVUYY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 2419U;
    msg.info.assign("FWTVOVUROQGCXFUJPNVMXJTBWMOBQURIXNGEOUQWXMPSCIADMIKJHUSOTHWUUJTYQUAULJWLWLZZFXVYREIRMJEMDQGPKKCDSJOMDYPRKZHDRSZHEBTNIGBIW");

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
    msg.setTimeStamp(0.338812322614);
    msg.setSource(2024U);
    msg.setSourceEntity(23U);
    msg.setDestination(61105U);
    msg.setDestinationEntity(110U);
    msg.command = 102U;
    msg.entities.assign("ESRHPRNXCVDINKBQZSBRFELDLCEPQEWLGMESTKHSOTOMDQPSERYPDHJZUMCALXYVBCIAGHKTWJLGMXQTNCROHUQGORLSMRVKIVYYNBKWKMSKFMOCASMFONWDRDNAKUKUUUZFUNHSFTBWI");

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
    msg.setTimeStamp(0.985599090505);
    msg.setSource(4138U);
    msg.setSourceEntity(101U);
    msg.setDestination(44819U);
    msg.setDestinationEntity(199U);
    msg.command = 10U;
    msg.entities.assign("URNBXQWJBYUUYSLOTPVVSUFLAENSDVPNZTVIGAXWHMMKGGHIJCLIKSAEEPHSYUWKNHNMETOIPUY");

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
    msg.setTimeStamp(0.985257732576);
    msg.setSource(59319U);
    msg.setSourceEntity(158U);
    msg.setDestination(43006U);
    msg.setDestinationEntity(21U);
    msg.command = 203U;
    msg.entities.assign("DSWRSLWCGDVJBYUXELEVTAFCAGUHBLQCCEBYWXKYAXHEXPZWKMBQQVNQVPTRRZDENLKYSYOFCOPJDQCJEJKQFDCGHAPGYIHIGPFKUIDTUERNTJOFUIAJQNNUTTFEOOMSMVLFYTGDDDALNLKBWFWZOIOQMGVAPCOBJHIILCNKOYXIRBBHZXZDNFUTZMZRESGRVWGB");

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
    msg.setTimeStamp(0.257382386467);
    msg.setSource(10131U);
    msg.setSourceEntity(6U);
    msg.setDestination(14324U);
    msg.setDestinationEntity(40U);
    msg.mcount = 37U;
    msg.mnames.assign("ZCYQRKPCIHFXMCWYJKMLVLTEKWWTXNDMEHIPAAXRNKQTKXYIBUBFUFPAFSSATHISXLVCRIGNFKJQXOGCPKQMUEWJMDEVJVKGSILNQBGSMJMBZFKXHXBZQVMDCDZPUYWIVONCWS");
    msg.ecount = 119U;
    msg.enames.assign("WPXDRVRHNKIWVPFMARZFLUIFVLTSTHEJDOYEQLVPETSPHSLCVUBURIEPGATZHOASSKWFRQEFGCITNEFJNACIUCUDWZPMCIABG");
    msg.ccount = 32U;
    msg.cnames.assign("XBXSHUJMUHVHFPUHGWEVDOWRLRWIZQKPSRWXXDATRODWLWQNDJVDLYXECGLZCFHJPCDLDTWIJZKQHNZ");
    msg.last_error.assign("JKZZGIALJVQRFMUWUAMRIILCZYBIBPSOYKMLKJAXGVPUQQRXQMFIYJWDETH");
    msg.last_error_time = 0.398584616542;

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
    msg.setTimeStamp(0.121339138304);
    msg.setSource(26532U);
    msg.setSourceEntity(151U);
    msg.setDestination(51910U);
    msg.setDestinationEntity(182U);
    msg.mcount = 180U;
    msg.mnames.assign("YHYFNETXXCUUUDOMLWYZIGUBQHAMPCNFGVLMLDQTILSWWVJLOEJRWSKMFMDCJQTXAKHTEMOUWZXERPINTMMMXVOAIFIFBOTMQAWLAKUWQUPVCEEYJIAZARBZFCNYXIERDLSIPDSOCQHYQGFZBDHHJ");
    msg.ecount = 14U;
    msg.enames.assign("ASPKZLYRYOKOTJNXESPAGETLEBNXUBBPJHGIPJKQOSEYGTBAIHTEXQYGDRCFMNMCFCBVCSAPYMSKWWJNGUTUZSZTULXRZVCOWRAFWDGJIDXAWII");
    msg.ccount = 175U;
    msg.cnames.assign("DUQQAUXEUALPWLXIUPRTCJMFDMPKPQJSBJJCDWQXAJFCEBUKBSFJIOSFUEGNYTVHWNQRGVYGEODLNGCRZNFOBRTKYGYDDOVPRCFZBXDPKGIBKMTHTMGLXDZGMLUBISXWQYQJNQKYFVZTITESMDTHZSZRESWSHRVJLHOBKOHNYVTNTWMXFAKHDLZOVIOZGMYC");
    msg.last_error.assign("NSMWJODUSJJABOJPWHXHWZBXXRSIIMBAKPHZSBQNETILWQDUOXYYPKNCVPJZIEEVYUODUAGDYOGJGPORFHBNEJVNYMETKVZCNXIFYOCKAMHIDZLYTKKMPTHLRMWRASTCTRURARGRDJRHSDCPKBIFWIYXEVQOXNLVLWRPXAJADFTPTOAHSXSCLUQVLMBKFSTEIBFEPQVFDMKFUH");
    msg.last_error_time = 0.625912608799;

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
    msg.setTimeStamp(0.0453984062986);
    msg.setSource(37338U);
    msg.setSourceEntity(174U);
    msg.setDestination(32322U);
    msg.setDestinationEntity(177U);
    msg.mcount = 13U;
    msg.mnames.assign("GQMTODUCTFSTGJXLDNPPJLFSIMQYKPFJYZQKNBIIMKQBHRAEIWAKWAJYDRGYZVQPHTFKSVICEZOJKSDHLKDVBABRYNUBPFOBCLXNCAEPLRKGFPVBWHRWXJCUDKMRUWYAMZCXKSGYEQTWRYOJQJMCNGHUHFLDZRUXQXUOUJESBGHDPTZINFULVVUABXMGFXPALXHLMQTNVRJNWMLZZWESDYATROCHXQAOWOEVIEWSGZDP");
    msg.ecount = 134U;
    msg.enames.assign("AHLXIUCPPBNGZLXICBYWDIDFVGBQDEAEPVSXXITJMKOSHIZVLRCVSTBGLFGKUFCJDPBTYIYEPAUWNXFFKMZLLWMALNOMQJWQXNPDDYEJJCUSKNVCJNOWCARPGSHLRNBZRNCMFKQDKTRPTJQHOYUSUNTRSQBAWOOAKYJGIZQUHXKZAPOIOAQFYHOVEWK");
    msg.ccount = 66U;
    msg.cnames.assign("BCQSTGQUOGDVHYRLSSKQBXBQMDCZVXQVXCSITIMHUJLQKHNJTYRRVDEYWHANZQPNXFWLGOUKOKOBFTXAWDFKSIWCP");
    msg.last_error.assign("WGLVHTSFRGWBXLVWTYJAMOABFQKJJZZCUWXVHPFESHBPRBAHLEMDYSVVJRKQVQZWAFOYBODYKHCXIYRZLLIWSQDIVTQADHHSQBEDVMINWGCXQEDCXNANE");
    msg.last_error_time = 0.0634573269869;

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
    msg.setTimeStamp(0.417640551269);
    msg.setSource(6379U);
    msg.setSourceEntity(103U);
    msg.setDestination(28675U);
    msg.setDestinationEntity(74U);
    msg.mask = 113U;
    msg.max_depth = 0.066853703488;
    msg.min_altitude = 0.541240602693;
    msg.max_altitude = 0.744555396912;
    msg.min_speed = 0.373323693524;
    msg.max_speed = 0.0581640393568;
    msg.max_vrate = 0.0991424609727;
    msg.lat = 0.280027495331;
    msg.lon = 0.18270826008;
    msg.orientation = 0.7342012239;
    msg.width = 0.833972974498;
    msg.length = 0.463760135117;

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
    msg.setTimeStamp(0.998723536357);
    msg.setSource(30997U);
    msg.setSourceEntity(160U);
    msg.setDestination(10551U);
    msg.setDestinationEntity(121U);
    msg.mask = 196U;
    msg.max_depth = 0.994907004725;
    msg.min_altitude = 0.411893974279;
    msg.max_altitude = 0.97360035969;
    msg.min_speed = 0.767194056114;
    msg.max_speed = 0.851243796957;
    msg.max_vrate = 0.942446371541;
    msg.lat = 0.879036579078;
    msg.lon = 0.0282926395411;
    msg.orientation = 0.671671548668;
    msg.width = 0.613418394445;
    msg.length = 0.831093383708;

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
    msg.setTimeStamp(0.0671968216048);
    msg.setSource(14170U);
    msg.setSourceEntity(77U);
    msg.setDestination(20590U);
    msg.setDestinationEntity(104U);
    msg.mask = 218U;
    msg.max_depth = 0.480682770952;
    msg.min_altitude = 0.193662112664;
    msg.max_altitude = 0.0836357515628;
    msg.min_speed = 0.882260849416;
    msg.max_speed = 0.00200464339086;
    msg.max_vrate = 0.550993518868;
    msg.lat = 0.204024738906;
    msg.lon = 0.492544948615;
    msg.orientation = 0.330028666977;
    msg.width = 0.36396081779;
    msg.length = 0.928637606758;

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
    msg.setTimeStamp(0.261311708154);
    msg.setSource(14273U);
    msg.setSourceEntity(86U);
    msg.setDestination(37101U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.419033562565);
    msg.setSource(31672U);
    msg.setSourceEntity(132U);
    msg.setDestination(6143U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.880596955278);
    msg.setSource(16086U);
    msg.setSourceEntity(209U);
    msg.setDestination(40427U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.917432812373);
    msg.setSource(3235U);
    msg.setSourceEntity(182U);
    msg.setDestination(45848U);
    msg.setDestinationEntity(236U);
    msg.duration = 28133U;

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
    msg.setTimeStamp(0.154493038021);
    msg.setSource(24385U);
    msg.setSourceEntity(192U);
    msg.setDestination(60355U);
    msg.setDestinationEntity(3U);
    msg.duration = 16649U;

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
    msg.setTimeStamp(0.640376867792);
    msg.setSource(29179U);
    msg.setSourceEntity(122U);
    msg.setDestination(39520U);
    msg.setDestinationEntity(217U);
    msg.duration = 29297U;

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
    msg.setTimeStamp(0.734755171853);
    msg.setSource(40028U);
    msg.setSourceEntity(69U);
    msg.setDestination(9186U);
    msg.setDestinationEntity(198U);
    msg.enable = 29U;
    msg.mask = 2600012612U;
    msg.scope_ref = 2497302020U;

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
    msg.setTimeStamp(0.535641156071);
    msg.setSource(30943U);
    msg.setSourceEntity(0U);
    msg.setDestination(978U);
    msg.setDestinationEntity(57U);
    msg.enable = 98U;
    msg.mask = 4155507405U;
    msg.scope_ref = 2017200066U;

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
    msg.setTimeStamp(0.580900103081);
    msg.setSource(40183U);
    msg.setSourceEntity(33U);
    msg.setDestination(14242U);
    msg.setDestinationEntity(64U);
    msg.enable = 16U;
    msg.mask = 1291372394U;
    msg.scope_ref = 1428532448U;

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
    msg.setTimeStamp(0.623898479119);
    msg.setSource(62900U);
    msg.setSourceEntity(68U);
    msg.setDestination(39611U);
    msg.setDestinationEntity(201U);
    msg.medium = 56U;

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
    msg.setTimeStamp(0.463846732644);
    msg.setSource(27574U);
    msg.setSourceEntity(79U);
    msg.setDestination(9984U);
    msg.setDestinationEntity(121U);
    msg.medium = 63U;

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
    msg.setTimeStamp(0.269427675303);
    msg.setSource(53202U);
    msg.setSourceEntity(243U);
    msg.setDestination(44527U);
    msg.setDestinationEntity(184U);
    msg.medium = 203U;

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
    msg.setTimeStamp(0.359404711248);
    msg.setSource(60374U);
    msg.setSourceEntity(167U);
    msg.setDestination(50585U);
    msg.setDestinationEntity(164U);
    msg.value = 0.212445459991;
    msg.type = 165U;

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
    msg.setTimeStamp(0.0733331037567);
    msg.setSource(63230U);
    msg.setSourceEntity(102U);
    msg.setDestination(29983U);
    msg.setDestinationEntity(65U);
    msg.value = 0.208401659354;
    msg.type = 40U;

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
    msg.setTimeStamp(0.894938173856);
    msg.setSource(36915U);
    msg.setSourceEntity(195U);
    msg.setDestination(51819U);
    msg.setDestinationEntity(237U);
    msg.value = 0.796691022919;
    msg.type = 37U;

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
    msg.setTimeStamp(0.608903817158);
    msg.setSource(21439U);
    msg.setSourceEntity(79U);
    msg.setDestination(57881U);
    msg.setDestinationEntity(87U);
    msg.possimerr = 0.875904076792;
    msg.converg = 0.792595016902;
    msg.turbulence = 0.0116535955817;
    msg.possimmon = 196U;
    msg.commmon = 32U;
    msg.convergmon = 90U;

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
    msg.setTimeStamp(0.785319996647);
    msg.setSource(6795U);
    msg.setSourceEntity(58U);
    msg.setDestination(30400U);
    msg.setDestinationEntity(18U);
    msg.possimerr = 0.686532930988;
    msg.converg = 0.298728142973;
    msg.turbulence = 0.524396697155;
    msg.possimmon = 226U;
    msg.commmon = 134U;
    msg.convergmon = 175U;

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
    msg.setTimeStamp(0.84321341569);
    msg.setSource(51231U);
    msg.setSourceEntity(41U);
    msg.setDestination(58305U);
    msg.setDestinationEntity(44U);
    msg.possimerr = 0.0645584410592;
    msg.converg = 0.669548536044;
    msg.turbulence = 0.438075585401;
    msg.possimmon = 217U;
    msg.commmon = 52U;
    msg.convergmon = 175U;

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
    msg.setTimeStamp(0.444492968206);
    msg.setSource(29916U);
    msg.setSourceEntity(103U);
    msg.setDestination(63597U);
    msg.setDestinationEntity(120U);
    msg.autonomy = 117U;
    msg.mode.assign("NEJQJCGIEQWVCBFBXQUTAQRUTPMFCHLFOTLAXLVVQPDGDALEPCCUZHFJIHLSMEKKCNJRBIDNBEBLSJNFIJEFMKYOWGADWMQBBHOASVXMPSIUGWOLNUHLNKZQWCXVPPQIDGMQYHTRYWXRUHZGASXAWKAVTYIMSNJVWSYUOYDSVNVZTDSDJFYWGXOSHGLYN");

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
    msg.setTimeStamp(0.523256799574);
    msg.setSource(59739U);
    msg.setSourceEntity(247U);
    msg.setDestination(51345U);
    msg.setDestinationEntity(237U);
    msg.autonomy = 231U;
    msg.mode.assign("MJVXFKTOSZVCRUWFCBYTTGDJQGBPMASFSIAMFBDRXYUDKHSDIXWXTZBRVILCHNSAFGDGOHOARSXLJJGHCWLNRWCSKKCNQDJHNQIMROBDWTQ");

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
    msg.setTimeStamp(0.468557026475);
    msg.setSource(59293U);
    msg.setSourceEntity(218U);
    msg.setDestination(7199U);
    msg.setDestinationEntity(2U);
    msg.autonomy = 254U;
    msg.mode.assign("NJBTCCHZYXPONVVGNTKIXCQMFZNZHWNXSPLFVECOOTUTPBSKYTXJBPZSMUZWJOIUFLWUFHQKHSHTRKQUMJYUNTTEJTXUGOBBDYKMSYHAVNHHVCDPMMEGSJ");

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
    msg.setTimeStamp(0.0254262009039);
    msg.setSource(30750U);
    msg.setSourceEntity(113U);
    msg.setDestination(19265U);
    msg.setDestinationEntity(105U);
    msg.type = 19U;
    msg.op = 162U;
    msg.possimerr = 0.319387398895;
    msg.converg = 0.956847211984;
    msg.turbulence = 0.0695081637146;
    msg.possimmon = 104U;
    msg.commmon = 121U;
    msg.convergmon = 123U;

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
    msg.setTimeStamp(0.400187695511);
    msg.setSource(14442U);
    msg.setSourceEntity(251U);
    msg.setDestination(61129U);
    msg.setDestinationEntity(103U);
    msg.type = 74U;
    msg.op = 87U;
    msg.possimerr = 0.446877714073;
    msg.converg = 0.513273399148;
    msg.turbulence = 0.400396040315;
    msg.possimmon = 132U;
    msg.commmon = 237U;
    msg.convergmon = 155U;

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
    msg.setTimeStamp(0.778797034286);
    msg.setSource(52228U);
    msg.setSourceEntity(144U);
    msg.setDestination(43872U);
    msg.setDestinationEntity(167U);
    msg.type = 3U;
    msg.op = 78U;
    msg.possimerr = 0.525268489143;
    msg.converg = 0.622048503221;
    msg.turbulence = 0.51807340462;
    msg.possimmon = 219U;
    msg.commmon = 14U;
    msg.convergmon = 126U;

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
    msg.setTimeStamp(0.454404495941);
    msg.setSource(64343U);
    msg.setSourceEntity(48U);
    msg.setDestination(5535U);
    msg.setDestinationEntity(216U);
    msg.op = 125U;
    msg.comm_interface = 102U;
    msg.period = 36799U;
    msg.sys_dst.assign("GHTSNKZMMLHVOVDEKSLJDATTGYEGBCFJBMGUNWULQRFNLOV");

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
    msg.setTimeStamp(0.864791469109);
    msg.setSource(60801U);
    msg.setSourceEntity(7U);
    msg.setDestination(14521U);
    msg.setDestinationEntity(193U);
    msg.op = 157U;
    msg.comm_interface = 56U;
    msg.period = 35369U;
    msg.sys_dst.assign("ASSSGTMYTIZRVPGJTXBFXQRNHERHOCKPTBDOIXGPICHRFMRJFQVIDVYXSFZKENEX");

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
    msg.setTimeStamp(0.748360767377);
    msg.setSource(24809U);
    msg.setSourceEntity(55U);
    msg.setDestination(49170U);
    msg.setDestinationEntity(31U);
    msg.op = 141U;
    msg.comm_interface = 217U;
    msg.period = 54524U;
    msg.sys_dst.assign("JNQRDLSWRRCIBKUKRBQNJFMGBBKUGPYEWUNJHXRPIRLTXHILGDBFSKEUZEOZUQOCVISMRLAJMOSGZXHPHA");

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
    msg.setTimeStamp(0.133116643931);
    msg.setSource(17281U);
    msg.setSourceEntity(31U);
    msg.setDestination(48489U);
    msg.setDestinationEntity(215U);
    msg.stime = 3785278919U;
    msg.latitude = 0.529650502764;
    msg.longitude = 0.395763726692;
    msg.altitude = 22868U;
    msg.depth = 33700U;
    msg.heading = 32434U;
    msg.speed = -11504;
    msg.fuel = 20;
    msg.exec_state = 11;
    msg.plan_checksum = 23546U;

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
    msg.setTimeStamp(0.809363302529);
    msg.setSource(52834U);
    msg.setSourceEntity(42U);
    msg.setDestination(50148U);
    msg.setDestinationEntity(208U);
    msg.stime = 2652101906U;
    msg.latitude = 0.503681958134;
    msg.longitude = 0.0152268783533;
    msg.altitude = 35828U;
    msg.depth = 38089U;
    msg.heading = 45983U;
    msg.speed = 6141;
    msg.fuel = 3;
    msg.exec_state = -23;
    msg.plan_checksum = 33256U;

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
    msg.setTimeStamp(0.187660527976);
    msg.setSource(1423U);
    msg.setSourceEntity(79U);
    msg.setDestination(51250U);
    msg.setDestinationEntity(207U);
    msg.stime = 2636846305U;
    msg.latitude = 0.517954029463;
    msg.longitude = 0.256425396268;
    msg.altitude = 47870U;
    msg.depth = 49048U;
    msg.heading = 1555U;
    msg.speed = 13043;
    msg.fuel = -15;
    msg.exec_state = 13;
    msg.plan_checksum = 48117U;

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
    msg.setTimeStamp(0.753172942591);
    msg.setSource(43534U);
    msg.setSourceEntity(196U);
    msg.setDestination(48147U);
    msg.setDestinationEntity(88U);
    msg.req_id = 59807U;
    msg.comm_mean = 62U;
    msg.destination.assign("SPYACSQGWORLAUXVPEPFNDGNMLANDHXXKORJCAIRCKLRYAHKDJTGIMTOWJVNTBWGCHZNLULOHMSBAZXOQPBBIEFXZQSBALVIQYFXICEHIESYOWDJKKNFUHPBJHWFYDOVMUZYNGFIBSUTRZCUAWCCOTKPMCFHXTTNBMDDOEEXMRKUPLMJRBQGEDUPECZYRIMWKSEQ");
    msg.deadline = 0.732749188681;
    msg.range = 0.0361193563643;
    msg.data_mode = 113U;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 34U;
    tmp_msg_0.request_id = 48304U;
    tmp_msg_0.command = 60U;
    IMC::Rows tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 37996U;
    tmp_tmp_msg_0_0.lat = 0.56998437829;
    tmp_tmp_msg_0_0.lon = 0.944962908582;
    tmp_tmp_msg_0_0.z = 0.593537449604;
    tmp_tmp_msg_0_0.z_units = 18U;
    tmp_tmp_msg_0_0.speed = 0.221009404363;
    tmp_tmp_msg_0_0.speed_units = 26U;
    tmp_tmp_msg_0_0.bearing = 0.392058744721;
    tmp_tmp_msg_0_0.cross_angle = 0.909462859632;
    tmp_tmp_msg_0_0.width = 0.428844106323;
    tmp_tmp_msg_0_0.length = 0.0129791652592;
    tmp_tmp_msg_0_0.hstep = 0.934129264289;
    tmp_tmp_msg_0_0.coff = 95U;
    tmp_tmp_msg_0_0.alternation = 53U;
    tmp_tmp_msg_0_0.flags = 109U;
    tmp_tmp_msg_0_0.custom.assign("BRAPQUFSMOEFSKWYIUXZCARUMCDXLFQOIJDBNHRDISOVSYBSPJVBRDPVBHTTYFMGLXAQVUXMVFHBXAITVEPBMENIGOWNEBCWKQNHADQKLYKYLPPLPFFNNFJZNQLUYUMJDIOHWSDRBSIQYCVOKURMOAAZDHW");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 15266U;
    tmp_msg_0.info.assign("WEJVNDIYPBLGKYXCDSXHCXXPJAGUJASIRRREOSTYSZVZOHZPBPOYBJRZNEIKEKCHJMCVIXWLVABCYTWRGLOXVNHHOEGLXLCFZPTMDAGDCFDPHBWUUWJ");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XVOJNUEDWSEZXPSIOVKVCCYTNGGGFFPXQMJVFPLPRDCIPSANLWFDMDCEHWIQVZAEGPQZUOJKSCAAIZHIREISPGVTJHQRLMUBYSLCOXQMJZRBRUXLMELNWCTNCTYDATTNXUZPNOBBJODYDZERUWWGSRAKKIONQSLGRYVUWJZTBAVSLMMKRQWBCJXLWU");
    const char tmp_msg_1[] = {53, -3, -18, -23, -70, 11, 106, 11, 90, 45, 25, 30, -100, -67, -78, -79, -35, 5, -94, -38, -74, -124, 101, 55, 61, -80, 51, 63, -91, 30, 121, 81, 45, -49, 70, 42, 102, -107, -53, -101, -83, -82, 4, -95, 101, 20, 63, 124, -93, -95, -108, 43, -27, 81, -41, -20, -35, -64, -28, 105, -18, -13, 81, 54, -80, -4, 84, 109, -120, -120, -78, 33, -20, 52, -41, -58, 123, -72, 5, 98, -128, 49, -79, 106, -22, 108, -33, -106, -25, 14, -29, -22, 38, -38, 93, 30, 2, 122, -12, 105, 67, -123, 56, -23, -21, 33, 34, -55, 100, -127, -111, -82, 125, 69, -38, 93, -55, -28, -95, -22, -10, -120, -22, -90, -126, 0, -86, 7, 39, -12, 82, -29, -14, 24, 113, 117, 17, 83, -2, 61, 65, 1, -81, 75, 24, 107, -86};
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
    msg.setTimeStamp(0.421030516234);
    msg.setSource(56512U);
    msg.setSourceEntity(43U);
    msg.setDestination(29851U);
    msg.setDestinationEntity(213U);
    msg.req_id = 11150U;
    msg.comm_mean = 92U;
    msg.destination.assign("XVQVEBUSDGWTBYRNDZWCKNLRWVJEGMJYEACJUTKUKSLMCAGYTADGPSPOHXJUZFVRJTLKDARHLDDJOKUQGKWDENGPZBVZMIFQZGKCMQTFCICAMEFAJIYGLFSSXYISVFZEOULLDHFAHPDRHPELUNYTRBGCHMFXTBBMWEXYQXTSXSRNOIPZTFLNIQBWHNNALJVJAOZBZEPYPAOCTCKIRHZXWIOJRQRBBH");
    msg.deadline = 0.537604138963;
    msg.range = 0.132480052503;
    msg.data_mode = 156U;
    IMC::GpsNavData tmp_msg_0;
    tmp_msg_0.itow = 552079953U;
    tmp_msg_0.lat = 0.00822333752412;
    tmp_msg_0.lon = 0.756961834903;
    tmp_msg_0.height_ell = 0.217241587175;
    tmp_msg_0.height_sea = 0.696892174807;
    tmp_msg_0.hacc = 0.64664569353;
    tmp_msg_0.vacc = 0.520037158134;
    tmp_msg_0.vel_n = 0.633836371428;
    tmp_msg_0.vel_e = 0.967765039626;
    tmp_msg_0.vel_d = 0.351724376661;
    tmp_msg_0.speed = 0.183553084467;
    tmp_msg_0.gspeed = 0.615185703799;
    tmp_msg_0.heading = 0.328971953959;
    tmp_msg_0.sacc = 0.856135345977;
    tmp_msg_0.cacc = 0.307059108642;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ZSIMRUWNLHAZJHLQFRHNOLKDXFNRWLKYMLWARNXALCBSDZDRZJSIZPKWYGPHYGKXDJHDVXOPZBEUSEJNFTACJJFAVEJUVQTNNLUMPQNRVYVKEBIDEZEHXKMXGCA");
    const char tmp_msg_1[] = {-72, -81, -90, -83, 30, -3, -40, 8, -28, -75, 121, -16, -73, 10, 37, 117, 6, 72, -44, -108, -7, 10, -30, -112, 92, -17, -19, -107, -43, 67, -126, 44, -123, 116, -14, 82, -122, 32, 124, -63, -75, -23, -36, 42, -16, 8, -65, 3, 22, 45, -94, -28, -92, -111, -14, -62, 119, -109, -78, 52, 52, 15, 8, -8, -56, 6, 125, 116, 118, 22, -41, 55, 53, 32, -103, 84, 80, -3, 118, -3, -62, 37, 62, -111, 61, 116, 124, 65, 44, 29, -30, -112, 105, -24, 28, -12, 118, -52, -65, 120, 98, 56, 121, -117, 62, -23, -66, 38, -115, 29, -39, 19, -121, 24, 85, -38, -3, 15, 72, -123, -53, 41, -61, -96, -77, 30, 113, 73, -45, 79, 119, 81, -128, 78, 26, -81, -14, 78, -71, 33, 104, -16, 35, 63, -97, 117, -7, -120, -124, 13};
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
    msg.setTimeStamp(0.318049430982);
    msg.setSource(41604U);
    msg.setSourceEntity(205U);
    msg.setDestination(64207U);
    msg.setDestinationEntity(175U);
    msg.req_id = 38389U;
    msg.comm_mean = 86U;
    msg.destination.assign("YAABCOSNEPWCQCKMNHXFCJDWRGJTRHRIXBJBLJYHHWOALAVKKZILIWSLOXZIOQQLCEEFVERSNCVFWLBVSDPLOIJGMYKTZNVJSUEGAPTETUANZGXWQOTHVBZJTQDRYXWQDZKOPISKBFVUMBAATFMXGOWBKYINLCPBHYRVLMPZGIAMSDIXRTMFGPCEWQZDNPZNMHOSBXDKDFYSREGPQLCTUYF");
    msg.deadline = 0.25884374556;
    msg.range = 0.617910351627;
    msg.data_mode = 88U;
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.625389266063;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GYVGTYGRQARAEYDOPYONRREGAUPJGVGOUUVWTBMSMPMAKKWTLHYJUBZEAVLRXJWDZDNLSDELFHGHTRTJVPQKSAXHDJXTPMAMIRCSZWTZXZCQ");
    const char tmp_msg_1[] = {-39, 71, -20, 21, -101, 126, 41, -45, 113, 17, 11, -70, 113, 23, -78, -21, -106, 49, 8, 101, 21, 85, 68, -58, -28, 13, 2, -119, 55, -46, 19, 72, -42, 42, 7, -70, -6, 22, 42, -76, 1, 22, -10, -104, 17, 43, -9, -51, -31, -102, 33, -120, 65, 59, -44, 115, -8, -19, 35, 55, -56, -31, -49, 14, 79, 117, -91, -85, 30, -80, -53, -59, -28, -36, 55, -128, 27, 31, -10, 112, 34, 96, 63, -79, -34, -81, -41, 119, -79, -20, -27, 22, -91, 56, -6, 1, 88, -48, 33, 113, 57, -26, 20, -72, -66, -11, 27, -66, -99, 108, -110, -50, 62, 67, -125, 69, 41, -67, 14, -4, -98, -84, 120, 34, 22, -126, -37, -78, -79, 16, -25, 12, -67, -113, -51, -102, -16, -115, -31, -59, -61, 71, 51, 76, 108, -102, 72};
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
    msg.setTimeStamp(0.82620805867);
    msg.setSource(63705U);
    msg.setSourceEntity(99U);
    msg.setDestination(21367U);
    msg.setDestinationEntity(187U);
    msg.req_id = 17300U;
    msg.status = 233U;
    msg.range = 0.49033963286;
    msg.info.assign("KBRMVJHADJUEGZJLEXCKKJKCAJTEDTKEDZIANLEEHXWZZDGBUHINSYMYBFOVHHCCVSRZKFNSPVMIWAISMUPAUGQETRECBFVHUPJOXLBUVHGXQOPWNCMJBZNTCDGVMTXBVEKBMAXHPUQAMRQ");

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
    msg.setTimeStamp(0.295071920131);
    msg.setSource(2333U);
    msg.setSourceEntity(117U);
    msg.setDestination(32748U);
    msg.setDestinationEntity(167U);
    msg.req_id = 20330U;
    msg.status = 221U;
    msg.range = 0.669022067198;
    msg.info.assign("KLMVRNCNUZLAEMEWEFAFSPGVJBDIHFVKRYRJEAWGLYWJETUUAKPFMNAFBXQFBDYOXYWIJJGTHSCDIKJEYZUFURHOBHNVWMKMKRNTYSLQRMPPBODSJAMGOLOHMTBYINPVZSWHCFTXGDDXTKXUKCNVSWQHRKCLYHVEDJGLHSQTMRGZPZWVDSLZUXBYTFGSQACAFQKGUDTXIXVPRLIUPZJDJBHUWOZISQIVPGYQBNIOEXRZCONQAWOXNIBZEOP");

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
    msg.setTimeStamp(0.81390713999);
    msg.setSource(34233U);
    msg.setSourceEntity(147U);
    msg.setDestination(23925U);
    msg.setDestinationEntity(12U);
    msg.req_id = 49340U;
    msg.status = 189U;
    msg.range = 0.346279021509;
    msg.info.assign("WXQHDOVNYDROLCNOVETOEIPZGOIHVMKRLIDLHJWBPHCADUDINRLJZDWQZFLNKWFKJMPPBFETKCQSMSXALEVJXFYXNJKZGIMLLRMIV");

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
    msg.setTimeStamp(0.367368363339);
    msg.setSource(53034U);
    msg.setSourceEntity(210U);
    msg.setDestination(38031U);
    msg.setDestinationEntity(195U);
    msg.req_id = 2107U;
    msg.destination.assign("NAMLDZLSOYRVUGYMTVGQYBKTACYFKIIRDXXRZPWDBMIRLXWBNGCQNZDCWENHXSZUCPKPQTKJWHUPULOCCQIVXJWODKQSLVLJ");
    msg.timeout = 0.995424804643;
    msg.sms_text.assign("GFKWZGHKNCWMIXUXPUQVABQMGALWECEWDEEHPQSYXQVYSOKALYEWJXDSVZXJZMDJINSFJBSSBVXMDNOQPVLJGYJADNRJWEGXNGOTGUFMDORJQRVZYAPMSKFCSBHOBHPBBWQTMKNZOGIDZRKSEHAZPETGNILDTRATKRULDEOLLMIMGIVJSTBYKPFNXHVIYIYUPCUHBVLTKVRRFCCUYQTYNQZONLPDUAXHEMHTWUBCRIOQPHWCIWKUXCCFTRFZFZ");

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
    msg.setTimeStamp(0.920037804885);
    msg.setSource(61353U);
    msg.setSourceEntity(60U);
    msg.setDestination(9992U);
    msg.setDestinationEntity(96U);
    msg.req_id = 1162U;
    msg.destination.assign("LBLTMPKLAOUONCGUHZNXIEHXVPNODHXCSJSYNZRJOIARHYWWRGQTIJNGRXIQRKTZLADPFXWHFVAXREKBVYTKLQKVQOFHDFOWWSPKJXLFHHBGORXJNUZCKKQUYWUYHJAQBPBTEQSMZCRJBJNVYSCPEWBCJLYTYOSVALQZMPWAMVMGCSQINTSTREYHKDGZYWEBSXJCFMLILZCFXUGMDUEVKNAUEAMUTFIE");
    msg.timeout = 0.478141131687;
    msg.sms_text.assign("YKPOMMDFYCTFCPLGBAEGSEYXSENFGSWIWDMLAWZXTALNSAIAVPSCUGEBTWZUMUTXYJJHCCOPOVKPQRXRHNLQNKWDKGNPQKOJIOCPTTMXBHOAQRWBJHCBIUVBFUVJKRHEYJEMGDGRDYIQVCXSDWFHVZXVAQNBRJUNZAWULIFZYTMABKSDMNOYCPSRZSJHVQMXFOMQHZLGUFQKEXTFKHJTNWGIOBG");

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
    msg.setTimeStamp(0.561385599984);
    msg.setSource(37875U);
    msg.setSourceEntity(58U);
    msg.setDestination(18932U);
    msg.setDestinationEntity(175U);
    msg.req_id = 2893U;
    msg.destination.assign("UOHTWPEDKQUWCLZNHFBPSIVWLDKJRXCNCHOEFQZBFVZIUXIQEDUIKIMCGTFNFRUJAMFNYOWZVKJVGERSIYMPJADBJJNXKYGAXSTBOYHSKYCAAXVQAKBWCEBMDFVPLONPCSWMLHRARHNYWIVGETLUXVQQHDUADLQAZGQYDBPTMPNTBLCRNPWYXZRPFZYBVYIMXRMOCLHOCSLZKEOSRMEIDQ");
    msg.timeout = 0.676948289689;
    msg.sms_text.assign("ZEPXPMYJPLVAQDMPBNQNXLRMZJXLYBGK");

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
    msg.setTimeStamp(0.970620152442);
    msg.setSource(57930U);
    msg.setSourceEntity(158U);
    msg.setDestination(64926U);
    msg.setDestinationEntity(252U);
    msg.req_id = 13600U;
    msg.status = 142U;
    msg.info.assign("HSMZENBQGKZDFLSUNVHTSPEYFHWACCWHXENIWCBOMDNAVBQBYUQBAPXJAFZRRNLRUGTIDUTKXAGHESWTOEDZQYJYEEFIGSGGPUZKWGLNODBBGGUFKKCVOXLIYEUSEOZAYPCBVFROFTTWZHCIUPOMHSBSJWOQQNIQTHWRCTDZIMDVSZMSFUKVRLMPMAXJVJKCRPCJPYVYORM");

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
    msg.setTimeStamp(0.0635251198661);
    msg.setSource(22455U);
    msg.setSourceEntity(153U);
    msg.setDestination(48885U);
    msg.setDestinationEntity(65U);
    msg.req_id = 6054U;
    msg.status = 4U;
    msg.info.assign("ROOSYCNIXIKFTIEKBFOUDDASCJKWMXFADNFWHPAAVBAVLTKRTESISEKKBYBCXTJHBLZQEOCWGU");

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
    msg.setTimeStamp(0.0370372061059);
    msg.setSource(2228U);
    msg.setSourceEntity(209U);
    msg.setDestination(12176U);
    msg.setDestinationEntity(159U);
    msg.req_id = 46348U;
    msg.status = 59U;
    msg.info.assign("CWNWVVVZYBICOZJVRQOJDRFYCWNYJS");

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
    msg.setTimeStamp(0.0835886161717);
    msg.setSource(8054U);
    msg.setSourceEntity(31U);
    msg.setDestination(60243U);
    msg.setDestinationEntity(156U);
    msg.state = 148U;

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
    msg.setTimeStamp(0.941428340741);
    msg.setSource(60593U);
    msg.setSourceEntity(192U);
    msg.setDestination(23471U);
    msg.setDestinationEntity(80U);
    msg.state = 86U;

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
    msg.setTimeStamp(0.367748465794);
    msg.setSource(35771U);
    msg.setSourceEntity(168U);
    msg.setDestination(23044U);
    msg.setDestinationEntity(62U);
    msg.state = 13U;

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
    msg.setTimeStamp(0.678230710168);
    msg.setSource(63001U);
    msg.setSourceEntity(237U);
    msg.setDestination(32337U);
    msg.setDestinationEntity(120U);
    msg.state = 24U;

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
    msg.setTimeStamp(0.670689692349);
    msg.setSource(55104U);
    msg.setSourceEntity(161U);
    msg.setDestination(44641U);
    msg.setDestinationEntity(168U);
    msg.state = 229U;

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
    msg.setTimeStamp(0.589369703042);
    msg.setSource(64815U);
    msg.setSourceEntity(41U);
    msg.setDestination(53719U);
    msg.setDestinationEntity(39U);
    msg.state = 79U;

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
    msg.setTimeStamp(0.889814871491);
    msg.setSource(57485U);
    msg.setSourceEntity(135U);
    msg.setDestination(18871U);
    msg.setDestinationEntity(117U);
    msg.req_id = 16256U;
    msg.destination.assign("WSNRHALRZLVPKGBQYDHVBNXIZOPMZKRWEEPTCTYMKQTWMKXZHNVPIOLDCEWRLEYBYABQT");
    msg.timeout = 0.927207805088;
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 1177U;
    tmp_msg_0.duration = 1562U;
    tmp_msg_0.speed = 0.459885138027;
    tmp_msg_0.speed_units = 221U;
    tmp_msg_0.x = 0.139909895099;
    tmp_msg_0.y = 0.405900054985;
    tmp_msg_0.z = 0.0669126324991;
    tmp_msg_0.z_units = 102U;
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
    msg.setTimeStamp(0.733204714416);
    msg.setSource(16901U);
    msg.setSourceEntity(135U);
    msg.setDestination(59035U);
    msg.setDestinationEntity(245U);
    msg.req_id = 35703U;
    msg.destination.assign("OCNIBFJNYFKCGRUGVRBDISNPUNTMPSHUGBRJRIDLKPZVAIXHWZVPZNAYNOJCTTZHPMFAPUSREKELWFDYZNGLHLZWUGJPHSLQXFEGGDAUHQDKYPMNSIRAJQMKEFVLEZUDKTJDWBMZEAIHSLLBBZONRAXYTLIOHMIKBJSMWCTRJYOREZYWWKXXVPGPDCVVMVJUHSIXXGICSOXLGQQDCYF");
    msg.timeout = 0.5305009554;
    IMC::UsblFixExtended tmp_msg_0;
    tmp_msg_0.target.assign("TDENOSCBYOCPTRGHJJNUQNAHXAWHSUDJEGCDJZCPZAKRFRAFGHRYARDRCYBQKOLMPMFCHAOFHDHXPRYXNLBSYGYYXBWQEEGLQWTXKKJSQCGOTIZORQBDKPFSKUVNJIVXGZGWFABCNFQZGMIVMQILHCVVZTPOJYFNFSOZKAALXTVFEVIWUPMQBSOWHHP");
    tmp_msg_0.lat = 0.891553461746;
    tmp_msg_0.lon = 0.295727476684;
    tmp_msg_0.z_units = 198U;
    tmp_msg_0.z = 0.37823365124;
    tmp_msg_0.accuracy = 0.796401513334;
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
    msg.setTimeStamp(0.767135110055);
    msg.setSource(19991U);
    msg.setSourceEntity(153U);
    msg.setDestination(17011U);
    msg.setDestinationEntity(116U);
    msg.req_id = 18451U;
    msg.destination.assign("TTXTRCWSGCEEMERKMTYQLKPGRFLWONZHTYNLIESQFHIGKAMHZXZODAMEHOFZGXBEQQQCKUBAVQKIPDC");
    msg.timeout = 0.258040442273;
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.420880578345;
    tmp_msg_0.temperature = 0.600314188438;
    tmp_msg_0.depth = 0.906005291428;
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
    msg.setTimeStamp(0.903488932571);
    msg.setSource(27964U);
    msg.setSourceEntity(176U);
    msg.setDestination(61410U);
    msg.setDestinationEntity(136U);
    msg.req_id = 50198U;
    msg.status = 90U;
    msg.info.assign("NWDCTJHMWQXYYLUVCAEWGZHNQCMYCRGSFLCSMTUPMHYVPRIDCFXKIMNZWYYPIWWJEBTWHYHGFXVNBTHSLTSACLHGEAFGUOEFJXCQWJNDKEGUUPGROZMGQRVKZJAAPXUASOVBXTDAIISELAK");

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
    msg.setTimeStamp(0.210089017004);
    msg.setSource(48575U);
    msg.setSourceEntity(96U);
    msg.setDestination(6073U);
    msg.setDestinationEntity(78U);
    msg.req_id = 48896U;
    msg.status = 4U;
    msg.info.assign("KUYWRTQTCXBXWOQYFDDCLVUNPCREPZINLVUAVDUAKREZFSJXXKMCDMMPUMKENGF");

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
    msg.setTimeStamp(0.284153434395);
    msg.setSource(11859U);
    msg.setSourceEntity(153U);
    msg.setDestination(31720U);
    msg.setDestinationEntity(81U);
    msg.req_id = 55818U;
    msg.status = 11U;
    msg.info.assign("XQROHYVYRVCDGEDZPJRXZGGCMFBUDMZJUOASDNJMIYOVXVHZQABINZWHKCLTVJHFALHTYSYFRBSFGBGKTUCNZADMPGSKDYQQXHFFIQTBYSTEYIJWMFHLOWUOQQODKNCNLBWJWCXETLQTEPJPPAIRZZBWFVILWXIICDKMXCSZPBXRMLXKUUUDGRTQCJPPAHREYSJPEZFUUFIVNNYLAWBAKDESLHWOMVAOKKEALNR");

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
    msg.setTimeStamp(0.843650027334);
    msg.setSource(6686U);
    msg.setSourceEntity(180U);
    msg.setDestination(29051U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.102956183517);
    msg.setSource(36814U);
    msg.setSourceEntity(189U);
    msg.setDestination(50585U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.779068513148);
    msg.setSource(62338U);
    msg.setSourceEntity(94U);
    msg.setDestination(38996U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.816275633166);
    msg.setSource(13107U);
    msg.setSourceEntity(88U);
    msg.setDestination(60533U);
    msg.setDestinationEntity(96U);
    msg.plan_id.assign("AWXLLTBEFDQXSAYZGEGOOFDPAKHYFALMBCKECUYDNYZTETPRTDFGFVIQGWBKXCN");
    msg.description.assign("PITFEJEPRCXJFOJRQVVBGPULRZVBFLURLWANZANWTKYKBCHDSTYDCRPULSVHHGVDOJZXYRGIEXZZGSMECBAOUTEPHVWYHOGFDOWAQNWIISDYCFERTQYTEUPT");
    msg.vnamespace.assign("LUGJYVRKXAFQTTRCYMWTGLDQQRNTYWDIADESTPJZKAYLJCXEFBLAMQFOXKNCUPDKRDZOEKTUKMJSERWSNYMFVBFEXFZWFQCJVYNSTPSOCOGGLKTPHBHUCGPPCWMWNROOZUISGMHHGZVQZPLJPHLHHBBXUAVAIGQD");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("RHPYWFBZCPVMWNQTDYYKLCEYPHNVBSSUCYNQTPVDQOWIESEBNRHXKQVGGTKCIBZQJODZYTUBVDJOSGVFMAZEAHFNWIGVFCAIDLKEGSFCMLRJHREGBELILKTXGXJJQISJYMXISZPFMM");
    tmp_msg_0.value.assign("QRLJOCXLVUADORXEVWEBTFZKZINYGMRRQGZPSNATCSJKBDDWJKXVQMKCESIJLRTTKCVDDHTOXPUNGDGZYMWQAVWOVOSOAMYPFUBDYTBUGQO");
    tmp_msg_0.type = 146U;
    tmp_msg_0.access = 254U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("SBAWXDINVZOZWTJYBWECUIOOEJZQKGUKHNGUKJEAZUTVRYIXPIBQQLDUNDCHLAOYAXHAAFPCMXLJSUJDSBBHUZRM");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("OODLVUDJDUUPOEGQLDOFEVPWYGKOATLKTJQVRRJMVNECUSMLKSIJAWBIMCSLIRMEXHNXNYOVPDSLHFCEBKUCKZIABSDXRISHNPOAGVYAEGGTMFZCCOZZOTHZEPLTCFGWUBFDYWPTYZHDNVYKDMIQNCZHJSMVVNYRRXGTQHPQAKGRQXIEUEWBKJJWFLZGLPGXTDUWZORBSRYWKRAWAIVBKJ");
    tmp_msg_1.dest_man.assign("UTJHTDJULYUXCHXBTAWEJGCEZWGPNIMPKULILSRG");
    tmp_msg_1.conditions.assign("DHXSKAQRPTJMGCXPVOJDIIFONFBGSLLHIUEOWDBPTNHDATMULNWTWIORVTGCZPEILBRZGQZURYGSBMEJICVCLFAOHMNLNZNOZSILFVSQLBTLIKVBYQVHXAROWBGMCJNYAGUVUAQKPESUCYTDWHOEZDQRZFYVFXWGZXACRBQVFDEPCMOXJ");
    msg.transitions.push_back(tmp_msg_1);
    IMC::EntityInfo tmp_msg_2;
    tmp_msg_2.id = 76U;
    tmp_msg_2.label.assign("LUZHYMSRXPGKZELFGGNLYIKBLRSWFPXXXXQSMHHAPSQVZQDBIYKGXVTLVUPQWXEBHMULOJH");
    tmp_msg_2.component.assign("JVIUAZQCRETIURVHHJYNMDBKWSLBZOFYLLZZLSTAWETYFMMXA");
    tmp_msg_2.act_time = 38334U;
    tmp_msg_2.deact_time = 10935U;
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
    msg.setTimeStamp(0.140568147916);
    msg.setSource(19624U);
    msg.setSourceEntity(198U);
    msg.setDestination(4971U);
    msg.setDestinationEntity(58U);
    msg.plan_id.assign("WROZLBAVIXKYYJHMJKZDZQUBSYDSQMBORQSBSGYON");
    msg.description.assign("NGHLTKGEFURULXQQKZSVWCBKOFPAFRKXGMKJMQJGAUATKKO");
    msg.vnamespace.assign("MJVLUKDJHOUPNYGEHMRCRNREMOTJACGNFSDOJCRKTUKQKUA");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ULFZFZFTZBIAJKOPAZQLZNFLXLCMEEWVYGDQHNEKDFYMEAHMTXPDKNIEOHGYBCWUZXTJPGJKAQGGVWONPJWPVVNUSOIIWHYKQADTVMYYUNFCFGFEBUIEIEYYLPCIQPPAHBQMQPHIRTWICJXNNWGNHKHZDRKYRCBLAVOJSSFXJSRVOBCQAYBGDTDZHEROCRBWRTKTP");
    tmp_msg_0.value.assign("DFQYNCVQOXOTQYXZKLHNXIMXTHFVBEOARCIERBGRZJBQNJEPNUHECPHWJVBFEGONIYLQUT");
    tmp_msg_0.type = 100U;
    tmp_msg_0.access = 197U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("CBOQVBCMWNEMTEATLQWKLYZXJFZCSFJDPRGNQQNBELKKPCSDVEADHOQGELBYWMSOZKHFZCXNAFSNFORLJHGEYXRWQBUUOUDMZWMKJAUEUODQXGTAOTVFYWAYCVEMZXUHRSONPGBWAINGPIINYRPILATCTU");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("PFYLTXJCVPYMSIUACJVIQBNVLOUKEVGYEADLFVRQXJMHAEEWQHFHSV");
    IMC::Magnetometer tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 60142U;
    tmp_tmp_msg_1_0.lat = 0.925675055123;
    tmp_tmp_msg_1_0.lon = 0.195818384506;
    tmp_tmp_msg_1_0.z = 0.582292907784;
    tmp_tmp_msg_1_0.z_units = 64U;
    tmp_tmp_msg_1_0.speed = 0.278705009661;
    tmp_tmp_msg_1_0.speed_units = 111U;
    tmp_tmp_msg_1_0.bearing = 0.0984275416091;
    tmp_tmp_msg_1_0.width = 0.849778587726;
    tmp_tmp_msg_1_0.direction = 57U;
    tmp_tmp_msg_1_0.custom.assign("KVUBQKTNGFIJPVUSYTATERCTRUWSEUKGPDNVGJFPRHMFWOWWRMZYFIMMIQAVOZPRDINIWIHCAJPHRVHQOIUFDMDLVDNMZKGPEGFILKBXBPOEKH");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Aborted tmp_tmp_msg_1_1;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("EOHGBTHRMBVNZDXXYXINFZJCCPCYYHERRNIHPXAVYPIYOOGWIDBZKJVNAMUDGNTSTMQSPZRDFAMKPPYOINSRMJESKFJWOUHXSKZWQVEKVIOYJYNEAFCFMRK");
    tmp_msg_2.dest_man.assign("VHDMWURVIUIHFMFGFWSGZLPVMKIBYIKNCQRFNCLWRBPM");
    tmp_msg_2.conditions.assign("YYCGXPSBBLEKJZKVGXIMQWXEPOAAMTTNXVXRXUSNVFEUDAENKYEZNHKTHBTWKDHSZJRSGBMTUKXHEMOFPZTLILPWAHBYDOQOJCIALVNZNSPIIQOKXUGIMITLAJWZBFWLGCOHDUHCNHVYZDQADZUAUJQBYQVMLSRSQLPYUYWDCJFOGRAWUVLGCOTWIQXLJRUJIOSKMFREBHAKCYFFVDJGFZRPVGJKWRBRTCNPEDMFFXWNYTBHDVCQOCEGS");
    msg.transitions.push_back(tmp_msg_2);
    IMC::UsblModem tmp_msg_3;
    tmp_msg_3.name.assign("VUYJJAJRRUSVAZBFCVSWVDWLHOZIQQXMCHTDKASNBDACCRBUTUKLYGGDAJHUGBTGPVSMXHRGYNLOLQGKJMJHGWTFOKSKFAAPNTWEJHGSLSQVVMYHNFILXRRONWJCXJEMETWDXDC");
    tmp_msg_3.lat = 0.773852011613;
    tmp_msg_3.lon = 0.208368816985;
    tmp_msg_3.z = 0.871935350523;
    tmp_msg_3.z_units = 53U;
    msg.start_actions.push_back(tmp_msg_3);
    IMC::ReportControl tmp_msg_4;
    tmp_msg_4.op = 191U;
    tmp_msg_4.comm_interface = 86U;
    tmp_msg_4.period = 210U;
    tmp_msg_4.sys_dst.assign("VROKYZZPLRM");
    msg.end_actions.push_back(tmp_msg_4);

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
    msg.setTimeStamp(0.855097132288);
    msg.setSource(5238U);
    msg.setSourceEntity(141U);
    msg.setDestination(39133U);
    msg.setDestinationEntity(94U);
    msg.plan_id.assign("IFYJBLLAMCUOPIIZOQQHLYQFTWFDDSKDPXXXQGQEYGJDVTWWBRIKXGCTUPGVWHHNSJJWQHAPNHJUUABVUAEBAYEBYCOCBZYMKUXHFLPGKQHEMRVGZSCMSWDDTUFTWHECORNDSILZVCRRZKALOVMZEAVYHVYMBCENSLZKXGYBRNLHPRIKKRSEASEXGJSWPDOISWORJUXAZXMQIFNXPJZOTVJGTDIFNNDVMUBM");
    msg.description.assign("UEEGLYJQFCJNRQCLTXGRVSLYUVHEWHMZBQPDMMTJQANYEGFRTCOTPRFCIFNMKZJWAZPPSRSIZVBHGDVKQKHCNUGMBEVVWEEGMAPAXEHCDLXPABODLVOGTIMTCOMTLYFFLODGPSSNRKOOIXSJCQZZJTWHXXYHZBAYHYGIVTQEXUUSHJQMKZNPBF");
    msg.vnamespace.assign("AIYADKLMTAPOEOHUWVKUPXBBQAYZRUXFLGGVMKVBQBFFNTNRVOHIROMMBPDJJWHCQSEXSLSIPWGSOKGEXSWCPHBTVRPVQLSLEGGHRTVWZWTXIFHEQKSNNXWMWEYSURGECWKDDZUNORJIVEPJFMSQLGINJDCDBLKQHBUKDNYPMIGNMEZQCZRHFDMCOJOBTYOAAXEAJTCFXNZULHVYJQDJYYYCTSJ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("BEFVFETPBODLPFYHNVTCRKKVJTDSZQIHWNUQJPEFMPZZQGSGMRQKXFBYCLYXOBFXAAINOZNMSWKJEYBBQJFLWDINBHUEYZPVNTGLUMPCNYWDTBXLWKWVQGLZJKHZYESTUEGOICFPMRMMARUCBSVOIVLOQZ");
    tmp_msg_0.value.assign("NSJVGFNMQRXMUOBOUQY");
    tmp_msg_0.type = 4U;
    tmp_msg_0.access = 206U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("QVWVOYPFVPMHCADGYKFCHOLATYJVEMGBABOSCTKDINQTGTZWWRPXVEZAKBOHSUHTZI");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("XKQMXZQPUOTJJBQYFZOWDTFEVSNDFGKZ");
    IMC::StationKeeping tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.22765217092;
    tmp_tmp_msg_1_0.lon = 0.529681972282;
    tmp_tmp_msg_1_0.z = 0.832390479361;
    tmp_tmp_msg_1_0.z_units = 6U;
    tmp_tmp_msg_1_0.radius = 0.173180375459;
    tmp_tmp_msg_1_0.duration = 27395U;
    tmp_tmp_msg_1_0.speed = 0.109369963491;
    tmp_tmp_msg_1_0.speed_units = 5U;
    tmp_tmp_msg_1_0.custom.assign("VHJOBMDIFQKPXCCSQMUDXWZQSPMMLT");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("NSNHJMKGRJDPRHGCMSXIRVLGZCKMJUPEGXLZWRAFICWYPBLMNDGMAYTIFMPHNOFMYFDCSHWHWZUCZ");
    tmp_msg_2.dest_man.assign("XSSGBIVNMENNANIWGODORLCKYVKKWTOFCJBHCLJVPQWRAVFJIGZELZADFSYUIMXAUDKUVGWRHCSPWQTXQENQYXJIQKKQJBNVWNMMOKYRNCFDNJCHDHAVPEYGPPBTTMGGKXTMYQHPYULZLBGRQHKXACUBOSTPSBOYZGLYFZJOQEFHTAHSBVWVEOBJCFXFWRXMWXSDFBIRPIEXRFUUNTPDLOJUDUWRREYESSQ");
    tmp_msg_2.conditions.assign("RQVUPASEXNEYBVROVOHAWLKEINCXZVUJTCGXKEIDYBGTAKNMWVNVYNNQXOWVYQOGVKRQBWJYUJOKAHDQJFEEDXZBWSMICIUCHWRMSXTRDXCLSOTPUQZFOSSBHBCAPZVJDNUMOFATDHETAIEPMFANKLHZLGCCDNQLMFUARJZYHFVPKUWGXTBJNJJBWSKLIZRGLATKSBQBPDEXQGRLSPIYYMFRD");
    msg.transitions.push_back(tmp_msg_2);
    IMC::RowsCoverage tmp_msg_3;
    tmp_msg_3.lat = 0.038337930923;
    tmp_msg_3.lon = 0.000213278125985;
    tmp_msg_3.z = 0.5358755089;
    tmp_msg_3.z_units = 56U;
    tmp_msg_3.speed = 0.0798003433416;
    tmp_msg_3.speed_units = 24U;
    tmp_msg_3.bearing = 0.681814824763;
    tmp_msg_3.cross_angle = 0.292198505288;
    tmp_msg_3.width = 0.897036049132;
    tmp_msg_3.length = 0.191337445276;
    tmp_msg_3.coff = 77U;
    tmp_msg_3.angaperture = 0.778633926107;
    tmp_msg_3.range = 16775U;
    tmp_msg_3.overlap = 109U;
    tmp_msg_3.flags = 127U;
    tmp_msg_3.custom.assign("HFYRWWTLHARTTBMPFUSHLIQMPSMTSXAMSJCRDVBKMJMVSZHIIIJADEBSXCZRKQYRAGEDVOPDPWXIETYPSOAEOUZSXBKCNCKWWJGB");
    msg.start_actions.push_back(tmp_msg_3);
    IMC::TrexAttribute tmp_msg_4;
    tmp_msg_4.name.assign("FAALAPVYSGUTWNGVVXHFBZPSQOUBKOHLGMJVGBCWDECPPSHOYJHWIKPSCZSVGYFFEIKTJMXMEJLQLSJRCGHRARHFKSMYWVXNARHEE");
    tmp_msg_4.attr_type = 27U;
    tmp_msg_4.min.assign("NPJXTISGTCBPBRJNKSLEYVWZCEUXGTSKFKAMFUJDCGXEHQPDMABQJVZROAWABLKOYGENWWFMFTZZPTQMMDSLVYYKGOCDGOWMNXHCZHFFUIFVYYFHEUQIRJLKVBQMEUCCGPZGIHLIDQXVSRRAEQOTDWGCRXQNMUAKXBQJHYBOKDUVBTRHDWAZASOUXJPEMTJUPTOVBRPWQNDFHROLNFOWSNSIJHBLNKTPMECAASRI");
    tmp_msg_4.max.assign("DENCZCRPKHEYLFERYXSXYSCBBXAWDOMIWZMLUECWWTFOQTJRBTQABDQYHPQYZEJWUNHHAYHHOLTKXZNPHFFSZAHKVOCFJSVJVBBJSASSYJDNEAOXCLOJMWBENPNTNUEHVEDGZQKPUNWULCRBVBDKMYFKIVDRLWJULOQTVJPQLPFIRGNMGCXVDL");
    msg.end_actions.push_back(tmp_msg_4);

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
    msg.setTimeStamp(0.0519612450779);
    msg.setSource(40663U);
    msg.setSourceEntity(117U);
    msg.setDestination(25630U);
    msg.setDestinationEntity(68U);
    msg.maneuver_id.assign("SGSWJFYGAGKZQDGIATEIAHYXVXTONERBFNSBMPAWMUOBXSPHZELUYQXTXFGKPCVDSOJGMNNXQDVDFDNKHAZGIJVERZUIXJSFCKKMNTWPNIYCEDETJLSCXQNSOYGEGYURMPHLROLZWMEJLDACRSJUFOXBCOAEQDBPMPRTCHUTOZKHURPHAHWRMKTXFZQMQBPJFQOLBZFOWHYGVTLVVQBYCNEMCLALINRFKCIYQLURKWJDKIVIYDWWZVVIBH");
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.0802666082205;
    tmp_msg_0.lon = 0.458795063814;
    tmp_msg_0.speed = 0.294555014522;
    tmp_msg_0.speed_units = 193U;
    tmp_msg_0.limits = 215U;
    tmp_msg_0.max_depth = 0.130806031546;
    tmp_msg_0.min_alt = 0.0718666467688;
    tmp_msg_0.time_limit = 0.118588240028;
    tmp_msg_0.controller.assign("BCSEGBRPTEMUMGYXBUSCVDDYPNVKOAQQMEWGKGAMQOFBZLLPNJASHWZTGETNBQEHKHOXLVTWDMKSRQZZFKVUOWRHERDFDWRNGUAGVQCNGBCHYPOPSIZJRHBCJDIWXJSFKACXOWUXMITQXBMVIRAZPMYLULIYLXDHHUNSEEIWRDKANFVFOATGTEFAZBDWNQTDCCNPHSKKMNWJKZCZVFSYQXPJFJRITEYUYLHYJBLOJQLARPVTFXS");
    tmp_msg_0.custom.assign("MKNXQITUAZRGFFBEDLLLRKNWFABFSJXQHCIAXPWWUJGHOPVWVGRKREXCEJOVSMQTFFJWCXNRXCBUBOIKXU");
    msg.data.set(tmp_msg_0);
    IMC::FormationEvaluation tmp_msg_1;
    tmp_msg_1.type = 3U;
    tmp_msg_1.op = 91U;
    tmp_msg_1.err_mean = 0.667713985751;
    tmp_msg_1.dist_min_abs = 0.042928232094;
    tmp_msg_1.dist_min_mean = 0.679415069298;
    tmp_msg_1.roll_rate_mean = 0.999246013158;
    tmp_msg_1.time = 0.546143792505;
    IMC::FormationControlParams tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.action = 196U;
    tmp_tmp_msg_1_0.lon_gain = 0.655524818291;
    tmp_tmp_msg_1_0.lat_gain = 0.213037569092;
    tmp_tmp_msg_1_0.bond_thick = 0.49333209697;
    tmp_tmp_msg_1_0.lead_gain = 0.846213216233;
    tmp_tmp_msg_1_0.deconfl_gain = 0.989369363419;
    tmp_tmp_msg_1_0.accel_switch_gain = 0.474166562972;
    tmp_tmp_msg_1_0.safe_dist = 0.00415892893597;
    tmp_tmp_msg_1_0.deconflict_offset = 0.0844309772626;
    tmp_tmp_msg_1_0.accel_safe_margin = 0.327000566422;
    tmp_tmp_msg_1_0.accel_lim_x = 0.149696472171;
    tmp_msg_1.controlparams.set(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Conductivity tmp_msg_2;
    tmp_msg_2.value = 0.681400094432;
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
    msg.setTimeStamp(0.814251680803);
    msg.setSource(31437U);
    msg.setSourceEntity(126U);
    msg.setDestination(35561U);
    msg.setDestinationEntity(36U);
    msg.maneuver_id.assign("ZFNXKYQGJJQZOEHYIWLVXVRDFRFPSQBZFGWZGWBUIWSWMDKDRQAIAMNBQYUVQNPFLXWDGTJHLGKVYEBNDMYUDBXALTNRSCEDBJISCMCXLEQSKAIISVULTDGIRTJFZZCTSLUJTLUWBECOHFFTZJBXUOELISYOCNLPICERKKNAPXAKFUWHSYMHQYHJHIEAWCFPRNTEZPPMAOPAHKRRVOJADXOCP");
    IMC::ImageTracking tmp_msg_0;
    msg.data.set(tmp_msg_0);
    IMC::SmsRx tmp_msg_1;
    tmp_msg_1.source.assign("RHUCELSUCBHPSPXWBZATHFNMEPFCVDYKTFCABLSTOZFRPKVKEXXDDNQFIWIMEZIKNIAWBZZLYYGAWTCSWETMMRRESASUHWHMBLPHDGZQKGCJCMPAFCFYWUZJTNNAIVOSOXUWIBPGFBOHUKTNMLBZSDWXMZQVFJJLMAKVQYGDLLAENPCRDWDTTNJUUDXPQOLDJQXRIRIOYGSIYXOQVGRBTEGVKZGKXORICOAHKYMUQQXSYRHLUEJVNJBFEVGJVJ");
    const char tmp_tmp_msg_1_0[] = {49, 4, 24, 101, 85, -23, -61, 47, 104, -38, -34, -109, -76, -95, -100, 64, 92, -111, 63, 78, 99, -1, 67, 43, 71, -103, 108, -66, 89, 105, 18, -44, -128, 64, -61, -45, -29, -122, 68, 117, -103, -100, 49, -8, -21, 53, 78, -32, -27, 69, -54, -118, -36, -40, 91, 59, 47, 36, -32, -113, 109, -121, -100, -124, 1, -59, 54, 75, 6, 64, -91, -2, -52, 37, -123, -110, -113, -12, 56, 31, 46, -112, 2, -121, 85, -54, -33, 72, -49, -85, -13, 111, 108, -20, -7, -33, 1, 96, -95, 79, -80, -99, -93, 21, -3, 23, -75, -9, 1, -45, 102, -50, -95, -121, -126, -52, 88, -110, 23, -122, -99, 17, 74, 19, 113, 65, -11, -21, -87, -82, 56, -29, 49, 31, -10, -61, 64, 95, -47, -81, 97, -121, -114, -28, -87, -92, -100, 89, -22, 16, -56, -127, 55, -116, -8, 69, -95, 15, -28, -123, 71, 51, 111, -6, -14, 19, -112, 4, 94, 39, -3, -91, -116, -79, -34, 96, 92, -113, 121, -21, 1, -110, -55, -128, 19, 30, 63, 115, -1, 29, -111, -100, 108, -62, 93, 99, -124, -54, -60, -123, 58, 33, 38, -21, 53, -46, -21, 125, -118, 33, -93, -104, -17, -10, -49, 12};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
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
    msg.setTimeStamp(0.0941833626981);
    msg.setSource(46094U);
    msg.setSourceEntity(46U);
    msg.setDestination(26433U);
    msg.setDestinationEntity(205U);
    msg.maneuver_id.assign("JKHPVZSZHPYUYAKIUZBEYRWRITPITGXUTBWDBECAVASUVUHCHAPIXNLXLRMNNXVQORGDCZOWMKXEQOAXZFZATDMNAEDFCVTACIBYQSJHAIQUVNBIOMWRVYPKDJFJZRXRSHEHTJGSGMMEZBRBTOKLQWFJPWMEHSPMKUHMQSDJRFIGANOMOQQTCLJWCDBLNFZKSYONOQSYYLLEXFJLUZFSVEVNBTTUGXOIKCKJCUILXQNEVYBGPGCFPRGD");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 42829U;
    tmp_msg_0.lat = 0.328424186696;
    tmp_msg_0.lon = 0.682626674262;
    tmp_msg_0.z = 0.0539231812168;
    tmp_msg_0.z_units = 115U;
    tmp_msg_0.speed = 0.652565007231;
    tmp_msg_0.speed_units = 180U;
    tmp_msg_0.bearing = 0.363146178694;
    tmp_msg_0.cross_angle = 0.422303843356;
    tmp_msg_0.width = 0.615057816517;
    tmp_msg_0.length = 0.381551423335;
    tmp_msg_0.hstep = 0.0423567107736;
    tmp_msg_0.coff = 148U;
    tmp_msg_0.alternation = 212U;
    tmp_msg_0.flags = 123U;
    tmp_msg_0.custom.assign("BEHUPJZOLKMIKPTKBLSNZVIVRRGDBETVRLYNNFKXPOELVLHMXDJTOCWBWDLLADFINSEUUNQWULLADCZUPQHYGYFXAIAXPYFUWSBDAICFPCRFVMZT");
    msg.data.set(tmp_msg_0);
    IMC::FuelLevel tmp_msg_1;
    tmp_msg_1.value = 0.888679807448;
    tmp_msg_1.confidence = 0.30376922341;
    tmp_msg_1.opmodes.assign("NGEIRCYWRWEODMTLSXRSFJCTAFFUKWZFAVBEJENDQHIIPGAACYNZVRUTPTEPROKFBNWDVOLWSBQRATVOBAZBQYKLZKXQKGBCUVHTTJA");
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
    msg.setTimeStamp(0.78649522215);
    msg.setSource(36655U);
    msg.setSourceEntity(212U);
    msg.setDestination(5207U);
    msg.setDestinationEntity(147U);
    msg.source_man.assign("WTJZMECKOURDHXJBWMAQBCRPPTNGQDBYYUELAZJYMHCDZHVXSROZPOIYGPXJHHWWFSRHIBUTDTQHWCPBDCVKLHRGRKTXNUVIHNSOUIORUFYPPPAPESEZSVLBRAZKHQLFISGALLEKYJWQZIVGCGNGZRDACZLQNUBXGJEOLFUMCDSVPQWJMNBTYVMJSOMNITJDFQFFJXYAIVCIMAFQXGEDCUXLQMFEXYOAKKYNAEVTDSWXNZWKLKRBUNT");
    msg.dest_man.assign("LZTZOONATPZYBWTWENNEIPJDKZTKEDOEIRZFIXYBLHRTPIZOYHCGVLLLJBXPYOKNSWIWFDDOQMHKWNXDVVSCFJHJKFIXNHVQGGBFJRRDMOGYJEIWHCKFUCJFUPAXLTORAEGTLVDWCXHCCNSPWAQMGBMFAMMKIKTBUOQXVDOJSMSQPZCZMEAVRMGGGQKSBRZAUNIFDXUBKVUPACLRABVQBGQL");
    msg.conditions.assign("DJYVURRIUDXOJFAYMISSPRGYPGRHNGLTCCYJGJBYVSAPQLORTEEFZUDGWMHBXXMIWBQWHMGCJEVKZPDNLHUBOAZNLFJKBROEBUCQIPHYFKSXSOSPXLAQIHLMYQUGYNWBMVUNVZWZPIDFMITSZVPQKDVJRFKJDWNBUGDLKTFMHCJVVSCEMNZWNVERLUXXAEPZYLATFQTDKRTJKL");

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
    msg.setTimeStamp(0.838652752494);
    msg.setSource(12867U);
    msg.setSourceEntity(211U);
    msg.setDestination(31633U);
    msg.setDestinationEntity(176U);
    msg.source_man.assign("HJYBUVRCEOFEGDXTXKLSWGBCJKDMBESANLYWJBTCQJICAYSJKVFLSYOCCWVLLDBQLREBHIMRBFNCGTUTZNKJWJAUYSEDVWPTEHUPFNIJOBQKQTHLFWIRTNWZOOKQAVJVAGNXHUEMBFPOYRUXSSNHRXIUWTVGMDUHAHMMZIOQQKRGGFEKMVTUYIPLZKJDXQFCAGPCPOEOFPXDIPYZ");
    msg.dest_man.assign("MSDVDIHNAYHWZTRVZ");
    msg.conditions.assign("ZICZLLLGXEVQNDWKKZOKQVUYRTMNEKDTLZIUXCUERVVAREFBBYAOQPWDCHJFXIRMESUXNPFQDPSSUHNEKBIULBBOPUDXOJGNGSZVKPDGERPRVZGKPZGIOTXHFYHLJATTMSHGZSVFZYROZLAXCQXUBJQCMWSDOEFJCWCYEDBHWMTHNYWTAXQBXJYIGGAHJFOYBNTSNMJTJ");
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 54432U;
    tmp_msg_0.type = 215U;
    tmp_msg_0.max_size = 19367U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.316896183376;
    tmp_tmp_msg_0_0.base_lon = 0.688134506218;
    tmp_tmp_msg_0_0.base_time = 0.655062322561;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.716080235392);
    msg.setSource(1046U);
    msg.setSourceEntity(108U);
    msg.setDestination(56784U);
    msg.setDestinationEntity(192U);
    msg.source_man.assign("STUVUZIPOEXSKADDQCJQRVPAQHTBFHEDWYANVKWPHUOMPMNBEFGXILOWLRLRMRWNVETFYQQWASKBTAYMCEFYVVZOOZGIMYAESXZUAQUVYLDMGUKZSIPGSNJYBTWDXCVMDNPESOBFOTLZNFYCRCIHEGAYHKHXZOKIVCQFIONJOLFLIBJKHNUUJIHMRRXSEPTEXKLVJDTWHTYMHFFUDUNAXWJMJZISGRXBSQQ");
    msg.dest_man.assign("DMXXJOFZFICYWELAPTIMQDXWYHWQDAWRUKTACLVZSAHQKHWAXUKPMNYWWBMJSTABAZIECRNYF");
    msg.conditions.assign("CXKFBWXWIPTBNABYXIFWLFBAWWWGQRCJSTMACCQTZLHZNTHNXBEQHIZNRJYECBGDMPSDEHKVVUFCLZUAOEKDFXBVSEVWKQYVKGKDMSUSRXYJFG");

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
    msg.setTimeStamp(0.64495443522);
    msg.setSource(16303U);
    msg.setSourceEntity(236U);
    msg.setDestination(2157U);
    msg.setDestinationEntity(78U);
    msg.command = 74U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TJSPFQQBDVTLQWLVODZCCKSKOLQCKUDVZVGCLKWVDYNMARWPUSFDWJIPOMFEAMHXETDTDHAQJYBNGEGZAOMNZDNHWMFHNUNWFQFCMPGSMICQYBEMDSXUQWOOGAXYUHVENSCVXZWTZBTXIUYPJPXNNUVETGBBWWIQHJEAXRLBRZJYEGJYZLSNUUXZABAASICTRRGUHSKYTETRFQHIFKXVOBLIBPOLMJLPPXIIRRFM");
    tmp_msg_0.description.assign("WFUVPLXFLESDFBSHVQDVGXGIORHPWHLLWUUXAAGINNALIZEVBKJARLIZUSICIYGQPFLYIKOQOYDQZWLVNXJEXIJMZBMQTNWONRSTZKEJSFBGKMSQHCYKDVDUMFLBJGSYPAOAZWCFJNFZCOEHTEUNHBGCTSADQOHRDSWKQXBDTYUOZPT");
    tmp_msg_0.vnamespace.assign("WZZPIWJWSNNROVKHXPGNXEYTMBWZDHHXXHRAGLDEVRJLCHQISJETPSENXQQACHRPDPIYGMSCPYLDHAAVKFVIBEFFGZOBBBJUXNYNKLCVRSNYDELUPLNDBXTFIWQOOFAFCIYUGUVBHIXTTJKYFJWFSAZHAHUSEKPRIUQQJRWIZGQOOUYWVMMPLNGLOVXDCADAQNFKMTKLGUWTMUTGJBYPSJOFKEVCVIGXZEDZYQ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NPZSLBBDMKXSTGQIXRBMJZAVUGGBJAQKPWQLDJSLOPQUXVIHCKTESWWXDVTYDLSRTOMRIYEVLVBZJAONLQEHHPIMHYPQJMBCFUUDHLIUHPCNRBAMIIKYAPXRTFEJFZVPTONNPCRWMCXYOPXCNFEWZEHFTFSEBCUY");
    tmp_tmp_msg_0_0.value.assign("WFBLSBEIWFCMVIRZ");
    tmp_tmp_msg_0_0.type = 128U;
    tmp_tmp_msg_0_0.access = 203U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("GUJIGYRWSCTPSKRIQFZAHTPLANELVIUMINALAYOXAAVZFOTJYORNGLXAYIFNCKJHGONPGEOGTNQDYVDXIWQLNDOVBAMHXHEJQYWLWXZRJQZZR");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("BHZQDKJZPSROKVHBZMWHTCWONJSVETWIFKATQRCWDOESRACZLEIGHXYTNGXYHPLUQVOMYFVEIJQTOCXDGTDFHKQPCOGMFJQYWAISBCELEEYOIBVIFNCZNVGATMJWLJTVFR");
    tmp_tmp_msg_0_1.dest_man.assign("DOELHEAFVPMBEDUMAMWENETOHCGJMYOTNXSYAMRRKKEVYXCZIPTQIHDOUCGFTSILKJDOOAQGHWTRVZXQZEHQSDTFXNGQYLKQKWIFILVFLL");
    tmp_tmp_msg_0_1.conditions.assign("VHLPIAAFHCYOCXHKZURXEGYJJRYPQUEKKOOXQFNGEOJDWDHNXQNSZNMFAICPKQCAFGZHSATDDCNJWOVUIIUWNYOPXNYPWGKBMOLLWJZTWBRDVCVUTHMTSQIQSAZLVINFYZVKKSJTZNAKUJADGONJBQCLEXYXZRSVJMVWQDFBPYGXMMCRFACSTFRTFTYDZROEIPWXHBPLEBFCGULDBTMERLKOIMSKMEG");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::IoEvent tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.type = 239U;
    tmp_tmp_msg_0_2.error.assign("AVZXVEFMKYDVIXGPPZRGMO");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::SetServoPosition tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.id = 81U;
    tmp_tmp_msg_0_3.value = 0.286122475505;
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
    msg.setTimeStamp(0.194144021693);
    msg.setSource(65042U);
    msg.setSourceEntity(171U);
    msg.setDestination(37743U);
    msg.setDestinationEntity(0U);
    msg.command = 115U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BWEFJDSAPXSTHYHKWPQSMGPHUJTKTLALOSVPZLDGZMCFZYXLDGRPEMZBYJVQIXUKEURIZRCVCYOERKNRAQIQHLSVMNBINUAFVBODSDKNXFJYBFYWNOBVJISWMQCNJHWUEKLTXCIFSPEOXAFEJJBMZKZRCAEUYTZTAEUMSDHXUPTLVQWGHXTVRICFULFOHRXNKIDOCNWRYOWVTYGUGQZDKVHQGOAOBTWPMNPDWCIMFJCA");
    tmp_msg_0.description.assign("MJGCWQVUFFKYEHFJTQVMLQRJFCWBMZLNVLADPIJUCPFJYFYPNDGEGGAKCWLSKDMKUBIVZSRMHZYEMRLJAHIHFKKKUSOFRQTARZXWOVVKFTXZZTLDEOPQDBUUNDKWNDLEMXXPYGEECNJBTSIPYHICHNSBYRXATZFGMYSUDBBZSGUOCSACNUPJX");
    tmp_msg_0.vnamespace.assign("IOYUYOUYUCEISWSDVTQBBGLZSLVIFKAFSDFCCEURLQTKFTQQUWMSFDKNJJZNGHZIHGOLAHY");
    tmp_msg_0.start_man_id.assign("HZBLLENULUPMFEPUIUICWMVKZCEFZOBKREMQDGODP");
    IMC::Fluorescein tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.12737459395;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    IMC::AcousticStatus tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.req_id = 53557U;
    tmp_tmp_msg_0_1.type = 70U;
    tmp_tmp_msg_0_1.status = 157U;
    tmp_tmp_msg_0_1.info.assign("WCDQNHFUJLROOKYXSJDGCLUMEMXCQZXXNVBIBBSYAPCQXSQPMJLVYGRIRBBWMWTVLCIKIFNESQZPQLTQEDSZLGMGNOHKLCIDJAHMGPDOQLYOJZDTRPEPFTFGUHVKADOGIXAGB");
    tmp_tmp_msg_0_1.range = 0.41150760385;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.364363294483);
    msg.setSource(18670U);
    msg.setSourceEntity(208U);
    msg.setDestination(50750U);
    msg.setDestinationEntity(44U);
    msg.command = 200U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MZZEGXSAXNOLWCKIYPGMHIPRQHFHIWULMEXQVFWZYNZJTJPQIWFDVMJABVJAKHVVZBQTJTQHVTCLKUYHOVYIGLBBNHKUMXOYSNTQSAKDQPLIRJPJOMOWSBJLQZMRYQEBUHNFWWRBZCIKAFYFCUXCCKS");
    tmp_msg_0.description.assign("IRJSIPUFUKZCHIVXKZTATQKANSPHKCZWRUZWKZXXQCMVLAOTGMANKBNSIEWZOGNYLFXPNRJJVBTASYJIPHMNWCJSFLOSFDDFRVRYMEVJSOXVGVUZSBGGZESBEGKTGIEOMYNYXCABHJLHGOPZLDFLPFSTJXDYOUIDWTQGXFMQMEEHEMYMWMBRBUUQKYFIOTWCNDHLBJVNUICKLCCAPPVRCJZDWQRHWQYFAONDXEUQAQXRDT");
    tmp_msg_0.vnamespace.assign("HVJRKBNRATXAPQIRQQHLLSYXUFJWIATEDMFVZBZLJYVMNLUVJBJUCADHPHOYFXGDHTLFNU");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WONFIWKXNPTTYBWHNVCWGEFJLXTCDWQMLPHOUDNSIKJUYEY");
    tmp_tmp_msg_0_0.value.assign("ALAOWUUVKFMJFYJKDIJTGBVLTCUMAYVSDPTVWUABESHRIWWDXQEZTMTQVWMKJNTRTIRHPSHLLTFEMZZ");
    tmp_tmp_msg_0_0.type = 112U;
    tmp_tmp_msg_0_0.access = 132U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DONRTBOOCPBFJGTABSMELBPOYDZSWMTWWVMXSXALUHEIYFKTWNVQETILWVRDKRQRQJLIMXONFQUAGKFHBKYCHDHUPIESSFLTGHWCLSNVGIHULFXVVUXYGWFDMTOYZSMNMOGAKZNKVKEQPADERKITLFCJBJDSTNKEXQQGKRM");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("ATQMUJIIKAMVJCEPBVZKFVUOTFOOLZDMIVGNFKKSUROQHZTGHNNOBEYQVLJLTONFHQUMJWZSNVNOWCNZDKSNFKMTRRDJWWCXQTBJGHKVDEDTQJOHGCHEQXMIEARODMISREWLYHQDJYGBIPWCYRBXFSTWYN");
    tmp_tmp_msg_0_1.dest_man.assign("OVWLLJHXWUIMLPRXAYYXPNRBWHZLKBECZRGXSYDCCCHOXSMHRIDOZYNODGKCQTQSNNRKASCIJMUVKHMMCDSJEFZCFYIFUNQTOKHEVPTXIJGENQEEEVJBGYPTBDAESKWICFDZGKDBZV");
    tmp_tmp_msg_0_1.conditions.assign("WIZJAIYKINAUXCFHFTWVKYHEQZVDNNKACOCKLTHCGZCXFMVJWXPZOQAOLBPOYXWDELBROAELJFTNLQIYDTMSCNGJSOHWOGPLQSNUWEHFQBFZKIRDBVBXGXXGKGQ");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::RegisterManeuver tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.mid = 15998U;
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
    msg.setTimeStamp(0.000332328538045);
    msg.setSource(33227U);
    msg.setSourceEntity(150U);
    msg.setDestination(61981U);
    msg.setDestinationEntity(22U);
    msg.state = 238U;
    msg.plan_id.assign("GOBFYBDBQLWRWLJDAIEMIASPSYPIQJGIVDTUSGCCIBKXZPDWEOALLXRUNTTKHFWXONBAYGZSVKTJFLTJRKNLRMSQIMRTXZQUFFPOGQNYAENPBEVHPJCAUMMWQHYWRVHJLMAHTMRQSKTGVDFVQMVRISVNXEAPYMJZIGDGUODAIRXEWD");
    msg.comm_level = 199U;

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
    msg.setTimeStamp(0.941458109997);
    msg.setSource(10725U);
    msg.setSourceEntity(184U);
    msg.setDestination(58163U);
    msg.setDestinationEntity(241U);
    msg.state = 177U;
    msg.plan_id.assign("ICCRJWSLHOEGBPANVKHVQXRVXYZGBUSFIQPJWQHKUPWKYNMLHUNPHGNOCARECVJZLFKMUYAVIVJLHUTXFOAWQQVMQAJEFCZNQQHOGDGTZGSOPQWZRSNACPOIRFHSBEXOLVKFAPKFDMWSDTJZNEFWDKLKIJPBGWUCJMITBYXXTOZXYSNIZVTXBYYDBHRYX");
    msg.comm_level = 242U;

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
    msg.setTimeStamp(0.366993025211);
    msg.setSource(44565U);
    msg.setSourceEntity(93U);
    msg.setDestination(12003U);
    msg.setDestinationEntity(134U);
    msg.state = 224U;
    msg.plan_id.assign("ILUJSLPAGSWMDHAWBRJDGBDZVEUXQHPAMRTWKQKFVNXBGNPKNSAVPOLWEBJBVZTSFYEKSGIGFMPUGAVAKOKVNYZTEQDNCGQLMCBXFUCYTQKJHGZVIGYRYHXYAKCTUNSCFWMOYDRWVMACQCCDJFHEUBLFVXSSHWURHIHMIIDTQTXNWHWFRRQOOMYDMPPJ");
    msg.comm_level = 97U;

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
    msg.setTimeStamp(0.676740945083);
    msg.setSource(10589U);
    msg.setSourceEntity(195U);
    msg.setDestination(63923U);
    msg.setDestinationEntity(181U);
    msg.type = 145U;
    msg.op = 109U;
    msg.request_id = 47202U;
    msg.plan_id.assign("OJRDACUIDNOMRVRLPWJSUHDSCYMWVKTYLGWGZOIXKFMOSLNFWHEILMLZXMECBZESGTJPDFFZGXXJNFPNHTQGWUAYDLMHLDYVOBBGBXZ");
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 71U;
    tmp_msg_0.system.assign("BMBTKEHBHIUSVAWPNARYJGLPAZQUWTYRDQPLYHROLLHGVCMXZKKVLVSTNJLUYFXMBAUWOHWQJBVLTUUZIBIKYOQEITPXEVTINNDKEGIQRDOZRHYKWNOJXOXFAZPNPCDCTAGGXXUDHNCSSLRPFSESECPFJUHOKQNMECZWGZYJTDFBGHIGLMDILOYJJMNICCIBHRBXWVRUJNQDDPMGASBETTXPVQEKGYQRZMVKYFAFMEKJOVZUAQS");
    tmp_msg_0.range = 0.300338153936;
    IMC::UamRxFrame tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_src.assign("IYDNDJWNFGGFOUMITTBCUDRJZSBJAVBHFYPQMRYHXYTKSRFCXZMMTGJJIQAHKHSVPVGVNJGOZZAZJNYXPXGGVVCLZXABUTTMQKQDMDCJUP");
    tmp_tmp_msg_0_0.sys_dst.assign("ZFTZWJYYHHTBCNXIGPHDFQUJMFIJQJIEJDGBELXOVDWNBWNDJGPAKEXTTYTIQLXRJQXJ");
    tmp_tmp_msg_0_0.flags = 205U;
    const char tmp_tmp_tmp_msg_0_0_0[] = {-117, 24, -34, -105, -32, 69, 31, -31, -2, -65, -3, -116, 119, 63, -75, -32, -4, -123, -23, -107, 55, -116, -40, -111, -4, 40, 42, 50, 14, -74, -125, -43, 21, 3, 104, -12, -65, 97, 122, -101, 24, -85, -47, 28, -13, 14, -113, 13, 43, 69, 123, -96, -5, -96, -1, 88, -79, -62, -22, -108, -10, -43, -6, 82, 30, -34, -99, 51, -65, -27, -71, -42, 28, -123, -76, 104, -90, 94, -100, -40, 52, -109, -93, 36, 122, -42, -31, 81, -92, -40, 121, -118, -18, -67, 80, -100, -28, 92, -19, -10, 123, -43, -10, 31, 77, -70, 90, 40, -45, 67, 26, -118, -12, -51, 87, 59, 49, 107, -87, -50, -26, 80, 85, 18, -67, 71, 84, -66, -87, 21, -59, 53, -47, 84, 102, 1, 48, -59, 106, -50, -101, -21, -86, 3, -67};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("COVWILARIRUTXELABQRVUSUYYEPLHVRSVDIAKTLAFGPFBAGTGEYJMFNJYUHKCTNGXVHGDUUOZKMKWDPXFZZSKLDKYOMRQDSLTFMQAWRECRBVUPHZQGQOEJIJMWPSIBJVPCFNKSEAYHSZZNDJPBEINRRHACIWFBJAZWJWXSDFXMTCNYQUBKIZFCLGELHOCHWQPSRTKNMEKJQGYNUHLGWYOOX");

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
    msg.setTimeStamp(0.24744242414);
    msg.setSource(64478U);
    msg.setSourceEntity(235U);
    msg.setDestination(48253U);
    msg.setDestinationEntity(130U);
    msg.type = 66U;
    msg.op = 90U;
    msg.request_id = 49953U;
    msg.plan_id.assign("TWHLRGDBMMSKDLSFZGBTELIQCNORILYKTOEWNBIQMJINCKXYZMTEZDLVSCKWIDPUHBAKDXBFZNNGYEFKMUNFJQDXYYSTRMOBCGVCFHZROABLXPQEXMRVPKGQJEUZCFIHVLESAXIYAPHAJWIWAFKEGAPTOPGYTQDSABRPAXDQRYIJVFHYWBQFQFODTUY");
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.904118440547;
    tmp_msg_0.y = 0.67999167108;
    tmp_msg_0.z = 0.940615778744;
    tmp_msg_0.phi = 0.216643831666;
    tmp_msg_0.theta = 0.0283539087388;
    tmp_msg_0.psi = 0.333944147709;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SLSEYIXXVPBJCUKNVWOYYEGTNGPZKKZMQENBMXGMFRTAEQJDAFCYFIVMJGDBUTERQKEBUIZURMQRAOKXVAEVAVQLDNSAYVXFRRHYKATGJQQRDDCQWKYSWOUNHJFUNWMCZNESLBSCBGLPMWHLTPATGIQCWAFZCDPBYDOCHFIXWOIOUQICHHOCGZDR");

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
    msg.setTimeStamp(0.103901976511);
    msg.setSource(47537U);
    msg.setSourceEntity(160U);
    msg.setDestination(24425U);
    msg.setDestinationEntity(107U);
    msg.type = 18U;
    msg.op = 12U;
    msg.request_id = 34386U;
    msg.plan_id.assign("VTWVMKNYXAHIZHPWGDGSXUQDIRDGZLTVBBXZADWJQGIXUYLJSXRPHVLMAKOOFDVLKAWETCBEQBNUPSBGJTGHCRMAVWZSK");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("HHYOOTBSVBCLLFNXTMKPERECLVJRDDISCVHEAUFYGCZBKQIZYONYVYPIXODEKLSOGNHHGZFWHHRVCPUMLOUKHSPQMFIQJFNDWITTSETHXWMPZDUBUXD");
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.838709248983;
    tmp_tmp_msg_0_0.lon = 0.323012929575;
    tmp_tmp_msg_0_0.z = 0.840838679566;
    tmp_tmp_msg_0_0.z_units = 9U;
    tmp_tmp_msg_0_0.speed = 0.29920003113;
    tmp_tmp_msg_0_0.speed_units = 35U;
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.167704697047;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.678012399831;
    tmp_tmp_msg_0_0.polygon.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("YMJQGLYKNUSKEBCBLBHNHUHCLAZPZWHAVVQAQWCYJEVTGUTFXITGNQGJUICOUTNBZGPWRAPSJYHQNREM");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::GetParametersXml tmp_tmp_msg_0_1;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PDSOBDOOVLWVXYSCUFDRKJLPNXTLYAIENIMYZASRAOGHFCRNWSBGCQMPTHRKESOOYXXZFSCYKPEZKFTAFLAHRQBAJWRFUHQTLXIYAJLJPWHSCGGIGTLQKEUIMZCYGGGDPWUDVDEDBVZMLSNCTFZFVFVCVGTKOBCREMLJNBHISIQKMNHRXIAIXVEZNFKUHJQBTWQPPWYUVXTZBGOE");

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
    msg.setTimeStamp(0.558775737821);
    msg.setSource(21624U);
    msg.setSourceEntity(175U);
    msg.setDestination(36508U);
    msg.setDestinationEntity(27U);
    msg.plan_count = 23827U;
    msg.plan_size = 3016225028U;
    msg.change_time = 0.452564838374;
    msg.change_sid = 16002U;
    msg.change_sname.assign("VBTFEGZSGKAMAGKOPYDOZAYIHUIXPDETZTNBRLXFWBQPBHXICSTOKVGCJQLVQXXMTCMQXDZOBUWMYSRSDDPWUZNHUSKEQUOCAHRVRMKXPNFFYDUJKGMHHRRWEPHTBMPDKXVOMWMHPKITLVAXNNLOSANYIRLVKXUCGFJDVJCTFCRHPWGZCBFNLONJJGRQWSKIFJZQYNLIIZYYZLDEESCBUBATHVYACALIWMGZJGSUIQ");
    const char tmp_msg_0[] = {-94, -13, -46, -119, 93, 14, 84, 103, 94, -77, -86, 49, 89, -80, 16, 81, 107, 59, 60, 94, 4, -116, -99, -27, 59, -99, 106, -81, -49, 54, 7, -120, 29, -37, 64, -37, -85, 85, 82, 122, 18, 49, -89, 11, -20, 32, -94, -44, 104, 120, -60, -34, -110, 45, 73, 76, -84, 68, 10, 90, -56, 15, -42, 9, -123, -109, -28, 21, 103, -110, -10, -92, -109, -18, -119, -82, 94, -31, 85, 40, 40, 29, 15, -28, 125, 45, -95, 39, 126, -47, 24, 93, 28, 8, 56, -62, -38, 41, 31, -33, 111, -95, -18, -102, -26, -109, -4, -121, -126, -92, 64, -6, 36, 2, 56, 51, -1, -38, -18, 78, -30, 105, 98, 104, 34, -82, -74, 45, -38, -96, -106, -43, -51, 93, -49, 5, 41, 13, 36, 46, 13, 92, 105, 74, 2, 122, -94, 124, 79, 32, 96, -26, -32, -1, -111, -71, -29, 58, 50, -31, 40, -104, -125, 109, 15, -31, 82, -20, 58, 21, -107, -119, -124, -69, -5, -116, 126, -71, 121, 104, 7, 70, -36, -21, 49, -47, 82, 92, 23, 18, 59, -114, 30, -25, 113, -102, -34, 90, -121, 86, 53};
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
    msg.setTimeStamp(0.810162051165);
    msg.setSource(64790U);
    msg.setSourceEntity(23U);
    msg.setDestination(18114U);
    msg.setDestinationEntity(139U);
    msg.plan_count = 55841U;
    msg.plan_size = 1382673619U;
    msg.change_time = 0.681133163851;
    msg.change_sid = 26055U;
    msg.change_sname.assign("QQSATQSBNTIZSHCJUVCZYXWCCCJUIXFQCFVBLOUIQFYDJILHDXFKONHNWZKZJKWWDPVMDELWKUPLHUSXLPIGZGMYRQNTUATKGDHAPRPGXFRAQWEMVVHOYDIAVEIOXRAFEVGUVNEJWLOYCSTPNRJDTMYAHKBVUXIYZLWWUPBXBYHBPJAVZLBRKSSRMBGZQN");
    const char tmp_msg_0[] = {-60, 125, -105, -96, -63, 84, 30, 98, 110, -107, 34, -17, -10, -71, 8, 2, -69, 26, 119, 50, 122, 90, -11, -83, -18, 83, 108, -48, -39, -38, 87, -87, 96, -73, -6, -104, 65, -88, -107, -107, -77, -95, 13, 12, -54, -82, 28, 55, -29, -51, 89, 6, 116, 3, 100, 58, 20, -15, -80, 2, 49, -48, 51, -4, 38, 19, -96, -53, 53, -91, 70, 107, -35, -73, 16, 107, 4, 68, 48, -89, 31, -110, -30, -12, 28, -7, 2, -29, 108, 59, -22, 69, 46, -120, 18, 68, 98, -6, -4, 47, 94, -1, -17, 114, 115, -87, 79, -33, -25, 12, 43, -80, -13, 101, 37, -43, -7, -79, -40, -22, -85, -40, 76, -110, -18, 35, 31, 96, -34, -39, 50, -23, -63, -75, 54, -60, 52, 29, -83, 92, 87, 83, -60, 106, 13, -115, -111, -27, 53, 39, -20, -61, 40, 113, -69, 50, 5, -115, -94, -57, -52, 7, -32, 42, 82, -94, 35, 74, 50, -79, 12, 36, -4, 40, -61};
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
    msg.setTimeStamp(0.836551718797);
    msg.setSource(7445U);
    msg.setSourceEntity(211U);
    msg.setDestination(51073U);
    msg.setDestinationEntity(31U);
    msg.plan_count = 62259U;
    msg.plan_size = 222465248U;
    msg.change_time = 0.190266035199;
    msg.change_sid = 34556U;
    msg.change_sname.assign("JZVLZCEMABTGIIFNERIFKOOIITHHOFVQTPFOBDGXGNWRTLPSDRBDYTBUNEPZHPMAPJRQAVYSLHKKMQ");
    const char tmp_msg_0[] = {40, -70, -39, -35, 18, 102, -117, 4, 58, 91, 105, 118, 72, 67, 112, 115, -9, -14, -6, -32, -86, 89, 23, 57, -58, 117, 121, 120, 42, -110, -46, 111, -60, 30, 95, 41, -73, -84, -77, 113, -31, -115, 28, 108, 14, -36, -35, 103, -94, 84, 75, -38, 42, -77, -45, -109, -8, 6, 117, 14, -39, 96, -126, 32, -23, -13, 52, 122, 87, -13, 49, -21, -115, 101, -59, -123, -82, -8, 19, -72, 40, -110};
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
    msg.setTimeStamp(0.565424869564);
    msg.setSource(790U);
    msg.setSourceEntity(32U);
    msg.setDestination(199U);
    msg.setDestinationEntity(204U);
    msg.plan_id.assign("WLXBQYYFDQWHTTNPJBOLVHXVRYRIFLTXOCUIKULDAFOSFMEQAXWUFXYTZSOMPHUKJWBMAECXVSUPIEKZPFKYMGLQABYDWESHUSQIQJEKKFWVOUTCSCAGGUXUNKPSYZGGDSNJTWCHFHRMRBTCJAGGACEMRRGFHASWCNYLEFA");
    msg.plan_size = 59471U;
    msg.change_time = 0.746985364895;
    msg.change_sid = 35481U;
    msg.change_sname.assign("RPNKSCGDVIFYNQHUREBTVAKRHIUBABCLJKTWTDQJTPOTERTSOPXQAYVDPCUMEJZOPWYHYPWHXCUZLSVUKKQARGNGJODFDMYFCAVQIOBJHV");
    const char tmp_msg_0[] = {-36, 126, 1, -94, 44, 120, 3, 10, -50, 32, -32, -72, -120, -72, -64, -15, 35, -64, 122, 110, 11, -82, 46, -17, 33, 74, -32, 38, -15, 7, -51, 95, -16, -92, 58, 54, -78, -20, -33, -56, -70, 119, -101, 73, 98, -21, 64, 54, -8, 39, -63, -64, 89, 53, -95, 21, 81, 58, -3};
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
    msg.setTimeStamp(0.840143133442);
    msg.setSource(61130U);
    msg.setSourceEntity(42U);
    msg.setDestination(36799U);
    msg.setDestinationEntity(223U);
    msg.plan_id.assign("CBLPADXDUXC");
    msg.plan_size = 53643U;
    msg.change_time = 0.04541370711;
    msg.change_sid = 11023U;
    msg.change_sname.assign("XBADHEGJECWCVJKHTBTYPRHNFYUUKATJHGSWEIZUDUSPTLLVVVBPER");
    const char tmp_msg_0[] = {-40, 44, 94, -8, -35, -31, -85, -60, -83, 85, -25, 109, 70, 2, 105, -21, -44, 66, -45, 87, -100, 63, 24, 104, 46, -47, 109, 84, 79, 73, 73, 15, -117, 40, -83, 105, 62, 92, 58, 75, 92, 110, 60, 88, 93, -16, -3, 125, -91, 95, -46, -127, -2, -126, 37, -95, 41, -61, 73, -91, 39, 121, 34, -70, -27, 112, 69, 108, 3, -67, -69, -59, 105, -44, -53, -68, 106, -9, -111, -123, -24, 50, 29, -71, -21, 93, 35, -48, -64, 95, -11, -95, -53, -68, -51, -32, 34, 71, -46, 7, 78, 12, -8, 58, -114, 10, -77, 4, 25, -25, -57, 99, 118, -101, -87, -49, -52, -72, -126, -4, -106, -123, 83, -28, -105, 12, -88, -87, 4, -112, 106, -15, 78, -47, 82, 60, -118, -121, -19, 94, -20, -36, -15, 120, -53, 29, -42, 125, -46, 78, 68, 4, 96, 69, -87, -3, -111, 74, -74, 29, 73, 125, 59, 68, -48, 73, 22, 46, 16, -93, -70, 76, -25, -85, 83, 43, -49, -28, -109, 89, 100, -121, 79, 56, 120, -105, 74, 93, 19, -22, -37, -68, 115, -93, -82, 26, 37, 107, -91, -105, -126, -5, -20, 44, 47, 78, -15, 31, -76, 50, -8, 17, -17, -88, 99, 116, -56, -63, 26, -89, 106, -72, -33, -88, -30, 112, -50, 27, 91, 78, -55, -68, -119, -120, -17, -90, 120, -56, 19, -107, -120, 125, 5, -26, 40, -38, 118, -90, 1, 118, -14, 50};
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
    msg.setTimeStamp(0.35234421298);
    msg.setSource(35818U);
    msg.setSourceEntity(62U);
    msg.setDestination(55179U);
    msg.setDestinationEntity(212U);
    msg.plan_id.assign("NDDKBJGCPMIHDPMKATVOSYLXZNGLEJITWKCNIAP");
    msg.plan_size = 63733U;
    msg.change_time = 0.425329664523;
    msg.change_sid = 4856U;
    msg.change_sname.assign("TWULXKNIAUVRBJQMNLAHHAVHLBSDKDYOGVJDSOLGZRHKCBLXJLF");
    const char tmp_msg_0[] = {-44, -2, 123, 67, -67, 2, 4, 39, -12, -87, 0, -59, 27, -16, -75, -66, -93, -76, 67, 14, 4, -110, 54, 119, -67, -6, 37, -71, -10, -80, -47, -30, -59, 106, -123, 26, 47, -126, 99, -113, 115, 19, 120, -4, 104, 19, -94, 104, -70, -120, 100, -33, 65, 98, -55, 52, 71, -94, -28, 98, -18, 93, 64, 113, 108, -103, -90, -21, 85, 85, 122, 57, -91, -10, -37, -95, 92, -80, -26, -68, 9, -114, 57, -66, 104, 34, 13, -125, 27, 106, 47, 33, 23, -126, -51, 112, 17};
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
    msg.setTimeStamp(0.0532614617407);
    msg.setSource(37732U);
    msg.setSourceEntity(128U);
    msg.setDestination(36442U);
    msg.setDestinationEntity(42U);
    msg.type = 100U;
    msg.op = 186U;
    msg.request_id = 54990U;
    msg.plan_id.assign("UVKMKKXLZNUJJNSBTKJXAUANTCUXMQJJZGNAYVPULCMADDVBMJWYULIUWOBWHYFWRQGWVTLWPBOQFHZKHOTSQGMCEIQADYEUCROGVAILDJDMEIFZGIFMVCNKRDVHHJYIBKFNMFESCCAYPERVGSGPORORZBWFRXBBVURDWYTIIEHMUPGKRQLSXSEPLWAJAZFQIAHONOTPJL");
    msg.flags = 30006U;
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 138U;
    tmp_msg_0.numsamples = 137U;
    IMC::ProfileSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.depth = 40834U;
    tmp_tmp_msg_0_0.avg = 0.120952569537;
    tmp_msg_0.samples.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.lat = 0.111434621351;
    tmp_msg_0.lon = 0.329814327659;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VXILSKAPTGJLJRXKUXNJUOEIKWPPMBNQQRXOSWPVWKVWYVUOBPDKERUFCVQAQMWIQYTDBHPNQPXYMFGSRULHSYJRIEGVCLZWDXBQRZKGORTERJDIZYSNOBCHTS");

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
    msg.setTimeStamp(0.585662015191);
    msg.setSource(16450U);
    msg.setSourceEntity(86U);
    msg.setDestination(20573U);
    msg.setDestinationEntity(225U);
    msg.type = 213U;
    msg.op = 47U;
    msg.request_id = 46400U;
    msg.plan_id.assign("EPKYOPVLVJZIEXITMRZCQVPWKMWSBAQFHOBNJNXMINEBNOQFBFYCMDTHBNGFLPLYSRLLMDUKCAUOLEDTCKIVDCQEWSEGIAFCGREKSBRGTYDQAWTJXSBUXSQBCIIYKOGUVECJSSUGZTBUFPLRXM");
    msg.flags = 6349U;
    IMC::TransmissionRequest tmp_msg_0;
    tmp_msg_0.req_id = 23851U;
    tmp_msg_0.comm_mean = 101U;
    tmp_msg_0.destination.assign("QYSYABROCKMLUAMOAZTKZVDAPMKCRYEZINQHNGDAFWWJOGZQQLFFYWVBWGZIXESNRJHEYTPUJECPCQWBTPODKMLFKVCGKDSYHHVBOIVHBEHQIYJHSHNFRSHIYDZRNKKIMLKQTLIIEPXLMODPUUHFILJVXXCPVCGEMUDQBCBRNDAEUOPEYJGXD");
    tmp_msg_0.deadline = 0.339169821307;
    tmp_msg_0.range = 0.326956589926;
    tmp_msg_0.data_mode = 31U;
    IMC::QueryEntityState tmp_tmp_msg_0_0;
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
    tmp_msg_0.txt_data.assign("MEAHVNMYFRFMGYSXVKLPZGOWDXIULVFWDEJKPAKGRUKBRJDACUDNYOUWPRICEEJWFBIRQXRBJDHOXFAWEYSFEZFRQGXJRJMEXVQCKQMPCZLAHVDOF");
    const char tmp_tmp_msg_0_1[] = {73, 56, 20, 52, 19, -81, 70, -103, 22, -5, 1, -93, 16, -84, -23, -14, 88, -8, 76, -81, -117, -20, 80, -35, 51, 0, -68, -83, -31, 25, -74, -66, -71, -108, 23, 111, 51, -20, 102, -55, -65, 92, 92, -97, -27, 105, 106, 96, 98, -97, 21, -77, -4, -108, -79, 20, 113, -95, -123, 21, 16, 18, -16, 56, -70, -112, 81, -17, 117, 1, -65};
    tmp_msg_0.raw_data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EUKJWZSSDCHDDLUGAVCTBJXGZFOTVEOQYLPSAIFDWRAGNPGWZPQHRSKIRKSCEQSFXZNPBDYWEBUGKAZMIYPPNGTUUQKHIQWSNYDEGXPFLTMOYMJHZIOB");

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
    msg.setTimeStamp(0.981036914685);
    msg.setSource(47080U);
    msg.setSourceEntity(212U);
    msg.setDestination(53598U);
    msg.setDestinationEntity(95U);
    msg.type = 17U;
    msg.op = 10U;
    msg.request_id = 22661U;
    msg.plan_id.assign("NCQYPMUBKWJMBFMJSQBCHMZGBSDIERUPDGONSVUAIVHUZRHPJPGCDALYITKFOTEIGVOBASSCJMHXTEYDIILMTXQDJNGMKJKNUWWRKRYDNVNPATOXUBCHKZSFDWEQROLEULXVGIQOQHNFZTCZECLPXVUASVHJBOXLWTWGWWYWIFAQZZXQHBYAGFASEISRRJRNKRBBOLGVACMMFSKZDQTYEXZTEAXKG");
    msg.flags = 19870U;
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 14U;
    tmp_msg_0.system.assign("TAYQPIHMBLMIUXRIBJUUNPOECYCVEBZADE");
    tmp_msg_0.range = 0.647458649921;
    IMC::PathControlState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.path_ref = 466075592U;
    tmp_tmp_msg_0_0.start_lat = 0.185097374932;
    tmp_tmp_msg_0_0.start_lon = 0.850839925052;
    tmp_tmp_msg_0_0.start_z = 0.205187395731;
    tmp_tmp_msg_0_0.start_z_units = 58U;
    tmp_tmp_msg_0_0.end_lat = 0.352551654851;
    tmp_tmp_msg_0_0.end_lon = 0.856844651841;
    tmp_tmp_msg_0_0.end_z = 0.704652306288;
    tmp_tmp_msg_0_0.end_z_units = 70U;
    tmp_tmp_msg_0_0.lradius = 0.108096832055;
    tmp_tmp_msg_0_0.flags = 142U;
    tmp_tmp_msg_0_0.x = 0.915912736111;
    tmp_tmp_msg_0_0.y = 0.536660956184;
    tmp_tmp_msg_0_0.z = 0.883243357918;
    tmp_tmp_msg_0_0.vx = 0.314820908966;
    tmp_tmp_msg_0_0.vy = 0.213371417422;
    tmp_tmp_msg_0_0.vz = 0.339674470265;
    tmp_tmp_msg_0_0.course_error = 0.84228358731;
    tmp_tmp_msg_0_0.eta = 35299U;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NZJMNDCIHIIUYITXEQWHJGNNMZPPMSWRUONUWAHSUWVQHRNRBOYODQTPJNWTYKLEJVYRMBOHBKMFVPJEGVQEAXVCIYGAIAPCCFXAYHZTIHGRLDARMRWMOMPXDHKYDAVYBBLXEKSLLEBFVPJOUPCTVVZDCEBUNSFZXTFC");

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
    msg.setTimeStamp(0.792965875544);
    msg.setSource(9751U);
    msg.setSourceEntity(121U);
    msg.setDestination(35826U);
    msg.setDestinationEntity(94U);
    msg.state = 228U;
    msg.plan_id.assign("RCICXGNJLXDDUSAGXRSIHJDHAQRPVBELKTGNCNPERIPEOQWJEYGOQGYOPMEYVMXPTOTGXUHMWOCIVZZQZZVFRFINSJWTAECCLAKOGHAFIBBVXKIDNFJHNRIHTWGSUSLODSZPLDBXKVWHKQFMHPMAEWDOVVDZQXUZFQWYYKLYLPXGAUTYMIFRXKJRMUTNHZZL");
    msg.plan_eta = -2016384979;
    msg.plan_progress = 0.534775002386;
    msg.man_id.assign("OSNYXLQCBGHYPRGAMKXNUIUNOCMHPOBONNVKHPXSDDITE");
    msg.man_type = 1859U;
    msg.man_eta = -540403450;
    msg.last_outcome = 158U;

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
    msg.setTimeStamp(0.0976465719714);
    msg.setSource(34505U);
    msg.setSourceEntity(173U);
    msg.setDestination(61059U);
    msg.setDestinationEntity(154U);
    msg.state = 165U;
    msg.plan_id.assign("PKUMFBIVEWDGFWQSJXPNLDXYZOPQCCZFKYZYAWMBIAREGTXOXVJMRXQWLCW");
    msg.plan_eta = 155039115;
    msg.plan_progress = 0.281357218574;
    msg.man_id.assign("RVWMFDIDNKBYXOZSRVTXPFYCSJJABBLXTFOXGHHAESPCYFJKOZHPCDJGTUSDEMUMSANHNRUGLVFTISENNNHDMKCLREKETWIZLWPJYMTRQKFQ");
    msg.man_type = 46290U;
    msg.man_eta = -1654884423;
    msg.last_outcome = 200U;

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
    msg.setTimeStamp(0.736840123805);
    msg.setSource(20246U);
    msg.setSourceEntity(163U);
    msg.setDestination(43975U);
    msg.setDestinationEntity(75U);
    msg.state = 28U;
    msg.plan_id.assign("LQGLFCXFRSPWGLIQHJPDFUNJZUVYHEUAUXHTISHBXVGNKZRNDHPZBEMYVOSTWSYASVQHLAOYJVFPFGMIYEDUNQBMMCXRORMSSXKMTYFOTWDZVUDBYKZPZYCWEDLZTIIEBVGJIWLQAIREFOXKPVYJQMHUWKNAJHAATNKGCQNQBKLVCXPSJWABJHCLXZPTEFOFTUCBNMGDICGKDEOLWTXLQKDRSGOBWGXFMZPONCZYIQTRAEUAMNRSJVBHWIE");
    msg.plan_eta = 422909588;
    msg.plan_progress = 0.902843832348;
    msg.man_id.assign("RDMDZTYRSJFWQEWZAYOGNKGTPNUJICBRTOUCPLTEQDTWHNIEBBHCPOOUMNXBXQPVLQMPSQGNCDGVFVBYHQLMOAKSJEAFGPDKIIWZEXTZXCQGYJKJRRCPBBLNLYDHVKAZXUMAVAPHPCFIHWWKXOLEQFGKYZUNFOTHOEXRGFLWGJIMQJSENZLCFUXXW");
    msg.man_type = 56163U;
    msg.man_eta = 1102971352;
    msg.last_outcome = 9U;

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
    msg.setTimeStamp(0.305944180996);
    msg.setSource(17518U);
    msg.setSourceEntity(114U);
    msg.setDestination(43058U);
    msg.setDestinationEntity(95U);
    msg.name.assign("FAWSZXUCIMOOFWLQZEMXVIQFGQIMPMUHDFUFORAMHHUHDGGAMNZBJNKIBLVYEXUCIKASVWSYRIMZCQQFKNTCVELSWWZHU");
    msg.value.assign("AMGCDZMGVHOQXTZCPQGIKITWRNUDHWWYTEHJMIKCDKONFKLFEOIUFFQOUXWOMWHIQNKVDXBIYLJZMQOKFTPU");
    msg.type = 254U;
    msg.access = 193U;

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
    msg.setTimeStamp(0.505033331489);
    msg.setSource(41587U);
    msg.setSourceEntity(34U);
    msg.setDestination(11835U);
    msg.setDestinationEntity(167U);
    msg.name.assign("OFIWVBUULFAIDQBPRBQSINTHPLDWFNRGZJJWXEUKWAJWWFQQLTJWRMXXOMLIRSLNXDUFISLUNFOJTCGLTNDETBCSYUEGYCHNPOVDZPXBEXMOH");
    msg.value.assign("UXBFOXKQIIGFPRZNTDJONRMSCZKLKSARLWCDCWHIKFQBDZAIEKRQOCWQUZZYIAQRLMUECYXOBVEIPIAVHEGSXDEZNVWYMQLGPBZWPHJFUAUSBDKFLSPOQFGDYLHCIVGGJMMZMLNUMSPOYNVQNWLJESXOMHQFEBA");
    msg.type = 120U;
    msg.access = 228U;

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
    msg.setTimeStamp(0.347806100621);
    msg.setSource(2237U);
    msg.setSourceEntity(17U);
    msg.setDestination(9842U);
    msg.setDestinationEntity(77U);
    msg.name.assign("XNDHYKIBOUEUYHJFMIWWKGZLBWAMKHKPFIVBKHNEKRPMSCMJDGTCAVWIWSRDXBOHKPYQTYWCBCZOLFTCHKYJTGOUFHGOVUIXFPZDJTOMNHCNQGPJVILEAYPVXTJIUHXCEVREX");
    msg.value.assign("PMUUNVENOVGINKYMQAKGFYQWMGEXJHUIYTOQBOBRVAZUITXWEQELZGLDNSRSZIIJLROFJBCSVWWRSLKCWIHPFHAAPRCUEADHZOEZGXZQTKLRBMFUDCKGHWGQCFLTUYATVZYRMTAYDKKMQPKEHXNQRJNKXBYXEJYDVYRISLZSCHZMXXHIFKPTIUPDOBFDPNJNOUDBJNDDOMATNGLQXSTJFLBSHVGVIVECCQRJYZFALMPWPPWTCBEHVOOMGXJ");
    msg.type = 80U;
    msg.access = 147U;

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
    msg.setTimeStamp(0.31975072938);
    msg.setSource(64679U);
    msg.setSourceEntity(10U);
    msg.setDestination(3899U);
    msg.setDestinationEntity(138U);
    msg.cmd = 143U;
    msg.op = 130U;
    msg.plan_id.assign("FWIYRERKZBUZTHGCPHFXSJANRGJQXKYMJPFIDNLKIKZOHUMTEINHCLGDZLGUATOCGTLFJNXYQENFSYWPBFJITZOONPWVHMXKQKBWHDZGOHSDQFVHIWXVEMUMDSDATVRBTMYJALPPCXSRYAO");
    msg.params.assign("YXBCWTNGSNCIACRWDUBCPSE");

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
    msg.setTimeStamp(0.72243085069);
    msg.setSource(22128U);
    msg.setSourceEntity(114U);
    msg.setDestination(11419U);
    msg.setDestinationEntity(114U);
    msg.cmd = 95U;
    msg.op = 140U;
    msg.plan_id.assign("PNKCSMVTXNUGAMWTYFFKUAINDLROMOIASVVWDKIFOSMXJPVOHWQAEHVCHHMOIECNLFZOMQZGRLJQ");
    msg.params.assign("XYIUNOFAMBFHUAOXMJJTKHJQMPPNDEIRQFGGUGOVZWOLYHTEMQZSSSJPWHTGUKYZZXLGOJFPHLIPPMBEIQMXHYOGWWBCUFXZYAKFNNMRLAQMLBZYOTHCJNRDHMFUZKAPCLYXQESWRFDRWRMDVSDDWTFGDKJWXUDPHU");

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
    msg.setTimeStamp(0.0905560523895);
    msg.setSource(33313U);
    msg.setSourceEntity(97U);
    msg.setDestination(49329U);
    msg.setDestinationEntity(224U);
    msg.cmd = 136U;
    msg.op = 141U;
    msg.plan_id.assign("VTWAMMOSSYVRAAEGXLLIOQBPAXFPVZSGJTIRPKNDYTRNXKMWVKIQZBUFBHZFIMGNEFZLVPRCCKCBKBDQHQQSPTOQROFDMIAISFUCGMYJNXNOJZDICZVCLUJPWAIEFXZXTSRSXVXANRMKDPZMULEOHUAZZNFDEKCTCDGEVIYYBPSFULLWNEWKUFYOUSHHAMYJYNUQJGQIC");
    msg.params.assign("MZSEDSYJHEZOIPDORPVORTAKMMZCFVUESGLPCBIAUJTKXVEXIXFURQZNFNGBSBAPHWRYJMWTSKWCYMANEHIUPIZKQDVQMNGGXZOBQLTLUFESDUWEHLPNNDI");

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
    msg.setTimeStamp(0.299523774942);
    msg.setSource(13332U);
    msg.setSourceEntity(247U);
    msg.setDestination(45205U);
    msg.setDestinationEntity(136U);
    msg.group_name.assign("QPIFGWRZVCTXOLQEBSXCRDBYGVACCZVUKTOZIPSDDNMXWNFAOVPIWIZICRVTLANNQCHKJXYSMEYOLJQQHUYJGYSPYCHHXMRFWKSPIOYVDSBQUFMNHOMKF");
    msg.op = 181U;
    msg.lat = 0.584216506299;
    msg.lon = 0.720297083252;
    msg.height = 0.346223400383;
    msg.x = 0.167650859793;
    msg.y = 0.824008321174;
    msg.z = 0.36232467965;
    msg.phi = 0.0306451799576;
    msg.theta = 0.00662655697135;
    msg.psi = 0.157751695662;
    msg.vx = 0.1813757109;
    msg.vy = 0.912147363438;
    msg.vz = 0.314213464973;
    msg.p = 0.567235524802;
    msg.q = 0.137614613441;
    msg.r = 0.444010149541;
    msg.svx = 0.972144587741;
    msg.svy = 0.72599727228;
    msg.svz = 0.206285892213;

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
    msg.setTimeStamp(0.354480238586);
    msg.setSource(35428U);
    msg.setSourceEntity(167U);
    msg.setDestination(44161U);
    msg.setDestinationEntity(183U);
    msg.group_name.assign("GIKVNRYXJJUGYQODRIAIYTJKHRBOLEJEUPOUSSFNSTHNNHKQYXGIUSTJSFFXTNRDKMVZKZOOYOJHUZVRKZVLLBMDTMAWFXLSHOF");
    msg.op = 237U;
    msg.lat = 0.523463801359;
    msg.lon = 0.541028698765;
    msg.height = 0.515500521004;
    msg.x = 0.971547181954;
    msg.y = 0.263545241956;
    msg.z = 0.774091383332;
    msg.phi = 0.92353294835;
    msg.theta = 0.537184139561;
    msg.psi = 0.230498450534;
    msg.vx = 0.358979336121;
    msg.vy = 0.338973561525;
    msg.vz = 0.89633085093;
    msg.p = 0.88259980321;
    msg.q = 0.48335445019;
    msg.r = 0.627931933316;
    msg.svx = 0.850088710554;
    msg.svy = 0.707305568681;
    msg.svz = 0.882595841961;

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
    msg.setTimeStamp(0.100210414595);
    msg.setSource(2004U);
    msg.setSourceEntity(231U);
    msg.setDestination(37059U);
    msg.setDestinationEntity(121U);
    msg.group_name.assign("DYEEFJWROTOMKVMUUKNCREQQICQURSKKAOSXDOXPTJSUUQERLLAFMFRKFRMXOYWAFVNBDCUJHNLNDEDZPNZITBCPODBQASFJAYLLHWDBQCVTOHKIVWBUWLTTYQGGFSNTCQNJRLCOVLVAHZUHVBIGCZYPBR");
    msg.op = 169U;
    msg.lat = 0.530017710509;
    msg.lon = 0.802105814222;
    msg.height = 0.137153927375;
    msg.x = 0.941684602894;
    msg.y = 0.264512273206;
    msg.z = 0.991024523238;
    msg.phi = 0.036945939346;
    msg.theta = 0.245032848314;
    msg.psi = 0.748169538853;
    msg.vx = 0.217868060446;
    msg.vy = 0.577022177391;
    msg.vz = 0.895256175831;
    msg.p = 0.183037742609;
    msg.q = 0.856140494751;
    msg.r = 0.22197303937;
    msg.svx = 0.186521687611;
    msg.svy = 0.00653058291196;
    msg.svz = 0.856313466679;

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
    msg.setTimeStamp(0.564242493133);
    msg.setSource(63795U);
    msg.setSourceEntity(57U);
    msg.setDestination(62440U);
    msg.setDestinationEntity(87U);
    msg.plan_id.assign("QCTFBYGHWVINOGDKYHLMSUAMRFJXBATPADVTRPFDBPPGASOIKPKEEBEONZOIBJGBCCVHUQUALLYXWHYJWOVVSALMXUXFVWIYQHWKEBVBCYFNMSRSDXGRXMFNOVDNICINZBXIEEREVNKMTZQCEHSTKUWLJKAPGATDJXMIRWSPYLZEKKNTLIAXLFCMKQRRDSCTQFSHZGCQFGALTOJPOZUDUQWMIFWZZHUUDQ");
    msg.type = 145U;
    msg.properties = 65U;
    msg.durations.assign("DHKRMTPLCKJFXIPCJVASRTKXIRAIVFAHULJYECKCSYHDBSNYXRDBHTCEBWFQRDVAFSLYBQSAKJRNENDLTNZTPEOFQNBPOUSWHIVRNVRZJBTWZGPNXOHGSLDOGKVUBUVOQNJWMWOKMLDQWDLXDEQGRJZZPWBMTISVYHECZL");
    msg.distances.assign("MMYHICXLAFQSLATOOYJKNAPPXQKMJFHRNXKNKDNJJAVBDPMGGMFDGZPBEQUHROQYJZMOXDCOFBAIXWHYVRTJYSDUKWLONBBCVEBLBBXDVFTHJDRUEIYZGQHLICXPZXUZEFJICMFSINKGNTTAGMTIEECHOMKWUOEXYLRGKREWZAQRSQNZCZVTIIO");
    msg.actions.assign("GTXMIFINZGSZCPYMUSVLDNVZONBUQDXLVJQVMGDELANWEMJEBUBAWREKRUDDSAZFJSCIIPZYTJNCNUKADAIKOJVTMUBTDSWSFATCVUYPNROYVXRQBPHIXKMTWHCDWBNLXEURSLNGFKKTMRWOTODRKALJZYESOZKWFQZOYCQU");
    msg.fuel.assign("PRKSFOVTMTHXDCXSLFCOEORHRMJEPAFYGNWXVPBMQAIHFLJZKQJUPTRLPFBAEJKIDCSSNZOYPUEQHOSWLALEJQUMKLZGWPCVRUHAOADFUMZJJMHXWNKAQCDBSCXAPREGNMLZFDUVBNOYGTOZG");

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
    msg.setTimeStamp(0.512434254269);
    msg.setSource(4192U);
    msg.setSourceEntity(15U);
    msg.setDestination(62776U);
    msg.setDestinationEntity(223U);
    msg.plan_id.assign("MOCZTOGWQBXNCHCVXVJNPEGOZHPLLKEJILGNDXUFXOISSTRWQANOIEIKNBTUJFXXEVHPMWSYTKPYVUYTOKWALMPWCWDGHRUMAUKNRFWQKPYZYFGJMSXELBRESIIRSRRLVTSEHEDSAMGDXTPSZXBHZIBPUCBYPGLFXTTCUBAPLHBBLJDMQDYGKQ");
    msg.type = 135U;
    msg.properties = 19U;
    msg.durations.assign("QLVEMUBKDMGASRGKCRDPJZXWDHXFFMKNNUZFQSYHIVKHUJKYGWOEIBYTWJJNXHAKZVPRKLZCERALHDBQRFXGGQVYJMWSVSTHWSYMBAZCBSWPVFWGYAOCBPJIUCPDOHWOPOLIPJXBOIAELLGVNOKJONEOJIRQTCUCRFVIYCAIUGJEBRMTCGPWUKZDZSLDXXTDTNXLQNVPUMHAZHQAEWEQMFUREQNMQPTXTFRSCVGZULKXFYMETL");
    msg.distances.assign("JSLJDWTKOSSUKQBUXMYVTBLZYIYCGHIWANWUWXFWVKJCQHPNPMDBZLFYNPLZNERMRISOFKCPKRSJOAGFDNLBUZVPTCEXPOLOHTUQKHIFTJMBTWQPDCQEYFACBWXGO");
    msg.actions.assign("UCZCJVHICIBWVRAKMNFHIPQCLHDWJPETXJYGZCMOVTLYAESIOKJRWZURDNAPWYEBQDLDBRYJPTENQVUUUFQFGACSNAKXTUBQFCQPALSLHSIZKZHJMKPUPUOQNNGSMNFGXDLGHGBYGFPLDRSUJIVPCW");
    msg.fuel.assign("JUDLOIXZKLGQUKHGAFM");

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
    msg.setTimeStamp(0.208036974531);
    msg.setSource(56012U);
    msg.setSourceEntity(2U);
    msg.setDestination(375U);
    msg.setDestinationEntity(6U);
    msg.plan_id.assign("CIEPPBIAHBWSDLYTEIFJTEBZMIFKDAIXKWTMBBMJTEXSVZVWQHYOUTCUIAPSYOJMNSNRAZLYRFQIOBOECGDQJPFHLGVDXDHXQLBLWQOEVBHLPRZJNFKEXQINKUTDBCROZRCSLELXTIXJQGLUKMDVNOWMENZRTFYSMFHPIWUZCTRASXAKVUVWAF");
    msg.type = 10U;
    msg.properties = 233U;
    msg.durations.assign("IRSVHMFERUICIRWLGQCNIUZXXQUDJBYBVMZCEJPVBNTXEKAQHEVSDAZZZYNKJKRJAYQARRNOIUTJSOGKXBWMSGYEYSNWTLRGDLQHJITGUTCSSZBGCMHCH");
    msg.distances.assign("LMSCAHUVBYVEKROWKFMYEFSIDPJVJSVBRHIGVAQYOXPUATVYOPZWVFHXIBOPJKTNMQ");
    msg.actions.assign("CRNIEFTFFKQWJNLCQEEURJXSUEGNULZQKXBDCDYLMLJAYJBWDQZPUWNOOQKIZWXAIMLESGNPMITOPTDOAPVVSZWVHGXZZJNA");
    msg.fuel.assign("DJPOQGBFRVWGFNGQXSNCMCTVIWLJSVMLTKKRPCYLUVVHSYISLTZLORYCZHIHRVHRLOMEFBHTPBBMPJJZDOZFAXGTXCVUXSMSWXXPIOPQDPGNBNDSEYYOKHIFEOCNIWUUQDEGCSNDUTRQSYWCNILIQFJGMUKWAYAEQZAONMLXJROR");

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
    msg.setTimeStamp(0.805363910746);
    msg.setSource(22832U);
    msg.setSourceEntity(254U);
    msg.setDestination(44079U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.953276646977;
    msg.lon = 0.741116911421;
    msg.depth = 0.899582054511;
    msg.roll = 0.23395776277;
    msg.pitch = 0.317906841924;
    msg.yaw = 0.828323280111;
    msg.rcp_time = 0.0328368935239;
    msg.sid.assign("DLMFFOKCJJHDWQYIWZBROYHRULCBHIGCYWRNVWFAZSZSYEGIONPEUEFVQURHKXMUXBDKXJZWRYBSNAXIDLTFQYACXYCCDZPN");
    msg.s_type = 160U;

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
    msg.setTimeStamp(0.284431273245);
    msg.setSource(9962U);
    msg.setSourceEntity(150U);
    msg.setDestination(44490U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.828947582534;
    msg.lon = 0.203047148353;
    msg.depth = 0.32018566223;
    msg.roll = 0.848607445544;
    msg.pitch = 0.800558657246;
    msg.yaw = 0.886648800785;
    msg.rcp_time = 0.759981273791;
    msg.sid.assign("WABRQCKDVJCGNLWKBFZYQHWNFLXEGQMMVFIYBNMOZNEMGPVIGHANQLCGUWDATNPVBKPMAZLZQFJSRVKZADIMXYIJIYWVBBXXDUPUGRSOTVDBDIRTHUKEMTXFONUIIKPROTSNOKKBLUSCCCSRAKUGGLQUHFWQTJESRABFEWJSUXNAEZPPEQTRHJGZCWJCXHOXDZPTSJHYEXLYHQYYFOEZDNFGXVMWLYRDYPZCJEHIFCTVLUKRQMWHOASJ");
    msg.s_type = 91U;

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
    msg.setTimeStamp(0.762795110144);
    msg.setSource(51937U);
    msg.setSourceEntity(246U);
    msg.setDestination(64131U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.22317694881;
    msg.lon = 0.25392726197;
    msg.depth = 0.0764645536383;
    msg.roll = 0.459772501032;
    msg.pitch = 0.361676807967;
    msg.yaw = 0.594116862774;
    msg.rcp_time = 0.421444891352;
    msg.sid.assign("WLAQIRYMWXWAMQVGCAYDHKJDZEJNOEOMVKGOFGIWEFCFJMQOTIJAPTARSCWHVNHBZOUDZDQH");
    msg.s_type = 110U;

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
    msg.setTimeStamp(0.368625439635);
    msg.setSource(14964U);
    msg.setSourceEntity(60U);
    msg.setDestination(4726U);
    msg.setDestinationEntity(117U);
    msg.id.assign("KWLMZFLSYRROTNLLFXJRCWBZY");
    msg.sensor_class.assign("LCWIPTHOSLSEVZXHROQHYPDMBKCSNMPBFYJUWQYHYEVURVPCKQNYZVDJOMXCNMPEGUFTTXIEG");
    msg.lat = 0.72234553615;
    msg.lon = 0.459138281951;
    msg.alt = 0.194619576243;
    msg.heading = 0.190529128743;
    msg.data.assign("ZRFLMBZVGVAAMYZPDEOQULMVSRRNAIIGWEZJSYLXKEENOEUIGWSCCVRZUBQVPTNCLHEFBFPAWHGZXOPLKVRUPLXJUAYGDDSOE");

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
    msg.setTimeStamp(0.258978720816);
    msg.setSource(58102U);
    msg.setSourceEntity(180U);
    msg.setDestination(7519U);
    msg.setDestinationEntity(20U);
    msg.id.assign("NFDZUDVCNLSYYWYGROMWQZAGVXNOXHEINTLHPHMPG");
    msg.sensor_class.assign("PKAZGUGPFABOERIKOHXFPCLUWVDKIENHBTYKEWUKHKUVZWFATVANTXGSLBYIIPMQQRFDZTBLNLWGCGAGFRYXPQFLNBD");
    msg.lat = 0.445644970397;
    msg.lon = 0.330154272436;
    msg.alt = 0.191466099468;
    msg.heading = 0.575782984705;
    msg.data.assign("KHGTMPNQNWEVQXUHTQAJWAASVDKUSLCOEZPBGPVBQWANVMZJPILXTOLIHBBODCJXJGUXHXGKULKUYDBQJWASEVFZTMRNRYEGLWCHGIODMKCYC");

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
    msg.setTimeStamp(0.930978524901);
    msg.setSource(21453U);
    msg.setSourceEntity(251U);
    msg.setDestination(34959U);
    msg.setDestinationEntity(166U);
    msg.id.assign("BNENIHMMNZBQGSWPCEKRUUSPYXNULJBMYNRDWZTNYJLIZQBAAUEIDWYXHCNGKQZVLQJSHQDGRZHDQKVBPLUVMFCPRZSGKUOTWHXCVASTZFAWOFCTVQSQGGEJGYQKXHTWMLUREYZFOTFAUCBWCFXS");
    msg.sensor_class.assign("AOPJLOAMHSFSNLYJVZRKFCBUTAYECHIHQUXZMTUGJRSEYCANKPIYDAVXWXGCGWALUUZWYFD");
    msg.lat = 0.466919470737;
    msg.lon = 0.640763811911;
    msg.alt = 0.164172874691;
    msg.heading = 0.944731356756;
    msg.data.assign("QVAKYWKAVNWCNWEXHGIIZWMJSNHHEXHQXDUZYGZTUYXFNUIAPHLWRGIWHOQJACOCQJKLESUESPSKNMJGIJHAZHETQXTBRIMOYXARUVJAMZHFJEPRKVOEFUKNPRSJWXSZCYARCFQVICCLPXYLIUECVZXYLORTBQQXUDGRAFQFDQFNEIOLWBDFLZTSPBZNCINAOMVOMLTTFTHOMBYDMTGUVSBEJPRLGFKG");

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
    msg.setTimeStamp(0.697171825334);
    msg.setSource(45556U);
    msg.setSourceEntity(81U);
    msg.setDestination(44119U);
    msg.setDestinationEntity(120U);
    msg.id.assign("MPOQTWEVDZZFQPAGWEEOEJUZRLPSHDHRWHPIYGPKHUJIZITAEDSAVTMKHRERAGGVLBYNFKFGUUGBKILVIVDDIIOS");

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
    msg.setTimeStamp(0.104927748482);
    msg.setSource(18970U);
    msg.setSourceEntity(65U);
    msg.setDestination(7001U);
    msg.setDestinationEntity(21U);
    msg.id.assign("CMKWAPTXAFAEXTMZOWKPXGKJQFOSLACMGHEXINMLONEWUZMQPOSRJFKOYDBYNHBQRTGEWFGCKYJIVVRNMDIDSXIIOHTAXZEBGCJLVSPLOMJQTCKBIXBKXAULNNVHORZASHCNHCZEQENUKACUJPUIRRBHYTHMHPLHLYVLMPIGSCTDYWVJVTTDFBWUFDIDKQZFRSEDASQXTQVBRFSGUQZELWCGUPUFNBYRYDVSXQPNOUIZYV");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("JRNKBWEOVDXJZHKYFZMUEGXWDXFFDOPACNFSNWTLASEEBKDKPXXAHXTOASAPVUBLLJGUSGXLLDJVUNPKNCOSQHYRXQPJZIIEMRAJFJULIZHGVGICQKWQEMYGZBCRSHWSUPBFCMNZYSJMGTHPDVJLZFRBZJIGUVPYNDQWAMKUGAHRNCNFCQYAQZSWVLOQOBYQHCSRKLRBQF");
    tmp_msg_0.feature_type = 163U;
    tmp_msg_0.rgb_red = 185U;
    tmp_msg_0.rgb_green = 59U;
    tmp_msg_0.rgb_blue = 30U;
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
    msg.setTimeStamp(0.297197697064);
    msg.setSource(3730U);
    msg.setSourceEntity(11U);
    msg.setDestination(37159U);
    msg.setDestinationEntity(250U);
    msg.id.assign("LFWFOPYGCKVTIYXMCDHDIHFGMZWTOGPLDCTIKERYALCDZTGVOXSEIPJQBSXFROSLVYIERGBFCLSMKJNAUJHZYGNBQVPBXEXOKHUEREHNGPSBFDTMOQUUEXLRHKWUUEZDC");

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
    msg.setTimeStamp(0.775679981731);
    msg.setSource(41141U);
    msg.setSourceEntity(253U);
    msg.setDestination(35481U);
    msg.setDestinationEntity(77U);
    msg.id.assign("IZZJORMIAGVQWNLFKIXUFACSIDTOBPQOAKTLWPXRQYSTJEHZCRTOWSXJRWBDPCNQDWKQVJHXXANFFAZSZFGHKWMDURYXPNVFSKQMCVAQKUDLRNZURJAHECFYCSDGEDCRSCOOETMPMOXMCTBNHMV");
    msg.feature_type = 1U;
    msg.rgb_red = 27U;
    msg.rgb_green = 92U;
    msg.rgb_blue = 134U;

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
    msg.setTimeStamp(0.884511197303);
    msg.setSource(38305U);
    msg.setSourceEntity(57U);
    msg.setDestination(11151U);
    msg.setDestinationEntity(237U);
    msg.id.assign("ZVXFQKRKHQXGJLHNYRKZNELAXUNZDVMIITRRAZHMSHPZFNJVJNGNILDKUJTVKA");
    msg.feature_type = 186U;
    msg.rgb_red = 42U;
    msg.rgb_green = 223U;
    msg.rgb_blue = 243U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.890326222433;
    tmp_msg_0.lon = 0.559213909161;
    tmp_msg_0.alt = 0.802625229161;
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
    msg.setTimeStamp(0.291415098162);
    msg.setSource(58012U);
    msg.setSourceEntity(124U);
    msg.setDestination(31183U);
    msg.setDestinationEntity(167U);
    msg.id.assign("OGBJBQMGTBSKSKEYSHJVLNXPFMDUQIRVPWXPYFCEFLCCKUYBXANRGIRWTWTWIOOGYDOPVUSMEXBKDRMYHNTOVZJEAAITUKACMEDZNHWVJZIKUOGTCBDKAVIKFSJGZAMXBLQNLSZDWUIJSEHOCNQSFVUVJCHZFTNZCQSGAMPWCZVHCLKYHBPNDSKBRBYEFXRNLYQRMPJIIJOLRHLMPFWTQADRVUJD");
    msg.feature_type = 59U;
    msg.rgb_red = 40U;
    msg.rgb_green = 125U;
    msg.rgb_blue = 252U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.188085500106;
    tmp_msg_0.lon = 0.410628017577;
    tmp_msg_0.alt = 0.601500881807;
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
    msg.setTimeStamp(0.176756310954);
    msg.setSource(34777U);
    msg.setSourceEntity(171U);
    msg.setDestination(64897U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.155181449951;
    msg.lon = 0.0834770691321;
    msg.alt = 0.718624199124;

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
    msg.setTimeStamp(0.00378232216216);
    msg.setSource(48563U);
    msg.setSourceEntity(3U);
    msg.setDestination(41581U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.805515144728;
    msg.lon = 0.48114767711;
    msg.alt = 0.428473075158;

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
    msg.setTimeStamp(0.145853275958);
    msg.setSource(27431U);
    msg.setSourceEntity(178U);
    msg.setDestination(58847U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.881059098989;
    msg.lon = 0.00504481101732;
    msg.alt = 0.465124900158;

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
    msg.setTimeStamp(0.165910452145);
    msg.setSource(8735U);
    msg.setSourceEntity(158U);
    msg.setDestination(61072U);
    msg.setDestinationEntity(102U);
    msg.type = 53U;
    msg.id.assign("PFTTXCRXOQZOUUAPIYSBNRMVIMFBQMORGTGGANNHJECCSULHBDAJYYEEWPVDTPYFTINKWCWRXZGVCTUUPAKKBNGSGMIYJDHWWZGZAUBZFZBNKDLVAMECGPZU");
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 74U;
    tmp_msg_0.angle = 0.627179828613;
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
    msg.setTimeStamp(0.867369923537);
    msg.setSource(14013U);
    msg.setSourceEntity(16U);
    msg.setDestination(33461U);
    msg.setDestinationEntity(74U);
    msg.type = 115U;
    msg.id.assign("SJZYYQXFTOMNYMMVRVWNVPULXGZXRPILSQPOUHRKIRDYOGPKFOTORNCMGIABXEZQAHLEREAAQBYVJGTWZEUNDRCBLXXVDMWHJZOQZQWGQDXVZSNJCAUPQUPGOFVUONWNHCCBUDHPKKIICRJZBBJHPENZRWFDSBRBISFFIMNSLGLFUKWYJVYJDBFIEZTKLUKJXDDKNTAYLQVSSASTKLMHCIWPEMGCGAHXBGQKPHTCMWLTTEODUTW");
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 133U;
    tmp_msg_0.angle = 0.723895529249;
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
    msg.setTimeStamp(0.77710957293);
    msg.setSource(61745U);
    msg.setSourceEntity(213U);
    msg.setDestination(33915U);
    msg.setDestinationEntity(78U);
    msg.type = 80U;
    msg.id.assign("SINOZNJEUCKLBOGPNPLSSKNZJWPHHSZFYQCVGNPYHTPXYWWFOJMUUPSTZWBALJCYJKBQRAONDWQUQTKCFLZC");
    IMC::Heartbeat tmp_msg_0;
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
    msg.setTimeStamp(0.510809365274);
    msg.setSource(35853U);
    msg.setSourceEntity(45U);
    msg.setDestination(26149U);
    msg.setDestinationEntity(11U);
    msg.localname.assign("HSPEJRILESMACSATOEGWFCONHKYBJFZIRFDAHXENJATCGWPCCSUYORJKEZUSKEPYKFDQHVOJADBQULBPXBYVZEJODIURWARVFQNQNRIUCFUNLQEVZ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("HHDOXQVZBHOMJLSVAGEQOCZMZUKTHRWLRFQSWKGCAKYGTVYQDGFICCRBDAGSQIMXNGQWECPZRNFYTTJLJEOMDGYDACTSXCHHYSIYNCXZQYEIRXVYLKNMILYGHPPHJKANFPNQHDUXSWPJZXLJKSQIQRWRUBFOBEIFBLMFBVAFWAPOTKJJMUICECXPBUWIVGJLHPYNMVAPFZUTWAUMGDWBKWZNRAIORDZ");
    tmp_msg_0.sys_type = 238U;
    tmp_msg_0.owner = 48281U;
    tmp_msg_0.lat = 0.931971191016;
    tmp_msg_0.lon = 0.210733501469;
    tmp_msg_0.height = 0.0619806248056;
    tmp_msg_0.services.assign("DBDJKILEUNHHPFSTHLZVLSDZNHCRUGFOQDYQLDRKSARXXWABCUKMARCSPITQPPFJZNTWDXHAQYTUZUTVBIZOZNUUFVKEVHNXBVEWGDTTMGLMIJGLPOYKKAGKWCTSMMSRJVLGBLRAWEEYZOYCHGMPWPNEEFMKQQFSIHWBGMYCFILVFGIZXVAOUFTJCDOQXXXCJXAWURJPBUBVYQSJQWELECCAGPJMHOXIWZDZJBEKRSNKARYTQFY");
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
    msg.setTimeStamp(0.896464827143);
    msg.setSource(39671U);
    msg.setSourceEntity(41U);
    msg.setDestination(50888U);
    msg.setDestinationEntity(223U);
    msg.localname.assign("NWLBMLWGPIHIBEPHFOVANOUNXHYUSXYWDXBJMVCDKQODMHMOFIUUNZUXZJGJPSBCVQGKUBAXWTSKSTSLHYTSVYGGJPQTJCYFOHNGKZKGTLOFWDPIEEOGZOJNWAEIHZRRLWPXNSRABPKJUC");

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
    msg.setTimeStamp(0.199917147541);
    msg.setSource(24438U);
    msg.setSourceEntity(160U);
    msg.setDestination(40270U);
    msg.setDestinationEntity(47U);
    msg.localname.assign("OENKMYSUURCHFWELRIINVLJFOLHYGUZRAWXJHILIJURZQSPZTHVTDNGCPC");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JTFXQDCSZOZPRBGDWAMSXXSRLVTMIDFVGWPPLVLWZLLMYKFIMPRJXQHRBWKUNDZLEAEWKKSZLOCWIBAWKAYGWNNYBOYORYQYGOJTILFBZUJRJZHMWPGYBQJVGFKCIIEAMENXPDIZUBFXONNXFPDCCJLPWVVOTUCPORHAVUJJSCIUSTKTUQOAGHU");
    tmp_msg_0.sys_type = 110U;
    tmp_msg_0.owner = 23419U;
    tmp_msg_0.lat = 0.892831589149;
    tmp_msg_0.lon = 0.281052704415;
    tmp_msg_0.height = 0.291393753285;
    tmp_msg_0.services.assign("TGNAFHNXUJCWGPSCEEVUIKNUXIYDIVIIJLOPPOUADKML");
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
    msg.setTimeStamp(0.768439770783);
    msg.setSource(31662U);
    msg.setSourceEntity(243U);
    msg.setDestination(48722U);
    msg.setDestinationEntity(243U);
    msg.timeline.assign("LZHBNEXWIRFHU");
    msg.predicate.assign("UREVGKTYKWRCCAVZXAUONKXAMHEITVBIGMEQHHYFCZPOUGOIPHRBYZSHRPMNSSVQVJDCSZWUSENUAGXFDLQANXWFBYZFQKXWYKEDLIMMBVROSNNIFNQHLMGHYFCTDUQBFZWWVXICJFBENABOITKMRCJXZUJEPGZTKDTLRKCSDVSINRYFWPPRCVSPAEZROLDIBYGLTB");
    msg.attributes.assign("VFNTKAIKRWCHQEUIHODIDFRPXDNWXJZHPOXBZEBQLAJCEWNMUWTVTJFFYKOANAGZRTBIOGTNACDUXBHMERJQJCSMDYURWEBKYYPOXGVQNGFVWMFQPBWNHHNRGCMCYILAFXQZSGYEKPJPOJUOLDDKKDDLYAORGMLVIQFSLTXI");

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
    msg.setTimeStamp(0.147234295399);
    msg.setSource(49238U);
    msg.setSourceEntity(165U);
    msg.setDestination(23634U);
    msg.setDestinationEntity(141U);
    msg.timeline.assign("MKNQIJXMTUIIBXEFULWUSNWFGIVSGXIDCFQRJOHNCMXHGKNGOAAOXFZEYCKQESYGPAHKYHWUZEEREVMIZIKDWPPBYYZXTHZPLYCBPCVURMJMMALLKSPXJROFQYVNGUPKWBYUZNTOWEKJEAQLOSTHKOHDDRTTBVLVOZDJISPRIHNEBGCWFVRYSEKVSJOMAWQVALZTJOBGRRNPAXTABMDQTWQUTQFDCCQNZPGJLWFZRDCLHU");
    msg.predicate.assign("NWXCTIFCCRUKAFAERYBKKXFSTPBIHKHVCHZOSDMYDUXEJJLBFBQAKVJUQPIRGZNEUJLBGCMDQXMKGJEERPOGJWVFGQBWYBSQKUANOSVXIQTYHAZR");
    msg.attributes.assign("CNMHCIJSPJKKFWFJEBBQWKGUPXWSLVILIQNMDSARYEMHNZYTAWADBPZVDJCBNNGCJSXXHDSQLECPHXZDJHPBEMQTEIIPSYUXNQOQHQZVLLBGZYUTZUFKWLAIUUOTLVEHADEKOFSNRUTWDOVOGRKQDOWTUFMTGBRIDZOHAQAVACLRRZVGKIVHSNLYZBBYJTTYUXATGFOEUMCXWXNPKRFJVYIPGHWRXEPYKY");

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
    msg.setTimeStamp(0.760802039742);
    msg.setSource(36951U);
    msg.setSourceEntity(167U);
    msg.setDestination(15925U);
    msg.setDestinationEntity(127U);
    msg.timeline.assign("SIWUOJEIKQWMOGCURXNWMZCGNYAQUSTYEFWQYNUQVAMKJUBORZBAOFBUDHPVIDPVNDGCOZGGJMBPUIYAKMHZSLZCJFZRUAYSVIAAPDHHVVLXLCMQARBXSDWWOYPTQBXTRFCYPOSCRKTECK");
    msg.predicate.assign("NZFUBMLDDXHCHQWZEMAHNUZUZJGMGYPQLKPOFMNNJFXEEJOXRNYDFSWYFHOECOEVKNGLRXFBMDYSKTJMCXHBPKQ");
    msg.attributes.assign("NZHRBVNSVHIZUPXMDVKBKNQWLLDRQBWTGTCBXYFZJPXAVGWJRASEXYBEWKHWEBKLCGWESRMSVAETWOZQUYRYYKDPJRFBIQOVRFEEHEPQIFBIHMUSNCASIZJPTMCMODFIXIUOMGLNLHTGOZIGUVRJDZTFNBTGHJCLVJXSLVDMUJDLDPODOKGKCTWGYCFNHPLLSQXOCQAQAIMYAYHQJCCRUOAHOIMYFKAEJWVBXNDUPNQAWZFS");

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
    msg.setTimeStamp(0.325884783588);
    msg.setSource(43665U);
    msg.setSourceEntity(194U);
    msg.setDestination(28297U);
    msg.setDestinationEntity(173U);
    msg.command = 124U;
    msg.goal_id.assign("DWWYZKWBQKPMPYHKSGJMWHEOLDDSNDUZAESDJQFTAMRYISZQPJEBTBEKHGIINRZBIRPUHXBMVANMUVPXACPXOCGJYGJBVLOWHPQNUNSXIWIMHBGOSKZCXTPFWNROXHJVYIWIBBMUOXTZETVOTIYQLKQUXCRLMKOCOVCQVKFFPPSLTYTKZZLTERCWAVELNDJAGSQGESNDJUXEFMWYZJDRU");
    msg.goal_xml.assign("QGTZDYXAJVEIKSXEHNZWRURCBSRLINEMIYJGGLZCUFUDBKLEKFOTUVSCRELHXBDPMGIOPJBSNELKCJWRBVNQMPGCZLWNPWQALHVLKHIIUGTZEWLFSJSGPETVKVCMTOISCCZLHAQRJNBAPGMYHUHTUSMXOQWTXTZWYBYKNFMJOAYKYPFVXFHIVDYZGFQMCR");

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
    msg.setTimeStamp(0.372371501305);
    msg.setSource(26065U);
    msg.setSourceEntity(196U);
    msg.setDestination(22751U);
    msg.setDestinationEntity(83U);
    msg.command = 211U;
    msg.goal_id.assign("LQXCOMLRZMFRHROFZCDQKSJKHDMYIVSB");
    msg.goal_xml.assign("REFPUNVHXMZFLVBTNHXIMPPGYOJEFZXWBHVLWKCURSCZOLEDWYTAJQZEVIXIHQDRCJJGCYAIIGQYMALAGWDSYLYSAGIWPVBVUXRWHIQJWNEGGFMMJKUNUZBTOOOREMGOXYKWSTUVDQKTRZTNSXHXIZQUDCY");

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
    msg.setTimeStamp(0.992352790671);
    msg.setSource(30282U);
    msg.setSourceEntity(39U);
    msg.setDestination(32856U);
    msg.setDestinationEntity(165U);
    msg.command = 62U;
    msg.goal_id.assign("LMYRQEIPIUZVDJKCNJVWRTLEPDBRVTFXRSABUVHQOKHIGKNKKNNEZQNUOHWXUANBBGAJNDOMMISEKWPQNAMGGHMVSZZFBFPUPOSZLCWXRDSFPEAOJVQAC");
    msg.goal_xml.assign("AACCLCDZYGULCITWNVTLGSHJNSLJQEZIKWTLVUDOGCWXIXCHBFISKKNWROQFIHCJECBOBZUIVEJPAFSWKRLIUNQZNQRYEQOBLXRNZKGOHTOQRQEFQMXEWTVTGSCBJANHSJMEPETBPKOZXWNMMYKZFIFNUIQMRFVUXPNBMAPPKIYZBTDLXKPDPTDDZDEWBVURAZPSKUCSDRYYJWYUWVRMAOUHHGMMHGTGDXXALAHDAYJFJSXFOOYLPBVM");

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
    msg.setTimeStamp(0.265740726299);
    msg.setSource(59808U);
    msg.setSourceEntity(9U);
    msg.setDestination(65049U);
    msg.setDestinationEntity(216U);
    msg.op = 19U;
    msg.goal_id.assign("WVMCQYGDTFBXJMYEWCQENIFNIFWJAYPKLRCXLHZUBDZZZJDSNNUAIRCIYCGIYHRGHBGVJAHEKBEOXPEJGKPULTWMMZTHXGJFUWAFNXUEDINRCIPQCSMJYAMWUZMQTUYAQODLMLJHCTKRLWOSRPKCXSCBIAIHTPMRDOEOBJQZNABAQBEQSLJKTRZLVTOTVLSDSDVEUXNW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AYLIJUWRNRXKJDDQGMXVIXGTMFCZKATXCFTIQVDUNUXKSOQBOCXEGKWMQJVTVHHSDMLBDKVWVTVKNRJBCOTLJIIRTCNQQMFJLXUUSMEISHGMQDOOQOBSHSHNXB");
    tmp_msg_0.predicate.assign("JTRQZYWFHVJBCEJAAWGENFFTNMDCXSHNKHLTNJVSMXJOLCKRHWPPSVLXZRFSUZBPFPKGMWBYBC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TYDHGEXHRHVGRIXFXVQQEYWBTPLOGUVFDT");
    tmp_tmp_msg_0_0.attr_type = 200U;
    tmp_tmp_msg_0_0.min.assign("LWINJURHVWJMQCVXRPGESAOFLTSTNYXQQUHFYBZLHBYGFIJDPFXRJKMNUADXTUGKBPGWZWJVKXPATEFELNCRCBDAVWPZRHGALQOLLYPYESFCYNSXEPSOGZKQSUFOOCMIURMGJIDKZYCDQICZRUDSPJMRDBFXVJAFETJSCVEAZUUNBTOGDOAADMWHWMQBKELNPBSDNY");
    tmp_tmp_msg_0_0.max.assign("JWWAYCSJKHSYUAMFUCNEBIBDQZQXBNLSWVIXHYOPQLKDEIKXQRBZOVVBCSQAUKREQADHUMGAEMNUD");
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
    msg.setTimeStamp(0.590448160033);
    msg.setSource(8516U);
    msg.setSourceEntity(201U);
    msg.setDestination(14911U);
    msg.setDestinationEntity(155U);
    msg.op = 12U;
    msg.goal_id.assign("YQHEXCGMTNHEMPSBKNEIBPXADGAVZUEMULNYLOZZHNTJFSMCLSKUIBKALEFFGDJWJXHGTFCBGITPYN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MMLCKTWYWAWAGFIBEBHLCGDPZWORXWKKHEUHIIXZGNPJXACNJKRWVJYUHAHRNXQVLTZCEEZFBVGPPNMPXXQZSTTTOUSRBBSVAEISUJSIECVMTFJPCBGSOYZFXNOPOAKQGGNNGZHMLRDBLMYXLNKVCDFPKJHFNLOORDBRIKYWSVZVDXHOQFENQRJRETKPQAQUXWDWIAAQQGHZILTJMDFVLYD");
    tmp_msg_0.predicate.assign("UJFYARWAHPDSJBESNKQCKYENTCXAAYBTHXDXBMMDCXUWCBMIXLKIIXLNGMNQUAIKKQJWGDDLZFZMZ");
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
    msg.setTimeStamp(0.264548832598);
    msg.setSource(40059U);
    msg.setSourceEntity(95U);
    msg.setDestination(24919U);
    msg.setDestinationEntity(229U);
    msg.op = 124U;
    msg.goal_id.assign("MEOQWLVQRHGLFXYVQSCEAJMFAWLNZNYKSIUIWBHAQVXIQGJSKYREBNMTRHPQOVUZYLVZSFSYHXXNEUDFHJNHGEVXCZSCBUAPMOIDOWJEHGXTOKGCGBQLHZWMRNDLVFJMAVVGAZXUJKCPBNHJEQJGQTIUDDEBWYTYCKXDHZFWUASTSJIQFIMNLGFBUMCKZRTRMNKRPIWJKSPEPTMKBNLPPDCSTZWRW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PZNOEIKJDZJALEURXGOJLBOWUQNECMDRCENEWKDRTOZXIBGJULTWMFTVFCBHPSXJMRBNJGMHILIAWTXVQ");
    tmp_msg_0.predicate.assign("DJINUOGEBQRSNQVKTSVOTICVIXLCQJHZEAXWCULJBGUCLBZGFEKMSPPKFVEHRZBJUZWZVNDD");
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
    msg.setTimeStamp(0.91110934585);
    msg.setSource(15491U);
    msg.setSourceEntity(208U);
    msg.setDestination(23381U);
    msg.setDestinationEntity(252U);
    msg.name.assign("KXCWUEAEHLFHMBWZYADWIUKKQDQLTZYTVNKAMCEGQNWLBHAEIUFIQXFSQZZSFZBCEVHTCHBOOONGTYVDDSRIZGBRXMWGOPVYFXMBJRXWCHMKWJZTGKLSVIGQNFX");
    msg.attr_type = 150U;
    msg.min.assign("QDAGBHZITAYVHTLYXOBZAVOOWBXIQLIWJKNQLVUGXRJLAHMOEUYBCJBZKDLPVDDWDCSDHBHLGIWZDPDRMYJWGPQWJYTENLQCXZIEXHFSGYRSUUXCWNSTPIKQECRBMFNEKUYPQSLABCRBOPFPNFFVDFPSEMXOWAWMCUSBYNAFHJJAWOGKXIQYPFSTGCSIZJUMHLKMHQDTIKGEJEVCCIKMVXUZASTANUOOJQNEUZFKVY");
    msg.max.assign("AIZKGAIDOZXKUQKTBAVDWEMZBZBRCOIUKFFKXVVCEMLQZSLEWAPVRMKYZVRSYIGZNBXRUJXHJQFVNVJWJRPBSYOJACLAEPYMATMHORNBCHXSWDHSXCTOFNVJYRWQWUHNEOFWDKFXKCJG");

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
    msg.setTimeStamp(0.232349068367);
    msg.setSource(18276U);
    msg.setSourceEntity(239U);
    msg.setDestination(11875U);
    msg.setDestinationEntity(249U);
    msg.name.assign("AKUYMDQNXUOXSFUIMPHEXYWCDCZJVWORQRNYTFNFTLVVOYSLLVUWNRVJQZWPUMSPKYNNYWHXYVIPGJJVWPTELZZPCAHJDSIYIDHTCINFT");
    msg.attr_type = 101U;
    msg.min.assign("STEEVCGFUYMWDRHYTXDRCNTPLRGUXOWALEAJWVDVFGGHUEXNKOPEGWRYEGBAYOPYHMWIAZYYTMYBZCUIKLQPCEFQIJMGIZNLAQLFZDSFGQOBKIHHCSBH");
    msg.max.assign("LQCJXSUZVTMVBIIVIFEPKKLBTBBTODZQWPPHRNKPKAERNCGZDEYPDWCGZJIHVLNBPUVSLTENZWAOEAHHIDVUSUUMFDQFZLCXHTTSJGYSXXXYEKBMSEKGMCIYFVHNMJTRDQQOFRKYGGWJAUXYQTNLWLIDUWHFJIWCWYMDRKHPMQZLMXBCXNBORSPOGZREZVFWIC");

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
    msg.setTimeStamp(0.313550981119);
    msg.setSource(16755U);
    msg.setSourceEntity(27U);
    msg.setDestination(32232U);
    msg.setDestinationEntity(136U);
    msg.name.assign("BPLOTMMDYVZBJUAWNYFJOCOFBDKQPKRCRXFDNVGSSBDRLTNETZGXNXFJIWTHGZDXKKYPGDWVTYSHGCHIUZLJMJTZOUKWRZBLOCBSGROSCHVKIIQBQHFQYJNSNKYVOYJADRCN");
    msg.attr_type = 59U;
    msg.min.assign("GSCIXJWNSEAAHHYPYFGSVWNUPTKILTQMLMPHZOKRPVKYXULHPSQABAPODBQVAHUORUIISQUGROCBEVPZYBDFXDLLQNXZFNUIIVZMTFUBKPDUBMBOZWIVKXIXWRGRBLJDWJJMKZLIHFWUYTKQDSMCRUNMLNLMNGWTHZTNASDTZSEXJVGOLQKYVNAFP");
    msg.max.assign("BETFLDSGSAHWHIGXHFVZKJFRDNKATPNTZPSPFZDXJEDVNQGYXQYOKCFQAASZDUOTJLPMOWTHQRRAMBAWIDOOIEACECUPBSVMMRWVZWXLRWDPUYXYQNSWCMRHTXBLGYVSUMGIFMXYIOPUHZLOVPIKVILWYUUJLNRGYQDKBUSGUQLNJJLFUZZLNHSOKTAQXWKEBMXIBTNCIBFEFQJOGG");

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
    msg.setTimeStamp(0.245806725968);
    msg.setSource(720U);
    msg.setSourceEntity(127U);
    msg.setDestination(58327U);
    msg.setDestinationEntity(54U);
    msg.timeline.assign("JISYNJRLAVFCAQCNMUJJYRYFPFJQAWAZDYGYUDUCZOTDQSUTDLBPDIMVAKTGLNJESOOFAXGIPROSINGSTPTFCKIQBKBVIGUITHNBODZXLQNPBENATXXMARXIZHWWVESHTQNGMCVMMBEBLZZMMVENXLSWDKUHVELKCBXARLOOIBWKYCEOLFWFWYDQHUBKYDRFPRKGASSZKPMKZUSCQIHXJGTEFOCOGRYHME");
    msg.predicate.assign("WVKSMQAZHSWOINNAFAMM");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("OVNRCIUTPTVJFQYGJPRXMJHCGIQSZMJNYYACEEKSZLQTJQZKZGKZKUPTVMHLDZKYDKBPWDDEOBOHHGCVMYFDBWWBRTLLJASZOFWXVMQOUFGOMTAEJSFSCFTHOMAAWBWYKREBSQOGZNMLUXBQIAQKNAJALCTDNZKPTSLACPWVTPPRIIYGNHCHNXUF");
    tmp_msg_0.attr_type = 191U;
    tmp_msg_0.min.assign("TXWRKUBJWEISMOMISDOSVCHFBLIVEBYAQEHDYUJKISBOFKPNSIPHDVOPQGLSJNVMPCBMLPRORENATFXGXSZHTUGOTTYYUGZGEOWVKWRKQYEJSUZZUNDVBNAXDASZDPOMWYWCPEYVRXDCNJKAHXGIVJUHGFBUHWAXXXMZMDLTFCFMKBRPA");
    tmp_msg_0.max.assign("ZWYUTTCVVNHKAHIANHWNLKDTRZPLJAGELSPAEVPQCMVOPWRWVKDCPLDFNPEOQJFYLCSUIOZMDFSUAOCQMUIUXJGHXTAKFQVBGFYA");
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
    msg.setTimeStamp(0.206574756396);
    msg.setSource(7577U);
    msg.setSourceEntity(220U);
    msg.setDestination(41676U);
    msg.setDestinationEntity(170U);
    msg.timeline.assign("JOVAFTOSAGWICGFWCERXDJGBHLARMNZVSYKIIVIVUTYQYGZCGPLWGPWZRETKTOAZGWYWQIQCHDBEEIVKFVASSPBOBSOCVHIOOHTURUPYSXENILPDXHUNCQGLXCTAJFNDYFQQEHRNFCDXNYEJMJMFUARKZJVFEDUIPHM");
    msg.predicate.assign("KLYATODZKMMDJFIMCFXQXJVZOOXINBWXACFZPUGXERFNRCDHDHANPTTPCLDZPGYIGJBVYNKOGNJZPSUOBHLHNWFUYJTHMLBBVCLOKIPCELYZSYJNSBKNGJMERPGUMMZGWSYZQJWLTEDVIDTGYDHKVXQWYRQZMIASVSYSAUQQRCUEISSNEXG");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("VWIRBPUZZIKXHRXRTWUPVCAFKAJQGITXODOAMMODSCUCSYYYYXCZQFSIEHAITSSSXYBIWHDSZLNTLSVTKDHPAXGVUUQEKVBKNCJMCWHPZVOIXJMUZZGBWOVMVLHYNOEVGAWNCEPPSFPZBKWETHITPLLLJWUBUBDYTRWKGMECQFKCIXLYFXGOLCMBJJU");
    tmp_msg_0.attr_type = 109U;
    tmp_msg_0.min.assign("FEPYTBTKRASDNHFGCPJOKXHVTNGWQSGUHPOWJXVXQDYTYUMDROFRTOINXDLXSRXFUXYHLMHCEHBIWSDLZPKJEUOMVTBMMGZVFNPYVNMHQFUXFNQDLBJCMLESWQFCKAKYRAIWBZHLJDSDZUARZQYDSSXWLNTZXQPCVJOGCCVIAEGIATAGFWNIMRGKVOHKFGTCSBUJZIYJOZMPKGKVYUQVEABZEWUARNBRLCE");
    tmp_msg_0.max.assign("MUJRGAGZRLGLYOGHSWVOHPUYMRHPHGNZKAFLXJQPTOQREBJBGRKPUVWXUDLBAYZKZBJ");
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
    msg.setTimeStamp(0.857357367651);
    msg.setSource(287U);
    msg.setSourceEntity(206U);
    msg.setDestination(58281U);
    msg.setDestinationEntity(83U);
    msg.timeline.assign("RMFTICCAQKQLQNFOPDJUPMWEEIUUJKTNWYUICESTHGPHOZIPSTJBAWNMGDRKDVOLAQSHXCKKPFU");
    msg.predicate.assign("UEIRAUKBMRNIOYCVCZQLPHLQUTLRURHOSMZKU");

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
    msg.setTimeStamp(0.922877630127);
    msg.setSource(6955U);
    msg.setSourceEntity(198U);
    msg.setDestination(10818U);
    msg.setDestinationEntity(229U);
    msg.reactor.assign("CNXECVZHYIFHCXDWMXSLXYVNXFLVCMFNYJVVSJTETBKVPSWJPNKYZPAUXMMHHDSWZTWTESRQEBQUDNQRYBQRNEFWIOAOWEZYPCWIZLQPQCMRGCOZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SWIZNJLLOBPSJYKRTVJALWGXQFREAGUDYLFXEVMPZQHZKUEQESJKLKYHUMMDZVHCBSPWZUEDNSHYACIFXTKUAAJZTVFGXQTDUCAIZESGNRZWFKBGSFO");
    tmp_msg_0.predicate.assign("HGHCIJKXCTIHNUGBJFTBHPAVRNGCRFIZQUWYDIZHNNSIEQOLVUHKYFTGYBEYMDCLUBOLEKUVOJEISNYYMSQISFGQPGUWSLRHJXSWQTEASVTPAFBZEWIOPPTHAONLKKRWXBVTUWEPJAMKFPNMDAIWZMQNWMMVMLFUPWSOEAXNKPDRLYCCKOUOJGGMUJNZKTYLDXSYQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BTDUJVNOGXWNSPDNHGNYHTCQJVFKDDCBKJKJHPUGRSHYZ");
    tmp_tmp_msg_0_0.attr_type = 156U;
    tmp_tmp_msg_0_0.min.assign("EKOIVSJENLLFLBCXWTRFZD");
    tmp_tmp_msg_0_0.max.assign("QAXGQXNYNEFEKRUEOJAUVSFVHXAIEXNLIOJFOHACMUWBUORHODPDXIVQVFQTTIRE");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0804397040092);
    msg.setSource(54571U);
    msg.setSourceEntity(181U);
    msg.setDestination(42018U);
    msg.setDestinationEntity(220U);
    msg.reactor.assign("RLYZEOBGDCXODVQLVBWFDRQPJXFBZLNJPMHYOOZUDTPNGOSFADUGSHVNSHCBNLHMASTUTIKWOZRRILYFQWMS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UFOMRGBKIFTHETYSNIPKHVPGWRKBXBZOAOHQQEOZBYHCOCSFMVDCIMUYWSBSZSGRUQZJPBYVFKBXFAWOYWPZEASQJJBTLOXJUGIFYYQRNJOVHNTXJCYLGVJEUKSQINXLCPEUFRYUVPHLFUPQEZVLUKALIDPGWYWBKHSVOICCTEKGCIOZMEZDWBZITAMPESDWNVTMAEQXTVRXD");
    tmp_msg_0.predicate.assign("PHLOIKDTWGEAZNSSNCRZEHKTOKJUYNVXWNNPPSPKYUDBZKPQYXKBMRRJEVHXIOGSIFFAMHUAVEDTOQTKTBCIRGXHAJFYJAVTYCEGKNUMQWUOFMXZLFYZEFYYUJUST");
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
    msg.setTimeStamp(0.711157158541);
    msg.setSource(24154U);
    msg.setSourceEntity(209U);
    msg.setDestination(58093U);
    msg.setDestinationEntity(215U);
    msg.reactor.assign("JLPTVTGVZNISOSZTPVWWGWRZXEDOFFVPTDMPIAGKOKUJOUTHZCEBNIKFPHKYWEPTBILZRMTCFGIJACPSZVBENEMYMNQUDHSYLQAQSMCHQRUPAKUWJNZMTRXNOUZYAJDRVYXFKNYHGVIXBPIHVASDLBFSKEQFMNBOURKSJKCQJLDOZOXEBHAVIUOYEQRDMGCELSFDWQFATPMGJKGRJLXUBXCMYQWYCNOWEBFSYVLGR");

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
    msg.setTimeStamp(0.748323793272);
    msg.setSource(36671U);
    msg.setSourceEntity(6U);
    msg.setDestination(56079U);
    msg.setDestinationEntity(171U);
    msg.topic.assign("ZCHVNJDGQCCPVODBRAIYJJNDVGCWZPCRKOOVOAUEUWWBFLGDYCAKTSVLVHNGXAOGCTEOXYBTMVPMPFDUHGXJBMUFKKQPMVCEKUSBWHOICOLSFYGSKABDZPBKQIXYWRTKYTXYQGHLQSSYMJEWLEIPQFJSIHMTIQLZPVLIZLYAIQRMDMWKUXUNOTZHBGZGANZEXRJEUQXZ");
    msg.data.assign("YWOVDCHPHVAFFQGSRTHPZAPJKYPMMECOCLIYIGKXESEDSQNHHTNWJOCGTKLJWRGKTPCFGRDIJZWHBXCHEFODXDVONIXHDOSEQXWJSHBTQUEAMUCGNBRYZFBSUMRVNXQIZIIUBTJDQLUBUATKXJYFKNWWESNEUTLNKPTBFIF");

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
    msg.setTimeStamp(0.409516137725);
    msg.setSource(25943U);
    msg.setSourceEntity(173U);
    msg.setDestination(4773U);
    msg.setDestinationEntity(161U);
    msg.topic.assign("URQMZJHIOTMDPFASPUHVBPFCJDBUCMRSQWSGOIYELPUTKXBXRQLQATPFXBYOITIKLESVWKWFKMDG");
    msg.data.assign("OPAYMGFZSQOJNTGOPOIMSILJSZUEBYNHRWUSMIIHMCCFFAMGWDBXQBGBMBBUIRVAZGPTVKEPWNQUKNURSVEMXDCKEWJQFPJRRJJYDLCYTDELXYXHHXQPMFTXAZWJWTYOLYAJVUWQIGDSGFKVNFAPUSLKVHGTDOYJCBZECRUZEOCWKAHOOABHZUAANTEX");

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
    msg.setTimeStamp(0.308234844833);
    msg.setSource(5706U);
    msg.setSourceEntity(77U);
    msg.setDestination(21875U);
    msg.setDestinationEntity(1U);
    msg.topic.assign("VGPHKBWTGWIKLARXXFZCGLBNGDBTHRRYPNVLCVXDNJPSMWGTYGCHZAGKVHJZXBYKOAJIZUBYBCYMQSLPSLKHENRXGUXNPDZEMDWDOIMOKWVAFZEMTWETRYOTWNFRATQOQLAQQFK");
    msg.data.assign("QVHNMINJNCJKLOMIPDTHDYQCUCDESAQEMBJYIBXCBTVCNGRMHREMLBVPNZEPMLXQKXKHVYOYBQHODSBIBVCYJTGORKWFJUFUTIBQWTT");

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
    msg.setTimeStamp(0.690203215215);
    msg.setSource(42137U);
    msg.setSourceEntity(148U);
    msg.setDestination(16445U);
    msg.setDestinationEntity(138U);
    msg.frameid = 30U;
    const char tmp_msg_0[] = {23, -83, -124, 70, -18, 33, 65, -26, -19, -32, -114, -14, 111, 42, 95, -44, -92, -26, 63, -5, -41, 118, -37, -76, 116, -27, -39, -45, 23, -117, -67, 36, 47, 117, 58, -21, -86, -70, -33, 71, -118, -106, 81, 93, -71, -103, -62, -49, -11, 75, 75, -89, -6, -100, 26, 86, 72, -18, 44, -96, -26, 44, 35, -40, 91, -14, 31, -57, 10, 57, -128, -78, 41, 67, 32, 1, 59, -82, 126, -114, 28, 40, 13, -81, -126, -55, -8, 33, 113, -67, 85, 28, 42, -27, 21, 31, 7, -2, 115, -85, 88, -122, -120, 14, 40, 114, 42, 103, -68, 92, 74, 1, -127, -116, 74, 28, -117, -97, -104, -39, 106, 38, 68, -86, 86, 110, -55, 121, 37, 58, 112, 115, -74, -69, -20, -53, 6, -4, -102, 27, -21, -107, -61, -65, 95, -32, 72, -113, 101, -94, 35, -35, -75, -118, -115, -22, -20, 20, -90, -118};
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
    msg.setTimeStamp(0.368673379965);
    msg.setSource(64728U);
    msg.setSourceEntity(60U);
    msg.setDestination(28277U);
    msg.setDestinationEntity(102U);
    msg.frameid = 133U;
    const char tmp_msg_0[] = {-36, -12, 73, 126, -115, 54, -104, -110, -108, -118, 105, 83, 33, -100, -80, 126, 72, 43, 106, 64, -94, -118, 106, -73, 88, 91, -109, 118, -116, -20, 51, -49, -28, -20, -83, 58, -23, 98, 56, 62, 121, -28, -40, -125, 101, -114, -4, 77, -36, 94, 100, -48, -28, -77, -104, 26, -12, 2, 19, 80, -112, 25, -59, -47, 124, 110, 120, -17, -70, 90, 77, 54, 4, 121, 118, 92, 123, 84, 51, 0, -57, -126, -71, 39, -26, 73, 122, -53, 78, 80, 9, -11, -9, -85, 33, -56, -88, -72, -89, -56, -13, -96, 94, -29, 8, -128, -107};
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
    msg.setTimeStamp(0.906902440848);
    msg.setSource(65316U);
    msg.setSourceEntity(213U);
    msg.setDestination(46511U);
    msg.setDestinationEntity(224U);
    msg.frameid = 238U;
    const char tmp_msg_0[] = {-6, 17, -3, 61, 1, 123, -13, -57, -79, -61, 24, 48, 95, 108, -46, 122, -30, 52, -97, -25, 73, 89, -92, -88, 11, 81, -50, -84, 54, 71, 44, -55};
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
    msg.setTimeStamp(0.0717351077887);
    msg.setSource(20210U);
    msg.setSourceEntity(239U);
    msg.setDestination(16179U);
    msg.setDestinationEntity(120U);
    msg.fps = 39U;
    msg.quality = 171U;
    msg.reps = 118U;
    msg.tsize = 19U;

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
    msg.setTimeStamp(0.938892481157);
    msg.setSource(2479U);
    msg.setSourceEntity(252U);
    msg.setDestination(33466U);
    msg.setDestinationEntity(250U);
    msg.fps = 91U;
    msg.quality = 208U;
    msg.reps = 131U;
    msg.tsize = 160U;

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
    msg.setTimeStamp(0.0840920977098);
    msg.setSource(16277U);
    msg.setSourceEntity(193U);
    msg.setDestination(15636U);
    msg.setDestinationEntity(240U);
    msg.fps = 35U;
    msg.quality = 142U;
    msg.reps = 187U;
    msg.tsize = 51U;

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
    msg.setTimeStamp(0.459325617003);
    msg.setSource(23626U);
    msg.setSourceEntity(192U);
    msg.setDestination(2001U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.824830989345;
    msg.lon = 0.000123631710374;
    msg.depth = 111U;
    msg.speed = 0.501850008085;
    msg.psi = 0.470897333491;

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
    msg.setTimeStamp(0.0752767579867);
    msg.setSource(35223U);
    msg.setSourceEntity(222U);
    msg.setDestination(49225U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.118473346075;
    msg.lon = 0.646145573873;
    msg.depth = 189U;
    msg.speed = 0.793019101546;
    msg.psi = 0.683029260708;

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
    msg.setTimeStamp(0.533410558035);
    msg.setSource(8326U);
    msg.setSourceEntity(228U);
    msg.setDestination(50770U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.552022169309;
    msg.lon = 0.108119759607;
    msg.depth = 171U;
    msg.speed = 0.623570322341;
    msg.psi = 0.691085701011;

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
    msg.setTimeStamp(0.666845485527);
    msg.setSource(8121U);
    msg.setSourceEntity(80U);
    msg.setDestination(19652U);
    msg.setDestinationEntity(97U);
    msg.label.assign("GCIZDMCFLHBXHZKKOUYWXBIEBDJHZAYBPIXCRCWWAIUXSXEGORRPRUCLDKSBOTSVIYKDTOXEGQDRNUSMSTSFDFUECGVZAHQBAAPTXFJULNRVFVTSGLTVINNIMMOMDKNJKHWQDHXHPLWAXVQQTWYGRQBCVFPQKLEVGMCQZFURLTAEVPNYOJZTOSWMFBBIZJOVDYYKSOBSUEHQHEJWPK");
    msg.lat = 0.153747978713;
    msg.lon = 0.776302778502;
    msg.z = 0.28845614487;
    msg.z_units = 194U;
    msg.cog = 0.304871878753;
    msg.sog = 0.190561498266;

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
    msg.setTimeStamp(0.498465008882);
    msg.setSource(40649U);
    msg.setSourceEntity(204U);
    msg.setDestination(54754U);
    msg.setDestinationEntity(49U);
    msg.label.assign("QRHNBHATYYRCRXSFVCDEOZGORDQQZFKXTLOAZLHKDPTCVHYGEKZDNTCJANVENWWLQYBHYTZQTPJBDP");
    msg.lat = 0.96247667384;
    msg.lon = 0.183478413209;
    msg.z = 0.220130673538;
    msg.z_units = 60U;
    msg.cog = 0.954047840632;
    msg.sog = 0.418900002844;

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
    msg.setTimeStamp(0.862520230846);
    msg.setSource(55210U);
    msg.setSourceEntity(231U);
    msg.setDestination(59247U);
    msg.setDestinationEntity(75U);
    msg.label.assign("BPDATTYKQDKQRGPVHMHUPLXSFJQXLPAUNOKJVUAUAJNNXIERXXUHYINRELLDOAZPFTBNUVOEJXTBWMDMAYARFZZVLEAYIYSQMQWCBJZFUGHKNSFRFWJTMDGJZOMNIEQPCRWZVWIQGDEVENSMTKBKPXJBUABIZTDIVSLHHWZGSCGOSRFMCQNEROYBNHCCYKCTXKYCYVDG");
    msg.lat = 0.164449931538;
    msg.lon = 0.236871593437;
    msg.z = 0.0724576373971;
    msg.z_units = 252U;
    msg.cog = 0.459726820426;
    msg.sog = 0.671870527049;

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
    msg.setTimeStamp(0.56702545855);
    msg.setSource(37612U);
    msg.setSourceEntity(65U);
    msg.setDestination(51971U);
    msg.setDestinationEntity(135U);
    msg.name.assign("LFOFDQIZLDKGVRNTQMJHUBWCSEPCMCNEHJHCPAHSLIVYSUTBLRGKQSVBTLPEQCAYQXSTGVDPXWEPORDEEGNKRJXVZQAFBUPDBLZI");
    msg.value.assign("NDUADGZLXFMBWRKXPGZUAKTABAYCZVJKZYWLDHNXIUYS");

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
    msg.setTimeStamp(0.633580097247);
    msg.setSource(2317U);
    msg.setSourceEntity(95U);
    msg.setDestination(3790U);
    msg.setDestinationEntity(221U);
    msg.name.assign("AGBTOPHUVTPGAOJKYGRKIQRJOIVTFQSTOWGXHJXZVYXJMIRZYSLQNQNYHWMKBFDYRTCORPMEIYEYBVAZULPALDUTDIZRKVPMUUIFPLSELNEEPIDOMZMZHCCMFSNBAOEXDSPTGFRAXEQYRWSKNJMGLSZXXMHVFBWCVHIBILG");
    msg.value.assign("NSQFWRJIHVSQXZHLICVWEGRNNCLMVRMUSPQLHZIPLMXUXEVWXFPHBPKHNACEQWFUZRNKEAEOTDOJUCBCTRDLEUYYIDISFIHLDYCWDUSJHKRWXUBBOQKZYSOQYFZEYJLKZW");

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
    msg.setTimeStamp(0.102755144012);
    msg.setSource(37895U);
    msg.setSourceEntity(235U);
    msg.setDestination(48114U);
    msg.setDestinationEntity(62U);
    msg.name.assign("CWZFEVQUCQNRGDQUFSABELFIQOOLWZIFSGQIUEMBSRJGJEGYDIRKSIASKALBNPJQTNERLNAJJZXIVMAUUESDYQXDBUKHEWTJZOPMQPFEUSTFVHKZCBYEKMDHICXPLCLYGSENMCGHQYRMAVKHINOOKOGKOCNZDCHBGCWYHKKMRPZHFXXOMBYLNVAGRBDALXBTAD");
    msg.value.assign("IILNVMGBGDLTFRVQEKDXWQXZEDLEBZNTOSZMGZRKLKAPULDYHAPIEFYVGSK");

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
    msg.setTimeStamp(0.460772698513);
    msg.setSource(10575U);
    msg.setSourceEntity(161U);
    msg.setDestination(27315U);
    msg.setDestinationEntity(248U);
    msg.name.assign("SWLZVRATGWYUCIAAJOQZGFJJWGGLEWFPMNHIPOMXITOMUPFMIXEUGSKLBDABYRVALECVPVQULNXOHDNCLHQAVTQCDKZOMMKIEWNPFJRUQXFWVUOOCYKNHJJVWLRXPSSEEFNKTYOOMIPEBUGYEFIUKDCBNDJAZBHLHGRYJDFZUYQYRBQIAEFNKSGZCRHQTDKBQJLYSKSZZDXCXWINPJSZWRHYEGAMNSXTMPQFVGTXUO");

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
    msg.setTimeStamp(0.395520360984);
    msg.setSource(50152U);
    msg.setSourceEntity(109U);
    msg.setDestination(36461U);
    msg.setDestinationEntity(77U);
    msg.name.assign("CSTSNTCZHNKXRHTPEPPQDUKRHFKJZBUGTCTCFUD");

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
    msg.setTimeStamp(0.337269225098);
    msg.setSource(8310U);
    msg.setSourceEntity(22U);
    msg.setDestination(29576U);
    msg.setDestinationEntity(232U);
    msg.name.assign("RHEUTZFTQJMHHUKJIXYIVOK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EPKAZSGNCKFWCHUPMCUKTWNXQADHCYRSDLMNP");
    tmp_msg_0.value.assign("IBKYZTJNFEXDMSUSAGJNQCSEUMSPWLFHCUZAVJDGMZPHYFAEDWZGRKQOKWLDWBNXXVGTAPPOKONOJLQGCQBARRJRQHXKHDOAFTTSEOETB");
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
    msg.setTimeStamp(0.0155180703539);
    msg.setSource(15371U);
    msg.setSourceEntity(44U);
    msg.setDestination(20950U);
    msg.setDestinationEntity(96U);
    msg.name.assign("HTPODSZNBXRRKZMFIOGISOABBICVXDEUBJBCLEBNNUFNDYAPDJMPFKWGFZKCADGAQKMRARL");
    msg.visibility.assign("RNAGFMRABRIHQEDUSBHN");
    msg.scope.assign("XADOJMLTCATHFDJSIUQZOTIQHWNYDSVJDNLEDBIIBLGACWFFPWWROVWVENHWZMXQXKKPCOPKXUUJGNZUFJBLHUVWLMUMX");

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
    msg.setTimeStamp(0.104451235137);
    msg.setSource(52338U);
    msg.setSourceEntity(118U);
    msg.setDestination(44560U);
    msg.setDestinationEntity(235U);
    msg.name.assign("TQXQPJJBIPUTFJJQPJCWCZMMZDNGKSANVANAYWTIXDDZCGHTXBMXEASVZNOTNQWUISLCIOTKXLCONQAWXVOBSSLDKODJQFSDEPPBGYWBNSBRZZVSFKMLUKHJQMHYPQMJRGKKBYVCLQVURMFJIPAUEAJVYTKEFDPREGALFPNFIIXVDUOCHBOFHLWSMZHHZGRNBLMUGUWEH");
    msg.visibility.assign("WFLVXLNHDURKBBUHSYBWRXSGCLSEBUQUTFXFRDIUMKZMKVOZXQOFHQSXRJAXIZLEMROPKNOHHNSDJFIXTXWEIWFRNCGUTPNGSEEIGGOQUSKDIDAKBZDTYBGOAODZSVKOYTVBHCTTLKFDVUPIILZJOEM");
    msg.scope.assign("MDDSOYSSNGCUZQQBKCDHYCDBXVWPRGQTQIMAHTXYXFAVRRAEPDGASZXYBVBVWOYUNRPFVGYGDTQRKKZEABZPRSTIVN");

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
    msg.setTimeStamp(0.297328334046);
    msg.setSource(40149U);
    msg.setSourceEntity(199U);
    msg.setDestination(34891U);
    msg.setDestinationEntity(156U);
    msg.name.assign("LZXCAXWRIJZQZOYWBQUZYFCOGBGJXYVZCNAAKBHDP");
    msg.visibility.assign("CBQPNQOJUNLYUKHOAXWSGQTTHTHZNSPXGFWLAXYPNOMYYZZWNDMGJJAJCPKNUDGGKDBBJRHEZVMLANPVQKTXUTUAEIJYGQIEWNRGOSRLPVFFYVBOYQASKOZWBUBCLOZDUUZSBYSCWFPRRDVEAMJDOMRDHFTNFXIWYGLYITWVACWVCZJXFPZHMEMMNIXVIRO");
    msg.scope.assign("RSKGOQOSYORLUAMUHIRIMMMJBBALECFGXYZYVVHUBNOEDHAYRDJAXIASUEGALUQQFFRIHQNBHLIGBFCXNHRVUVRJZDOZPPEQNXICLTYOFIMFXYMYFRLFGKZFJPJZDMLYBEVZOEVGUWCSQHVSSVKBKJCHRWSTNKXZPKHWVBOMOAGDYWNKPTNICBDGWZCZUQAIEURWTFELLDUBX");

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
    msg.setTimeStamp(0.422965493358);
    msg.setSource(10854U);
    msg.setSourceEntity(174U);
    msg.setDestination(22481U);
    msg.setDestinationEntity(177U);
    msg.name.assign("PCMHXIYMEESFMBNWVVYAIQTZGFRZGYWKQMUKSLYRBHQVAARLGDCMBF");

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
    msg.setTimeStamp(0.553369451103);
    msg.setSource(15649U);
    msg.setSourceEntity(216U);
    msg.setDestination(40317U);
    msg.setDestinationEntity(152U);
    msg.name.assign("ZEBNUBNYUHEDKBPJZXOGRIAHBNFSUKOEEYOPMRAIADIGCXMTJFLUXXDNSGOYPETFUNOPMGGHVQSSTPWDNDCRCWHNAVLLWWYNZLETSBYDJXOVEJQJHABRPUAGJQ");

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
    msg.setTimeStamp(0.521378680385);
    msg.setSource(20600U);
    msg.setSourceEntity(164U);
    msg.setDestination(48146U);
    msg.setDestinationEntity(188U);
    msg.name.assign("LIUVOZATCPQIHCKKEJDTXBCPJNHPVQLMYBEGMWMITDWJRIBUSAXXHQTULFVJYIZGVENVCZZWCQOIUVPMDTIBGWCFDDFNCCFRGGMBKVLEJYNFFOAZYCZGETZJHHHDWFDFKAWXZQEBLGSKOBVEEIGAUXNRQSQPRSXPNRRNSOWUTYRKYAST");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ISAJGNWIPHOMHQJYXWUTGIMGHVLSYRJYQFRNOUMBPLRSQEGJYNMAMBRDVHBMXEUZHOGFA");
    tmp_msg_0.value.assign("YDSAUSOXWKCEBOWOKHNOESDBDTPIVWGEIGLHNYWBTZEQBOVMDLJWUULHCNFWYMGAQSOIPJIDXQTMLRLJVPVPZHPRHNTXVGRIFAOUJYCDFSGGFLMQQGKEADQJMUPZTSAVCAHCXSJBLRBEWAJDAZPZJWKXNNGLXXVYGZKGCQRAYZUMHJQLDWKONCRCUEZXHRZVBRIUHTEKXMYTXVKTFKYOYYJVB");
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
    msg.setTimeStamp(0.898378761467);
    msg.setSource(61355U);
    msg.setSourceEntity(158U);
    msg.setDestination(45831U);
    msg.setDestinationEntity(68U);
    msg.name.assign("RXQWKGPQTCIUJTCWHMBKQIBTPQEHGJCRIKBVLEYUQMCCDMXGPSQNLGRARVICSBCFVVWDZRNEQGYQGHAITCPWKXHDTIIHKYRDUMGXOZTTQEWWOBULLISNYYIRFZAVFASLCZPUFZDNAJENKMYBZLLXIARFEJLKEQPXOMVSMWPBGEOUTSSWRGFJDSHJZANOVDPBMDNYNSLWRPWKUOAA");

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
    msg.setTimeStamp(0.554889257664);
    msg.setSource(20526U);
    msg.setSourceEntity(189U);
    msg.setDestination(52725U);
    msg.setDestinationEntity(87U);
    msg.name.assign("VIFRVCYXVQSZFTSQMCGATJCKKDFSFGKPKHSXNRNWGDHRGFQ");

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
    msg.setTimeStamp(0.793604079372);
    msg.setSource(33355U);
    msg.setSourceEntity(88U);
    msg.setDestination(48993U);
    msg.setDestinationEntity(155U);
    msg.name.assign("SDPIUEWHQHCLTQBQRIWCFUGJOFTIHCRFRCUTUSPQTIDJWFBXYVNMVPAVBOLLOADBMHSGDIGNSHJYZRWQEMEOSESDWVPDSUGCAROYNEKFIU");

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
    msg.setTimeStamp(0.974175985808);
    msg.setSource(52257U);
    msg.setSourceEntity(32U);
    msg.setDestination(5711U);
    msg.setDestinationEntity(119U);
    msg.timeout = 1689503847U;

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
    msg.setTimeStamp(0.0969101186748);
    msg.setSource(62329U);
    msg.setSourceEntity(242U);
    msg.setDestination(27522U);
    msg.setDestinationEntity(111U);
    msg.timeout = 3328656352U;

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
    msg.setTimeStamp(0.462502727695);
    msg.setSource(15959U);
    msg.setSourceEntity(98U);
    msg.setDestination(4412U);
    msg.setDestinationEntity(244U);
    msg.timeout = 4022367019U;

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
    msg.setTimeStamp(0.735916898461);
    msg.setSource(43143U);
    msg.setSourceEntity(219U);
    msg.setDestination(20368U);
    msg.setDestinationEntity(36U);
    msg.sessid = 1796659633U;

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
    msg.setTimeStamp(0.670930031062);
    msg.setSource(25521U);
    msg.setSourceEntity(232U);
    msg.setDestination(23044U);
    msg.setDestinationEntity(174U);
    msg.sessid = 2153386804U;

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
    msg.setTimeStamp(0.245243350508);
    msg.setSource(46286U);
    msg.setSourceEntity(66U);
    msg.setDestination(58312U);
    msg.setDestinationEntity(95U);
    msg.sessid = 3835927743U;

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
    msg.setTimeStamp(0.875727361609);
    msg.setSource(19467U);
    msg.setSourceEntity(113U);
    msg.setDestination(39032U);
    msg.setDestinationEntity(212U);
    msg.sessid = 3542443347U;
    msg.messages.assign("MTQFDTVKNNGIGJUUWFKDCRBIYXNWFAETTVGQJXBKSGHSVNWUREZOJZMXUDRAAVAYKNRBFTEOQIEDLHKXWXUKBGNWQTLMDIKFGDCHPPMTMUDQTJYZYHNSYRQWDPLMMUGWOOXNHZBFRBVXCELKSSIPVPMXOEAJIPCHGCFOYDSRPKMVXPNSOWIKTWLLHCP");

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
    msg.setTimeStamp(0.460717321748);
    msg.setSource(51930U);
    msg.setSourceEntity(202U);
    msg.setDestination(34702U);
    msg.setDestinationEntity(82U);
    msg.sessid = 905513448U;
    msg.messages.assign("WMLWDPOCSENWDQRGUXHKYIEUQTMECTPDHQZBWSJSMJELVXTKHYVT");

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
    msg.setTimeStamp(0.452319470733);
    msg.setSource(38804U);
    msg.setSourceEntity(117U);
    msg.setDestination(59624U);
    msg.setDestinationEntity(122U);
    msg.sessid = 3276546925U;
    msg.messages.assign("LOUEDVIEHJHYZNLSZRBSADAMREVGPIXMWQRJALJZEGWNFYCVDTDKCZRNWGGQBOFBRBAXIXTRDHRUWNIJPVUYCVMIDKEKLLDUNHBNGKSFMCFWPVECTVWSOKYOPUGQRYYKD");

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
    msg.setTimeStamp(0.5193993553);
    msg.setSource(38389U);
    msg.setSourceEntity(100U);
    msg.setDestination(16961U);
    msg.setDestinationEntity(93U);
    msg.sessid = 369810086U;

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
    msg.setTimeStamp(0.753612605847);
    msg.setSource(4135U);
    msg.setSourceEntity(10U);
    msg.setDestination(12343U);
    msg.setDestinationEntity(73U);
    msg.sessid = 4043676543U;

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
    msg.setTimeStamp(0.0953132088546);
    msg.setSource(43029U);
    msg.setSourceEntity(66U);
    msg.setDestination(54648U);
    msg.setDestinationEntity(67U);
    msg.sessid = 2935074557U;

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
    msg.setTimeStamp(0.117815469351);
    msg.setSource(29194U);
    msg.setSourceEntity(22U);
    msg.setDestination(44575U);
    msg.setDestinationEntity(15U);
    msg.sessid = 1222446547U;
    msg.status = 102U;

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
    msg.setTimeStamp(0.4997677271);
    msg.setSource(12980U);
    msg.setSourceEntity(253U);
    msg.setDestination(57056U);
    msg.setDestinationEntity(52U);
    msg.sessid = 602687820U;
    msg.status = 5U;

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
    msg.setTimeStamp(0.312145469706);
    msg.setSource(30846U);
    msg.setSourceEntity(47U);
    msg.setDestination(9491U);
    msg.setDestinationEntity(40U);
    msg.sessid = 3772426614U;
    msg.status = 198U;

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
    msg.setTimeStamp(0.701346943691);
    msg.setSource(16476U);
    msg.setSourceEntity(4U);
    msg.setDestination(26075U);
    msg.setDestinationEntity(149U);
    msg.name.assign("TRGLNZJMWOZIHUZRESPCSYLWPUIADAXUAJHVGEQKMGXUWLYIMWCBRYXESEHDMGMYMELAKBGONDPZYHCYOTCQWGFCSPRLVKWKNLOQIO");

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
    msg.setTimeStamp(0.606627675347);
    msg.setSource(46909U);
    msg.setSourceEntity(18U);
    msg.setDestination(63547U);
    msg.setDestinationEntity(94U);
    msg.name.assign("EGNDPZPJBUJUCTUWDZNLOYBDRPAWKDBDTDMQKNBCGANKXJYIWHEMPMLQW");

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
    msg.setTimeStamp(0.737527940077);
    msg.setSource(15584U);
    msg.setSourceEntity(238U);
    msg.setDestination(62045U);
    msg.setDestinationEntity(44U);
    msg.name.assign("ZHMPWEPNFAJUBGZGYQJRAANMUWFFQADRHGKZQZBTJHXBGLBOGMISNBJRCDOSCZLCEXYYGNIRBONJDSIYCXKZUTPEGYMOBOVMIEJEPMDVAFVXQDTMLHHZUGJPAYFFSYICQVCTVBNUWDWLPUMSEWVZUJGFHPWRHZ");

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
    msg.setTimeStamp(0.350993460574);
    msg.setSource(47389U);
    msg.setSourceEntity(112U);
    msg.setDestination(50217U);
    msg.setDestinationEntity(78U);
    msg.name.assign("NWOSSEPLBNFPKQGACPGTHNVDMTBTHUILLCQQBDNBZLSMQHJDMEGFPZXHAQPUMRNJGRLOCIYFRBILSDEDUWVXSIWYWYAEXPMP");

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
    msg.setTimeStamp(0.268243091499);
    msg.setSource(33946U);
    msg.setSourceEntity(136U);
    msg.setDestination(8993U);
    msg.setDestinationEntity(75U);
    msg.name.assign("IZEFYNRLIDQXGIBJOVQERISFRYXMLQXAAXJLBJZYILWDDBBKCIFOZVUJZQOAUDBQHCRMYWIWLXQUKDLDVDRNNMXGETPUFPWSVJTVTEHBMXUGGLDSSTAHEVHANPCGKMCSFIXBLFWPELERSCGXTRUMJAQPHNVQNCJAOGJWUCMRXPSKYRJHSNZYVOYPTAWLKZHYNCWEFHOWBGKEWKVASFYKIHPGJTKTZPOTB");

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
    msg.setTimeStamp(0.404358370484);
    msg.setSource(19871U);
    msg.setSourceEntity(78U);
    msg.setDestination(6003U);
    msg.setDestinationEntity(228U);
    msg.name.assign("RZCVXBMZEMXCTJHJVOUXQPLNTLUKRDYAIFBJDDWQGCRGEBHDFDFKZQRNTDTDUYBEKLHDEVMVJXIBWRAOVKAOUBIYWUUZANMYOLTJNIOOENRIBWIAQXQOKQKXHMWOJUMSYMYSFPNLEWAXYSWQDHJFASLLAFVXPGCENCZIPKIPRUYCHBXWTFYZVSUBVSMTGZKQFEGIMRJTVHPGFALTBEJLGGRCU");

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
    msg.setTimeStamp(0.783279873963);
    msg.setSource(18050U);
    msg.setSourceEntity(93U);
    msg.setDestination(41368U);
    msg.setDestinationEntity(74U);
    msg.type = 105U;
    msg.error.assign("AKSXCVFJLXPEJSDYOYWONKRHMRGBJBINAFTQJYZKVGVLLBPUWXXWHMFFGOFUNKATHPZLFEIUTVTGDDCIAVNEOZHTOKQULMSNTKSWEVIXMIXBPSYINPOYZTMEAPXDYKKEWYHDMJHEQJOMXYWKZQACBUQJGDOZSEC");

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
    msg.setTimeStamp(0.165552229292);
    msg.setSource(32325U);
    msg.setSourceEntity(231U);
    msg.setDestination(35107U);
    msg.setDestinationEntity(177U);
    msg.type = 209U;
    msg.error.assign("LIABOOULUBQTKXYLHMETTBHJAJJWSOKDIKDRGZVUGDFPBYRNSZOPDAVYTUZUWKFTBNIVYDECBHUAEYINGKEJTETPMYWBLNSPWEEZCILXVMOIIRVJCFYPACFMSRTJNFQCIMJRKPBQKFLGIXQPOQZXJMCWMGXGKLEVVWGDLMQWGXKQFCUMODQRNIFNXPSNRCA");

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
    msg.setTimeStamp(0.839506923709);
    msg.setSource(32672U);
    msg.setSourceEntity(154U);
    msg.setDestination(13814U);
    msg.setDestinationEntity(46U);
    msg.type = 54U;
    msg.error.assign("LRLXBIDDTTMLNFXGARRPGOFIKMILYJHOEKRFOWSHLVVFOACGHPHCPYAKBEAXAJNPLACGOTUSBWZWFDTPZWJCGNJMVOP");

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
    msg.setTimeStamp(0.871563361623);
    msg.setSource(15187U);
    msg.setSourceEntity(79U);
    msg.setDestination(15210U);
    msg.setDestinationEntity(59U);
    msg.seq = 939U;
    msg.sys_dst.assign("LWPRDUZBTLKCIKEUTRWXVGG");
    msg.flags = 56U;
    const char tmp_msg_0[] = {-26, 11, 106, -106, 36, -11, 119, 36, 106, 71, 117, 117, 124, -43, 51, -26, 37, -44, -126, -101, -111, -21, 121, 14, -15, 19, 72, 42, -56, 37, 65, -6, -52, 12, -26, 27, -64, 91, 125, -117, 93, -9, -23, 50, 9, 71, 116, 43, -56, 9, -35, 48, 33, 27, 82, -67, 1, -31, 124, 45, 40, -15, 77, -57, 112, -107, 124, 42, -115, -106, -6, 89, 29, 62, 79, -96, -17, -51, 117, -83, -25, 31, -128};
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
    msg.setTimeStamp(0.527849589579);
    msg.setSource(8172U);
    msg.setSourceEntity(8U);
    msg.setDestination(10150U);
    msg.setDestinationEntity(232U);
    msg.seq = 26644U;
    msg.sys_dst.assign("MHNLXKKNRXTICFOKGNOZICYVROHOQAHMFWYTSMTPWMNVJWHAZRKKZEYNUIHDXRFLJVFPBVLCPBZGYX");
    msg.flags = 158U;
    const char tmp_msg_0[] = {-65, 91, -112, -79, -63, 103, -94, 120, -46, -106, 78, 76, -61, 103, -12, -86, 114, 73, -118, 52, -27, 106, -56, 53, -55, -10, -110, 23, 24, -43, -64, 124, 29, -120, 71, 40, -15, -60, 73, 121, -21, -99, 26, -34, 114, 58, 97, -63, -101, -64, -35, 82, -86, -89, -6, -20, -41, -17, -57, -66, 29, -88, -33, -33, -122, 101, 98, -68, -108, -51, 105, 3, -123, 102, 108, 45, 15, 53, 79, -27, -45, 113, -70, -13, -36, 6, -43, 0, 18, 28, -127, 89, -34, -19, 8, 101, -86, 78, 107, -116, 4, 65, 108, -103, -9, -10, 1, 31, -94, -15, -71, -44, 40, 52, -82, -50, 63, -80, -108, 47, 56, 52, 82, 94, 36, -87, -92, -99, 100, 36, -108, 22, 42, -8, -121, 54, 118, -29, 122, -110, -109, -16, -3, -91, -74, -78, 70, -13, -28, -64, 86, 94, 34, 107, 34, 107, 112, -32, 94, -27, -37, -87, -114, 53, 89, 1, 109, -40, -83, 92, -94, -26, -108, -16, 96, -64, 99, 103, -27, -125, -106, -57, 91, -117, -86, -27, -32, -13, -12, 48, 6, 104, 36, -117, -51, 117, 20, 36, -43, -81, 33, 61, 119, 72, 102, -31, -19, 19, 3, -9, 108, 48, 40, 116, 85, 14, -57, -52, -100, 76, 30, -86, 126, 100, 6, -97, 102, -65, 0, 42, -125, -76, 126, 35, 52, -13, -13, -41, 37, -65, 37, -16, -15, -119, -47, 76, -114, -30, 97, 36};
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
    msg.setTimeStamp(0.505893158484);
    msg.setSource(7305U);
    msg.setSourceEntity(58U);
    msg.setDestination(10625U);
    msg.setDestinationEntity(213U);
    msg.seq = 9603U;
    msg.sys_dst.assign("SOVNXHKPPNLKRJUCFIREGUAAXHEBONMSMLGPQLILKYQTPCZFFKVVLEOFUMPQRZKAPNUCBGBLAKTUIBBJIPWGDUI");
    msg.flags = 197U;
    const char tmp_msg_0[] = {75, -6, -92, -126, 80, 7, 1, -38, -19, 121, -66, 4, -80, 40, 85, 3, -88, -39, -54, 110, 41, -36, -89, 64, 118, -117, -73, -65, -77, -116, 14, 68, 18, 0, 22, 17, 39, 47, -112, 23, 42, -94, 87, -125, -48, 125, -7, -113, 19, 86, 56, 74, 89, -116, 108, -55, 18, 55, -67, -77, -88, -5, 71, -9, 41, -38, -46, 58, 101, 75, 25, 96, 7, -20, -58, 67, -40, 89, -46, -110, -77, 33, -27, 47, 86, 30, -80, 83, -54, 103, 120, -28, -52, -113, -27, 107, -19, -77, 94, -27, -49, 61, 111, -66, 102, 35, 0, 79, -14, 119, 5, 31, -37, 9, -97, -32, 36, -6, -52, -52, 87, 12, 18, -128, -41, 96, -123, 119, 98, 7, -128, -69, 50, -83, -59, -77, -37, 58, 86, -31, 4, 108, 10, 36, -14, 27, -106, 27, -89, 28, 109, -55, 18, -82, 16, -42, 62, -40, -81, -68, -82, 12, 59, -78, -32, 43, 55, 84, -83, -11, -40, -47, 24};
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
    msg.setTimeStamp(0.267374341589);
    msg.setSource(63828U);
    msg.setSourceEntity(104U);
    msg.setDestination(22552U);
    msg.setDestinationEntity(175U);
    msg.sys_src.assign("MDMNHYYNVTVLJIYQPAOLCTGRKWDREGUHEGTRNZ");
    msg.sys_dst.assign("SQAHKURVWWYSCVJIPSGFQXOHLWXHASGZKWLCSBRFZFQHMLULOOYGRGBTJUSGYEPTKQQUTTWQZDYTFBNEIEIHAABVHIKMQIDPAXMGBMETPXORROIJGHTBDLCNTRUZGIVBUNJEBVNCCX");
    msg.flags = 103U;
    const char tmp_msg_0[] = {-41, -118, -27, -87, 6, 103, -37, -62, 103, 112, 72, 44, -107, -97, 119, -99, -113, -18, 45, 118, 82, -15, 115, -111, 48, -58, 69, -7, 72, 19, 50, 35, -3, 20, 14, 59, 1, 79, 38, 83, 10, -125, -69, 106, -108, 40, 14, 68, -51, -13, -116, -14, -53, 105, 104, 11, 81, -17, -66, 61, -125, -40, -19, 17, -39, 112, -33, 32, 7, -11, -110, 63, -64, -17, -45, -14, -64, 75, 62, -84, -33, -1, -101, -17, -94, -124, -110, -48, -128, 62, 123, 50, -126, 28, 81, 114, -121, 112, 16, -5, -91, -75, 70, -94, 11, 12, -50, 52, -71, -117, 70, -104, -100, -3, -13, 100, -75, -86, 87, -112, 33, -124, -24, -34, -85, 41, 87, -94, 68, -43, 125, -113, 43, 23, 87, -41, -74, 11, -25, 25, 33, -73, -72, 39, -119, 60, 76, -100, -96, -44, 104, -104, -14, -72, -64, -9, -128, -127, -91, 73, -49, -100, -106, 29, -126, 41, 123, 64, -109, 54, -89, -56, -77, -106, 123, -46, 27, 105, -65, 113, 20, -1, 1, 2, 14, 22, 99, -77, -22, 87, -115, -31, -69, -95};
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
    msg.setTimeStamp(0.998577156626);
    msg.setSource(52085U);
    msg.setSourceEntity(25U);
    msg.setDestination(53025U);
    msg.setDestinationEntity(118U);
    msg.sys_src.assign("XVFAMQXDTTZGJKSVSUPUEZLUDXWVCAEOODPSNKIXSOICGRCJUKZHQECQNDOMGHWFPNPEKTCZJYIDHYGKDFOGHFDQRPKVHKEHSGWYWBDVFKREBXGYYINILXRURCRBJAM");
    msg.sys_dst.assign("AUTAOUPFPXHIKLYLMPNLLTFHGZHDXKTIIOCYLZEDQKGBANMUEMBCANADEVHZMLKRVLSMQROIESFXZNAKISZBQJBUPSXEAYBWGWTCGJJTRXMEPQYOKXOZTFJSZVNZQFUMYITDXTQIFJSDVGDPJXHDYVCQDJGVACLBBKNOBRHWURHORRQTRTMELPOFCZKGXNWQURBHGVSIWEVKJVCPQESWRPJFUWWCSAMFNGCDGOKSWBIJHAUD");
    msg.flags = 38U;
    const char tmp_msg_0[] = {-97, 93, 88, -51, -67, 77, 97, 34, -126, -22, 77, 61, -70, 10, -27, -85, -82, 21, 39, -43, 64, -19, -46, 6, -111, 9, -49, 4, -46, -98, -76, -91, -58, -19, 65, 79, -44, 9, -75, -89, 21, 14, -29, 69, 115, -64, 120, -46, -98, 39, -119, -6, 27, 34, 28, 7, -17, 30, 96, 59, -47, -57, -14, -70, -20, -88, -116, 31, 24, -104, -3, -121, 96, 119, -112, 62, 126, 103, -91, 6, 51, 33, -107, -47, 52, -62, 67, 66, 66, -108, 22, 89, 42, 119, -22};
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
    msg.setTimeStamp(0.348600986535);
    msg.setSource(50671U);
    msg.setSourceEntity(159U);
    msg.setDestination(60200U);
    msg.setDestinationEntity(120U);
    msg.sys_src.assign("DHNXCMZCETRDLSQPAWHYFMOQHIBXZTRDOFKAPJGJESAEINXAYZVBBWQGRNYOOXYUIEVZDVFLRLXQNNABWLDJOAOKWFIIOLMXTCKFNPZSBIFMNWEJCGVIWTCCXSRSMPSJUYKZHGYVTPFXTGKBRNVRJHALEUWZIXFQCLGSKGFSMPVXDZKRUVGTCNEEKQ");
    msg.sys_dst.assign("DFYFWKWGWDELTUBSRLRJPGQXIXMSCHRTTPHSAZBZCUYOWOJSWLEOZIJTJEEYWMEQODJNHUZROGOGAVPFPRGLQEKIURKAQUGXFNWXIMKSERGNVPVNMNHRYEUFTRLMXZZOONJACIZXKXWPHLJIHOQPGFXICLHNENVOQSZKYVHXAUHXUWAVSUVFCZYMBPLHCCAVQFVAMQQRD");
    msg.flags = 115U;
    const char tmp_msg_0[] = {-127, -105, 108, 102, 113, -91, -25, 120, 33, -57, 74, 96, 15, 91, -73, 34, 65, 43, -50, -68, -79, 63, 96, 65, 65, -85, 30, 1, -24, -6, -89, -78, -109, -87, 8, 39, 32, -66, 117, 23, -16, 4, -100, 84, 8, 74, 71, 43, 14, 31, -60, 118, 22, -17, 7, 112, -93, -12, -98, -128, 121, 23, -81, -35, -72, 122, -32, -96, 117, 64};
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
    msg.setTimeStamp(0.219126209055);
    msg.setSource(22769U);
    msg.setSourceEntity(17U);
    msg.setDestination(5950U);
    msg.setDestinationEntity(11U);
    msg.seq = 51192U;
    msg.value = 200U;
    msg.error.assign("HOIQLPFMVQYKPHQEHJZIUQFIPAAONMMRGPSIBOEDFEQPREUZTREYLMXKDQXSJQOPNJLBKBPUXHGOTKAOCFTKDGLVNFTHONHEXHUQZRMSWAUNUGROWWXQMBXUJEFTVKZZYNCNDRCCXXCICRYVHWWYZSVLAJJUCIJDSRDSGSYKFQZFJSRGAYJEBWJMSWKBVVZAZVPLRBFIKHMPMDITPVWTGOBTOYLLUWWCE");

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
    msg.setTimeStamp(0.149239392762);
    msg.setSource(17912U);
    msg.setSourceEntity(135U);
    msg.setDestination(57575U);
    msg.setDestinationEntity(36U);
    msg.seq = 30019U;
    msg.value = 203U;
    msg.error.assign("ASPXCKZXBAQSGPSOMVXZWUAGYWZQWHYDIMRCUFFMYIHNMRMRPJPPKUTCBPULYDYEXXDTVWMJKJQUDKWLIHQKWWVJCSVNVNRBDMXQIBUDAOVNZAWTPET");

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
    msg.setTimeStamp(0.318747114094);
    msg.setSource(20010U);
    msg.setSourceEntity(214U);
    msg.setDestination(15552U);
    msg.setDestinationEntity(126U);
    msg.seq = 10284U;
    msg.value = 202U;
    msg.error.assign("PNQSBBTZIFEKKMAWSFWXONKIJTJWQSGQMNMTZVNLGTLLALOOFYUXRRUUPUDSIQUBRFLBTDYXYFVHSEVFMEQCBYRINYVHXVGARI");

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
    msg.setTimeStamp(0.9805707871);
    msg.setSource(33696U);
    msg.setSourceEntity(64U);
    msg.setDestination(42153U);
    msg.setDestinationEntity(95U);
    msg.seq = 62888U;
    msg.sys.assign("QXFUJMKVKLYYSIKNUPPGWRZVSHBTUOFPTIAMNPTF");
    msg.value = 0.778574037768;

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
    msg.setTimeStamp(0.24543112578);
    msg.setSource(8305U);
    msg.setSourceEntity(94U);
    msg.setDestination(53812U);
    msg.setDestinationEntity(220U);
    msg.seq = 37387U;
    msg.sys.assign("WQNFPYFNZAODWNDBAXXBLJNYWPPWYNIJQUMXBIHUOVZLRNMKVBDGDEXSVGUMZJEBPXGYHPYLUCOVAHQHEAJEYHHYFYQANMZZZJPMECYETOMYUORLDFGMCVRRMOFLRQPWRGKNTXMRLGCXLITWDJFBTCTESXTUSSUXDKVRZASQPFLTZKLIVKWTHGIIJQSVUFXKCDSJJFIEKZEOOKSHNAIBDQZIGOKSTCEWDRWABWCMTULQSHBFAUV");
    msg.value = 0.814126834467;

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
    msg.setTimeStamp(0.14707783385);
    msg.setSource(56284U);
    msg.setSourceEntity(130U);
    msg.setDestination(8280U);
    msg.setDestinationEntity(108U);
    msg.seq = 44388U;
    msg.sys.assign("SDMADYKCBAYQNIRROGNXLDJSSIDKJQCOEPROUNROETFRGBBEVLXWMVIAELYRBQJUCDHJDTVESFYCTJXHQNUJXCLVOOCLFUCPLFTJMWSANRBXRZZWKMMUFAWIYHAVPUSNFRIHONPXGKZUWDVMBQJQFPFPYGLWUGGHKPQQBXQNBOMLEKMMQRBFHDHZEVUICVXXISOBPJXYZIYCVGAMYVEKJGLEWNSPUTADLZZWZKTPWZTTSF");
    msg.value = 0.672366535748;

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
    msg.setTimeStamp(0.0867511328529);
    msg.setSource(9483U);
    msg.setSourceEntity(240U);
    msg.setDestination(21234U);
    msg.setDestinationEntity(55U);
    msg.seq = 27503U;
    msg.sys_dst.assign("YCXGISSVVQMNJYLNNKMPQWLMVCGIBCUEYVGDSTZRERYZATEVXNU");
    msg.timeout = 0.478333072037;

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
    msg.setTimeStamp(0.00625092277865);
    msg.setSource(14028U);
    msg.setSourceEntity(115U);
    msg.setDestination(54982U);
    msg.setDestinationEntity(251U);
    msg.seq = 30466U;
    msg.sys_dst.assign("RUGSTDHQMCORKYLNXRYLXBBWETTQJJFFRUQEWSRIWNCPIKFAQOJUYGCDWIRZYATMPGUKAWGSAPSLJINOIFGDUHVHGPKAGPODZYFDTOSIBNFRBEVDLHSEIYTEIPCQCJEQDMTRLHNRXZPGZMYMHTLAKZJOOBLUDCZFRNFAVKFQJVP");
    msg.timeout = 0.346249722849;

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
    msg.setTimeStamp(0.421919501145);
    msg.setSource(13026U);
    msg.setSourceEntity(188U);
    msg.setDestination(34265U);
    msg.setDestinationEntity(135U);
    msg.seq = 30166U;
    msg.sys_dst.assign("CPBXHEAMZGGWEZBGKSLUDQJAUUEDPENKJIFZHVA");
    msg.timeout = 0.342202756864;

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
    msg.setTimeStamp(0.31382046093);
    msg.setSource(41528U);
    msg.setSourceEntity(24U);
    msg.setDestination(17252U);
    msg.setDestinationEntity(26U);
    msg.action = 207U;
    msg.longain = 0.783025396631;
    msg.latgain = 0.564829308461;
    msg.bondthick = 1928235145U;
    msg.leadgain = 0.331867315772;
    msg.deconflgain = 0.0785943207695;

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
    msg.setTimeStamp(0.810227641696);
    msg.setSource(47986U);
    msg.setSourceEntity(211U);
    msg.setDestination(25339U);
    msg.setDestinationEntity(131U);
    msg.action = 41U;
    msg.longain = 0.395826107165;
    msg.latgain = 0.213647456553;
    msg.bondthick = 1811924848U;
    msg.leadgain = 0.698676486073;
    msg.deconflgain = 0.266361627287;

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
    msg.setTimeStamp(0.574776842939);
    msg.setSource(39606U);
    msg.setSourceEntity(197U);
    msg.setDestination(5541U);
    msg.setDestinationEntity(73U);
    msg.action = 169U;
    msg.longain = 0.406487228966;
    msg.latgain = 0.937020791126;
    msg.bondthick = 3318083221U;
    msg.leadgain = 0.310847814915;
    msg.deconflgain = 0.245696344561;

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
    msg.setTimeStamp(0.213807950104);
    msg.setSource(10154U);
    msg.setSourceEntity(146U);
    msg.setDestination(59386U);
    msg.setDestinationEntity(161U);
    msg.err_mean = 0.677450840652;
    msg.dist_min_abs = 0.558820283754;
    msg.dist_min_mean = 0.34324380368;

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
    msg.setTimeStamp(0.445834107778);
    msg.setSource(35063U);
    msg.setSourceEntity(153U);
    msg.setDestination(26678U);
    msg.setDestinationEntity(1U);
    msg.err_mean = 0.278536031699;
    msg.dist_min_abs = 0.0181458581149;
    msg.dist_min_mean = 0.865094303729;

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
    msg.setTimeStamp(0.774961050625);
    msg.setSource(2399U);
    msg.setSourceEntity(165U);
    msg.setDestination(17109U);
    msg.setDestinationEntity(61U);
    msg.err_mean = 0.447194569121;
    msg.dist_min_abs = 0.205382694764;
    msg.dist_min_mean = 0.168140679702;

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
    msg.setTimeStamp(0.692460714705);
    msg.setSource(58589U);
    msg.setSourceEntity(100U);
    msg.setDestination(45156U);
    msg.setDestinationEntity(175U);
    msg.action = 11U;
    msg.lon_gain = 0.587798550488;
    msg.lat_gain = 0.866213820465;
    msg.bond_thick = 0.943249235542;
    msg.lead_gain = 0.893534453705;
    msg.deconfl_gain = 0.0621665757871;
    msg.accel_switch_gain = 0.0830947883799;
    msg.safe_dist = 0.21097425359;
    msg.deconflict_offset = 0.790431415333;
    msg.accel_safe_margin = 0.984695581838;
    msg.accel_lim_x = 0.287991826385;

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
    msg.setTimeStamp(0.980182108853);
    msg.setSource(34943U);
    msg.setSourceEntity(127U);
    msg.setDestination(17505U);
    msg.setDestinationEntity(48U);
    msg.action = 121U;
    msg.lon_gain = 0.952103564043;
    msg.lat_gain = 0.152624626011;
    msg.bond_thick = 0.143538458599;
    msg.lead_gain = 0.132065841259;
    msg.deconfl_gain = 0.949261945727;
    msg.accel_switch_gain = 0.73901222302;
    msg.safe_dist = 0.221314115808;
    msg.deconflict_offset = 0.210370591447;
    msg.accel_safe_margin = 0.0344120317967;
    msg.accel_lim_x = 0.933267954221;

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
    msg.setTimeStamp(0.507165328961);
    msg.setSource(49404U);
    msg.setSourceEntity(139U);
    msg.setDestination(62682U);
    msg.setDestinationEntity(177U);
    msg.action = 44U;
    msg.lon_gain = 0.0796772706733;
    msg.lat_gain = 0.459078457172;
    msg.bond_thick = 0.326545446102;
    msg.lead_gain = 0.0291652247347;
    msg.deconfl_gain = 0.845090114995;
    msg.accel_switch_gain = 0.753233290002;
    msg.safe_dist = 0.523987833202;
    msg.deconflict_offset = 0.877814574924;
    msg.accel_safe_margin = 0.0544082154694;
    msg.accel_lim_x = 0.640433865458;

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
    msg.setTimeStamp(0.754693344628);
    msg.setSource(48749U);
    msg.setSourceEntity(74U);
    msg.setDestination(20066U);
    msg.setDestinationEntity(147U);
    msg.type = 184U;
    msg.op = 172U;
    msg.err_mean = 0.730202196192;
    msg.dist_min_abs = 0.337119009837;
    msg.dist_min_mean = 0.605819387077;
    msg.roll_rate_mean = 0.621526809974;
    msg.time = 0.689116812962;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 171U;
    tmp_msg_0.lon_gain = 0.673199785192;
    tmp_msg_0.lat_gain = 0.778583972605;
    tmp_msg_0.bond_thick = 0.567542482333;
    tmp_msg_0.lead_gain = 0.698725281852;
    tmp_msg_0.deconfl_gain = 0.0566652963182;
    tmp_msg_0.accel_switch_gain = 0.0104041123286;
    tmp_msg_0.safe_dist = 0.0912096022123;
    tmp_msg_0.deconflict_offset = 0.503126252427;
    tmp_msg_0.accel_safe_margin = 0.292204214255;
    tmp_msg_0.accel_lim_x = 0.706073162013;
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
    msg.setTimeStamp(0.404394350595);
    msg.setSource(47540U);
    msg.setSourceEntity(142U);
    msg.setDestination(5179U);
    msg.setDestinationEntity(15U);
    msg.type = 117U;
    msg.op = 177U;
    msg.err_mean = 0.104886393246;
    msg.dist_min_abs = 0.134504308857;
    msg.dist_min_mean = 0.805561198574;
    msg.roll_rate_mean = 0.170937541583;
    msg.time = 0.442979294189;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 221U;
    tmp_msg_0.lon_gain = 0.908215977353;
    tmp_msg_0.lat_gain = 0.490176704789;
    tmp_msg_0.bond_thick = 0.0932953195917;
    tmp_msg_0.lead_gain = 0.0189602075139;
    tmp_msg_0.deconfl_gain = 0.900700840371;
    tmp_msg_0.accel_switch_gain = 0.435041899705;
    tmp_msg_0.safe_dist = 0.543066797414;
    tmp_msg_0.deconflict_offset = 0.917137688953;
    tmp_msg_0.accel_safe_margin = 0.295123778536;
    tmp_msg_0.accel_lim_x = 0.581788752936;
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
    msg.setTimeStamp(0.605714656406);
    msg.setSource(26702U);
    msg.setSourceEntity(101U);
    msg.setDestination(49863U);
    msg.setDestinationEntity(70U);
    msg.type = 220U;
    msg.op = 123U;
    msg.err_mean = 0.950768876011;
    msg.dist_min_abs = 0.491122838362;
    msg.dist_min_mean = 0.190647993312;
    msg.roll_rate_mean = 0.53334945032;
    msg.time = 0.00259334872229;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 105U;
    tmp_msg_0.lon_gain = 0.0685162292452;
    tmp_msg_0.lat_gain = 0.167532969773;
    tmp_msg_0.bond_thick = 0.420522854175;
    tmp_msg_0.lead_gain = 0.236736850654;
    tmp_msg_0.deconfl_gain = 0.0297515166575;
    tmp_msg_0.accel_switch_gain = 0.311435385215;
    tmp_msg_0.safe_dist = 0.427118882313;
    tmp_msg_0.deconflict_offset = 0.591927798418;
    tmp_msg_0.accel_safe_margin = 0.789733562465;
    tmp_msg_0.accel_lim_x = 0.66707109798;
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
    msg.setTimeStamp(0.487452774914);
    msg.setSource(13405U);
    msg.setSourceEntity(178U);
    msg.setDestination(60544U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.804396413733;
    msg.lon = 0.376838478057;
    msg.eta = 4117412394U;
    msg.duration = 17841U;

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
    msg.setTimeStamp(0.0981827448815);
    msg.setSource(27238U);
    msg.setSourceEntity(129U);
    msg.setDestination(16533U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.61916288206;
    msg.lon = 0.307947890076;
    msg.eta = 3040055127U;
    msg.duration = 44814U;

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
    msg.setTimeStamp(0.647893362072);
    msg.setSource(9530U);
    msg.setSourceEntity(25U);
    msg.setDestination(29198U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.159617205371;
    msg.lon = 0.330258646957;
    msg.eta = 3018210718U;
    msg.duration = 23067U;

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
    msg.setTimeStamp(0.578933635743);
    msg.setSource(6566U);
    msg.setSourceEntity(66U);
    msg.setDestination(34068U);
    msg.setDestinationEntity(2U);
    msg.plan_id = 55058U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.939995311663;
    tmp_msg_0.lon = 0.00615656406008;
    tmp_msg_0.eta = 1787799289U;
    tmp_msg_0.duration = 64318U;
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
    msg.setTimeStamp(0.304480691147);
    msg.setSource(40705U);
    msg.setSourceEntity(244U);
    msg.setDestination(37274U);
    msg.setDestinationEntity(60U);
    msg.plan_id = 21930U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.713891896236;
    tmp_msg_0.lon = 0.690592494631;
    tmp_msg_0.eta = 1816857295U;
    tmp_msg_0.duration = 52521U;
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
    msg.setTimeStamp(0.555111247307);
    msg.setSource(46327U);
    msg.setSourceEntity(27U);
    msg.setDestination(47657U);
    msg.setDestinationEntity(49U);
    msg.plan_id = 203U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.379086114451;
    tmp_msg_0.lon = 0.279931625143;
    tmp_msg_0.eta = 1686893418U;
    tmp_msg_0.duration = 12956U;
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
    msg.setTimeStamp(0.794174997618);
    msg.setSource(12799U);
    msg.setSourceEntity(159U);
    msg.setDestination(60099U);
    msg.setDestinationEntity(177U);
    msg.type = 83U;
    msg.command = 41U;
    msg.settings.assign("ZZLBJZPKCAVQAWCLCPWQAUVPRPQWNDROQSBACTZOANHOVOPQTUILSELUYTDHUWAIJMTZVCUXSHKDDHWDWYNUOAPYRHJEMVENXQNSHQEBBTFSOXNENIECSJTCYUIDOGKEFUXFVOVDFLBJMPVAGYYXKMZIITFBBILORMGFYTMSNGPFXIHGRZJJJRQDESHGFJTDFKOKLDEBWMIEVWXGXCZUMCXAYYLNFGHLKKRIMHRVAKQYLGNJ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 50289U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.702714754673;
    tmp_tmp_msg_0_0.lon = 0.370292963435;
    tmp_tmp_msg_0_0.eta = 4112984685U;
    tmp_tmp_msg_0_0.duration = 42285U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("NXJYTOGVBDLWBDUQIMFRTCIHQTRQQCPOKPNUEQZUMXWAVEBVBGFVMXRFUCOKOKEKZAREEWTGIGEWVDHVQDOJTUOFZBUSEAUFDAYTAABSHIKPNEJVYUPMWFZDNXCWLERYFUOILSAWHJMCCLJFTTSDLKXPGBCXSLNFNYNALHXCHGRKOOMZPHIDMPDKALVQZGGMPRKNVWZLVIJETBJZUJSGYTYSCYWQRQRNGAFYIOZZHDBYXMKSN");

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
    msg.setTimeStamp(0.183078141956);
    msg.setSource(704U);
    msg.setSourceEntity(198U);
    msg.setDestination(51638U);
    msg.setDestinationEntity(218U);
    msg.type = 20U;
    msg.command = 158U;
    msg.settings.assign("WXBGBNUJYHXTBWIQASBPVFHQKPAVYTEEESPVKFJOUHARPLMAFGNMZLEHWDELIRQWVOUSICTHXOWHURXSZOGZXKMMDZXICNMOVLKAWTIBFZQBCSUOJCFKOJGNQWHSNRKVJBMZPZCXQXXLAGDJKM");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 10671U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BJQYYXPFMIEDPOXMJMUUHKMIPLVZFNFZARVXXWQLVGYCGRXCWZNDYCQXAYSMEPZHSBEKGBQDDEXODTYQUICIKRVXUPTRSTIILCRJGSJNRLEPTSEHFAUNJB");

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
    msg.setTimeStamp(0.479061334772);
    msg.setSource(1706U);
    msg.setSourceEntity(139U);
    msg.setDestination(50332U);
    msg.setDestinationEntity(179U);
    msg.type = 151U;
    msg.command = 140U;
    msg.settings.assign("COEQTEWNCUPIJYEUXZSAYZKIZAFEJPKFQFRVTJGKFXXDOOPKDPSAQWIQVIOMLZWBJNA");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 53712U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.080108873789;
    tmp_tmp_msg_0_0.lon = 0.558065461313;
    tmp_tmp_msg_0_0.eta = 3776034182U;
    tmp_tmp_msg_0_0.duration = 42151U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("JNVVBCMDQKPDFDKNNZLLVEHBFGRGMLYBHNKJSJDDTKSAUFKTQACNNLIPVPAUMZTMYSWFHFOZDGQRRKUJNIUWJEMZHQJJWUWCVBZTSRLBVPSGIPSYIFIBDXFDUOSXMTTQBFXRZWDEXYDAXWCGIOXUGCOHRSYETNVAOXILJEVZEHAPUQXLHQESFLVVBLYCAHCJWXXMHQWHCZACOMQQAYAPZGEOUN");

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
    msg.setTimeStamp(0.206006385884);
    msg.setSource(15524U);
    msg.setSourceEntity(171U);
    msg.setDestination(24945U);
    msg.setDestinationEntity(248U);
    msg.state = 146U;
    msg.plan_id = 5142U;
    msg.wpt_id = 113U;
    msg.settings_chk = 10722U;

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
    msg.setTimeStamp(0.02962668719);
    msg.setSource(28642U);
    msg.setSourceEntity(174U);
    msg.setDestination(37482U);
    msg.setDestinationEntity(74U);
    msg.state = 206U;
    msg.plan_id = 2597U;
    msg.wpt_id = 97U;
    msg.settings_chk = 53514U;

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
    msg.setTimeStamp(0.297431163021);
    msg.setSource(24757U);
    msg.setSourceEntity(51U);
    msg.setDestination(28002U);
    msg.setDestinationEntity(186U);
    msg.state = 10U;
    msg.plan_id = 27614U;
    msg.wpt_id = 113U;
    msg.settings_chk = 51224U;

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
    msg.setTimeStamp(0.290050031415);
    msg.setSource(24103U);
    msg.setSourceEntity(106U);
    msg.setDestination(24480U);
    msg.setDestinationEntity(156U);
    msg.uid = 207U;
    msg.frag_number = 69U;
    msg.num_frags = 8U;
    const char tmp_msg_0[] = {-86, -14, 55, 116, -2, 0, -38, -86, -87, -51, -72, -61, -10, -44, -94, -78, -48, -124, 100, -30, 25, -50, 113, -93, 25, 58, 93, -43, -58, 71, 30, -87, 35, -41, 47, 111, 88, 108, 29, 31, -2, 92, -71, -50, -74, 4, 22, 123, 42, 58, -29, -53, -98, 118, 28, -31, -115, -86, -7, -40, -1, 14, -95, -57, 48, 94, 98, 124, 2, -9, 15, -46};
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
    msg.setTimeStamp(0.527408239321);
    msg.setSource(39605U);
    msg.setSourceEntity(118U);
    msg.setDestination(40418U);
    msg.setDestinationEntity(66U);
    msg.uid = 231U;
    msg.frag_number = 68U;
    msg.num_frags = 187U;
    const char tmp_msg_0[] = {36, -128, -64, -96, -95, 39, 120, -72, 14, 68, -17, 98, -3, -117, 41, 88, 102, 64, -55, -43, 64, -81, -113, 14, -17, -54, -67, -25, 11, 17, 109, 101, 19, 76, -124, 3, 62, -116, 49, -29, 106, -63, -11, -26, 27, 70, -84, 37, -100, -26, 116, 124, -41, -91, -12, -2, -62, 48, -49, -36, -120, -5, -111, 75, 95, 24, -26, -112, 1, 94, 60, 122, -31, 90, 106, -5, 78, -36, -97, 23, 99, 8, -91, 24, -44, -38, 7, 56, 90, 104, -67, -97, 114, 108, -87, 79, 125, 47, 88, 114, 35, -66, 7, -124, 49, 120, -21, 27, 60, 21, 11, -30, -30, -56, -38, -81, -110, -29, -15, 30};
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
    msg.setTimeStamp(0.361540150241);
    msg.setSource(5926U);
    msg.setSourceEntity(250U);
    msg.setDestination(51495U);
    msg.setDestinationEntity(115U);
    msg.uid = 236U;
    msg.frag_number = 166U;
    msg.num_frags = 188U;
    const char tmp_msg_0[] = {-11, 38, 3, 113, 96, 6, -5, -87, 102, -75, 49, 28, 90, 4, 94, -10, 49, 64, 93, 52, -11, -101, 102, -14, 74, -124, -102, 9, -101, 69, 105, -96, 104, -42, -67, -13, -51, 27, -70, 70, 21, -23, -100, 27, -22, 70, -111, -67, 47, -72, 122, -27, 108, 97, 15, -76, 98, -64, 112, 25, 56, -113, 2, -113, -9, 42, -95, 97, -38, 111, 29, 114, -45, 92, -106, 31, 35, -17, 123, 23, 79, -75, 29, -56, -118, -3, -3, 21, -63, 24, 47, -123, 55, -104, -28, 18, -121, -35, 4, 10, -94, 52, 117, 82, 126};
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
    msg.setTimeStamp(0.526147813511);
    msg.setSource(59523U);
    msg.setSourceEntity(106U);
    msg.setDestination(58706U);
    msg.setDestinationEntity(155U);
    msg.content_type.assign("AALMADLCXMABNEEASNYEDVZNEWUMWABGHSCXTJHSMWPIZVRKYGLPIFUFOBDJRKNSJLFYYXOM");
    const char tmp_msg_0[] = {-38, -53, -120, -15, 92, -115, 42, -116, 25, 52, -57, 112, -64, 31, 120, 50, -58, -36, 4, 38, -30, -10, -12, -2, 121, -108, -67, -23};
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
    msg.setTimeStamp(0.751326032706);
    msg.setSource(21980U);
    msg.setSourceEntity(160U);
    msg.setDestination(2162U);
    msg.setDestinationEntity(213U);
    msg.content_type.assign("JPEUWLBPVPUEDFZSMUNCKLQQWJQKBTYHIHOQKNG");
    const char tmp_msg_0[] = {-114, -14, -43, 46, 87, -88, -88, 59, 17, 48, -76, -11, 93, 39, 97, -124, 37, -84, -81, -21, 65, 50, 28, 83, -86, -43, 23, 89, -125, -7, -122, -107, 69, -41, 65, 54, -73, -5, -108, 40, 104, -51, 27, 16, -22, 122, 94, 78, 111, 103, 36, -30, -123, -56, -3, 15, 93, 63, -58, 23, -62, -118, -82, -65, 64, -55, 63, 125, -50, -47, -35, 95, -5, -53, 100, -110, -14, 24, -97, -40, 125, -82, -79, 13, 51, -67, 82, 114, -36, -35, -15, 14, 96, 29, 77, -49, 103, 122, 17, 20, 111, -54, 31, -20, -27, -86, 99, -121, 86, 114, -73, 49, -42, 119, -69, -45, 86, 104, -12, 107, 20, 97, -110, -91, 120, 71, 65, 24, 113, 37, -73, 51, -1, -108, -27, -26, 67, 86, -33, 17, -84, -4, -11, 79, -62, -15, 107, -112, -34, 90, 37, -73, 72, 71, 34, 86, 21, 83, 2, 101, 112, -3, 7, -128, 93, 69, -25, -42, -9, -63, -106, -51, -23, 48, -96, 47, 86, 84, -47, -109, 45, -57, -114, 46, -32, 28, 49, -117, 19, 47, -79, -119, -14, -23, 12, -56, -124, -70, 81, -86, -86, -16, -119, -114, 99, -48, -125, -70, 124, -4, -88, 3, 74, 60, -64};
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
    msg.setTimeStamp(0.075128785671);
    msg.setSource(5314U);
    msg.setSourceEntity(221U);
    msg.setDestination(57257U);
    msg.setDestinationEntity(228U);
    msg.content_type.assign("RLOYPBXDKQUGKVEYPBBSKPQPREITLMZTLJENBKGKCDKBESUYZWLSNCNYF");
    const char tmp_msg_0[] = {-68, -125, -97, 121, -118, 9, -95, 77, -99, -110, -116, 121, -85, 73, 95, 59, -7, -48, -89, -8, -101, 58, 53, -126, -35, -13, -48, -78, -110, -38, 59, 79, -5, -38, -116, 21, 88, 60, 60, 59, 122, -7, 9, 50, -119, 4, 7, -100, -78, -39, -124, 41, 107, 56, 17, 117, 118, 7, -30, -17, -28, -23, 72, 121, -23, -22, 98, -115, 2, -30, 33, -126, -70, 115, 39, -96, -30, 15, 63, 102, 77, 73, -73, 93, -56, -112, -58, -120, -89, -42, -22, 46, 0, 40, -2, 31, 105, -23, 1, -92, -15, -2, 8, -80, -123, 74, -28, -101, -93, 102, -117, 28, 102, -119, 111, 7, -26, -11, 111, -107, 16, 4, 90, -62, 75, 17, 69, 6, -122, -121, 41, 114, 119, 100, 8, 31, -114, -104, -99, -40, -7, -27, -1, -33, -75, 21, -120, 1, -17, 48, 31, -27, -77, -116, 16, -51, 4, -123, -6, 14, -18, 70, -124, -61, 40, 88, 2, 12, 7, 48, 82, 86, 117, 104, 73, 67, 56, -31, 112, 83, -6, -125, 64, 79, -19, -45, 109, 39, 59, -53, 72, 110, 30, -114, 63, 39, 71, 96, -22, 25, 60, -117, -8, 48, -92, -62, 12, -20, -48, -59, -127, -5, -99, 85, 125, -90, 61, -92, -10, -20, -78, -126, -66, 61, 62, -4, 102, -85, -91, -12, -9, 52, 68, 78, 21, 116, -87, -68};
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
    msg.setTimeStamp(0.642660290567);
    msg.setSource(33957U);
    msg.setSourceEntity(206U);
    msg.setDestination(39745U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.948688049742);
    msg.setSource(24981U);
    msg.setSourceEntity(24U);
    msg.setDestination(54778U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.94198787392);
    msg.setSource(28878U);
    msg.setSourceEntity(197U);
    msg.setDestination(4470U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.259511332685);
    msg.setSource(10235U);
    msg.setSourceEntity(234U);
    msg.setDestination(32158U);
    msg.setDestinationEntity(130U);
    msg.target = 49081U;
    msg.bearing = 0.667010084447;
    msg.elevation = 0.212837453729;

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
    msg.setTimeStamp(0.456321056972);
    msg.setSource(65238U);
    msg.setSourceEntity(76U);
    msg.setDestination(27557U);
    msg.setDestinationEntity(61U);
    msg.target = 21642U;
    msg.bearing = 0.994749152751;
    msg.elevation = 0.94860616858;

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
    msg.setTimeStamp(0.302142021463);
    msg.setSource(30338U);
    msg.setSourceEntity(63U);
    msg.setDestination(55550U);
    msg.setDestinationEntity(4U);
    msg.target = 64845U;
    msg.bearing = 0.658134003263;
    msg.elevation = 0.759098943073;

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
    msg.setTimeStamp(0.736657893147);
    msg.setSource(27886U);
    msg.setSourceEntity(190U);
    msg.setDestination(60985U);
    msg.setDestinationEntity(209U);
    msg.target = 675U;
    msg.x = 0.124246523626;
    msg.y = 0.749449963394;
    msg.z = 0.190568836053;

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
    msg.setTimeStamp(0.164340750999);
    msg.setSource(11926U);
    msg.setSourceEntity(12U);
    msg.setDestination(2729U);
    msg.setDestinationEntity(147U);
    msg.target = 59078U;
    msg.x = 0.699269498932;
    msg.y = 0.387853090736;
    msg.z = 0.912991720209;

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
    msg.setTimeStamp(0.395044812766);
    msg.setSource(64048U);
    msg.setSourceEntity(137U);
    msg.setDestination(23912U);
    msg.setDestinationEntity(168U);
    msg.target = 53051U;
    msg.x = 0.476379040007;
    msg.y = 0.724778181822;
    msg.z = 0.0201138313861;

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
    msg.setTimeStamp(0.197264739607);
    msg.setSource(48566U);
    msg.setSourceEntity(151U);
    msg.setDestination(30922U);
    msg.setDestinationEntity(34U);
    msg.target = 57592U;
    msg.lat = 0.920339520786;
    msg.lon = 0.374744764726;
    msg.z_units = 210U;
    msg.z = 0.360089138641;

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
    msg.setTimeStamp(0.676849060477);
    msg.setSource(18314U);
    msg.setSourceEntity(124U);
    msg.setDestination(10434U);
    msg.setDestinationEntity(84U);
    msg.target = 34765U;
    msg.lat = 0.401853130918;
    msg.lon = 0.998026151599;
    msg.z_units = 193U;
    msg.z = 0.228916670724;

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
    msg.setTimeStamp(0.820035507177);
    msg.setSource(31457U);
    msg.setSourceEntity(130U);
    msg.setDestination(23285U);
    msg.setDestinationEntity(25U);
    msg.target = 63246U;
    msg.lat = 0.443618970517;
    msg.lon = 0.58917415586;
    msg.z_units = 93U;
    msg.z = 0.413994223358;

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
    msg.setTimeStamp(0.237848939988);
    msg.setSource(26764U);
    msg.setSourceEntity(10U);
    msg.setDestination(4935U);
    msg.setDestinationEntity(104U);
    msg.locale.assign("MBJHYHKRVNJAAWQLCDLZOVIWKVCZLCTQIWTHWQJODDYHRTGTNLAXZTSUSEJQGXPLGDGZRBVJRKFIUSLOXEZRHWAYSGEGQPFUCEVDHPACYFAJZTLRIUAMMQZGIYFULFEKTRFWHBQEPDKYXBBTHIMYNKKPNESIBUAOUQIZQNMZPKBMAVNSBOWPRGNECCDOVU");
    const char tmp_msg_0[] = {-6, 26, -114, 76, 84, -37, 114, -115, -64, 91, -32, -3, -4, 8, -45, -107, 34, -42, -68, 24, 113, 71, 60, -75, 118, 80, 60, 101, 3, -95, -66, -43, 109, 116, 58, -111, -32, -38, 50, 50, -15, 78, -121, -38, 11, 84, 92, 41, -28, -20, -40, -104, 53, -114, 39, 27, 37, 25, 109, 94, -12, 35, 16, -62, 35, 68, -90, 75, -28, -75, 122, -88, 5, 124, 65, 125, 21, -9, -90, -34, 33, -25, -109, -26, -14, 30, 126, -128, 65, 44, -38, -65, 57, -2, -87, -108, -88, -77, -63, -115, -34, 5, 93, -73, 52, 62, -67, 70, 43, -6, -18, -68, 48, 81, -72, 20, 1, 117, -73, 112, 116, 43, -59, -86, -46, -44, -92, 49, 125, 41, -128, -117, 126, -6, 9, 38, 33, 68, 5, 118, -45, -7, -66, -78, -42, 9, -83, 108, 54, 16, -80, 58, -83, 105, 77, -18, 81, -5, 82, 109, -50, -106, 63, 111, 116, -110, -83, -94, 72, -3, -16, 82, -63, 122, 26, -26, -105, 98, -46, 63, -43, 76, -107, -17, 39, -55, 94, 58, 70, 72, -37, 49, 83, 35, -83, -7, -121, -74, 56, 82, 12, 73, -55, -57, -100, -23};
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
    msg.setTimeStamp(0.510515900926);
    msg.setSource(20684U);
    msg.setSourceEntity(48U);
    msg.setDestination(30133U);
    msg.setDestinationEntity(137U);
    msg.locale.assign("VPBTAYWSLZKLEJTIUTEQLPVDYRPKAGJUWGMAEHZQBXMDOMACALFXQHLHBRQWWTNZVHJUKRNSABHMWRGSXCCRXICRWRJDIQULXXNXHDOQVXEVJNOSY");
    const char tmp_msg_0[] = {98, 114, 19, -42, -99, 38, 35, -74, 16, 60, 29, 126, -103, -102, 80, -69, 69, 118, 53, -123, -33, -107, -53, -101, -48, 44, 88, -27, 124, 10, 82, -61, 89, -52, 81, -123, -70, 121, -48, 56, -59, 110, -6, -19, 95, 124, -69, 7, 80, 107, -108, -77, 94, -93, 35, 104, 119, 31, 115, -1, -96, 117, 13, -116, -73, -26, 21, 1, 6, -104, 50, 92, 66};
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
    msg.setTimeStamp(0.0630754600404);
    msg.setSource(32184U);
    msg.setSourceEntity(158U);
    msg.setDestination(53647U);
    msg.setDestinationEntity(187U);
    msg.locale.assign("CXAGHWLPZVYGSGUTVBMBQRRKKNPPZJLURNZKQLIULIPHZQPCGKBVZVQBTOUKDEHDORDWYUBLOLFEBWUNHA");
    const char tmp_msg_0[] = {109, 106, 73, -76, 58, 72, -65, -4, -15, 5, 7, -48, -66, 60, 44, 109, -117, -77, 115, 66, 49, 13, -23, 115, 63, -12, 21, 40, 85, -34, 31, -55, 70, 86, -97, 86, -75, -87, 93, 71, -63, -101, -69, 51, 97, 76, 104, -13, 125, -53, 122, 35, 2, -100, 13, -30, -125, 9, 99, 86, -113, 121, 83, 126, 80, -128, 1, -77, 68, 115, -79, -95, -90, -29, 61, 93, -56, 115, -72, -108, -94, -112, 112, 11, -97, -13, 98, 103, -99, -11, 2, 1, -41, 28, 109, 102, 78, -99, -77, 40, -103, 60, -120, 41, -75, -96, -55, 114, 82, -56, -89, 125, -30, -45, -101, -122, -94, -22, -68, 51, 90};
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
    msg.setTimeStamp(0.575740771764);
    msg.setSource(38016U);
    msg.setSourceEntity(204U);
    msg.setDestination(45122U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.401677617872);
    msg.setSource(37223U);
    msg.setSourceEntity(163U);
    msg.setDestination(780U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.0626520146893);
    msg.setSource(10212U);
    msg.setSourceEntity(159U);
    msg.setDestination(51584U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.394705740539);
    msg.setSource(46148U);
    msg.setSourceEntity(231U);
    msg.setDestination(32758U);
    msg.setDestinationEntity(81U);
    msg.camid = 124U;
    msg.x = 44632U;
    msg.y = 24134U;

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
    msg.setTimeStamp(0.367584539133);
    msg.setSource(27800U);
    msg.setSourceEntity(241U);
    msg.setDestination(36129U);
    msg.setDestinationEntity(128U);
    msg.camid = 144U;
    msg.x = 2689U;
    msg.y = 16805U;

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
    msg.setTimeStamp(0.533817559897);
    msg.setSource(23703U);
    msg.setSourceEntity(114U);
    msg.setDestination(44374U);
    msg.setDestinationEntity(85U);
    msg.camid = 84U;
    msg.x = 36124U;
    msg.y = 12251U;

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
    msg.setTimeStamp(0.731738809805);
    msg.setSource(15215U);
    msg.setSourceEntity(39U);
    msg.setDestination(2050U);
    msg.setDestinationEntity(139U);
    msg.camid = 174U;
    msg.x = 30130U;
    msg.y = 38784U;

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
    msg.setTimeStamp(0.149266064768);
    msg.setSource(24349U);
    msg.setSourceEntity(102U);
    msg.setDestination(30314U);
    msg.setDestinationEntity(85U);
    msg.camid = 78U;
    msg.x = 3816U;
    msg.y = 64233U;

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
    msg.setTimeStamp(0.601145170645);
    msg.setSource(25149U);
    msg.setSourceEntity(200U);
    msg.setDestination(37470U);
    msg.setDestinationEntity(189U);
    msg.camid = 201U;
    msg.x = 42454U;
    msg.y = 49579U;

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
    msg.setTimeStamp(0.256459062997);
    msg.setSource(54122U);
    msg.setSourceEntity(61U);
    msg.setDestination(52248U);
    msg.setDestinationEntity(66U);
    msg.tracking = 190U;
    msg.lat = 0.855496288629;
    msg.lon = 0.867455524196;
    msg.x = 0.451403515222;
    msg.y = 0.536287404068;
    msg.z = 0.694787972454;

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
    msg.setTimeStamp(0.358497967073);
    msg.setSource(26372U);
    msg.setSourceEntity(148U);
    msg.setDestination(2016U);
    msg.setDestinationEntity(217U);
    msg.tracking = 216U;
    msg.lat = 0.793161525326;
    msg.lon = 0.441394620538;
    msg.x = 0.953836799389;
    msg.y = 0.423492337683;
    msg.z = 0.907157706477;

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
    msg.setTimeStamp(0.470568876679);
    msg.setSource(39000U);
    msg.setSourceEntity(23U);
    msg.setDestination(37914U);
    msg.setDestinationEntity(215U);
    msg.tracking = 41U;
    msg.lat = 0.0858278586694;
    msg.lon = 0.276547418339;
    msg.x = 0.333462248338;
    msg.y = 0.453604861432;
    msg.z = 0.442535787839;

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
    msg.setTimeStamp(0.78630256471);
    msg.setSource(41993U);
    msg.setSourceEntity(103U);
    msg.setDestination(23177U);
    msg.setDestinationEntity(20U);
    msg.target.assign("JDEPYJGETQOLSFGBGBPFBNJOIRLCBHESKDMONFYPRQLZYYUJFQFAADTIPVHIQNDLMQWVWFLJMMHKGHMKYIYZWSZOUZZCACNRQWO");
    msg.lbearing = 0.385364218526;
    msg.lelevation = 0.949008769555;
    msg.bearing = 0.528874427278;
    msg.elevation = 0.44953948508;
    msg.phi = 0.841689664424;
    msg.theta = 0.796101811946;
    msg.psi = 0.875470408268;
    msg.accuracy = 0.400914678718;

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
    msg.setTimeStamp(0.833810273778);
    msg.setSource(49990U);
    msg.setSourceEntity(81U);
    msg.setDestination(4916U);
    msg.setDestinationEntity(230U);
    msg.target.assign("CJFINOKUJKGEBORNUXKSNJMTIEBWWEWYHHALHBRQCWIIVXUXEUYZGTMKXSSIJFGPVUTZOFJTDKCYZZATOSLEGBTRGWZVGGQVXAUHXNLDPTEAFXKARZFERYHTPRIADMSXHNLDKWQFAEKCZPBVACDLOSYLLMRLIRYXAMHOQTICOJNQUOVUDGOJGIBQNRZSNYCFVONXJFMKUWJCDGVYKAHTBQMCFUBVYSPBSPPFWEHB");
    msg.lbearing = 0.162620531367;
    msg.lelevation = 0.470933225586;
    msg.bearing = 0.623750065969;
    msg.elevation = 0.139166997845;
    msg.phi = 0.726692406792;
    msg.theta = 0.745489902581;
    msg.psi = 0.398555642648;
    msg.accuracy = 0.668286447147;

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
    msg.setTimeStamp(0.19174322374);
    msg.setSource(38174U);
    msg.setSourceEntity(33U);
    msg.setDestination(13743U);
    msg.setDestinationEntity(120U);
    msg.target.assign("BSTECRNYRRDDNYPKSFKGTXMLAJINIECRSTMGWWVJAWGFTOBKJYEMVKAZEMTNWTXOHGYHRQOVIZECMQCHUAQWHRFDHTKYJSWONFBBYKTDUXUZGHYXQBPOMHSMVGFDWVSQFZBZWLEGXGZFQCJUCXJDKOQLDNJLQLPHUESJNHIZQOPAUJUZPNNDNBPEGFPEVVYOXVIFYIXDIIIA");
    msg.lbearing = 0.121618519668;
    msg.lelevation = 0.890604594255;
    msg.bearing = 0.380485957065;
    msg.elevation = 0.910991872824;
    msg.phi = 0.872107839803;
    msg.theta = 0.904480050976;
    msg.psi = 0.0496255627849;
    msg.accuracy = 0.244018644031;

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
    msg.setTimeStamp(0.236245844253);
    msg.setSource(31368U);
    msg.setSourceEntity(165U);
    msg.setDestination(24230U);
    msg.setDestinationEntity(79U);
    msg.target.assign("FTXIRAYJTJFBNIJQKTYOXUABROPWWIWKNZHHRNDWJCHVLUGEXZYFJZVMRJFGGMWBGXLSNSQNDMLVRTLHDJMGBZBHQSXCDNEDKKAEPPRSAQFSEHXULMEQEXLKAZPAWTWGRPPVHBTYCQOLQYRMFUGCPIOOOYQYMLVGCBEYACVTTTIROUHBXSY");
    msg.x = 0.225025782864;
    msg.y = 0.0609069849062;
    msg.z = 0.563282779581;
    msg.n = 0.157306731715;
    msg.e = 0.801158659784;
    msg.d = 0.564975104636;
    msg.phi = 0.37175556547;
    msg.theta = 0.235357577442;
    msg.psi = 0.412580728123;
    msg.accuracy = 0.779479735124;

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
    msg.setTimeStamp(0.686609412272);
    msg.setSource(12279U);
    msg.setSourceEntity(219U);
    msg.setDestination(18465U);
    msg.setDestinationEntity(65U);
    msg.target.assign("AUUPYCSLZRBDFGZNIOAUUQZBUJAMVRPFSVHZKYIYIJXEVZXUBOEKMMKSCVMSCBKVZJEQJWLRTRIDOJDYQPSCWKWXWRVHVIGUACRWPCDATKGWXDSMOYRBTIUCFJEGNQBMLJDYJPLZVLLXEITHNGUPBGVJHOACOLTZFQCBRHPQAJVAWFBWRLHOPHFQTXTNKOXNSAZPNXLNYZFOYFFHWGIGGRTFEXB");
    msg.x = 0.832642326273;
    msg.y = 0.338596727462;
    msg.z = 0.259033208175;
    msg.n = 0.511514305479;
    msg.e = 0.690372735873;
    msg.d = 0.15160172839;
    msg.phi = 0.0369112374345;
    msg.theta = 0.583884941182;
    msg.psi = 0.628675432873;
    msg.accuracy = 0.858316905494;

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
    msg.setTimeStamp(0.327541811576);
    msg.setSource(14083U);
    msg.setSourceEntity(233U);
    msg.setDestination(65151U);
    msg.setDestinationEntity(32U);
    msg.target.assign("DIOKJZPNTKQYNVRMQZGOXJVCREREIWAJBYCRBDYXLGWQNWICUBUKIJMSDPOAPYKCUOEFQMHPOSKZAKXHQGQXQLHRHGLSJPOHJLLFTTV");
    msg.x = 0.03835373119;
    msg.y = 0.334631038717;
    msg.z = 0.334207259467;
    msg.n = 0.737442515355;
    msg.e = 0.860647788844;
    msg.d = 0.145180786244;
    msg.phi = 0.761992557178;
    msg.theta = 0.995827985082;
    msg.psi = 0.0230919290061;
    msg.accuracy = 0.712423487798;

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
    msg.setTimeStamp(0.331773275617);
    msg.setSource(34599U);
    msg.setSourceEntity(211U);
    msg.setDestination(59089U);
    msg.setDestinationEntity(145U);
    msg.target.assign("BJYTLVVJXMCEKMVFIGDWEXTOBZGUDQZRCHYTQZLWREEKLATXGHSHOAWXPRTYLVXBVO");
    msg.lat = 0.588177852225;
    msg.lon = 0.688488459006;
    msg.z_units = 113U;
    msg.z = 0.858310116885;
    msg.accuracy = 0.812795061013;

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
    msg.setTimeStamp(0.0166538228059);
    msg.setSource(51637U);
    msg.setSourceEntity(228U);
    msg.setDestination(38944U);
    msg.setDestinationEntity(232U);
    msg.target.assign("XDRSZMAYJIZITVGDQZICHYSMYQKZBOMFRZOPXQIGLDESMMJBJMOCZFLQFVERELPXPMBRKCWAHFMTVEGIHHPVUMWFEYEOFRUYOQUWAGCCAUVJOAVKDUNWNGVJEHQKZVNNHJTUUBFTGKHCTZINJVXPBOKUXDGFNQWNBUMAJPTFKTASLQWAKTSLESSWBSPDGJECOWARZLLYURNXGISYD");
    msg.lat = 0.560276530413;
    msg.lon = 0.497772016939;
    msg.z_units = 74U;
    msg.z = 0.818707989989;
    msg.accuracy = 0.930280330221;

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
    msg.setTimeStamp(0.690811319645);
    msg.setSource(15115U);
    msg.setSourceEntity(209U);
    msg.setDestination(7127U);
    msg.setDestinationEntity(121U);
    msg.target.assign("YAGJWDLSPIUPZXKCBHYAFDOLQMZSWTTMQVHQCGTGPDPRNUVDAYEKUBSVHYBQNZZVEJYGXXECQBFLJVYUCQPIRVWEFIAONMKPBSTDQDFPWZETXFKGZEZWUROCDTYURHNWROLLIQWVOTJCUNBNWKZJUCUYIRBWPJXNOXHSVARIEIILQMJJXJSGRZHNHPVNOTRFPWLISRLMBGKDMAKVHGOTSNCKLXMFEABHFGZADXBSAOMMDOFHCS");
    msg.lat = 0.961491578814;
    msg.lon = 0.984474348087;
    msg.z_units = 134U;
    msg.z = 0.679540847368;
    msg.accuracy = 0.759780753193;

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
    msg.setTimeStamp(0.34257874061);
    msg.setSource(34261U);
    msg.setSourceEntity(19U);
    msg.setDestination(57475U);
    msg.setDestinationEntity(233U);
    msg.name.assign("GORYDUFESEBVSTNDRYXFJIPOJOEXHPKVZFORTCBGLUCWGIIAJXBQTFWIVGCRZENPZQDHSGPEQHNUKOOLACMYGKZTMVMIMMHXEBLVTNKCSYYEWEJVYHLCGDHUUFKQUINXPGLTYRRCXWNJUGWXRAAVJACDACSQJ");
    msg.lat = 0.645193259497;
    msg.lon = 0.720181744951;
    msg.z = 0.740961185107;
    msg.z_units = 164U;

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
    msg.setTimeStamp(0.765891401048);
    msg.setSource(41645U);
    msg.setSourceEntity(129U);
    msg.setDestination(44827U);
    msg.setDestinationEntity(220U);
    msg.name.assign("GKSRDENGMGYUCXTHXOPMDIKWZLZJMPQLNMEBJNDLEWTVSFJBRVQNYLKFONNRDPRKQLPPBVTOBMTGEQOCRASCRURCHPVSGZIOHJNUIFMDWIFDIEKOSYNQDVUXSYSSLEOYZTHOCHZMNRYUXBRCAQAMLEQLIUWAFDLAYDCVETBAFKYBOPIFZSUGVISTHHNCRFHTWXJJJFTVBX");
    msg.lat = 0.101902590654;
    msg.lon = 0.940207858769;
    msg.z = 0.574415683554;
    msg.z_units = 126U;

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
    msg.setTimeStamp(0.97102695787);
    msg.setSource(25542U);
    msg.setSourceEntity(160U);
    msg.setDestination(53186U);
    msg.setDestinationEntity(70U);
    msg.name.assign("AZRGWSWNRIRGVWKXXTXDHXMHADMFYRWSRWQPNPOQOPILQKEDTPGHETHCWJTSUCLXNGYUIFCDPMXUFSLPMBKOMGLVHTEBOOFICBHKBROIMZIVDUUDAEUGPCFYSDSQRIAV");
    msg.lat = 0.461004710753;
    msg.lon = 0.436521551563;
    msg.z = 0.818573799112;
    msg.z_units = 26U;

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
    msg.setTimeStamp(0.795451948773);
    msg.setSource(28851U);
    msg.setSourceEntity(232U);
    msg.setDestination(23464U);
    msg.setDestinationEntity(105U);
    msg.op = 195U;

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
    msg.setTimeStamp(0.989107132849);
    msg.setSource(36026U);
    msg.setSourceEntity(109U);
    msg.setDestination(33583U);
    msg.setDestinationEntity(42U);
    msg.op = 211U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("VHVGSGDDBWOSUXTRXWMDNILIUBBAQTCPAXIVQVTEDJTLNWEJJTFCBFFILTJOEBMJQFCBGQISMGLCADRPAVLWKODWZGDNKFBCLZGKUYDPPRWCPKTYUFXMGOCLAUPQSNTNXVHMYRWQYZVUQYHOFWHREJWNEIKSZHJUIPSEIPXBPMNLUQAZOVZANEMEEYAWZYEOKZOUNSRZICZRMMYCAXFHRGTBTULOHGDSVJKQHKASRQXJKNRXLHPDBVFGIFKYY");
    tmp_msg_0.lat = 0.432919857082;
    tmp_msg_0.lon = 0.344902470875;
    tmp_msg_0.z = 0.180895993157;
    tmp_msg_0.z_units = 160U;
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
    msg.setTimeStamp(0.680763942408);
    msg.setSource(1759U);
    msg.setSourceEntity(66U);
    msg.setDestination(47517U);
    msg.setDestinationEntity(121U);
    msg.op = 179U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("LRKPZUHCDYBQWWRGABVPUFDSCKTXBFNGHVMBKSJJLVTESEUYLVBAENGHXIEUSGPAZCXAZJWCZOUHZGUTPFTIPYMOFNZLICHPIFRTDHZNMO");
    tmp_msg_0.lat = 0.839319847959;
    tmp_msg_0.lon = 0.822723507616;
    tmp_msg_0.z = 0.556413829265;
    tmp_msg_0.z_units = 116U;
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
    msg.setTimeStamp(0.861097229885);
    msg.setSource(27911U);
    msg.setSourceEntity(174U);
    msg.setDestination(43403U);
    msg.setDestinationEntity(88U);
    msg.value = 0.372928527194;
    msg.type = 28U;

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
    msg.setTimeStamp(0.998059044202);
    msg.setSource(23297U);
    msg.setSourceEntity(203U);
    msg.setDestination(44857U);
    msg.setDestinationEntity(237U);
    msg.value = 0.582480224587;
    msg.type = 46U;

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
    msg.setTimeStamp(0.0107660045015);
    msg.setSource(65358U);
    msg.setSourceEntity(14U);
    msg.setDestination(20528U);
    msg.setDestinationEntity(171U);
    msg.value = 0.402117428215;
    msg.type = 235U;

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
    msg.setTimeStamp(0.928916640049);
    msg.setSource(10029U);
    msg.setSourceEntity(57U);
    msg.setDestination(15986U);
    msg.setDestinationEntity(130U);
    msg.value = 0.722634325789;

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
    msg.setTimeStamp(0.907010648081);
    msg.setSource(7666U);
    msg.setSourceEntity(136U);
    msg.setDestination(47802U);
    msg.setDestinationEntity(241U);
    msg.value = 0.375964120903;

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
    msg.setTimeStamp(0.0565275599119);
    msg.setSource(55306U);
    msg.setSourceEntity(183U);
    msg.setDestination(58404U);
    msg.setDestinationEntity(32U);
    msg.value = 0.0142512799294;

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
    msg.setTimeStamp(0.0591490488025);
    msg.setSource(36922U);
    msg.setSourceEntity(89U);
    msg.setDestination(24779U);
    msg.setDestinationEntity(7U);
    msg.timestamp_last_service = 0.192956883647;
    msg.time_next_service = 0.999848107936;
    msg.time_motor_next_service = 0.768066295509;
    msg.time_idle_ground = 0.985295119297;
    msg.time_idle_air = 0.903873863661;
    msg.time_idle_water = 0.458054818829;
    msg.time_idle_underwater = 0.936646866889;
    msg.time_idle_unknown = 0.0603934906679;
    msg.time_motor_ground = 0.178160391527;
    msg.time_motor_air = 0.526407186812;
    msg.time_motor_water = 0.428227564998;
    msg.time_motor_underwater = 0.037203843921;
    msg.time_motor_unknown = 0.508548953996;
    msg.rpm_min = -16453;
    msg.rpm_max = 26855;
    msg.depth_max = 0.787131269973;

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
    msg.setTimeStamp(0.603071006656);
    msg.setSource(44660U);
    msg.setSourceEntity(246U);
    msg.setDestination(34248U);
    msg.setDestinationEntity(186U);
    msg.timestamp_last_service = 0.44697987963;
    msg.time_next_service = 0.909904725613;
    msg.time_motor_next_service = 0.170335802801;
    msg.time_idle_ground = 0.216871375271;
    msg.time_idle_air = 0.256953240886;
    msg.time_idle_water = 0.967123239249;
    msg.time_idle_underwater = 0.409105707483;
    msg.time_idle_unknown = 0.0168195224613;
    msg.time_motor_ground = 0.466001673702;
    msg.time_motor_air = 0.638143459336;
    msg.time_motor_water = 0.951693481293;
    msg.time_motor_underwater = 0.838153997405;
    msg.time_motor_unknown = 0.895498384031;
    msg.rpm_min = -1902;
    msg.rpm_max = 11844;
    msg.depth_max = 0.0487337718308;

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
    msg.setTimeStamp(0.0578758596157);
    msg.setSource(35095U);
    msg.setSourceEntity(224U);
    msg.setDestination(27559U);
    msg.setDestinationEntity(204U);
    msg.timestamp_last_service = 0.245494790116;
    msg.time_next_service = 0.216842009002;
    msg.time_motor_next_service = 0.941420645803;
    msg.time_idle_ground = 0.145065976862;
    msg.time_idle_air = 0.575249628752;
    msg.time_idle_water = 0.401554775832;
    msg.time_idle_underwater = 0.491192065794;
    msg.time_idle_unknown = 0.406279413743;
    msg.time_motor_ground = 0.465246256058;
    msg.time_motor_air = 0.541563643822;
    msg.time_motor_water = 0.911990622467;
    msg.time_motor_underwater = 0.436116299557;
    msg.time_motor_unknown = 0.0520568079264;
    msg.rpm_min = -31673;
    msg.rpm_max = 5513;
    msg.depth_max = 0.538727461323;

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
    msg.setTimeStamp(0.639846101794);
    msg.setSource(24315U);
    msg.setSourceEntity(25U);
    msg.setDestination(55475U);
    msg.setDestinationEntity(45U);
    msg.severity = 92U;
    msg.text.assign("OZJOCBLKYIVMRVEAAIFXMGIQZLYNEYFNWGLRJMZKQDWDINNHKCSHVWIQENGTVXMJUMOKXYSMNZUTWFBEOTDHCZOXXSCDJLJULMAXQYHPDJQSBCJPHVGQYWBULTFZRRRGMKGRIBPQESOHCZDYNPERFGEFELVFWNHKARMTPXHKXFCXSJEWUTBBOZGCSVFLPKUUNYPTADGYVUIN");

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
    msg.setTimeStamp(0.957662297152);
    msg.setSource(43246U);
    msg.setSourceEntity(141U);
    msg.setDestination(6333U);
    msg.setDestinationEntity(187U);
    msg.severity = 224U;
    msg.text.assign("ALQQHLJPBCAOZBKXMIJGLGSILAVIJYEPGJUGWYVSQNIZZTDKWPDTXTIJMCCPYAUOTCGIRFSGJSWWCTHRZUWONZAIMSPRDWLVUEZNOKVVRGFGEDQFVNBHSFCKHQFHTNNJORKHHEVYWRGKNOULBMPIILNACDTBKYVFPFMXYOZAEMBYHINYSBORDYSQMXBMRPKPUFKQZXQUWWYBMHZNJFREBDECGDAJZLSVPSXDTCXRF");

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
    msg.setTimeStamp(0.134690528938);
    msg.setSource(44922U);
    msg.setSourceEntity(248U);
    msg.setDestination(32502U);
    msg.setDestinationEntity(88U);
    msg.severity = 30U;
    msg.text.assign("WGMKYHTMLHTGCMNUJWGMOXIRTUXWFGNXDNKOWETFQTOZVJKIRBVPMXDABZZGEJEYXCIZYTCMFBOASRWIEFRITUCBPFRVSMROLJWANASGDMFWMGIGVKPKVVTDAIGNVBWNMOXZPENUJPUYKLXXQHRJQUDYOLZYYCHQJGCUCIUSHDQLNVSRLYBDCJQYSZFNAHENLTJCSYBBWFXHILAUPZTRBIUKJPPKOPWSPOAHDBEVFC");

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
    msg.setTimeStamp(0.00451863423998);
    msg.setSource(40192U);
    msg.setSourceEntity(131U);
    msg.setDestination(6233U);
    msg.setDestinationEntity(176U);
    msg.channel = -46;
    msg.value = 1528431223;
    msg.gain = 212U;

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
    msg.setTimeStamp(0.248228353142);
    msg.setSource(1198U);
    msg.setSourceEntity(151U);
    msg.setDestination(35347U);
    msg.setDestinationEntity(221U);
    msg.channel = 81;
    msg.value = -1337465476;
    msg.gain = 52U;

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
    msg.setTimeStamp(0.687262131181);
    msg.setSource(18415U);
    msg.setSourceEntity(110U);
    msg.setDestination(42535U);
    msg.setDestinationEntity(188U);
    msg.channel = -81;
    msg.value = -144843423;
    msg.gain = 37U;

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
    msg.setTimeStamp(0.725874943936);
    msg.setSource(55134U);
    msg.setSourceEntity(68U);
    msg.setDestination(59505U);
    msg.setDestinationEntity(30U);
    msg.ch01 = 0.90041888832;
    msg.ch02 = 0.67384392042;
    msg.ch03 = 0.703600897726;
    msg.ch04 = 0.152334288174;
    msg.ch05 = 0.178213466249;
    msg.ch06 = 0.938709892418;
    msg.ch07 = 0.691461430742;
    msg.ch08 = 0.992590886077;
    msg.ch09 = 0.0353973639337;
    msg.ch10 = 0.108674522861;
    msg.ch11 = 0.91653793114;
    msg.ch12 = 0.730597160431;
    msg.ch13 = 0.234254160092;
    msg.ch14 = 0.778396528993;
    msg.ch15 = 0.974937966073;
    msg.ch16 = 0.451233642189;

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
    msg.setTimeStamp(0.615226011798);
    msg.setSource(26312U);
    msg.setSourceEntity(139U);
    msg.setDestination(65407U);
    msg.setDestinationEntity(227U);
    msg.ch01 = 0.192541240669;
    msg.ch02 = 0.113876542962;
    msg.ch03 = 0.616305670847;
    msg.ch04 = 0.803749626726;
    msg.ch05 = 0.255539878031;
    msg.ch06 = 0.217093885263;
    msg.ch07 = 0.740089081891;
    msg.ch08 = 0.149169235038;
    msg.ch09 = 0.761778684552;
    msg.ch10 = 0.359216177625;
    msg.ch11 = 0.115653119579;
    msg.ch12 = 0.979741588097;
    msg.ch13 = 0.100595514882;
    msg.ch14 = 0.0620133977783;
    msg.ch15 = 0.248208892696;
    msg.ch16 = 0.674585717462;

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
    msg.setTimeStamp(0.192864109302);
    msg.setSource(42756U);
    msg.setSourceEntity(216U);
    msg.setDestination(56526U);
    msg.setDestinationEntity(164U);
    msg.ch01 = 0.856285248648;
    msg.ch02 = 0.804229182366;
    msg.ch03 = 0.565799344879;
    msg.ch04 = 0.211001690966;
    msg.ch05 = 0.377249731069;
    msg.ch06 = 0.953530500162;
    msg.ch07 = 0.680794438887;
    msg.ch08 = 0.24943917221;
    msg.ch09 = 0.89116612455;
    msg.ch10 = 0.99768320266;
    msg.ch11 = 0.506666937565;
    msg.ch12 = 0.0206941137453;
    msg.ch13 = 0.399339723048;
    msg.ch14 = 0.0965184469259;
    msg.ch15 = 0.862099390479;
    msg.ch16 = 0.458146385349;

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
    msg.setTimeStamp(0.70838628094);
    msg.setSource(41291U);
    msg.setSourceEntity(102U);
    msg.setDestination(16001U);
    msg.setDestinationEntity(17U);
    msg.value = 0.330049193681;

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
    msg.setTimeStamp(0.540970925196);
    msg.setSource(30146U);
    msg.setSourceEntity(210U);
    msg.setDestination(58064U);
    msg.setDestinationEntity(221U);
    msg.value = 0.603007312068;

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
    msg.setTimeStamp(0.0761340206369);
    msg.setSource(19855U);
    msg.setSourceEntity(124U);
    msg.setDestination(247U);
    msg.setDestinationEntity(31U);
    msg.value = 0.199943676167;

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
    msg.setTimeStamp(0.841425482896);
    msg.setSource(424U);
    msg.setSourceEntity(12U);
    msg.setDestination(53530U);
    msg.setDestinationEntity(83U);
    msg.op = 172U;
    msg.lat = 0.0816882288562;
    msg.lon = 0.106414773318;
    msg.height = 0.244355131659;
    msg.depth = 0.566313677096;
    msg.alt = 0.173473226251;

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
    msg.setTimeStamp(0.634516386139);
    msg.setSource(49712U);
    msg.setSourceEntity(245U);
    msg.setDestination(47409U);
    msg.setDestinationEntity(127U);
    msg.op = 97U;
    msg.lat = 0.170349666159;
    msg.lon = 0.109305206421;
    msg.height = 0.150875531689;
    msg.depth = 0.158241919869;
    msg.alt = 0.726284324128;

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
    msg.setTimeStamp(0.536960977419);
    msg.setSource(45811U);
    msg.setSourceEntity(210U);
    msg.setDestination(64907U);
    msg.setDestinationEntity(189U);
    msg.op = 111U;
    msg.lat = 0.516281681272;
    msg.lon = 0.567785508211;
    msg.height = 0.959479357455;
    msg.depth = 0.32207866933;
    msg.alt = 0.619476402378;

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
    msg.setTimeStamp(0.822491276663);
    msg.setSource(51817U);
    msg.setSourceEntity(58U);
    msg.setDestination(1028U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.839651368833;
    msg.lon = 0.617313768451;
    msg.z = 0.792921734524;
    msg.z_units = 207U;
    msg.speed = 0.805538371457;
    msg.speed_units = 206U;
    msg.bearing = 0.122463996996;
    msg.width = 0.379164470448;
    msg.hstep = 0.0646422000603;
    msg.flags = 38U;

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
    msg.setTimeStamp(0.35513265835);
    msg.setSource(48673U);
    msg.setSourceEntity(156U);
    msg.setDestination(54904U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.696182493764;
    msg.lon = 0.855510667446;
    msg.z = 0.604194974553;
    msg.z_units = 59U;
    msg.speed = 0.295729541024;
    msg.speed_units = 146U;
    msg.bearing = 0.756550955485;
    msg.width = 0.0857792943544;
    msg.hstep = 0.369543414108;
    msg.flags = 172U;

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
    msg.setTimeStamp(0.252000982289);
    msg.setSource(26003U);
    msg.setSourceEntity(138U);
    msg.setDestination(44563U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.507772933558;
    msg.lon = 0.429534992501;
    msg.z = 0.501985957546;
    msg.z_units = 9U;
    msg.speed = 0.460086027431;
    msg.speed_units = 150U;
    msg.bearing = 0.465995029843;
    msg.width = 0.870095391203;
    msg.hstep = 0.326572046845;
    msg.flags = 231U;

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
