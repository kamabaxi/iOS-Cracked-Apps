//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSString;

@interface GWUserTagsModel : GWObject
{
    _Bool _isSelected;
    _Bool _isRadio;
    NSString *_labelid;
    NSString *_name;
    NSString *_pinyin;
    NSString *_type;
    NSString *_typeName;
}

@property(nonatomic) _Bool isRadio; // @synthesize isRadio=_isRadio;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *pinyin; // @synthesize pinyin=_pinyin;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *labelid; // @synthesize labelid=_labelid;
- (void).cxx_destruct;

@end
