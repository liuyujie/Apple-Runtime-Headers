//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface MSVSystemDialogResponse : NSObject
{
    long long _buttonIdentifier;
    NSArray *_textFieldValues;
}

@property(readonly, nonatomic) NSArray *textFieldValues; // @synthesize textFieldValues=_textFieldValues;
@property(readonly, nonatomic) long long buttonIdentifier; // @synthesize buttonIdentifier=_buttonIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(long long)arg1 textFieldValues:(id)arg2;

@end
