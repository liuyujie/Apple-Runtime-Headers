//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _TVProcessInfo : NSObject
{
    _Bool _hasPrivateEntitlement;
    _Bool _hasiTunesAPIEntitlement;
    struct __SecTask *_currentTask;
}

+ (id)currentProcessInfo;
@property(nonatomic) struct __SecTask *currentTask; // @synthesize currentTask=_currentTask;
@property(readonly, nonatomic) _Bool hasiTunesAPIEntitlement; // @synthesize hasiTunesAPIEntitlement=_hasiTunesAPIEntitlement;
@property(readonly, nonatomic) _Bool hasPrivateEntitlement; // @synthesize hasPrivateEntitlement=_hasPrivateEntitlement;
- (_Bool)valueForEntitlement:(id)arg1 containsObject:(id)arg2;
- (_Bool)boolValueForEntitlement:(id)arg1;
- (id)valueForEntitlement:(id)arg1;
- (void)dealloc;
- (id)init;

@end

