//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UIButton, UILabel;

@interface CTForeignHotelRoomLoadStateView : UIView
{
    UIActivityIndicatorView *loadingView_;
    UILabel *titleLabel_;
    UILabel *iconView_;
    UIButton *retryButton_;
    int _type;
    id <CTForeignHotelRoomLoadStateViewDelegate> _delegate;
}

@property(nonatomic) __weak id <CTForeignHotelRoomLoadStateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (double)getHeight;
- (void)reloadRoomList:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 type:(int)arg2;

@end

