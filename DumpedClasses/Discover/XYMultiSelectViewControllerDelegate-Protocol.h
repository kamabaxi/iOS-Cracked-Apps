//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIButton, XYMultiSelectViewController;

@protocol XYMultiSelectViewControllerDelegate <NSObject>

@optional
- (void)multiSelectViewController:(XYMultiSelectViewController *)arg1 confirmButtonClickFinalSelectedIndexs:(NSArray *)arg2;
- (void)multiSelectViewController:(XYMultiSelectViewController *)arg1 confirmButtonClickFinalSelected:(NSArray *)arg2;
- (void)multiSelectViewController:(XYMultiSelectViewController *)arg1 guideButtonClick:(UIButton *)arg2;
- (void)multiSelectViewController:(XYMultiSelectViewController *)arg1 cancelButtonClick:(UIButton *)arg2;
@end
