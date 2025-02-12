/*
 * Copyright (c) 2021, the SerenityOS developers.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <LibWeb/DOM/ProcessingInstruction.h>
#include <LibWeb/Layout/TextNode.h>

namespace Web::DOM {

ProcessingInstruction::ProcessingInstruction(Document& document, const String& data, const String& target)
    : CharacterData(document, NodeType::PROCESSING_INSTRUCTION_NODE, data)
    , m_target(target)
{
}

}
