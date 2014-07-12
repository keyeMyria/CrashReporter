/*

CrashLogDateChooser.h ... Crash log selector by date.
Copyright (C) 2009  KennyTM~ <kennytm@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#import <UIKit/UIKit.h>

@class CrashLogGroup;

@interface CrashLogDateChooser : UITableViewController
@property(nonatomic, retain) CrashLogGroup *group;
@end

/* vim: set ft=objc ff=unix sw=4 ts=4 tw=80 expandtab: */
