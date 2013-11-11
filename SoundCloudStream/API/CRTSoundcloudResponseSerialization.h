//
//  CRTSoundcloudResponseSerialization.h
//  SoundCloudStream
//
//  Created by Nikolay Kasyanov on 11.11.13.
//  Copyright (c) 2013 Nikolay Kasyanov. All rights reserved.
//

#import "AFURLResponseSerialization.h"

@interface CRTSoundcloudResponseSerialization : AFJSONResponseSerializer

- (instancetype)initWithPathMapping:(NSDictionary *)mapping;

@end
