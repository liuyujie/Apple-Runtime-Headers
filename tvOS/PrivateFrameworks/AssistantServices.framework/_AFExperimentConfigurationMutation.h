//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFExperimentConfigurationMutating.h"

@class AFExperimentConfiguration, AFExperimentGroup, NSArray, NSString;

@interface _AFExperimentConfigurationMutation : NSObject <AFExperimentConfigurationMutating>
{
    AFExperimentConfiguration *_baseModel;
    long long _type;
    NSString *_identifier;
    NSString *_version;
    AFExperimentGroup *_controlGroup;
    NSArray *_experimentGroups;
    NSString *_salt;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasType:1;
        unsigned int hasIdentifier:1;
        unsigned int hasVersion:1;
        unsigned int hasControlGroup:1;
        unsigned int hasExperimentGroups:1;
        unsigned int hasSalt:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setSalt:(id)arg1;
- (void)setExperimentGroups:(id)arg1;
- (void)setControlGroup:(id)arg1;
- (void)setVersion:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setType:(long long)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

