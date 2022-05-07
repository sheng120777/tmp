```
from binance_key import api_key,secret_key
from datetime import datetime
import pandas as pd
import numpy as np
import pandas_ta as ta  
import ccxt
import time
import schedule
import plotly.graph_objects as go
import plotly as plt
import vectorbt as vbt
import warnings
```

```
warnings.simplefilter(action='ignore',category=FutureWarning)
pd.set_option("display.max_rows",50)
```

```
df=pd.read_csv("tutorial2.csv")
```

```
df['ema']=round(ta.ema(df['close'],length=200),2)
```

```
warnings.simplefilter(action='ignore',category=FutureWarning)
```

```
result=[]
def parameter_test():
    entries=df.apply(lambda x:(x['close']>x['ema']),axis=1)
    exits=df.apply(lambda x:(x['close']<x['ema']),axis=1)
    pf=vbt.Portfolio.from_signals(df['close'],entries=entries,exits=exits,init_cash=10000,fees=0.001)
    return pf
```

```
pf=parameter_test()
```


```
pf.stats()
```


```
fig=go.Figure(data=[
                    go.Candlestick(x=df['OpenTime'],
                                   open=df['open'],
                                   high=df['high'],
                                   low=df['low'],
                                   close=df['close'],
                                   name='K lines'),    

                    go.Scatter    (x=df['OpenTime'], 
                                   y=df['ema'], 
                                   line=dict(color='orange',width=2),
                                   name="200 MA"),       
                    ]               
              )           
fig.update_layout(xaxis_rangeslider_visible=False,
                  title="BTC 4 hour klines",
                  xaxis_title="time",
                  yaxis_title="price",
                  legend_title="")
fig.show()
```
