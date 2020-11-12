/*
 * Copyright 2016 WebAssembly Community Group participants
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef WABT_WAST_PARSER_LEXER_SHARED_H_
#define WABT_WAST_PARSER_LEXER_SHARED_H_

#include <cstdarg>

namespace wabt {

class ErrorHandler;
struct Location;
class WastLexer;

// TODO(binji): Move this somewhere else.
void WastFormatError(ErrorHandler*,
                     const Location*,
                     WastLexer*,
                     const char* format,
                     va_list);

}  // namespace wabt

#endif /* WABT_WAST_PARSER_LEXER_SHARED_H_ */
