//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "CTFlightPassengerWarningViewDelegate.h"

@class CTFlightOrderChildrenBookingAdultTicketView, CTFlightOrderPassengerCellViewModel, CTRootViewController, NSIndexPath, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UIView;

@interface CTFlightOrderPassengerCell : UITableViewCell <CTFlightPassengerWarningViewDelegate>
{
    CTRootViewController *_parentVC;
    id <CTFlightOrderPassengerCellDelegate> _delegate;
    NSIndexPath *_indexPath;
    UIButton *_buttonLeftDel;
    UIButton *_buttonTrigger;
    UILabel *_labelName;
    UILabel *_labelHighFrequency;
    UILabel *_labelSelf;
    UILabel *_labelNameTitle;
    UILabel *_labelCardType;
    UILabel *_labelCardNumber;
    UILabel *_labelFrequentFlyerCard1;
    UILabel *_labelFrequentFlyerCard1Number;
    UILabel *_labelFrequentFlyerCard2;
    UILabel *_labelFrequentFlyerCard2Number;
    UIImageView *_imageViewArrow;
    UIView *_viewRightDelete;
    UIButton *_buttonRightDel;
    UILabel *_labelUnSupportHint;
    UIView *_viewUnsupportBG;
    UILabel *_labelUnSupportHint2;
    UIButton *_flightInfmButton;
    CTFlightOrderChildrenBookingAdultTicketView *_childrenBookingAdultTicketView;
    NSLayoutConstraint *_childrenBookingAdultTicketViewCons_Top;
    NSLayoutConstraint *_childrenBookingAdultTicketViewCons_Height;
    UIView *_beforeCorrectView;
    CTFlightOrderPassengerCellViewModel *_passengerCellViewModel;
    UIView *_bottomLineView;
    NSLayoutConstraint *_bottomLineHeightConstraint;
    NSLayoutConstraint *_bottomLineWidthConstraint;
}

+ (double)setupCellSubView:(id)arg1 withViewModel:(id)arg2 showFrequentFlyerCard:(_Bool)arg3 policyFlag:(int)arg4 phoneDesc:(id)arg5;
@property(retain, nonatomic) NSLayoutConstraint *bottomLineWidthConstraint; // @synthesize bottomLineWidthConstraint=_bottomLineWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomLineHeightConstraint; // @synthesize bottomLineHeightConstraint=_bottomLineHeightConstraint;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) CTFlightOrderPassengerCellViewModel *passengerCellViewModel; // @synthesize passengerCellViewModel=_passengerCellViewModel;
@property(retain, nonatomic) UIView *beforeCorrectView; // @synthesize beforeCorrectView=_beforeCorrectView;
@property(nonatomic) __weak NSLayoutConstraint *childrenBookingAdultTicketViewCons_Height; // @synthesize childrenBookingAdultTicketViewCons_Height=_childrenBookingAdultTicketViewCons_Height;
@property(nonatomic) __weak NSLayoutConstraint *childrenBookingAdultTicketViewCons_Top; // @synthesize childrenBookingAdultTicketViewCons_Top=_childrenBookingAdultTicketViewCons_Top;
@property(retain, nonatomic) CTFlightOrderChildrenBookingAdultTicketView *childrenBookingAdultTicketView; // @synthesize childrenBookingAdultTicketView=_childrenBookingAdultTicketView;
@property(retain, nonatomic) UIButton *flightInfmButton; // @synthesize flightInfmButton=_flightInfmButton;
@property(retain, nonatomic) UILabel *labelUnSupportHint2; // @synthesize labelUnSupportHint2=_labelUnSupportHint2;
@property(retain, nonatomic) UIView *viewUnsupportBG; // @synthesize viewUnsupportBG=_viewUnsupportBG;
@property(retain, nonatomic) UILabel *labelUnSupportHint; // @synthesize labelUnSupportHint=_labelUnSupportHint;
@property(retain, nonatomic) UIButton *buttonRightDel; // @synthesize buttonRightDel=_buttonRightDel;
@property(retain, nonatomic) UIView *viewRightDelete; // @synthesize viewRightDelete=_viewRightDelete;
@property(retain, nonatomic) UIImageView *imageViewArrow; // @synthesize imageViewArrow=_imageViewArrow;
@property(retain, nonatomic) UILabel *labelFrequentFlyerCard2Number; // @synthesize labelFrequentFlyerCard2Number=_labelFrequentFlyerCard2Number;
@property(retain, nonatomic) UILabel *labelFrequentFlyerCard2; // @synthesize labelFrequentFlyerCard2=_labelFrequentFlyerCard2;
@property(retain, nonatomic) UILabel *labelFrequentFlyerCard1Number; // @synthesize labelFrequentFlyerCard1Number=_labelFrequentFlyerCard1Number;
@property(retain, nonatomic) UILabel *labelFrequentFlyerCard1; // @synthesize labelFrequentFlyerCard1=_labelFrequentFlyerCard1;
@property(retain, nonatomic) UILabel *labelCardNumber; // @synthesize labelCardNumber=_labelCardNumber;
@property(retain, nonatomic) UILabel *labelCardType; // @synthesize labelCardType=_labelCardType;
@property(retain, nonatomic) UILabel *labelNameTitle; // @synthesize labelNameTitle=_labelNameTitle;
@property(retain, nonatomic) UILabel *labelSelf; // @synthesize labelSelf=_labelSelf;
@property(retain, nonatomic) UILabel *labelHighFrequency; // @synthesize labelHighFrequency=_labelHighFrequency;
@property(retain, nonatomic) UILabel *labelName; // @synthesize labelName=_labelName;
@property(retain, nonatomic) UIButton *buttonTrigger; // @synthesize buttonTrigger=_buttonTrigger;
@property(retain, nonatomic) UIButton *buttonLeftDel; // @synthesize buttonLeftDel=_buttonLeftDel;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak id <CTFlightOrderPassengerCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak CTRootViewController *parentVC; // @synthesize parentVC=_parentVC;
- (void).cxx_destruct;
- (void)setEnableEdit:(_Bool)arg1;
- (void)didTapToCloseActionAtIndex:(long long)arg1;
- (void)setRealRemoveButtonHidden:(_Bool)arg1;
- (void)showRefundChangeDetailAtIndex:(long long)arg1;
- (void)onSelectPassengerTicketAtIndex:(long long)arg1;
- (void)triggerButtonDidTapped:(id)arg1;
- (void)tryDeletePassenger:(id)arg1;
- (void)shiftSpecialSubViewRight:(double)arg1;
- (void)shiftSpecialSubViewLeft:(double)arg1;
- (void)setBigScreenAdapt;
- (void)setShowBottomLine:(_Bool)arg1 lineWidth:(double)arg2 color:(id)arg3;
- (void)initChildrenBookingAdultTicketView;
- (void)initView;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

