//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CARAutomaticDNDStatus;

@interface CARDNDUtility : NSObject
{
    CARAutomaticDNDStatus *_DNDStatus;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CARAutomaticDNDStatus *DNDStatus; // @synthesize DNDStatus=_DNDStatus;
- (void).cxx_destruct;
- (id)outputFromRhodesUtility;

@end
