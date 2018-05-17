//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CTCellularPlan, NSNumber, NSString;

@interface CTCellularPlanItem : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;
    NSString *_iccid;
    _Bool _shouldDisplayType;
    _Bool _shouldAutoSelectWhenInRange;
    _Bool _isSimStateValid;
    _Bool _shouldDisplay;
    _Bool _shouldAppearDisabled;
    _Bool _isSelectable;
    CTCellularPlan *_plan;
    int _type;
    int _lockState;
    NSNumber *_isSelectedOverride;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isSelectable; // @synthesize isSelectable=_isSelectable;
@property(retain, nonatomic) NSNumber *isSelectedOverride; // @synthesize isSelectedOverride=_isSelectedOverride;
@property(nonatomic) _Bool shouldAppearDisabled; // @synthesize shouldAppearDisabled=_shouldAppearDisabled;
@property(readonly, nonatomic) _Bool shouldDisplay; // @synthesize shouldDisplay=_shouldDisplay;
@property(nonatomic) _Bool isSimStateValid; // @synthesize isSimStateValid=_isSimStateValid;
@property(nonatomic) _Bool shouldAutoSelectWhenInRange; // @synthesize shouldAutoSelectWhenInRange=_shouldAutoSelectWhenInRange;
@property(nonatomic) _Bool shouldDisplayType; // @synthesize shouldDisplayType=_shouldDisplayType;
@property(nonatomic) int lockState; // @synthesize lockState=_lockState;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) CTCellularPlan *plan; // @synthesize plan=_plan;
- (void)dealloc;
- (id)description;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *iccid;
@property(readonly, nonatomic) _Bool isSelected;
@property(readonly, nonatomic) _Bool isBackedByCellularPlan;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIccid:(id)arg1 name:(id)arg2;
- (id)initWithCellularPlan:(id)arg1 type:(int)arg2;
- (id)initWithCellularPlan:(id)arg1;
- (id)initWithCellularPlan:(id)arg1 iccid:(id)arg2 name:(id)arg3 type:(int)arg4;

@end
