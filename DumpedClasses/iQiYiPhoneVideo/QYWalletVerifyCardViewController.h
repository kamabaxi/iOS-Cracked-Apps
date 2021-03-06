//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYCommonViewController.h"

#import "IQYDataLoadManagerDelegate-Protocol.h"
#import "UIFadeAlertDeletage-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class IQYPwfBankCheckIdentityManager, IQYPwfBankRouteInfo, IQYURLManager, NSMutableArray, NSString, UIButton, UITableView, UITextField, UIView;

@interface QYWalletVerifyCardViewController : QYCommonViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, IQYDataLoadManagerDelegate, UIFadeAlertDeletage>
{
    UITableView *_tableView;
    UIView *_headerView;
    NSMutableArray *_infoAry;
    double _contentSizeHeight;
    IQYPwfBankRouteInfo *_bankRouteInfo;
    NSString *_bankCardNum;
    NSString *_mcnt;
    IQYPwfBankCheckIdentityManager *_bankCheckIdentityManager;
    UITextField *_tfName;
    UITextField *_tfIDCard;
    UITextField *_tfSecurityCode;
    UITextField *_tfValidity;
    UITextField *_tfPhone;
    UIButton *_btnNext;
    UIButton *_agreeBtn;
    IQYURLManager *_urlManager;
    struct CGPoint _offSet;
}

@property(retain, nonatomic) IQYURLManager *urlManager; // @synthesize urlManager=_urlManager;
@property(retain, nonatomic) UIButton *agreeBtn; // @synthesize agreeBtn=_agreeBtn;
@property(retain, nonatomic) UIButton *btnNext; // @synthesize btnNext=_btnNext;
@property(retain, nonatomic) UITextField *tfPhone; // @synthesize tfPhone=_tfPhone;
@property(retain, nonatomic) UITextField *tfValidity; // @synthesize tfValidity=_tfValidity;
@property(retain, nonatomic) UITextField *tfSecurityCode; // @synthesize tfSecurityCode=_tfSecurityCode;
@property(retain, nonatomic) UITextField *tfIDCard; // @synthesize tfIDCard=_tfIDCard;
@property(retain, nonatomic) UITextField *tfName; // @synthesize tfName=_tfName;
@property(retain, nonatomic) IQYPwfBankCheckIdentityManager *bankCheckIdentityManager; // @synthesize bankCheckIdentityManager=_bankCheckIdentityManager;
@property(copy, nonatomic) NSString *mcnt; // @synthesize mcnt=_mcnt;
@property(retain, nonatomic) NSString *bankCardNum; // @synthesize bankCardNum=_bankCardNum;
@property(retain, nonatomic) IQYPwfBankRouteInfo *bankRouteInfo; // @synthesize bankRouteInfo=_bankRouteInfo;
@property(nonatomic) double contentSizeHeight; // @synthesize contentSizeHeight=_contentSizeHeight;
@property(nonatomic) struct CGPoint offSet; // @synthesize offSet=_offSet;
@property(retain, nonatomic) NSMutableArray *infoAry; // @synthesize infoAry=_infoAry;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (long long)textFieldStringLength;
- (id)tfValidityString;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)dataLoadManagerFailed:(id)arg1;
- (void)dataLoadManagerFinished:(id)arg1;
- (void)bankAgreementTap:(id)arg1;
- (void)userAgreementTap:(id)arg1;
- (void)agreeMentAction:(id)arg1;
- (void)nextAction:(id)arg1;
- (void)hideKeyboard;
- (void)setTF:(id)arg1 title:(id)arg2;
- (void)cellLLine:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)createUserInfoCell:(id)arg1 indexPath:(id)arg2;
- (id)createCardInfoCell:(id)arg1 indexPath:(id)arg2;
- (void)userAgreementContentView:(id)arg1 btn:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initVerifyCardViewController:(id)arg1 bankCardNum:(id)arg2 extendParams:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

