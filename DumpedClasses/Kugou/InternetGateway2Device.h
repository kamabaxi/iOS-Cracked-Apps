//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BasicUPnPDevice.h"

@class BasicUPnPService, SoapActionsLayer3Forwarding1;

@interface InternetGateway2Device : BasicUPnPDevice
{
    SoapActionsLayer3Forwarding1 *mLayer3Forwarding;
}

@property(readonly, nonatomic) BasicUPnPService *layer3ForwardingService;
@property(readonly, nonatomic) SoapActionsLayer3Forwarding1 *layer3Forwarding;
- (void)dealloc;

@end
