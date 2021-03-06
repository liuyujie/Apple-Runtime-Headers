//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NRMutableStateObserverProtocol.h"
#import "NRMutableStateParentProtocol.h"
#import "NSCopying.h"
#import "NSObject.h"
#import "NSSecureCoding.h"

@protocol NRMutableStateProtocol <NSObject, NSSecureCoding, NSCopying, NRMutableStateObserverProtocol, NRMutableStateParentProtocol>
+ (id <NRDiffProtocol>)diffFrom:(id <NRMutableStateProtocol>)arg1 to:(id <NRMutableStateProtocol>)arg2;
- (id <NRDiffProtocol>)applyDiff:(id <NRDiffProtocol>)arg1 upOnly:(_Bool)arg2 notifyParent:(_Bool)arg3 unconditional:(_Bool)arg4;
- (id <NRDiffProtocol>)applyDiff:(id <NRDiffProtocol>)arg1;
@end

