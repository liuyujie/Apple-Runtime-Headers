//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CTCellularPlan, CTUserLabel, NSNumber, NSString, NSUUID;

@interface CTCellularPlanItem : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;
    NSString *_iccid;
    _Bool _shouldDisplayType;
    _Bool _shouldAutoSelectWhenInRange;
    _Bool _isSimStateValid;
    _Bool _shouldDisplay;
    _Bool _shouldAppearDisabled;
    _Bool _isActiveDataPlan;
    _Bool _isDefaultVoice;
    _Bool _isSelectable;
    NSString *_label;
    CTCellularPlan *_plan;
    int _type;
    int _lockState;
    NSString *_uuid;
    NSString *_phoneNumber;
    CTUserLabel *_userLabel;
    NSNumber *_isSelectedOverride;
    NSUUID *_companionSlotUuid;
    NSString *_companionSimLabelId;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *companionSimLabelId; // @synthesize companionSimLabelId=_companionSimLabelId;
@property(copy, nonatomic) NSUUID *companionSlotUuid; // @synthesize companionSlotUuid=_companionSlotUuid;
@property(nonatomic) _Bool isSelectable; // @synthesize isSelectable=_isSelectable;
@property(retain, nonatomic) NSNumber *isSelectedOverride; // @synthesize isSelectedOverride=_isSelectedOverride;
@property(nonatomic) CTUserLabel *userLabel; // @synthesize userLabel=_userLabel;
@property(nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) _Bool isDefaultVoice; // @synthesize isDefaultVoice=_isDefaultVoice;
@property(nonatomic) _Bool isActiveDataPlan; // @synthesize isActiveDataPlan=_isActiveDataPlan;
@property(nonatomic) _Bool shouldAppearDisabled; // @synthesize shouldAppearDisabled=_shouldAppearDisabled;
@property(readonly, nonatomic) _Bool shouldDisplay; // @synthesize shouldDisplay=_shouldDisplay;
@property(nonatomic) _Bool isSimStateValid; // @synthesize isSimStateValid=_isSimStateValid;
@property(nonatomic) _Bool shouldAutoSelectWhenInRange; // @synthesize shouldAutoSelectWhenInRange=_shouldAutoSelectWhenInRange;
@property(nonatomic) _Bool shouldDisplayType; // @synthesize shouldDisplayType=_shouldDisplayType;
@property(nonatomic) int lockState; // @synthesize lockState=_lockState;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) CTCellularPlan *plan; // @synthesize plan=_plan;
@property(nonatomic) NSString *label; // @synthesize label=_label;
- (void)dealloc;
- (id)description;
- (id)typeAsString:(long)arg1;
@property(readonly, nonatomic) NSString *carrierName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *iccid;
@property(readonly, nonatomic) _Bool isInstalling;
@property(readonly, nonatomic) _Bool isSelected;
@property(readonly, nonatomic) _Bool isBackedByCellularPlan;
- (int)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIccid:(id)arg1 uuid:(id)arg2 name:(id)arg3 phoneNumber:(id)arg4 label:(id)arg5;
- (id)initWithCellularPlan:(id)arg1 uuid:(id)arg2 type:(int)arg3 phoneNumber:(id)arg4 label:(id)arg5;
- (id)initWithCellularPlan:(id)arg1 uuid:(id)arg2;
- (id)initWithCellularPlan:(id)arg1 uuid:(id)arg2 iccid:(id)arg3 name:(id)arg4 type:(int)arg5 phoneNumber:(id)arg6 label:(id)arg7;

@end

