//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, QiXiuAnchorItem;

@interface QiXiuRoomGuardModel : NSObject
{
    NSString *_addTime;
    NSString *_entityId;
    NSString *_entityName;
    long long _exp;
    NSString *_expireTime;
    long long _guardLevel;
    NSString *_userId;
    QiXiuAnchorItem *_userInfo;
}

+ (id)qixiu_modelWithDictionary:(id)arg1;
@property(retain, nonatomic) QiXiuAnchorItem *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) long long guardLevel; // @synthesize guardLevel=_guardLevel;
@property(copy, nonatomic) NSString *expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) long long exp; // @synthesize exp=_exp;
@property(copy, nonatomic) NSString *entityName; // @synthesize entityName=_entityName;
@property(copy, nonatomic) NSString *entityId; // @synthesize entityId=_entityId;
@property(copy, nonatomic) NSString *addTime; // @synthesize addTime=_addTime;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

