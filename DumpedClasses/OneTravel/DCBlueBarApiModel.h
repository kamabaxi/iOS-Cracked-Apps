//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCBaseModel.h"

@class DCNoteInfoModel<Optional>, NSArray<Optional>, NSString<Optional>;

@interface DCBlueBarApiModel : DCBaseModel
{
    NSString<Optional> *_icon;
    NSString<Optional> *_delay;
    NSString<Optional> *_showtime;
    DCNoteInfoModel<Optional> *_title;
    DCNoteInfoModel<Optional> *_sub_title;
    NSArray<Optional> *_head_list;
    NSString<Optional> *_station_status;
    NSString<Optional> *_model_type;
    NSString<Optional> *_tip_id;
}

@property(copy, nonatomic) NSString<Optional> *tip_id; // @synthesize tip_id=_tip_id;
@property(copy, nonatomic) NSString<Optional> *model_type; // @synthesize model_type=_model_type;
@property(copy, nonatomic) NSString<Optional> *station_status; // @synthesize station_status=_station_status;
@property(copy, nonatomic) NSArray<Optional> *head_list; // @synthesize head_list=_head_list;
@property(copy, nonatomic) DCNoteInfoModel<Optional> *sub_title; // @synthesize sub_title=_sub_title;
@property(copy, nonatomic) DCNoteInfoModel<Optional> *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString<Optional> *showtime; // @synthesize showtime=_showtime;
@property(copy, nonatomic) NSString<Optional> *delay; // @synthesize delay=_delay;
@property(copy, nonatomic) NSString<Optional> *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;

@end

