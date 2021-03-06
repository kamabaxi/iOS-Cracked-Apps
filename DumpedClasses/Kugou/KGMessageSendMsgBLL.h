//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KGMessageCenterKuqunGroupChatBLL, KGMessageCenterKuqunPrivateChatBLL;

@interface KGMessageSendMsgBLL : NSObject
{
    KGMessageCenterKuqunGroupChatBLL *_groupChatBLL;
    KGMessageCenterKuqunPrivateChatBLL *_privateChatBLL;
}

+ (id)shareInstance;
@property(retain, nonatomic) KGMessageCenterKuqunPrivateChatBLL *privateChatBLL; // @synthesize privateChatBLL=_privateChatBLL;
@property(retain, nonatomic) KGMessageCenterKuqunGroupChatBLL *groupChatBLL; // @synthesize groupChatBLL=_groupChatBLL;
- (void).cxx_destruct;
- (id)getTheBriefDescriptionWithEntity:(id)arg1 withMessage:(id)arg2;
- (id)uid;
- (id)changeNewMessage:(id)arg1 andMessage:(id)arg2;
- (id)makeModelWithBigMessageDic:(id)arg1 andSubMessageDic:(id)arg2 isSuccess:(_Bool)arg3 isFromPrivateChat:(_Bool)arg4 uid:(id)arg5;
- (id)generateTempFailReswithTag:(id)arg1 isPrivateChat:(_Bool)arg2;
- (id)getMessageDicWithModel:(id)arg1 andisPrivateChat:(_Bool)arg2;
- (_Bool)insertNewDistrictBetweenOldId:(id)arg1 andNewId:(id)arg2 withTag:(id)arg3 withwithNullableUid:(id)arg4;
- (id)creatKGMessageHomePageTagEntityWithisGroupChat:(_Bool)arg1 andDic:(id)arg2 andUploadStatus:(unsigned long long)arg3;
- (void)insertFailGroupChatToListDBWithUid:(id)arg1 res:(id)arg2 message:(id)arg3 tag:(id)arg4 minid:(id)arg5 isGroupChat:(_Bool)arg6 imageUrl:(id)arg7 title:(id)arg8;
- (void)insertSuccessGroupChatToListDBWithUid:(id)arg1 res:(id)arg2 message:(id)arg3 tag:(id)arg4 minid:(id)arg5 failmsgid:(long long)arg6 isGroupChat:(_Bool)arg7 imageUrl:(id)arg8 title:(id)arg9;
- (void)insertSendingGroupChatToListDBWithUid:(id)arg1 res:(id)arg2 message:(id)arg3 tag:(id)arg4 minid:(id)arg5 failmsgid:(long long)arg6 isGroupChat:(_Bool)arg7 imageUrl:(id)arg8 title:(id)arg9;
- (id)reSendGroupChat:(id)arg1 withGroupid:(id)arg2 withTag:(id)arg3 withModel:(id)arg4 withMinid:(id)arg5 imageUrl:(id)arg6 title:(id)arg7 andError:(id *)arg8;
- (id)uploadGroupChatPicFail:(id)arg1 withModel:(id)arg2 withTag:(id)arg3 withMinid:(id)arg4 isFail:(_Bool)arg5 imageUrl:(id)arg6 title:(id)arg7;
- (id)sendGroupChat:(id)arg1 withGroupid:(id)arg2 withTag:(id)arg3 withModel:(id)arg4 withMinid:(id)arg5 imageUrl:(id)arg6 title:(id)arg7 andError:(id *)arg8;
- (id)groupChatChangeStatusWithUid:(id)arg1 withModel:(id)arg2 withStatus:(unsigned long long)arg3 withMinid:(id)arg4 imageUrl:(id)arg5 title:(id)arg6;
- (id)groupChatCreatTmpModelWithUid:(id)arg1 withMessage:(id)arg2 withTag:(id)arg3 withMinid:(id)arg4 imageUrl:(id)arg5 title:(id)arg6;
- (id)reUploadPrivateChat:(id)arg1 withTuid:(id)arg2 withModel:(id)arg3 withMinid:(id)arg4 withError:(id *)arg5 imageUrl:(id)arg6 title:(id)arg7;
- (id)uploadPrivateChatPicFail:(id)arg1 withModel:(id)arg2 withTag:(id)arg3 withMinid:(id)arg4 imageUrl:(id)arg5 title:(id)arg6;
- (id)uploadPrivateChat:(id)arg1 withTuid:(id)arg2 withModel:(id)arg3 withMinid:(id)arg4 withError:(id *)arg5 imageUrl:(id)arg6 title:(id)arg7;
- (id)privateChatChangeStatusWithUid:(id)arg1 withModel:(id)arg2 withStatus:(unsigned long long)arg3 withMinid:(id)arg4 imageUrl:(id)arg5 title:(id)arg6;
- (id)privateChatCreatTmpModelWithUid:(id)arg1 withMessage:(id)arg2 withTag:(id)arg3 withMinid:(id)arg4 imageUrl:(id)arg5 title:(id)arg6;

@end

