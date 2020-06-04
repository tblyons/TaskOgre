/*******************************************************************************
 * Copyright (c) 2020, Timothy Lyons
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH
 * REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR
 * OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 *
 * https://opensource.org/licenses/ISC
 ******************************************************************************/

#include "cli/Application.hpp"

#include <iostream>

auto main(int argc, char const* argv[]) -> int
try {
  ogre::Application app(PROJECT_NAME, PROJECT_VERSION);
  return app.run(argc, argv);
} catch (std::exception& err) {
  std::cerr << "Error: " << err.what() << std::endl;
  return -1;
}
