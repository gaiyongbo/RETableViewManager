//
// REFloatItem.h
// RETableViewManager
//
// Copyright (c) 2013 Roman Efimov (https://github.com/romaonthego)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#import "RETableViewItem.h"

@interface REFloatItem : RETableViewItem

@property (assign, readwrite, nonatomic) float value;
@property (assign, readwrite, nonatomic) CGFloat sliderWidth;
@property (copy, readwrite, nonatomic) void (^sliderValueChangeHandler)(REFloatItem *item);

+ (id)itemWithTitle:(NSString *)title value:(float)value sliderValueChangeHandler:(void(^)(REFloatItem *item))sliderValueChangeHandler;
+ (id)itemWithTitle:(NSString *)title value:(float)value;

- (id)initWithTitle:(NSString *)title value:(float)value sliderValueChangeHandler:(void(^)(REFloatItem *item))sliderValueChangeHandler;
- (id)initWithTitle:(NSString *)title value:(float)value;

@end
