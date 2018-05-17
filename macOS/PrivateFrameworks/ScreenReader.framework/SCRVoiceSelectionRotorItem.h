//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SCRVoiceSelectionRotorItem : NSObject
{
    BOOL _hasBeenSelected;
    NSString *_voiceIdentifier;
    NSString *_shortVoiceName;
    NSString *_voiceLanguage;
}

@property(nonatomic) BOOL hasBeenSelected; // @synthesize hasBeenSelected=_hasBeenSelected;
@property(copy, nonatomic) NSString *voiceLanguage; // @synthesize voiceLanguage=_voiceLanguage;
@property(copy, nonatomic) NSString *shortVoiceName; // @synthesize shortVoiceName=_shortVoiceName;
@property(copy, nonatomic) NSString *voiceIdentifier; // @synthesize voiceIdentifier=_voiceIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithVoiceIdentifier:(id)arg1 shortVoiceName:(id)arg2 voiceLanguage:(id)arg3 hasBeenSelected:(BOOL)arg4;

@end
