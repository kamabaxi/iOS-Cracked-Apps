//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAUpRequest.h"

@interface FAUpRequestC2C : FAUpRequest
{
}

- (const char *)makeReqBody:(struct CPBMessageEncoder *)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (_Bool)onRspApplyUp:(const basic_string_075b6133 *)arg1;
- (void)internalRequest;
- (id)init:(int)arg1 fileInfo:(id)arg2;

@end

