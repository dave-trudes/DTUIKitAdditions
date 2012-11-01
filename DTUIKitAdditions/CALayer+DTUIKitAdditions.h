// CALayer+DTUIKitAdditions.h
// 
// Copyright (c) 2012 David Renoldner <hello@davetrudes.com>
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

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

typedef NS_ENUM(NSInteger, DTCALayerFlipAnimationDirection) {
    DTCALayerFlipAnimationDirectionFromLeft,
    DTCALayerFlipAnimationDirectionFromRight
};
//http://www.mentalfaculty.com/mentalfaculty/Blog/Entries/2010/9/22_FLIPPIN_OUT_AT_NSVIEW.html
@interface CALayer (DTUIKitAdditions_FlipAnimations)

- (void)flipToLayer:(CALayer *)toLayer withDirection:(DTCALayerFlipAnimationDirection)direction; //scaleFactor = 1.0f, duration = 1.0f, completion = nil

- (void)flipToLayer:(CALayer *)toLayer withDirection:(DTCALayerFlipAnimationDirection)direction completion:(void (^)())completion; //scaleFactor = 1.0f, duration = 1.0f

- (void)flipToLayer:(CALayer *)toLayer withDuration:(NSTimeInterval)duration direction:(DTCALayerFlipAnimationDirection)direction completion:(void (^)())completion; //scaleFactor = 1.0f

- (void)flipToLayer:(CALayer *)toLayer withDuration:(NSTimeInterval)duration scaleFactor:(float)scaleFactor direction:(DTCALayerFlipAnimationDirection)direction completion:(void (^)())completion;

@end
