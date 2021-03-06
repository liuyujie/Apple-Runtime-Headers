//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface ICCollaborationColorManager : NSObject
{
    NSMutableDictionary *_userIDToColorsDict;
}

@property(retain, nonatomic) NSMutableDictionary *userIDToColorsDict; // @synthesize userIDToColorsDict=_userIDToColorsDict;
- (void).cxx_destruct;
- (id)participantAXDisplayNameForUserID:(id)arg1 forNote:(id)arg2;
- (id)containerScopedUserRecordName;
- (id)baseColorValuesForUserID:(id)arg1;
- (struct NSColor *)highlightColorForUserID:(id)arg1 withPercentage:(double)arg2 forNote:(id)arg3 darkAppearance:(BOOL)arg4;
- (id)init;

@end

