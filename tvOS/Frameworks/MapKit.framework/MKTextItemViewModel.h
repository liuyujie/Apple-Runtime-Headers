//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface MKTextItemViewModel : NSObject
{
    NSArray *_values;
}

@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (void).cxx_destruct;
- (id)stringsForRowAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfRows;
- (id)initWithTextItemContainer:(id)arg1 labelsFont:(id)arg2 labelsSpacing:(double)arg3 maxWidth:(double)arg4;

@end
