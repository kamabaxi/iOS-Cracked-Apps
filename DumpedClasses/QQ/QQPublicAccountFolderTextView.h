//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQPublicAccountFolderCellContentView.h"

@class CALayer, PAEmotionLabel;

@interface QQPublicAccountFolderTextView : QQPublicAccountFolderCellContentView
{
    PAEmotionLabel *_textContentLabel;
    CALayer *_bgLayer;
}

+ (int)getViewHeight:(id)arg1;
+ (id)getTextContentParseResult:(id)arg1;
+ (double)getTextContentHeight:(id)arg1;
@property(retain, nonatomic) CALayer *bgLayer; // @synthesize bgLayer=_bgLayer;
@property(retain, nonatomic) PAEmotionLabel *textContentLabel; // @synthesize textContentLabel=_textContentLabel;
- (void)layoutContentView:(id)arg1;
- (void)generateSubviews;
- (void)dealloc;

@end
