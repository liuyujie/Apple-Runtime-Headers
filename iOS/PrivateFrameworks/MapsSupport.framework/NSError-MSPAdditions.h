//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface NSError (MSPAdditions)
@property(readonly) _Bool _maps_isFileNotFoundError;
@property(readonly) _Bool _maps_isCloudKitTokenExpirationError;
@property(readonly) _Bool _maps_isCloudKitErrorContainingNotFoundMarkersOnly;
- (_Bool)_maps_isCloudKitErrorWithCode:(long long)arg1 partialErrorsPolicy:(long long)arg2;
@end

