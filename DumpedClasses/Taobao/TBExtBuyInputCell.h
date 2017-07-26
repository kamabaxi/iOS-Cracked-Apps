//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBExtBuyBaseCell.h"

#import "UITextFieldDelegate.h"

@class NSString, TBTradeInputModel, UIButton, UILabel, UITextField;

@interface TBExtBuyInputCell : TBExtBuyBaseCell <UITextFieldDelegate>
{
    TBTradeInputModel *_model;
    UILabel *_titleLabel;
    UIButton *_indicateButton;
    UITextField *_textField;
}

@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIButton *indicateButton; // @synthesize indicateButton=_indicateButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak TBTradeInputModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)showContactsPicker:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)bindData:(id)arg1;
- (void)layoutSubviews;
- (void)initCell;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
