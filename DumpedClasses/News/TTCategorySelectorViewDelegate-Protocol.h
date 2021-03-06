//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, TTCategory, TTCategorySelectorView, UIButton;

@protocol TTCategorySelectorViewDelegate <NSObject>
- (void)categorySelectorView:(TTCategorySelectorView *)arg1 selectCategory:(TTCategory *)arg2;

@optional
- (double)categorySelectorTextGlowSize;
- (NSArray *)categorySelectorTextGlowColors;
- (NSArray *)categorySelectorTextColors;
- (void)categorySelectorView:(TTCategorySelectorView *)arg1 closeCategoryView:(_Bool)arg2;
- (void)categorySelectorView:(TTCategorySelectorView *)arg1 didClickSearchButton:(UIButton *)arg2;
- (void)categorySelectorView:(TTCategorySelectorView *)arg1 didClickExpandButton:(UIButton *)arg2;
@end

