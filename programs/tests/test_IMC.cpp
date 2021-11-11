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
// IMC XML MD5: 92e85702ae29fe2fbab3b0c645e5ab8f                            *
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
    msg.setTimeStamp(0.204554203384);
    msg.setSource(37957U);
    msg.setSourceEntity(61U);
    msg.setDestination(58346U);
    msg.setDestinationEntity(4U);
    msg.state = 113U;
    msg.flags = 38U;
    msg.description.assign("TKCRVQAHIMPRIYIIZKLGDFUWHGJQXTCYUKFQNDAONUMQPVHSBTEEQVMOROKKBVQVLRKNBXNBJXJMCSGBSPFOKRGLWTMEGVWFANHBGYEDJESNUDYRSWVUFJPPATKFDGOJAPLTZZHJIYIXJXFMCRXYQHFZYOJWURLSYBLKBWANBIZIXKRSUPNNDPXQACXEDTHRHMYHOTOC");

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
    msg.setTimeStamp(0.814690802851);
    msg.setSource(9254U);
    msg.setSourceEntity(49U);
    msg.setDestination(54664U);
    msg.setDestinationEntity(99U);
    msg.state = 131U;
    msg.flags = 157U;
    msg.description.assign("KLAQKMNHPIQHRYROTDNELNAXCMZYLGWTKYGCPTGDCXBPYTQYXKBSGUAHJDAWPCSZXQZNVWVURXFBBNOBKRQLWXYKMWUHTVULNLFOLVINCSUNBRLPPHOXWMQIIGOEFXUMHPSPYQMIVSSVKWCFRLZVPHBJQUDEZMHZREFOITYUJYSEIFTBIKWFKQABCDUEWESTDRQTDMGCLCVSEGFZGGGIXVX");

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
    msg.setTimeStamp(0.8006181605);
    msg.setSource(50570U);
    msg.setSourceEntity(64U);
    msg.setDestination(43494U);
    msg.setDestinationEntity(49U);
    msg.state = 11U;
    msg.flags = 196U;
    msg.description.assign("BEMCRKIXMYYYEIMJYWRHNEAZXXTGWETGHFZNRYMNOXKFKDNAARCPOBJIRZCKZNLVWWDGJWZUHXLNRBDFEIDMXZAPKUDIUMVPISMIQJFUGAJYDTQKGBIAWHSLLFIHPKZXCNQAWSCQPBVWLEUUCTOZOHYMTYBWBLCUNBZGJQKCFTDVAFCCLGPKTHJSAUPEGAGOKQOTPXDJNQFOFLEFEJ");

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
    msg.setTimeStamp(0.77245925132);
    msg.setSource(23829U);
    msg.setSourceEntity(250U);
    msg.setDestination(25224U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.18086792051);
    msg.setSource(27717U);
    msg.setSourceEntity(233U);
    msg.setDestination(32397U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.11151889899);
    msg.setSource(10975U);
    msg.setSourceEntity(188U);
    msg.setDestination(50071U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.666943227985);
    msg.setSource(46244U);
    msg.setSourceEntity(108U);
    msg.setDestination(20220U);
    msg.setDestinationEntity(116U);
    msg.id = 202U;
    msg.label.assign("BZUOIVUQNQRBIGDSXHYJYRCASPHKRWFOMVUEUAAHYPXTCCEEKQBLKCFJLPWRNODUFBIZBQRESBXHEKN");
    msg.component.assign("FRPJGFHGJESWMISHCCWPOZPDKKCCMHVLDR");
    msg.act_time = 5213U;
    msg.deact_time = 4159U;

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
    msg.setTimeStamp(0.338229791657);
    msg.setSource(51175U);
    msg.setSourceEntity(207U);
    msg.setDestination(46848U);
    msg.setDestinationEntity(7U);
    msg.id = 136U;
    msg.label.assign("NWFKTDKZSTHSUOYHUBYXXPLRBFVJHHOMELNIWMDZZESSNSVUQRCPYGLGXWMCZAMANBRCMKGZYXHVRXDKHDPFXONRPNNIYGAMJKZDNWEMPGGTKASB");
    msg.component.assign("FTVNUVGWTRACXMOYMEEAOYGBVXJVIRPTAXEFSZNFLSBCYKCBPKUJSEULKNIXKZTEKNZHLPOFCYOEJOMGTFIBFMQEKUAYAXCMJXD");
    msg.act_time = 28261U;
    msg.deact_time = 40745U;

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
    msg.setTimeStamp(0.893487057647);
    msg.setSource(46513U);
    msg.setSourceEntity(31U);
    msg.setDestination(3248U);
    msg.setDestinationEntity(199U);
    msg.id = 81U;
    msg.label.assign("AFFIFROZKLSYSCXUZNFAVXNFIYOQDDGLJJCDOKMDVMUXXTWNQHWHNHPCHFHPBW");
    msg.component.assign("WTPFLSNCOT");
    msg.act_time = 40125U;
    msg.deact_time = 13737U;

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
    msg.setTimeStamp(0.443316178127);
    msg.setSource(38391U);
    msg.setSourceEntity(246U);
    msg.setDestination(23328U);
    msg.setDestinationEntity(21U);
    msg.id = 101U;

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
    msg.setTimeStamp(0.138855288324);
    msg.setSource(16322U);
    msg.setSourceEntity(37U);
    msg.setDestination(24925U);
    msg.setDestinationEntity(2U);
    msg.id = 90U;

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
    msg.setTimeStamp(0.372550325542);
    msg.setSource(24659U);
    msg.setSourceEntity(197U);
    msg.setDestination(35432U);
    msg.setDestinationEntity(244U);
    msg.id = 147U;

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
    msg.setTimeStamp(0.271252428321);
    msg.setSource(17908U);
    msg.setSourceEntity(1U);
    msg.setDestination(9615U);
    msg.setDestinationEntity(238U);
    msg.op = 162U;
    msg.list.assign("YIVLMKDETVPJZTXYSDUTYPTBMXUNNKHMABSCIOGIZMGURUTGYZIFACTCDRXAKJPNCENAVXBVWZPZXLOUIVWQSBEGTCPHMLFYQUBQRLYHNLWTWWMONJUAGQWYXLOSRGRDVRQPFEYKZIOIFKZSGXJDBVHKALOMFSCGPVLFMQAFQMSSFKFASENTECGVETYKXSHBJDHRJZRUCFRPELIJJXOXWDVNHQBWW");

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
    msg.setTimeStamp(0.231161117561);
    msg.setSource(7675U);
    msg.setSourceEntity(90U);
    msg.setDestination(30640U);
    msg.setDestinationEntity(33U);
    msg.op = 13U;
    msg.list.assign("AXOHELQVBHAUJYMDCBMQQKHWGNDWOALUSHPIITDIELVQNEGRILMESYTVQNBKWGBQXMIKPXNUKNKEVOAF");

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
    msg.setTimeStamp(0.250421693773);
    msg.setSource(22824U);
    msg.setSourceEntity(210U);
    msg.setDestination(1393U);
    msg.setDestinationEntity(150U);
    msg.op = 59U;
    msg.list.assign("EDDUQSTOSGMXNKZWMQJLHNMWYOKAADWZSIZZG");

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
    msg.setTimeStamp(0.299087143381);
    msg.setSource(48953U);
    msg.setSourceEntity(190U);
    msg.setDestination(58424U);
    msg.setDestinationEntity(132U);
    msg.value = 141U;

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
    msg.setTimeStamp(0.0172805491344);
    msg.setSource(43830U);
    msg.setSourceEntity(98U);
    msg.setDestination(12505U);
    msg.setDestinationEntity(148U);
    msg.value = 129U;

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
    msg.setTimeStamp(0.863748840825);
    msg.setSource(52719U);
    msg.setSourceEntity(183U);
    msg.setDestination(64525U);
    msg.setDestinationEntity(69U);
    msg.value = 66U;

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
    msg.setTimeStamp(0.657102751628);
    msg.setSource(31916U);
    msg.setSourceEntity(197U);
    msg.setDestination(23379U);
    msg.setDestinationEntity(217U);
    msg.consumer.assign("GIINFCDYSJQJJXXPRJZWUZQPULZGDKBABTMZBRNYFVNHCDFIDHLOCXXVMKGYUUEEWSCOKSUMRSPNBFLTVYDJRVAFNPTYHIDXHGLHLQOGCEMHCIDPTYAYNQQWGGJOZCMWTEPPFNBNUZVBAWCBATSKVKUTXFMQYRKZKAOKISGZLAJP");
    msg.message_id = 46321U;

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
    msg.setTimeStamp(0.407334124363);
    msg.setSource(0U);
    msg.setSourceEntity(86U);
    msg.setDestination(45093U);
    msg.setDestinationEntity(193U);
    msg.consumer.assign("WJSDMQIBRYCJZFOZIIJORECPXXMULXROMIIXPXSQXZOGCCWVTPRMZJZWWUQRBDGOEPI");
    msg.message_id = 25538U;

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
    msg.setTimeStamp(0.479150836503);
    msg.setSource(44986U);
    msg.setSourceEntity(29U);
    msg.setDestination(314U);
    msg.setDestinationEntity(244U);
    msg.consumer.assign("ZKOYJQJKGOLWQIKLRXOMSCZSLCYTHSQBAIXXQJGMZYCFNAZUFMIHGQHUHPPWFKTCITJQSQGBZIMWLXJDQARCDKEXLVGNCSSIFTCYQV");
    msg.message_id = 61336U;

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
    msg.setTimeStamp(0.780788611194);
    msg.setSource(23089U);
    msg.setSourceEntity(101U);
    msg.setDestination(3506U);
    msg.setDestinationEntity(84U);
    msg.type = 86U;

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
    msg.setTimeStamp(0.595067890238);
    msg.setSource(58743U);
    msg.setSourceEntity(109U);
    msg.setDestination(33329U);
    msg.setDestinationEntity(16U);
    msg.type = 123U;

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
    msg.setTimeStamp(0.312577023656);
    msg.setSource(51749U);
    msg.setSourceEntity(203U);
    msg.setDestination(47987U);
    msg.setDestinationEntity(150U);
    msg.type = 202U;

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
    msg.setTimeStamp(0.161423836015);
    msg.setSource(59637U);
    msg.setSourceEntity(164U);
    msg.setDestination(49362U);
    msg.setDestinationEntity(10U);
    msg.op = 210U;

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
    msg.setTimeStamp(0.821716537895);
    msg.setSource(50751U);
    msg.setSourceEntity(71U);
    msg.setDestination(32385U);
    msg.setDestinationEntity(59U);
    msg.op = 213U;

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
    msg.setTimeStamp(0.898231990185);
    msg.setSource(34298U);
    msg.setSourceEntity(149U);
    msg.setDestination(17152U);
    msg.setDestinationEntity(156U);
    msg.op = 64U;

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
    msg.setTimeStamp(0.300996869326);
    msg.setSource(45253U);
    msg.setSourceEntity(138U);
    msg.setDestination(1588U);
    msg.setDestinationEntity(125U);
    msg.total_steps = 94U;
    msg.step_number = 102U;
    msg.step.assign("SFUWHKRGVYJYGJBRQWYBLFDOAGATLISJZZUFFDURGEMVLQUABZRTRFOBKTSCOPYOCFSCLEGNJPKXHIKTGBXTWIHMNUKWHMKESNOJGLCDTRVLKODNPDDAEEBMIDQXVCURIKLPYGIZQNXMIHGCAYDOBQSICXORNBHPUVJLBHTXNWUDEAYCYIU");
    msg.flags = 130U;

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
    msg.setTimeStamp(0.694306572922);
    msg.setSource(3027U);
    msg.setSourceEntity(178U);
    msg.setDestination(54956U);
    msg.setDestinationEntity(160U);
    msg.total_steps = 126U;
    msg.step_number = 203U;
    msg.step.assign("PFEBZMQLEIBVBTTQXCJQHUTHXRJZNWDBOZKEVKWTSPBRTRWIYPHVFWTOVJMFPMREDNRRHCSFDNNIDVHIALFUMDALECHWFYYCRPDKYLYIRKGRBHWHJLFXLZANSTDBXVNKWCUZXKTZQOXSTEVUVLJGVVCGOOSZQEKINTOMSJZPIZWOIQJCKNBMSUOGUMGYANAASSWGLRY");
    msg.flags = 193U;

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
    msg.setTimeStamp(0.544690729854);
    msg.setSource(18678U);
    msg.setSourceEntity(206U);
    msg.setDestination(40748U);
    msg.setDestinationEntity(85U);
    msg.total_steps = 28U;
    msg.step_number = 118U;
    msg.step.assign("ONJWISTDXLWYGOJJJMVPVXKIOEBYMKEGQMYDNKBPHUTJRWBTHXLBJUOBFMCRFKSYFZPPUUCGFIEAFXQCSSERHAKWZIVCOQBISYBYNHTFQQBVMXUZXOWRNGUZTUTZSACDBIOSGPFZDFSOWUVUEVQTQOWALKAUHHXQEELNCBMRJTI");
    msg.flags = 121U;

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
    msg.setTimeStamp(0.372076143304);
    msg.setSource(14301U);
    msg.setSourceEntity(251U);
    msg.setDestination(28341U);
    msg.setDestinationEntity(121U);
    msg.state = 240U;
    msg.error.assign("CWFUXOWFBHLVXYLACUKKKLMCEYTHKYSHOGWSSWJIURVZLWQBEBPVLJGPAYGKZVKZPWPRSQOQTAUYD");

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
    msg.setTimeStamp(0.652576917596);
    msg.setSource(6603U);
    msg.setSourceEntity(58U);
    msg.setDestination(13137U);
    msg.setDestinationEntity(34U);
    msg.state = 146U;
    msg.error.assign("GENQGHYOVWFTLZUYAZEYUVMOVSTKVMVJKXGZITUDJQ");

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
    msg.setTimeStamp(0.888617632476);
    msg.setSource(35978U);
    msg.setSourceEntity(61U);
    msg.setDestination(37295U);
    msg.setDestinationEntity(248U);
    msg.state = 219U;
    msg.error.assign("CGABGAABQDRJKEAJUYILHTLWTPDKNZZEAXXYSRIPMGCNZVKXNIUHWFOPDGRSFYXBBLSBZFSTWNOYXEUXLQKRMXRXPCRUIJVJQTEUYWEHGYTDCPJTNUKNLMRIMNCOKVYDYRSOVGPREAVFQJEGCOUUDOYOKIQPUTORMHZDCZAFSGZFBBOPLLQTIVWQZDQEBNAGVMMZMJCNXELCPXLJWVSFFZFHIWYWNHVMDCKJSHHKQFMSAKTGQLBPID");

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
    msg.setTimeStamp(0.485517171013);
    msg.setSource(33888U);
    msg.setSourceEntity(0U);
    msg.setDestination(58969U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.818053587875);
    msg.setSource(16900U);
    msg.setSourceEntity(199U);
    msg.setDestination(34507U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.160142259237);
    msg.setSource(54077U);
    msg.setSourceEntity(183U);
    msg.setDestination(34091U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.954025978078);
    msg.setSource(27004U);
    msg.setSourceEntity(158U);
    msg.setDestination(10555U);
    msg.setDestinationEntity(62U);
    msg.op = 148U;
    msg.speed_min = 0.34863831739;
    msg.speed_max = 0.332472204091;
    msg.long_accel = 0.519830494064;
    msg.alt_max_msl = 0.203413126012;
    msg.dive_fraction_max = 0.265360360383;
    msg.climb_fraction_max = 0.784844447438;
    msg.bank_max = 0.385067134732;
    msg.p_max = 0.190985881438;
    msg.pitch_min = 0.140153632715;
    msg.pitch_max = 0.652318519752;
    msg.q_max = 0.658565782995;
    msg.g_min = 0.78950259565;
    msg.g_max = 0.692758365937;
    msg.g_lat_max = 0.851569956357;
    msg.rpm_min = 0.615163522943;
    msg.rpm_max = 0.619049431984;
    msg.rpm_rate_max = 0.902083523687;

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
    msg.setTimeStamp(0.69020234246);
    msg.setSource(23312U);
    msg.setSourceEntity(179U);
    msg.setDestination(5626U);
    msg.setDestinationEntity(232U);
    msg.op = 18U;
    msg.speed_min = 0.89496026026;
    msg.speed_max = 0.0929781789902;
    msg.long_accel = 0.967359153913;
    msg.alt_max_msl = 0.423689767126;
    msg.dive_fraction_max = 0.649360501368;
    msg.climb_fraction_max = 0.288248407142;
    msg.bank_max = 0.92002153068;
    msg.p_max = 0.889941449485;
    msg.pitch_min = 0.832435263408;
    msg.pitch_max = 0.454460907812;
    msg.q_max = 0.340264310414;
    msg.g_min = 0.0679197076686;
    msg.g_max = 0.545272370911;
    msg.g_lat_max = 0.729174451253;
    msg.rpm_min = 0.561740036612;
    msg.rpm_max = 0.220955316237;
    msg.rpm_rate_max = 0.404199369055;

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
    msg.setTimeStamp(0.476128268518);
    msg.setSource(13915U);
    msg.setSourceEntity(225U);
    msg.setDestination(40585U);
    msg.setDestinationEntity(129U);
    msg.op = 66U;
    msg.speed_min = 0.220591866589;
    msg.speed_max = 0.0321883170634;
    msg.long_accel = 0.439492617591;
    msg.alt_max_msl = 0.0445590147955;
    msg.dive_fraction_max = 0.507417422924;
    msg.climb_fraction_max = 0.0136126179945;
    msg.bank_max = 0.158131958428;
    msg.p_max = 0.375451856699;
    msg.pitch_min = 0.64892408615;
    msg.pitch_max = 0.197644683977;
    msg.q_max = 0.759859561804;
    msg.g_min = 0.675027854439;
    msg.g_max = 0.167241340298;
    msg.g_lat_max = 0.596964814236;
    msg.rpm_min = 0.864942293173;
    msg.rpm_max = 0.375050510396;
    msg.rpm_rate_max = 0.173404513648;

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
    msg.setTimeStamp(0.589829148159);
    msg.setSource(38544U);
    msg.setSourceEntity(152U);
    msg.setDestination(1490U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.947999044385);
    msg.setSource(9103U);
    msg.setSourceEntity(73U);
    msg.setDestination(56675U);
    msg.setDestinationEntity(133U);
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("SNVEGPPQCERPZZXDNQYWBAFGMJLAZFFKJAQJCUFULBDODYPGPKRTSEHCWXTZHMWMYXKGEYIHAIWVKDOIJSYEGNDVJHNDWZQCLHLSMUCIBDCNYJNBRTIGSYRMLEQLPGXESTFAUKYCWBWFUJKGODMVRQQAXLZOWVSSOOHRERTOGXETPQATKAOODVNBJZPFIKPCWBBEVZYXAPFJHNGVXLUBLXUUMIDCUFHW");
    tmp_tmp_msg_0_0.lat = 0.369461249453;
    tmp_tmp_msg_0_0.lon = 0.214954623452;
    tmp_tmp_msg_0_0.depth = 0.443355834086;
    tmp_tmp_msg_0_0.query_channel = 10U;
    tmp_tmp_msg_0_0.reply_channel = 241U;
    tmp_tmp_msg_0_0.transponder_delay = 23U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.489088025559;
    tmp_msg_0.y = 0.383552864279;
    tmp_msg_0.var_x = 0.712775661875;
    tmp_msg_0.var_y = 0.692602418248;
    tmp_msg_0.distance = 0.235358237099;
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
    msg.setTimeStamp(0.277249917);
    msg.setSource(21462U);
    msg.setSourceEntity(187U);
    msg.setDestination(11022U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.52845806367);
    msg.setSource(41708U);
    msg.setSourceEntity(170U);
    msg.setDestination(2030U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.783553328297;
    msg.lon = 0.303667665432;
    msg.height = 0.892716064949;
    msg.x = 0.0923041585391;
    msg.y = 0.184667264951;
    msg.z = 0.28109389918;
    msg.phi = 0.636322841169;
    msg.theta = 0.737074917123;
    msg.psi = 0.559664892697;
    msg.u = 0.740963664512;
    msg.v = 0.882595822667;
    msg.w = 0.492098648615;
    msg.p = 0.708001666196;
    msg.q = 0.971737318614;
    msg.r = 0.0862319085947;
    msg.svx = 0.38914793044;
    msg.svy = 0.0802961464366;
    msg.svz = 0.864375450483;

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
    msg.setTimeStamp(0.434619485353);
    msg.setSource(28526U);
    msg.setSourceEntity(247U);
    msg.setDestination(28029U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.511183158782;
    msg.lon = 0.725361891717;
    msg.height = 0.987922366718;
    msg.x = 0.142272378985;
    msg.y = 0.255864137087;
    msg.z = 0.342021771325;
    msg.phi = 0.508359912205;
    msg.theta = 0.306312179108;
    msg.psi = 0.607927880255;
    msg.u = 0.282583687447;
    msg.v = 0.20252827215;
    msg.w = 0.25436675379;
    msg.p = 0.0562330039858;
    msg.q = 0.0857043923449;
    msg.r = 0.449338689206;
    msg.svx = 0.635339774365;
    msg.svy = 0.377715621986;
    msg.svz = 0.941356394727;

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
    msg.setTimeStamp(0.394823487777);
    msg.setSource(35377U);
    msg.setSourceEntity(246U);
    msg.setDestination(18838U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.838551392597;
    msg.lon = 0.288075220243;
    msg.height = 0.175805393933;
    msg.x = 0.381507225301;
    msg.y = 0.65026131506;
    msg.z = 0.633506395077;
    msg.phi = 0.685820268434;
    msg.theta = 0.552725780271;
    msg.psi = 0.717219686771;
    msg.u = 0.0316673416531;
    msg.v = 0.697326630201;
    msg.w = 0.717566771995;
    msg.p = 0.868906208494;
    msg.q = 0.393926465875;
    msg.r = 0.205165131866;
    msg.svx = 0.280910148328;
    msg.svy = 0.598608326282;
    msg.svz = 0.339478053779;

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
    msg.setTimeStamp(0.256912355518);
    msg.setSource(36484U);
    msg.setSourceEntity(12U);
    msg.setDestination(31956U);
    msg.setDestinationEntity(97U);
    msg.op = 208U;
    msg.entities.assign("VWYWHWBPCWYVMIRAPPFELCAVMDLMEG");

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
    msg.setTimeStamp(0.47217272944);
    msg.setSource(9105U);
    msg.setSourceEntity(202U);
    msg.setDestination(7399U);
    msg.setDestinationEntity(98U);
    msg.op = 174U;
    msg.entities.assign("TGPJXLKHCABOEJUHAXQFIBJAGIYNPWOBQGWJSPDENYWXBDEVLAIWGKLXJQCKLNSXRITARYMBGVBOIMRVSFDYCJAFMHCCSRNZVVRXQNJTQUNGBZLLFHMHOORTINVPIAEPMDZOJLPWDTSKJMGQEURFTTMLGYYHOO");

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
    msg.setTimeStamp(0.882837288464);
    msg.setSource(10386U);
    msg.setSourceEntity(28U);
    msg.setDestination(60941U);
    msg.setDestinationEntity(190U);
    msg.op = 110U;
    msg.entities.assign("RQHBTRVUOXCZZXPJPLSJJYZEBFWMNIIMLNPQKRQBOJMPKYSQPNRKXVSJLADBYVFVJWEDDBGGNKEZAQEALWIIDJQZKTLFOUCKNKIMDATQBQXXJFNRSOUPUHZFPYBUUPOWGHVUHRYLIA");

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
    msg.setTimeStamp(0.0555145843526);
    msg.setSource(45899U);
    msg.setSourceEntity(229U);
    msg.setDestination(53846U);
    msg.setDestinationEntity(46U);
    msg.type = 82U;
    msg.speed = 62060U;
    const char tmp_msg_0[] = {126, 1, 39, -13, -38, -55, 3, -84, 1, -13, -20, 29, -40, -102, 123, -31, 94, 122, -100, 34, 28, 45, 6, -79, 19, 57, -88, -63, 67, 83, 14, 123, -32, 90, 46, -74, 19, 120, 115, -93, -122, -88, 69, -47, 110, 35, 100, -87, 12, -46, 89, 118, -25, -27, -54, 8, 11, -67, -36, -95, -93, 6, -51, 30, 109, 89, -106, -88, 83, -116, -121, 98, 35, -108, -52, -124, 85, -93, -70, -125, -110, 26, -17, -69, -19, 52, 15, -116, -101, -4, 125, 64, 46, -81, -103, 67, -115, 54, 99, -101, -20, 121, -35, 117, -66, 19, -61, -98, 99, -71, 6, -71, 114, 100, -41, -57, 66, -38, -116};
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
    msg.setTimeStamp(0.818027842245);
    msg.setSource(44865U);
    msg.setSourceEntity(64U);
    msg.setDestination(35655U);
    msg.setDestinationEntity(27U);
    msg.type = 199U;
    msg.speed = 38877U;
    const char tmp_msg_0[] = {93, -48, -22, 39, -3, 10, -40, -83, 50, -8, 44, -69, -114, 124, -16, 11, -74, 2, -26, -19, -61, -37, 25, -41, 104, -10, 117, 57, -52, 39, -57, -50, -59, -97, 103, -107, -70, 96, 54, 9, 74, 20, -128, 93, -26, 92, -6, 100, -104, 31, 72, 37, -90, 26, 106, 23, -56, 74, 105, 57, -64, -31, -70, 22, -51, 53, 97, 27, -95, 10, -79, -24, 67, -98, 21, 30, 64, 7, -73, -117, 122, 102, 107, -63, -72, 31, 82, 67, 36, 46, -58, -106, 94, -107, 27, -76, -108, -27, -111, 123, -36, 115, 117, -13, -121, 52, 102, 54, -49, 50, -11, 22, 4, -86, -122, 107, -19, 51, -6, -78, 25, -69, 87, 83, 115, 58, 46, 55, -104, 71, 15, -56, -99, 73, -33, -56, -80, 37, -75, 75, -98, -91, 98, 70, 78, -33, 15};
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
    msg.setTimeStamp(0.540565832133);
    msg.setSource(18861U);
    msg.setSourceEntity(34U);
    msg.setDestination(7627U);
    msg.setDestinationEntity(184U);
    msg.type = 51U;
    msg.speed = 63403U;
    const char tmp_msg_0[] = {-10, -36, 41, -96, -48, -55, 31, 114, -123, -98, 112, -91, 41, -49, -44, 103, 48, 62, 54, -26, -60, 78, 19, 63, -18, -20, -117, 63, 43, 1, -103, -123, -96, -54, -112, -69, 36, 29, -95, 54, 87, 17, 35, 54, 62, -49, 43, 86, 9, -107, 21, 116, 109, 54, -32, -98, 32, -14, 11, 82, 28, 35, 38, 21, 12, -56, 28, 27, -55, -127, 15, -48, 34, 126, 48, -12, -41, 112, -30, -12, 15, 51, 37, -69, 118, 19, -33, 35, 72, -117, 115, -14, 51, -23, -73, -51, -33, 103, -10, 56, -31, -86, -88, 75, 11, 56, -52, -85, 47};
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
    msg.setTimeStamp(0.676846066863);
    msg.setSource(25249U);
    msg.setSourceEntity(26U);
    msg.setDestination(9898U);
    msg.setDestinationEntity(126U);
    msg.op = 3U;
    msg.tas2acc_pgain = 0.994917825664;
    msg.bank2p_pgain = 0.516093442905;

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
    msg.setTimeStamp(0.880493273236);
    msg.setSource(11241U);
    msg.setSourceEntity(201U);
    msg.setDestination(6034U);
    msg.setDestinationEntity(185U);
    msg.op = 5U;
    msg.tas2acc_pgain = 0.853814883522;
    msg.bank2p_pgain = 0.898490713014;

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
    msg.setTimeStamp(0.0543442084374);
    msg.setSource(38486U);
    msg.setSourceEntity(17U);
    msg.setDestination(11175U);
    msg.setDestinationEntity(64U);
    msg.op = 205U;
    msg.tas2acc_pgain = 0.932590751311;
    msg.bank2p_pgain = 0.664409321121;

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
    msg.setTimeStamp(0.910404413977);
    msg.setSource(47550U);
    msg.setSourceEntity(185U);
    msg.setDestination(3754U);
    msg.setDestinationEntity(119U);
    msg.available = 2964983511U;
    msg.value = 197U;

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
    msg.setTimeStamp(0.681947958695);
    msg.setSource(63287U);
    msg.setSourceEntity(160U);
    msg.setDestination(32137U);
    msg.setDestinationEntity(31U);
    msg.available = 508976907U;
    msg.value = 198U;

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
    msg.setTimeStamp(0.927287597918);
    msg.setSource(19122U);
    msg.setSourceEntity(12U);
    msg.setDestination(30132U);
    msg.setDestinationEntity(197U);
    msg.available = 257612498U;
    msg.value = 233U;

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
    msg.setTimeStamp(0.438284252473);
    msg.setSource(56567U);
    msg.setSourceEntity(34U);
    msg.setDestination(10221U);
    msg.setDestinationEntity(195U);
    msg.op = 105U;
    msg.snapshot.assign("TWUKJHEQBPMUSJHDMBCZYZXWTTFSLKUVVZIIORUGLOTDGMIUCEZBKEOYRRDJVSWALWOZYFUSYRLGERPOKFQHNNEQOGZQYVLFYDFVICDHGFLGSNVEMJJGUJCEBPKPYAXGMRECXWLSKTHCJCFINUXXHNZUNAKVWHIMIVBFOLJVZUNMWWXDAPFFMCPAISDOAPIPKNXBINYTQXOZDJHTDLMKYGSCAYXQWGDPTBRSWQQSQKMZJHEPHCXTBREANQVB");
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 77U;
    tmp_msg_0.snapshot.assign("HHDARAIPQVODZUSJIIHWBNJHKXWKP");
    IMC::CommSystemsQuery tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 225U;
    tmp_tmp_msg_0_0.comm_interface = 15067U;
    tmp_tmp_msg_0_0.model = 26422U;
    tmp_tmp_msg_0_0.list.assign("PGVSPFDZBROFRLMJLHKCVNDTSOZNIDYYDZOPROFVNDGJJHGVYWUBLBSMLJZJVIESJZWYBDELOQUQREWGHWMTWQKEMKASUCWIFWBLTMJEIXXKNRSAYJCOPADMYYDXMQVLDNARCGFGRXEIXCHSHCQMJFSRZHTEFYPKUFAXGUVBIPQNCTIHODTZPPUKVBGEZAOWIBAHLKGBUJRRXUWFENKAZXCXCHOTVMTPNKQXQUQTBKYWOTAF");
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.747303716758);
    msg.setSource(4882U);
    msg.setSourceEntity(198U);
    msg.setDestination(8608U);
    msg.setDestinationEntity(140U);
    msg.op = 18U;
    msg.snapshot.assign("IXSOVCGPMBSUJOLCAOERWLRPUVICCOCOPAVHJHFSAFCLOPMAVVBQKXBRXHZEMNBOLTCDYLHLWZYR");
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 11133U;
    tmp_msg_0.off_x = 0.836750623635;
    tmp_msg_0.off_y = 0.696213118176;
    tmp_msg_0.off_z = 0.505146116549;
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
    msg.setTimeStamp(0.312313251322);
    msg.setSource(5086U);
    msg.setSourceEntity(115U);
    msg.setDestination(6385U);
    msg.setDestinationEntity(171U);
    msg.op = 110U;
    msg.snapshot.assign("BFEHGDSAYIZKZMQGBPYGBDUVJATASKGBGKOCOPLMZWQJKD");
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.0273394082452;
    tmp_msg_0.type = 188U;
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
    msg.setTimeStamp(0.300981236507);
    msg.setSource(4895U);
    msg.setSourceEntity(147U);
    msg.setDestination(8765U);
    msg.setDestinationEntity(96U);
    msg.op = 72U;
    msg.name.assign("WBKLXNMHHXTNETSIYGOYDPGGPIUXKJZFFQPFEUVIYIWQWKSOXRMSCSNONBMNFXMWQUCMXSAAKUUPAADQVEGMACLEIODTQQCFTZYVIFLEPDBKWWCMCDTFYZEVDCDLIQ");

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
    msg.setTimeStamp(0.237071366112);
    msg.setSource(52570U);
    msg.setSourceEntity(84U);
    msg.setDestination(25664U);
    msg.setDestinationEntity(98U);
    msg.op = 23U;
    msg.name.assign("JERLTIJUURPNPNXTCPGCCNODYMZVASZGHCKRIPMXNNYUVNJYHJFJOIZXQVLSPFFBZTPCHFVXDFKCPEEOUVUVUOSTKGMONYJSIRIKRGDRGUSIPWFRSZEWZDSHJLVQAALYTLEZSDCKFUORIELGQWFDUNZBGNQBWFTAMAAXTORKSXOQMEMKRKOJITZLWBLQDYPLIEWBEEYQKZHQVWCJWODH");

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
    msg.setTimeStamp(0.587303578635);
    msg.setSource(4442U);
    msg.setSourceEntity(28U);
    msg.setDestination(17202U);
    msg.setDestinationEntity(219U);
    msg.op = 183U;
    msg.name.assign("MYLDEZCIVHOFIWYUAEWRBPMOCIWCGJMOMDGBLVPGIQTKAJCWLDEWMWCTQMLGECJHIUYLBSTRMEDQDUKJTSENKBHAGOPWIOXJWSXALNRLRATXVNDVBNFXZ");

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
    msg.setTimeStamp(0.0611361661495);
    msg.setSource(12624U);
    msg.setSourceEntity(213U);
    msg.setDestination(41913U);
    msg.setDestinationEntity(59U);
    msg.type = 103U;
    msg.htime = 0.267527455774;
    msg.context.assign("LDITWEOCMWDQYLLFKMZCFLPRCSARWCNDPGJVWXGSZQZXGHXZFTSCSYSEXNRZJKAWMPPALOXBQTGRTVFBVZUVUONVFUQULJWBKHSYUYVCWIAJLMDGKSXMVJPDAHUTTOGLGEVJYTMGT");
    msg.text.assign("VJITVDRYHELAKBQXTHYTAHJRDQYTSJQOKBZHPOIEBPHWLEBGZOPLCLVGDGIGKTDDYCVRWRAPMPGIVLXRCDBIPKBOIBESUNDSTSCQOXWVCOQFJRBARMBXSURRWNCSJZYVKTQEZNZDMMXLZVUWLGEX");

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
    msg.setTimeStamp(0.637039424322);
    msg.setSource(57154U);
    msg.setSourceEntity(128U);
    msg.setDestination(10722U);
    msg.setDestinationEntity(56U);
    msg.type = 123U;
    msg.htime = 0.618018105024;
    msg.context.assign("CFXWOALPDDCYOZVVOJQVEFFBWZHYVLGPZAEBHGXPQHVBRETZLTHTQCERIZHSSUDDPTTIXBAQMQFHDSIZJWYGWLMKMNHGVKQXWCTMOZWMKSEMJSKOKJQGTANXBZOMYFNDBGIDMNHKFU");
    msg.text.assign("YKNOJLVCFGVBWMPPDVIZTZDNZHHTBDEWUSQCVKRNNLWXMRDQOQBYTOKVROHYMUXAEOGKMZRJAUFAWUSOWNTGVEGEZOQRBLXFHRYLFONZHHKCUBOBLDIWHNUJSFYBJXWDTIELGSJHTAKXPEBCATWIQUJCIOAXKIZVUEYAB");

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
    msg.setTimeStamp(0.404146719426);
    msg.setSource(30209U);
    msg.setSourceEntity(97U);
    msg.setDestination(53160U);
    msg.setDestinationEntity(162U);
    msg.type = 201U;
    msg.htime = 0.196766179669;
    msg.context.assign("HNCEMJETEUYODDMSENQIACCWNZOFZDAJXVZQZKMSCLRZTZXMWELRYJCLUDMOTVUAFTJIFLYESJCUCVNMDQAXYFSUIUTVICOIWOPSAGULBBSFMADTDREPQWXSVEUKLVXPNQFCPUKGBJXVSXWGSZHRQSGWCPWGOBGGIJRMKFZLWGHQPIYNKJDUHHWOYPMLHXXYHKNABORDRDWRTJMFTKNRHHAIE");
    msg.text.assign("AIZWIWTUZMSETABDDXZSPEBTOLFXUMZMUJGBURQPUGHGRPZMLCDUOVKPDWRITCOCNYRMIVLMYHILOCXOXXHEXJNKFQZSCCLSDNOKKZJDVKZGTROFWJWYFSSKZDAYITNCTNJSRWQLBBRNAWKOKVBMYQFVYHJEJZGTBJAAENAVVQCHKGVYYPNUUSLHQSBPRQAIVBQEHPQXHAINWLFTHEISDLWRCBPQYDEPGFIA");

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
    msg.setTimeStamp(0.903456512629);
    msg.setSource(38836U);
    msg.setSourceEntity(61U);
    msg.setDestination(26098U);
    msg.setDestinationEntity(5U);
    msg.command = 177U;
    msg.htime = 0.405063148967;

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
    msg.setTimeStamp(0.769639366842);
    msg.setSource(2656U);
    msg.setSourceEntity(45U);
    msg.setDestination(10530U);
    msg.setDestinationEntity(199U);
    msg.command = 162U;
    msg.htime = 0.00982107219845;

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
    msg.setTimeStamp(0.895824575101);
    msg.setSource(35350U);
    msg.setSourceEntity(215U);
    msg.setDestination(42935U);
    msg.setDestinationEntity(11U);
    msg.command = 3U;
    msg.htime = 0.662637613826;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 231U;
    tmp_msg_0.htime = 0.734129045346;
    tmp_msg_0.context.assign("DFZZNUAQDPASREABFJDITCGPJESKOENSVNZUGRLHTDBIKHCXUHBTRWRDMPRMURKUQYYZOLGCVXFCGXQXLWYCOHYLNUVPQHBUTSZBLXKBXKCNJNVYSZJTHKFJITKBOAZHIBSMAHVTRLGTAUMMYZHLECQHFGPQIRKTLDYBWPDOPYEAVJUXMGQAKFMAIJKEIMQJNLOCWWVIFXWERVOLDC");
    tmp_msg_0.text.assign("GCCUJTRCEFIWIMGVJXHSEUXUXPCKWBANDIOXKRBJXNUNLNMIDZTQOVIITYYPEOITJTYYSGHRILHDTMSBVZWSVSALXGKERCEMHSUZKASWOWRQYPVDHWWBXFAQUTEHFVOB");
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
    msg.setTimeStamp(0.532502907774);
    msg.setSource(44321U);
    msg.setSourceEntity(55U);
    msg.setDestination(60395U);
    msg.setDestinationEntity(23U);
    msg.op = 235U;
    msg.file.assign("CSGTLNSZURJVJUWODPVUSFDPRJTKYWJEKUEZFZRLRPTOYYEPLNBNBVVFSGPSWAGADUIVXKFHBWNZYJGZIQBOEQHQFAGWLTDAKSMQONXYCGJIZBRMUWTHQQERGLJLNINECAFMIBZVXCOQWXGLCEAHLAXOAVDONYMZQPDBWEKXZIUFXNTEHNRUPITVCRDIXMQUURPACPWJDTMOJF");

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
    msg.setTimeStamp(0.985666895516);
    msg.setSource(56980U);
    msg.setSourceEntity(5U);
    msg.setDestination(16920U);
    msg.setDestinationEntity(130U);
    msg.op = 24U;
    msg.file.assign("QLKWOMFLSXZLERBHTLIXMFWCPTZZBDKWDYADTPIETYDQKNPJGNHLECGBWGVYCESSACNPMOEVRCAYHJSAQLOUXKAJJMPKJGYOQUPTFTSQCBFYABOYUYRIHTCPFNGCENDWZRQMAUMSUDEGOUWVXJLKEICUTWVGPGAOZWKZXBDJGRMVTSXVHFKBKRAQUQJTZZJO");

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
    msg.setTimeStamp(0.152543441661);
    msg.setSource(633U);
    msg.setSourceEntity(33U);
    msg.setDestination(54827U);
    msg.setDestinationEntity(37U);
    msg.op = 193U;
    msg.file.assign("SHQKCLBBEAYZVKISURCYOMQCIEXJOMDAYYXFBQGBZPXGVHRNGCFFNJKUVAGYNUXWDSTLYERBAGMCKYSXGGNBIDOLJBISFWMERCWIHVUJOJYXNGQGHEWDGREEAIPZMSTOBKDOSJLWTTNMACSMXMPQQPJFVXTZWTJAOVDOHDPTRAIFTWIBKKLHNVNCDQMQUQYWXDHZPDLKIMLEJRUVLUPZOTKWEHFPLCQEUZNPSRHCYUWKRSZFXZUNAFHIR");

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
    msg.setTimeStamp(0.989046214004);
    msg.setSource(48322U);
    msg.setSourceEntity(248U);
    msg.setDestination(58811U);
    msg.setDestinationEntity(166U);
    msg.op = 95U;
    msg.clock = 0.26630568052;
    msg.tz = -106;

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
    msg.setTimeStamp(0.463863262712);
    msg.setSource(22070U);
    msg.setSourceEntity(88U);
    msg.setDestination(44759U);
    msg.setDestinationEntity(181U);
    msg.op = 93U;
    msg.clock = 0.0541797599141;
    msg.tz = 124;

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
    msg.setTimeStamp(0.839531175589);
    msg.setSource(39311U);
    msg.setSourceEntity(130U);
    msg.setDestination(23247U);
    msg.setDestinationEntity(70U);
    msg.op = 24U;
    msg.clock = 0.686067553275;
    msg.tz = 47;

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
    msg.setTimeStamp(0.419239401592);
    msg.setSource(44824U);
    msg.setSourceEntity(185U);
    msg.setDestination(13156U);
    msg.setDestinationEntity(12U);
    msg.conductivity = 0.256681853779;
    msg.temperature = 0.591464254081;
    msg.depth = 0.0710081131465;

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
    msg.setTimeStamp(0.0968295018716);
    msg.setSource(36302U);
    msg.setSourceEntity(8U);
    msg.setDestination(8068U);
    msg.setDestinationEntity(252U);
    msg.conductivity = 0.599551787556;
    msg.temperature = 0.610877876175;
    msg.depth = 0.902047394429;

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
    msg.setTimeStamp(0.110130503062);
    msg.setSource(29924U);
    msg.setSourceEntity(74U);
    msg.setDestination(54466U);
    msg.setDestinationEntity(139U);
    msg.conductivity = 0.246009308052;
    msg.temperature = 0.696802193929;
    msg.depth = 0.254607208355;

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
    msg.setTimeStamp(0.505808649758);
    msg.setSource(11074U);
    msg.setSourceEntity(95U);
    msg.setDestination(40234U);
    msg.setDestinationEntity(74U);
    msg.altitude = 0.214025756344;
    msg.roll = 22419U;
    msg.pitch = 48407U;
    msg.yaw = 58920U;
    msg.speed = -382;

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
    msg.setTimeStamp(0.288841624065);
    msg.setSource(20296U);
    msg.setSourceEntity(82U);
    msg.setDestination(46851U);
    msg.setDestinationEntity(19U);
    msg.altitude = 0.7845768573;
    msg.roll = 49135U;
    msg.pitch = 11987U;
    msg.yaw = 18433U;
    msg.speed = 23203;

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
    msg.setTimeStamp(0.34341397254);
    msg.setSource(57524U);
    msg.setSourceEntity(251U);
    msg.setDestination(40744U);
    msg.setDestinationEntity(160U);
    msg.altitude = 0.852477850498;
    msg.roll = 35516U;
    msg.pitch = 43819U;
    msg.yaw = 33168U;
    msg.speed = -29964;

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
    msg.setTimeStamp(0.440365520423);
    msg.setSource(60848U);
    msg.setSourceEntity(26U);
    msg.setDestination(1727U);
    msg.setDestinationEntity(22U);
    msg.altitude = 0.206104630224;
    msg.width = 0.714063925182;
    msg.length = 0.291512237606;
    msg.bearing = 0.395503797637;
    msg.pxl = -25674;
    msg.encoding = 226U;
    const char tmp_msg_0[] = {-34, 91, -44, -124, -17, -86, -16, 14, 49, 46, 67, -20, 26, 75, 66, -69, -70, -70, 95, -114, -111, 101, -111, -103, -30, 44, 1, 4, -13, -103, 124, -27, -69, 57, 84, -90, 50, -30, 92, 49, 51, 13, -21, 88, -17, 35, -43, -39, -30, 90, 2, 91, -114, -103, 35, 49, 115, 59, 125, 42, -83, -79, -16, -98, -23, 32, -110, -61, -65, -69, -46, -2, 123, -86, 47, 106, 87, -122, 52, -83, -76, -116, 6, 84, 33, 91, -32, -44, 62, -104, -125, -115, 104, -12, 115, 11, 46, 108, 11, -122, -8, 50, -126, -24, -91, -99, -98, 85, 40, 85, -33, 10, -77, -114, -50, 80, 59, -103, 36, -81, 98, 63, 13, 42, 126, 117, -60, -108, 83, -128, -22, 42, 4, 85, -24, -18, -96, -90, 20, -96, 101, 12, -70, 0, -39, -121, 106, -42, 67, -82, 76, -96, -3, -1, -7, 62, 77, 60, 57, -105, 34, -23, 29, 4, 77, 77, 84, -8, 29, -69, -118, 14, 11, 70, -95, 88, 77, -34, 108, 49, 69, -68, 4, -6, 42, -85, 44, -101, -102, 46, -38, -83, 91, -15, 69, 67, 7, 82, 24, 119, 2, 97, 23, 72, -71, -60, -109, -4, -72, 12, 8, -64, 109, -29, 73, -91, -15, 77, -59, -77, 51};
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
    msg.setTimeStamp(0.819297229869);
    msg.setSource(46236U);
    msg.setSourceEntity(251U);
    msg.setDestination(5768U);
    msg.setDestinationEntity(91U);
    msg.altitude = 0.876296419437;
    msg.width = 0.211302318083;
    msg.length = 0.26407348464;
    msg.bearing = 0.738476864871;
    msg.pxl = 1885;
    msg.encoding = 104U;
    const char tmp_msg_0[] = {75, -75, 73, -59, 52, -19, -105, 78, 13, 73, 68, -42, -13, 53, 67, 56, 112, 11, 6, -100, -78, -19, -11, 68, 50, -10, -125, -66, -123, -107, -53, -114, -41, -82, 124, 85, -39, 26, -40, 58, -126, -12, -98, 18, 104, 10, -86, 20, 16, 79, -40, -87, 31, 53, 0, 46, -64, 7, 120, -4, 11, -15, -4, -55, -78, 69, 23, -121, 25, 119, 79, -122, 23, 80, 28, 12, 106, -110, -128, 98, 95, 93, 102, -54, 57, -123, 101, -102, -70, -55, -123, -94, -109, 69, -61, 90, 116, -112, 3, 10, -51, 33, -26, -38, 121, 23, -67, -101, -84, 35, 107, -76, -101, 117, -42, 14, -40, 114, 14, -8, -78, 8, 85, -46, 126, 21, -18, 95, -55, 64, 89, 53, 29, 22, -4, 49, -69, 20, 33, 57, -59, -85, 55, -6, -104, 113, 89, -104, -87, 24, -25, -102, -69, 59, 34, -27, 27, 72, 31, -63, 86, -45, -64, -123, 32, 109, 65, 33, -9, -122, -56, -84, -48, -64, 80, -7, 6, 12, 9, 103, 66, -23, -7, -77, -73, 12, 118, 72, 46, -11, -39, 108, -94, -59, -64, 46, -68, -60, -19, -7, -29, 81, -102, -10, 91, 1, 12, 49, -62, -7, -2, 101, 105, -31, -35, -14, -30, 125};
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
    msg.setTimeStamp(0.955475024736);
    msg.setSource(25728U);
    msg.setSourceEntity(189U);
    msg.setDestination(24382U);
    msg.setDestinationEntity(206U);
    msg.altitude = 0.285648909356;
    msg.width = 0.301293971034;
    msg.length = 0.352214895816;
    msg.bearing = 0.39046580564;
    msg.pxl = 29561;
    msg.encoding = 194U;
    const char tmp_msg_0[] = {60, 12, -10, 26, -105, -3, 11, -81, -69, -97, -19, 103, 100, -81, 119, -42, 79, -36, 16, -37, -112, -65, 85, -114, 33, -29, 110, -45, 62, -85, 83, -68, 39, 16, -17, -101, 80, -50, -99, -5, -68, 38, -54, 3, 74, 111, 66, 56, 117, 44, -108, 66, -88, 103, -128, 61, 70, -78, 29, -116, 24, -51, 82, -94, -128, -46, 15, -73, -62, 62, 30, -104, -77, 58, 93, 107, 79, -74, 87, 56, -74, 68, 43, 3, -63, -121, 78, -58, 103, 118, -108, 25, -69, 69, 14, -24, 48, -67, -42, -72, 118, 91, 77, -59, -87, 48, -92, 5, -76, -50, -4, 12, 60, -93, -46, -115, 103, 114, -27, -70, 109, 72, 8, 27, 95, -21, -68, -7, -120, -82, -117, 49, -70, -70, 13, -26, 52, 51, 110, 101, -67, -118, 60, 101, 37, 94, 123, 119, -77, -27, 89, 100, -32, 97, 119, -89, -105, -46, -74, 25, -103, 71, 29, -86, 13, -96, -36, 89, 67, 52, -23, -81, -2, -50, 22, -109, 59, -83, 96, 69, 62, -99, -64, -75, 70, 119, 43, 81, -9};
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
    msg.setTimeStamp(0.996702830023);
    msg.setSource(61281U);
    msg.setSourceEntity(56U);
    msg.setDestination(36670U);
    msg.setDestinationEntity(221U);
    msg.text.assign("KLMVDVGEGUSKOWHGWGBZNCJEPLSAVDPNVKAPLLUMERJISUZWAMRQYNRCZRWTHVNPCWHUXQWIBIEADCUBVNZBFPEIBJPDHDFJYPALVBXYQTSNXKSXSJTTSMSCASIDXEGFINOFBARFUJOTFUZUJZIVCRYPJTGCEFQLQXWHQKYKHITGAYDXHMIOQKENMXBGNLOKXCTMOHXMYYLRHBQGSWZBDPFCCO");
    msg.type = 34U;

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
    msg.setTimeStamp(0.862087951391);
    msg.setSource(37548U);
    msg.setSourceEntity(65U);
    msg.setDestination(57449U);
    msg.setDestinationEntity(47U);
    msg.text.assign("IWLKOAHMRVPUWRBNWVCTUYWQYPOIANKKJBKSPCJVMCEJBFGJISMYGRXPOQBKXEFMIRPQBKGJAHLMPFSLREMVZIRZXLPNXGNTYHACZJXBZGTUUXESPSAKRFYTCXJZCEMOOFKZXWZHUBOUYPAIYHAEEZCHDQ");
    msg.type = 19U;

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
    msg.setTimeStamp(0.0511359243547);
    msg.setSource(6200U);
    msg.setSourceEntity(107U);
    msg.setDestination(43186U);
    msg.setDestinationEntity(225U);
    msg.text.assign("JRSKXTNCCWCGABNSTRMVXPTLTQZEVZRPDSYRFXYIQVGCUMBMNMJVOEBALSYJSYGOJBSEUQOWGGNMGTTBETZSODHIOGNLCZHHFVQLWLXQRPYXPODYOAKLCTKDJIUYPUWXKBJPLJRTEAZAHBXGZQZLRIJOIZKDRWOUFAASZQKDEFIZFHEIQXDAXXBFWIKGYWMUAVBPUJHHSFVNNDNRQFKCQGPYCDM");
    msg.type = 205U;

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
    msg.setTimeStamp(0.12957231215);
    msg.setSource(6060U);
    msg.setSourceEntity(44U);
    msg.setDestination(11123U);
    msg.setDestinationEntity(158U);
    msg.parameter = 161U;
    msg.numsamples = 13U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 2931U;
    tmp_msg_0.avg = 0.71713139327;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.532165715742;
    msg.lon = 0.205349692411;

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
    msg.setTimeStamp(0.435021667606);
    msg.setSource(43963U);
    msg.setSourceEntity(253U);
    msg.setDestination(15426U);
    msg.setDestinationEntity(76U);
    msg.parameter = 79U;
    msg.numsamples = 34U;
    msg.lat = 0.894600312102;
    msg.lon = 0.482219163734;

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
    msg.setTimeStamp(0.195816180919);
    msg.setSource(1914U);
    msg.setSourceEntity(55U);
    msg.setDestination(17813U);
    msg.setDestinationEntity(42U);
    msg.parameter = 32U;
    msg.numsamples = 23U;
    msg.lat = 0.191466699913;
    msg.lon = 0.829039840687;

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
    msg.setTimeStamp(0.302740247173);
    msg.setSource(52912U);
    msg.setSourceEntity(16U);
    msg.setDestination(48326U);
    msg.setDestinationEntity(98U);
    msg.depth = 55646U;
    msg.avg = 0.0933811749259;

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
    msg.setTimeStamp(0.293727225082);
    msg.setSource(56690U);
    msg.setSourceEntity(134U);
    msg.setDestination(40240U);
    msg.setDestinationEntity(246U);
    msg.depth = 17616U;
    msg.avg = 0.794933166515;

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
    msg.setTimeStamp(0.702670206556);
    msg.setSource(33504U);
    msg.setSourceEntity(232U);
    msg.setDestination(64672U);
    msg.setDestinationEntity(217U);
    msg.depth = 47534U;
    msg.avg = 0.922873850508;

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
    msg.setTimeStamp(0.256310284772);
    msg.setSource(23208U);
    msg.setSourceEntity(149U);
    msg.setDestination(64829U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.1020556082);
    msg.setSource(29319U);
    msg.setSourceEntity(106U);
    msg.setDestination(41287U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.288989833345);
    msg.setSource(6452U);
    msg.setSourceEntity(89U);
    msg.setDestination(63257U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.178000778489);
    msg.setSource(8003U);
    msg.setSourceEntity(134U);
    msg.setDestination(39807U);
    msg.setDestinationEntity(201U);
    msg.sys_name.assign("KYMGMJVJGUJQCWYSJWAIIXAYSREYWNKMPUUCCLZVGZUFMRRXMTXZKBADZTCEETFJMCBNQFXBICGPALSYCTDAEWOFHEUMEJGENVPQSIBMWYKZDFLPFYUQWXBSNTPXJHFLWXIKGL");
    msg.sys_type = 194U;
    msg.owner = 25779U;
    msg.lat = 0.279829731185;
    msg.lon = 0.902822138205;
    msg.height = 0.0486956230907;
    msg.services.assign("ELKSPJWCFNDGQKZCZOKXZFXNKOBPWISRTGTGRQKDPCQUYVJFZOXPMILAJFLEWQAXPGDLSGEZEZBIRCEFHRKJMHVHELEZBUXSHMICKTPVORGYXHBYFLCAJZVXBUUTBWCDVSTDIOBADIAABSVLGRNMNMNIVHIQKSSQM");

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
    msg.setTimeStamp(0.776455595297);
    msg.setSource(31654U);
    msg.setSourceEntity(20U);
    msg.setDestination(53101U);
    msg.setDestinationEntity(231U);
    msg.sys_name.assign("IZEJXDZOMNQSTPRBZHXBGQCKRTHFNAPNWCEOWLFFGSLAFBQVPGVRMXQNUTLQEXGSLNKJFLTLHVORFVYWIDUDDDSMVIMIAACQJZSLCIHCXYJJGOSWXTQDIDAFHQHWKKUPWZNMJYQKMPYEVFSABILTPXMYBZJUAEKDOFVGJOCOHGBSNRKZYHVNAETUCPADCWZPYGYLWYZTUBJOGKTBKXBBFTUASNRRQVXJMRKWXUISWHODI");
    msg.sys_type = 11U;
    msg.owner = 3311U;
    msg.lat = 0.804523281819;
    msg.lon = 0.125519631911;
    msg.height = 0.512617343257;
    msg.services.assign("BLWLNAHQBJRXCUCRBBEGWHEZCBJFDOHZDJSQEXLJJESYANPVPRPWK");

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
    msg.setTimeStamp(0.71123753719);
    msg.setSource(27650U);
    msg.setSourceEntity(119U);
    msg.setDestination(11881U);
    msg.setDestinationEntity(90U);
    msg.sys_name.assign("QDJFWCVPIPWFQAVAQXERBMHVKKOPMJOKPUVASISHYORPRAGYDOHEOREBWODFNLKLIEYNNAM");
    msg.sys_type = 239U;
    msg.owner = 35018U;
    msg.lat = 0.492864788401;
    msg.lon = 0.845701674871;
    msg.height = 0.457070833967;
    msg.services.assign("OTIPPKGABLZBBVTGLLAKWCPVMWJARJYYKUXEYTHIHQHDORDYUVWUGTSBGBDSOQNWMXHUNGRHT");

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
    msg.setTimeStamp(0.559858883149);
    msg.setSource(2677U);
    msg.setSourceEntity(61U);
    msg.setDestination(10861U);
    msg.setDestinationEntity(221U);
    msg.service.assign("BEHTWCNYKACIIJWCKJRFQFHOQIWJXYFVMUUDKAKPTRLRSTYEPJABXEU");
    msg.service_type = 251U;

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
    msg.setTimeStamp(0.88671141533);
    msg.setSource(33310U);
    msg.setSourceEntity(216U);
    msg.setDestination(26400U);
    msg.setDestinationEntity(230U);
    msg.service.assign("KHBSCWIKWHQWSPUINTDAODNZSWYGBTBZADQJVUYHLHPQWJDXKLKZPGRMNAONOAPKETNSUCQTGVXODAGGQFLFEJTDPDLMHKWCJFHZZGQJV");
    msg.service_type = 169U;

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
    msg.setTimeStamp(0.105896835917);
    msg.setSource(3109U);
    msg.setSourceEntity(24U);
    msg.setDestination(19185U);
    msg.setDestinationEntity(170U);
    msg.service.assign("YLAMJYAZTEAJJFPBLEOKLOMDSZAUJQJPSEDDIXRKSJBHBQCRFCGBZFWDNGCHRJIGPSTAPJVHVXEWEOPPDTYBYBFAHKNIFYXTSHHTYRQKIGCABK");
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
    msg.setTimeStamp(0.843895125028);
    msg.setSource(3043U);
    msg.setSourceEntity(104U);
    msg.setDestination(49454U);
    msg.setDestinationEntity(73U);
    msg.value = 0.309911049504;

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
    msg.setTimeStamp(0.417259729869);
    msg.setSource(20166U);
    msg.setSourceEntity(125U);
    msg.setDestination(58852U);
    msg.setDestinationEntity(229U);
    msg.value = 0.887225801572;

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
    msg.setTimeStamp(0.741351097551);
    msg.setSource(45844U);
    msg.setSourceEntity(40U);
    msg.setDestination(47248U);
    msg.setDestinationEntity(237U);
    msg.value = 0.588113445726;

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
    msg.setTimeStamp(0.456808512534);
    msg.setSource(31260U);
    msg.setSourceEntity(8U);
    msg.setDestination(30014U);
    msg.setDestinationEntity(129U);
    msg.value = 0.949093090615;

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
    msg.setTimeStamp(0.95076065313);
    msg.setSource(58277U);
    msg.setSourceEntity(225U);
    msg.setDestination(24693U);
    msg.setDestinationEntity(241U);
    msg.value = 0.475300195596;

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
    msg.setTimeStamp(0.201345041061);
    msg.setSource(44574U);
    msg.setSourceEntity(56U);
    msg.setDestination(51646U);
    msg.setDestinationEntity(248U);
    msg.value = 0.885549250704;

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
    msg.setTimeStamp(0.524465798785);
    msg.setSource(58728U);
    msg.setSourceEntity(142U);
    msg.setDestination(25710U);
    msg.setDestinationEntity(43U);
    msg.value = 0.366013434885;

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
    msg.setTimeStamp(0.280977049966);
    msg.setSource(19547U);
    msg.setSourceEntity(76U);
    msg.setDestination(11273U);
    msg.setDestinationEntity(174U);
    msg.value = 0.877239934311;

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
    msg.setTimeStamp(0.446687891823);
    msg.setSource(60433U);
    msg.setSourceEntity(137U);
    msg.setDestination(2756U);
    msg.setDestinationEntity(33U);
    msg.value = 0.342669638652;

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
    msg.setTimeStamp(0.923599245168);
    msg.setSource(5860U);
    msg.setSourceEntity(133U);
    msg.setDestination(17962U);
    msg.setDestinationEntity(45U);
    msg.number.assign("ZEJEODCZFOPISOBFALMYIDQAUCNHKYWYEKHZSEWHJWPRFABMHZTHUYSKSGLCCJDBCMTBREIRTUDFWTUFVQDJVVFZAWQWYHALQXFXMPNGYXZETQKFBPZWCRO");
    msg.timeout = 61294U;
    msg.contents.assign("EHQNHYPSRASJHEGIZXIATYVYOGPCFRWLQBFVJVCWIBTLVXTCAIODNDPAOWLRLAQCNERVMXYRTSVGKNFPCIMNQFMBTRYKKJBVWAXSMJGDKTSCPQJNODUMGMROYBJULVADZFQGPLKBZPTQTNHRRLSWXPZDLHEHZJKXQUODWUZ");

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
    msg.setTimeStamp(0.28025194635);
    msg.setSource(7690U);
    msg.setSourceEntity(19U);
    msg.setDestination(6011U);
    msg.setDestinationEntity(226U);
    msg.number.assign("BCSEBZONABGWVMPPONGTRMKHYHBUESOSYSHYRKWVSLCGTXNTVBERAPTADIQXURPQGAXIDCOMVFDZRAIZANELDCEKYVTJJMPLVXXBKQKXIVTJJAU");
    msg.timeout = 58148U;
    msg.contents.assign("EKOGPZQCINPVQFABGSTXPNAWTTIFQLLPRXBLFBUUKKTGVCNMTOTKIAFHCDJSSFVTWWOEZMGCDYZKWYIQZIELCCDMZYKRDWKGNDJNCUXUBEEJJQLPVJINHJOQSSCVQTYSYJEGIBXRHEMPSHALLKRHEZTBGAVSUJDUGIPMOHIHLTRNOMXMVGFDIXLEARYZLNKJVQBASMOZSBRBRANHDWOBQHYACDUMKVRGUXFQOFPOEPUYPR");

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
    msg.setTimeStamp(0.266931210996);
    msg.setSource(2656U);
    msg.setSourceEntity(205U);
    msg.setDestination(39457U);
    msg.setDestinationEntity(76U);
    msg.number.assign("OEGDYIUTJR");
    msg.timeout = 11652U;
    msg.contents.assign("NWKKKSACICMXUJEIJPVAMONWPGEJYYISLYVRYMZNAJBNFLPYUFHTUIQWKMDQURMTFTFVZUWGDOADMBBVWJVAS");

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
    msg.setTimeStamp(0.212985286707);
    msg.setSource(34573U);
    msg.setSourceEntity(197U);
    msg.setDestination(65038U);
    msg.setDestinationEntity(232U);
    msg.seq = 1357551243U;
    msg.destination.assign("XXUNFFNHOYHHJGDIJGEKLSY");
    msg.timeout = 21346U;
    const char tmp_msg_0[] = {112, -119, 34, 116, 19, 95, -91, -41, 73, -5, 109, 20, -99, 61, 120, 115, -23, -68, -60, 19, -29, -72, 29, 18, -29, 26, 32, -5, 120, 62, -116, 101, -108, -16, -56, -75, -30, -113, -6, -17, -83, 107, -109, -25, 114, -20, -93, 11, -119, 21, 70, 90, -44, 100, 22, -122, 39, 7, -72, -97, 73, 125, -73, 97, -90, 67, 47, -29, 18, 35, 37, 91, 22, -45, 117, -28, -70, -84, -78, 25, -49, -84, -42, 118, -45, 86, -38, -82, -78, 95, 5, 65, 88, -46, 82, 4, 80, -48, -128, -77, 24, 16, 43, 71, 119, 8, 30, -66, -28, -98, 37, 124, 29, 3, 116, 36, 22, 12, 63, -88, -55, 29, 100, 28, -61, 101, 24, -104, 116, 110, 105, -69, 105, -7, 19, -19, 27, 37, 91, 117, -97, 104, 46, -18, 98, -126, -69, -3, 24, -95, -25, -28, 119, -89, 20, -27, -20, 6, 7, 11, -125, 104, 79, 25, -80, -84, 123, 122, 95, 54, 11, 103, -35, 27, -93, 118, 22, -27, -116, 96, -60, 40, -67, 80, 39, 34, -9, 5, -13, -91, -71, -10, 107, 101, 19, 11, 21, 6, -37, -43, 109, -92, 0, -111, -30, -33, 121, 25, -36, 24, 104, -92, 78, 19, 61, 72, -41, -22, 8, 39, -116, 90, 91, -102, 92, -83, -97, -78, -6};
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
    msg.setTimeStamp(0.724502373901);
    msg.setSource(9419U);
    msg.setSourceEntity(186U);
    msg.setDestination(52963U);
    msg.setDestinationEntity(6U);
    msg.seq = 2396987912U;
    msg.destination.assign("XRHVXIJYBQEVBQTNHVAIBEKIVRPPFRSTUGJKBYCESUMDQCMCRIMEITIBPDWWZUUYBBDQVL");
    msg.timeout = 40587U;
    const char tmp_msg_0[] = {-10, -25, -22, 113, -62, 42, 122, -68, 95, -55, -5, 96, -88, 106, 60, -3, 91, -42, 106, 25, 120, -99, -53, -27, 117, 105, 62, -4, -9, 0, -127, -104, 114, 66, -98, -30, 22, -65, 38, 19, -22, -8, -117, 123, -110, -37, -122, 56, 82, 13, -12, -102, 99, -123, 89, -53, -65, -125, 112, 67, -22, -83, -1, -123, -76, 32};
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
    msg.setTimeStamp(0.389996965102);
    msg.setSource(19017U);
    msg.setSourceEntity(124U);
    msg.setDestination(41075U);
    msg.setDestinationEntity(202U);
    msg.seq = 3497342363U;
    msg.destination.assign("GLEUWJFLHTZDXMIUXYZRLCGVEPECRUXODICKXLTOZPRJLAUGBAMWAVVLAHOPDRZ");
    msg.timeout = 33980U;
    const char tmp_msg_0[] = {60, -85, -40, 33, -78, 28, 37, 22, -2, 77, 98, -35, -17, 44, 82, -103, 24, -6, 71, -74, 57, -7, -71, 117, -100, 51, 84, -79, -99, -101, -122, -124, -58, 45, 74, 2, -49, -113, 116, -90, -44, 89, 47, 116, 97, 39, 35, -25, 122, 116, 87, -31, -45, 71, -53, -96, 75, -75, -88, -42, 26, 15, 0, -44, -112, -125, 60, 28, -17, -107, -123, 9, 49, 45, 46, -125, -2, -54, 66, 3, 29, 36, 13, 63, 68, -91, -104, -117, 77, -11, 103, -71, -109, -81, -43, -88, -100, 62, 4, 103, -111};
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
    msg.setTimeStamp(0.994893428014);
    msg.setSource(41267U);
    msg.setSourceEntity(63U);
    msg.setDestination(57255U);
    msg.setDestinationEntity(5U);
    msg.source.assign("YHAPQPQXCXKXDUBYLFCPNVXJFENDHRAFRPTOUYGBLBPCWOBJASRXUHKIAOIAGQEJLGDFFPLMALAGWMIWXXEWZZTQKPHVEJDLMYUNNOPRRAMJVRLVCNRCRDVOTSQXHUQJZTQHLYBZVAJHUZNMEWTZYUWGMJIKCRQKIOKZOGBQSHRVEWSWFLUIBYTSDESSODHONPOBBKNMWXZGIGVSKYHDGFKPDTLNVMMEZFCCWFDQVACUJTUYCTKSMGSIEZI");
    const char tmp_msg_0[] = {-79, -50, 126, -94, 2, 75, -95, 41, 94, 23, 79, 86, 105, -1, 24, -3, 96, -77, 62, -96, 33, 83, 0, -103, -47, 57, -15, 61, -97, -57, 61, -7, -128, 25, -85, 39, -28, 32, -31, 67, 0, -116, -114, -98, -96, -49, 53, -11, -101, -104, -102, 5, -116, -37, 53, -30, -75, 121, -48, -122, 0, 70, 73, 25, 57, -56, 52, -114, 124, 125, -106, 23, 92, -8, -90, 100, 0, 126, -114, 86, -86, -23, -61, 19, -69, -21, -85, -117, -2, 23, -89, -45, -123, -80, -86, 125, 20, 11, 65, -4, 63, 114, -17, -55, 72, -53, 111, 97, 31, 67, -45, -31, 10, 117, -111, -50, 56, 109, 106, -75, 74, 40, 84, -19, 82, -57, -85, -126, -16, 73, -82, -36, -20, 54, -84, 87, -9, 17, -71, -123, -4, -104, 42, 0, 14, 97, 23, 98, 30, -105, 59, -91, -9, 33, 13, 68, -82, 113, -95, -110, -50, 59, 29, 18, -110, -48, -65, -79, 29, -78, -92, 45, 120, 35, 18, 100, -111, 41, 27, 110, 55, -6, -59, 112, 115, 80, 29, -44, -58, -123, 112, -128, 63, 78, 65, 81, 15, -19, -97, 65, 13, 62, 99, -122, 88, -73, 76, -62, 79, -104, 45, -93, 12, -29, -47, -91, 53, 110, 107, -1, 40, -82, -121, -11, -52, 70, -113};
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
    msg.setTimeStamp(0.370686124662);
    msg.setSource(32390U);
    msg.setSourceEntity(59U);
    msg.setDestination(17610U);
    msg.setDestinationEntity(178U);
    msg.source.assign("DJFBWIUGFOATIYGFQORWMYKANVBXVLIYNAPJLHMAZHSZSZRKBPCOLWGJWTCVQC");
    const char tmp_msg_0[] = {54, 27, -107, -80, -33, -20, 66, 94, 32, 43, -106, 90, 40, -66, -39, 4, -62, -99, 36, 107, -8, -43, -77, 97, -6, -104, -118, -113, 51, -82, -28, -34, 75, -13, -110, 86, 97, 112, -6, 11, 70, -65, -109, 100, 107, 59, 26, -96, 126, -89, 121, -2, 53, 82, 36, 71, 71, 125, -66, -33, -18, -22, 82, -78, 115, 68, 14, -54, 10, -16, 3, 83, 120, 72, 74, 96, 53, -80, 82, 98, -79, 16, -112, 89, -69, 41, -2, 54, -118, -123, 21, -95, -111, -120, -97, -51, -32, 73, 68, -3};
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
    msg.setTimeStamp(0.137495416809);
    msg.setSource(300U);
    msg.setSourceEntity(212U);
    msg.setDestination(52192U);
    msg.setDestinationEntity(127U);
    msg.source.assign("UJZCQYBGZDVEULRBPHNU");
    const char tmp_msg_0[] = {20, -109, -61, -125, -92, 54, 15, 26, -95, -16, -104, -80, 75, -48, 107, 105, -124, 63, -54};
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
    msg.setTimeStamp(0.111443299144);
    msg.setSource(50316U);
    msg.setSourceEntity(38U);
    msg.setDestination(37203U);
    msg.setDestinationEntity(239U);
    msg.seq = 2682965159U;
    msg.state = 189U;
    msg.error.assign("QFTUGJRBDHGNWIPIVDXKEMZZVQVPORJPUFYSLRSILGKHDTYKFCGFWYYCKFUZULTVHMUWHKIQNAASHOIQXBUDXTUYOBJXHIQCGADYNFDEXECMBQNZRUJSWDOMNJGCXZFNVYKVQBWXMVRWHMEMTXZGKLYBHNOACIJMJBWOTSSSHOPSJFOHCPWBATKLELRPZENRLXOJPYEAMUGVJNMWTDBXVQSK");

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
    msg.setTimeStamp(0.437681882944);
    msg.setSource(34695U);
    msg.setSourceEntity(85U);
    msg.setDestination(14063U);
    msg.setDestinationEntity(127U);
    msg.seq = 1049406652U;
    msg.state = 40U;
    msg.error.assign("IRQTUPJPIEWBOLXGEORASAOEDITHUGALYHUQIGLKSRXGFHIWXUIPEBDVZMKOULHRVTVYTNHJNZEQNCLPZUUNZAEYPFFIMRAOWXKYCPVVKKFRNDNVQVFPOHBSX");

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
    msg.setTimeStamp(0.539146901212);
    msg.setSource(32043U);
    msg.setSourceEntity(4U);
    msg.setDestination(37284U);
    msg.setDestinationEntity(175U);
    msg.seq = 1008946281U;
    msg.state = 242U;
    msg.error.assign("CQTHCKWVFRYFZBXFFDTLKBUDQSJLHLSOOBGKGDNLIKANMXLWJZSSKDMFXUDXRVAYQPJQJQPRZZHBOFXMEUMKWSEDMZAWIQIBAVVWYVYENGOZPJ");

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
    msg.setTimeStamp(0.268570395377);
    msg.setSource(37599U);
    msg.setSourceEntity(243U);
    msg.setDestination(43804U);
    msg.setDestinationEntity(79U);
    msg.origin.assign("ITKTYJDGGFAXIJYMMEEPPLEDCHPMWCBEDQOUGOIKHOIJXVJBAEUSWXIQCTEJKEUFHAQZXZPJETCRLTLMTRFFDUFRJUZSFMPNRANASNSNOPKVCJAHNELVONSFR");
    msg.text.assign("YDTLPYWUVOKDKBKASQSLFYEGGKTCYKHEFFERTNYNMPHCNZZJIOWTVNSNGGJTJDIIQUDLVCDXCDHOQWBDPQWWLIZFTPZNHBJOSJEZQUZASIQPVFQOPIBATONGXSAMXPMZULMYYELJUYAHZAHTWKCOLLJGUVB");

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
    msg.setTimeStamp(0.709086671996);
    msg.setSource(49201U);
    msg.setSourceEntity(59U);
    msg.setDestination(6853U);
    msg.setDestinationEntity(19U);
    msg.origin.assign("OJGZSNVGCOEQEEALZLOXXBVXQUHOEZWWLGUHVISIAJFBYFELKDRYKGHMNHMLZRIAVJRXJCSGWQXXAMNZFOPKDDWUNSPHVCKTWYEAUZPMMBURBSVIUMJATIFBTZWNTBBIPRFKGOUWOVWQPCYALAQYKOFRVDGJSFJVRDWKTQDZNSNCTOEVHTFCGY");
    msg.text.assign("EMIJEFLIODTROTOADZGEMBXJFOWBJMYDDSLIKQNLUBLKNVAJLPUMEZQNERRINJSZRISFBWVUMPTOZNQVAURTDFYIPWSDNW");

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
    msg.setTimeStamp(0.311768029621);
    msg.setSource(24171U);
    msg.setSourceEntity(65U);
    msg.setDestination(10344U);
    msg.setDestinationEntity(13U);
    msg.origin.assign("AUDACIFULHSPQOKTFOJKTREIADVJNQEKJNSDAOYSQXZMLPYZKUQBYBNRCXBFBWCYDYUNTANWAKXDDSWPBEYSSUTDRXGHBVZLGQPZMIUQTJJFZKLGDCRDNIPT");
    msg.text.assign("XFXAAEPNMFONFA");

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
    msg.setTimeStamp(0.12787750204);
    msg.setSource(38048U);
    msg.setSourceEntity(139U);
    msg.setDestination(34387U);
    msg.setDestinationEntity(151U);
    msg.origin.assign("DXLKNWITPGUGZDYIWMMFHAECXQOFCRAZVBTAELSRFIRJYEGJFVZRUPVPNMGJFASYJYIPHRHOOYKLFGAOZUZDBEXQNKPZNCRIKZOWUNSTNGOTTTHYFXDKXJMZKKXDRJTJEHLQDDZFSFJCEVCGUCQSQCCBLVXZUIOCDSNPQVGYCQMBLRVSAMKMBEBAH");
    msg.htime = 0.277341032042;
    msg.lat = 0.915724722101;
    msg.lon = 0.960744714333;
    const char tmp_msg_0[] = {-72, 7, 115, 81, -79, 76, -23, 52, 81, 78, -82, 70, 27, -80, -63, 7, 93, 88, -16, 24, -76, 68, 3, 40, -110, -58, -72, -70, -113, 20, -74, 112, -99, -127, 113, 47, -110, 74, 8, 87, 82, 24, -92, -66, 94, -29, -119, 120, 94, -93, 78, 53, -90, -100, 93, -90, -96, 48, -46, 1, 55, -116, 86, 45, 108, 38, -61, -61, 0, -57, -22, -28, -42, -95, -111, -91, -87, 40, 114, -81, -92, 61, -102, 86, -33, 85, -76, -71, -7};
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
    msg.setTimeStamp(0.825288483695);
    msg.setSource(6681U);
    msg.setSourceEntity(204U);
    msg.setDestination(38315U);
    msg.setDestinationEntity(237U);
    msg.origin.assign("DWEPXKLKVSSTGJWUTJLKBJNSHLOSHDHXTTDLDIXQNMROIOPCMMRMJFOZUZQNVZWIPACUINSBZZDFHIPFKQGUCVAHKVGQPFSCBCTXSXJJLHGQTEDVICEFXTBYAFYIIGVRTNMKRPUHNPPGORENMJQCUILOJWUOBZNLWESAFRHOFMKZQ");
    msg.htime = 0.417838550063;
    msg.lat = 0.983640349602;
    msg.lon = 0.961629135309;
    const char tmp_msg_0[] = {120, 16, -77, -8, 21, 116, 69, 74, 117, -91, 27, -45, -3, -15, 29, 112, 80, -113, -7, 46, 4, -101, 87, 94, -47, 31, -108, -75, -39, -20, -30, -2, 15, -66, -86, 38, 107, -105, -66, -89, 104, -43, 80, 123, 99, -4, -5, -28, -73, -2, 88, 99, -85, -16, 5, 43, 37, -32, -6, -64, -119, 43, -46, -116, 42, -15, 38, 14, -102, 72, -27, 8, -52, -83, -9, 39, 84, -32, 77, 90, 119, -65, -91, 27, 99, -61, 24, 85, -104, -74, 10, -32, -107, 25, -117, -55, 88, -57, -125, -123, 4, -96, -34, 14, -47, 2, 38, -29, 31, -104, -110, 97, 99, -49, -54, -2, 9, 103, -117, 112, -115, 40, -54, 113, 105, -83, -104, 70, -88, 85, -57, 29, 54, 122, 124, -41, -27, -17, 78, 88, -105, -75, -59, 44, -2, 113, 16, 103, 30, -28, 6, -32, 58, 89, 28, -103, 67, 71, -128};
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
    msg.setTimeStamp(0.923489005493);
    msg.setSource(4331U);
    msg.setSourceEntity(59U);
    msg.setDestination(23668U);
    msg.setDestinationEntity(10U);
    msg.origin.assign("HWLITQTIBRZMVZEAKHMGOPNSEJCBVOFCZXSLNPGOPYGNLUAWOJYIDUBSTRRSVWOJGJSGXJKBBYSLMPLAATUGWYHHCOUVTQGVMEIYOQHLDTXOBWT");
    msg.htime = 0.44696407166;
    msg.lat = 0.710880655335;
    msg.lon = 0.509325401893;
    const char tmp_msg_0[] = {104, -51, 11, -17, 122, 88, 101, -120, -97, -72, -16, -40, 110, -45, 59, 81, -61, 22, -66, -79, 121, 22, 13, -39, -46, 57, -51, 43, -51, 76, 123, -73, 106, 3, 57, 11, 73, -7, -113, -57, 7, 29, -58, 108, -75, 50, -61, 54, 93, -65, 18, -50, -17, -39, 28, 90, -128, -6, 27, -42, 81, -77, -109, 75, 120, 39, -75, -47, -84, 62, -5, -34, 9, 42, -51, -111, 80, -105, -4, -13, 118, -128, 91, -38, -33, -102, -50, -1, 43, 55, 50, 43, 93, 96, -51, -16, 82, -2, 92, 90, -16, -35, -28, 18, 45, 75, -27, -62, 113, -31, 11, 42, -69, -66, -117, 1, 63, -27, -90, -112, 97, -55, 87, 3, 70, 124, -77, 49, 53, 34, 47, -16, -53, -118, -115, 39, 73, 121, 92, -125, 23, -112, 77, -56, 71, 72, -88, 18, 81, -50, 125, 8, -103, -36, -18, -83, -84, 56, -1, 33, 75, 103, 16, 59, -80, 64, 113, -33, -120, -112, -32, -118, -86, 107, -120, -60, -50, 107, 33, -45, 88, -118, -103, 63, 112, -117, -82, 64, 72, -100, 14, 54, -94, -82, -84, 92, -15, 77, -106, 124, -54, 57, -23, 1, -25, -121, -122, -63, -68, -112, 92, 106, 35, -21, -30, -49, -65, 10, -112, 111, -37, -37, -37, 2, 63, 70, -57, -116, 8, -61, 105, 90, -2, 89, -12, 65, -21, 14, -5, 51, 2, -4, 36, -127, 68, 10, -127, 117, -85, 74, 8, 121, -12};
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
    msg.setTimeStamp(0.459378950276);
    msg.setSource(61130U);
    msg.setSourceEntity(203U);
    msg.setDestination(59747U);
    msg.setDestinationEntity(96U);
    msg.req_id = 34112U;
    msg.ttl = 21864U;
    msg.destination.assign("DWKHFNGVVDXXPIOAOQZRPTPFBTSLSCTOOIDTEOUDWKVCLMZJHUSLAMRWPIPIIFZFHIYZSQEHHOQDJQWGGCKAAUFRBGXMIKCGEEB");
    const char tmp_msg_0[] = {-113, -92, -46, 60, 109, 12, -74, 69, 62, -111, 55, 48, 41, 71, 34, -64, 120, -116, -69, 33, -105, 63, -89, -45, 110, -16, 61, -94, 53, 98, -67, -16, 98, -115, -31, -99, 17, -29, -3, -51, 74, 116, -26, -94, 20, 51, 35, 3, 36, -21, -72, -13, 119, -48, 121, -124, 124, 19, 48, 39, -120, -10, 28, -95, -83, 71, -103, 97, -31, -76, -32, -73, -99, -67, -87, -77, -97, -32, -37, -71, -50, 38, -41, 15, -28, -39, -84, -7, 12, -31, 21, -13, 23, 125, 61, 11, -104, -9, 90, 7, -95, -38, -115, 93, 32, 73, -61, -108, -10, 42, 39, 126, 1, 98, 57, 61, 75, -80, 124, 27, 111, 15, -3, 12, 23, 38, -67, -79, -50, -122, -84, -118, -93, -117, -107, 44, 9, 100, 7, 73, -70, 25, -103, 96, -122, -61, -29, -67, -90, 84, 54, 43, -17, 26, 0, 88, 89, 54, 33, -6, 106, -28, 79, -61, 56, 55, 28};
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
    msg.setTimeStamp(0.508774228578);
    msg.setSource(59509U);
    msg.setSourceEntity(63U);
    msg.setDestination(11448U);
    msg.setDestinationEntity(254U);
    msg.req_id = 49186U;
    msg.ttl = 51872U;
    msg.destination.assign("ADUZRGLLIINCAVSQPOCPNLBEJLGJKKHUTSOFQOYWNOJZYEZTJNKPPXUIMOESMVOQRINAXHT");
    const char tmp_msg_0[] = {-65, -84, 36, 86, -29, -46, 86, 38, 14, -122, -102, 93, -27, 40, 86, -105, 73, 96, -23, 119, -67, -17, 88, -117, -113, -117, 23, -108, -37, 94, -119, -44, -59, 103, -44, -70, -115, 52, -60, -24, -104, 110, 89, 65, -91, -114, 47, 107, 97, 106, -80, 16, 65, 56, -28, 7, 79, 95, 90, 84, 73, -54, 12, -93, 99, -89, 115, -61, -23, 14, -78, -72, -21, -4, 18, -18, 88, -56, -76, -53, 115, 66, -107, 24, 35, 109, -91, 22, 24, -24, 24, -33, 98, -52, -119, 39, -89, 109, -73, -102, -82, 52, 89, 3, 80, 41, -77, 120, 43, -104, -60, -63, 49, 25, 51, -2, 64, -74, 51, -82, 70, 107, -75, 67, 19, -103, 24, 31, -118, 126, -67, -9, 5, -101, 124, 93, -88, 11, 57, 105, -101, -13};
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
    msg.setTimeStamp(0.388537773452);
    msg.setSource(975U);
    msg.setSourceEntity(174U);
    msg.setDestination(22379U);
    msg.setDestinationEntity(155U);
    msg.req_id = 46704U;
    msg.ttl = 5899U;
    msg.destination.assign("ZMRWHPOTSFGRPPXKKUUTCIBCSTTDOYISARYUQSWUWVKERHVCKUOVAFKRFESZIXGGFOQCLIUVJLVOAIYHBYQBOVKEAEKQZXSNEYZMGNPLBJJMPVHQAYXYGJQNPUSESASXDKRDXNUOBGRZXTJLLFCKDIERWEMYBZCFAYBQHJGATXDYLFCZUXLHOHDMHZMPQQRJVMILFTM");
    const char tmp_msg_0[] = {-51, -79, -120, 91, 116, -75, 83, -42, -92, 23, -114, -120, -101, -33, -125, -20, 95, 110, -80, -17, -46, 78, -71, 105, -14, -48, -38, 67, 64, -116, 15, 122, -33, 120, -57, -43, -100, 89, 53, 81, -123, -112, 79, 46, 54, 13, -107, 35, 74, 123, 42, 100, 60, 29, 8, -110, 111, 26, -121, -51, 120, -85, -127, 81, 114, -103, 28, -103, 30, 67, -23, 53, -105, -107, -10, 7, -119, 35, 34, 50, -52, 10, -67, -61, -23, 6, -27, 103, 123, -71, 7, -38, -90, 27, -89, 22, 26, -76, 23, -51, 71, 48, 105, 97, 56, -79, -8, 70, 74, 72, -42, 61, -34, -124, 96, -110, 23, -68, 7, 52, 5, -107, -47, -48, -24, -33, 52, 112, -120, 88, -88, 109, 30, 122, -110, 6, -90, -50, 74, 74, -84, 66, 71, -105, -16, 93, -41, -65, -55, -1, 126, 109, -52, 91, -4, -92, -92, -62, 50, 103, 87, -2, -123, -123, 8, -116, -82, 30, -102, 104, 17, 8, -30, -27, 123, 61, 86, -36, -40, 27, -123, 113, -123, -14, -54, 62, 122, 26, -2, 6, 28, -122, -121, -80, 3, 72};
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
    msg.setTimeStamp(0.248031785176);
    msg.setSource(38437U);
    msg.setSourceEntity(91U);
    msg.setDestination(40119U);
    msg.setDestinationEntity(236U);
    msg.req_id = 9821U;
    msg.status = 128U;
    msg.text.assign("PJEBTOZBVLFGGASXTYKTQMUTIVQDZSDOJYGPYRYAULTXFNPEKYVDEJGYBCSAFTDCQLYNIKIERPJCYNRFHMFIPQBKXRDCERIXDVAQPWLDZKXUJOSGTGNWVCVBZPHQVMNXEFMVWUERBDSZFWSTSJNBDWWAXFRDGOMLLWSJPOGLBNXQEMHKPMQZKBRZGSCUGAHMQKHRXTIIYUOONIJXMWFLAHEILQNRJHVCJWUTAUIHOLEH");

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
    msg.setTimeStamp(0.682968733457);
    msg.setSource(48064U);
    msg.setSourceEntity(27U);
    msg.setDestination(12067U);
    msg.setDestinationEntity(23U);
    msg.req_id = 51073U;
    msg.status = 152U;
    msg.text.assign("BNODYHKSHLCJZPTCIFPIINGJBZXDAMGQSDUAPNQKRRMCYUWGGYXXXQMCLLEYJRUPGMKKPEJJQTUMGHVTQCJBKLNVTYTVKAUEIZAQDRHXWWDYNKDLNQTAZDEHSFNMLNBCNLSXSWRWQOFC");

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
    msg.setTimeStamp(0.180832136439);
    msg.setSource(58191U);
    msg.setSourceEntity(139U);
    msg.setDestination(39465U);
    msg.setDestinationEntity(102U);
    msg.req_id = 58447U;
    msg.status = 110U;
    msg.text.assign("ILCQTEUCYELKKPVZNTRQXBZAGGGUBSUGOQYDKIULCZTDUOSHXHSBYBMEFGHJZKXSHYDBVHAMZIRCHMQENPXYCVWXLQDKFCJXOBRTNQEJYCEJXFWLRGGBAOZVUJDWNCZTNVGJISTHLFGZVDPSFFWAOOIDMTYLCSAGAHUXESHZNYILWQONTPKPA");

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
    msg.setTimeStamp(0.363163305602);
    msg.setSource(31244U);
    msg.setSourceEntity(115U);
    msg.setDestination(15071U);
    msg.setDestinationEntity(67U);
    msg.group_name.assign("EYUUYRIPALRKPDYITIVBOKKKWQODHGTQAQUMYCLCLKHCXFSZFPYFJPQTFGMAGMIYIRATXRHSCJEOJQUWUCBVWUVEUYCHAMJQVEKXKTIXOWONKPXVECJABWFISGRKRHXGZNBEOROFDCNPXPHGHADNQRJZMQWCSNZZLNLVSBZVSFWUMNEUGJCOQTSHLGYHBMPXAB");
    msg.links = 2260564877U;

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
    msg.setTimeStamp(0.972672887126);
    msg.setSource(31018U);
    msg.setSourceEntity(247U);
    msg.setDestination(1858U);
    msg.setDestinationEntity(127U);
    msg.group_name.assign("PFQLQVAWVPDLZAWUUZJDPKZSUMVXTXQKYIGKIHBLASAACKCNGYNZMPLEFLMPWLRSKFJHUXQWAMEYXJONWUNTGEWYXZEXIYOXBVVNJILJBQSWMFEDUFTFILCBKQDIKGBBSIBPREPHHCTQROJWCOKCQKVNRTWHTI");
    msg.links = 1119466332U;

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
    msg.setTimeStamp(0.491213244501);
    msg.setSource(14594U);
    msg.setSourceEntity(87U);
    msg.setDestination(47781U);
    msg.setDestinationEntity(122U);
    msg.group_name.assign("DQYTWIIBXVERDWALCTFAJMIKJYMSNGHUVOINIHJJRVLEAQFNGAGHC");
    msg.links = 339696977U;

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
    msg.setTimeStamp(0.0902269058527);
    msg.setSource(412U);
    msg.setSourceEntity(35U);
    msg.setDestination(24319U);
    msg.setDestinationEntity(56U);
    msg.groupname.assign("RCXYDYYKXMAVEAGQOHOCARQDOTTCGZBIXHTFYZNZAARUHUHXTSIJIBWQMPNRHLXOZWOXNUKKIJCCPZNWGOFUVZEZMNFZWLQTJPGSLFXPRRYIYSENJKCQPDSFTCLDCFPCHFJRNEDCRTGBYPHMZSFMOPYXAUAEMHKJGMTOWEMSBREIUMSBGGVLWKTGBFBAWNJJULXLKIOHVISVLXKPUITVJWPBDKADQIEEQKGDZLYNRL");
    msg.action = 251U;
    msg.grouplist.assign("JIXQWCXWPEYYBNUCDGVYTAZTEQGHDHDHHCHKVZOFUWXOM");

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
    msg.setTimeStamp(0.455530809112);
    msg.setSource(22241U);
    msg.setSourceEntity(109U);
    msg.setDestination(59176U);
    msg.setDestinationEntity(28U);
    msg.groupname.assign("CQEAGLXWJZYDKXBSHWYZLH");
    msg.action = 13U;
    msg.grouplist.assign("MBUMIYMWTFWUPOADTBDFLSNJSNNKNNXRYJIXUUKZCPPZKHSOAZDHMMVWKIKQTBGGLEDE");

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
    msg.setTimeStamp(0.513179489605);
    msg.setSource(39305U);
    msg.setSourceEntity(15U);
    msg.setDestination(49568U);
    msg.setDestinationEntity(250U);
    msg.groupname.assign("YHSBFUMIRTUYMTEHUDJESWYKGNVUAHGMBFDLPACQZXAVQYLRCYOWYNJEGQDOAAQUSDWQDSELDZKNJJNHYDETPWFXGFNWT");
    msg.action = 137U;
    msg.grouplist.assign("OTOOJCIBUAMCSPXVQEVPGMARVDQACFLXEKYUADJRCQROWRCFZAV");

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
    msg.setTimeStamp(0.410675070366);
    msg.setSource(23599U);
    msg.setSourceEntity(40U);
    msg.setDestination(12755U);
    msg.setDestinationEntity(114U);
    msg.value = 0.449118557918;
    msg.sys_src = 15356U;

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
    msg.setTimeStamp(0.282279943305);
    msg.setSource(16058U);
    msg.setSourceEntity(154U);
    msg.setDestination(48739U);
    msg.setDestinationEntity(185U);
    msg.value = 0.694259137309;
    msg.sys_src = 31922U;

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
    msg.setTimeStamp(0.209465417335);
    msg.setSource(8128U);
    msg.setSourceEntity(137U);
    msg.setDestination(53899U);
    msg.setDestinationEntity(194U);
    msg.value = 0.949226113849;
    msg.sys_src = 24198U;

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
    msg.setTimeStamp(0.970505067774);
    msg.setSource(59637U);
    msg.setSourceEntity(133U);
    msg.setDestination(15944U);
    msg.setDestinationEntity(94U);
    msg.value = 0.602485725651;
    msg.units = 61U;

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
    msg.setTimeStamp(0.431565926998);
    msg.setSource(29949U);
    msg.setSourceEntity(117U);
    msg.setDestination(64279U);
    msg.setDestinationEntity(198U);
    msg.value = 0.513016595249;
    msg.units = 238U;

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
    msg.setTimeStamp(0.223658970169);
    msg.setSource(20524U);
    msg.setSourceEntity(191U);
    msg.setDestination(34163U);
    msg.setDestinationEntity(101U);
    msg.value = 0.29055994166;
    msg.units = 58U;

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
    msg.setTimeStamp(0.13685298126);
    msg.setSource(9119U);
    msg.setSourceEntity(128U);
    msg.setDestination(29311U);
    msg.setDestinationEntity(73U);
    msg.base_lat = 0.0955004806379;
    msg.base_lon = 0.603113599851;
    msg.base_time = 0.00386454595202;

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
    msg.setTimeStamp(0.181030432122);
    msg.setSource(30943U);
    msg.setSourceEntity(101U);
    msg.setDestination(35921U);
    msg.setDestinationEntity(15U);
    msg.base_lat = 0.225606903748;
    msg.base_lon = 0.263032704381;
    msg.base_time = 0.882212141435;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 26941U;
    tmp_msg_0.priority = -48;
    tmp_msg_0.x = -10066;
    tmp_msg_0.y = -29755;
    tmp_msg_0.z = 12838;
    tmp_msg_0.t = 16043;
    IMC::CameraZoom tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 157U;
    tmp_tmp_msg_0_0.zoom = 150U;
    tmp_tmp_msg_0_0.action = 82U;
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
    msg.setTimeStamp(0.0718028387428);
    msg.setSource(3029U);
    msg.setSourceEntity(207U);
    msg.setDestination(54575U);
    msg.setDestinationEntity(230U);
    msg.base_lat = 0.752354767612;
    msg.base_lon = 0.651809197787;
    msg.base_time = 0.489819286692;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 10052U;
    tmp_msg_0.priority = -70;
    tmp_msg_0.x = -7794;
    tmp_msg_0.y = 3375;
    tmp_msg_0.z = 14522;
    tmp_msg_0.t = 29065;
    IMC::FineOil tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.447779966884;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.741532771276);
    msg.setSource(55873U);
    msg.setSourceEntity(151U);
    msg.setDestination(32037U);
    msg.setDestinationEntity(124U);
    msg.base_lat = 0.667046429477;
    msg.base_lon = 0.204027133338;
    msg.base_time = 0.135538054435;
    const char tmp_msg_0[] = {34, -93, 123, 51, 98, 44, 46, 16, -124, 82, -76, -18, -40, 53, -64, 47, -5, 76, 91, 62, 74, 93, -79, -112, 92, 42, 121, -5, -127, -74, -40, 93, 44, 48, 0, 13, -119, -26, -22, -75, 74, -11, -105, -104, 46, 7, 63, 98, -98, 46, 32, 7, -51, -41, -104, -113, 115, -13, -59, 5, 124, -70, 80, 10, -110, -30, -3, 92, 55, -101, 6, 113, -75, -125, 11, 91, 103, 61, -11, 28, 45, 59, -34, -2, 6, -11, 79, 49, 75, 110, 120, 39, 59, 89, -106, -80, 76, -84, 32, 42, 84, 1, -79, 8, -62};
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
    msg.setTimeStamp(0.283824746826);
    msg.setSource(33768U);
    msg.setSourceEntity(104U);
    msg.setDestination(47603U);
    msg.setDestinationEntity(117U);
    msg.base_lat = 0.939184911099;
    msg.base_lon = 0.0978950135722;
    msg.base_time = 0.193641517814;
    const char tmp_msg_0[] = {-5, 80, -26, -10, -74, -69, -22, 72, -97, -121, -24, -6, -58, 99, -61, -92, -66, 113, 48, -28, -28, 109, 118, 24, -119, 77, -9, -121, -18, -37, 50, 60, -11, 28, 54, 34, -81, 74, -10, -73, -35, -110, -78, -62, -79, 98, 118, 79, 19, -83, -27, 90, 68, -109, 23, -31, 61, -70, 101, 14, -34, -103, 92, -4, -30, -12, -53, 93, -98, 117, -54, 38, 31, -50, 70, -13, -127, 111, -27, -94, -48, -96, 98, 95, 96, 86, -98, 17, 96, 45, -84, -39, 75, 10, 9, -65, 3, 1, 65, -36, -34, 97, -26, -8, 38, 9, 93, 7, 89, -53, 38, -101, -13, -103, 47, 42, -43, 34, 0, -18, 31, -23, 9, 95, 24, -62, -44, -49, 24, 117, -37, -42, 31, -115, -126, 51, -107, -21, 79, -50, 100, -2, -28, 51, 17, -48, -53, 0, -102, 48, -17, -31, -32, -29, 36, 93, 70, 32, -9, 41, -127, 124, 47, 48, 31, -84, 13, -118, 48, 126, 54, 124, -96, -128, -11, 103, 112, -66, 17, -2, -108, -56, -124, 65, 15, 38, -120, 51, 64, -87, -70, -21, 126, -54, 101, -17, -19, 91, 11, 84, -127, -18, 16, -88, -41, -68};
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
    msg.setTimeStamp(0.716133295414);
    msg.setSource(47123U);
    msg.setSourceEntity(214U);
    msg.setDestination(33271U);
    msg.setDestinationEntity(92U);
    msg.base_lat = 0.451433032777;
    msg.base_lon = 0.155724282234;
    msg.base_time = 0.72875249932;
    const char tmp_msg_0[] = {29, -10, -114, 93, -6, -110, 27, 116, 84, 119, 67, -95};
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
    msg.setTimeStamp(0.285694528346);
    msg.setSource(23474U);
    msg.setSourceEntity(136U);
    msg.setDestination(4795U);
    msg.setDestinationEntity(147U);
    msg.sys_id = 36778U;
    msg.priority = 42;
    msg.x = 20070;
    msg.y = 8615;
    msg.z = -24774;
    msg.t = -31487;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 501U;
    tmp_msg_0.lat = 0.94455451892;
    tmp_msg_0.lon = 0.0511389670135;
    tmp_msg_0.z = 0.683545745005;
    tmp_msg_0.z_units = 231U;
    tmp_msg_0.amplitude = 0.982597574062;
    tmp_msg_0.pitch = 0.0338445790421;
    tmp_msg_0.speed = 0.199420584465;
    tmp_msg_0.speed_units = 200U;
    tmp_msg_0.custom.assign("GJVSMKBLVMMQEKYVKXYANHKEJSSHCCBHPBUTGXKXEBNTILTFRWJHPOQCSRLXBOEGONYZIDNTMWUWENBHQWLMPVVWQLYMDUQYEQUEKSJKNMTFTACHISRQFHAZGZJAVFADUYISOMBDDFZVKZOYWSDCEPIRZZAIGFAHBHGAQJYVRCCJIDTRPEEGCAADJXXRRDWYXNFBUXGLOOOVIKTBLPZMXRPLWUVSGCOGZZQUNLPPIJJD");
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
    msg.setTimeStamp(0.622936959873);
    msg.setSource(46569U);
    msg.setSourceEntity(10U);
    msg.setDestination(59287U);
    msg.setDestinationEntity(122U);
    msg.sys_id = 33815U;
    msg.priority = -87;
    msg.x = 3843;
    msg.y = -12260;
    msg.z = 26228;
    msg.t = -30275;
    IMC::QueryPowerChannelState tmp_msg_0;
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
    msg.setTimeStamp(0.127373282391);
    msg.setSource(19315U);
    msg.setSourceEntity(164U);
    msg.setDestination(53240U);
    msg.setDestinationEntity(115U);
    msg.sys_id = 57298U;
    msg.priority = -32;
    msg.x = 15108;
    msg.y = -8368;
    msg.z = -29416;
    msg.t = 19713;
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.912098792514;
    tmp_msg_0.time_next_service = 0.785717958488;
    tmp_msg_0.time_motor_next_service = 0.971046527929;
    tmp_msg_0.time_idle_ground = 0.866869837954;
    tmp_msg_0.time_idle_air = 0.751672551366;
    tmp_msg_0.time_idle_water = 0.577994682155;
    tmp_msg_0.time_idle_underwater = 0.335208036411;
    tmp_msg_0.time_idle_unknown = 0.489924936584;
    tmp_msg_0.time_motor_ground = 0.839110584475;
    tmp_msg_0.time_motor_air = 0.376667207314;
    tmp_msg_0.time_motor_water = 0.734706175238;
    tmp_msg_0.time_motor_underwater = 0.487869554856;
    tmp_msg_0.time_motor_unknown = 0.482919405779;
    tmp_msg_0.rpm_min = -7443;
    tmp_msg_0.rpm_max = -1857;
    tmp_msg_0.depth_max = 0.895402428418;
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
    msg.setTimeStamp(0.876088721841);
    msg.setSource(53419U);
    msg.setSourceEntity(122U);
    msg.setDestination(57176U);
    msg.setDestinationEntity(35U);
    msg.req_id = 7907U;
    msg.type = 60U;
    msg.max_size = 48477U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.644534288137;
    tmp_msg_0.base_lon = 0.679373350775;
    tmp_msg_0.base_time = 0.770799134512;
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
    msg.setTimeStamp(0.191333673758);
    msg.setSource(47541U);
    msg.setSourceEntity(184U);
    msg.setDestination(18227U);
    msg.setDestinationEntity(18U);
    msg.req_id = 455U;
    msg.type = 21U;
    msg.max_size = 17948U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.508914988049;
    tmp_msg_0.base_lon = 0.436790648313;
    tmp_msg_0.base_time = 0.094295232276;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 38751U;
    tmp_tmp_msg_0_0.destination = 52173U;
    tmp_tmp_msg_0_0.timeout = 0.597814851856;
    IMC::PlanStatistics tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.plan_id.assign("AIVPQOIEFGQPOHXXJWTTGYRSILOTFPZHRPXUUJVYHJVFFOBASSLZSPDIFMXVAMEFGEMAKUDOANYQTUZBYCX");
    tmp_tmp_tmp_msg_0_0_0.type = 125U;
    tmp_tmp_tmp_msg_0_0_0.properties = 47U;
    tmp_tmp_tmp_msg_0_0_0.durations.assign("UMZPOGOARZFELVMSGKDYNQHJHOIHBYBVHUFMEBKSUIHLFHEGVYQKMBVTDANBUWIRLTONLDWCQXYTZBZSVTFYYEDXJXMJWRCLJTJRFCCVYXASIRNYGFPCYTLODBJZHKXFQKDTPMGBDVIKVNACLXWQNGWIRZIIUUEXFZRRCPLCVTOJKLQRSTGEGYKVQLCUZMMWTAJWFMGOHSNUWCJOAN");
    tmp_tmp_tmp_msg_0_0_0.distances.assign("ELGZGCZBRAMEUOFOUIJUDJKPSCERKJJFEVUFYBTOXPI");
    tmp_tmp_tmp_msg_0_0_0.actions.assign("DIWQKYWNPCXDESQTGNDFOJAIGSBRTUQTORXNZZNYVYPLCEJKISHSWBSRKTULVJNXXCLOQJMUNVZIMMQIRGAFRITWYUBCDAVEPFTTALZYSXFCLFENQGZJM");
    tmp_tmp_tmp_msg_0_0_0.fuel.assign("GNHPUCFCMSMXTOCDTYQGCICNLCMWRSBIPMOZKQHWDZTDJQPTWXKZSAHIYNYXNJRKFEHPMRHSCAPXCYGZAFKOTTRHIDEIVLBQLVGMFYJOFFVKQSOWUKYBAPXAZJANMXRIFZOGDUYIKNZMUSCVWABMJDUVJLHNEHQWLVXAOTIDXBOKTJEWTQKWFIZJQUFNEOY");
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
    msg.setTimeStamp(0.428231060752);
    msg.setSource(61496U);
    msg.setSourceEntity(175U);
    msg.setDestination(41440U);
    msg.setDestinationEntity(133U);
    msg.req_id = 62518U;
    msg.type = 187U;
    msg.max_size = 27534U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0231285283596;
    tmp_msg_0.base_lon = 0.769803401;
    tmp_msg_0.base_time = 0.914722833682;
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
    msg.setTimeStamp(0.781621813464);
    msg.setSource(43822U);
    msg.setSourceEntity(33U);
    msg.setDestination(22032U);
    msg.setDestinationEntity(142U);
    msg.original_source = 46476U;
    msg.destination = 28417U;
    msg.timeout = 0.447215765535;
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 14450U;
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
    msg.setTimeStamp(0.00808810266082);
    msg.setSource(21111U);
    msg.setSourceEntity(96U);
    msg.setDestination(39789U);
    msg.setDestinationEntity(165U);
    msg.original_source = 36797U;
    msg.destination = 38239U;
    msg.timeout = 0.642053569178;
    IMC::PulseDetectionControl tmp_msg_0;
    tmp_msg_0.op = 251U;
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
    msg.setTimeStamp(0.418357611227);
    msg.setSource(14543U);
    msg.setSourceEntity(204U);
    msg.setDestination(33311U);
    msg.setDestinationEntity(150U);
    msg.original_source = 44585U;
    msg.destination = 37247U;
    msg.timeout = 0.819633641051;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 49104U;
    tmp_msg_0.lat = 0.282594409472;
    tmp_msg_0.lon = 0.93420164656;
    tmp_msg_0.z = 0.243101781017;
    tmp_msg_0.z_units = 66U;
    tmp_msg_0.speed = 0.95586806136;
    tmp_msg_0.speed_units = 228U;
    tmp_msg_0.syringe0 = 95U;
    tmp_msg_0.syringe1 = 250U;
    tmp_msg_0.syringe2 = 226U;
    tmp_msg_0.custom.assign("OGSPOKOYSGPSJAZXZKNEKZAFNQXMMGIWYWIFSNDDXKCNHYPMXWXBHLJULFXVTGPFOQNUUVZGRHHCVONLZVVLKDTFZGRZJTEVHTVZKJDXJAQBEQPBFCUUMOKBNDURJNXIAGYMTOSWSFASNQYITQEUTHTJHLEEAQICIOWJVTBLDCGRCHZPFYEAEIIFYACJGMKRWOQLYSQRSZVTYBEWRCBDUECHMGUIXPQMSRPLRPLKIDKJCBUMBBRW");
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
    msg.setTimeStamp(0.556479746585);
    msg.setSource(45280U);
    msg.setSourceEntity(131U);
    msg.setDestination(48957U);
    msg.setDestinationEntity(222U);
    msg.type = 238U;
    msg.comm_interface = 45291U;
    msg.model = 40492U;
    msg.list.assign("EPKWGZQOAOBJLMLZGNUGRQKVJTVXXJZFWVAZXHAXKSCO");

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
    msg.setTimeStamp(0.236177384669);
    msg.setSource(23233U);
    msg.setSourceEntity(27U);
    msg.setDestination(32063U);
    msg.setDestinationEntity(146U);
    msg.type = 166U;
    msg.comm_interface = 4264U;
    msg.model = 62180U;
    msg.list.assign("MOHQYPHWWJSCPCJP");

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
    msg.setTimeStamp(0.443900153566);
    msg.setSource(37448U);
    msg.setSourceEntity(4U);
    msg.setDestination(47951U);
    msg.setDestinationEntity(248U);
    msg.type = 106U;
    msg.comm_interface = 6335U;
    msg.model = 40938U;
    msg.list.assign("NZFPDFQIUIMDXDAXLXKJYAHNOQMOHWOHEUZFABKZMXBCCJEPRIPYVAJYFDXKMCRPTGSLSLYWHCKZSFYVULHMQJTNKCQBROOBRWHDSICQAROGCDENNHWNJCEGSUGVEWOSIOIALIUOZTZETPQLXYS");

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
    msg.setTimeStamp(0.919850256128);
    msg.setSource(9563U);
    msg.setSourceEntity(147U);
    msg.setDestination(60872U);
    msg.setDestinationEntity(108U);
    msg.type = 105U;
    msg.req_id = 2011604194U;
    msg.ttl = 18535U;
    msg.code = 153U;
    msg.destination.assign("KPWYCCWZPFEOJOWXNZFQICLBCPIPHFTGEHXHDDBJJZUDSXZSUGJBAUWHYFUGZNSTNRBNRPRNQLRAOMOEGXIWEDZLAEWSPXETPHVCGYSXHIXGQDKIVRWKWCUDWZHYTFJJKTZUTBBFMSGVYPJBRPZAOSYFGEJVQNAABCFAQHEFYDKIUMNQDLOZYVJVIAKVLEKHMXUVCQNUVPGFCNLYMLWQVMOHKBOKRLSQNUTIDEIQCXA");
    msg.source.assign("IIFFZHJNETFXQRDASDVFYHMHTWQGLSSCEEXHSUEAUDEAJFOZKJLDQQJSITXOOLCIACNDZKPWTVMP");
    msg.acknowledge = 33U;
    msg.status = 180U;
    const char tmp_msg_0[] = {-40, -30, -58, -10, -31, 60, -58, -83, 9, -54, -109, -60, 53, -61, 95, 53, -25, 0, 17, -91, -71, -98, -34, 106, -61, -52, 105, 81, -80, 34, 8, -68, -115, -50, -31, 29, 65, 40, 4, 119, 83, 15, -1, -86, -56, 49, -30, 90, 9, 65, -55, -35, -100, 85, 12, 91, -53, 27, 96, -27, -72, -10, 82, -101, 33, -7, -75, 49, -63, 106, 58, 122, 120, -8, 97, 88, 123, 107, 85, -11, -20, -7, 118, -126, 84, 64, -12, -88, 76, -83, 7, 32, 41, 116, 55, -110, 105, -125, -5, -36, 20, 80, -75, -68, 33, -13, -72, 44, -126, 124, -19, 83, -39, -105, 95, 28, 87, -104, -63, 23, -53, -40, -93, 41, 61, -105, -79, -49, 11, -76, 65, -105, 68, -93, -51, 83, 81, 79, 123, 60, -94, -28, 9, 103, 10, 8, 88, -99, -120, 76, -76, -29, -70, 71, 104, -96, -114, -78, 26, 68, -2, -117, 88, -79, 69, 122, 40, -119, 110, -104, 24, -125, -53, -49, 113, 96, 75, 73, -21, 9, -61, 3, 3, 68, -114, 10, 0, -15, 121, -111, 33, 45, 46, 15, -110, 10, 96, 4, 89, -72, 67, 22, 27, 72, -78, -105, 107, 87, -110, -92, 49, 8, -54, -113, 89, -103, 62, -55, 114, -13, 40, 76, -28, -27, -45, -81, -97, -101, 91};
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
    msg.setTimeStamp(0.51873610622);
    msg.setSource(60078U);
    msg.setSourceEntity(241U);
    msg.setDestination(8563U);
    msg.setDestinationEntity(93U);
    msg.type = 63U;
    msg.req_id = 2840596160U;
    msg.ttl = 39631U;
    msg.code = 85U;
    msg.destination.assign("JKADHWIOTMZCQAXDYCHFZJXOKVVYDDVOMBSUWZOKZTRGOQLKRQBLAYIYNATWPXEAQGPXPZEEICOAVMASLXTIOQOITCELAZWRFHVTDSFEHZGNUENX");
    msg.source.assign("SYKJIPNDACNKFIWVQSLXZQSWBSIUFEOPZQVRIZECEOFBXGZETNYMTDDPKNRCYELWCLIRJSCAJZACKKGWOKVUTERDLWNUHNUHOFSFOBGHGUMAYGDCHZMBPABTUBTXDEEJQVQMDKIRRSCHEJPQNKMMIBZNXVCJFPKVMHIYOFRWYAYUIQKZEVRROLVBYVWAHXTDJTLXOWOHLWQQFMULRNNYGBPJOXXPGLXTCPMJYBMWQFXJGAZGIHSSVTADSGFH");
    msg.acknowledge = 101U;
    msg.status = 185U;
    const char tmp_msg_0[] = {-18, -50, -12, 41, -107, -100, 11, -8, 0, -95, -4, -69, -79, 20, 34, -95, 75, 45, 81, -103, 106, -43, -35, 23, -94, 93, 68, 6, -98, -92, 44, 94, 107, 100, -116, -27, 81, -90, 9, -118, -116, -49, -117, 33, -28, -52, 7, 73, 98, -46, 7, -119, 60, -126, -92, -73, 52, -66, -83, 126, -40, 82, -14, 111, 87, 121, -88, 31, 49, -2, 121, 117, 15, 113, -59, -16, 96, -94, 30, -54, -93, 101, -119, -38, -118, -63, -119, -19, 125, 42, 55, -82, 52, -28, 62, -106, 40, -82, 62, 88, 62, 24, 88, 30, -20, -74, 82, 87, 9, 95, 50, 74, 43, -93, -68, 72, 25, -92, 4, -43, -84, -108, 72, 64, -80, -14, 4, 8, -79, -15, -79, 27, 52, -66, -68, 43, 2, -118, -69, 18, 60, 18, 106, -85, -109, 0, 120, 29, -109, 33, 54, 48, -114, 112, -86, 6, -122, 23, -24, 18, 38, -89, -115, -18, 46, -126, -126, -96, 75, -72, 113, 50, -89, -124, -38, -85, 39, -51, -53, 21, -76, -114, -53, 71, 20, 72, -2, -84, 90, -17, 13, 5, 115, -121, -26, -35, -125, 111, -46, -25, -65, 83, -16, -13, 62, -25, 99, -13, 84, -78, 36, -47, -74, -78, -30, 6, -53, 49, -74, 118, -105, -6, 101, 103, -32, 47, -43, 124, 103, 21, 69, -49, 126, 43, 108, -23, -10, 79, -10, -35, 34, 41, -76, -123, -94, 72, -118, 121, -30, -30, -86, 115, -31};
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
    msg.setTimeStamp(0.0629451432144);
    msg.setSource(49089U);
    msg.setSourceEntity(225U);
    msg.setDestination(64527U);
    msg.setDestinationEntity(247U);
    msg.type = 3U;
    msg.req_id = 3283771526U;
    msg.ttl = 65175U;
    msg.code = 175U;
    msg.destination.assign("YTXOZLVXHUGMDNKJYISXLRTHWXMXRXYKKSFNZMZLMVEAGDYLFFHIPRRMGIBWGQRCZV");
    msg.source.assign("LASDDHCABKJMRJTSRRQIHXWNKCMOPGGGYKQWHCEAFJZMUFGGOBWIMVIRXJSFAPJXGNYAVRJIDHV");
    msg.acknowledge = 5U;
    msg.status = 116U;
    const char tmp_msg_0[] = {50, -3, 39, 52, 38, -114, -15, -40, -13, -104, 64, -39, 86, 39, -29, 53, -3, -8, 52, -74, -5, 93, 12, -106, 50, -77, -100, -12, 126, 63, 41, 85, 9, -33, 66, 75, -56, 10, 113, 77, 23, -98, 68, -106, 30, -74, -80, -2, -109, 36, -19, -14, 114, -81, 99, 14, 8, -19, -52, -14, -82, 7, -14, 57, -70, -73, 91, -10, 121, 100, 122, 83, 76, -49, -85, -38, -101, 72, 106, -21, 91, 70, -123, -93, -15, 65, 8, 25, -5, -69, 101, 51, -7, 70, 125, -43, -5, -84, 53, 77, -62, -92, 117, -80, 18, -65, 28, -59, -85, -1, 39, 3, -90, -60, -8, 35, 114, -17, 33, -104, 24, -116, -87, 32, 22, 50, 16, -71, -107, -112, -120, 60, 105, -56, -22, 63, -69, -120, -92, -80, -65, 8, 51, -62, 96, 105, 115, 102, 22, -116, 98, -19, -27, -111, 13, 43, 100, -78, -44, -74, 63, -119, -113, -57, 38, 0, -96, -103, -106, -61, 20, -124, -98, 5, 0, -27, -11, 124, 15, -25, -85, -56, 85, 71, -90, -93, -76, 110, -12, -102, 82, 57, 43, -37, 48, -57, -6, 12, -46, -57, -61, 76, -82, 33, 55, 57, 75, -56, -97, -1, 47, 106, 99, 16, 28, 61, 3, -47, 97, -55, -113, 65, 102, 14, 13, -74, -2, -84, -100, 60, -121, 13, -21, -84, -32, -72, 89, -87, -110, -91};
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
    msg.setTimeStamp(0.726503603171);
    msg.setSource(47521U);
    msg.setSourceEntity(40U);
    msg.setDestination(29053U);
    msg.setDestinationEntity(179U);
    msg.id = 183U;
    msg.range = 0.966408956521;

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
    msg.setTimeStamp(0.31050455746);
    msg.setSource(12083U);
    msg.setSourceEntity(129U);
    msg.setDestination(2044U);
    msg.setDestinationEntity(177U);
    msg.id = 82U;
    msg.range = 0.331427462627;

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
    msg.setTimeStamp(0.231923669579);
    msg.setSource(8878U);
    msg.setSourceEntity(167U);
    msg.setDestination(37103U);
    msg.setDestinationEntity(88U);
    msg.id = 224U;
    msg.range = 0.613903295937;

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
    msg.setTimeStamp(0.398551249524);
    msg.setSource(22327U);
    msg.setSourceEntity(148U);
    msg.setDestination(43863U);
    msg.setDestinationEntity(60U);
    msg.beacon.assign("IVQNONSFHFVXGERRGZSCHAOJTIPMOWKQYLCYAXYTBSYZGSZBZIAOZYMPIVCFPYUFRWNHWLLXLEIQXBRWZPEZKHBHKDPDISDVQLJOCOQXUXJQUTLTJVEZANPABWRDPBJAIMQROMCGHSYNUUMHVSYFPY");
    msg.lat = 0.596964186534;
    msg.lon = 0.387857261609;
    msg.depth = 0.950780331843;
    msg.query_channel = 200U;
    msg.reply_channel = 30U;
    msg.transponder_delay = 156U;

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
    msg.setTimeStamp(0.75481747471);
    msg.setSource(607U);
    msg.setSourceEntity(208U);
    msg.setDestination(55455U);
    msg.setDestinationEntity(13U);
    msg.beacon.assign("TOJHRCMXDKUYSFKMIXBQMSDWYQBKHDBLZLIWQAESWFRTPNDGWMOXVECQJFDOVWBETRXZORAMXPCDOHCGMLOAYBDOBOYFPKAENQUCAWKVFSIQJVETCEYDRUTZUVYQDIUIWSLGATIFXWZVDPXSKJQHQPUNNUWCZNIZKSLCASKC");
    msg.lat = 0.493772648005;
    msg.lon = 0.85877386816;
    msg.depth = 0.214734428674;
    msg.query_channel = 234U;
    msg.reply_channel = 243U;
    msg.transponder_delay = 150U;

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
    msg.setTimeStamp(0.309417509075);
    msg.setSource(35785U);
    msg.setSourceEntity(99U);
    msg.setDestination(57354U);
    msg.setDestinationEntity(14U);
    msg.beacon.assign("GHQFHDZHVYGEKISYLMMCHRHCMNVHQYTOVOMANILIZWQEQJCBKTFROPJQEAIACESLGBJPSZWBFDDVZHUFCPYLPYFODRKAZYXIUJLTQLDMACGKHMCEGAWSUBXKGBMUKMIRNNTUJQXVRLDHWSIQBWZRNWNGYIXOJEMENLKLRDDTGBCJVJTO");
    msg.lat = 0.389458992095;
    msg.lon = 0.0309011231393;
    msg.depth = 0.385615087538;
    msg.query_channel = 230U;
    msg.reply_channel = 33U;
    msg.transponder_delay = 40U;

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
    msg.setTimeStamp(0.507121821681);
    msg.setSource(45688U);
    msg.setSourceEntity(152U);
    msg.setDestination(57120U);
    msg.setDestinationEntity(104U);
    msg.op = 21U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TZLYQZPVDFYCITCLANSLZWWRXZMFCQSEPFGCHSJXNMCNVDQUQAYDKIEBUXMEOLGJSFCIHFPCVLKNFQOIAHTYVDCNRMSBAZNPYVXGNAYRECFQMWVUOKZVMHXMWQXIBAAREDSWTAXJOSYIKKYGHTJEVINWBZTJBJMVBFPZRBFGCPRQJROJUPJGBUAHDEWKT");
    tmp_msg_0.lat = 0.166787022034;
    tmp_msg_0.lon = 0.960759185694;
    tmp_msg_0.depth = 0.523783642184;
    tmp_msg_0.query_channel = 189U;
    tmp_msg_0.reply_channel = 163U;
    tmp_msg_0.transponder_delay = 193U;
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
    msg.setTimeStamp(0.967297089485);
    msg.setSource(50974U);
    msg.setSourceEntity(11U);
    msg.setDestination(33081U);
    msg.setDestinationEntity(228U);
    msg.op = 221U;

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
    msg.setTimeStamp(0.697135735188);
    msg.setSource(11943U);
    msg.setSourceEntity(247U);
    msg.setDestination(29299U);
    msg.setDestinationEntity(49U);
    msg.op = 32U;

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
    msg.setTimeStamp(0.35138686545);
    msg.setSource(26937U);
    msg.setSourceEntity(198U);
    msg.setDestination(38389U);
    msg.setDestinationEntity(122U);
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RUZMZFWGAEIXPOVQCJHVCRQUVTNACNZNJCHOFGYDTTQEVSZIFBHQYDONADSIXOGWPVLLHYHQSVKHORJNOILBAFQWEIKBTEJAOKNEBYXESDPFMQVTITGXA");
    tmp_msg_0.value.assign("FPMQGXOJFISSRSNRBMSDTVBFXUFPHWVITYUJCTLIYCNLRYUYBTPLFYGAJE");
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
    msg.setTimeStamp(0.00567826740832);
    msg.setSource(43577U);
    msg.setSourceEntity(211U);
    msg.setDestination(16473U);
    msg.setDestinationEntity(11U);
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 15U;
    tmp_msg_0.longain = 0.771582866502;
    tmp_msg_0.latgain = 0.72490688734;
    tmp_msg_0.bondthick = 3353102660U;
    tmp_msg_0.leadgain = 0.270911686835;
    tmp_msg_0.deconflgain = 0.629292208019;
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
    msg.setTimeStamp(0.0542313994052);
    msg.setSource(48233U);
    msg.setSourceEntity(184U);
    msg.setDestination(35952U);
    msg.setDestinationEntity(169U);
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 54U;
    tmp_msg_0.flags = 201U;
    tmp_msg_0.description.assign("OECQNCEOALJLKFPBWVXABSYTVZPGVEQZSGPTTTIKBPSWCMUVFZMRWQEYGQLEGACIYRJKUSIFNXMDFRQTXLTIXOXDHWDDKWUYVNWKKZNRTQROPJHQLJBXYLOJACTNNLYCSPSACKESWAMIBUYIIOHYFZHUCVCPARKG");
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
    msg.setTimeStamp(0.730319262854);
    msg.setSource(64896U);
    msg.setSourceEntity(202U);
    msg.setDestination(23068U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.311546239539;
    msg.lon = 0.152197679104;
    msg.depth = 0.909669713245;
    msg.sentence.assign("VXOOEWGHOVZEMAKXAYVZYRFMYIVBQHVKXKYXSCFFPTNJMBWXNRYJABTWERUKFEFHSEMPQKDUINTSHDIUQAJOQIUCYPSZFTGYADLOHHQSTCJKUDYCERGKMLRJ");
    msg.txtime = 0.104789021795;
    msg.modem_type.assign("LFVNNMCTZXYAPWTEWMUTPFNOKKSJQPXPZMSSIHJYEXXVICTRWEKFGMPSIWMPXZCJTK");
    msg.sys_src.assign("DLYGURRWYEQNYQKAJVUZANPCVJTFRSNRXBZWTSNILUYYLBUSHZSOTDPVWGVSTPXPYIMZWERRAOZXRGSIFDWPBBJOUQBUSCWHWAAEDMBDVIMQYXKMUNJZPGAFLNVPZITIHBFAOMGXKYCNJHCMGGMHMEMCCDOIGKFUGNKZYKTOEIEBVKEFK");
    msg.seq = 28062U;
    msg.sys_dst.assign("CQRJEWGQLCHTJVRIJKMUMOMUCEFWQRAKJJIVNEDMXECPIYPQXVECZGGUBKUUDYWZKYKUHNDLBSNDHTBPVFWUQXDGIPLTWPUVALMOLGGGWKMPSTXKEAZBWRGFIZAQQYHAMVRIVTTKAGJXJIJZFFPBUNRUBFHYOZTZOLANDIROXSNSAVLSOTOFWABCBQFZSDPOLDEYXQMKKSHYTAGSTCERHLMXSXZDHWNIENFEYX");
    msg.flags = 204U;
    const char tmp_msg_0[] = {97, -29, -127, 13, -88, 44, 53, 81, 85, 111, 77, 41, -92, 73, -48, 53, -4, 106, 76, 72, 22, -19, 92, -14, 100, 47, 84, 5, 10, 92, 67, 26, -1, 77, -41, -58, -97, 24, 125, -3, -128, 13, -95, -89, -63, 38, 16, 77, 6, -7, 116, 26, 17, 24, 83, 34, 96, -62, 64, -45, 56, 11, 124, -59, -65, 68, 47, 2, -124, 61, -92, 23, -120, 55, 30, -29, 52, -9, -96, 1, -51, -56, -70, 80, -73, 106, -20, -27, -122, 91, 78, 35, -80, 101, -61, 115, 104, -6, -101, 99, -33, 2, -64, -84, 16, -106, 101, -40, 46, 80, 18, -4, -30, -124, 92, 39, -24, 77, -84, -1, -60, 113, -127, 9, 96, -115, 2, 4, 60, -74, 90, -98, 67, 11, 111, 94, 78, -11, 3, -97, -62, 19, -16, 4, -46, 77, 122, 90, -96, 25, -100, -12};
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
    msg.setTimeStamp(0.0921244905662);
    msg.setSource(52938U);
    msg.setSourceEntity(144U);
    msg.setDestination(20549U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.636899209154;
    msg.lon = 0.207293060867;
    msg.depth = 0.190257332048;
    msg.sentence.assign("EOSKXPDPZFJXTNSCCVLAPESVNAROGKVVARMQTHXNDOTRYBGHTOBJYSQYHDTNRMPIQBQOJEKCCIYJSUWIKMZMGGORMGNXQUQFIWNWPXLACZSJXUYDFDIJMBFYGJZUQZTXDEEODLOYDVNCUAULTVWZIBCHKANIYMKMQYQVBHVFKPRWWOMNSRGMGBHWZBCLSFZHPKWIRAJLAEUAGFSLJCEQ");
    msg.txtime = 0.414700404662;
    msg.modem_type.assign("PNINBGLRJVYGCNYWIWHQECGYHQHFZUBMASYRLNKUDAQGGAAICNLDRMDAUQKPTZHBHKVEBPTWOZXMRSNSQZRXWLUYIBYFEOPTYEBXMBSJMTHGQJIBFAQFNIWCAVVJBSZSOIUD");
    msg.sys_src.assign("PCBPVYIXTBKGHVLCDSQZUWEZNWOMJBNOWGXKDQUP");
    msg.seq = 23543U;
    msg.sys_dst.assign("XKKPQBDRLXWFAMUSPPMXVSGPCSZOVEGVCQNBRIEVZTOLXURFYUHJCODHWPMQZERPUFZEPHWNYSAWJKOKGUXRDZAABVWJNMMYJDGIIYTZVTBFWTNJFGFOTYKIJXKRJTYBCZ");
    msg.flags = 253U;
    const char tmp_msg_0[] = {-7, 56, 22, 12, 119, 14, 92, 26, 31, 74, -58, -110, -106, -61, 95, -85, 50, -51, -85, -72, -78, 17, -66, 54, -21, 94, 13, 35, -65, 94, 80, -41, -32, 32, 79, 78, -24, 52, 33, 99, -16, 72, 15, 87, 114, 33, 10, -80, 88, -126, 20, -1, 78, 69, -98, 32, -28, 111, -87, -6, 21, -4, 2, 85, 65, 69, -40, 87, -38, 1, -50, 63, -50, 107, -49, -107, -29, 75, -107, -23, 72, 73, -106, -99, 13, 85, 11, -117, -18, -91, 120, -98, -100, 79, -9, -115, 26, -1, -48, 56, -103, -75, 110, 48, 13, 104, -38, -17, 94, -92, -119, 93, 58, -54, -78, -15, 89, -36, -10, -123, 75, -7, -13, -51, 114, 111, 97, -46, 110, -23, -62, 40, 124, -13, 23, -124, 67, 5, 109, 114, 28, 25, 32, 36, -67, 71, 57, -42, -109, -91, -14, -122, -3, -93, -35, -108, 68, 24, 66, -83, 42, 66, 16, 53, -57, 102, -111, -50, 63, 112, 12, -108, 64, -25, -104, 20, 9, 22, 92, 43, 100, 56, 87, 37, -88};
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
    msg.setTimeStamp(0.0605564231026);
    msg.setSource(61039U);
    msg.setSourceEntity(62U);
    msg.setDestination(49669U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.0339231988309;
    msg.lon = 0.316943523337;
    msg.depth = 0.665862635704;
    msg.sentence.assign("IICRZAKBKKDHFIGBOEYPQFLPTNSGJUSRNKIODFUOJTFENJZ");
    msg.txtime = 0.0569841256501;
    msg.modem_type.assign("ZLIEZNXOQOQHWFTVFMARTPIYASVKFUOXKAZUKKBHOLKPCLXDCIIUWHAPWBQUHLWPWFTJPARNNMZTRQOMFCWRSLTNKJ");
    msg.sys_src.assign("JEZZNUNGKHZQKCWSQHEXUTJYOCWPXPVXBIUWZENVBRBDDVIQELKHUTGAMOWLFVDFKOFEJTIWFJOESTVWAJQZEDXUONGPNRNLCLBXEVXKHANPABEMATIXC");
    msg.seq = 54269U;
    msg.sys_dst.assign("KKTETYFZRDZHDLXETYYIJMFIUXWRIIABRTOJFHQVXHJOLQUGDWOMPZKRPCSBFT");
    msg.flags = 215U;
    const char tmp_msg_0[] = {-90, -72, -124, 22, -49, -113, 10, 89, 28, 70, 21, -116, -7, -4, 108, -66, -7, 57, -10, -71, 4, -18, 46, 109, -124, -109, 107, 5, -18, 108, -119, -104, 52, -73, 51, 65, -9, -1, 92, 107, -113, -29, -8, 59, 36, 107, 52, 115, -124, 13, -123, 55, 26, 119, 121, -104, -92, -126, 89, 92, -28, 69, -65, -81, -21, 3, -20, 5, 17, -16, -42, -12, 89, 106, -14, 119, 13, 82, 116, -96, -27, -117, 6, 96};
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
    msg.setTimeStamp(0.19746294843);
    msg.setSource(51299U);
    msg.setSourceEntity(106U);
    msg.setDestination(7334U);
    msg.setDestinationEntity(86U);
    msg.op = 48U;
    msg.system.assign("OZNLHRCHGYBSWZRXWSTYSBOAIFRH");
    msg.range = 0.69919046599;
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 129U;
    tmp_msg_0.x = 0.0350293003392;
    tmp_msg_0.y = 0.344641290129;
    tmp_msg_0.z = 0.0950797713855;
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
    msg.setTimeStamp(0.848624507091);
    msg.setSource(28373U);
    msg.setSourceEntity(1U);
    msg.setDestination(11074U);
    msg.setDestinationEntity(102U);
    msg.op = 17U;
    msg.system.assign("RXSKXSPCEZOOKEWQWSAFYWATWPDCRYVAJGTYIFLRDKEUSLRNXRUPCSCOZBRUDEVOXNFNVPUKGFOMLEQYEWTKUQMIOVNFXIZZRZEEPOYCVGBTUMCTWBHTKQSEDMJANDDGKINZJBVPGBIIOGIYGHUQBUHALZVGFXZJVLLLJJWCBJPPYUQMVQMYQBWLSCOOAFBLWTNP");
    msg.range = 0.492489515709;
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.790369278614;
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
    msg.setTimeStamp(0.150396908203);
    msg.setSource(13697U);
    msg.setSourceEntity(232U);
    msg.setDestination(30900U);
    msg.setDestinationEntity(19U);
    msg.op = 52U;
    msg.system.assign("UKYXVDUGECYYZKEVDRCOIFWYILCAOZDJFDOHLNKMJJQCGAAMNCKZIZRMGFVHPBQWEBEOTFUDSZYBRDUNRSUGRHYAASWIJRLEZSTMGMUXSLRGPMMBDWAOTGVGBSVBWVPSCKZCNHJIFUWNQBOWHLPINOFJAHMWHPXKTTGPNQLZCSXQPWLPFDXEYALQTQPTKOYXIZD");
    msg.range = 0.493731248064;
    IMC::SessionStatus tmp_msg_0;
    tmp_msg_0.sessid = 4011427764U;
    tmp_msg_0.status = 195U;
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
    msg.setTimeStamp(0.924394392005);
    msg.setSource(5711U);
    msg.setSourceEntity(42U);
    msg.setDestination(9675U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.179782830947);
    msg.setSource(20408U);
    msg.setSourceEntity(206U);
    msg.setDestination(25233U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.678527421215);
    msg.setSource(5196U);
    msg.setSourceEntity(131U);
    msg.setDestination(62183U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.944119330898);
    msg.setSource(35532U);
    msg.setSourceEntity(227U);
    msg.setDestination(24463U);
    msg.setDestinationEntity(90U);
    msg.list.assign("ODBQSASFCNONNFFEEPQIQUDOHWPHNWEZSFPSZTVJRVCDDXLPLKIZJRGSWSCMAYMCBXYCVPKEAKGFKUJSLMWLKIURIZUQKWYRTPHTNVVYQDHDFCXOKPBXGXBNQGHFZVKOUHAHTCNOJRBMUTUHPEDQYPXRBVIQVZILXFCJSHTUMGSYZJGKATFIMEYTQDDWYEEWBQOOVWYHJMFPZMAVOXRERTODALEMULIJALLAZUBZGKB");

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
    msg.setTimeStamp(0.13277559188);
    msg.setSource(25359U);
    msg.setSourceEntity(220U);
    msg.setDestination(59933U);
    msg.setDestinationEntity(175U);
    msg.list.assign("YQOOGVPMXMRZGOJEWVXWTAFJJPNBMPFDGZXUGLEQHXSDAESAWWNZXNUCTYEFGAVETITYCVLCKUECKTGLINUTOLGDLXBMYSBZHZWJHNHIFDNFHYANCPLLNUVVMQKTSPBEAWIRRZBFRDMTGWHIYVAKUCJDXBWAYCJKPWVOOKSADJYHHDWPGREKOLQLTIJCFRIIBROQJHQFDSKTPYKOZS");

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
    msg.setTimeStamp(0.18088102084);
    msg.setSource(11135U);
    msg.setSourceEntity(167U);
    msg.setDestination(1711U);
    msg.setDestinationEntity(198U);
    msg.list.assign("SEDMQVHYRFKOVEMUTJCHTBOEBRYBCTLQUXSEDCPAKRYWYWGNASTQTWMFXYFQSEQKFUOSHAWUVBNLCGVZDHLJFAROKIYVSKZFYNIOUAPXKPXLHGJJODDIRNITUYNOVVQPAMHGXSCTPUALPYICIZESMBBZRVGIWJAIRIPGJSMWFDGQOUWKLCDBRWUCZMXMXPCZJRKMTBIEBPHNNNLJJQWUENGLXHZKEFTXHFYOHZZDZKNALDCQ");

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
    msg.setTimeStamp(0.183239484724);
    msg.setSource(45305U);
    msg.setSourceEntity(21U);
    msg.setDestination(50787U);
    msg.setDestinationEntity(66U);
    msg.peer.assign("VTNGDYRMZRJSJ");
    msg.rssi = 0.0584399932262;
    msg.integrity = 34602U;

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
    msg.setTimeStamp(0.612129360021);
    msg.setSource(54581U);
    msg.setSourceEntity(221U);
    msg.setDestination(57746U);
    msg.setDestinationEntity(220U);
    msg.peer.assign("NCVWNVUFXSGELYQJVFTEPWRTEABBRDDXNWKJXNWUDARWEZRYYZYBHGCBNULQPXISOOSDMOTHHCFHLRQYXZFFPCPOQOXTTJZHMVRNGQBCXMWAKEMNKDYZSIJQFJDSXPDIKAVPLGUKQLUYORATTSQRMGJKPEZRGJNJFTCVKWPBIMMLTGWBHVVUHMZOAFKDKDUSAAHXGIOMECUONHFAEZQUSNERV");
    msg.rssi = 0.205972880705;
    msg.integrity = 31863U;

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
    msg.setTimeStamp(0.661922273655);
    msg.setSource(64298U);
    msg.setSourceEntity(34U);
    msg.setDestination(18386U);
    msg.setDestinationEntity(143U);
    msg.peer.assign("FVJGJFJPVCZAOMXLDEIXVZRTPCRKQLKXJAGIQPSGBTAKFSNLAOPASRJBHIPMROEARTRLIXRPHWKNGGUNFVSOBBQBZZDBFGHWFZUNIJSUTHKNYVMYDOFTGQXSEKQNCPYCCAUHODLWHHHHLEPOCVLKCSODFYUWDADUXRXCVLCTFTJYUETMBEN");
    msg.rssi = 0.0191099379398;
    msg.integrity = 58335U;

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
    msg.setTimeStamp(0.777817948803);
    msg.setSource(58567U);
    msg.setSourceEntity(242U);
    msg.setDestination(15273U);
    msg.setDestinationEntity(130U);
    msg.req_id = 59612U;
    msg.destination.assign("OZXFAWFSIUGVGJYNQZWYKFWZCGLOAARZUZHPNPH");
    msg.timeout = 0.968588960938;
    msg.range = 0.913820165295;
    msg.type = 18U;
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SYBGJQVJDBUTHLTACHPPSUANKCHOEWKMDERUXSCSVZDWWGPWIZPIRNAVIRTUZDJTLYGHDPELNOEPTOVOKJYTKNVAVISXLJNCHHSQNNYFKLLXNHRZBHGMMRQTSOTQMEBQQKMNVGGCZMUYSWKRVUMLFKKPBXWYMEBOJBSVZDQUECJYPAQJCUPIDIXJFGXFFTLRWYOZFJYBRREBWVIAKOWPMXTAIFBLXIFYQGZGNDEXSIEDLFZWZHX");
    tmp_msg_0.feature_type = 250U;
    tmp_msg_0.rgb_red = 128U;
    tmp_msg_0.rgb_green = 196U;
    tmp_msg_0.rgb_blue = 163U;
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
    msg.setTimeStamp(0.339744325409);
    msg.setSource(49678U);
    msg.setSourceEntity(56U);
    msg.setDestination(19376U);
    msg.setDestinationEntity(114U);
    msg.req_id = 62834U;
    msg.destination.assign("PWKXLQVGYJUOGTHBTFXZSACNPIIKVBLEAOGTNWTSYIKRUSDBMLLNXNAHOQYDDIUHZJKEJWUOQFZKIAGFCANHCMABYTUDAJXGDWUFCMMNRPTZQQJEIYTXBEPSCMBJUYZWWSHKLHOFDAJQEMSUVKPYLGAPFOMGVCQHYHUHINFVZTRERTSLNTVOILWZMCFBCRJFKHICOXEOWRVS");
    msg.timeout = 0.24421820758;
    msg.range = 0.839087349037;
    msg.type = 61U;
    IMC::DissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.424561817885;
    tmp_msg_0.type = 42U;
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
    msg.setTimeStamp(0.387328430853);
    msg.setSource(55289U);
    msg.setSourceEntity(211U);
    msg.setDestination(37251U);
    msg.setDestinationEntity(215U);
    msg.req_id = 52673U;
    msg.destination.assign("ZJLLOREDVTVRYJEACSWNLSUQMYFBPUAWHGNJUJUNVTWDIMAZTRVZBYRNRZLAFGOBQIOBCNKMIHZMMXCEVJUENFIZCDYWCIRDRKBXMBZCEBTXUYNXQRSQGOKZFWEQSCGIUJYEBODFEBWMSTADTXPLACKHVDKPYKWJOMGLHAFSLFKZYPQQTDHLEANITTDSLGVJXGGYYHSAFBUOKXQSGPRPHWOEAVXVWUJPUKCMZIKQHWXSMONL");
    msg.timeout = 0.175385977768;
    msg.range = 0.188585609946;
    msg.type = 199U;
    IMC::DmsDetection tmp_msg_0;
    tmp_msg_0.ch01 = 0.707954021737;
    tmp_msg_0.ch02 = 0.409022443708;
    tmp_msg_0.ch03 = 0.832578453038;
    tmp_msg_0.ch04 = 0.204049968968;
    tmp_msg_0.ch05 = 0.253697491808;
    tmp_msg_0.ch06 = 0.776798584727;
    tmp_msg_0.ch07 = 0.218345985927;
    tmp_msg_0.ch08 = 0.978358672596;
    tmp_msg_0.ch09 = 0.741976658414;
    tmp_msg_0.ch10 = 0.647281867839;
    tmp_msg_0.ch11 = 0.107399593432;
    tmp_msg_0.ch12 = 0.749035663137;
    tmp_msg_0.ch13 = 0.287750307691;
    tmp_msg_0.ch14 = 0.396994267183;
    tmp_msg_0.ch15 = 0.87366086712;
    tmp_msg_0.ch16 = 0.259296379403;
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
    msg.setTimeStamp(0.299607292339);
    msg.setSource(3292U);
    msg.setSourceEntity(206U);
    msg.setDestination(41827U);
    msg.setDestinationEntity(180U);
    msg.req_id = 40663U;
    msg.type = 50U;
    msg.status = 235U;
    msg.info.assign("KOKUIMZOBEGYGKVHCMZSOYFLTVGNEMGENMPOGYTCPSBOBIRISAQMVZALOLVVPRXNFVMTKDDOWGUWIJHBMPHSSFNCRNAIISFXMWZHEXDLZHAYKCVLXFSLNNBBFBKYPAEQREHYCZYVFHRPJPXUXWCDLPJDUPEGHYJVTQJFZBEIOIBQFXPNTGTRCJXGEZZUWM");
    msg.range = 0.879404006624;

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
    msg.setTimeStamp(0.449655929106);
    msg.setSource(13611U);
    msg.setSourceEntity(185U);
    msg.setDestination(8527U);
    msg.setDestinationEntity(242U);
    msg.req_id = 53964U;
    msg.type = 241U;
    msg.status = 57U;
    msg.info.assign("KHCBZDOTPNFBYMUNBUTWBZKRTIQVWJXCRULIOKMYNVDMZGILWVHKRHEYSQFRBGTYVMHYJSUKKTLXGHJVQQHJTXUPOLFVQPFRETAVDYWXKTYJWWSMGINNXQITWMUOXTJWSVXI");
    msg.range = 0.602129185646;

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
    msg.setTimeStamp(0.143482365359);
    msg.setSource(17828U);
    msg.setSourceEntity(200U);
    msg.setDestination(12356U);
    msg.setDestinationEntity(30U);
    msg.req_id = 24377U;
    msg.type = 176U;
    msg.status = 65U;
    msg.info.assign("GEWMVMAKPCVUZJYPZBALLKQITNEPSNHCEGRNGDSRVRIDTFPIUHDTNTKCFCJAESBNGZJLISKJGNTHJEWH");
    msg.range = 0.806679412354;

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
    msg.setTimeStamp(0.315341419672);
    msg.setSource(49208U);
    msg.setSourceEntity(194U);
    msg.setDestination(1420U);
    msg.setDestinationEntity(104U);
    msg.value = 28238;

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
    msg.setTimeStamp(0.395447172986);
    msg.setSource(58318U);
    msg.setSourceEntity(121U);
    msg.setDestination(32266U);
    msg.setDestinationEntity(29U);
    msg.value = -16893;

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
    msg.setTimeStamp(0.197059897998);
    msg.setSource(56798U);
    msg.setSourceEntity(86U);
    msg.setDestination(16832U);
    msg.setDestinationEntity(86U);
    msg.value = -26375;

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
    msg.setTimeStamp(0.838220768127);
    msg.setSource(54993U);
    msg.setSourceEntity(150U);
    msg.setDestination(16514U);
    msg.setDestinationEntity(62U);
    msg.value = 0.88059622317;

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
    msg.setTimeStamp(0.880170493472);
    msg.setSource(18028U);
    msg.setSourceEntity(15U);
    msg.setDestination(42395U);
    msg.setDestinationEntity(80U);
    msg.value = 0.315669935416;

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
    msg.setTimeStamp(0.829242305256);
    msg.setSource(41315U);
    msg.setSourceEntity(31U);
    msg.setDestination(14149U);
    msg.setDestinationEntity(87U);
    msg.value = 0.0155363460341;

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
    msg.setTimeStamp(0.124189312589);
    msg.setSource(25656U);
    msg.setSourceEntity(26U);
    msg.setDestination(60200U);
    msg.setDestinationEntity(142U);
    msg.value = 0.018080575422;

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
    msg.setTimeStamp(0.875757378645);
    msg.setSource(16963U);
    msg.setSourceEntity(110U);
    msg.setDestination(9492U);
    msg.setDestinationEntity(8U);
    msg.value = 0.175859998536;

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
    msg.setTimeStamp(0.49568571426);
    msg.setSource(20851U);
    msg.setSourceEntity(37U);
    msg.setDestination(31465U);
    msg.setDestinationEntity(130U);
    msg.value = 0.368350402136;

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
    msg.setTimeStamp(0.270299645488);
    msg.setSource(5513U);
    msg.setSourceEntity(96U);
    msg.setDestination(42090U);
    msg.setDestinationEntity(114U);
    msg.validity = 52657U;
    msg.type = 180U;
    msg.utc_year = 62645U;
    msg.utc_month = 125U;
    msg.utc_day = 238U;
    msg.utc_time = 0.241648074154;
    msg.lat = 0.799226991891;
    msg.lon = 0.550704666443;
    msg.height = 0.965921511486;
    msg.satellites = 62U;
    msg.cog = 0.156819820931;
    msg.sog = 0.539571013973;
    msg.hdop = 0.962943935271;
    msg.vdop = 0.00180097891678;
    msg.hacc = 0.7414295016;
    msg.vacc = 0.532693057432;

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
    msg.setTimeStamp(0.809591759335);
    msg.setSource(10431U);
    msg.setSourceEntity(71U);
    msg.setDestination(61785U);
    msg.setDestinationEntity(93U);
    msg.validity = 17679U;
    msg.type = 120U;
    msg.utc_year = 10387U;
    msg.utc_month = 15U;
    msg.utc_day = 65U;
    msg.utc_time = 0.167175082342;
    msg.lat = 0.22220425981;
    msg.lon = 0.479256485796;
    msg.height = 0.54740268569;
    msg.satellites = 107U;
    msg.cog = 0.193504239108;
    msg.sog = 0.198750964585;
    msg.hdop = 0.597916668852;
    msg.vdop = 0.6017795973;
    msg.hacc = 0.0488713098881;
    msg.vacc = 0.681146710915;

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
    msg.setTimeStamp(0.272153810695);
    msg.setSource(13097U);
    msg.setSourceEntity(105U);
    msg.setDestination(44687U);
    msg.setDestinationEntity(18U);
    msg.validity = 50252U;
    msg.type = 53U;
    msg.utc_year = 18404U;
    msg.utc_month = 217U;
    msg.utc_day = 158U;
    msg.utc_time = 0.543460656932;
    msg.lat = 0.967821096026;
    msg.lon = 0.882980658428;
    msg.height = 0.351041070136;
    msg.satellites = 208U;
    msg.cog = 0.545666453152;
    msg.sog = 0.882517442257;
    msg.hdop = 0.326891334836;
    msg.vdop = 0.11498273535;
    msg.hacc = 0.169938762679;
    msg.vacc = 0.927178725207;

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
    msg.setTimeStamp(0.544649842122);
    msg.setSource(4550U);
    msg.setSourceEntity(89U);
    msg.setDestination(63830U);
    msg.setDestinationEntity(110U);
    msg.time = 0.681672419767;
    msg.phi = 0.867969832849;
    msg.theta = 0.196850923971;
    msg.psi = 0.922402694857;
    msg.psi_magnetic = 0.391731100834;

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
    msg.setTimeStamp(0.52704010532);
    msg.setSource(40536U);
    msg.setSourceEntity(177U);
    msg.setDestination(32005U);
    msg.setDestinationEntity(125U);
    msg.time = 0.997646737495;
    msg.phi = 0.0799292112624;
    msg.theta = 0.70224416095;
    msg.psi = 0.332060410831;
    msg.psi_magnetic = 0.787515408466;

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
    msg.setTimeStamp(0.137522747559);
    msg.setSource(4310U);
    msg.setSourceEntity(5U);
    msg.setDestination(50541U);
    msg.setDestinationEntity(191U);
    msg.time = 0.953691852566;
    msg.phi = 0.0669460190406;
    msg.theta = 0.0399196158448;
    msg.psi = 0.434332566727;
    msg.psi_magnetic = 0.411947589637;

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
    msg.setTimeStamp(0.665378503998);
    msg.setSource(36552U);
    msg.setSourceEntity(183U);
    msg.setDestination(42852U);
    msg.setDestinationEntity(55U);
    msg.time = 0.430083319649;
    msg.x = 0.638561612811;
    msg.y = 0.155233684093;
    msg.z = 0.284880046632;
    msg.timestep = 0.814809418049;

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
    msg.setTimeStamp(0.581583197537);
    msg.setSource(21132U);
    msg.setSourceEntity(55U);
    msg.setDestination(30635U);
    msg.setDestinationEntity(226U);
    msg.time = 0.620832522047;
    msg.x = 0.0804302498523;
    msg.y = 0.279706522942;
    msg.z = 0.36303693812;
    msg.timestep = 0.640689421895;

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
    msg.setTimeStamp(0.624438112853);
    msg.setSource(22965U);
    msg.setSourceEntity(100U);
    msg.setDestination(7843U);
    msg.setDestinationEntity(119U);
    msg.time = 0.315680144873;
    msg.x = 0.851194549021;
    msg.y = 0.556035908575;
    msg.z = 0.89314021341;
    msg.timestep = 0.822905211704;

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
    msg.setTimeStamp(0.671343086908);
    msg.setSource(46207U);
    msg.setSourceEntity(188U);
    msg.setDestination(37737U);
    msg.setDestinationEntity(175U);
    msg.time = 0.675427500765;
    msg.x = 0.635648526289;
    msg.y = 0.853723014015;
    msg.z = 0.513100713077;

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
    msg.setTimeStamp(0.758308407975);
    msg.setSource(47665U);
    msg.setSourceEntity(150U);
    msg.setDestination(53896U);
    msg.setDestinationEntity(202U);
    msg.time = 0.18207509861;
    msg.x = 0.468546833127;
    msg.y = 0.697711899935;
    msg.z = 0.304367994728;

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
    msg.setTimeStamp(0.253173726103);
    msg.setSource(22308U);
    msg.setSourceEntity(75U);
    msg.setDestination(22767U);
    msg.setDestinationEntity(243U);
    msg.time = 0.154287085026;
    msg.x = 0.390624925717;
    msg.y = 0.283662827866;
    msg.z = 0.426574755231;

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
    msg.setTimeStamp(0.759703074714);
    msg.setSource(46380U);
    msg.setSourceEntity(15U);
    msg.setDestination(34629U);
    msg.setDestinationEntity(31U);
    msg.time = 0.243444434313;
    msg.x = 0.0847570868755;
    msg.y = 0.516402659202;
    msg.z = 0.180878873042;

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
    msg.setTimeStamp(0.93149480019);
    msg.setSource(9831U);
    msg.setSourceEntity(3U);
    msg.setDestination(42586U);
    msg.setDestinationEntity(69U);
    msg.time = 0.889954895804;
    msg.x = 0.929256578125;
    msg.y = 0.752053107876;
    msg.z = 0.220462525778;

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
    msg.setTimeStamp(0.530601430477);
    msg.setSource(54120U);
    msg.setSourceEntity(134U);
    msg.setDestination(34518U);
    msg.setDestinationEntity(74U);
    msg.time = 0.324138696168;
    msg.x = 0.848725493765;
    msg.y = 0.704064501698;
    msg.z = 0.215407211733;

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
    msg.setTimeStamp(0.317426160591);
    msg.setSource(2679U);
    msg.setSourceEntity(51U);
    msg.setDestination(13930U);
    msg.setDestinationEntity(93U);
    msg.time = 0.568439396066;
    msg.x = 0.948034591899;
    msg.y = 0.0966419093823;
    msg.z = 0.556059102702;

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
    msg.setTimeStamp(0.344605368552);
    msg.setSource(27743U);
    msg.setSourceEntity(114U);
    msg.setDestination(5831U);
    msg.setDestinationEntity(160U);
    msg.time = 0.739918618198;
    msg.x = 0.936512685018;
    msg.y = 0.195900180164;
    msg.z = 0.368898857434;

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
    msg.setTimeStamp(0.470854493305);
    msg.setSource(32486U);
    msg.setSourceEntity(215U);
    msg.setDestination(6239U);
    msg.setDestinationEntity(36U);
    msg.time = 0.263994677128;
    msg.x = 0.939960704917;
    msg.y = 0.404931456459;
    msg.z = 0.188905314032;

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
    msg.setTimeStamp(0.268556567192);
    msg.setSource(14740U);
    msg.setSourceEntity(179U);
    msg.setDestination(64888U);
    msg.setDestinationEntity(14U);
    msg.validity = 168U;
    msg.x = 0.246587150591;
    msg.y = 0.94091186117;
    msg.z = 0.322649220857;

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
    msg.setTimeStamp(0.640272048223);
    msg.setSource(58397U);
    msg.setSourceEntity(129U);
    msg.setDestination(46718U);
    msg.setDestinationEntity(244U);
    msg.validity = 246U;
    msg.x = 0.97444064827;
    msg.y = 0.32535432192;
    msg.z = 0.525187330014;

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
    msg.setTimeStamp(0.97402926392);
    msg.setSource(3744U);
    msg.setSourceEntity(215U);
    msg.setDestination(28992U);
    msg.setDestinationEntity(10U);
    msg.validity = 78U;
    msg.x = 0.168154267062;
    msg.y = 0.687429023255;
    msg.z = 0.770913607399;

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
    msg.setTimeStamp(0.211546380377);
    msg.setSource(4759U);
    msg.setSourceEntity(119U);
    msg.setDestination(14820U);
    msg.setDestinationEntity(101U);
    msg.validity = 126U;
    msg.x = 0.277110819203;
    msg.y = 0.178417165197;
    msg.z = 0.631876626466;

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
    msg.setTimeStamp(0.324312864198);
    msg.setSource(2629U);
    msg.setSourceEntity(240U);
    msg.setDestination(3297U);
    msg.setDestinationEntity(88U);
    msg.validity = 191U;
    msg.x = 0.396656012139;
    msg.y = 0.632974035164;
    msg.z = 0.213936605973;

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
    msg.setTimeStamp(0.821380720027);
    msg.setSource(51155U);
    msg.setSourceEntity(154U);
    msg.setDestination(21665U);
    msg.setDestinationEntity(234U);
    msg.validity = 65U;
    msg.x = 0.476200978707;
    msg.y = 0.0453955328129;
    msg.z = 0.167054255695;

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
    msg.setTimeStamp(0.664786278131);
    msg.setSource(52539U);
    msg.setSourceEntity(45U);
    msg.setDestination(9565U);
    msg.setDestinationEntity(205U);
    msg.time = 0.104922768182;
    msg.x = 0.32980060749;
    msg.y = 0.948756659928;
    msg.z = 0.460735633444;

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
    msg.setTimeStamp(0.322422406006);
    msg.setSource(64239U);
    msg.setSourceEntity(99U);
    msg.setDestination(16945U);
    msg.setDestinationEntity(200U);
    msg.time = 0.832562074829;
    msg.x = 0.244092314896;
    msg.y = 0.836823928369;
    msg.z = 0.574532081553;

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
    msg.setTimeStamp(0.000180742951618);
    msg.setSource(54746U);
    msg.setSourceEntity(71U);
    msg.setDestination(2210U);
    msg.setDestinationEntity(139U);
    msg.time = 0.150572644388;
    msg.x = 0.0215218784012;
    msg.y = 0.101590181917;
    msg.z = 0.355260220291;

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
    msg.setTimeStamp(0.860712392667);
    msg.setSource(30019U);
    msg.setSourceEntity(73U);
    msg.setDestination(20239U);
    msg.setDestinationEntity(194U);
    msg.validity = 14U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.702210929749;
    tmp_msg_0.beam_height = 0.0411233300938;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.478495066997;

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
    msg.setTimeStamp(0.366392973368);
    msg.setSource(41518U);
    msg.setSourceEntity(135U);
    msg.setDestination(35774U);
    msg.setDestinationEntity(191U);
    msg.validity = 252U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.779907262627;
    tmp_msg_0.beam_height = 0.909679591715;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.0885694254256;

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
    msg.setTimeStamp(0.294769550324);
    msg.setSource(56836U);
    msg.setSourceEntity(191U);
    msg.setDestination(55527U);
    msg.setDestinationEntity(0U);
    msg.validity = 154U;
    msg.value = 0.256396583085;

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
    msg.setTimeStamp(0.656202531085);
    msg.setSource(9965U);
    msg.setSourceEntity(135U);
    msg.setDestination(8171U);
    msg.setDestinationEntity(252U);
    msg.value = 0.372063463435;

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
    msg.setTimeStamp(0.749232363984);
    msg.setSource(22898U);
    msg.setSourceEntity(77U);
    msg.setDestination(10221U);
    msg.setDestinationEntity(181U);
    msg.value = 0.204339646257;

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
    msg.setTimeStamp(0.862013655348);
    msg.setSource(455U);
    msg.setSourceEntity(124U);
    msg.setDestination(55963U);
    msg.setDestinationEntity(31U);
    msg.value = 0.551625248473;

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
    msg.setTimeStamp(0.956559894413);
    msg.setSource(26931U);
    msg.setSourceEntity(249U);
    msg.setDestination(30893U);
    msg.setDestinationEntity(72U);
    msg.value = 0.251866285694;

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
    msg.setTimeStamp(0.548739867768);
    msg.setSource(53083U);
    msg.setSourceEntity(150U);
    msg.setDestination(11525U);
    msg.setDestinationEntity(205U);
    msg.value = 0.93030573047;

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
    msg.setTimeStamp(0.594948339626);
    msg.setSource(49733U);
    msg.setSourceEntity(56U);
    msg.setDestination(575U);
    msg.setDestinationEntity(19U);
    msg.value = 0.319264392361;

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
    msg.setTimeStamp(0.0278047125714);
    msg.setSource(39264U);
    msg.setSourceEntity(164U);
    msg.setDestination(36300U);
    msg.setDestinationEntity(131U);
    msg.value = 0.882890362935;

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
    msg.setTimeStamp(0.16132686643);
    msg.setSource(54427U);
    msg.setSourceEntity(52U);
    msg.setDestination(50280U);
    msg.setDestinationEntity(151U);
    msg.value = 0.39854795956;

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
    msg.setTimeStamp(0.768409946474);
    msg.setSource(49641U);
    msg.setSourceEntity(235U);
    msg.setDestination(18241U);
    msg.setDestinationEntity(223U);
    msg.value = 0.636833458124;

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
    msg.setTimeStamp(0.642084049733);
    msg.setSource(34878U);
    msg.setSourceEntity(213U);
    msg.setDestination(26632U);
    msg.setDestinationEntity(27U);
    msg.value = 0.220235553192;

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
    msg.setTimeStamp(0.338935216012);
    msg.setSource(2610U);
    msg.setSourceEntity(16U);
    msg.setDestination(1449U);
    msg.setDestinationEntity(130U);
    msg.value = 0.687267629804;

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
    msg.setTimeStamp(0.225521954386);
    msg.setSource(40636U);
    msg.setSourceEntity(151U);
    msg.setDestination(47189U);
    msg.setDestinationEntity(8U);
    msg.value = 0.497348365702;

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
    msg.setTimeStamp(0.671911957951);
    msg.setSource(19842U);
    msg.setSourceEntity(170U);
    msg.setDestination(38211U);
    msg.setDestinationEntity(113U);
    msg.value = 0.30399588416;

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
    msg.setTimeStamp(0.474961395554);
    msg.setSource(29955U);
    msg.setSourceEntity(109U);
    msg.setDestination(8914U);
    msg.setDestinationEntity(203U);
    msg.value = 0.82350977649;

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
    msg.setTimeStamp(0.386308729597);
    msg.setSource(29250U);
    msg.setSourceEntity(110U);
    msg.setDestination(4598U);
    msg.setDestinationEntity(71U);
    msg.value = 0.0588111931985;

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
    msg.setTimeStamp(0.78059024083);
    msg.setSource(38431U);
    msg.setSourceEntity(180U);
    msg.setDestination(9272U);
    msg.setDestinationEntity(216U);
    msg.value = 0.460983432497;

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
    msg.setTimeStamp(0.407717882777);
    msg.setSource(28935U);
    msg.setSourceEntity(155U);
    msg.setDestination(18252U);
    msg.setDestinationEntity(122U);
    msg.value = 0.741707531207;

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
    msg.setTimeStamp(0.218955820136);
    msg.setSource(46173U);
    msg.setSourceEntity(209U);
    msg.setDestination(42929U);
    msg.setDestinationEntity(182U);
    msg.value = 0.106734015638;

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
    msg.setTimeStamp(0.965546427992);
    msg.setSource(24037U);
    msg.setSourceEntity(224U);
    msg.setDestination(14736U);
    msg.setDestinationEntity(12U);
    msg.value = 0.839669775582;

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
    msg.setTimeStamp(0.378443497126);
    msg.setSource(42113U);
    msg.setSourceEntity(199U);
    msg.setDestination(23108U);
    msg.setDestinationEntity(88U);
    msg.value = 0.3266289133;

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
    msg.setTimeStamp(0.384995092963);
    msg.setSource(6126U);
    msg.setSourceEntity(254U);
    msg.setDestination(31733U);
    msg.setDestinationEntity(69U);
    msg.value = 0.479651197907;

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
    msg.setTimeStamp(0.160645064005);
    msg.setSource(17919U);
    msg.setSourceEntity(20U);
    msg.setDestination(52734U);
    msg.setDestinationEntity(183U);
    msg.value = 0.0986764523345;

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
    msg.setTimeStamp(0.907246779915);
    msg.setSource(56299U);
    msg.setSourceEntity(84U);
    msg.setDestination(3270U);
    msg.setDestinationEntity(252U);
    msg.value = 0.477399687404;

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
    msg.setTimeStamp(0.862994426566);
    msg.setSource(42989U);
    msg.setSourceEntity(189U);
    msg.setDestination(39607U);
    msg.setDestinationEntity(90U);
    msg.value = 0.616322286357;

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
    msg.setTimeStamp(0.278229047916);
    msg.setSource(3907U);
    msg.setSourceEntity(219U);
    msg.setDestination(24097U);
    msg.setDestinationEntity(214U);
    msg.direction = 0.694511692354;
    msg.speed = 0.231373527689;
    msg.turbulence = 0.388550303359;

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
    msg.setTimeStamp(0.773523251557);
    msg.setSource(50284U);
    msg.setSourceEntity(95U);
    msg.setDestination(25244U);
    msg.setDestinationEntity(109U);
    msg.direction = 0.105860415554;
    msg.speed = 0.124097463447;
    msg.turbulence = 0.233224320371;

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
    msg.setTimeStamp(0.608915410496);
    msg.setSource(51274U);
    msg.setSourceEntity(23U);
    msg.setDestination(57902U);
    msg.setDestinationEntity(25U);
    msg.direction = 0.743129014589;
    msg.speed = 0.293507534934;
    msg.turbulence = 0.689103266124;

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
    msg.setTimeStamp(0.998838593989);
    msg.setSource(62922U);
    msg.setSourceEntity(140U);
    msg.setDestination(58222U);
    msg.setDestinationEntity(8U);
    msg.value = 0.389146083773;

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
    msg.setTimeStamp(0.328409789397);
    msg.setSource(2044U);
    msg.setSourceEntity(33U);
    msg.setDestination(31744U);
    msg.setDestinationEntity(204U);
    msg.value = 0.378370774955;

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
    msg.setTimeStamp(0.935921928672);
    msg.setSource(45334U);
    msg.setSourceEntity(99U);
    msg.setDestination(24373U);
    msg.setDestinationEntity(230U);
    msg.value = 0.279184559624;

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
    msg.setTimeStamp(0.802279179579);
    msg.setSource(42001U);
    msg.setSourceEntity(63U);
    msg.setDestination(59417U);
    msg.setDestinationEntity(222U);
    msg.value.assign("CPZZDZBREXLDRTAXYUCDDUOQCPBAZHBZWCXCSTWFJRIYFPVTAYWTJ");

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
    msg.setTimeStamp(0.918066814391);
    msg.setSource(53468U);
    msg.setSourceEntity(105U);
    msg.setDestination(9759U);
    msg.setDestinationEntity(225U);
    msg.value.assign("YBSYOFPXQELUBGCQKYSBJVYDUZVIOWSEEPUKTJEGDGNFFAHQGDTLOLWXFLLNHMLUJSEG");

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
    msg.setTimeStamp(0.711782383631);
    msg.setSource(12611U);
    msg.setSourceEntity(92U);
    msg.setDestination(7460U);
    msg.setDestinationEntity(141U);
    msg.value.assign("NCPUOIGKYCTNZTYRFDZJAMRLWUZOXFTUMUNIRPRLFKVUQEBVREMXMWTJKQAUAXEHFCQVZGBRBTHLPCGHGDWSISBBQLCYYITF");

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
    msg.setTimeStamp(0.454946716731);
    msg.setSource(51300U);
    msg.setSourceEntity(244U);
    msg.setDestination(48620U);
    msg.setDestinationEntity(124U);
    const char tmp_msg_0[] = {65, -108, 117, -88, -82, -2, -103, -121, 95, 17, -26, 14, -121, -46, 90, 91, -106, -68, 106, 8, 121, -84, 13, -41, -13, 48, -101, -7, -67, -21, 37, -2, 113, 18, 3, 18, 26, 80, -56, -99, 52, 17, 10, 2, -108, 63, -38, 119, -29, 102, 78, -96, 98, 88, 122, -113, -93, -46, -66, -118, 107, -31, 63, 96, 117, 124, -92, -2, 50, 38, -90, -89, -101, -79, -45, -13, 68, 2, 102, 30, 89, -81, -64, -17, -88, 8, -37, 49, -15, 111, -18, 84, -5, -26, 14, 123, 36, 22, 97, 67, 114, 109, 34, -84, 57, 51, -121, 89, 52, -112, -52, -52, 79, 88, 88, 38, -119, -99, -39, -53, -53, 114, 61, -71, 3, 77, 43, 106, -109, 7, -128, -99, 45, 24, -46, 49, 3, 74, 21, -80, -25, -54, 28, 4, -41, -112, 39, 51, 8, -34, 98, 58, 41, -7, 85, 83, -80, -93, -41, -102, 106, -82, -45, -113, 0, 106, 50, 99, -89, -9, 82, -50, -86, 91, 64, 62, -66, -33, 15, 97, 9, -10, 96, 87, -51, -61, -14, -123, 75, -116, 8, 108, 111, 121, 51, -123, 70, -70, 3, -5, -28, -61, 3, -65, 29, 111, 34, -75, -116, -4, 111, 107, -103, -71, -74, 90, -19, -51, -2, -100, 101, -81, 93, -76, -63, 13, 4, 41, 11, 38, -8, 112, -122, -40, -26, 15, 35, -78, 90, 1, 54, -106};
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
    msg.setTimeStamp(0.0298313537552);
    msg.setSource(17217U);
    msg.setSourceEntity(87U);
    msg.setDestination(43577U);
    msg.setDestinationEntity(90U);
    const char tmp_msg_0[] = {99, 95, 87, -14, -27, 126, 25, -88, 81, 2, -80, -70, -89, -115, -78, -92};
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
    msg.setTimeStamp(0.31645460985);
    msg.setSource(53269U);
    msg.setSourceEntity(163U);
    msg.setDestination(13472U);
    msg.setDestinationEntity(140U);
    const char tmp_msg_0[] = {100, 27, 123, -101, 40, 101, 41, -100, -82, -64, -40, -115, -52, 0, -45, 32, 67, -102, 43, -126, 96, -58, 28, 33, 115, -2, -86, -101, -67, 43, 101, -66, -92, 11, 45, 31, 80, 126, 59, 107, 57, -7, 125, 115, -13, -24, 44, 83, 54, 26, 69, 67, 90, -125, 111, -119, -127, -15, -23, -120, 97, -105, -25, 30, 35, 54, 37, 98, -13, 58, -64, -122, 55, 115, 124, 14, 52, -44, -41, -53, 74, 99, -34, 33, 99, -37, 110, 29, -25, 52, 55, 110, 101, 56, 38, 24, 81, 11, 43, 88, 73, -48, -28, 74, -67, -32, 95, 122, -74, -44, -95, 69, 109, -56, 103, -109, -64, 79, -117, -52, 89, 71, -16, 124, -92, -47, -71, -100, -33, -59, -98, -39, -108, 14, 121, -53, 118, 44, 86, -103, -112, 104, -15, -112, -28, -119, 76, 37, -14, 91, 3, -48, -79, 43, 81, -38, 88, -89, -67, 84, -59, 101, -97, 39, -113, 125, 66, -22, -114, 83, -59, -81, -106, 89, -49, -67, 22, -20, -77, -124, -64, 14, -127, 26, -26, -102, 125, 118, 125, -5, 102, -17, 57, -109, 1, -56, 118, 94, 109, -58, 58, -123, 103, -105, -105, 65, 25, 39, -29, 81, 15, 74, 92, 25, -71, 74, -26, -87};
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
    msg.setTimeStamp(0.0215728308558);
    msg.setSource(13901U);
    msg.setSourceEntity(141U);
    msg.setDestination(3829U);
    msg.setDestinationEntity(114U);
    msg.value = 0.201527653718;

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
    msg.setTimeStamp(0.954274643265);
    msg.setSource(4954U);
    msg.setSourceEntity(102U);
    msg.setDestination(16622U);
    msg.setDestinationEntity(62U);
    msg.value = 0.677115695138;

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
    msg.setTimeStamp(0.261257200054);
    msg.setSource(6370U);
    msg.setSourceEntity(43U);
    msg.setDestination(14776U);
    msg.setDestinationEntity(162U);
    msg.value = 0.339423943711;

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
    msg.setTimeStamp(0.135664974263);
    msg.setSource(20350U);
    msg.setSourceEntity(109U);
    msg.setDestination(37559U);
    msg.setDestinationEntity(46U);
    msg.type = 231U;
    msg.frequency = 3309346696U;
    msg.min_range = 39422U;
    msg.max_range = 9379U;
    msg.bits_per_point = 238U;
    msg.scale_factor = 0.723942936197;
    const char tmp_msg_0[] = {-56, -119, 16, -121, 36, -12, 59, -122, 115, 65, 118, -51, -102, -27, -88, -66, -1, 106, -72, -15, -104, 63, -83, 5, -83, 51, -15, 53, -1, -122, -67, 99, 47, -3, -64, -124, -102, 63, -73, 85, 4, 85, 118, 54, 18, -73, -121, 29, -94, 3, 49, -92, 63, 56, -72, 73, -96, -47, 117, -81, 86, -78, 30, 48, -66, 58, -96, -47, 59, -82, 4, -52, 2, 16, 116, 58, 112, 75, -3, -105, -22, 89, -25, 126, 69, -58, 81, -19, 123, 56, -5, 100, 46, 82, 34, 74, -92, 104, 106, -30, -123, -4, 81, -116, 42, -96, 79, -34};
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
    msg.setTimeStamp(0.908910295216);
    msg.setSource(36136U);
    msg.setSourceEntity(210U);
    msg.setDestination(6305U);
    msg.setDestinationEntity(181U);
    msg.type = 52U;
    msg.frequency = 40447263U;
    msg.min_range = 57024U;
    msg.max_range = 63358U;
    msg.bits_per_point = 90U;
    msg.scale_factor = 0.608993021071;
    const char tmp_msg_0[] = {16, 78, 7, -86, 99, 110, 15, -19, -126, 59, -108, 61, -64, -122, 125, -58, 114, -107, 57, -95, -2, -96, 108, -30, 29, 94, 24, -51, -124, 62, -31, 82, 48, 5, 29, -11, 85, -91};
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
    msg.setTimeStamp(0.771202604528);
    msg.setSource(42418U);
    msg.setSourceEntity(173U);
    msg.setDestination(2635U);
    msg.setDestinationEntity(62U);
    msg.type = 236U;
    msg.frequency = 1081844048U;
    msg.min_range = 23764U;
    msg.max_range = 15022U;
    msg.bits_per_point = 112U;
    msg.scale_factor = 0.222741131693;
    const char tmp_msg_0[] = {-9, -114, -120, 70, 59, 108, -24, -53, -98, 58, 12, 19, 92, -69, 101, 6, 62};
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
    msg.setTimeStamp(0.527908316093);
    msg.setSource(11454U);
    msg.setSourceEntity(182U);
    msg.setDestination(41707U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.568033431481);
    msg.setSource(20071U);
    msg.setSourceEntity(207U);
    msg.setDestination(28258U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.923564975771);
    msg.setSource(56303U);
    msg.setSourceEntity(70U);
    msg.setDestination(26512U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.743445493696);
    msg.setSource(26482U);
    msg.setSourceEntity(93U);
    msg.setDestination(61349U);
    msg.setDestinationEntity(84U);
    msg.op = 218U;

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
    msg.setTimeStamp(0.129873873609);
    msg.setSource(39164U);
    msg.setSourceEntity(171U);
    msg.setDestination(2429U);
    msg.setDestinationEntity(9U);
    msg.op = 139U;

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
    msg.setTimeStamp(0.69651733511);
    msg.setSource(22068U);
    msg.setSourceEntity(146U);
    msg.setDestination(44547U);
    msg.setDestinationEntity(68U);
    msg.op = 13U;

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
    msg.setTimeStamp(0.0123712849742);
    msg.setSource(59358U);
    msg.setSourceEntity(243U);
    msg.setDestination(46682U);
    msg.setDestinationEntity(52U);
    msg.value = 0.300166624512;
    msg.confidence = 0.557264057246;
    msg.opmodes.assign("ZBJLKPDYIELMVNEDJFTPSESVMH");

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
    msg.setTimeStamp(0.999833975314);
    msg.setSource(10664U);
    msg.setSourceEntity(131U);
    msg.setDestination(21166U);
    msg.setDestinationEntity(24U);
    msg.value = 0.784513849827;
    msg.confidence = 0.505868246059;
    msg.opmodes.assign("EQGIBYMYNQLLPJDWLGNKJLMPXZNSNNKRJRCRLQKDBTQWTRKISAJTEGFEMLKSSWQFAVXNYVJHXDDBKUNDVFPEUCZOZOUIOXIJMMIQOEABBFVPAPQMKZUCRYAYXOTZDASYUDITSYDUUKVZFMLCCTVIHQHFLKRHUUYMNBHTWBCQWRVBBOVAEZTWDLCWTGZSWFOAOIHXKHACJFJFPIPINSXYEHFXSPAVRGUEPVEMSGOXGNCX");

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
    msg.setTimeStamp(0.0760530140062);
    msg.setSource(40052U);
    msg.setSourceEntity(200U);
    msg.setDestination(45029U);
    msg.setDestinationEntity(44U);
    msg.value = 0.671928823877;
    msg.confidence = 0.877861340669;
    msg.opmodes.assign("RKAWFZFHKWIFVUYJIHPMWMDAAXMVIXOQSEDTWSSKLNWOWQNBWEITMYWUIGTOZCMORDLOJYCCNUIDXBALGTIVKKPIMRUHKDULGEJYVZRXPLOJOJZLRHXSUQTVYBMGGDANSZKVYVQCFQSEOTCXNAJRCBTJ");

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
    msg.setTimeStamp(0.79156495255);
    msg.setSource(1718U);
    msg.setSourceEntity(238U);
    msg.setDestination(37424U);
    msg.setDestinationEntity(202U);
    msg.itow = 3509099483U;
    msg.lat = 0.754401941219;
    msg.lon = 0.833256821971;
    msg.height_ell = 0.10852758391;
    msg.height_sea = 0.655645916047;
    msg.hacc = 0.412247500565;
    msg.vacc = 0.33792026144;
    msg.vel_n = 0.183027405273;
    msg.vel_e = 0.887594618659;
    msg.vel_d = 0.773542173112;
    msg.speed = 0.802441500154;
    msg.gspeed = 0.467735808236;
    msg.heading = 0.531879200793;
    msg.sacc = 0.594980785738;
    msg.cacc = 0.815562292195;

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
    msg.setTimeStamp(0.190751102747);
    msg.setSource(37783U);
    msg.setSourceEntity(118U);
    msg.setDestination(5760U);
    msg.setDestinationEntity(22U);
    msg.itow = 2451026252U;
    msg.lat = 0.715716234794;
    msg.lon = 0.941774420642;
    msg.height_ell = 0.17159100396;
    msg.height_sea = 0.29074861832;
    msg.hacc = 0.848222866787;
    msg.vacc = 0.550169610224;
    msg.vel_n = 0.0418396772653;
    msg.vel_e = 0.728685994661;
    msg.vel_d = 0.699023017366;
    msg.speed = 0.170274651411;
    msg.gspeed = 0.903092165142;
    msg.heading = 0.832124557043;
    msg.sacc = 0.85183531366;
    msg.cacc = 0.822070617957;

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
    msg.setTimeStamp(0.887260795456);
    msg.setSource(40780U);
    msg.setSourceEntity(179U);
    msg.setDestination(64655U);
    msg.setDestinationEntity(134U);
    msg.itow = 2832280352U;
    msg.lat = 0.531203306298;
    msg.lon = 0.999629118236;
    msg.height_ell = 0.204484681504;
    msg.height_sea = 0.304000997166;
    msg.hacc = 0.408795852525;
    msg.vacc = 0.970826203069;
    msg.vel_n = 0.188615715372;
    msg.vel_e = 0.679025548555;
    msg.vel_d = 0.303450429823;
    msg.speed = 0.753545891898;
    msg.gspeed = 0.584475379187;
    msg.heading = 0.834457974634;
    msg.sacc = 0.336655823539;
    msg.cacc = 0.47865593294;

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
    msg.setTimeStamp(0.0904054095976);
    msg.setSource(51681U);
    msg.setSourceEntity(149U);
    msg.setDestination(27978U);
    msg.setDestinationEntity(82U);
    msg.id = 99U;
    msg.value = 0.826270162834;

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
    msg.setTimeStamp(0.316974609204);
    msg.setSource(8164U);
    msg.setSourceEntity(137U);
    msg.setDestination(2049U);
    msg.setDestinationEntity(251U);
    msg.id = 100U;
    msg.value = 0.386977292126;

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
    msg.setTimeStamp(0.0391116129045);
    msg.setSource(25915U);
    msg.setSourceEntity(64U);
    msg.setDestination(52155U);
    msg.setDestinationEntity(18U);
    msg.id = 242U;
    msg.value = 0.184950684025;

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
    msg.setTimeStamp(0.188484485358);
    msg.setSource(41403U);
    msg.setSourceEntity(155U);
    msg.setDestination(49193U);
    msg.setDestinationEntity(1U);
    msg.x = 0.469624824721;
    msg.y = 0.398881497704;
    msg.z = 0.84054897098;
    msg.phi = 0.993813814112;
    msg.theta = 0.270856909486;
    msg.psi = 0.247987635538;

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
    msg.setTimeStamp(0.51169481642);
    msg.setSource(58389U);
    msg.setSourceEntity(187U);
    msg.setDestination(15744U);
    msg.setDestinationEntity(216U);
    msg.x = 0.202342325784;
    msg.y = 0.527389628145;
    msg.z = 0.230022163949;
    msg.phi = 0.955148773388;
    msg.theta = 0.993902632871;
    msg.psi = 0.702893815396;

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
    msg.setTimeStamp(0.114547200234);
    msg.setSource(31179U);
    msg.setSourceEntity(153U);
    msg.setDestination(30296U);
    msg.setDestinationEntity(220U);
    msg.x = 0.152354748434;
    msg.y = 0.756971854938;
    msg.z = 0.286201015307;
    msg.phi = 0.883710219545;
    msg.theta = 0.95080614005;
    msg.psi = 0.142123555536;

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
    msg.setTimeStamp(0.990287542422);
    msg.setSource(26684U);
    msg.setSourceEntity(240U);
    msg.setDestination(34769U);
    msg.setDestinationEntity(211U);
    msg.beam_width = 0.864421302987;
    msg.beam_height = 0.854827848123;

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
    msg.setTimeStamp(0.765560597688);
    msg.setSource(2648U);
    msg.setSourceEntity(194U);
    msg.setDestination(14848U);
    msg.setDestinationEntity(110U);
    msg.beam_width = 0.309153512436;
    msg.beam_height = 0.887530021307;

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
    msg.setTimeStamp(0.00701007194547);
    msg.setSource(20034U);
    msg.setSourceEntity(5U);
    msg.setDestination(42433U);
    msg.setDestinationEntity(245U);
    msg.beam_width = 0.0324311272588;
    msg.beam_height = 0.681074255557;

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
    msg.setTimeStamp(0.01031122492);
    msg.setSource(39370U);
    msg.setSourceEntity(32U);
    msg.setDestination(51540U);
    msg.setDestinationEntity(202U);
    msg.sane = 140U;

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
    msg.setTimeStamp(0.586589703292);
    msg.setSource(39268U);
    msg.setSourceEntity(170U);
    msg.setDestination(44686U);
    msg.setDestinationEntity(72U);
    msg.sane = 231U;

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
    msg.setTimeStamp(0.614472973034);
    msg.setSource(28778U);
    msg.setSourceEntity(63U);
    msg.setDestination(55460U);
    msg.setDestinationEntity(226U);
    msg.sane = 168U;

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
    msg.setTimeStamp(0.311161156457);
    msg.setSource(26178U);
    msg.setSourceEntity(171U);
    msg.setDestination(12162U);
    msg.setDestinationEntity(92U);
    msg.value = 0.857839170574;

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
    msg.setTimeStamp(0.882862693078);
    msg.setSource(20728U);
    msg.setSourceEntity(154U);
    msg.setDestination(60178U);
    msg.setDestinationEntity(122U);
    msg.value = 0.458905931398;

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
    msg.setTimeStamp(0.14198112426);
    msg.setSource(18156U);
    msg.setSourceEntity(134U);
    msg.setDestination(1482U);
    msg.setDestinationEntity(24U);
    msg.value = 0.0324830338259;

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
    msg.setTimeStamp(0.447229196525);
    msg.setSource(47444U);
    msg.setSourceEntity(113U);
    msg.setDestination(13558U);
    msg.setDestinationEntity(156U);
    msg.value = 0.559268387044;

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
    msg.setTimeStamp(0.870302079473);
    msg.setSource(64584U);
    msg.setSourceEntity(109U);
    msg.setDestination(57793U);
    msg.setDestinationEntity(91U);
    msg.value = 0.52642208536;

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
    msg.setTimeStamp(0.683564227115);
    msg.setSource(59547U);
    msg.setSourceEntity(45U);
    msg.setDestination(33734U);
    msg.setDestinationEntity(143U);
    msg.value = 0.945744090163;

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
    msg.setTimeStamp(0.72241847493);
    msg.setSource(64165U);
    msg.setSourceEntity(24U);
    msg.setDestination(31580U);
    msg.setDestinationEntity(254U);
    msg.value = 0.199811020148;

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
    msg.setTimeStamp(0.887442972013);
    msg.setSource(56333U);
    msg.setSourceEntity(30U);
    msg.setDestination(32805U);
    msg.setDestinationEntity(186U);
    msg.value = 0.750160861976;

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
    msg.setTimeStamp(0.46521590744);
    msg.setSource(45155U);
    msg.setSourceEntity(154U);
    msg.setDestination(34149U);
    msg.setDestinationEntity(250U);
    msg.value = 0.972257257813;

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
    msg.setTimeStamp(0.43663397024);
    msg.setSource(52070U);
    msg.setSourceEntity(135U);
    msg.setDestination(41008U);
    msg.setDestinationEntity(35U);
    msg.value = 0.22564673495;

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
    msg.setTimeStamp(0.102305549355);
    msg.setSource(30178U);
    msg.setSourceEntity(187U);
    msg.setDestination(5876U);
    msg.setDestinationEntity(196U);
    msg.value = 0.270665873526;

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
    msg.setTimeStamp(0.148686231243);
    msg.setSource(26492U);
    msg.setSourceEntity(111U);
    msg.setDestination(61726U);
    msg.setDestinationEntity(203U);
    msg.value = 0.424379019899;

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
    msg.setTimeStamp(0.285226215651);
    msg.setSource(52108U);
    msg.setSourceEntity(247U);
    msg.setDestination(38877U);
    msg.setDestinationEntity(35U);
    msg.value = 0.64262580232;

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
    msg.setTimeStamp(0.331552491414);
    msg.setSource(15791U);
    msg.setSourceEntity(213U);
    msg.setDestination(24192U);
    msg.setDestinationEntity(230U);
    msg.value = 0.277372181119;

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
    msg.setTimeStamp(0.527989356082);
    msg.setSource(25975U);
    msg.setSourceEntity(44U);
    msg.setDestination(53268U);
    msg.setDestinationEntity(207U);
    msg.value = 0.0241265915417;

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
    msg.setTimeStamp(0.0581938289269);
    msg.setSource(13620U);
    msg.setSourceEntity(207U);
    msg.setDestination(5736U);
    msg.setDestinationEntity(69U);
    msg.value = 0.639464885037;

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
    msg.setTimeStamp(0.114333144675);
    msg.setSource(4580U);
    msg.setSourceEntity(236U);
    msg.setDestination(31705U);
    msg.setDestinationEntity(79U);
    msg.value = 0.163587710251;

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
    msg.setTimeStamp(0.0504172937173);
    msg.setSource(55381U);
    msg.setSourceEntity(11U);
    msg.setDestination(48923U);
    msg.setDestinationEntity(210U);
    msg.value = 0.674844650619;

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
    msg.setTimeStamp(0.463387602321);
    msg.setSource(26072U);
    msg.setSourceEntity(137U);
    msg.setDestination(45886U);
    msg.setDestinationEntity(138U);
    msg.value = 0.600249533456;

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
    msg.setTimeStamp(0.314491899279);
    msg.setSource(62707U);
    msg.setSourceEntity(92U);
    msg.setDestination(18600U);
    msg.setDestinationEntity(135U);
    msg.value = 0.787933860022;

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
    msg.setTimeStamp(0.0454892740934);
    msg.setSource(24567U);
    msg.setSourceEntity(36U);
    msg.setDestination(27668U);
    msg.setDestinationEntity(77U);
    msg.value = 0.244072434802;

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
    msg.setTimeStamp(0.803388757852);
    msg.setSource(6507U);
    msg.setSourceEntity(244U);
    msg.setDestination(45078U);
    msg.setDestinationEntity(136U);
    msg.value = 0.0827382687525;

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
    msg.setTimeStamp(0.939841005595);
    msg.setSource(25712U);
    msg.setSourceEntity(192U);
    msg.setDestination(38355U);
    msg.setDestinationEntity(250U);
    msg.value = 0.930655693408;

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
    msg.setTimeStamp(0.543597512501);
    msg.setSource(36884U);
    msg.setSourceEntity(244U);
    msg.setDestination(59264U);
    msg.setDestinationEntity(55U);
    msg.value = 0.263920722749;

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
    msg.setTimeStamp(0.0818248228303);
    msg.setSource(36100U);
    msg.setSourceEntity(223U);
    msg.setDestination(12863U);
    msg.setDestinationEntity(134U);
    msg.validity = 44528U;
    msg.type = 50U;
    msg.tow = 2211236746U;
    msg.base_lat = 0.989769548487;
    msg.base_lon = 0.563204785008;
    msg.base_height = 0.431700905439;
    msg.n = 0.637639053227;
    msg.e = 0.386792955759;
    msg.d = 0.178996419248;
    msg.v_n = 0.248886700547;
    msg.v_e = 0.671834164778;
    msg.v_d = 0.33543291059;
    msg.satellites = 220U;
    msg.iar_hyp = 22135U;
    msg.iar_ratio = 0.332910983277;

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
    msg.setTimeStamp(0.556833196052);
    msg.setSource(57476U);
    msg.setSourceEntity(168U);
    msg.setDestination(11078U);
    msg.setDestinationEntity(220U);
    msg.validity = 14666U;
    msg.type = 233U;
    msg.tow = 3990100392U;
    msg.base_lat = 0.0824965801667;
    msg.base_lon = 0.295484566376;
    msg.base_height = 0.792163879403;
    msg.n = 0.368162181448;
    msg.e = 0.309636517179;
    msg.d = 0.405355220074;
    msg.v_n = 0.981955830107;
    msg.v_e = 0.651851512616;
    msg.v_d = 0.423885332318;
    msg.satellites = 250U;
    msg.iar_hyp = 47769U;
    msg.iar_ratio = 0.930909316986;

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
    msg.setTimeStamp(0.561604827984);
    msg.setSource(5625U);
    msg.setSourceEntity(151U);
    msg.setDestination(32985U);
    msg.setDestinationEntity(39U);
    msg.validity = 6541U;
    msg.type = 232U;
    msg.tow = 3886107820U;
    msg.base_lat = 0.296958538644;
    msg.base_lon = 0.719419970796;
    msg.base_height = 0.272493359376;
    msg.n = 0.866240765741;
    msg.e = 0.874351818416;
    msg.d = 0.0833004720975;
    msg.v_n = 0.524925524164;
    msg.v_e = 0.728142647863;
    msg.v_d = 0.344169113934;
    msg.satellites = 85U;
    msg.iar_hyp = 1499U;
    msg.iar_ratio = 0.680501760386;

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
    msg.setTimeStamp(0.847971648942);
    msg.setSource(38056U);
    msg.setSourceEntity(36U);
    msg.setDestination(7532U);
    msg.setDestinationEntity(174U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.255417322433;
    tmp_msg_0.lon = 0.422332704067;
    tmp_msg_0.height = 0.60150675279;
    tmp_msg_0.x = 0.451525241734;
    tmp_msg_0.y = 0.455730706672;
    tmp_msg_0.z = 0.413771317823;
    tmp_msg_0.phi = 0.729939317983;
    tmp_msg_0.theta = 0.111506416885;
    tmp_msg_0.psi = 0.52943602959;
    tmp_msg_0.u = 0.285953310972;
    tmp_msg_0.v = 0.53427303058;
    tmp_msg_0.w = 0.608130797709;
    tmp_msg_0.vx = 0.962078163577;
    tmp_msg_0.vy = 0.785248558003;
    tmp_msg_0.vz = 0.8802284975;
    tmp_msg_0.p = 0.148867001304;
    tmp_msg_0.q = 0.836121315726;
    tmp_msg_0.r = 0.773546101466;
    tmp_msg_0.depth = 0.59962202398;
    tmp_msg_0.alt = 0.355474061797;
    msg.state.set(tmp_msg_0);
    msg.type = 86U;

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
    msg.setTimeStamp(0.446973944205);
    msg.setSource(10528U);
    msg.setSourceEntity(58U);
    msg.setDestination(53346U);
    msg.setDestinationEntity(130U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.926955760474;
    tmp_msg_0.lon = 0.800499459167;
    tmp_msg_0.height = 0.53470304714;
    tmp_msg_0.x = 0.789427674512;
    tmp_msg_0.y = 0.142937924805;
    tmp_msg_0.z = 0.941827826212;
    tmp_msg_0.phi = 0.568924344043;
    tmp_msg_0.theta = 0.0733087220716;
    tmp_msg_0.psi = 0.742396247136;
    tmp_msg_0.u = 0.0393305720477;
    tmp_msg_0.v = 0.0347109824299;
    tmp_msg_0.w = 0.739794433465;
    tmp_msg_0.vx = 0.714648002484;
    tmp_msg_0.vy = 0.516441836661;
    tmp_msg_0.vz = 0.330370660354;
    tmp_msg_0.p = 0.735761373766;
    tmp_msg_0.q = 0.357935177343;
    tmp_msg_0.r = 0.48754201847;
    tmp_msg_0.depth = 0.753092751217;
    tmp_msg_0.alt = 0.41164077457;
    msg.state.set(tmp_msg_0);
    msg.type = 161U;

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
    msg.setTimeStamp(0.0554058402628);
    msg.setSource(19431U);
    msg.setSourceEntity(200U);
    msg.setDestination(33974U);
    msg.setDestinationEntity(61U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0473423693679;
    tmp_msg_0.lon = 0.282381528577;
    tmp_msg_0.height = 0.885320673668;
    tmp_msg_0.x = 0.942816491925;
    tmp_msg_0.y = 0.663899161199;
    tmp_msg_0.z = 0.804013023083;
    tmp_msg_0.phi = 0.099465484291;
    tmp_msg_0.theta = 0.504214297206;
    tmp_msg_0.psi = 0.388436512408;
    tmp_msg_0.u = 0.958210880526;
    tmp_msg_0.v = 0.782424477975;
    tmp_msg_0.w = 0.33799002652;
    tmp_msg_0.vx = 0.856975233147;
    tmp_msg_0.vy = 0.11099240576;
    tmp_msg_0.vz = 0.779793155873;
    tmp_msg_0.p = 0.353401108188;
    tmp_msg_0.q = 0.121331173382;
    tmp_msg_0.r = 0.154452688354;
    tmp_msg_0.depth = 0.571619651376;
    tmp_msg_0.alt = 0.665841804377;
    msg.state.set(tmp_msg_0);
    msg.type = 165U;

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
    msg.setTimeStamp(0.941146259212);
    msg.setSource(24357U);
    msg.setSourceEntity(125U);
    msg.setDestination(9388U);
    msg.setDestinationEntity(227U);
    msg.value = 0.0755405256428;

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
    msg.setTimeStamp(0.0712676517098);
    msg.setSource(27711U);
    msg.setSourceEntity(216U);
    msg.setDestination(20887U);
    msg.setDestinationEntity(218U);
    msg.value = 0.546920052119;

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
    msg.setTimeStamp(0.0881280412758);
    msg.setSource(32864U);
    msg.setSourceEntity(98U);
    msg.setDestination(41496U);
    msg.setDestinationEntity(68U);
    msg.value = 0.0151129260788;

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
    msg.setTimeStamp(0.377113202397);
    msg.setSource(39186U);
    msg.setSourceEntity(118U);
    msg.setDestination(46984U);
    msg.setDestinationEntity(133U);
    msg.value = 0.321610050764;

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
    msg.setTimeStamp(0.645554776619);
    msg.setSource(59201U);
    msg.setSourceEntity(236U);
    msg.setDestination(48101U);
    msg.setDestinationEntity(52U);
    msg.value = 0.974503065946;

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
    msg.setTimeStamp(0.312867799086);
    msg.setSource(30615U);
    msg.setSourceEntity(251U);
    msg.setDestination(46062U);
    msg.setDestinationEntity(116U);
    msg.value = 0.534446575457;

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
    msg.setTimeStamp(0.707718980264);
    msg.setSource(2547U);
    msg.setSourceEntity(244U);
    msg.setDestination(31328U);
    msg.setDestinationEntity(161U);
    msg.value = 0.562268906861;

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
    msg.setTimeStamp(0.876184246037);
    msg.setSource(5625U);
    msg.setSourceEntity(1U);
    msg.setDestination(55657U);
    msg.setDestinationEntity(173U);
    msg.value = 0.883779818186;

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
    msg.setTimeStamp(0.299287087724);
    msg.setSource(31096U);
    msg.setSourceEntity(196U);
    msg.setDestination(50873U);
    msg.setDestinationEntity(4U);
    msg.value = 0.674103366186;

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
    msg.setTimeStamp(0.599513783271);
    msg.setSource(61765U);
    msg.setSourceEntity(173U);
    msg.setDestination(35906U);
    msg.setDestinationEntity(248U);
    msg.value = 0.203280163104;

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
    msg.setTimeStamp(0.168752689819);
    msg.setSource(47806U);
    msg.setSourceEntity(61U);
    msg.setDestination(62458U);
    msg.setDestinationEntity(169U);
    msg.value = 0.501276936594;

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
    msg.setTimeStamp(0.264759732465);
    msg.setSource(47621U);
    msg.setSourceEntity(67U);
    msg.setDestination(42928U);
    msg.setDestinationEntity(93U);
    msg.value = 0.51155231625;

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
    msg.setTimeStamp(0.877678504815);
    msg.setSource(4257U);
    msg.setSourceEntity(10U);
    msg.setDestination(15037U);
    msg.setDestinationEntity(208U);
    msg.value = 0.614523517233;

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
    msg.setTimeStamp(0.617542119902);
    msg.setSource(60358U);
    msg.setSourceEntity(7U);
    msg.setDestination(44197U);
    msg.setDestinationEntity(57U);
    msg.value = 0.924188667172;

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
    msg.setTimeStamp(0.557727557314);
    msg.setSource(24402U);
    msg.setSourceEntity(137U);
    msg.setDestination(49998U);
    msg.setDestinationEntity(24U);
    msg.value = 0.751750024429;

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
    msg.setTimeStamp(0.194210777743);
    msg.setSource(16885U);
    msg.setSourceEntity(99U);
    msg.setDestination(59024U);
    msg.setDestinationEntity(79U);
    msg.id = 84U;
    msg.zoom = 178U;
    msg.action = 214U;

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
    msg.setTimeStamp(0.0321751233494);
    msg.setSource(59601U);
    msg.setSourceEntity(247U);
    msg.setDestination(22304U);
    msg.setDestinationEntity(236U);
    msg.id = 55U;
    msg.zoom = 140U;
    msg.action = 9U;

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
    msg.setTimeStamp(0.851142187423);
    msg.setSource(41169U);
    msg.setSourceEntity(52U);
    msg.setDestination(33931U);
    msg.setDestinationEntity(152U);
    msg.id = 239U;
    msg.zoom = 14U;
    msg.action = 217U;

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
    msg.setTimeStamp(0.99818062531);
    msg.setSource(15632U);
    msg.setSourceEntity(190U);
    msg.setDestination(42268U);
    msg.setDestinationEntity(8U);
    msg.id = 92U;
    msg.value = 0.13004885371;

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
    msg.setTimeStamp(0.819981128464);
    msg.setSource(3149U);
    msg.setSourceEntity(164U);
    msg.setDestination(45596U);
    msg.setDestinationEntity(197U);
    msg.id = 239U;
    msg.value = 0.228001404466;

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
    msg.setTimeStamp(0.434423930225);
    msg.setSource(56690U);
    msg.setSourceEntity(83U);
    msg.setDestination(49677U);
    msg.setDestinationEntity(43U);
    msg.id = 88U;
    msg.value = 0.389396017277;

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
    msg.setTimeStamp(0.805596257795);
    msg.setSource(57U);
    msg.setSourceEntity(223U);
    msg.setDestination(23775U);
    msg.setDestinationEntity(197U);
    msg.id = 110U;
    msg.value = 0.551686976873;

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
    msg.setTimeStamp(0.45569375867);
    msg.setSource(61108U);
    msg.setSourceEntity(167U);
    msg.setDestination(30053U);
    msg.setDestinationEntity(186U);
    msg.id = 89U;
    msg.value = 0.894778233112;

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
    msg.setTimeStamp(0.545703693625);
    msg.setSource(15597U);
    msg.setSourceEntity(248U);
    msg.setDestination(14681U);
    msg.setDestinationEntity(130U);
    msg.id = 211U;
    msg.value = 0.507626250282;

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
    msg.setTimeStamp(0.808477394648);
    msg.setSource(59611U);
    msg.setSourceEntity(1U);
    msg.setDestination(5359U);
    msg.setDestinationEntity(74U);
    msg.id = 76U;
    msg.angle = 0.719437282596;

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
    msg.setTimeStamp(0.143568877851);
    msg.setSource(11647U);
    msg.setSourceEntity(174U);
    msg.setDestination(65500U);
    msg.setDestinationEntity(145U);
    msg.id = 185U;
    msg.angle = 0.983871462769;

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
    msg.setTimeStamp(0.871634129218);
    msg.setSource(8533U);
    msg.setSourceEntity(90U);
    msg.setDestination(800U);
    msg.setDestinationEntity(183U);
    msg.id = 94U;
    msg.angle = 0.84304458793;

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
    msg.setTimeStamp(0.273615706321);
    msg.setSource(50835U);
    msg.setSourceEntity(66U);
    msg.setDestination(9994U);
    msg.setDestinationEntity(178U);
    msg.op = 42U;
    msg.actions.assign("GVJNPKBQMWOBHZVWX");

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
    msg.setTimeStamp(0.608389479564);
    msg.setSource(12545U);
    msg.setSourceEntity(51U);
    msg.setDestination(6035U);
    msg.setDestinationEntity(28U);
    msg.op = 235U;
    msg.actions.assign("QHYDPOGIXZGLIICOVTKFTHDVWUNDVXINCSBIFCRLEOBKGERSVSPJOTYMWTPNJQQXEXCYSFTOQIDOOMDMBLGAJGRBBMVVXHUHBWRLYUDKQUIKAZEDKZGWSJLVTJQSMZAYYKRFLJPRHWCDXQOYZMLOCKEZMUFSRWYNCJNULWHTHKASGBIUPIQAEXWJLNRWQSQRGAFNHNAEDPFXBUDWNPKFUBHEPTSTTFYJXOFREAVCYM");

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
    msg.setTimeStamp(0.595060334156);
    msg.setSource(56527U);
    msg.setSourceEntity(207U);
    msg.setDestination(32300U);
    msg.setDestinationEntity(195U);
    msg.op = 236U;
    msg.actions.assign("SBTHYOKCJLABCZIBYFXYJUEKSUAEDFTGWKUFRWMWJDGQAIUY");

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
    msg.setTimeStamp(0.569007853663);
    msg.setSource(1729U);
    msg.setSourceEntity(239U);
    msg.setDestination(1149U);
    msg.setDestinationEntity(174U);
    msg.actions.assign("TQDYMSINJFZIZOEPHSOXPVGKVTBQMMGBEAIJKZMHLWEUSLQXWPBFCQIWFDNONGNLRLXYWHQNREZGHBBECHHRSVIUGMSWPLKRKGYZDQEVXTBKNOTYFORKFVKSHXZZLOSATGJBMWVLTPQPCUCA");

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
    msg.setTimeStamp(0.482112324441);
    msg.setSource(57182U);
    msg.setSourceEntity(0U);
    msg.setDestination(64426U);
    msg.setDestinationEntity(127U);
    msg.actions.assign("THTFHDGBQDSAWTRMZLWZQQRAQWPIYSVXUINSVUSLLDFAEYJJOYJJPBBKOVRUBXIJKCJCXMFGZTEYWSAHSZEIBUICYFVHQDXFZNOKJRTOHLRPVRE");

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
    msg.setTimeStamp(0.757074344721);
    msg.setSource(55485U);
    msg.setSourceEntity(118U);
    msg.setDestination(57756U);
    msg.setDestinationEntity(172U);
    msg.actions.assign("ULBJCDAYMCGIFDBHGHPQDIJLWQELXIZPMBFVPSTJOURIQOZYBECECAIQWKOUAKVXNJEQCFEVIRLSFPHZPVCJZSUMZXROBHKVZDOTCQDWSGNFQMNNRWAIVYKQRMANIXGLLLYKTDFKQNBTYKOTXSTAJFSOKGJUPGDERMD");

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
    msg.setTimeStamp(0.513203658489);
    msg.setSource(15091U);
    msg.setSourceEntity(227U);
    msg.setDestination(53697U);
    msg.setDestinationEntity(236U);
    msg.button = 221U;
    msg.value = 99U;

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
    msg.setTimeStamp(0.441670407517);
    msg.setSource(50358U);
    msg.setSourceEntity(62U);
    msg.setDestination(40648U);
    msg.setDestinationEntity(231U);
    msg.button = 220U;
    msg.value = 207U;

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
    msg.setTimeStamp(0.328294925532);
    msg.setSource(29432U);
    msg.setSourceEntity(197U);
    msg.setDestination(46886U);
    msg.setDestinationEntity(1U);
    msg.button = 243U;
    msg.value = 72U;

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
    msg.setTimeStamp(0.149357135017);
    msg.setSource(44020U);
    msg.setSourceEntity(142U);
    msg.setDestination(47371U);
    msg.setDestinationEntity(199U);
    msg.op = 158U;
    msg.text.assign("AGQVXEQEXHYFIBYPMMFMZNFIXDRVBPWGFOKWTHBJZPDTHUSYQBTBTBHJCIMRHVSMIDLOWKMELARMSJQIRFJFBURSOCGXDCZANJDJNFUDPRKOAJENEKFGHGLINWNUBYAHXRTKJLQWTOEESGBZ");

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
    msg.setTimeStamp(0.468460529605);
    msg.setSource(61383U);
    msg.setSourceEntity(153U);
    msg.setDestination(9816U);
    msg.setDestinationEntity(54U);
    msg.op = 142U;
    msg.text.assign("OWAJHAXYTMLZHWAIGZPNBXKFLMOOZTPZAAUTCNPWWJRV");

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
    msg.setTimeStamp(0.569695766404);
    msg.setSource(15253U);
    msg.setSourceEntity(27U);
    msg.setDestination(15087U);
    msg.setDestinationEntity(58U);
    msg.op = 88U;
    msg.text.assign("JCLOLKKCBRD");

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
    msg.setTimeStamp(0.520278641182);
    msg.setSource(16240U);
    msg.setSourceEntity(178U);
    msg.setDestination(53152U);
    msg.setDestinationEntity(99U);
    msg.op = 74U;
    msg.time_remain = 0.739168675192;
    msg.sched_time = 0.194916150438;

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
    msg.setTimeStamp(0.380834313535);
    msg.setSource(13519U);
    msg.setSourceEntity(102U);
    msg.setDestination(14226U);
    msg.setDestinationEntity(177U);
    msg.op = 250U;
    msg.time_remain = 0.544645068714;
    msg.sched_time = 0.25360572659;

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
    msg.setTimeStamp(0.871910362231);
    msg.setSource(23002U);
    msg.setSourceEntity(83U);
    msg.setDestination(26470U);
    msg.setDestinationEntity(231U);
    msg.op = 129U;
    msg.time_remain = 0.930502777489;
    msg.sched_time = 0.115401593664;

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
    msg.setTimeStamp(0.281022306235);
    msg.setSource(59426U);
    msg.setSourceEntity(135U);
    msg.setDestination(21549U);
    msg.setDestinationEntity(21U);
    msg.name.assign("IWVLTCFVBSNDEZNDQRQQBPAXDUGZZMICBCCKJVYUANEBUHDYRIGQTSJGEVCRZIGMPNHTZEGJNOKIBAZSWVWIYFHVQAFLDGPNRLMYPLSRKXJMMSXHFCAWIREVYBVPPQLTJOUJJWBTBXRBWROVNLHGZSLONJKFONWTMPHEXFYKFUYTQXRAWZYCYATTRIZXSWMSAHGXBCHCODYDNUPEQDSIUJHGFOUAOOPQMHOAM");
    msg.op = 182U;
    msg.sched_time = 0.296840068591;

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
    msg.setTimeStamp(0.490340863239);
    msg.setSource(29705U);
    msg.setSourceEntity(57U);
    msg.setDestination(37427U);
    msg.setDestinationEntity(66U);
    msg.name.assign("KRCKNJJUEEWZBCGMNXWXAPQESZVMPGKFJEQBALOJDRIMSNZMIWFWSGRWXXYKBFVULORMFJTRNSTLJUKTPQYLSGEWYFALHZNSZHSDTIVFLRRGVQGJZPUHGDLWTUIEIBTUCAHFIDIWHCXRWSDVTTOPYUXJZMMBOQCJCBTCAYAQBMNOOAXACCUIQNZWSLZVBQASNZDVMVYPEPQUCDYHHKOAYKOFKVHHPRUXXPIBODQGFXOFPTNKBMNEELRYHV");
    msg.op = 156U;
    msg.sched_time = 0.291589215408;

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
    msg.setTimeStamp(0.725992844952);
    msg.setSource(63753U);
    msg.setSourceEntity(71U);
    msg.setDestination(9196U);
    msg.setDestinationEntity(11U);
    msg.name.assign("ZQXNEHXVKRPRPCEFTKORXLAWJTBDKDUFTSKQVS");
    msg.op = 84U;
    msg.sched_time = 0.61661145048;

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
    msg.setTimeStamp(0.57792747231);
    msg.setSource(54204U);
    msg.setSourceEntity(190U);
    msg.setDestination(40788U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.869089512509);
    msg.setSource(43205U);
    msg.setSourceEntity(62U);
    msg.setDestination(481U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.344027595153);
    msg.setSource(3203U);
    msg.setSourceEntity(119U);
    msg.setDestination(61007U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.498746596867);
    msg.setSource(56631U);
    msg.setSourceEntity(235U);
    msg.setDestination(64911U);
    msg.setDestinationEntity(29U);
    msg.name.assign("VVUDJDQAPGYNYNFGYYWRUSJKEYVNJKBNSOSKQMECHRQIBDIXIYAWUGBQLLJLBBZVMZWHCXVJAIQNTLOKCPPYMFTCSDYAPLROQEFMORQRCPHFFSLGXPMGXOOORMATDOSVNEKHUBDUGJDXCJUILTO");
    msg.state = 9U;

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
    msg.setTimeStamp(0.757401755968);
    msg.setSource(44155U);
    msg.setSourceEntity(47U);
    msg.setDestination(58419U);
    msg.setDestinationEntity(151U);
    msg.name.assign("ZHNTHWSSWKZQFMJDPHJNXWWCDZCOZWUIINLQMXRCVDAMXYLJRSVPHPSUXMOFVEBK");
    msg.state = 168U;

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
    msg.setTimeStamp(0.980810291406);
    msg.setSource(16008U);
    msg.setSourceEntity(24U);
    msg.setDestination(50092U);
    msg.setDestinationEntity(211U);
    msg.name.assign("AQAWETIRJGCWTOHDFCOJLGMJVRIQUAYSSJPZKGBHLMNOUQGGRJBXXITNAOFXWBYKACCUCSZLZFJDJRISMMYKAOTEEONETCNIZCMRU");
    msg.state = 125U;

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
    msg.setTimeStamp(0.334722992287);
    msg.setSource(37508U);
    msg.setSourceEntity(147U);
    msg.setDestination(22516U);
    msg.setDestinationEntity(199U);
    msg.name.assign("IBRHFIWKJVCIOZDLQPHAQAQNQUGXOAAALTPJGGPUNTLXGWZPEKKGRVLQROTFCFBEHDHPZHFTHEIQZMQVTCMKOHJBYAIQTMLIWBVGWCDRGYWRBFSCPSYWUXYDLEFOQZXHSPSMOWTXIZANLNFCPPGLNKSEZUZARMGBOAZUFDWNYBVVWKHNCVISYAICMQYSCKKUBKYJNYUCOOSF");
    msg.value = 227U;

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
    msg.setTimeStamp(0.249399932935);
    msg.setSource(33882U);
    msg.setSourceEntity(199U);
    msg.setDestination(33169U);
    msg.setDestinationEntity(127U);
    msg.name.assign("AOOXRDTIWWRHACNXJKQTZBYPLXHYWYBXIXJDMRRRZOLPMGLKMYYEBNNTVGNSLDVWBLBUSJYZMRFHFIDAGKCJUZXXTLPICGQEVYKVNQOXTEUWVQOOFWCJIZTQVORSVLQEAHCEHRNEAKBC");
    msg.value = 217U;

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
    msg.setTimeStamp(0.92424226806);
    msg.setSource(24273U);
    msg.setSourceEntity(86U);
    msg.setDestination(14999U);
    msg.setDestinationEntity(117U);
    msg.name.assign("RXERMFZMRHMSRSEXYMOIGHXLNZAFJWUDBKJIHRJGYNTVVWNJBEWMVAXHSCWRCSKENXUGQQCFYTBCPGUZDUDPFTFJGULPEMCKRTPDFPTLMPLNXVRZUIBIJDEAAHIDLKMGGCTDHXWEUVJOGUVSCVEAOTCRCBIJYN");
    msg.value = 218U;

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
    msg.setTimeStamp(0.123453611368);
    msg.setSource(12878U);
    msg.setSourceEntity(59U);
    msg.setDestination(21118U);
    msg.setDestinationEntity(183U);
    msg.name.assign("ACNTKZNHPMYLRNQNCLYHAFOKAOEZCMBSPPFWPNXTHVPXLMLSLRKIAIFDKBQLXQFAIZKDQMAGTEQQGMOPYDSHOORQAJYFSFRJTTDORSHWZBUYDDC");

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
    msg.setTimeStamp(0.542868571596);
    msg.setSource(60359U);
    msg.setSourceEntity(251U);
    msg.setDestination(26009U);
    msg.setDestinationEntity(230U);
    msg.name.assign("OZPIDUHRBPAWOOLJCTUCMJUFFRXVFVVLOIBYELGKGVB");

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
    msg.setTimeStamp(0.724962434913);
    msg.setSource(39460U);
    msg.setSourceEntity(101U);
    msg.setDestination(8520U);
    msg.setDestinationEntity(103U);
    msg.name.assign("KTMOUFJPWHGKQRPOOGFVTCQDJYZWDSCDI");

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
    msg.setTimeStamp(0.200768739026);
    msg.setSource(36308U);
    msg.setSourceEntity(187U);
    msg.setDestination(17657U);
    msg.setDestinationEntity(77U);
    msg.name.assign("YUSXULNOJYBHTQVHXOGBXMRGPYGKUVUELCYRNIGVSVRPLSIZLTSDTJWCMAORRICCWZFPEMKDHFFAQZMQLWBIJNMKNEOQPWUWMWVBQNFHPSAFFCPKVKNDLIUDETBNPIYEAAJVQOIQSTLJLKXUQGKYOEUKBKSWV");
    msg.value = 194U;

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
    msg.setTimeStamp(0.0885122794275);
    msg.setSource(47274U);
    msg.setSourceEntity(90U);
    msg.setDestination(111U);
    msg.setDestinationEntity(133U);
    msg.name.assign("KSLTBEBUSYVUUGAEPMHQDLHENFVCEHNBZIQCBLXIBHNBICCJEGGSAXGIIQVRGFXSOXWHMHFMOKQZZJXOEWQEJMEZRMYSQRPJACSXLKNUMANWUOTCAZARXDLFYKIFDYDVXRJRVDWLFKVQMYZCWVVPTUALNWTQYJTU");
    msg.value = 147U;

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
    msg.setTimeStamp(0.341089442833);
    msg.setSource(55982U);
    msg.setSourceEntity(66U);
    msg.setDestination(40689U);
    msg.setDestinationEntity(127U);
    msg.name.assign("YKRHQQHOAUJFLEMWTKLPLTHARXXNHWVVEKGIWOXTOPXDHBZFYZKSGPGFBINPNDNDZYFJSKGZQSQBPUMOQTZGIJUHHVOZUYJCVFZTRUNXKOUABJYFCWEYDSPXVYEHQSGTVOIBSXXAKLWLNRBCMFVHUPQWBCUBPEZSMJLGTTRSMNBKCAINUCYAONRYJKJMDT");
    msg.value = 248U;

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
    msg.setTimeStamp(0.307963521417);
    msg.setSource(52249U);
    msg.setSourceEntity(221U);
    msg.setDestination(35157U);
    msg.setDestinationEntity(74U);
    msg.id = 201U;
    msg.period = 3000412936U;
    msg.duty_cycle = 2909530341U;

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
    msg.setTimeStamp(0.111987209826);
    msg.setSource(64280U);
    msg.setSourceEntity(67U);
    msg.setDestination(23064U);
    msg.setDestinationEntity(59U);
    msg.id = 205U;
    msg.period = 1235297264U;
    msg.duty_cycle = 2294847140U;

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
    msg.setTimeStamp(0.517351906899);
    msg.setSource(6684U);
    msg.setSourceEntity(149U);
    msg.setDestination(42406U);
    msg.setDestinationEntity(198U);
    msg.id = 77U;
    msg.period = 144796834U;
    msg.duty_cycle = 1396038395U;

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
    msg.setTimeStamp(0.654493937611);
    msg.setSource(34042U);
    msg.setSourceEntity(66U);
    msg.setDestination(49587U);
    msg.setDestinationEntity(85U);
    msg.id = 224U;
    msg.period = 2516307916U;
    msg.duty_cycle = 1871589590U;

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
    msg.setTimeStamp(0.273395579128);
    msg.setSource(23278U);
    msg.setSourceEntity(172U);
    msg.setDestination(55916U);
    msg.setDestinationEntity(133U);
    msg.id = 40U;
    msg.period = 3202662946U;
    msg.duty_cycle = 4126001719U;

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
    msg.setTimeStamp(0.956227404493);
    msg.setSource(19938U);
    msg.setSourceEntity(179U);
    msg.setDestination(63538U);
    msg.setDestinationEntity(137U);
    msg.id = 53U;
    msg.period = 162219784U;
    msg.duty_cycle = 2052602085U;

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
    msg.setTimeStamp(0.285143668663);
    msg.setSource(59832U);
    msg.setSourceEntity(35U);
    msg.setDestination(26684U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.406347712853;
    msg.lon = 0.595657048703;
    msg.height = 0.580931362904;
    msg.x = 0.204265855041;
    msg.y = 0.184209627915;
    msg.z = 0.599532538965;
    msg.phi = 0.593192675481;
    msg.theta = 0.439896997356;
    msg.psi = 0.619945847761;
    msg.u = 0.87045686981;
    msg.v = 0.194298815558;
    msg.w = 0.0295493039994;
    msg.vx = 0.982174740815;
    msg.vy = 0.419366289421;
    msg.vz = 0.122635785048;
    msg.p = 0.595256280656;
    msg.q = 0.638296173512;
    msg.r = 0.110591202645;
    msg.depth = 0.23961334908;
    msg.alt = 0.672637887742;

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
    msg.setTimeStamp(0.977435268577);
    msg.setSource(64349U);
    msg.setSourceEntity(174U);
    msg.setDestination(55737U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.685528182094;
    msg.lon = 0.921964411935;
    msg.height = 0.517797566896;
    msg.x = 0.00107107464593;
    msg.y = 0.531715636195;
    msg.z = 0.288943977909;
    msg.phi = 0.767658347617;
    msg.theta = 0.38341039044;
    msg.psi = 0.794338358129;
    msg.u = 0.907148112748;
    msg.v = 0.689702823852;
    msg.w = 0.747957571026;
    msg.vx = 0.815465370838;
    msg.vy = 0.215192798255;
    msg.vz = 0.0598500286312;
    msg.p = 0.0755139640635;
    msg.q = 0.582345084405;
    msg.r = 0.742830103981;
    msg.depth = 0.309732134008;
    msg.alt = 0.225302981962;

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
    msg.setTimeStamp(0.165691929558);
    msg.setSource(14711U);
    msg.setSourceEntity(180U);
    msg.setDestination(8276U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.769221645339;
    msg.lon = 0.158257868048;
    msg.height = 0.883312462878;
    msg.x = 0.245030609126;
    msg.y = 0.232408000158;
    msg.z = 0.441650395292;
    msg.phi = 0.875070878558;
    msg.theta = 0.221020592667;
    msg.psi = 0.435140276795;
    msg.u = 0.843694320425;
    msg.v = 0.47773241769;
    msg.w = 0.221838076886;
    msg.vx = 0.765563892552;
    msg.vy = 0.654178636001;
    msg.vz = 0.836255882873;
    msg.p = 0.183683753009;
    msg.q = 0.144933574745;
    msg.r = 0.984811206702;
    msg.depth = 0.33277599592;
    msg.alt = 0.145346776618;

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
    msg.setTimeStamp(0.804260420797);
    msg.setSource(45945U);
    msg.setSourceEntity(121U);
    msg.setDestination(2391U);
    msg.setDestinationEntity(201U);
    msg.x = 0.465420161847;
    msg.y = 0.839297160315;
    msg.z = 0.980673183096;

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
    msg.setTimeStamp(0.00540389887453);
    msg.setSource(22259U);
    msg.setSourceEntity(73U);
    msg.setDestination(62495U);
    msg.setDestinationEntity(29U);
    msg.x = 0.612665368632;
    msg.y = 0.152951549124;
    msg.z = 0.51323801233;

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
    msg.setTimeStamp(0.176615634507);
    msg.setSource(48560U);
    msg.setSourceEntity(178U);
    msg.setDestination(55687U);
    msg.setDestinationEntity(190U);
    msg.x = 0.0244129441141;
    msg.y = 0.18880511389;
    msg.z = 0.371510318391;

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
    msg.setTimeStamp(0.0343471762493);
    msg.setSource(36952U);
    msg.setSourceEntity(83U);
    msg.setDestination(33564U);
    msg.setDestinationEntity(179U);
    msg.value = 0.288117535342;

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
    msg.setTimeStamp(0.799024734584);
    msg.setSource(4981U);
    msg.setSourceEntity(63U);
    msg.setDestination(54855U);
    msg.setDestinationEntity(146U);
    msg.value = 0.875064781062;

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
    msg.setTimeStamp(0.87265517379);
    msg.setSource(27212U);
    msg.setSourceEntity(254U);
    msg.setDestination(50666U);
    msg.setDestinationEntity(59U);
    msg.value = 0.510143748891;

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
    msg.setTimeStamp(0.141877811586);
    msg.setSource(64515U);
    msg.setSourceEntity(14U);
    msg.setDestination(52378U);
    msg.setDestinationEntity(142U);
    msg.value = 0.037005974841;

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
    msg.setTimeStamp(0.831508821548);
    msg.setSource(36822U);
    msg.setSourceEntity(105U);
    msg.setDestination(9916U);
    msg.setDestinationEntity(192U);
    msg.value = 0.290446491629;

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
    msg.setTimeStamp(0.740119885345);
    msg.setSource(5071U);
    msg.setSourceEntity(147U);
    msg.setDestination(65468U);
    msg.setDestinationEntity(39U);
    msg.value = 0.638523942465;

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
    msg.setTimeStamp(0.0161141297313);
    msg.setSource(59396U);
    msg.setSourceEntity(115U);
    msg.setDestination(27301U);
    msg.setDestinationEntity(111U);
    msg.x = 0.951779536654;
    msg.y = 0.232340253455;
    msg.z = 0.842290897942;
    msg.phi = 0.80072281453;
    msg.theta = 0.366022794344;
    msg.psi = 0.0978024181464;
    msg.p = 0.733612063179;
    msg.q = 0.489464837457;
    msg.r = 0.132336789332;
    msg.u = 0.259008440657;
    msg.v = 0.567048334529;
    msg.w = 0.289350970885;
    msg.bias_psi = 0.0780191767419;
    msg.bias_r = 0.760277242854;

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
    msg.setTimeStamp(0.0787140804663);
    msg.setSource(57913U);
    msg.setSourceEntity(207U);
    msg.setDestination(62194U);
    msg.setDestinationEntity(191U);
    msg.x = 0.0418539026475;
    msg.y = 0.347603098259;
    msg.z = 0.753652677129;
    msg.phi = 0.167078977938;
    msg.theta = 0.0798834958059;
    msg.psi = 0.6063829027;
    msg.p = 0.881764572543;
    msg.q = 0.78850622333;
    msg.r = 0.819896744438;
    msg.u = 0.623421646326;
    msg.v = 0.922204241587;
    msg.w = 0.166845110198;
    msg.bias_psi = 0.736278095065;
    msg.bias_r = 0.921996352741;

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
    msg.setTimeStamp(0.0568952716301);
    msg.setSource(14946U);
    msg.setSourceEntity(157U);
    msg.setDestination(22856U);
    msg.setDestinationEntity(60U);
    msg.x = 0.198240789485;
    msg.y = 0.873988104309;
    msg.z = 0.956867745462;
    msg.phi = 0.525462270747;
    msg.theta = 0.571292111996;
    msg.psi = 0.987619171979;
    msg.p = 0.875609447173;
    msg.q = 0.956159515467;
    msg.r = 0.259508458223;
    msg.u = 0.440570322771;
    msg.v = 0.582173658822;
    msg.w = 0.791528035051;
    msg.bias_psi = 0.93160448359;
    msg.bias_r = 0.101509972341;

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
    msg.setTimeStamp(0.312170880984);
    msg.setSource(49115U);
    msg.setSourceEntity(130U);
    msg.setDestination(11698U);
    msg.setDestinationEntity(52U);
    msg.bias_psi = 0.858947145495;
    msg.bias_r = 0.933059132264;
    msg.cog = 0.599503893928;
    msg.cyaw = 0.612284370331;
    msg.lbl_rej_level = 0.448882858788;
    msg.gps_rej_level = 0.476834856538;
    msg.custom_x = 0.597127684207;
    msg.custom_y = 0.67775808536;
    msg.custom_z = 0.543425119258;

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
    msg.setTimeStamp(0.398057284575);
    msg.setSource(25359U);
    msg.setSourceEntity(129U);
    msg.setDestination(14680U);
    msg.setDestinationEntity(20U);
    msg.bias_psi = 0.00380176544744;
    msg.bias_r = 0.574863766873;
    msg.cog = 0.101475273329;
    msg.cyaw = 0.580559559078;
    msg.lbl_rej_level = 0.0561872459067;
    msg.gps_rej_level = 0.684768783884;
    msg.custom_x = 0.0121467055404;
    msg.custom_y = 0.0672809938762;
    msg.custom_z = 0.643100913671;

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
    msg.setTimeStamp(0.532440096287);
    msg.setSource(49879U);
    msg.setSourceEntity(195U);
    msg.setDestination(2279U);
    msg.setDestinationEntity(171U);
    msg.bias_psi = 0.206509887879;
    msg.bias_r = 0.0585126260356;
    msg.cog = 0.0886534808943;
    msg.cyaw = 0.99601428687;
    msg.lbl_rej_level = 0.226400311443;
    msg.gps_rej_level = 0.690469730966;
    msg.custom_x = 0.884267411556;
    msg.custom_y = 0.365840418987;
    msg.custom_z = 0.362856079215;

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
    msg.setTimeStamp(0.635962149384);
    msg.setSource(21564U);
    msg.setSourceEntity(148U);
    msg.setDestination(50381U);
    msg.setDestinationEntity(164U);
    msg.utc_time = 0.529911121013;
    msg.reason = 53U;

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
    msg.setTimeStamp(0.119275798415);
    msg.setSource(37609U);
    msg.setSourceEntity(212U);
    msg.setDestination(64527U);
    msg.setDestinationEntity(135U);
    msg.utc_time = 0.234276977094;
    msg.reason = 244U;

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
    msg.setTimeStamp(0.56894294512);
    msg.setSource(49156U);
    msg.setSourceEntity(4U);
    msg.setDestination(34346U);
    msg.setDestinationEntity(201U);
    msg.utc_time = 0.722064233515;
    msg.reason = 216U;

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
    msg.setTimeStamp(0.208905711881);
    msg.setSource(12709U);
    msg.setSourceEntity(146U);
    msg.setDestination(35175U);
    msg.setDestinationEntity(254U);
    msg.id = 247U;
    msg.range = 0.796689551126;
    msg.acceptance = 166U;

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
    msg.setTimeStamp(0.0676201623779);
    msg.setSource(8284U);
    msg.setSourceEntity(201U);
    msg.setDestination(22972U);
    msg.setDestinationEntity(175U);
    msg.id = 146U;
    msg.range = 0.865939507514;
    msg.acceptance = 89U;

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
    msg.setTimeStamp(0.441057343734);
    msg.setSource(52763U);
    msg.setSourceEntity(117U);
    msg.setDestination(55995U);
    msg.setDestinationEntity(79U);
    msg.id = 225U;
    msg.range = 0.995512275244;
    msg.acceptance = 13U;

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
    msg.setTimeStamp(0.592316011579);
    msg.setSource(32100U);
    msg.setSourceEntity(3U);
    msg.setDestination(18425U);
    msg.setDestinationEntity(65U);
    msg.type = 0U;
    msg.reason = 107U;
    msg.value = 0.746860847333;
    msg.timestep = 0.82780742082;

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
    msg.setTimeStamp(0.334149885857);
    msg.setSource(34905U);
    msg.setSourceEntity(122U);
    msg.setDestination(21713U);
    msg.setDestinationEntity(58U);
    msg.type = 103U;
    msg.reason = 231U;
    msg.value = 0.423025317144;
    msg.timestep = 0.859173917373;

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
    msg.setTimeStamp(0.172903667799);
    msg.setSource(14534U);
    msg.setSourceEntity(196U);
    msg.setDestination(40859U);
    msg.setDestinationEntity(154U);
    msg.type = 253U;
    msg.reason = 144U;
    msg.value = 0.878967671021;
    msg.timestep = 0.171924917808;

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
    msg.setTimeStamp(0.838344891154);
    msg.setSource(50132U);
    msg.setSourceEntity(124U);
    msg.setDestination(28484U);
    msg.setDestinationEntity(103U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GTUXYNWPDEZMDXGCJHLOXSPMBHNCHXANPMXQVMITTEFYARFLTKBHSGBOITOXUDLPJEATAYYJITEKDIRKOQATCSHRUBZGRZBOXKEGWFEHSTXFVNQSDZXCNLFBQVJIHNJLIZCWGKSDEZQDKWGUUGMSBJDOTVVAULCNMHWRDI");
    tmp_msg_0.lat = 0.459997131258;
    tmp_msg_0.lon = 0.91955129162;
    tmp_msg_0.depth = 0.810016466724;
    tmp_msg_0.query_channel = 207U;
    tmp_msg_0.reply_channel = 116U;
    tmp_msg_0.transponder_delay = 200U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.905936162897;
    msg.y = 0.00641174940272;
    msg.var_x = 0.670960033052;
    msg.var_y = 0.0861658388881;
    msg.distance = 0.737731692835;

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
    msg.setTimeStamp(0.0909316671496);
    msg.setSource(56069U);
    msg.setSourceEntity(190U);
    msg.setDestination(6955U);
    msg.setDestinationEntity(119U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AQWEJZEDCTBMJJTSULHAGPOCGPAVDOAKIYMXRDXIHIEZHIVFGPKGZBIRDLNCKXMESVBOBFVJMUVHDQAFUYMFQCESDSYHRHKOTYSNEMYDXVHBQPIFPJKAIEBVBDHRNWZCWSTIWJYOUCWLFESNAKKRTXZRKPUQVCDEXFWOCEGRVXFHITOOPUXLKWGMNMQKJNAZNZULYLBNQLOSCXGGAYWBTJHJRQLZRUYTUYIZRNDFPSVOAPTQQMBMF");
    tmp_msg_0.lat = 0.0696505152568;
    tmp_msg_0.lon = 0.742358139573;
    tmp_msg_0.depth = 0.933762726749;
    tmp_msg_0.query_channel = 146U;
    tmp_msg_0.reply_channel = 20U;
    tmp_msg_0.transponder_delay = 131U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.887542105585;
    msg.y = 0.548348952968;
    msg.var_x = 0.150030630582;
    msg.var_y = 0.862771282106;
    msg.distance = 0.285650266108;

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
    msg.setTimeStamp(0.0250609003401);
    msg.setSource(26302U);
    msg.setSourceEntity(185U);
    msg.setDestination(3845U);
    msg.setDestinationEntity(35U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UPTPLRQVQWXGMUGRBUPBKVASUHNYXYDJWDMTYOSJHHCZKHFVMEKRGFJWBBRNAKGUEQLTCKSLZYVQABKDDKWTASVUYOPPZWAAXTCHQIBYOIZDCZXCQORZOIFWECXJHGFFIEAPQVTIETJZENBWNXTNNOIMAMCLJFQYGIVULUZJSZMNJYWGTFZVOKRAPFBXSYRDMULDSSFWXRIXPMSQQBPOIBVCTRDLOERECLPHAHULEKFSWOJNDMXEGGNLCNVJM");
    tmp_msg_0.lat = 0.842685348101;
    tmp_msg_0.lon = 0.0284582652616;
    tmp_msg_0.depth = 0.70082777921;
    tmp_msg_0.query_channel = 185U;
    tmp_msg_0.reply_channel = 115U;
    tmp_msg_0.transponder_delay = 70U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.407784451972;
    msg.y = 0.678737759412;
    msg.var_x = 0.851185083677;
    msg.var_y = 0.374009696754;
    msg.distance = 0.258301565486;

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
    msg.setTimeStamp(0.0887064048868);
    msg.setSource(17152U);
    msg.setSourceEntity(223U);
    msg.setDestination(52024U);
    msg.setDestinationEntity(191U);
    msg.state = 95U;

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
    msg.setTimeStamp(0.928265017062);
    msg.setSource(64914U);
    msg.setSourceEntity(121U);
    msg.setDestination(53128U);
    msg.setDestinationEntity(37U);
    msg.state = 195U;

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
    msg.setTimeStamp(0.0673344549901);
    msg.setSource(41930U);
    msg.setSourceEntity(41U);
    msg.setDestination(32606U);
    msg.setDestinationEntity(226U);
    msg.state = 171U;

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
    msg.setTimeStamp(0.285367444582);
    msg.setSource(4457U);
    msg.setSourceEntity(54U);
    msg.setDestination(46220U);
    msg.setDestinationEntity(70U);
    msg.x = 0.785262784336;
    msg.y = 0.94051395538;
    msg.z = 0.848889488316;

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
    msg.setTimeStamp(0.832221648593);
    msg.setSource(20868U);
    msg.setSourceEntity(240U);
    msg.setDestination(10387U);
    msg.setDestinationEntity(30U);
    msg.x = 0.153914721979;
    msg.y = 0.843959668356;
    msg.z = 0.285548994714;

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
    msg.setTimeStamp(0.216535731949);
    msg.setSource(1632U);
    msg.setSourceEntity(176U);
    msg.setDestination(36566U);
    msg.setDestinationEntity(227U);
    msg.x = 0.113889458152;
    msg.y = 0.594224082573;
    msg.z = 0.188562968358;

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
    msg.setTimeStamp(0.980597622718);
    msg.setSource(7022U);
    msg.setSourceEntity(102U);
    msg.setDestination(50947U);
    msg.setDestinationEntity(218U);
    msg.va = 0.167828840109;
    msg.aoa = 0.929778748929;
    msg.ssa = 0.951061844951;

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
    msg.setTimeStamp(0.837435493389);
    msg.setSource(42624U);
    msg.setSourceEntity(17U);
    msg.setDestination(30770U);
    msg.setDestinationEntity(97U);
    msg.va = 0.589521523729;
    msg.aoa = 0.768840318054;
    msg.ssa = 0.0655292719992;

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
    msg.setTimeStamp(0.0833150918985);
    msg.setSource(26962U);
    msg.setSourceEntity(52U);
    msg.setDestination(8381U);
    msg.setDestinationEntity(79U);
    msg.va = 0.11849513231;
    msg.aoa = 0.571882200582;
    msg.ssa = 0.645444802453;

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
    msg.setTimeStamp(0.238356624779);
    msg.setSource(43530U);
    msg.setSourceEntity(117U);
    msg.setDestination(61787U);
    msg.setDestinationEntity(225U);
    msg.value = 0.48321919688;

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
    msg.setTimeStamp(0.522967531061);
    msg.setSource(37772U);
    msg.setSourceEntity(120U);
    msg.setDestination(9397U);
    msg.setDestinationEntity(143U);
    msg.value = 0.24323373733;

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
    msg.setTimeStamp(0.570580391665);
    msg.setSource(52137U);
    msg.setSourceEntity(6U);
    msg.setDestination(49724U);
    msg.setDestinationEntity(127U);
    msg.value = 0.562456687756;

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
    msg.setTimeStamp(0.731526644494);
    msg.setSource(18255U);
    msg.setSourceEntity(48U);
    msg.setDestination(12020U);
    msg.setDestinationEntity(135U);
    msg.value = 0.855909166294;
    msg.z_units = 183U;

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
    msg.setTimeStamp(0.215963714235);
    msg.setSource(6185U);
    msg.setSourceEntity(33U);
    msg.setDestination(17310U);
    msg.setDestinationEntity(167U);
    msg.value = 0.998120535007;
    msg.z_units = 10U;

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
    msg.setTimeStamp(0.533052049484);
    msg.setSource(27586U);
    msg.setSourceEntity(127U);
    msg.setDestination(49938U);
    msg.setDestinationEntity(154U);
    msg.value = 0.730071761596;
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
    msg.setTimeStamp(0.24608853552);
    msg.setSource(40925U);
    msg.setSourceEntity(192U);
    msg.setDestination(30787U);
    msg.setDestinationEntity(100U);
    msg.value = 0.998096435542;
    msg.speed_units = 163U;

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
    msg.setTimeStamp(0.833420933391);
    msg.setSource(46201U);
    msg.setSourceEntity(87U);
    msg.setDestination(22490U);
    msg.setDestinationEntity(199U);
    msg.value = 0.177063238403;
    msg.speed_units = 106U;

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
    msg.setTimeStamp(0.290466889518);
    msg.setSource(53109U);
    msg.setSourceEntity(241U);
    msg.setDestination(45574U);
    msg.setDestinationEntity(241U);
    msg.value = 0.398535002482;
    msg.speed_units = 31U;

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
    msg.setTimeStamp(0.0595411181058);
    msg.setSource(26069U);
    msg.setSourceEntity(63U);
    msg.setDestination(41097U);
    msg.setDestinationEntity(190U);
    msg.value = 0.839076928078;

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
    msg.setTimeStamp(0.192457730953);
    msg.setSource(12566U);
    msg.setSourceEntity(202U);
    msg.setDestination(44645U);
    msg.setDestinationEntity(185U);
    msg.value = 0.413759667512;

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
    msg.setTimeStamp(0.981567520443);
    msg.setSource(57290U);
    msg.setSourceEntity(141U);
    msg.setDestination(22361U);
    msg.setDestinationEntity(105U);
    msg.value = 0.057292846263;

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
    msg.setTimeStamp(0.00555081882488);
    msg.setSource(8336U);
    msg.setSourceEntity(3U);
    msg.setDestination(8893U);
    msg.setDestinationEntity(89U);
    msg.value = 0.837999384999;

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
    msg.setTimeStamp(0.180912373409);
    msg.setSource(49420U);
    msg.setSourceEntity(41U);
    msg.setDestination(36306U);
    msg.setDestinationEntity(192U);
    msg.value = 0.146041642237;

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
    msg.setTimeStamp(0.863335967795);
    msg.setSource(4919U);
    msg.setSourceEntity(78U);
    msg.setDestination(62895U);
    msg.setDestinationEntity(53U);
    msg.value = 0.119138321811;

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
    msg.setTimeStamp(0.769283574558);
    msg.setSource(57443U);
    msg.setSourceEntity(152U);
    msg.setDestination(17905U);
    msg.setDestinationEntity(246U);
    msg.value = 0.749674030632;

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
    msg.setTimeStamp(0.955806046544);
    msg.setSource(4874U);
    msg.setSourceEntity(224U);
    msg.setDestination(49068U);
    msg.setDestinationEntity(38U);
    msg.value = 0.611218641112;

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
    msg.setTimeStamp(0.40557642495);
    msg.setSource(11154U);
    msg.setSourceEntity(165U);
    msg.setDestination(19380U);
    msg.setDestinationEntity(71U);
    msg.value = 0.560812618824;

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
    msg.setTimeStamp(0.622251900233);
    msg.setSource(5236U);
    msg.setSourceEntity(161U);
    msg.setDestination(15616U);
    msg.setDestinationEntity(159U);
    msg.path_ref = 1309462477U;
    msg.start_lat = 0.106607257895;
    msg.start_lon = 0.768318278715;
    msg.start_z = 0.731189910895;
    msg.start_z_units = 146U;
    msg.end_lat = 0.379486091303;
    msg.end_lon = 0.594581796246;
    msg.end_z = 0.367716366597;
    msg.end_z_units = 205U;
    msg.speed = 0.658913478737;
    msg.speed_units = 210U;
    msg.lradius = 0.815486840161;
    msg.flags = 41U;

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
    msg.setTimeStamp(0.825339004728);
    msg.setSource(50841U);
    msg.setSourceEntity(166U);
    msg.setDestination(35804U);
    msg.setDestinationEntity(18U);
    msg.path_ref = 2708890831U;
    msg.start_lat = 0.247007398747;
    msg.start_lon = 0.613580905023;
    msg.start_z = 0.779557198161;
    msg.start_z_units = 216U;
    msg.end_lat = 0.636483957993;
    msg.end_lon = 0.167056947787;
    msg.end_z = 0.666674664882;
    msg.end_z_units = 107U;
    msg.speed = 0.944687163008;
    msg.speed_units = 60U;
    msg.lradius = 0.0778788105817;
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
    msg.setTimeStamp(0.471221008306);
    msg.setSource(37912U);
    msg.setSourceEntity(26U);
    msg.setDestination(47900U);
    msg.setDestinationEntity(252U);
    msg.path_ref = 30294657U;
    msg.start_lat = 0.852118196523;
    msg.start_lon = 0.0744429043292;
    msg.start_z = 0.0711043994933;
    msg.start_z_units = 182U;
    msg.end_lat = 0.764340924552;
    msg.end_lon = 0.604595185733;
    msg.end_z = 0.354285767254;
    msg.end_z_units = 200U;
    msg.speed = 0.398665636084;
    msg.speed_units = 240U;
    msg.lradius = 0.740033294387;
    msg.flags = 90U;

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
    msg.setTimeStamp(0.74342702019);
    msg.setSource(2292U);
    msg.setSourceEntity(223U);
    msg.setDestination(9342U);
    msg.setDestinationEntity(245U);
    msg.x = 0.00957341499274;
    msg.y = 0.487168350699;
    msg.z = 0.155461998872;
    msg.k = 0.405802384844;
    msg.m = 0.640811806087;
    msg.n = 0.750262599783;
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
    msg.setTimeStamp(0.00560021045713);
    msg.setSource(435U);
    msg.setSourceEntity(99U);
    msg.setDestination(5130U);
    msg.setDestinationEntity(80U);
    msg.x = 0.594890138804;
    msg.y = 0.895879672875;
    msg.z = 0.102298899668;
    msg.k = 0.56583877672;
    msg.m = 0.108953877335;
    msg.n = 0.702447130641;
    msg.flags = 101U;

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
    msg.setTimeStamp(0.912960394488);
    msg.setSource(354U);
    msg.setSourceEntity(172U);
    msg.setDestination(10907U);
    msg.setDestinationEntity(184U);
    msg.x = 0.732691673606;
    msg.y = 0.126543058899;
    msg.z = 0.639718571746;
    msg.k = 0.440455489089;
    msg.m = 0.0528188915129;
    msg.n = 0.876899914715;
    msg.flags = 47U;

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
    msg.setTimeStamp(0.810372300517);
    msg.setSource(60554U);
    msg.setSourceEntity(173U);
    msg.setDestination(23665U);
    msg.setDestinationEntity(191U);
    msg.value = 0.349138999254;

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
    msg.setTimeStamp(0.597261913677);
    msg.setSource(52313U);
    msg.setSourceEntity(118U);
    msg.setDestination(58946U);
    msg.setDestinationEntity(165U);
    msg.value = 0.413734228239;

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
    msg.setTimeStamp(0.965615727883);
    msg.setSource(21991U);
    msg.setSourceEntity(8U);
    msg.setDestination(1970U);
    msg.setDestinationEntity(169U);
    msg.value = 0.0250913710729;

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
    msg.setTimeStamp(0.0178813454493);
    msg.setSource(6108U);
    msg.setSourceEntity(46U);
    msg.setDestination(59793U);
    msg.setDestinationEntity(127U);
    msg.u = 0.542265459884;
    msg.v = 0.309222400068;
    msg.w = 0.829434774824;
    msg.p = 0.456314271741;
    msg.q = 0.932309065474;
    msg.r = 0.436306559452;
    msg.flags = 164U;

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
    msg.setTimeStamp(0.554620189072);
    msg.setSource(57304U);
    msg.setSourceEntity(172U);
    msg.setDestination(32801U);
    msg.setDestinationEntity(62U);
    msg.u = 0.082083119257;
    msg.v = 0.949779660694;
    msg.w = 0.954425563107;
    msg.p = 0.203666988896;
    msg.q = 0.338550722705;
    msg.r = 0.0891780015526;
    msg.flags = 169U;

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
    msg.setTimeStamp(0.391081560641);
    msg.setSource(31426U);
    msg.setSourceEntity(191U);
    msg.setDestination(5733U);
    msg.setDestinationEntity(245U);
    msg.u = 0.0516097559131;
    msg.v = 0.689918064219;
    msg.w = 0.496265607125;
    msg.p = 0.201898620408;
    msg.q = 0.436024871606;
    msg.r = 0.151498490148;
    msg.flags = 180U;

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
    msg.setTimeStamp(0.662786172934);
    msg.setSource(51381U);
    msg.setSourceEntity(44U);
    msg.setDestination(60354U);
    msg.setDestinationEntity(83U);
    msg.path_ref = 343378069U;
    msg.start_lat = 0.672784352539;
    msg.start_lon = 0.647216293845;
    msg.start_z = 0.801333289931;
    msg.start_z_units = 97U;
    msg.end_lat = 0.559098799303;
    msg.end_lon = 0.151576381353;
    msg.end_z = 0.680565740609;
    msg.end_z_units = 154U;
    msg.lradius = 0.069635465685;
    msg.flags = 219U;
    msg.x = 0.210785212304;
    msg.y = 0.378870224276;
    msg.z = 0.679537791561;
    msg.vx = 0.610285661914;
    msg.vy = 0.926159251127;
    msg.vz = 0.386492149911;
    msg.course_error = 0.259452118998;
    msg.eta = 11974U;

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
    msg.setTimeStamp(0.565556574926);
    msg.setSource(36527U);
    msg.setSourceEntity(132U);
    msg.setDestination(61080U);
    msg.setDestinationEntity(14U);
    msg.path_ref = 2253670456U;
    msg.start_lat = 0.0148472172403;
    msg.start_lon = 0.83612838069;
    msg.start_z = 0.249685063922;
    msg.start_z_units = 83U;
    msg.end_lat = 0.842759026399;
    msg.end_lon = 0.21920432561;
    msg.end_z = 0.992250810698;
    msg.end_z_units = 194U;
    msg.lradius = 0.995748235793;
    msg.flags = 219U;
    msg.x = 0.386655379492;
    msg.y = 0.782383898967;
    msg.z = 0.370811972044;
    msg.vx = 0.417109899341;
    msg.vy = 0.219866731367;
    msg.vz = 0.423279560161;
    msg.course_error = 0.825695295714;
    msg.eta = 26603U;

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
    msg.setTimeStamp(0.900187034018);
    msg.setSource(9674U);
    msg.setSourceEntity(229U);
    msg.setDestination(12376U);
    msg.setDestinationEntity(206U);
    msg.path_ref = 1188623883U;
    msg.start_lat = 0.424956700688;
    msg.start_lon = 0.862237147872;
    msg.start_z = 0.445657597877;
    msg.start_z_units = 202U;
    msg.end_lat = 0.49456072967;
    msg.end_lon = 0.729399734566;
    msg.end_z = 0.776049639598;
    msg.end_z_units = 133U;
    msg.lradius = 0.0516567942984;
    msg.flags = 108U;
    msg.x = 0.201073950139;
    msg.y = 0.163736943112;
    msg.z = 0.201025837007;
    msg.vx = 0.919400352723;
    msg.vy = 0.97452662994;
    msg.vz = 0.583254076995;
    msg.course_error = 0.327401846079;
    msg.eta = 43572U;

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
    msg.setTimeStamp(0.251483516536);
    msg.setSource(20586U);
    msg.setSourceEntity(226U);
    msg.setDestination(38978U);
    msg.setDestinationEntity(62U);
    msg.k = 0.110265542567;
    msg.m = 0.714842386584;
    msg.n = 0.902495908376;

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
    msg.setTimeStamp(0.716065552652);
    msg.setSource(36902U);
    msg.setSourceEntity(98U);
    msg.setDestination(27601U);
    msg.setDestinationEntity(122U);
    msg.k = 0.251228587706;
    msg.m = 0.859736791972;
    msg.n = 0.379727811944;

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
    msg.setTimeStamp(0.415049176713);
    msg.setSource(21092U);
    msg.setSourceEntity(243U);
    msg.setDestination(6210U);
    msg.setDestinationEntity(194U);
    msg.k = 0.0153291554445;
    msg.m = 0.657739905315;
    msg.n = 0.0725063280403;

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
    msg.setTimeStamp(0.183443100845);
    msg.setSource(54822U);
    msg.setSourceEntity(36U);
    msg.setDestination(1872U);
    msg.setDestinationEntity(149U);
    msg.p = 0.377775399345;
    msg.i = 0.762088476593;
    msg.d = 0.167743068656;
    msg.a = 0.809395365629;

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
    msg.setTimeStamp(0.934502065563);
    msg.setSource(26570U);
    msg.setSourceEntity(187U);
    msg.setDestination(4210U);
    msg.setDestinationEntity(144U);
    msg.p = 0.0667415427099;
    msg.i = 0.768457019484;
    msg.d = 0.36681625676;
    msg.a = 0.829988775108;

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
    msg.setTimeStamp(0.268214022891);
    msg.setSource(35254U);
    msg.setSourceEntity(168U);
    msg.setDestination(5499U);
    msg.setDestinationEntity(69U);
    msg.p = 0.134545569019;
    msg.i = 0.727041058101;
    msg.d = 0.318627998066;
    msg.a = 0.841365462571;

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
    msg.setTimeStamp(0.390938596174);
    msg.setSource(37034U);
    msg.setSourceEntity(51U);
    msg.setDestination(31806U);
    msg.setDestinationEntity(94U);
    msg.op = 50U;

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
    msg.setTimeStamp(0.151006421861);
    msg.setSource(40368U);
    msg.setSourceEntity(251U);
    msg.setDestination(51220U);
    msg.setDestinationEntity(11U);
    msg.op = 132U;

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
    msg.setTimeStamp(0.989044419027);
    msg.setSource(45693U);
    msg.setSourceEntity(70U);
    msg.setDestination(5878U);
    msg.setDestinationEntity(207U);
    msg.op = 208U;

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
    msg.setTimeStamp(0.837769107688);
    msg.setSource(29722U);
    msg.setSourceEntity(238U);
    msg.setDestination(63953U);
    msg.setDestinationEntity(117U);
    msg.x = 0.508212402107;
    msg.y = 0.556742682776;
    msg.z = 0.0576831704675;
    msg.vx = 0.373367044259;
    msg.vy = 0.507370970451;
    msg.vz = 0.51262705609;
    msg.ax = 0.231766191403;
    msg.ay = 0.936930643979;
    msg.az = 0.574182170581;
    msg.flags = 7402U;

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
    msg.setTimeStamp(0.365783157208);
    msg.setSource(43671U);
    msg.setSourceEntity(252U);
    msg.setDestination(25995U);
    msg.setDestinationEntity(99U);
    msg.x = 0.455522259874;
    msg.y = 0.60050371725;
    msg.z = 0.94706655118;
    msg.vx = 0.130962684701;
    msg.vy = 0.125227749314;
    msg.vz = 0.487332972574;
    msg.ax = 0.20278130145;
    msg.ay = 0.0995947761544;
    msg.az = 0.301719636778;
    msg.flags = 13245U;

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
    msg.setTimeStamp(0.297203185947);
    msg.setSource(9225U);
    msg.setSourceEntity(110U);
    msg.setDestination(50140U);
    msg.setDestinationEntity(187U);
    msg.x = 0.619628793219;
    msg.y = 0.102396991409;
    msg.z = 0.24927083986;
    msg.vx = 0.127794811622;
    msg.vy = 0.479983140016;
    msg.vz = 0.00248004943995;
    msg.ax = 0.488928085595;
    msg.ay = 0.248804137481;
    msg.az = 0.272043862356;
    msg.flags = 46027U;

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
    msg.setTimeStamp(0.560600326405);
    msg.setSource(46355U);
    msg.setSourceEntity(63U);
    msg.setDestination(12887U);
    msg.setDestinationEntity(215U);
    msg.value = 0.191723026441;

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
    msg.setTimeStamp(0.528794609706);
    msg.setSource(26490U);
    msg.setSourceEntity(48U);
    msg.setDestination(5940U);
    msg.setDestinationEntity(100U);
    msg.value = 0.965422616356;

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
    msg.setTimeStamp(0.039696289627);
    msg.setSource(3738U);
    msg.setSourceEntity(48U);
    msg.setDestination(54829U);
    msg.setDestinationEntity(42U);
    msg.value = 0.567264880859;

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
    msg.setTimeStamp(0.15570607235);
    msg.setSource(39980U);
    msg.setSourceEntity(4U);
    msg.setDestination(4456U);
    msg.setDestinationEntity(139U);
    msg.timeout = 35163U;
    msg.lat = 0.565307258672;
    msg.lon = 0.1924882915;
    msg.z = 0.444858540806;
    msg.z_units = 188U;
    msg.speed = 0.952368868852;
    msg.speed_units = 53U;
    msg.roll = 0.816371968828;
    msg.pitch = 0.0370972193836;
    msg.yaw = 0.809092815603;
    msg.custom.assign("QSGBFEIGBKEKLEBYTJBYUDPPOUYXOVLVVNXJCSEZLFJKEISYWDYXKLRQSWWPTUOIRNFWPEJRTEACQTHVAMQDLZKTENGKQRWFXODDPAHOMDGKMVZTRIBGVPFMZBNJYTSCDJDCZUSHCOHBFTZSOWCVXIKDNXOANQBMUJFKUCGIIVRTOZQBQPLRGWMALBFAUAWJHNUEH");

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
    msg.setTimeStamp(0.814792838605);
    msg.setSource(33592U);
    msg.setSourceEntity(201U);
    msg.setDestination(22748U);
    msg.setDestinationEntity(77U);
    msg.timeout = 42146U;
    msg.lat = 0.400839936857;
    msg.lon = 0.768640601942;
    msg.z = 0.201043777862;
    msg.z_units = 245U;
    msg.speed = 0.237550180747;
    msg.speed_units = 90U;
    msg.roll = 0.356441259262;
    msg.pitch = 0.764047938728;
    msg.yaw = 0.109252310855;
    msg.custom.assign("IAEFALIBILDMUZTFTEOTACUWOJMIQVISVNGCEEIRXWHBDCUOCBFJQEDWCVASWYZNZXQMGYPWQHATQPYTKIMTOAOKRRMWXNMKDPJXZMCJGUPCVLDFFYZRDVVKEZCPSTNAJBGJRPBZQWNNMXKFFKGKPKAHIVJSDRQUYHGFBQWEZI");

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
    msg.setTimeStamp(0.460624687336);
    msg.setSource(53176U);
    msg.setSourceEntity(81U);
    msg.setDestination(38192U);
    msg.setDestinationEntity(127U);
    msg.timeout = 44836U;
    msg.lat = 0.22482496806;
    msg.lon = 0.113283312844;
    msg.z = 0.00866542345859;
    msg.z_units = 155U;
    msg.speed = 0.886996672675;
    msg.speed_units = 226U;
    msg.roll = 0.876469612531;
    msg.pitch = 0.0983104069751;
    msg.yaw = 0.17335602947;
    msg.custom.assign("PEJNHOFSARCCZJVONUDAYQPJDYUNPEVQKRIZUVIBHVLFJZQKGRMLMKLUKQXPWRYSXHJEDTONMQUZTYCESYTSRDQBGUGBUFPRJCFXLQFAZIEKXTCEEWAPXCGTPDJVIXSVYPTHOTIXLKMSALXRWWHXADWZWSRXYWKCZCMINWANBQZBMMBZGMHLBBKAHGESNNHALDPIDQNRTKITUIHABCCPGYTDO");

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
    msg.setTimeStamp(0.212431683066);
    msg.setSource(30153U);
    msg.setSourceEntity(231U);
    msg.setDestination(20865U);
    msg.setDestinationEntity(45U);
    msg.timeout = 28204U;
    msg.lat = 0.235639254932;
    msg.lon = 0.0461652085843;
    msg.z = 0.910367861678;
    msg.z_units = 169U;
    msg.speed = 0.260001045951;
    msg.speed_units = 146U;
    msg.duration = 3397U;
    msg.radius = 0.60901062449;
    msg.flags = 40U;
    msg.custom.assign("TUNRKUBFIONTOWCHJPFDXYPUAR");

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
    msg.setTimeStamp(0.483286191549);
    msg.setSource(44588U);
    msg.setSourceEntity(209U);
    msg.setDestination(48817U);
    msg.setDestinationEntity(214U);
    msg.timeout = 12822U;
    msg.lat = 0.0228662516917;
    msg.lon = 0.385888229185;
    msg.z = 0.455920529702;
    msg.z_units = 61U;
    msg.speed = 0.164212173099;
    msg.speed_units = 179U;
    msg.duration = 2573U;
    msg.radius = 0.0130791641019;
    msg.flags = 253U;
    msg.custom.assign("OCSFATFTGLCVMMEPAHOXGMQNCJRQZLPTXWYSXYUMEGDIFVASZWDUNLZPASHYOBKOMDNKFDENXBGERWJJRLMUPRBCCKLQZKNJBADTRFAIFIVDIOIEWWBLVTBZPKFZLWWVMXOYGGJKRQNVCPNFHEUIMCYGUSADPIRWYRDQHEEUSYSFIZXXIMAHOONVGBOTUCNBKPYYYOJJ");

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
    msg.setTimeStamp(0.804642045011);
    msg.setSource(20040U);
    msg.setSourceEntity(106U);
    msg.setDestination(4095U);
    msg.setDestinationEntity(69U);
    msg.timeout = 30590U;
    msg.lat = 0.747356125037;
    msg.lon = 0.559393121551;
    msg.z = 0.773390691255;
    msg.z_units = 227U;
    msg.speed = 0.148898164192;
    msg.speed_units = 203U;
    msg.duration = 33605U;
    msg.radius = 0.713957839298;
    msg.flags = 219U;
    msg.custom.assign("TFNIOALHGQYDBIECEFEARQBQCQORYLCWVWGYWCBVRWILSPKMZJUQBJGAFDRYZTTHWHQVZUVYMNJSTDZGFXJBVUUMMSPFNPCXFNPZVPLKZQJWRAVIOIBUFGUACEVEEJFESIJKAHQCIBOGHCGHZQIJFODLOSXBKLPXDMRDZDGCUADDNLABXPVEMHNKKHIZCMKXTSNTRWHSIYTRKDLP");

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
    msg.setTimeStamp(0.101518096407);
    msg.setSource(17576U);
    msg.setSourceEntity(225U);
    msg.setDestination(4773U);
    msg.setDestinationEntity(86U);
    msg.custom.assign("EAWGKKBEBDQWQXLFQPEGTXPEQLPUNSOBGGIROBXZBALEDVCCKAWJBMDOJTSPZJTRRKYUQCDDDQSSRTELUIKWVARMVHAFOQPPXYZWWPPTUAGYMNAFHPIFKLJYAXDGSMHYCHSNNDFAIBKJTGIBWWLYZMNRBUUYLTWUDCLLNFICCOUIKFFMYXDAHZXHHVMCYPCXLFQGIVROYEZ");

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
    msg.setTimeStamp(0.608817349549);
    msg.setSource(30609U);
    msg.setSourceEntity(37U);
    msg.setDestination(25472U);
    msg.setDestinationEntity(86U);
    msg.custom.assign("PAPMDXMGDHVSCLOWXPGBLTJVSQRKGODYRQGRGNSIJQZVSTSRSULQXJUTZFLPBTPZHZNCFJAMZJKVGNHTUEPCYIHQAEOWEJCCEFVBHMNLWVRJDBXAPOSAJDBIMGBTCQAFBWNBYCTKAFHPCFEXHOEESVQOJHFZNKXMOURQNWZDUFZKCFIURNGNRABYEWHPUWCDVWLXOTKIGLBLUKDVAXZNUWGMPRIIJMKOQY");

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
    msg.setTimeStamp(0.866905971406);
    msg.setSource(62604U);
    msg.setSourceEntity(95U);
    msg.setDestination(18093U);
    msg.setDestinationEntity(228U);
    msg.custom.assign("XPQLLMAPLNJPIZVDMKMPCZMZZTLBHATKCQGFGFNBDAUBOGIEIHPPLRTIMURJHVR");

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
    msg.setTimeStamp(0.560357613727);
    msg.setSource(35342U);
    msg.setSourceEntity(30U);
    msg.setDestination(22794U);
    msg.setDestinationEntity(122U);
    msg.timeout = 57718U;
    msg.lat = 0.188000998699;
    msg.lon = 0.702233149659;
    msg.z = 0.720805206401;
    msg.z_units = 130U;
    msg.duration = 8667U;
    msg.speed = 0.238760547178;
    msg.speed_units = 47U;
    msg.type = 202U;
    msg.radius = 0.698250299524;
    msg.length = 0.777117117518;
    msg.bearing = 0.498392094095;
    msg.direction = 11U;
    msg.custom.assign("FMEYPCXPFAHSUWCOZHSLIYGDNPRHNUTROLZEATSLOGGVWCUEBDXNVJ");

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
    msg.setTimeStamp(0.583622774941);
    msg.setSource(53798U);
    msg.setSourceEntity(90U);
    msg.setDestination(32387U);
    msg.setDestinationEntity(199U);
    msg.timeout = 32018U;
    msg.lat = 0.803433534829;
    msg.lon = 0.230589387077;
    msg.z = 0.749279611495;
    msg.z_units = 142U;
    msg.duration = 56003U;
    msg.speed = 0.0420331950832;
    msg.speed_units = 3U;
    msg.type = 248U;
    msg.radius = 0.613073072424;
    msg.length = 0.606214239715;
    msg.bearing = 0.943425490077;
    msg.direction = 102U;
    msg.custom.assign("VFINFMRIJSZXTBSHBBEPADWJAXLYEXCUEJRRNQXDOVTJMWWFBSSUBHSEDQGEZBLOOKKQVLBVHRSBJRMYVAFETNZCVZETGRKCYCURWGIFUDZBIETZPRPGLCCEUGFXTSPLTHGXWGODCJVIXQSOYPAYJW");

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
    msg.setTimeStamp(0.869295565301);
    msg.setSource(51197U);
    msg.setSourceEntity(30U);
    msg.setDestination(64690U);
    msg.setDestinationEntity(246U);
    msg.timeout = 108U;
    msg.lat = 0.485289670304;
    msg.lon = 0.791239108281;
    msg.z = 0.741800124522;
    msg.z_units = 179U;
    msg.duration = 11566U;
    msg.speed = 0.635426108722;
    msg.speed_units = 109U;
    msg.type = 133U;
    msg.radius = 0.674894146038;
    msg.length = 0.121145512604;
    msg.bearing = 0.846790826715;
    msg.direction = 140U;
    msg.custom.assign("TNFNIDLCSEQKGKEYGNHBZYCZYPLGSDGYKJPRVBBSUYYHPIRAJJCS");

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
    msg.setTimeStamp(0.645016396246);
    msg.setSource(39543U);
    msg.setSourceEntity(240U);
    msg.setDestination(58983U);
    msg.setDestinationEntity(193U);
    msg.duration = 4265U;
    msg.custom.assign("SXGCAAYOZTDSVUMBRELIWQBUDWGHVRNCAMRTJSIZEGHFBOJGELCNHYVYURKKRMEWFJCDBUJKQZBVEBCTOWYAPMNCGXMNPACHQCPYYCBZQGELJLMSFXNAWNFFMUPQVUFZSGWVZJGFHTTAFOFEXMGIIRXRIJEYRJDVOLYHQUMDQTZIPKSOWILPXAZTWODKLWTPOSSLNHIAWDRGXUOCSKNDKQQPDUQVTHTJOIZPMZFJXKB");

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
    msg.setTimeStamp(0.589604743077);
    msg.setSource(42093U);
    msg.setSourceEntity(58U);
    msg.setDestination(18998U);
    msg.setDestinationEntity(179U);
    msg.duration = 56932U;
    msg.custom.assign("PDKYWKUQETAXAOMOYFTDSLUEIWCVHXHRUGASJVFHMCNPQYMJCJNKTEYRGKRVJQQDLNQZKOBABAJMWAUJAIQDJROLBDYHMVUHPZUBREEGYNWGTSIPHBKGYVMMELFJNEYTIRYDUMFPVOQBZACFMIRWTTSFXOXCVKXGDSWDGRQUCENXVZDJHVILXPHRKUTBWHWSJAIIDFSROYXSZBNEPOQKLVGCQPSLTKUGPNWNPZGMSICNZZLEAZ");

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
    msg.setTimeStamp(0.0480166930469);
    msg.setSource(42868U);
    msg.setSourceEntity(41U);
    msg.setDestination(2165U);
    msg.setDestinationEntity(90U);
    msg.duration = 19467U;
    msg.custom.assign("AXZTPWNIXRTYFMBPVCDDDXTDNOVTFXITMIVQKZSTNXKUIYYCOEELAEBSXHXERZJCAHESJYUABTUUFUJGPUHJWHCLZQMKH");

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
    msg.setTimeStamp(0.58112230785);
    msg.setSource(60412U);
    msg.setSourceEntity(141U);
    msg.setDestination(3996U);
    msg.setDestinationEntity(156U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3878796428U;
    tmp_msg_0.start_lat = 0.949012295604;
    tmp_msg_0.start_lon = 0.713420581468;
    tmp_msg_0.start_z = 0.838042649253;
    tmp_msg_0.start_z_units = 54U;
    tmp_msg_0.end_lat = 0.167268402037;
    tmp_msg_0.end_lon = 0.734275908154;
    tmp_msg_0.end_z = 0.638261629402;
    tmp_msg_0.end_z_units = 34U;
    tmp_msg_0.speed = 0.872904384521;
    tmp_msg_0.speed_units = 119U;
    tmp_msg_0.lradius = 0.366264109118;
    tmp_msg_0.flags = 67U;
    msg.control.set(tmp_msg_0);
    msg.duration = 54081U;
    msg.custom.assign("NEUWRYOXJMSEPSDZBKJLSBIYHPLUIGMCYFGAGJORYXBUYSCRUKVAPCXPJBVXSJSMOH");

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
    msg.setTimeStamp(0.948566824334);
    msg.setSource(30979U);
    msg.setSourceEntity(80U);
    msg.setDestination(25923U);
    msg.setDestinationEntity(46U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.820844615413;
    msg.control.set(tmp_msg_0);
    msg.duration = 17924U;
    msg.custom.assign("STXVJODLYNPAPPWUNTJWHYFKAVKUGSWKHYSQELMISRFBPFVNUZZJTHRRWUMHRXXYSTRGWGZBEUDLZHUZZYRZRMRVHBXCEFIUQOAMODLFYWIN");

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
    msg.setTimeStamp(0.808225354527);
    msg.setSource(56137U);
    msg.setSourceEntity(151U);
    msg.setDestination(1636U);
    msg.setDestinationEntity(117U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.916728824003;
    tmp_msg_0.speed_units = 238U;
    msg.control.set(tmp_msg_0);
    msg.duration = 24933U;
    msg.custom.assign("RCWPHJPXAFZNTKADGXOYBMNERPLNSKDARFSBXYQGUMCPBIPJAWZDDHPAXGEGVKPUNYCZLMIQXIOXOEZPMBRQCWIQQUIKERJDUKRSWMYIVBLCNYBIYIPPDVNUGCDFYEWFDBYMEOVWZTZILSZVCFVHJBOHBVGYDGVGUQTQNAOSNURKXFZHLKWTGMCVJAJVACIHWUEDKJQETXFKJUXG");

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
    msg.setTimeStamp(0.306126740966);
    msg.setSource(6907U);
    msg.setSourceEntity(102U);
    msg.setDestination(50264U);
    msg.setDestinationEntity(49U);
    msg.timeout = 36169U;
    msg.lat = 0.947454894641;
    msg.lon = 0.955165919828;
    msg.z = 0.597552269673;
    msg.z_units = 172U;
    msg.speed = 0.906763198732;
    msg.speed_units = 23U;
    msg.bearing = 0.247021076809;
    msg.cross_angle = 0.302131313255;
    msg.width = 0.534859860466;
    msg.length = 0.839934758668;
    msg.hstep = 0.0380855098722;
    msg.coff = 31U;
    msg.alternation = 236U;
    msg.flags = 139U;
    msg.custom.assign("SCXOXANXPILVJRIZCWJUUPVFTEWQCPVIVASUKGNCWNUPTLKQXMWSHKKGNUVHREYSUFFAYLDXENTWGZFPSIODVFRCUSMRDUHKOMIRKKAPTFLBNETPPIJHGYGZIMCAISEHAIZRSGMEZMHQAWMLUWMPMXTKTYDRYBEBFBXKJLZEVKXLDZBTGCJJWUSFADZXQGHQEHDOEBOTSRFVPJBHVQGFOYQOYQHWZNLBOATDMJCCDQY");

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
    msg.setTimeStamp(0.443518045597);
    msg.setSource(41266U);
    msg.setSourceEntity(88U);
    msg.setDestination(15908U);
    msg.setDestinationEntity(46U);
    msg.timeout = 34013U;
    msg.lat = 0.72966482914;
    msg.lon = 0.361293113759;
    msg.z = 0.454653203178;
    msg.z_units = 52U;
    msg.speed = 0.648799331057;
    msg.speed_units = 140U;
    msg.bearing = 0.752239670421;
    msg.cross_angle = 0.88606313834;
    msg.width = 0.0580975994656;
    msg.length = 0.817755588661;
    msg.hstep = 0.438773292038;
    msg.coff = 148U;
    msg.alternation = 211U;
    msg.flags = 146U;
    msg.custom.assign("YUVRCMHUYCEPVVQFRPPYJSDXJWZPSECNFLNAIMBKRRXHNLOTZCZQAHHDLNKRUBYNKKLEGIQIYZWZBWU");

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
    msg.setTimeStamp(0.764903964692);
    msg.setSource(14308U);
    msg.setSourceEntity(152U);
    msg.setDestination(41759U);
    msg.setDestinationEntity(34U);
    msg.timeout = 16390U;
    msg.lat = 0.229022319572;
    msg.lon = 0.530825905743;
    msg.z = 0.693303560749;
    msg.z_units = 141U;
    msg.speed = 0.220065586244;
    msg.speed_units = 244U;
    msg.bearing = 0.0584971163972;
    msg.cross_angle = 0.740344429083;
    msg.width = 0.0542613029462;
    msg.length = 0.388907286716;
    msg.hstep = 0.497169360972;
    msg.coff = 240U;
    msg.alternation = 233U;
    msg.flags = 205U;
    msg.custom.assign("AABIXNLGGWJEZJJYRKEDSNQKRUBLITEIEJHILVZHQBPUSCEDWCRRLXNCUFJTQLYQFDCIPKXVOVMLFDKURGMVVAZVYJQOAWBVNGCWZLEEAGXVDLNVDFMHGRU");

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
    msg.setTimeStamp(0.0532482778306);
    msg.setSource(37129U);
    msg.setSourceEntity(202U);
    msg.setDestination(42045U);
    msg.setDestinationEntity(124U);
    msg.timeout = 42408U;
    msg.lat = 0.642080410032;
    msg.lon = 0.691048071669;
    msg.z = 0.66936205281;
    msg.z_units = 34U;
    msg.speed = 0.554455400804;
    msg.speed_units = 223U;
    msg.custom.assign("QKSIDWCYHNOFXULZSYTPJMZHKRUBMAMVNOJZPCZSTCLEXSKCSAQ");

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
    msg.setTimeStamp(0.727385290872);
    msg.setSource(37219U);
    msg.setSourceEntity(55U);
    msg.setDestination(62291U);
    msg.setDestinationEntity(192U);
    msg.timeout = 15096U;
    msg.lat = 0.844919136909;
    msg.lon = 0.995912634077;
    msg.z = 0.46074746337;
    msg.z_units = 150U;
    msg.speed = 0.702328866279;
    msg.speed_units = 16U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.517826725879;
    tmp_msg_0.y = 0.213032474263;
    tmp_msg_0.z = 0.0116528118408;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FZQZNWECKNOZZOVDSTEBLAJROTAWGNNXILMUIFIMTRENGGQMGQSBQHYZGMKCWZYITPKLOPQCDEXOSOVLZQAZJGPFGBPBDNBFWLDMRYXPUXFHFMGVZVIKKDDFUBTCTCIVXPKVHCJEOQAMSSOVRFHRCUYXNJRXFWHDTRGAPWJRCAEHYHSGESRSXQUTYWJOBASBDKXYUAFLUBQCUJDHWUEAJWMRWVILZELVPAS");

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
    msg.setTimeStamp(0.723053112966);
    msg.setSource(9128U);
    msg.setSourceEntity(148U);
    msg.setDestination(48827U);
    msg.setDestinationEntity(178U);
    msg.timeout = 36973U;
    msg.lat = 0.400837167538;
    msg.lon = 0.0153542157112;
    msg.z = 0.0238948006142;
    msg.z_units = 152U;
    msg.speed = 0.460226069942;
    msg.speed_units = 213U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.558609448161;
    tmp_msg_0.y = 0.681722754995;
    tmp_msg_0.z = 0.866273728932;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VLDXXYCNJSGSQHMGMRUCYMGLAMCZBWOFYIGFUWSRPVCUTMBDWNDYQBOTRJOMSZZVGRLZNXSXJFEXQNPUHFFQJUURXCNVJRJRDPGBFTPKMTIAWPWLSAHLGDZQFPDHEOLLBQETOKJSPBNOEXYT");

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
    msg.setTimeStamp(0.00408745775137);
    msg.setSource(62721U);
    msg.setSourceEntity(216U);
    msg.setDestination(52838U);
    msg.setDestinationEntity(214U);
    msg.x = 0.0229900168318;
    msg.y = 0.752589507192;
    msg.z = 0.644738815664;

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
    msg.setTimeStamp(0.192029341134);
    msg.setSource(31004U);
    msg.setSourceEntity(11U);
    msg.setDestination(9894U);
    msg.setDestinationEntity(33U);
    msg.x = 0.175578862155;
    msg.y = 0.165051547581;
    msg.z = 0.269454101545;

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
    msg.setTimeStamp(0.0640188079048);
    msg.setSource(35123U);
    msg.setSourceEntity(153U);
    msg.setDestination(61938U);
    msg.setDestinationEntity(67U);
    msg.x = 0.247506963887;
    msg.y = 0.986232675659;
    msg.z = 0.183892431773;

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
    msg.setTimeStamp(0.591789245279);
    msg.setSource(43934U);
    msg.setSourceEntity(140U);
    msg.setDestination(36211U);
    msg.setDestinationEntity(74U);
    msg.timeout = 30886U;
    msg.lat = 0.189409698936;
    msg.lon = 0.332458313389;
    msg.z = 0.407528662274;
    msg.z_units = 237U;
    msg.amplitude = 0.896767160792;
    msg.pitch = 0.209170012978;
    msg.speed = 0.273189976066;
    msg.speed_units = 12U;
    msg.custom.assign("BFRVVEGCCVHNRHHBZIOKJDRWWUMNOTZBVBIMCGVSLAFISTFPKOSMWQJXUYCK");

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
    msg.setTimeStamp(0.351228090035);
    msg.setSource(23779U);
    msg.setSourceEntity(227U);
    msg.setDestination(2600U);
    msg.setDestinationEntity(144U);
    msg.timeout = 41560U;
    msg.lat = 0.571224304344;
    msg.lon = 0.374802535156;
    msg.z = 0.16896950139;
    msg.z_units = 77U;
    msg.amplitude = 0.853666590337;
    msg.pitch = 0.342685218452;
    msg.speed = 0.35215019316;
    msg.speed_units = 75U;
    msg.custom.assign("FLMJUVMNFANXRUFFSOEXYA");

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
    msg.setTimeStamp(0.126214867242);
    msg.setSource(7335U);
    msg.setSourceEntity(179U);
    msg.setDestination(58494U);
    msg.setDestinationEntity(207U);
    msg.timeout = 22324U;
    msg.lat = 0.486793708786;
    msg.lon = 0.218921204739;
    msg.z = 0.897041569382;
    msg.z_units = 177U;
    msg.amplitude = 0.52946550317;
    msg.pitch = 0.0611797678649;
    msg.speed = 0.172810023234;
    msg.speed_units = 217U;
    msg.custom.assign("WFMYCPZCMGSFAFMKZPNVZEWEWNDJCHLUZXNLNSTQLYAOURBBT");

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
    msg.setTimeStamp(0.240783880727);
    msg.setSource(8999U);
    msg.setSourceEntity(51U);
    msg.setDestination(24917U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.947717009339);
    msg.setSource(48311U);
    msg.setSourceEntity(138U);
    msg.setDestination(30849U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.502402678491);
    msg.setSource(26252U);
    msg.setSourceEntity(182U);
    msg.setDestination(53850U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.923717758936);
    msg.setSource(42371U);
    msg.setSourceEntity(59U);
    msg.setDestination(35605U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.0568458954859;
    msg.lon = 0.928209513439;
    msg.z = 0.887783425227;
    msg.z_units = 51U;
    msg.radius = 0.455182803119;
    msg.duration = 52202U;
    msg.speed = 0.743483733756;
    msg.speed_units = 235U;
    msg.custom.assign("YRQLWOAPJTOANBEMQZBHJPFNEPKEJQCAPWMIAEISTSOFXCFMCXJVNHKPMRZUNTVGDZKSIYSPPXLMIDYJIFFWYCSAKEMAXVLTGTXRZANATCKHCQRHSSFNOCMUMPMDUHVSUOJRSVBYRZIYXGKYZOGBFZLVDJQNGENAIGBWXNGUHQUUWDKRKESLRTBOYWHXLPBPICVXWDZXBHBJEQTDKVCM");

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
    msg.setTimeStamp(0.493706873653);
    msg.setSource(62290U);
    msg.setSourceEntity(158U);
    msg.setDestination(63696U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.833999303714;
    msg.lon = 0.223750007633;
    msg.z = 0.570937445058;
    msg.z_units = 24U;
    msg.radius = 0.879937498541;
    msg.duration = 38341U;
    msg.speed = 0.82856809092;
    msg.speed_units = 215U;
    msg.custom.assign("DAGMJJIMFSGHUOMVIJNASGDPTFYEXHGZDZQJMWPUHUUOBOSLNTINOCATVAYYSSZWXGKROLENYHPLFUZUMLGIRLEWLCPZHCEOUDIEHBWAACZWPWYJGPFMLUZRHCSEVORBJXOBVYTBRSVY");

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
    msg.setTimeStamp(0.0751144203805);
    msg.setSource(45341U);
    msg.setSourceEntity(167U);
    msg.setDestination(63560U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.945951060405;
    msg.lon = 0.149441129799;
    msg.z = 0.356054732687;
    msg.z_units = 31U;
    msg.radius = 0.0199032121657;
    msg.duration = 11963U;
    msg.speed = 0.474243156767;
    msg.speed_units = 49U;
    msg.custom.assign("KNYUDOYXDTALJQWMITPJSFNJJYDXGNYVSPWEXFAFYNRBPLRVQZSVFVFCPAGTOHSJMWCXNSZOFQFWLESCUFITXKYLATUNXGIELBOMRZWTVNMJRRZCEWCDSRHYDEABKUJQYMCUHOAWJIBPOKBMKKPLZSVMHQMROPHRGJONKYHLUZGOXHGTMHAQQIIBTTVCBDNZNGUZSLDUZCDHRKYWGWL");

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
    msg.setTimeStamp(0.271675837392);
    msg.setSource(36448U);
    msg.setSourceEntity(39U);
    msg.setDestination(54540U);
    msg.setDestinationEntity(215U);
    msg.timeout = 54573U;
    msg.flags = 140U;
    msg.lat = 0.758433365242;
    msg.lon = 0.508065247167;
    msg.start_z = 0.852808665558;
    msg.start_z_units = 135U;
    msg.end_z = 0.125514316811;
    msg.end_z_units = 43U;
    msg.radius = 0.0430364127279;
    msg.speed = 0.0405801139063;
    msg.speed_units = 240U;
    msg.custom.assign("YBWNQBMJMHWTPQJGNNZSCRQBVJSOFFXHXHMWFXABEGCJLAKJQKFAGREYZTIOTIAQBOXTVZDDSCXLYVFWARAPUKDLUYXLHTKNLJDDEMWOESJGDGREOAKSWNQCZELLRKKHFBSEVJNIVUPUCKWPOSCTYPMTADFYPPUKAVSMYBUCGTMGVFBWDIPKYCOTWWUXQRHZSZRCBHTIMPBX");

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
    msg.setTimeStamp(0.746881399951);
    msg.setSource(20673U);
    msg.setSourceEntity(12U);
    msg.setDestination(33330U);
    msg.setDestinationEntity(157U);
    msg.timeout = 13600U;
    msg.flags = 140U;
    msg.lat = 0.399485453027;
    msg.lon = 0.424007697887;
    msg.start_z = 0.450507428586;
    msg.start_z_units = 160U;
    msg.end_z = 0.535884492243;
    msg.end_z_units = 208U;
    msg.radius = 0.722226959394;
    msg.speed = 0.301515989166;
    msg.speed_units = 76U;
    msg.custom.assign("MPFFQLCFVXUJBGZAMUGTWZMBHOTKUJVHBGURSYNESGOATTBWFCCEFQRLYIBDEWDAJXHPROCKDTXZNUMOEKCNSAGTMOZIHIUAXSTSZLGLSUOECVPGZWEPDQRPTYXKHAGCIFOLFLIBVQNMCMWLUWKQIQZPXUBHKMYRVRQEFIWX");

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
    msg.setTimeStamp(0.888905451222);
    msg.setSource(14521U);
    msg.setSourceEntity(22U);
    msg.setDestination(53081U);
    msg.setDestinationEntity(159U);
    msg.timeout = 61851U;
    msg.flags = 58U;
    msg.lat = 0.47650544541;
    msg.lon = 0.655238540943;
    msg.start_z = 0.116025423136;
    msg.start_z_units = 247U;
    msg.end_z = 0.0501632051227;
    msg.end_z_units = 215U;
    msg.radius = 0.830954762608;
    msg.speed = 0.267437603606;
    msg.speed_units = 31U;
    msg.custom.assign("DSXVWGAYMBIYZLBCMQSJZTCBA");

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
    msg.setTimeStamp(0.452165000453);
    msg.setSource(64658U);
    msg.setSourceEntity(4U);
    msg.setDestination(16185U);
    msg.setDestinationEntity(153U);
    msg.timeout = 56740U;
    msg.lat = 0.391461754674;
    msg.lon = 0.897281962295;
    msg.z = 0.585562940981;
    msg.z_units = 246U;
    msg.speed = 0.605441507892;
    msg.speed_units = 171U;
    msg.custom.assign("IKSXIPTNAAVNVBWNAJVCZKDQFYKVGWGAINKSICYJOYAEMECUXJPOYILGLPGOUIRIZOITBWQRFTMTEPMQMSCHOOGXYSVUHNXKPHXJQUYUJSZDWEBVFRHKNHLLBTPCALGECYSAFMERDVXFNJAF");

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
    msg.setTimeStamp(0.228318413422);
    msg.setSource(26341U);
    msg.setSourceEntity(18U);
    msg.setDestination(7179U);
    msg.setDestinationEntity(218U);
    msg.timeout = 22988U;
    msg.lat = 0.0744826657262;
    msg.lon = 0.303777825926;
    msg.z = 0.604563572018;
    msg.z_units = 223U;
    msg.speed = 0.810846994477;
    msg.speed_units = 157U;
    msg.custom.assign("QKGSICHQDMZUMSLYJNWMCPVCYYQXBBFJMWZWBSKYUOHITYRKZRHMULOHBRXSXDDRAKQPSKQZCDGEVNCDHWPBZTDNOGVQHOFULWXCUGMAKSPWVVBTPIFXRLUQFCMCMGEFJXHBGYNYEPDSIVFGADAUIHLFOONOHZEPKTFYPLNODTP");

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
    msg.setTimeStamp(0.550564343444);
    msg.setSource(60354U);
    msg.setSourceEntity(135U);
    msg.setDestination(6229U);
    msg.setDestinationEntity(110U);
    msg.timeout = 28834U;
    msg.lat = 0.377555677985;
    msg.lon = 0.516761742731;
    msg.z = 0.779579340543;
    msg.z_units = 108U;
    msg.speed = 0.524077753411;
    msg.speed_units = 119U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0515859801364;
    tmp_msg_0.y = 0.483825516874;
    tmp_msg_0.z = 0.687188426569;
    tmp_msg_0.t = 0.371055991689;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CHQWINRVYONMANTDDBWPZHTBJKEIUFGLWVPJLSMJDGBXRCIVSGVBYDTNXGPTQNFVPWKRDPIFQQDRPKTTYGLFWGKXNIITZRCXOOCUAHOZFMCAXBTF");

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
    msg.setTimeStamp(0.57746541457);
    msg.setSource(8530U);
    msg.setSourceEntity(13U);
    msg.setDestination(41354U);
    msg.setDestinationEntity(224U);
    msg.x = 0.643566289203;
    msg.y = 0.203510716918;
    msg.z = 0.178381896408;
    msg.t = 0.80605354611;

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
    msg.setTimeStamp(0.882127448703);
    msg.setSource(30247U);
    msg.setSourceEntity(106U);
    msg.setDestination(59227U);
    msg.setDestinationEntity(17U);
    msg.x = 0.624595455595;
    msg.y = 0.455639776436;
    msg.z = 0.483876933868;
    msg.t = 0.820993658416;

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
    msg.setTimeStamp(0.642620357629);
    msg.setSource(61608U);
    msg.setSourceEntity(86U);
    msg.setDestination(14720U);
    msg.setDestinationEntity(202U);
    msg.x = 0.112226425089;
    msg.y = 0.281326878071;
    msg.z = 0.848652047453;
    msg.t = 0.873137116214;

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
    msg.setTimeStamp(0.775575402664);
    msg.setSource(8852U);
    msg.setSourceEntity(86U);
    msg.setDestination(6720U);
    msg.setDestinationEntity(89U);
    msg.timeout = 41599U;
    msg.name.assign("JLEUSRUSRAQSPIKZOKXXDPECTQNVCMERFDOXKJAUIHKCQBCGVWSSIZPLTUBTMXGVMLUAWNTBYQIALNNWEGKHDRWLUDJTUIXLBMSLNYZMCTHLSPYNRIJSKVEFMOQXOVMUYCOBWSOGJUTPPVDIOJVAAIJGQZQEVYKZCWFWTZXNRNE");
    msg.custom.assign("ZBDREQQRSVKIQAAIFPRXBEQONHIRHXKFZAONMNWRUHCLQLEGCXTOKSYYUZYGKQVTIDSFYBWCVJQZQDFNCLABMUCRNHVJMCZTEQZSVRGXLCFLKJZIEJSFDODOMBUXIBESPPMPUIETRWMBLYKXSNXCEWFJYUIRXYNAWATJJPXSTGLAGHLOOLO");

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
    msg.setTimeStamp(0.070025787045);
    msg.setSource(46658U);
    msg.setSourceEntity(216U);
    msg.setDestination(33460U);
    msg.setDestinationEntity(213U);
    msg.timeout = 58003U;
    msg.name.assign("AUFPVWDZUODCRQJTRUSPIJITKYRQQJAMGULXODOJPDIPKXAZF");
    msg.custom.assign("GSWQSGXNJREZDAHDOKVVNCUBXZPRIBKJIEOFYUYZBTUHBSFIEFCYWDYGQJISWRPIZDKSWTPXSKPLYMLWLVXBPUEHTGMTHQGITTLXEKKXZOJBPBCUGIFMNTYCRRFQFABSEDVQEALVDAZNMYVEKJCGULPXA");

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
    msg.setTimeStamp(0.791975488192);
    msg.setSource(49984U);
    msg.setSourceEntity(123U);
    msg.setDestination(39618U);
    msg.setDestinationEntity(194U);
    msg.timeout = 16084U;
    msg.name.assign("BCDZOJCGXLBWWMSXYHYLWAPQPNIFKTBUCPGZMYRQAUAKMSMXZEWEIRSXKRCOABENKZKFRNBRJBKALWWMFOCHVNIAXXJYQGEWDRIGIJNQMHYJCCNQFZYOFVFSOZNRJFABPXXYDFUUNIPLCKNSHVGUVTKYVSALCWZKTHVDETGLJTIFVPZAIQYSOGHABRFBQWVUQMCDZDTMJEUDSXL");
    msg.custom.assign("WQWGLEBGLERLBMVMFMGHHSS");

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
    msg.setTimeStamp(0.182459566979);
    msg.setSource(53484U);
    msg.setSourceEntity(136U);
    msg.setDestination(63957U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.688666718919;
    msg.lon = 0.420983429002;
    msg.z = 0.961738023392;
    msg.z_units = 149U;
    msg.speed = 0.916667575;
    msg.speed_units = 214U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.397110450516;
    tmp_msg_0.y = 0.650370494915;
    tmp_msg_0.z = 0.340851906761;
    tmp_msg_0.t = 0.662441917819;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 54423U;
    tmp_msg_1.off_x = 0.205724097016;
    tmp_msg_1.off_y = 0.034547820217;
    tmp_msg_1.off_z = 0.580622623907;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.106349250843;
    msg.custom.assign("XRMWKXLVFAMZFPFXDMBQHWPQPNDSWCMZGMIJVOPOZKKFFQBTDBUEIDOTDRCKJIBXKQLHJYPFECEUSSYLFLTILSYUDNPJATEJYBVFKBTNWGZGICBBSHKKEQVQISWROPLCRLYFUCOYTAZMZNQMANUNCYINRUEHGUFXVOTKRIHOVPVXHXBCBAAWCYQVQHMWCZIXIUHJJESRVWLKQHYUOXZTJGNTLVNRPNSAPWERJRHGZSGWGUZDTMYMD");

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
    msg.setTimeStamp(0.472453346516);
    msg.setSource(16366U);
    msg.setSourceEntity(188U);
    msg.setDestination(33811U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.170987891911;
    msg.lon = 0.114087701147;
    msg.z = 0.674869805809;
    msg.z_units = 115U;
    msg.speed = 0.835903942503;
    msg.speed_units = 149U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.302538213307;
    tmp_msg_0.y = 0.269777866446;
    tmp_msg_0.z = 0.571021859289;
    tmp_msg_0.t = 0.934593898928;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.727947563515;
    msg.custom.assign("FRZSSIGNMRMQOPQFWKMYIOOHBCBPLFRDUOXCOIELURLHKJFKAHNMVFSNSEQLXGIKYPQSUNGYQVJCTNZYCLNYHPJXBRPDZZNKLIKECYWGXTVDOFUDZGARGBQWIEBBCPKMBLQDRJJIHVVGTJTUTFSEWPOYXFDNJTSDCELABDXURMZKJBXHMEAZQOO");

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
    msg.setTimeStamp(0.875128665483);
    msg.setSource(21737U);
    msg.setSourceEntity(135U);
    msg.setDestination(2286U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.536881891816;
    msg.lon = 0.479062333592;
    msg.z = 0.534903859987;
    msg.z_units = 21U;
    msg.speed = 0.85135626872;
    msg.speed_units = 30U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.715825122317;
    tmp_msg_0.y = 0.508052749124;
    tmp_msg_0.z = 0.809805913817;
    tmp_msg_0.t = 0.0555857990466;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.0074434722375;
    msg.custom.assign("CKZFRXWZUJKTYIDINZPGRZTKWOLBZVQSJXEHFDNUFTQNFIDRFWKC");

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
    msg.setTimeStamp(0.657601583851);
    msg.setSource(54480U);
    msg.setSourceEntity(166U);
    msg.setDestination(3182U);
    msg.setDestinationEntity(239U);
    msg.vid = 12375U;
    msg.off_x = 0.39883188172;
    msg.off_y = 0.481572868124;
    msg.off_z = 0.186203389683;

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
    msg.setTimeStamp(0.0257560624532);
    msg.setSource(29183U);
    msg.setSourceEntity(24U);
    msg.setDestination(31399U);
    msg.setDestinationEntity(45U);
    msg.vid = 57494U;
    msg.off_x = 0.0968009966226;
    msg.off_y = 0.302020926286;
    msg.off_z = 0.698588643657;

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
    msg.setTimeStamp(0.365585706866);
    msg.setSource(17288U);
    msg.setSourceEntity(104U);
    msg.setDestination(34424U);
    msg.setDestinationEntity(158U);
    msg.vid = 38710U;
    msg.off_x = 0.46840496577;
    msg.off_y = 0.0426708236516;
    msg.off_z = 0.982100126071;

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
    msg.setTimeStamp(0.751733483432);
    msg.setSource(28049U);
    msg.setSourceEntity(204U);
    msg.setDestination(29505U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.793947626236);
    msg.setSource(32084U);
    msg.setSourceEntity(167U);
    msg.setDestination(44181U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.168790062719);
    msg.setSource(25979U);
    msg.setSourceEntity(85U);
    msg.setDestination(7900U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.310143753162);
    msg.setSource(54940U);
    msg.setSourceEntity(89U);
    msg.setDestination(53415U);
    msg.setDestinationEntity(179U);
    msg.mid = 17030U;

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
    msg.setTimeStamp(0.935274311893);
    msg.setSource(60914U);
    msg.setSourceEntity(169U);
    msg.setDestination(38814U);
    msg.setDestinationEntity(27U);
    msg.mid = 25020U;

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
    msg.setTimeStamp(0.787164827587);
    msg.setSource(34685U);
    msg.setSourceEntity(221U);
    msg.setDestination(19812U);
    msg.setDestinationEntity(177U);
    msg.mid = 16114U;

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
    msg.setTimeStamp(0.400026278337);
    msg.setSource(24134U);
    msg.setSourceEntity(123U);
    msg.setDestination(9657U);
    msg.setDestinationEntity(46U);
    msg.state = 142U;
    msg.eta = 3563U;
    msg.info.assign("CLMYMHXXOTZKZBDAMSCVSOBCJNLAQFTQOLZMRVEYINFFXFDXBN");

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
    msg.setTimeStamp(0.464648783084);
    msg.setSource(30280U);
    msg.setSourceEntity(146U);
    msg.setDestination(26263U);
    msg.setDestinationEntity(13U);
    msg.state = 217U;
    msg.eta = 18491U;
    msg.info.assign("TJVWJLUSTFIGWYWEOWQTISVICPTYJSZAFMYKVTBBXAMHALRANWXUVDVSKEOURMI");

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
    msg.setTimeStamp(0.362863046152);
    msg.setSource(57947U);
    msg.setSourceEntity(83U);
    msg.setDestination(32024U);
    msg.setDestinationEntity(205U);
    msg.state = 66U;
    msg.eta = 9329U;
    msg.info.assign("GCILWKHZNSMWDLCPTPIWW");

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
    msg.setTimeStamp(0.171867402812);
    msg.setSource(16454U);
    msg.setSourceEntity(24U);
    msg.setDestination(64211U);
    msg.setDestinationEntity(136U);
    msg.system = 4872U;
    msg.duration = 6770U;
    msg.speed = 0.744160876245;
    msg.speed_units = 164U;
    msg.x = 0.873041640924;
    msg.y = 0.138484638046;
    msg.z = 0.200667661414;
    msg.z_units = 47U;

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
    msg.setTimeStamp(0.214416443065);
    msg.setSource(55190U);
    msg.setSourceEntity(71U);
    msg.setDestination(44277U);
    msg.setDestinationEntity(201U);
    msg.system = 49642U;
    msg.duration = 32581U;
    msg.speed = 0.244001446163;
    msg.speed_units = 5U;
    msg.x = 0.990000219909;
    msg.y = 0.0159339374449;
    msg.z = 0.103992554061;
    msg.z_units = 21U;

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
    msg.setTimeStamp(0.631826351068);
    msg.setSource(4190U);
    msg.setSourceEntity(121U);
    msg.setDestination(38384U);
    msg.setDestinationEntity(4U);
    msg.system = 62568U;
    msg.duration = 49750U;
    msg.speed = 0.768014300319;
    msg.speed_units = 192U;
    msg.x = 0.0689425373049;
    msg.y = 0.00813351925025;
    msg.z = 0.283331014358;
    msg.z_units = 96U;

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
    msg.setTimeStamp(0.895042842645);
    msg.setSource(47882U);
    msg.setSourceEntity(193U);
    msg.setDestination(32171U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.840940058518;
    msg.lon = 0.800970388837;
    msg.speed = 0.0499584825568;
    msg.speed_units = 135U;
    msg.duration = 53457U;
    msg.sys_a = 60197U;
    msg.sys_b = 46702U;
    msg.move_threshold = 0.579373441446;

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
    msg.setTimeStamp(0.928445300285);
    msg.setSource(8333U);
    msg.setSourceEntity(153U);
    msg.setDestination(39056U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.718573309289;
    msg.lon = 0.0797125897429;
    msg.speed = 0.177666430965;
    msg.speed_units = 131U;
    msg.duration = 45022U;
    msg.sys_a = 30454U;
    msg.sys_b = 56561U;
    msg.move_threshold = 0.817584868093;

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
    msg.setTimeStamp(0.816046371693);
    msg.setSource(30937U);
    msg.setSourceEntity(215U);
    msg.setDestination(31233U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.622532231811;
    msg.lon = 0.912666083416;
    msg.speed = 0.0875730728293;
    msg.speed_units = 117U;
    msg.duration = 7804U;
    msg.sys_a = 25001U;
    msg.sys_b = 54242U;
    msg.move_threshold = 0.107157509194;

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
    msg.setTimeStamp(0.47574975835);
    msg.setSource(13646U);
    msg.setSourceEntity(220U);
    msg.setDestination(14745U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.901901771443;
    msg.lon = 0.810998188096;
    msg.z = 0.975711111564;
    msg.z_units = 132U;
    msg.speed = 0.00725886997276;
    msg.speed_units = 92U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.750396107745;
    tmp_msg_0.lon = 0.445812792613;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("OJKWCTNOFLDKQYSXNYGVXQUTRCLGHUBHMYEAASOTDJXJRNQDIMOZBGLWBEDHNYUBGARTDOMRESHBCHVIKSGTGJZQNBFWYXT");

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
    msg.setTimeStamp(0.572143495578);
    msg.setSource(29086U);
    msg.setSourceEntity(188U);
    msg.setDestination(61382U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.463983435696;
    msg.lon = 0.227401283142;
    msg.z = 0.868143007467;
    msg.z_units = 39U;
    msg.speed = 0.391819793684;
    msg.speed_units = 71U;
    msg.custom.assign("PEEVKDRBXUPQWQPG");

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
    msg.setTimeStamp(0.881764302908);
    msg.setSource(27271U);
    msg.setSourceEntity(165U);
    msg.setDestination(56119U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.0977497432006;
    msg.lon = 0.878398556283;
    msg.z = 0.444896174117;
    msg.z_units = 37U;
    msg.speed = 0.404941995148;
    msg.speed_units = 99U;
    msg.custom.assign("ZWLCCEQYDLHQYFRRMZISQWXFLJLEBJFBYBGOAULOCDC");

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
    msg.setTimeStamp(0.0474641052488);
    msg.setSource(54706U);
    msg.setSourceEntity(147U);
    msg.setDestination(51906U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.077732963126;
    msg.lon = 0.458762143131;

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
    msg.setTimeStamp(0.163851307087);
    msg.setSource(63339U);
    msg.setSourceEntity(9U);
    msg.setDestination(30314U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.812828912234;
    msg.lon = 0.204037453339;

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
    msg.setTimeStamp(0.0627284653192);
    msg.setSource(38056U);
    msg.setSourceEntity(120U);
    msg.setDestination(50593U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.435153824245;
    msg.lon = 0.870348950581;

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
    msg.setTimeStamp(0.303503340884);
    msg.setSource(34194U);
    msg.setSourceEntity(124U);
    msg.setDestination(27187U);
    msg.setDestinationEntity(145U);
    msg.timeout = 14598U;
    msg.lat = 0.93791395691;
    msg.lon = 0.946756676194;
    msg.z = 0.402038380202;
    msg.z_units = 0U;
    msg.pitch = 0.347940170321;
    msg.amplitude = 0.868976054984;
    msg.duration = 55687U;
    msg.speed = 0.692074754335;
    msg.speed_units = 245U;
    msg.radius = 0.841447185389;
    msg.direction = 7U;
    msg.custom.assign("UDSSSHIIGXHYSHRDTALVOKTVVBQMATQYQKIGSYKXNDVJBCPARZMUZXBEHIMJZYUFSUXNUPIWCWXFEJHNZABIOQLQFNLBFYZCYNMGJRGRNEKKKWCUGAOHLRKOUFVPTYWTSFOEPXDCZONBWAQCARMOXJXPVTKAOJTDGMA");

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
    msg.setTimeStamp(0.67261256078);
    msg.setSource(14062U);
    msg.setSourceEntity(107U);
    msg.setDestination(53521U);
    msg.setDestinationEntity(225U);
    msg.timeout = 15445U;
    msg.lat = 0.744076774331;
    msg.lon = 0.983471426606;
    msg.z = 0.662978264273;
    msg.z_units = 247U;
    msg.pitch = 0.0381512400678;
    msg.amplitude = 0.119223416605;
    msg.duration = 27127U;
    msg.speed = 0.791816220621;
    msg.speed_units = 8U;
    msg.radius = 0.239320147762;
    msg.direction = 128U;
    msg.custom.assign("SEQMPTFQMNREHBJYHJOWVDGXYMSPFDJHPUTTBUOKNITEWFYNQDFAACKSVKHOQIGKWUVTHEZMKARSGUFFFLVIDGXWQKUYQIXLWIAPBATLIUMGHKSSMWBGIRZBHINEEOSPWXFRZGRYYRPJKTQGYRVRCQVNCVNUTBJZOLLCVCPFPQDSJHAEEDRXDKVCAUNBLEWNGABYZTVZDJIYOXFSJMCBJZLUDMNEZHO");

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
    msg.setTimeStamp(0.38910244107);
    msg.setSource(16698U);
    msg.setSourceEntity(206U);
    msg.setDestination(61831U);
    msg.setDestinationEntity(232U);
    msg.timeout = 50654U;
    msg.lat = 0.0485358861476;
    msg.lon = 0.15700112975;
    msg.z = 0.929722283078;
    msg.z_units = 32U;
    msg.pitch = 0.992973793023;
    msg.amplitude = 0.724437485989;
    msg.duration = 47339U;
    msg.speed = 0.0198696330543;
    msg.speed_units = 174U;
    msg.radius = 0.939761806768;
    msg.direction = 186U;
    msg.custom.assign("KMXRVQWQLPABS");

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
    msg.setTimeStamp(0.89292142966);
    msg.setSource(1839U);
    msg.setSourceEntity(104U);
    msg.setDestination(22590U);
    msg.setDestinationEntity(144U);
    msg.formation_name.assign("PCJGANNEDGEVBKICWTKVHESJQMQJSYCUDJMYRCOBPYGNNWVDMHRNDZQNGDWGOFSWBLLYZSRFHUWDMKSAZGIBELRKRHEBXVZBCLZNHTIXHTWUXDSSTRKJXAAPVXQOITFOPOBNIVUOATEBQZFWGMTDDHIFURPLKPIXVCZUMPVUQOWBMLAXNTXNYYIQAZJXHAHURFQXLRRIKPMMJSPGEQFYKJSCOBZJPZEYVKGLA");
    msg.reference_frame = 108U;
    msg.custom.assign("NUFKJJMUVJMRXTMLOOKKAOJNILPAHZVFGSMRZCZZPNDEBBXWBNVFYTCVFZPPEAJRHBXSGPHDDKKLECEZIHLSOGXFNIRQQXBEUADHLGLCJRQIHROEXKVUSNZXFQA");

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
    msg.setTimeStamp(0.813428078414);
    msg.setSource(28361U);
    msg.setSourceEntity(123U);
    msg.setDestination(7550U);
    msg.setDestinationEntity(26U);
    msg.formation_name.assign("WYDWMPGYHHJPQMDISDFYMPEBLLMUZWDORYBQTCRCKKCGSEFJBSGVASHNZJYNKODXNPLVBICUMOOTECWRKJQNNHSSKCAUPRVOYWHLBEOXOIQNNMGMOWRTBZXDKACXWQPTUBHVSJTOJLQUOIWPIPAVDAYIGGIDESTAMPUZUNRVLCBWGRBUCMATJEAEGFFENIHGSHELDVXDVKQQNAUXAMFPZHFZHXTJXRTYQFSZWKLRF");
    msg.reference_frame = 28U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 50385U;
    tmp_msg_0.off_x = 0.590999711516;
    tmp_msg_0.off_y = 0.82322962295;
    tmp_msg_0.off_z = 0.129880590403;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("QIVLTXHSBVHIBZGGIZNZESORSPLQFYGIVYXRDNJRSQZJCMVYAPYBPTUGCOLSRTSWGPTMNLJWKHOAVRNYZROMPDXRPKEVAOWNIEOMACFUZKWGQHMJAWSMUBYKWCKLAQQDEVETCVMHXQLTHHHFKYRROFRXUEWEEFIXDXYUSCIDDLBUUKUELCNIPULQNIN");

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
    msg.setTimeStamp(0.0154954877313);
    msg.setSource(63306U);
    msg.setSourceEntity(221U);
    msg.setDestination(982U);
    msg.setDestinationEntity(98U);
    msg.formation_name.assign("LDSMSBEPTKRIZISXUBPSQUGCTPQKOYYZNTNPVRRFOPHQZSKFDEJZHWDCOYVCIXFQCBNFKMOZGADRZALLBGU");
    msg.reference_frame = 176U;
    msg.custom.assign("EWJOUQPUFMBXYIHDXRZGWYPXPUDFPXLEBIJDPNTZTOQTKUARHBPWMAKV");

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
    msg.setTimeStamp(0.145564423713);
    msg.setSource(14854U);
    msg.setSourceEntity(50U);
    msg.setDestination(16275U);
    msg.setDestinationEntity(215U);
    msg.group_name.assign("FWTKGNICHJNVLCGMAIFUZDSGQNEEPPMPNHAOBOJWHRGZATBGRJOYJUHRGSRTYKJYDSVDCBXTEEHSUQWZNDMQMPDIITRUPWIIFXTKYOBFCMMFIDNDPESXKUFXMBXGWXKHWUVLWOAUYTQVHELXRRONPEZXZHCOARJFHXTQNZWPFJZGKZUZJYLDOOQOL");
    msg.formation_name.assign("VYGCRPMUOEEURLLUHLYSLQRVNMCQQJWSQHDTPQQEIKYYDFQBFJNPCNTWUXDPAXTIPFNADGFYFVGTPUEAHLKBOCRHJPRYFVRLKBNLBAGPHMRDEAXOCMVYQWMOSBSVBJZZVAJJTZYFLKFMMZHCCIHCQXENNNZGSIGIFXGWBBWTLDWXSUQMLUEPBWHZSHZGIWXAZTRXOKYEVNTKSVAUJSRIHUDOOAD");
    msg.plan_id.assign("FOZOABNLWYUSLAEVVCJAYRMKUQDFBZPDMYXCXVBSRHAIYKFXQKPQHYUWOZRDNDOHLSVMFATJPPUJNRJNEPZCZMQPKYGGBKIWGEBNEOTQJZSDDHIYX");
    msg.description.assign("PEKIDMFJOSSWAVSGIVULTXNLSCGLCIEJCZROBMWUUWHEXIUQEJQHSIMZBRLLCXYSFXMXKNZLBTOPDMQXOPHSOUPTTRWQQAMCYBHTFNNXRZUBYEFWJFVFYLEJAAPIQYAOJMDBGUWQAWWLRTIOMSNBBOGIAXTQIDHJRZNMEVTPCDNFPSDDNJMYDURPVVOBOEDLVGSFYCWYRVIFAUQACK");
    msg.leader_speed = 0.20293248076;
    msg.leader_bank_lim = 0.661028105429;
    msg.pos_sim_err_lim = 0.889309892062;
    msg.pos_sim_err_wrn = 0.894563870317;
    msg.pos_sim_err_timeout = 1024U;
    msg.converg_max = 0.569442583753;
    msg.converg_timeout = 21364U;
    msg.comms_timeout = 23274U;
    msg.turb_lim = 0.0670040806004;
    msg.custom.assign("OUHHWSYMAAOECLYBIPHTJSFFVYPJUQLLSAIOPFKPVXJXMUFTSTWFZZOTUEJNGEBINKEMNZEHDIQREFWTQVIIXBRVCSERVSHQKBMZCTDZHALGIKFCPRRQGVOTGPQLZCCCOKTNKVBWUDBWVAXAJZMDQKQJQOOTDSVJKNN");

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
    msg.setTimeStamp(0.0202957101246);
    msg.setSource(11698U);
    msg.setSourceEntity(216U);
    msg.setDestination(27967U);
    msg.setDestinationEntity(146U);
    msg.group_name.assign("MXZQSEZSLQWVMUEQYZZUYWADCQMYOCCAUCYTVDXSATUOTSUKVFWLTGKUDBLJRHPBGOEHARFEFKPELEAZSZLTNIHWJXDHIDKBGXGQJKIBGDIFRLAMHQUOOOPXPJRKBBMNIMMXFEPBMAYURVYBVXTNHKZZCQJCEIPCTUVSJLFQBQDSKR");
    msg.formation_name.assign("DMTZZBQCUYNOZEXMZVGFMNBUYCJQDSTZJFAKAMCVCKXKELLWJIKKRCYWPRQEYEQEUPRVGPFRCFPVEVJEJHMULEOAKYDPXPJLSDWUFAKMHGKRWHBNBHOZGIWHITIXGJGZJAQTBNTAYPRXVHLRODOGNODJZSDLXTRSBPTQYOHBJXNZRQQESIAWTBSQWAIHXDCNCWVXPVYMY");
    msg.plan_id.assign("HXYGYEOFNZDGHMWANUYNKFRISVIRWSCHHJZLYGYLCXRIWRFDVYCDWOQBIKG");
    msg.description.assign("CNXQRFTBITZOOXGUDNJXJJIYFPCCVKWLQKHNXDNWERAHMSZBTFRUVPAHSBCNUSMSOCDURNFMYLODQEFBQCKVZPCUAGJMOFJTHVTXWFBUNAEIUWQYBKZHYDEGWSWILFDJGYRPFPLXTMMHJASRVPHGJOCKJZMGZMVDSAQZVGBWAVSIRQIKOSTZRBNKFKBEEOGCXLIAWYAEVYXSQHUKHI");
    msg.leader_speed = 0.642240742795;
    msg.leader_bank_lim = 0.496753602505;
    msg.pos_sim_err_lim = 0.95015582422;
    msg.pos_sim_err_wrn = 0.518286504928;
    msg.pos_sim_err_timeout = 984U;
    msg.converg_max = 0.960546594166;
    msg.converg_timeout = 36573U;
    msg.comms_timeout = 51318U;
    msg.turb_lim = 0.176194775781;
    msg.custom.assign("AERXUEDYYWKYYTUQZPBHKGVRXELMAREXMYITWVNACQFOVWBMJRMFCJJWYQHYRGGRIKJNKZLFWXABCCPQTUIPNUHDBDYOBFQZLPLSSSFXQUVPOMZAOFTHZKIGEMIBWCFAHEAIHJXHOGLVVVRNIUOJNPCCQXHZNCIXDQKYZSKDKWORLBPZBNDWODUESSMNPBQERZHNSEZAIAUFSJLDWFJGGCDNHJMYMPTLWTCT");

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
    msg.setTimeStamp(0.624704275143);
    msg.setSource(40940U);
    msg.setSourceEntity(234U);
    msg.setDestination(38215U);
    msg.setDestinationEntity(92U);
    msg.group_name.assign("VWZARQDDLILZPFOYNLLWELXBCHMJWAZSCUAWHMUICBYIJHQCWERNAGYAYISRWJTLYQSQQOKJVOGELZEPYGDAINFGVBPHMSULLXWEGKTFCHHJFUTSSLXRDUCXDKXSWTTTMTZWXPYOZSNICPJNYOEPPFDHKEFVBZURPUHAQQJSRCXBNBVINBGH");
    msg.formation_name.assign("USHFKGFTUIMSGQJPGOZWWFCLMBMPZXRTGJVCPEVAXUBWMXLCQUJWUQYNPJWBVSFRMKJGGNHYXEEEFCCJHWWACPCISFEQLDHYSSEDHTBKVOASRYI");
    msg.plan_id.assign("QJXSETILJDKCWDTEXXSCLRWFWHAMMLHPAOAPDBPANHPCACPKUYUFZUNVVDEZFSYJNRBXXQGWQWCSHOBFMGHPYIARYDGKIASRRPXVYORFASETUSZQGIIWNGDUTESITMHLQJZYEYMPRRZEWHZUUJFOLUHGEBQMKQGAVOHZVBVPDQFRTCJVFXNOUZCFODTXOMVVDGRKJDMILNZBYKCXWTIJBNCWVMJLZTOSLBIQKNGGKEJAEYXWN");
    msg.description.assign("VISLGYBYKIFZXOJAGSAMTAKEQFQNKIFHKQTLERFWYKGGMPNISMAZJJDMZSMARSRTUQJILMZVMTGWGWCWOKRGYOUJWHBQQNWNREWCSTVBHHHIHSOQCLYPDLSQNTUDRGNCYCQMBUWAHUCUVPEE");
    msg.leader_speed = 0.205939485864;
    msg.leader_bank_lim = 0.528145385051;
    msg.pos_sim_err_lim = 0.80101485563;
    msg.pos_sim_err_wrn = 0.783572892333;
    msg.pos_sim_err_timeout = 39568U;
    msg.converg_max = 0.597734316476;
    msg.converg_timeout = 64267U;
    msg.comms_timeout = 4474U;
    msg.turb_lim = 0.771823359209;
    msg.custom.assign("CMIFCXKDOPKTWHUUNXLNWVSKWQAFYEQPKJEQRPVPSHPPOANQLJBJZBQBMZRJZAFCZVSHNMYVKVNGIVBJLUEUVRIBHAPIDWSUDOOODBMUEXBYRMOYAJTLDGXMRZOMUXFGP");

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
    msg.setTimeStamp(0.638106883282);
    msg.setSource(36020U);
    msg.setSourceEntity(225U);
    msg.setDestination(36787U);
    msg.setDestinationEntity(151U);
    msg.control_src = 62968U;
    msg.control_ent = 228U;
    msg.timeout = 0.141586260928;
    msg.loiter_radius = 0.627525372633;
    msg.altitude_interval = 0.606733746866;

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
    msg.setTimeStamp(0.707575796467);
    msg.setSource(62611U);
    msg.setSourceEntity(34U);
    msg.setDestination(20050U);
    msg.setDestinationEntity(130U);
    msg.control_src = 35241U;
    msg.control_ent = 125U;
    msg.timeout = 0.148061499741;
    msg.loiter_radius = 0.0391533729113;
    msg.altitude_interval = 0.979573314088;

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
    msg.setTimeStamp(0.710591497887);
    msg.setSource(17845U);
    msg.setSourceEntity(121U);
    msg.setDestination(3334U);
    msg.setDestinationEntity(159U);
    msg.control_src = 53616U;
    msg.control_ent = 77U;
    msg.timeout = 0.865917274007;
    msg.loiter_radius = 0.372357685251;
    msg.altitude_interval = 0.37852805816;

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
    msg.setTimeStamp(0.788745940861);
    msg.setSource(49267U);
    msg.setSourceEntity(141U);
    msg.setDestination(29692U);
    msg.setDestinationEntity(214U);
    msg.flags = 82U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.545200764398;
    tmp_msg_0.speed_units = 87U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.647248685988;
    tmp_msg_1.z_units = 80U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.614980489906;
    msg.lon = 0.432900080175;
    msg.radius = 0.0899124503306;

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
    msg.setTimeStamp(0.83460137509);
    msg.setSource(64446U);
    msg.setSourceEntity(17U);
    msg.setDestination(15649U);
    msg.setDestinationEntity(31U);
    msg.flags = 175U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.529595811598;
    tmp_msg_0.speed_units = 5U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.956431238906;
    tmp_msg_1.z_units = 213U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.858624253398;
    msg.lon = 0.457191684874;
    msg.radius = 0.146638910979;

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
    msg.setTimeStamp(0.490504298652);
    msg.setSource(36103U);
    msg.setSourceEntity(133U);
    msg.setDestination(48871U);
    msg.setDestinationEntity(12U);
    msg.flags = 217U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.484102389131;
    tmp_msg_0.speed_units = 191U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.697141460636;
    tmp_msg_1.z_units = 244U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.984194064988;
    msg.lon = 0.4854555095;
    msg.radius = 0.61131921651;

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
    msg.setTimeStamp(0.0344767260455);
    msg.setSource(37243U);
    msg.setSourceEntity(218U);
    msg.setDestination(39597U);
    msg.setDestinationEntity(62U);
    msg.control_src = 26104U;
    msg.control_ent = 176U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 247U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.340583365064;
    tmp_tmp_msg_0_0.speed_units = 11U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.976630707844;
    tmp_tmp_msg_0_1.z_units = 170U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.247374422251;
    tmp_msg_0.lon = 0.622961539614;
    tmp_msg_0.radius = 0.515379152036;
    msg.reference.set(tmp_msg_0);
    msg.state = 113U;
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
    msg.setTimeStamp(0.710459679534);
    msg.setSource(14215U);
    msg.setSourceEntity(120U);
    msg.setDestination(39539U);
    msg.setDestinationEntity(173U);
    msg.control_src = 6821U;
    msg.control_ent = 135U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 75U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.903408085966;
    tmp_tmp_msg_0_0.speed_units = 25U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.854489987775;
    tmp_tmp_msg_0_1.z_units = 22U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0696304355187;
    tmp_msg_0.lon = 0.443008001232;
    tmp_msg_0.radius = 0.255451395115;
    msg.reference.set(tmp_msg_0);
    msg.state = 39U;
    msg.proximity = 43U;

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
    msg.setTimeStamp(0.169231332285);
    msg.setSource(46444U);
    msg.setSourceEntity(19U);
    msg.setDestination(31520U);
    msg.setDestinationEntity(69U);
    msg.control_src = 52660U;
    msg.control_ent = 217U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 107U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0311659058854;
    tmp_tmp_msg_0_0.speed_units = 122U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.967616210904;
    tmp_tmp_msg_0_1.z_units = 2U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.996576954325;
    tmp_msg_0.lon = 0.416810033179;
    tmp_msg_0.radius = 0.977959921808;
    msg.reference.set(tmp_msg_0);
    msg.state = 93U;
    msg.proximity = 228U;

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
    msg.setTimeStamp(0.517053914948);
    msg.setSource(47521U);
    msg.setSourceEntity(145U);
    msg.setDestination(54364U);
    msg.setDestinationEntity(104U);
    msg.ax_cmd = 0.814186031524;
    msg.ay_cmd = 0.963394289526;
    msg.az_cmd = 0.2966781197;
    msg.ax_des = 0.389883933326;
    msg.ay_des = 0.586904426678;
    msg.az_des = 0.0535535243659;
    msg.virt_err_x = 0.0672896682868;
    msg.virt_err_y = 0.170208321133;
    msg.virt_err_z = 0.812305671801;
    msg.surf_fdbk_x = 0.0792627422028;
    msg.surf_fdbk_y = 0.536056451241;
    msg.surf_fdbk_z = 0.188987426078;
    msg.surf_unkn_x = 0.411951002278;
    msg.surf_unkn_y = 0.89704266228;
    msg.surf_unkn_z = 0.544664518377;
    msg.ss_x = 0.220074763094;
    msg.ss_y = 0.77012162911;
    msg.ss_z = 0.611779834132;

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
    msg.setTimeStamp(0.0536506960979);
    msg.setSource(20345U);
    msg.setSourceEntity(232U);
    msg.setDestination(10971U);
    msg.setDestinationEntity(180U);
    msg.ax_cmd = 0.893210084255;
    msg.ay_cmd = 0.55656568309;
    msg.az_cmd = 0.0342905226215;
    msg.ax_des = 0.877701878604;
    msg.ay_des = 0.90278591818;
    msg.az_des = 0.67807141138;
    msg.virt_err_x = 0.219003729425;
    msg.virt_err_y = 0.353205184848;
    msg.virt_err_z = 0.490175929774;
    msg.surf_fdbk_x = 0.279474040009;
    msg.surf_fdbk_y = 0.106569384896;
    msg.surf_fdbk_z = 0.725220276584;
    msg.surf_unkn_x = 0.910432753208;
    msg.surf_unkn_y = 0.37471171322;
    msg.surf_unkn_z = 0.783548476287;
    msg.ss_x = 0.554992148918;
    msg.ss_y = 0.273896214142;
    msg.ss_z = 0.620285100112;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("URVGTGEHGMFKJIRHQPGFRAXURQGYVXJAEZZQWJPZHFFMTGOITWPCLNZOGZVACBJCLZYPNWXENAXQLDCEQSPTDGUBIGLHVYPFWQFHKOLCBZRBATRMABMAXNLKXZFSDOJQKUCSVXGRVTEFIWNYOUPMPBOV");
    tmp_msg_0.dist = 0.585011991033;
    tmp_msg_0.err = 0.108597179013;
    tmp_msg_0.ctrl_imp = 0.662490997257;
    tmp_msg_0.rel_dir_x = 0.838951665463;
    tmp_msg_0.rel_dir_y = 0.645320629241;
    tmp_msg_0.rel_dir_z = 0.785896547754;
    tmp_msg_0.err_x = 0.953377674321;
    tmp_msg_0.err_y = 0.819914590535;
    tmp_msg_0.err_z = 0.362986899488;
    tmp_msg_0.rf_err_x = 0.0121236467226;
    tmp_msg_0.rf_err_y = 0.336649870552;
    tmp_msg_0.rf_err_z = 0.541306489394;
    tmp_msg_0.rf_err_vx = 0.644626088867;
    tmp_msg_0.rf_err_vy = 0.822758671581;
    tmp_msg_0.rf_err_vz = 0.099894972522;
    tmp_msg_0.ss_x = 0.530463720719;
    tmp_msg_0.ss_y = 0.913245850646;
    tmp_msg_0.ss_z = 0.675328556604;
    tmp_msg_0.virt_err_x = 0.316127336515;
    tmp_msg_0.virt_err_y = 0.605388317929;
    tmp_msg_0.virt_err_z = 0.964592547216;
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
    msg.setTimeStamp(0.633809215744);
    msg.setSource(16575U);
    msg.setSourceEntity(225U);
    msg.setDestination(50731U);
    msg.setDestinationEntity(94U);
    msg.ax_cmd = 0.471275957394;
    msg.ay_cmd = 0.11584316467;
    msg.az_cmd = 0.236807917967;
    msg.ax_des = 0.100080657106;
    msg.ay_des = 0.605842817373;
    msg.az_des = 0.735454905568;
    msg.virt_err_x = 0.314058269355;
    msg.virt_err_y = 0.657416045788;
    msg.virt_err_z = 0.749757834623;
    msg.surf_fdbk_x = 0.939454162438;
    msg.surf_fdbk_y = 0.781649343067;
    msg.surf_fdbk_z = 0.762178906107;
    msg.surf_unkn_x = 0.452170299636;
    msg.surf_unkn_y = 0.234304934613;
    msg.surf_unkn_z = 0.330822368368;
    msg.ss_x = 0.981059256536;
    msg.ss_y = 0.67502397363;
    msg.ss_z = 0.472008165495;

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
    msg.setTimeStamp(0.481429753056);
    msg.setSource(37033U);
    msg.setSourceEntity(235U);
    msg.setDestination(48753U);
    msg.setDestinationEntity(8U);
    msg.s_id.assign("RWHIYDQMUOEYRYLDPNYAPBBMPKHZVSIWQCNLIGNSWJCUYWWEZMIHLDJGMGAJHHCOKAEVLODTLCJQCLOOPCNASHGONTBPMTJGSKURUWPSSMIFVSLEFRTQCPRZSVWBAFUKYGSCOQYGBXGICBWEIXKDKTPXQNZMXJQJVZQHUXVXKARAV");
    msg.dist = 0.448037159767;
    msg.err = 0.519602325184;
    msg.ctrl_imp = 0.608542126222;
    msg.rel_dir_x = 0.0953326215296;
    msg.rel_dir_y = 0.373668067006;
    msg.rel_dir_z = 0.987988917689;
    msg.err_x = 0.258675215358;
    msg.err_y = 0.542565686145;
    msg.err_z = 0.230717995283;
    msg.rf_err_x = 0.870309443601;
    msg.rf_err_y = 0.588451076903;
    msg.rf_err_z = 0.40230908191;
    msg.rf_err_vx = 0.360369862555;
    msg.rf_err_vy = 0.259884103683;
    msg.rf_err_vz = 0.470752846592;
    msg.ss_x = 0.234015228417;
    msg.ss_y = 0.569273528567;
    msg.ss_z = 0.720235716388;
    msg.virt_err_x = 0.262514722464;
    msg.virt_err_y = 0.438203286642;
    msg.virt_err_z = 0.856121307155;

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
    msg.setTimeStamp(0.765425942874);
    msg.setSource(64116U);
    msg.setSourceEntity(186U);
    msg.setDestination(45554U);
    msg.setDestinationEntity(232U);
    msg.s_id.assign("QNERYRYBKKPDTTCDCLIEPJACMHGSCZWMIBAROUUWNJGBKWZXVKUKDDRPXIGMUJPUFQU");
    msg.dist = 0.758465371181;
    msg.err = 0.0320430528699;
    msg.ctrl_imp = 0.47381184565;
    msg.rel_dir_x = 0.74861248924;
    msg.rel_dir_y = 0.901944471069;
    msg.rel_dir_z = 0.389011593464;
    msg.err_x = 0.623561718343;
    msg.err_y = 0.166398376296;
    msg.err_z = 0.87644070713;
    msg.rf_err_x = 0.344303313433;
    msg.rf_err_y = 0.61798697377;
    msg.rf_err_z = 0.602260443715;
    msg.rf_err_vx = 0.458749307258;
    msg.rf_err_vy = 0.798334431632;
    msg.rf_err_vz = 0.736120185;
    msg.ss_x = 0.669477821968;
    msg.ss_y = 0.371575587831;
    msg.ss_z = 0.519045818559;
    msg.virt_err_x = 0.116174630465;
    msg.virt_err_y = 0.43761061988;
    msg.virt_err_z = 0.901753785082;

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
    msg.setTimeStamp(0.664558645604);
    msg.setSource(43993U);
    msg.setSourceEntity(63U);
    msg.setDestination(5458U);
    msg.setDestinationEntity(245U);
    msg.s_id.assign("RXOEZTLKCBOODARZZMSEIQHVQZGCJKXDVIQHNGEEAMKUHLSYJOWYFNQMVVHQUMHDWDAJTUGUIBAWRPURPSKOQENLOVUEL");
    msg.dist = 0.533266646109;
    msg.err = 0.257269658809;
    msg.ctrl_imp = 0.971366970616;
    msg.rel_dir_x = 0.323924077235;
    msg.rel_dir_y = 0.662244144144;
    msg.rel_dir_z = 0.989430730294;
    msg.err_x = 0.722906505462;
    msg.err_y = 0.175115664095;
    msg.err_z = 0.150209920594;
    msg.rf_err_x = 0.281583675006;
    msg.rf_err_y = 0.929096554142;
    msg.rf_err_z = 0.665842541151;
    msg.rf_err_vx = 0.033065581116;
    msg.rf_err_vy = 0.666620752556;
    msg.rf_err_vz = 0.599451736312;
    msg.ss_x = 0.704669068728;
    msg.ss_y = 0.811411560312;
    msg.ss_z = 0.992512350419;
    msg.virt_err_x = 0.577780798871;
    msg.virt_err_y = 0.901622840426;
    msg.virt_err_z = 0.00592373315127;

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
    msg.setTimeStamp(0.324263935716);
    msg.setSource(65442U);
    msg.setSourceEntity(215U);
    msg.setDestination(21256U);
    msg.setDestinationEntity(217U);
    msg.timeout = 54179U;
    msg.rpm = 0.754750807886;
    msg.direction = 45U;
    msg.custom.assign("HJYQKIBOXSSPDTWLLHAGDZXPATOVOGJFQM");

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
    msg.setTimeStamp(0.00473928634439);
    msg.setSource(32186U);
    msg.setSourceEntity(173U);
    msg.setDestination(47655U);
    msg.setDestinationEntity(199U);
    msg.timeout = 56431U;
    msg.rpm = 0.604425547763;
    msg.direction = 177U;
    msg.custom.assign("PQBTQFPYXBMOONKIATLTANUKRCZHEZEDUNRXDIUSAKU");

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
    msg.setTimeStamp(0.799188227943);
    msg.setSource(3937U);
    msg.setSourceEntity(39U);
    msg.setDestination(44757U);
    msg.setDestinationEntity(80U);
    msg.timeout = 7491U;
    msg.rpm = 0.684080097288;
    msg.direction = 101U;
    msg.custom.assign("YHUQFFRAMTOXRMIMQQHBETYIOAIEUNAWBPBXNPTJPDJASLQCMNXSIZUYYVCEENOPGOX");

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
    msg.setTimeStamp(0.283701445023);
    msg.setSource(18228U);
    msg.setSourceEntity(49U);
    msg.setDestination(6101U);
    msg.setDestinationEntity(236U);
    msg.formation_name.assign("HHTHUSSIFOFPAXVYEZRWVRXEGSFVMEINEXRJOMDLEMGLDFUSBVOJE");
    msg.type = 69U;
    msg.op = 253U;
    msg.group_name.assign("LUNGHRYGQYIQNPGXZLDPSRWYMEXNMCSKRLWOMGGHKBFUHSTODUDGTUMODXNOTZWLBJKZGEFQXDVBMJFOERMRVTXTHPDMOOWNLFSHKIHQIWPNPSCKSJAQTMFWAKQVKIZGRAOAYCBCRJOQFBIIDKXFEWHTPXLFBYGZYCKXXSSZMVEHCDVJOLRTCYNLNAJAEJBJUCJ");
    msg.plan_id.assign("RJICRWCIYNOQUIEUNXLWIQYRDPTGSLWMNWTOPYODZZWKPCVPMDMAPUWGXRXYCWKKTPENDSDCQVUUBGDQAEMISTCRBIUBSRIJZJHHVEGTOZNLHOCKVSNYWVEJHSTOSMSUVILUNXFVKUABH");
    msg.description.assign("SCJZFWDGDPHSZQLVAVXYPHNXYLKLKCBES");
    msg.reference_frame = 243U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 4967U;
    tmp_msg_0.off_x = 0.925222863297;
    tmp_msg_0.off_y = 0.190502312082;
    tmp_msg_0.off_z = 0.313206857756;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.854724115093;
    msg.leader_speed_min = 0.340232689882;
    msg.leader_speed_max = 0.837596912568;
    msg.leader_alt_min = 0.0251445913033;
    msg.leader_alt_max = 0.056233984887;
    msg.pos_sim_err_lim = 0.988261254152;
    msg.pos_sim_err_wrn = 0.747912271981;
    msg.pos_sim_err_timeout = 22699U;
    msg.converg_max = 0.778427577134;
    msg.converg_timeout = 55463U;
    msg.comms_timeout = 30008U;
    msg.turb_lim = 0.829304129048;
    msg.custom.assign("FKNGCPXPVHLYGBGSAGHJFYEIMCLRDDXQIEEBFBHQEHTHGTKLVELDSCKRLSIOUFQDFUSWDLMZZAQNAPNYINIVZFAYAJOCTXTFDYLATJMHCPQLNZZQBJAXOGXJMVTEGSSEPASQDMWRSQMBNOSYRFPRATXILKJUAYVUVPDVDMWBNHWMKPMSZREIOHICYZVOUTIHKLEIYZKGCWZFWVT");

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
    msg.setTimeStamp(0.973387971796);
    msg.setSource(2167U);
    msg.setSourceEntity(123U);
    msg.setDestination(45482U);
    msg.setDestinationEntity(192U);
    msg.formation_name.assign("FIYWGQWIISGUCLVLOBABFSLSDEFGYKZVGBQHEMUHTCANJKLLISPFUXIJPNHVVTHMHXZUZETNVCJSYKYEBCTMDRAJAQAORIRLQIJJRZAWPLXZONEBSPHNVWTYOXDIREHAHXUCGWDMUMMFCZUUDMFFQBOZCDUVSQKJYGBBVSIZEBXNOUKFTRPOMGPHWHTTYDNGSBPPCVQGMQXEXGWOJZLKYQTFCRFKSQE");
    msg.type = 110U;
    msg.op = 133U;
    msg.group_name.assign("YTFOTORPDOAOHNEULVDKTUOZBYKFCCUMZKILISXUXQAAGVNJRCYLUWFMYMCWVYXLRJXNOZNEVVEVSOEWFNOHVRAEWDPAQWNCOQDPTKMGXBSHGYGVWXUGPLBQIAIFTRLSYACBRCRBRIMX");
    msg.plan_id.assign("ZMKZHLZBKKIKYWRFOMYKGLWCJBNDYOQEUGSRUMPERUTDLHWXXKVTGVKAPDCASYNQGRNUZDSJVIIETQMBTLBFJOEXODUVUPSOQSXHZQAEGLUOLZMQMOHYMISVW");
    msg.description.assign("VHSEVPAQZPLLTLRQQRRONRPDYAYWOEMIUWGSSLAHAXXRCVNDOTGILJUWBKIBXRFNOAALNAMKHQNUBYVZXJEJNG");
    msg.reference_frame = 121U;
    msg.leader_bank_lim = 0.179143300471;
    msg.leader_speed_min = 0.373279089147;
    msg.leader_speed_max = 0.534685567922;
    msg.leader_alt_min = 0.998281726279;
    msg.leader_alt_max = 0.68041928297;
    msg.pos_sim_err_lim = 0.359479909211;
    msg.pos_sim_err_wrn = 0.509664382568;
    msg.pos_sim_err_timeout = 20233U;
    msg.converg_max = 0.214472287848;
    msg.converg_timeout = 40944U;
    msg.comms_timeout = 46825U;
    msg.turb_lim = 0.354437001889;
    msg.custom.assign("TOIBIEZWDTVAQUCBLUGGJJHMSFEODZSRASLXPUBDPSQGNKUEPDLWCUYOHYBDJNCFZBINIALYMKYKUTXMIAMQLDQYTCWYPGRWREHZZDGKZHXUWMZNPKCMFBHGJSTEVUKHFKUFQEVJOQXTKQJZEBVFOIOVQGLXEEXCNR");

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
    msg.setTimeStamp(0.249913893161);
    msg.setSource(37545U);
    msg.setSourceEntity(134U);
    msg.setDestination(36234U);
    msg.setDestinationEntity(50U);
    msg.formation_name.assign("LUJRUCJAFOGCHUEAKNDZLIBGQANDODBYBMYMWRGLUUZQMPFTPLIQAHIPHIMVZFFZXFSGMSNOGTURYJJLCLOMSNVXSEGKFBAFVEHVNAXHWBKRKWRDNVMETPWLQXVWYZCTQIKZSYIDEIBZXMSQLKJKFIEPAZGHUFEOPIAYTCIYTQGZJKRDYWUHGSNJTRBNJRDHLSHPESXEVTBRJWXDPMOVS");
    msg.type = 7U;
    msg.op = 63U;
    msg.group_name.assign("CCXVLZMUGUJCXLKITWWGCRFIPSZCDOFUSGNRGFBIMITDDMQLUENQPPSH");
    msg.plan_id.assign("JUDYXFLZCXFFQPKZVUIOZGJXZSFBDUZFMAIKFFAWSNNIQOXRCUNHVPDGBRAUJPZIMHGKOHOJJMGFEQITTXJOVKGMSSVQYXVOFPSZJYLQVYKMTAKOWXKGCINNPJTBEDHANQSTALRQEWWRBDJXEPPRZMBREITWDKCGATQFAVUCMCLLHRWZAHOSUWTSUPQBXHDBYTRLEUMTYGNOWEMWHVHCILEBGYXJCAWHBSDGNZLYIRLBKPOUVNPSC");
    msg.description.assign("LTLFIYSSTMQDLGISMZANMHGQJIYRZMXPOEVCOQLXJLVTRHDKREGVYUOTZWLARHJE");
    msg.reference_frame = 192U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 22541U;
    tmp_msg_0.off_x = 0.0886571236997;
    tmp_msg_0.off_y = 0.353806470716;
    tmp_msg_0.off_z = 0.857712852415;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.0627282258032;
    msg.leader_speed_min = 0.924775576046;
    msg.leader_speed_max = 0.879661123234;
    msg.leader_alt_min = 0.149079187903;
    msg.leader_alt_max = 0.161149617637;
    msg.pos_sim_err_lim = 0.973421726875;
    msg.pos_sim_err_wrn = 0.998420241093;
    msg.pos_sim_err_timeout = 39441U;
    msg.converg_max = 0.791950999297;
    msg.converg_timeout = 8843U;
    msg.comms_timeout = 42856U;
    msg.turb_lim = 0.742958265014;
    msg.custom.assign("HRHHPJJWBLRHDEHVVEUTZWKJEFMKVWDSSWGZZNJJUSMRGDWYOXCMNTTLZLZCSDPGRSCRIPNHNGQICOIUYEMMHDEQAYQVIERCQBPYIKKETKJYVOZUXEONCFOJLXOQXIIJHWPXGBPWADXXXAOABOYUBONBFLPVWPSLBHKZVFMRSCQSGCFYYDRPTKOKFGYAJVWIQLLLAGWUDDKIUCZHAR");

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
    msg.setTimeStamp(0.458948409546);
    msg.setSource(39033U);
    msg.setSourceEntity(190U);
    msg.setDestination(57725U);
    msg.setDestinationEntity(201U);
    msg.timeout = 4443U;
    msg.lat = 0.422743073164;
    msg.lon = 0.454063841272;
    msg.z = 0.464054938027;
    msg.z_units = 122U;
    msg.speed = 0.413490592313;
    msg.speed_units = 45U;
    msg.custom.assign("PEBTDRMHOWQIYJNONEXFZHXEJRGBPZKMVOKGAJMBZUTWKGLCKUQPKTUBBDWQXWWUZVIXUPSZIKQJMKLVSPWDLIFLZRIVBIQZCHAAQIVWUMDFRITSTPDEMNKDAVOTSSCXOROFSJXFNYDOCYUGAWOXTCRRDAHTZYQQRICELZCTGFJGBZDXAAGMWNUGTWVPAPYJUEYEFLHGNOXIRHSMJHHBCLQMAQRNPCSNFEHLMJDVFFSJE");

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
    msg.setTimeStamp(0.899969236185);
    msg.setSource(61254U);
    msg.setSourceEntity(48U);
    msg.setDestination(61105U);
    msg.setDestinationEntity(166U);
    msg.timeout = 49158U;
    msg.lat = 0.34539169813;
    msg.lon = 0.859660088535;
    msg.z = 0.704223798455;
    msg.z_units = 194U;
    msg.speed = 0.105678302654;
    msg.speed_units = 72U;
    msg.custom.assign("UVYUXGOCVRMVJGIHHJNHPBTMGHTZWYHPVFJLPMLRJBJFUEABNIKSRTZVXSWKHQKFARZYQNJQKDHBEDKRADIUDSCLTLWOFPNEMPRRUSKDPPCTZIOONNIOSYVGRUQMZKLSXBEOMWCGEVXHMGUKBLQXTYATSZSPCEAJPUGQCUWJVFLSHVCYZMDWQDAMYEOIYQICHWBJZELOGNTURDSFE");

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
    msg.setTimeStamp(0.232589816408);
    msg.setSource(41639U);
    msg.setSourceEntity(163U);
    msg.setDestination(59291U);
    msg.setDestinationEntity(68U);
    msg.timeout = 34410U;
    msg.lat = 0.0980761861928;
    msg.lon = 0.926824772753;
    msg.z = 0.077171752603;
    msg.z_units = 226U;
    msg.speed = 0.885920668048;
    msg.speed_units = 235U;
    msg.custom.assign("DCXSTNVPADPWKTHOCBQKDZDNOYGKLJDTYYPPPMQMYJADWZDWHYCCQWAUKPRNUNKHPNSYOHAIWJDHOJPLWCINHGQUPGVLAGKEJFJVMZTTQGDU");

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
    msg.setTimeStamp(0.70939741027);
    msg.setSource(51642U);
    msg.setSourceEntity(206U);
    msg.setDestination(36367U);
    msg.setDestinationEntity(197U);
    msg.timeout = 1049U;
    msg.lat = 0.271142019603;
    msg.lon = 0.709052668488;
    msg.z = 0.689129031909;
    msg.z_units = 210U;
    msg.speed = 0.99007011578;
    msg.speed_units = 208U;
    msg.custom.assign("LALVWWADUMZIBVWKPZFCNGI");

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
    msg.setTimeStamp(0.511053661315);
    msg.setSource(56278U);
    msg.setSourceEntity(95U);
    msg.setDestination(52864U);
    msg.setDestinationEntity(5U);
    msg.timeout = 62117U;
    msg.lat = 0.912777425112;
    msg.lon = 0.798552046012;
    msg.z = 0.998538066371;
    msg.z_units = 149U;
    msg.speed = 0.721677459737;
    msg.speed_units = 60U;
    msg.custom.assign("NZQRQWATEUPJYFPWNSDOMHJKR");

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
    msg.setTimeStamp(0.90243578159);
    msg.setSource(22995U);
    msg.setSourceEntity(253U);
    msg.setDestination(37348U);
    msg.setDestinationEntity(152U);
    msg.timeout = 64422U;
    msg.lat = 0.583444032482;
    msg.lon = 0.291164853052;
    msg.z = 0.784943356797;
    msg.z_units = 151U;
    msg.speed = 0.590518944226;
    msg.speed_units = 97U;
    msg.custom.assign("HRCZXTLTUZVRMYHVQRATAJLEDFJMZFVENWH");

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
    msg.setTimeStamp(0.348505044917);
    msg.setSource(31074U);
    msg.setSourceEntity(89U);
    msg.setDestination(29124U);
    msg.setDestinationEntity(72U);
    msg.arrival_time = 0.482701351221;
    msg.lat = 0.647704428074;
    msg.lon = 0.288319018254;
    msg.z = 0.765217439103;
    msg.z_units = 212U;
    msg.travel_z = 0.842878835792;
    msg.travel_z_units = 241U;
    msg.delayed = 156U;

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
    msg.setTimeStamp(0.0567998883107);
    msg.setSource(26619U);
    msg.setSourceEntity(251U);
    msg.setDestination(49039U);
    msg.setDestinationEntity(58U);
    msg.arrival_time = 0.351238927704;
    msg.lat = 0.618783177007;
    msg.lon = 0.849539118375;
    msg.z = 0.399462685315;
    msg.z_units = 19U;
    msg.travel_z = 0.314985279367;
    msg.travel_z_units = 185U;
    msg.delayed = 171U;

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
    msg.setTimeStamp(0.0710962611508);
    msg.setSource(55565U);
    msg.setSourceEntity(41U);
    msg.setDestination(47158U);
    msg.setDestinationEntity(219U);
    msg.arrival_time = 0.454452103367;
    msg.lat = 0.662987969878;
    msg.lon = 0.331198263332;
    msg.z = 0.63036684397;
    msg.z_units = 177U;
    msg.travel_z = 0.0687752448748;
    msg.travel_z_units = 74U;
    msg.delayed = 184U;

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
    msg.setTimeStamp(0.707022769012);
    msg.setSource(15606U);
    msg.setSourceEntity(116U);
    msg.setDestination(1945U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.2167968867;
    msg.lon = 0.40020958012;
    msg.z = 0.767187781576;
    msg.z_units = 74U;
    msg.speed = 0.482482229698;
    msg.speed_units = 130U;
    msg.bearing = 0.43283012813;
    msg.cross_angle = 0.328787737213;
    msg.width = 0.951038788277;
    msg.length = 0.652259505405;
    msg.coff = 144U;
    msg.angaperture = 0.0702694931956;
    msg.range = 21750U;
    msg.overlap = 75U;
    msg.flags = 198U;
    msg.custom.assign("APGVUOMJDSGQWDEKCWTQRFVPEKTNOWIFHSOYGZJJCJQEUVLKNJFYZVRXHEQWGPMNPZBJLGZVGVHHTXGMXODMYONOZPWACCADHTIIIQUBMKQBQIVPSOWKETUSAQRGTESMIYSXAEXHDABFIEMPBCVXENYPVKAYSBAXIDWFFZRYLPPOHTYHSCKURBKXNDZWOWUXTFNJLGLRIJRSUCONZLFWVDALSRMQC");

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
    msg.setTimeStamp(0.200127261992);
    msg.setSource(12706U);
    msg.setSourceEntity(106U);
    msg.setDestination(6116U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.426740225468;
    msg.lon = 0.182339746608;
    msg.z = 0.466249148911;
    msg.z_units = 214U;
    msg.speed = 0.158116767481;
    msg.speed_units = 123U;
    msg.bearing = 0.00619915002709;
    msg.cross_angle = 0.644233634692;
    msg.width = 0.528249750814;
    msg.length = 0.611590895263;
    msg.coff = 164U;
    msg.angaperture = 0.367994582931;
    msg.range = 5714U;
    msg.overlap = 109U;
    msg.flags = 206U;
    msg.custom.assign("HNKCHVOJEUGUEMWIBZVHYIGMSLNPTMQIEHXRSTAOFXVBBQMILXLDSSDAVKJQTJOYICIKXYWPXYFTUDAJWJQXHPGCOCZWVGFESBSHGXDQQKNVOICAESMTBBWFTVDLAEBZNNXFQYZQLKEFKGNLIBEASWXPYUPBYMNLQGKKLZDRZRMRSWKVNRUGEACWWADDDHMGJRTHCLOARFYMFZJU");

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
    msg.setTimeStamp(0.0133022061651);
    msg.setSource(47056U);
    msg.setSourceEntity(18U);
    msg.setDestination(53957U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.677786744856;
    msg.lon = 0.165518250436;
    msg.z = 0.661728411914;
    msg.z_units = 121U;
    msg.speed = 0.387745262796;
    msg.speed_units = 151U;
    msg.bearing = 0.824957571645;
    msg.cross_angle = 0.946134540319;
    msg.width = 0.325280113102;
    msg.length = 0.10791826108;
    msg.coff = 56U;
    msg.angaperture = 0.724425224895;
    msg.range = 62218U;
    msg.overlap = 43U;
    msg.flags = 241U;
    msg.custom.assign("KSHMBZFPQZWZHSWCAFIICMMNTXWGIDRQSUSKDLYWKUGVQBXRED");

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
    msg.setTimeStamp(0.443728738016);
    msg.setSource(62846U);
    msg.setSourceEntity(101U);
    msg.setDestination(40543U);
    msg.setDestinationEntity(183U);
    msg.timeout = 56152U;
    msg.lat = 0.362819665382;
    msg.lon = 0.100515093098;
    msg.z = 0.0889765181794;
    msg.z_units = 84U;
    msg.speed = 0.637632443244;
    msg.speed_units = 57U;
    msg.syringe0 = 173U;
    msg.syringe1 = 2U;
    msg.syringe2 = 169U;
    msg.custom.assign("DLMXLWILGTIJIAVILWRXBMM");

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
    msg.setTimeStamp(0.0190206033493);
    msg.setSource(56157U);
    msg.setSourceEntity(210U);
    msg.setDestination(45405U);
    msg.setDestinationEntity(69U);
    msg.timeout = 29519U;
    msg.lat = 0.721645715561;
    msg.lon = 0.491303852414;
    msg.z = 0.508012329656;
    msg.z_units = 154U;
    msg.speed = 0.612845292591;
    msg.speed_units = 191U;
    msg.syringe0 = 41U;
    msg.syringe1 = 193U;
    msg.syringe2 = 0U;
    msg.custom.assign("TZJPYVHEDBXMNHJNEKLSGAFPJMTXWIKWMWCSFHYGDRQTIWRZHTZBZIUSULDUQETGYOPJMCDOLAXWNYHXUSYZRRROQZBGASMPKNSLIOJODQVDPILCTECDCFMKLBDVYWIJHNUOUNTINCEPHIRXUZDGQTZKCGWKYVBBATAKBNQAGMWELYKKSOLFAESPYIGMQASUNYXCRQVWHWVVCHFZQPPAJXEXQVLRBAOOVMRUPBTFJXUIEDECHFKFG");

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
    msg.setTimeStamp(0.0987020394421);
    msg.setSource(41558U);
    msg.setSourceEntity(193U);
    msg.setDestination(6716U);
    msg.setDestinationEntity(160U);
    msg.timeout = 41561U;
    msg.lat = 0.305986659037;
    msg.lon = 0.98701677926;
    msg.z = 0.179585340511;
    msg.z_units = 22U;
    msg.speed = 0.168594746689;
    msg.speed_units = 20U;
    msg.syringe0 = 18U;
    msg.syringe1 = 130U;
    msg.syringe2 = 188U;
    msg.custom.assign("WELGVMFHGTXBGLYSNAUEAUUENGYZQBIUIRABORPQJHTXBIZIXWC");

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
    msg.setTimeStamp(0.826269175918);
    msg.setSource(11090U);
    msg.setSourceEntity(191U);
    msg.setDestination(30876U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.124889377658);
    msg.setSource(16872U);
    msg.setSourceEntity(151U);
    msg.setDestination(15476U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.782681538585);
    msg.setSource(8160U);
    msg.setSourceEntity(182U);
    msg.setDestination(52508U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.324640781569);
    msg.setSource(34724U);
    msg.setSourceEntity(141U);
    msg.setDestination(10724U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.865138188086;
    msg.lon = 0.919269418411;
    msg.z = 0.840137957985;
    msg.z_units = 222U;
    msg.speed = 0.850850865569;
    msg.speed_units = 174U;
    msg.takeoff_pitch = 0.530598495017;
    msg.custom.assign("BDRNATIYERBFTNWIUFOWLHZFKDUALMQNRZGSOCTDQRJZCHBIWFAZAGBSMPBZRHOVYLXTPEJWVXSMEUOSYOCQPJHRIFTQRM");

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
    msg.setTimeStamp(0.261437060332);
    msg.setSource(35301U);
    msg.setSourceEntity(189U);
    msg.setDestination(28088U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.212138644758;
    msg.lon = 0.555070017718;
    msg.z = 0.563388204002;
    msg.z_units = 221U;
    msg.speed = 0.527622792663;
    msg.speed_units = 237U;
    msg.takeoff_pitch = 0.673208478345;
    msg.custom.assign("DGDOHYHAKSTQIVZBCODGGYGYGJBZOHBATZNCCPDWUXSSMXUEZIANXXNVNTLFVFSKEVXLPVMAUORQQMJRZFTZEBVPYZWJGKWKVIPZRJJHSYMDXUUNOOKXEGETGBLDAMSFPJHYTYXICQROTILQQUSJIEPGEMPKCCEWNODDHOVLNBLBATQNPXCDOWQRIVXBHERLRMGEIDNV");

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
    msg.setTimeStamp(0.203903231938);
    msg.setSource(10106U);
    msg.setSourceEntity(91U);
    msg.setDestination(22972U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.494421849572;
    msg.lon = 0.531987182342;
    msg.z = 0.459850455073;
    msg.z_units = 41U;
    msg.speed = 0.402561986006;
    msg.speed_units = 76U;
    msg.takeoff_pitch = 0.569300954226;
    msg.custom.assign("NCTTMPRJPDCUZIXOQYTFNYGFZWXQFSVXGIWDJHPIOFIWXFSEKGMLGBEZFJK");

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
    msg.setTimeStamp(0.114775081629);
    msg.setSource(24594U);
    msg.setSourceEntity(178U);
    msg.setDestination(64221U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.430347303717;
    msg.lon = 0.121273883197;
    msg.z = 0.877730915453;
    msg.z_units = 218U;
    msg.speed = 0.460765368596;
    msg.speed_units = 41U;
    msg.abort_z = 0.739522697106;
    msg.bearing = 0.583694624645;
    msg.glide_slope = 97U;
    msg.glide_slope_alt = 0.791743419953;
    msg.custom.assign("DVHRJUYXPJXFZEEDBQDLUUBMKAXJDXZE");

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
    msg.setTimeStamp(0.0829008161816);
    msg.setSource(42535U);
    msg.setSourceEntity(213U);
    msg.setDestination(20642U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.433383955213;
    msg.lon = 0.476041178994;
    msg.z = 0.782755875841;
    msg.z_units = 30U;
    msg.speed = 0.176627859298;
    msg.speed_units = 243U;
    msg.abort_z = 0.380109484776;
    msg.bearing = 0.222623991596;
    msg.glide_slope = 210U;
    msg.glide_slope_alt = 0.560229316765;
    msg.custom.assign("JLZDCKSVDJHWZZSOOCHMUZDMWPCIQHWMSJJTRLRKDLFRTSOSGEFPPGMZWNADNOTLZAYJZNXQTZAWIPFEVGUARYMZJGQHWGFIDJYHXTTRSNUDLQGFUCMJAGEYKPISYBBGBVXBLWRXMTEMOXEBFIVPKLUQRVEKYDTLENNNRCVKXWXIQQPTCCNQOYOBCS");

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
    msg.setTimeStamp(0.696744526997);
    msg.setSource(40710U);
    msg.setSourceEntity(221U);
    msg.setDestination(14605U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.861352998719;
    msg.lon = 0.602143093732;
    msg.z = 0.806411209384;
    msg.z_units = 179U;
    msg.speed = 0.00591621003506;
    msg.speed_units = 48U;
    msg.abort_z = 0.171004623912;
    msg.bearing = 0.401389208073;
    msg.glide_slope = 138U;
    msg.glide_slope_alt = 0.604599862603;
    msg.custom.assign("WEIAODGCYLYRPNNAMVASTAPVSWTWELOWGCUTDKMAHGGLMBRSRCKCHFWCVNJMWJHFNVEGTZINSERXDMKPCXFKSNJQBIOOUGELMBDONPQJCUAHTOPSYLICGHXAQCLZBLVEUAJRPUZFIPTRBDFRYGONJPOZGQMFFHYIBLHYNWQEIDKBYOXIVJULTQXMTZQRXLKUPUEKKHDVTDQWZS");

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
    msg.setTimeStamp(0.804646606526);
    msg.setSource(13294U);
    msg.setSourceEntity(186U);
    msg.setDestination(3061U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.0333206655239;
    msg.lon = 0.0289795844196;
    msg.speed = 0.700500797839;
    msg.speed_units = 105U;
    msg.limits = 190U;
    msg.max_depth = 0.896984963427;
    msg.min_alt = 0.909518013993;
    msg.time_limit = 0.710808575389;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.668395157959;
    tmp_msg_0.lon = 0.40204385086;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("GRIKMYFLZCYZPCTZUTFAELVFZNUCOAMTHDXNSDJYQAGFHETQEHBMBBWPQNIYWPOUJFXSJMDXOMTDAYWMJNPOLIQNBFVDLDTZLRLECKWAVNUUWDPYMDUKJCPCHQLQRXAXSNVIVOKZEVZHWRBIWFTGXSZFJXGSJRNGNIUGKOCNCRKATPQPOIULMEHOOJGZFYYBRAQURSHHQYEDML");
    msg.custom.assign("ZMDYIRUETBHQKLKRWBMFYSDCAWOQOMIIZDURZJKZYTCLNJOWFMPJPHFTVOIN");

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
    msg.setTimeStamp(0.63756231926);
    msg.setSource(58460U);
    msg.setSourceEntity(147U);
    msg.setDestination(56456U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.156695346238;
    msg.lon = 0.683036164616;
    msg.speed = 0.602982285667;
    msg.speed_units = 134U;
    msg.limits = 77U;
    msg.max_depth = 0.950732498272;
    msg.min_alt = 0.823060257687;
    msg.time_limit = 0.970291996244;
    msg.controller.assign("YKSBLIGZKCJLAJLUDFVZQFSWGPROSTFNXDMEDYXXZJTUEMCTHYWRRXYULBMYCYCENDPTYMXAHISTIOGQICKWNPIUKDMFJOAVWGKQOXCINRZMILWHWPCSACBAJSHJFYTEFXCBMPKKLEFOQWKQGNNFTOUBLMTGRIYHSBINLRPKBHAEJAUOIHBYGNUVRQEEUTZ");
    msg.custom.assign("ENIIMKZGDKDGMCFBAQEFZZGDBLVTCSLSFBYEIYPAPTWZQC");

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
    msg.setTimeStamp(0.346801125398);
    msg.setSource(19315U);
    msg.setSourceEntity(191U);
    msg.setDestination(65302U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.0982968868595;
    msg.lon = 0.329164110515;
    msg.speed = 0.983741164315;
    msg.speed_units = 106U;
    msg.limits = 216U;
    msg.max_depth = 0.833822722549;
    msg.min_alt = 0.625234673008;
    msg.time_limit = 0.599064542544;
    msg.controller.assign("NEARLDXSWACKROKJBKMLVORFZBYWAWGDCRLHSCNBADGZQECSMNZDFAWYBW");
    msg.custom.assign("OZZWKBCDPHAURIMGKVJUNKVDEYHJCUIEXWOXJMQMQTULMPZZERFLSTTHPGKESRLCRJTAZHCXGSADGOHNJFZRYQVWTPAJXAMIGLWBPXBMROFYDGUYSEYTEDKXQNCTWS");

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
    msg.setTimeStamp(0.640191334394);
    msg.setSource(48715U);
    msg.setSourceEntity(225U);
    msg.setDestination(64115U);
    msg.setDestinationEntity(215U);
    msg.target.assign("DBBYCVKNHLBPQNYVFSXAFQFOBDEPEXBXMXLKOTENTXXRZVMZPQAGAKZILQTNYIIRNZKAZDUODISHVJOCRKHDFLTCHLLOKPMMQBWJYKTEOHHKSVMMOZLAFZIZQDCWEUCTRBJETETTYWSUHBQIDXFPGSVGNJSBITXUNIEISGOLUCJRPSCVLYKKWWJCRGRXRUGQNVWFLGWCGJSWHIUFUDX");
    msg.max_speed = 0.972712255016;
    msg.speed_units = 94U;
    msg.lat = 0.103680586038;
    msg.lon = 0.213523409143;
    msg.z = 0.348351663542;
    msg.z_units = 53U;
    msg.custom.assign("YWSRDNXCANSYHSXOAMQPXONRISEWUUJGURBROOGZOAHEAFTTXUZELYSGDMDCUFZJPGPKBLGSELTKQZMVWVYQODNPWHKTVBSTNBCZTKMZRWDBNYEJNKBPQHQFJUZQWKAEHWVSDRHTNOFHLIVHDXCVUNJCAXGFPAFUJLODSKNLEYVCKMRIXRUSGWFPBYPVVOLEYPAFGMIFHXBQYWPXC");

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
    msg.setTimeStamp(0.364775792692);
    msg.setSource(39761U);
    msg.setSourceEntity(123U);
    msg.setDestination(24916U);
    msg.setDestinationEntity(215U);
    msg.target.assign("AELMYGKRQSUJFDTGXQHKEBPCUIHADGWDYOINBDRRXUNAXMKZQVGJXOVUMZCLFNVNWCLQSWCXMAHWMNSTOAQYRLZJQSSZUTOXFCEPSDDHGRPSBRGE");
    msg.max_speed = 0.862056197588;
    msg.speed_units = 155U;
    msg.lat = 0.282599096013;
    msg.lon = 0.44442384074;
    msg.z = 0.129650889942;
    msg.z_units = 182U;
    msg.custom.assign("SNQJFVUBKMPJRSQLGDYUGYAIMTNJEPRJBFDMXLNLYQAJNLWRWPAHQRMDOXPGMOFTKDEILQQZGVUHJOUWWIWEBYQMQEIKESYSUUTZFSENFBTWJQCJEHCYORWICVKRWVWPZBVHCNDVLYRVOCIFLZIZETGHTFRYAAXDXS");

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
    msg.setTimeStamp(0.61477135808);
    msg.setSource(54643U);
    msg.setSourceEntity(126U);
    msg.setDestination(21482U);
    msg.setDestinationEntity(17U);
    msg.target.assign("RBMSVQTPONVDHKZCQUHKMXMTOPVVTMJGGLWGRSXUMLIBVICZTQUHFUPKGNPLHODZSNTESYWRAAQUPWHMJOBQXECNJEJOCAFDCJZBBKEGSWKXKCIYJIWQHRHAEPQYAFLCLGXQNISLODXWQIFPQJAERCZKYABDSWHBBYYASGOXTPUOJVYJAFSFTNTVMEXKGWNMFEVFUSDBORPUIWRCPGUONVRYKDFWUDIEMMARGEZ");
    msg.max_speed = 0.721185672578;
    msg.speed_units = 23U;
    msg.lat = 0.377773354815;
    msg.lon = 0.108445765678;
    msg.z = 0.102236487589;
    msg.z_units = 215U;
    msg.custom.assign("NZNWFNTHZPUOHHGMISZGBCGUJPTDTJMGJQKZQUBYDARZNRXPWCBIXGPITKQHAAVVTBPFQXMBJEITHPLSXHZBOAUOCKWOCFCKQJNDQELCTYAFHSOSKOCFLOPEXMLREBQYHIPWCXRRRJKTONRTKCOWYLYUMXNNYZEDFDEFADGZYUDGHJSXMUDQWVVDSVWURQOJSMLQIRIVEFGZKYHFLYBAAEVVKLXVXUPSUGMB");

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
    msg.setTimeStamp(0.272320410833);
    msg.setSource(44165U);
    msg.setSourceEntity(57U);
    msg.setDestination(27488U);
    msg.setDestinationEntity(247U);
    msg.timeout = 50727U;
    msg.lat = 0.871096736185;
    msg.lon = 0.1528753504;
    msg.speed = 0.710516553614;
    msg.speed_units = 18U;
    msg.custom.assign("MZHKXNFIVTRROMIGXVSALKQGMICBZMWJUPHEJHHAUHJMXSEOFEHVDOSBTSKZAUBKDILPCFRVCECHYXDZQJDJRPOXVQRFYYUPWLRSWOFXEKQSTWVUUEIGVNCAPDFGZNIZNGTBYPEKTMLZKCBJJOWBKAVJSGOEWPAGCQMXGQQHRYMRLDNQCMUCFYJLTAGPXFASTTLDWONZPWYRNSAVIZQIKHUDLMQANJHYINBXWBE");

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
    msg.setTimeStamp(0.250154533576);
    msg.setSource(64883U);
    msg.setSourceEntity(160U);
    msg.setDestination(50886U);
    msg.setDestinationEntity(88U);
    msg.timeout = 5835U;
    msg.lat = 0.18022336803;
    msg.lon = 0.758306505848;
    msg.speed = 0.982060277912;
    msg.speed_units = 171U;
    msg.custom.assign("GBSFPAREYNTCMEYFHZGXWTMOXFAMOZBQOZRWEAFGPWPAZOPQDUDLUXFWIWATAHRKLIDWSDXQJLQLTQUOOLHDSMEVTNSKAZZRVJNSGAXPECZLMSKGMBCBGUIGRGLLIMEG");

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
    msg.setTimeStamp(0.0737158000731);
    msg.setSource(30372U);
    msg.setSourceEntity(144U);
    msg.setDestination(64660U);
    msg.setDestinationEntity(231U);
    msg.timeout = 57013U;
    msg.lat = 0.944264795671;
    msg.lon = 0.503129998146;
    msg.speed = 0.0466069152537;
    msg.speed_units = 81U;
    msg.custom.assign("KXNZEBBOEHOZUXIEIESHZWLKULQQRDVEBABJTKSIJTOVCMHZWHOKDZTQQWJGXICNPFJALFICAKQZXILNYAKTWFSRCWDGVNLDFTLICNHYH");

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
    msg.setTimeStamp(0.828385350156);
    msg.setSource(9931U);
    msg.setSourceEntity(121U);
    msg.setDestination(41924U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.0915275495574;
    msg.lon = 0.1510565503;
    msg.z = 0.340056938768;
    msg.z_units = 127U;
    msg.radius = 0.200057730527;
    msg.duration = 14636U;
    msg.speed = 0.0631718315161;
    msg.speed_units = 176U;
    msg.popup_period = 59574U;
    msg.popup_duration = 7969U;
    msg.flags = 208U;
    msg.custom.assign("CMHMRKXUJHTYOHUPKJNQEMBXTJJVSGHLQPQWFVRJSGGGLNKGNRMYNHNDDAVLRZROMBCFLEKJYKIYPFDOBWVCSUNEPTQZS");

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
    msg.setTimeStamp(0.452559777015);
    msg.setSource(17679U);
    msg.setSourceEntity(81U);
    msg.setDestination(60551U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.816713992142;
    msg.lon = 0.330472927368;
    msg.z = 0.215579701929;
    msg.z_units = 197U;
    msg.radius = 0.951035676628;
    msg.duration = 30024U;
    msg.speed = 0.765632003662;
    msg.speed_units = 65U;
    msg.popup_period = 11921U;
    msg.popup_duration = 60035U;
    msg.flags = 53U;
    msg.custom.assign("LSIENWICINJESOQYBBANSWAHHSORYBEEKHERMHJOFTJDVOLVXOCBTCXYSBXNAYLOOQGMLIZJHNTJUDRLXRATJDZRHWDWXNTFEYPABIHFURVCBPGHMEWUQNVDWYIXMUZSLSIFGIWLCEZKCQFGRMHXVWKYKCF");

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
    msg.setTimeStamp(0.453133527594);
    msg.setSource(9698U);
    msg.setSourceEntity(8U);
    msg.setDestination(28007U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.0370954938509;
    msg.lon = 0.265821765349;
    msg.z = 0.362249380244;
    msg.z_units = 217U;
    msg.radius = 0.787453162116;
    msg.duration = 40620U;
    msg.speed = 0.754022127329;
    msg.speed_units = 9U;
    msg.popup_period = 39749U;
    msg.popup_duration = 48342U;
    msg.flags = 228U;
    msg.custom.assign("HTFLAFIUULEQCXXOSXYKMUZEBZIBSZKZ");

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
    msg.setTimeStamp(0.334410072683);
    msg.setSource(52178U);
    msg.setSourceEntity(8U);
    msg.setDestination(26930U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.0262921417689);
    msg.setSource(62741U);
    msg.setSourceEntity(156U);
    msg.setDestination(19377U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.289688891254);
    msg.setSource(1312U);
    msg.setSourceEntity(252U);
    msg.setDestination(61544U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.819925334594);
    msg.setSource(3402U);
    msg.setSourceEntity(192U);
    msg.setDestination(63456U);
    msg.setDestinationEntity(232U);
    msg.timeout = 13434U;
    msg.lat = 0.586998526608;
    msg.lon = 0.250702622691;
    msg.z = 0.392772228269;
    msg.z_units = 148U;
    msg.speed = 0.642115500932;
    msg.speed_units = 182U;
    msg.bearing = 0.848320471833;
    msg.width = 0.793939036712;
    msg.direction = 229U;
    msg.custom.assign("GOJTVSCBZRCQCKMXUBNTJEWXRLVRBVVRCHWPOGLGPGXDAMATPJBSODSEDIOWMVOXEZUNKOGKPSQUAKLFBYNHTIQBDLYVTZIBGKJFJZDKJTDLDNTIJYKPWQFNBLRWFMNSUCTZUBJKVACHFMESDALVFURQDOSHIKYWMWXNXZTQMXEPHIYGRRHYAGPPOZUWTHQGEWALAQAFLEXYCK");

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
    msg.setTimeStamp(0.343307448516);
    msg.setSource(52416U);
    msg.setSourceEntity(106U);
    msg.setDestination(44633U);
    msg.setDestinationEntity(6U);
    msg.timeout = 42753U;
    msg.lat = 0.736777170017;
    msg.lon = 0.899418928883;
    msg.z = 0.917405317915;
    msg.z_units = 217U;
    msg.speed = 0.578657213901;
    msg.speed_units = 180U;
    msg.bearing = 0.225213890596;
    msg.width = 0.0250240139824;
    msg.direction = 160U;
    msg.custom.assign("QNRFUPEXRXLTVDVJHXCCRQWDYHCTANPFEBXZTDQZOGYQJTSTMWQDEKI");

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
    msg.setTimeStamp(0.495586489961);
    msg.setSource(23269U);
    msg.setSourceEntity(159U);
    msg.setDestination(33735U);
    msg.setDestinationEntity(108U);
    msg.timeout = 20320U;
    msg.lat = 0.503599060489;
    msg.lon = 0.709129230743;
    msg.z = 0.653471436501;
    msg.z_units = 83U;
    msg.speed = 0.670339714413;
    msg.speed_units = 64U;
    msg.bearing = 0.383572533263;
    msg.width = 0.757986062924;
    msg.direction = 143U;
    msg.custom.assign("CJOTCXSJYFSUWUMYAEMVQBEBTENRUTHTSCKHYESYUEUGDPEPUGNHOVSRGOZGDCYHDACMVPLSDI");

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
    msg.setTimeStamp(0.922659186242);
    msg.setSource(43822U);
    msg.setSourceEntity(157U);
    msg.setDestination(53545U);
    msg.setDestinationEntity(19U);
    msg.op_mode = 181U;
    msg.error_count = 172U;
    msg.error_ents.assign("ZHIMBNQKSYUWJUSLZGBSWZCVOAEOQPYRLTXOUMBEACPRKZPKQODLXFCQVCFNAJPMXBKQPDCTGXSLJMIIXHYEAGNZNAVWERLRAFVFFAIGIDYDJPPGFMOTWBJECMZYEVYEZRXOGVJYNLOVUYPHFNNAPDFCWRUGTSXBKTKUAZDSCILXWNXRHHDFDQTBGSSEHHWKQJUHMOFVVXMYATHQOJWRBZPNIYRTSIMCDCBGIDRLLWSQKTKJBIKEZQMWEVLN");
    msg.maneuver_type = 49208U;
    msg.maneuver_stime = 0.964037346444;
    msg.maneuver_eta = 20520U;
    msg.control_loops = 4258759755U;
    msg.flags = 103U;
    msg.last_error.assign("BANQUNIVNHALGYRFNMBUWCGYTKOVKANJFHHZVBVSOFQJXJMFDAUQERJDYGLPXPCLIMEAWBXFIBEHCKPXMTGWIRYZQWPIAUKTQRDPTOMERWUQDFHO");
    msg.last_error_time = 0.386321505735;

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
    msg.setTimeStamp(0.400112750071);
    msg.setSource(1583U);
    msg.setSourceEntity(171U);
    msg.setDestination(31762U);
    msg.setDestinationEntity(219U);
    msg.op_mode = 174U;
    msg.error_count = 176U;
    msg.error_ents.assign("EYLADJRHYDYUZSXPKTEGZJGMHSGTPVMHFVTWBIKMGTLXZLEOSWZXFFUBANMOWKVYAXTIXNYLMVLXHNUAGCUMGQVTELHHNTCFQRBQNBEHJKTDYZJLDECMQZHKXSSKWZDASSQRRSGRNIJBUUIWOQHGIIEPYBCRTQEOXQWOCVWCKJCJJRCPAANQPDZFVQNAEOJUTRRPZPKIUFBADAMFGBCIVGLBKHVDEWXFOKFSOLUORYPVDOCNIPBMXMWPZW");
    msg.maneuver_type = 22018U;
    msg.maneuver_stime = 0.0946655400275;
    msg.maneuver_eta = 25579U;
    msg.control_loops = 2109002877U;
    msg.flags = 183U;
    msg.last_error.assign("ACZJABMFNHRJNPQPYOIXPFJAESFVQDNYSCZTXDXWLLIQANBTGZIBSQAKJQWITRJOCDZSFBTSKUXUYUNAYUDEWODNJAKLPBVVWCVFXPXSBGHDEIRJKNYZHZQKTBHECWLFWRFHXPUIPFVWOHO");
    msg.last_error_time = 0.773451050763;

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
    msg.setTimeStamp(0.498846601508);
    msg.setSource(3985U);
    msg.setSourceEntity(227U);
    msg.setDestination(30299U);
    msg.setDestinationEntity(107U);
    msg.op_mode = 33U;
    msg.error_count = 163U;
    msg.error_ents.assign("UAXJHNXCVHFXSXFXPFERHYWAKGKSQAOODGKMJEBILTRNGMCNMHLHKJOFMUOSDNVAXEZTESWJZGEIUMYWKOAWGNCYQRCEITLTMPXNWDCEXLRYDUTJVIRBHEFIBOLYXGYLAKKSIEYCDBLDTTSJOUZJDWBBHMLJXSNJWBPRUFGTCSSZQSPIZQEPVQVOIIFLMRBFVQHDUPOVQVQPRD");
    msg.maneuver_type = 12888U;
    msg.maneuver_stime = 0.697487588468;
    msg.maneuver_eta = 17010U;
    msg.control_loops = 698549814U;
    msg.flags = 22U;
    msg.last_error.assign("VJXMFSEDOJDGCTIDLNGYEVRWNFMEDRKYKOPCPBEPUNFVATVCGHCQCZSANFLCMMTMHHZBKQBPJFKEKHXCXTGNZYJIUBWUIIUEDEJBRYTBYKSVORLIKQFAXXPJADGQDSPZODWYYQOYWBHSZFNHLFDRZJCAUUHUSSBXQRORAXAIAJLGKKOULIOPODMRZLENEKIQQXUMP");
    msg.last_error_time = 0.928982508214;

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
    msg.setTimeStamp(0.718755208115);
    msg.setSource(49790U);
    msg.setSourceEntity(146U);
    msg.setDestination(5520U);
    msg.setDestinationEntity(86U);
    msg.type = 129U;
    msg.request_id = 65057U;
    msg.command = 52U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 28275U;
    tmp_msg_0.rpm = 0.539954418591;
    tmp_msg_0.direction = 240U;
    tmp_msg_0.custom.assign("SMIPJWLZFAMGGNRWYZHHFUPZMMPKICELZCOIXESRELRAUJWDHQCYUJLCQKYYFCRKFWAIORDSQOGSWXFBINEROCUGLYKEPDBWJQSNLRRXYJXTXWNQETDAYYDXLFTVBLPFVJIVQVHKWSUCVRMFLGJVVHYBZOTBBYGUNIDZTISEHBODPKJVUANXSMCQNJJAMNNUKBMAPBKXOATZKNEUWFZWDDTEVKPMHOTQSQIMVXHHUTZRQBDGPCHAG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 59320U;
    msg.info.assign("NYPMRJUFLWOBHIXHAYFP");

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
    msg.setTimeStamp(0.865912197473);
    msg.setSource(20692U);
    msg.setSourceEntity(98U);
    msg.setDestination(36094U);
    msg.setDestinationEntity(8U);
    msg.type = 191U;
    msg.request_id = 58834U;
    msg.command = 123U;
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.250368280512;
    tmp_msg_0.lon = 0.114582512675;
    tmp_msg_0.speed = 0.982149998258;
    tmp_msg_0.speed_units = 98U;
    tmp_msg_0.limits = 8U;
    tmp_msg_0.max_depth = 0.397985528437;
    tmp_msg_0.min_alt = 0.499658730535;
    tmp_msg_0.time_limit = 0.546086242629;
    tmp_msg_0.controller.assign("IYBUXLGGMFZHYGBCBGEFNRUNTOETJFTUNVOIDLYTVWLIDHOECVQGDHQPBLKSGKRQMHQCADVMGSTBMUYFJVAUWHZPWHWYYWXNXRJRFOEVX");
    tmp_msg_0.custom.assign("UGEGTIRMMGRFEHBVFKNTCRNKDSZWVQEJIRFBAJVODYEWVSJAUDAQTCUYGRRBODMBUXIHQWKNNTMCOZJBEKOGSTMQGSNODILNXTCIVDTOQXAKJAGDLPYZGPDSWGFPYEVQWFITNSLXZZMWUULQJHYDIYHTXBKBLHKXHNCXIWPFYMFWDXJKMHMHQJFTZOZSXAOEVBAYLGACUPNV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 50894U;
    msg.info.assign("UNHCYROGZUXMLRQXMOOVXVBMD");

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
    msg.setTimeStamp(0.93083698523);
    msg.setSource(21405U);
    msg.setSourceEntity(158U);
    msg.setDestination(1696U);
    msg.setDestinationEntity(21U);
    msg.type = 233U;
    msg.request_id = 64069U;
    msg.command = 26U;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 31239U;
    tmp_msg_0.lat = 0.397273904131;
    tmp_msg_0.lon = 0.199734971357;
    tmp_msg_0.speed = 0.0834635700641;
    tmp_msg_0.speed_units = 148U;
    tmp_msg_0.custom.assign("ZMHFWFSMLSBUJRCQEEOEEVCOWJPCMRKMCDGROBNGFGROQQJFFTARTLVAQLVIDQKOYHEJHLINVQAPSWIONAFQBGKZGBTWKYWRWFPDYLHPXYBNZTKYIFMUARZHNIBHGAPSDAXUSSWXDJZEKBDUCKMZMVVPOWDXCURTNKYBXXCCHENYOWHIHSNIALVCZNETOVTTLJYJDAPJZSXDEIIPFTUZQ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 57323U;
    msg.info.assign("LDSQCEMTGYQORQLBHFZFIVUNETBFAAAIWJMOIBVQVYG");

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
    msg.setTimeStamp(0.524888345925);
    msg.setSource(14074U);
    msg.setSourceEntity(99U);
    msg.setDestination(45896U);
    msg.setDestinationEntity(242U);
    msg.command = 160U;
    msg.entities.assign("SBMLPYQDMXRWNCOQKAWOEZUORWBX");

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
    msg.setTimeStamp(0.640529698076);
    msg.setSource(2781U);
    msg.setSourceEntity(210U);
    msg.setDestination(27298U);
    msg.setDestinationEntity(74U);
    msg.command = 78U;
    msg.entities.assign("SOORKUVBHANRQULWTESVZIPFZHKJWIVKBKBHHMEGCFVHIXJUAPGXFODQGDSEKCKDCSNSMQLHDTBBYOPXRYKYNNYYIEPIIGNWWWNIAEMMTURPUJAZZNQBSYCHOZYDQMLOIJRSTFGEAQWYZQRMAJWVTNHAQZLQCLEBBLCXGBALWECYJSJTDRFLVFVDHKFTNGWUUPDCDZKUTYMFZZOHJBTOOKSSRXILPMXGFORFXUIQVXRCGJMEMXGP");

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
    msg.setTimeStamp(0.966097608155);
    msg.setSource(46393U);
    msg.setSourceEntity(125U);
    msg.setDestination(24651U);
    msg.setDestinationEntity(23U);
    msg.command = 219U;
    msg.entities.assign("HOYAAGCMUQZJSZBPPOCCFULFDMQEAXCDVREKZXMOEKGFHFQILVECXTWXYOWHPZVRAGVJMMRQULPRTF");

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
    msg.setTimeStamp(0.718396993812);
    msg.setSource(32994U);
    msg.setSourceEntity(85U);
    msg.setDestination(58845U);
    msg.setDestinationEntity(224U);
    msg.mcount = 73U;
    msg.mnames.assign("NNBPMSKAILRLCPSRCIUFUBEOWAVENCDMGGQUMESHAHZKVZBUCYNWQFGFXDCGFTJAPTPATYZVS");
    msg.ecount = 129U;
    msg.enames.assign("KIRYZETPMLE");
    msg.ccount = 111U;
    msg.cnames.assign("OQLAPLHGGXZHVLNELKAUWNETFJZCILBBUNRETOENJRTFKKIHHNVXIECPNWYMWWYPIAQPDSOGVLHDBUXGCVSXWRYJZFGDYWYFCCTQASPQMWKMSZZCDVPVZAUYHQNCBYBHWAJNUDPODVAOUQTMGYDDAUFBMJGGHVROBSETDKKNMSGRPIRMKESYKFTDOJRUWRQIWYXJFSIOCTQMOJI");
    msg.last_error.assign("AHDVZDKHALXGOLJRWHQZKCSHNCUTPSMEXOLCQBAGEEERITMIGVEISK");
    msg.last_error_time = 0.644436287299;

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
    msg.setTimeStamp(0.323932807765);
    msg.setSource(46424U);
    msg.setSourceEntity(254U);
    msg.setDestination(39094U);
    msg.setDestinationEntity(165U);
    msg.mcount = 66U;
    msg.mnames.assign("GYUZBOVYWDNJSFQENXXVGXCIFUNJRFNYYFKPWYRWJCZCGZJCFTFPBNMGNSAVVIGTPJIIQK");
    msg.ecount = 203U;
    msg.enames.assign("NRDSDETRTOMCNMRTAZIGUVPXAJHNEPDPMOWPVPXOKVYYIDICGNKMSVVZWCXWYGBBJTFIHZFEXLHQXIQIVGQHYULRWLFAIFCTIDLJKNTSIAOBWJRGVDCSRPMXUVULUEUDMZJHJHDA");
    msg.ccount = 41U;
    msg.cnames.assign("IHJJMAGQFYMWUXKXLWUXERRGAYKHAORLCHUARSYCSWRZW");
    msg.last_error.assign("GZMUCTISQMGYXUGOUFFEWMCYCQHGGYWANEKZPKPNZWBPKNQFNQKSWOOVSNAVTDXXCFRFLZ");
    msg.last_error_time = 0.730531361257;

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
    msg.setTimeStamp(0.993952157368);
    msg.setSource(57408U);
    msg.setSourceEntity(239U);
    msg.setDestination(54632U);
    msg.setDestinationEntity(206U);
    msg.mcount = 188U;
    msg.mnames.assign("RLFPNWVWENCTMRLTOJIPDBAXORVOXCVRWMACXTGKNLVLXGDYISEMKYQEPMPACSCPDFJDUZSJIZPJQALRZGHSZNBUCFMKIPNQTYRWNGTYOZHENRGZQMVD");
    msg.ecount = 7U;
    msg.enames.assign("TYOORTLVBXXILWMFHNGHBVKDNRRVIHSZSYCXBDDPJGCGDGTSLTICVDEQECKYJKTYMRNBYULPZPNLBULAHBUIIIWHJUCMFPCJFOAVVJSXWPUUPBLVYEQKJGTPJSZLLXKYORFPQAZETIQW");
    msg.ccount = 106U;
    msg.cnames.assign("JSOHECFNOXZTKXLRFEGLIRIQELWEIYDCADEVBLXSMQGSVPDMXXGFYORGNUKEDQFPAIONQZMPHACXFXWPMBKYMRGCCNLGZVBAMTZEZSUYOJAZHDKJRTDGMGYNYRYPGKXJDQCZVTARWC");
    msg.last_error.assign("DAOTUERZXUXFQMHFPXFPGYMSEYRVGZIIAOWKGXNRCNAPUGCT");
    msg.last_error_time = 0.662420232466;

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
    msg.setTimeStamp(0.300131774922);
    msg.setSource(28494U);
    msg.setSourceEntity(36U);
    msg.setDestination(11396U);
    msg.setDestinationEntity(80U);
    msg.mask = 89U;
    msg.max_depth = 0.562717102334;
    msg.min_altitude = 0.208429077203;
    msg.max_altitude = 0.994743221416;
    msg.min_speed = 0.453114555522;
    msg.max_speed = 0.14477444796;
    msg.max_vrate = 0.588523687567;
    msg.lat = 0.655925942355;
    msg.lon = 0.461579452853;
    msg.orientation = 0.608821585569;
    msg.width = 0.619627056011;
    msg.length = 0.00325144052752;

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
    msg.setTimeStamp(0.530194537192);
    msg.setSource(51137U);
    msg.setSourceEntity(227U);
    msg.setDestination(43957U);
    msg.setDestinationEntity(7U);
    msg.mask = 19U;
    msg.max_depth = 0.733212903638;
    msg.min_altitude = 0.111149901716;
    msg.max_altitude = 0.174939909549;
    msg.min_speed = 0.787277261896;
    msg.max_speed = 0.146931139105;
    msg.max_vrate = 0.159893604412;
    msg.lat = 0.819835749738;
    msg.lon = 0.560488880911;
    msg.orientation = 0.599944428624;
    msg.width = 0.499915441947;
    msg.length = 0.683560487377;

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
    msg.setTimeStamp(0.319743257964);
    msg.setSource(7965U);
    msg.setSourceEntity(128U);
    msg.setDestination(41301U);
    msg.setDestinationEntity(32U);
    msg.mask = 185U;
    msg.max_depth = 0.992896429008;
    msg.min_altitude = 0.38845925964;
    msg.max_altitude = 0.946193779627;
    msg.min_speed = 0.0877837883947;
    msg.max_speed = 0.590173151747;
    msg.max_vrate = 0.539342198089;
    msg.lat = 0.863220540274;
    msg.lon = 0.401092414628;
    msg.orientation = 0.483221920214;
    msg.width = 0.897197697637;
    msg.length = 0.422612665457;

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
    msg.setTimeStamp(0.362957744177);
    msg.setSource(49882U);
    msg.setSourceEntity(10U);
    msg.setDestination(26529U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.268942720057);
    msg.setSource(40148U);
    msg.setSourceEntity(40U);
    msg.setDestination(22132U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.309971773952);
    msg.setSource(20809U);
    msg.setSourceEntity(200U);
    msg.setDestination(1915U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.992646666739);
    msg.setSource(21587U);
    msg.setSourceEntity(107U);
    msg.setDestination(20274U);
    msg.setDestinationEntity(140U);
    msg.duration = 31174U;

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
    msg.setTimeStamp(0.636777319878);
    msg.setSource(29562U);
    msg.setSourceEntity(204U);
    msg.setDestination(24519U);
    msg.setDestinationEntity(8U);
    msg.duration = 20208U;

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
    msg.setTimeStamp(0.218265782455);
    msg.setSource(7881U);
    msg.setSourceEntity(133U);
    msg.setDestination(11160U);
    msg.setDestinationEntity(204U);
    msg.duration = 17532U;

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
    msg.setTimeStamp(0.222790455626);
    msg.setSource(50112U);
    msg.setSourceEntity(67U);
    msg.setDestination(57657U);
    msg.setDestinationEntity(106U);
    msg.enable = 5U;
    msg.mask = 813453955U;
    msg.scope_ref = 1411079467U;

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
    msg.setTimeStamp(0.90019838245);
    msg.setSource(41498U);
    msg.setSourceEntity(169U);
    msg.setDestination(36549U);
    msg.setDestinationEntity(200U);
    msg.enable = 162U;
    msg.mask = 1220171960U;
    msg.scope_ref = 1029085753U;

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
    msg.setTimeStamp(0.342332697938);
    msg.setSource(43647U);
    msg.setSourceEntity(213U);
    msg.setDestination(37326U);
    msg.setDestinationEntity(143U);
    msg.enable = 196U;
    msg.mask = 2326064647U;
    msg.scope_ref = 4051826812U;

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
    msg.setTimeStamp(0.616844332935);
    msg.setSource(14174U);
    msg.setSourceEntity(96U);
    msg.setDestination(31151U);
    msg.setDestinationEntity(176U);
    msg.medium = 60U;

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
    msg.setTimeStamp(0.901278963792);
    msg.setSource(43934U);
    msg.setSourceEntity(172U);
    msg.setDestination(28029U);
    msg.setDestinationEntity(74U);
    msg.medium = 60U;

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
    msg.setTimeStamp(0.219248572759);
    msg.setSource(23964U);
    msg.setSourceEntity(154U);
    msg.setDestination(56335U);
    msg.setDestinationEntity(57U);
    msg.medium = 99U;

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
    msg.setTimeStamp(0.962612498943);
    msg.setSource(28442U);
    msg.setSourceEntity(235U);
    msg.setDestination(12943U);
    msg.setDestinationEntity(148U);
    msg.value = 0.284087653714;
    msg.type = 35U;

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
    msg.setTimeStamp(0.00988685921408);
    msg.setSource(40748U);
    msg.setSourceEntity(118U);
    msg.setDestination(42447U);
    msg.setDestinationEntity(18U);
    msg.value = 0.89642013924;
    msg.type = 170U;

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
    msg.setTimeStamp(0.99620896385);
    msg.setSource(27985U);
    msg.setSourceEntity(12U);
    msg.setDestination(41535U);
    msg.setDestinationEntity(143U);
    msg.value = 0.230512134869;
    msg.type = 4U;

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
    msg.setTimeStamp(0.838092706147);
    msg.setSource(17220U);
    msg.setSourceEntity(3U);
    msg.setDestination(56289U);
    msg.setDestinationEntity(248U);
    msg.possimerr = 0.672994978791;
    msg.converg = 0.50447426911;
    msg.turbulence = 0.277219333924;
    msg.possimmon = 103U;
    msg.commmon = 70U;
    msg.convergmon = 195U;

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
    msg.setTimeStamp(0.36956719312);
    msg.setSource(14461U);
    msg.setSourceEntity(240U);
    msg.setDestination(63026U);
    msg.setDestinationEntity(195U);
    msg.possimerr = 0.962501676411;
    msg.converg = 0.298380228404;
    msg.turbulence = 0.581647624485;
    msg.possimmon = 222U;
    msg.commmon = 119U;
    msg.convergmon = 238U;

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
    msg.setTimeStamp(0.222190060045);
    msg.setSource(16053U);
    msg.setSourceEntity(31U);
    msg.setDestination(60975U);
    msg.setDestinationEntity(33U);
    msg.possimerr = 0.856061242714;
    msg.converg = 0.0572623997193;
    msg.turbulence = 0.980915344414;
    msg.possimmon = 161U;
    msg.commmon = 178U;
    msg.convergmon = 6U;

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
    msg.setTimeStamp(0.376279037569);
    msg.setSource(52583U);
    msg.setSourceEntity(204U);
    msg.setDestination(24527U);
    msg.setDestinationEntity(230U);
    msg.autonomy = 33U;
    msg.mode.assign("DLXDWYWXCCIYXXANOKFXJLUICHFHSOOCGJJDVYJTHATTAHSPCPYTQTTDMO");

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
    msg.setTimeStamp(0.356332929613);
    msg.setSource(64466U);
    msg.setSourceEntity(54U);
    msg.setDestination(47484U);
    msg.setDestinationEntity(43U);
    msg.autonomy = 177U;
    msg.mode.assign("UZHHVXKVBTWDKSTEMYVNCNJSLYETOUNREEZOCBFHRFRTQRTWZMRUZRSXDOIKEXHGLTVJLFIPURSJAYGKNFIDXBQSNJHIGRKXOJSEFVFHXOCQLLJPGQFTCAAVBNUMNVNTOJPKDPMOCCKWIMDQOZALAMGCXNWZUZYESBZXZGVXWHLIJAPYUOHAPOWCPWDIRWSGQQTQBYVMUBFJNL");

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
    msg.setTimeStamp(0.065994588095);
    msg.setSource(63343U);
    msg.setSourceEntity(137U);
    msg.setDestination(24941U);
    msg.setDestinationEntity(22U);
    msg.autonomy = 20U;
    msg.mode.assign("WJRYJVJAFPUDRCWOQMAYZUPIHUDCWHJEWLSWWJVSXIHPJXSYVEMHTCDOGCSZUDLTXUMLGYVRINEZWGKULMVVQCFMLSXYPBFEAGWASQFYDAMSVVXJEMVDHLFCPOAHYNQTOCDKHNOCBYFLTIZH");

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
    msg.setTimeStamp(0.372090820048);
    msg.setSource(19642U);
    msg.setSourceEntity(124U);
    msg.setDestination(54362U);
    msg.setDestinationEntity(117U);
    msg.type = 42U;
    msg.op = 254U;
    msg.possimerr = 0.0600778268597;
    msg.converg = 0.0423570785189;
    msg.turbulence = 0.768361676422;
    msg.possimmon = 81U;
    msg.commmon = 101U;
    msg.convergmon = 24U;

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
    msg.setTimeStamp(0.177274880292);
    msg.setSource(9227U);
    msg.setSourceEntity(30U);
    msg.setDestination(30982U);
    msg.setDestinationEntity(189U);
    msg.type = 239U;
    msg.op = 34U;
    msg.possimerr = 0.200458070474;
    msg.converg = 0.50079670278;
    msg.turbulence = 0.628734218532;
    msg.possimmon = 145U;
    msg.commmon = 219U;
    msg.convergmon = 138U;

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
    msg.setTimeStamp(0.0746491369483);
    msg.setSource(17129U);
    msg.setSourceEntity(95U);
    msg.setDestination(50703U);
    msg.setDestinationEntity(47U);
    msg.type = 129U;
    msg.op = 83U;
    msg.possimerr = 0.745838871249;
    msg.converg = 0.725838671472;
    msg.turbulence = 0.705899014425;
    msg.possimmon = 158U;
    msg.commmon = 246U;
    msg.convergmon = 228U;

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
    msg.setTimeStamp(0.884555226644);
    msg.setSource(23300U);
    msg.setSourceEntity(32U);
    msg.setDestination(6223U);
    msg.setDestinationEntity(152U);
    msg.op = 80U;
    msg.comm_interface = 66U;
    msg.period = 11027U;
    msg.sys_dst.assign("KAVTXCLKNDSTFJPFUXOUMDKBISXUOVBXACH");

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
    msg.setTimeStamp(0.43490307287);
    msg.setSource(61610U);
    msg.setSourceEntity(206U);
    msg.setDestination(45292U);
    msg.setDestinationEntity(40U);
    msg.op = 212U;
    msg.comm_interface = 140U;
    msg.period = 1824U;
    msg.sys_dst.assign("CUDAGCYMFLIXOZZGKESHTAOSWYLXMFCGQIZWVBDLEJAAHDKXTQTRQBSFGVG");

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
    msg.setTimeStamp(0.50319341729);
    msg.setSource(1516U);
    msg.setSourceEntity(41U);
    msg.setDestination(52014U);
    msg.setDestinationEntity(77U);
    msg.op = 191U;
    msg.comm_interface = 75U;
    msg.period = 35542U;
    msg.sys_dst.assign("GJMGRHCRSJQBEMBLUHVUZUAHNZEGJKJNLAVTPMSYQNUCBRNGCGIFA");

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
    msg.setTimeStamp(0.959279966485);
    msg.setSource(48872U);
    msg.setSourceEntity(106U);
    msg.setDestination(41606U);
    msg.setDestinationEntity(239U);
    msg.stime = 2546523743U;
    msg.latitude = 0.0470333476781;
    msg.longitude = 0.387662890874;
    msg.altitude = 15422U;
    msg.depth = 786U;
    msg.heading = 63787U;
    msg.speed = -20919;
    msg.fuel = -100;
    msg.exec_state = -121;
    msg.plan_checksum = 527U;

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
    msg.setTimeStamp(0.505958243619);
    msg.setSource(10609U);
    msg.setSourceEntity(172U);
    msg.setDestination(50996U);
    msg.setDestinationEntity(244U);
    msg.stime = 1666833707U;
    msg.latitude = 0.166543135814;
    msg.longitude = 0.496103809865;
    msg.altitude = 44402U;
    msg.depth = 42319U;
    msg.heading = 8850U;
    msg.speed = -11906;
    msg.fuel = 65;
    msg.exec_state = 86;
    msg.plan_checksum = 24967U;

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
    msg.setTimeStamp(0.105081021398);
    msg.setSource(26234U);
    msg.setSourceEntity(91U);
    msg.setDestination(21034U);
    msg.setDestinationEntity(249U);
    msg.stime = 3487277857U;
    msg.latitude = 0.53254257593;
    msg.longitude = 0.315219629567;
    msg.altitude = 24955U;
    msg.depth = 65069U;
    msg.heading = 39197U;
    msg.speed = 31235;
    msg.fuel = 14;
    msg.exec_state = -12;
    msg.plan_checksum = 201U;

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
    msg.setTimeStamp(0.114902030445);
    msg.setSource(20972U);
    msg.setSourceEntity(12U);
    msg.setDestination(35591U);
    msg.setDestinationEntity(139U);
    msg.req_id = 5783U;
    msg.comm_mean = 180U;
    msg.destination.assign("QFBVJCTNEZIXNUKQJRELTUHFPHXLAXAEYWKAZJRLRHQIGYVUUJFCXGJDCSXPXBALVYWOPUCFKQKHSGNBDGANXRIYZMEMEYIUYZQPOLBHXIWHEBLFRHDFMRVQMANKBNYESTKTIRFOMOGJCZSDIWWYTTCPQSBKINCLUUYFMVXGGGMZTKNZMQDVBHT");
    msg.deadline = 0.226334441479;
    msg.range = 0.556032864913;
    msg.data_mode = 179U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 46602U;
    tmp_msg_0.flags = 133U;
    tmp_msg_0.lat = 0.0964126208471;
    tmp_msg_0.lon = 0.980071977636;
    tmp_msg_0.start_z = 0.494754855306;
    tmp_msg_0.start_z_units = 250U;
    tmp_msg_0.end_z = 0.708581610087;
    tmp_msg_0.end_z_units = 130U;
    tmp_msg_0.radius = 0.973151710083;
    tmp_msg_0.speed = 0.281131733579;
    tmp_msg_0.speed_units = 153U;
    tmp_msg_0.custom.assign("UCRKZVVTVMNURFTVKKMSMCYBGOMEOIUAYRMXATSTIJLTEDCYLLKTPWYPXIUKDHKLZHHJRGDPNNDEPVPBEEWV");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("MZKRAROHTZGWQKQCBWNTQJNQVPGJHSSMFQSVRCLTSCHGBAWMIOJTGOWIHPUGBIYKERDUDOPDKHBCLZBHCJPARPVJODLAEAFJBZRUIYEFUJSBXWHMSEZTDSHMUWOASFWZVXMIENGFFARTVFMUXVEUIDMXIHDWQMMYYXREXLAYGZJNHBOQGXPN");
    const char tmp_msg_1[] = {43, -33, 46, 77, 56, -100, 15, 88, 105, 76, 91, -23, 45, 91, 123, 63, -123, 60, -92, 41, -40, 114, 11, -78, -110, 86, 112, -109, -126, 29, 56, -31, 106, -116, 7, -16, 20, 11, 34, -36, 51, -105, 118, 59, -87, 38, 50, -74, 13, -102, 101, 100, 112, 19, 39, -81, 12, -1, -93, 29, 100, 31, -76, -127, -112, -75, -17, 86, -103, -120, -86, 40, -113, -66, -97, -26, 29, -106, 111, 11, 80};
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
    msg.setTimeStamp(0.971065330201);
    msg.setSource(37066U);
    msg.setSourceEntity(17U);
    msg.setDestination(41075U);
    msg.setDestinationEntity(214U);
    msg.req_id = 42102U;
    msg.comm_mean = 180U;
    msg.destination.assign("GGORTYXVFZBTQXODOBCIWREFCTTNEHXLEQXLLFJ");
    msg.deadline = 0.125769034754;
    msg.range = 0.496283908452;
    msg.data_mode = 38U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.804903579724;
    tmp_msg_0.lon = 0.677870737335;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("WMDGULCSPJVJPBSSIIVUUZXVZOJMCIUQAWKTZDNQVLYKZQBTGLEKQAMYBEXTUOGCEPNYQODZHXSMVFCZLLDFAHZRGLNLKEFYOOSOEXPGJPJELGXHONYNFNRSPBUEKZJTPDSAMRJMQTJDMABUYQZNDXVWHGLWGHRQFIMGBNVCINTRJSKOXU");
    const char tmp_msg_1[] = {121, -78, 75, -127, -32, 75, 29, 75, 86, 105, -106, 53, -2, 63, -90, 99, -54, -23, 8, -20, 81, -62, -101, 62, -42, 104, -44, 58, -16, 14, 42, 95, -83, -67, -66, 78, -27, 108, -56, -64, 8, -23, 19, -83, -4, -49, -98, -124, 42, 100, -27, 66, 123, 52, 118, 106, -115, -48, -42, -37, 22, 16, -110, -31, -65, 103, -69, 58, 97, 119, -82, 25, -58, 22, -71, -86, -1, -80, -60, -108, 124, -31, -48, 116, -50, 100, 43, -107, 57, -45, 21, -103, 20, 0, -7, 60, -54, -68, -13, -3, 73, 57, -88, -116, 66, 7, -76, 72, -118, 109, -34, 11, -52, -121, 87, 13, 5, -2, -110, -106, -127, -1, -105, -48, -113, 63, 3, 85, 125, 92, 13, -95, 45, -128, -128, -107, -103, 33, -123, 41, 77, -27, 72, 77, 5, -93, 56, 38, 14, -24, 30, 78, -28, 84, -12, -18, -7, 89, -27, 46, -3, -10, -32, 92, -32, -17, 108};
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
    msg.setTimeStamp(0.37342013362);
    msg.setSource(27735U);
    msg.setSourceEntity(51U);
    msg.setDestination(32012U);
    msg.setDestinationEntity(131U);
    msg.req_id = 37553U;
    msg.comm_mean = 140U;
    msg.destination.assign("ZLDACZURNSOGWXIOJLRVSSFODBMUFIJNTRHWQMPWFYBKGASSRVVJSCLEWF");
    msg.deadline = 0.26145988418;
    msg.range = 0.425221973967;
    msg.data_mode = 67U;
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("SHQNJXSJZEUNQYODTRNNQROIFMDAZMCEYQGCYYDQVROFDOBXZSKXWLPJAZMIFVSYJSRGXVMHBARBZEPPUEEVNTVVWYCMCBTNMKAQCTKZDPYKWLYWFSGQLPYMVJMWHEF");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("OVVXSSYBNGPALWBOQHLCIDVOIXUETCQYPFKOGTKVPZZZCEKNWQJYFKZXEVKMJZTCMQEZYRALEFQDSGKIQONNVCKPYAHMIWUYZJVJVIHCGEIRCBSSVMGXXHLKMODLTAUNGHXZZAYWNRMLFQPQGBURTWAOLLNDXSHWXMFBBSYWUJUDETPPULPFTZWBHIQRYREINUDFUAHJRJNLXAKMSRCQMADBBJFKTXHSROFEJWUJDFDNMGCTPCBDIAW");
    const char tmp_msg_1[] = {-71, 14, 37, 16, 28, 98, -58, -82, 126, 39, 45, -66, -55, -25, 101, 68, -99, 122, -125, -41, -73, 27, 90, -106, 65, 17, -57, 20, 26, 29, -71, 31, 38, -74, 39, -37, -96, -23, -18, 109, -68, -12, 6, 53, -50, -79, -94, -40, 44, -92, -6, -108, 64, 102, 74, -86, 59, -27, 45, -64, 105, -48, -113, -46, -12, -56, 12, -90, 40, -118, 16, 47, -4, 89, 37, -20, 68, 41, -13, -103, -121, -116, -66, -18, -86, 16, -46, 7, -43, 36, -18, 39, -83, -25, 9, -101, -71, -13, 98, -2, -17, 121, -63, -15, -104, 28, -103, 75, 97, 106, 15, 6, 121, -4, -126, 75, -33, -122, -8, 34, 37, 122, 94, -125, 24, 42, -111, 45, 14, 82, -85, -121, 122, 81, 22, 8, 97, -31, 45, -2, 6, -61, 104, -74, 52, -7, -109, 112, 73, -39, -26, -117, 40, -58, 49, 77, 11, -69, -63, 84, 81, 21, 83, 116, -52, -46, 52, 24, -16, -57, -90, 82, 87, -9, -27, -33, -22, -93, -113, 1, -69, -115, 85, -2, -20, 72, 108, -61, 104, -2, -37, -2, -10, -66, -58, 91, 93, 104, 39, -122};
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
    msg.setTimeStamp(0.270365473876);
    msg.setSource(25347U);
    msg.setSourceEntity(45U);
    msg.setDestination(42234U);
    msg.setDestinationEntity(95U);
    msg.req_id = 51132U;
    msg.status = 145U;
    msg.range = 0.607119458356;
    msg.info.assign("GZYNBUWMKTDECPBAVZFNYTXLFBEHKMUUKLJXCYTVBGWEZDREYHTLQXZKRQBCEQYQTAPUHMPGFIEJLCFUOUZEGFPINHOSGVAHGPLTDRRSSONNOUGFJGDPQYAIOIWOXLBAMKJAVKVMTQXHAIYIKMWZRPQIVNLYZFCCXMEBORPKSSSIBJRUXMJTDRXCWHOORXJ");

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
    msg.setTimeStamp(0.735666922411);
    msg.setSource(40532U);
    msg.setSourceEntity(115U);
    msg.setDestination(41439U);
    msg.setDestinationEntity(190U);
    msg.req_id = 28145U;
    msg.status = 154U;
    msg.range = 0.511908555042;
    msg.info.assign("KCYWPQDBADJMZOHEQVUFNBPSOTKFTNMGYTHYMDCMSLLZZACDDEAJJAGGUNHPDMRHFN");

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
    msg.setTimeStamp(0.719713429362);
    msg.setSource(34581U);
    msg.setSourceEntity(15U);
    msg.setDestination(42306U);
    msg.setDestinationEntity(122U);
    msg.req_id = 62465U;
    msg.status = 40U;
    msg.range = 0.840122667719;
    msg.info.assign("CDZECPHIYSNZREDMRLXOKSTTGGFRPBCOXJHUJVLKOTTETGCUHMAYKSXCQWRVAQHRNBDEUNMORDTPUTSKTJQJPCEJVWFXGJLSOZFFHANAXZVXWSYIQAYFWVEJGUVBDXJMVLBVXZILBUMZEKCNYMIFUBZBNDCVHGRZRLYAUGAGLDANQENPEMDVRYSZYSKGYWCQUHJOQIPHQNFPIHKIBSBUXWCJQYFHPFOWXSEDPKLPOTBLMAAKOIWZWM");

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
    msg.setTimeStamp(0.492118852427);
    msg.setSource(51109U);
    msg.setSourceEntity(249U);
    msg.setDestination(20180U);
    msg.setDestinationEntity(99U);
    msg.req_id = 65421U;
    msg.destination.assign("BVCNGAFDWMHXJHQACRAEHLUDJLEDCSRTEXAEOYBTNFOSJVFMMRPEDYFLZAVZVYTKQKNDHKOXJOGRQUXCLNMLXQBOILAMGCHWXDSGIUPTQKIZVFWUVIFDYNEIPBZGHQVBKTT");
    msg.timeout = 0.028201312314;
    msg.sms_text.assign("ZSMTWFXIVVZUYYCVIYWWNRAFTJCFWDBRFHQCMOBAHIZCPVQXYPZTVKXBNAAIDJAJLRMD");

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
    msg.setTimeStamp(0.169041837439);
    msg.setSource(2443U);
    msg.setSourceEntity(128U);
    msg.setDestination(58736U);
    msg.setDestinationEntity(50U);
    msg.req_id = 31880U;
    msg.destination.assign("AJOIPRSVPSOUWNUXLGJRQVNXEHKCOFKOVZTHQZUMVBTVDCTICQBFDDGJYLKSACPWTXHNBRLOGPDZJPFEHWZDYUKREJFRMIQZTLJHZXENXLSWVWXCXKEGOJHSZEAFEIYOMURGGSADVSWRQQINNISGYQGIBVXVFFDMIPYYNYPABMDHWQYMLAOL");
    msg.timeout = 0.553178991972;
    msg.sms_text.assign("MOLRYZXEVPIABTRDXQMXJYFBIXLKADPUHLRTTQLUYDDEFXGOQCUFTXAJKSMZEQAZWSIURBGSHCCDMSSFEMVTFTPORVDINGGVKIVIRUIAQWHCSNHWCRYHBJEKAXYDGWQLLEZDWVYUXYLUAQNEURRLZJPRVVDNNOZKTWCMOIIOABPCHWBCUEHJMMTVEHGYZPOVZSKOXGTODBKPKGQSNJJSAGIGKBWJWNAMNMXUTSJHZPCOZ");

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
    msg.setTimeStamp(0.251093508777);
    msg.setSource(6486U);
    msg.setSourceEntity(254U);
    msg.setDestination(36610U);
    msg.setDestinationEntity(25U);
    msg.req_id = 55160U;
    msg.destination.assign("FSJPBGNMGAWVACZSQSNWYMOHMZUTKXUCBGU");
    msg.timeout = 0.0162665810284;
    msg.sms_text.assign("VKUMVSNXOIRTFSKRTEKYYY");

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
    msg.setTimeStamp(0.825493696498);
    msg.setSource(21633U);
    msg.setSourceEntity(172U);
    msg.setDestination(20256U);
    msg.setDestinationEntity(61U);
    msg.req_id = 14924U;
    msg.status = 193U;
    msg.info.assign("LPOLVNLCUXKRADMKDNWFTYTLLEJYVCPTBIUHHXCWXWHXVZEMPDAYSJEALJHRQHUFKRQFZZUPNYOGGYMXHIOPJBDVBNQNGZUTKDPFIUGQDQSSKPRTGWANGBX");

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
    msg.setTimeStamp(0.121904323849);
    msg.setSource(64251U);
    msg.setSourceEntity(30U);
    msg.setDestination(55033U);
    msg.setDestinationEntity(30U);
    msg.req_id = 20076U;
    msg.status = 237U;
    msg.info.assign("QQFVCKWNWSFMZRBRELTUOMKUBIJLYQOSNCHIVBDAEKLGQPMGMZCDBYP");

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
    msg.setTimeStamp(0.201913923171);
    msg.setSource(8344U);
    msg.setSourceEntity(141U);
    msg.setDestination(61106U);
    msg.setDestinationEntity(64U);
    msg.req_id = 16812U;
    msg.status = 173U;
    msg.info.assign("PGIZOJZFNYEALNXNSMOAWTJYMMBHRTVINGBPSQGCQQLMBUTUCPVMQDPYNSJOXCLULHWDEJVGXXMZEKEURHQDCYETPJXMHRVYTIYJCRWBAIHDUURXIRJFOTXYKFRDLVVLAFKLZIENWXBTGADUSBQCMSKNC");

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
    msg.setTimeStamp(0.593344410213);
    msg.setSource(60433U);
    msg.setSourceEntity(207U);
    msg.setDestination(45840U);
    msg.setDestinationEntity(193U);
    msg.state = 202U;

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
    msg.setTimeStamp(0.168636381426);
    msg.setSource(55290U);
    msg.setSourceEntity(27U);
    msg.setDestination(13536U);
    msg.setDestinationEntity(81U);
    msg.state = 179U;

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
    msg.setTimeStamp(0.958396886608);
    msg.setSource(9415U);
    msg.setSourceEntity(250U);
    msg.setDestination(59674U);
    msg.setDestinationEntity(32U);
    msg.state = 157U;

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
    msg.setTimeStamp(0.447615726064);
    msg.setSource(7482U);
    msg.setSourceEntity(240U);
    msg.setDestination(7454U);
    msg.setDestinationEntity(50U);
    msg.state = 223U;

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
    msg.setTimeStamp(0.350314533929);
    msg.setSource(27233U);
    msg.setSourceEntity(76U);
    msg.setDestination(2147U);
    msg.setDestinationEntity(34U);
    msg.state = 65U;

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
    msg.setTimeStamp(0.170053854849);
    msg.setSource(64308U);
    msg.setSourceEntity(252U);
    msg.setDestination(11346U);
    msg.setDestinationEntity(50U);
    msg.state = 197U;

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
    msg.setTimeStamp(0.951956005355);
    msg.setSource(19666U);
    msg.setSourceEntity(40U);
    msg.setDestination(22196U);
    msg.setDestinationEntity(188U);
    msg.req_id = 55430U;
    msg.destination.assign("KFJYAGEXWLACJBRLSKZWJGMBQXYUCNVTMIMYJCRJFGLLYEDLAWNX");
    msg.timeout = 0.770693399136;
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.69796731519;
    tmp_msg_0.v = 0.15445085096;
    tmp_msg_0.w = 0.0203861333436;
    tmp_msg_0.p = 0.49478078043;
    tmp_msg_0.q = 0.903134222139;
    tmp_msg_0.r = 0.928863703337;
    tmp_msg_0.flags = 254U;
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
    msg.setTimeStamp(0.161422191992);
    msg.setSource(54853U);
    msg.setSourceEntity(206U);
    msg.setDestination(33798U);
    msg.setDestinationEntity(106U);
    msg.req_id = 54598U;
    msg.destination.assign("KMIUPNVCVSQTYLUMEKDWLUEQYXKNTEINWGATDSBXOFUQTNRBZGTDKHSYBWGMZGUGWMKYGOEKMPRJOULZDFVQIMXICCVFQVUKTTLSYQGIZBNRUCSBFWRHEEIERYYCXWIPCGDJCDSMRLBHONLLEJKKAXOPKEHYLODAFWEQRJIBNHJPCZGYWSAHFVJPLCPXVVRNTBPRAJFANCYQXVZFSAJXAFJGRTADJPOOOXMFBHQUXPQZNZTAWWMLZHIVZ");
    msg.timeout = 0.222452223405;
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.0580307078544);
    msg.setSource(3354U);
    msg.setSourceEntity(103U);
    msg.setDestination(17221U);
    msg.setDestinationEntity(128U);
    msg.req_id = 23370U;
    msg.destination.assign("GFHQLORCDHCRYCAWIGIAOKUJCFIDBXPZAUPDEZTDUQFNYJRMVUUUAFXMOINWYMBQBMOIKIWOOWEHRRVXKWGYTCJJONLZUNAMXSCUTFIWOTKGNRYVATPPPWBMZULNLPLRDVIDVQGXTXYWLLNEDVRCRIHLFFVAVHBBKSQEZTHNCNWSQQPVZZXQJSXSRPKOQZSBXKBTOBZLPDMJFSGGMSFWHXDVAKLPGKAY");
    msg.timeout = 0.227990109632;
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 220U;
    tmp_msg_0.period = 235111625U;
    tmp_msg_0.duty_cycle = 1498330766U;
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
    msg.setTimeStamp(0.172029499604);
    msg.setSource(60050U);
    msg.setSourceEntity(179U);
    msg.setDestination(25580U);
    msg.setDestinationEntity(216U);
    msg.req_id = 53582U;
    msg.status = 222U;
    msg.info.assign("FDZBMIEHVZPHDBNCQZQTTSHGUAYNYTWIJSONEWWIOVQXDYTOEOOZGDNVLQUBXRAXTFEUEKCWQIKLJZGQFMUUYEYYBSHFBWVXOELMTTNSAAJWYLUKURNGMLDCLIKPKPFYCQRDNKXLVRPFXJZDVZCYHOXJULXKRZMPBMUGAYFZKJINGNOMXOCBTPAQSBCSADJSEG");

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
    msg.setTimeStamp(0.609661110496);
    msg.setSource(2641U);
    msg.setSourceEntity(187U);
    msg.setDestination(375U);
    msg.setDestinationEntity(108U);
    msg.req_id = 3779U;
    msg.status = 39U;
    msg.info.assign("BBTRHZCDONMXPLDFHDUNQBGKNYHBAEQYHNKZAXWDSPJRACOWUCLG");

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
    msg.setTimeStamp(0.502590078386);
    msg.setSource(39095U);
    msg.setSourceEntity(161U);
    msg.setDestination(21238U);
    msg.setDestinationEntity(9U);
    msg.req_id = 60425U;
    msg.status = 186U;
    msg.info.assign("PKDFONQLWTJKOLGPRBHXYBKIHQMCLKZGLABDZFXIWEXWNWUBRQCFJVINSUISEBCIYTRUOKJONYESCYJLJUOEZKSQORDUKQGWYGVXZXTAMRETECOGDVXBLILFIQSSMV");

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
    msg.setTimeStamp(0.151228909494);
    msg.setSource(50765U);
    msg.setSourceEntity(95U);
    msg.setDestination(44284U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.877884066572);
    msg.setSource(13609U);
    msg.setSourceEntity(47U);
    msg.setDestination(3572U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.116729692898);
    msg.setSource(58569U);
    msg.setSourceEntity(222U);
    msg.setDestination(7769U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.314049513243);
    msg.setSource(16679U);
    msg.setSourceEntity(88U);
    msg.setDestination(14441U);
    msg.setDestinationEntity(72U);
    msg.plan_id.assign("FWBFZFJFAZVEDHPTPKQLPOWZOCIUKQIHDVQ");
    msg.description.assign("CDTINQGKYPNVJYNCRVWFXOQSVOZIINVGPFMWDXAWAZQEHNCZJRNSAPHGAUBPAVDROPMCGHIVHAESDMCHBQTDLEFESLYQHEUTXQOXMQRVQBGJRTFOTEKPJKPSPZTMLUHNYWDDWMFWBMN");
    msg.vnamespace.assign("LNPGYBDVEWUTEYYMWRIMUDPEPNOGTRRHYGUJAFMKJWXELJFHCURVSZCMYCQJVAZESTWGWTVZAPNCDQVDXJXIBAKBPPKLWFIXSAJIOQKSWELPXRKRHILBRATXEHUOMNHQRITGZCFKNSDDHKBBKZJVWLJUQASYQLSVCPRKEGCMOQSKMFSXIOXZTMUFBBLTQXABNXYOGRNDQCUUYEVCOHHGTGNTFOZOEUZPCVIIBMDFDJGAWMZJLVHQOFDYA");
    msg.start_man_id.assign("NEFHEIHSHGWZAZYHTTQDMJOIEMSCPWPGUKYZDCDDHNCJFBYFNYKZHMPLUIRDJEVQRXSALBGDKHBCEXHRQHNFODIGUUURLPLYQFBPEVGNWRXZKLLBRVAONCULOITXQVPFVTAAWBFBDJMIJMERSWOTGCPYOKUFUVBGTWKDCZOKOYEUXHPJPKJVMXIXOIVZGSMCPRLAJMIEBYWSDXYO");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("HXLTWMQVMJBNQBXEJKGJSV");
    IMC::Sample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 14341U;
    tmp_tmp_msg_0_0.lat = 0.694389997456;
    tmp_tmp_msg_0_0.lon = 0.364971402176;
    tmp_tmp_msg_0_0.z = 0.622338710092;
    tmp_tmp_msg_0_0.z_units = 83U;
    tmp_tmp_msg_0_0.speed = 0.555649963056;
    tmp_tmp_msg_0_0.speed_units = 162U;
    tmp_tmp_msg_0_0.syringe0 = 213U;
    tmp_tmp_msg_0_0.syringe1 = 205U;
    tmp_tmp_msg_0_0.syringe2 = 212U;
    tmp_tmp_msg_0_0.custom.assign("YVKCFUEFIWZUGWHQMGCVZLSUWQTTSUJXQCBOJDFALZZRVJEOOQMEVKXPNYNLRSQPKUWHSRFAKNZPRSXSHIHXEPDAEXNIGHPBNDTLZITACPRXWLFJDHIWFSYVDSXHBVCDDHZUVRBBFCOWIJOQKDJCJYCPOSKJIMPYRMTYKEYXGQQIROVYJOAGUCGAWZRJYZETKLLCDT");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::ServoPosition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.id = 133U;
    tmp_tmp_msg_0_1.value = 0.760308574838;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("ESNUPWTLQTBHADYJXTRZWADKFPSJGHIYVYFEPCKTDIADJUPEHGNSHMYJMPCVTKLRYGRWXLXTEAMXNDTFGSCEJPBOLKHKMFZXFOBVJLQVZL");
    tmp_msg_1.dest_man.assign("YOUSBBACYDF");
    tmp_msg_1.conditions.assign("PGSPXBUKCLYUJEMWONATRVMAMCBNHRARYSZBKNQVQYPXLYJWVFBEKCPHJSXTNGDUTSDJNOLFYKODZPCSRRIWGWNGKKKGTBABZQIZUFUASAILCMOPIULKUQTMQJBHXGMRNFAUJVATYOYUYWOQLFRGXWHXBOBZJPOEDVTMLELQTUDHGENRDLVACZMEWOEDIFTENHPCFHQWVRJDIDQSIXCNQZEIYIEIXVOSVPFPWLV");
    IMC::PlanManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.maneuver_id.assign("VXDBVXZZPYSWSRAVRHPIARHFGSUOIFLOFRWZBOQQXJTDAPCY");
    IMC::Drop tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.timeout = 65475U;
    tmp_tmp_tmp_msg_1_0_0.lat = 0.979775911897;
    tmp_tmp_tmp_msg_1_0_0.lon = 0.418954625111;
    tmp_tmp_tmp_msg_1_0_0.z = 0.340499455951;
    tmp_tmp_tmp_msg_1_0_0.z_units = 183U;
    tmp_tmp_tmp_msg_1_0_0.speed = 0.854556198671;
    tmp_tmp_tmp_msg_1_0_0.speed_units = 136U;
    tmp_tmp_tmp_msg_1_0_0.custom.assign("ZOVGKNQDSYYOFTENHOICKN");
    tmp_tmp_msg_1_0.data.set(tmp_tmp_tmp_msg_1_0_0);
    IMC::TelemetryMsg tmp_tmp_tmp_msg_1_0_1;
    tmp_tmp_tmp_msg_1_0_1.type = 180U;
    tmp_tmp_tmp_msg_1_0_1.req_id = 3801750841U;
    tmp_tmp_tmp_msg_1_0_1.ttl = 21433U;
    tmp_tmp_tmp_msg_1_0_1.code = 54U;
    tmp_tmp_tmp_msg_1_0_1.destination.assign("LQFSSZTDODIGFYHKOUEXZUDZVJFGNRJSAIHFPCPUNJLICFHYMEMIYDOFREKQBASYBCNEEKPYWARMTRRRDVPCWS");
    tmp_tmp_tmp_msg_1_0_1.source.assign("QQNAMYXOJPUEBFAHWQOROUGFMXKBJDTSLGHGYKLUUGPDKHRCEMXCRYGXUPDRIKVTDNPZABZSKTLKEYWZSBAYVCZRJXZAPIUUGKXBNOPQTWDMKAHIJHPMN");
    tmp_tmp_tmp_msg_1_0_1.acknowledge = 6U;
    tmp_tmp_tmp_msg_1_0_1.status = 143U;
    const char tmp_tmp_tmp_tmp_msg_1_0_1_0[] = {7, -12, 36, -44, 101, 107, -47, -34, -89, 87, -75, 89, -120, 70, -33, -23, 73, 91, 8, 84, -32, -5, 22, -121, 28, 93, 58, -22, -3, -24, 55, 47, 70, 74, -76, -125, -44, -34, 6, 91, -30, 115, 69, -51, 113, -106, 100, -27, -64, -124, 0, 41, 110, 13, -96, 122, 66, 111, 50, -52, 94, -86, 32, -71, -34, -93, -77, -121, 102, 42};
    tmp_tmp_tmp_msg_1_0_1.data.assign(tmp_tmp_tmp_tmp_msg_1_0_1_0, tmp_tmp_tmp_tmp_msg_1_0_1_0 + sizeof(tmp_tmp_tmp_tmp_msg_1_0_1_0));
    tmp_tmp_msg_1_0.start_actions.push_back(tmp_tmp_tmp_msg_1_0_1);
    IMC::Throttle tmp_tmp_tmp_msg_1_0_2;
    tmp_tmp_tmp_msg_1_0_2.value = 0.284225360359;
    tmp_tmp_msg_1_0.end_actions.push_back(tmp_tmp_tmp_msg_1_0_2);
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::Rows tmp_msg_2;
    tmp_msg_2.timeout = 16389U;
    tmp_msg_2.lat = 0.203627908036;
    tmp_msg_2.lon = 0.823330269163;
    tmp_msg_2.z = 0.671248800525;
    tmp_msg_2.z_units = 218U;
    tmp_msg_2.speed = 0.717639090573;
    tmp_msg_2.speed_units = 60U;
    tmp_msg_2.bearing = 0.385281536075;
    tmp_msg_2.cross_angle = 0.444869067521;
    tmp_msg_2.width = 0.745147745257;
    tmp_msg_2.length = 0.402530474515;
    tmp_msg_2.hstep = 0.718513034758;
    tmp_msg_2.coff = 106U;
    tmp_msg_2.alternation = 202U;
    tmp_msg_2.flags = 210U;
    tmp_msg_2.custom.assign("EOACVKKMFNYXKUYIYSVTAZQOCPKILXMUBAYRULSIAZEQAMRPDJDNFXEUVRCJDIQEABZX");
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
    msg.setTimeStamp(0.677018529989);
    msg.setSource(64284U);
    msg.setSourceEntity(206U);
    msg.setDestination(60768U);
    msg.setDestinationEntity(253U);
    msg.plan_id.assign("WCAWAOCVQORUTDQEBYTGEHQSKSCTIZJKLFUHXXOEZAKMXFJZRHIEOVZUPLLKMOJKUNPICBBVBQPDTFQERFTXNWXAVEMWYTJBLRGCTOCGPUHGZLGUHKDZEYMIPYKRZHLPVFQJMBDSJGWWIGYDMHDNIMBNHUDRQAGXVZYANJNYCTSYWUKCSDPRMNAUPIWMHWQQSESYJFRAPCFEKNTXFJ");
    msg.description.assign("XLQMBRCAHPWCRNYMNQKMQSXBTOTGQWWIKMGY");
    msg.vnamespace.assign("ADOEDFPUADXOFYCYWL");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("KVHNNBVYJCBQEKRRFJEKGBFFHLXDOLQECPOWUCJUEAFPCUXOMJTPIFYTYPKROGFREPNMAHFDTJEOQKPMBSVQBICVGOFTGHXZUQYGGDXYXISXB");
    tmp_msg_0.value.assign("TXLCVUBWBCEOLPHZUGGSZUQGIYJFQFYJHTGAOMKGIXAOSJNKSHRRZPECBMSXWK");
    tmp_msg_0.type = 194U;
    tmp_msg_0.access = 227U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PRCHVBWEYJEMKBFRHXWRBNIIMTSIXLNYSJADVXZYUYHXJGPZZPLMQTDFANVZIMKWXYNISICWJLKDEZUJJVBYWBRQUAULYAIOXAOJVOZHCNXGSOKTDAZKBCKNZPZTLPHCWRFGDQFKSJTEJEGHMQEOWDCIRTDVMRHRPVHNDACAXVKBRLVMWRVNHLTQMUEZCFBOFGGHQGPOSOFCJBQNOQPFKNTSKLXB");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("BFNWTFASKKBUJNRQQHYNLRLMAAQUZOBFXUWSZKTDMYAJVSCVSDMUDQNLLCUFHKWIWNKHJNBYLHMFHJFILOJQFTXIZEDYRWXXUQNNPHGTBMVLLTQLJEBTRIQHUXRAVPPIRYKYCJDPZTWDGTWHSPCPFRGCPVHJJIUAYEOA");
    tmp_msg_1.dest_man.assign("VVBPMXIDCCVKGFLUVSKQWSPQFEOGQXELAMBZEAHATQPTDFUKXMXLXNRMZCA");
    tmp_msg_1.conditions.assign("MEVLKKKLJSRIFEUAXOJLUSVFVIGUNGMBHPXUUDKECJ");
    msg.transitions.push_back(tmp_msg_1);
    IMC::PulseDetectionControl tmp_msg_2;
    tmp_msg_2.op = 128U;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::GpsFixRejection tmp_msg_3;
    tmp_msg_3.utc_time = 0.232112186161;
    tmp_msg_3.reason = 88U;
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
    msg.setTimeStamp(0.731462537665);
    msg.setSource(33829U);
    msg.setSourceEntity(158U);
    msg.setDestination(9183U);
    msg.setDestinationEntity(194U);
    msg.plan_id.assign("XENCZMTFYVLOEISCDTYPAVTFQNEADVXGNYWWCIVMHZBPVNNWQRTKJYNYUKIRQGJBDJTYSUULKDDXAQOLHAXTAHKNVEJWMCPBVBPYJUOJBQKPJLIPFWSZTMOXNPUQOERWXEHGZKTRPZ");
    msg.description.assign("FXUPAYSOOJZLNMTCDSMHGEUZXVVAUWRBIKDWKIGYZEZVFKKTDJKIMONMUTARFOLGTBICQBEZWIEHBQRMTGGCTQYDLGUHIXYHDHWBRPX");
    msg.vnamespace.assign("JELDPUVTZCEYGQPXCAYBOYCLMEJJOMXBTFQNKPGQBAIDLJYZINWFSINSOTNMWMQQJZDHSFKGUNSCJBMLEOTXGLKRJYKONWOQAOVYVRRQFVQIBDWUSGZOFUHBRPUOYLEXVTGGCZHKHWPZVRSAWTVIYATDEGVWNTJDDKIPAUMABDHBIXCINSXUORHQKMHPSUBMRRSDZIJWL");
    msg.start_man_id.assign("JFHUGWFBUXGLNSMNRPENXLCZLQZFJVNEDUDJVPTRGALFDECJTNCOVJNHVWZTKRTSHFSPOLCIOMSTWIMCCXGQCRPAWENZDXHDJOSQOMPPNXUTWZKQIJWGLGWEAKJERGAZOFYTDBZIXBKKJMBVUMYYHMGERFVMYKBIZRSY");
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 2063356940U;
    tmp_msg_0.value = 154U;
    msg.start_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.597746121317);
    msg.setSource(50093U);
    msg.setSourceEntity(216U);
    msg.setDestination(63772U);
    msg.setDestinationEntity(113U);
    msg.maneuver_id.assign("KCVHHSWDBOJERJYKFEMBKNIGNEQNZOLLGKPYIRHIILPXGWXYTYXBGMFUTMDBFABVAAIDQTRVZWZYFOTOYNCXDHPYIUQTIXIPHNCUOEXMFHMCOLHFWSRLISKPUKPAUZKSNONTUPVMBNYYJJWPCVWXPCEGGLVHZOJJGZKGEWUBLRSTSQQBQFYWAFSRMXILVTETLKMERAFAWSUFQLPDUVXDJBDASDJNAKVJQRHAQZGMDTOMCZJVCEONBURHZCZ");
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 44845U;
    tmp_msg_0.lat = 0.423099255107;
    tmp_msg_0.lon = 0.990285693386;
    tmp_msg_0.z = 0.36578445043;
    tmp_msg_0.z_units = 188U;
    tmp_msg_0.speed = 0.38036432758;
    tmp_msg_0.speed_units = 48U;
    tmp_msg_0.custom.assign("ORTULAFMGKHENOJHVPNXBWZSCPTFJRUJAAYYMAGTLPBT");
    msg.data.set(tmp_msg_0);
    IMC::StopManeuver tmp_msg_1;
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
    msg.setTimeStamp(0.681391860755);
    msg.setSource(36567U);
    msg.setSourceEntity(164U);
    msg.setDestination(18927U);
    msg.setDestinationEntity(226U);
    msg.maneuver_id.assign("KTGUKAIWTJKQGVUPEWHSOSPEBGNFNNFGWJUWWABYPLOTXNR");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPitch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.574837825666;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 20296U;
    tmp_msg_0.custom.assign("XQRKARZHQMFKBTSAMHXCZNEPEQBRFCZFQJIOWAJUYIBVIZEJMGUNWUUZLKUPACVCONLLPTOJUYSEJVZFWYIBNYTRHWRWJ");
    msg.data.set(tmp_msg_0);
    IMC::FormationPlanExecution tmp_msg_1;
    tmp_msg_1.group_name.assign("UPULQJOUYBNPADQZNAIEFXTXVUDYGSFJPHZCERUJFGXWLYB");
    tmp_msg_1.formation_name.assign("RPIOBTKLKUUJZQHJTAJKGZSWSMWEBBARNLZYYKWIKEPVRNWXIKROVYCZLTOVOJYENZBDXUMLLGMYYCJXWZTGLEWCYRCCAFMTUNSSBLUDPPWFCXKQDHUHDLXZGOONDHOVCWXNGQBBVTTFNVUIQBHJEAQZRSXSTJGSFGNAQIHIUAILDBMRXZSJAKVQRMSDUVEPCEFMVECDTF");
    tmp_msg_1.plan_id.assign("BNWXVENUETHGSGGJHIUIMILLLGJTKFOVIUPKEJFVLQJBYFVPFKTJFNRZMAOZFUCVDHYRCGPHQLTQYBFKSACGHFWZHBXROIDOKGBFRZCWABIGWSP");
    tmp_msg_1.description.assign("SCSIBYDDPGBEKRFHJCULFKNNFGE");
    tmp_msg_1.leader_speed = 0.870752704542;
    tmp_msg_1.leader_bank_lim = 0.796517886117;
    tmp_msg_1.pos_sim_err_lim = 0.716989296693;
    tmp_msg_1.pos_sim_err_wrn = 0.580900030207;
    tmp_msg_1.pos_sim_err_timeout = 51374U;
    tmp_msg_1.converg_max = 0.829941690081;
    tmp_msg_1.converg_timeout = 4954U;
    tmp_msg_1.comms_timeout = 15024U;
    tmp_msg_1.turb_lim = 0.924940119167;
    tmp_msg_1.custom.assign("FYKRRMJXYYPTXKRFMBVMQERULNOPRPSXUQJAYSKJZXZHNTPFUVQUBLSHSVDGPMPIXNWMDWLRSVFTUDIOEPQCWKNTCTMCMDBPYEANQBFCHBJXOZICJVFKWIJEYOOTKEXKIG");
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
    msg.setTimeStamp(0.872313518875);
    msg.setSource(21189U);
    msg.setSourceEntity(87U);
    msg.setDestination(37315U);
    msg.setDestinationEntity(49U);
    msg.maneuver_id.assign("BMBTETOECJBXSXNBJDDZZVHDCGWNCWLRUEQMMULIUIKJNSESOKHCICAFVZBYMWPJWXFYLGV");
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 36316U;
    tmp_msg_0.lat = 0.23943010678;
    tmp_msg_0.lon = 0.00511203229534;
    tmp_msg_0.speed = 0.825517151752;
    tmp_msg_0.speed_units = 120U;
    tmp_msg_0.custom.assign("ECHAYSUIDOWZZAINEFYBBPMCUBENECILTUBEXBLHZRPXDQHTOVWLGROLLFWAVUQNRGMXWOCAJCQZPETDSKTNZZMFRSUGAIWUGZVHKYDGDIRHPRBNUZADTEQVRHPTAFKPKBFYJELFBQCKJSWYYXJSXKJZFNVTVGJNDXNBCRWGTQUQEOIZKJYPXPMYJGHHPOEOFQLKSIKOUAQNSLBTXWC");
    msg.data.set(tmp_msg_0);
    IMC::Rpm tmp_msg_1;
    tmp_msg_1.value = -925;
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
    msg.setTimeStamp(0.84183154375);
    msg.setSource(7235U);
    msg.setSourceEntity(24U);
    msg.setDestination(49588U);
    msg.setDestinationEntity(73U);
    msg.source_man.assign("KRPWKBKLKHUYGFSBFWUVGYJYBYVNDNPOWOEIDHEXZSXXFAPMQQVSH");
    msg.dest_man.assign("LLLPOJHZXEKGXTFMYHNJZVRKEGESUZGBQHJHZCHEHEBQXDCWBKAZRFTGWYUYVRMGFEXSMTAGKWMKFUZADUCFZPRCIPRMVOJDOVXKQNOSLNBLF");
    msg.conditions.assign("YCEUQLTIPYOFMUOVRYKZWZWJXDUQNHUHZXBMBZBGCMSKMTIJXOTPWLCBJIOJINGVAQNTHMDGTNKRDKMBZVSXYEETAHQTHHKPIWVGQZDXKJXSRYFNAHJNFTLBOEV");

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
    msg.setTimeStamp(0.13755510577);
    msg.setSource(38116U);
    msg.setSourceEntity(207U);
    msg.setDestination(9421U);
    msg.setDestinationEntity(200U);
    msg.source_man.assign("KRVYXWYSKPBXHVUUUDYOJJUSGLGVRBIUEOPWNEXHXLSMONSMQHYPHXYXADOXJMSNWPNBQNTBJZBYZTQGTBPBRTKRVRYQKVLQIOWVRNDDXNMAITHIDSYFWAIAZLFKCMCGZOOKAFTNFOGEGUFUEHFBGRAZQJVHWGCDVPLZCPMEGRMDTOLXECBELJCFIMULCZSWHIZVKVDLCMISCACPJEWTRSEHKWQNNXQMAAGKFRQU");
    msg.dest_man.assign("LTYOTAGDNCVPDEZXITDJUDTEZBFAAOKPAYHJNFEPATWMXDBIHJBBWCIHYCUENDKXOSBUBIFCKFMJWGUISLPGRHM");
    msg.conditions.assign("VHMUHSQAIWVJAIGCUZGSSJQNKXKNNCAIVYNWZEUTZFEDJJKJPDPCHJKNXPAMETYV");

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
    msg.setTimeStamp(0.0129886588022);
    msg.setSource(49319U);
    msg.setSourceEntity(95U);
    msg.setDestination(9670U);
    msg.setDestinationEntity(144U);
    msg.source_man.assign("KJOIQWJUXMOWZOAXOPEYDBNCFKJLODHTZNKVITFXVJAYBSMEQKMFRIBMXLYRGLXZWQPRPKRUAQZVQSIAGBNMCKVPFNAHHOJDVLHNZXOLSRUHNOBECQUOVIHUUEXQVEMJOCUWNPTRAGMNDFHADPIXWTSSWIFTDFBRXWQYLSSDKHNLYHZUEZCVQERERPSRZTGCFIFXCGLBLIWJVIMAQGZLPCDMUJGTNEGKMUPPYSA");
    msg.dest_man.assign("LGCBPNIBPWLHSBYEUBJFIGAKNUMBOKCRMVYFMPHTPGJZEVXVPKRAMPRWRXDBHPUEIMICUVNGHWHAUPCOYTXJIAPSOZGWFUWLRTJQNNWGXNVQAZTJDALURF");
    msg.conditions.assign("KQWQKCKBNVNJDLGUEMVZXGAZDCOAENNSYYCEGFPOHPTSCVTWEGXQCPPICSXZODXNAGFGDAKAXDUZKOTTA");
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.0871570192997;
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
    msg.setTimeStamp(0.270362793544);
    msg.setSource(62893U);
    msg.setSourceEntity(19U);
    msg.setDestination(10310U);
    msg.setDestinationEntity(194U);
    msg.command = 184U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JPXEGCTIIOLGNUQCZEJXJHRS");
    tmp_msg_0.description.assign("JOIGYPKTYSKYAKURECFDJUUHMCNRQVSFKOZUZCBYWFHKZVJXNGZASPANVOWYAQNONPACFTIGQYDVYCXAPKVUAJSXBZDVCLLARYLPOTEDZIHXJNKKETXLTTXWZQJRJIIBDUGTEACSWBRJBMQCLHUDMMOXPPWHCTHYQMUQPFZODQIHEVWGWGVHVNJWASVQWXFMBNFOYBPLJWGMNBILUI");
    tmp_msg_0.vnamespace.assign("ZPXXTAPEHLGDVILJCYLOFUBOACJQBZXXPUGLNRMZETKVYMNPICBECCNMEDTVUWTVCVAKBAMSAEIXYPBYXDHJPTKFYTZZHCNRBKXGATMDFGZSKRARISKBQQKLEJDHQGPRSQILZWWQACQZMDOTPNQUJFOOVWHMFGISMHUURVSE");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZVMMABHEDOTXNIJMXINXEMQLRSCVJKVLPNPICQQQUXUZLRFRALCRDWGPWKQAQMHCAWOHWCTDUODEJRWIOISONYLAMTADYZEDYONGBJGSUMGWFRADZYNWQKMHVPTLCYXPKTPRNEBLKHYBKFOEFVKVTQXAFHPLPWXRESCSOJNEFEICITKCISFTFXFJEAGROYXZHGBJPUJVZHBZ");
    tmp_tmp_msg_0_0.value.assign("MANJFBXJHCIEYDRVSEUBSYUPFOTBJSFVKLPGUVZWCTAUMWMIQHGPWLSNKFGFIYSTIAQXZQQMNLOOGRIVKYRDHZDHUVPAGBUFNBZBBRATINIGZAHAUGXRXDGKTDVMXDCOIKQCYMOBPTEJLCLGMZONTXIQURLXKKHAXUQVTYZWNXWTEKSDZVFNJHWSYUPZHTCEWOOJLCPASEKEZVEDJAFRFBOPWCHQYJVYFQHRMGJSMYD");
    tmp_tmp_msg_0_0.type = 41U;
    tmp_tmp_msg_0_0.access = 18U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ZGFZXAKNFMBLDNDJZABXYAHWWMHVVRPDQAJPCFGHIGTHJSWDZUAMBERQKLFRYGBSFMOYYECZNFXIFRUIOFPQTSJUHRORILMPMGUKIDHPFTIGSVLWPJLOWOQRMQVXPWEKQSTEELZMUYHZNVCZMTTEINNQCTZMQWKYDBEXCSOJKSJWBLADXEPWZ");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("LUNXMXNPOLFYHSKPRKWEWWWMTJKIKEYMARPIRTNCYCNCAFFLPDCIJOGZWAKIJXNGUMXQRWBGVFSIJURSSMKBIAEJTMZVSEQORWMKHUNZMGVFLPYTWVBNGEUTAJWHXHCEELJHYSCHIVMECLBROFXLNOKLVVADGOAGBDBKPOJYFPZXYNQHZSSICPDHDKZARVDRCZQEZTFYTT");
    tmp_tmp_msg_0_1.dest_man.assign("OHSYNTLBVXEMOQODQPOVIJSDOTCFUQABLBHIIZXKRFOTHZGDQHJGNLLJNUDDFZCXJRGPEFPHXGGLTBQXGQHQSJYVRKYRPFSKPIGCVUUKYJZQNEORXWHTTLEFFMSPDTKBBRZJLJWYBVCKTUUFYUOVLACCUIBAMXMNIFCAOITWCRIWPZSNLMXIQNGWIJMWRSBKAWNESDYEPRWLEMZVMUNMAWHPKTZO");
    tmp_tmp_msg_0_1.conditions.assign("SXIEIGUYGFEOAJETPNIZFYNHPZEFMWWPMAYTROCSWOMIHLMXQLHVWFLFACDRIMAWBOMHZAIKCBHSYJVHJLRRBZJPQLTZLBLSURBETLSFRWQPCOQWBCAEVSUXWISKDGNUGXFMR");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::SessionSubscription tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.sessid = 205785841U;
    tmp_tmp_msg_0_2.messages.assign("PRQQCMUJMYSMQNEDKQXVDPSIPHKPOYFHCIZWAHSSZNLHJUYFHKOYXEACDVGBDXCGDQORGNYSWEDZADWFOGNVOEXAMKVQGGLJNTVDHHYUCMIZKDUWIFRAZLBMKNFLSBWPOTEQZRCVGEAGIHNPXTMZAKGONQPRXWFVLTWTRXWVSETIAPWACEKLGBNVBFQJIJJMUFJOXCTLWXENRBSKCFQVYIHBPUTOSEMDHMCJJYFUIX");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.189384660184);
    msg.setSource(928U);
    msg.setSourceEntity(67U);
    msg.setDestination(26457U);
    msg.setDestinationEntity(219U);
    msg.command = 156U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WPKRNLFGIKNZDBGDXUKNHONIWYFNPYVSMARAQTIQGGGKKUBVQXIAUFMYVTQRKHMZJHZHXOCPFGMONDOHWLZZVBDTWSEWOHXBEDBSXSVUIJVUMTCYERSKGZDNILOJXPRFFORYTLTLXQMWCCSAAWTYSIXL");
    tmp_msg_0.description.assign("HFUVVSAZYYCIOJLTQKZNOHBULBWUHJMCPFUUTTEHKGHMWOAINGXNIYPYYHPQSGOHRWPMJTMEKTOCARQDUPNZFCFILPZSGRYQEBYMDWKBGSLEQIEDNXJPSZUPKBDJNBAZFXMTDEOXXCZONIKBVAILZMJTUJOAXAVQJKQCSLKSVRGGDEWHLOKAFVRQW");
    tmp_msg_0.vnamespace.assign("MMIFHCRPENNWNDPKHVBWVSCBIKFEEGAHUK");
    tmp_msg_0.start_man_id.assign("ZJRRRJHUQQNXBCOPACACPPEILPWBQOQZVGMGUCHLFWVMWDZJYSMYUSRKAJRGVJZLNCIKTCIYBRPHFGGFNXWAUPYEVLAAJKADSIFHBIVMPQCUFEINUJDNJGOWBITLKLYYQYVWUAED");
    IMC::Sms tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.number.assign("UPVOQPJSKFXVJNKQGOAXZUCRWIATHGEVDEIJTCSZRWCBLZBSTBGUIPQBCEQZUKSADEXTPTWGTOJIQGYQKXUMWXDHTCBYJFNTTWRZDRYAMGAZRVHNZHMLXWACYDMFDGSKMLSNQLSKLOFDHBGNREYMNAZLJULHNPCCEOMVIOPFAEVXTCKFLBCVWUSFVYIHAEVUPMFLWDNLKUEIIUWQPMIAFDZGKEFVYYMNJGDXKHROSJZB");
    tmp_tmp_msg_0_0.timeout = 61098U;
    tmp_tmp_msg_0_0.contents.assign("BOHMHLNPBLIVDJQAGYVWAGYBIUZQFJBSKVNTOWRECJSMEVZXUCBLKWVY");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.571380644698);
    msg.setSource(26787U);
    msg.setSourceEntity(204U);
    msg.setDestination(14045U);
    msg.setDestinationEntity(185U);
    msg.command = 103U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KRNLWZQCNXAYUVCFTNWAPJDDEIAWQGPCBWLTYVQKJSECFZVYRPGVCXOYFVMXJFLYVXQTKUIJPACSHTUIEEGEHUSEDRATXRNEMUFZHQDFHWWOHUZINBBLGPLQOLCYMOLPFTKTQYBKKJKKZDHXDCHRWANRXTMBOEKQNEMEVLCUQKISOWVIMGUTMYBZALSUHPOTRIJSRDHFFISZDNJDZXHGQBZPMOY");
    tmp_msg_0.description.assign("VPGHVETBMTAQLMBDZJEQDJDBFYRZSKKSVMYHVOQIGRGAGCKDOZIBTMXPBELXSRHMZCSCJXWZPQYYPSDMVJKUIHOSEGRWP");
    tmp_msg_0.vnamespace.assign("PKTGLVOLDXMZBZABDMIIFRANLCNGFPKGOWFCRRLGBUWCXCYTKQDGDAUDZVPWSYCCYTCHARTJIIQFWOTOMAEUGHRYKAQUNBGEKFCUJYQJSAYSPNWWXIGIVZZDKHYLDKREOBWAQJCXJLMBSZQTWERMSMEXIXWYYPHORHXBENTSUZJIHSMVRTVYLJH");
    tmp_msg_0.start_man_id.assign("YENMCUDYSCXFOBZGKIDRE");
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
    msg.setTimeStamp(0.91720612951);
    msg.setSource(2287U);
    msg.setSourceEntity(248U);
    msg.setDestination(40018U);
    msg.setDestinationEntity(118U);
    msg.state = 222U;
    msg.plan_id.assign("BIECXLUUAXQTTCYWQINJJHAREFPAKWWJIQOCLYIVSBJTEYZNFSMFRWDOVUSGSONTMSEFQILSGIKJBCLEVUEMGWAPTWMKIWXTLAUHDEVOAZVHGOJGVYUDHQL");
    msg.comm_level = 184U;

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
    msg.setTimeStamp(0.229534321179);
    msg.setSource(28347U);
    msg.setSourceEntity(223U);
    msg.setDestination(42591U);
    msg.setDestinationEntity(83U);
    msg.state = 146U;
    msg.plan_id.assign("KGGOOMKQNDVPWWGATUMKWEHZ");
    msg.comm_level = 21U;

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
    msg.setTimeStamp(0.843981142337);
    msg.setSource(16114U);
    msg.setSourceEntity(37U);
    msg.setDestination(13861U);
    msg.setDestinationEntity(22U);
    msg.state = 32U;
    msg.plan_id.assign("QIZSBQDKAXHGQFCFZCMRCDXPVYZYKUBUTWVORJBRVLHYOKNXWTFHSRDYJUOTOZGPLWQZVVMODMNIQALYVPGHSQXACRHEAHOASJACTJIFWSDNDORLPMJJNEBBJJWH");
    msg.comm_level = 89U;

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
    msg.setTimeStamp(0.916301784042);
    msg.setSource(1083U);
    msg.setSourceEntity(78U);
    msg.setDestination(21824U);
    msg.setDestinationEntity(233U);
    msg.type = 71U;
    msg.op = 47U;
    msg.request_id = 61430U;
    msg.plan_id.assign("ODGKAABLTREDNCAOXUGVIRLJSMERJPEMZUWINIXMYMQWYFTJVYEXXEWMLSZTNOFEDAKGLWCWPIDLEMMQOBHHXQFCANUSIVSEHGZCZUQGDYIHOSYDPAZCBJXKPNNWSTAYUJEWFKCBFYSRDRCLPMDOBYQZUXVJFZXKZFGITQTGFNHV");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 57623U;
    tmp_msg_0.lat = 0.862313036823;
    tmp_msg_0.lon = 0.309717922417;
    tmp_msg_0.z = 0.0431799858724;
    tmp_msg_0.z_units = 120U;
    tmp_msg_0.amplitude = 0.179068231829;
    tmp_msg_0.pitch = 0.573459476344;
    tmp_msg_0.speed = 0.558731689764;
    tmp_msg_0.speed_units = 192U;
    tmp_msg_0.custom.assign("OJIDFNDOCYVJDXUKLILGMAKBVNUZEUAHQDEEEZQ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BSZVDFBHCVDIFCQMLLTVBZWLMLJSEC");

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
    msg.setTimeStamp(0.152523954562);
    msg.setSource(43718U);
    msg.setSourceEntity(151U);
    msg.setDestination(47953U);
    msg.setDestinationEntity(138U);
    msg.type = 161U;
    msg.op = 134U;
    msg.request_id = 4458U;
    msg.plan_id.assign("XOAWNDTEARVMZSNJFDHEEKDCVMPAGUZHAVUMFARIGAJYBLQRNXEXPTMPZGHGASSNVQTZKIAHTZLWNSKXSJBTYZGLLYJIGBWUPDCQZGAOEBFMCYSIZUUNREKBBOWJHDSOICYMWURCOXRIVULMDQCKIWGORCHHJHAOFNKRUPBPLQFFFXNTPCUPSJYOQWXDKMJCRVXBKJYSFWMECBBFHEVEYXNPQTJLIOLVTDLRZTISHWVKYXWNFGE");
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.935751923873;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZPDKFYTSEOKQNBZCCRUKGLDDTIPPLJZQTWAATPHWFGABYGMPDUFWMRXVBEGNJTHJTCVVQBIIMHNIHCUDNCXOCZWLGVXHDPDHVRANEMXQOSDEEYCXCEAMYVBHQLJTZLEOJOWSKUIYAKNFRSEUIWZREUOJCUXTHLSXLKUPVAOZFTBSEJBMNBWHAORFROXVCYHQBIDUAZDQUYKTNWXJBPYSFVMGSVJY");

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
    msg.setTimeStamp(0.785679552642);
    msg.setSource(65143U);
    msg.setSourceEntity(180U);
    msg.setDestination(25966U);
    msg.setDestinationEntity(147U);
    msg.type = 241U;
    msg.op = 173U;
    msg.request_id = 7560U;
    msg.plan_id.assign("TAPUWNZPEYTJTQKDATNHHXXGWJOFOAVDEPTSNENJRAFGDZQIGLLXCZLCHMGSAYXZLHSIOGAGUEVYXXLLKONEYWVGKVTCXBIWDQQNXSPKAUDDDZRFEBCSHZUFEPFJQKWQCMJFKEIKODWOLOOCBRCMDUFUDNHGZBRCQHYLJYNXMSVZZJFBLRWFWGBVILZMJKVSIMJITVXQKOWQJSCPRPNVRTTQMRBNGKYBUMIIAYARISBTY");
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("GAJGZPKTLRKLVNLTWGDLXDJABATEWSDMDXRQDZEKRXUAVCCSCWBNQVCXTXKQRHRMPOZNSUBMQFOMISWNQFVBPDIXOORJYSYUFETJNAZUQYUYUDYXFFYNEYMIWZIMFYCVZLEOALFDNIBKVHGEUAIBOGIACGPHPBHTMA");
    tmp_msg_0.type = 10U;
    tmp_msg_0.properties = 160U;
    tmp_msg_0.durations.assign("OCESLBXHUQBJSWEMOFEKBBWDHWGMAHDUVTXSOPKAYBNTQQKFCESESNTZGOCFJKBEGTMZSYVMANMAIFMQPECJLYHZUBDFRXCHIOZWERNHKTUQXXYBYRIOVQJPZRYUNJICZIAPBAZPDSQVMPRDCGHIPYQIUCDWXDYLGFTTFLAQWJRGWAFLNZVPAGZPLKFRFPKNSVGSZCRLXXSNDOEOYMUIXVQYIXKAJDLIRTGMLOHDVLTOJMJW");
    tmp_msg_0.distances.assign("PODVIVJPBKYDQQKHSRMVWHUQCUWJQZIGBSBELCLSQWFKHCSIBWXTVJSXLDO");
    tmp_msg_0.actions.assign("FWZYXLGADLBOVCDQWGNEINMONEKKVLRJMJFVBPCRORUJAUWKLONFVILEXKGKVGAIJAECFZDQEPJVGZPLSZXYCCDFPXPMFJFGRZTHQNLPVHLYHHSBTHWNAEKSTBXDOENVZNUERJXDDTGSUCXWPHARKYMDESYGOHJGBTFXWAUPZFPQPUTUHRDJBISOAQYIXUQGMUIWOVKJHFVCWTOBBNSMSWI");
    tmp_msg_0.fuel.assign("ETOSMCIWPXOAYPZRQHDCSVYTBQUQXNYFJNLBXUQDELUSNWRQJHBKFARDYJJNCLCYAEBZPCYRIEHFSZVPZDHWVMUVLVJIGISSXOQIRKNGIRRGTWMTDAOPICPCKJFAUZHRWLXNCKOGMKTMBNMOYLLKMAPRGLEBHZPGDZEJVU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HHXWAJUTCOFREQVEHKWPNMAYPXKFISNKMPUNGGSCMCSKTAEHUCPAZALMDBLGMTBZABFSKTJPCIGWUXLXKGLWFXPHVGYHCMJGOADZMRNSJFEINZEDXIWKFYDTOVRHGCSOVPQEZXLUVJGWIYQQNSHUOTNTPWXNQVJYIMMLHLXQZPNDUSACMQOOIUKXOVLVVPEDDBOOSRZL");

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
    msg.setTimeStamp(0.161038871111);
    msg.setSource(23217U);
    msg.setSourceEntity(232U);
    msg.setDestination(11081U);
    msg.setDestinationEntity(64U);
    msg.plan_count = 64506U;
    msg.plan_size = 3284388301U;
    msg.change_time = 0.692846460653;
    msg.change_sid = 1375U;
    msg.change_sname.assign("QFNOTEYIBORWOWADTKKVVLKJBQCTRRZKOFTSWYZEWRDVWLNKNHMADOHNBQAPNFZZSPVYSBXSIAJMTEHGTJNPIXLRKVNAUOCCFUBRNH");
    const char tmp_msg_0[] = {31, 102, -23, 103, 80, 76, 84, -118, -111, -79, -109, 60, -42, 98, -31, 11, -34, -47, -38, 73, -10, -76, -106, -88, 103, -22, 126, -110, 125, 100, -88, -30, -51, 87, 94, -19, 123, -104, -98, 35, 47, -13, 97, 85, -74, 61, 79, -99, -20, 106, 61, -75, -60, -31, 73, 77, -124, 42, 50, 121, -19, -118, -124, -84, 16, 23, 98, -39, -127, -127, 53, -71, 72, 93, -85, -74, -89, -104, 63, 4, 119, 16, -55, -51, -75, 105, 77, 120, 27, -56, -123, -115, -73, 71, 105, 49, -96, -103, -103, 120, 9, -50, 79, -63, 86, 56, 37, -121, -54, 28, 58, 74, -13, -103, -97, 19, -8, 125, -116, 7, 3, -84, 13, 112, -104, -68, -72, 22, -121, 74, 5, 76, -51, 48, 89, 92, -90, 5, -21, 22, 97, -77, 60, -92, -44, 75, 50, -121, 67, -108, -71, -108, 10, -104, 119, -114, 85, 115, -10, -108, -7, 102, -88, -87, -52, -4, 115, 17, -6, -61, -33, 88, -60, 100, -90, 26, -122, 125, 114, -4, 107, -73, -105, 104, 83, 37, 92, -46, 35, -127, 25, 123, 0, -126, -78, -82, 14, 86, -112, -7, -122, -42, 121, 38, -124, -16, -61, -41, 99, -80, -63, 107, -13, -1, 68, -92, -109, 118, -78, -103, 72, -20, -26, 58, -51, -51, 42, 64};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("KLERSXDJSJHJPRXHNHTCESLZTBPVAIPVQWXTKAFAOOOVWNDFEQGDJNAYZNZNIPRQSQZ");
    tmp_msg_1.plan_size = 43421U;
    tmp_msg_1.change_time = 0.339611309696;
    tmp_msg_1.change_sid = 47091U;
    tmp_msg_1.change_sname.assign("VUFKMZBOZIUQHKCMJJFIHUXUBUNYCIDWMKSNOIPYBDYKFXPLWSAQICEMMPKADVRWCTZTPSKNLNSPKXHWXAJLUAHGJAMSILFAT");
    const char tmp_tmp_msg_1_0[] = {-94, 0, -35, -56, 51, 8, -105, -87, 24, 75, -11, 0, 79, -52, -113, 68, -80, -69, 6, -110, -84, 116, 24, -41, -16, -114, 108, 96, 6, -83, -48, 43, 40, -68, 96, -44, 32, -3, 55, -3, 119, -43, 18, -54, 125, -106, -62, 83, 109, -20, -89, 67, 80, 10, -65, -18, 116, -51, 62, -24, -125, -70, -103, 82, 60, -26, -44, 48, 67, -105, 11, 73, -113, -63, 68, 73, -37, 5, -81, -69, 6, -120, 84, -26, -39, 54, -100, 88, 77, 104, 38, 10, -116, 12, -110, -44, -102, 126, 103, 56, 33, 123, 46, -83, 38, 24, -38, 17, -53, 33, 48, -118, -2, 3, -13, 105, 12, -41, 121, 125, -104, 14, 24, 26, -6, 43, 106, -37, 121, 46, -73, -47, -63, 15, -101, 57, 29, -37, 48, -106, 73, 36, -87, -83, 82, -72, -115, 18, 77, -36, 52, -58, -80, -41, -100, -43, 94, -10, -106, -42, 9, -91, 10, -20, -99, 122, 49, 50, 76, -4, -59, -62, -107, 73, 101};
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
    msg.setTimeStamp(0.0194834688379);
    msg.setSource(16856U);
    msg.setSourceEntity(122U);
    msg.setDestination(18280U);
    msg.setDestinationEntity(61U);
    msg.plan_count = 7323U;
    msg.plan_size = 3964011199U;
    msg.change_time = 0.477631147714;
    msg.change_sid = 57534U;
    msg.change_sname.assign("RTNXUWXFMWCBJSYJCXNTQYBURVWVCCWYUZYZLGHKLLCWDNSRBODESKCRMDNGUPPTLMRVEXAELJAZIYGPEAYVGQQMMPRZQJYXMDNBGKFHVIWIHQEVAHDEIWQRYVCRFRKSKTZVBSDBDDTIVZANLUFOAUHSHFGIIJRUBFCXBEOKZNWHJEISQUIMTAPFTETPPWDGYCYMU");
    const char tmp_msg_0[] = {43, -55, -108, -57, 59, 83, 126, 86, -98, 26, -94, -1, 96, 23, 7, -52, 44, -105, -64, -73, -81, 44, -52, 67, -46};
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
    msg.setTimeStamp(0.706894808383);
    msg.setSource(25369U);
    msg.setSourceEntity(90U);
    msg.setDestination(1601U);
    msg.setDestinationEntity(226U);
    msg.plan_count = 55889U;
    msg.plan_size = 561726630U;
    msg.change_time = 0.958225692131;
    msg.change_sid = 38016U;
    msg.change_sname.assign("GLBAPOLTMTEHMIUDCRXZIXVRXLOCIFAUSOCIMRWRNUKDWXDWUNEDUSFVXQOYDFYHZDJMYEDHOVHTAXMYR");
    const char tmp_msg_0[] = {113, -27, 63, -9, -78, -83, 42, 68, -65, -52, 22, -37, 51, -118, 65, 14, -114, -57, -44, 97, 77, 119, 28, 74, 106, 99, -74, 63, 72, 46, 110, -4, 117, -115, -58, -85, 119, -111, 39, 74, 114, 11, -117, 65, -37, -12, -26, 92, 2, 10, -90, 45, -122, 68, -88, 27, -88, -86, 77, 102, 25, 104, 4, -73, 42, 119, -73, 16, -123, 115, -48, 55, 99, 93, 92, -6, -100, -50, -93, 14, -123, 21, -67, -49, -53, -63, -121, -103, -111, -20, -26, 39, 29, -110, 58, 42, 122, 14, 19, -11, 111, 115, -42, 83, -81, -36, 119, 26, 65, 15, 21, -11};
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
    msg.setTimeStamp(0.232974033803);
    msg.setSource(10424U);
    msg.setSourceEntity(216U);
    msg.setDestination(37227U);
    msg.setDestinationEntity(38U);
    msg.plan_id.assign("OAWBGDNBYKJFZPHVODF");
    msg.plan_size = 56418U;
    msg.change_time = 0.947720766888;
    msg.change_sid = 9273U;
    msg.change_sname.assign("KJDIQWNFCFLNGFHFLBKRDRSSBNXENMOJBQRYLYBXCENW");
    const char tmp_msg_0[] = {38, 125, -99, -14, 10, -32, 19, 93, 69, 35, 116, 58, -117, 43, -96, -72, -36, -7, 98, -70, -22, -23, -58, -99, -1, 71, 95, -78, -14, 55, -85, -41, -7, 37, 68, -79, 67, 75, -13, 36, -48, 123, -36, -26, 91, 33, -123, -71, -77, -120, 122, 16, 89, 54, 7, 82, 95, -75, -22, 70, 61, 110, -95, -63, 27, 115, 117, 25, -6, -94, 49, -53, -113, 102, -107, 7, 91, -38, 30, 42, -39, -82, 17, -28, 117, 3, 21, 83, 92, 51, -1, -24, 20, 65, -83, -68, -27, 119, 70, 64, 49, -44, 35, 30, -28, -40, 88, 46, -35, 92, -95, 29, -120, 107, -30, -4, -42, -25, 56, 84, -125, 89, 112, 14, 44, -72, -35, -74, 78};
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
    msg.setTimeStamp(0.478912799023);
    msg.setSource(49640U);
    msg.setSourceEntity(56U);
    msg.setDestination(32735U);
    msg.setDestinationEntity(75U);
    msg.plan_id.assign("AJOBCHBNUJIKQBXMRYZDYDHCWWUCCAEKBNMRQBVQAWOCUEPRXXORAWPZHGLMUSQYITZZVXPBVGNGGJTTDTXNFRZPHHOSIRWTUVJMSLXZQGQLKPHNFFEEODDFJVAFYARPKMAATGTKJNRLFPXFEMMXMBEGKCSROIWCWIYVUOQSBZIEPRSSVDAOZKNEGMDDICKFJYBQULYJHOQJKL");
    msg.plan_size = 30296U;
    msg.change_time = 0.415766302379;
    msg.change_sid = 16878U;
    msg.change_sname.assign("HYAGDYRVMPLFJWNZUSHXUBQHTCZTOITLQRADKHGWQZZUZPXNNXFWELTYWPBSSCOPSGZZZJIVVJOWUOXWPQXYNWGKNHIQRXIGXGJAXDCDBX");
    const char tmp_msg_0[] = {7, -75, 104, -25, -53, 22, 1, 53, -103, -42, -86, -84, -125, -86, 0, -25, 113, -52, 125, 124, 77, -20, 67, -75, -83, -119, -50, -120, -59, 86, 70, -75, -11, 1, 47, -21, -117, 115, 83, -2, 81, -11, 118, -123, 100, -101, 87, 41, 31, 79, 69, -84, -42, -78, -26, -125, -33, 119, 76, -30, 58, -125, 71, 114, 90, 90, 108, -65, 112, 74, 122, -80, 17, -70, -110, -22, -23, -66, 32, 82, 124, -75, -5, -92, 62, 40, 39, -33, -7, -4, -109, -43, 7, 64, 65, -14, 79, -4, 99, 24, 124, 113, 122, 97, 71, -27, -2, 126, 38, -77, -1, 20, 40, 44, 31, -119, 28, -25, 48, -95, -55, -22, 103, -8, -8, 86, -94, 17, -20, -63, 32, -16, -3, 93, 87, 105, 105, 39, -105, -63, -79, -87, 25, -46, -20, -93, 91, -109, 120, 48, -26, -79, 39, -34, 30, 93, 11, -124, 66, 32, -3, 88, -124, 98, -51, 23, 118, -10, -102, 65, 42, -28, -31, -76, 105, 16, 2, -96, -26, 94, -46, -118, 68, 9, 60, -9, 25, 24, 40, -44, -34, 58, -99, 13, -12, -45, 103, 56, 34, 51, -74, 81, 12, -7, -17, 50, 86, 44, 3, -108};
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
    msg.setTimeStamp(0.568504700886);
    msg.setSource(27468U);
    msg.setSourceEntity(211U);
    msg.setDestination(62122U);
    msg.setDestinationEntity(11U);
    msg.plan_id.assign("VQTYHWVSHKOPZETESQYNQKLEUZAYKQWSNYLSJXFCBLNKCDFIUIHE");
    msg.plan_size = 58239U;
    msg.change_time = 0.525585279948;
    msg.change_sid = 54903U;
    msg.change_sname.assign("XYHNCFWNCQVOTZQZCTYLUAUAXYSXZERXMQEISJFNSTSAPVALKSDTWVCFQAYNBRMXOVNLNQZBQKHHCQOUIZUKDMGAYUCXNLOLG");
    const char tmp_msg_0[] = {-16, 126, -30, -68, 108, -59, -35, 6, 10, -90, 0, 87, 103, 106, -73, -17, 100, 74, 85, 13, -104, 11, 98, -67, 82, -79, -109, 51, 115, -89, -45, 19, -71, 71, 115, 93, 33, 16, 42, -89, 123, -34, -14, -36, -38, 98, 3, 36, 99, -86, -102, -3, -73, 86, 39, 24, 43, -86, -86, 68, -78, -29, -71, 33, 0, -91, 33, -23, -86, -68, 67, 90, -39, 60, -10, 70, -77, 79, -84, 15, -13, -53, -85, 124, 73, -32, 11, 21, -91, 72, 0, -119, -93, -95, -65, -46, -51, 49, -51, -97, -123, -118, -101, -69, 95, 38, 110, 83, -1, -33, -64, 89, 105, -97, 124, -94, -94, -77, 111, -8, -60, 19, -85, -8, 82, -96, 93, 36, -94, -20, -116, -86, 120, 92, 27, 9, -36, 33, 85, 20, -82, -45, 84, 49, -116, 57, -34, -107, -38, 103, -31, 19, -11, 56, -81, -80, -16, -123, -103, -61, 15, -13, 110, 88, -15, -27, -71, -84, 10, 48, 0, -41, 114, 17, -99, -128, 126, -44, -15, -13, -55, 85, -78, 23, 107, -98, 18, 71, -12, 123, -43, 94, -29, -103, 94, 67, 63, 45, -71, 84, -47, -48, -96, -97, 123, 83, 62, 47, 74, -30};
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
    msg.setTimeStamp(0.644427896492);
    msg.setSource(63636U);
    msg.setSourceEntity(149U);
    msg.setDestination(57605U);
    msg.setDestinationEntity(198U);
    msg.type = 142U;
    msg.op = 16U;
    msg.request_id = 17597U;
    msg.plan_id.assign("KZMLUXHMIZAGNAHFKNNVTOOXQCVCAYUZSLZCXBFDQWDLVGWZNHICGWTSFUZVTLDVRGTZBQQSLJUESTSLNLFITPHIDDXHDYGOWCLPHBRYUFNPOHORRKBNJVMFVSCEHAUNYFJPZJMPJPSVFAECYOZIYBEDWEDJQPBFIXJCTSLTQMVXDKN");
    msg.flags = 52143U;
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 254U;
    tmp_msg_0.clock = 0.562043223279;
    tmp_msg_0.tz = -36;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DFFKCOGECGUSLDMSQWZVJBDWAQLHNKGVUXNTURKYNPQGDVFMWHGWFKYTAQUCBYHBPRQMDOLSWHCFRCJMDJXZOPHUEBMEILAAYYFTGZJQZPAVSQZJBHOEDGJNUMJZTTMWSTVPIVMOEBKMLPNRQPNIQEJRGIYDCJRTKXOIFNUXFXRXRRKPESLZQEXZYAHCDOCRSMPC");

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
    msg.setTimeStamp(0.0893036793848);
    msg.setSource(49051U);
    msg.setSourceEntity(19U);
    msg.setDestination(20023U);
    msg.setDestinationEntity(156U);
    msg.type = 91U;
    msg.op = 128U;
    msg.request_id = 645U;
    msg.plan_id.assign("JESOKMRCGZNAMPKZLQIFLWJJYLQXFWYFVNJTJGSSDXXZYOKUXQHSHAZWZSEEDBBGLULZGIJPCXRPOGVQHVEBBCKWNTUUYCBAEJBPPZNWNJMKAIPMH");
    msg.flags = 49436U;
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.728586874505;
    tmp_msg_0.z_units = 176U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GUYFGYBISRWVCDUCSTVOBTTOAVRREZPRHRNKBLMGMMDPJDQTJLEUWFHTICKJRPJKZIYZCXBQQOPXVIHBEOGBTMACPDAGFSMKGIKZAZRYOKTYIZPNHALEEZRMZGVNFQJLSUHCOQNJQARDXKSNFCCMALDQWXVJYYCNUSLVVUHPWJZEMLFFDWFJFTDQSPHEYVSNFKPVWYBICQELHZSXTKNQYDXHUOAUBRMWIG");

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
    msg.setTimeStamp(0.0550069602496);
    msg.setSource(24268U);
    msg.setSourceEntity(181U);
    msg.setDestination(50925U);
    msg.setDestinationEntity(132U);
    msg.type = 20U;
    msg.op = 1U;
    msg.request_id = 13139U;
    msg.plan_id.assign("ADSPGZSPTTTXAKPKNADQTXULSFXXFFHYKZQJGOWNXSJUIYXKQBNBVODWMFDLOUWWZZNUDKGDRGJERXHEFZACJIBFSIQWTWFQNS");
    msg.flags = 23480U;
    IMC::DissolvedOxygen tmp_msg_0;
    tmp_msg_0.value = 0.81236761025;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MTYWQLRZECMLYTTWCOGLDPGAJVTGSHPNKJSMBOCUCWPUQORIFIXJQZDKMSHKVYNOQCCRAXBDHYADXPCWZZVHJUKDHWRZYXNSUGVNAGSUBFWPEATKXVBIERAPUIJ");

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
    msg.setTimeStamp(0.906519236771);
    msg.setSource(64708U);
    msg.setSourceEntity(143U);
    msg.setDestination(14476U);
    msg.setDestinationEntity(183U);
    msg.state = 168U;
    msg.plan_id.assign("IOJUTZIFWQVGMVZPKQZLVEXQAEUAGUABLQCJVQIRVVYNIXFWJDMCBLNJTOOOHDMWEZNRKMZYKXNZIRYETYFSQVYQIXDXXGBFLESRESWNOHCCSWCRRSX");
    msg.plan_eta = -1307964124;
    msg.plan_progress = 0.396302135257;
    msg.man_id.assign("OIPMAQRSSJHPBNTFQIERIVTATSPTOUKVFCGHFZTRGCTAJHMCXYARTDIXZPIXHZWHYKDKWOBAEGLVLGCJMDZJUNNXDWTUXFNKSCUMBSGHBTAMBJDMLKZFIMIGBSLFUEKQHEBOZNFERWOEDMQHCMEZYNKHYDBYJNFAVULLXNZCOLKOFWQKWGRUAEJTXCZJWBLPQJLRXRVYWVMHQPDGLQVQUPSVYRPGIJ");
    msg.man_type = 50514U;
    msg.man_eta = 1850220171;
    msg.last_outcome = 16U;

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
    msg.setTimeStamp(0.602870006328);
    msg.setSource(44574U);
    msg.setSourceEntity(191U);
    msg.setDestination(26U);
    msg.setDestinationEntity(121U);
    msg.state = 35U;
    msg.plan_id.assign("DQQOQSWVHIWZEGCYABTAANSXBTNOSQXJOUWXGLEFRUCDRVSSZFSTXTDDIEHJMHEHWIHFQORKBOYCJMKPSQVCZJANZAUEPRPKDKCEFNYRKHLUTVC");
    msg.plan_eta = -859571010;
    msg.plan_progress = 0.356262127934;
    msg.man_id.assign("DAJCHZXWRJOREVAVERK");
    msg.man_type = 28332U;
    msg.man_eta = -261205468;
    msg.last_outcome = 118U;

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
    msg.setTimeStamp(0.917997392434);
    msg.setSource(16028U);
    msg.setSourceEntity(219U);
    msg.setDestination(20279U);
    msg.setDestinationEntity(88U);
    msg.state = 178U;
    msg.plan_id.assign("AOOLHGMCQFGTTYSWKJWUZVMWYKKDBRCHAJCCSERBCIQYYVOBQKEHIZUSIETXIGJWYQUKPGBVCMHTXTPTUUPXMSVXGGAYGDENVEVUDYUCDBWNTFPUOQLRNTZPKPFYZJNNZOCEOUPFJMLSLNTXLEIMWVZZMIFJGOWHEOQIKLIFAFFSKZOEFBRJXCBQIXHDEZASRVODATADXLM");
    msg.plan_eta = 735203160;
    msg.plan_progress = 0.397231715253;
    msg.man_id.assign("UPTKQDBUZOVXISGWUDOTJTGMAJSAFSWVKMJAVZUYUQQMPAPZPDGMSMHNISUHDZMB");
    msg.man_type = 47298U;
    msg.man_eta = -1395422115;
    msg.last_outcome = 96U;

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
    msg.setTimeStamp(0.420088528207);
    msg.setSource(14442U);
    msg.setSourceEntity(21U);
    msg.setDestination(31407U);
    msg.setDestinationEntity(90U);
    msg.name.assign("TZOVANSEIWHFQBTVUVIXJINUJEKZZYUMEGKYRZAVAJCOHKLIHQKFAPHGNAFBKYPXHTIGFCGJKXENECBHBKDTIBRQCUVZLQDQGNWTSJRLRRRFYRTJQXMXOMKHIAJRNWFPWVLFQRCNRUTESMTMAJJPXPSQLXBXLVSGEWLBSVEBDUEYLKUMIZUOBTYZUSZWILHFDCPMOHNAQNDZYPBFYXIDUFAHPWPSCOTYCDAYCLGZOXWDDV");
    msg.value.assign("ERQSHPHWQGCDEETELYJBQTMFVXBWYZVOOFAZZNALGAIFVKMDHECLJUCV");
    msg.type = 53U;
    msg.access = 120U;

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
    msg.setTimeStamp(0.23782388003);
    msg.setSource(19841U);
    msg.setSourceEntity(88U);
    msg.setDestination(15763U);
    msg.setDestinationEntity(21U);
    msg.name.assign("UIWLYKUADGOMNAKWJCYSJKDTFXLKEYCTJPIPDDVICWCJETTDOWNDAQZXVTBLGXIKCYLHZYRXMEHXGEQVHZVYIUOKBGMQMBGWZXJZFTNHRWLFZZBBHSPKPXJCUVFNUJUDSQGHVJGKQVIHGCUWQDBLQFKMXPFNSNYBCIVMEDMEEGETHVRUQXPTSXAASOSQAOGL");
    msg.value.assign("BBQIABWTHYLKBVHVUFHKWLYHQERZMNUMOEKXPBNZRLZTDOVGZRPVREVCXKPHQQ");
    msg.type = 7U;
    msg.access = 106U;

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
    msg.setTimeStamp(0.4719762627);
    msg.setSource(2394U);
    msg.setSourceEntity(125U);
    msg.setDestination(14028U);
    msg.setDestinationEntity(170U);
    msg.name.assign("ODHDAXTHRPGKVESPLPZKIMRKIBJCEPFALZYZDAOLZSMWFRRTYLKPBCXZFDXTCHKRBWLYRKJBQTNKPUOPARSWZRVLYFOYEAJUEEHOUVXYDTZQFHGGNHWEVJZUOQUUTWTLVFKPLMMFKRNJLAEJICMDTFICAYDIEXGQSRXCIMSGNIGVVOJQSLHXNYHVUIECNCD");
    msg.value.assign("YBFOETHELXVAJSIAHMTTLFLXPMGHJSXKBFUAFUKKXVTPWOMZBOXHYICYVFJTTGZDJNKEUFDUQMIPKSLXZWTWBSIYMWQEMQTQVGQMJDDKIPTUUDRVQBWGDLCDCAWPMBRCARFGBLSZALISQAGNBMVWCAAZSRREIHFEPLHEXYEUZIVDDFGQGRNZ");
    msg.type = 230U;
    msg.access = 88U;

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
    msg.setTimeStamp(0.968509509019);
    msg.setSource(14788U);
    msg.setSourceEntity(59U);
    msg.setDestination(12983U);
    msg.setDestinationEntity(5U);
    msg.cmd = 69U;
    msg.op = 249U;
    msg.plan_id.assign("HMRFKUYNXCOMFWUVVPYNXNRURILLSEVDNQDHWRNZZQAPZBVYBHKKFXWMPBLCZRRUTPCYMWQJWTFIBLTLSIIPCMMVURBSGHCNMFOGLWOMQVVWHDEXZSKDJRJPLKOATGVN");
    msg.params.assign("GZTXJVCJLWXSBXJAHYZTACSIRURGVPLBABIRNCYAYDTQHKPPFHPYWYTCXKLDBAQKNMJUOUNUNKIDLFSCGWIMUXEIWDLOSSYOFCTEUHBHIPSTHHMGQHXBQOCNBBTRLVNEPMFYZOZMQRJKYFRMMZESJFCVNQEFPVCXKCLFHNZNFVWQESJXOQMOMMTUFYWVPJGDIKSEWOLAAPERGPDKLXBZIGDRTKUUDQOZRVZWBZVGWQDIGRGYWAEAJNEVDSKOLX");

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
    msg.setTimeStamp(0.735097649698);
    msg.setSource(15171U);
    msg.setSourceEntity(111U);
    msg.setDestination(12686U);
    msg.setDestinationEntity(93U);
    msg.cmd = 68U;
    msg.op = 37U;
    msg.plan_id.assign("TVHFHTVRNGTXJCBGBVYBBUERCKQZYMWZHXOVSFWCOQZNCLZCQXZYDWNSWEHIDYJIQMDJRFQDRRYL");
    msg.params.assign("GDFNEFEGRUGGNKSHSOMCV");

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
    msg.setTimeStamp(0.115232535776);
    msg.setSource(64818U);
    msg.setSourceEntity(102U);
    msg.setDestination(22305U);
    msg.setDestinationEntity(42U);
    msg.cmd = 218U;
    msg.op = 59U;
    msg.plan_id.assign("PRMWRZLBSFQZAHKOJDPBJWPZKVYFCCDOWQVDBZTLKKEAPSDBXOZWCXEDMCFUDNNUMFKIDIRNREXKIVRTPGJIRSBSJQZGZCNFZJPIEUDXSNYUSCOVLMPIWUXLAYMQKQAMLJTNVXQYVTDNXEGSKURKQHBXSOYAGGLHHWYKUYOFZCLLOXTYOJZVSSLETWGNMUQMDXEIWBFQPHUEOHALGPHCJNGFVIGW");
    msg.params.assign("FUBCMIYFIWVAYAUXTSJWNJLZDLSZQODKTYYEFVERZOXDYJNXEQKTRGIHREUGQFPINJDSHONALBLIWATWESONFJHMKTMFGKVHNQJBLXRGLHKMGASMOCFDYPZPCWPDPMFTCDYCKLBCQSUANUSWGLMXJEOHTSNEKIYVRWNZPEMDXXVOWWGRVVCUKZHUU");

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
    msg.setTimeStamp(0.378292758209);
    msg.setSource(64350U);
    msg.setSourceEntity(160U);
    msg.setDestination(49008U);
    msg.setDestinationEntity(131U);
    msg.group_name.assign("NKSNKOVNSSKECXHJYHZIMYYMDWXYIEZCTFH");
    msg.op = 217U;
    msg.lat = 0.780895400087;
    msg.lon = 0.114860546919;
    msg.height = 0.746024806773;
    msg.x = 0.956997250843;
    msg.y = 0.317079925129;
    msg.z = 0.926502040584;
    msg.phi = 0.702678525479;
    msg.theta = 0.230413838993;
    msg.psi = 0.289241994296;
    msg.vx = 0.417496226747;
    msg.vy = 0.537477252889;
    msg.vz = 0.891226903392;
    msg.p = 0.421261400335;
    msg.q = 0.647096692349;
    msg.r = 0.767032568997;
    msg.svx = 0.0353072850917;
    msg.svy = 0.890438171533;
    msg.svz = 0.249117239971;

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
    msg.setTimeStamp(0.675311434769);
    msg.setSource(592U);
    msg.setSourceEntity(245U);
    msg.setDestination(22966U);
    msg.setDestinationEntity(109U);
    msg.group_name.assign("TGCWBXOECWIFZTYRUZHFSTLPXJXUXYYROLEUBRDSWWHEXNBHCJOBHSYKKOLVIOGKOAQSUASIVDABCLZLJTIVMKMXJLPMQZQFLUZVKEYNPQMDAUBAIHKWDGRQAUZMMFAHPDTFLFMGQCWPUFNXDZPAICQJHECFBNQCJFWNMWTEKXPRGTEEQRGOQJRIMRINORGUID");
    msg.op = 41U;
    msg.lat = 0.917723870354;
    msg.lon = 0.679516649274;
    msg.height = 0.404671165116;
    msg.x = 0.996925932202;
    msg.y = 0.205925410075;
    msg.z = 0.942576747815;
    msg.phi = 0.209876229657;
    msg.theta = 0.700890715071;
    msg.psi = 0.860321189106;
    msg.vx = 0.332634551101;
    msg.vy = 0.160358085336;
    msg.vz = 0.84293372116;
    msg.p = 0.400930522834;
    msg.q = 0.880565645586;
    msg.r = 0.336332812606;
    msg.svx = 0.438264442733;
    msg.svy = 0.255726951128;
    msg.svz = 0.118703921433;

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
    msg.setTimeStamp(0.165691091587);
    msg.setSource(11198U);
    msg.setSourceEntity(245U);
    msg.setDestination(53651U);
    msg.setDestinationEntity(210U);
    msg.group_name.assign("HUGZNUDURDJEJSPCWTAQZWBEOYCSPAICREBIXVXTTRTCURTSGXDMGHIMSAQTWOURNVLDUOEFXOMSVPEXSUFNYOKNQLKXNYSBYTOZVYFNAYYAPGWIHPEXMIYHZRUFBCZMKICFGODNLVBRJCWKDFMZDMFXPWXHDWAZBGSLZKJHZSALIWEHQKAGQPJLAEJWTKSYQNCRQBNVJKTCOHRBEKIL");
    msg.op = 221U;
    msg.lat = 0.601676189661;
    msg.lon = 0.334214411499;
    msg.height = 0.56893160354;
    msg.x = 0.126321054002;
    msg.y = 0.271045432024;
    msg.z = 0.166424322814;
    msg.phi = 0.43357520953;
    msg.theta = 0.801330617959;
    msg.psi = 0.824871208498;
    msg.vx = 0.806869856775;
    msg.vy = 0.286641244389;
    msg.vz = 0.419954964801;
    msg.p = 0.636563661081;
    msg.q = 0.505295073646;
    msg.r = 0.874344412006;
    msg.svx = 0.496094214843;
    msg.svy = 0.435724959754;
    msg.svz = 0.922216131811;

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
    msg.setTimeStamp(0.176012916368);
    msg.setSource(61598U);
    msg.setSourceEntity(241U);
    msg.setDestination(46252U);
    msg.setDestinationEntity(223U);
    msg.plan_id.assign("OCAYZJNOGRGRKXQQIQRWKFMILJZLQXMMUXLHXKERVSCOYCMLTQISAPUHQPFCDVGRBJNALESFDFYBAWZSKTHCVUIKCLZUVNPEWXTBQYYABRSRWYMNJLXVFHVUOTJPQDPWNYAOOEXMZWUPIVNGAEIEZGDPBNHNHERSTJUVBEUVDKWWMGACCSGFBJDZPCADGAPXOOKECHNLSSXYFTQMTZJRDVDZGKDMWYYHBOTRUOBJTNKFLGWTQFIXMJLUISH");
    msg.type = 15U;
    msg.properties = 143U;
    msg.durations.assign("BRQZEWSBFHTXYZAWCMNNTAAJHTIZFSWCCVGLOTIHLEBEELLCLRFTOOFYMRDUWCFXUDWVWVDIWOPMZISOS");
    msg.distances.assign("ETGKMYXVKGMUJYIYPRXFALOSDQBAMVSFZTFGBNHZBDRIQWLRXWOZUVATBRGGZEBIHXUDSQPUWCRALBTNNBDIOAPTBLJRJGQJTMJDFFPATUAKJQMI");
    msg.actions.assign("EIFWITGAWHQCMOLCFLZBPSSKPFQHEEMDCCEDOJXXCWXPSKNHVUNDXPPPQMDOSPXFLNVZXHUVJLEJGVPDAKKOXAQBWQWYAIHLEMUUOVHKHSYTRGNKQYKNGBSTWYBVXBGWCEFAZAA");
    msg.fuel.assign("DUFDYJPVHQJFBRRPIBWIGLXKNGDZUKAMXVTGESFTCNMBEFTOEZVYFFCD");

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
    msg.setTimeStamp(0.748879327095);
    msg.setSource(15206U);
    msg.setSourceEntity(221U);
    msg.setDestination(33834U);
    msg.setDestinationEntity(160U);
    msg.plan_id.assign("OLKZMQIPPINZOCBRNVXTZKALYBTT");
    msg.type = 181U;
    msg.properties = 68U;
    msg.durations.assign("BQJKKPPGKICIPQSOZZQDETVNYAMAMEHFYIFIWQASH");
    msg.distances.assign("RZLWWLKTDXKLJFCGKPVBPWJXKLJLKYWBDYNLPAMJOPDZHWXYAZBIQMTYBNSVQVQGBCCPTNRNYXDESTAESHAGDUPIQIEBRUFCERQEJFAGJSAPNFLRJXTOMIUUVGMDEQHROLZBSDOWVIUTXXSGAYOMWHIVZSWFDNDQRFCFXFOMPXEATIKRZEKTULNICRZSSQVJCOUGPERMYAYCUAMDHONQHOHTBTSHOGWYLKVWEBNMVUMBGCFC");
    msg.actions.assign("CIOYJNBXBYTVPHQJQVLVHHHWSWLETPTODWQRGOQVCPGHQIMRAYXENMURLNTGNUXDCJOAYZRFGXUSSBTDKNBIDUBKXPKPZDLFVHJIKSSWHLJYXPKCEMHJZKMFCBRQTEPRMQKZZECSBRAGLDKDIEULMOWURWZGWETVRSFIUGSCLFGDNDCUTOEWXPBWJQMFYAFYONJ");
    msg.fuel.assign("BRCKSDTPNFPHGUFZASQRYHNFYDJLGDLINJNHEBXBSOMSCWWBZDZBFMPEKJYZACLKTLWFXBSOZDMWKPQTIRDUIFAXTOMCQNRQJZJGHJLTYVURBXR");

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
    msg.setTimeStamp(0.212920334677);
    msg.setSource(14788U);
    msg.setSourceEntity(23U);
    msg.setDestination(2894U);
    msg.setDestinationEntity(37U);
    msg.plan_id.assign("FOITCQTQJCAKCPOMPAOWKIEHUNRUXBNYZUJPIGVQCGZXXXIBGHYDLNZMEYZTCFGPMHXRLVEUUWYNVNURUXNPPWGUJYKAXLIEBBOFSADHWXHQBCWHSWJGJKVSRNRSGMDQTGBWYVBKZBLDPSTJATAJWEVCTEBIEYQPYYVDMJHNFSZOZNLUZKDDTNRXDRLMITPMROGUVOSALRSAZHLERFTQ");
    msg.type = 249U;
    msg.properties = 151U;
    msg.durations.assign("NMRVDDUNWLOESOFOXOZBSQRPWZETUVDTCNIPHRRJCLLNXPRYGWVFVUMJQCKEOSUELZXBFSZNWYPYQUMLBENFVPJGLXMEIGMTVDESJNVGKCEAKZOBUBITBKHIUAABLFYZXKFGGAIBBQEVMYXIKIXYZHKDCLHAUVOFPQSMUASOWLIPFHDQDFCLWQQSRKZXVJTJDBGIHFOGIZZWKGATT");
    msg.distances.assign("DBPFTOOMQLGNSBBWLJMFREYLUPSMGBTLBCTXURKGIHORQUKLAVEDYXAGZGFJLFDEANITCKZKGQRPAPJCEREVWCCIHKWUGXZYNSHHCUJLWAAIPXYBODWCNHUVQTDGCXZXRHDRAYTYOQUPYUVZZQXNVEDGBMXBISFIIZNQWEOVXROSKGWMMTYLYYWSXVJTFWNPDJRKQKUKPELAEIBZOABNQZ");
    msg.actions.assign("HGXSCPWJYCADRNEJLMELEBGATWFKTBFYJERIUCZMNLTPZSSDLQJPQDOQQAGRKAHXVOHG");
    msg.fuel.assign("BLXUHEAQZTAMCLSTSCTDKNXSCAYUXKVHXJEUNJGDYRLKYLFFVOPNPOOWMISTZRCWXTJAQSQAIABBRVPOMWLWPDQPTZUCWRNDLGJHEFWWRFQNRAUCDXJFEBYYIYROHWUIZVFEKNAPGJRZLSHIPKTNMOIOHLHKDQQQDMENYMZEZUWJFXIKTBCBPGDFSOSICZOYLGJJGZHQVJWMDCPAGFOQVHNGMK");

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
    msg.setTimeStamp(0.462082316184);
    msg.setSource(50058U);
    msg.setSourceEntity(44U);
    msg.setDestination(29824U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.0295176777245;
    msg.lon = 0.792968924606;
    msg.depth = 0.719726148796;
    msg.roll = 0.868753520598;
    msg.pitch = 0.140982228728;
    msg.yaw = 0.181187487112;
    msg.rcp_time = 0.396608642461;
    msg.sid.assign("QPQZFIPJXZRUTIBPQGLOYZQWEOUHIHUBXSMJJNLLAGNRZUTXKDTV");
    msg.s_type = 254U;

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
    msg.setTimeStamp(0.535297263846);
    msg.setSource(21184U);
    msg.setSourceEntity(187U);
    msg.setDestination(45332U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.290358456597;
    msg.lon = 0.862484637311;
    msg.depth = 0.850503740806;
    msg.roll = 0.654018109999;
    msg.pitch = 0.303795785329;
    msg.yaw = 0.661947594176;
    msg.rcp_time = 0.255431029788;
    msg.sid.assign("WWEZOPWXUIAVKJROFXWZLNLGJMHSBRAGZCHCIQJ");
    msg.s_type = 70U;

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
    msg.setTimeStamp(0.711599232024);
    msg.setSource(488U);
    msg.setSourceEntity(197U);
    msg.setDestination(64161U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.644827865148;
    msg.lon = 0.897723104032;
    msg.depth = 0.335356869142;
    msg.roll = 0.70137432738;
    msg.pitch = 0.698414959211;
    msg.yaw = 0.286095546024;
    msg.rcp_time = 0.468620795235;
    msg.sid.assign("LIAQZDFBMTBD");
    msg.s_type = 103U;

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
    msg.setTimeStamp(0.742554063637);
    msg.setSource(22277U);
    msg.setSourceEntity(246U);
    msg.setDestination(64498U);
    msg.setDestinationEntity(246U);
    msg.id.assign("HEQLALUHLGRGSJINLVVQHEZJTUYSAMCYRQEWXIOMJOMRESTAHDAFGCYPZGFYNYZLWUUWETKBKVLZHPNSQQOZJSPRPMTSCNVFUVYTEKRKYBWOHFMKIQKQFOOTNQJDITPBDSDPODPYBTWVDEKWPWVHCJEUBMBZFHKXDGECIXPIJGJRAFNOUNBIRSPCRIAAVCJAMXRXIDDZUWOZXGCESWZMLCBNLQFLTWUXHYKOVMXX");
    msg.sensor_class.assign("EUJROTAARLXZBPELEUCZLPWKNVIHPBSAHOPDVJGXEQZGVUYW");
    msg.lat = 0.535406689593;
    msg.lon = 0.215978320064;
    msg.alt = 0.974558116596;
    msg.heading = 0.191546774504;
    msg.data.assign("XGPJLZYDWUWRYLIIXDBVSAPIYDOQELQZMQHEYFXNWLOORRPZTCLSPPCDVWJCAZOEDZBKVIGNIORVJMTPSGYRYCNFNARF");

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
    msg.setTimeStamp(0.827128365357);
    msg.setSource(64796U);
    msg.setSourceEntity(80U);
    msg.setDestination(40937U);
    msg.setDestinationEntity(3U);
    msg.id.assign("FKAPQTSBHIUDVELHZYJJSWMRVGVOYIVKYTMX");
    msg.sensor_class.assign("AHWIHIMPLGDOXCBVKMTRUWOKFWJVSTIRYNGMHGBSUNIZYKNHDSSYDTFNHNMZZZKDXCGBQIQBLPJYJNTDLFBOVGSHXHNAOJEXJQXHCZAWSKMWIAJWNOALQXLFSDHMBNESQENURTQVSJZFCUVGBLTRGURWTDFPYZRQSQLYAIVCAPUV");
    msg.lat = 0.430464313518;
    msg.lon = 0.253550473521;
    msg.alt = 0.472031303145;
    msg.heading = 0.589870881834;
    msg.data.assign("LKMAUWMAEHZODVQLIKXZXWYGEYILREJAQHXZEQJBSQEDGPEFIUZXUOBKGTLDLZYIVJFXPHCVXTQCRBEYFCWADLMKTHNPBWAGTIBOJYNZAPWRSXFFVRKQYRPJBWWGECQJTVUOXKFBLKHLBMZIGUNLHIYHPG");

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
    msg.setTimeStamp(0.804269719624);
    msg.setSource(63175U);
    msg.setSourceEntity(33U);
    msg.setDestination(27500U);
    msg.setDestinationEntity(26U);
    msg.id.assign("LPMBWMNZMHBGXGBYXYGCNLMFTEMFZTNHQAVWZNPHBXIJRDJDCNKSDSVDRLQHQRQHSPXRU");
    msg.sensor_class.assign("XNQWTXZRNHIHNPEGYGJULHVQEZCCPHLDHUOBBOWJIOHBBQGUKAWJKSWSJAYLJYOIRSGMTAMIOPFASADVEOOVDWJIZAFQPNEUSEANDGKBFXTQHBYWIWPBFZLPVZ");
    msg.lat = 0.434054813311;
    msg.lon = 0.303471833986;
    msg.alt = 0.526643241913;
    msg.heading = 0.929286067384;
    msg.data.assign("WQHMXHSPUSLDOWOMKLJWWXY");

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
    msg.setTimeStamp(0.37659250641);
    msg.setSource(61983U);
    msg.setSourceEntity(5U);
    msg.setDestination(27817U);
    msg.setDestinationEntity(136U);
    msg.id.assign("BUDQRHTAHZNRZYHYAAHLLFKXPGVAGISXOCWWPFJXGOBUWTEQYLYDUIDBMJUMRLOBKPOQDT");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("RMHVVOCZRMYYIVXIWZEPLTVXBXBZTEZWJQKHIMYEAQULGICEOYVNFDIWLJSYPJHATNJKJLKYNXAAMMWPXJFFTCLCNOZXRTDHQWJNBROQQBWNNMNDTARLBXBHHEUIGLSP");
    tmp_msg_0.feature_type = 182U;
    tmp_msg_0.rgb_red = 99U;
    tmp_msg_0.rgb_green = 202U;
    tmp_msg_0.rgb_blue = 107U;
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
    msg.setTimeStamp(0.675756567791);
    msg.setSource(57177U);
    msg.setSourceEntity(41U);
    msg.setDestination(13382U);
    msg.setDestinationEntity(240U);
    msg.id.assign("GPXMNJWODAWDSTMFGYPLJHOQLFBHREUXITJNRSCQ");

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
    msg.setTimeStamp(0.152149343083);
    msg.setSource(3337U);
    msg.setSourceEntity(5U);
    msg.setDestination(10579U);
    msg.setDestinationEntity(241U);
    msg.id.assign("FXEMNKDIWDBQMZGCLJIRUIFONRPFCOHCGSCOTGOGAKSLYXRLVYQUTCZBYXMPBFZWQQXSAIFBAMFHCVLYNZYVQUQYDDRPDMMKEZJUXZPJTPJWEUTECVHWTFCWKRXXSR");

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
    msg.setTimeStamp(0.556423920265);
    msg.setSource(25934U);
    msg.setSourceEntity(252U);
    msg.setDestination(36605U);
    msg.setDestinationEntity(101U);
    msg.id.assign("NWKPFDXKUBXSXZEQBKFUTTTYGXSPAIDFLTTFMWAGDOIGOAQQOQIQEBMVUQSSPINABHZRWCCVASBCYDHNHIYRWLHNIWDNWCOTZNHPMWUSVGLWMANLFEQHCQOFTGOYUZYGZEJMGAUFPZVAZFUGLXNLJKXBCHNIXOXWCCMZYUUJGPLNMBYFEERVVMKPJFRVIEDKUEHKBLRXDVJAVWLJPDYBRRHSTYGPAKJPOOSQJSIMMJBKTEJZCKOCHVRYSIXZET");
    msg.feature_type = 44U;
    msg.rgb_red = 232U;
    msg.rgb_green = 23U;
    msg.rgb_blue = 198U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.274352418127;
    tmp_msg_0.lon = 0.79079594491;
    tmp_msg_0.alt = 0.902268447064;
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
    msg.setTimeStamp(0.59136392172);
    msg.setSource(11609U);
    msg.setSourceEntity(64U);
    msg.setDestination(5858U);
    msg.setDestinationEntity(30U);
    msg.id.assign("JHHPAKHNSM");
    msg.feature_type = 83U;
    msg.rgb_red = 29U;
    msg.rgb_green = 52U;
    msg.rgb_blue = 14U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.23224854389;
    tmp_msg_0.lon = 0.563776854222;
    tmp_msg_0.alt = 0.0247643507281;
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
    msg.setTimeStamp(0.929200143614);
    msg.setSource(7832U);
    msg.setSourceEntity(105U);
    msg.setDestination(54440U);
    msg.setDestinationEntity(108U);
    msg.id.assign("VJZLTDERPWOADXARRKOSDNTNCRPOQLAYXAJTTMMXLFVOWBIQTGDICGFKKZEZNONZLKNPXQRXGXYAROSMGHAPYFTBCQGWFTKTR");
    msg.feature_type = 162U;
    msg.rgb_red = 185U;
    msg.rgb_green = 205U;
    msg.rgb_blue = 80U;

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
    msg.setTimeStamp(0.195469176841);
    msg.setSource(26180U);
    msg.setSourceEntity(35U);
    msg.setDestination(54127U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.724138410941;
    msg.lon = 0.333958928545;
    msg.alt = 0.81450599952;

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
    msg.setTimeStamp(0.982877343556);
    msg.setSource(33986U);
    msg.setSourceEntity(47U);
    msg.setDestination(46933U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.69052496299;
    msg.lon = 0.209376253212;
    msg.alt = 0.814684679561;

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
    msg.setTimeStamp(0.0583544126926);
    msg.setSource(44211U);
    msg.setSourceEntity(209U);
    msg.setDestination(17820U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.883167174141;
    msg.lon = 0.28156031689;
    msg.alt = 0.94567507204;

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
    msg.setTimeStamp(0.190912757322);
    msg.setSource(13548U);
    msg.setSourceEntity(104U);
    msg.setDestination(2145U);
    msg.setDestinationEntity(8U);
    msg.type = 0U;
    msg.id.assign("VMEZIAXADWMFUUILBQKXSGJQDNOCDYYZWUTWBKROYLHKLTAUSKQFPGTLNOOJSVKSMSQCYZSBZCGPVHHOWANJGTQTREFEXPKTVZXKEFDJCWJWUGPFVFSGBSBDVTIMLZRHZUWJSXVQONITHMPGFOKJROHIGZDZEOYIBCDANAUKBYXNMYEGLLRXJPXZALMHJUXQAAXVEPDVFITBY");
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 57U;
    tmp_msg_0.goal_id.assign("GWWJOJJCPHFDWIXMJPAMAUSDRKZYZWAGICJKGUCOIQCNZOLORQTYPEHIKYNHVUBFUPGQXALMEMWRFVSQC");
    tmp_msg_0.goal_xml.assign("WOYFPWTXOKQFZZNXMDAOCYHBAFHUZIQGQEWHYXCXPRQSHYOPZTGKUVSIPXLUFKOGVMZYVDDAEYDFBQVPIXQVRDAZLFEDNLLKJBMSIMGETXLBQVCEZUBRXSPJIYPFHMBRWCBTKSARTNNRJUMXVHLRYIWNJXTUGRRDTUKHSFJLWPYOWEKBZRLCAILHMHQGTGQCZDMCPKWESMJAAGSUCFBJNNQKECJCJILAWNBDTIUYOEUJOOSGTKPWGNS");
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
    msg.setTimeStamp(0.9249847736);
    msg.setSource(31374U);
    msg.setSourceEntity(249U);
    msg.setDestination(64620U);
    msg.setDestinationEntity(92U);
    msg.type = 8U;
    msg.id.assign("RVVCLEXTMYUGDCWAXMLPWQGWEFBLKMTZIDVHBKSHJROMUXTNDIWWAHAASRCIWEFGFUPKVTCEMGDTJTDRZKCNCKUIARCLHBFLAOHRZZMYLMMSQBNSXXWIYOHSGNNTFLSFIRKFULZDMCIQBEJPYXLUGZQDVDQJZJTSSSJIQJAOKVZKPEECGWADKPPXOEPRTQUCKIOHGB");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 14282U;
    tmp_msg_0.lat = 0.570372796644;
    tmp_msg_0.lon = 0.486674386816;
    tmp_msg_0.z = 0.487582123122;
    tmp_msg_0.z_units = 157U;
    tmp_msg_0.speed = 0.256347315641;
    tmp_msg_0.speed_units = 162U;
    tmp_msg_0.duration = 14333U;
    tmp_msg_0.radius = 0.465782860664;
    tmp_msg_0.flags = 162U;
    tmp_msg_0.custom.assign("XWMNXRQCEYRCRTJOSSLEFNEIJUFTHBXGFDGKSDXSUMIMKBJYIPIUVYWJFFUYCMVBUOVSCYTMQSRTLX");
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
    msg.setTimeStamp(0.289377837958);
    msg.setSource(40683U);
    msg.setSourceEntity(132U);
    msg.setDestination(55944U);
    msg.setDestinationEntity(204U);
    msg.type = 124U;
    msg.id.assign("CEXQYUBWYSZICDZSXPTLOECVMJYSPFEYNJW");
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("EDXMMJHCVEZLYRWSGQJNXCGVHZPISBNGVAPLVTFODMYAKHJZRWHXOKMPUCXAW");
    tmp_msg_0.type = 97U;
    tmp_msg_0.properties = 101U;
    tmp_msg_0.durations.assign("BPZLHSVJVROOXGUBEFMXLPQEITRCSDETGKRWEBQVPWOEBUNCIFBUUNMLGOVISZMVINUXWPOWMRWIZDVKRCZMLWYAUKYTSFGIEYRLXGVGFOOWJHXBWYEQCZVEXQGRLVNVCQGXAIUNULDHUZKZN");
    tmp_msg_0.distances.assign("AVGMLXYJPSDYALIVUHYHEUOFCQEGOQXFALANNYCUURJQXEUVMPIZCCPLKCVWWXHJPPQSKXBYOBHKQYJWZTQLE");
    tmp_msg_0.actions.assign("YZHIVIBPNOXSCPABBQZLASGKFSJ");
    tmp_msg_0.fuel.assign("HQQLTVMODAOBYHVVBIQEUZBDIWCJGNDLBTTKZMNHKYCNKDVFYJRCIIGLHSLSUUFGPUVQEFWRAWNRMPYFZEGWGQAXKTHASMTRQCGORBPASXPGZUOJTDLIZYAEJIKKPKATRHMKLXWWPODVMZQNJHXODPYRVWQBPZCLAFSSJYRMIGOREAWESDVCCBNZTLPSYUDCTSXOFEVMVEYNKUWETFEFXDIULZHGOMCMSXICBUGBQROXQUJWZXPYLFA");
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
    msg.setTimeStamp(0.47109705088);
    msg.setSource(65384U);
    msg.setSourceEntity(231U);
    msg.setDestination(23759U);
    msg.setDestinationEntity(248U);
    msg.localname.assign("LDDYSQHVCIBWSVKEAOEFPKXRFVXMFPBABCHSFVLOPYOWZDBLXSVRZDZIGGIVNPXFMQGGUMRFAJOMIQGL");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("BJSRTPIJVHUNHVLBSGSZATEJBUUWEYKXZBPYRXYVLNRTVQCBHADQKFPMKOWEYLUYTEFNTQHMZOAOXHOIIAAEFFRWPYNPVXOGDPGZUQFBHFMCVZGGILNNQXOZKYSXVNDLQJTGLGDDBEZKURRMWOSCPQIHPKHBUANLWTFODWFYJZXJIYRRNBJLMDWOJCCBLKEUCXAFNJVAZFEWRCATLXSGHMQMKOUDSIDVTMIWPY");
    tmp_msg_0.sys_type = 110U;
    tmp_msg_0.owner = 5534U;
    tmp_msg_0.lat = 0.852473043952;
    tmp_msg_0.lon = 0.568214006371;
    tmp_msg_0.height = 0.789292004183;
    tmp_msg_0.services.assign("KVOAXYYRYKJMNNWCGSKGWUTITECBCWNEFNEHHRGZIAKFYJCZBCZFLYDATETDITRQKKVGLAOISUFGFPUWPDOMBGFRRWQFLCQLDLUPTZJISLLQFZSNELZPNKXOJTOVARBMIHMMQPCXBTNDPTORMVHGDJJMWXVILDVLWBCGGUBMYQSNTXYSVMEZICY");
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
    msg.setTimeStamp(0.53039506144);
    msg.setSource(21951U);
    msg.setSourceEntity(28U);
    msg.setDestination(29403U);
    msg.setDestinationEntity(168U);
    msg.localname.assign("QBWQURGEZEFSFP");

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
    msg.setTimeStamp(0.424314786049);
    msg.setSource(33652U);
    msg.setSourceEntity(249U);
    msg.setDestination(26686U);
    msg.setDestinationEntity(109U);
    msg.localname.assign("WPZJJTYHFXSHSZEVQCQOOZZBHWYLTLXERZJGAMLAXMOSAWBGKVHSYZBKJCJTYHEGQYVNLKYFSXVBBRYNGLUGAROIPRRPWLISTOXWIVVAFNPGNXLAFRPBYYECYMGDPDTRFNFCNENSIDHEHRUJZCKEUSZBBGEZVXMRPAJIDLKQBDWAUTVWBIODNCQFUMDPSLTWPQIVSW");

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
    msg.setTimeStamp(0.906619107279);
    msg.setSource(26643U);
    msg.setSourceEntity(79U);
    msg.setDestination(22675U);
    msg.setDestinationEntity(174U);
    msg.timeline.assign("AOVAENZUMQONTFEJYGHJXEFWFKZCLHQCANNGALSQYKYQXVDLOXAIUENXMQVIKYTBTHTVWODKSMUXUCHRUJVMKSWFRNFTBFPBSZGTSWEPIJDGSMBBOIRWCPGLIFLDSABSYEQPHIEHCQGRDQPZBZUFWRUMVRGZPNCRBZHOZYQPVMRZLKKGTPOLYBDIXHAZXIDCFJTKXWWKXVCDMDJFLJ");
    msg.predicate.assign("WWKOLRUBLLFXOGCNWJWQTRSUYDJRPEEEKFKWLEODITZTPCJTBMZHRVAYMUYVKQNZSQRIUFPQGGYFWNBXANMVNORSHYOIDWHXLGHOGNHAMRUXJEYXGHBJSFLQGQELCUOFQAPBPHCNCIIPSVYMJVBAAFWCFKRCM");
    msg.attributes.assign("ASUBTWEJXAU");

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
    msg.setTimeStamp(0.998101109181);
    msg.setSource(38430U);
    msg.setSourceEntity(117U);
    msg.setDestination(5515U);
    msg.setDestinationEntity(250U);
    msg.timeline.assign("IYSPMSGNAWQPSNNCYOVWHFXOZUCQJTHEYTEAROCSIBDPRXAYZUMRXBQKQKVNHLZUBCSQMPGRRDXGELULXJWEXCLNYEMAFHSSCDFMFFADRLODOJQVNXAYVAWZLTIUQXBGQHJZLYFRBUDMZTHSAPJXEOBKKKYUVTDWDFTWGOQELJLKNFSHMVBEVITYS");
    msg.predicate.assign("DLZRSDYPADEGRCCDXSGOPXQ");
    msg.attributes.assign("YVYVYBKNNJEBXFFWSWURQFCDMAXCIIYDZLPOWWHLNNAEWNFAMKTJQXJRZTFBAYBGECGOHIATFUIZUWHICXCWNMJRIVOHSZCGKAGJIEALOVYTWQZZHDYPPEQNROMVPNQWGIDZDZCBFAFXJLLRHKDSTSBDEMOPXAXMPRQVQPLFPLPV");

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
    msg.setTimeStamp(0.408076618541);
    msg.setSource(40673U);
    msg.setSourceEntity(144U);
    msg.setDestination(22796U);
    msg.setDestinationEntity(146U);
    msg.timeline.assign("IHHFAEOGVBCPZVREASHGXUOEKUJLIRMXMPJDDFNLTQXLXXTJXSEKENLFDT");
    msg.predicate.assign("WDXASAADZMRKVOREVRYEQNGJKVKITMVPVXEAUJR");
    msg.attributes.assign("ISNUUSIIWQKQARMIGUKBYOYTXAURQCIKLKACFDDRDWVPLWVGTXZFZQHWQSZMDDXICFCOAPEOWCQYWVVZOVYPQIVPDFTEZBYXFIERFFBOESMMIDTPWFQKXKBUPALNGUKEJNKSVRCVZQGDGCNNPYUYOJDEMJT");

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
    msg.setTimeStamp(0.558566696956);
    msg.setSource(5982U);
    msg.setSourceEntity(195U);
    msg.setDestination(21099U);
    msg.setDestinationEntity(36U);
    msg.command = 87U;
    msg.goal_id.assign("BBXYAPQLGRWVBRSRSZPCDRDODHFOLBVVKZHVYEGTQQYQSYJRZTBTFZLVMSPXTNDBMPGEUNXJCUKHQSIBZCWGKZAOPFORUW");
    msg.goal_xml.assign("WDTSYAEEJGNGKPOQQPODQYFUTXIOSMUAKIZZHPPUVUVDNQLDYFMGOZGBUMXSPRQZDCWKYVXDCJKTYNWLRXLGLWVTGLNFGNIBXTBXCHIQKHBBAAFNASSMVTJOCWELQDRQZYNEETLHHPAUVPCHPOVBTNRTWSORHKEHHYJMWWMNXKPE");

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
    msg.setTimeStamp(0.637737981286);
    msg.setSource(80U);
    msg.setSourceEntity(59U);
    msg.setDestination(28126U);
    msg.setDestinationEntity(58U);
    msg.command = 10U;
    msg.goal_id.assign("GLNXSOUROKOWQMHXIMEGASPXSOEWZXDPQGCCFYGCBSEAMOBHDCJKAIUIBIQMFYVLTYPCJEXDZKRTPRNHHWFJPZKJOPLMUWFZZJHWE");
    msg.goal_xml.assign("HGBLAHKOXFWWJURPGALYBJOOQCNNNPPWKXEOVJTEYRUDIQXHLQMAIZXFVZKRGESZMMBUVEDTAYBDXVPJZSFMKEWPXAFNFXSKYLPFGQGZBMCLBFTKQOVSCGTPWGJVEANQYZUORDRDHJUMAQZNNVDLZODBVWOBPBLKTYJUQG");

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
    msg.setTimeStamp(0.267744710623);
    msg.setSource(24776U);
    msg.setSourceEntity(44U);
    msg.setDestination(39141U);
    msg.setDestinationEntity(234U);
    msg.command = 160U;
    msg.goal_id.assign("YCKAEVCADUCFVGNIZZHUWMAHJLAPXYJIAHRAUEFDLGZBQFEFBUTSJHISZNCNBOMMOKDLGXBKZMOMMKZTOHRPTEAVQNQWJRVVNLQYSSUWXKWNXUHYUJAXEWNGLTWJPYXJDIGVVBSDXJOZLADPSAHRFQCMFGQORFIPPPEDHGCFRHGEJILIYCBOTBNTQCJPEKVSOKKOTGMTMIWLNYZQTCRQXKQVBFDZERWLSWD");
    msg.goal_xml.assign("HSNQVRYKCCRJGGZSNSSFALQAMMTDOKWIIEAKDDPHBKNRMBTDVTJZLOCYGZWVUWHTFJJBKPAVQNAUTXJXQFUGJLRW");

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
    msg.setTimeStamp(0.421001300853);
    msg.setSource(30438U);
    msg.setSourceEntity(125U);
    msg.setDestination(8039U);
    msg.setDestinationEntity(72U);
    msg.op = 239U;
    msg.goal_id.assign("ZRQETLOSBJFNXRJRSUZCWJWMRBENSWXFWRTFFJVHOZOGIQVBPWXJFEEZXUPRUMADOHTOYDHSIYQWEH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HKAGFQASBJGLYLCOATALOKTVCXPBQXINJZSROWVSNJHM");
    tmp_msg_0.predicate.assign("XWJPUNTQQCFBIIVWTVHTQAFKAQFIWTXJCSKHKKVXFKBUMIAMECMGZHYMDGHIOSLOERUYUXRGGKLJSCGLQGSNAMRZZHMTSWQIZLTPOOCELVNEDQMDNWAYJLLPNQPSZCLFGHSPCFXRBSOQCALRD");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PFJBEZUQRNZBTDIHDAALRANFSVLPCKRBMKJLXYJHHDQTEZZNXMXAUGUCSWWWAHUXAWOXESKXSMJKMYYOVNPBCLHFOYULGUFWIHQQFEYVVJLOHJLLJZKGVCRCVQSSPSXYBNMQQGCOEPZZGWPXSTONBTCDIGWFUITDHDLIFTDCZMNKENU");
    tmp_tmp_msg_0_0.attr_type = 146U;
    tmp_tmp_msg_0_0.min.assign("SPPLFWXNRWLODOZECMITHUERBFIXKMLQD");
    tmp_tmp_msg_0_0.max.assign("LRGQKINNEFLQDDMJYVFJTJWDPUQRHELEYUHMVSGNIDPIOTOTDJTRXMXLATGXNCOPUBJSXWXYBXXHIGHLJUTZCKPCSTROBXAZQPOHXJBBPYOWAKO");
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
    msg.setTimeStamp(0.636090547105);
    msg.setSource(7886U);
    msg.setSourceEntity(141U);
    msg.setDestination(40490U);
    msg.setDestinationEntity(205U);
    msg.op = 33U;
    msg.goal_id.assign("GRMVYTSDBNZJEKPCTKFJKBUWRDEUTQNTVPZZINZSGDDJTYZOCPVSULHCLVSEQSEZLALHIMDWOQABPPNPEQRZCIRKXLWQBCSVDITA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TSTGLKWPUIPYBUCFFKVE");
    tmp_msg_0.predicate.assign("XMRRUITGTVHRLMZ");
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
    msg.setTimeStamp(0.787756246615);
    msg.setSource(4822U);
    msg.setSourceEntity(17U);
    msg.setDestination(5544U);
    msg.setDestinationEntity(7U);
    msg.op = 22U;
    msg.goal_id.assign("QNKQPLLKJYXUXATEZAVGYWVWWOWXHZAYKXTQIHGRFRLMVCYUEGSRTSYTBGZHMQOCFFWVXCNPNDJZNGZDYCROXPOBJCVVVLCLXERBSNWHNCIOTTUJUEHXFAQWCSIHLQFFJJESWBDFPUNQASSFRJNMZEMVPCAIBMMPYMDKQKSBDOMORULHAVDBDGPXQEGYCPMJKBAIILYZZBKHNFOIKOTPDLEHWRAGRDMQISGZLUKRVAIIOUU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BSKNBYHVVGHYEDREYURVEIIRQWNMTPHAGFSVARKCEWJOSJYIXOFKHBDAHAMKLKTNTZWHZXQBGBUUYQPPMDDVQHTJMMGRGLWOYFSZTVJBLASPVAPIKEQEIIOYWDCTMLNMYXGIUQASNSBKDOCSZGCKQEWTDBPZMBUUCFCKEFOSAXFWNFZLTMIQTJVLZRHYOCDCFLPDJUAXELGQXPGVJIUVPAZJSUWYXMJNCQHONIJWNRRZEPLLBDXRK");
    tmp_msg_0.predicate.assign("LOAONBCRHWOPFWVJGRNIMNOCOJGXTBUYTRGEVYFOVYLYZEKHMDEMBEOPGQMKKDLWITSAYTCNLTHQXPBUHRSDZNCFSYTVRJYHZCFJEDNGIXUXSZUBQMLSFUWPVEGSICXAHBKXIQDOYLICUPKXGRSNKIPRPEZGWVTBHLKIVKWYDAICCRWZCFBKVHDVHSQMQWWJKTQGMURJLMEPFAJBSADFLUAXFQTZVOJHWQMNZZUAFPXBANTDJGJIMRAQEY");
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
    msg.setTimeStamp(0.993613208711);
    msg.setSource(62055U);
    msg.setSourceEntity(221U);
    msg.setDestination(24007U);
    msg.setDestinationEntity(193U);
    msg.name.assign("HKTERUWDGUBVMACBJZPWACYRDKEEKDCNFNXHGUZXBYHXQYSNSMMTWOULGDBIDCRWFMTGMSDBVSPIQLIQBABGRJXXXGOIKEXMRHAKHJEHYFZKJZYTMTPFWDNDXLASELCQYPIEQMUPGONLWIUVRIYCOSNJEUJALULZFWTVQJKWQGJPZIHVSCNXZBSPYBOPAAIGQCOHFONZVQVYKNUMSDVQADGUI");
    msg.attr_type = 179U;
    msg.min.assign("QHLVPLAYTHACXPCDHPUOLKNCGJXFQDUYYJIGEQJKZWWJUWQTFASDPSIRUNQDCNRSOXIFWJOMQTPEAAWNJGLTTXGJIPXFGSNCFYMDVCMFNWMYWEMYASTAADUEWZUHKLBVFSBOKCBKEKCKXSHWVTZOJVXWBZXOHZFUQMIXQRQJKVZVIRBTDBEYBOYSRIGGNONKKDLBU");
    msg.max.assign("RQNORWRKSWAXMGFMAHFOJTXGAXIBKOQSHRTSHZEUDVUQNILZQZSVOM");

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
    msg.setTimeStamp(0.243600118286);
    msg.setSource(18674U);
    msg.setSourceEntity(195U);
    msg.setDestination(41583U);
    msg.setDestinationEntity(78U);
    msg.name.assign("OEBQEPMIOQCHJWIGGVKXGJWHDINWPGLDLLXVJMFQZLBWPHEASXOFCJETDCKRPZXRGGUBTHZMJLIQQFNPHCHCVDYIEFUBIMZCHKRXCTLW");
    msg.attr_type = 252U;
    msg.min.assign("JCYPJCQTXVLPZPCOGKYMYRIHTQYEWBNOBQQDPTCSNFJOXMWUISHVTEXYZQIRNNWPADCSTSQGKVUBWZSDIFPTIBCSDVKEFUTQRYGSSQNNTNFYWIJADOAKMRPZIGXWFITLKAAYXRVNQHEZRV");
    msg.max.assign("VDXQLGZPYIQEXHCEXATNCNKUFDVXRWJGYYROUUXAWISQVVLJYPTMYOAWPVEHPUDRBMFNKMEUIKKUGIOFFLLWPGN");

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
    msg.setTimeStamp(0.854937894003);
    msg.setSource(29506U);
    msg.setSourceEntity(102U);
    msg.setDestination(17312U);
    msg.setDestinationEntity(218U);
    msg.name.assign("ZMPZVHFIMFNLNHDOVVSHRBGQJKBKTLTHKLPHRNSXGCVCEMKEOPGDQKZOBWVZIHWMSC");
    msg.attr_type = 74U;
    msg.min.assign("KBRSHSILVXOGMJOVCOPZWDEYKLSCFTYGUETJUORHZQJGBZMPWNMINVAWOEFDWVVMTGPJZDUTDAIKMNFLTUSURYTBKDRNPPEEBLKDIPUTKYVFKGUSZROBZFLYQCIFZQXAAUTXHJMPOBCHKWQBBCTQMCXJALZJPFHFEGGYIQHVTWQYWLNJGABIPMVLQBFNSCNDWRRQLIXAUM");
    msg.max.assign("RBHYQVQHOEPPBPAIGXLVCSIARWCTKTEKVKNTXFMSYFFNHKKSGUPBCPFR");

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
    msg.setTimeStamp(0.152513402703);
    msg.setSource(58720U);
    msg.setSourceEntity(137U);
    msg.setDestination(46392U);
    msg.setDestinationEntity(216U);
    msg.timeline.assign("WKNIBHUGSRYMQCREJMFNUFYAWYKTQMAQXACCBHICEJAZNVZYACHURDBYMJSVXXYLLWEQUYBVDJPUVFIFZKQIDFOYJUHVGESGISIZXVVEBWUPMJROVDHRGEKIJOQNGPYXZFGGPFLUIRXKKCMAKPILYKVLLGMBSDTZNSWWQCGDRXNBEANCTXWSPCMPNACVTHTRPFLDZWLOODHXEFTLGKBHTZNZRBMSXOMOWFKIEPOLQQSTJBJNWJHUAODA");
    msg.predicate.assign("RUAISWHQGDSURPFLQXJZEFKJYVJCYYVLFWQYPMANCZKDLDLBUIURIHZEYCYODLODUWISCSNNRWBEVHCOYEVFQPZNM");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ERQOKFKSGCAZQRUHEFXAWKJJWIGSEFRYJQZBWIAKZADXTUHLWGPRFMJHPNQVGYQWXDILPWHRGQXXIYHPIJCMQHBAVADZUUJBBJRUKDPYKBOB");
    tmp_msg_0.attr_type = 141U;
    tmp_msg_0.min.assign("WICTKCIXRDVKXRTIKSWYVUOFXKFZRKNIANDJEBZDCINSHKGOQTZABXJOCIYSRPOHOSHFYFXMVQQUGCIEBUYUTTPFHQPMWNHWGLLKXXHOQPODNDBYDSAGAWTZVNLOVNAQUMZIEGAJTUCLRB");
    tmp_msg_0.max.assign("XHHAWUNYGVORPXSFUXMEYJKIEIFISFMCZOBKXYNTVYRLHZPETTMRKRNAJMAEOSZPCGYVSWXLONGTTNZHTBGUQZCGLIYFRZFQLYMMDSCQQUQXLRPENKWESDSAHYCBHUKDTDXJRGAJRNVCOMSQL");
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
    msg.setTimeStamp(0.152246314075);
    msg.setSource(10768U);
    msg.setSourceEntity(107U);
    msg.setDestination(18015U);
    msg.setDestinationEntity(24U);
    msg.timeline.assign("PMKUIJQYJBHCGKAFGMPUIGVLDWITBKVQXUEAFTKNOLWRHTWQJHDKKNLJOYRJKWEXOLROVMCXPQJDJIEPARHJCOWNBQ");
    msg.predicate.assign("VKQECILSHWQAENWQWIQOMYPRKEVIDXGYJXUEGASBYGQZHZMLAMXCQACWTZSUDZPEKCPRXCHGXNLIPTEKPGAFWQHSFRWYSIDIVOIRHHCJBVUBGXHDUFWPKCTKVRMLOAOTJRMYDFJYBXXZDVQHCWEUVBAKMEKAGFLLJLJDNAFIHBOTNNYPNCATOMLBSULUNMSDJWZQMMJPLTCRZHNKGIVRVBSRXDETKYOTFFZFPEYVWJOUFUZROBG");

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
    msg.setTimeStamp(0.948561472947);
    msg.setSource(38861U);
    msg.setSourceEntity(232U);
    msg.setDestination(18659U);
    msg.setDestinationEntity(37U);
    msg.timeline.assign("DLETWMVUDZQCNEJNZMCTTQSBPMKYFGRYNSXWSUSIIUCUNRFHNPWBBLRQOIRZBDYOGEMMLOKXHXAWGGDSCVWWAVLGLUEYRHDNAHNGVRBDDOYPELXJGCQQOMILEXTSFZKTYKKYCQWGRXFIZSYAKCLDXUGRFLDPBHBACEOLOOJPZTCPRJITJBEYUZMRBPPTAJWAQCWAYESMHMNVNFTIXIJVJAHQOSXTMIASXPHHZKVJUPHJKZVOZWUFVD");
    msg.predicate.assign("VKDEVCABBFRWTQUFCCQJKIKGINVLHDRBUPHSXZOZZUAFIODCMBRJADFJCGOJYIXYRKEIZ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ITTGFBNEEDHBNWCMFQDJQORVYWFMOWZVECCPMPSTSJTIPLGRCVSJDOJPUQUMHMXIGDLOVNTQLKTDELP");
    tmp_msg_0.attr_type = 118U;
    tmp_msg_0.min.assign("GQGRITCOCXPGAOAOINHRLIPTLUHVWBPJPABAGZUIMLYCSCHLBQAJVVARUIQTZUABEBIYTEDWDSVSEMJKDSZKBMMNNYYNHTKOXSJPECZSYXHAXNKIKJRMDQLPZYKSWORKHDJKOYTWZVWNMLXPLFYWHVUVEZCEWUQQRLGIWFXWGZPDFHDRRPCDTDUXC");
    tmp_msg_0.max.assign("NQPJKYJBRMPZXHNPYPYAHYFQECQXHIBYPFBDKHGOZPZPWXESTARMPKPGEFXKJMFCOXUUURRFFIULZECMWWWOIRSRTBIBEDTVJSVLYDSCGFCDGWOBBNSAYMUSRNUVJXTTMVXHLOLDGWDQDLEMACTKGVUHJVJSFWHELJAKHKWGMONGAICCYWVEMZ");
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
    msg.setTimeStamp(0.99530851723);
    msg.setSource(20687U);
    msg.setSourceEntity(4U);
    msg.setDestination(8766U);
    msg.setDestinationEntity(130U);
    msg.reactor.assign("TBZEGGPFFVVYBMJVMHHEQLACXIQIMSXEKUXDVVIONDMLXDAR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JPNEZHJEFUISNMAXMMSAZPSXPFURLDBEWZJATHOWTIUJDNEDFPESGXOAZYYXTNXMCZSQTDYYBOKUIZELVRBRFRPHMONQCOCLKVGIARSZOWBKDBBAFHEJPFZJVVQWICSLHOTKRNVHVUTCTQCKLGULIVKJQQIPHWIGXCCFUEBXAMPHFXVVJWSBUSXLYYUGNREOGCWDRYZGCOSZTGADNWBBLOI");
    tmp_msg_0.predicate.assign("AIBADCSKQXHSOFEXBFQYUUGXZVYTONPRRMGERJSGOCGKKAQZZOSGPMZMYCISNCVHRFCMOTRPMJTFMIAYJJIJEBGVGLNUDLJECTKEPETZBDWIORFJZXPBHCHVWTYSXWBTLSVQYMPUQPLWI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MZFEVSYFWZPWOAYTDLMEOIDEHLJRCDNNGOIAELWGPRQVJRQPRTUITLAFOVNWWGTUAUPOAJLBCZUSKFCJHWMZHHFZGIEKQRUPKJMFDXEORK");
    tmp_tmp_msg_0_0.attr_type = 3U;
    tmp_tmp_msg_0_0.min.assign("VXDTWIBTJCPRFLODEUGHUJYBMYHNANIMYVOADCQNTATKUCYBHJRIRBSVSSWUCARKQQGXRKVZPZDTQZGZCYEGUKHMFYRGPFTJNCJWFNZUELJNHJBVIPOXPDFPRMOATDZEMXMQKODMYBYWRTFFUIOSVNSOUPEKRKCIAGCEWYNSXHEZFBVFUSWUEAQQLKAZIJAHOLEC");
    tmp_tmp_msg_0_0.max.assign("XQUVPIVGNHBGECFTNWUDSFVOSUSURODUOBTSDEXDQORZAUMPIIHYRBKYZTZQRYGZBJALVBJPWBNFNZXHXEMIQIUHMZGQUQPBFAHLSNCYJIXAKKNZRSFOZAOMKKLRNJYQC");
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
    msg.setTimeStamp(0.201994116315);
    msg.setSource(64549U);
    msg.setSourceEntity(114U);
    msg.setDestination(2894U);
    msg.setDestinationEntity(74U);
    msg.reactor.assign("CEAQAILPBUQQARHSYSQKJHRRVYVSLVWFWJBMXRINJFTPDODOMWVVEOFCGIGWTCYAIEDZGTOULFVBLSAHGJAHNFRSOPWMAUXPFXTSHPKLOMPZLDZDSEVDBSYEBZBLGZXRKTBWZZMXXWFNIUKZKUTPEXGMHKMOIIMFE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HCSZNKZRUBTVOETKJWLVHVQKIINIEULYSXISDGBVXUTUNTCOOVAAEQYCKYGMSCIQOLMKPRPOQSNNLOFVYVQTXDYECDMBZXMUUWMPEEGSOIUFNNKWPGOHOMNHIBWKCPQYBHHAFDLLBFZCVYXPJEJMKJYMAWSRGFJJEAMDSCXOCHTIZWHYFGQWKPRTRWRZGJRDXLARCIBAVGGDWUE");
    tmp_msg_0.predicate.assign("XEVBWWVNOYPDGSAOIYWZAXKJJBINCZPTFEDJYMUZOZMSXFNIUIFUTFLNTKSHTRJABBDAINKJMXCJUSETLPKNPYCJVERHKRYOYFDQISHGBZRZLKEHHJPVRCQAUZVMMTUSUVOYCHMBJGUYPSDKKIQRDQLDDCWOXZGFM");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TEVDOQCEJXLANJAWGKGIAWJFHASEXHBCYGRSRIHQPOALBJUARPZCIBORVNCKSMWWPTUVFYPIOVKSYBEZRLJTQWDCEONFQJURGJXIUCCTNHKDVZPAGBLJZBOLGXMUYVIODHGFZZWHMASSXTQRWBOFILMGFESTKFSUXMCNJKDVPQVUMMSEYQAZKIHYWNQUHDDLMYZHFSTGCRKOPFKEVEFTXCUWRIPUYKDXLTE");
    tmp_tmp_msg_0_0.attr_type = 176U;
    tmp_tmp_msg_0_0.min.assign("YCJENVODHNXFTOCKVLPEXQSADHJQWSU");
    tmp_tmp_msg_0_0.max.assign("TVHAZKHGAXAJNMMGCCTPRCDBLDZLKMOHWPIKEQADISMREIMGBQZQMYJWMXXBWEROSLAEPCJBBXJGDYLTUNVTSNHVYYXEUGXUOZXOVZWSDQROXKCFIVGXDRLOWHHYWSNZ");
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
    msg.setTimeStamp(0.523387456486);
    msg.setSource(18958U);
    msg.setSourceEntity(185U);
    msg.setDestination(30590U);
    msg.setDestinationEntity(178U);
    msg.reactor.assign("QQHGRJZNDCKDMSHIMOIQANPITFBBBGXTRJLIOKRZYXJAJSJTDPMGYREQBCXUAYDTOCEMPMVYDHFVNEVGLYQTQSHPTWNZZCBBYUHSGHAJMOUGOGOBVGUGOJNSVOPZHLNFPCUJNYWRXKXSWWKNLXMPKBANKAVPYCJQIXYFSXFWDFWHEEVURMXEPGDAIAZRADAFSCIUEZKMLCOZBFKQZML");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HSFWYGVTJQDCKQQZMRAGHAYPCHEHZRTGMECCDQXYYJUTKMOFRUVHUCYMIWISMKOABWSXULZDXEFFRWPVTKUOVWVUJQWABNVLEZJGNTQBFCUWUQBNPGHFEELXWAGSISDGKFZCJLPELJDMTXOUIXVBQKJOYUCPXEITOMYNCEZPOOPIJZJNOLWNDEJYWRACYVZQXHDAYR");
    tmp_msg_0.predicate.assign("USTUGRIKRXNFUSBZZZZPCDTEMMXTKOXQ");
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
    msg.setTimeStamp(0.813975206977);
    msg.setSource(4718U);
    msg.setSourceEntity(43U);
    msg.setDestination(57321U);
    msg.setDestinationEntity(152U);
    msg.topic.assign("JTMONMCSDQFVMVZRDMDVYDKGEBTPKAZICRYPGKBDXUUNIXYVILBSNCJJAWZXZNSWCGNHGCSOGRTTWNREOPVOHXGMLEAIWZIHLXAPPH");
    msg.data.assign("ETBLPVYPAKBMTAERSYH");

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
    msg.setTimeStamp(0.526160718961);
    msg.setSource(5259U);
    msg.setSourceEntity(124U);
    msg.setDestination(9895U);
    msg.setDestinationEntity(44U);
    msg.topic.assign("ZFAUIOTUJQYVBAUCDQOELOXAJXHJYGCAEXJTHYWRSOTTRYIEKUJZDYRTLMWWUDSCKDENBVXYNCPWRUQDSYOUBGPKCVSCVIIEQMLWBQJMINEIRHRGLDWFPZFDSDCSOPBLDKRVXJFTZXNCBLRGYNWGNHAGIUZMBHPMGFJVZNKSTEUHOKFWHHYZNVMQLZNXNQPOMBMMVVGQAIWTKBZFUSOAKLEFGQCYELLDIBTROGFSEXJJP");
    msg.data.assign("GRPJLDDRTJKOKLPFKJJXLWZCGXTGDBIGALRRCSFZCMQWKOQQSVIFERAVYQSWXIBLYTYCZCMOEAVIWTNTBYHCHVQZHDLAZPDFZFUPSYKNLANTURKZRIYNXFRQOOIIEQWQLTOPTSMIOXTHFHEGUXXAIVMAWJCBEMJDUEGWSNJBAVKHKZYKSNJY");

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
    msg.setTimeStamp(0.686828193898);
    msg.setSource(22640U);
    msg.setSourceEntity(161U);
    msg.setDestination(24816U);
    msg.setDestinationEntity(82U);
    msg.topic.assign("YPYGHKMBQDQXFCMWUCVHTNIVZIOUWHDPOHNABLSHWWVRQLSFOWNTCYWVGYTTRCGJBFSZPKQXXJXCUKBYSREEEDCSKQNKTKEFZOHFDTFLBBEXCCEHNIFTFOPMUMRVUGROGMGUDUAPIMZLOZJUDTZJDSAXAKJFIZELXHOYUEIWPMYKIJODZXSGAQBRARBQAYBBQCKNZO");
    msg.data.assign("VEHYYFWSOPEPOAKUWLHAJSPUKZ");

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
    msg.setTimeStamp(0.135343168058);
    msg.setSource(230U);
    msg.setSourceEntity(129U);
    msg.setDestination(62587U);
    msg.setDestinationEntity(63U);
    msg.frameid = 98U;
    const char tmp_msg_0[] = {17, 2, 92, 34, 31, 35, -64, 74, -93, 120, 80, -126, 87, 97, -18, 85, -99, -3, -7, -120, 125, 0, -105, 10, 2, 126, 33, -109, 53, -19, 89, -45, -5, 70, -18, -53, 104, -109, -97, 105, 79, -45, -66, -20, -103, -81, 26, -20, -73, 58, -85, 10, -27, -62, 13, -40, 52, -87, -51, 61, 58, -26, 9, -110, 37, -70, 54, -128, 52, -20, -5, 96, -10, 65, 101, -58, -3, -64, -127, 16, -18, 87, -122, 117, 85, -127, -54, 27, -72, 67, -107, -76, -112, 120, -75, -114, -33, -52, 17, 61, -89, -18, -2, -125, 27, 101, -94, 108, -82, 117, 17, 118, -81, 50, 102, -20, 84, -51, 80, -95, 106, -43, -16, 90, -111, -20, 100, 55, -69, 31, 17, 46, -111, 66, 77, -2, 98, -11, -30, -109, -104, 24, 18, -89, -55, -118, -51, -77, -41, -87, -60, 118, 113, -40, -72, 19, 52, 18, -27, -20, 95, -103, 46, -1, -7, -13, 68, -121, 3, -52, -88, -29, 112, -117, -127, 74, 118, -102, -118, 39, -36, 110, 45, -118, 110, -38, -83, 122, -73, 73, 94, 48, -67, 3, 48, -95, 61, 119, 16, -54, 51, 25, -7, 101, 123, -71, 76, -71, 35, 44, 101, -20, 9, -97, 90, -106, 86, 70, 0, 9, 53, 66, -122, 58, -65, -97, 111, 118, 73, -67, 77, -92, 64, -123, -50, 28, -9, 86, 76, -67, 2, 18};
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
    msg.setTimeStamp(0.688034547682);
    msg.setSource(50322U);
    msg.setSourceEntity(30U);
    msg.setDestination(22272U);
    msg.setDestinationEntity(136U);
    msg.frameid = 25U;
    const char tmp_msg_0[] = {-44, 90, -126, -59, 18, 60, -57, 37, -111, -127, -47, 126, -30, 8, 126, -111, -27, -116, 84, -90, -89, 111, -84, 61, -43, -117, 59, -79, 58, 76, -65, -56, -123, 13, -100, -20, 16, -123, -88, -71, 50, -40, 93, 67, 122, -45, 84, 124, 59, -1, 47, -59, -10, -82, -96, -87, -58, -39, 74, -8, 123, -18, 60, 59, 112, 13, 67, 51, 93, 73, 31, 17, -74, -107, -98, -28, 108, -13, -98, -41, -55, -93, 43, 38, 90, 95, 88, -63, -98, -111, -104, 111, 53, 53, 84, -111, -122, 99, -32, -116, -27, 48, -45, 97, 125, 75, -37, 33, -39, 91, 99, 55, -65, -89, -15, -23, -23, -62, -60, -123, -116, -22, 0, 19, 93, -67, 19, -31, -62, 70, -107, -72, -74, 92, -62, 18, -82, 91, -116, -86, 36, 5, 54, -118, 45, 32, -29, 120, -27, -112, -35, -109, 126, 104, 33, 108, -10, 51, -84, -26, -4, 95, -100, -101, 122, 45, -89, 70, -116, 64, -41, -108, 96, -90, 124, 35, 16, 51, 13, -78, -87, -94, 68, -16, -14, 72, 123, 41, 37, 61, -122, -111, -99, 15, 108, 25, -83};
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
    msg.setTimeStamp(0.526170793007);
    msg.setSource(41832U);
    msg.setSourceEntity(20U);
    msg.setDestination(28962U);
    msg.setDestinationEntity(72U);
    msg.frameid = 209U;
    const char tmp_msg_0[] = {76, -85, 46, 78, 122, -10, 124, 77, -50, -107, -110, 21, 16, 98, -23, -26, 2, -2, -2, -88, 115, 41, 95, -67, -105, 41, -78, -49, 103, 122, -95, 39, -18, -110, 69, 89, 10, 13, -81, 125, -56, 33, 95, 0, 50, 62, 113, -22, -16, 73, -101, -37, -125, 99, 68, 27, -113, -83, 3, -67, -97, 122, -3, -51, -41, 84, -50, -48, -53, 110, -87, 70, -20, -74, -87, 13, -68, -98, 49, 117, -39, 111, -95, -20, -24, 49, -7, -110, -97, -74, -111, -51, -72, 97, 30, 77, -63, -8, -88, 102, -65, 73, -15, -51, -5, 124, 24, -56, 44, 20, -21, -67, 116, -30, -126, 121, 56, 15, 35, 67, 3, -51, 11, -4, -122, -71, -77, -98, -82, -37, -37, -29, 27, -73, 94, -35, -42, -113, 87, -94, -67, -84, 10, 65, -17, -18, 119, -98, -34, 123, -5, 77, -106, 12, -51, -29, -88, -28, 71, 110, -102, 69, 102, -8, 125, -106, 61, -59, -74, 65, 86, -25, 39, 74, 119, -74, 22, -58, -47, 75, -68, -28, 57, -27, 113, -118, -62, 49, -110, 48, -123, -124, 13, 84, -16, 77, -126, 98, -26, -97, 28, -100, 109, -85, -45, -96, -97, -81, 0, -122, 24, 8, -81, 105};
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
    msg.setTimeStamp(0.941009337422);
    msg.setSource(24626U);
    msg.setSourceEntity(14U);
    msg.setDestination(45605U);
    msg.setDestinationEntity(197U);
    msg.fps = 36U;
    msg.quality = 9U;
    msg.reps = 92U;
    msg.tsize = 142U;

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
    msg.setTimeStamp(0.34746186881);
    msg.setSource(19149U);
    msg.setSourceEntity(11U);
    msg.setDestination(4995U);
    msg.setDestinationEntity(120U);
    msg.fps = 64U;
    msg.quality = 165U;
    msg.reps = 201U;
    msg.tsize = 86U;

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
    msg.setTimeStamp(0.827551308699);
    msg.setSource(13274U);
    msg.setSourceEntity(46U);
    msg.setDestination(57912U);
    msg.setDestinationEntity(34U);
    msg.fps = 57U;
    msg.quality = 79U;
    msg.reps = 208U;
    msg.tsize = 20U;

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
    msg.setTimeStamp(0.975066468446);
    msg.setSource(65195U);
    msg.setSourceEntity(89U);
    msg.setDestination(45028U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.191024713808;
    msg.lon = 0.535959018758;
    msg.depth = 20U;
    msg.speed = 0.304628695119;
    msg.psi = 0.144865412009;

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
    msg.setTimeStamp(0.654615031107);
    msg.setSource(31623U);
    msg.setSourceEntity(33U);
    msg.setDestination(8144U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.805482958558;
    msg.lon = 0.881391022463;
    msg.depth = 239U;
    msg.speed = 0.787854844836;
    msg.psi = 0.627078173752;

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
    msg.setTimeStamp(0.076787223793);
    msg.setSource(14664U);
    msg.setSourceEntity(115U);
    msg.setDestination(25807U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.338839459372;
    msg.lon = 0.503326308668;
    msg.depth = 198U;
    msg.speed = 0.683645732804;
    msg.psi = 0.697556939046;

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
    msg.setTimeStamp(0.101238050843);
    msg.setSource(5831U);
    msg.setSourceEntity(175U);
    msg.setDestination(40384U);
    msg.setDestinationEntity(16U);
    msg.label.assign("JOHJLGNGPVWRTYIPUXBVHHUZKXZOFSINODIAQXYFYFPAWPBBKKGHVAGYCFSLEARNCHYIESDLJJJBIMDJPMSTTMTXTCQKEHFPMHOXDSKGWWUVJPLZMIBQXVUVZTADSGITYADWQJEVCRNAYIZOORQENXWFVMWDUBSRHBZGAFZPWUKGCDOPPMTYOCSQKLKRBTQGIVBRXLUCNSWSZGJQOMINDHEEEOCXLTNMKABFZNUFXQVYFYKLEDMURCLWLRUQZ");
    msg.lat = 0.442831143693;
    msg.lon = 0.384242297662;
    msg.z = 0.17973259574;
    msg.z_units = 93U;
    msg.cog = 0.574183105118;
    msg.sog = 0.391192416749;

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
    msg.setTimeStamp(0.402303551142);
    msg.setSource(49840U);
    msg.setSourceEntity(169U);
    msg.setDestination(48349U);
    msg.setDestinationEntity(186U);
    msg.label.assign("NQSHPAJSGWYLKRDNYWKWPHZAHXAHVEJVXFNOWIDGIRYAHXXGUSIQJRMKBSXBWOPCXCUKKHKDAAVQEEXIONBDBKMFLVCTWEVUHR");
    msg.lat = 0.588248294341;
    msg.lon = 0.565591588298;
    msg.z = 0.158072523784;
    msg.z_units = 182U;
    msg.cog = 0.412993903025;
    msg.sog = 0.727321492501;

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
    msg.setTimeStamp(0.34285138669);
    msg.setSource(18640U);
    msg.setSourceEntity(251U);
    msg.setDestination(31146U);
    msg.setDestinationEntity(224U);
    msg.label.assign("ZTLGBVSZRWHNHYMPUIVWHJDYJUORXGBPKNRELNRPRCNOAHKZRVQVBAWVHADNYCVKQBGEIHTUDMMNDLTICHIQFXCOYACIEGEKMSBFDWSJDCCZFEYUAQTAESTQUGIXSQBVOKDPFIAXDSNQQTTJYLFSHHRTMKSMAOJLMLFXAJGJCCLPHMJOCWWIGYYXJWNUUESPTZUFZXAZGVKGKRDIBOWUYFTXWW");
    msg.lat = 0.2222369989;
    msg.lon = 0.326315210927;
    msg.z = 0.217984318948;
    msg.z_units = 71U;
    msg.cog = 0.484517144014;
    msg.sog = 0.797360998856;

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
    msg.setTimeStamp(0.102897972161);
    msg.setSource(54030U);
    msg.setSourceEntity(12U);
    msg.setDestination(46350U);
    msg.setDestinationEntity(115U);
    msg.name.assign("KUVKRAWMGXQLZYLXQFCMGCIKBNJOVWRPUZJHONUSHPRLJYHGGIMOWPSERGTJOATRBXFHKOPHFSY");
    msg.value.assign("BRANWPNUZGATGPRUHBVDMMRVBAUZODSKPJIJMORUFFTJHYIEMQTCYBMRYAVLSIESEEVRPXX");

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
    msg.setTimeStamp(0.726124102177);
    msg.setSource(34536U);
    msg.setSourceEntity(147U);
    msg.setDestination(36676U);
    msg.setDestinationEntity(10U);
    msg.name.assign("OTXJKDQVQMGYTAIGXBACFMSRJLKGPLPMRUINRWFIEMGDFMDRSACMWZHLESLWISRUEEVOLYKDBKUVDAJZCHBUIFEYBZCPIUCFSKQASNTTYUZRNJVCQZWLNBXPPMEAKGXHERGXDPCNCHFHEOGJNQVGHYSLMPNXDJOHOOGVAYYWDJNBWYXTTUQJBWDRMCIMFNUIZSFHYGWETAWLZLYKBPUTJXJSK");
    msg.value.assign("WKBRNIJNQLGSVJYYIQFZAOVTONEDHMYXZWXGGPZLTFEFASLZNNKPBNJICEFLFOOQRHEDMULKTQALLNVCLSMEVUMFNIDAVJXCNSB");

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
    msg.setTimeStamp(0.384231905276);
    msg.setSource(22552U);
    msg.setSourceEntity(183U);
    msg.setDestination(31213U);
    msg.setDestinationEntity(145U);
    msg.name.assign("PATNAYRUOOKTOAJPHXHZNAEJYBYOTFACILQNTBXVXYHBBFFMSUMNYQCUJXSXYCWZWIPJLVDHFZVGDXXEDQXDTFURGHHSCMKPNTYREOQGLBKAIHFIQLOSJWCQNPLIEIKRGZBLWGKMHRUUBYCEDLGKRSZQTKVPUPVUSOMRTLXAMDMVPDTZNZIRFRQKSRPNWAZGVBCKFHUEOEGEIWJTIKQXD");
    msg.value.assign("PDTWAFVBAOAQXFTCXNSEHRUDOQLEFSBJSAHGVUWSNZEFDMLTRGDILOUKRRPADWNZNQHMJTONJ");

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
    msg.setTimeStamp(0.677820648646);
    msg.setSource(20949U);
    msg.setSourceEntity(208U);
    msg.setDestination(26105U);
    msg.setDestinationEntity(61U);
    msg.name.assign("AJYUWMQGFIPOLSWXYRAZBBSCSKNNROTEIHENXWRQZIGVZMMBLUIAKNRJXLXNLRCXNYXCICFIHYMGLQQVBWWJDZKWDOUAWAGMAEDOSMPSHCMXGPKWNEKEUFVAIGQSUPLJHDUYYVCMVGMRSTCOIFBRVJCLPHFUVUQXRPKXDORTQ");

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
    msg.setTimeStamp(0.6423155901);
    msg.setSource(28193U);
    msg.setSourceEntity(95U);
    msg.setDestination(8649U);
    msg.setDestinationEntity(110U);
    msg.name.assign("LQPVAVMLNLOJIISGOHVCEBPZIXNIVMAYCGBRYZXGRWUKGPZYHFZKIQMKMWEUZOYOXEKCEJKQVYEJYZFWXIDYOIMSWAUCTDTRHRHSGWUBZXXDTYUNVXOCMHANBJUFOICWSSQUQJYPMGJDRJOEAQQGDDPJKBRNHDSTDKLFRMGACNEFXHZWJWGCUEKKFTSSVFABMPBKUVLPGTVWHL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PGFDTHLPOFMUQTIXSWJNLNDRSRGLBXRVZIOAXKSGMYDYTVHNHMFZPCUNLJXCNRINTGVZIRACKBCEAMDAWTTORYZDYXUJ");
    tmp_msg_0.value.assign("KHKRJNFFXEWCRFAIBONKXOJAWGYUYBWYMKOMLLVWJUJRGBCWTYTHFFKQPVNXSSXPVXLRVSPAWIHINXCFKHDZBNADEPMNOCPPTSLGCKRSPYYMKUGWMVXKDZJANEJMCVZLTU");
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
    msg.setTimeStamp(0.0254322070506);
    msg.setSource(44956U);
    msg.setSourceEntity(20U);
    msg.setDestination(16856U);
    msg.setDestinationEntity(78U);
    msg.name.assign("MOUBZASQFHOJOKKFVOANPQXHPMLSFMTLXDXEIYRXHESNTHLAOZITRANUQWSGAWCFUFZDSPVUTTXDYDNGQLBUKXWVRWAUXWHPOVBASKQARZMJNYEMCDOINYLOFPICSSJXTYFRUXZBCGZOGKPGYJHYTDXGIPAJBPKKKWGVTVDDMRWUVBFIBHPEOMEREQC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KDQYZFSPNGCGOFYAXCHLPWBKNLTDQZAXRMBCWTXWLADYOMOMSNEELYSZODEIRPRVTCDOMTHYFULVXW");
    tmp_msg_0.value.assign("IVZBSUEHDOEHYQMZPIAREDNYPOZMLYIANPRZDHKOYXWZIMWQMULCPEICTVBDBANGFKMDGBJYOXAECTTTYNGFGNDKBTCVIHMEBOMGMUCBRRWVKELQJIXLGKXUPMRKFZSDFMGFXXGJRFBCTSEOUCVSFVGWCHJDTWUTAWLSFZRZVHWSFASQJWZKQNWQIJPQKIXROHAVGXRSNXNQCDULWBLVPJYSTOKJUHJ");
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
    msg.setTimeStamp(0.345509686186);
    msg.setSource(49487U);
    msg.setSourceEntity(134U);
    msg.setDestination(58463U);
    msg.setDestinationEntity(254U);
    msg.name.assign("KGVEBJQQLRHBYEGMSXNKJGVULSWTNVHQMAKEKJSSMIXORCILAPEDXXRMUAIZDOJDQQKFQEAJPDUANSZDOEURITUEAYISKVXMYMLRGVRCONHWILL");
    msg.visibility.assign("EPPVMCAGRHQXVKIZODEFOOMLTKXRHDERBPKWGRRIHZLMEYPFJSLTEBCCNRVCOLMIKCNVPTETYZWYKYVOQPFNJ");
    msg.scope.assign("WTWWFGLPZKMMEICGANLEOKXTHBQGHZWECGEZEBXGIYKBPFRUQYUZTHGSJRGYTQXIUVUYONKPJFELZKPADFLROPXJETBMXMWZTIXBKLLTVF");

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
    msg.setTimeStamp(0.0524516015656);
    msg.setSource(65343U);
    msg.setSourceEntity(128U);
    msg.setDestination(50108U);
    msg.setDestinationEntity(42U);
    msg.name.assign("DXCDAXEHFWFNYUDJWBDZLTSASPIFMKGMLWZVVSVPDSTQANNWHUFSJCKZEORMLZXCTPKRNIPNKBTMANWEQWHZCBIUEKFWKYMTVPLTE");
    msg.visibility.assign("ZKVQQVLWWVDNFTGJBQYYEXVZBLUHAKXQYSFBYJEZAXRSTGQKEHOFGVTIISOCTBSXRETYXERMWDHWPCBEOIEDWRIZPNHJUOFFAOCRNUSXCCPIJOTYLZ");
    msg.scope.assign("BGTWFNIYCNXSPALELYTLMXBMWOPVQVEAMMMYIHBTOSPIDYZQHSORJDIOTQGFIHCBZYYUUONRLNRNFGRESQYAPESDMCVG");

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
    msg.setTimeStamp(0.0500834170445);
    msg.setSource(62201U);
    msg.setSourceEntity(73U);
    msg.setDestination(11011U);
    msg.setDestinationEntity(64U);
    msg.name.assign("AFOCOSNOSDESBFAJSKCYLVOCUFJAGIZQJ");
    msg.visibility.assign("SFWIDGYDPQYZVIJUMOUKCEKBTSNFWJLBHCWZEURBXDVSPCZUUOWL");
    msg.scope.assign("MUPXMYCAQBRTHHHUIQNEGRZENBHGJLKJJWPUFPJTBQTTKZCQAP");

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
    msg.setTimeStamp(0.950343918525);
    msg.setSource(62831U);
    msg.setSourceEntity(26U);
    msg.setDestination(15921U);
    msg.setDestinationEntity(95U);
    msg.name.assign("SLXTHQDMIAERFYEIWJDEQMOANHHRONXAFDNQFUYZCFLMYQVDHXJULSMMOUSTRDJICANDKURVBRMGLAZQWVGKKTBFADGSCXBXFUUERZQJALFBJWEIYSCGJZZMHVOGEIBBZDHXFGQZZASS");

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
    msg.setTimeStamp(0.91936139219);
    msg.setSource(51349U);
    msg.setSourceEntity(250U);
    msg.setDestination(5636U);
    msg.setDestinationEntity(111U);
    msg.name.assign("YDXZMSCKHYJVAOOJDTJBRAEUSFZIRZXXEEHUXFNTZWYEILSAIRFEYAVRECBNAMZTKKGODADIJSCRSEHLRUOJONXPZWNVHUNYKZADIOQBZAPLQKIAED");

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
    msg.setTimeStamp(0.414986281964);
    msg.setSource(44225U);
    msg.setSourceEntity(246U);
    msg.setDestination(36282U);
    msg.setDestinationEntity(212U);
    msg.name.assign("XCGXWNOOQAYFZMREWDEUXDAPZPRPLDWHHQYWIWGLKJMLWYKUCDLJJIEWATIYURPYSSGMYTMSHZFMACVZNIPLBJVJINUQMFHLBSPEFNNVROJSTHAPDBHUTYUOAEMNDCATCUHDOUXEBQINTBYEZKCKUFDRNQIJVSVQOAKGFSEDNFPGTYCZXXBHKWGANCHBJRKZUVSZFLKVCIZRZPIHLVOJ");

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
    msg.setTimeStamp(0.00125152384205);
    msg.setSource(30316U);
    msg.setSourceEntity(143U);
    msg.setDestination(47500U);
    msg.setDestinationEntity(135U);
    msg.name.assign("KAYFVZDAPHEDAYWBPOSNVUTLJTVCJIBANLPMQTNRTPQRSGHGRXUWHPEVECUVEMPEZFXHIFUZEKKMDQXJUDZHNFGGKWHEBPTYSLCRVHLEDIUNDQCOIWIMGGRHVVPLSZSAXSEOOTXKHCQFOTHSIQCLYZWCBZSRNQEVIOPUXGUWALMGQALRKDUCBQSKKNAJWTVGTCOJYLBNAZL");

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
    msg.setTimeStamp(0.860856113988);
    msg.setSource(8118U);
    msg.setSourceEntity(118U);
    msg.setDestination(5150U);
    msg.setDestinationEntity(20U);
    msg.name.assign("QANSKDJGNPUGDPCOODZAWIXUECQOIYHYCBSHFNYTMRCSBQUFXDEFHHVSTPXVGPXLOVDKEEWZJOCSAXLXEMQUJTBUMRKORZVGRTEQQBZJBPSKXZRLAKYCYZPKGULJJCUXIEREQNEYDOLRTLSBWODXMXZTAWIHNALNTKNUFSKDSIWHJBMZPSEIIVBWTY");

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
    msg.setTimeStamp(0.327615941294);
    msg.setSource(45938U);
    msg.setSourceEntity(186U);
    msg.setDestination(27778U);
    msg.setDestinationEntity(159U);
    msg.name.assign("YBWZPKBAOTNBWOVGTRLFJGBGKLIIVXQBMJFDPNWTLNULBDAAUUAFSYMCIPGOHVNCQFSNUCGEHNHHSYWDFQFRRTMXAQXGGUDYTKMTKDSNJMTNJIOMYLMEZJEFEXPMNYHTQXXQTFIJYAYJBZEZDLKQPDSWQCJLZSVKWOPUJQDAUSDBXKAKMEZESIRGRBZWCVNQLHSCXOVP");

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
    msg.setTimeStamp(0.913113999874);
    msg.setSource(31518U);
    msg.setSourceEntity(185U);
    msg.setDestination(42770U);
    msg.setDestinationEntity(99U);
    msg.timeout = 2214613133U;

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
    msg.setTimeStamp(0.876566215655);
    msg.setSource(33874U);
    msg.setSourceEntity(48U);
    msg.setDestination(4955U);
    msg.setDestinationEntity(177U);
    msg.timeout = 4122708582U;

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
    msg.setTimeStamp(0.0697722535181);
    msg.setSource(8206U);
    msg.setSourceEntity(121U);
    msg.setDestination(11458U);
    msg.setDestinationEntity(158U);
    msg.timeout = 2072963169U;

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
    msg.setTimeStamp(0.753319196419);
    msg.setSource(26445U);
    msg.setSourceEntity(41U);
    msg.setDestination(59326U);
    msg.setDestinationEntity(223U);
    msg.sessid = 459313260U;

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
    msg.setTimeStamp(0.932410806751);
    msg.setSource(63919U);
    msg.setSourceEntity(116U);
    msg.setDestination(47075U);
    msg.setDestinationEntity(12U);
    msg.sessid = 1618637537U;

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
    msg.setTimeStamp(0.00988154782291);
    msg.setSource(54869U);
    msg.setSourceEntity(227U);
    msg.setDestination(22337U);
    msg.setDestinationEntity(244U);
    msg.sessid = 2050745477U;

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
    msg.setTimeStamp(0.236957767281);
    msg.setSource(36441U);
    msg.setSourceEntity(240U);
    msg.setDestination(47574U);
    msg.setDestinationEntity(200U);
    msg.sessid = 1883897843U;
    msg.messages.assign("YEGCBKCYFJPAZCNMUSXWSGKZEIFKTOFJVWZQIYNBPBIGTHNSQPF");

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
    msg.setTimeStamp(0.0191362486316);
    msg.setSource(46641U);
    msg.setSourceEntity(176U);
    msg.setDestination(43751U);
    msg.setDestinationEntity(181U);
    msg.sessid = 1924996764U;
    msg.messages.assign("MFZTMOBBCWVYXGUZVLLXJFEBYRYSLGWGNDYRSAJUBVODHTVEPTNOFWFDQTAHURPVEZKSMYWXUZCSPXRIROZSNYKTBDFJBNPZFMDSEQCDJGPVRPUNQGGQXIBSXIFIQUHLSFBQYALPNVRHMHIAPOWGHOZITADWTOLYBDEQSBGHPEKKPKXGRALKHWKMJDNCXLTEJKLCZIQQCZTGL");

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
    msg.setTimeStamp(0.574297612578);
    msg.setSource(53421U);
    msg.setSourceEntity(238U);
    msg.setDestination(2453U);
    msg.setDestinationEntity(199U);
    msg.sessid = 2711643116U;
    msg.messages.assign("JTEWWKZNYUOGCHRLIAKNELMEEDGADSXHVHJLVIVOXKACPEIJSTIDUUFZUPZKYGZKYEKJRASZLQGETDOGSJCBHCCSVQDUWXNPWWLCBPLFHISLPISBIUGFCFNLHOKCOQWYFQJMYUHQQVGWXKJPEFO");

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
    msg.setTimeStamp(0.208475986027);
    msg.setSource(22481U);
    msg.setSourceEntity(54U);
    msg.setDestination(22450U);
    msg.setDestinationEntity(136U);
    msg.sessid = 2344879619U;

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
    msg.setTimeStamp(0.595790900429);
    msg.setSource(1363U);
    msg.setSourceEntity(85U);
    msg.setDestination(28224U);
    msg.setDestinationEntity(194U);
    msg.sessid = 4245207944U;

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
    msg.setTimeStamp(0.64403859579);
    msg.setSource(3963U);
    msg.setSourceEntity(87U);
    msg.setDestination(63304U);
    msg.setDestinationEntity(31U);
    msg.sessid = 3712192757U;

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
    msg.setTimeStamp(0.217011126755);
    msg.setSource(26156U);
    msg.setSourceEntity(195U);
    msg.setDestination(32738U);
    msg.setDestinationEntity(210U);
    msg.sessid = 2312933165U;
    msg.status = 110U;

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
    msg.setTimeStamp(0.827615807729);
    msg.setSource(4652U);
    msg.setSourceEntity(155U);
    msg.setDestination(49118U);
    msg.setDestinationEntity(235U);
    msg.sessid = 2848267215U;
    msg.status = 117U;

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
    msg.setTimeStamp(0.295026090811);
    msg.setSource(1657U);
    msg.setSourceEntity(164U);
    msg.setDestination(38555U);
    msg.setDestinationEntity(31U);
    msg.sessid = 622463093U;
    msg.status = 143U;

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
    msg.setTimeStamp(0.0291416845916);
    msg.setSource(32230U);
    msg.setSourceEntity(58U);
    msg.setDestination(17519U);
    msg.setDestinationEntity(143U);
    msg.name.assign("VZUCMZFXZTFPRTPFKOGPJBWMKNIQYCZYUGVHEIGEESICSQVTLSKERCPDCEJQEVRYKTVJXMFIUHTZXNZMXNYRNKLZKXFQEWIRDQWBWYYWAGDLHRQBKBENAQIHLXPCCSJIRGKDAFKPLPPORENZJVKODNHTLABMJYDTTDURLJGVJOLAWMXVBHRAQMLXXHVBUGBI");

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
    msg.setTimeStamp(0.70137113928);
    msg.setSource(37596U);
    msg.setSourceEntity(250U);
    msg.setDestination(35480U);
    msg.setDestinationEntity(78U);
    msg.name.assign("NXWPHMRLDOJFTYOGCPNSXKNDNJKWMVPSGMTTEFNKJAGBLHCFEWITSVVCSJUMDLJHBONOPCRCKOEIIMSZKMNYZEONTYFRJOKWKLLCDHSVZURPUTOFKCLRHKIBEHMIPRQQUWRNBAUWVGBAGETRJOGCGSYQAEYDBXDGHYBQAEXWLDPVBTWKXAZIBAV");

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
    msg.setTimeStamp(0.159472405721);
    msg.setSource(15824U);
    msg.setSourceEntity(186U);
    msg.setDestination(37538U);
    msg.setDestinationEntity(164U);
    msg.name.assign("GCZEDPGQQUJSVJUXZLVLKCEVBIJYQKUZWEBQEOARKWFXNMGAQSGBLGGAPALVUSKENZTZJHGZJFPBWEIAMYXYRFRJGYHPDLACFTDBIVIEYDUSNUTHHBPRSWKVMAQAFDNFKSISJXGCVSFDZXLOQIMNLMLTFBLRDCYYYRODYQNCWSRNEXMJTVEKZZMOWIIZXTHNTTCUF");

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
    msg.setTimeStamp(0.812278753082);
    msg.setSource(17842U);
    msg.setSourceEntity(180U);
    msg.setDestination(50163U);
    msg.setDestinationEntity(80U);
    msg.name.assign("TLELWNTZQSUTIIEQKVYACDYOBONSSZICGURLPR");

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
    msg.setTimeStamp(0.447986672196);
    msg.setSource(56792U);
    msg.setSourceEntity(242U);
    msg.setDestination(62109U);
    msg.setDestinationEntity(28U);
    msg.name.assign("ZARIIXZRFBKOMEVXIPEFKFLNCTXLFZYCNKHRARWAKHSRYDNLZXWDJSQSEWULUFOHJOVPCLZWZTPYRTTNFWMVOIYRBBOPOXWUFLAHWCCXWPUGQPITTCYZIGOJASGWBXXSEGZD");

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
    msg.setTimeStamp(0.151386873496);
    msg.setSource(21189U);
    msg.setSourceEntity(173U);
    msg.setDestination(42885U);
    msg.setDestinationEntity(36U);
    msg.name.assign("LJYGOFSODZTUSKCZRCTWYEAWXAPUCRTORFWLGUPTZYSRGMLZSCHWVWIEOFENKVTHZTAVWBMYJZEEBOXPQISZKDDNKXYFQBASGDHDMQUFJNYKKGDRMONDPRKJYTCBWGNIAPBCHOTUIXDVWILNXUBSQQRLJXMYANOLXVKWBEZQHSXHHCEPQJ");

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
    msg.setTimeStamp(0.102480913031);
    msg.setSource(50948U);
    msg.setSourceEntity(54U);
    msg.setDestination(11093U);
    msg.setDestinationEntity(170U);
    msg.type = 230U;
    msg.error.assign("AHYEAKGKOENGMEKZLEXTDTPVROULIEEMUYTDVPYGXQFPCYHXRQLLFXGNYCHFETXLRSIZLDUWGKXPQVHBVDRUJJCJGNGRQHVQBQKIAOODIWLWHBUTRNBTAZSJPIFEEISAAFSDKJTXVD");

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
    msg.setTimeStamp(0.727604852641);
    msg.setSource(4277U);
    msg.setSourceEntity(32U);
    msg.setDestination(21400U);
    msg.setDestinationEntity(210U);
    msg.type = 235U;
    msg.error.assign("MHDMTUSLXIFKAQFVVYEOFXMTRWBNJXKPZYSGWNVHHJABVRDQFPPTCDYZEVAASYFFZUMQKRGABEIWEDCIZQBJTTLNPJRVQVMVWBGRCVIEZBLKGQPTELSNOPRJCKUCCTGYIDUIGRCOXHLJGFHJMBHNAUWZPKFHDOOVZSBXZAULKOXSAEIMFNSDTYNSIBWEXOUYKPHONLXWWQOPFHTSCUAQDWNLCJKMLXGQZHDBNMOKELAYMYWGDCRZSGURP");

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
    msg.setTimeStamp(0.697329414991);
    msg.setSource(36610U);
    msg.setSourceEntity(107U);
    msg.setDestination(23700U);
    msg.setDestinationEntity(231U);
    msg.type = 204U;
    msg.error.assign("KFQVFMPDUZNSSONHNPXDCPULSMR");

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
    msg.setTimeStamp(0.439252469489);
    msg.setSource(55280U);
    msg.setSourceEntity(115U);
    msg.setDestination(48051U);
    msg.setDestinationEntity(168U);
    msg.seq = 4407U;
    msg.sys_dst.assign("EHKNWXUDRMBASTJVJOEJRRYYVSELPLCHHLZHNOJKCOERPKOWIWICMJXILSLHPNYFJYBBXDZHQSIZFLBULKIAURWZYXHAQQNITFVXOGGMMDAXUDGPUTOAQMPCGGSXUNYWMFHQDRKFTOGIFSZLWYDCYTBTQOIAPRVVZIMTVRMEKXSVVNDWGDHKJVMVFTQRPNBPRSTFXZSJELWDKBUPBOAZY");
    msg.flags = 92U;
    const char tmp_msg_0[] = {65, 48, -62, -18, -68, -113, 100, -14, 99, -60, 36, 23, 63, 7, 19, -72, -124, 64, -32, 58, -122, -126, -94, -77, 64, 17, 63, 45, 111, 85, -106, 87, 78, 47, -28, -117, -117, -104, 123, 61, 2, 50, -101, 35, 53, 6, 78, -58, -113, 94, 27, -51, -93, 33, -58, 98, -28, 103, -115, 59, -91, -107, 82, -67, 61, 32, 73, -75, 79, 27, -8, -113, 109, 109, 57, -128, 75, -45, 121, 115, -127, -90, -37, -127, 67, -36, 51, -61, 51, -124, 17, -77, 6, -105, 3, 107, -111, 110, 28, 9, -9, -27, -28, -110, -20, 10, 6, 34};
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
    msg.setTimeStamp(0.565347781275);
    msg.setSource(55794U);
    msg.setSourceEntity(204U);
    msg.setDestination(61509U);
    msg.setDestinationEntity(158U);
    msg.seq = 63006U;
    msg.sys_dst.assign("LSRPFYDADBAPIYZCCBTZQKUBCLBZXRZSGQSGOCZURSWSVMUYZVJPOTJXKAWKOWAUCWKSUPCNRHVDCUJNBAVGYKIXSSHLXKQGFNOXJXQUIEEQMDNYVJTIXFCELOMYCMNXVFGPPRRTHFWFSXGJFHWETHWLHYPAZPNKVHBTMROLKHEMAAPUOHRDEELNHFEQURBICGQNBMFDKJLPYJDYEMTQOVNNMXBJZZIQUDYBOVLJLMTVGTTWDW");
    msg.flags = 3U;
    const char tmp_msg_0[] = {108, -39, 115, 77, -67, 124, -90, 105, -33, -86, 67, -104, -84, 64, 9, 83, -104, -57, 57, 47, -100, 113, -5, -13, -101, -98, -87, -52, -64, 18, 40, 69, -51, 41, -76, 86, -85, 60, -73, 90, 83, -70, -4, 82, -122, -18, 42, -105, 17, 83, -106, -104, 43, -23, 11, 102, -95, -52, 114, 68, -62, -68, -106, -101, 76, 37, 50, 93, -105, 38, -12, -57, 38, -97, 54, 14, 56, -9, 3, -63, -109, -34, 18, 120, 49, 60, -13, -111, 62, -119, 40, 2, 18, -100, 120, 76, -32, -17, -22, 106, -4, 92, 113, 64, -114, 108, -27, 21, -37, -119, 23, 83, 30, 42, 56, -45, 50, -37, 81, 76, -15, 66, 99, 62, 25, -40, 114, -2, 96, -16, 37, -60, 28, 35, 28, 69, 52, 65, 18, 5, 49, 117, -6, 23, 102, 83, -21, 95, -110, 29, 12, -117, 78, 84, -29, 118, 54, -85, -17, 83, -55, 8, 84, 104, -31, 59, -52, 34, 38, -2, -65, -92, 3};
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
    msg.setTimeStamp(0.201171431533);
    msg.setSource(27787U);
    msg.setSourceEntity(116U);
    msg.setDestination(25964U);
    msg.setDestinationEntity(217U);
    msg.seq = 25250U;
    msg.sys_dst.assign("XDONQVEGZAEMQDMHJECCTTWBYQOZAPEUONZZKEPLJFRICIAMVQBMFM");
    msg.flags = 114U;
    const char tmp_msg_0[] = {15, -98, -113, 112, 107, -117, 0, 91, -112, 27, 106, 78, -107, -44, 6, 25, 63, -16, -60, 82, -35, -115, 28, 105, 23, -74, 88, -72, -109, 4, 77, -1, 38, -119, -108, -113, 73, -80, 99, 32, -43, 40, 116, 96, 41, -47, -54, 10, -122, -101, -122, -86, 27, 100, -117, -112, -20, 100, -57, -53, 49, 106, 9, -85, -20, -47, -62, -114, 49, -87, 23, 121, 85, 34, 36, -51, 15, -90, 117, -116, -68, 33, 90, 10, -18, -69, 112, 106, 111};
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
    msg.setTimeStamp(0.270417942692);
    msg.setSource(47047U);
    msg.setSourceEntity(20U);
    msg.setDestination(45758U);
    msg.setDestinationEntity(119U);
    msg.sys_src.assign("CZGVWMNYLWNQTFEQVAUAUOCBXDMDICZXKJXPEDTZMPXGNHZBCNANGYUORDGWVQDNVIWUUWTHQIMHKPHLKQHRKTHJSBKYQTJYYCFFMIUIAHXIMOEUHQJDPVLLSFAGDORTGRTYKPOSZFPCWZPWRGOT");
    msg.sys_dst.assign("CWMREXHKBCDWUVZVLUTSGEYAAPGLAOBOYJIOSNVHCXJKLYTMMLZZENQQFBBCYDAJYWJOUDPJHBAUDWTGEJFSPKAFLMAOIPLDVBXBFIZKRLVIDPVQJCYCHKSFNADEN");
    msg.flags = 97U;
    const char tmp_msg_0[] = {39, -94, -55, 7, 8, -11, -96, 103, 53, 8, 54, 108, 76, -34, 12, -83, 110, 48, -82, 9, -53, -53, 98, -97, 40, 78, 106, -94, 73, 62, -111, 101, 5, 34, -3, -39, 46, -26, -82, -45, 73, 9, -93, -120, -105, 113, -43, 58, -123, 23, -14, -110, 83};
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
    msg.setTimeStamp(0.834466767634);
    msg.setSource(49141U);
    msg.setSourceEntity(203U);
    msg.setDestination(41446U);
    msg.setDestinationEntity(85U);
    msg.sys_src.assign("XSTQAMEUHMZCFYCCNKVTSCJTPHBVQIZTAOYEPGHJHUEKWAYSLGUUFXOSEFRCIYCDWBGDPASUZANVILHWIMUZSOFYCSDNMGNKDKJZBKH");
    msg.sys_dst.assign("GAWALYDNIHGROKAYXOPAYUDFUFGBQRGBITHGWBERZSFANSHMPWZIJJTIJDZLSDDHNXWQTSMMTWZSRQJTXVEKPBRPMBIHAFLEDFXFPEMUIMDHPNLRVKWQZTWPQFDFGVKLORKBCBQWOCYFNHFUAIGOGAYXMLSQGJUCK");
    msg.flags = 132U;
    const char tmp_msg_0[] = {112, 49, -114, -39, 6, 121, 121, -95, -74, 124, 43, -2, -28, -26, -89, -121, 116, -84, 123, -112, -24, -8, -63, 81, -104, 64, -14, -98, -28, 116, -103, 125, 91, -58, 22, 17, -103, -98, 16, -77, -46, 36, 13, 94, -32, -38, 43, 117, -28, 107, -46, 16, -45, -111, 98, 8, 107, -104, -40, 92, 114, -6, 82, -68, 13, -21, -101, 51, -108, -103, -76, -14, -15, 86, 11, 59, -58, 87, -3, 49, -95, 119, 62, -128, 39, 77, 64, 9, -25, -5, -38, -104, 5, -25, -72, -114, -36, 0, 86, 72, -107, -61, 18, 85, 100, 26, -60, -93, 55, -4, -117, 15, -118, 56, 99, 39, -6, 59, 28, -61, 2, -31, -16, 124, -10, -9, 42, -90, 68, -10, 123, -92, -13, -114, -71, 97, 94, -94, 16, 120, -104, 80, 80, -82, 25, 109, -5, -58, 19, -58, 126, -55, -116, -89, 83, -66, 25, 120, 60, 89, -62, -56, 39, 66, -108, -29, -119, 116, -30, 73, 107, -59, 83, -27, 107};
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
    msg.setTimeStamp(0.0955671140456);
    msg.setSource(7148U);
    msg.setSourceEntity(155U);
    msg.setDestination(26766U);
    msg.setDestinationEntity(184U);
    msg.sys_src.assign("UTXCNTBZEYYFNSWDSACAQMSEHUIOJYJLYDXRWPLPAQFGPSNINWMULONQSDLGWKCKWEUPIHYHEDMGXTPYJJBQKCMDLAESVVQMRIOOBKANNZXXJOSMHCTAIOHXRKGVEFGMCCQZULDOEMBTPWPBIVFRVPYYZMUKPANWQVFIVJARECUDQTZJLXOZGQOEGWLJJVFTZBQDHRHICWGVJXSBHFLNBTUYTCARKHUG");
    msg.sys_dst.assign("HIEOFELJLCMPVXAXVPXZHANRJCCQRXAMZGODBRACPWBOEWYGGVZRBIOXGGOUJIBHMOPBXFNUVFLSVQYIMPYXNJZHVCBYUQYWRGQXDCQLRRJIZHAJTW");
    msg.flags = 157U;
    const char tmp_msg_0[] = {-12, -59, -25, -32, 58, -110, -24, 9, -98, 120, -121, 58, 102, 36, 40, -13, 93, 93, 66, 10, 124, 112, 95, -2, -102, -8, 9, 120, 97, -44, -64, 102, 110, 125, -7, -121, 3, 58, 67, 86, 85, 82, 120, 46, 29, -128, 101, -42, 116, -93, -4, 24, 108, -13, 70, -103, -9, 110, -63, -14, 52, 61, 43, -73, 23, -128, 99, -102, 35, -26, 90, 58, 67, -52, -45, 87, -11, -27, -121, 99, -54, -46, -33, -93, -28, -28, -17, -46, 15, -84, -128, -36, 83, -62, 12, 29, 123, 22, 7, 31, 122, 44, 125, 56, -121, 3, 2, 110, -69, 104, -16, 107, -64, -50, -74, -6, -104, -90, -117, -112, -127, 10, -8, 43, -79, -105, -124, 102};
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
    msg.setTimeStamp(0.0574197581144);
    msg.setSource(46226U);
    msg.setSourceEntity(19U);
    msg.setDestination(56897U);
    msg.setDestinationEntity(98U);
    msg.seq = 48589U;
    msg.value = 248U;
    msg.error.assign("XZRRKUZCFVIYNRWOOVFHVKJZNXDXPVYVZNQWXCAIFRFRCRLJEPXJDLDBLMPOHLIBZCMGYWFCATHQZXPRHTLSGEKBWMPOCHIGNBLTFCYPGHTMEUKNUNJJAYKSJRFIIWKFTVSGEQNQBCNESQWKGQIXMADQBBQXMSXPMXOYAESLOSLDGOEYU");

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
    msg.setTimeStamp(0.181541362593);
    msg.setSource(2313U);
    msg.setSourceEntity(147U);
    msg.setDestination(25357U);
    msg.setDestinationEntity(74U);
    msg.seq = 60508U;
    msg.value = 1U;
    msg.error.assign("WFAREUPSBJDPFNHUMYAGUEQQBGETKAOGBLFDCYZFDRXKVPWFQIGTNZKCYMVUMZNIBFSPEIXBWHSDLYDXBHJOOSLVAVNHWTRWLJNZFBGHNKQMIUYQEUOIXTGHZWEJSRSVPLHJMZTQFEWUIVLIQJANJOGCATDWUWKPQDSVOROGJIASCYMXCYA");

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
    msg.setTimeStamp(0.947117129476);
    msg.setSource(7336U);
    msg.setSourceEntity(103U);
    msg.setDestination(40051U);
    msg.setDestinationEntity(92U);
    msg.seq = 60318U;
    msg.value = 10U;
    msg.error.assign("GWZQDYFIMYQQLJUPNTNZZRHNFTSKDSAARJFBBNQCMIUUPLCTHRWNHQWJMCCRBGIDQWBVSPLLHHBJEJGLPNEWIEKTAGPSKKYAOKWZMKTCMRXGLFZSYVNOAIDRUPCGEJDXZZEVHTOSVCSDKBUFIPHSUKYCVMJKRUUXERCHWHUSGOIXQFLXDUQFXZFTHYQGMLKYSNNTYNOCEAOOEOPDTXLVBAADDPWJIAOVBTQBXWXJREVFMIIVY");

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
    msg.setTimeStamp(0.652478468442);
    msg.setSource(59354U);
    msg.setSourceEntity(237U);
    msg.setDestination(32769U);
    msg.setDestinationEntity(22U);
    msg.seq = 32746U;
    msg.sys.assign("HBJAFQKLDBRIVKCEJHTUMPNLLIFQRSOVEQOXEKHEXUOAASVBGLTACGMUGFQOSVYPAVCZBQMFGSGSFQADXGMYNUPXIYKJPDLFCEICEDPRXQJAWOTMURIXGVPKGMXRFHWBBZTRRXNIOTPJUSSQFZYQIAWYFFMERUZHTNBKHZHKZHBROMDUOSJCUVVWDJOXSYUHMTNWKDCHGKZEYIWWRDLL");
    msg.value = 0.121860449698;

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
    msg.setTimeStamp(0.420826026985);
    msg.setSource(19772U);
    msg.setSourceEntity(16U);
    msg.setDestination(15765U);
    msg.setDestinationEntity(95U);
    msg.seq = 3648U;
    msg.sys.assign("LSKLWEEYHVBXNSLCFTXDXWRHXOAKPXJVITALCOBFXBLZEIFHVAJKPNKIOICWENXSQBBFVYRCDTCPGMXKQZVYTDSKBNAGSRSNAYPUZOVADKRZVTHRIEDZJPKUM");
    msg.value = 0.596723928598;

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
    msg.setTimeStamp(0.477095087768);
    msg.setSource(32837U);
    msg.setSourceEntity(65U);
    msg.setDestination(180U);
    msg.setDestinationEntity(13U);
    msg.seq = 6370U;
    msg.sys.assign("QRAORSGISALEOLRFMVNOMSQTXTWVQYOMUSNJXAVUJYYKPUDWVEBKHDDNXPXN");
    msg.value = 0.409465285855;

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
    msg.setTimeStamp(0.30191024487);
    msg.setSource(28637U);
    msg.setSourceEntity(128U);
    msg.setDestination(63614U);
    msg.setDestinationEntity(232U);
    msg.seq = 54557U;
    msg.sys_dst.assign("ZXLOJCINVBQGWYCIUTWBOFVWBXMMCOMFPGFMTMKRAGCW");
    msg.timeout = 0.477323655536;

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
    msg.setTimeStamp(0.92774478732);
    msg.setSource(21404U);
    msg.setSourceEntity(147U);
    msg.setDestination(7205U);
    msg.setDestinationEntity(21U);
    msg.seq = 51075U;
    msg.sys_dst.assign("EJPSDCJUKBOHCHIQIUOYGYXAUPRIHDHWUJAVOAFGLYOKYTFFVD");
    msg.timeout = 0.0421452647413;

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
    msg.setTimeStamp(0.52976495155);
    msg.setSource(48700U);
    msg.setSourceEntity(66U);
    msg.setDestination(47472U);
    msg.setDestinationEntity(15U);
    msg.seq = 24848U;
    msg.sys_dst.assign("UFRZVGWWIJAHQPHJSKBACHZOHKWWXFOTYFOQTMGRANBWVHDUNQOEDYSANUYQNZRHZPMDRVHSFIMORXTLFIBGADXDQLILKKVK");
    msg.timeout = 0.722018614413;

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
    msg.setTimeStamp(0.895848946092);
    msg.setSource(43086U);
    msg.setSourceEntity(27U);
    msg.setDestination(54037U);
    msg.setDestinationEntity(73U);
    msg.action = 58U;
    msg.longain = 0.91156154119;
    msg.latgain = 0.486655522293;
    msg.bondthick = 3132825946U;
    msg.leadgain = 0.941433036823;
    msg.deconflgain = 0.537249100848;

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
    msg.setTimeStamp(0.0435784075921);
    msg.setSource(26361U);
    msg.setSourceEntity(9U);
    msg.setDestination(14929U);
    msg.setDestinationEntity(145U);
    msg.action = 220U;
    msg.longain = 0.86388794022;
    msg.latgain = 0.587840517147;
    msg.bondthick = 3651755076U;
    msg.leadgain = 0.865561977125;
    msg.deconflgain = 0.955310938909;

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
    msg.setTimeStamp(0.101483942846);
    msg.setSource(1478U);
    msg.setSourceEntity(35U);
    msg.setDestination(22193U);
    msg.setDestinationEntity(113U);
    msg.action = 194U;
    msg.longain = 0.363772199138;
    msg.latgain = 0.683395977919;
    msg.bondthick = 27022206U;
    msg.leadgain = 0.29261623552;
    msg.deconflgain = 0.719940407256;

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
    msg.setTimeStamp(0.689330239339);
    msg.setSource(37174U);
    msg.setSourceEntity(174U);
    msg.setDestination(49563U);
    msg.setDestinationEntity(71U);
    msg.err_mean = 0.38139497293;
    msg.dist_min_abs = 0.0480899770732;
    msg.dist_min_mean = 0.115551223554;

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
    msg.setTimeStamp(0.261022347706);
    msg.setSource(17300U);
    msg.setSourceEntity(130U);
    msg.setDestination(44243U);
    msg.setDestinationEntity(112U);
    msg.err_mean = 0.239478312848;
    msg.dist_min_abs = 0.452239890789;
    msg.dist_min_mean = 0.330817776474;

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
    msg.setTimeStamp(0.472851433228);
    msg.setSource(53080U);
    msg.setSourceEntity(20U);
    msg.setDestination(51842U);
    msg.setDestinationEntity(93U);
    msg.err_mean = 0.536087815567;
    msg.dist_min_abs = 0.590442993636;
    msg.dist_min_mean = 0.792349562955;

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
    msg.setTimeStamp(0.133559177455);
    msg.setSource(18209U);
    msg.setSourceEntity(51U);
    msg.setDestination(59509U);
    msg.setDestinationEntity(217U);
    msg.action = 59U;
    msg.lon_gain = 0.0532893123303;
    msg.lat_gain = 0.625494735168;
    msg.bond_thick = 0.75773995889;
    msg.lead_gain = 0.0850419289547;
    msg.deconfl_gain = 0.896811471905;
    msg.accel_switch_gain = 0.446594463794;
    msg.safe_dist = 0.485468053639;
    msg.deconflict_offset = 0.398922816385;
    msg.accel_safe_margin = 0.0959869655685;
    msg.accel_lim_x = 0.339134929874;

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
    msg.setTimeStamp(0.271859933996);
    msg.setSource(9091U);
    msg.setSourceEntity(79U);
    msg.setDestination(24637U);
    msg.setDestinationEntity(192U);
    msg.action = 145U;
    msg.lon_gain = 0.409645865139;
    msg.lat_gain = 0.0764610367955;
    msg.bond_thick = 0.44026129291;
    msg.lead_gain = 0.499373567355;
    msg.deconfl_gain = 0.731095540966;
    msg.accel_switch_gain = 0.0161654020601;
    msg.safe_dist = 0.441490975148;
    msg.deconflict_offset = 0.186768371128;
    msg.accel_safe_margin = 0.955137778157;
    msg.accel_lim_x = 0.117423717821;

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
    msg.setTimeStamp(0.270693782504);
    msg.setSource(20203U);
    msg.setSourceEntity(83U);
    msg.setDestination(54160U);
    msg.setDestinationEntity(138U);
    msg.action = 123U;
    msg.lon_gain = 0.952581422888;
    msg.lat_gain = 0.613158338724;
    msg.bond_thick = 0.0687995735289;
    msg.lead_gain = 0.286311141703;
    msg.deconfl_gain = 0.520797299772;
    msg.accel_switch_gain = 0.636278139884;
    msg.safe_dist = 0.169648295672;
    msg.deconflict_offset = 0.606435203717;
    msg.accel_safe_margin = 0.923979739692;
    msg.accel_lim_x = 0.708984658505;

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
    msg.setTimeStamp(0.103494418132);
    msg.setSource(13803U);
    msg.setSourceEntity(103U);
    msg.setDestination(18393U);
    msg.setDestinationEntity(144U);
    msg.type = 232U;
    msg.op = 171U;
    msg.err_mean = 0.347702028695;
    msg.dist_min_abs = 0.966817514507;
    msg.dist_min_mean = 0.682146538387;
    msg.roll_rate_mean = 0.954336767953;
    msg.time = 0.422996755439;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 76U;
    tmp_msg_0.lon_gain = 0.572989632268;
    tmp_msg_0.lat_gain = 0.660626083401;
    tmp_msg_0.bond_thick = 0.631758309123;
    tmp_msg_0.lead_gain = 0.0479918369726;
    tmp_msg_0.deconfl_gain = 0.66839019747;
    tmp_msg_0.accel_switch_gain = 0.265303585036;
    tmp_msg_0.safe_dist = 0.168028176986;
    tmp_msg_0.deconflict_offset = 0.408845269751;
    tmp_msg_0.accel_safe_margin = 0.588366769061;
    tmp_msg_0.accel_lim_x = 0.950438208133;
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
    msg.setTimeStamp(0.462733330625);
    msg.setSource(25097U);
    msg.setSourceEntity(65U);
    msg.setDestination(27293U);
    msg.setDestinationEntity(25U);
    msg.type = 220U;
    msg.op = 29U;
    msg.err_mean = 0.0446257513844;
    msg.dist_min_abs = 0.226935380456;
    msg.dist_min_mean = 0.98344845237;
    msg.roll_rate_mean = 0.993140950563;
    msg.time = 0.462866853679;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 216U;
    tmp_msg_0.lon_gain = 0.449789751376;
    tmp_msg_0.lat_gain = 0.349327339753;
    tmp_msg_0.bond_thick = 0.718723789621;
    tmp_msg_0.lead_gain = 0.259936979675;
    tmp_msg_0.deconfl_gain = 0.275043096831;
    tmp_msg_0.accel_switch_gain = 0.41778113594;
    tmp_msg_0.safe_dist = 0.919265674866;
    tmp_msg_0.deconflict_offset = 0.803820053535;
    tmp_msg_0.accel_safe_margin = 0.970306380066;
    tmp_msg_0.accel_lim_x = 0.299728912878;
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
    msg.setTimeStamp(0.290219528835);
    msg.setSource(4080U);
    msg.setSourceEntity(243U);
    msg.setDestination(23695U);
    msg.setDestinationEntity(240U);
    msg.type = 116U;
    msg.op = 13U;
    msg.err_mean = 0.612762037037;
    msg.dist_min_abs = 0.471264530173;
    msg.dist_min_mean = 0.747357815253;
    msg.roll_rate_mean = 0.912510520307;
    msg.time = 0.999816012128;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 239U;
    tmp_msg_0.lon_gain = 0.840644462368;
    tmp_msg_0.lat_gain = 0.545859171674;
    tmp_msg_0.bond_thick = 0.325550149994;
    tmp_msg_0.lead_gain = 0.379256838711;
    tmp_msg_0.deconfl_gain = 0.620624377292;
    tmp_msg_0.accel_switch_gain = 0.803886073394;
    tmp_msg_0.safe_dist = 0.281247200601;
    tmp_msg_0.deconflict_offset = 0.607052221467;
    tmp_msg_0.accel_safe_margin = 0.376075190589;
    tmp_msg_0.accel_lim_x = 0.191076569427;
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
    msg.setTimeStamp(0.9608878337);
    msg.setSource(30444U);
    msg.setSourceEntity(17U);
    msg.setDestination(24568U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.13059007441;
    msg.lon = 0.993022328296;
    msg.eta = 1982562252U;
    msg.duration = 33859U;

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
    msg.setTimeStamp(0.455935860605);
    msg.setSource(5033U);
    msg.setSourceEntity(38U);
    msg.setDestination(56546U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.774465300759;
    msg.lon = 0.731707641341;
    msg.eta = 2099122079U;
    msg.duration = 33467U;

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
    msg.setTimeStamp(0.439669267997);
    msg.setSource(34687U);
    msg.setSourceEntity(166U);
    msg.setDestination(14679U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.937455026063;
    msg.lon = 0.52131254034;
    msg.eta = 2458458476U;
    msg.duration = 38764U;

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
    msg.setTimeStamp(0.545918173312);
    msg.setSource(10344U);
    msg.setSourceEntity(251U);
    msg.setDestination(38457U);
    msg.setDestinationEntity(61U);
    msg.plan_id = 16622U;

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
    msg.setTimeStamp(0.0901193751435);
    msg.setSource(13409U);
    msg.setSourceEntity(169U);
    msg.setDestination(49908U);
    msg.setDestinationEntity(139U);
    msg.plan_id = 40429U;

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
    msg.setTimeStamp(0.463576264989);
    msg.setSource(2546U);
    msg.setSourceEntity(109U);
    msg.setDestination(57957U);
    msg.setDestinationEntity(250U);
    msg.plan_id = 29305U;

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
    msg.setTimeStamp(0.920303141325);
    msg.setSource(34162U);
    msg.setSourceEntity(114U);
    msg.setDestination(40495U);
    msg.setDestinationEntity(141U);
    msg.type = 159U;
    msg.command = 206U;
    msg.settings.assign("WJHPNYFZSZKSTHVXRVQPIMBHBXIEMOLWLZJBOWNZZGEGPRSCYXICNJSHLZFSNLQQCLMGADTGDQPWPYVACTLDBADNLOCFEOOOFZHVUKIGUUCNBTKMQACFHUISBUVWUMNRHFRZMVKXIEICQLETYFKJPJPXTWDOARYBRFJGOFZMKNEPHAENWMERATJSVOVVHQAMDXTCHPREQCJD");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 56677U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.28802345218;
    tmp_tmp_msg_0_0.lon = 0.336883749257;
    tmp_tmp_msg_0_0.eta = 1821105145U;
    tmp_tmp_msg_0_0.duration = 37851U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("YOEOVRDYDXGMRJCQGUOJSFTHNZINAAUQXPUGICMRNUWUSEIKEGXMTRVWCNNAJDQWTGRSEEPLBSANJCGSQCZPHFJKWKAGZYAZPWHMFLJSRZCRPWRDSFDBVYONAHTBDZLTXEQDKAFBDIQIOMRSHYUOZGLIUDPYMYVSCXNAJLLEIWZMNMCQUKVXXBJKZHBPUQFFKOEIHLVMZBVPIFGLCONMJUDKVVJGVXYWYPBIXTWFEPQTTOQFKHXKSTRL");

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
    msg.setTimeStamp(0.0925746277155);
    msg.setSource(62208U);
    msg.setSourceEntity(39U);
    msg.setDestination(54939U);
    msg.setDestinationEntity(74U);
    msg.type = 145U;
    msg.command = 0U;
    msg.settings.assign("LWYOUXIANKXFDKLBRYJIISQQEWAIIEDSUYXCPAXBECEKFAMNWWQSSBLMOGXUTNBUUUDBPUTWEGKCGLRFFFCTGYYRJSAMDUTTXLLTOICOZVXWHPDZVJNPPIHVZTGMQFXCGHNSRQEBOAMCMMMEKQFGDLBRVZVJBYTOCHYMWT");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 42038U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("XQDANYOPFOOVHGZBQTGODWSMBLEYBBAFEWMGGXVQHCIZLEVUTHIWHDTSANFQXYTOXVHUCPZCQTQ");

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
    msg.setTimeStamp(0.853735452535);
    msg.setSource(40499U);
    msg.setSourceEntity(190U);
    msg.setDestination(55810U);
    msg.setDestinationEntity(58U);
    msg.type = 26U;
    msg.command = 36U;
    msg.settings.assign("GAGJCKAZKHIUTVLWEELYXCZJLQAIYKBIBFKTOXYPNLMGZSYUDASUEOFTFMBSXDLGLMWRBAKJBLOHKTUIOFMFYMDCMSQVPIOWRIFBAQPXJTOYNVRSGCNNHPHRGIREPJXLYRGPRSDOHAXYPMGWDZVRUACFQVTNXD");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 50233U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.312197687414;
    tmp_tmp_msg_0_0.lon = 0.311970392469;
    tmp_tmp_msg_0_0.eta = 3196497038U;
    tmp_tmp_msg_0_0.duration = 3477U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("SNIHQUCHCUTESTQGN");

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
    msg.setTimeStamp(0.841890761338);
    msg.setSource(42724U);
    msg.setSourceEntity(206U);
    msg.setDestination(47623U);
    msg.setDestinationEntity(162U);
    msg.state = 173U;
    msg.plan_id = 29397U;
    msg.wpt_id = 98U;
    msg.settings_chk = 28828U;

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
    msg.setTimeStamp(0.741306229928);
    msg.setSource(49964U);
    msg.setSourceEntity(166U);
    msg.setDestination(18135U);
    msg.setDestinationEntity(247U);
    msg.state = 206U;
    msg.plan_id = 42243U;
    msg.wpt_id = 6U;
    msg.settings_chk = 45305U;

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
    msg.setTimeStamp(0.00422619690284);
    msg.setSource(2484U);
    msg.setSourceEntity(146U);
    msg.setDestination(57722U);
    msg.setDestinationEntity(136U);
    msg.state = 157U;
    msg.plan_id = 3630U;
    msg.wpt_id = 59U;
    msg.settings_chk = 47780U;

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
    msg.setTimeStamp(0.186692038989);
    msg.setSource(51552U);
    msg.setSourceEntity(234U);
    msg.setDestination(16588U);
    msg.setDestinationEntity(34U);
    msg.uid = 181U;
    msg.frag_number = 167U;
    msg.num_frags = 174U;
    const char tmp_msg_0[] = {36, 121, -12, -87, -80, -85, 111, 42, -44, -67, 120, -102, -59, -121, -23, 73, 66, 85, -65, -70, 9, 86, -32, -128, 90, -64, -19, 82, 92, 69, 106, -20, 21, 70, -126, 81, -106, 64, -5, -43, 106, 64, 68, -52, 96, 96, 100, 44, 59, 114, -93, -75, 36, 113, -19, 66, -108, 69, 19, -92, 21, 54, -2, -98, -51, -34, -41, -75, 17, 107, 46, -63};
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
    msg.setTimeStamp(0.818296357838);
    msg.setSource(53111U);
    msg.setSourceEntity(184U);
    msg.setDestination(35667U);
    msg.setDestinationEntity(130U);
    msg.uid = 182U;
    msg.frag_number = 247U;
    msg.num_frags = 156U;
    const char tmp_msg_0[] = {78, -78, 116, -126, -62, 27, -40, -77, -100, 61, -94, 112, 94, -24, 114, -127, 6, -101, 46, -50, 106, 124, -49, -113, 54, 13, -128, -61, 80, 50, -19, 16, 60, -85, -61, -54, 126, -31, 18, 34, -123, 66, -74, -87, -127, 97, 25, -68, -24, 35, 65, 126};
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
    msg.setTimeStamp(0.262873003873);
    msg.setSource(11035U);
    msg.setSourceEntity(91U);
    msg.setDestination(63232U);
    msg.setDestinationEntity(219U);
    msg.uid = 56U;
    msg.frag_number = 131U;
    msg.num_frags = 165U;
    const char tmp_msg_0[] = {114, 30, -77, 118, -14, -66, -123, -61, -67, -121, 74, -36, 94, 71, 16, -51, 53, -62, 94, 104, -34, 58, 5, 108, -4, 14, -119, 73, 92, -23, -37, 79, -48, -113, 76, 77, 63, 12, 77, 42, -80, -50, 87, -92, 8, 69, -47, 52, -82, -81, -108, -100, 50, -48, 14, 94, -80, 60, 112, -94, -63, 30, 80, -2, 86, -35, 110, 54, -112, -13, -50, -40, -18, 48, -38, 64, -70, -109, 111, 23, 35, 116, -80, -28, -124, -118, -62, -55, -5, 80, 49, 17, -92, 124, -1, 66, -85, 125, 39, -112, -39, -62, 77, -90, -116, -56, 19, -72, 98, 111, -120, 124, 12, 66, 124, -14, 76, 117, -50, -21, -106, 14, -121, 105, -95, -97, 33, 23, -23};
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
    msg.setTimeStamp(0.843560734311);
    msg.setSource(61966U);
    msg.setSourceEntity(223U);
    msg.setDestination(9194U);
    msg.setDestinationEntity(143U);
    msg.content_type.assign("IAMLCZCELQOCBQGKLKAPFWVSIHDRNPVVLHWTRKBPVXZQYDUHGJOPAGNUHSCYVTXKFBXDIJIDEMVFMUUDBTBBYYGLDSNUILONXJGOXTEQFTHSGEQXJONPTKXVTWAGCUBMMVWPSMVIHHJZLWEQSEVACLSZIZCCCJRHJGBRMWQNQORENKOOGRQWDDRJTXEWBMKXSSWYKZHACDNRMQUYUOPMEZJLZPGYABARPZAFIKHIXFFKUDTZTONSYW");
    const char tmp_msg_0[] = {-37, 25, -115, 115, 88, 86, 77, -40, 10, 104, 2, 61, -14, -86, 29, 73, 1, -121, -15, 66, -45, 82, -119, -15, 10, 20, -41, 39, -20, 1, -7, -71, 11, -32, -123, 105, -67, -108, -17, 5, 19, -109, -112, -86, 102, -16, -43, 99, 25, 98, -78, -40, -65, 51, 23, 34, 89, -112, 96, 34, -103, -109, -114, 14, 92, 110, 100, -75, 75, -67, 71, 13, 28, -32, 102, 34, 118, -19, -55, 20, 19, -106, -72, -87, -120, -70, 88, 86, 0, -52, -36, -98, 40, 84, -48, 11, -22, -83, -27, -91, -13, 16, 97, 57, -70, -3, -63, 1, -81, 28, 100, -47, -41, -90, -39, -17, -98, -12, 87, -73, 56, -26, 35, 97, -76, 0};
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
    msg.setTimeStamp(0.0591592435376);
    msg.setSource(35586U);
    msg.setSourceEntity(208U);
    msg.setDestination(63086U);
    msg.setDestinationEntity(27U);
    msg.content_type.assign("MGGIBSLGQSCABHJIKTDLUOGSBZUJMRCKRHKKXTIPWYSOIQAUMCCFZCWDVFAHZGOIQADRXOLTV");
    const char tmp_msg_0[] = {64, -69, 11, -95, -69, 86, 42, 4, -73, -86, 73, 64, -110, 45, -59, 93, -82, -70, 109, -37, 100, 110, 68, -37, 62, 97, -40, 97, 79, -59, 105, 61, -15, 68, 31, -32, -74, 68, 26, 18, 108, -56, 83, -83, -83, 122, 9, 4, 118, 55, -58, 88, -20, -44, -42, -92, 105, -73, 104, 120, 15, -113, -102, 78, -37, -55, -21};
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
    msg.setTimeStamp(0.631993238381);
    msg.setSource(54495U);
    msg.setSourceEntity(40U);
    msg.setDestination(30279U);
    msg.setDestinationEntity(141U);
    msg.content_type.assign("FMIQNGWFVLFGORWBYINKETDJDOBUPYFNABEULTBSYASLSMCDNGZIJQOLLXXKWRVLJKQSKCUMMJETCOMXGSHZUIXAJWPVZBHEGWHXBRAKBNOGFOITVYYJLRKVRZSAHFCXSWPTTCOQTETUMIXWYPTAXSUQVBQLKE");
    const char tmp_msg_0[] = {88, -75, 36, -27, -125, 71, 25, -22, 85, -46, -106, -127, -99, -56, 96, 99, 87, 63, 125, -68, 82, 23, 49, -16, -66, 22, -29, 1, -122, -5, -127, 55, -58, 27, 72, 26, -100, 111, 119, -37, -91, -88, 15, 31, 48, 48, -94, 99, -9, 59, -30, -95, 8, 73, -25, -15, -99, 65, -100, 26, 33, -17, -108, -128, -120, -53, -106, 52, 86, -45, 15, -85, -110, 79, -103, 14, -48, -68, 87, -84, 16, -32, 29, 21, -76, 94, 68, 126, -31, 81, -51, 18, -2, 53, 64, 104, 22, 53, 102, 119, -128};
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
    msg.setTimeStamp(0.428619788228);
    msg.setSource(45244U);
    msg.setSourceEntity(126U);
    msg.setDestination(15111U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.100810552353);
    msg.setSource(21937U);
    msg.setSourceEntity(83U);
    msg.setDestination(60216U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.0122589353648);
    msg.setSource(6636U);
    msg.setSourceEntity(189U);
    msg.setDestination(65329U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.103707324063);
    msg.setSource(57897U);
    msg.setSourceEntity(204U);
    msg.setDestination(62215U);
    msg.setDestinationEntity(25U);
    msg.target = 1986U;
    msg.bearing = 0.848783938004;
    msg.elevation = 0.0961126270407;

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
    msg.setTimeStamp(0.706615258875);
    msg.setSource(31567U);
    msg.setSourceEntity(42U);
    msg.setDestination(29146U);
    msg.setDestinationEntity(119U);
    msg.target = 10665U;
    msg.bearing = 0.68223236203;
    msg.elevation = 0.00183184065292;

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
    msg.setTimeStamp(0.505776100859);
    msg.setSource(48763U);
    msg.setSourceEntity(71U);
    msg.setDestination(60508U);
    msg.setDestinationEntity(67U);
    msg.target = 14908U;
    msg.bearing = 0.213909803984;
    msg.elevation = 0.0933188186159;

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
    msg.setTimeStamp(0.365952144356);
    msg.setSource(21914U);
    msg.setSourceEntity(134U);
    msg.setDestination(29295U);
    msg.setDestinationEntity(17U);
    msg.target = 24854U;
    msg.x = 0.199357138391;
    msg.y = 0.61044312177;
    msg.z = 0.666693515435;

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
    msg.setTimeStamp(0.0797321655019);
    msg.setSource(35380U);
    msg.setSourceEntity(220U);
    msg.setDestination(31221U);
    msg.setDestinationEntity(20U);
    msg.target = 10719U;
    msg.x = 0.919774977798;
    msg.y = 0.343896864283;
    msg.z = 0.429120884086;

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
    msg.setTimeStamp(0.54326833595);
    msg.setSource(1254U);
    msg.setSourceEntity(53U);
    msg.setDestination(51022U);
    msg.setDestinationEntity(5U);
    msg.target = 50033U;
    msg.x = 0.179719663386;
    msg.y = 0.810978926852;
    msg.z = 0.883052061551;

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
    msg.setTimeStamp(0.459853941299);
    msg.setSource(4796U);
    msg.setSourceEntity(64U);
    msg.setDestination(22761U);
    msg.setDestinationEntity(176U);
    msg.target = 5075U;
    msg.lat = 0.991198056227;
    msg.lon = 0.856919360565;
    msg.z_units = 4U;
    msg.z = 0.151429142784;

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
    msg.setTimeStamp(0.172179314562);
    msg.setSource(59544U);
    msg.setSourceEntity(168U);
    msg.setDestination(47131U);
    msg.setDestinationEntity(117U);
    msg.target = 41744U;
    msg.lat = 0.759316249937;
    msg.lon = 0.501963910601;
    msg.z_units = 133U;
    msg.z = 0.652195127236;

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
    msg.setTimeStamp(0.920186789848);
    msg.setSource(21338U);
    msg.setSourceEntity(106U);
    msg.setDestination(3863U);
    msg.setDestinationEntity(138U);
    msg.target = 4523U;
    msg.lat = 0.590164755864;
    msg.lon = 0.387424010489;
    msg.z_units = 239U;
    msg.z = 0.669434385167;

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
    msg.setTimeStamp(0.841120113714);
    msg.setSource(50588U);
    msg.setSourceEntity(139U);
    msg.setDestination(59592U);
    msg.setDestinationEntity(95U);
    msg.locale.assign("XKIISZMYDFIWPVFKPJBLDJMH");
    const char tmp_msg_0[] = {16, -110, -41, -41, -25, 44, -43, 101, -63, -82, 52, 120, -17, -34, 87, -6, -11, 49, -98, -25, -42, 70, -41, 29, -121, 117, 27, 51, -70, 65, 86, -21, 32, -39, 75, 10, -47, -78, 113, -14, -118, 101, 11, 23, 45, 113, -73, 102, -125, 59, 19, -99, -45, 125, -3, 58, 102, 106, -85, 123, 32, 91, -6, -76, 90, -71, -104, 87, -79, 79, -17, 13, -124, 13, 87, 3, 88, 83, 41, -57, -95, -42, 71, -91, -5, 41, 98, 16, 119, 111};
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
    msg.setTimeStamp(0.799080169057);
    msg.setSource(37919U);
    msg.setSourceEntity(249U);
    msg.setDestination(31282U);
    msg.setDestinationEntity(102U);
    msg.locale.assign("BPHZICXQYRTJOINJWOLJIUJTNKSBHRDNLEQIIWLRHUAHMKSFLWPPEZDKZFISFKDFUVECXVBSVGCJVXPFPWWLSSGEBMKAUNHKXBDATPHCGXRBAVFBDIGDERUMPZOLQKGNEUQCFGOAIZXOJFUNBCA");
    const char tmp_msg_0[] = {-100, 8, 60, 98, -51, -41, -31, -128, 8, 38, 56, -109, 42, 27, 76, 34, -90, 66, -4, 75, 125, 63, 12, -113, 104, 14, -51, -127, -78, -90, -60, -106, -93, -57, -105, -22, 113, 2, -96, 43, 120, -12, 50, -128, -110, 116, -26, -19, 24, 80, -63, -25, 114, -27, -28, -41, 25, 38, -6, -59, -70, -16, -4, -30, -117, -36, -121, -114, -80, -116, -7, -34, -33, 109, 79, 8, 0};
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
    msg.setTimeStamp(0.244027847051);
    msg.setSource(46138U);
    msg.setSourceEntity(114U);
    msg.setDestination(40137U);
    msg.setDestinationEntity(104U);
    msg.locale.assign("APSOZWUPFHCCXZCKDHMVUFLYCCUQXZIMXKFPCXRZGVVYVZVANUKBLEDWKGSSEITWDITAMBXTGWZMOBYWIJMSTYJFLKBTEOXWOLJODPSHUOLDPVHNOCEYAMTXRCPKNYZFCRLNDWWJIIUSSJNHYQQUSRXJHKFLQGMZNFAVFQRTECWGOFQGANTZOESIRDBYQQGLJQEBMDRBBALRUXPHVYABUMENZGTBRXKARINGF");
    const char tmp_msg_0[] = {-10, 79, -21, 95, 121, -35, -73, -46, 86, 125, 0, 103, -27, -92, 85, -61, 15, -78, -56, -82, 90, 67, -62, 18, 0, -96, 41, 90, -90, -33, 122, -87, -92, 61, -113, -28, -91, 5, 70, -60, 77, -19, 16, 95, 48, -39, -39, 118, 88, -35, 83, -20, -26, -48, 22, -10, -96, -115, 42, -104, 1, 112, 118, 94, -24, -61, 125, 41, -101, -86, 122, -10, 117, 118, -92, -87, -2, 87, 120, -116, -66, -55, -20, -123, -82, 3, -2, 39, 67, 53, -89, 28, -6, 26, 56, -114, 65, -11, -47, -17, -6, 37, -123, -121, 43, -36, -79, 4, 57, 62, 107, -10, -41, 8, -111, -33, 18, -63, 37, -103, -33, 79, 49, 42, 90, -115, 48, 0, -51, 35, -73, 57, 122, 42, -2, 116, -11, -31, -10, 16, 21, -76, -4, -76, -74, 8, -7, -106, -6, 52, 64, 57, 64, -51, 61, 90, -27, 94, 74, 82, 46, -126, 44, -35, 69, 87, 31, -106, 34, 7, -18, -90, -5, 62, -117, -47, 78, 96, -107, -110, -105, 30, 32, -20, -54, 83, 87, 37, -109, 13, -128, 74, 37, 118, -54, -90, 106, -18, 38, 91, 68, -9, -31, -47, 123, -111, -116, 124, 17, 34, -52, -95, -30, 56, -30, -59, -51, 6, 56, 63, 57, 92, -3, 77};
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
    msg.setTimeStamp(0.592360468747);
    msg.setSource(16154U);
    msg.setSourceEntity(12U);
    msg.setDestination(64286U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.657828360788);
    msg.setSource(13785U);
    msg.setSourceEntity(122U);
    msg.setDestination(56909U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.615528582132);
    msg.setSource(20765U);
    msg.setSourceEntity(159U);
    msg.setDestination(46225U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.5909656599);
    msg.setSource(16370U);
    msg.setSourceEntity(194U);
    msg.setDestination(17056U);
    msg.setDestinationEntity(80U);
    msg.camid = 125U;
    msg.x = 25752U;
    msg.y = 28165U;

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
    msg.setTimeStamp(0.805696281994);
    msg.setSource(69U);
    msg.setSourceEntity(153U);
    msg.setDestination(15625U);
    msg.setDestinationEntity(30U);
    msg.camid = 253U;
    msg.x = 54732U;
    msg.y = 48026U;

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
    msg.setTimeStamp(0.278233476573);
    msg.setSource(44235U);
    msg.setSourceEntity(217U);
    msg.setDestination(14716U);
    msg.setDestinationEntity(202U);
    msg.camid = 17U;
    msg.x = 55468U;
    msg.y = 24385U;

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
    msg.setTimeStamp(0.651005458402);
    msg.setSource(38236U);
    msg.setSourceEntity(181U);
    msg.setDestination(49110U);
    msg.setDestinationEntity(205U);
    msg.camid = 94U;
    msg.x = 20847U;
    msg.y = 52290U;

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
    msg.setTimeStamp(0.355834467942);
    msg.setSource(64227U);
    msg.setSourceEntity(121U);
    msg.setDestination(5490U);
    msg.setDestinationEntity(100U);
    msg.camid = 85U;
    msg.x = 28728U;
    msg.y = 17579U;

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
    msg.setTimeStamp(0.937433850363);
    msg.setSource(16423U);
    msg.setSourceEntity(71U);
    msg.setDestination(11334U);
    msg.setDestinationEntity(251U);
    msg.camid = 32U;
    msg.x = 16358U;
    msg.y = 410U;

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
    msg.setTimeStamp(0.505359562463);
    msg.setSource(53195U);
    msg.setSourceEntity(59U);
    msg.setDestination(13342U);
    msg.setDestinationEntity(30U);
    msg.tracking = 77U;
    msg.lat = 0.494191861512;
    msg.lon = 0.863633966021;
    msg.x = 0.504831844758;
    msg.y = 0.864185314306;
    msg.z = 0.16650092432;

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
    msg.setTimeStamp(0.0547775332579);
    msg.setSource(25475U);
    msg.setSourceEntity(126U);
    msg.setDestination(52701U);
    msg.setDestinationEntity(13U);
    msg.tracking = 112U;
    msg.lat = 0.465665217398;
    msg.lon = 0.635717328082;
    msg.x = 0.204755953035;
    msg.y = 0.90253068389;
    msg.z = 0.0659214601905;

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
    msg.setTimeStamp(0.566442847365);
    msg.setSource(9834U);
    msg.setSourceEntity(193U);
    msg.setDestination(36262U);
    msg.setDestinationEntity(140U);
    msg.tracking = 78U;
    msg.lat = 0.206465923162;
    msg.lon = 0.816728522809;
    msg.x = 0.368767348382;
    msg.y = 0.431464030468;
    msg.z = 0.70740573637;

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
    msg.setTimeStamp(0.503691316934);
    msg.setSource(58303U);
    msg.setSourceEntity(56U);
    msg.setDestination(38583U);
    msg.setDestinationEntity(71U);
    msg.target.assign("MGTRRNNYAIRCFHBTZCOZW");
    msg.lbearing = 0.891405922731;
    msg.lelevation = 0.131635883181;
    msg.bearing = 0.657163464808;
    msg.elevation = 0.768050161256;
    msg.phi = 0.811817885058;
    msg.theta = 0.850203224589;
    msg.psi = 0.507963884523;
    msg.accuracy = 0.674171338396;

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
    msg.setTimeStamp(0.565735784211);
    msg.setSource(1506U);
    msg.setSourceEntity(153U);
    msg.setDestination(56505U);
    msg.setDestinationEntity(214U);
    msg.target.assign("XEBJAFCLUUSOGODUCPRLMKKKRHUVBDLWOUVQVINLCWHIQBXNJGXPEZXAWETEYYJIULGPUBWWPJZYRWOYYTJXHVNPUGHDZASINAKPMONRVCRNHIZDOEZQFUSQRCGPNTIUOMBFQRMCFZTBEJJMAYTACGDSTSRKQLHTSQRNVCTXDNLIKJY");
    msg.lbearing = 0.0699159281881;
    msg.lelevation = 0.442277463898;
    msg.bearing = 0.208626582324;
    msg.elevation = 0.649219742635;
    msg.phi = 0.700450806868;
    msg.theta = 0.207148728576;
    msg.psi = 0.661157902093;
    msg.accuracy = 0.825166348828;

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
    msg.setTimeStamp(0.105757514452);
    msg.setSource(30482U);
    msg.setSourceEntity(34U);
    msg.setDestination(24976U);
    msg.setDestinationEntity(20U);
    msg.target.assign("ZUEZBCSCOLFBODYDOMIKBTFJZMUPYRCGARS");
    msg.lbearing = 0.974982000161;
    msg.lelevation = 0.820246829303;
    msg.bearing = 0.954604754684;
    msg.elevation = 0.548837578556;
    msg.phi = 0.594063125399;
    msg.theta = 0.042661678354;
    msg.psi = 0.626580605921;
    msg.accuracy = 0.121325987142;

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
    msg.setTimeStamp(0.324119643431);
    msg.setSource(11927U);
    msg.setSourceEntity(227U);
    msg.setDestination(46960U);
    msg.setDestinationEntity(98U);
    msg.target.assign("GBKGMWSRLAJXNXSPSOOOHLHNRBLSDCTIMHRRCOEFBELIPCYXJQWXPCVQQGMZRWUFTVSOZIALFZOHGWOQTBQZFHEPYEEPVQJVZHWNKHMSAXKBCEUSYTZHDATAYIRGJUKOQGPBNBBVYYOPJWNPDYJUHTJRADIPUMKEVVADYITGPFWELLGXEBDFZCDMDK");
    msg.x = 0.420898642726;
    msg.y = 0.875555622984;
    msg.z = 0.618219290047;
    msg.n = 0.2302173594;
    msg.e = 0.0897646614605;
    msg.d = 0.832734978916;
    msg.phi = 0.447830344143;
    msg.theta = 0.768678521042;
    msg.psi = 0.177860018458;
    msg.accuracy = 0.157922594328;

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
    msg.setTimeStamp(0.244163733239);
    msg.setSource(46174U);
    msg.setSourceEntity(116U);
    msg.setDestination(59682U);
    msg.setDestinationEntity(246U);
    msg.target.assign("VILEUPPGVFKDBTRDPNONYHYNIZDXZSQOBMAHPYSUNAJTSPTPEUSTDFEBFNHKWTQHHBIJZWKHGIHLJQRUXSOWWAX");
    msg.x = 0.519477249125;
    msg.y = 0.400363233228;
    msg.z = 0.159907688466;
    msg.n = 0.855084091982;
    msg.e = 0.731553906758;
    msg.d = 0.713879387967;
    msg.phi = 0.362182709819;
    msg.theta = 0.0444915704209;
    msg.psi = 0.418808546847;
    msg.accuracy = 0.408272418994;

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
    msg.setTimeStamp(0.427056800184);
    msg.setSource(11894U);
    msg.setSourceEntity(139U);
    msg.setDestination(22163U);
    msg.setDestinationEntity(201U);
    msg.target.assign("GWPWKDSNODRZIRNVRQKYJLSNBPJHDCMVXZEUOYFKRWMSSDGVHTGDIDWXAFZQEUCFCCEYQNFEPHUCAMINUTHGFRTBYMLWBFQMTZBAMVBLMKEUIOHVDJURNYVRTBCQGJPLAFFIIOLLGRFJYSQEHNBYELPNOVXVLVIGWSDCQSPZOGXJQVAAKUEBCWXRKZXWCMJTIOGKHKOPETKXXQGULIPTHIYKHBUS");
    msg.x = 0.400236303524;
    msg.y = 0.977627371503;
    msg.z = 0.0524272244323;
    msg.n = 0.27099951028;
    msg.e = 0.556088148463;
    msg.d = 0.2229187433;
    msg.phi = 0.491248641044;
    msg.theta = 0.472612837653;
    msg.psi = 0.753196356228;
    msg.accuracy = 0.109135113433;

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
    msg.setTimeStamp(0.96553589032);
    msg.setSource(19712U);
    msg.setSourceEntity(66U);
    msg.setDestination(6351U);
    msg.setDestinationEntity(221U);
    msg.target.assign("USXZZCHFHYFCLKDLRTCSFWGQHYJKIFNSMNSVUUBIGRYZVJQTRQHJZO");
    msg.lat = 0.474945708534;
    msg.lon = 0.403248748559;
    msg.z_units = 69U;
    msg.z = 0.0103224880221;
    msg.accuracy = 0.157015767421;

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
    msg.setTimeStamp(0.15692201767);
    msg.setSource(56542U);
    msg.setSourceEntity(223U);
    msg.setDestination(20579U);
    msg.setDestinationEntity(11U);
    msg.target.assign("DWACAIPWFROCSCEMXHMFTTMDFDEWXJHJCOJKQMDURRHKEABAGSBWBTBIWPBNDORILBPARTXXWLFJGQAIVVENUQLODZXYTCYLTUYROOSQKOGVLNCKLPDY");
    msg.lat = 0.922982182365;
    msg.lon = 0.816118329535;
    msg.z_units = 146U;
    msg.z = 0.468887188383;
    msg.accuracy = 0.687387943594;

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
    msg.setTimeStamp(0.257715358456);
    msg.setSource(2712U);
    msg.setSourceEntity(88U);
    msg.setDestination(5761U);
    msg.setDestinationEntity(100U);
    msg.target.assign("KBIJLBTWWHFQKRUZOBRIONCHINRUPTWZYGKNVBQREBLJLKEDECCVDKZAYHKIHJOHRDVHGSNZHWQKCPKAXANSHYSVDHVLFUFMSANTSFPUAQWWWGLWGUYTSTGVUZSNFZLJCNYLVPVFPLZLPXSARXDZCVUDODGGOQXINREPMBOJMXQWIFRIOYJBDMK");
    msg.lat = 0.171617164844;
    msg.lon = 0.325333221865;
    msg.z_units = 233U;
    msg.z = 0.358827048959;
    msg.accuracy = 0.0220658422007;

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
    msg.setTimeStamp(0.606514266063);
    msg.setSource(46209U);
    msg.setSourceEntity(97U);
    msg.setDestination(21343U);
    msg.setDestinationEntity(200U);
    msg.name.assign("XCQQPOJSTIGJLCLDXXFCQDUHPNMEIWQOYOZPOKMRHKFOYWVHANEYZECDSKPPVLGIMURFERVQKDSZTBMJZTZGCZOGNJCLNFMVZKGELSPIIMUYMGRLTIWAGANOBJDYRTWCDWYHTDBVNKMEORDKNRNIKXBYAK");
    msg.lat = 0.508426762775;
    msg.lon = 0.809733420257;
    msg.z = 0.534534076844;
    msg.z_units = 140U;

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
    msg.setTimeStamp(0.974243546578);
    msg.setSource(12187U);
    msg.setSourceEntity(248U);
    msg.setDestination(116U);
    msg.setDestinationEntity(106U);
    msg.name.assign("HOUQQAACCIKIAINFLFGGTNFBOBIRAUTDCEHHUKCJBYONJDVRDRJHKWKSDYZYLQMZTIZSSPUWQHLFDELCPRJMFSGSEJWTWNMEJAXYZOOFHCMVXYLSGELNXFMUVESOUMHTQZC");
    msg.lat = 0.800247676271;
    msg.lon = 0.010626859791;
    msg.z = 0.00339724826343;
    msg.z_units = 72U;

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
    msg.setTimeStamp(0.216169873555);
    msg.setSource(28241U);
    msg.setSourceEntity(56U);
    msg.setDestination(50436U);
    msg.setDestinationEntity(139U);
    msg.name.assign("KGEWVJDTABMAVSERNLIKDMIGFEGXQRMKEQCPHUCVFLYRKFHZSOTJEYPHJDHVDQZOCGHBHZZVMGNXBBBVOOQNXCDTISGQYPYAAJJVZNYXNKTZPWLLLRKEUTQXLOYMNOSQKJTNXWRPGLRJNXSFPVZAXDUCPUCRWPEJTIINOTUUIIQLUORMEMHFPPSUMMQEIJGJOWBDHYIBTACBGAYWLRFVFNWKYDWE");
    msg.lat = 0.855986639994;
    msg.lon = 0.306950188246;
    msg.z = 0.158726383375;
    msg.z_units = 115U;

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
    msg.setTimeStamp(0.600473182787);
    msg.setSource(8978U);
    msg.setSourceEntity(32U);
    msg.setDestination(52326U);
    msg.setDestinationEntity(0U);
    msg.op = 49U;

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
    msg.setTimeStamp(0.934646400666);
    msg.setSource(33180U);
    msg.setSourceEntity(46U);
    msg.setDestination(58134U);
    msg.setDestinationEntity(132U);
    msg.op = 189U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("KQAFHZBHXFMJPUNXIHRNJVNMCQDIBHWPJZQYEFD");
    tmp_msg_0.lat = 0.0217443782745;
    tmp_msg_0.lon = 0.502038219379;
    tmp_msg_0.z = 0.673222553076;
    tmp_msg_0.z_units = 18U;
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
    msg.setTimeStamp(0.560290143853);
    msg.setSource(29807U);
    msg.setSourceEntity(3U);
    msg.setDestination(34546U);
    msg.setDestinationEntity(66U);
    msg.op = 45U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("NVPURPTAAEOOLEZIRBHFLDMKSOWJBOCKKYZZUYOJPVQZFQVSIJRJFSACNLSLNDOLVTXTFXREDHIYYTCHZXDQYRKCPXMMPZQCSSIPGGJMDHDVOTHEDKGGQKBXYUCN");
    tmp_msg_0.lat = 0.757227028873;
    tmp_msg_0.lon = 0.291911300658;
    tmp_msg_0.z = 0.554772197221;
    tmp_msg_0.z_units = 231U;
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
    msg.setTimeStamp(0.219250452488);
    msg.setSource(55271U);
    msg.setSourceEntity(174U);
    msg.setDestination(14163U);
    msg.setDestinationEntity(38U);
    msg.value = 0.435135668733;
    msg.type = 130U;

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
    msg.setTimeStamp(0.177266044592);
    msg.setSource(16484U);
    msg.setSourceEntity(133U);
    msg.setDestination(22043U);
    msg.setDestinationEntity(64U);
    msg.value = 0.507729012284;
    msg.type = 129U;

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
    msg.setTimeStamp(0.7454779263);
    msg.setSource(2862U);
    msg.setSourceEntity(39U);
    msg.setDestination(22553U);
    msg.setDestinationEntity(65U);
    msg.value = 0.433669238224;
    msg.type = 76U;

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
    msg.setTimeStamp(0.0481948629278);
    msg.setSource(5918U);
    msg.setSourceEntity(244U);
    msg.setDestination(42846U);
    msg.setDestinationEntity(171U);
    msg.value = 0.142668679211;

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
    msg.setTimeStamp(0.197875713675);
    msg.setSource(10481U);
    msg.setSourceEntity(186U);
    msg.setDestination(24500U);
    msg.setDestinationEntity(109U);
    msg.value = 0.754160882825;

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
    msg.setTimeStamp(0.984955627554);
    msg.setSource(5622U);
    msg.setSourceEntity(129U);
    msg.setDestination(24622U);
    msg.setDestinationEntity(209U);
    msg.value = 0.0696157716596;

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
    msg.setTimeStamp(0.519451283769);
    msg.setSource(29508U);
    msg.setSourceEntity(56U);
    msg.setDestination(12382U);
    msg.setDestinationEntity(57U);
    msg.timestamp_last_service = 0.142470292267;
    msg.time_next_service = 0.959269419592;
    msg.time_motor_next_service = 0.62929216783;
    msg.time_idle_ground = 0.174070098101;
    msg.time_idle_air = 0.653821143535;
    msg.time_idle_water = 0.98842758299;
    msg.time_idle_underwater = 0.883842955632;
    msg.time_idle_unknown = 0.983524806038;
    msg.time_motor_ground = 0.39110152425;
    msg.time_motor_air = 0.619539665963;
    msg.time_motor_water = 0.559257848161;
    msg.time_motor_underwater = 0.61079367151;
    msg.time_motor_unknown = 0.173253829935;
    msg.rpm_min = -31507;
    msg.rpm_max = 22753;
    msg.depth_max = 0.22297478911;

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
    msg.setTimeStamp(0.244163421799);
    msg.setSource(5750U);
    msg.setSourceEntity(217U);
    msg.setDestination(44866U);
    msg.setDestinationEntity(149U);
    msg.timestamp_last_service = 0.43883252648;
    msg.time_next_service = 0.594815733901;
    msg.time_motor_next_service = 0.508952729335;
    msg.time_idle_ground = 0.249823974854;
    msg.time_idle_air = 0.977540277346;
    msg.time_idle_water = 0.324904927099;
    msg.time_idle_underwater = 0.401089842895;
    msg.time_idle_unknown = 0.381633280335;
    msg.time_motor_ground = 0.271141658869;
    msg.time_motor_air = 0.0173361112676;
    msg.time_motor_water = 0.373223077698;
    msg.time_motor_underwater = 0.248059556193;
    msg.time_motor_unknown = 0.668739475181;
    msg.rpm_min = -12990;
    msg.rpm_max = -22782;
    msg.depth_max = 0.827334067768;

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
    msg.setTimeStamp(0.851931704536);
    msg.setSource(63478U);
    msg.setSourceEntity(48U);
    msg.setDestination(14377U);
    msg.setDestinationEntity(19U);
    msg.timestamp_last_service = 0.574301604831;
    msg.time_next_service = 0.581547161103;
    msg.time_motor_next_service = 0.233033557519;
    msg.time_idle_ground = 0.30429254676;
    msg.time_idle_air = 0.718094036081;
    msg.time_idle_water = 0.628886171117;
    msg.time_idle_underwater = 0.0547178232704;
    msg.time_idle_unknown = 0.804032432836;
    msg.time_motor_ground = 0.0526091045723;
    msg.time_motor_air = 0.485366181727;
    msg.time_motor_water = 0.737735937784;
    msg.time_motor_underwater = 0.622886682651;
    msg.time_motor_unknown = 0.33069659826;
    msg.rpm_min = -16159;
    msg.rpm_max = -8437;
    msg.depth_max = 0.692539206314;

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
    msg.setTimeStamp(0.99023606109);
    msg.setSource(23233U);
    msg.setSourceEntity(75U);
    msg.setDestination(46445U);
    msg.setDestinationEntity(73U);
    msg.severity = 73U;
    msg.text.assign("NKSFRAIDULGQJYAIXYRIJDBYDMBFJAIHXGBSECKNTCFHJXYYWKYMRNYPHGEEHFRXTRFQBLFGRECCROKYTCVVHMDPJBXPHNUQKAOKCJWXLISTSZMPXBOYQLSTSIWAFQBXOGAWZWEWKYZOFPTJUHOBCIDKUPDAZJGVLTUCZUMHKZVLDERJCUPOIGMFNNELQEQWVMWTEAUVEXWL");

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
    msg.setTimeStamp(0.112647028638);
    msg.setSource(52543U);
    msg.setSourceEntity(231U);
    msg.setDestination(33301U);
    msg.setDestinationEntity(204U);
    msg.severity = 224U;
    msg.text.assign("UKWWRUSXQNZTTPVKFWGDVBLSXFSEUXIADRHEBIAMTXGCESCVOJIAKYMYCOQZFZYZGCXTBWCPENWEDQNBWRTTYBANCJIEDLMPOBOYNSVTOVUPVGQMQGAVHRBXZKXJMOOXDHKIIIFMNYWGFI");

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
    msg.setTimeStamp(0.240243131791);
    msg.setSource(479U);
    msg.setSourceEntity(27U);
    msg.setDestination(56850U);
    msg.setDestinationEntity(77U);
    msg.severity = 143U;
    msg.text.assign("BTZCIWMJACURTZRGQWIKNKULSORSVMCGQFIAEPWJUZKKCELDURUZIQZCGNANPVXVCDFFKOSAYUEHAYRHGBOPDKGJQMGITBFFVNHFOLQZYEENSBNYHONGZTACPRAWBQNKHWQVYSMLEGQBTZJFKTXVLJVDUGKMELWIZDPSPWDTEIXUMBPSCBRDUXGDJVJLJFPQDYVLFOOSFPXWROYCOCXARQJYEHMOHVARXMXTLSEUYBDHSYBWKNIZNWLTXHIXT");

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
    msg.setTimeStamp(0.203928630291);
    msg.setSource(15197U);
    msg.setSourceEntity(108U);
    msg.setDestination(6632U);
    msg.setDestinationEntity(61U);
    msg.channel = 51;
    msg.value = -287009250;
    msg.gain = 13U;

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
    msg.setTimeStamp(0.187592581691);
    msg.setSource(57019U);
    msg.setSourceEntity(3U);
    msg.setDestination(45186U);
    msg.setDestinationEntity(183U);
    msg.channel = 17;
    msg.value = 1960641283;
    msg.gain = 223U;

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
    msg.setTimeStamp(0.263732558757);
    msg.setSource(50123U);
    msg.setSourceEntity(181U);
    msg.setDestination(57988U);
    msg.setDestinationEntity(202U);
    msg.channel = -37;
    msg.value = -1393285276;
    msg.gain = 49U;

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
    msg.setTimeStamp(0.89846269251);
    msg.setSource(21330U);
    msg.setSourceEntity(102U);
    msg.setDestination(15915U);
    msg.setDestinationEntity(63U);
    msg.ch01 = 0.725796445185;
    msg.ch02 = 0.851534152324;
    msg.ch03 = 0.714523959246;
    msg.ch04 = 0.183155547731;
    msg.ch05 = 0.943506582721;
    msg.ch06 = 0.661779875459;
    msg.ch07 = 0.107459499182;
    msg.ch08 = 0.132598270878;
    msg.ch09 = 0.689561653296;
    msg.ch10 = 0.867780820076;
    msg.ch11 = 0.483712229929;
    msg.ch12 = 0.438288107716;
    msg.ch13 = 0.955282828017;
    msg.ch14 = 0.869637322456;
    msg.ch15 = 0.331557135392;
    msg.ch16 = 0.472702026539;

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
    msg.setTimeStamp(0.0885514665288);
    msg.setSource(24450U);
    msg.setSourceEntity(105U);
    msg.setDestination(60972U);
    msg.setDestinationEntity(31U);
    msg.ch01 = 0.694152985752;
    msg.ch02 = 0.368776178368;
    msg.ch03 = 0.298392548626;
    msg.ch04 = 0.96504252917;
    msg.ch05 = 0.692022160691;
    msg.ch06 = 0.612063566122;
    msg.ch07 = 0.0876907145503;
    msg.ch08 = 0.876625591699;
    msg.ch09 = 0.94001297606;
    msg.ch10 = 0.724073688669;
    msg.ch11 = 0.643229282595;
    msg.ch12 = 0.494100267067;
    msg.ch13 = 0.236500643636;
    msg.ch14 = 0.372296487757;
    msg.ch15 = 0.287666362608;
    msg.ch16 = 0.774171218288;

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
    msg.setTimeStamp(0.817906833875);
    msg.setSource(32003U);
    msg.setSourceEntity(30U);
    msg.setDestination(7772U);
    msg.setDestinationEntity(230U);
    msg.ch01 = 0.279070073884;
    msg.ch02 = 0.537670883711;
    msg.ch03 = 0.938539946272;
    msg.ch04 = 0.271838284954;
    msg.ch05 = 0.909504326735;
    msg.ch06 = 0.513461665139;
    msg.ch07 = 0.326595288184;
    msg.ch08 = 0.121806190051;
    msg.ch09 = 0.476887850338;
    msg.ch10 = 0.323653894633;
    msg.ch11 = 0.386805688859;
    msg.ch12 = 0.0901078996611;
    msg.ch13 = 0.919317785114;
    msg.ch14 = 0.408653017865;
    msg.ch15 = 0.620119843507;
    msg.ch16 = 0.690592936591;

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
    msg.setTimeStamp(0.43930749587);
    msg.setSource(32800U);
    msg.setSourceEntity(99U);
    msg.setDestination(18414U);
    msg.setDestinationEntity(169U);
    msg.value = 0.750831019355;

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
    msg.setTimeStamp(0.626337659758);
    msg.setSource(50391U);
    msg.setSourceEntity(130U);
    msg.setDestination(9445U);
    msg.setDestinationEntity(211U);
    msg.value = 0.726638266321;

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
    msg.setTimeStamp(0.00195656945062);
    msg.setSource(54706U);
    msg.setSourceEntity(226U);
    msg.setDestination(1688U);
    msg.setDestinationEntity(251U);
    msg.value = 0.902327518686;

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
    msg.setTimeStamp(0.328332426542);
    msg.setSource(9184U);
    msg.setSourceEntity(224U);
    msg.setDestination(29500U);
    msg.setDestinationEntity(13U);
    msg.op = 233U;
    msg.lat = 0.595800263715;
    msg.lon = 0.697788989513;
    msg.height = 0.65651852682;
    msg.depth = 0.181031088277;
    msg.alt = 0.592737251104;

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
    msg.setTimeStamp(0.154852083083);
    msg.setSource(6385U);
    msg.setSourceEntity(95U);
    msg.setDestination(18945U);
    msg.setDestinationEntity(138U);
    msg.op = 159U;
    msg.lat = 0.225118838104;
    msg.lon = 0.187260022058;
    msg.height = 0.940018984691;
    msg.depth = 0.172439494243;
    msg.alt = 0.144416048631;

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
    msg.setTimeStamp(0.140018991087);
    msg.setSource(10724U);
    msg.setSourceEntity(227U);
    msg.setDestination(44193U);
    msg.setDestinationEntity(201U);
    msg.op = 179U;
    msg.lat = 0.0278372042877;
    msg.lon = 0.40125761935;
    msg.height = 0.859602248544;
    msg.depth = 0.125305409619;
    msg.alt = 0.292364619405;

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
    msg.setTimeStamp(0.827628754326);
    msg.setSource(54590U);
    msg.setSourceEntity(91U);
    msg.setDestination(44434U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.356781459088;
    msg.lon = 0.877550095886;
    msg.z = 0.34119389524;
    msg.z_units = 197U;
    msg.speed = 0.506413291417;
    msg.bearing = 0.865057368384;
    msg.width = 0.546359153296;
    msg.length = 0.998456721643;
    msg.flags = 226U;

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
    msg.setTimeStamp(0.0875384448794);
    msg.setSource(5608U);
    msg.setSourceEntity(176U);
    msg.setDestination(15379U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.274655289902;
    msg.lon = 0.536548100682;
    msg.z = 0.422846674893;
    msg.z_units = 144U;
    msg.speed = 0.355815668083;
    msg.bearing = 0.591529754502;
    msg.width = 0.092196369763;
    msg.length = 0.323523630876;
    msg.flags = 61U;

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
    msg.setTimeStamp(0.852463907018);
    msg.setSource(61056U);
    msg.setSourceEntity(34U);
    msg.setDestination(49469U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.947530180575;
    msg.lon = 0.0939224238388;
    msg.z = 0.65909446855;
    msg.z_units = 146U;
    msg.speed = 0.415036464533;
    msg.bearing = 0.372328237208;
    msg.width = 0.78899309694;
    msg.length = 0.132026565715;
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
