//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol KeyControl <NSObject>
- (void)sendKeyCode:(unsigned long long)arg1 success:(void (^)(id))arg2 failure:(void (^)(NSError *))arg3;
- (void)homeWithSuccess:(void (^)(id))arg1 failure:(void (^)(NSError *))arg2;
- (void)backWithSuccess:(void (^)(id))arg1 failure:(void (^)(NSError *))arg2;
- (void)okWithSuccess:(void (^)(id))arg1 failure:(void (^)(NSError *))arg2;
- (void)rightWithSuccess:(void (^)(id))arg1 failure:(void (^)(NSError *))arg2;
- (void)leftWithSuccess:(void (^)(id))arg1 failure:(void (^)(NSError *))arg2;
- (void)downWithSuccess:(void (^)(id))arg1 failure:(void (^)(NSError *))arg2;
- (void)upWithSuccess:(void (^)(id))arg1 failure:(void (^)(NSError *))arg2;
- (int)keyControlPriority;
- (id <KeyControl>)keyControl;
@end

