//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Mobike_Model.h"

#import "NSCoding.h"

@class NSString;

@interface MPLConig : Mobike_Model <NSCoding>
{
    NSString *_icon;
    NSString *_mplTitle;
    NSString *_mplDes;
    NSString *_mplDetailUrl;
}

@property(retain) NSString *mplDetailUrl; // @synthesize mplDetailUrl=_mplDetailUrl;
@property(retain) NSString *mplDes; // @synthesize mplDes=_mplDes;
@property(retain) NSString *mplTitle; // @synthesize mplTitle=_mplTitle;
@property(retain) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)initWithInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
