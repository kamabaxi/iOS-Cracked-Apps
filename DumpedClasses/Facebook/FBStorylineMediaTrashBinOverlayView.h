//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBStorylineTrashBinView, NSString, UILabel;

@interface FBStorylineMediaTrashBinOverlayView : UIView
{
    FBStorylineTrashBinView *_trashBin;
    UILabel *_textLabel;
    NSString *_normalText;
    unsigned long long _mode;
    NSString *_canNotDeleteText;
}

@property(copy, nonatomic) NSString *canNotDeleteText; // @synthesize canNotDeleteText=_canNotDeleteText;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect deletionAreaFrame;
- (void)layoutSubviews;
- (void)showCannotDeleteMode:(_Bool)arg1;
- (void)showNormalMode:(_Bool)arg1;
- (void)showDeletionMode:(_Bool)arg1;
- (void)hide:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
