//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

@interface MCConferenceRoomDisplayPayload : MCPayload
{
    NSString *_customMessage;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(readonly, copy, nonatomic) NSString *customMessage; // @synthesize customMessage=_customMessage;
- (void).cxx_destruct;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)configuration;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

