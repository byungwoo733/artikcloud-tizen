/*
 * Copyright (c) 2016 Samsung Electronics Co., Ltd All Rights Reserved
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Tag.h
 *
 * Tag information.
 */

#ifndef _Tag_H_
#define _Tag_H_


#include <string>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief Tag information.
 *
 */

class Tag : public Object {
public:
	/*! \brief Constructor.
	 */
	Tag();
	Tag(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~Tag();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Tag Name.
	 */
	std::string getName();

	/*! \brief Set Tag Name.
	 */
	void setName(std::string  name);
	/*! \brief Get Is Category.
	 */
	bool getIsCategory();

	/*! \brief Set Is Category.
	 */
	void setIsCategory(bool  isCategory);

private:
	std::string name;
	bool isCategory;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _Tag_H_ */