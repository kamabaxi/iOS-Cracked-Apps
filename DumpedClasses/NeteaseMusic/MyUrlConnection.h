//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLConnection.h"

@class NSMutableData;

@interface MyUrlConnection : NSURLConnection
{
    int flag;
    id obID;
    NSMutableData *responseData;
    long long statusCode;
}

+ (id)packMultiPartRequestWithUrl:(id)arg1 params:(id)arg2 fileDataName:(id)arg3 fileData:(id)arg4;
+ (id)genFormData:(id)arg1 boundary:(id)arg2;
+ (id)GenBoundary;
+ (id)createYoudaoMultiPartRequestWithUrl:(id)arg1 params:(id)arg2 fileData:(id)arg3;
+ (id)createMultiPartRequestWithUrl:(id)arg1 params:(id)arg2 picData:(id)arg3 picName:(id)arg4;
+ (id)createConnection:(id)arg1 delegate:(id)arg2;
@property(nonatomic) long long statusCode; // @synthesize statusCode;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData;
@property(nonatomic) id obID; // @synthesize obID;
@property(nonatomic) int flag; // @synthesize flag;
- (void).cxx_destruct;
- (id)stringUrlEncoded:(id)arg1;
- (_Bool)onReceiveData:(id)arg1;

@end
