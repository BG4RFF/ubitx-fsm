/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "objs.h"
#include "cat_task.h"
#include "display_task.h"
#include "ui_tasks.h"
#include "keyer_task.h"
#include "rig.h"

CatTask catTask;
DisplayTask displayTask;
ButtonInputTask fbuttonTask(A2);
ButtonInputTask pttTask(A3);
EncoderTask encoderTask(A0, A1);
UiTask uiTask;
KeyerTask keyerTask(A6);

Rig rig;

