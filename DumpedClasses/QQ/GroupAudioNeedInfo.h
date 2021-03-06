//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LaunchThirdAppDelegate.h"
#import "MulMemSelBusiProcessDelegate.h"

@class NSMutableDictionary, NSString;

@interface GroupAudioNeedInfo : NSObject <MulMemSelBusiProcessDelegate, LaunchThirdAppDelegate>
{
    NSMutableDictionary *_addDiscussMemParam;
}

+ (id)GetInstance;
@property(retain, nonatomic) NSMutableDictionary *addDiscussMemParam; // @synthesize addDiscussMemParam=_addDiscussMemParam;
- (_Bool)isComeBackToGroupChatVideo;
- (id)getPersonalUserSummaryController:(id)arg1;
- (id)getGroupCardViewController:(id)arg1;
- (id)uinsNotInDiscuss:(id)arg1 cacaInfos:(id)arg2;
- (_Bool)hasMultPstnBill;
- (id)getPstnConfig:(unsigned long long)arg1;
- (_Bool)isLtPstnEnable;
- (void)httpRequest:(id)arg1 success:(CDUnknownBlockType)arg2 faild:(CDUnknownBlockType)arg3;
- (void)onLaunchCompleted:(_Bool)arg1;
- (_Bool)launchApp:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)isAppInstalled:(id)arg1;
- (void)removeContactHeadImage:(id)arg1;
- (void)setContactHeadImage:(id)arg1 withContainer:(id)arg2 withSize:(struct CGSize)arg3 withFont:(id)arg4;
- (_Bool)isNickWithOpenID:(id)arg1;
- (id)getFixedPstnString:(id)arg1 withPx:(double)arg2 withFont:(id)arg3;
- (id)getUinWithMobilePhone:(id)arg1;
- (id)getMobilePhoneWithUIN:(unsigned long long)arg1;
- (id)getNickWithPhoneCode:(id)arg1 withNationCode:(id)arg2;
- (id)getNickWithOpenID:(id)arg1;
- (id)getNickWithNewStyleOpenID:(id)arg1;
- (id)getNickWithOldStyleOpenId:(id)arg1;
- (id)getPhoneCodeFromOpenID:(id)arg1;
- (void)getOpenIDFromTinyID:(id)arg1;
- (void)getTinyIDFromOpenID:(id)arg1;
- (void)sendStructuredXMLMessage:(id)arg1 msgTargetType:(int)arg2 withMsg:(id)arg3 compatibilityText:(id)arg4;
- (void)AppendTipToMsg:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3 content:(id)arg4 JustInDB:(_Bool)arg5;
- (void)AppendTipToMsgDB:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3 content:(id)arg4;
- (void)AppendCloseMsgToMsgDB:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (void)AppendHRConfMsg:(unsigned long long)arg1;
- (void)AppendNotifyMsg:(int)arg1 fromUin:(unsigned long long)arg2 relationType:(int)arg3 businessType:(int)arg4 relationID:(unsigned long long)arg5 interval:(unsigned long long)arg6;
- (int)groupAssistantPolicyForGroup:(id)arg1;
- (void)pushController:(id)arg1 animated:(_Bool)arg2;
- (id)getUserSummaryController:(unsigned long long)arg1 groupUin:(unsigned long long)arg2;
- (struct stGroupMsgInfo)getLastGroupVerifyMsgType;
- (_Bool)isAdminOfGroup:(id)arg1 withUpdate:(_Bool)arg2;
- (id)getautoGroupMemberNickName:(id)arg1 memberUin:(id)arg2;
- (id)getFriendNickName:(id)arg1;
- (id)getGroupMemberNickName:(id)arg1 memberUin:(id)arg2;
- (void)regetGroupMember:(id)arg1;
- (id)getGroupName:(id)arg1;
- (_Bool)getDisturbMode;
- (void)createDiscussAndBeginMultiAudio;
- (_Bool)DataReportOpKey:(id)arg1 opName:(id)arg2 reserve:(id)arg3;
- (void)isMediaServiceAvaliable:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getImage:(id)arg1;
- (id)getDefaultImage:(id)arg1;
- (_Bool)sendWupBuffer:(char *)arg1 cmd:(char *)arg2 seq:(int *)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5;
- (int)getSeq;
- (id)getSelfUin;
- (id)getMemberRemarkName:(long long)arg1 memberUin:(id)arg2;
- (id)getNickName:(id)arg1;
- (_Bool)isFriend:(id)arg1;
- (void)changeDisucussName:(unsigned long long)arg1 withNewName:(id)arg2;
- (void)goToChatViewControllerFormTroop:(id)arg1;
- (void)jumpFromQQOfficeConferenceToNewDiscussAio:(unsigned long long)arg1;
- (void)jumpFromQQOfficeConferenceToNewDiscussAioWithTransition:(unsigned long long)arg1;
- (void)quitDiscussGroup:(long long)arg1;
- (_Bool)updateDiscussInfo:(long long)arg1;
- (int)getDiscussGroupMaxMemberNum:(long long)arg1;
- (int)getDiscussGroupMemberNum:(long long)arg1;
- (id)getDiscussMemberList:(long long)arg1;
- (struct stDisscussGroupInfo)getGroupInfo:(long long)arg1;
- (id)getDiscussGroupName:(long long)arg1;
- (id)getCurrentDiscussGroupUin;
- (id)getDiscussGroupList;
- (void)insertDiscussMemberArray:(long long)arg1 insertMemberArray:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addDiscussMemWithParam:(id)arg1;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (void)onBusinessProcessCancelMulMemSelector:(id)arg1 currentViewControllerClass:(id)arg2 selectedMember:(id)arg3;
- (void)jumpToUserSummary:(id)arg1;
- (void)jumpToDiscussGroupAddNewMem:(id)arg1 ipNoAnswer:(id)arg2 pstnMember:(id)arg3 source:(unsigned long long)arg4;
- (void)jumpToGroupAIO:(id)arg1;
- (void)jumpToDiscussGroupAIO:(id)arg1;
- (void)jumpToDiscussManageView:(id)arg1;
- (id)GetTopView;
- (id)GetvisibleView;
- (void)SendMsg:(int)arg1 fromUin:(id)arg2 withGroupUin:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

