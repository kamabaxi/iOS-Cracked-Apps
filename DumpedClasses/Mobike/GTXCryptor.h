//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSObject<OS_dispatch_queue>, NSRecursiveLock;

@interface GTXCryptor : NSObject
{
    _Bool _initialized;
    NSRecursiveLock *_lock;
    NSData *_errorData;
    NSObject<OS_dispatch_queue> *_cryptoQueue;
    NSData *_AESKey;
    NSData *_RSAKey;
}

+ (id)RSAEncryptedAESKey;
+ (id)RSAEnc:(id)arg1;
+ (id)AESEnc:(id)arg1;
+ (void)setPublicKey:(id)arg1;
+ (id)instance;
@property _Bool initialized; // @synthesize initialized=_initialized;
@property(retain, nonatomic) NSData *RSAKey; // @synthesize RSAKey=_RSAKey;
@property(retain, nonatomic) NSData *AESKey; // @synthesize AESKey=_AESKey;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cryptoQueue; // @synthesize cryptoQueue=_cryptoQueue;
@property(retain, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void).cxx_destruct;
- (id)stripPublicKeyHeader:(id)arg1;
- (id)innerAESEnc:(id)arg1;
- (id)innerRSAEnc:(id)arg1;
- (_Bool)initPublicKey;
- (id)generateAESKey:(id)arg1 salt:(id)arg2;
- (id)init;

@end
