//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIButton;

@interface APMidasToast : NSObject
{
    NSString *text;
    UIButton *contentView;
    double duration;
}

+ (void)showWithText:(id)arg1 img:(id)arg2 duration:(double)arg3;
+ (void)showAtTopWithText:(id)arg1;
+ (void)showAtBottomWithText:(id)arg1;
+ (void)showWithText:(id)arg1 bottomOffset:(double)arg2 duration:(double)arg3;
+ (void)showWithText:(id)arg1 bottomOffset:(double)arg2;
+ (void)showWithText:(id)arg1 topOffset:(double)arg2 duration:(double)arg3;
+ (void)showWithText:(id)arg1 topOffset:(double)arg2;
+ (void)showWithText:(id)arg1 duration:(double)arg2;
+ (void)showWithText:(id)arg1;
- (void).cxx_destruct;
- (void)rotateForDirections;
- (void)showFromBottomOffset:(double)arg1;
- (void)showFromTopOffset:(double)arg1;
- (void)show;
- (void)hideAnimation;
- (void)showAnimation;
- (void)setDuration:(double)arg1;
- (void)toastTaped:(id)arg1;
- (void)dismissToast;
- (void)deviceOrientationDidChanged:(id)arg1;
- (id)initWithText:(id)arg1 img:(id)arg2;
- (id)initWithText:(id)arg1;
- (void)dealloc;

@end
