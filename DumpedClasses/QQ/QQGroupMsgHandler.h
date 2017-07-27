//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseMsgHandler.h"

@interface QQGroupMsgHandler : QQBaseMsgHandler
{
}

- (void)processForPRPFoldFlag:(const struct Elem *)arg1 toModel:(id)arg2;
- (id)parseGroupFileMsg:(struct ObjMsg *)arg1 Model:(id)arg2;
- (id)parseTransElement:(const struct TransElem *)arg1 msgType:(int *)arg2;
- (id)parseTransElement:(const struct TransElem *)arg1 msgType:(int *)arg2 toModel:(id)arg3;
- (id)handleMsg:(const Msg_f948e9b8 *)arg1;
- (void)parseReplySourceMsgElem:(const struct RichText *)arg1 toModel:(id)arg2;
- (void)processGroupTopicMsg:(id)arg1;
- (_Bool)parseMsgBody:(const MsgBody_ba4fc016 *)arg1 msgType:(int)arg2 c2cCmd:(int)arg3 toModel:(id)arg4;
- (_Bool)parseMsgHead:(const struct MsgHead *)arg1 toModel:(id)arg2;
- (void)parseRichText:(const struct RichText *)arg1 toModel:(id)arg2;
- (id)peekPttContent:(const struct Ptt *)arg1 msgType:(int *)arg2;
- (id)parseNotOnlineImage:(const struct NotOnlineImage *)arg1 isMultiMsgPackMsg:(_Bool)arg2;
- (void)_ftsHandleTroopMemFromMsg:(id)arg1 memUin:(id)arg2 memNick:(id)arg3 memRemark:(id)arg4;
- (_Bool)parseGroupInfo:(const struct GroupInfo *)arg1 toModel:(id)arg2;

@end
