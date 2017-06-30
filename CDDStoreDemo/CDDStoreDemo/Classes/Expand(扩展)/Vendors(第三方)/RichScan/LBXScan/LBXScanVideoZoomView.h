//
//  LBXScanVideoZoomView.h
//  testSlider
//
//  Created by csc on 16/3/19.
//  Copyright © 2016年 csc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LBXScanVideoZoomView : UIView

/**
 @brief 控件值变化
 */
@property (nonatomic, copy) void (^block)(float value);

- (void)setMaximunValue:(CGFloat)value;
@end
