//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSThread, PLCrashReporter;

@interface TBCrashDeadlockMonitor : NSObject
{
    _Bool _awaitingResponse;
    double _watchdogInterval;
    _Bool _running;
    unsigned int _mainThread;
    id <TBCrashDeadlockMonitorDelegate> _delegate;
    unsigned long long _currentDeadLockTraceHash;
    NSThread *_monitorThread;
    PLCrashReporter *_crashReporter;
}

+ (id)sharedMonitor;
@property(nonatomic) unsigned int mainThread; // @synthesize mainThread=_mainThread;
@property(nonatomic) PLCrashReporter *crashReporter; // @synthesize crashReporter=_crashReporter;
@property(retain, nonatomic) NSThread *monitorThread; // @synthesize monitorThread=_monitorThread;
@property(nonatomic) unsigned long long currentDeadLockTraceHash; // @synthesize currentDeadLockTraceHash=_currentDeadLockTraceHash;
@property(nonatomic) id <TBCrashDeadlockMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)runMonitor;
- (void)handleDeadlock;
- (void)watchdogAnswer;
- (void)watchdogPulse;
- (void)cancel;
- (void)setWatchdogInterval:(double)arg1;
- (void)stopDeallockMonitor;
- (void)startDeadlockMonitor;
- (id)init;

@end
