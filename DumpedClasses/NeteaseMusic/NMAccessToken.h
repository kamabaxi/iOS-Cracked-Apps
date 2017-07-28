//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface NMAccessToken : NSObject
{
    NSString *_accessToken;
    NSNumber *_expiresIn;
    NSString *_uid;
    NSString *_refreshToken;
    NSNumber *_bindTime;
    NSString *_nickname;
    NSString *_openId;
}

@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSNumber *bindTime; // @synthesize bindTime=_bindTime;
@property(retain, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSNumber *expiresIn; // @synthesize expiresIn=_expiresIn;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;
- (id)proxyForJson;
- (id)initWithDictionary:(id)arg1 type:(long long)arg2;
- (void)fillWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
